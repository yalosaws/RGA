// CPython 扩展 rgcore：原生计算引擎的 Python 接口（Python 侧封装见 scripts/rg_native.py）。
// 一个进程只有一份游戏（静态区是全局的）。
#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include "gen.h"
#include <unordered_map>
#include <unordered_set>
#include <chrono>

// 计时（rgcore.prof_enable(True) 打开）：按类别 / 游戏方法名统计次数和耗时
static bool PROF = false;
struct PStat { long long n = 0; double t = 0; };
static std::unordered_map<std::string, PStat> PSTATS;
static inline double now_s() { return std::chrono::duration<double>(std::chrono::steady_clock::now().time_since_epoch()).count(); }
struct PTimer {
    const char* cat; int id; double t0;
    PTimer(const char* c, int i) : cat(c), id(i), t0(PROF ? now_s() : 0) {}
    ~PTimer() {
        if (!PROF) return;
        std::string k = std::string(cat) + (id >= 0 ? std::string(" ") + rt::name_of(id) : "");
        auto& st = PSTATS[k]; st.n++; st.t += now_s() - t0;
    }
};

using namespace rt;

static PyObject* ErrAS;          // rgcore.ASError：游戏代码抛出的异常 / 运行时错误
static PyTypeObject RefType, BoundType, IterType;
static Value GAME = mknull();
static std::unordered_map<Obj*, PyObject*> PROXIES;   // 同一对象始终是同一个代理（id()、is、作字典键都能用）
static std::unordered_set<Obj*> SNAP_OBJS;            // 快照时已有的对象（恢复后其余代理作废）
static PyObject* NAME_CACHE = nullptr;                 // str -> 名字 id
static bool BOOTED = false;

struct Ref {
    PyObject_HEAD
    Value v;
    bool dead;
};
struct Bound {
    PyObject_HEAD
    Value self;
    int id;
};
struct It {
    PyObject_HEAD
    PyObject* list;
    Py_ssize_t i;
};

// ------------------------------------------------------------------ 转换
static PyObject* to_py(const Value& v);

static PyObject* str_to_py(const Str* s) {
    return PyUnicode_DecodeUTF16((const char*)s->c, (Py_ssize_t)s->len * 2, "surrogatepass", nullptr);
}

static PyObject* ref_of(Obj* o) {
    auto it = PROXIES.find(o);
    if (it != PROXIES.end()) {
        Py_INCREF(it->second);
        return it->second;
    }
    Ref* r = PyObject_New(Ref, &RefType);
    if (!r) return nullptr;
    r->v = VO(o);
    r->dead = false;
    PROXIES[o] = (PyObject*)r;
    Py_INCREF(r);   // 表里留一份引用：代理和对象同寿命
    return (PyObject*)r;
}

static PyObject* to_py(const Value& v) {
    switch (v.t) {
        case T_UNDEF: case T_NULL: Py_RETURN_NONE;
        case T_BOOL: return PyBool_FromLong(v.b);
        case T_NUM: {
            double d = v.n;
            if (d == std::trunc(d) && std::fabs(d) < 9007199254740992.0) return PyLong_FromLongLong((long long)d);
            return PyFloat_FromDouble(d);
        }
        case T_STR: return str_to_py(v.s);
        default: return ref_of(v.o);
    }
}

