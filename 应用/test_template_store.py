"""Exercise real AMF references and preservation using isolated copies only."""
import tempfile
import unittest
from pathlib import Path
from template_store import Reader, add_template, string


def fixture():
    # Both root categories share AMF strings/traits, as the game does.
    payload = (string('mercenary') + b'\x09\x01' + string('First') + b'\x0a\x0b\x01'
               + string('text') + b'\x06\x02' + string('tp') + b'\x06' + string('FR1') + b'\x01\x01\x00'
               + string('research') + b'\x09\x01' + string('Second') + b'\x0a\x01'
               + b'\x04\x06\x0c\x06\x06' + string('S30') + b'\x01\x01\x00')
    data = b'\x00\xbf\x00\x00\x00\x00TCSO\x00\x04\x00\x00\x00\x00\x00\x05rg-tp\x00\x00\x00\x03' + payload
    return data[:2] + (len(data)-6).to_bytes(4, 'big') + data[6:]


class TemplateTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.path = Path(self.temp.name) / 'rg-tp.sol'
        self.original = fixture()
        self.path.write_bytes(self.original)

    def test_references(self):
        data = Reader(self.original).read()
        self.assertEqual(data['research']['Second'], {'text': 'Second', 'tp': 'S30'})

    def test_add_both_categories_preserves_all_and_backup(self):
        before = Reader(self.original).read()
        for cat, code in [('mercenary', 'AN1,SP:God\'s Hand'), ('research', 'S50,C80')]:
            result = add_template(cat, '中文测试', code, self.path)
            self.assertEqual(result['status'], 'added')
        after = Reader(self.path.read_bytes()).read()
        for cat in before:
            for name, entry in before[cat].items():
                self.assertEqual(after[cat][name], entry)
            self.assertIn('中文测试', after[cat])
        backups = sorted((self.path.parent / 'RGA-template-backups').glob('*.sol'))
        self.assertEqual(backups[0].read_bytes(), self.original)
        self.assertEqual(len(backups), 2)

    def test_duplicate_no_write(self):
        result = add_template('research', 'Other', 'S30', self.path)
        self.assertEqual(result['status'], 'exists')
        self.assertEqual(self.path.read_bytes(), self.original)

    def test_collision_keeps_existing(self):
        result = add_template('research', 'Second', 'S50', self.path)
        self.assertEqual(result['name'], 'Second（2）')
        self.assertEqual(Reader(self.path.read_bytes()).read()['research']['Second']['tp'], 'S30')

    def test_corrupt_file_not_written(self):
        bad = self.original[:-1]
        self.path.write_bytes(bad)
        with self.assertRaises(ValueError):
            add_template('research', 'New', 'S50', self.path)
        self.assertEqual(self.path.read_bytes(), bad)

    def test_invalid_request_not_written(self):
        with self.assertRaises(ValueError):
            add_template('unknown', 'New', 'S50', self.path)
        self.assertEqual(self.path.read_bytes(), self.original)


if __name__ == '__main__':
    unittest.main()
