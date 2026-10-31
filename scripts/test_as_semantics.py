"""影响游戏计算的 AS3 语言语义回归。期望值独立于生成实现。"""
from pathlib import Path
import math
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parent))
import as2py
import as_runtime as R
from client_repairs import repair_load_read


def compiled(body):
    source = 'package { public class Probe { ' + body + ' } }'
    parsed = as2py.parse_file(source)
    code, errors, _ = as2py.build_module([('Probe.as', parsed)], as2py.BUILTIN_NAMES)
    if errors:
        raise AssertionError(errors)
    ns = R.make_namespace()
    exec(code, ns)
    errors = ns['_static_init']()
    if errors:
        raise AssertionError(errors)
    return ns['Probe']()


class SemanticsTests(unittest.TestCase):
    def test_array_and_object_are_true_even_empty(self):
        p = compiled('public function f():Boolean { return [] && {}; }')
        self.assertIs(p.f(), True)

    def test_empty_array_short_circuit(self):
        p = compiled('public function f():* { return [] || 5; }')
        self.assertIsInstance(p.f(), R.Arr)

    def test_object_equality_is_identity(self):
        p = compiled('public function f():Boolean { return {} == {}; }')
        self.assertIs(p.f(), False)

    def test_numeric_string_equality(self):
        p = compiled('public function f():Boolean { return 0 == "0"; }')
        self.assertIs(p.f(), True)

    def test_strict_equality_distinguishes_boolean(self):
        p = compiled('public function f():Boolean { return true === 1; }')
        self.assertIs(p.f(), False)

    def test_undefined_and_null(self):
        p = compiled('public function f():Boolean { return undefined === null; }')
        self.assertIs(p.f(), False)

    def test_typed_uint_parameter(self):
        p = compiled('public function f(n:uint):Number { return n; }')
        self.assertEqual(p.f(-1), 4294967295)

    def test_number_uses_double_precision(self):
        p = compiled('public function f():Number { var n:Number = 9007199254740992; n += 1; return n; }')
        self.assertEqual(p.f(), 9007199254740992)

    def test_missing_number_parameter_is_nan(self):
        p = compiled('public function f(n:Number):Number { return n; }')
        self.assertTrue(math.isnan(p.f()))

    def test_int_instance_slot_wraps(self):
        p = compiled('public var n:int=2147483647; public function f():Number { n += 1; return n; }')
        self.assertEqual(p.f(), -2147483648)

    def test_uint_static_slot_wraps(self):
        p = compiled('public static var n:uint=0; public function f():Number { Probe.n -= 1; return Probe.n; }')
        self.assertEqual(p.f(), 4294967295)

    def test_default_in_middle_falls_through(self):
        p = compiled('public function f(n:int):int { var v:int=0; switch(n) { case 0: v=9; break; default: v=1; case 1: v+=2; } return v; }')
        self.assertEqual([p.f(i) for i in (0, 1, 2)], [9, 2, 3])

    def test_date_properties_and_utc_rollover(self):
        d = R.Date(R.Date.UTC(2026, 9, 27, 13, 25, 30))
        self.assertEqual((d.fullYearUTC, d.monthUTC, d.dateUTC, d.dayUTC, d.hoursUTC), (2026, 9, 27, 2, 13))
        d.time -= 60000
        self.assertEqual(d.time, R.Date.UTC(2026, 9, 27, 13, 24, 30))
        self.assertEqual(R.Date.UTC(2026, 12, 0), R.Date.UTC(2026, 11, 31))
        self.assertEqual(R.Date(2026, 9, 27).getHours(), 0)

    def test_reference_vector_starts_with_null(self):
        p = compiled('public function f():Boolean { var a:Vector.<Object> = new Vector.<Object>(3); return a[0] === null; }')
        self.assertTrue(p.f())

    def test_uint_vector_coerces_assignment(self):
        p = compiled('public function f():Number { var a:Vector.<uint> = new Vector.<uint>(1); a[0] = -1; return a[0]; }')
        self.assertEqual(p.f(), 4294967295)

    def test_bytearray_writes_low_eight_bits(self):
        a = R.ByteArray()
        for value in (-1, -128, -129, 128, 255, 256, 511):
            a.writeByte(value)
        self.assertEqual(bytes(a.data), bytes([255, 128, 127, 128, 255, 0, 255]))

    def test_repair_requires_bytecode_and_keeps_stream_read(self):
        pcode = '''method
name "load"
returns null
body
code
getlocal 33
pushbyte 9
ifnge ofs15bc
getlex QName(PackageNamespace(""),"Math")
getlocal 60
callproperty QName(PackageNamespace(""),"readUnsignedShort"), 0
pushshort 360
callproperty QName(PackageNamespace(""),"min"), 2
pop
returnvoid
end ; code'''
        source = '            §8G§.§3s§ = _loc33_ >= 9 ? Math.max(0,_loc60_.readByte()) : 0;'
        with tempfile.TemporaryDirectory() as folder:
            Path(folder, '§8G§.pcode').write_text(pcode, encoding='utf-8')
            repaired, evidence = repair_load_read(source, folder)
            self.assertTrue(evidence['applied'])
            self.assertIn('_loc60_.readUnsignedShort(),360', repaired)
            twice, evidence2 = repair_load_read(repaired, folder)
            self.assertEqual(twice, repaired)
            self.assertFalse(evidence2['applied'])
            Path(folder, '§8G§.pcode').write_text(pcode.replace('pushshort 360', 'pushshort 999'), encoding='utf-8')
            with self.assertRaises(ValueError):
                repair_load_read(source, folder)
            # 没有 `>= 9` 版本判断时，插入的条件缺少字节码依据，也必须停止。
            Path(folder, '§8G§.pcode').write_text(pcode.replace('pushbyte 9', 'pushbyte 10'), encoding='utf-8')
            with self.assertRaises(ValueError):
                repair_load_read(source, folder)


if __name__ == '__main__':
    unittest.main()