static bool from_py(PyObject* x, Value& out) {
    if (x == Py_None) { out = NUL; return true; }
    if (x == Py_True) { out = VB(true); return true; }
    if (x == Py_False) { out = VB(false); return true; }
    if (PyLong_Check(x)) {
        double d = PyLong_AsDouble(x);
        if (d == -1.0 && PyErr_Occurred()) return false;
        out = V(d);
        return true;
    }
    if (PyFloat_Check(x)) { out = V(PyFloat_AS_DOUBLE(x)); return true; }
    if (PyUnicode_Check(x)) {
        Py_ssize_t n;
        const char* u = PyUnicode_AsUTF8AndSize(x, &n);
        if (!u) return false;
        out = VS(str_utf8(std::string(u, (size_t)n)));
        return true;
    }
    if (Py_TYPE(x) == &RefType) {
        Ref* r = (Ref*)x;
        if (r->dead) { PyErr_SetString(PyExc_RuntimeError, "游戏对象已随快照恢复失效"); return false; }
        out = r->v;
        return true;
    }
    if (Py_TYPE(x) == &BoundType) {
        Bound* b = (Bound*)x;
        out = VO(new_bound(b->self, b->id));
        return true;
    }
    if (PyList_Check(x) || PyTuple_Check(x)) {
        PyObject* seq = PySequence_Fast(x, "");
        Py_ssize_t n = PySequence_Fast_GET_SIZE(seq);
        Arr* a = new_arr();
        for (Py_ssize_t i = 0; i < n; i++) {
            Value e;
            if (!from_py(PySequence_Fast_GET_ITEM(seq, i), e)) { Py_DECREF(seq); return false; }
            a->v.push_back(e);
        }
        Py_DECREF(seq);
        out = VO(a);
        return true;
    }
    if (PyDict_Check(x)) {
        Dict* d = new_dict();
        PyObject *k, *val;
        Py_ssize_t pos = 0;
        while (PyDict_Next(x, &pos, &k, &val)) {
            Value kk, vv;
            if (!from_py(k, kk) || !from_py(val, vv)) return false;
            d->set(kk, vv);
        }
        out = VO(d);
        return true;
    }
    PyErr_Format(PyExc_TypeError, "不能把 %s 传给游戏", Py_TYPE(x)->tp_name);
    return false;
}

static int name_of_py(PyObject* s) {
    PyObject* v = PyDict_GetItem(NAME_CACHE, s);
    if (v) return (int)PyLong_AsLong(v);
    const char* u = PyUnicode_AsUTF8(s);
    if (!u) return -2;
    int id = name_id(u);
    PyObject* iv = PyLong_FromLong(id);
    PyDict_SetItem(NAME_CACHE, s, iv);
    Py_DECREF(iv);
    return id;
}

// 运行游戏代码：C++ 异常转成 Python 异常
#define GUARD(expr_block, attr_err)                                                     \
    try {                                                                               \
        expr_block                                                                      \
    } catch (Thrown & t) {                                                              \
        PyErr_Format(ErrAS, "AS3 throw %s%s", to_utf8(tostr(t.v)).c_str(), trace_text().c_str()); \
        return nullptr;                                                                 \
    } catch (RtError & e) {                                                             \
        PyErr_SetString((attr_err) ? PyExc_AttributeError : ErrAS, e.msg.c_str());      \
        return nullptr;                                                                 \
    } catch (std::exception & e) {                                                      \
        PyErr_Format(ErrAS, "C++ %s", e.what());                                        \
        return nullptr;                                                                 \
    }

static bool args_from(PyObject* args, std::vector<Value>& out) {
    Py_ssize_t n = PyTuple_GET_SIZE(args);
    out.resize((size_t)n);
    for (Py_ssize_t i = 0; i < n; i++)
        if (!from_py(PyTuple_GET_ITEM(args, i), out[(size_t)i])) return false;
    return true;
}

// ------------------------------------------------------------------ Ref
static bool live(Ref* r) {
    if (r->dead) { PyErr_SetString(PyExc_RuntimeError, "游戏对象已随快照恢复失效"); return false; }
    return true;
}

