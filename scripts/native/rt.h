// RGA 原生计算引擎的运行时：AS3 值、对象、容器、运算，语义照搬 scripts/as_runtime.py（Python 版）。
// 生成代码（scripts/as2cpp.py 的输出）只依赖这个头文件。
#pragma once
#include <cstdint>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <unordered_map>
#include <utility>
#include <type_traits>
#include <new>

namespace rt {

struct Obj;
struct Str;
struct ClassInfo;

// ------------------------------------------------------------------ 值
enum : uint8_t { T_UNDEF = 0, T_NULL, T_BOOL, T_NUM, T_STR, T_OBJ };

struct Value {
    uint8_t t;
    union {
        bool b;
        double n;
        const Str* s;
        Obj* o;
    };
};
static_assert(std::is_trivially_copyable_v<Value>);

inline Value V(double d) { Value v; v.t = T_NUM; v.n = d; return v; }
inline Value VB(bool b) { Value v; v.t = T_BOOL; v.n = 0; v.b = b; return v; }
inline Value VS(const Str* s) { Value v; v.t = s ? T_STR : T_NULL; v.n = 0; v.s = s; return v; }
inline Value VO(Obj* o) { Value v; v.t = o ? T_OBJ : T_NULL; v.n = 0; v.o = o; return v; }
inline Value mkundef() { Value v; v.t = T_UNDEF; v.n = 0; return v; }
inline Value mknull() { Value v; v.t = T_NULL; v.n = 0; return v; }
extern const Value UNDEF, NUL;

// ------------------------------------------------------------------ 字符串（不可变，UTF-16）
struct Str {
    uint32_t len;
    uint32_t hash;   // 0 = 未计算
    char16_t c[1];
};
const Str* str_new(const char16_t* p, size_t n, bool permanent = false);
const Str* str_lit(const char16_t* p, size_t n);   // 永久（字面量）
const Str* str_ascii(const char* p);
const Str* str_utf8(const std::string& s);
std::string to_utf8(const Str* s);
uint32_t str_hash(const Str* s);
inline bool str_eq(const Str* a, const Str* b) {
    if (a == b) return true;
    if (!a || !b || a->len != b->len) return false;
    return std::memcmp(a->c, b->c, a->len * 2) == 0;
}
int str_cmp(const Str* a, const Str* b);
const Str* str_cat(const Str* a, const Str* b);
extern const Str* EMPTY;

// ------------------------------------------------------------------ 错误
struct Thrown { Value v; };                 // AS3 throw
struct RtError { std::string msg; };       // 运行时错误（null 取属性、找不到属性……），Python 版也会抛
#ifdef RT_PROF
// 计时版（build_native.py --prof）：每个生成函数记次数、自身时间（不含它调用的生成函数）、总时间
struct FnProf {
    const char* n;
    uint64_t t0, child;
    FnProf* prev;
    static thread_local FnProf* top;
    explicit FnProf(const char* s);
    ~FnProf();
};
void fnprof_dump(std::vector<std::pair<std::string, std::vector<double>>>& out);
#define RT_FN(s) rt::FnProf _fp(s)
#elif defined(RT_TRACE)
struct FnTrace {
    const char* n;
    FnTrace* prev;
    static thread_local FnTrace* top;
    FnTrace(const char* s) : n(s), prev(top) { top = this; }
    ~FnTrace() { top = prev; }
};
#define RT_FN(s) rt::FnTrace _ft(s)
#endif
#if !defined(RT_PROF) && !defined(RT_TRACE)
#define RT_FN(s)
#endif
std::string trace_text();
[[noreturn]] void fail(const std::string& msg);
[[noreturn]] void fail_null(int name_id);
[[noreturn]] void fail_attr(Obj* o, int name_id);

// ------------------------------------------------------------------ 名字
// 0..NB_BUILTIN-1 是运行时自己用的名字（见 rt.cpp BUILTIN_NAMES），生成代码的名字排在后面
int name_id(const char* s);                 // -1 = 没有
int name_id_str(const Str* s);
const char* name_of(int id);
const Str* name_str(int id);
void register_names(const char* const* names, int n);
enum : int {
    N_length = 0, N_push, N_pop, N_shift, N_unshift, N_splice, N_slice, N_concat, N_indexOf, N_lastIndexOf, N_join,
    N_reverse, N_sort, N_sortOn, N_forEach, N_map, N_filter, N_some, N_every, N_toString, N_toFixed, N_toPrecision,
    N_toExponential, N_valueOf, N_substring, N_substr, N_charAt, N_charCodeAt, N_toUpperCase, N_toLowerCase, N_split,
    N_replace, N_match, N_search, N_localeCompare, N_toLocaleString, N_toLocaleUpperCase, N_toLocaleLowerCase,
    N_hasOwnProperty, N_position, N_bytesAvailable, N_endian, N_readByte, N_readUnsignedByte, N_readBoolean,
    N_readShort, N_readUnsignedShort, N_readInt, N_readUnsignedInt, N_readDouble, N_readFloat, N_writeByte,
    N_writeBoolean, N_writeShort, N_writeInt, N_writeUnsignedInt, N_writeDouble, N_writeUTFBytes, N_writeUTF,
    N_writeBytes, N_readBytes, N_clear, N_compress, N_uncompress, N_readUTFBytes, N_readUTF, N_time, N_getTime,
    N_getFullYear, N_getMonth, N_getDate, N_getDay, N_getHours, N_getUTCFullYear, N_getUTCMonth, N_getUTCDate,
    N_getUTCHours, N_getUTCDay, N_fullYear, N_month, N_date, N_day, N_hours, N_fullYearUTC, N_monthUTC, N_dateUTC,
    N_dayUTC, N_hoursUTC, N_constructor, N_data, N_flush, N_close, N_test, N_exec, N_call, N_apply, N_fixed,
    N_getMinutes, N_getSeconds, N_getMilliseconds, N_setTime, N_message, N_name, N_lastIndex,
    NB_BUILTIN
};

// ------------------------------------------------------------------ 对象
enum Kind : uint8_t {
    K_INST,       // 生成的游戏类实例
    K_ARR, K_VEC, K_DICT, K_FUNC, K_CLASSREF, K_BYTES, K_DATE, K_REGEXP, K_ERROR,
    K_STUBVAL,    // 界面库等没转写的东西：取什么都得到自己，假值（Python STUB）
    K_STUBINST,   // new 没转写的类（Python Stub 实例，真值）
    K_HEADLESS,   // 代替界面实例：取属性得到空函数（真值），调用返回 null
    K_SO,         // SharedObject 替身
};

struct DynMap;   // 实例上动态加的属性（Python 实例 __dict__ 里不在声明里的）

struct Obj {
    const ClassInfo* ci;
    DynMap* dyn = nullptr;
    Obj() {}
    virtual ~Obj();
    virtual size_t osize() const { return sizeof(Obj); }
    // 按名字（动态）访问；生成的类按 switch 覆盖
    virtual bool dget(int id, Value& out);
    virtual bool dset(int id, Value v);
    virtual bool dcall(int id, Value* a, int n, Value& out);
    virtual bool dmeth(int) { return false; }   // 这个名字是不是实例方法（Python 代理取方法时不建绑定对象）
    // 快照：生成的类整块复制字段；容器复制元素
    virtual void snap_save(std::string& buf);
    virtual const char* snap_load(const char* p);
};

typedef bool (*SGet)(int id, Value& out);
typedef bool (*SSet)(int id, Value v);
typedef bool (*SCall)(int id, Value* a, int n, Value& out);
typedef Value (*NewFn)(Value* a, int n);

struct ClassInfo {
    const char* name;        // Python 名（S_xxx）
    const ClassInfo* parent;
    Kind kind;
    bool stub_base;          // 继承了没转写的类（界面库）：找不到的属性得到 STUB
    int depth;
    const ClassInfo* anc[24];
    SGet sget = nullptr;
    SSet sset = nullptr;
    SCall scall = nullptr;
    NewFn make = nullptr;
    bool (*smeth)(int id) = nullptr;   // 这个名字是不是静态方法
    Obj* ref = nullptr;      // 类本身作为值
    const ClassInfo* const* impls = nullptr;   // 接口
};
void class_init(ClassInfo& ci);   // 算 depth/anc
inline bool isa(const Obj* o, const ClassInfo& c) {
    const ClassInfo* k = o->ci;
    return k->depth >= c.depth && k->anc[c.depth] == &c;
}
bool isa_slow(const Obj* o, const ClassInfo& c);   // 含接口

extern ClassInfo CI_ARR, CI_VEC, CI_DICT, CI_FUNC, CI_CLASSREF, CI_BYTES, CI_DATE, CI_REGEXP, CI_ERROR, CI_STUBVAL,
    CI_STUBINST, CI_HEADLESS, CI_SO, CI_INST;

struct Pod : Obj {    // 字段都是 POD 的对象：快照时整块复制字段区
    size_t osize() const override { return sizeof(Pod); }
    void snap_save(std::string& buf) override;
    const char* snap_load(const char* p) override;
};
struct Inst : Pod {   // 生成的游戏类的根
    size_t osize() const override { return sizeof(Inst); }
};

struct Arr : Obj {
    std::vector<Value> v;
    size_t osize() const override { return sizeof(Arr); }
    void snap_save(std::string& buf) override;
    const char* snap_load(const char* p) override;
};

enum ElemType : uint8_t { E_ANY, E_NUM, E_INT, E_UINT, E_BOOL, E_STR };
struct Vec : Arr {
    ElemType et = E_ANY;
    bool fixed = false;
    size_t osize() const override { return sizeof(Vec); }
};

struct KeyHash { size_t operator()(const Value& v) const; };
struct KeyEq { bool operator()(const Value& a, const Value& b) const; };
struct Dict : Obj {
    // 按插入顺序（Python dict）
    std::vector<std::pair<Value, Value>> e;
    std::vector<uint8_t> dead;
    std::unordered_map<Value, size_t, KeyHash, KeyEq> idx;
    size_t live = 0;
    bool get(const Value& k, Value& out) const;
    void set(const Value& k, const Value& v);
    bool del(const Value& k);
    bool has(const Value& k) const { return idx.count(k) != 0; }
    void keys(std::vector<Value>& out) const;
    void values(std::vector<Value>& out) const;
    size_t osize() const override { return sizeof(Dict); }
    void snap_save(std::string& buf) override;
    const char* snap_load(const char* p) override;
};
struct DynMap { Dict d; };

typedef Value (*NativeFn)(Value self, void* env, Value* a, int n);
struct Func : Pod {
    // 绑定方法（self + 名字）、静态函数、闭包、空函数
    Value self;
    int id = -1;           // 绑定方法：名字
    NativeFn fn = nullptr; // 闭包 / 原生
    void* env = nullptr;
    size_t osize() const override { return sizeof(Func); }
};
Value call_value(const Value& f, Value* a, int n);

struct ClassRef : Pod {
    const ClassInfo* target;
    size_t osize() const override { return sizeof(ClassRef); }
};

struct Bytes : Obj {
    std::vector<uint8_t> data;
    double position = 0;
    Value endian;
    size_t osize() const override { return sizeof(Bytes); }
    void snap_save(std::string& buf) override;
    const char* snap_load(const char* p) override;
};

struct Date : Pod {
    double t = 0;   // 秒
    size_t osize() const override { return sizeof(Date); }
};

struct ErrorObj : Pod {
    Value message;
    size_t osize() const override { return sizeof(ErrorObj); }
};

struct SharedObj : Pod {
    Value data;   // Dict
    size_t osize() const override { return sizeof(SharedObj); }
};

extern Obj* STUB;        // StubValue 单例
extern Obj* HEADLESS;    // 界面替身单例
extern Obj* NOOP;        // 空函数
extern Obj* STUBCLASS;   // 没转写的类（Python Stub 类）

// ------------------------------------------------------------------ 内存池 + 快照
struct World {
    std::vector<char*> chunks;
    char* cur = nullptr;
    size_t left = 0;
    std::vector<Obj*> objs;
    // 快照
    bool has_snap = false;
    size_t mark_objs = 0, mark_chunk = 0;
    char* mark_cur = nullptr;
    size_t mark_left = 0;
    std::string obj_buf, static_buf, rng_buf;
    void* alloc(size_t n);
    void snapshot();
    void restore();
};
extern World* W;

template <class T>
inline T* make() {
    void* p = W->alloc(sizeof(T));
    T* o = new (p) T();
    o->ci = &T::CI;
    W->objs.push_back(o);
    return o;
}
Arr* new_arr(size_t n = 0);
Vec* new_vec(ElemType et, size_t n = 0, bool fixed = false);
Dict* new_dict();
Func* new_bound(Value self, int id);
Func* new_native(NativeFn fn, void* env = nullptr, Value self = mknull());

// 生成代码登记的静态区（快照时整块复制）
void register_statics(void* p, size_t n);

// ------------------------------------------------------------------ 转换（同 as_runtime）
// 常见情况在调用处直接算，其余交给 *_slow（rt.cpp）；结果和原来逐位相同
double tonum_slow(const Value& v);
inline double tonum(const Value& v) { return v.t == T_NUM ? v.n : tonum_slow(v); }
inline double tonum(double d) { return d; }
int32_t toint_slow(double d);
uint32_t touint_slow(double d);
// 截掉小数后落在 int32 范围内：直接转换（C++ 转换本身就是向零截断）；NaN、无穷、超范围走慢路径
inline int32_t toint_d(double d) { return (d > -2147483649.0 && d < 2147483648.0) ? (int32_t)d : toint_slow(d); }
inline uint32_t touint_d(double d) { return (d > -1.0 && d < 4294967296.0) ? (uint32_t)d : touint_slow(d); }
inline int32_t toint(const Value& v) { return toint_d(tonum(v)); }
inline uint32_t touint(const Value& v) { return touint_d(tonum(v)); }
inline bool truthy(double d) { return !(d == 0 || d != d); }
bool T_slow(const Value& v);
inline bool T(const Value& v) {     // as_runtime.T
    if (v.t == T_BOOL) return v.b;
    if (v.t == T_NUM) return !(v.n == 0 || v.n != v.n);
    return T_slow(v);
}
bool pybool(const Value& v);        // Python 自己的真假（and/or 选操作数用）：NaN 为真
inline bool pybool(double d) { return d != 0; }
const Str* tostr(const Value& v);
const Str* tostr_d(double d);
Value slot_string(const Value& v);  // null/undefined → null，其余 tostr
inline Value box(double d) { return V(d); }
inline Value box(int32_t i) { return V((double)i); }
inline Value box(uint32_t i) { return V((double)i); }
inline Value box(bool b) { return VB(b); }
inline Value box(const Value& v) { return v; }

template <class T> struct Conv;
template <> struct Conv<double> { static double from(const Value& v) { return tonum(v); } };
template <> struct Conv<int32_t> { static int32_t from(const Value& v) { return toint(v); } };
template <> struct Conv<uint32_t> { static uint32_t from(const Value& v) { return touint(v); } };
template <> struct Conv<bool> { static bool from(const Value& v) { return T(v); } };
template <> struct Conv<Value> { static Value from(const Value& v) { return v; } };

// ------------------------------------------------------------------ 运算（同 as_runtime）
Value add(const Value& a, const Value& b);
bool eq(const Value& a, const Value& b);
bool strict_eq(const Value& a, const Value& b);
bool lt(const Value& a, const Value& b);
bool le(const Value& a, const Value& b);
inline bool gt(const Value& a, const Value& b) { return lt(b, a); }
inline bool ge(const Value& a, const Value& b) { return le(b, a); }
inline double div(double a, double b) { return a / b; }
inline double mod(double a, double b) { return std::fmod(a, b); }
inline int32_t bitand_(double a, double b) { return toint_d(a) & toint_d(b); }
inline int32_t bitor_(double a, double b) { return toint_d(a) | toint_d(b); }
inline int32_t bitxor_(double a, double b) { return toint_d(a) ^ toint_d(b); }
inline int32_t bitnot_(double a) { return ~toint_d(a); }
inline int32_t shl(double a, double b) { return (int32_t)((uint32_t)toint_d(a) << (toint_d(b) & 31)); }
inline int32_t shr(double a, double b) { return toint_d(a) >> (toint_d(b) & 31); }
inline double ushr(double a, double b) { return (double)(touint_d(a) >> (toint_d(b) & 31)); }

// ------------------------------------------------------------------ 动态访问
Value dget(const Value& o, int id);
void dset(const Value& o, int id, const Value& v);
Value dcall(const Value& o, int id, Value* a, int n);
Value idx_get_slow(const Value& o, const Value& k);
inline Value idx_get(const Value& o, const Value& k);
void idx_set(const Value& o, const Value& k, const Value& v);
inline Value idx_get(const Value& o, double k) { return idx_get(o, V(k)); }
inline void idx_set(const Value& o, double k, const Value& v) { idx_set(o, V(k), v); }
double alen_slow(const Value& o);
inline double alen(const Value& o);
bool delete_(const Value& o, const Value& k);
bool in_(const Value& k, const Value& o);
void each(const Value& c, std::vector<Value>& out);
// for-in / for-each 的列表副本：从池里借、用完还（保留容量），免得每次循环都申请内存
std::vector<std::vector<Value>*>& list_pool();
struct ListBuf {
    std::vector<Value>* p;
    ListBuf() {
        auto& pool = list_pool();
        if (pool.empty()) p = new std::vector<Value>();
        else { p = pool.back(); pool.pop_back(); }
    }
    ~ListBuf() { p->clear(); list_pool().push_back(p); }
    std::vector<Value>& v() { return *p; }
};
void keys(const Value& c, std::vector<Value>& out);
Value typeof_(const Value& v);
Value as_object(const Value& v);
bool hasprop(const Value& o, const Value& name);

inline double alen(const Value& o) {
    if (o.t == T_OBJ && (o.o->ci->kind == K_ARR || o.o->ci->kind == K_VEC)) return (double)static_cast<Arr*>(o.o)->v.size();
    return alen_slow(o);
}
inline Value idx_get(const Value& o, const Value& k) {
    if (o.t == T_OBJ && k.t == T_NUM && (o.o->ci->kind == K_ARR || o.o->ci->kind == K_VEC)) {
        auto& v = static_cast<Arr*>(o.o)->v;
        if (k.n >= 0 && k.n < (double)v.size()) return v[(size_t)k.n];
    }
    return idx_get_slow(o, k);
}
// 数组下标快速路径
inline Value arr_at(const Value& o, double k) {
    if (o.t == T_OBJ && (o.o->ci == &CI_ARR || o.o->ci == &CI_VEC)) {
        auto& v = static_cast<Arr*>(o.o)->v;
        if (k >= 0 && k < (double)v.size()) return v[(size_t)k];
        if (k == k) return UNDEF;
    }
    return idx_get(o, V(k));
}

// 类型检查（is / as）
bool is_number(const Value& v);
bool is_int(const Value& v);
bool is_uint(const Value& v);
bool is_string(const Value& v);
bool is_bool(const Value& v);
bool is_array(const Value& v);
bool is_dict(const Value& v);
bool is_func(const Value& v);
inline bool is_class(const Value& v, const ClassInfo& c) { return v.t == T_OBJ && isa_slow(v.o, c); }

// 实例快速路径：静态类型已知时直接访问，对不上（界面替身、桩、null）走按名字的动态访问
template <class C>
inline C* as_ptr(const Value& v) {
    return (v.t == T_OBJ && isa(v.o, C::CI)) ? static_cast<C*>(v.o) : nullptr;
}

struct Args {
    Value a[17];
    int n = 0;
    Args() {}
    template <class... X> Args(const X&... x) : n(sizeof...(X)) {
        int i = 0;
        ((a[i++] = box(x)), ...);
    }
};

template <class C, class F>
inline auto rd(const Value& v, int id, F f) -> decltype(f((C*)nullptr)) {
    using R = decltype(f((C*)nullptr));
    if (C* p = as_ptr<C>(v)) return f(p);
    return Conv<std::decay_t<R>>::from(dget(v, id));
}
template <class C, class F>
inline void wr(const Value& v, int id, F f, const Value& boxed) {
    if (C* p = as_ptr<C>(v)) { f(p); return; }
    dset(v, id, boxed);
}
template <class C, class F, class B>
inline auto mc(const Value& v, int id, F f, B boxargs) -> decltype(f((C*)nullptr)) {
    using R = decltype(f((C*)nullptr));
    if (C* p = as_ptr<C>(v)) return f(p);
    Args a = boxargs();
    Value r = dcall(v, id, a.a, a.n);
    if constexpr (std::is_void_v<R>) return;
    else return Conv<std::decay_t<R>>::from(r);
}

// 参数（动态调用时按声明类型转换；缺的给默认值）
template <class T> inline T arg(Value* a, int n, int i, T dflt) { return i < n ? Conv<T>::from(a[i]) : dflt; }

// ------------------------------------------------------------------ 容器和内建
Value arr_lit(std::initializer_list<Value> xs);
Value dict_lit(std::initializer_list<std::pair<Value, Value>> xs);
Value new_array(Value* a, int n);         // new Array(...)
Value new_vector(ElemType et, Value* a, int n);
Value new_dictionary(Value* a, int n);
Value new_bytearray();
Value new_date(Value* a, int n);
Value new_error(Value* a, int n);
Value new_regexp(const Str* pat, const Str* flags);
Value mcall(const Value& o, int id, Value* a, int n);   // 数组/字符串/数字/字节流等的方法
Value str_from_char_code(Value* a, int n);
Value date_utc(Value* a, int n);

// Math
inline double m_floor(double x) { return (x != x || __builtin_isinf(x)) ? x : std::floor(x); }
inline double m_ceil(double x) { return (x != x || __builtin_isinf(x)) ? x : std::ceil(x); }
inline double m_round(double x) { return (x != x || __builtin_isinf(x)) ? x : std::floor(x + 0.5); }
double m_pow(double a, double b);
inline double m_sqrt(double x) { return x >= 0 ? std::sqrt(x) : NAN; }
double m_log(double x);
double m_exp(double x);
double m_max(Value* a, int n);
double m_min(Value* a, int n);
double m_random();
double m_sin(double x);
double m_cos(double x);
double m_tan(double x);
double m_atan(double x);
double m_atan2(double y, double x);
double m_asin(double x);
double m_acos(double x);
inline double m_abs(double x) { return std::fabs(x); }
inline double m_max2(double a, double b) { return (a != a || b != b) ? NAN : (a >= b ? a : b); }
inline double m_min2(double a, double b) { return (a != a || b != b) ? NAN : (a <= b ? a : b); }
bool isNaN(const Value& v);
bool isFinite(const Value& v);
Value parseInt(const Value& s, const Value& base);
double parseFloat(const Value& s);
double getTimer();
Value tr(Value* a, int n);      // 翻译函数 _(s, ...)
Value tr_n(Value* a, int n);    // _n(s1, s2, n, ...)

// 随机数：和 Python random.random() 逐位一致（MT19937 + genrand_res53）
struct MT {
    uint32_t mt[624];
    int mti = 625;
    uint32_t next();
    double random();
    void seed_int(uint64_t s);
};
extern MT RNG;

// 时钟（游戏的 new Date() 和 getTimer()）
struct Clock { double timestamp = 0; double timer_ms = 0; bool fixed = true; };
extern Clock CLOCK;

// SharedObject 替身（游戏读存档用）
extern Value SO_SAVE_TEXT;
Value shared_object_get_local(Value* a, int n);

// 字面量
inline Value L(const Str* s) { return VS(s); }

// 迭代用
struct ValList { std::vector<Value> v; };

// 名字表里的数值
std::string repr_num(double d);

// ------------------------------------------------------------------ 生成代码用的辅助
void rt_init();          // 建内存池和 STUB/HEADLESS/NOOP/STUBCLASS 单例
Value new_stubinst();
bool is_stubtype(const Value& v);
inline bool is_kind(const Value& v, Kind k) { return v.t == T_OBJ && v.o->ci->kind == k; }
bool instance_of(const Value& v, const Value& cls);
Value cur_exc();
std::string exc_text();            // catch (...) 里：异常的文字说明                       // catch (...) 里取当前异常（Thrown 的值 / 运行时错误转成 Error）
Value rest_arr(Value* a, int n, int from);
Obj* new_classref(const ClassInfo* c);
void register_classes(const ClassInfo* const* cs);
extern const double M_PI_, M_E_, M_SQRT2_, M_LN2_;

template <class... X> inline Value callv(const Value& f, const X&... x) {
    Value a[sizeof...(X) + 1] = {box(x)...};
    return call_value(f, a, (int)sizeof...(X));
}
template <class... X> inline Value dcallv(const Value& o, int id, const X&... x) {
    Value a[sizeof...(X) + 1] = {box(x)...};
    return dcall(o, id, a, (int)sizeof...(X));
}
#define RT_VARIADIC(name, impl) \
    template <class... X> inline auto name(const X&... x) { Value a[sizeof...(X) + 1] = {box(x)...}; return impl(a, (int)sizeof...(X)); }
RT_VARIADIC(trv, tr)
RT_VARIADIC(tr_nv, tr_n)
RT_VARIADIC(str_from_char_codev, str_from_char_code)
RT_VARIADIC(date_utcv, date_utc)
RT_VARIADIC(new_arrayv, new_array)
RT_VARIADIC(new_dictionaryv, new_dictionary)
RT_VARIADIC(new_datev, new_date)
RT_VARIADIC(new_errorv, new_error)
RT_VARIADIC(m_maxv, m_max)
RT_VARIADIC(m_minv, m_min)
template <class... X> inline Value new_vectorv(ElemType et, const X&... x) {
    Value a[sizeof...(X) + 1] = {box(x)...};
    return new_vector(et, a, (int)sizeof...(X));
}

}  // namespace rt
