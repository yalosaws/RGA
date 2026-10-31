// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S__2c__22__21_::ctor_() {
    RT_FN("S__2c__22__21_.S__2c__22__21_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v31985 = 914.0; this->f_S_6_21_Z = rt::touint_d(_v31985); _v31985; });
    ({ rt::Value _v31986 = rt::trv(rt::VS(g::LS[9234])); this->f_S_1i = rt::slot_string(_v31986); _v31986; });
    ({ rt::Value _v31987 = rt::VS(g::LS[9235]); this->f_S__5e__21__23_ = rt::slot_string(_v31987); _v31987; });
    ({ rt::Value _v31988 = rt::VS(g::LS[9215]); this->f_S__3f__21__3d_ = rt::slot_string(_v31988); _v31988; });
    ({ rt::Value _v31989 = rt::VS(g::LS[9215]); this->f_S__40_1 = rt::slot_string(_v31989); _v31989; });
    ({ rt::Value _v31990 = rt::trv(rt::VS(g::LS[9227])); this->f_S_7_23_ = rt::slot_string(_v31990); _v31990; });
    ({ double _v31991 = 6.0; this->f_S_9_21_m = rt::toint_d(_v31991); _v31991; });
    ({ double _v31992 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31992); _v31992; });
    ({ double _v31993 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v31993); _v31993; });
    ({ bool _v31994 = true; this->f_S__3c__60_ = _v31994; _v31994; });
}
int32_t C_S__2c__22__21_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__2c__22__21_::dm_S_75_2() { return false; }
rt::Value C_S__2c__22__21_::dm_S_75_3() { return rt::NUL; }
double C_S__2c__22__21_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__2c__22__21_.S_75");
    if (((((double)(l_param1)) == 1.0) || (((double)(l_param1)) == 3.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+63 : 1e+33);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__2c__22__21_::g_S__2d_6() {
    RT_FN("S__2c__22__21_.S__2d_6_get");
    return ({ bool _t31995 = this->C_S__60_6::g_S__2d_6(); _t31995 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == 15.0)) : _t31995; });
    return false;
}
C_S__2c__22__21_* C_S__2c__22__21_::alloc_() {
    C_S__2c__22__21_* o = rt::make<C_S__2c__22__21_>();
    return o;
}
rt::Value C_S__2c__22__21_::mk_(rt::Value* a, int n) {
    C_S__2c__22__21_* o = alloc_();
    o->C_S__2c__22__21_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22__21_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__22__21_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__22__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__2c__22__21_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__2c__22__21_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__2c__22__21_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__22__21_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__22__21_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__22__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22__21___id)); return true;
    default: return false;
    }
}
bool C_S__2c__22__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22__21___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__22_C::ctor_() {
    RT_FN("S__2d__22_C.S__2d__22_C");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v31996 = 916.0; this->f_S_6_21_Z = rt::touint_d(_v31996); _v31996; });
    ({ rt::Value _v31997 = rt::trv(rt::VS(g::LS[9236])); this->f_S_1i = rt::slot_string(_v31997); _v31997; });
    ({ rt::Value _v31998 = rt::VS(g::LS[9237]); this->f_S__5e__21__23_ = rt::slot_string(_v31998); _v31998; });
    ({ double _v31999 = 1e+175; this->f_S__23__21_m = _v31999; _v31999; });
    ({ double _v32000 = 6.0; this->f_S_9_21_m = rt::toint_d(_v32000); _v32000; });
    ({ double _v32001 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v32001); _v32001; });
    ({ double _v32002 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v32002); _v32002; });
    ({ bool _v32003 = true; this->f_S__3c__60_ = _v32003; _v32003; });
    ({ double _v32004 = 8.0; this->f_S__21__22_E = rt::touint_d(_v32004); _v32004; });
}
rt::Value C_S__2d__22_C::m_S__40__22_() {
    RT_FN("S__2d__22_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9238]), C_S__26_c::sm_S_8_21_Z(C_S__2d__22_C::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2d__22_C::g_S__2d_6() {
    RT_FN("S__2d__22_C.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 3.0);
    return false;
}
double C_S__2d__22_C::sm_S_6_21_Y() {
    RT_FN("S__2d__22_C.S_6_21_Y");
    return (0.65 * rt::m_pow(rt::m_max2(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 39.0))), 0.65));
    return 0.0;
}
C_S__2d__22_C* C_S__2d__22_C::alloc_() {
    C_S__2d__22_C* o = rt::make<C_S__2d__22_C>();
    return o;
}
rt::Value C_S__2d__22_C::mk_(rt::Value* a, int n) {
    C_S__2d__22_C* o = alloc_();
    o->C_S__2d__22_C::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__22_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__22_C::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__22_C::smeth_(int id) {
    switch (id) {
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S__2d__22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_C__id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_C__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S_0_22__24_::ctor_() {
    RT_FN("S_0_22__24_.S_0_22__24_");
    (void)((this->C_S__3e_p::ctor_(), rt::NUL));
    ({ double _v32005 = 953.0; this->f_S_6_21_Z = rt::touint_d(_v32005); _v32005; });
    ({ rt::Value _v32006 = rt::trv(rt::VS(g::LS[9239])); this->f_S_1i = rt::slot_string(_v32006); _v32006; });
    ({ rt::Value _v32007 = rt::VS(g::LS[9240]); this->f_S__5e__21__23_ = rt::slot_string(_v32007); _v32007; });
    ({ double _v32008 = 6.0; this->f_S_9_21_m = rt::toint_d(_v32008); _v32008; });
    ({ double _v32009 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v32009); _v32009; });
    ({ double _v32010 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v32010); _v32010; });
}
rt::Value C_S_0_22__24_::m_S__3e__21_d() {
    RT_FN("S_0_22__24_.S__3e__21_d");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9241]), C_S__26_c::sm_S_8_21_Z(C_S_0_22__24_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_0_22__24_::sm_S__2c__21_G() {
    RT_FN("S_0_22__24_.S__2c__21_G");
    return (0.25 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2()))), 1.35));
    return 0.0;
}
C_S_0_22__24_* C_S_0_22__24_::alloc_() {
    C_S_0_22__24_* o = rt::make<C_S_0_22__24_>();
    return o;
}
rt::Value C_S_0_22__24_::mk_(rt::Value* a, int n) {
    C_S_0_22__24_* o = alloc_();
    o->C_S_0_22__24_::ctor_();
    return rt::VO(o);
}
bool C_S_0_22__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e_p::dget(id, out);
}
bool C_S_0_22__24_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e_p::dset(id, v);
}
bool C_S_0_22__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = m_S__3e__21_d(); return true;
    default: break;
    }
    return C_S__3e_p::dcall(id, a, n, out);
}
bool C_S_0_22__24_::dmeth(int id) {
    switch (id) {
    case NM_S__3e__21_d: return true;
    default: break;
    }
    return C_S__3e_p::dmeth(id);
}
bool C_S_0_22__24_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_0_22__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22__24___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_22__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_22__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_0_22__3d_::ctor_() {
    RT_FN("S_0_22__3d_.S_0_22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v32011 = 909.0; this->f_S_6_21_Z = rt::touint_d(_v32011); _v32011; });
    ({ rt::Value _v32012 = rt::trv(rt::VS(g::LS[9242])); this->f_S_1i = rt::slot_string(_v32012); _v32012; });
    ({ rt::Value _v32013 = rt::VS(g::LS[9243]); this->f_S__5e__21__23_ = rt::slot_string(_v32013); _v32013; });
    ({ double _v32014 = 1e+153; this->f_S__23__21_m = _v32014; _v32014; });
    ({ double _v32015 = 6.0; this->f_S_9_21_m = rt::toint_d(_v32015); _v32015; });
    ({ double _v32016 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v32016); _v32016; });
    ({ double _v32017 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v32017); _v32017; });
    ({ bool _v32018 = true; this->f_S__3c__60_ = _v32018; _v32018; });
    ({ double _v32019 = 1.0; this->f_S__21__22_E = rt::touint_d(_v32019); _v32019; });
}
rt::Value C_S_0_22__3d_::m_S__40__22_() {
    RT_FN("S_0_22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9244]), C_S__26_c::sm_S_8_21_Z(C_S_0_22__3d_::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_0_22__3d_::g_S__2d_6() {
    RT_FN("S_0_22__3d_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 1.0);
    return false;
}
double C_S_0_22__3d_::sm_S__23__21_Y() {
    RT_FN("S_0_22__3d_.S__23__21_Y");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S__3e__21_h(C_S__26_c::dsm_S__3e__21_h_0(), C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.5));
    return 0.0;
}
C_S_0_22__3d_* C_S_0_22__3d_::alloc_() {
    C_S_0_22__3d_* o = rt::make<C_S_0_22__3d_>();
    return o;
}
rt::Value C_S_0_22__3d_::mk_(rt::Value* a, int n) {
    C_S_0_22__3d_* o = alloc_();
    o->C_S_0_22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S_0_22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0_22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0_22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0_22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0_22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S_0_22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22__3d___id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S_0_22_C::ctor_() {
    RT_FN("S_0_22_C.S_0_22_C");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v32020 = 921.0; this->f_S_6_21_Z = rt::touint_d(_v32020); _v32020; });
    ({ rt::Value _v32021 = rt::trv(rt::VS(g::LS[9245])); this->f_S_1i = rt::slot_string(_v32021); _v32021; });
    ({ rt::Value _v32022 = rt::VS(g::LS[9246]); this->f_S__5e__21__23_ = rt::slot_string(_v32022); _v32022; });
    ({ double _v32023 = 1e+183; this->f_S__23__21_m = _v32023; _v32023; });
    ({ double _v32024 = 6.0; this->f_S_9_21_m = rt::toint_d(_v32024); _v32024; });
    ({ double _v32025 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v32025); _v32025; });
    ({ double _v32026 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v32026); _v32026; });
    ({ bool _v32027 = true; this->f_S__21__21_n = _v32027; _v32027; });
    ({ double _v32028 = 10.0; this->f_S__21__22_E = rt::touint_d(_v32028); _v32028; });
}
rt::Value C_S_0_22_C::m_S__40__22_() {
    RT_FN("S_0_22_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9247]), C_S__26_c::sm_S_8_21_Z(C_S_0_22_C::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_0_22_C::g_S__2d_6() {
    RT_FN("S_0_22_C.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 4.0);
    return false;
}
double C_S_0_22_C::sm_S__2c__21_G() {
    RT_FN("S_0_22_C.S__2c__21_G");
    return (0.7 * rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 0.7));
    return 0.0;
}
C_S_0_22_C* C_S_0_22_C::alloc_() {
    C_S_0_22_C* o = rt::make<C_S_0_22_C>();
    return o;
}
rt::Value C_S_0_22_C::mk_(rt::Value* a, int n) {
    C_S_0_22_C* o = alloc_();
    o->C_S_0_22_C::ctor_();
    return rt::VO(o);
}
bool C_S_0_22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0_22_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0_22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0_22_C::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0_22_C::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_0_22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22_C__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22_C__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_2_22__3d_::ctor_() {
    RT_FN("S_2_22__3d_.S_2_22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v32029 = 918.0; this->f_S_6_21_Z = rt::touint_d(_v32029); _v32029; });
    ({ rt::Value _v32030 = rt::trv(rt::VS(g::LS[9248])); this->f_S_1i = rt::slot_string(_v32030); _v32030; });
    ({ rt::Value _v32031 = rt::VS(g::LS[9249]); this->f_S__5e__21__23_ = rt::slot_string(_v32031); _v32031; });
    ({ double _v32032 = 1e+173; this->f_S__23__21_m = _v32032; _v32032; });
    ({ double _v32033 = 6.0; this->f_S_9_21_m = rt::toint_d(_v32033); _v32033; });
    ({ double _v32034 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v32034); _v32034; });
    ({ double _v32035 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v32035); _v32035; });
    ({ bool _v32036 = true; this->f_S__3c__60_ = _v32036; _v32036; });
    ({ double _v32037 = 7.0; this->f_S__21__22_E = rt::touint_d(_v32037); _v32037; });
}
rt::Value C_S_2_22__3d_::m_S__40__22_() {
    RT_FN("S_2_22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[595]), C_S__26_c::sm_S_6_21_T(C_S_2_22__3d_::sm_S__27__21_b(), 3.0, true)));
    return rt::NUL;
}
bool C_S_2_22__3d_::g_S__2d_6() {
    RT_FN("S_2_22__3d_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 3.0);
    return false;
}
double C_S_2_22__3d_::sm_S__27__21_b() {
    RT_FN("S_2_22__3d_.S__27__21_b");
    return (25.0 + (2.5 * rt::m_pow(C_S__26_c::sm_S__21__21_8(), 0.5)));
    return 0.0;
}
C_S_2_22__3d_* C_S_2_22__3d_::alloc_() {
    C_S_2_22__3d_* o = rt::make<C_S_2_22__3d_>();
    return o;
}
rt::Value C_S_2_22__3d_::mk_(rt::Value* a, int n) {
    C_S_2_22__3d_* o = alloc_();
    o->C_S_2_22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S_2_22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2_22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2_22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2_22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2_22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_2_22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22__3d___id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_4_21_x::ctor_() {
    RT_FN("S_4_21_x.S_4_21_x");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v32038 = 912.0; this->f_S_6_21_Z = rt::touint_d(_v32038); _v32038; });
    ({ rt::Value _v32039 = rt::trv(rt::VS(g::LS[9250])); this->f_S_1i = rt::slot_string(_v32039); _v32039; });
    ({ rt::Value _v32040 = rt::VS(g::LS[9251]); this->f_S__5e__21__23_ = rt::slot_string(_v32040); _v32040; });
    ({ rt::Value _v32041 = rt::VS(g::LS[9215]); this->f_S__3f__21__3d_ = rt::slot_string(_v32041); _v32041; });
    ({ rt::Value _v32042 = rt::VS(g::LS[9215]); this->f_S__40_1 = rt::slot_string(_v32042); _v32042; });
    ({ rt::Value _v32043 = rt::trv(rt::VS(g::LS[9252])); this->f_S_7_23_ = rt::slot_string(_v32043); _v32043; });
    ({ double _v32044 = 6.0; this->f_S_9_21_m = rt::toint_d(_v32044); _v32044; });
    ({ double _v32045 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v32045); _v32045; });
    ({ double _v32046 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v32046); _v32046; });
    ({ bool _v32047 = false; this->f_S_3e = _v32047; _v32047; });
    ({ bool _v32048 = true; this->f_S__3c__60_ = _v32048; _v32048; });
}
int32_t C_S_4_21_x::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_4_21_x::dm_S_75_2() { return false; }
rt::Value C_S_4_21_x::dm_S_75_3() { return rt::NUL; }
double C_S_4_21_x::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_4_21_x.S_75");
    if (((((double)(l_param1)) == 1.0) || (((double)(l_param1)) == 3.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+51 : 1e+27);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S_4_21_x::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S_4_21_x.S_6r");
    if ((!(((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0)))) {
        return rt::NUL;
    }
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 138.0), rt::V(1.0))));
    ({ rt::Value _v32049 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(138.0), _v32049); });
    (void)(({ rt::Value _o32050 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32051 = rt::as_ptr<C_S_8G>(_o32050); _p32051 ? _p32051->m_S__3d__22__20_(rt::toint_d(15.0)) : rt::dcallv(_o32050, NM_S__3d__22__20_, rt::V(15.0)); }));
    return rt::NUL;
}
bool C_S_4_21_x::g_S__2d_6() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_4_21_x.S__2d_6_get");
    (l_A__loc1_ = rt::arr_lit({rt::V((double)(g::SV.C_S_3_21_m__id)), rt::V((double)(g::SV.C_S__3d__21_m__id)), rt::V((double)(g::SV.C_S_2_21_l__id)), rt::V((double)(g::SV.C_S_2_21_m__id)), rt::V((double)(g::SV.C_S__5d__21_n__id)), rt::V((double)(g::SV.C_S__27__21_l__id)), rt::V((double)(g::SV.C_S__2c__21_n__id)), rt::V((double)(g::SV.C_S_2_21_o__id)), rt::V((double)(g::SV.C_S__27__21_o__id)), rt::V((double)(g::SV.C_S_3_21_u__id)), rt::V((double)(g::SV.C_S__22__21_u__id)), rt::V(0.0), rt::V((double)(g::SV.C_S__60__21_u__id))}));
    return ({ bool _t32065 = ({ bool _t32064 = ({ bool _t32063 = ({ bool _t32062 = ({ bool _t32061 = ({ bool _t32060 = ({ bool _t32059 = ({ bool _t32058 = ({ bool _t32057 = ({ bool _t32056 = ({ bool _t32055 = (({ bool _t32053 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t32053 ? _t32053 : (bool)(({ bool _t32052 = (((double)(C_S_8G::sg_S_8_21_H())) >= 255.0); _t32052 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__22__22_I__id)) : _t32052; })); })); _t32055 ? (bool)((({ bool _t32054 = (((double)(C_S_8G::sg_S__2c_P())) < 3.0); _t32054 ? _t32054 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 172.0)); }))) : _t32055; }); _t32056 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)))) : _t32056; }); _t32057 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) : _t32057; }); _t32058 ? (bool)((!(((double)(g::SV.C_S_8G__S__23_3)) == (-1.0)))) : _t32058; }); _t32059 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0))) : _t32059; }); _t32060 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) : _t32060; }); _t32061 ? (bool)(C_S_8G::sm_S_7d(rt::touint(rt::arr_at(l_A__loc1_, ((double)(g::SV.C_S_8G__S__2d__21__5e_)))))) : _t32061; }); _t32062 ? (bool)(C_S_8G::sm_S_7d(rt::touint(rt::arr_at(l_A__loc1_, ((double)(g::SV.C_S_8G__S__23_3)))))) : _t32062; }); _t32063 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t32063; }); _t32064 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t32064; }); _t32065 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__27__21_z__id)) : _t32065; });
    return false;
}
C_S_4_21_x* C_S_4_21_x::alloc_() {
    C_S_4_21_x* o = rt::make<C_S_4_21_x>();
    return o;
}
rt::Value C_S_4_21_x::mk_(rt::Value* a, int n) {
    C_S_4_21_x* o = alloc_();
    o->C_S_4_21_x::ctor_();
    return rt::VO(o);
}
bool C_S_4_21_x::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_21_x::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_21_x::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_4_21_x::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_4_21_x::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_4_21_x::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_21_x::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_21_x::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_21_x::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_21_x__id)); return true;
    default: return false;
    }
}
bool C_S_4_21_x::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_21_x__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_21_x::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_22__3c_::ctor_() {
    RT_FN("S_5_22__3c_.S_5_22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v32066 = 920.0; this->f_S_6_21_Z = rt::touint_d(_v32066); _v32066; });
    ({ rt::Value _v32067 = rt::trv(rt::VS(g::LS[9253])); this->f_S_1i = rt::slot_string(_v32067); _v32067; });
    ({ rt::Value _v32068 = rt::VS(g::LS[9254]); this->f_S__5e__21__23_ = rt::slot_string(_v32068); _v32068; });
    ({ double _v32069 = 1e+165; this->f_S__23__21_m = _v32069; _v32069; });
    ({ double _v32070 = 6.0; this->f_S_9_21_m = rt::toint_d(_v32070); _v32070; });
    ({ double _v32071 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v32071); _v32071; });
    ({ double _v32072 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v32072); _v32072; });
    ({ bool _v32073 = true; this->f_S__3c__60_ = _v32073; _v32073; });
    ({ double _v32074 = 5.0; this->f_S__21__22_E = rt::touint_d(_v32074); _v32074; });
}
rt::Value C_S_5_22__3c_::m_S__40__22_() {
    RT_FN("S_5_22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9255]), C_S__26_c::sm_S_8_21_Z(C_S_5_22__3c_::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_5_22__3c_::g_S__2d_6() {
    RT_FN("S_5_22__3c_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 2.0);
    return false;
}
double C_S_5_22__3c_::sm_S__60_z() {
    RT_FN("S_5_22__3c_.S__60_z");
    return (27.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2()))), 2.75));
    return 0.0;
}
C_S_5_22__3c_* C_S_5_22__3c_::alloc_() {
    C_S_5_22__3c_* o = rt::make<C_S_5_22__3c_>();
    return o;
}
rt::Value C_S_5_22__3c_::mk_(rt::Value* a, int n) {
    C_S_5_22__3c_* o = alloc_();
    o->C_S_5_22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S_5_22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    default: return false;
    }
}
bool C_S_5_22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22__3c___id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    default: return false;
    }
}
void C_S_5_22__3f_::ctor_() {
    RT_FN("S_5_22__3f_.S_5_22__3f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v32075 = 906.0; this->f_S_6_21_Z = rt::touint_d(_v32075); _v32075; });
    ({ rt::Value _v32076 = rt::trv(rt::VS(g::LS[9256])); this->f_S_1i = rt::slot_string(_v32076); _v32076; });
    ({ rt::Value _v32077 = rt::VS(g::LS[9257]); this->f_S__5e__21__23_ = rt::slot_string(_v32077); _v32077; });
    ({ double _v32078 = 1e+167; this->f_S__23__21_m = _v32078; _v32078; });
    ({ double _v32079 = 6.0; this->f_S_9_21_m = rt::toint_d(_v32079); _v32079; });
    ({ double _v32080 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v32080); _v32080; });
    ({ double _v32081 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v32081); _v32081; });
    ({ bool _v32082 = true; this->f_S__3c__60_ = _v32082; _v32082; });
    ({ double _v32083 = 6.0; this->f_S__21__22_E = rt::touint_d(_v32083); _v32083; });
}
rt::Value C_S_5_22__3f_::m_S__40__22_() {
    RT_FN("S_5_22__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9258]), C_S__26_c::sm_S_8_21_Z(C_S_5_22__3f_::sm_S_1_3d_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_5_22__3f_::g_S__2d_6() {
    RT_FN("S_5_22__3f_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 2.0);
    return false;
}
double C_S_5_22__3f_::sm_S_1_3d_() {
    RT_FN("S_5_22__3f_.S_1_3d_");
    return (0.3 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.6));
    return 0.0;
}
C_S_5_22__3f_* C_S_5_22__3f_::alloc_() {
    C_S_5_22__3f_* o = rt::make<C_S_5_22__3f_>();
    return o;
}
rt::Value C_S_5_22__3f_::mk_(rt::Value* a, int n) {
    C_S_5_22__3f_* o = alloc_();
    o->C_S_5_22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S_5_22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_22__3f_::smeth_(int id) {
    switch (id) {
    case NM_S_1_3d_: return true;
    default: return false;
    }
}
bool C_S_5_22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22__3f___id)); return true;
    case NM_S_1_3d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_1_3d_: out = rt::V(sm_S_1_3d_()); return true;
    default: return false;
    }
}
void C_S_6_22_C::ctor_() {
    RT_FN("S_6_22_C.S_6_22_C");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v32084 = 908.0; this->f_S_6_21_Z = rt::touint_d(_v32084); _v32084; });
    ({ rt::Value _v32085 = rt::trv(rt::VS(g::LS[9259])); this->f_S_1i = rt::slot_string(_v32085); _v32085; });
    ({ rt::Value _v32086 = rt::VS(g::LS[9260]); this->f_S__5e__21__23_ = rt::slot_string(_v32086); _v32086; });
    ({ double _v32087 = 1e+163; this->f_S__23__21_m = _v32087; _v32087; });
    ({ double _v32088 = 6.0; this->f_S_9_21_m = rt::toint_d(_v32088); _v32088; });
    ({ double _v32089 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v32089); _v32089; });
    ({ double _v32090 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v32090); _v32090; });
    ({ bool _v32091 = true; this->f_S__3c__60_ = _v32091; _v32091; });
    ({ double _v32092 = 4.0; this->f_S__21__22_E = rt::touint_d(_v32092); _v32092; });
}
rt::Value C_S_6_22_C::m_S__40__22_() {
    RT_FN("S_6_22_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9261]), C_S__26_c::sm_S_8_21_Z(C_S_6_22_C::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_6_22_C::g_S__2d_6() {
    RT_FN("S_6_22_C.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 2.0);
    return false;
}
double C_S_6_22_C::sm_S__22__21__26_() {
    RT_FN("S_6_22_C.S__22__21__26_");
    return rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 0.95);
    return 0.0;
}
C_S_6_22_C* C_S_6_22_C::alloc_() {
    C_S_6_22_C* o = rt::make<C_S_6_22_C>();
    return o;
}
rt::Value C_S_6_22_C::mk_(rt::Value* a, int n) {
    C_S_6_22_C* o = alloc_();
    o->C_S_6_22_C::ctor_();
    return rt::VO(o);
}
bool C_S_6_22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_22_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_22_C::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_22_C::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S_6_22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22_C__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22_C__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S_9_22__3e_::ctor_() {
    RT_FN("S_9_22__3e_.S_9_22__3e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v32093 = 907.0; this->f_S_6_21_Z = rt::touint_d(_v32093); _v32093; });
    ({ rt::Value _v32094 = rt::trv(rt::VS(g::LS[9262])); this->f_S_1i = rt::slot_string(_v32094); _v32094; });
    ({ rt::Value _v32095 = rt::VS(g::LS[9263]); this->f_S__5e__21__23_ = rt::slot_string(_v32095); _v32095; });
    ({ double _v32096 = 1e+185; this->f_S__23__21_m = _v32096; _v32096; });
    ({ double _v32097 = 6.0; this->f_S_9_21_m = rt::toint_d(_v32097); _v32097; });
    ({ double _v32098 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v32098); _v32098; });
    ({ double _v32099 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v32099); _v32099; });
    ({ bool _v32100 = true; this->f_S__21__21_n = _v32100; _v32100; });
    ({ double _v32101 = 11.0; this->f_S__21__22_E = rt::touint_d(_v32101); _v32101; });
}
rt::Value C_S_9_22__3e_::m_S__40__22_() {
    RT_FN("S_9_22__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9264])));
    return rt::NUL;
}
bool C_S_9_22__3e_::g_S__2d_6() {
    RT_FN("S_9_22__3e_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 4.0);
    return false;
}
C_S_9_22__3e_* C_S_9_22__3e_::alloc_() {
    C_S_9_22__3e_* o = rt::make<C_S_9_22__3e_>();
    return o;
}
rt::Value C_S_9_22__3e_::mk_(rt::Value* a, int n) {
    C_S_9_22__3e_* o = alloc_();
    o->C_S_9_22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S_9_22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_22__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22__3e___id)); return true;
    default: return false;
    }
}
bool C_S_9_22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__21_z::ctor_() {
    RT_FN("S__5d__21_z.S__5d__21_z");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v32102 = 924.0; this->f_S_6_21_Z = rt::touint_d(_v32102); _v32102; });
    ({ rt::Value _v32103 = rt::trv(rt::VS(g::LS[9265])); this->f_S_1i = rt::slot_string(_v32103); _v32103; });
    ({ rt::Value _v32104 = rt::VS(g::LS[9266]); this->f_S__5e__21__23_ = rt::slot_string(_v32104); _v32104; });
    ({ double _v32105 = 6.0; this->f_S_9_21_m = rt::toint_d(_v32105); _v32105; });
    ({ double _v32106 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v32106); _v32106; });
    ({ double _v32107 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v32107); _v32107; });
}
rt::Value C_S__5d__21_z::m_S__40__22_() {
    RT_FN("S__5d__21_z.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1835]), C_S__26_c::sm_S_8_21_Z(C_S__5d__21_z::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
int32_t C_S__5d__21_z::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__5d__21_z::dm_S_75_2() { return false; }
rt::Value C_S__5d__21_z::dm_S_75_3() { return rt::NUL; }
double C_S__5d__21_z::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S__5d__21_z.S_75");
    (l_A__loc5_ = NAN);
    if (((((double)(l_param1)) == 1.0) || (((double)(l_param1)) == 3.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+48 : 1e+36);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__5d__21_z::g_S__2d_6() {
    RT_FN("S__5d__21_z.S__2d_6_get");
    return ({ bool _t32108 = C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[8088]))); _t32108 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t32108; });
    return false;
}
double C_S__5d__21_z::sm_S__3f__21__3c_() {
    RT_FN("S__5d__21_z.S__3f__21__3c_");
    return rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_9_21_P(g::SV.C_S_2_3c___id, false, true, C_S__26_c::dsm_S_9_21_P_3()))), 1.75);
    return 0.0;
}
C_S__5d__21_z* C_S__5d__21_z::alloc_() {
    C_S__5d__21_z* o = rt::make<C_S__5d__21_z>();
    return o;
}
rt::Value C_S__5d__21_z::mk_(rt::Value* a, int n) {
    C_S__5d__21_z* o = alloc_();
    o->C_S__5d__21_z::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21_z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5d__21_z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5d__21_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__5d__21_z::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__5d__21_z::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__5d__21_z::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5d__21_z::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5d__21_z::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__5d__21_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21_z__id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__21_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21_z__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__21_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__25__21_B::ctor_() {
    RT_FN("S__25__21_B.S__25__21_B");
    (void)(rt::NUL);
}
uint32_t C_S__25__21_B::m_S_6z() {
    RT_FN("S__25__21_B.S_6z");
    return ((uint32_t)(rt::bitand_(((double)(this->f_S__3e_S)), 4294967295.0)));
    return 0u;
}
rt::Value C_S__25__21_B::m_S_4_21_H() {
    RT_FN("S__25__21_B.S_4_21_H");
    ({ double _v32109 = 0.0; this->f_S__3e_S = rt::touint_d(_v32109); _v32109; });
    return rt::NUL;
}
uint32_t C_S__25__21_B::dm_S__21__21_G_1() { return rt::touint_d(0.0); }
rt::Value C_S__25__21_B::m_S__21__21_G(rt::Value p0, uint32_t p1) {
    rt::Value l_param1 = p0;
    uint32_t l_param2 = p1;
    uint32_t l_A__loc5_ = 0u;
    uint32_t l_A__loc4_ = 0u;
    uint32_t l_A__loc3_ = 0u;
    RT_FN("S__25__21_B.S__21__21_G");
    (l_A__loc5_ = rt::touint_d(0.0));
    (l_A__loc4_ = rt::touint_d(((((double)(l_param2)) > 0.0) ? ((double)(l_param2)) : rt::alen(l_param1))));
    (l_A__loc3_ = ((uint32_t)(rt::bitnot_(((double)(this->f_S__3e_S))))));
    while ((({ double _old32110 = ((double)(l_A__loc4_)); l_A__loc4_ = rt::touint_d((_old32110 + -1.0)); (_old32110 + -1.0); }) >= 0.0)) {
        (l_A__loc3_ = ((uint32_t)(rt::bitxor_(rt::tonum(rt::arr_at(g::SV.C_S__25__21_B__S__3f__21_4, ((double)(rt::bitand_(((double)((rt::bitxor_(((double)(l_A__loc3_)), rt::tonum(rt::idx_get(l_param1, rt::V(({ double _old32111 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::touint_d((_old32111 + 1.0)); _old32111; })))))))), 255.0))))), rt::ushr(((double)(l_A__loc3_)), 8.0)))));
    }
    ({ int32_t _v32112 = rt::bitnot_(((double)(l_A__loc3_))); this->f_S__3e_S = ((uint32_t)(_v32112)); _v32112; });
    return rt::NUL;
}
rt::Value C_S__25__21_B::sm_S__27_G() {
    int32_t l_A__loc4_ = 0;
    rt::Value l_A__loc1_ = rt::UNDEF;
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__25__21_B.S__27_G");
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::V(0.0));
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::new_arrayv(rt::V(256.0)));
    (l_A__loc4_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc4_)) < 256.0)) {
        (l_A__loc1_ = rt::V((double)(((uint32_t)(l_A__loc4_)))));
        (l_A__loc3_ = rt::toint_d(8.0));
        while ((({ double _old32113 = ((double)(l_A__loc3_)); l_A__loc3_ = rt::toint_d((_old32113 + -1.0)); (_old32113 + -1.0); }) >= 0.0)) {
            if ((!(((double)((rt::bitand_(rt::tonum(l_A__loc1_), 1.0)))) == 0.0))) {
                (l_A__loc1_ = rt::V((double)(((uint32_t)(rt::bitxor_(3988292384.0, rt::ushr(rt::tonum(l_A__loc1_), 1.0)))))));
            } else {
                (l_A__loc1_ = rt::V(rt::ushr(rt::tonum(l_A__loc1_), 1.0)));
            }
        }
        ({ rt::Value _v32114 = l_A__loc1_; rt::idx_set(l_A__loc2_, rt::V((double)(l_A__loc4_)), _v32114); });
        (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
    }
    return l_A__loc2_;
    return rt::NUL;
}
C_S__25__21_B* C_S__25__21_B::alloc_() {
    C_S__25__21_B* o = rt::make<C_S__25__21_B>();
    return o;
}
rt::Value C_S__25__21_B::mk_(rt::Value* a, int n) {
    C_S__25__21_B* o = alloc_();
    o->C_S__25__21_B::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e_S: out = rt::V((double)(f_S__3e_S)); return true;
    case NM_S_6z: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_4_21_H: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__25__21_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3e_S: f_S__3e_S = rt::touint(v); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__25__21_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6z: out = rt::V((double)(m_S_6z())); return true;
    case NM_S_4_21_H: out = m_S_4_21_H(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<uint32_t>(a, n, 1, C_S__25__21_B::dm_S__21__21_G_1())); return true;
    case NM_S__3e_S: { rt::Value f = rt::V((double)(f_S__3e_S)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__25__21_B::dmeth(int id) {
    switch (id) {
    case NM_S_6z: return true;
    case NM_S_4_21_H: return true;
    case NM_S__21__21_G: return true;
    case NM_S__3e_S: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__25__21_B::smeth_(int id) {
    switch (id) {
    case NM_S__27_G: return true;
    default: return false;
    }
}
bool C_S__25__21_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21_4: out = g::SV.C_S__25__21_B__S__3f__21_4; return true;
    case NM_S__27_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__21_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__3f__21_4: g::SV.C_S__25__21_B__S__3f__21_4 = v; return true;
    default: return false;
    }
}
bool C_S__25__21_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_G: out = sm_S__27_G(); return true;
    default: return false;
    }
}
void C_S__26_W::ctor_() {
    RT_FN("S__26_W.S__26_W");
    (void)(rt::NUL);
    ({ double _v32115 = 1.0; this->f_S__3e_n = rt::touint_d(_v32115); _v32115; });
}
uint32_t C_S__26_W::m_S_2h() {
    RT_FN("S__26_W.S_2h");
    return this->m_S__27__21_C();
    return 0u;
}
double C_S__26_W::m_S__2d__21_A() {
    RT_FN("S__26_W.S__2d__21_A");
    return (((double)(this->m_S__27__21_C())) / 2147483647.0);
    return 0.0;
}
uint32_t C_S__26_W::m_S__5d_Q(double p0, double p1) {
    double l_param1 = p0;
    double l_param2 = p1;
    RT_FN("S__26_W.S__5d_Q");
    (l_param1 = (l_param1 - 0.4999));
    (l_param2 = (l_param2 + 0.4999));
    return rt::touint_d(rt::m_round((l_param1 + (((l_param2 - l_param1)) * this->m_S__2d__21_A()))));
    return 0u;
}
double C_S__26_W::m_S_6t(double p0, double p1) {
    double l_param1 = p0;
    double l_param2 = p1;
    RT_FN("S__26_W.S_6t");
    return (l_param1 + (((l_param2 - l_param1)) * this->m_S__2d__21_A()));
    return 0.0;
}
uint32_t C_S__26_W::m_S__27__21_C() {
    uint32_t l_A__loc1_ = 0u;
    uint32_t l_A__loc2_ = 0u;
    RT_FN("S__26_W.S__27__21_C");
    (l_A__loc1_ = rt::touint_d((16807.0 * ((double)((rt::shr(((double)(this->f_S__3e_n)), 16.0)))))));
    (l_A__loc2_ = rt::touint_d((((16807.0 * ((double)((rt::bitand_(((double)(this->f_S__3e_n)), 65535.0))))) + ((double)((rt::shl(((double)((rt::bitand_(((double)(l_A__loc1_)), 32767.0)))), 16.0))))) + ((double)((rt::shr(((double)(l_A__loc1_)), 15.0)))))));
    return rt::touint_d(({ double _v32116 = ((((double)(l_A__loc2_)) > 2147483647.0) ? (((double)(l_A__loc2_)) - 2147483647.0) : ((double)(l_A__loc2_))); this->f_S__3e_n = rt::touint_d(_v32116); _v32116; }));
    return 0u;
}
C_S__26_W* C_S__26_W::alloc_() {
    C_S__26_W* o = rt::make<C_S__26_W>();
    return o;
}
rt::Value C_S__26_W::mk_(rt::Value* a, int n) {
    C_S__26_W* o = alloc_();
    o->C_S__26_W::ctor_();
    return rt::VO(o);
}
bool C_S__26_W::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e_n: out = rt::V((double)(f_S__3e_n)); return true;
    case NM_S_2h: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2d__21_A: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5d_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6t: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__26_W::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3e_n: f_S__3e_n = rt::touint(v); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__26_W::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2h: out = rt::V((double)(m_S_2h())); return true;
    case NM_S__2d__21_A: out = rt::V(m_S__2d__21_A()); return true;
    case NM_S__5d_Q: out = rt::V((double)(m_S__5d_Q(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, NAN)))); return true;
    case NM_S_6t: out = rt::V(m_S_6t(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, NAN))); return true;
    case NM_S__27__21_C: out = rt::V((double)(m_S__27__21_C())); return true;
    case NM_S__3e_n: { rt::Value f = rt::V((double)(f_S__3e_n)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__26_W::dmeth(int id) {
    switch (id) {
    case NM_S_2h: return true;
    case NM_S__2d__21_A: return true;
    case NM_S__5d_Q: return true;
    case NM_S_6t: return true;
    case NM_S__27__21_C: return true;
    case NM_S__3e_n: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__26_W::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26_W::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26_W::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26_W::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__21_V::ctor_() {
    RT_FN("S__27__21_V.S__27__21_V");
    (void)(rt::NUL);
}
rt::Value C_S__27__21_V::sm_S_56(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc3_ = rt::UNDEF;
    rt::Value l_A__loc7_ = rt::NUL;
    int32_t l_A__loc6_ = 0;
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc4_ = 0;
    int32_t l_A__loc5_ = 0;
    RT_FN("S__27__21_V.S_56");
    (l_A__loc3_ = rt::V(0.0));
    (l_A__loc7_ = rt::new_bytearray());
    ({ rt::Value _v32117 = rt::V((((((2.0 + rt::alen(l_param1)) - rt::mod(((rt::alen(l_param1) + 2.0)), 3.0))) * 4.0) / 3.0)); rt::dset(l_A__loc7_, rt::N_length, _v32117); _v32117; });
    (l_A__loc6_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::toint_d(rt::mod(rt::alen(l_param1), 3.0)));
    (l_A__loc4_ = rt::toint_d((rt::alen(l_param1) - ((double)(l_A__loc2_)))));
    (l_A__loc5_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc6_)) < ((double)(l_A__loc4_)))) {
        (l_A__loc3_ = rt::V((double)(((uint32_t)(rt::bitor_(((double)(rt::bitor_(((double)(rt::shl(rt::tonum(rt::idx_get(l_param1, rt::V(({ double _old32118 = ((double)(l_A__loc6_)); l_A__loc6_ = rt::toint_d((_old32118 + 1.0)); _old32118; })))), 16.0))), ((double)(rt::shl(rt::tonum(rt::idx_get(l_param1, rt::V(({ double _old32119 = ((double)(l_A__loc6_)); l_A__loc6_ = rt::toint_d((_old32119 + 1.0)); _old32119; })))), 8.0)))))), rt::tonum(rt::idx_get(l_param1, rt::V(({ double _old32120 = ((double)(l_A__loc6_)); l_A__loc6_ = rt::toint_d((_old32120 + 1.0)); _old32120; }))))))))));
        ({ rt::Value _v32121 = rt::arr_at(g::SV.C_S__27__21_V__S__20__21_4, rt::ushr(rt::tonum(l_A__loc3_), 18.0)); rt::idx_set(l_A__loc7_, rt::V(({ double _old32122 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32122 + 1.0)); _old32122; })), _v32121); });
        ({ rt::Value _v32123 = rt::arr_at(g::SV.C_S__27__21_V__S__20__21_4, ((double)(rt::bitand_(rt::ushr(rt::tonum(l_A__loc3_), 12.0), 63.0)))); rt::idx_set(l_A__loc7_, rt::V(({ double _old32124 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32124 + 1.0)); _old32124; })), _v32123); });
        ({ rt::Value _v32125 = rt::arr_at(g::SV.C_S__27__21_V__S__20__21_4, ((double)(rt::bitand_(rt::ushr(rt::tonum(l_A__loc3_), 6.0), 63.0)))); rt::idx_set(l_A__loc7_, rt::V(({ double _old32126 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32126 + 1.0)); _old32126; })), _v32125); });
        ({ rt::Value _v32127 = rt::arr_at(g::SV.C_S__27__21_V__S__20__21_4, ((double)(rt::bitand_(rt::tonum(l_A__loc3_), 63.0)))); rt::idx_set(l_A__loc7_, rt::V(({ double _old32128 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32128 + 1.0)); _old32128; })), _v32127); });
    }
    if ((((double)(l_A__loc2_)) == 1.0)) {
        (l_A__loc3_ = rt::V((double)(rt::touint(rt::idx_get(l_param1, rt::V((double)(l_A__loc6_)))))));
        ({ rt::Value _v32129 = rt::arr_at(g::SV.C_S__27__21_V__S__20__21_4, rt::ushr(rt::tonum(l_A__loc3_), 2.0)); rt::idx_set(l_A__loc7_, rt::V(({ double _old32130 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32130 + 1.0)); _old32130; })), _v32129); });
        ({ rt::Value _v32131 = rt::arr_at(g::SV.C_S__27__21_V__S__20__21_4, ((double)(rt::shl(((double)((rt::bitand_(rt::tonum(l_A__loc3_), 3.0)))), 4.0)))); rt::idx_set(l_A__loc7_, rt::V(({ double _old32132 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32132 + 1.0)); _old32132; })), _v32131); });
        ({ rt::Value _v32133 = rt::V(61.0); rt::idx_set(l_A__loc7_, rt::V(({ double _old32134 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32134 + 1.0)); _old32134; })), _v32133); });
        ({ rt::Value _v32135 = rt::V(61.0); rt::idx_set(l_A__loc7_, rt::V(({ double _old32136 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32136 + 1.0)); _old32136; })), _v32135); });
    } else if ((((double)(l_A__loc2_)) == 2.0)) {
        (l_A__loc3_ = rt::V((double)(((uint32_t)(rt::bitor_(((double)(rt::shl(rt::tonum(rt::idx_get(l_param1, rt::V(({ double _old32137 = ((double)(l_A__loc6_)); l_A__loc6_ = rt::toint_d((_old32137 + 1.0)); _old32137; })))), 8.0))), rt::tonum(rt::idx_get(l_param1, rt::V((double)(l_A__loc6_))))))))));
        ({ rt::Value _v32138 = rt::arr_at(g::SV.C_S__27__21_V__S__20__21_4, rt::ushr(rt::tonum(l_A__loc3_), 10.0)); rt::idx_set(l_A__loc7_, rt::V(({ double _old32139 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32139 + 1.0)); _old32139; })), _v32138); });
        ({ rt::Value _v32140 = rt::arr_at(g::SV.C_S__27__21_V__S__20__21_4, ((double)(rt::bitand_(rt::ushr(rt::tonum(l_A__loc3_), 4.0), 63.0)))); rt::idx_set(l_A__loc7_, rt::V(({ double _old32141 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32141 + 1.0)); _old32141; })), _v32140); });
        ({ rt::Value _v32142 = rt::arr_at(g::SV.C_S__27__21_V__S__20__21_4, ((double)(rt::shl(((double)((rt::bitand_(rt::tonum(l_A__loc3_), 15.0)))), 2.0)))); rt::idx_set(l_A__loc7_, rt::V(({ double _old32143 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32143 + 1.0)); _old32143; })), _v32142); });
        ({ rt::Value _v32144 = rt::V(61.0); rt::idx_set(l_A__loc7_, rt::V(({ double _old32145 = ((double)(l_A__loc5_)); l_A__loc5_ = rt::toint_d((_old32145 + 1.0)); _old32145; })), _v32144); });
    }
    return rt::slot_string(rt::dcallv(l_A__loc7_, rt::N_readUTFBytes, rt::V(rt::alen(l_A__loc7_))));
    return rt::NUL;
}
rt::Value C_S__27__21_V::sm_S_0_2b_(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    int32_t l_A__loc8_ = 0;
    int32_t l_A__loc9_ = 0;
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc3_ = 0;
    int32_t l_A__loc7_ = 0;
    int32_t l_A__loc4_ = 0;
    rt::Value l_A__loc5_ = rt::NUL;
    int32_t l_A__loc6_ = 0;
    RT_FN("S__27__21_V.S_0_2b_");
    (l_A__loc8_ = rt::toint_d(0.0));
    (l_A__loc9_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc7_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::toint_d(rt::alen(l_param1)));
    (l_A__loc5_ = rt::new_bytearray());
    (void)(rt::dcallv(l_A__loc5_, rt::N_writeUTFBytes, l_param1));
    (l_A__loc6_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc7_)) < ((double)(l_A__loc4_)))) {
        (l_A__loc8_ = rt::toint(rt::arr_at(g::SV.C_S__27__21_V__S__5d_J, ((double)(rt::toint(rt::idx_get(l_A__loc5_, rt::V(({ double _old32146 = ((double)(l_A__loc7_)); l_A__loc7_ = rt::toint_d((_old32146 + 1.0)); _old32146; })))))))));
        if ((((double)(l_A__loc8_)) == (-1.0))) {
            break;
        }
        (l_A__loc9_ = rt::toint(rt::arr_at(g::SV.C_S__27__21_V__S__5d_J, ((double)(rt::toint(rt::idx_get(l_A__loc5_, rt::V(({ double _old32147 = ((double)(l_A__loc7_)); l_A__loc7_ = rt::toint_d((_old32147 + 1.0)); _old32147; })))))))));
        if ((((double)(l_A__loc9_)) == (-1.0))) {
            break;
        }
        ({ rt::Value _v32148 = rt::V((double)(rt::bitor_(((double)(rt::shl(((double)(l_A__loc8_)), 2.0))), ((double)(rt::shr(((double)((rt::bitand_(((double)(l_A__loc9_)), 48.0)))), 4.0)))))); rt::idx_set(l_A__loc5_, rt::V(({ double _old32149 = ((double)(l_A__loc6_)); l_A__loc6_ = rt::toint_d((_old32149 + 1.0)); _old32149; })), _v32148); });
        (l_A__loc2_ = rt::toint(rt::idx_get(l_A__loc5_, rt::V(({ double _old32150 = ((double)(l_A__loc7_)); l_A__loc7_ = rt::toint_d((_old32150 + 1.0)); _old32150; })))));
        if ((((double)(l_A__loc2_)) == 61.0)) {
            ({ rt::Value _v32151 = rt::V((double)(l_A__loc6_)); rt::dset(l_A__loc5_, rt::N_length, _v32151); _v32151; });
            return l_A__loc5_;
        }
        (l_A__loc2_ = rt::toint(rt::arr_at(g::SV.C_S__27__21_V__S__5d_J, ((double)(l_A__loc2_)))));
        if ((((double)(l_A__loc2_)) == (-1.0))) {
            break;
        }
        ({ rt::Value _v32152 = rt::V((double)(rt::bitor_(((double)(rt::shl(((double)((rt::bitand_(((double)(l_A__loc9_)), 15.0)))), 4.0))), ((double)(rt::shr(((double)((rt::bitand_(((double)(l_A__loc2_)), 60.0)))), 2.0)))))); rt::idx_set(l_A__loc5_, rt::V(({ double _old32153 = ((double)(l_A__loc6_)); l_A__loc6_ = rt::toint_d((_old32153 + 1.0)); _old32153; })), _v32152); });
        (l_A__loc3_ = rt::toint(rt::idx_get(l_A__loc5_, rt::V(({ double _old32154 = ((double)(l_A__loc7_)); l_A__loc7_ = rt::toint_d((_old32154 + 1.0)); _old32154; })))));
        if ((((double)(l_A__loc3_)) == 61.0)) {
            ({ rt::Value _v32155 = rt::V((double)(l_A__loc6_)); rt::dset(l_A__loc5_, rt::N_length, _v32155); _v32155; });
            return l_A__loc5_;
        }
        (l_A__loc3_ = rt::toint(rt::arr_at(g::SV.C_S__27__21_V__S__5d_J, ((double)(l_A__loc3_)))));
        if ((((double)(l_A__loc3_)) == (-1.0))) {
            break;
        }
        ({ rt::Value _v32156 = rt::V((double)(rt::bitor_(((double)(rt::shl(((double)((rt::bitand_(((double)(l_A__loc2_)), 3.0)))), 6.0))), ((double)(l_A__loc3_))))); rt::idx_set(l_A__loc5_, rt::V(({ double _old32157 = ((double)(l_A__loc6_)); l_A__loc6_ = rt::toint_d((_old32157 + 1.0)); _old32157; })), _v32156); });
    }
    ({ rt::Value _v32158 = rt::V((double)(l_A__loc6_)); rt::dset(l_A__loc5_, rt::N_length, _v32158); _v32158; });
    return l_A__loc5_;
    return rt::NUL;
}
rt::Value C_S__27__21_V::sm_S_3_21_O() {
    int32_t l_A__loc1_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__27__21_V.S_3_21_O");
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::new_vectorv(rt::E_INT, rt::V(64.0), rt::VB(true)));
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) < 64.0)) {
        ({ rt::Value _v32159 = rt::dcallv(rt::VS(g::LS[9267]), rt::N_charCodeAt, rt::V((double)(l_A__loc1_))); rt::idx_set(l_A__loc2_, rt::V((double)(l_A__loc1_)), _v32159); });
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    return l_A__loc2_;
    return rt::NUL;
}
rt::Value C_S__27__21_V::sm_S_0_21_b() {
    RT_FN("S__27__21_V.S_0_21_b");
    return rt::arr_lit({rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V(62.0), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V(63.0), rt::V(52.0), rt::V(53.0), rt::V(54.0), rt::V(55.0), rt::V(56.0), rt::V(57.0), rt::V(58.0), rt::V(59.0), rt::V(60.0), rt::V(61.0), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V(0.0), rt::V(1.0), rt::V(2.0), rt::V(3.0), rt::V(4.0), rt::V(5.0), rt::V(6.0), rt::V(7.0), rt::V(8.0), rt::V(9.0), rt::V(10.0), rt::V(11.0), rt::V(12.0), rt::V(13.0), rt::V(14.0), rt::V(15.0), rt::V(16.0), rt::V(17.0), rt::V(18.0), rt::V(19.0), rt::V(20.0), rt::V(21.0), rt::V(22.0), rt::V(23.0), rt::V(24.0), rt::V(25.0), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V(26.0), rt::V(27.0), rt::V(28.0), rt::V(29.0), rt::V(30.0), rt::V(31.0), rt::V(32.0), rt::V(33.0), rt::V(34.0), rt::V(35.0), rt::V(36.0), rt::V(37.0), rt::V(38.0), rt::V(39.0), rt::V(40.0), rt::V(41.0), rt::V(42.0), rt::V(43.0), rt::V(44.0), rt::V(45.0), rt::V(46.0), rt::V(47.0), rt::V(48.0), rt::V(49.0), rt::V(50.0), rt::V(51.0), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0)), rt::V((-1.0))});
    return rt::NUL;
}
C_S__27__21_V* C_S__27__21_V::alloc_() {
    C_S__27__21_V* o = rt::make<C_S__27__21_V>();
    return o;
}
rt::Value C_S__27__21_V::mk_(rt::Value* a, int n) {
    C_S__27__21_V* o = alloc_();
    o->C_S__27__21_V::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_V::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__27__21_V::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__27__21_V::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__27__21_V::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__27__21_V::smeth_(int id) {
    switch (id) {
    case NM_S_56: return true;
    case NM_S_0_2b_: return true;
    case NM_S_3_21_O: return true;
    case NM_S_0_21_b: return true;
    default: return false;
    }
}
bool C_S__27__21_V::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_4: out = g::SV.C_S__27__21_V__S__20__21_4; return true;
    case NM_S__5d_J: out = g::SV.C_S__27__21_V__S__5d_J; return true;
    case NM_S_56: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_0_2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3_21_O: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_0_21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__21_V::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_4: g::SV.C_S__27__21_V__S__20__21_4 = v; return true;
    case NM_S__5d_J: g::SV.C_S__27__21_V__S__5d_J = v; return true;
    default: return false;
    }
}
bool C_S__27__21_V::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_56: out = sm_S_56(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S_0_2b_: out = sm_S_0_2b_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S_3_21_O: out = sm_S_3_21_O(); return true;
    case NM_S_0_21_b: out = sm_S_0_21_b(); return true;
    default: return false;
    }
}
void C_S__2c__22_::ctor_() {
    RT_FN("S__2c__22_.S__2c__22_");
    (void)(rt::NUL);
}
rt::Value C_S__2c__22_::sm_S__22_A() {
    int32_t l_A__loc3_ = 0;
    int32_t l_A__loc4_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    double l_A__loc5_ = NAN;
    RT_FN("S__2c__22_.S__22_A");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc1_ = ({ C_S_7_21__20_* _n32160 = C_S_7_21__20_::alloc_(); _n32160->C_S_7_21__20_::ctor_(); rt::VO(_n32160); }));
    (l_A__loc2_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < 8.0)) {
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::dcallv(rt::VS(g::LS[9268]), rt::N_charAt, rt::V(rt::m_round(({ rt::Value _o32161 = l_A__loc1_; C_S_7_21__20_* _p32162 = rt::as_ptr<C_S_7_21__20_>(_o32161); _p32162 ? _p32162->m_S__3b__21__2c_(0.0, 61.0) : rt::tonum(rt::dcallv(_o32161, NM_S__3b__21__2c_, rt::V(0.0), rt::V(61.0))); })))))));
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < 3.0)) {
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::VS(g::LS[134]))));
        (l_A__loc4_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc4_)) < 4.0)) {
            (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::dcallv(rt::VS(g::LS[9268]), rt::N_charAt, rt::V(rt::m_round(({ rt::Value _o32163 = l_A__loc1_; C_S_7_21__20_* _p32164 = rt::as_ptr<C_S_7_21__20_>(_o32163); _p32164 ? _p32164->m_S__3b__21__2c_(0.0, 61.0) : rt::tonum(rt::dcallv(_o32163, NM_S__3b__21__2c_, rt::V(0.0), rt::V(61.0))); })))))));
            (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
        }
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::VS(g::LS[134]))));
    (l_A__loc5_ = rt::tonum(rt::dcallv(rt::new_datev(), rt::N_getTime)));
    (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::dcallv((rt::add(rt::VS(g::LS[9269]), rt::dcallv(rt::dcallv(rt::V(l_A__loc5_), rt::N_toString, rt::V(16.0)), rt::N_toUpperCase))), rt::N_substr, rt::V((-8.0))))));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < 4.0)) {
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::dcallv(rt::VS(g::LS[9268]), rt::N_charAt, rt::V(rt::m_round(({ rt::Value _o32165 = l_A__loc1_; C_S_7_21__20_* _p32166 = rt::as_ptr<C_S_7_21__20_>(_o32165); _p32166 ? _p32166->m_S__3b__21__2c_(0.0, 61.0) : rt::tonum(rt::dcallv(_o32165, NM_S__3b__21__2c_, rt::V(0.0), rt::V(61.0))); })))))));
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    return rt::slot_string(l_A__loc2_);
    return rt::NUL;
}
C_S__2c__22_* C_S__2c__22_::alloc_() {
    C_S__2c__22_* o = rt::make<C_S__2c__22_>();
    return o;
}
rt::Value C_S__2c__22_::mk_(rt::Value* a, int n) {
    C_S__2c__22_* o = alloc_();
    o->C_S__2c__22_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__2c__22_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__2c__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__2c__22_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__2c__22_::smeth_(int id) {
    switch (id) {
    case NM_S__22_A: return true;
    default: return false;
    }
}
bool C_S__2c__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_1_21__5d_: out = g::SV.C_S__2c__22___S_1_21__5d_; return true;
    case NM_S__22_A: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_1_21__5d_: g::SV.C_S__2c__22___S_1_21__5d_ = rt::slot_string(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22_A: out = sm_S__22_A(); return true;
    default: return false;
    }
}
void C_S_2_21_c::ctor_() {
    RT_FN("S_2_21_c.S_2_21_c");
    (void)(rt::NUL);
}
rt::Value C_S_2_21_c::sm_S__2b__21__26_(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("S_2_21_c.S__2b__21__26_");
    if (g::SV.C_S_2_21_c__S_0_21__5d_) {
        return rt::NUL;
    }
    (g::SV.C_S_2_21_c__S_2r = rt::shared_object_get_local(nullptr, 0));
    (g::SV.C_S_2_21_c__S_0_21__5d_ = true);
    return rt::NUL;
}
bool C_S_2_21_c::sm_S__40_i(bool p0) {
    bool l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_error = rt::UNDEF;
    RT_FN("S_2_21_c.S__40_i");
    (l_A__loc2_ = rt::slot_string(rt::NUL));
    if ((!g::SV.C_S_2_21_c__S_0_21__5d_)) {
        return false;
    }
    if (l_param1) {
        (l_A__loc2_ = rt::slot_string(rt::NUL));
        try {
            (l_A__loc2_ = rt::slot_string(rt::dcallv(g::SV.C_S_2_21_c__S_2r, rt::N_flush, rt::V(102400.0))));
        } catch (...) {
            l_error = rt::cur_exc();
            return false;
        }
        if (((!rt::eq(l_A__loc2_, rt::NUL)) && rt::eq(l_A__loc2_, rt::VS(g::LS[9270])))) {
            (void)(rt::dcallv(g::SV.C_S_2_21_c__S_2r, NM_addEventListener, rt::VS(g::LS[9271]), rt::dget(rt::VO(C_S_2_21_c::CI.ref), NM_S__40__21__26_)));
            return false;
        }
    }
    (void)(rt::dcallv(g::SV.C_S_2_21_c__S_2r, rt::N_close));
    (g::SV.C_S_2_21_c__S_2r = rt::NUL);
    (g::SV.C_S_2_21_c__S_0_21__5d_ = false);
    (g::SV.C_S_2_21_c__S_3_21__5e_ = false);
    return true;
    return false;
}
bool C_S_2_21_c::sm_S__25_R() {
    RT_FN("S_2_21_c.S__25_R");
    if (((!g::SV.C_S_2_21_c__S_0_21__5d_) || (!rt::T(rt::dcallv(rt::dget(g::SV.C_S_2_21_c__S_2r, rt::N_data), rt::N_hasOwnProperty, rt::VS(g::LS[5092])))))) {
        (g::SV.C_S_2_21_c__data = rt::dict_lit({}));
        (g::SV.C_S_2_21_c__S_3_21__5e_ = false);
        return false;
    }
    (g::SV.C_S_2_21_c__data = C_S_2_21_c::sm_S__21_Z(rt::idx_get(rt::dget(g::SV.C_S_2_21_c__S_2r, rt::N_data), rt::VS(g::LS[5092])), false));
    (g::SV.C_S_2_21_c__S_3_21__5e_ = true);
    return true;
    return false;
}
rt::Value C_S_2_21_c::sm_S__20_2() {
    RT_FN("S_2_21_c.S__20_2");
    ({ rt::Value _v32167 = C_S_2_21_c::sm_S__26_a(rt::idx_get(g::SV.C_S_2_21_c__data, rt::VS(g::LS[226])), false); rt::idx_set(rt::dget(g::SV.C_S_2_21_c__S_2r, rt::N_data), rt::VS(g::LS[5092]), _v32167); });
    return rt::NUL;
}
int32_t C_S_2_21_c::sm_S__40__21_8(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc3_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_e = rt::UNDEF;
    RT_FN("S_2_21_c.S__40__21_8");
    (l_A__loc3_ = rt::NUL);
    (l_A__loc2_ = rt::NUL);
    try {
        (l_A__loc3_ = C_S_2_21_c::sm_S__21_Z(rt::idx_get(rt::idx_get(rt::dget(rt::VO(C_S__3c__21_d::CI.ref), NM_S__3d_q), rt::VS(g::LS[5092])), rt::VS(g::LS[5093])), true));
        (l_A__loc2_ = rt::idx_get(l_A__loc3_, rt::VS(g::LS[226])));
        return rt::toint(rt::dcallv(l_A__loc2_, rt::N_readUnsignedShort));
    } catch (...) {
        l_e = rt::cur_exc();
    }
    return rt::toint_d(0.0);
    return 0;
}
rt::Value C_S_2_21_c::sm_S__40__21__26_(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S_2_21_c.S__40__21__26_");
    if ((!rt::eq(g::SV.C_S_2_21_c__S_2r, rt::NUL))) {
        (void)(rt::dcallv(g::SV.C_S_2_21_c__S_2r, NM_removeEventListener, rt::VS(g::LS[9271]), rt::dget(rt::VO(C_S_2_21_c::CI.ref), NM_S__40__21__26_)));
    }
    return rt::NUL;
}
rt::Value C_S_2_21_c::sm_S__26_a(rt::Value p0, bool p1) {
    rt::Value l_param1 = p0;
    bool l_param2 = p1;
    int32_t l_A__loc3_ = 0;
    RT_FN("S_2_21_c.S__26_a");
    (l_A__loc3_ = rt::toint_d(0.0));
    (void)(({ rt::Value _o32168 = g::SV.C_S_2_21_c__S__3e_q; C_S__25__21_B* _p32169 = rt::as_ptr<C_S__25__21_B>(_o32168); _p32169 ? _p32169->m_S_4_21_H() : rt::dcallv(_o32168, NM_S_4_21_H); }));
    (void)(({ rt::Value _o32170 = g::SV.C_S_2_21_c__S__3e_q; C_S__25__21_B* _p32171 = rt::as_ptr<C_S__25__21_B>(_o32170); _p32171 ? _p32171->m_S__21__21_G(l_param1, C_S__25__21_B::dm_S__21__21_G_1()) : rt::dcallv(_o32170, NM_S__21__21_G, l_param1); }));
    (void)(rt::dcallv(l_param1, rt::N_writeUnsignedInt, rt::V((double)(({ rt::Value _o32172 = g::SV.C_S_2_21_c__S__3e_q; C_S__25__21_B* _p32173 = rt::as_ptr<C_S__25__21_B>(_o32172); _p32173 ? _p32173->m_S_6z() : rt::touint(rt::dcallv(_o32172, NM_S_6z)); })))));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < rt::alen(l_param1))) {
        ({ rt::Value _o32174 = l_param1; rt::Value _i32175 = rt::V((double)(l_A__loc3_)); rt::Value _v32176 = rt::V((double)(rt::bitxor_(rt::tonum(rt::idx_get(_o32174, _i32175)), ((double)(rt::toint(rt::dcallv(rt::VS(g::LS[9272]), rt::N_charCodeAt, rt::V(rt::mod(((double)(l_A__loc3_)), 14.0))))))))); rt::idx_set(_o32174, _i32175, _v32176); _v32176; });
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    (void)(rt::dcallv(l_param1, rt::N_compress, rt::VS(g::LS[9273])));
    (g::SV.C_S_2_21_c__S_3_21_W = rt::slot_string(rt::add(rt::add(rt::VS(g::LS[9274]), C_S__27__21_V::sm_S_56(l_param1)), rt::VS(g::LS[9275]))));
    return rt::slot_string(g::SV.C_S_2_21_c__S_3_21_W);
    return rt::NUL;
}
rt::Value C_S_2_21_c::sm_S__21_Z(rt::Value p0, bool p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    bool l_param2 = p1;
    rt::Value l_A__loc4_ = rt::NUL;
    int32_t l_A__loc8_ = 0;
    rt::Value l_A__loc3_ = rt::UNDEF;
    int32_t l_A__loc9_ = 0;
    rt::Value l_A__loc5_ = rt::UNDEF;
    rt::Value l_A__loc7_ = rt::NUL;
    rt::Value l_A__loc6_ = rt::NUL;
    rt::Value l_e = rt::UNDEF;
    RT_FN("S_2_21_c.S__21_Z");
    (l_A__loc4_ = rt::NUL);
    (l_A__loc8_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::V(0.0));
    (l_A__loc9_ = rt::toint_d(0.0));
    (l_A__loc5_ = rt::V(0.0));
    (l_A__loc7_ = rt::NUL);
    (l_A__loc6_ = rt::NUL);
    if (rt::eq(rt::dcallv(l_param1, rt::N_substr, rt::V(0.0), rt::V(4.0)), rt::VS(g::LS[9274]))) {
        if ((!rt::eq(rt::dcallv(l_param1, rt::N_substr, rt::V((rt::alen(l_param1) - 2.0)), rt::V(2.0)), rt::VS(g::LS[9275])))) {
            return rt::dict_lit({});
        }
        (l_param1 = rt::slot_string(rt::dcallv(l_param1, rt::N_substr, rt::V(4.0), rt::V((rt::alen(l_param1) - 6.0)))));
        (l_A__loc4_ = C_S__27__21_V::sm_S_0_2b_(l_param1));
        ({ rt::Value _v32177 = rt::V(0.0); rt::dset(l_A__loc4_, rt::N_position, _v32177); _v32177; });
        try {
            (void)(rt::dcallv(l_A__loc4_, rt::N_uncompress, rt::VS(g::LS[9273])));
        } catch (...) {
            l_e = rt::cur_exc();
            return rt::dict_lit({});
        }
        (l_A__loc8_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc8_)) < rt::alen(l_A__loc4_))) {
            ({ rt::Value _o32178 = l_A__loc4_; rt::Value _i32179 = rt::V((double)(l_A__loc8_)); rt::Value _v32180 = rt::V((double)(rt::bitxor_(rt::tonum(rt::idx_get(_o32178, _i32179)), ((double)(rt::toint(rt::dcallv(rt::VS(g::LS[9272]), rt::N_charCodeAt, rt::V(rt::mod(((double)(l_A__loc8_)), 14.0))))))))); rt::idx_set(_o32178, _i32179, _v32180); _v32180; });
            (l_A__loc8_ = rt::toint_d((((double)(l_A__loc8_)) + 1.0)));
        }
        (void)(({ rt::Value _o32181 = g::SV.C_S_2_21_c__S__3e_q; C_S__25__21_B* _p32182 = rt::as_ptr<C_S__25__21_B>(_o32181); _p32182 ? _p32182->m_S_4_21_H() : rt::dcallv(_o32181, NM_S_4_21_H); }));
        ({ rt::Value _v32183 = rt::V((rt::alen(l_A__loc4_) - 4.0)); rt::dset(l_A__loc4_, rt::N_position, _v32183); _v32183; });
        (l_A__loc3_ = rt::dcallv(l_A__loc4_, rt::N_readUnsignedInt));
        (void)(({ rt::Value _o32184 = g::SV.C_S_2_21_c__S__3e_q; C_S__25__21_B* _p32185 = rt::as_ptr<C_S__25__21_B>(_o32184); _p32185 ? _p32185->m_S__21__21_G(l_A__loc4_, rt::touint_d((rt::alen(l_A__loc4_) - 4.0))) : rt::dcallv(_o32184, NM_S__21__21_G, l_A__loc4_, rt::V((rt::alen(l_A__loc4_) - 4.0))); }));
        if ((!rt::eq(l_A__loc3_, rt::V((double)(({ rt::Value _o32186 = g::SV.C_S_2_21_c__S__3e_q; C_S__25__21_B* _p32187 = rt::as_ptr<C_S__25__21_B>(_o32186); _p32187 ? _p32187->m_S_6z() : rt::touint(rt::dcallv(_o32186, NM_S_6z)); })))))) {
            return rt::dict_lit({});
        }
        ({ rt::Value _v32188 = rt::V(0.0); rt::dset(l_A__loc4_, rt::N_position, _v32188); _v32188; });
        return rt::dict_lit({{rt::VS(g::LS[226]), l_A__loc4_}});
    }
    if (rt::eq(rt::dcallv(l_param1, rt::N_substr, rt::V(0.0), rt::V(2.0)), rt::VS(g::LS[9276]))) {
        if ((!l_param2)) {
            (l_A__loc9_ = rt::toint(rt::dcallv(l_param1, rt::N_indexOf, rt::VS(g::LS[9275]))));
            if ((rt::eq(rt::dcallv(l_param1, rt::N_substr, rt::V(0.0), rt::V(3.0)), rt::VS(g::LS[9277])) && (((double)(l_A__loc9_)) > 0.0))) {
                (l_A__loc5_ = rt::V((double)(rt::touint(rt::dcallv(l_param1, rt::N_substr, rt::V((((double)(l_A__loc9_)) + 2.0)))))));
                (l_param1 = rt::slot_string(rt::dcallv(l_param1, rt::N_substr, rt::V(3.0), rt::V((((double)(l_A__loc9_)) - 3.0)))));
                (l_A__loc7_ = C_S__27__21_V::sm_S_0_2b_(l_param1));
                ({ rt::Value _v32189 = rt::V(0.0); rt::dset(l_A__loc7_, rt::N_position, _v32189); _v32189; });
                (void)(({ rt::Value _o32190 = g::SV.C_S_2_21_c__S__3e_q; C_S__25__21_B* _p32191 = rt::as_ptr<C_S__25__21_B>(_o32190); _p32191 ? _p32191->m_S_4_21_H() : rt::dcallv(_o32190, NM_S_4_21_H); }));
                (void)(({ rt::Value _o32192 = g::SV.C_S_2_21_c__S__3e_q; C_S__25__21_B* _p32193 = rt::as_ptr<C_S__25__21_B>(_o32192); _p32193 ? _p32193->m_S__21__21_G(l_A__loc7_, C_S__25__21_B::dm_S__21__21_G_1()) : rt::dcallv(_o32192, NM_S__21__21_G, l_A__loc7_); }));
                if ((!rt::eq(l_A__loc5_, rt::V((double)(({ rt::Value _o32194 = g::SV.C_S_2_21_c__S__3e_q; C_S__25__21_B* _p32195 = rt::as_ptr<C_S__25__21_B>(_o32194); _p32195 ? _p32195->m_S_6z() : rt::touint(rt::dcallv(_o32194, NM_S_6z)); })))))) {
                    return rt::dict_lit({});
                }
                ({ rt::Value _v32196 = rt::V(0.0); rt::dset(l_A__loc7_, rt::N_position, _v32196); _v32196; });
                return rt::dict_lit({{rt::VS(g::LS[5092]), rt::dcallv(rt::VO(C_JSON::CI.ref), NM_parse, rt::dcallv(l_A__loc7_, rt::N_readUTFBytes, rt::dget(l_A__loc7_, rt::N_bytesAvailable)))}});
            }
            return rt::dict_lit({{rt::VS(g::LS[5092]), rt::dcallv(rt::VO(C_JSON::CI.ref), NM_parse, l_param1)}});
        }
        if (((!rt::eq(rt::dcallv(l_param1, rt::N_substr, rt::V(0.0), rt::V(2.0)), rt::VS(g::LS[9276]))) || (!rt::eq(rt::dcallv(l_param1, rt::N_substr, rt::V((rt::alen(l_param1) - 2.0)), rt::V(2.0)), rt::VS(g::LS[9275]))))) {
            return rt::dict_lit({});
        }
        (l_param1 = rt::slot_string(rt::dcallv(l_param1, rt::N_substr, rt::V(2.0), rt::V((rt::alen(l_param1) - 4.0)))));
        (l_A__loc6_ = C_S__27__21_V::sm_S_0_2b_(l_param1));
        ({ rt::Value _v32197 = rt::V(0.0); rt::dset(l_A__loc6_, rt::N_position, _v32197); _v32197; });
        (void)(rt::dcallv(l_A__loc6_, rt::N_uncompress, rt::VS(g::LS[9273])));
        return rt::dict_lit({{rt::VS(g::LS[5092]), rt::dcallv(rt::VO(C_JSON::CI.ref), NM_parse, rt::dcallv(l_A__loc6_, rt::N_readUTFBytes, rt::dget(l_A__loc6_, rt::N_bytesAvailable)))}});
    }
    return rt::dict_lit({});
    return rt::NUL;
}
C_S_2_21_c* C_S_2_21_c::alloc_() {
    C_S_2_21_c* o = rt::make<C_S_2_21_c>();
    return o;
}
rt::Value C_S_2_21_c::mk_(rt::Value* a, int n) {
    C_S_2_21_c* o = alloc_();
    o->C_S_2_21_c::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_c::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S_2_21_c::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S_2_21_c::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S_2_21_c::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S_2_21_c::smeth_(int id) {
    switch (id) {
    case NM_S__2b__21__26_: return true;
    case NM_S__40_i: return true;
    case NM_S__25_R: return true;
    case NM_S__20_2: return true;
    case NM_S__40__21_8: return true;
    case NM_S__40__21__26_: return true;
    case NM_S__26_a: return true;
    case NM_S__21_Z: return true;
    default: return false;
    }
}
bool C_S_2_21_c::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_2r: out = g::SV.C_S_2_21_c__S_2r; return true;
    case NM_S_0_21__5d_: out = rt::VB(g::SV.C_S_2_21_c__S_0_21__5d_); return true;
    case NM_S_3_21__5e_: out = rt::VB(g::SV.C_S_2_21_c__S_3_21__5e_); return true;
    case NM_S_3_21_W: out = g::SV.C_S_2_21_c__S_3_21_W; return true;
    case NM_S_5g: out = g::SV.C_S_2_21_c__S_5g; return true;
    case rt::N_data: out = g::SV.C_S_2_21_c__data; return true;
    case NM_S__3e_q: out = g::SV.C_S_2_21_c__S__3e_q; return true;
    case NM_S__2b__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40_i: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__25_R: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__20_2: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__21_8: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__26_a: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__21_Z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_21_c::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_2r: g::SV.C_S_2_21_c__S_2r = v; return true;
    case NM_S_0_21__5d_: g::SV.C_S_2_21_c__S_0_21__5d_ = rt::T(v); return true;
    case NM_S_3_21__5e_: g::SV.C_S_2_21_c__S_3_21__5e_ = rt::T(v); return true;
    case NM_S_3_21_W: g::SV.C_S_2_21_c__S_3_21_W = rt::slot_string(v); return true;
    case NM_S_5g: g::SV.C_S_2_21_c__S_5g = rt::slot_string(v); return true;
    case rt::N_data: g::SV.C_S_2_21_c__data = v; return true;
    case NM_S__3e_q: g::SV.C_S_2_21_c__S__3e_q = v; return true;
    default: return false;
    }
}
bool C_S_2_21_c::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21__26_: out = sm_S__2b__21__26_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__40_i: out = rt::VB(sm_S__40_i(rt::arg<bool>(a, n, 0, false))); return true;
    case NM_S__25_R: out = rt::VB(sm_S__25_R()); return true;
    case NM_S__20_2: out = sm_S__20_2(); return true;
    case NM_S__40__21_8: out = rt::V((double)(sm_S__40__21_8(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)))); return true;
    case NM_S__40__21__26_: out = sm_S__40__21__26_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__26_a: out = sm_S__26_a(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, false)); return true;
    case NM_S__21_Z: out = sm_S__21_Z(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, false)); return true;
    default: return false;
    }
}
void C_S_3F::ctor_(int32_t p0, int32_t p1, int32_t p2) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    RT_FN("S_3F.S_3F");
    (void)(rt::NUL);
    ({ rt::Value _v32200 = ({ C_S_7_21__20_* _n32199 = C_S_7_21__20_::alloc_(); _n32199->C_S_7_21__20_::ctor_(); rt::VO(_n32199); }); this->f_S_2_5b_ = _v32200; _v32200; });
    ({ rt::Value _v32201 = rt::dict_lit({}); this->f_S_7_21_0 = _v32201; _v32201; });
    ({ int32_t _v32202 = l_param1; this->s_S_8_21__2b_(_v32202); _v32202; });
    ({ int32_t _v32203 = l_param2; this->f_S_7Z = _v32203; _v32203; });
    ({ int32_t _v32204 = l_param3; this->f_S__5e_E = _v32204; _v32204; });
}
int32_t C_S_3F::g_S_8_21__2b_() {
    RT_FN("S_3F.S_8_21__2b__get");
    ({ double _v32205 = (((double)(this->f_S__3f_Q)) + 1.0); this->f_S__3f_Q = rt::toint_d(_v32205); _v32205; });
    if ((((double)(this->f_S__3f_Q)) >= ((double)(this->f_S_7Z)))) {
        ({ double _v32206 = 0.0; this->f_S__3f_Q = rt::toint_d(_v32206); _v32206; });
        if (((!((((double)((rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[122]))), ((double)(this->f_S__20__3c_)))))) + ((double)(this->f_S__20__3c_))) == ((double)((rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[6881]))), ((double)(this->f_S__20__3c_)))))))) || (!rt::eq(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[249])), rt::V((double)((rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[122]))), ((double)(this->f_S__20__3c_)))))))))) {
            ({ int32_t _v32207 = this->f_S__5e_E; this->f_S__3b__21_O = _v32207; _v32207; });
            ({ double _v32208 = (((double)((rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[6881]))), ((double)(this->f_S__20__3c_)))))) - ((double)(this->f_S__20__3c_))); this->s_S_8_21__2b_(rt::toint_d(_v32208)); _v32208; });
        }
    }
    return rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[122]))), ((double)(this->f_S__20__3c_)));
    return 0;
}
rt::Value C_S_3F::s_S_8_21__2b_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_3F.S_8_21__2b__set");
    ({ double _v32209 = (((double)(this->f_S__3b__21_O)) + 1.0); this->f_S__3b__21_O = rt::toint_d(_v32209); _v32209; });
    if ((((double)(this->f_S__3b__21_O)) >= ((double)(this->f_S__5e_E)))) {
        ({ double _v32210 = 0.0; this->f_S__3b__21_O = rt::toint_d(_v32210); _v32210; });
        ({ double _v32213 = rt::m_round(({ rt::Value _o32211 = this->f_S_2_5b_; C_S_7_21__20_* _p32212 = rt::as_ptr<C_S_7_21__20_>(_o32211); _p32212 ? _p32212->m_S__3b__21__2c_(185.0, 947.0) : rt::tonum(rt::dcallv(_o32211, NM_S__3b__21__2c_, rt::V(185.0), rt::V(947.0))); })); this->f_S__20__3c_ = rt::toint_d(_v32213); _v32213; });
        ({ rt::Value _v32214 = rt::dict_lit({}); this->f_S_7_21_0 = _v32214; _v32214; });
    }
    ({ rt::Value _v32215 = rt::V((double)(l_param1)); rt::idx_set(this->f_S_7_21_0, rt::VS(g::LS[249]), _v32215); });
    ({ rt::Value _v32216 = rt::V((double)(rt::bitxor_(((double)(l_param1)), ((double)(this->f_S__20__3c_))))); rt::idx_set(this->f_S_7_21_0, rt::VS(g::LS[122]), _v32216); });
    ({ rt::Value _v32217 = rt::V((double)(rt::bitxor_((((double)(l_param1)) + ((double)(this->f_S__20__3c_))), ((double)(this->f_S__20__3c_))))); rt::idx_set(this->f_S_7_21_0, rt::VS(g::LS[6881]), _v32217); });
    return rt::NUL;
}
C_S_3F* C_S_3F::alloc_() {
    C_S_3F* o = rt::make<C_S_3F>();
    return o;
}
rt::Value C_S_3F::mk_(rt::Value* a, int n) {
    C_S_3F* o = alloc_();
    o->C_S_3F::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0));
    return rt::VO(o);
}
bool C_S_3F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21__2b_: out = rt::V((double)(g_S_8_21__2b_())); return true;
    case NM_S_2_5b_: out = f_S_2_5b_; return true;
    case NM_S__20__3c_: out = rt::V((double)(f_S__20__3c_)); return true;
    case NM_S_7_21_0: out = f_S_7_21_0; return true;
    case NM_S_7Z: out = rt::V((double)(f_S_7Z)); return true;
    case NM_S__3f_Q: out = rt::V((double)(f_S__3f_Q)); return true;
    case NM_S__5e_E: out = rt::V((double)(f_S__5e_E)); return true;
    case NM_S__3b__21_O: out = rt::V((double)(f_S__3b__21_O)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S_3F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_2_5b_: f_S_2_5b_ = v; return true;
    case NM_S__20__3c_: f_S__20__3c_ = rt::toint(v); return true;
    case NM_S_7_21_0: f_S_7_21_0 = v; return true;
    case NM_S_7Z: f_S_7Z = rt::toint(v); return true;
    case NM_S__3f_Q: f_S__3f_Q = rt::toint(v); return true;
    case NM_S__5e_E: f_S__5e_E = rt::toint(v); return true;
    case NM_S__3b__21_O: f_S__3b__21_O = rt::toint(v); return true;
    case NM_S_8_21__2b_: s_S_8_21__2b_(rt::toint(v)); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S_3F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21__2b_: { rt::Value f = rt::V((double)(g_S_8_21__2b_())); out = rt::call_value(f, a, n); return true; }
    case NM_S_2_5b_: { rt::Value f = f_S_2_5b_; out = rt::call_value(f, a, n); return true; }
    case NM_S__20__3c_: { rt::Value f = rt::V((double)(f_S__20__3c_)); out = rt::call_value(f, a, n); return true; }
    case NM_S_7_21_0: { rt::Value f = f_S_7_21_0; out = rt::call_value(f, a, n); return true; }
    case NM_S_7Z: { rt::Value f = rt::V((double)(f_S_7Z)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f_Q: { rt::Value f = rt::V((double)(f_S__3f_Q)); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e_E: { rt::Value f = rt::V((double)(f_S__5e_E)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3b__21_O: { rt::Value f = rt::V((double)(f_S__3b__21_O)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S_3F::dmeth(int id) {
    switch (id) {
    case NM_S_8_21__2b_: return false;
    case NM_S_2_5b_: return false;
    case NM_S__20__3c_: return false;
    case NM_S_7_21_0: return false;
    case NM_S_7Z: return false;
    case NM_S__3f_Q: return false;
    case NM_S__5e_E: return false;
    case NM_S__3b__21_O: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S_3F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3F::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3F::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4l::ctor_(double p0, int32_t p1, int32_t p2) {
    double l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    RT_FN("S_4l.S_4l");
    (void)(rt::NUL);
    ({ rt::Value _v32219 = ({ C_S_7_21__20_* _n32218 = C_S_7_21__20_::alloc_(); _n32218->C_S_7_21__20_::ctor_(); rt::VO(_n32218); }); this->f_S_2_5b_ = _v32219; _v32219; });
    ({ rt::Value _v32220 = rt::dict_lit({}); this->f_S_7_21_0 = _v32220; _v32220; });
    ({ double _v32221 = l_param1; this->s_S_8_21__2b_(_v32221); _v32221; });
    ({ int32_t _v32222 = l_param2; this->f_S_7Z = _v32222; _v32222; });
    ({ int32_t _v32223 = l_param3; this->f_S__5e_E = _v32223; _v32223; });
}
double C_S_4l::g_S_8_21__2b_() {
    RT_FN("S_4l.S_8_21__2b__get");
    ({ double _v32224 = (((double)(this->f_S__3f_Q)) + 1.0); this->f_S__3f_Q = rt::toint_d(_v32224); _v32224; });
    if ((((double)(this->f_S__3f_Q)) >= ((double)(this->f_S_7Z)))) {
        ({ double _v32225 = 0.0; this->f_S__3f_Q = rt::toint_d(_v32225); _v32225; });
        if (((!((((double)((rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[122]))), ((double)(this->f_S__20__3c_)))))) + ((double)(this->f_S__20__3c_))) == ((double)((rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[6881]))), ((double)(this->f_S__20__3c_)))))))) || (!(((double)(rt::toint_d((((double)(rt::toint(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[249]))))) * 0.9)))) == ((double)((rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[122]))), ((double)(this->f_S__20__3c_)))))))))) {
            ({ int32_t _v32226 = this->f_S__5e_E; this->f_S__3b__21_O = _v32226; _v32226; });
            ({ double _v32227 = 0.0; this->s_S_8_21__2b_(_v32227); _v32227; });
        }
    }
    return rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[249])));
    return 0.0;
}
rt::Value C_S_4l::s_S_8_21__2b_(double p0) {
    double l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    RT_FN("S_4l.S_8_21__2b__set");
    ({ double _v32228 = (((double)(this->f_S__3b__21_O)) + 1.0); this->f_S__3b__21_O = rt::toint_d(_v32228); _v32228; });
    if ((((double)(this->f_S__3b__21_O)) >= ((double)(this->f_S__5e_E)))) {
        ({ double _v32229 = 0.0; this->f_S__3b__21_O = rt::toint_d(_v32229); _v32229; });
        ({ double _v32232 = rt::m_round(({ rt::Value _o32230 = this->f_S_2_5b_; C_S_7_21__20_* _p32231 = rt::as_ptr<C_S_7_21__20_>(_o32230); _p32231 ? _p32231->m_S__3b__21__2c_(185.0, 947.0) : rt::tonum(rt::dcallv(_o32230, NM_S__3b__21__2c_, rt::V(185.0), rt::V(947.0))); })); this->f_S__20__3c_ = rt::toint_d(_v32232); _v32232; });
        ({ rt::Value _v32233 = rt::dict_lit({}); this->f_S_7_21_0 = _v32233; _v32233; });
    }
    ({ rt::Value _v32234 = rt::V(l_param1); rt::idx_set(this->f_S_7_21_0, rt::VS(g::LS[249]), _v32234); });
    (l_A__loc2_ = rt::toint_d((((double)(rt::toint(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[249]))))) * 0.9)));
    ({ rt::Value _v32235 = rt::V((double)(rt::bitxor_(((double)(l_A__loc2_)), ((double)(this->f_S__20__3c_))))); rt::idx_set(this->f_S_7_21_0, rt::VS(g::LS[122]), _v32235); });
    ({ rt::Value _v32236 = rt::V((double)(rt::bitxor_((((double)(l_A__loc2_)) + ((double)(this->f_S__20__3c_))), ((double)(this->f_S__20__3c_))))); rt::idx_set(this->f_S_7_21_0, rt::VS(g::LS[6881]), _v32236); });
    return rt::NUL;
}
C_S_4l* C_S_4l::alloc_() {
    C_S_4l* o = rt::make<C_S_4l>();
    return o;
}
rt::Value C_S_4l::mk_(rt::Value* a, int n) {
    C_S_4l* o = alloc_();
    o->C_S_4l::ctor_(rt::arg<double>(a, n, 0, NAN), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0));
    return rt::VO(o);
}
bool C_S_4l::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21__2b_: out = rt::V(g_S_8_21__2b_()); return true;
    case NM_S_2_5b_: out = f_S_2_5b_; return true;
    case NM_S__20__3c_: out = rt::V((double)(f_S__20__3c_)); return true;
    case NM_S_7_21_0: out = f_S_7_21_0; return true;
    case NM_S_7Z: out = rt::V((double)(f_S_7Z)); return true;
    case NM_S__3f_Q: out = rt::V((double)(f_S__3f_Q)); return true;
    case NM_S__5e_E: out = rt::V((double)(f_S__5e_E)); return true;
    case NM_S__3b__21_O: out = rt::V((double)(f_S__3b__21_O)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S_4l::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_2_5b_: f_S_2_5b_ = v; return true;
    case NM_S__20__3c_: f_S__20__3c_ = rt::toint(v); return true;
    case NM_S_7_21_0: f_S_7_21_0 = v; return true;
    case NM_S_7Z: f_S_7Z = rt::toint(v); return true;
    case NM_S__3f_Q: f_S__3f_Q = rt::toint(v); return true;
    case NM_S__5e_E: f_S__5e_E = rt::toint(v); return true;
    case NM_S__3b__21_O: f_S__3b__21_O = rt::toint(v); return true;
    case NM_S_8_21__2b_: s_S_8_21__2b_(rt::tonum(v)); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S_4l::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21__2b_: { rt::Value f = rt::V(g_S_8_21__2b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S_2_5b_: { rt::Value f = f_S_2_5b_; out = rt::call_value(f, a, n); return true; }
    case NM_S__20__3c_: { rt::Value f = rt::V((double)(f_S__20__3c_)); out = rt::call_value(f, a, n); return true; }
    case NM_S_7_21_0: { rt::Value f = f_S_7_21_0; out = rt::call_value(f, a, n); return true; }
    case NM_S_7Z: { rt::Value f = rt::V((double)(f_S_7Z)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f_Q: { rt::Value f = rt::V((double)(f_S__3f_Q)); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e_E: { rt::Value f = rt::V((double)(f_S__5e_E)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3b__21_O: { rt::Value f = rt::V((double)(f_S__3b__21_O)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S_4l::dmeth(int id) {
    switch (id) {
    case NM_S_8_21__2b_: return false;
    case NM_S_2_5b_: return false;
    case NM_S__20__3c_: return false;
    case NM_S_7_21_0: return false;
    case NM_S_7Z: return false;
    case NM_S__3f_Q: return false;
    case NM_S__5e_E: return false;
    case NM_S__3b__21_O: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S_4l::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4l::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4l::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4l::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_21__20_::ctor_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_7_21__20_.S_7_21__20_");
    (void)((this->C_S__26_W::ctor_(), rt::NUL));
    (l_A__loc1_ = rt::new_datev());
    ({ int32_t _v32237 = rt::bitand_((rt::m_random() * rt::tonum(rt::dcallv(l_A__loc1_, rt::N_getTime))), 2147483647.0); this->f_S__3e_n = ((uint32_t)(_v32237)); _v32237; });
}
double C_S_7_21__20_::m_S__22_X() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_7_21__20_.S__22_X");
    (l_A__loc1_ = rt::NUL);
    if ((((double)(this->f_S__3e_n)) == 0.0)) {
        (l_A__loc1_ = rt::new_datev());
        ({ int32_t _v32238 = rt::bitand_((rt::m_random() * rt::tonum(rt::dcallv(l_A__loc1_, rt::N_getTime))), 2147483647.0); this->f_S__3e_n = ((uint32_t)(_v32238)); _v32238; });
    }
    return this->m_S__2d__21_A();
    return 0.0;
}
double C_S_7_21__20_::m_S__3b__21__2c_(double p0, double p1) {
    double l_param1 = p0;
    double l_param2 = p1;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S_7_21__20_.S__3b__21__2c_");
    (l_A__loc3_ = rt::NUL);
    if ((((double)(this->f_S__3e_n)) == 0.0)) {
        (l_A__loc3_ = rt::new_datev());
        ({ int32_t _v32239 = rt::bitand_((rt::m_random() * rt::tonum(rt::dcallv(l_A__loc3_, rt::N_getTime))), 2147483647.0); this->f_S__3e_n = ((uint32_t)(_v32239)); _v32239; });
    }
    return (l_param1 + (((l_param2 - l_param1)) * this->m_S__2d__21_A()));
    return 0.0;
}
C_S_7_21__20_* C_S_7_21__20_::alloc_() {
    C_S_7_21__20_* o = rt::make<C_S_7_21__20_>();
    return o;
}
rt::Value C_S_7_21__20_::mk_(rt::Value* a, int n) {
    C_S_7_21__20_* o = alloc_();
    o->C_S_7_21__20_::ctor_();
    return rt::VO(o);
}
bool C_S_7_21__20_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__22_X: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3b__21__2c_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26_W::dget(id, out);
}
bool C_S_7_21__20_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26_W::dset(id, v);
}
bool C_S_7_21__20_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22_X: out = rt::V(m_S__22_X()); return true;
    case NM_S__3b__21__2c_: out = rt::V(m_S__3b__21__2c_(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, NAN))); return true;
    default: break;
    }
    return C_S__26_W::dcall(id, a, n, out);
}
bool C_S_7_21__20_::dmeth(int id) {
    switch (id) {
    case NM_S__22_X: return true;
    case NM_S__3b__21__2c_: return true;
    default: break;
    }
    return C_S__26_W::dmeth(id);
}
bool C_S_7_21__20_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_21__20_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_21__20_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_21__20_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
uint32_t C_S__3b_m::dctor_0() { return rt::touint_d(0.0); }
void C_S__3b_m::ctor_(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S__3b_m.S__3b_m");
    (void)(rt::NUL);
    ({ uint32_t _v32240 = l_param1; this->f_S_0_3b_ = _v32240; _v32240; });
}
rt::Value C_S__3b_m::m_S_4_21__3e_(uint32_t p0, bool p1) {
    uint32_t l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S__3b_m.S_4_21__3e_");
    if (l_param2) {
        ({ int32_t _v32241 = rt::bitor_(((double)(this->f_S_0_3b_)), ((double)(rt::shl(1.0, ((double)(l_param1)))))); this->f_S_0_3b_ = ((uint32_t)(_v32241)); _v32241; });
    } else {
        ({ int32_t _v32242 = rt::bitand_(((double)(this->f_S_0_3b_)), ((double)(rt::bitnot_(((double)((rt::shl(1.0, ((double)(l_param1)))))))))); this->f_S_0_3b_ = ((uint32_t)(_v32242)); _v32242; });
    }
    return rt::NUL;
}
bool C_S__3b_m::m_S__27_W(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S__3b_m.S__27_W");
    return ((rt::bitand_(((double)(this->f_S_0_3b_)), ((double)(rt::shl(1.0, ((double)(l_param1))))))) != 0);
    return false;
}
C_S__3b_m* C_S__3b_m::alloc_() {
    C_S__3b_m* o = rt::make<C_S__3b_m>();
    return o;
}
rt::Value C_S__3b_m::mk_(rt::Value* a, int n) {
    C_S__3b_m* o = alloc_();
    o->C_S__3b_m::ctor_(rt::arg<uint32_t>(a, n, 0, C_S__3b_m::dctor_0()));
    return rt::VO(o);
}
bool C_S__3b_m::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_0_3b_: out = rt::V((double)(f_S_0_3b_)); return true;
    case NM_S_4_21__3e_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_W: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__3b_m::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_0_3b_: f_S_0_3b_ = rt::touint(v); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__3b_m::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_21__3e_: out = m_S_4_21__3e_(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<bool>(a, n, 1, false)); return true;
    case NM_S__27_W: out = rt::VB(m_S__27_W(rt::arg<uint32_t>(a, n, 0, 0u))); return true;
    case NM_S_0_3b_: { rt::Value f = rt::V((double)(f_S_0_3b_)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__3b_m::dmeth(int id) {
    switch (id) {
    case NM_S_4_21__3e_: return true;
    case NM_S__27_W: return true;
    case NM_S_0_3b_: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__3b_m::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_m::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_m::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_m::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__21_L::ctor_(uint32_t p0, int32_t p1, int32_t p2) {
    uint32_t l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    RT_FN("S__3d__21_L.S__3d__21_L");
    (void)(rt::NUL);
    ({ rt::Value _v32244 = ({ C_S_7_21__20_* _n32243 = C_S_7_21__20_::alloc_(); _n32243->C_S_7_21__20_::ctor_(); rt::VO(_n32243); }); this->f_S_2_5b_ = _v32244; _v32244; });
    ({ rt::Value _v32245 = rt::dict_lit({}); this->f_S_7_21_0 = _v32245; _v32245; });
    ({ uint32_t _v32246 = l_param1; this->s_S_8_21__2b_(_v32246); _v32246; });
    ({ int32_t _v32247 = l_param2; this->f_S_7Z = _v32247; _v32247; });
    ({ int32_t _v32248 = l_param3; this->f_S__5e_E = _v32248; _v32248; });
}
uint32_t C_S__3d__21_L::g_S_8_21__2b_() {
    RT_FN("S__3d__21_L.S_8_21__2b__get");
    ({ double _v32249 = (((double)(this->f_S__3f_Q)) + 1.0); this->f_S__3f_Q = rt::toint_d(_v32249); _v32249; });
    if ((((double)(this->f_S__3f_Q)) >= ((double)(this->f_S_7Z)))) {
        ({ double _v32250 = 0.0; this->f_S__3f_Q = rt::toint_d(_v32250); _v32250; });
        if (((!((((double)((rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[122]))), ((double)(this->f_S__20__3c_)))))) + ((double)(this->f_S__20__3c_))) == ((double)((rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[6881]))), ((double)(this->f_S__20__3c_)))))))) || (!rt::eq(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[249])), rt::V((double)((rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[122]))), ((double)(this->f_S__20__3c_)))))))))) {
            ({ int32_t _v32251 = this->f_S__5e_E; this->f_S__3b__21_O = _v32251; _v32251; });
            ({ double _v32252 = (((double)((rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[6881]))), ((double)(this->f_S__20__3c_)))))) - ((double)(this->f_S__20__3c_))); this->s_S_8_21__2b_(rt::touint_d(_v32252)); _v32252; });
        }
    }
    return ((uint32_t)(rt::bitxor_(rt::tonum(rt::idx_get(this->f_S_7_21_0, rt::VS(g::LS[122]))), ((double)(this->f_S__20__3c_)))));
    return 0u;
}
rt::Value C_S__3d__21_L::s_S_8_21__2b_(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S__3d__21_L.S_8_21__2b__set");
    ({ double _v32253 = (((double)(this->f_S__3b__21_O)) + 1.0); this->f_S__3b__21_O = rt::toint_d(_v32253); _v32253; });
    if ((((double)(this->f_S__3b__21_O)) >= ((double)(this->f_S__5e_E)))) {
        ({ double _v32254 = 0.0; this->f_S__3b__21_O = rt::toint_d(_v32254); _v32254; });
        ({ double _v32257 = rt::m_round(({ rt::Value _o32255 = this->f_S_2_5b_; C_S_7_21__20_* _p32256 = rt::as_ptr<C_S_7_21__20_>(_o32255); _p32256 ? _p32256->m_S__3b__21__2c_(185.0, 947.0) : rt::tonum(rt::dcallv(_o32255, NM_S__3b__21__2c_, rt::V(185.0), rt::V(947.0))); })); this->f_S__20__3c_ = rt::touint_d(_v32257); _v32257; });
        ({ rt::Value _v32258 = rt::dict_lit({}); this->f_S_7_21_0 = _v32258; _v32258; });
    }
    ({ rt::Value _v32259 = rt::V((double)(l_param1)); rt::idx_set(this->f_S_7_21_0, rt::VS(g::LS[249]), _v32259); });
    ({ rt::Value _v32260 = rt::V((double)(rt::bitxor_(((double)(l_param1)), ((double)(this->f_S__20__3c_))))); rt::idx_set(this->f_S_7_21_0, rt::VS(g::LS[122]), _v32260); });
    ({ rt::Value _v32261 = rt::V((double)(rt::bitxor_((((double)(l_param1)) + ((double)(this->f_S__20__3c_))), ((double)(this->f_S__20__3c_))))); rt::idx_set(this->f_S_7_21_0, rt::VS(g::LS[6881]), _v32261); });
    return rt::NUL;
}
C_S__3d__21_L* C_S__3d__21_L::alloc_() {
    C_S__3d__21_L* o = rt::make<C_S__3d__21_L>();
    return o;
}
rt::Value C_S__3d__21_L::mk_(rt::Value* a, int n) {
    C_S__3d__21_L* o = alloc_();
    o->C_S__3d__21_L::ctor_(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0));
    return rt::VO(o);
}
bool C_S__3d__21_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21__2b_: out = rt::V((double)(g_S_8_21__2b_())); return true;
    case NM_S_2_5b_: out = f_S_2_5b_; return true;
    case NM_S__20__3c_: out = rt::V((double)(f_S__20__3c_)); return true;
    case NM_S_7_21_0: out = f_S_7_21_0; return true;
    case NM_S_7Z: out = rt::V((double)(f_S_7Z)); return true;
    case NM_S__3f_Q: out = rt::V((double)(f_S__3f_Q)); return true;
    case NM_S__5e_E: out = rt::V((double)(f_S__5e_E)); return true;
    case NM_S__3b__21_O: out = rt::V((double)(f_S__3b__21_O)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__3d__21_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_2_5b_: f_S_2_5b_ = v; return true;
    case NM_S__20__3c_: f_S__20__3c_ = rt::touint(v); return true;
    case NM_S_7_21_0: f_S_7_21_0 = v; return true;
    case NM_S_7Z: f_S_7Z = rt::toint(v); return true;
    case NM_S__3f_Q: f_S__3f_Q = rt::toint(v); return true;
    case NM_S__5e_E: f_S__5e_E = rt::toint(v); return true;
    case NM_S__3b__21_O: f_S__3b__21_O = rt::toint(v); return true;
    case NM_S_8_21__2b_: s_S_8_21__2b_(rt::touint(v)); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__3d__21_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21__2b_: { rt::Value f = rt::V((double)(g_S_8_21__2b_())); out = rt::call_value(f, a, n); return true; }
    case NM_S_2_5b_: { rt::Value f = f_S_2_5b_; out = rt::call_value(f, a, n); return true; }
    case NM_S__20__3c_: { rt::Value f = rt::V((double)(f_S__20__3c_)); out = rt::call_value(f, a, n); return true; }
    case NM_S_7_21_0: { rt::Value f = f_S_7_21_0; out = rt::call_value(f, a, n); return true; }
    case NM_S_7Z: { rt::Value f = rt::V((double)(f_S_7Z)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f_Q: { rt::Value f = rt::V((double)(f_S__3f_Q)); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e_E: { rt::Value f = rt::V((double)(f_S__5e_E)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3b__21_O: { rt::Value f = rt::V((double)(f_S__3b__21_O)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__3d__21_L::dmeth(int id) {
    switch (id) {
    case NM_S_8_21__2b_: return false;
    case NM_S_2_5b_: return false;
    case NM_S__20__3c_: return false;
    case NM_S_7_21_0: return false;
    case NM_S_7Z: return false;
    case NM_S__3f_Q: return false;
    case NM_S__5e_E: return false;
    case NM_S__3b__21_O: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__3d__21_L::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__21_L::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__21_L::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__21_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__21_V::ctor_() {
    RT_FN("S__3c__21_V.S__3c__21_V");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ bool _v32262 = true; this->f_S__3f__21__2c_ = _v32262; _v32262; });
}
bool C_S__3c__21_V::g_S__2d_6() {
    RT_FN("S__3c__21_V.S__2d_6_get");
    return (((double)(C_PlayFab::sg_season())) == ((double)(this->f_S__27__21_H)));
    return false;
}
C_S__3c__21_V* C_S__3c__21_V::alloc_() {
    C_S__3c__21_V* o = rt::make<C_S__3c__21_V>();
    return o;
}
rt::Value C_S__3c__21_V::mk_(rt::Value* a, int n) {
    C_S__3c__21_V* o = alloc_();
    o->C_S__3c__21_V::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_V::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27__21_H: out = rt::V((double)(f_S__27__21_H)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3c__21_V::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__27__21_H: f_S__27__21_H = rt::touint(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3c__21_V::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__21_H: { rt::Value f = rt::V((double)(f_S__27__21_H)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3c__21_V::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__27__21_H: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3c__21_V::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_V::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_V::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_V::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__22_1::ctor_() {
    RT_FN("S__20__22_1.S__20__22_1");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32263 = 336.0; this->f_S_6_21_Z = rt::touint_d(_v32263); _v32263; });
    ({ rt::Value _v32264 = rt::trv(rt::VS(g::LS[9278])); this->f_S_1i = rt::slot_string(_v32264); _v32264; });
    ({ rt::Value _v32265 = rt::VS(g::LS[9279]); this->f_S__5e__21__23_ = rt::slot_string(_v32265); _v32265; });
    ({ double _v32266 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32266); _v32266; });
}
rt::Value C_S__20__22_1::m_S__40__22_() {
    RT_FN("S__20__22_1.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9280]), C_S__26_c::sm_S_8_21_Z(1000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(153.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S__20__22_1::m_S__21__21_G() {
    RT_FN("S__20__22_1.S__21__21_G");
    if ((({ bool _t32267 = (!this->f_S_4_21_K); _t32267 ? (bool)((((double)(C_PlayFab::sg_season())) == 11.0)) : _t32267; }) && (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(153.0)) >= 1000.0))) {
        (void)(({ rt::Value _o32268 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32269 = rt::as_ptr<C_S_8G>(_o32268); _p32269 ? _p32269->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32268, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__20__22_1* C_S__20__22_1::alloc_() {
    C_S__20__22_1* o = rt::make<C_S__20__22_1>();
    return o;
}
rt::Value C_S__20__22_1::mk_(rt::Value* a, int n) {
    C_S__20__22_1* o = alloc_();
    o->C_S__20__22_1::ctor_();
    return rt::VO(o);
}
bool C_S__20__22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__20__22_1::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__20__22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__20__22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__20__22_1::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22_1__id)); return true;
    case NM_S__25__22_1: out = rt::V((double)(g::SV.C_S__20__22_1__S__25__22_1)); return true;
    default: return false;
    }
}
bool C_S__20__22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22_1__id = rt::touint(v); return true;
    case NM_S__25__22_1: g::SV.C_S__20__22_1__S__25__22_1 = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__22_N::ctor_() {
    RT_FN("S__21__22_N.S__21__22_N");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32270 = 407.0; this->f_S_6_21_Z = rt::touint_d(_v32270); _v32270; });
    ({ rt::Value _v32271 = rt::trv(rt::VS(g::LS[6107])); this->f_S_1i = rt::slot_string(_v32271); _v32271; });
    ({ rt::Value _v32272 = rt::VS(g::LS[6108]); this->f_S__5e__21__23_ = rt::slot_string(_v32272); _v32272; });
    ({ double _v32273 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32273); _v32273; });
}
rt::Value C_S__21__22_N::m_S__40__22_() {
    RT_FN("S__21__22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9282]), C_S__26_c::sm_S_8_21_Z(1000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__21__22_N* C_S__21__22_N::alloc_() {
    C_S__21__22_N* o = rt::make<C_S__21__22_N>();
    return o;
}
rt::Value C_S__21__22_N::mk_(rt::Value* a, int n) {
    C_S__21__22_N* o = alloc_();
    o->C_S__21__22_N::ctor_();
    return rt::VO(o);
}
bool C_S__21__22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__21__22_N::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__21__22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__21__22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__21__22_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22_N__id)); return true;
    case NM_S__22__21_M: out = rt::V(g::SV.C_S__21__22_N__S__22__21_M); return true;
    default: return false;
    }
}
bool C_S__21__22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22_N__id = rt::touint(v); return true;
    case NM_S__22__21_M: g::SV.C_S__21__22_N__S__22__21_M = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__21__22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__22_J::ctor_() {
    RT_FN("S__25__22_J.S__25__22_J");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32274 = 389.0; this->f_S_6_21_Z = rt::touint_d(_v32274); _v32274; });
    ({ rt::Value _v32275 = rt::trv(rt::VS(g::LS[9284])); this->f_S_1i = rt::slot_string(_v32275); _v32275; });
    ({ rt::Value _v32276 = rt::VS(g::LS[9285]); this->f_S__5e__21__23_ = rt::slot_string(_v32276); _v32276; });
    ({ double _v32277 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32277); _v32277; });
}
rt::Value C_S__25__22_J::m_S__40__22_() {
    RT_FN("S__25__22_J.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9286]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9287]))));
    return rt::NUL;
}
C_S__25__22_J* C_S__25__22_J::alloc_() {
    C_S__25__22_J* o = rt::make<C_S__25__22_J>();
    return o;
}
rt::Value C_S__25__22_J::mk_(rt::Value* a, int n) {
    C_S__25__22_J* o = alloc_();
    o->C_S__25__22_J::ctor_();
    return rt::VO(o);
}
bool C_S__25__22_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__25__22_J::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__25__22_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__25__22_J::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__25__22_J::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__22_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22_J__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__25__22_J__S__5e__21_s); return true;
    case NM_S__5d__21__3e_: out = rt::V(g::SV.C_S__25__22_J__S__5d__21__3e_); return true;
    default: return false;
    }
}
bool C_S__25__22_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22_J__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__25__22_J__S__5e__21_s = rt::tonum(v); return true;
    case NM_S__5d__21__3e_: g::SV.C_S__25__22_J__S__5d__21__3e_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__25__22_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__22_N::ctor_() {
    RT_FN("S__25__22_N.S__25__22_N");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32278 = 408.0; this->f_S_6_21_Z = rt::touint_d(_v32278); _v32278; });
    ({ rt::Value _v32279 = rt::trv(rt::VS(g::LS[6134])); this->f_S_1i = rt::slot_string(_v32279); _v32279; });
    ({ rt::Value _v32280 = rt::VS(g::LS[6135]); this->f_S__5e__21__23_ = rt::slot_string(_v32280); _v32280; });
    ({ double _v32281 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32281); _v32281; });
}
rt::Value C_S__25__22_N::m_S__40__22_() {
    RT_FN("S__25__22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9288]), C_S__26_c::sm_S_8_21_Z(500.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
rt::Value C_S__25__22_N::m_S__21__21_G() {
    RT_FN("S__25__22_N.S__21__21_G");
    if ((({ bool _t32284 = ({ bool _t32283 = ({ bool _t32282 = (!this->f_S_4_21_K); _t32282 ? (bool)((((double)(C_PlayFab::sg_season())) == 7.0)) : _t32282; }); _t32283 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_3E__id)) : _t32283; }); _t32284 ? (bool)((((double)(C_S_3E::sm_S__2b_A())) >= 50.0)) : _t32284; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 155.0), rt::V(500.0)))) {
        (void)(({ rt::Value _o32285 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32286 = rt::as_ptr<C_S_8G>(_o32285); _p32286 ? _p32286->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32285, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__25__22_N* C_S__25__22_N::alloc_() {
    C_S__25__22_N* o = rt::make<C_S__25__22_N>();
    return o;
}
rt::Value C_S__25__22_N::mk_(rt::Value* a, int n) {
    C_S__25__22_N* o = alloc_();
    o->C_S__25__22_N::ctor_();
    return rt::VO(o);
}
bool C_S__25__22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__25__22_N::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__25__22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__25__22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__25__22_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22_N__id)); return true;
    case NM_S__22__22_N: out = rt::V(g::SV.C_S__25__22_N__S__22__22_N); return true;
    default: return false;
    }
}
bool C_S__25__22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22_N__id = rt::touint(v); return true;
    case NM_S__22__22_N: g::SV.C_S__25__22_N__S__22__22_N = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__25__22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__22_Q::ctor_() {
    RT_FN("S__25__22_Q.S__25__22_Q");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32287 = 419.0; this->f_S_6_21_Z = rt::touint_d(_v32287); _v32287; });
    ({ rt::Value _v32288 = rt::trv(rt::VS(g::LS[6205])); this->f_S_1i = rt::slot_string(_v32288); _v32288; });
    ({ rt::Value _v32289 = rt::VS(g::LS[6206]); this->f_S__5e__21__23_ = rt::slot_string(_v32289); _v32289; });
    ({ double _v32290 = 3.0; this->f_S__27__21_H = rt::touint_d(_v32290); _v32290; });
}
rt::Value C_S__25__22_Q::m_S__40__22_() {
    RT_FN("S__25__22_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9289]), C_S__26_c::sm_S_8_21_Z(300.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__25__22_Q* C_S__25__22_Q::alloc_() {
    C_S__25__22_Q* o = rt::make<C_S__25__22_Q>();
    return o;
}
rt::Value C_S__25__22_Q::mk_(rt::Value* a, int n) {
    C_S__25__22_Q* o = alloc_();
    o->C_S__25__22_Q::ctor_();
    return rt::VO(o);
}
bool C_S__25__22_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__25__22_Q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__25__22_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__25__22_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__25__22_Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__22_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22_Q__id)); return true;
    case NM_S__23__22_Q: out = rt::V(g::SV.C_S__25__22_Q__S__23__22_Q); return true;
    default: return false;
    }
}
bool C_S__25__22_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22_Q__id = rt::touint(v); return true;
    case NM_S__23__22_Q: g::SV.C_S__25__22_Q__S__23__22_Q = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__25__22_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__21__3c_::ctor_() {
    RT_FN("S__22__21__3c_.S__22__21__3c_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32291 = 175.0; this->f_S_6_21_Z = rt::touint_d(_v32291); _v32291; });
    ({ rt::Value _v32292 = rt::trv(rt::VS(g::LS[9290])); this->f_S_1i = rt::slot_string(_v32292); _v32292; });
    ({ rt::Value _v32293 = rt::VS(g::LS[9291]); this->f_S__5e__21__23_ = rt::slot_string(_v32293); _v32293; });
    ({ double _v32294 = 3.0; this->f_S__27__21_H = rt::touint_d(_v32294); _v32294; });
}
rt::Value C_S__22__21__3c_::m_S__40__22_() {
    RT_FN("S__22__21__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9292])));
    return rt::NUL;
}
rt::Value C_S__22__21__3c_::m_S__21__21_G() {
    rt::Value l_A__loc1_ = rt::UNDEF;
    uint32_t l_A__loc2_ = 0u;
    RT_FN("S__22__21__3c_.S__21__21_G");
    (l_A__loc1_ = rt::V(0.0));
    (l_A__loc2_ = rt::touint_d(0.0));
    (l_A__loc1_ = rt::V((double)(rt::touint_d(0.0))));
    while (rt::le(l_A__loc1_, rt::V(15.0))) {
        if (({ rt::Value _o32295 = g::SV.C_S_8G__S__60__21_O; C_S__3b_m* _p32296 = rt::as_ptr<C_S__3b_m>(_o32295); _p32296 ? _p32296->m_S__27_W(rt::touint(l_A__loc1_)) : rt::T(rt::dcallv(_o32295, NM_S__27_W, l_A__loc1_)); })) {
            (l_A__loc2_ = rt::touint_d((((double)(l_A__loc2_)) + 1.0)));
        }
        if ((((double)(l_A__loc2_)) == 6.0)) {
            break;
        }
        (l_A__loc1_ = rt::add(l_A__loc1_, rt::V(1.0)));
    }
    if ((({ bool _t32297 = (!this->f_S_4_21_K); _t32297 ? (bool)((((double)(C_PlayFab::sg_season())) == 3.0)) : _t32297; }) && (((double)(l_A__loc2_)) == 6.0))) {
        (void)(({ rt::Value _o32298 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32299 = rt::as_ptr<C_S_8G>(_o32298); _p32299 ? _p32299->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32298, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__22__21__3c_* C_S__22__21__3c_::alloc_() {
    C_S__22__21__3c_* o = rt::make<C_S__22__21__3c_>();
    return o;
}
rt::Value C_S__22__21__3c_::mk_(rt::Value* a, int n) {
    C_S__22__21__3c_* o = alloc_();
    o->C_S__22__21__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__22__21__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__22__21__3c_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__22__21__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__22__21__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__22__21__3c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__21__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21__3c___id)); return true;
    default: return false;
    }
}
bool C_S__22__21__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__22__22_::ctor_() {
    RT_FN("S__22__22__22_.S__22__22__22_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32300 = 314.0; this->f_S_6_21_Z = rt::touint_d(_v32300); _v32300; });
    ({ rt::Value _v32301 = rt::trv(rt::VS(g::LS[9293])); this->f_S_1i = rt::slot_string(_v32301); _v32301; });
    ({ rt::Value _v32302 = rt::trv(rt::VS(g::LS[9294])); this->f_S_7_23_ = rt::slot_string(_v32302); _v32302; });
    ({ rt::Value _v32303 = rt::VS(g::LS[9295]); this->f_S__5e__21__23_ = rt::slot_string(_v32303); _v32303; });
    ({ double _v32304 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32304); _v32304; });
}
C_S__22__22__22_* C_S__22__22__22_::alloc_() {
    C_S__22__22__22_* o = rt::make<C_S__22__22__22_>();
    return o;
}
rt::Value C_S__22__22__22_::mk_(rt::Value* a, int n) {
    C_S__22__22__22_* o = alloc_();
    o->C_S__22__22__22_::ctor_();
    return rt::VO(o);
}
bool C_S__22__22__22_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__22__22__22_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__22__22__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__22__22__22_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__22__22__22_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__22__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__22__22___id)); return true;
    default: return false;
    }
}
bool C_S__22__22__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__22__22___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__22__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__22__26_::ctor_() {
    RT_FN("S__3c__22__26_.S__3c__22__26_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32305 = 324.0; this->f_S_6_21_Z = rt::touint_d(_v32305); _v32305; });
    ({ rt::Value _v32306 = rt::trv(rt::VS(g::LS[6270])); this->f_S_1i = rt::slot_string(_v32306); _v32306; });
    ({ rt::Value _v32307 = rt::VS(g::LS[6271]); this->f_S__5e__21__23_ = rt::slot_string(_v32307); _v32307; });
    ({ double _v32308 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32308); _v32308; });
}
rt::Value C_S__3c__22__26_::m_S__40__22_() {
    RT_FN("S__3c__22__26_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9296]), C_S__26_c::sm_S_8_21_Z(480.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(3.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
C_S__3c__22__26_* C_S__3c__22__26_::alloc_() {
    C_S__3c__22__26_* o = rt::make<C_S__3c__22__26_>();
    return o;
}
rt::Value C_S__3c__22__26_::mk_(rt::Value* a, int n) {
    C_S__3c__22__26_* o = alloc_();
    o->C_S__3c__22__26_::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3c__22__26_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3c__22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3c__22__26_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3c__22__26_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22__26___id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__3c__22__26___S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__3c__22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22__26___id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__3c__22__26___S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3c__22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__22_H::ctor_() {
    RT_FN("S__3c__22_H.S__3c__22_H");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32309 = 384.0; this->f_S_6_21_Z = rt::touint_d(_v32309); _v32309; });
    ({ rt::Value _v32310 = rt::trv(rt::VS(g::LS[6373])); this->f_S_1i = rt::slot_string(_v32310); _v32310; });
    ({ rt::Value _v32311 = rt::VS(g::LS[6374]); this->f_S__5e__21__23_ = rt::slot_string(_v32311); _v32311; });
    ({ double _v32312 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32312); _v32312; });
}
rt::Value C_S__3c__22_H::m_S__40__22_() {
    RT_FN("S__3c__22_H.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9298]), C_S__26_c::sm_S_8_21_Z(1e+60, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
C_S__3c__22_H* C_S__3c__22_H::alloc_() {
    C_S__3c__22_H* o = rt::make<C_S__3c__22_H>();
    return o;
}
rt::Value C_S__3c__22_H::mk_(rt::Value* a, int n) {
    C_S__3c__22_H* o = alloc_();
    o->C_S__3c__22_H::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3c__22_H::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3c__22_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3c__22_H::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3c__22_H::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__22_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22_H__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__3c__22_H__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__3c__22_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22_H__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__3c__22_H__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3c__22_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__21_j::ctor_() {
    RT_FN("S__3e__21_j.S__3e__21_j");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32313 = 246.0; this->f_S_6_21_Z = rt::touint_d(_v32313); _v32313; });
    ({ rt::Value _v32314 = rt::trv(rt::VS(g::LS[9299])); this->f_S_1i = rt::slot_string(_v32314); _v32314; });
    ({ rt::Value _v32315 = rt::VS(g::LS[6394]); this->f_S__5e__21__23_ = rt::slot_string(_v32315); _v32315; });
    ({ double _v32316 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32316); _v32316; });
}
rt::Value C_S__3e__21_j::m_S__40__22_() {
    RT_FN("S__3e__21_j.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9300])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S__3e__21_j::m_S__21__21_G() {
    RT_FN("S__3e__21_j.S__21__21_G");
    if ((({ bool _t32320 = ({ bool _t32319 = ({ bool _t32318 = ({ bool _t32317 = (!this->f_S_4_21_K); _t32317 ? (bool)((((double)(C_PlayFab::sg_season())) == 8.0)) : _t32317; }); _t32318 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5d__21_j__id)) : _t32318; }); _t32319 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__40__21_i__id)) : _t32319; }); _t32320 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_0_21_j__id)) : _t32320; }) && C_S_8G::sm_S_7d(g::SV.C_S_3_21_i__id))) {
        (void)(({ rt::Value _o32321 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32322 = rt::as_ptr<C_S_8G>(_o32321); _p32322 ? _p32322->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32321, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__3e__21_j* C_S__3e__21_j::alloc_() {
    C_S__3e__21_j* o = rt::make<C_S__3e__21_j>();
    return o;
}
rt::Value C_S__3e__21_j::mk_(rt::Value* a, int n) {
    C_S__3e__21_j* o = alloc_();
    o->C_S__3e__21_j::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_j::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3e__21_j::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3e__21_j::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3e__21_j::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3e__21_j::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__21_j::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_j__id)); return true;
    default: return false;
    }
}
bool C_S__3e__21_j::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_j__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__21_j::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__21_k::ctor_() {
    RT_FN("S__3e__21_k.S__3e__21_k");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32323 = 253.0; this->f_S_6_21_Z = rt::touint_d(_v32323); _v32323; });
    ({ rt::Value _v32324 = rt::trv(rt::VS(g::LS[9301])); this->f_S_1i = rt::slot_string(_v32324); _v32324; });
    ({ rt::Value _v32325 = rt::VS(g::LS[9302]); this->f_S__5e__21__23_ = rt::slot_string(_v32325); _v32325; });
    ({ double _v32326 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32326); _v32326; });
}
rt::Value C_S__3e__21_k::m_S__40__22_() {
    RT_FN("S__3e__21_k.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9303])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S__3e__21_k::m_S__21__21_G() {
    rt::Value l_A__loc1_ = rt::UNDEF;
    uint32_t l_A__loc2_ = 0u;
    RT_FN("S__3e__21_k.S__21__21_G");
    (l_A__loc1_ = rt::V(0.0));
    (l_A__loc2_ = rt::touint_d(0.0));
    (l_A__loc1_ = rt::V((double)(rt::touint_d(0.0))));
    while (rt::le(l_A__loc1_, rt::V(15.0))) {
        if (({ rt::Value _o32327 = g::SV.C_S_8G__S_3_21_k; C_S__3b_m* _p32328 = rt::as_ptr<C_S__3b_m>(_o32327); _p32328 ? _p32328->m_S__27_W(rt::touint(l_A__loc1_)) : rt::T(rt::dcallv(_o32327, NM_S__27_W, l_A__loc1_)); })) {
            (l_A__loc2_ = rt::touint_d((((double)(l_A__loc2_)) + 1.0)));
        }
        if ((((double)(l_A__loc2_)) == 6.0)) {
            break;
        }
        (l_A__loc1_ = rt::add(l_A__loc1_, rt::V(1.0)));
    }
    if ((({ bool _t32329 = (!this->f_S_4_21_K); _t32329 ? (bool)((((double)(C_PlayFab::sg_season())) == 9.0)) : _t32329; }) && (((double)(l_A__loc2_)) == 6.0))) {
        (void)(({ rt::Value _o32330 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32331 = rt::as_ptr<C_S_8G>(_o32330); _p32331 ? _p32331->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32330, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__3e__21_k* C_S__3e__21_k::alloc_() {
    C_S__3e__21_k* o = rt::make<C_S__3e__21_k>();
    return o;
}
rt::Value C_S__3e__21_k::mk_(rt::Value* a, int n) {
    C_S__3e__21_k* o = alloc_();
    o->C_S__3e__21_k::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3e__21_k::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3e__21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3e__21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3e__21_k::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_k__id)); return true;
    default: return false;
    }
}
bool C_S__3e__21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__22__27_::ctor_() {
    RT_FN("S__3e__22__27_.S__3e__22__27_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32332 = 325.0; this->f_S_6_21_Z = rt::touint_d(_v32332); _v32332; });
    ({ rt::Value _v32333 = rt::trv(rt::VS(g::LS[6170])); this->f_S_1i = rt::slot_string(_v32333); _v32333; });
    ({ rt::Value _v32334 = rt::VS(g::LS[6171]); this->f_S__5e__21__23_ = rt::slot_string(_v32334); _v32334; });
    ({ double _v32335 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32335); _v32335; });
}
rt::Value C_S__3e__22__27_::m_S__40__22_() {
    RT_FN("S__3e__22__27_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9304]), C_S__26_c::sm_S_8_21_Z(1400.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
rt::Value C_S__3e__22__27_::m_S__21__21_G() {
    RT_FN("S__3e__22__27_.S__21__21_G");
    if ((({ bool _t32337 = ({ bool _t32336 = (!this->f_S_4_21_K); _t32336 ? (bool)((((double)(C_PlayFab::sg_season())) == 8.0)) : _t32336; }); _t32337 ? (bool)(((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(131.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(132.0))) >= 1400.0)) : _t32337; }) && (rt::m_floor(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(131.0))) == rt::m_floor(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(132.0)))))) {
        (void)(({ rt::Value _o32338 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32339 = rt::as_ptr<C_S_8G>(_o32338); _p32339 ? _p32339->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32338, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__3e__22__27_* C_S__3e__22__27_::alloc_() {
    C_S__3e__22__27_* o = rt::make<C_S__3e__22__27_>();
    return o;
}
rt::Value C_S__3e__22__27_::mk_(rt::Value* a, int n) {
    C_S__3e__22__27_* o = alloc_();
    o->C_S__3e__22__27_::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3e__22__27_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3e__22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3e__22__27_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3e__22__27_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22__27___id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__3e__22__27___S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__3e__22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22__27___id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__3e__22__27___S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3e__22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__22_2::ctor_() {
    RT_FN("S__3e__22_2.S__3e__22_2");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32340 = 343.0; this->f_S_6_21_Z = rt::touint_d(_v32340); _v32340; });
    ({ rt::Value _v32341 = rt::trv(rt::VS(g::LS[1576])); this->f_S_1i = rt::slot_string(_v32341); _v32341; });
    ({ rt::Value _v32342 = rt::VS(g::LS[1393]); this->f_S__5e__21__23_ = rt::slot_string(_v32342); _v32342; });
    ({ double _v32343 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32343); _v32343; });
}
rt::Value C_S__3e__22_2::m_S__40__22_() {
    RT_FN("S__3e__22_2.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9305])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
rt::Value C_S__3e__22_2::m_S__21__21_G() {
    RT_FN("S__3e__22_2.S__21__21_G");
    if ((({ bool _t32346 = ({ bool _t32345 = ({ bool _t32344 = (!this->f_S_4_21_K); _t32344 ? (bool)((((double)(C_PlayFab::sg_season())) == 7.0)) : _t32344; }); _t32345 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 82.0), rt::V(480.0))) : _t32345; }); _t32346 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 84.0), rt::V(480.0))) : _t32346; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 83.0), rt::V(480.0)))) {
        (void)(({ rt::Value _o32347 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32348 = rt::as_ptr<C_S_8G>(_o32347); _p32348 ? _p32348->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32347, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__3e__22_2* C_S__3e__22_2::alloc_() {
    C_S__3e__22_2* o = rt::make<C_S__3e__22_2>();
    return o;
}
rt::Value C_S__3e__22_2::mk_(rt::Value* a, int n) {
    C_S__3e__22_2* o = alloc_();
    o->C_S__3e__22_2::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3e__22_2::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3e__22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3e__22_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3e__22_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22_2__id)); return true;
    default: return false;
    }
}
bool C_S__3e__22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__22_Q::ctor_() {
    RT_FN("S__3e__22_Q.S__3e__22_Q");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32349 = 424.0; this->f_S_6_21_Z = rt::touint_d(_v32349); _v32349; });
    ({ rt::Value _v32350 = rt::trv(rt::VS(g::LS[6381])); this->f_S_1i = rt::slot_string(_v32350); _v32350; });
    ({ rt::Value _v32351 = rt::VS(g::LS[6382]); this->f_S__5e__21__23_ = rt::slot_string(_v32351); _v32351; });
    ({ double _v32352 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32352); _v32352; });
}
rt::Value C_S__3e__22_Q::m_S__40__22_() {
    RT_FN("S__3e__22_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9306]), C_S__26_c::sm_S_8_21_Z(2500.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
double C_S__3e__22_Q::sm_S__3f__22_Q() {
    rt::Value l_A__loc1_ = rt::NUL;
    int32_t l_A__loc2_ = 0;
    RT_FN("S__3e__22_Q.S__3f__22_Q");
    if (((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0) || (!C_S__26_c::sm_S__60__21_i(g::SV.C_S_6_22__27___id)))) {
        return 0.0;
    }
    (l_A__loc1_ = C_S_8G::sm_S__2d_e(rt::toint_d(6.0)));
    if ((rt::eq(l_A__loc1_, rt::NUL) || (!(((double)(({ rt::Value _o32353 = l_A__loc1_; C_S__60__21__3b_* _p32354 = rt::as_ptr<C_S__60__21__3b_>(_o32353); _p32354 ? _p32354->f_S__60_r : rt::toint(rt::dget(_o32353, NM_S__60_r)); }))) == 6.0)))) {
        return 0.0;
    }
    (l_A__loc2_ = ({ rt::Value _o32355 = l_A__loc1_; C_S__60__21__3b_* _p32356 = rt::as_ptr<C_S__60__21__3b_>(_o32355); _p32356 ? _p32356->m_S__27__3c_() : rt::toint(rt::dcallv(_o32355, NM_S__27__3c_)); }));
    return (((!(((double)(l_A__loc2_)) == (-1.0))) && rt::eq(rt::arr_at(({ rt::Value _o32357 = l_A__loc1_; C_S__60__21__3b_* _p32358 = rt::as_ptr<C_S__60__21__3b_>(_o32357); _p32358 ? _p32358->f_S_9_3b_ : rt::dget(_o32357, NM_S_9_3b_); }), ((double)(l_A__loc2_))), rt::V((double)(g::SV.C_S_6_22__27___id)))) ? C_S_8G::sm_S__25_Z(({ rt::Value _o32359 = l_A__loc1_; C_S__60__21__3b_* _p32360 = rt::as_ptr<C_S__60__21__3b_>(_o32359); _p32360 ? _p32360->f_id : rt::touint(rt::dget(_o32359, NM_id)); }), true) : 0.0);
    return 0.0;
}
C_S__3e__22_Q* C_S__3e__22_Q::alloc_() {
    C_S__3e__22_Q* o = rt::make<C_S__3e__22_Q>();
    return o;
}
rt::Value C_S__3e__22_Q::mk_(rt::Value* a, int n) {
    C_S__3e__22_Q* o = alloc_();
    o->C_S__3e__22_Q::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3e__22_Q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3e__22_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3e__22_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3e__22_Q::smeth_(int id) {
    switch (id) {
    case NM_S__3f__22_Q: return true;
    default: return false;
    }
}
bool C_S__3e__22_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22_Q__id)); return true;
    case NM_S__5b__22_Q: out = rt::V(g::SV.C_S__3e__22_Q__S__5b__22_Q); return true;
    case NM_S__3f__22_Q: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22_Q__id = rt::touint(v); return true;
    case NM_S__5b__22_Q: g::SV.C_S__3e__22_Q__S__5b__22_Q = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3e__22_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__22_Q: out = rt::V(sm_S__3f__22_Q()); return true;
    default: return false;
    }
}
void C_S__3f__21_i::ctor_() {
    RT_FN("S__3f__21_i.S__3f__21_i");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32361 = 243.0; this->f_S_6_21_Z = rt::touint_d(_v32361); _v32361; });
    ({ rt::Value _v32362 = rt::trv(rt::VS(g::LS[9307])); this->f_S_1i = rt::slot_string(_v32362); _v32362; });
    ({ rt::Value _v32363 = rt::VS(g::LS[6267]); this->f_S__5e__21__23_ = rt::slot_string(_v32363); _v32363; });
    ({ double _v32364 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32364); _v32364; });
}
rt::Value C_S__3f__21_i::m_S__40__22_() {
    RT_FN("S__3f__21_i.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9308])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S__3f__21_i::m_S__21__21_G() {
    RT_FN("S__3f__21_i.S__21__21_G");
    if ((({ bool _t32368 = ({ bool _t32367 = ({ bool _t32366 = ({ bool _t32365 = (!this->f_S_4_21_K); _t32365 ? (bool)((((double)(C_PlayFab::sg_season())) == 8.0)) : _t32365; }); _t32366 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_2_21_i__id)) : _t32366; }); _t32367 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__26__21_j__id)) : _t32367; }); _t32368 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_5_21_i__id)) : _t32368; }) && C_S_8G::sm_S_7d(g::SV.C_S__2b__21_i__id))) {
        (void)(({ rt::Value _o32369 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32370 = rt::as_ptr<C_S_8G>(_o32369); _p32370 ? _p32370->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32369, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__3f__21_i* C_S__3f__21_i::alloc_() {
    C_S__3f__21_i* o = rt::make<C_S__3f__21_i>();
    return o;
}
rt::Value C_S__3f__21_i::mk_(rt::Value* a, int n) {
    C_S__3f__21_i* o = alloc_();
    o->C_S__3f__21_i::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3f__21_i::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3f__21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3f__21_i::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3f__21_i::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_i__id)); return true;
    default: return false;
    }
}
bool C_S__3f__21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__22_O::ctor_() {
    RT_FN("S__3f__22_O.S__3f__22_O");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32371 = 416.0; this->f_S_6_21_Z = rt::touint_d(_v32371); _v32371; });
    ({ rt::Value _v32372 = rt::trv(rt::VS(g::LS[6375])); this->f_S_1i = rt::slot_string(_v32372); _v32372; });
    ({ rt::Value _v32373 = rt::VS(g::LS[6376]); this->f_S__5e__21__23_ = rt::slot_string(_v32373); _v32373; });
    ({ double _v32374 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32374); _v32374; });
}
rt::Value C_S__3f__22_O::m_S__40__22_() {
    RT_FN("S__3f__22_O.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9309]), C_S__26_c::sm_S__23__21_R(900.0, C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__3f__22_O* C_S__3f__22_O::alloc_() {
    C_S__3f__22_O* o = rt::make<C_S__3f__22_O>();
    return o;
}
rt::Value C_S__3f__22_O::mk_(rt::Value* a, int n) {
    C_S__3f__22_O* o = alloc_();
    o->C_S__3f__22_O::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22_O::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3f__22_O::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3f__22_O::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3f__22_O::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3f__22_O::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__22_O::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22_O__id)); return true;
    case NM_S__3e__22_O: out = rt::V(g::SV.C_S__3f__22_O__S__3e__22_O); return true;
    default: return false;
    }
}
bool C_S__3f__22_O::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22_O__id = rt::touint(v); return true;
    case NM_S__3e__22_O: g::SV.C_S__3f__22_O__S__3e__22_O = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3f__22_O::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f_O::ctor_() {
    RT_FN("S__3f_O.S__3f_O");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32375 = 222.0; this->f_S_6_21_Z = rt::touint_d(_v32375); _v32375; });
    ({ rt::Value _v32376 = rt::trv(rt::VS(g::LS[9310])); this->f_S_1i = rt::slot_string(_v32376); _v32376; });
    ({ rt::Value _v32377 = rt::VS(g::LS[8164]); this->f_S__5e__21__23_ = rt::slot_string(_v32377); _v32377; });
    ({ double _v32378 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32378); _v32378; });
}
rt::Value C_S__3f_O::m_S__40__22_() {
    RT_FN("S__3f_O.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9311])));
    return rt::NUL;
}
rt::Value C_S__3f_O::m_S__21__21_G() {
    RT_FN("S__3f_O.S__21__21_G");
    if ((({ bool _t32379 = (!this->f_S_4_21_K); _t32379 ? (bool)((((double)(C_PlayFab::sg_season())) == 7.0)) : _t32379; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 16.0), rt::V(6.0)))) {
        (void)(({ rt::Value _o32380 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32381 = rt::as_ptr<C_S_8G>(_o32380); _p32381 ? _p32381->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32380, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__3f_O* C_S__3f_O::alloc_() {
    C_S__3f_O* o = rt::make<C_S__3f_O>();
    return o;
}
rt::Value C_S__3f_O::mk_(rt::Value* a, int n) {
    C_S__3f_O* o = alloc_();
    o->C_S__3f_O::ctor_();
    return rt::VO(o);
}
bool C_S__3f_O::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3f_O::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3f_O::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3f_O::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3f_O::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f_O::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f_O__id)); return true;
    default: return false;
    }
}
bool C_S__3f_O::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f_O__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f_O::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__22_0::ctor_() {
    RT_FN("S__26__22_0.S__26__22_0");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32382 = 332.0; this->f_S_6_21_Z = rt::touint_d(_v32382); _v32382; });
    ({ rt::Value _v32383 = rt::trv(rt::VS(g::LS[6404])); this->f_S_1i = rt::slot_string(_v32383); _v32383; });
    ({ rt::Value _v32384 = rt::VS(g::LS[6405]); this->f_S__5e__21__23_ = rt::slot_string(_v32384); _v32384; });
    ({ double _v32385 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32385); _v32385; });
}
rt::Value C_S__26__22_0::m_S__40__22_() {
    RT_FN("S__26__22_0.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9312])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
C_S__26__22_0* C_S__26__22_0::alloc_() {
    C_S__26__22_0* o = rt::make<C_S__26__22_0>();
    return o;
}
rt::Value C_S__26__22_0::mk_(rt::Value* a, int n) {
    C_S__26__22_0* o = alloc_();
    o->C_S__26__22_0::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__26__22_0::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__26__22_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__26__22_0::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__26__22_0::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__22_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_0__id)); return true;
    default: return false;
    }
}
bool C_S__26__22_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_0__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__22_E::ctor_() {
    RT_FN("S__26__22_E.S__26__22_E");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32386 = 375.0; this->f_S_6_21_Z = rt::touint_d(_v32386); _v32386; });
    ({ rt::Value _v32387 = rt::trv(rt::VS(g::LS[6152])); this->f_S_1i = rt::slot_string(_v32387); _v32387; });
    ({ rt::Value _v32388 = rt::VS(g::LS[6153]); this->f_S__5e__21__23_ = rt::slot_string(_v32388); _v32388; });
    ({ double _v32389 = 3.0; this->f_S__27__21_H = rt::touint_d(_v32389); _v32389; });
}
rt::Value C_S__26__22_E::m_S__40__22_() {
    RT_FN("S__26__22_E.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9313]), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
C_S__26__22_E* C_S__26__22_E::alloc_() {
    C_S__26__22_E* o = rt::make<C_S__26__22_E>();
    return o;
}
rt::Value C_S__26__22_E::mk_(rt::Value* a, int n) {
    C_S__26__22_E* o = alloc_();
    o->C_S__26__22_E::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__26__22_E::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__26__22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__26__22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__26__22_E::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_E__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__26__22_E__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__26__22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_E__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__26__22_E__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__26__22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__22_K::ctor_() {
    RT_FN("S__26__22_K.S__26__22_K");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32390 = 394.0; this->f_S_6_21_Z = rt::touint_d(_v32390); _v32390; });
    ({ rt::Value _v32391 = rt::trv(rt::VS(g::LS[6131])); this->f_S_1i = rt::slot_string(_v32391); _v32391; });
    ({ rt::Value _v32392 = rt::VS(g::LS[6132]); this->f_S__5e__21__23_ = rt::slot_string(_v32392); _v32392; });
    ({ double _v32393 = 3.0; this->f_S__27__21_H = rt::touint_d(_v32393); _v32393; });
}
rt::Value C_S__26__22_K::m_S__40__22_() {
    RT_FN("S__26__22_K.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9314]), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(8.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__26__22_K* C_S__26__22_K::alloc_() {
    C_S__26__22_K* o = rt::make<C_S__26__22_K>();
    return o;
}
rt::Value C_S__26__22_K::mk_(rt::Value* a, int n) {
    C_S__26__22_K* o = alloc_();
    o->C_S__26__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__26__22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__26__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__26__22_K::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__26__22_K::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_K__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__26__22_K__S__5e__21_s); return true;
    case NM_S__25__22_K: out = rt::V(g::SV.C_S__26__22_K__S__25__22_K); return true;
    default: return false;
    }
}
bool C_S__26__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_K__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__26__22_K__S__5e__21_s = rt::tonum(v); return true;
    case NM_S__25__22_K: g::SV.C_S__26__22_K__S__25__22_K = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__26__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26_y::ctor_() {
    RT_FN("S__26_y.S__26_y");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32394 = 193.0; this->f_S_6_21_Z = rt::touint_d(_v32394); _v32394; });
    ({ rt::Value _v32395 = rt::trv(rt::VS(g::LS[9315])); this->f_S_1i = rt::slot_string(_v32395); _v32395; });
    ({ rt::Value _v32396 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9316])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))); this->f_S_7_23_ = rt::slot_string(_v32396); _v32396; });
    ({ rt::Value _v32397 = rt::VS(g::LS[9317]); this->f_S__5e__21__23_ = rt::slot_string(_v32397); _v32397; });
    ({ double _v32398 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32398); _v32398; });
}
C_S__26_y* C_S__26_y::alloc_() {
    C_S__26_y* o = rt::make<C_S__26_y>();
    return o;
}
rt::Value C_S__26_y::mk_(rt::Value* a, int n) {
    C_S__26_y* o = alloc_();
    o->C_S__26_y::ctor_();
    return rt::VO(o);
}
bool C_S__26_y::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__26_y::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__26_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__26_y::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__26_y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26_y__id)); return true;
    default: return false;
    }
}
bool C_S__26_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26_y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__22__22_::ctor_() {
    RT_FN("S__27__22__22_.S__27__22__22_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32399 = 315.0; this->f_S_6_21_Z = rt::touint_d(_v32399); _v32399; });
    ({ rt::Value _v32400 = rt::trv(rt::VS(g::LS[6146])); this->f_S_1i = rt::slot_string(_v32400); _v32400; });
    ({ rt::Value _v32401 = rt::VS(g::LS[6147]); this->f_S__5e__21__23_ = rt::slot_string(_v32401); _v32401; });
    ({ double _v32402 = 3.0; this->f_S__27__21_H = rt::touint_d(_v32402); _v32402; });
}
rt::Value C_S__27__22__22_::m_S__40__22_() {
    RT_FN("S__27__22__22_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9318]), C_S__26_c::sm_S_8_21_Z(72.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
rt::Value C_S__27__22__22_::m_S__21__21_G() {
    RT_FN("S__27__22__22_.S__21__21_G");
    if ((({ bool _t32403 = (!this->f_S_4_21_K); _t32403 ? (bool)((((double)(C_PlayFab::sg_season())) == 3.0)) : _t32403; }) && (C_S__26_c::sm_S__5e__21_r(rt::toint_d(111.0), true, C_S__26_c::dsm_S__5e__21_r_2()) >= 259200.0))) {
        (void)(({ rt::Value _o32404 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32405 = rt::as_ptr<C_S_8G>(_o32404); _p32405 ? _p32405->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32404, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__27__22__22_* C_S__27__22__22_::alloc_() {
    C_S__27__22__22_* o = rt::make<C_S__27__22__22_>();
    return o;
}
rt::Value C_S__27__22__22_::mk_(rt::Value* a, int n) {
    C_S__27__22__22_* o = alloc_();
    o->C_S__27__22__22_::ctor_();
    return rt::VO(o);
}
bool C_S__27__22__22_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__27__22__22_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__27__22__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__27__22__22_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__27__22__22_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27__22__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22__22___id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__27__22__22___S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__27__22__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22__22___id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__27__22__22___S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__27__22__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__22_2::ctor_() {
    RT_FN("S__27__22_2.S__27__22_2");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32406 = 342.0; this->f_S_6_21_Z = rt::touint_d(_v32406); _v32406; });
    ({ rt::Value _v32407 = rt::trv(rt::VS(g::LS[9319])); this->f_S_1i = rt::slot_string(_v32407); _v32407; });
    ({ rt::Value _v32408 = rt::VS(g::LS[6275]); this->f_S__5e__21__23_ = rt::slot_string(_v32408); _v32408; });
    ({ double _v32409 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32409); _v32409; });
}
rt::Value C_S__27__22_2::m_S__40__22_() {
    RT_FN("S__27__22_2.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5825]), C_S__26_c::sm_S_8_21_Z(15.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S__27__22_2::m_S__21__21_G() {
    RT_FN("S__27__22_2.S__21__21_G");
    if ((({ bool _t32410 = (!this->f_S_4_21_K); _t32410 ? (bool)((((double)(C_PlayFab::sg_season())) == 11.0)) : _t32410; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 27.0), rt::V(15.0)))) {
        (void)(({ rt::Value _o32411 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32412 = rt::as_ptr<C_S_8G>(_o32411); _p32412 ? _p32412->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32411, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__27__22_2* C_S__27__22_2::alloc_() {
    C_S__27__22_2* o = rt::make<C_S__27__22_2>();
    return o;
}
rt::Value C_S__27__22_2::mk_(rt::Value* a, int n) {
    C_S__27__22_2* o = alloc_();
    o->C_S__27__22_2::ctor_();
    return rt::VO(o);
}
bool C_S__27__22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__27__22_2::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__27__22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__27__22_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__27__22_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27__22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22_2__id)); return true;
    case NM_S__25__22_1: out = rt::V(g::SV.C_S__27__22_2__S__25__22_1); return true;
    default: return false;
    }
}
bool C_S__27__22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22_2__id = rt::touint(v); return true;
    case NM_S__25__22_1: g::SV.C_S__27__22_2__S__25__22_1 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__27__22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__22_4::ctor_() {
    RT_FN("S__27__22_4.S__27__22_4");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32413 = 353.0; this->f_S_6_21_Z = rt::touint_d(_v32413); _v32413; });
    ({ rt::Value _v32414 = rt::trv(rt::VS(g::LS[6348])); this->f_S_1i = rt::slot_string(_v32414); _v32414; });
    ({ rt::Value _v32415 = rt::VS(g::LS[6349]); this->f_S__5e__21__23_ = rt::slot_string(_v32415); _v32415; });
    ({ double _v32416 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32416); _v32416; });
}
rt::Value C_S__27__22_4::m_S__40__22_() {
    RT_FN("S__27__22_4.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9320])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
double C_S__27__22_4::sm_S__5d__22_3() {
    RT_FN("S__27__22_4.S__5d__22_3");
    return rt::m_min2(1.0, (rt::m_pow(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(110.0)), 2.0) / 9000000000.0));
    return 0.0;
}
C_S__27__22_4* C_S__27__22_4::alloc_() {
    C_S__27__22_4* o = rt::make<C_S__27__22_4>();
    return o;
}
rt::Value C_S__27__22_4::mk_(rt::Value* a, int n) {
    C_S__27__22_4* o = alloc_();
    o->C_S__27__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__27__22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__27__22_4::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__27__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__27__22_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__27__22_4::smeth_(int id) {
    switch (id) {
    case NM_S__5d__22_3: return true;
    default: return false;
    }
}
bool C_S__27__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22_4__id)); return true;
    case NM_S__5d__22_3: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5d__22_3: out = rt::V(sm_S__5d__22_3()); return true;
    default: return false;
    }
}
void C_S__27__22_9::ctor_() {
    RT_FN("S__27__22_9.S__27__22_9");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32417 = 358.0; this->f_S_6_21_Z = rt::touint_d(_v32417); _v32417; });
    ({ rt::Value _v32418 = rt::trv(rt::VS(g::LS[9321])); this->f_S_1i = rt::slot_string(_v32418); _v32418; });
    ({ rt::Value _v32419 = rt::VS(g::LS[9322]); this->f_S__5e__21__23_ = rt::slot_string(_v32419); _v32419; });
    ({ double _v32420 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32420); _v32420; });
}
rt::Value C_S__27__22_9::m_S__40__22_() {
    RT_FN("S__27__22_9.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9323]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9324]))));
    return rt::NUL;
}
C_S__27__22_9* C_S__27__22_9::alloc_() {
    C_S__27__22_9* o = rt::make<C_S__27__22_9>();
    return o;
}
rt::Value C_S__27__22_9::mk_(rt::Value* a, int n) {
    C_S__27__22_9* o = alloc_();
    o->C_S__27__22_9::ctor_();
    return rt::VO(o);
}
bool C_S__27__22_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__27__22_9::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__27__22_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__27__22_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__27__22_9::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27__22_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22_9__id)); return true;
    default: return false;
    }
}
bool C_S__27__22_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22_9__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__21_x::ctor_() {
    RT_FN("S__2b__21_x.S__2b__21_x");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32421 = 313.0; this->f_S_6_21_Z = rt::touint_d(_v32421); _v32421; });
    ({ rt::Value _v32422 = rt::trv(rt::VS(g::LS[9325])); this->f_S_1i = rt::slot_string(_v32422); _v32422; });
    ({ rt::Value _v32423 = rt::VS(g::LS[9326]); this->f_S__5e__21__23_ = rt::slot_string(_v32423); _v32423; });
    ({ double _v32424 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32424); _v32424; });
}
rt::Value C_S__2b__21_x::m_S__40__22_() {
    RT_FN("S__2b__21_x.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9327]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__2b__21_x__S__27__21_x, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2b__21_x::m_S__21__21_G() {
    RT_FN("S__2b__21_x.S__21__21_G");
    if ((({ bool _t32435 = ({ bool _t32430 = ({ bool _t32425 = (!this->f_S_4_21_K); _t32425 ? (bool)((((double)(C_PlayFab::sg_season())) == 7.0)) : _t32425; }); _t32430 ? (bool)(((({ rt::Value _o32426 = C_S_8G::sm_S__23_N(g::SV.C_S__40__21_Y__id); C_S_84* _p32427 = rt::as_ptr<C_S_84>(_o32426); _p32427 ? _p32427->g_S_2_2d_() : rt::tonum(rt::dget(_o32426, NM_S_2_2d_)); }) + ({ rt::Value _o32428 = C_S_8G::sm_S__23_N(g::SV.C_S__40__21_Y__id); C_S_84* _p32429 = rt::as_ptr<C_S_84>(_o32428); _p32429 ? _p32429->g_S_5_21_L() : rt::tonum(rt::dget(_o32428, NM_S_5_21_L)); })) >= g::SV.C_S__2b__21_x__S__27__21_x)) : _t32430; }); _t32435 ? (bool)(((({ rt::Value _o32431 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_h__id); C_S_84* _p32432 = rt::as_ptr<C_S_84>(_o32431); _p32432 ? _p32432->g_S_2_2d_() : rt::tonum(rt::dget(_o32431, NM_S_2_2d_)); }) + ({ rt::Value _o32433 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_h__id); C_S_84* _p32434 = rt::as_ptr<C_S_84>(_o32433); _p32434 ? _p32434->g_S_5_21_L() : rt::tonum(rt::dget(_o32433, NM_S_5_21_L)); })) >= g::SV.C_S__2b__21_x__S__27__21_x)) : _t32435; }) && ((({ rt::Value _o32436 = C_S_8G::sm_S__23_N(g::SV.C_S__60__25___id); C_S_84* _p32437 = rt::as_ptr<C_S_84>(_o32436); _p32437 ? _p32437->g_S_2_2d_() : rt::tonum(rt::dget(_o32436, NM_S_2_2d_)); }) + ({ rt::Value _o32438 = C_S_8G::sm_S__23_N(g::SV.C_S__60__25___id); C_S_84* _p32439 = rt::as_ptr<C_S_84>(_o32438); _p32439 ? _p32439->g_S_5_21_L() : rt::tonum(rt::dget(_o32438, NM_S_5_21_L)); })) >= g::SV.C_S__2b__21_x__S__27__21_x))) {
        (void)(({ rt::Value _o32440 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32441 = rt::as_ptr<C_S_8G>(_o32440); _p32441 ? _p32441->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32440, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__2b__21_x* C_S__2b__21_x::alloc_() {
    C_S__2b__21_x* o = rt::make<C_S__2b__21_x>();
    return o;
}
rt::Value C_S__2b__21_x::mk_(rt::Value* a, int n) {
    C_S__2b__21_x* o = alloc_();
    o->C_S__2b__21_x::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_x::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2b__21_x::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2b__21_x::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2b__21_x::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2b__21_x::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21_x::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_x__id)); return true;
    case NM_S__27__21_x: out = rt::V(g::SV.C_S__2b__21_x__S__27__21_x); return true;
    default: return false;
    }
}
bool C_S__2b__21_x::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_x__id = rt::touint(v); return true;
    case NM_S__27__21_x: g::SV.C_S__2b__21_x__S__27__21_x = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2b__21_x::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__22_E::ctor_() {
    RT_FN("S__2b__22_E.S__2b__22_E");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32442 = 376.0; this->f_S_6_21_Z = rt::touint_d(_v32442); _v32442; });
    ({ rt::Value _v32443 = rt::trv(rt::VS(g::LS[6215])); this->f_S_1i = rt::slot_string(_v32443); _v32443; });
    ({ rt::Value _v32444 = rt::VS(g::LS[6216]); this->f_S__5e__21__23_ = rt::slot_string(_v32444); _v32444; });
    ({ double _v32445 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32445); _v32445; });
}
rt::Value C_S__2b__22_E::m_S__40__22_() {
    RT_FN("S__2b__22_E.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9328]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
C_S__2b__22_E* C_S__2b__22_E::alloc_() {
    C_S__2b__22_E* o = rt::make<C_S__2b__22_E>();
    return o;
}
rt::Value C_S__2b__22_E::mk_(rt::Value* a, int n) {
    C_S__2b__22_E* o = alloc_();
    o->C_S__2b__22_E::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2b__22_E::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2b__22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2b__22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2b__22_E::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22_E__id)); return true;
    default: return false;
    }
}
bool C_S__2b__22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__22_N::ctor_() {
    RT_FN("S__2b__22_N.S__2b__22_N");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32446 = 409.0; this->f_S_6_21_Z = rt::touint_d(_v32446); _v32446; });
    ({ rt::Value _v32447 = rt::trv(rt::VS(g::LS[6217])); this->f_S_1i = rt::slot_string(_v32447); _v32447; });
    ({ rt::Value _v32448 = rt::VS(g::LS[6218]); this->f_S__5e__21__23_ = rt::slot_string(_v32448); _v32448; });
    ({ double _v32449 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32449); _v32449; });
}
rt::Value C_S__2b__22_N::m_S__40__22_() {
    RT_FN("S__2b__22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9329]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__2b__22_N* C_S__2b__22_N::alloc_() {
    C_S__2b__22_N* o = rt::make<C_S__2b__22_N>();
    return o;
}
rt::Value C_S__2b__22_N::mk_(rt::Value* a, int n) {
    C_S__2b__22_N* o = alloc_();
    o->C_S__2b__22_N::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2b__22_N::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2b__22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2b__22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2b__22_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22_N__id)); return true;
    default: return false;
    }
}
bool C_S__2b__22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22_N__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__22_::ctor_() {
    RT_FN("S__2b__22_.S__2b__22_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32450 = 206.0; this->f_S_6_21_Z = rt::touint_d(_v32450); _v32450; });
    ({ rt::Value _v32451 = rt::trv(rt::VS(g::LS[9330])); this->f_S_1i = rt::slot_string(_v32451); _v32451; });
    ({ rt::Value _v32452 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9331])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))); this->f_S_7_23_ = rt::slot_string(_v32452); _v32452; });
    ({ rt::Value _v32453 = rt::VS(g::LS[9332]); this->f_S__5e__21__23_ = rt::slot_string(_v32453); _v32453; });
    ({ double _v32454 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32454); _v32454; });
}
C_S__2b__22_* C_S__2b__22_::alloc_() {
    C_S__2b__22_* o = rt::make<C_S__2b__22_>();
    return o;
}
rt::Value C_S__2b__22_::mk_(rt::Value* a, int n) {
    C_S__2b__22_* o = alloc_();
    o->C_S__2b__22_::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2b__22_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2b__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2b__22_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2b__22_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22___id)); return true;
    default: return false;
    }
}
bool C_S__2b__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__22_2::ctor_() {
    RT_FN("S__2c__22_2.S__2c__22_2");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32455 = 335.0; this->f_S_6_21_Z = rt::touint_d(_v32455); _v32455; });
    ({ rt::Value _v32456 = rt::trv(rt::VS(g::LS[9333])); this->f_S_1i = rt::slot_string(_v32456); _v32456; });
    ({ rt::Value _v32457 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9334]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))); this->f_S_7_23_ = rt::slot_string(_v32457); _v32457; });
    ({ rt::Value _v32458 = rt::VS(g::LS[9335]); this->f_S__5e__21__23_ = rt::slot_string(_v32458); _v32458; });
    ({ double _v32459 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32459); _v32459; });
}
C_S__2c__22_2* C_S__2c__22_2::alloc_() {
    C_S__2c__22_2* o = rt::make<C_S__2c__22_2>();
    return o;
}
rt::Value C_S__2c__22_2::mk_(rt::Value* a, int n) {
    C_S__2c__22_2* o = alloc_();
    o->C_S__2c__22_2::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_2::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2c__22_2::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2c__22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2c__22_2::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2c__22_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_2__id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__22_E::ctor_() {
    RT_FN("S__2c__22_E.S__2c__22_E");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32460 = 377.0; this->f_S_6_21_Z = rt::touint_d(_v32460); _v32460; });
    ({ rt::Value _v32461 = rt::trv(rt::VS(g::LS[6242])); this->f_S_1i = rt::slot_string(_v32461); _v32461; });
    ({ rt::Value _v32462 = rt::VS(g::LS[6243]); this->f_S__5e__21__23_ = rt::slot_string(_v32462); _v32462; });
    ({ double _v32463 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32463); _v32463; });
}
rt::Value C_S__2c__22_E::m_S__40__22_() {
    RT_FN("S__2c__22_E.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9336]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
C_S__2c__22_E* C_S__2c__22_E::alloc_() {
    C_S__2c__22_E* o = rt::make<C_S__2c__22_E>();
    return o;
}
rt::Value C_S__2c__22_E::mk_(rt::Value* a, int n) {
    C_S__2c__22_E* o = alloc_();
    o->C_S__2c__22_E::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2c__22_E::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2c__22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2c__22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2c__22_E::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_E__id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__22_N::ctor_() {
    RT_FN("S__2c__22_N.S__2c__22_N");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32464 = 410.0; this->f_S_6_21_Z = rt::touint_d(_v32464); _v32464; });
    ({ rt::Value _v32465 = rt::trv(rt::VS(g::LS[6247])); this->f_S_1i = rt::slot_string(_v32465); _v32465; });
    ({ rt::Value _v32466 = rt::VS(g::LS[6248]); this->f_S__5e__21__23_ = rt::slot_string(_v32466); _v32466; });
    ({ double _v32467 = 3.0; this->f_S__27__21_H = rt::touint_d(_v32467); _v32467; });
}
rt::Value C_S__2c__22_N::m_S__40__22_() {
    RT_FN("S__2c__22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9337]), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
rt::Value C_S__2c__22_N::m_S__21__21_G() {
    RT_FN("S__2c__22_N.S__21__21_G");
    if ((({ bool _t32469 = ({ bool _t32468 = (!this->f_S_4_21_K); _t32468 ? (bool)((((double)(C_PlayFab::sg_season())) == 3.0)) : _t32468; }); _t32469 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 54.0), rt::V(7200.0))) : _t32469; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 111.0), rt::V(7200.0)))) {
        (void)(({ rt::Value _o32470 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32471 = rt::as_ptr<C_S_8G>(_o32470); _p32471 ? _p32471->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32470, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__2c__22_N* C_S__2c__22_N::alloc_() {
    C_S__2c__22_N* o = rt::make<C_S__2c__22_N>();
    return o;
}
rt::Value C_S__2c__22_N::mk_(rt::Value* a, int n) {
    C_S__2c__22_N* o = alloc_();
    o->C_S__2c__22_N::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2c__22_N::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2c__22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2c__22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2c__22_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_N__id)); return true;
    case NM_S__27__22__26_: out = rt::V(g::SV.C_S__2c__22_N__S__27__22__26_); return true;
    default: return false;
    }
}
bool C_S__2c__22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22_N__id = rt::touint(v); return true;
    case NM_S__27__22__26_: g::SV.C_S__2c__22_N__S__27__22__26_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__21_t::ctor_() {
    RT_FN("S__2d__21_t.S__2d__21_t");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32472 = 287.0; this->f_S_6_21_Z = rt::touint_d(_v32472); _v32472; });
    ({ rt::Value _v32473 = rt::trv(rt::VS(g::LS[9338])); this->f_S_1i = rt::slot_string(_v32473); _v32473; });
    ({ rt::Value _v32474 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9339])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))); this->f_S_7_23_ = rt::slot_string(_v32474); _v32474; });
    ({ rt::Value _v32475 = rt::VS(g::LS[9340]); this->f_S__5e__21__23_ = rt::slot_string(_v32475); _v32475; });
    ({ double _v32476 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32476); _v32476; });
}
C_S__2d__21_t* C_S__2d__21_t::alloc_() {
    C_S__2d__21_t* o = rt::make<C_S__2d__21_t>();
    return o;
}
rt::Value C_S__2d__21_t::mk_(rt::Value* a, int n) {
    C_S__2d__21_t* o = alloc_();
    o->C_S__2d__21_t::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_t::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2d__21_t::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2d__21_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2d__21_t::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2d__21_t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__21_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_t__id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_t__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__21_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__22_1::ctor_() {
    RT_FN("S__2d__22_1.S__2d__22_1");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32477 = 340.0; this->f_S_6_21_Z = rt::touint_d(_v32477); _v32477; });
    ({ rt::Value _v32478 = rt::trv(rt::VS(g::LS[9341])); this->f_S_1i = rt::slot_string(_v32478); _v32478; });
    ({ rt::Value _v32479 = rt::VS(g::LS[6228]); this->f_S__5e__21__23_ = rt::slot_string(_v32479); _v32479; });
    ({ double _v32480 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32480); _v32480; });
}
rt::Value C_S__2d__22_1::m_S__40__22_() {
    RT_FN("S__2d__22_1.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5829]), C_S__26_c::sm_S_8_21_Z(15.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S__2d__22_1::m_S__21__21_G() {
    RT_FN("S__2d__22_1.S__21__21_G");
    if ((({ bool _t32481 = (!this->f_S_4_21_K); _t32481 ? (bool)((((double)(C_PlayFab::sg_season())) == 11.0)) : _t32481; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 29.0), rt::V(15.0)))) {
        (void)(({ rt::Value _o32482 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32483 = rt::as_ptr<C_S_8G>(_o32482); _p32483 ? _p32483->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32482, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__2d__22_1* C_S__2d__22_1::alloc_() {
    C_S__2d__22_1* o = rt::make<C_S__2d__22_1>();
    return o;
}
rt::Value C_S__2d__22_1::mk_(rt::Value* a, int n) {
    C_S__2d__22_1* o = alloc_();
    o->C_S__2d__22_1::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2d__22_1::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2d__22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2d__22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2d__22_1::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_1__id)); return true;
    case NM_S__25__22_1: out = rt::V(g::SV.C_S__2d__22_1__S__25__22_1); return true;
    default: return false;
    }
}
bool C_S__2d__22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_1__id = rt::touint(v); return true;
    case NM_S__25__22_1: g::SV.C_S__2d__22_1__S__25__22_1 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__22_9::ctor_() {
    RT_FN("S__2d__22_9.S__2d__22_9");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32484 = 359.0; this->f_S_6_21_Z = rt::touint_d(_v32484); _v32484; });
    ({ rt::Value _v32485 = rt::trv(rt::VS(g::LS[9342])); this->f_S_1i = rt::slot_string(_v32485); _v32485; });
    ({ rt::Value _v32486 = rt::VS(g::LS[9343]); this->f_S__5e__21__23_ = rt::slot_string(_v32486); _v32486; });
    ({ double _v32487 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32487); _v32487; });
}
rt::Value C_S__2d__22_9::m_S__40__22_() {
    RT_FN("S__2d__22_9.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9344]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9324]))));
    return rt::NUL;
}
C_S__2d__22_9* C_S__2d__22_9::alloc_() {
    C_S__2d__22_9* o = rt::make<C_S__2d__22_9>();
    return o;
}
rt::Value C_S__2d__22_9::mk_(rt::Value* a, int n) {
    C_S__2d__22_9* o = alloc_();
    o->C_S__2d__22_9::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2d__22_9::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2d__22_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2d__22_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2d__22_9::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__22_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_9__id)); return true;
    default: return false;
    }
}
bool C_S__2d__22_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_9__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__22_I::ctor_() {
    RT_FN("S__2d__22_I.S__2d__22_I");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32488 = 387.0; this->f_S_6_21_Z = rt::touint_d(_v32488); _v32488; });
    ({ rt::Value _v32489 = rt::trv(rt::VS(g::LS[9345])); this->f_S_1i = rt::slot_string(_v32489); _v32489; });
    ({ rt::Value _v32490 = rt::VS(g::LS[9346]); this->f_S__5e__21__23_ = rt::slot_string(_v32490); _v32490; });
    ({ double _v32491 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32491); _v32491; });
}
rt::Value C_S__2d__22_I::m_S__40__22_() {
    RT_FN("S__2d__22_I.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9347]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9287]))));
    return rt::NUL;
}
C_S__2d__22_I* C_S__2d__22_I::alloc_() {
    C_S__2d__22_I* o = rt::make<C_S__2d__22_I>();
    return o;
}
rt::Value C_S__2d__22_I::mk_(rt::Value* a, int n) {
    C_S__2d__22_I* o = alloc_();
    o->C_S__2d__22_I::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_I::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2d__22_I::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2d__22_I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2d__22_I::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2d__22_I::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__22_I::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_I__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__2d__22_I__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__2d__22_I::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_I__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__2d__22_I__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__60_::ctor_() {
    RT_FN("S__2d__60_.S__2d__60_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32492 = 194.0; this->f_S_6_21_Z = rt::touint_d(_v32492); _v32492; });
    ({ rt::Value _v32493 = rt::trv(rt::VS(g::LS[9348])); this->f_S_1i = rt::slot_string(_v32493); _v32493; });
    ({ rt::Value _v32494 = rt::VS(g::LS[8153]); this->f_S__5e__21__23_ = rt::slot_string(_v32494); _v32494; });
    ({ double _v32495 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32495); _v32495; });
}
rt::Value C_S__2d__60_::m_S__40__22_() {
    RT_FN("S__2d__60_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5847]), rt::VS(g::LS[9349]), rt::V(8.0), C_S__26_c::sm_S_8_21_Z(8.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S__2d__60_::m_S__21__21_G() {
    RT_FN("S__2d__60_.S__21__21_G");
    if ((({ bool _t32496 = (!this->f_S_4_21_K); _t32496 ? (bool)((((double)(C_PlayFab::sg_season())) == 4.0)) : _t32496; }) && (((double)(C_S__26_c::sm_S__5e__21_L())) >= 8.0))) {
        (void)(({ rt::Value _o32497 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32498 = rt::as_ptr<C_S_8G>(_o32497); _p32498 ? _p32498->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32497, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__2d__60_* C_S__2d__60_::alloc_() {
    C_S__2d__60_* o = rt::make<C_S__2d__60_>();
    return o;
}
rt::Value C_S__2d__60_::mk_(rt::Value* a, int n) {
    C_S__2d__60_* o = alloc_();
    o->C_S__2d__60_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__60_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__2d__60_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__2d__60_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__2d__60_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__2d__60_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__60_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__60___id)); return true;
    case NM_S_0_21_R: out = rt::V((double)(g::SV.C_S__2d__60___S_0_21_R)); return true;
    default: return false;
    }
}
bool C_S__2d__60_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__60___id = rt::touint(v); return true;
    case NM_S_0_21_R: g::SV.C_S__2d__60___S_0_21_R = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S__2d__60_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_21__21_::ctor_() {
    RT_FN("S_0_21__21_.S_0_21__21_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32499 = 220.0; this->f_S_6_21_Z = rt::touint_d(_v32499); _v32499; });
    ({ rt::Value _v32500 = rt::trv(rt::VS(g::LS[9350])); this->f_S_1i = rt::slot_string(_v32500); _v32500; });
    ({ rt::Value _v32501 = rt::trv(rt::VS(g::LS[9351])); this->f_S_7_23_ = rt::slot_string(_v32501); _v32501; });
    ({ rt::Value _v32502 = rt::VS(g::LS[9352]); this->f_S__5e__21__23_ = rt::slot_string(_v32502); _v32502; });
    ({ double _v32503 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32503); _v32503; });
}
C_S_0_21__21_* C_S_0_21__21_::alloc_() {
    C_S_0_21__21_* o = rt::make<C_S_0_21__21_>();
    return o;
}
rt::Value C_S_0_21__21_::mk_(rt::Value* a, int n) {
    C_S_0_21__21_* o = alloc_();
    o->C_S_0_21__21_::ctor_();
    return rt::VO(o);
}
bool C_S_0_21__21_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_0_21__21_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_0_21__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_0_21__21_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_0_21__21_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_21__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21__21___id)); return true;
    default: return false;
    }
}
bool C_S_0_21__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21__21___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_21__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_22_J::ctor_() {
    RT_FN("S_0_22_J.S_0_22_J");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32504 = 390.0; this->f_S_6_21_Z = rt::touint_d(_v32504); _v32504; });
    ({ rt::Value _v32505 = rt::trv(rt::VS(g::LS[9353])); this->f_S_1i = rt::slot_string(_v32505); _v32505; });
    ({ rt::Value _v32506 = rt::VS(g::LS[9354]); this->f_S__5e__21__23_ = rt::slot_string(_v32506); _v32506; });
    ({ double _v32507 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32507); _v32507; });
}
rt::Value C_S_0_22_J::m_S__40__22_() {
    RT_FN("S_0_22_J.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9355]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9287]))));
    return rt::NUL;
}
C_S_0_22_J* C_S_0_22_J::alloc_() {
    C_S_0_22_J* o = rt::make<C_S_0_22_J>();
    return o;
}
rt::Value C_S_0_22_J::mk_(rt::Value* a, int n) {
    C_S_0_22_J* o = alloc_();
    o->C_S_0_22_J::ctor_();
    return rt::VO(o);
}
bool C_S_0_22_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_0_22_J::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_0_22_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_0_22_J::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_0_22_J::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_22_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22_J__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_0_22_J__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S_0_22_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22_J__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_0_22_J__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_0_22_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_22_L::ctor_() {
    RT_FN("S_0_22_L.S_0_22_L");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32508 = 397.0; this->f_S_6_21_Z = rt::touint_d(_v32508); _v32508; });
    ({ rt::Value _v32509 = rt::trv(rt::VS(g::LS[6244])); this->f_S_1i = rt::slot_string(_v32509); _v32509; });
    ({ rt::Value _v32510 = rt::VS(g::LS[6245]); this->f_S__5e__21__23_ = rt::slot_string(_v32510); _v32510; });
    ({ double _v32511 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32511); _v32511; });
}
rt::Value C_S_0_22_L::m_S__40__22_() {
    RT_FN("S_0_22_L.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9356]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(1000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_0_22_L* C_S_0_22_L::alloc_() {
    C_S_0_22_L* o = rt::make<C_S_0_22_L>();
    return o;
}
rt::Value C_S_0_22_L::mk_(rt::Value* a, int n) {
    C_S_0_22_L* o = alloc_();
    o->C_S_0_22_L::ctor_();
    return rt::VO(o);
}
bool C_S_0_22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_0_22_L::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_0_22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_0_22_L::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_0_22_L::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22_L__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_0_22_L__S__5e__21_s); return true;
    case NM_S_4_21__24_: out = rt::V(g::SV.C_S_0_22_L__S_4_21__24_); return true;
    default: return false;
    }
}
bool C_S_0_22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22_L__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_0_22_L__S__5e__21_s = rt::tonum(v); return true;
    case NM_S_4_21__24_: g::SV.C_S_0_22_L__S_4_21__24_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_0_22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_22_Q::ctor_() {
    RT_FN("S_0_22_Q.S_0_22_Q");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32512 = 420.0; this->f_S_6_21_Z = rt::touint_d(_v32512); _v32512; });
    ({ rt::Value _v32513 = rt::trv(rt::VS(g::LS[6249])); this->f_S_1i = rt::slot_string(_v32513); _v32513; });
    ({ rt::Value _v32514 = rt::VS(g::LS[6250]); this->f_S__5e__21__23_ = rt::slot_string(_v32514); _v32514; });
    ({ double _v32515 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32515); _v32515; });
}
rt::Value C_S_0_22_Q::m_S__40__22_() {
    RT_FN("S_0_22_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9357]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(10.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_0_2d___id, true, true, C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(200.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_0_22_Q* C_S_0_22_Q::alloc_() {
    C_S_0_22_Q* o = rt::make<C_S_0_22_Q>();
    return o;
}
rt::Value C_S_0_22_Q::mk_(rt::Value* a, int n) {
    C_S_0_22_Q* o = alloc_();
    o->C_S_0_22_Q::ctor_();
    return rt::VO(o);
}
bool C_S_0_22_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_0_22_Q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_0_22_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_0_22_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_0_22_Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_22_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22_Q__id)); return true;
    case NM_S__2b__22_Q: out = rt::V(g::SV.C_S_0_22_Q__S__2b__22_Q); return true;
    case NM_S__2c__22_Q: out = rt::V(g::SV.C_S_0_22_Q__S__2c__22_Q); return true;
    default: return false;
    }
}
bool C_S_0_22_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22_Q__id = rt::touint(v); return true;
    case NM_S__2b__22_Q: g::SV.C_S_0_22_Q__S__2b__22_Q = rt::tonum(v); return true;
    case NM_S__2c__22_Q: g::SV.C_S_0_22_Q__S__2c__22_Q = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_0_22_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_21__3e_::ctor_() {
    RT_FN("S_1_21__3e_.S_1_21__3e_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32516 = 221.0; this->f_S_6_21_Z = rt::touint_d(_v32516); _v32516; });
    ({ rt::Value _v32517 = rt::trv(rt::VS(g::LS[9358])); this->f_S_1i = rt::slot_string(_v32517); _v32517; });
    ({ rt::Value _v32518 = rt::VS(g::LS[8159]); this->f_S__5e__21__23_ = rt::slot_string(_v32518); _v32518; });
    ({ double _v32519 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32519); _v32519; });
}
rt::Value C_S_1_21__3e_::m_S__40__22_() {
    RT_FN("S_1_21__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9359])));
    return rt::NUL;
}
rt::Value C_S_1_21__3e_::m_S__21__21_G() {
    RT_FN("S_1_21__3e_.S__21__21_G");
    if ((({ bool _t32522 = ({ bool _t32521 = ({ bool _t32520 = (!this->f_S_4_21_K); _t32520 ? (bool)((((double)(C_PlayFab::sg_season())) == 7.0)) : _t32520; }); _t32521 ? (bool)((((double)(C_S__3e__21_1::sm_S__2b_A())) == 50.0)) : _t32521; }); _t32522 ? (bool)((((double)(C_S_3E::sm_S__2b_A())) == 50.0)) : _t32522; }) && (((double)(C_S__3c__21_2::sm_S__2b_A())) == 50.0))) {
        (void)(({ rt::Value _o32523 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32524 = rt::as_ptr<C_S_8G>(_o32523); _p32524 ? _p32524->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32523, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_1_21__3e_* C_S_1_21__3e_::alloc_() {
    C_S_1_21__3e_* o = rt::make<C_S_1_21__3e_>();
    return o;
}
rt::Value C_S_1_21__3e_::mk_(rt::Value* a, int n) {
    C_S_1_21__3e_* o = alloc_();
    o->C_S_1_21__3e_::ctor_();
    return rt::VO(o);
}
bool C_S_1_21__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_1_21__3e_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_1_21__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_1_21__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_1_21__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21__3e___id)); return true;
    default: return false;
    }
}
bool C_S_1_21__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_21__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_21_i::ctor_() {
    RT_FN("S_1_21_i.S_1_21_i");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32525 = 245.0; this->f_S_6_21_Z = rt::touint_d(_v32525); _v32525; });
    ({ rt::Value _v32526 = rt::trv(rt::VS(g::LS[9360])); this->f_S_1i = rt::slot_string(_v32526); _v32526; });
    ({ rt::Value _v32527 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9361])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))); this->f_S_7_23_ = rt::slot_string(_v32527); _v32527; });
    ({ rt::Value _v32528 = rt::VS(g::LS[9362]); this->f_S__5e__21__23_ = rt::slot_string(_v32528); _v32528; });
    ({ double _v32529 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32529); _v32529; });
}
C_S_1_21_i* C_S_1_21_i::alloc_() {
    C_S_1_21_i* o = rt::make<C_S_1_21_i>();
    return o;
}
rt::Value C_S_1_21_i::mk_(rt::Value* a, int n) {
    C_S_1_21_i* o = alloc_();
    o->C_S_1_21_i::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_i::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_1_21_i::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_1_21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_1_21_i::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_1_21_i::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_i__id)); return true;
    default: return false;
    }
}
bool C_S_1_21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_22_9::ctor_() {
    RT_FN("S_1_22_9.S_1_22_9");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32530 = 360.0; this->f_S_6_21_Z = rt::touint_d(_v32530); _v32530; });
    ({ rt::Value _v32531 = rt::trv(rt::VS(g::LS[9363])); this->f_S_1i = rt::slot_string(_v32531); _v32531; });
    ({ rt::Value _v32532 = rt::VS(g::LS[9364]); this->f_S__5e__21__23_ = rt::slot_string(_v32532); _v32532; });
    ({ double _v32533 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32533); _v32533; });
}
rt::Value C_S_1_22_9::m_S__40__22_() {
    RT_FN("S_1_22_9.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9365]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(3.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9324]))));
    return rt::NUL;
}
C_S_1_22_9* C_S_1_22_9::alloc_() {
    C_S_1_22_9* o = rt::make<C_S_1_22_9>();
    return o;
}
rt::Value C_S_1_22_9::mk_(rt::Value* a, int n) {
    C_S_1_22_9* o = alloc_();
    o->C_S_1_22_9::ctor_();
    return rt::VO(o);
}
bool C_S_1_22_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_1_22_9::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_1_22_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_1_22_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_1_22_9::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_22_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22_9__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_1_22_9__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S_1_22_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22_9__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_1_22_9__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_1_22_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_22_N::ctor_() {
    RT_FN("S_1_22_N.S_1_22_N");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32534 = 412.0; this->f_S_6_21_Z = rt::touint_d(_v32534); _v32534; });
    ({ rt::Value _v32535 = rt::trv(rt::VS(g::LS[6303])); this->f_S_1i = rt::slot_string(_v32535); _v32535; });
    ({ rt::Value _v32536 = rt::VS(g::LS[6304]); this->f_S__5e__21__23_ = rt::slot_string(_v32536); _v32536; });
    ({ double _v32537 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32537); _v32537; });
}
rt::Value C_S_1_22_N::m_S__40__22_() {
    RT_FN("S_1_22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9366]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(8.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(1000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_1_22_N* C_S_1_22_N::alloc_() {
    C_S_1_22_N* o = rt::make<C_S_1_22_N>();
    return o;
}
rt::Value C_S_1_22_N::mk_(rt::Value* a, int n) {
    C_S_1_22_N* o = alloc_();
    o->C_S_1_22_N::ctor_();
    return rt::VO(o);
}
bool C_S_1_22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_1_22_N::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_1_22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_1_22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_1_22_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22_N__id)); return true;
    case NM_S__3f__3f_: out = rt::V(g::SV.C_S_1_22_N__S__3f__3f_); return true;
    case NM_S_5_22_N: out = rt::V(g::SV.C_S_1_22_N__S_5_22_N); return true;
    default: return false;
    }
}
bool C_S_1_22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22_N__id = rt::touint(v); return true;
    case NM_S__3f__3f_: g::SV.C_S_1_22_N__S__3f__3f_ = rt::tonum(v); return true;
    case NM_S_5_22_N: g::SV.C_S_1_22_N__S_5_22_N = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_1_22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_22_Q::ctor_() {
    RT_FN("S_1_22_Q.S_1_22_Q");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32538 = 421.0; this->f_S_6_21_Z = rt::touint_d(_v32538); _v32538; });
    ({ rt::Value _v32539 = rt::trv(rt::VS(g::LS[6280])); this->f_S_1i = rt::slot_string(_v32539); _v32539; });
    ({ rt::Value _v32540 = rt::VS(g::LS[6281]); this->f_S__5e__21__23_ = rt::slot_string(_v32540); _v32540; });
    ({ double _v32541 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32541); _v32541; });
}
rt::Value C_S_1_22_Q::m_S__40__22_() {
    RT_FN("S_1_22_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9367]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_1_22_Q* C_S_1_22_Q::alloc_() {
    C_S_1_22_Q* o = rt::make<C_S_1_22_Q>();
    return o;
}
rt::Value C_S_1_22_Q::mk_(rt::Value* a, int n) {
    C_S_1_22_Q* o = alloc_();
    o->C_S_1_22_Q::ctor_();
    return rt::VO(o);
}
bool C_S_1_22_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_1_22_Q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_1_22_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_1_22_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_1_22_Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_22_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22_Q__id)); return true;
    case NM_S_4_22_Q: out = rt::V(g::SV.C_S_1_22_Q__S_4_22_Q); return true;
    case NM_S_3_22_Q: out = rt::V(g::SV.C_S_1_22_Q__S_3_22_Q); return true;
    default: return false;
    }
}
bool C_S_1_22_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22_Q__id = rt::touint(v); return true;
    case NM_S_4_22_Q: g::SV.C_S_1_22_Q__S_4_22_Q = rt::tonum(v); return true;
    case NM_S_3_22_Q: g::SV.C_S_1_22_Q__S_3_22_Q = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_1_22_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_21_b::ctor_() {
    RT_FN("S_2_21_b.S_2_21_b");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32542 = 204.0; this->f_S_6_21_Z = rt::touint_d(_v32542); _v32542; });
    ({ rt::Value _v32543 = rt::trv(rt::VS(g::LS[9368])); this->f_S_1i = rt::slot_string(_v32543); _v32543; });
    ({ rt::Value _v32544 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9369])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))); this->f_S_7_23_ = rt::slot_string(_v32544); _v32544; });
    ({ rt::Value _v32545 = rt::VS(g::LS[9370]); this->f_S__5e__21__23_ = rt::slot_string(_v32545); _v32545; });
    ({ double _v32546 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32546); _v32546; });
}
C_S_2_21_b* C_S_2_21_b::alloc_() {
    C_S_2_21_b* o = rt::make<C_S_2_21_b>();
    return o;
}
rt::Value C_S_2_21_b::mk_(rt::Value* a, int n) {
    C_S_2_21_b* o = alloc_();
    o->C_S_2_21_b::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_b::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_2_21_b::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_2_21_b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_2_21_b::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_2_21_b::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_b__id)); return true;
    default: return false;
    }
}
bool C_S_2_21_b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_b__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_21_b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_21_k::ctor_() {
    RT_FN("S_2_21_k.S_2_21_k");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32547 = 252.0; this->f_S_6_21_Z = rt::touint_d(_v32547); _v32547; });
    ({ rt::Value _v32548 = rt::trv(rt::VS(g::LS[9371])); this->f_S_1i = rt::slot_string(_v32548); _v32548; });
    ({ rt::Value _v32549 = rt::VS(g::LS[6165]); this->f_S__5e__21__23_ = rt::slot_string(_v32549); _v32549; });
    ({ double _v32550 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32550); _v32550; });
}
rt::Value C_S_2_21_k::m_S__40__22_() {
    RT_FN("S_2_21_k.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5810]), rt::VS(g::LS[1349])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S_2_21_k::m_S__21__21_G() {
    RT_FN("S_2_21_k.S__21__21_G");
    if ((({ bool _t32551 = (!this->f_S_4_21_K); _t32551 ? (bool)((((double)(C_PlayFab::sg_season())) == 9.0)) : _t32551; }) && (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(89.0)) >= 100.0))) {
        (void)(({ rt::Value _o32552 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32553 = rt::as_ptr<C_S_8G>(_o32552); _p32553 ? _p32553->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32552, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_2_21_k* C_S_2_21_k::alloc_() {
    C_S_2_21_k* o = rt::make<C_S_2_21_k>();
    return o;
}
rt::Value C_S_2_21_k::mk_(rt::Value* a, int n) {
    C_S_2_21_k* o = alloc_();
    o->C_S_2_21_k::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_2_21_k::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_2_21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_2_21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_2_21_k::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_k__id)); return true;
    default: return false;
    }
}
bool C_S_2_21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_21_v::ctor_() {
    RT_FN("S_2_21_v.S_2_21_v");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32554 = 298.0; this->f_S_6_21_Z = rt::touint_d(_v32554); _v32554; });
    ({ rt::Value _v32555 = rt::trv(rt::VS(g::LS[9372])); this->f_S_1i = rt::slot_string(_v32555); _v32555; });
    ({ rt::Value _v32556 = rt::VS(g::LS[9373]); this->f_S__5e__21__23_ = rt::slot_string(_v32556); _v32556; });
    ({ double _v32557 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32557); _v32557; });
}
rt::Value C_S_2_21_v::m_S__40__22_() {
    RT_FN("S_2_21_v.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9374])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
C_S_2_21_v* C_S_2_21_v::alloc_() {
    C_S_2_21_v* o = rt::make<C_S_2_21_v>();
    return o;
}
rt::Value C_S_2_21_v::mk_(rt::Value* a, int n) {
    C_S_2_21_v* o = alloc_();
    o->C_S_2_21_v::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_2_21_v::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_2_21_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_2_21_v::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_2_21_v::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_v__id)); return true;
    default: return false;
    }
}
bool C_S_2_21_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_v__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_21_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_22_8::ctor_() {
    RT_FN("S_2_22_8.S_2_22_8");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32558 = 356.0; this->f_S_6_21_Z = rt::touint_d(_v32558); _v32558; });
    ({ rt::Value _v32559 = rt::trv(rt::VS(g::LS[9375])); this->f_S_1i = rt::slot_string(_v32559); _v32559; });
    ({ rt::Value _v32560 = rt::VS(g::LS[9376]); this->f_S__5e__21__23_ = rt::slot_string(_v32560); _v32560; });
    ({ double _v32561 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32561); _v32561; });
}
rt::Value C_S_2_22_8::m_S__40__22_() {
    RT_FN("S_2_22_8.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9377]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9324]))));
    return rt::NUL;
}
rt::Value C_S_2_22_8::sm_S__2c__22_8() {
    RT_FN("S_2_22_8.S__2c__22_8");
    if ((({ bool _t32563 = ({ bool _t32562 = C_S_8G::sm_S_7d(g::SV.C_S_2_21_i__id); _t32562 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__26__21_j__id)) : _t32562; }); _t32563 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_5_21_i__id)) : _t32563; }) && C_S_8G::sm_S_7d(g::SV.C_S__2b__21_i__id))) {
        (void)(({ rt::Value _o32564 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32565 = rt::as_ptr<C_S_8G>(_o32564); _p32565 ? _p32565->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S_2_22_8__id)) : rt::dcallv(_o32564, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S_2_22_8__id)); }));
    } else if ((({ bool _t32567 = ({ bool _t32566 = C_S_8G::sm_S_7d(g::SV.C_S__5d__21_j__id); _t32566 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__40__21_i__id)) : _t32566; }); _t32567 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_0_21_j__id)) : _t32567; }) && C_S_8G::sm_S_7d(g::SV.C_S_3_21_i__id))) {
        (void)(({ rt::Value _o32568 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32569 = rt::as_ptr<C_S_8G>(_o32568); _p32569 ? _p32569->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S_2_22_8__id)) : rt::dcallv(_o32568, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S_2_22_8__id)); }));
    }
    return rt::NUL;
}
C_S_2_22_8* C_S_2_22_8::alloc_() {
    C_S_2_22_8* o = rt::make<C_S_2_22_8>();
    return o;
}
rt::Value C_S_2_22_8::mk_(rt::Value* a, int n) {
    C_S_2_22_8* o = alloc_();
    o->C_S_2_22_8::ctor_();
    return rt::VO(o);
}
bool C_S_2_22_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_2_22_8::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_2_22_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_2_22_8::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_2_22_8::smeth_(int id) {
    switch (id) {
    case NM_S__2c__22_8: return true;
    default: return false;
    }
}
bool C_S_2_22_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22_8__id)); return true;
    case NM_S__2c__22_8: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_22_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22_8__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_22_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__22_8: out = sm_S__2c__22_8(); return true;
    default: return false;
    }
}
void C_S_2_22_K::ctor_() {
    RT_FN("S_2_22_K.S_2_22_K");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32570 = 395.0; this->f_S_6_21_Z = rt::touint_d(_v32570); _v32570; });
    ({ rt::Value _v32571 = rt::trv(rt::VS(g::LS[6264])); this->f_S_1i = rt::slot_string(_v32571); _v32571; });
    ({ rt::Value _v32572 = rt::VS(g::LS[6265]); this->f_S__5e__21__23_ = rt::slot_string(_v32572); _v32572; });
    ({ double _v32573 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32573); _v32573; });
}
rt::Value C_S_2_22_K::m_S__40__22_() {
    RT_FN("S_2_22_K.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9378]), C_S__26_c::sm_S_8_21_Z(100000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_2_22_K* C_S_2_22_K::alloc_() {
    C_S_2_22_K* o = rt::make<C_S_2_22_K>();
    return o;
}
rt::Value C_S_2_22_K::mk_(rt::Value* a, int n) {
    C_S_2_22_K* o = alloc_();
    o->C_S_2_22_K::ctor_();
    return rt::VO(o);
}
bool C_S_2_22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_2_22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_2_22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_2_22_K::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_2_22_K::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22_K__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_2_22_K__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S_2_22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22_K__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_2_22_K__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_2_22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2d::ctor_() {
    RT_FN("S_2d.S_2d");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32574 = 166.0; this->f_S_6_21_Z = rt::touint_d(_v32574); _v32574; });
    ({ rt::Value _v32575 = rt::trv(rt::VS(g::LS[9379])); this->f_S_1i = rt::slot_string(_v32575); _v32575; });
    ({ rt::Value _v32576 = rt::trv(rt::VS(g::LS[9380])); this->f_S_7_23_ = rt::slot_string(_v32576); _v32576; });
    ({ rt::Value _v32577 = rt::VS(g::LS[9381]); this->f_S__5e__21__23_ = rt::slot_string(_v32577); _v32577; });
    ({ double _v32578 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32578); _v32578; });
}
rt::Value C_S_2d::m_S__21__21_G() {
    RT_FN("S_2d.S__21__21_G");
    if ((({ bool _t32580 = ({ bool _t32579 = (!this->f_S_4_21_K); _t32579 ? (bool)((((double)(C_PlayFab::sg_season())) == 2.0)) : _t32579; }); _t32580 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0)) : _t32580; }) && C_S_8G::sm_S_7d(g::SV.C_S_1_25___id))) {
        (void)(({ rt::Value _o32581 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32582 = rt::as_ptr<C_S_8G>(_o32581); _p32582 ? _p32582->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32581, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_2d* C_S_2d::alloc_() {
    C_S_2d* o = rt::make<C_S_2d>();
    return o;
}
rt::Value C_S_2d::mk_(rt::Value* a, int n) {
    C_S_2d* o = alloc_();
    o->C_S_2d::ctor_();
    return rt::VO(o);
}
bool C_S_2d::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_2d::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_2d::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_2d::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_2d::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2d::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2d__id)); return true;
    default: return false;
    }
}
bool C_S_2d::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2d__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2d::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_21_t::ctor_() {
    RT_FN("S_3_21_t.S_3_21_t");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32583 = 293.0; this->f_S_6_21_Z = rt::touint_d(_v32583); _v32583; });
    ({ rt::Value _v32584 = rt::trv(rt::VS(g::LS[9382])); this->f_S_1i = rt::slot_string(_v32584); _v32584; });
    ({ rt::Value _v32585 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9383])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))); this->f_S_7_23_ = rt::slot_string(_v32585); _v32585; });
    ({ rt::Value _v32586 = rt::VS(g::LS[9384]); this->f_S__5e__21__23_ = rt::slot_string(_v32586); _v32586; });
    ({ double _v32587 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32587); _v32587; });
}
C_S_3_21_t* C_S_3_21_t::alloc_() {
    C_S_3_21_t* o = rt::make<C_S_3_21_t>();
    return o;
}
rt::Value C_S_3_21_t::mk_(rt::Value* a, int n) {
    C_S_3_21_t* o = alloc_();
    o->C_S_3_21_t::ctor_();
    return rt::VO(o);
}
bool C_S_3_21_t::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_3_21_t::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_3_21_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_3_21_t::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_3_21_t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_21_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_21_t__id)); return true;
    default: return false;
    }
}
bool C_S_3_21_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_21_t__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_21_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_22_K::ctor_() {
    RT_FN("S_3_22_K.S_3_22_K");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32588 = 396.0; this->f_S_6_21_Z = rt::touint_d(_v32588); _v32588; });
    ({ rt::Value _v32589 = rt::trv(rt::VS(g::LS[6295])); this->f_S_1i = rt::slot_string(_v32589); _v32589; });
    ({ rt::Value _v32590 = rt::VS(g::LS[6296]); this->f_S__5e__21__23_ = rt::slot_string(_v32590); _v32590; });
    ({ double _v32591 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32591); _v32591; });
}
rt::Value C_S_3_22_K::m_S__40__22_() {
    RT_FN("S_3_22_K.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9385]), C_S__26_c::sm_S_8_21_Z(20000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_3_22_K* C_S_3_22_K::alloc_() {
    C_S_3_22_K* o = rt::make<C_S_3_22_K>();
    return o;
}
rt::Value C_S_3_22_K::mk_(rt::Value* a, int n) {
    C_S_3_22_K* o = alloc_();
    o->C_S_3_22_K::ctor_();
    return rt::VO(o);
}
bool C_S_3_22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_3_22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_3_22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_3_22_K::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_3_22_K::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_22_K__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_3_22_K__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S_3_22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_22_K__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_3_22_K__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_3_22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_21_5::ctor_() {
    RT_FN("S_4_21_5.S_4_21_5");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32592 = 205.0; this->f_S_6_21_Z = rt::touint_d(_v32592); _v32592; });
    ({ rt::Value _v32593 = rt::trv(rt::VS(g::LS[9386])); this->f_S_1i = rt::slot_string(_v32593); _v32593; });
    ({ rt::Value _v32594 = rt::VS(g::LS[6122]); this->f_S__5e__21__23_ = rt::slot_string(_v32594); _v32594; });
    ({ double _v32595 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32595); _v32595; });
}
rt::Value C_S_4_21_5::m_S__40__22_() {
    RT_FN("S_4_21_5.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9387])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S_4_21_5::m_S__21__21_G() {
    RT_FN("S_4_21_5.S__21__21_G");
    if ((({ bool _t32599 = ({ bool _t32598 = ({ bool _t32597 = ({ bool _t32596 = (!this->f_S_4_21_K); _t32596 ? (bool)((((double)(C_PlayFab::sg_season())) == 6.0)) : _t32596; }); _t32597 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__23__21_5__id)) : _t32597; }); _t32598 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_9_2c___id)) : _t32598; }); _t32599 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__60__21_1__id)) : _t32599; }) && C_S_8G::sm_S_7d(g::SV.C_S__23__21__5e___id))) {
        (void)(({ rt::Value _o32600 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32601 = rt::as_ptr<C_S_8G>(_o32600); _p32601 ? _p32601->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32600, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_4_21_5* C_S_4_21_5::alloc_() {
    C_S_4_21_5* o = rt::make<C_S_4_21_5>();
    return o;
}
rt::Value C_S_4_21_5::mk_(rt::Value* a, int n) {
    C_S_4_21_5* o = alloc_();
    o->C_S_4_21_5::ctor_();
    return rt::VO(o);
}
bool C_S_4_21_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_4_21_5::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_4_21_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_4_21_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_4_21_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_21_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_21_5__id)); return true;
    default: return false;
    }
}
bool C_S_4_21_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_21_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_21_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_22_O::ctor_() {
    RT_FN("S_4_22_O.S_4_22_O");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32602 = 414.0; this->f_S_6_21_Z = rt::touint_d(_v32602); _v32602; });
    ({ rt::Value _v32603 = rt::trv(rt::VS(g::LS[6277])); this->f_S_1i = rt::slot_string(_v32603); _v32603; });
    ({ rt::Value _v32604 = rt::VS(g::LS[6278]); this->f_S__5e__21__23_ = rt::slot_string(_v32604); _v32604; });
    ({ double _v32605 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32605); _v32605; });
}
rt::Value C_S_4_22_O::m_S__40__22_() {
    RT_FN("S_4_22_O.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9388]), C_S__26_c::sm_S_8_21_Z(1e+100, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_4_22_O* C_S_4_22_O::alloc_() {
    C_S_4_22_O* o = rt::make<C_S_4_22_O>();
    return o;
}
rt::Value C_S_4_22_O::mk_(rt::Value* a, int n) {
    C_S_4_22_O* o = alloc_();
    o->C_S_4_22_O::ctor_();
    return rt::VO(o);
}
bool C_S_4_22_O::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_4_22_O::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_4_22_O::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_4_22_O::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_4_22_O::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_22_O::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22_O__id)); return true;
    case NM_S_3_22_O: out = rt::V(g::SV.C_S_4_22_O__S_3_22_O); return true;
    default: return false;
    }
}
bool C_S_4_22_O::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22_O__id = rt::touint(v); return true;
    case NM_S_3_22_O: g::SV.C_S_4_22_O__S_3_22_O = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_4_22_O::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void static_init_19(std::vector<std::string>& errs) {
    try { (g::SV.C_S__25__21_B__S__3f__21_4 = C_S__25__21_B::sm_S__27_G()); } catch (...) { errs.push_back(std::string("S__25__21_B.S__3f__21_4: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__21_V__S__20__21_4 = C_S__27__21_V::sm_S_3_21_O()); } catch (...) { errs.push_back(std::string("S__27__21_V.S__20__21_4: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__21_V__S__5d_J = C_S__27__21_V::sm_S_0_21_b()); } catch (...) { errs.push_back(std::string("S__27__21_V.S__5d_J: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__22___S_1_21__5d_ = rt::slot_string(rt::VS(g::LS[9268]))); } catch (...) { errs.push_back(std::string("S__2c__22_.S_1_21__5d_: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_c__S_2r = rt::NUL); } catch (...) { errs.push_back(std::string("S_2_21_c.S_2r: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_c__S_0_21__5d_ = false); } catch (...) { errs.push_back(std::string("S_2_21_c.S_0_21__5d_: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_c__S_3_21__5e_ = false); } catch (...) { errs.push_back(std::string("S_2_21_c.S_3_21__5e_: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_c__S_3_21_W = rt::slot_string(rt::VS(g::LS[113]))); } catch (...) { errs.push_back(std::string("S_2_21_c.S_3_21_W: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_c__S_5g = rt::slot_string(rt::VS(g::LS[9272]))); } catch (...) { errs.push_back(std::string("S_2_21_c.S_5g: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_c__data = rt::dict_lit({})); } catch (...) { errs.push_back(std::string("S_2_21_c.data: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_c__S__3e_q = ({ C_S__25__21_B* _n32198 = C_S__25__21_B::alloc_(); _n32198->C_S__25__21_B::ctor_(); rt::VO(_n32198); })); } catch (...) { errs.push_back(std::string("S_2_21_c.S__3e_q: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__22_1__S__25__22_1 = rt::touint_d(1000.0)); } catch (...) { errs.push_back(std::string("S__20__22_1.S__25__22_1: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__22_N__S__22__21_M = 1000.0); } catch (...) { errs.push_back(std::string("S__21__22_N.S__22__21_M: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22_J__S__5e__21_s = 720.0); } catch (...) { errs.push_back(std::string("S__25__22_J.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22_J__S__5d__21__3e_ = 2.0); } catch (...) { errs.push_back(std::string("S__25__22_J.S__5d__21__3e_: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22_N__S__22__22_N = 500.0); } catch (...) { errs.push_back(std::string("S__25__22_N.S__22__22_N: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22_Q__S__23__22_Q = 300.0); } catch (...) { errs.push_back(std::string("S__25__22_Q.S__23__22_Q: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c__22__26___S__5e__21_s = 3.0); } catch (...) { errs.push_back(std::string("S__3c__22__26_.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c__22_H__S__5e__21_s = 1e+60); } catch (...) { errs.push_back(std::string("S__3c__22_H.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__22__27___S__5e__21_s = 1400.0); } catch (...) { errs.push_back(std::string("S__3e__22__27_.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__22_Q__S__5b__22_Q = 2500.0); } catch (...) { errs.push_back(std::string("S__3e__22_Q.S__5b__22_Q: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__22_O__S__3e__22_O = 900.0); } catch (...) { errs.push_back(std::string("S__3f__22_O.S__3e__22_O: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__22_E__S__5e__21_s = 2.0); } catch (...) { errs.push_back(std::string("S__26__22_E.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__22_K__S__5e__21_s = 2.0); } catch (...) { errs.push_back(std::string("S__26__22_K.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__22_K__S__25__22_K = 8.0); } catch (...) { errs.push_back(std::string("S__26__22_K.S__25__22_K: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__22__22___S__5e__21_s = 72.0); } catch (...) { errs.push_back(std::string("S__27__22__22_.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__22_2__S__25__22_1 = 15.0); } catch (...) { errs.push_back(std::string("S__27__22_2.S__25__22_1: ") + rt::exc_text()); }
    try { (g::SV.C_S__2b__21_x__S__27__21_x = 100.0); } catch (...) { errs.push_back(std::string("S__2b__21_x.S__27__21_x: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__22_N__S__27__22__26_ = 2.0); } catch (...) { errs.push_back(std::string("S__2c__22_N.S__27__22__26_: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__22_1__S__25__22_1 = 15.0); } catch (...) { errs.push_back(std::string("S__2d__22_1.S__25__22_1: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__22_I__S__5e__21_s = 720.0); } catch (...) { errs.push_back(std::string("S__2d__22_I.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__60___S_0_21_R = rt::toint_d(8.0)); } catch (...) { errs.push_back(std::string("S__2d__60_.S_0_21_R: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_22_J__S__5e__21_s = 720.0); } catch (...) { errs.push_back(std::string("S_0_22_J.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_22_L__S__5e__21_s = 720.0); } catch (...) { errs.push_back(std::string("S_0_22_L.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_22_L__S_4_21__24_ = 1000.0); } catch (...) { errs.push_back(std::string("S_0_22_L.S_4_21__24_: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_22_Q__S__2b__22_Q = 10.0); } catch (...) { errs.push_back(std::string("S_0_22_Q.S__2b__22_Q: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_22_Q__S__2c__22_Q = 200.0); } catch (...) { errs.push_back(std::string("S_0_22_Q.S__2c__22_Q: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_22_9__S__5e__21_s = 3.0); } catch (...) { errs.push_back(std::string("S_1_22_9.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_22_N__S__3f__3f_ = 1000.0); } catch (...) { errs.push_back(std::string("S_1_22_N.S__3f__3f_: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_22_N__S_5_22_N = 8.0); } catch (...) { errs.push_back(std::string("S_1_22_N.S_5_22_N: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_22_Q__S_4_22_Q = 1.0); } catch (...) { errs.push_back(std::string("S_1_22_Q.S_4_22_Q: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_22_Q__S_3_22_Q = 1.0); } catch (...) { errs.push_back(std::string("S_1_22_Q.S_3_22_Q: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_22_K__S__5e__21_s = 100000.0); } catch (...) { errs.push_back(std::string("S_2_22_K.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_3_22_K__S__5e__21_s = 20000.0); } catch (...) { errs.push_back(std::string("S_3_22_K.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_4_22_O__S_3_22_O = 1e+100); } catch (...) { errs.push_back(std::string("S_4_22_O.S_3_22_O: ") + rt::exc_text()); }
}
}  // namespace g