static PyObject* ref_getattr(PyObject* self, PyObject* name) {
    Ref* r = (Ref*)self;
    Py_ssize_t ln;
    const char* nm = PyUnicode_AsUTF8AndSize(name, &ln);
    if (!nm) return nullptr;
    if (ln > 1 && nm[0] == '_' && nm[1] == '_') return PyObject_GenericGetAttr(self, name);
    if (!live(r)) return nullptr;
    int id = name_of_py(name);
    if (id < 0) return PyErr_Format(PyExc_AttributeError, "游戏里没有名字 %s", nm);
    PTimer _pt("get", PROF ? id : -1);
    Obj* o = r->v.o;
    // 实例方法 / 静态方法：返回轻量的绑定对象，不在内存池里建函数对象
    bool meth = false;
    if (o->ci->kind == K_INST) {
        Value tmp;
        meth = !(o->dyn && o->Obj::dget(id, tmp)) && o->dmeth(id);
    }
    else if (o->ci->kind == K_CLASSREF) {
        for (const ClassInfo* k = static_cast<ClassRef*>(o)->target; k; k = k->parent) {
            Value tmp;
            if (k->ref && k->ref->Obj::dget(id, tmp)) break;
            if (k->smeth && k->smeth(id)) { meth = true; break; }
            if (k->sget && k->sget(id, tmp)) break;
        }
    }
    if (meth) {
        Bound* b = PyObject_New(Bound, &BoundType);
        b->self = r->v;
        b->id = id;
        return (PyObject*)b;
    }
    GUARD({ return to_py(dget(r->v, id)); }, true)
}

static int ref_setattr(PyObject* self, PyObject* name, PyObject* val) {
    Ref* r = (Ref*)self;
    if (!live(r)) return -1;
    if (!val) { PyErr_SetString(PyExc_TypeError, "不能删除游戏属性"); return -1; }
    int id = name_of_py(name);
    if (id < 0) {
        PyErr_Format(PyExc_AttributeError, "游戏里没有名字 %s", PyUnicode_AsUTF8(name));
        return -1;
    }
    Value v;
    if (!from_py(val, v)) return -1;
    PTimer _pt("set", PROF ? id : -1);
    try {
        dset(r->v, id, v);
        return 0;
    } catch (Thrown& t) {
        PyErr_Format(ErrAS, "AS3 throw %s", to_utf8(tostr(t.v)).c_str());
    } catch (RtError& e) {
        PyErr_SetString(PyExc_AttributeError, e.msg.c_str());
    }
    return -1;
}

static PyObject* ref_call(PyObject* self, PyObject* args, PyObject*) {
    Ref* r = (Ref*)self;
    if (!live(r)) return nullptr;
    std::vector<Value> a;
    if (!args_from(args, a)) return nullptr;
    GUARD({ return to_py(call_value(r->v, a.data(), (int)a.size())); }, false)
}

static Py_ssize_t ref_len(PyObject* self) {
    Ref* r = (Ref*)self;
    if (!live(r)) return -1;
    try {
        return (Py_ssize_t)alen(r->v);
    } catch (...) {
        PyErr_SetString(PyExc_TypeError, "这个游戏对象没有长度");
        return -1;
    }
}

static PyObject* ref_getitem(PyObject* self, PyObject* key) {
    Ref* r = (Ref*)self;
    if (!live(r)) return nullptr;
    Value k;
    if (!from_py(key, k)) return nullptr;
    Kind kind = r->v.o->ci->kind;
    if ((kind == K_ARR || kind == K_VEC) && k.t == T_NUM) {
        auto& v = static_cast<Arr*>(r->v.o)->v;
        double i = k.n;
        if (i < 0) i += (double)v.size();
        if (!(i >= 0 && i < (double)v.size())) { PyErr_SetString(PyExc_IndexError, "下标越界"); return nullptr; }
        return to_py(v[(size_t)i]);
    }
    if (kind == K_DICT) {
        Value out;
        if (!static_cast<Dict*>(r->v.o)->get(k, out)) { PyErr_SetObject(PyExc_KeyError, key); return nullptr; }
        return to_py(out);
    }
    GUARD({ return to_py(idx_get(r->v, k)); }, false)
}

static int ref_setitem(PyObject* self, PyObject* key, PyObject* val) {
    Ref* r = (Ref*)self;
    if (!live(r)) return -1;
    if (!val) { PyErr_SetString(PyExc_TypeError, "不能删除"); return -1; }
    Value k, v;
    if (!from_py(key, k) || !from_py(val, v)) return -1;
    try {
        idx_set(r->v, k, v);
        return 0;
    } catch (...) {
        PyErr_SetString(ErrAS, "下标赋值失败");
        return -1;
    }
}

