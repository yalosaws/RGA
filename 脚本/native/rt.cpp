// RGA 原生运行时实现。语义逐条对照 脚本/as_runtime.py。
#include "rt.h"
#include <algorithm>
#include <charconv>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <functional>
#include <memory>

namespace rt {

const Value UNDEF = mkundef();
const Value NUL = mknull();
World* W = nullptr;
MT RNG;
Clock CLOCK;
Value SO_SAVE_TEXT = mknull();
Obj* STUB = nullptr;
Obj* HEADLESS = nullptr;
Obj* NOOP = nullptr;
Obj* STUBCLASS = nullptr;

// ------------------------------------------------------------------ 错误
#ifdef RT_TRACE
thread_local FnTrace* FnTrace::top = nullptr;
std::string trace_text() {
    std::string r;
    for (FnTrace* t = FnTrace::top; t; t = t->prev) r += std::string(" <- ") + t->n;
    return r;
}
#else
std::string trace_text() { return ""; }
#endif
void fail(const std::string& msg) { throw RtError{msg + trace_text()}; }
void fail_null(int id) { fail(std::string("null.") + (id >= 0 ? name_of(id) : "?")); }
void fail_attr(Obj* o, int id) {
    fail(std::string(o && o->ci ? o->ci->name : "?") + " 没有属性 " + (id >= 0 ? name_of(id) : "?"));
}

// ------------------------------------------------------------------ 字符串
static const Str* mkstr(const char16_t* p, size_t n, bool perm) {
    size_t bytes = sizeof(Str) + (n ? n - 1 : 0) * 2;
    Str* s = (Str*)(perm || !W ? std::malloc(bytes) : W->alloc(bytes));
    s->len = (uint32_t)n;
    s->hash = 0;
    if (n) std::memcpy(s->c, p, n * 2);
    return s;
}
const Str* str_new(const char16_t* p, size_t n, bool permanent) { return mkstr(p, n, permanent); }
const Str* str_lit(const char16_t* p, size_t n) { return mkstr(p, n, true); }
const Str* EMPTY = str_lit(u"", 0);

const Str* str_ascii(const char* p) {
    std::u16string u;
    while (*p) u.push_back((unsigned char)*p++);
    return str_new(u.data(), u.size());
}
const Str* str_utf8(const std::string& s) {
    std::u16string u;
    size_t i = 0;
    while (i < s.size()) {
        uint32_t c = (unsigned char)s[i];
        int extra = 0;
        if (c >= 0xF0) { c &= 7; extra = 3; }
        else if (c >= 0xE0) { c &= 15; extra = 2; }
        else if (c >= 0xC0) { c &= 31; extra = 1; }
        i++;
        for (int k = 0; k < extra && i < s.size(); k++, i++) c = (c << 6) | ((unsigned char)s[i] & 63);
        if (c >= 0x10000) {
            c -= 0x10000;
            u.push_back((char16_t)(0xD800 + (c >> 10)));
            u.push_back((char16_t)(0xDC00 + (c & 1023)));
        } else u.push_back((char16_t)c);
    }
    return str_new(u.data(), u.size());
}
std::string to_utf8(const Str* s) {
    std::string out;
    if (!s) return out;
    for (uint32_t i = 0; i < s->len; i++) {
        uint32_t c = s->c[i];
        if (c >= 0xD800 && c < 0xDC00 && i + 1 < s->len) {
            c = 0x10000 + ((c - 0xD800) << 10) + (s->c[i + 1] - 0xDC00);
            i++;
        }
        if (c < 0x80) out.push_back((char)c);
        else if (c < 0x800) { out.push_back((char)(0xC0 | (c >> 6))); out.push_back((char)(0x80 | (c & 63))); }
        else if (c < 0x10000) {
            out.push_back((char)(0xE0 | (c >> 12)));
            out.push_back((char)(0x80 | ((c >> 6) & 63)));
            out.push_back((char)(0x80 | (c & 63)));
        } else {
            out.push_back((char)(0xF0 | (c >> 18)));
            out.push_back((char)(0x80 | ((c >> 12) & 63)));
            out.push_back((char)(0x80 | ((c >> 6) & 63)));
            out.push_back((char)(0x80 | (c & 63)));
        }
    }
    return out;
}
uint32_t str_hash(const Str* s) {
    if (s->hash) return s->hash;
    uint32_t h = 2166136261u;
    for (uint32_t i = 0; i < s->len; i++) { h ^= s->c[i]; h *= 16777619u; }
    if (!h) h = 1;
    const_cast<Str*>(s)->hash = h;
    return h;
}
int str_cmp(const Str* a, const Str* b) {
    uint32_t n = std::min(a->len, b->len);
    for (uint32_t i = 0; i < n; i++)
        if (a->c[i] != b->c[i]) return a->c[i] < b->c[i] ? -1 : 1;
    return a->len < b->len ? -1 : a->len > b->len ? 1 : 0;
}
const Str* str_cat(const Str* a, const Str* b) {
    if (!a->len) return b;
    if (!b->len) return a;
    std::u16string u(a->c, a->len);
    u.append(b->c, b->len);
    return str_new(u.data(), u.size());
}
static std::u16string U(const Str* s) { return s ? std::u16string(s->c, s->len) : std::u16string(); }
static const Str* S(const std::u16string& u) { return str_new(u.data(), u.size()); }
static const Str* SA(const std::string& a) {
    std::u16string u(a.begin(), a.end());
    return S(u);
}

// ------------------------------------------------------------------ 名字
static const char* BUILTIN_NAMES[NB_BUILTIN] = {
    "length", "push", "pop", "shift", "unshift", "splice", "slice", "concat", "indexOf", "lastIndexOf", "join",
    "reverse", "sort", "sortOn", "forEach", "map", "filter", "some", "every", "toString", "toFixed", "toPrecision",
    "toExponential", "valueOf", "substring", "substr", "charAt", "charCodeAt", "toUpperCase", "toLowerCase", "split",
    "replace", "match", "search", "localeCompare", "toLocaleString", "toLocaleUpperCase", "toLocaleLowerCase",
    "hasOwnProperty", "position", "bytesAvailable", "endian", "readByte", "readUnsignedByte", "readBoolean",
    "readShort", "readUnsignedShort", "readInt", "readUnsignedInt", "readDouble", "readFloat", "writeByte",
    "writeBoolean", "writeShort", "writeInt", "writeUnsignedInt", "writeDouble", "writeUTFBytes", "writeUTF",
    "writeBytes", "readBytes", "clear", "compress", "uncompress", "readUTFBytes", "readUTF", "time", "getTime",
    "getFullYear", "getMonth", "getDate", "getDay", "getHours", "getUTCFullYear", "getUTCMonth", "getUTCDate",
    "getUTCHours", "getUTCDay", "fullYear", "month", "date", "day", "hours", "fullYearUTC", "monthUTC", "dateUTC",
    "dayUTC", "hoursUTC", "constructor", "data", "flush", "close", "test", "exec", "call", "apply", "fixed",
    "getMinutes", "getSeconds", "getMilliseconds", "setTime", "message", "name", "lastIndex"};

static std::vector<const char*>& names() {
    static std::vector<const char*> v(BUILTIN_NAMES, BUILTIN_NAMES + NB_BUILTIN);
    return v;
}
static std::unordered_map<std::string, int>& name_map() {
    static std::unordered_map<std::string, int> m;
    if (m.empty())
        for (int i = 0; i < NB_BUILTIN; i++) m[BUILTIN_NAMES[i]] = i;
    return m;
}
static std::vector<const Str*>& name_strs() {
    static std::vector<const Str*> v;
    return v;
}
void register_names(const char* const* ns, int n) {
    auto& v = names();
    auto& m = name_map();
    for (int i = 0; i < n; i++) {
        m[ns[i]] = (int)v.size();
        v.push_back(ns[i]);
    }
}
int name_id(const char* s) {
    auto& m = name_map();
    auto it = m.find(s);
    return it == m.end() ? -1 : it->second;
}
int name_id_str(const Str* s) { return name_id(to_utf8(s).c_str()); }
const char* name_of(int id) { return id >= 0 && id < (int)names().size() ? names()[id] : "?"; }
const Str* name_str(int id) {
    auto& v = name_strs();
    if (v.size() < names().size()) v.resize(names().size(), nullptr);
    if (!v[id]) {
        std::string a = names()[id];
        std::u16string u(a.begin(), a.end());
        v[id] = str_lit(u.data(), u.size());
    }
    return v[id];
}

// ------------------------------------------------------------------ 类
static void base_ci(ClassInfo& c, const char* name, Kind k) {
    c.name = name;
    c.parent = nullptr;
    c.kind = k;
    c.stub_base = false;
    class_init(c);
}
ClassInfo CI_ARR, CI_VEC, CI_DICT, CI_FUNC, CI_CLASSREF, CI_BYTES, CI_DATE, CI_REGEXP, CI_ERROR, CI_STUBVAL,
    CI_STUBINST, CI_HEADLESS, CI_SO, CI_INST;
void class_init(ClassInfo& c) {
    c.depth = c.parent ? c.parent->depth + 1 : 0;
    if (c.depth >= 24) fail("继承层数太多");
    if (c.parent)
        for (int i = 0; i < c.depth; i++) c.anc[i] = c.parent->anc[i];
    c.anc[c.depth] = &c;
}
bool isa_slow(const Obj* o, const ClassInfo& c) {
    if (isa(o, c)) return true;
    for (const ClassInfo* k = o->ci; k; k = k->parent)
        if (k->impls)
            for (const ClassInfo* const* i = k->impls; *i; i++)
                if (*i == &c) return true;
    return false;
}
static struct InitCI {
    InitCI() {
        base_ci(CI_ARR, "Arr", K_ARR);
        base_ci(CI_VEC, "TypedVector", K_VEC);
        base_ci(CI_DICT, "Obj", K_DICT);
        base_ci(CI_FUNC, "function", K_FUNC);
        base_ci(CI_CLASSREF, "type", K_CLASSREF);
        base_ci(CI_BYTES, "ByteArray", K_BYTES);
        base_ci(CI_DATE, "Date", K_DATE);
        base_ci(CI_REGEXP, "RegExp_", K_REGEXP);
        base_ci(CI_ERROR, "ASError", K_ERROR);
        base_ci(CI_STUBVAL, "StubValue", K_STUBVAL);
        base_ci(CI_STUBINST, "Stub", K_STUBINST);
        base_ci(CI_HEADLESS, "Headless", K_HEADLESS);
        base_ci(CI_SO, "_SO", K_SO);
        base_ci(CI_INST, "AsObject", K_INST);
    }
} init_ci;

// ------------------------------------------------------------------ 内存池 + 快照
static const size_t CHUNK = 4 << 20;
struct Arena {
    std::vector<char*> chunks;
    size_t ci = 0, off = 0;
};
static Arena arena;
static size_t mark_ci = 0, mark_off = 0;
static std::vector<std::pair<void*, size_t>>& statics() {
    static std::vector<std::pair<void*, size_t>> v;
    return v;
}
void register_statics(void* p, size_t n) { statics().push_back({p, n}); }

void* World::alloc(size_t n) {
    n = (n + 15) & ~(size_t)15;
    if (n > CHUNK) return std::malloc(n);   // 不会出现
    if (arena.chunks.empty()) arena.chunks.push_back((char*)std::malloc(CHUNK));
    if (arena.off + n > CHUNK) {
        arena.ci++;
        arena.off = 0;
        if (arena.ci >= arena.chunks.size()) arena.chunks.push_back((char*)std::malloc(CHUNK));
    }
    char* p = arena.chunks[arena.ci] + arena.off;
    arena.off += n;
    return p;
}

void World::snapshot() {
    mark_objs = objs.size();
    mark_ci = arena.ci;
    mark_off = arena.off;
    obj_buf.clear();
    for (size_t i = 0; i < mark_objs; i++) objs[i]->snap_save(obj_buf);
    static_buf.clear();
    for (auto& s : statics()) static_buf.append((const char*)s.first, s.second);
    rng_buf.assign((const char*)&RNG, sizeof(RNG));
    rng_buf.append((const char*)&CLOCK, sizeof(CLOCK));
    has_snap = true;
}
void World::restore() {
    if (!has_snap) fail("没有快照");
    for (size_t i = mark_objs; i < objs.size(); i++) objs[i]->~Obj();
    objs.resize(mark_objs);
    arena.ci = mark_ci;
    arena.off = mark_off;
    const char* p = obj_buf.data();
    for (size_t i = 0; i < mark_objs; i++) p = objs[i]->snap_load(p);
    const char* q = static_buf.data();
    for (auto& s : statics()) { std::memcpy(s.first, q, s.second); q += s.second; }
    std::memcpy(&RNG, rng_buf.data(), sizeof(RNG));
    std::memcpy(&CLOCK, rng_buf.data() + sizeof(RNG), sizeof(CLOCK));
}

// ------------------------------------------------------------------ 对象基础
Obj::~Obj() {
    if (dyn) { dyn->~DynMap(); dyn = nullptr; }
}
static void save_dyn(const Obj* o, std::string& b) {
    uint8_t has = o->dyn ? 1 : 0;
    b.push_back((char)has);
    if (has) const_cast<Dict&>(o->dyn->d).snap_save(b);
}
static const char* load_dyn(Obj* o, const char* p) {
    uint8_t has = (uint8_t)*p++;
    if (has) {
        if (!o->dyn) o->dyn = new (W->alloc(sizeof(DynMap))) DynMap();
        p = o->dyn->d.snap_load(p);
    } else if (o->dyn) {
        // 快照后才加的动态属性：清掉（DynMap 本身在池里，不单独释放）
        o->dyn->d.e.clear();
        o->dyn->d.dead.clear();
        o->dyn->d.idx.clear();
        o->dyn->d.live = 0;
    }
    return p;
}
void Obj::snap_save(std::string& b) { save_dyn(this, b); }
const char* Obj::snap_load(const char* p) { return load_dyn(this, p); }
bool Obj::dget(int id, Value& out) {
    if (dyn && dyn->d.get(VS(name_str(id)), out)) return true;
    return false;
}
bool Obj::dset(int id, Value v) {
    if (!dyn) dyn = new (W->alloc(sizeof(DynMap))) DynMap();
    dyn->d.set(VS(name_str(id)), v);
    return true;
}
bool Obj::dcall(int id, Value* a, int n, Value& out) {
    Value f;
    if (dyn && dyn->d.get(VS(name_str(id)), f)) { out = call_value(f, a, n); return true; }
    return false;
}

// 生成的类：字段区整块复制（字段都是 POD：double/int/bool/Value）
void Pod::snap_save(std::string& b) {
    Obj::snap_save(b);
    size_t n = osize() - sizeof(Obj);
    b.append((const char*)this + sizeof(Obj), n);
}
const char* Pod::snap_load(const char* p) {
    p = Obj::snap_load(p);
    size_t n = osize() - sizeof(Obj);
    std::memcpy((char*)this + sizeof(Obj), p, n);
    return p + n;
}
template <class T> static void pod_put(std::string& b, const T& x) { b.append((const char*)&x, sizeof(T)); }
template <class T> static const char* pod_get(const char* p, T& x) { std::memcpy(&x, p, sizeof(T)); return p + sizeof(T); }

void Arr::snap_save(std::string& b) {
    Obj::snap_save(b);
    uint64_t n = v.size();
    pod_put(b, n);
    b.append((const char*)v.data(), n * sizeof(Value));
    if (ci == &CI_VEC) { pod_put(b, static_cast<Vec*>(this)->et); pod_put(b, static_cast<Vec*>(this)->fixed); }
}
const char* Arr::snap_load(const char* p) {
    p = Obj::snap_load(p);
    uint64_t n;
    p = pod_get(p, n);
    v.resize(n);
    std::memcpy(v.data(), p, n * sizeof(Value));
    p += n * sizeof(Value);
    if (ci == &CI_VEC) { p = pod_get(p, static_cast<Vec*>(this)->et); p = pod_get(p, static_cast<Vec*>(this)->fixed); }
    return p;
}
void Dict::snap_save(std::string& b) {
    Obj::snap_save(b);
    uint64_t n = e.size();
    pod_put(b, n);
    b.append((const char*)e.data(), n * sizeof(e[0]));
    b.append((const char*)dead.data(), n);
}
const char* Dict::snap_load(const char* p) {
    p = Obj::snap_load(p);
    uint64_t n;
    p = pod_get(p, n);
    e.resize(n);
    std::memcpy(e.data(), p, n * sizeof(e[0]));
    p += n * sizeof(e[0]);
    dead.assign((const uint8_t*)p, (const uint8_t*)p + n);
    p += n;
    idx.clear();
    live = 0;
    for (size_t i = 0; i < n; i++)
        if (!dead[i]) { idx[e[i].first] = i; live++; }
    return p;
}
void Bytes::snap_save(std::string& b) {
    Obj::snap_save(b);
    uint64_t n = data.size();
    pod_put(b, n);
    b.append((const char*)data.data(), n);
    pod_put(b, position);
    pod_put(b, endian);
}
const char* Bytes::snap_load(const char* p) {
    p = Obj::snap_load(p);
    uint64_t n;
    p = pod_get(p, n);
    data.assign((const uint8_t*)p, (const uint8_t*)p + n);
    p += n;
    p = pod_get(p, position);
    p = pod_get(p, endian);
    return p;
}


// ------------------------------------------------------------------ 字典
size_t KeyHash::operator()(const Value& v) const {
    switch (v.t) {
        case T_NUM: {
            double d = v.n;
            if (d == 0) return 0;
            if (d == (double)(int64_t)d) return std::hash<int64_t>()((int64_t)d);
            return std::hash<double>()(d);
        }
        case T_BOOL: return v.b ? 1 : 0;   // Python：True == 1
        case T_STR: return str_hash(v.s) * 31u + 7;
        case T_OBJ: return std::hash<void*>()(v.o);
        default: return 1000003u + v.t;
    }
}
bool KeyEq::operator()(const Value& a, const Value& b) const {
    auto num = [](const Value& v, double& d) {
        if (v.t == T_NUM) { d = v.n; return true; }
        if (v.t == T_BOOL) { d = v.b ? 1 : 0; return true; }
        return false;
    };
    double x, y;
    if (num(a, x) && num(b, y)) return x == y || (x != x && y != y && false);
    if (a.t != b.t) return false;
    if (a.t == T_STR) return str_eq(a.s, b.s);
    if (a.t == T_OBJ) return a.o == b.o;
    return true;   // null/undefined
}
bool Dict::get(const Value& k, Value& out) const {
    auto it = idx.find(k);
    if (it == idx.end()) return false;
    out = e[it->second].second;
    return true;
}
void Dict::set(const Value& k, const Value& v) {
    auto it = idx.find(k);
    if (it != idx.end()) { e[it->second].second = v; return; }
    idx[k] = e.size();
    e.push_back({k, v});
    dead.push_back(0);
    live++;
}
bool Dict::del(const Value& k) {
    auto it = idx.find(k);
    if (it == idx.end()) return false;
    dead[it->second] = 1;
    idx.erase(it);
    live--;
    return true;
}
void Dict::keys(std::vector<Value>& out) const {
    for (size_t i = 0; i < e.size(); i++)
        if (!dead[i]) out.push_back(e[i].first);
}
void Dict::values(std::vector<Value>& out) const {
    for (size_t i = 0; i < e.size(); i++)
        if (!dead[i]) out.push_back(e[i].second);
}

// ------------------------------------------------------------------ 分配
Arr* new_arr(size_t n) {
    Arr* a = new (W->alloc(sizeof(Arr))) Arr();
    a->ci = &CI_ARR;
    a->v.assign(n, UNDEF);
    W->objs.push_back(a);
    return a;
}
static Value elem_default(ElemType et) {
    switch (et) {
        case E_NUM: case E_INT: case E_UINT: return V(0);
        case E_BOOL: return VB(false);
        default: return NUL;
    }
}
Vec* new_vec(ElemType et, size_t n, bool fixed) {
    Vec* a = new (W->alloc(sizeof(Vec))) Vec();
    a->ci = &CI_VEC;
    a->et = et;
    a->fixed = fixed;
    a->v.assign(n, elem_default(et));
    W->objs.push_back(a);
    return a;
}
Dict* new_dict() {
    Dict* d = new (W->alloc(sizeof(Dict))) Dict();
    d->ci = &CI_DICT;
    W->objs.push_back(d);
    return d;
}
Func* new_bound(Value self, int id) {
    Func* f = new (W->alloc(sizeof(Func))) Func();
    f->ci = &CI_FUNC;
    f->self = self;
    f->id = id;
    W->objs.push_back(f);
    return f;
}
Func* new_native(NativeFn fn, void* env, Value self) {
    Func* f = new (W->alloc(sizeof(Func))) Func();
    f->ci = &CI_FUNC;
    f->fn = fn;
    f->env = env;
    f->self = self;
    W->objs.push_back(f);
    return f;
}
template <class T> static T* alloc_obj(ClassInfo& c) {
    T* o = new (W->alloc(sizeof(T))) T();
    o->ci = &c;
    W->objs.push_back(o);
    return o;
}

static Value coerce_elem(ElemType et, const Value& v) {
    switch (et) {
        case E_NUM: return V(tonum(v));
        case E_INT: return V((double)toint(v));
        case E_UINT: return V((double)touint(v));
        case E_BOOL: return VB(T(v));
        case E_STR: return slot_string(v);
        default: return v;
    }
}

// ------------------------------------------------------------------ 转换
static bool is_space(char16_t c) {
    return c == ' ' || (c >= 9 && c <= 13) || c == 0x1c || c == 0x1d || c == 0x1e || c == 0x1f || c == 0x85 ||
           c == 0xa0 || c == 0x1680 || (c >= 0x2000 && c <= 0x200a) || c == 0x2028 || c == 0x2029 || c == 0x202f ||
           c == 0x205f || c == 0x3000;
}
static std::string strip_ascii(const Str* s, bool& ok) {
    uint32_t a = 0, b = s->len;
    while (a < b && is_space(s->c[a])) a++;
    while (b > a && is_space(s->c[b - 1])) b--;
    std::string out;
    ok = true;
    for (uint32_t i = a; i < b; i++) {
        char16_t c = s->c[i];
        if (c >= 128) { ok = false; return out; }
        out.push_back((char)c);
    }
    return out;
}
// Python float(s)：允许 inf/nan/infinity、下划线分组（这里不支持下划线，游戏字符串里不会有）
static bool py_float(const std::string& s, double& out) {
    if (s.empty()) return false;
    std::string t = s;
    std::string low;
    for (char c : t) low.push_back((char)std::tolower((unsigned char)c));
    std::string body = low;
    int sign = 1;
    if (!body.empty() && (body[0] == '+' || body[0] == '-')) { if (body[0] == '-') sign = -1; body = body.substr(1); }
    if (body == "inf" || body == "infinity") { out = sign * INFINITY; return true; }
    if (body == "nan") { out = NAN; return true; }
    // 只接受十进制形式
    size_t i = 0, n = body.size();
    bool digits = false;
    while (i < n && std::isdigit((unsigned char)body[i])) { i++; digits = true; }
    if (i < n && body[i] == '.') { i++; while (i < n && std::isdigit((unsigned char)body[i])) { i++; digits = true; } }
    if (!digits) return false;
    if (i < n && body[i] == 'e') {
        i++;
        if (i < n && (body[i] == '+' || body[i] == '-')) i++;
        bool ed = false;
        while (i < n && std::isdigit((unsigned char)body[i])) { i++; ed = true; }
        if (!ed) return false;
    }
    if (i != n) return false;
    out = std::strtod(t.c_str(), nullptr);
    return true;
}
static bool py_int(const std::string& s, int base, double& out) {
    size_t i = 0, n = s.size();
    int sign = 1;
    if (i < n && (s[i] == '+' || s[i] == '-')) { if (s[i] == '-') sign = -1; i++; }
    if (base == 16 && i + 1 < n && s[i] == '0' && (s[i + 1] == 'x' || s[i + 1] == 'X')) i += 2;
    if (i >= n) return false;
    double v = 0;
    for (; i < n; i++) {
        int c = (unsigned char)s[i], d;
        if (c >= '0' && c <= '9') d = c - '0';
        else if (c >= 'a' && c <= 'z') d = c - 'a' + 10;
        else if (c >= 'A' && c <= 'Z') d = c - 'A' + 10;
        else if (c == '_') continue;
        else return false;
        if (d >= base) return false;
        v = v * base + d;
    }
    out = sign * v;
    return true;
}
double tonum(const Value& v) {
    switch (v.t) {
        case T_NUM: return v.n;
        case T_UNDEF: return NAN;
        case T_BOOL: return v.b ? 1 : 0;
        case T_NULL: return 0;
        case T_STR: {
            bool ok;
            std::string s = strip_ascii(v.s, ok);
            if (!ok) return NAN;
            if (s.empty()) return 0;
            double d;
            std::string low;
            for (char c : s) low.push_back((char)std::tolower((unsigned char)c));
            if (low.find('.') != std::string::npos || low.find('e') != std::string::npos) {
                if (py_float(s, d)) return d;
            } else if (low.rfind("0x", 0) == 0) {
                if (py_int(s, 16, d)) return d;
            } else if (py_int(s, 10, d)) return d;
            if (py_float(s, d)) return d;
            return NAN;
        }
        case T_OBJ:
            if (v.o->ci->kind == K_STUBVAL) return 0;
            return NAN;
    }
    return NAN;
}
int32_t toint_d(double d) {
    if (d != d || std::isinf(d)) return 0;
    d = std::trunc(d);
    if (std::fabs(d) < 9.2e18) return (int32_t)(uint32_t)(uint64_t)(int64_t)d;
    double m = std::fmod(d, 4294967296.0);
    if (m < 0) m += 4294967296.0;
    return (int32_t)(uint32_t)m;
}
uint32_t touint_d(double d) { return (uint32_t)toint_d(d); }
bool T(const Value& v) {
    switch (v.t) {
        case T_BOOL: return v.b;
        case T_NUM: return !(v.n == 0 || v.n != v.n);
        case T_UNDEF: case T_NULL: return false;
        case T_STR: return v.s->len != 0;
        case T_OBJ: return v.o->ci->kind != K_STUBVAL;
    }
    return false;
}
bool pybool(const Value& v) {
    switch (v.t) {
        case T_BOOL: return v.b;
        case T_NUM: return v.n != 0;
        case T_UNDEF: case T_NULL: return false;
        case T_STR: return v.s->len != 0;
        case T_OBJ: return v.o->ci->kind != K_STUBVAL;
    }
    return false;
}

// Python repr(float)：最短往返，-4 < 小数点位置 <= 16 用定点，否则科学计数（指数至少两位）
std::string repr_num(double d) {
    if (d != d) return "nan";
    if (std::isinf(d)) return d > 0 ? "inf" : "-inf";
    if (d == 0) return std::signbit(d) ? "-0.0" : "0.0";
    char buf[64];
    auto r = std::to_chars(buf, buf + sizeof buf, d, std::chars_format::scientific);
    std::string s(buf, r.ptr);
    bool neg = s[0] == '-';
    if (neg) s = s.substr(1);
    size_t e = s.find('e');
    std::string mant = s.substr(0, e);
    int exp10 = std::atoi(s.c_str() + e + 1);
    std::string digits;
    for (char c : mant) if (c != '.') digits.push_back(c);
    while (digits.size() > 1 && digits.back() == '0') digits.pop_back();
    int decpt = exp10 + 1;
    std::string out;
    if (decpt <= -4 || decpt > 16) {
        out = digits.substr(0, 1);
        if (digits.size() > 1) out += "." + digits.substr(1);
        char eb[16];
        std::snprintf(eb, sizeof eb, "e%c%02d", exp10 < 0 ? '-' : '+', std::abs(exp10));
        out += eb;
    } else if (decpt <= 0) {
        out = "0." + std::string(-decpt, '0') + digits;
    } else if (decpt >= (int)digits.size()) {
        out = digits + std::string(decpt - digits.size(), '0') + ".0";
    } else {
        out = digits.substr(0, decpt) + "." + digits.substr(decpt);
    }
    return neg ? "-" + out : out;
}
static std::string int_digits(double d) {
    char buf[400];
    auto r = std::to_chars(buf, buf + sizeof buf, d, std::chars_format::fixed, 0);
    return std::string(buf, r.ptr);
}
const Str* tostr_d(double x) {
    if (x != x) return SA("NaN");
    if (x == INFINITY) return SA("Infinity");
    if (x == -INFINITY) return SA("-Infinity");
    if (x == std::trunc(x) && std::fabs(x) < 1e21) {
        if (x == 0) return SA("0");
        return SA(int_digits(x));
    }
    return SA(repr_num(x));
}
static void join_into(std::u16string& out, const std::vector<Value>& v, const std::u16string& sep);
const Str* tostr(const Value& v) {
    switch (v.t) {
        case T_UNDEF: return SA("undefined");
        case T_NULL: return SA("null");
        case T_BOOL: return SA(v.b ? "true" : "false");
        case T_NUM: return tostr_d(v.n);
        case T_STR: return v.s;
        case T_OBJ: {
            Obj* o = v.o;
            switch (o->ci->kind) {
                case K_ARR: case K_VEC: {
                    std::u16string out;
                    join_into(out, static_cast<Arr*>(o)->v, u",");
                    return S(out);
                }
                case K_DICT: return SA("[object Object]");
                case K_STUBVAL: return SA("<Stub>");
                case K_ERROR: return tostr(static_cast<ErrorObj*>(o)->message);
                default: return SA(std::string("[object ") + o->ci->name + "]");
            }
        }
    }
    return EMPTY;
}
Value slot_string(const Value& v) {
    if (v.t == T_NULL || v.t == T_UNDEF) return NUL;
    if (v.t == T_STR) return v;
    return VS(tostr(v));
}

// ------------------------------------------------------------------ 运算
static bool numlike(const Value& v, double& d) {
    if (v.t == T_NUM) { d = v.n; return true; }
    if (v.t == T_BOOL) { d = v.b ? 1 : 0; return true; }
    return false;
}
static bool is_list(const Value& v) { return v.t == T_OBJ && (v.o->ci->kind == K_ARR || v.o->ci->kind == K_VEC); }
static bool is_pydict(const Value& v) { return v.t == T_OBJ && v.o->ci->kind == K_DICT; }
Value add(const Value& a, const Value& b) {
    if (a.t == T_NUM && b.t == T_NUM) return V(a.n + b.n);
    if (a.t == T_STR || b.t == T_STR) return VS(str_cat(tostr(a), tostr(b)));
    double x, y;
    if (numlike(a, x) && numlike(b, y)) return V(x + y);
    if (is_list(a) || is_list(b)) return VS(str_cat(tostr(a), tostr(b)));
    return V(tonum(a) + tonum(b));
}
static int pytype(const Value& v) {   // strict_eq 的类型比较：number 合并 int/float
    switch (v.t) {
        case T_NUM: return 1;
        case T_BOOL: return 2;
        case T_STR: return 3;
        case T_NULL: return 4;
        case T_UNDEF: return 5;
        default: return 0;
    }
}
bool strict_eq(const Value& a, const Value& b) {
    if (a.t == T_NUM && b.t == T_NUM) return a.n == b.n;
    if (a.t == T_STR && b.t == T_STR) return str_eq(a.s, b.s);
    int ta = pytype(a), tb = pytype(b);
    if (!ta || !tb) return a.t == b.t && (a.t != T_OBJ || a.o == b.o);   // a is b
    if (ta != tb) return false;
    switch (a.t) {
        case T_BOOL: return a.b == b.b;
        default: return true;   // null/undefined
    }
}
bool eq(const Value& a, const Value& b) {
    if (a.t == T_NUM && b.t == T_NUM) return a.n == b.n;
    if (a.t == T_STR && b.t == T_STR) return str_eq(a.s, b.s);
    if (a.t == T_UNDEF || b.t == T_UNDEF)
        return (a.t == b.t) || a.t == T_NULL || b.t == T_NULL;
    if (strict_eq(a, b)) return true;
    if (a.t == T_NULL || b.t == T_NULL) return false;
    bool sa = a.t == T_BOOL || a.t == T_NUM || a.t == T_STR;
    bool sb = b.t == T_BOOL || b.t == T_NUM || b.t == T_STR;
    if (sa && sb) return tonum(a) == tonum(b);
    if ((is_list(a) || is_pydict(a)) && sb) return eq(VS(tostr(a)), b);
    if ((is_list(b) || is_pydict(b)) && sa) return eq(a, VS(tostr(b)));
    return false;
}
bool lt(const Value& a, const Value& b) {
    double x, y;
    if (numlike(a, x) && numlike(b, y)) return x < y;
    if (a.t == T_STR && b.t == T_STR) return str_cmp(a.s, b.s) < 0;
    return tonum(a) < tonum(b);
}
bool le(const Value& a, const Value& b) {
    double x, y;
    if (numlike(a, x) && numlike(b, y)) return x <= y;
    if (a.t == T_STR && b.t == T_STR) return str_cmp(a.s, b.s) <= 0;
    return tonum(a) <= tonum(b);
}

// ------------------------------------------------------------------ 函数调用
Value call_value(const Value& f, Value* a, int n) {
    if (f.t != T_OBJ) {
        if (f.t == T_NULL || f.t == T_UNDEF) fail("调用 null");
        fail("调用非函数");
    }
    Obj* o = f.o;
    switch (o->ci->kind) {
        case K_FUNC: {
            Func* fn = static_cast<Func*>(o);
            if (fn == NOOP) return NUL;
            if (fn->fn) return fn->fn(fn->self, fn->env, a, n);
            return dcall(fn->self, fn->id, a, n);
        }
        case K_STUBVAL: return f;
        case K_CLASSREF: {
            const ClassInfo* c = static_cast<ClassRef*>(o)->target;
            if (c->make) return c->make(a, n);
            return VO(STUBCLASS);
        }
        default: fail(std::string("不能调用 ") + o->ci->name);
    }
}

// ------------------------------------------------------------------ 动态访问
static Value bytes_get(Bytes* b, int id, bool& ok);
static Value date_get(Date* d, int id, bool& ok);

Value dget(const Value& o, int id) {
    if (o.t != T_OBJ) {
        if (o.t == T_NULL || o.t == T_UNDEF) fail_null(id);
        fail(std::string("基本类型没有属性 ") + name_of(id));
    }
    Obj* p = o.o;
    Value out;
    switch (p->ci->kind) {
        case K_INST:
            if (p->dget(id, out)) return out;
            // Python：通过实例能读到类属性（静态字段、静态方法）
            for (const ClassInfo* k = p->ci; k; k = k->parent)
                if (k->sget && k->sget(id, out)) return out;
            if (id == N_constructor) return VO(p->ci->ref);
            if (id == N_hasOwnProperty) return VO(new_bound(o, id));
            if (p->ci->stub_base) return VO(STUB);
            fail_attr(p, id);
        case K_ARR: case K_VEC: {
            if (id == N_length) return V((double)static_cast<Arr*>(p)->v.size());
            if (id == N_fixed && p->ci->kind == K_VEC) return VB(static_cast<Vec*>(p)->fixed);
            if (p->Obj::dget(id, out)) return out;
            if (id < NB_BUILTIN) return VO(new_bound(o, id));
            fail_attr(p, id);
        }
        case K_DICT: {
            Dict* d = static_cast<Dict*>(p);
            if (id == N_length) return V((double)d->live);
            if (id == N_hasOwnProperty) return VO(new_bound(o, id));
            if (d->get(VS(name_str(id)), out)) return out;
            return UNDEF;
        }
        case K_CLASSREF: {
            // Python 类属性：沿 MRO 每层先看这一层动态挂上的，再看声明的静态成员
            const ClassInfo* c = static_cast<ClassRef*>(p)->target;
            for (const ClassInfo* k = c; k; k = k->parent) {
                if (k->ref && k->ref->Obj::dget(id, out)) return out;
                if (k->sget && k->sget(id, out)) return out;
            }
            if (id == N_hasOwnProperty) return VO(new_bound(o, id));
            if (c->stub_base) return VO(STUB);
            fail_attr(p, id);
        }
        case K_BYTES: {
            bool ok;
            out = bytes_get(static_cast<Bytes*>(p), id, ok);
            if (ok) return out;
            if (p->Obj::dget(id, out)) return out;
            fail_attr(p, id);
        }
        case K_DATE: {
            bool ok;
            out = date_get(static_cast<Date*>(p), id, ok);
            if (ok) return out;
            fail_attr(p, id);
        }
        case K_ERROR:
            if (id == N_message) return static_cast<ErrorObj*>(p)->message;
            if (p->Obj::dget(id, out)) return out;
            fail_attr(p, id);
        case K_SO:
            if (id == N_data) return static_cast<SharedObj*>(p)->data;
            if (id == N_flush || id == N_close || id == N_clear) return VO(new_bound(o, id));
            fail_attr(p, id);
        case K_STUBVAL:
            if (p->Obj::dget(id, out)) return out;
            return o;
        case K_STUBINST:
            if (p->Obj::dget(id, out)) return out;
            return VO(STUB);
        case K_HEADLESS:
            if (p->Obj::dget(id, out)) return out;
            return VO(NOOP);
        case K_FUNC:
            if (p->Obj::dget(id, out)) return out;
            fail_attr(p, id);
        default:
            if (p->Obj::dget(id, out)) return out;
            fail_attr(p, id);
    }
}

static void bytes_set(Bytes* b, int id, const Value& v, bool& ok);
void dset(const Value& o, int id, const Value& v) {
    if (o.t != T_OBJ) {
        if (o.t == T_NULL || o.t == T_UNDEF) fail_null(id);
        fail(std::string("基本类型不能设属性 ") + name_of(id));
    }
    Obj* p = o.o;
    switch (p->ci->kind) {
        case K_INST:
            if (!p->dset(id, v)) fail(std::string("只读属性 ") + name_of(id));
            return;
        case K_ARR: case K_VEC: {
            Arr* a = static_cast<Arr*>(p);
            if (id == N_length) {
                double n = tonum(v);
                size_t k = (size_t)(int64_t)n;
                Value d = p->ci->kind == K_VEC ? elem_default(static_cast<Vec*>(p)->et) : UNDEF;
                a->v.resize(k, d);
                return;
            }
            if (id == N_fixed && p->ci->kind == K_VEC) { static_cast<Vec*>(p)->fixed = T(v); return; }
            p->Obj::dset(id, v);
            return;
        }
        case K_DICT: static_cast<Dict*>(p)->set(VS(name_str(id)), v); return;
        case K_CLASSREF: {
            // Python：给类设属性只写这个类自己（声明过的静态成员或新属性），不写父类
            const ClassInfo* c = static_cast<ClassRef*>(p)->target;
            if (c->sset && c->sset(id, v)) return;
            p->Obj::dset(id, v);
            return;
        }
        case K_BYTES: {
            bool ok;
            bytes_set(static_cast<Bytes*>(p), id, v, ok);
            if (!ok) p->Obj::dset(id, v);
            return;
        }
        case K_DATE:
            if (id == N_time) { static_cast<Date*>(p)->t = tonum(v) / 1000; return; }
            p->Obj::dset(id, v);
            return;
        case K_SO:
            if (id == N_data) { static_cast<SharedObj*>(p)->data = v; return; }
            p->Obj::dset(id, v);
            return;
        default: p->Obj::dset(id, v); return;
    }
}

Value dcall(const Value& o, int id, Value* a, int n) {
    if (o.t != T_OBJ) {
        if (o.t == T_NULL || o.t == T_UNDEF) fail_null(id);
        return mcall(o, id, a, n);
    }
    Obj* p = o.o;
    Value out;
    switch (p->ci->kind) {
        case K_INST:
            // 实例上动态加的属性先于方法（Python 实例 __dict__）
            if (p->dyn && p->Obj::dcall(id, a, n, out)) return out;
            if (p->dcall(id, a, n, out)) return out;
            for (const ClassInfo* k = p->ci; k; k = k->parent)
                if (k->scall && k->scall(id, a, n, out)) return out;
            if (id == N_hasOwnProperty) return VB(n > 0 && hasprop(o, a[0]));
            if (p->ci->stub_base) return VO(STUB);
            fail_attr(p, id);
        case K_CLASSREF: {
            const ClassInfo* c = static_cast<ClassRef*>(p)->target;
            if (id == N_hasOwnProperty) {
                // AsMeta.hasOwnProperty：MRO 上任何一层有这个名字
                if (n < 1 || a[0].t != T_STR) return VB(false);
                int k2 = name_id_str(a[0].s);
                if (k2 < 0) return VB(false);
                for (const ClassInfo* k = c; k; k = k->parent) {
                    if (k->ref && k->ref->Obj::dget(k2, out)) return VB(true);
                    if (k->sget && k->sget(k2, out)) return VB(true);
                }
                return VB(false);
            }
            for (const ClassInfo* k = c; k; k = k->parent) {
                if (k->ref && k->ref->Obj::dcall(id, a, n, out)) return out;
                if (k->scall && k->scall(id, a, n, out)) return out;
            }
            // 类上的字段存的是函数
            for (const ClassInfo* k = c; k; k = k->parent)
                if (k->sget && k->sget(id, out)) return call_value(out, a, n);
            if (c->stub_base) return VO(STUB);
            fail_attr(p, id);
        }
        case K_STUBVAL: return o;
        case K_STUBINST:
            if (p->Obj::dcall(id, a, n, out)) return out;
            return VO(STUB);
        case K_HEADLESS:
            if (p->Obj::dget(id, out)) return call_value(out, a, n);
            return NUL;
        case K_FUNC:
            if (id == N_call) return call_value(o, n > 1 ? a + 1 : a, n > 1 ? n - 1 : 0);
            fail_attr(p, id);
        default:
            if (p->Obj::dcall(id, a, n, out)) return out;
            return mcall(o, id, a, n);
    }
}

Value idx_get(const Value& o, const Value& k) {
    if (o.t == T_OBJ) {
        Obj* p = o.o;
        switch (p->ci->kind) {
            case K_ARR: case K_VEC: {
                auto& v = static_cast<Arr*>(p)->v;
                double i;
                if (k.t == T_NUM) {
                    if (k.n != k.n) return UNDEF;
                    i = std::trunc(k.n);
                } else if (k.t == T_BOOL) i = k.b;
                else if (k.t == T_STR) {
                    bool ok;
                    std::string s = strip_ascii(k.s, ok);
                    double d;
                    if (!ok || !py_int(s, 10, d)) return UNDEF;
                    i = d;
                } else fail("数组下标类型不对");
                if (i < 0 || i >= (double)v.size()) return UNDEF;
                return v[(size_t)i];
            }
            case K_DICT: {
                Value out;
                if (static_cast<Dict*>(p)->get(k, out)) return out;
                return UNDEF;
            }
            case K_STUBVAL: return o;
            case K_BYTES: {
                Bytes* b = static_cast<Bytes*>(p);
                double i = tonum(k);
                if (i == i && i >= 0 && i < (double)b->data.size()) return V(b->data[(size_t)i]);
                break;
            }
            default: break;
        }
        if (k.t == T_STR) {
            int id = name_id_str(k.s);
            if (id < 0) return NUL;
            try { return dget(o, id); } catch (RtError&) { return NUL; }
        }
        return NUL;
    }
    if (o.t == T_NULL || o.t == T_UNDEF) throw Thrown{VS(SA("null[...]"))};
    if (o.t == T_STR) {
        double i = tonum(k);
        if (i == i && i >= 0 && i < o.s->len) return VS(str_new(o.s->c + (size_t)i, 1));
        return NUL;
    }
    return NUL;
}

void idx_set(const Value& o, const Value& k, const Value& v) {
    if (o.t == T_OBJ) {
        Obj* p = o.o;
        switch (p->ci->kind) {
            case K_ARR: case K_VEC: {
                auto& a = static_cast<Arr*>(p)->v;
                double i = tonum(k);
                if (i != i) fail("数组下标 NaN");
                i = std::trunc(i);
                if (i < 0) i += (double)a.size();
                if (i < 0) fail("数组下标越界");
                size_t j = (size_t)i;
                Value x = v;
                if (p->ci->kind == K_VEC) x = coerce_elem(static_cast<Vec*>(p)->et, v);
                if (j >= a.size()) {
                    if (p->ci->kind == K_VEC) {
                        // TypedVector 继承 Arr.__setitem__：越界补 UNDEFINED
                        a.resize(j + 1, UNDEF);
                    } else a.resize(j + 1, UNDEF);
                }
                a[j] = x;
                return;
            }
            case K_DICT: static_cast<Dict*>(p)->set(k, v); return;
            case K_STUBVAL: return;
            case K_BYTES: {
                Bytes* b = static_cast<Bytes*>(p);
                double i = tonum(k);
                if (i == i && i >= 0 && i < (double)b->data.size()) { b->data[(size_t)i] = (uint8_t)(toint(v) & 0xff); return; }
                break;
            }
            default: break;
        }
        if (k.t == T_STR) {
            int id = name_id_str(k.s);
            if (id >= 0) { dset(o, id, v); return; }
            // 不在名字表里：存到动态属性
            if (!p->dyn) p->dyn = new (W->alloc(sizeof(DynMap))) DynMap();
            p->dyn->d.set(k, v);
            return;
        }
        fail("不能按下标赋值");
    }
    if (o.t == T_NULL || o.t == T_UNDEF) throw Thrown{VS(SA("null[...]="))};
    fail("不能按下标赋值");
}

double alen(const Value& o) {
    if (o.t == T_STR) return o.s->len;
    if (o.t == T_OBJ) {
        switch (o.o->ci->kind) {
            case K_ARR: case K_VEC: return (double)static_cast<Arr*>(o.o)->v.size();
            case K_DICT: return (double)static_cast<Dict*>(o.o)->live;
            default: break;
        }
        return tonum(dget(o, N_length));
    }
    if (o.t == T_NULL || o.t == T_UNDEF) throw Thrown{VS(SA("null.length"))};
    return tonum(dget(o, N_length));
}

bool delete_(const Value& o, const Value& k) {
    if (o.t == T_OBJ) {
        if (o.o->ci->kind == K_DICT) {
            Value kk = k;
            static_cast<Dict*>(o.o)->del(kk);
        } else if (o.o->ci->kind == K_ARR || o.o->ci->kind == K_VEC) {
            auto& v = static_cast<Arr*>(o.o)->v;
            double i = tonum(k);
            if ((k.t == T_NUM || k.t == T_BOOL) && i >= 0 && i < (double)v.size()) v[(size_t)i] = NUL;
        }
    }
    return true;
}
bool hasprop(const Value& o, const Value& name) {
    if (o.t != T_OBJ) return false;
    if (o.o->ci->kind == K_DICT) return static_cast<Dict*>(o.o)->has(name);
    if (name.t != T_STR) return false;
    int id = name_id_str(name.s);
    if (id < 0) return false;
    Value out;
    try {
        if (o.o->ci->kind == K_INST) return o.o->dget(id, out);
        dget(o, id);
        return true;
    } catch (RtError&) { return false; }
}
bool in_(const Value& k, const Value& o) {
    if (o.t == T_OBJ) {
        if (o.o->ci->kind == K_DICT) return static_cast<Dict*>(o.o)->has(k);
        if (o.o->ci->kind == K_ARR || o.o->ci->kind == K_VEC) {
            double i;
            if (!numlike(k, i)) return false;
            return i >= 0 && i < (double)static_cast<Arr*>(o.o)->v.size();
        }
    }
    return hasprop(o, k);
}
void each(const Value& c, std::vector<Value>& out) {
    if (c.t != T_OBJ) return;
    switch (c.o->ci->kind) {
        case K_DICT: static_cast<Dict*>(c.o)->values(out); return;
        case K_ARR: case K_VEC: out = static_cast<Arr*>(c.o)->v; return;
        case K_BYTES: for (uint8_t b : static_cast<Bytes*>(c.o)->data) out.push_back(V(b)); return;
        default: return;
    }
}
void keys(const Value& c, std::vector<Value>& out) {
    if (c.t != T_OBJ) return;
    switch (c.o->ci->kind) {
        case K_DICT: static_cast<Dict*>(c.o)->keys(out); return;
        case K_ARR: case K_VEC: {
            size_t n = static_cast<Arr*>(c.o)->v.size();
            for (size_t i = 0; i < n; i++) out.push_back(V((double)i));
            return;
        }
        default: return;
    }
}
Value typeof_(const Value& v) {
    switch (v.t) {
        case T_UNDEF: return VS(SA("undefined"));
        case T_NULL: return VS(SA("object"));
        case T_BOOL: return VS(SA("boolean"));
        case T_NUM: return VS(SA("number"));
        case T_STR: return VS(SA("string"));
        default: {
            Kind k = v.o->ci->kind;
            if (k == K_FUNC || k == K_CLASSREF || k == K_STUBVAL) return VS(SA("function"));
            return VS(SA("object"));
        }
    }
}
Value as_object(const Value& v) {
    if (v.t == T_NULL) return VO(new_dict());
    return v;
}

bool is_number(const Value& v) { return v.t == T_NUM; }
bool is_int(const Value& v) { return v.t == T_NUM && v.n == std::trunc(v.n) && std::fabs(v.n) < 9.007199254740992e15; }
bool is_uint(const Value& v) { return is_int(v); }
bool is_string(const Value& v) { return v.t == T_STR; }
bool is_bool(const Value& v) { return v.t == T_BOOL; }
bool is_array(const Value& v) { return is_list(v); }
bool is_dict(const Value& v) { return is_pydict(v); }
bool is_func(const Value& v) { return v.t == T_OBJ && v.o->ci->kind == K_FUNC; }

// ------------------------------------------------------------------ 容器构造
Value arr_lit(std::initializer_list<Value> xs) {
    Arr* a = new_arr();
    a->v.assign(xs.begin(), xs.end());
    return VO(a);
}
Value dict_lit(std::initializer_list<std::pair<Value, Value>> xs) {
    Dict* d = new_dict();
    for (auto& kv : xs) d->set(kv.first, kv.second);
    return VO(d);
}
Value new_array(Value* a, int n) {
    // Python Arr(*args)：一个数字参数 → 那么多个 UNDEFINED；一个 list → 复制
    if (n == 1 && a[0].t == T_NUM) return VO(new_arr((size_t)(int64_t)a[0].n));
    Arr* r = new_arr();
    if (n == 1 && is_list(a[0])) r->v = static_cast<Arr*>(a[0].o)->v;
    else r->v.assign(a, a + n);
    return VO(r);
}
Value new_vector(ElemType et, Value* a, int n) {
    double len = n > 0 ? tonum(a[0]) : 0;
    bool fixed = n > 1 ? T(a[1]) : false;
    return VO(new_vec(et, (size_t)(int64_t)len, fixed));
}
Value new_dictionary(Value* a, int n) {
    Dict* d = new_dict();
    if (n > 0 && is_pydict(a[0])) {
        Dict* s = static_cast<Dict*>(a[0].o);
        for (size_t i = 0; i < s->e.size(); i++)
            if (!s->dead[i]) d->set(s->e[i].first, s->e[i].second);
    }
    return VO(d);
}
Value new_bytearray() {
    Bytes* b = alloc_obj<Bytes>(CI_BYTES);
    b->endian = VS(SA("bigEndian"));
    return VO(b);
}
Value new_error(Value* a, int n) {
    ErrorObj* e = alloc_obj<ErrorObj>(CI_ERROR);
    e->message = n > 0 ? a[0] : VS(EMPTY);
    return VO(e);
}
Value new_regexp(const Str*, const Str*) {
    // 正则只出现在没用到的库里（JSON、AGAL）；给一个不匹配任何东西的对象
    return VO(alloc_obj<ErrorObj>(CI_REGEXP));
}

// ------------------------------------------------------------------ 数组方法
static bool py_eq(const Value& a, const Value& b) {   // Python ==（list.index 用）
    double x, y;
    if (numlike(a, x) && numlike(b, y)) return x == y;
    if (a.t == T_STR && b.t == T_STR) return str_eq(a.s, b.s);
    if (a.t != b.t) return false;
    if (a.t == T_OBJ) return a.o == b.o;
    return true;
}
static void join_into(std::u16string& out, const std::vector<Value>& v, const std::u16string& sep) {
    for (size_t i = 0; i < v.size(); i++) {
        if (i) out += sep;
        if (v[i].t != T_NULL && v[i].t != T_UNDEF) out += U(tostr(v[i]));
    }
}
static bool py_lt_any(const Value& a, const Value& b) {
    double x, y;
    if (numlike(a, x) && numlike(b, y)) return x < y;
    if (a.t == T_STR && b.t == T_STR) return str_cmp(a.s, b.s) < 0;
    fail("排序时类型不能比较");
}
static std::u16string lower(std::u16string s);
static Value arr_method(const Value& self, Arr* a, int id, Value* x, int n) {
    auto& v = a->v;
    bool vec = a->ci->kind == K_VEC;
    ElemType et = vec ? static_cast<Vec*>(a)->et : E_ANY;
    switch (id) {
        case N_push:
            for (int i = 0; i < n; i++) v.push_back(vec ? coerce_elem(et, x[i]) : x[i]);
            return V((double)v.size());
        case N_pop: {
            if (v.empty()) return NUL;
            Value r = v.back();
            v.pop_back();
            return r;
        }
        case N_shift: {
            if (v.empty()) return NUL;
            Value r = v.front();
            v.erase(v.begin());
            return r;
        }
        case N_unshift:
            v.insert(v.begin(), x, x + n);
            return V((double)v.size());
        case N_splice: {
            int64_t len = (int64_t)v.size();
            int64_t start = (int64_t)std::trunc(tonum(x[0]));
            if (start < 0) start = std::max<int64_t>(0, len + start);
            if (start > len) start = len;
            int64_t cnt = n < 2 || x[1].t == T_NULL ? len - start : (int64_t)std::trunc(tonum(x[1]));
            if (cnt < 0) cnt = 0;
            if (start + cnt > len) cnt = len - start;
            Arr* r = new_arr();
            r->v.assign(v.begin() + start, v.begin() + start + cnt);
            v.erase(v.begin() + start, v.begin() + start + cnt);
            if (n > 2) v.insert(v.begin() + start, x + 2, x + n);
            return VO(r);
        }
        case N_slice: {
            int64_t len = (int64_t)v.size();
            int64_t s = n > 0 ? (int64_t)std::trunc(tonum(x[0])) : 0;
            int64_t e = n > 1 && x[1].t != T_NULL ? (int64_t)std::trunc(tonum(x[1])) : len;
            if (s < 0) s = std::max<int64_t>(0, len + s);
            if (e < 0) e = std::max<int64_t>(0, len + e);
            s = std::min(s, len);
            e = std::min(e, len);
            Arr* r = new_arr();
            if (e > s) r->v.assign(v.begin() + s, v.begin() + e);
            return VO(r);
        }
        case N_concat: {
            Arr* r = new_arr();
            r->v = v;
            for (int i = 0; i < n; i++) {
                if (is_list(x[i])) {
                    auto& o = static_cast<Arr*>(x[i].o)->v;
                    r->v.insert(r->v.end(), o.begin(), o.end());
                } else r->v.push_back(x[i]);
            }
            return VO(r);
        }
        case N_indexOf: {
            size_t s = n > 1 ? (size_t)std::max(0.0, std::trunc(tonum(x[1]))) : 0;
            for (size_t i = s; i < v.size(); i++)
                if (py_eq(v[i], n > 0 ? x[0] : UNDEF)) return V((double)i);
            return V(-1);
        }
        case N_lastIndexOf:
            for (size_t i = v.size(); i-- > 0;)
                if (py_eq(v[i], n > 0 ? x[0] : UNDEF)) return V((double)i);
            return V(-1);
        case N_join: case N_toString: {
            std::u16string sep = u",";
            if (id == N_join && n > 0) sep = U(tostr(x[0]));
            std::u16string out;
            join_into(out, v, sep);
            return VS(S(out));
        }
        case N_reverse: std::reverse(v.begin(), v.end()); return self;
        case N_sort: {
            Value fn = n > 0 ? x[0] : NUL;
            bool callable = fn.t == T_OBJ && (fn.o->ci->kind == K_FUNC || fn.o->ci->kind == K_CLASSREF ||
                                              fn.o->ci->kind == K_STUBVAL);
            if (callable) {
                std::stable_sort(v.begin(), v.end(), [&](const Value& p, const Value& q) {
                    Value args[2] = {p, q};
                    return tonum(call_value(fn, args, 2)) < 0;
                });
            } else {
                std::vector<std::pair<const Str*, Value>> keyed;
                for (auto& e : v) keyed.push_back({tostr(e), e});
                std::stable_sort(keyed.begin(), keyed.end(),
                                 [](auto& p, auto& q) { return str_cmp(p.first, q.first) < 0; });
                for (size_t i = 0; i < v.size(); i++) v[i] = keyed[i].second;
            }
            return self;
        }
        case N_sortOn: {
            // 同 as_runtime.Arr.sortOn：键可以是数组，选项逐字段（1 不分大小写、2 降序、16 按数值）
            Value key = n > 0 ? x[0] : UNDEF;
            Value opts = n > 1 ? x[1] : V(0);
            std::vector<Value> keys;
            if (is_list(key)) keys = static_cast<Arr*>(key.o)->v; else keys.push_back(key);
            std::vector<int> flags(keys.size(), 0);
            for (size_t i = 0; i < keys.size(); i++) {
                if (is_list(opts)) {
                    auto& ov = static_cast<Arr*>(opts.o)->v;
                    flags[i] = i < ov.size() ? toint(ov[i]) : 0;
                } else flags[i] = toint(opts);
            }
            struct F { double d; std::u16string s; };
            std::vector<std::pair<std::vector<F>, Value>> keyed;
            for (auto& e : v) {
                std::vector<F> fs;
                for (size_t i = 0; i < keys.size(); i++) {
                    Value fv = idx_get(e, keys[i]);
                    F f{0, {}};
                    if (flags[i] & 16) f.d = tonum(fv);
                    else {
                        const Str* t = tostr(fv);
                        f.s.assign(t->c, t->c + t->len);
                        if (flags[i] & 1) f.s = lower(f.s);
                    }
                    fs.push_back(std::move(f));
                }
                keyed.push_back({std::move(fs), e});
            }
            std::stable_sort(keyed.begin(), keyed.end(), [&](auto& p, auto& q) {
                for (size_t i = 0; i < keys.size(); i++) {
                    int c;
                    if (flags[i] & 16) c = (p.first[i].d > q.first[i].d) - (p.first[i].d < q.first[i].d);
                    else c = (p.first[i].s > q.first[i].s) - (p.first[i].s < q.first[i].s);
                    if (flags[i] & 2) c = -c;
                    if (c) return c < 0;
                }
                return false;
            });
            for (size_t i = 0; i < v.size(); i++) v[i] = keyed[i].second;
            return self;
        }
        case N_forEach: case N_map: case N_filter: case N_some: case N_every: {
            std::vector<Value> copy = v;
            Arr* r = (id == N_map || id == N_filter) ? new_arr() : nullptr;
            for (size_t i = 0; i < copy.size(); i++) {
                Value args[3] = {copy[i], V((double)i), self};
                Value res = call_value(x[0], args, 3);
                if (id == N_map) r->v.push_back(res);
                else if (id == N_filter) { if (T(res)) r->v.push_back(copy[i]); }
                else if (id == N_some) { if (T(res)) return VB(true); }
                else if (id == N_every) { if (!T(res)) return VB(false); }
            }
            if (id == N_forEach) return NUL;
            if (id == N_some) return VB(false);
            if (id == N_every) return VB(true);
            return VO(r);
        }
        default: break;
    }
    fail(std::string("数组没有方法 ") + name_of(id));
}

// ------------------------------------------------------------------ 字符串、数字方法
static std::string fmt_fixed(double d, int prec) {
    char buf[512];
    auto r = std::to_chars(buf, buf + sizeof buf, d, std::chars_format::fixed, prec);
    return std::string(buf, r.ptr);
}
static Value num_method(double o, int id, Value* a, int n) {
    switch (id) {
        case N_toString: case N_toLocaleString: {
            int radix = n > 0 ? (int)tonum(a[0]) : 10;
            if (radix == 10) return VS(tostr_d(o));
            int64_t k = (int64_t)o;
            if (k == 0) return VS(SA("0"));
            bool neg = k < 0;
            uint64_t u = neg ? (uint64_t)(-k) : (uint64_t)k;
            std::string s;
            while (u) { s.insert(s.begin(), "0123456789abcdefghijklmnopqrstuvwxyz"[u % radix]); u /= radix; }
            return VS(SA((neg ? "-" : "") + s));
        }
        case N_toFixed: {
            int d = n > 0 ? (int)tonum(a[0]) : 0;
            if (o != o) return VS(SA("NaN"));
            if (std::isinf(o)) return VS(SA(o > 0 ? "Infinity" : "-Infinity"));
            return VS(SA(fmt_fixed(o, d)));
        }
        case N_toPrecision: {
            if (n == 0) return VS(tostr_d(o));
            char buf[512];
            auto r = std::to_chars(buf, buf + sizeof buf, o, std::chars_format::general, (int)tonum(a[0]));
            return VS(SA(std::string(buf, r.ptr)));
        }
        case N_toExponential: {
            char buf[512];
            auto r = std::to_chars(buf, buf + sizeof buf, o, std::chars_format::scientific, n > 0 ? (int)tonum(a[0]) : 6);
            return VS(SA(std::string(buf, r.ptr)));
        }
        case N_valueOf: return V(o);
    }
    fail(std::string("数字没有方法 ") + name_of(id));
}
static std::u16string upper(std::u16string s) {
    for (auto& c : s) if (c >= 'a' && c <= 'z') c -= 32;
    return s;
}
static std::u16string lower(std::u16string s) {
    for (auto& c : s) if (c >= 'A' && c <= 'Z') c += 32;
    return s;
}
static Value str_method(const Str* s, int id, Value* a, int n) {
    std::u16string o = U(s);
    int64_t len = (int64_t)o.size();
    auto I = [&](int i, int64_t dflt) -> int64_t { return i < n && a[i].t != T_NULL ? (int64_t)std::trunc(tonum(a[i])) : dflt; };
    switch (id) {
        case N_toString: case N_valueOf: return VS(s);
        case N_substring: {
            int64_t st = std::max<int64_t>(0, I(0, 0));
            int64_t en = n < 2 || a[1].t == T_NULL ? len : std::max<int64_t>(0, I(1, len));
            if (st > en) std::swap(st, en);
            st = std::min(st, len);
            en = std::min(en, len);
            return VS(S(o.substr(st, en - st)));
        }
        case N_substr: {
            int64_t st = I(0, 0);
            if (st < 0) st = std::max<int64_t>(0, len + st);
            st = std::min(st, len);
            int64_t cnt = n < 2 || a[1].t == T_NULL ? len - st : I(1, 0);
            if (cnt < 0) {   // Python o[s:s+n] 负数
                int64_t e = std::max<int64_t>(0, st + cnt);
                return VS(S(e > st ? o.substr(st, e - st) : u""));
            }
            return VS(S(o.substr(st, std::min(cnt, len - st))));
        }
        case N_slice: {
            int64_t st = I(0, 0), en = n < 2 || a[1].t == T_NULL ? len : I(1, len);
            if (st < 0) st = std::max<int64_t>(0, len + st);
            if (en < 0) en = std::max<int64_t>(0, len + en);
            st = std::min(st, len);
            en = std::min(en, len);
            return VS(S(en > st ? o.substr(st, en - st) : u""));
        }
        case N_indexOf: {
            std::u16string t = U(tostr(n > 0 ? a[0] : UNDEF));
            int64_t st = n > 1 ? I(1, 0) : 0;
            if (st < 0) st = std::max<int64_t>(0, len + st);
            if (st > len) return V(t.empty() && st == len ? (double)len : -1);
            size_t r = o.find(t, (size_t)st);
            return V(r == std::u16string::npos ? -1 : (double)r);
        }
        case N_lastIndexOf: {
            std::u16string t = U(tostr(n > 0 ? a[0] : UNDEF));
            size_t r = o.rfind(t);
            return V(r == std::u16string::npos ? -1 : (double)r);
        }
        case N_charAt: {
            int64_t i = I(0, 0);
            return VS(i >= 0 && i < len ? S(o.substr(i, 1)) : EMPTY);
        }
        case N_charCodeAt: {
            int64_t i = I(0, 0);
            return i >= 0 && i < len ? V(o[i]) : V(NAN);
        }
        case N_toUpperCase: case N_toLocaleUpperCase: return VS(S(upper(o)));
        case N_toLowerCase: case N_toLocaleLowerCase: return VS(S(lower(o)));
        case N_split: {
            Arr* r = new_arr();
            if (n == 0 || a[0].t == T_NULL) { r->v.push_back(VS(s)); return VO(r); }
            std::u16string sep = U(tostr(a[0]));
            if (sep.empty()) {
                for (auto c : o) r->v.push_back(VS(S(std::u16string(1, c))));
            } else {
                size_t p = 0;
                while (true) {
                    size_t q = o.find(sep, p);
                    if (q == std::u16string::npos) { r->v.push_back(VS(S(o.substr(p)))); break; }
                    r->v.push_back(VS(S(o.substr(p, q - p))));
                    p = q + sep.size();
                }
            }
            if (n > 1 && a[1].t != T_NULL) {
                size_t lim = (size_t)std::max(0.0, tonum(a[1]));
                if (r->v.size() > lim) r->v.resize(lim);
            }
            return VO(r);
        }
        case N_replace: {
            std::u16string from = U(tostr(n > 0 ? a[0] : UNDEF)), to = U(tostr(n > 1 ? a[1] : UNDEF));
            size_t p = o.find(from);
            if (p != std::u16string::npos) o.replace(p, from.size(), to);
            return VS(S(o));
        }
        case N_concat: {
            for (int i = 0; i < n; i++) o += U(tostr(a[i]));
            return VS(S(o));
        }
        case N_localeCompare: {
            const Str* t = tostr(n > 0 ? a[0] : UNDEF);
            return V((double)str_cmp(s, t));
        }
        case N_match: case N_search: {
            std::u16string t = U(tostr(n > 0 ? a[0] : UNDEF));
            size_t r = o.find(t);
            if (id == N_search) return V(r == std::u16string::npos ? -1 : (double)r);
            if (r == std::u16string::npos) return NUL;
            return arr_lit({n > 0 ? a[0] : UNDEF});
        }
    }
    fail(std::string("字符串没有方法 ") + name_of(id));
}

// ------------------------------------------------------------------ 字节流
static void need(Bytes* b, size_t k) {
    if ((size_t)b->position + k > b->data.size()) throw Thrown{VS(SA("End of file was encountered."))};
}
static uint64_t rd_be(Bytes* b, int k) {
    need(b, k);
    uint64_t v = 0;
    size_t p = (size_t)b->position;
    for (int i = 0; i < k; i++) v = (v << 8) | b->data[p + i];
    b->position += k;
    return v;
}
static void wr_be(Bytes* b, uint64_t v, int k) {
    size_t p = (size_t)b->position;
    if (p + k > b->data.size()) b->data.resize(p + k, 0);
    for (int i = k - 1; i >= 0; i--) { b->data[p + i] = (uint8_t)(v & 0xff); v >>= 8; }
    b->position += k;
}
static Value bytes_get(Bytes* b, int id, bool& ok) {
    ok = true;
    switch (id) {
        case N_length: return V((double)b->data.size());
        case N_position: return V(b->position);
        case N_bytesAvailable: return V((double)b->data.size() - b->position);
        case N_endian: return b->endian;
    }
    if (id < NB_BUILTIN && id >= N_readByte && id <= N_readUTF) return VO(new_bound(VO(b), id));
    ok = false;
    return UNDEF;
}
static void bytes_set(Bytes* b, int id, const Value& v, bool& ok) {
    ok = true;
    switch (id) {
        case N_position: b->position = tonum(v); return;
        case N_length: b->data.resize((size_t)(int64_t)tonum(v), 0); return;
        case N_endian: b->endian = v; return;
    }
    ok = false;
}
std::vector<uint8_t> inflate_zlib(const std::vector<uint8_t>& in);
std::vector<uint8_t> deflate_store(const std::vector<uint8_t>& in);
static Value bytes_method(Bytes* b, int id, Value* a, int n) {
    switch (id) {
        case N_readByte: return V((double)(int8_t)rd_be(b, 1));
        case N_readUnsignedByte: return V((double)rd_be(b, 1));
        case N_readBoolean: return VB(rd_be(b, 1) != 0);
        case N_readShort: return V((double)(int16_t)rd_be(b, 2));
        case N_readUnsignedShort: return V((double)rd_be(b, 2));
        case N_readInt: return V((double)(int32_t)rd_be(b, 4));
        case N_readUnsignedInt: return V((double)(uint32_t)rd_be(b, 4));
        case N_readDouble: { uint64_t u = rd_be(b, 8); double d; std::memcpy(&d, &u, 8); return V(d); }
        case N_readFloat: { uint32_t u = (uint32_t)rd_be(b, 4); float f; std::memcpy(&f, &u, 4); return V((double)f); }
        case N_writeByte: wr_be(b, (uint8_t)(toint(a[0]) & 0xff), 1); return NUL;
        case N_writeBoolean: wr_be(b, T(a[0]) ? 1 : 0, 1); return NUL;
        case N_writeShort: wr_be(b, (uint16_t)(int16_t)toint(a[0]), 2); return NUL;
        case N_writeInt: wr_be(b, (uint32_t)toint(a[0]), 4); return NUL;
        case N_writeUnsignedInt: wr_be(b, touint(a[0]), 4); return NUL;
        case N_writeDouble: { double d = tonum(a[0]); uint64_t u; std::memcpy(&u, &d, 8); wr_be(b, u, 8); return NUL; }
        case N_writeUTFBytes: case N_writeUTF: {
            std::string s = to_utf8(tostr(a[0]));
            if (id == N_writeUTF) wr_be(b, (uint16_t)s.size(), 2);
            size_t p = (size_t)b->position;
            if (p + s.size() > b->data.size()) b->data.resize(p + s.size(), 0);
            std::memcpy(b->data.data() + p, s.data(), s.size());
            b->position += s.size();
            return NUL;
        }
        case N_writeBytes: {
            Bytes* src = static_cast<Bytes*>(a[0].o);
            size_t off = n > 1 ? (size_t)tonum(a[1]) : 0;
            size_t len = n > 2 && tonum(a[2]) ? (size_t)tonum(a[2]) : src->data.size() - off;
            size_t p = (size_t)b->position;
            if (p + len > b->data.size()) b->data.resize(p + len, 0);
            std::memcpy(b->data.data() + p, src->data.data() + off, len);
            b->position += len;
            return NUL;
        }
        case N_readBytes: {
            Bytes* dst = static_cast<Bytes*>(a[0].o);
            size_t len = n > 2 && tonum(a[2]) ? (size_t)tonum(a[2]) : b->data.size() - (size_t)b->position;
            size_t off = n > 1 ? (size_t)tonum(a[1]) : 0;
            size_t p = (size_t)b->position;
            len = std::min(len, b->data.size() - p);
            if (off + len > dst->data.size()) dst->data.resize(off + len, 0);
            std::memcpy(dst->data.data() + off, b->data.data() + p, len);
            b->position += len;
            return NUL;
        }
        case N_clear: b->data.clear(); b->position = 0; return NUL;
        case N_compress: b->data = deflate_store(b->data); b->position = 0; return NUL;
        case N_uncompress: b->data = inflate_zlib(b->data); b->position = 0; return NUL;
        case N_readUTFBytes: {
            size_t k = (size_t)tonum(a[0]);
            need(b, k);
            std::string s((const char*)b->data.data() + (size_t)b->position, k);
            b->position += k;
            return VS(str_utf8(s));
        }
        case N_readUTF: {
            size_t k = (size_t)rd_be(b, 2);
            need(b, k);
            std::string s((const char*)b->data.data() + (size_t)b->position, k);
            b->position += k;
            return VS(str_utf8(s));
        }
    }
    fail(std::string("ByteArray 没有方法 ") + name_of(id));
}

// ------------------------------------------------------------------ 日期
static bool local_tm(double t, std::tm& out, bool utc) {
    __time64_t s = (__time64_t)std::floor(t);
    return (utc ? _gmtime64_s(&out, &s) : _localtime64_s(&out, &s)) == 0;
}
static Value date_field(Date* d, int id) {
    std::tm tm{};
    bool utc = id == N_getUTCFullYear || id == N_getUTCMonth || id == N_getUTCDate || id == N_getUTCHours ||
               id == N_getUTCDay || id == N_fullYearUTC || id == N_monthUTC || id == N_dateUTC || id == N_dayUTC ||
               id == N_hoursUTC;
    if (!local_tm(d->t, tm, utc)) fail("日期超出范围");
    switch (id) {
        case N_getFullYear: case N_fullYear: case N_getUTCFullYear: case N_fullYearUTC: return V(tm.tm_year + 1900);
        case N_getMonth: case N_month: case N_getUTCMonth: case N_monthUTC: return V(tm.tm_mon);
        case N_getDate: case N_date: case N_getUTCDate: case N_dateUTC: return V(tm.tm_mday);
        case N_getDay: case N_day: case N_getUTCDay: case N_dayUTC: return V(tm.tm_wday);
        case N_getHours: case N_hours: case N_getUTCHours: case N_hoursUTC: return V(tm.tm_hour);
    }
    return UNDEF;
}
static Value date_get(Date* d, int id, bool& ok) {
    ok = true;
    switch (id) {
        case N_time: return V(d->t * 1000);
        case N_fullYear: case N_month: case N_date: case N_day: case N_hours: case N_fullYearUTC: case N_monthUTC:
        case N_dateUTC: case N_dayUTC: case N_hoursUTC: return date_field(d, id);
        case N_getTime: case N_getFullYear: case N_getMonth: case N_getDate: case N_getDay: case N_getHours:
        case N_getUTCFullYear: case N_getUTCMonth: case N_getUTCDate: case N_getUTCHours: case N_getUTCDay:
            return VO(new_bound(VO(d), id));
    }
    ok = false;
    return UNDEF;
}
static Value date_method(Date* d, int id, Value*, int) {
    if (id == N_getTime) return V(d->t * 1000);
    Value r = date_field(d, id);
    if (r.t == T_UNDEF) fail(std::string("Date 没有方法 ") + name_of(id));
    return r;
}
Value new_date(Value* a, int n) {
    Date* d = alloc_obj<Date>(CI_DATE);
    if (n == 0) d->t = CLOCK.fixed ? CLOCK.timestamp : (double)std::time(nullptr);
    else if (n == 1) d->t = tonum(a[0]) / 1000;
    else {
        double c[7] = {0, 0, 1, 0, 0, 0, 0};
        for (int i = 0; i < n && i < 7; i++) c[i] = tonum(a[i]);
        int y = (int)c[0];
        if (y >= 0 && y <= 99) y += 1900;
        std::tm tm{};
        tm.tm_year = y - 1900;
        tm.tm_mon = (int)c[1];
        tm.tm_mday = (int)c[2];
        tm.tm_hour = (int)c[3];
        tm.tm_min = (int)c[4];
        tm.tm_sec = (int)c[5];
        tm.tm_isdst = -1;
        d->t = (double)_mktime64(&tm) + c[6] / 1000;
    }
    return VO(d);
}
static int64_t days_from_civil(int64_t y, unsigned m, unsigned d) {
    y -= m <= 2;
    const int64_t era = (y >= 0 ? y : y - 399) / 400;
    const unsigned yoe = (unsigned)(y - era * 400);
    const unsigned doy = (153 * (m + (m > 2 ? -3 : 9)) + 2) / 5 + d - 1;
    const unsigned doe = yoe * 365 + yoe / 4 - yoe / 100 + doy;
    return era * 146097 + (int64_t)doe - 719468;
}
Value date_utc(Value* a, int n) {
    int64_t y = (int64_t)tonum(a[0]), m = (int64_t)tonum(a[1]);
    if (y >= 0 && y <= 99) y += 1900;
    int64_t yy = y + (m >= 0 ? m / 12 : -((-m + 11) / 12));
    int64_t mm = ((m % 12) + 12) % 12 + 1;
    double rest[5] = {1, 0, 0, 0, 0};
    for (int i = 2; i < n && i < 7; i++) rest[i - 2] = tonum(a[i]);
    double days = (double)days_from_civil(yy, (unsigned)mm, 1) + rest[0] - 1;
    double secs = days * 86400 + rest[1] * 3600 + rest[2] * 60 + rest[3] + rest[4] / 1000;
    return V(secs * 1000);
}

// ------------------------------------------------------------------ 方法分派（非生成类）
Value mcall(const Value& o, int id, Value* a, int n) {
    switch (o.t) {
        case T_NUM: return num_method(o.n, id, a, n);
        case T_BOOL:
            if (id == N_toString || id == N_toLocaleString) return VS(SA(o.b ? "True" : "False"));
            return num_method(o.b ? 1 : 0, id, a, n);
        case T_STR: return str_method(o.s, id, a, n);
        case T_NULL: case T_UNDEF: fail_null(id);
        default: break;
    }
    Obj* p = o.o;
    switch (p->ci->kind) {
        case K_ARR: case K_VEC: return arr_method(o, static_cast<Arr*>(p), id, a, n);
        case K_DICT: {
            if (id == N_hasOwnProperty) return VB(static_cast<Dict*>(p)->has(n > 0 ? a[0] : UNDEF));
            Value f;
            if (static_cast<Dict*>(p)->get(VS(name_str(id)), f)) return call_value(f, a, n);
            fail(std::string("Obj 没有方法 ") + name_of(id));
        }
        case K_BYTES: return bytes_method(static_cast<Bytes*>(p), id, a, n);
        case K_DATE: return date_method(static_cast<Date*>(p), id, a, n);
        case K_SO:
            if (id == N_flush) return VS(SA("flushed"));
            return NUL;
        case K_REGEXP:
            if (id == N_test) return VB(false);
            return NUL;
        case K_STUBVAL: return o;
        case K_HEADLESS: return NUL;
        default: break;
    }
    return dcall(o, id, a, n);
}
Value str_from_char_code(Value* a, int n) {
    std::u16string u;
    for (int i = 0; i < n; i++) u.push_back((char16_t)(int)tonum(a[i]));
    return VS(S(u));
}

// ------------------------------------------------------------------ Math
double m_floor(double x) { return (x != x || std::isinf(x)) ? x : std::floor(x); }
double m_ceil(double x) { return (x != x || std::isinf(x)) ? x : std::ceil(x); }
double m_round(double x) { return (x != x || std::isinf(x)) ? x : std::floor(x + 0.5); }
double m_pow(double a, double b) {
    if (a == 0 && b < 0) return INFINITY;   // Python math.pow 抛错 → INF（不区分 -0）
    double r = std::pow(a, b);
    if (r != r && !(a != a || b != b)) return NAN;
    return r;
}
double m_sqrt(double x) { return x >= 0 ? std::sqrt(x) : NAN; }
double m_log(double x) {
    if (x != x || x < 0) return NAN;
    if (x == 0) return -INFINITY;
    if (x == INFINITY) return INFINITY;
    return std::log(x);
}
double m_exp(double x) { return std::exp(x); }
double m_max(Value* a, int n) {
    double r = -INFINITY;
    for (int i = 0; i < n; i++) { double d = tonum(a[i]); if (d != d) return NAN; if (i == 0 || d > r) r = d; }
    return r;
}
double m_min(Value* a, int n) {
    double r = INFINITY;
    for (int i = 0; i < n; i++) { double d = tonum(a[i]); if (d != d) return NAN; if (i == 0 || d < r) r = d; }
    return r;
}
double m_random() { return RNG.random(); }
double m_sin(double x) { return std::sin(x); }
double m_cos(double x) { return std::cos(x); }
double m_tan(double x) { return std::tan(x); }
double m_atan(double x) { return std::atan(x); }
double m_atan2(double y, double x) { return std::atan2(y, x); }
double m_asin(double x) { return (x < -1 || x > 1) ? NAN : std::asin(x); }
double m_acos(double x) { return (x < -1 || x > 1) ? NAN : std::acos(x); }
bool isNaN(const Value& v) { double d = tonum(v); return d != d; }
bool isFinite(const Value& v) { double d = tonum(v); return d == d && !std::isinf(d); }
static std::string py_str(const Value& v) {   // Python str()
    if (v.t == T_NUM) {
        double d = v.n;
        return repr_num(d);
    }
    if (v.t == T_BOOL) return v.b ? "True" : "False";
    if (v.t == T_NULL) return "None";
    if (v.t == T_UNDEF) return "undefined";
    return to_utf8(tostr(v));
}
Value parseInt(const Value& s, const Value& base) {
    std::string t = py_str(s);
    int b = base.t == T_UNDEF || base.t == T_NULL ? 10 : (int)tonum(base);
    if (!b) b = 10;
    size_t i = 0, j = t.size();
    while (i < j && std::isspace((unsigned char)t[i])) i++;
    while (j > i && std::isspace((unsigned char)t[j - 1])) j--;
    double d;
    if (py_int(t.substr(i, j - i), b, d)) return V(d);
    size_t p = 0;
    while (p < t.size() && std::isspace((unsigned char)t[p])) p++;
    size_t q = p;
    if (q < t.size() && t[q] == '-') q++;
    size_t r = q;
    while (r < t.size() && std::isdigit((unsigned char)t[r])) r++;
    if (r == q) return V(NAN);
    py_int(t.substr(p, r - p), 10, d);
    return V(d);
}
double parseFloat(const Value& s) {
    std::string t = py_str(s);
    size_t p = 0;
    while (p < t.size() && std::isspace((unsigned char)t[p])) p++;
    size_t q = p;
    if (q < t.size() && (t[q] == '+' || t[q] == '-')) q++;
    size_t r = q;
    bool dig = false;
    while (r < t.size() && std::isdigit((unsigned char)t[r])) { r++; dig = true; }
    if (r < t.size() && t[r] == '.' && dig) { r++; while (r < t.size() && std::isdigit((unsigned char)t[r])) r++; }
    else if (!dig && r < t.size() && t[r] == '.') {
        size_t k = r + 1;
        bool d2 = false;
        while (k < t.size() && std::isdigit((unsigned char)t[k])) { k++; d2 = true; }
        if (!d2) return NAN;
        r = k;
        dig = true;
    }
    if (!dig) return NAN;
    if (r < t.size() && (t[r] == 'e' || t[r] == 'E')) {
        size_t k = r + 1;
        if (k < t.size() && (t[k] == '+' || t[k] == '-')) k++;
        size_t k2 = k;
        while (k2 < t.size() && std::isdigit((unsigned char)t[k2])) k2++;
        if (k2 > k) r = k2;
    }
    return std::strtod(t.substr(p, r - p).c_str(), nullptr);
}
double getTimer() {
    if (CLOCK.fixed) return CLOCK.timer_ms;
    return (double)std::clock();
}
static std::u16string replace_all(std::u16string s, const std::u16string& a, const std::u16string& b) {
    if (a.empty()) return s;
    size_t p = 0;
    while ((p = s.find(a, p)) != std::u16string::npos) { s.replace(p, a.size(), b); p += b.size(); }
    return s;
}
Value tr(Value* a, int n) {
    std::u16string s = U(tostr(n > 0 ? a[0] : UNDEF));
    for (int i = 1; i < n; i++) {
        std::string k = "%" + std::to_string(i - 1);
        s = replace_all(s, std::u16string(k.begin(), k.end()), U(tostr(a[i])));
    }
    return VS(S(s));
}
Value tr_n(Value* a, int n) {
    Value args[20];
    args[0] = tonum(n > 2 ? a[2] : UNDEF) == 1 ? a[0] : (n > 1 ? a[1] : UNDEF);
    int k = 1;
    for (int i = 3; i < n && k < 20; i++) args[k++] = a[i];
    return tr(args, k);
}

// ------------------------------------------------------------------ MT19937（CPython _randommodule.c）
uint32_t MT::next() {
    static const uint32_t mag01[2] = {0x0u, 0x9908b0dfu};
    uint32_t y;
    if (mti >= 624) {
        int kk;
        for (kk = 0; kk < 624 - 397; kk++) {
            y = (mt[kk] & 0x80000000u) | (mt[kk + 1] & 0x7fffffffu);
            mt[kk] = mt[kk + 397] ^ (y >> 1) ^ mag01[y & 1u];
        }
        for (; kk < 623; kk++) {
            y = (mt[kk] & 0x80000000u) | (mt[kk + 1] & 0x7fffffffu);
            mt[kk] = mt[kk + (397 - 624)] ^ (y >> 1) ^ mag01[y & 1u];
        }
        y = (mt[623] & 0x80000000u) | (mt[0] & 0x7fffffffu);
        mt[623] = mt[396] ^ (y >> 1) ^ mag01[y & 1u];
        mti = 0;
    }
    y = mt[mti++];
    y ^= (y >> 11);
    y ^= (y << 7) & 0x9d2c5680u;
    y ^= (y << 15) & 0xefc60000u;
    y ^= (y >> 18);
    return y;
}
double MT::random() {
    uint32_t a = next() >> 5, b = next() >> 6;
    return (a * 67108864.0 + b) * (1.0 / 9007199254740992.0);
}
void MT::seed_int(uint64_t s) {
    // init_genrand(19650218) + init_by_array(key)
    uint32_t key[2];
    int klen = 0;
    if (s == 0) key[klen++] = 0;
    while (s) { key[klen++] = (uint32_t)(s & 0xffffffffu); s >>= 32; }
    mt[0] = 19650218u;
    for (mti = 1; mti < 624; mti++) mt[mti] = (1812433253u * (mt[mti - 1] ^ (mt[mti - 1] >> 30)) + mti);
    int i = 1, j = 0;
    int k = 624 > klen ? 624 : klen;
    for (; k; k--) {
        mt[i] = (mt[i] ^ ((mt[i - 1] ^ (mt[i - 1] >> 30)) * 1664525u)) + key[j] + j;
        i++; j++;
        if (i >= 624) { mt[0] = mt[623]; i = 1; }
        if (j >= klen) j = 0;
    }
    for (k = 623; k; k--) {
        mt[i] = (mt[i] ^ ((mt[i - 1] ^ (mt[i - 1] >> 30)) * 1566083941u)) - i;
        i++;
        if (i >= 624) { mt[0] = mt[623]; i = 1; }
    }
    mt[0] = 0x80000000u;
    mti = 624;
}

// ------------------------------------------------------------------ SharedObject
Value shared_object_get_local(Value*, int) {
    SharedObj* s = alloc_obj<SharedObj>(CI_SO);
    Dict* d = new_dict();
    d->set(VS(SA("save")), SO_SAVE_TEXT);
    s->data = VO(d);
    return VO(s);
}

// ------------------------------------------------------------------ zlib（只解不压）
struct BitIn {
    const uint8_t* p;
    size_t n, pos = 0;
    uint32_t bitbuf = 0;
    int bitcnt = 0;
    int bits(int need) {
        uint32_t v = bitbuf;
        while (bitcnt < need) {
            if (pos >= n) fail("压缩数据不完整");
            v |= (uint32_t)p[pos++] << bitcnt;
            bitcnt += 8;
        }
        bitbuf = v >> need;
        bitcnt -= need;
        return (int)(v & ((1u << need) - 1));
    }
};
struct Huff { short count[16]; short symbol[288]; };
static int decode(BitIn& s, const Huff& h) {
    int code = 0, first = 0, index = 0;
    for (int len = 1; len < 16; len++) {
        code |= s.bits(1);
        int count = h.count[len];
        if (code - count < first) return h.symbol[index + (code - first)];
        index += count;
        first += count;
        first <<= 1;
        code <<= 1;
    }
    fail("压缩数据损坏");
}
static void construct(Huff& h, const short* length, int n) {
    for (int len = 0; len < 16; len++) h.count[len] = 0;
    for (int sym = 0; sym < n; sym++) h.count[length[sym]]++;
    short offs[16];
    offs[1] = 0;
    for (int len = 1; len < 15; len++) offs[len + 1] = offs[len] + h.count[len];
    for (int sym = 0; sym < n; sym++)
        if (length[sym]) h.symbol[offs[length[sym]]++] = (short)sym;
}
static const short LBASE[29] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31, 35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258};
static const short LEXT[29] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0};
static const short DBASE[30] = {1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193, 257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145, 8193, 12289, 16385, 24577};
static const short DEXT[30] = {0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13};
static void codes(BitIn& s, std::vector<uint8_t>& out, const Huff& lc, const Huff& dc) {
    while (true) {
        int sym = decode(s, lc);
        if (sym < 256) out.push_back((uint8_t)sym);
        else if (sym == 256) return;
        else {
            sym -= 257;
            if (sym >= 29) fail("压缩数据损坏");
            int len = LBASE[sym] + s.bits(LEXT[sym]);
            int ds = decode(s, dc);
            if (ds >= 30) fail("压缩数据损坏");
            size_t dist = DBASE[ds] + s.bits(DEXT[ds]);
            if (dist > out.size()) fail("压缩数据损坏");
            size_t from = out.size() - dist;
            for (int i = 0; i < len; i++) out.push_back(out[from + i]);
        }
    }
}
std::vector<uint8_t> inflate_zlib(const std::vector<uint8_t>& in) {
    if (in.size() < 2) fail("zlib 数据太短");
    BitIn s{in.data() + 2, in.size() - 2};
    std::vector<uint8_t> out;
    int last;
    do {
        last = s.bits(1);
        int type = s.bits(2);
        if (type == 0) {
            s.bitbuf = 0;
            s.bitcnt = 0;
            if (s.pos + 4 > s.n) fail("压缩数据不完整");
            unsigned len = s.p[s.pos] | (s.p[s.pos + 1] << 8);
            s.pos += 4;
            if (s.pos + len > s.n) fail("压缩数据不完整");
            out.insert(out.end(), s.p + s.pos, s.p + s.pos + len);
            s.pos += len;
        } else if (type == 1) {
            static Huff lc, dc;
            static bool built = false;
            if (!built) {
                short l[288];
                int i = 0;
                for (; i < 144; i++) l[i] = 8;
                for (; i < 256; i++) l[i] = 9;
                for (; i < 280; i++) l[i] = 7;
                for (; i < 288; i++) l[i] = 8;
                construct(lc, l, 288);
                for (i = 0; i < 30; i++) l[i] = 5;
                construct(dc, l, 30);
                built = true;
            }
            codes(s, out, lc, dc);
        } else if (type == 2) {
            static const short order[19] = {16, 17, 18, 0, 8, 7, 9, 6, 10, 5, 11, 4, 12, 3, 13, 2, 14, 1, 15};
            int nlen = s.bits(5) + 257, ndist = s.bits(5) + 1, ncode = s.bits(4) + 4;
            short lengths[320] = {0};
            for (int i = 0; i < ncode; i++) lengths[order[i]] = (short)s.bits(3);
            Huff lencode, distcode;
            construct(lencode, lengths, 19);
            int idx = 0;
            while (idx < nlen + ndist) {
                int sym = decode(s, lencode);
                if (sym < 16) lengths[idx++] = (short)sym;
                else {
                    short len = 0;
                    int rep;
                    if (sym == 16) { if (!idx) fail("压缩数据损坏"); len = lengths[idx - 1]; rep = 3 + s.bits(2); }
                    else if (sym == 17) rep = 3 + s.bits(3);
                    else rep = 11 + s.bits(7);
                    while (rep--) lengths[idx++] = len;
                }
            }
            construct(lencode, lengths, nlen);
            construct(distcode, lengths + nlen, ndist);
            codes(s, out, lencode, distcode);
        } else fail("压缩数据损坏");
    } while (!last);
    return out;
}
std::vector<uint8_t> deflate_store(const std::vector<uint8_t>& in) {
    std::vector<uint8_t> out = {0x78, 0x01};
    size_t p = 0;
    do {
        size_t k = std::min<size_t>(65535, in.size() - p);
        out.push_back(p + k == in.size() ? 1 : 0);
        out.push_back((uint8_t)(k & 0xff));
        out.push_back((uint8_t)(k >> 8));
        out.push_back((uint8_t)(~k & 0xff));
        out.push_back((uint8_t)((~k >> 8) & 0xff));
        out.insert(out.end(), in.begin() + p, in.begin() + p + k);
        p += k;
    } while (p < in.size());
    uint32_t a = 1, b = 0;
    for (uint8_t c : in) { a = (a + c) % 65521; b = (b + a) % 65521; }
    uint32_t ad = (b << 16) | a;
    for (int i = 3; i >= 0; i--) out.push_back((uint8_t)(ad >> (8 * i)));
    return out;
}