static PyObject* ref_iter(PyObject* self) {
    Ref* r = (Ref*)self;
    if (!live(r)) return nullptr;
    std::vector<Value> xs;
    Kind kind = r->v.o->ci->kind;
    if (kind == K_DICT) keys(r->v, xs); else each(r->v, xs);
    PyObject* list = PyList_New((Py_ssize_t)xs.size());
    for (size_t i = 0; i < xs.size(); i++) {
        PyObject* e = to_py(xs[i]);
        if (!e) { Py_DECREF(list); return nullptr; }
        PyList_SET_ITEM(list, (Py_ssize_t)i, e);
    }
    PyObject* it = PyObject_GetIter(list);
    Py_DECREF(list);
    return it;
}

static int ref_bool(PyObject* self) {
    Ref* r = (Ref*)self;
    if (r->dead) return 1;
    return T(r->v) ? 1 : 0;
}

static Py_hash_t ref_hash(PyObject* self) { return (Py_hash_t)(((uintptr_t)((Ref*)self)->v.o) >> 4); }

static PyObject* ref_repr(PyObject* self) {
    Ref* r = (Ref*)self;
    if (r->dead) return PyUnicode_FromString("<游戏对象（已失效）>");
    const char* cn = r->v.o->ci->name;
    if (r->v.o->ci->kind == K_CLASSREF) cn = static_cast<ClassRef*>(r->v.o)->target->name;
    return PyUnicode_FromFormat("<%s %s>", r->v.o->ci->kind == K_CLASSREF ? "类" : "游戏对象", cn);
}

static PyObject* ref_kind(PyObject* self, PyObject*) {
    Ref* r = (Ref*)self;
    if (!live(r)) return nullptr;
    const ClassInfo* c = r->v.o->ci;
    if (c->kind == K_CLASSREF) return Py_BuildValue("(ss)", "class", static_cast<ClassRef*>(r->v.o)->target->name);
    return Py_BuildValue("(ss)", c->kind == K_INST ? "inst" : "builtin", c->name);
}

static PyObject* ref_get(PyObject* self, PyObject* args) {
    // 字典的 get(key, default)
    PyObject *key, *dflt = Py_None;
    if (!PyArg_ParseTuple(args, "O|O", &key, &dflt)) return nullptr;
    Ref* r = (Ref*)self;
    if (!live(r)) return nullptr;
    Value k, out;
    if (!from_py(key, k)) return nullptr;
    if (r->v.o->ci->kind == K_DICT && static_cast<Dict*>(r->v.o)->get(k, out)) return to_py(out);
    Py_INCREF(dflt);
    return dflt;
}

static PyMethodDef ref_methods[] = {
    {"_rg_kind", ref_kind, METH_NOARGS, nullptr},
    {"get", ref_get, METH_VARARGS, nullptr},
    {nullptr, nullptr, 0, nullptr}};

static PyMappingMethods ref_mapping = {ref_len, ref_getitem, ref_setitem};
static PyNumberMethods ref_number;
static PySequenceMethods ref_seq;

static PyObject* ref_richcmp(PyObject* a, PyObject* b, int op) {
    if (op != Py_EQ && op != Py_NE) Py_RETURN_NOTIMPLEMENTED;
    bool same = Py_TYPE(b) == &RefType && ((Ref*)a)->v.o == ((Ref*)b)->v.o;
    if ((op == Py_EQ) == same) Py_RETURN_TRUE;
    Py_RETURN_FALSE;
}

// ------------------------------------------------------------------ Bound（绑定方法）
static PyObject* bound_call(PyObject* self, PyObject* args, PyObject*) {
    Bound* b = (Bound*)self;
    std::vector<Value> a;
    if (!args_from(args, a)) return nullptr;
    PTimer _pt("call", b->id);
    GUARD({ return to_py(dcall(b->self, b->id, a.data(), (int)a.size())); }, false)
}
static PyObject* bound_repr(PyObject* self) {
    return PyUnicode_FromFormat("<游戏方法 %s>", name_of(((Bound*)self)->id));
}

// ------------------------------------------------------------------ 模块函数
static void reset_proxies() {
    for (auto& kv : PROXIES) {
        ((Ref*)kv.second)->dead = true;
        Py_DECREF(kv.second);
    }
    PROXIES.clear();
}

static PyObject* m_boot(PyObject*, PyObject* args, PyObject* kw) {
    static const char* kws[] = {"save", "timestamp", "season", "event_cache", nullptr};
    const char* save;
    double ts;
    PyObject* season = Py_None;
    PyObject* cache = Py_None;
    if (!PyArg_ParseTupleAndKeywords(args, kw, "sd|OO", (char**)kws, &save, &ts, &season, &cache)) return nullptr;
    if (BOOTED) { PyErr_SetString(PyExc_RuntimeError, "一个进程只能启动一份游戏"); return nullptr; }
    BOOTED = true;
    std::vector<std::string> errs;
    try {
        rt_init();
        g::boot_init();
        SO_SAVE_TEXT = VS(str_utf8(save));
        CLOCK.timestamp = ts;
        CLOCK.timer_ms = 0;
        if (cache != Py_None) {
            Value c;
            if (!from_py(cache, c)) return nullptr;
            Value bs = dget(VO(g::C_S__3c__21_d::CI.ref), name_id("S__2b__21_J"));
            dset(bs, N_data, c);
        }
        g::static_init(errs);
        Value G = VO(g::C_S_8G::CI.ref);
        GAME = callv(G);
        dcallv(GAME, name_id("S__5b__21_C"));       // initialize
        g::HOOK_no_timewarp = true;                // 载入时不补算离线时间（同 make_game offline=False）
        dcallv(GAME, name_id("S__25_R"));           // load
        g::HOOK_no_timewarp = false;
        Value sv;
        if (!from_py(season, sv)) return nullptr;
        dcallv(VO(g::C_RgaHarness::CI.ref), name_id("afterLoad"), GAME, season == Py_None ? UNDEF : sv);
    } catch (Thrown& t) {
        return PyErr_Format(ErrAS, "启动失败：AS3 throw %s%s", to_utf8(tostr(t.v)).c_str(), trace_text().c_str());
    } catch (RtError& e) {
        return PyErr_Format(ErrAS, "启动失败：%s", e.msg.c_str());
    }
    PyObject* list = PyList_New(0);
    for (auto& e : errs) {
        PyObject* s = PyUnicode_FromString(e.c_str());
        PyList_Append(list, s);
        Py_DECREF(s);
    }
    return list;
}

static PyObject* m_game(PyObject*, PyObject*) { return to_py(GAME); }

static PyObject* m_cls(PyObject*, PyObject* args) {
    const char* name;
    if (!PyArg_ParseTuple(args, "s", &name)) return nullptr;
    extern const ClassInfo* find_class(const char*);
    const ClassInfo* c = find_class(name);
    if (!c) Py_RETURN_NONE;
    return to_py(VO(c->ref));
}

static PyObject* m_headless(PyObject*, PyObject*) { return to_py(VO(HEADLESS)); }
static PyObject* m_stub(PyObject*, PyObject*) { return to_py(VO(STUB)); }

static PyObject* m_ticks(PyObject*, PyObject* args) {
    // 推进 n 个 tick：每 tick 时钟前进 1/30 秒，调用 advanceTicks(k)（k 个 tick 一次推进时同游戏卡顿补帧）
    int n, k = 1;
    if (!PyArg_ParseTuple(args, "i|i", &n, &k)) return nullptr;
    auto* gp = static_cast<g::C_S_8G*>(GAME.o);
    PTimer _pt("ticks", -1);
    GUARD({
        int done = 0;
        while (done < n) {
            int s = std::min(k, n - done);
            CLOCK.timestamp += s * (1.0 / 30);
            CLOCK.timer_ms += 1000.0 * s * (1.0 / 30);
            gp->m_S__2d__21_R((uint32_t)s);
            done += s;
        }
        Py_RETURN_NONE;
    }, false)
}