// ------------------------------------------------------------------ 生成代码用的辅助
const double M_PI_ = 3.141592653589793, M_E_ = 2.718281828459045, M_SQRT2_ = 1.4142135623730951,
             M_LN2_ = 0.6931471805599453;
Value new_stubinst() { return VO(alloc_obj<Pod>(CI_STUBINST)); }
bool is_stubtype(const Value& v) {
    if (v.t != T_OBJ) return false;
    if (v.o->ci->kind == K_STUBINST) return true;
    return v.o->ci->kind == K_INST && v.o->ci->stub_base;
}
bool instance_of(const Value& v, const Value& cls) {
    if (v.t != T_OBJ || cls.t != T_OBJ || cls.o->ci->kind != K_CLASSREF) return false;
    return isa_slow(v.o, *static_cast<ClassRef*>(cls.o)->target);
}
Value cur_exc() {
    try {
        throw;
    } catch (Thrown& t) {
        return t.v;
    } catch (RtError& e) {
        ErrorObj* o = alloc_obj<ErrorObj>(CI_ERROR);
        o->message = VS(str_utf8(e.msg));
        return VO(o);
    } catch (...) {
        ErrorObj* o = alloc_obj<ErrorObj>(CI_ERROR);
        o->message = VS(SA("native error"));
        return VO(o);
    }
}
std::string exc_text() {
    try {
        throw;
    } catch (Thrown& t) {
        return "throw " + to_utf8(tostr(t.v));
    } catch (RtError& e) {
        return e.msg;
    } catch (std::exception& e) {
        return std::string("C++ ") + e.what();
    } catch (...) {
        return "未知异常";
    }
}
Value rest_arr(Value* a, int n, int from) {
    Arr* r = new_arr();
    for (int i = from; i < n; i++) r->v.push_back(a[i]);
    return VO(r);
}
Obj* new_classref(const ClassInfo* c) {
    ClassRef* r = alloc_obj<ClassRef>(CI_CLASSREF);
    r->target = c;
    return r;
}
void register_classes(const ClassInfo* const*) {}
static Value make_stubinst(Value*, int) { return new_stubinst(); }
void rt_init() {
    if (!W) W = new World();
    STUB = alloc_obj<Pod>(CI_STUBVAL);
    HEADLESS = alloc_obj<Pod>(CI_HEADLESS);
    Func* f = new_native(nullptr);
    NOOP = f;
    CI_STUBINST.stub_base = true;
    CI_STUBINST.make = &make_stubinst;
    STUBCLASS = new_classref(&CI_STUBINST);
}
}  // namespace rt