static PyObject* m_clock(PyObject*, PyObject* args) {
    PyObject *ts = nullptr, *ms = nullptr;
    if (!PyArg_ParseTuple(args, "|OO", &ts, &ms)) return nullptr;
    if (ts && ts != Py_None) CLOCK.timestamp = PyFloat_AsDouble(ts);
    if (ms && ms != Py_None) CLOCK.timer_ms = PyFloat_AsDouble(ms);
    return Py_BuildValue("(dd)", CLOCK.timestamp, CLOCK.timer_ms);
}

static PyObject* m_rng_get(PyObject*, PyObject*) {
    // 和 random.getstate() 同格式：(3, (mt[0..623], mti), None)
    PyObject* t = PyTuple_New(625);
    for (int i = 0; i < 624; i++) PyTuple_SET_ITEM(t, i, PyLong_FromUnsignedLong(RNG.mt[i]));
    PyTuple_SET_ITEM(t, 624, PyLong_FromLong(RNG.mti));
    PyObject* r = Py_BuildValue("(iOO)", 3, t, Py_None);
    Py_DECREF(t);
    return r;
}

static PyObject* m_rng_set(PyObject*, PyObject* args) {
    PyObject* st;
    if (!PyArg_ParseTuple(args, "O", &st)) return nullptr;
    PyObject* t = PyTuple_GetItem(st, 1);
    if (!t || !PyTuple_Check(t) || PyTuple_GET_SIZE(t) != 625) {
        PyErr_SetString(PyExc_ValueError, "需要 random.getstate() 的结果");
        return nullptr;
    }
    for (int i = 0; i < 624; i++) RNG.mt[i] = (uint32_t)PyLong_AsUnsignedLong(PyTuple_GET_ITEM(t, i));
    RNG.mti = (int)PyLong_AsLong(PyTuple_GET_ITEM(t, 624));
    Py_RETURN_NONE;
}

static PyObject* m_snapshot(PyObject*, PyObject*) {
    W->snapshot();
    SNAP_OBJS.clear();
    SNAP_OBJS.insert(W->objs.begin(), W->objs.end());
    Py_RETURN_NONE;
}

static PyObject* m_restore(PyObject*, PyObject*) {
    GUARD({
        W->restore();
        // 快照之后才建的对象已经释放：它们的代理作废
        for (auto it = PROXIES.begin(); it != PROXIES.end();) {
            if (!SNAP_OBJS.count(it->first)) {
                ((Ref*)it->second)->dead = true;
                Py_DECREF(it->second);
                it = PROXIES.erase(it);
            } else ++it;
        }
        Py_RETURN_NONE;
    }, false)
}

static PyObject* m_hook(PyObject*, PyObject* args) {
    const char* name;
    int on;
    if (!PyArg_ParseTuple(args, "sp", &name, &on)) return nullptr;
    std::string n = name;
    if (n == "no_save") g::HOOK_no_save = on;
    else if (n == "no_timewarp") g::HOOK_no_timewarp = on;
    else { PyErr_SetString(PyExc_ValueError, "未知开关"); return nullptr; }
    Py_RETURN_NONE;
}

static PyObject* m_prof_enable(PyObject*, PyObject* args) {
    int on;
    if (!PyArg_ParseTuple(args, "p", &on)) return nullptr;
    PROF = on;
    Py_RETURN_NONE;
}
static PyObject* m_prof(PyObject*, PyObject*) {
    PyObject* d = PyDict_New();
    for (auto& kv : PSTATS) {
        PyObject* v = Py_BuildValue("(Ld)", kv.second.n, kv.second.t);
        PyDict_SetItemString(d, kv.first.c_str(), v);
        Py_DECREF(v);
    }
    PSTATS.clear();
    return d;
}

static PyObject* m_fnprof(PyObject*, PyObject*) {
    // 计时版：{函数: (次数, 自身时钟周期, 总时钟周期)}；普通版返回 None
#ifdef RT_PROF
    std::vector<std::pair<std::string, std::vector<double>>> rows;
    fnprof_dump(rows);
    PyObject* d = PyDict_New();
    for (auto& r : rows) {
        PyObject* v = Py_BuildValue("(ddd)", r.second[0], r.second[1], r.second[2]);
        PyDict_SetItemString(d, r.first.c_str(), v);
        Py_DECREF(v);
    }
    return d;
#else
    Py_RETURN_NONE;
#endif
}

static PyObject* m_stats(PyObject*, PyObject*) {
    return Py_BuildValue("{s:n,s:n}", "objects", (Py_ssize_t)W->objs.size(), "proxies", (Py_ssize_t)PROXIES.size());
}

static PyMethodDef methods[] = {
    {"boot", (PyCFunction)(void (*)(void))m_boot, METH_VARARGS | METH_KEYWORDS, "启动游戏、载入存档；返回静态初始化错误"},
    {"game", m_game, METH_NOARGS, "游戏实例"},
    {"cls", m_cls, METH_VARARGS, "按 Python 名取类"},
    {"headless", m_headless, METH_NOARGS, "界面替身"},
    {"stub", m_stub, METH_NOARGS, "STUB"},
    {"ticks", m_ticks, METH_VARARGS, "推进 n 个 tick"},
    {"clock", m_clock, METH_VARARGS, "读 / 设时钟 (timestamp, timer_ms)"},
    {"rng_get", m_rng_get, METH_NOARGS, nullptr},
    {"rng_set", m_rng_set, METH_VARARGS, nullptr},
    {"snapshot", m_snapshot, METH_NOARGS, nullptr},
    {"restore", m_restore, METH_NOARGS, nullptr},
    {"hook", m_hook, METH_VARARGS, nullptr},
    {"stats", m_stats, METH_NOARGS, nullptr},
    {"fnprof", m_fnprof, METH_NOARGS, "计时版：取出并清空每个游戏函数的耗时"},
    {"prof_enable", m_prof_enable, METH_VARARGS, "打开 / 关掉计时"},
    {"prof", m_prof, METH_NOARGS, "取出并清空计时：{类别 名字: (次数, 秒)}"},
    {nullptr, nullptr, 0, nullptr}};

static PyModuleDef moddef = {PyModuleDef_HEAD_INIT, "rgcore", "RGA 原生计算引擎", -1, methods};

PyMODINIT_FUNC PyInit_rgcore(void) {
    RefType.tp_name = "rgcore.Ref";
    RefType.tp_basicsize = sizeof(Ref);
    RefType.tp_flags = Py_TPFLAGS_DEFAULT;
    RefType.tp_getattro = ref_getattr;
    RefType.tp_setattro = ref_setattr;
    RefType.tp_call = ref_call;
    RefType.tp_as_mapping = &ref_mapping;
    ref_number.nb_bool = ref_bool;
    RefType.tp_as_number = &ref_number;
    ref_seq.sq_length = ref_len;
    RefType.tp_as_sequence = &ref_seq;
    RefType.tp_iter = ref_iter;
    RefType.tp_hash = ref_hash;
    RefType.tp_richcompare = ref_richcmp;
    RefType.tp_repr = ref_repr;
    RefType.tp_methods = ref_methods;
    RefType.tp_new = nullptr;
    BoundType.tp_name = "rgcore.Bound";
    BoundType.tp_basicsize = sizeof(Bound);
    BoundType.tp_flags = Py_TPFLAGS_DEFAULT;
    BoundType.tp_call = bound_call;
    BoundType.tp_repr = bound_repr;
    if (PyType_Ready(&RefType) < 0 || PyType_Ready(&BoundType) < 0) return nullptr;
    PyObject* m = PyModule_Create(&moddef);
    if (!m) return nullptr;
    ErrAS = PyErr_NewException("rgcore.ASError", PyExc_RuntimeError, nullptr);
    PyModule_AddObject(m, "ASError", ErrAS);
    Py_INCREF(&RefType);
    PyModule_AddObject(m, "Ref", (PyObject*)&RefType);
    NAME_CACHE = PyDict_New();
    return m;
}
