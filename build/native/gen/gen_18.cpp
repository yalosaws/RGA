// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S__3b__21__22_::ctor_() {
    RT_FN("S__3b__21__22_.S__3b__21__22_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31040 = 620.0; this->f_S_6_21_Z = rt::touint_d(_v31040); _v31040; });
    ({ rt::Value _v31041 = rt::trv(rt::VS(g::LS[9009])); this->f_S_1i = rt::slot_string(_v31041); _v31041; });
    ({ double _v31042 = 26.0; this->f_S__22__21_U = rt::toint_d(_v31042); _v31042; });
    ({ double _v31043 = 1.0; this->f_S__21_G = rt::toint_d(_v31043); _v31043; });
    ({ double _v31044 = 1325.0; this->f_S__25_w = rt::toint_d(_v31044); _v31044; });
}
rt::Value C_S__3b__21__22_::m_S__40__22_() {
    RT_FN("S__3b__21__22_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8578]), C_S__26_c::sm_S_8_21_Z(C_S__3b__21__22_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3b__21__22_::m_S_8_21_s() {
    RT_FN("S__3b__21__22_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9010])));
    return rt::NUL;
}
rt::Value C_S__3b__21__22_::m_S_8_5b_() {
    RT_FN("S__3b__21__22_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_3_22__26_(true, false, true), 50000000.0, rt::trv(rt::VS(g::LS[1568])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3b__21__22_::g_S__20__21_3() {
    RT_FN("S__3b__21__22_.S__20__21_3_get");
    return ({ bool _t31045 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31045 ? (bool)((C_S__26_c::sm_S_3_22__26_(true, false, true) >= 50000000.0)) : _t31045; });
    return false;
}
double C_S__3b__21__22_::sm_S_9L() {
    RT_FN("S__3b__21__22_.S_9L");
    return (1.75 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_(true, C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()))), 1.75));
    return 0.0;
}
C_S__3b__21__22_* C_S__3b__21__22_::alloc_() {
    C_S__3b__21__22_* o = rt::make<C_S__3b__21__22_>();
    return o;
}
rt::Value C_S__3b__21__22_::mk_(rt::Value* a, int n) {
    C_S__3b__21__22_* o = alloc_();
    o->C_S__3b__21__22_::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21__22_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3b__21__22_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3b__21__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3b__21__22_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3b__21__22_::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__3b__21__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21__22___id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__21__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21__22___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__21__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__3b__21_3::ctor_() {
    RT_FN("S__3b__21_3.S__3b__21_3");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31046 = 459.0; this->f_S_6_21_Z = rt::touint_d(_v31046); _v31046; });
    ({ rt::Value _v31047 = rt::trv(rt::VS(g::LS[9011])); this->f_S_1i = rt::slot_string(_v31047); _v31047; });
    ({ double _v31048 = 19.0; this->f_S__22__21_U = rt::toint_d(_v31048); _v31048; });
    ({ double _v31049 = 5.0; this->f_S__21_G = rt::toint_d(_v31049); _v31049; });
    ({ double _v31050 = 400.0; this->f_S__25_w = rt::toint_d(_v31050); _v31050; });
    ({ bool _v31051 = false; this->f_S__3d_z = _v31051; _v31051; });
}
rt::Value C_S__3b__21_3::m_S__40__22_() {
    RT_FN("S__3b__21_3.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9012]), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3b__21_3::m_S_8_5b_() {
    RT_FN("S__3b__21_3.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__22__21__22___id, g::SV.C_S__3c__21_I__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__3b__21_3::g_S__20__21_3() {
    RT_FN("S__3b__21_3.S__20__21_3_get");
    return ({ bool _t31057 = ({ bool _t31054 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31054 ? (bool)(({ rt::Value _o31052 = C_S_8G::sm_S__21__21_H(g::SV.C_S__22__21__22___id); C_S__60_6* _p31053 = rt::as_ptr<C_S__60_6>(_o31052); _p31053 ? _p31053->f_S__3f__21_6 : rt::T(rt::dget(_o31052, NM_S__3f__21_6)); })) : _t31054; }); _t31057 ? (bool)(({ rt::Value _o31055 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3c__21_I__id); C_S__60_6* _p31056 = rt::as_ptr<C_S__60_6>(_o31055); _p31056 ? _p31056->f_S__3f__21_6 : rt::T(rt::dget(_o31055, NM_S__3f__21_6)); })) : _t31057; });
    return false;
}
C_S__3b__21_3* C_S__3b__21_3::alloc_() {
    C_S__3b__21_3* o = rt::make<C_S__3b__21_3>();
    return o;
}
rt::Value C_S__3b__21_3::mk_(rt::Value* a, int n) {
    C_S__3b__21_3* o = alloc_();
    o->C_S__3b__21_3::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3b__21_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3b__21_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3b__21_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3b__21_3::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_3__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3b__21_3__S_1_21_S); return true;
    default: return false;
    }
}
bool C_S__3b__21_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_3__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3b__21_3__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3b__21_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__21_a::ctor_() {
    RT_FN("S__3b__21_a.S__3b__21_a");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31058 = 240.0; this->f_S_6_21_Z = rt::touint_d(_v31058); _v31058; });
    ({ rt::Value _v31059 = rt::trv(rt::VS(g::LS[9013])); this->f_S_1i = rt::slot_string(_v31059); _v31059; });
    ({ double _v31060 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v31060); _v31060; });
    ({ double _v31061 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31061); _v31061; });
    ({ double _v31062 = 2.0; this->f_S__22__21_U = rt::toint_d(_v31062); _v31062; });
    ({ double _v31063 = 4.0; this->f_S__21_G = rt::toint_d(_v31063); _v31063; });
    ({ double _v31064 = 0.0; this->f_S__5e__21_C = rt::toint_d(_v31064); _v31064; });
    ({ double _v31065 = 30.0; this->f_S__25_w = rt::toint_d(_v31065); _v31065; });
}
rt::Value C_S__3b__21_a::m_S__40__22_() {
    RT_FN("S__3b__21_a.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9014]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__3b__21_a::sm_S_3_21_Z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3b__21_a::m_S_8_21_s() {
    RT_FN("S__3b__21_a.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9015])));
    return rt::NUL;
}
rt::Value C_S__3b__21_a::m_S_8_5b_() {
    RT_FN("S__3b__21_a.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_7i(g::SV.C_S__27_K__id, false, false, true), 5000.0, rt::trv(rt::VS(g::LS[9016])), false, true));
    return rt::NUL;
}
bool C_S__3b__21_a::m_S_9_21__3f_() {
    RT_FN("S__3b__21_a.S_9_21__3f_");
    return ({ bool _t31069 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t31069 ? _t31069 : (bool)(({ bool _t31068 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t31068 ? (bool)((!({ rt::Value _o31066 = C_S_8G::sm_S__23_N(g::SV.C_S__27_K__id); C_S_84* _p31067 = rt::as_ptr<C_S_84>(_o31066); _p31067 ? _p31067->g_S__2d_6() : rt::T(rt::dget(_o31066, NM_S__2d_6)); }))) : _t31068; })); });
    return false;
}
bool C_S__3b__21_a::g_S__20__21_3() {
    RT_FN("S__3b__21_a.S__20__21_3_get");
    return ({ bool _t31070 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31070 ? (bool)((C_S__26_c::sm_S_7i(g::SV.C_S__27_K__id, false, false, true) >= 5000.0)) : _t31070; });
    return false;
}
bool C_S__3b__21_a::g_S_9_21__25_() {
    RT_FN("S__3b__21_a.S_9_21__25__get");
    return ({ bool _t31075 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t31075 ? _t31075 : (bool)(({ bool _t31074 = ({ bool _t31071 = (!this->m_S_9_21_F()); _t31071 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t31071; }); _t31074 ? (bool)(({ rt::Value _o31072 = C_S_8G::sm_S__23_N(g::SV.C_S__27_K__id); C_S_84* _p31073 = rt::as_ptr<C_S_84>(_o31072); _p31073 ? _p31073->g_S__2d_6() : rt::T(rt::dget(_o31072, NM_S__2d_6)); })) : _t31074; })); });
    return false;
}
double C_S__3b__21_a::sm_S_3_21_Z() {
    RT_FN("S__3b__21_a.S_3_21_Z");
    return (0.2 * rt::m_pow(((C_S_8G::sm_S__25_Z(g::SV.C_S_8_21_d__id, C_S_8G::dsm_S__25_Z_1()) + C_S_8G::sm_S__25_Z(g::SV.C_S_2_21__2b___id, C_S_8G::dsm_S__25_Z_1())) + C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, C_S_8G::dsm_S__25_Z_1())), 0.8));
    return 0.0;
}
C_S__3b__21_a* C_S__3b__21_a::alloc_() {
    C_S__3b__21_a* o = rt::make<C_S__3b__21_a>();
    return o;
}
rt::Value C_S__3b__21_a::mk_(rt::Value* a, int n) {
    C_S__3b__21_a* o = alloc_();
    o->C_S__3b__21_a::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3b__21_a::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3b__21_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3b__21_a::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3b__21_a::smeth_(int id) {
    switch (id) {
    case NM_S_3_21_Z: return true;
    default: return false;
    }
}
bool C_S__3b__21_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_a__id)); return true;
    case NM_ids: out = g::SV.C_S__3b__21_a__ids; return true;
    case NM_S_3_21_Z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__21_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_a__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3b__21_a__ids = v; return true;
    default: return false;
    }
}
bool C_S__3b__21_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_3_21_Z: out = rt::V(sm_S_3_21_Z()); return true;
    default: return false;
    }
}
void C_S__3b__22_3::ctor_() {
    RT_FN("S__3b__22_3.S__3b__22_3");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31076 = 1051.0; this->f_S_6_21_Z = rt::touint_d(_v31076); _v31076; });
    ({ rt::Value _v31077 = rt::trv(rt::VS(g::LS[9018])); this->f_S_1i = rt::slot_string(_v31077); _v31077; });
    ({ double _v31078 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31078); _v31078; });
    ({ double _v31079 = 3.0; this->f_S__22__21_U = rt::toint_d(_v31079); _v31079; });
    ({ double _v31080 = 6.0; this->f_S__21_G = rt::toint_d(_v31080); _v31080; });
    ({ double _v31081 = 11.0; this->f_S__5e__21_C = rt::toint_d(_v31081); _v31081; });
    ({ double _v31082 = 6000.0; this->f_S__25_w = rt::toint_d(_v31082); _v31082; });
}
rt::Value C_S__3b__22_3::m_S__40__22_() {
    RT_FN("S__3b__22_3.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9019]), C_S__26_c::sm_S__23__21_R(C_S__3b__22_3::sm_S__2c__21_G(), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2())));
    return rt::NUL;
}
rt::Value C_S__3b__22_3::m_S_8_5b_() {
    RT_FN("S__3b__22_3.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__22__21_B(rt::toint_d(61.0), false, false, false, true), 3600.0, rt::trv(rt::VS(g::LS[9020])), false, true));
    return rt::NUL;
}
bool C_S__3b__22_3::g_S__20__21_3() {
    RT_FN("S__3b__22_3.S__20__21_3_get");
    return ({ bool _t31084 = ({ bool _t31083 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31083 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t31083; }); _t31084 ? (bool)((C_S__26_c::sm_S__22__21_B(rt::toint_d(61.0), false, false, false, true) >= 3600.0)) : _t31084; });
    return false;
}
double C_S__3b__22_3::sm_S__2c__21_G() {
    RT_FN("S__3b__22_3.S__2c__21_G");
    return (10.0 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.5));
    return 0.0;
}
C_S__3b__22_3* C_S__3b__22_3::alloc_() {
    C_S__3b__22_3* o = rt::make<C_S__3b__22_3>();
    return o;
}
rt::Value C_S__3b__22_3::mk_(rt::Value* a, int n) {
    C_S__3b__22_3* o = alloc_();
    o->C_S__3b__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3b__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3b__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3b__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3b__22_3::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3b__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22_3__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22_3__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3b__22_4::ctor_() {
    RT_FN("S__3b__22_4.S__3b__22_4");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31085 = 1056.0; this->f_S_6_21_Z = rt::touint_d(_v31085); _v31085; });
    ({ rt::Value _v31086 = rt::trv(rt::VS(g::LS[9021])); this->f_S_1i = rt::slot_string(_v31086); _v31086; });
    ({ double _v31087 = 32.0; this->f_S__22__21_U = rt::toint_d(_v31087); _v31087; });
    ({ double _v31088 = 5.0; this->f_S__21_G = rt::toint_d(_v31088); _v31088; });
    ({ double _v31089 = 5625.0; this->f_S__25_w = rt::toint_d(_v31089); _v31089; });
}
rt::Value C_S__3b__22_4::m_S__40__22_() {
    RT_FN("S__3b__22_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9022]), C_S__26_c::sm_S_8_21_Z(C_S__3b__22_4::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__3b__22_4::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3b__22_4::m_S_8_5b_() {
    RT_FN("S__3b__22_4.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 4.0))), 1000000.0, rt::trv(rt::VS(g::LS[8604])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3b__22_4::g_S__20__21_3() {
    RT_FN("S__3b__22_4.S__20__21_3_get");
    return ({ bool _t31091 = ({ bool _t31090 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31090 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t31090; }); _t31091 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 4.0)), rt::V(1000000.0))) : _t31091; });
    return false;
}
double C_S__3b__22_4::sm_S__2c__21_G() {
    RT_FN("S__3b__22_4.S__2c__21_G");
    return 50.0;
    return 0.0;
}
double C_S__3b__22_4::sm_S__5e_y() {
    RT_FN("S__3b__22_4.S__5e_y");
    return rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_(true, C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()))), 1.7);
    return 0.0;
}
C_S__3b__22_4* C_S__3b__22_4::alloc_() {
    C_S__3b__22_4* o = rt::make<C_S__3b__22_4>();
    return o;
}
rt::Value C_S__3b__22_4::mk_(rt::Value* a, int n) {
    C_S__3b__22_4* o = alloc_();
    o->C_S__3b__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3b__22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3b__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3b__22_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3b__22_4::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    case NM_S__5e_y: return true;
    default: return false;
    }
}
bool C_S__3b__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22_4__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S__5e_y: out = rt::V(sm_S__5e_y()); return true;
    default: return false;
    }
}
void C_S__3b__22_A::ctor_() {
    RT_FN("S__3b__22_A.S__3b__22_A");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31092 = 1089.0; this->f_S_6_21_Z = rt::touint_d(_v31092); _v31092; });
    ({ rt::Value _v31093 = rt::trv(rt::VS(g::LS[9023])); this->f_S_1i = rt::slot_string(_v31093); _v31093; });
    ({ double _v31094 = 5.0; this->f_S__22__21_U = rt::toint_d(_v31094); _v31094; });
    ({ double _v31095 = 6.0; this->f_S__21_G = rt::toint_d(_v31095); _v31095; });
    ({ double _v31096 = 11250.0; this->f_S__25_w = rt::toint_d(_v31096); _v31096; });
}
rt::Value C_S__3b__22_A::m_S__40__22_() {
    RT_FN("S__3b__22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9024]), C_S__26_c::sm_S_8_21_Z(C_S__3b__22_A::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3b__22_A::m_S_8_5b_() {
    RT_FN("S__3b__22_A.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 98.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 98.0))), 15000.0, rt::trv(rt::VS(g::LS[9025])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3b__22_A::g_S__20__21_3() {
    RT_FN("S__3b__22_A.S__20__21_3_get");
    return ({ bool _t31097 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31097 ? (bool)((rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 98.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 98.0))) >= 15000.0)) : _t31097; });
    return false;
}
double C_S__3b__22_A::sm_S__2c__21_G() {
    RT_FN("S__3b__22_A.S__2c__21_G");
    return rt::m_pow(C_S__26_c::sm_S_3L(true, C_S__26_c::dsm_S_3L_1()), 0.5);
    return 0.0;
}
C_S__3b__22_A* C_S__3b__22_A::alloc_() {
    C_S__3b__22_A* o = rt::make<C_S__3b__22_A>();
    return o;
}
rt::Value C_S__3b__22_A::mk_(rt::Value* a, int n) {
    C_S__3b__22_A* o = alloc_();
    o->C_S__3b__22_A::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3b__22_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3b__22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3b__22_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3b__22_A::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3b__22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22_A__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3b__22_G::ctor_() {
    RT_FN("S__3b__22_G.S__3b__22_G");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31098 = 1185.0; this->f_S_6_21_Z = rt::touint_d(_v31098); _v31098; });
    ({ rt::Value _v31099 = rt::trv(rt::VS(g::LS[9026])); this->f_S_1i = rt::slot_string(_v31099); _v31099; });
    ({ double _v31100 = 41.0; this->f_S__22__21_U = rt::toint_d(_v31100); _v31100; });
    ({ double _v31101 = 5.0; this->f_S__21_G = rt::toint_d(_v31101); _v31101; });
    ({ double _v31102 = 13500.0; this->f_S__25_w = rt::toint_d(_v31102); _v31102; });
}
rt::Value C_S__3b__22_G::m_S__40__22_() {
    RT_FN("S__3b__22_G.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9027]), C_S__26_c::sm_S_6_21_T(C_S__3b__22_G::sm_S__2d__22_G(), 5.0, C_S__26_c::dsm_S_6_21_T_2()), C_S__26_c::sm_S_6_21_T(C_S__3b__22_G::sm_S_7_22_G(), 5.0, C_S__26_c::dsm_S_6_21_T_2()), C_S__26_c::sm_S_6_21_T(C_S__3b__22_G::sm_S_2_22_G(), 5.0, C_S__26_c::dsm_S_6_21_T_2())), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[9028]), C_S__26_c::sm_S_6_21_T(C_S__3b__22_G::sm_S__3d__22_G(), 5.0, C_S__26_c::dsm_S_6_21_T_2()), C_S__26_c::sm_S_6_21_T(C_S__3b__22_G::sm_S_3_22_G(), 5.0, C_S__26_c::dsm_S_6_21_T_2()), C_S__26_c::sm_S_6_21_T(C_S__3b__22_G::sm_S__3c__22_G(), 5.0, C_S__26_c::dsm_S_6_21_T_2()))));
    return rt::NUL;
}
rt::Value C_S__3b__22_G::m_S_8_5b_() {
    RT_FN("S__3b__22_G.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__26__21_y(true, C_S__26_c::dsm_S__26__21_y_1(), C_S__26_c::dsm_S__26__21_y_2()), 1800.0, rt::trv(rt::VS(g::LS[9029])), false, true));
    return rt::NUL;
}
bool C_S__3b__22_G::g_S__20__21_3() {
    RT_FN("S__3b__22_G.S__20__21_3_get");
    return ({ bool _t31103 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31103 ? (bool)((C_S__26_c::sm_S__26__21_y(true, C_S__26_c::dsm_S__26__21_y_1(), C_S__26_c::dsm_S__26__21_y_2()) >= 1800.0)) : _t31103; });
    return false;
}
double C_S__3b__22_G::sm_S__2c__22_G(double p0) {
    double l_param1 = p0;
    RT_FN("S__3b__22_G.S__2c__22_G");
    return (0.75 * rt::m_pow(l_param1, 0.75));
    return 0.0;
}
double C_S__3b__22_G::sm_S__2d__22_G() {
    RT_FN("S__3b__22_G.S__2d__22_G");
    return C_S__3b__22_G::sm_S__2c__22_G(C_S__26_c::sm_S__22__21_B(rt::toint_d(2.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()));
    return 0.0;
}
double C_S__3b__22_G::sm_S_7_22_G() {
    RT_FN("S__3b__22_G.S_7_22_G");
    return C_S__3b__22_G::sm_S__2c__22_G(C_S__26_c::sm_S__22__21_B(rt::toint_d(48.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()));
    return 0.0;
}
double C_S__3b__22_G::sm_S_2_22_G() {
    RT_FN("S__3b__22_G.S_2_22_G");
    return C_S__3b__22_G::sm_S__2c__22_G((C_S__26_c::sm_S__22__21_B(rt::toint_d(2.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()) + C_S__26_c::sm_S__22__21_B(rt::toint_d(48.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4())));
    return 0.0;
}
double C_S__3b__22_G::sm_S__3d__22_G() {
    RT_FN("S__3b__22_G.S__3d__22_G");
    return C_S__3b__22_G::sm_S__2c__22_G(C_S__26_c::sm_S__22__21_B(rt::toint_d(3.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()));
    return 0.0;
}
double C_S__3b__22_G::sm_S_3_22_G() {
    RT_FN("S__3b__22_G.S_3_22_G");
    return C_S__3b__22_G::sm_S__2c__22_G(C_S__26_c::sm_S__22__21_B(rt::toint_d(36.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()));
    return 0.0;
}
double C_S__3b__22_G::sm_S__3c__22_G() {
    RT_FN("S__3b__22_G.S__3c__22_G");
    return C_S__3b__22_G::sm_S__2c__22_G((C_S__26_c::sm_S__22__21_B(rt::toint_d(3.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()) + C_S__26_c::sm_S__22__21_B(rt::toint_d(36.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4())));
    return 0.0;
}
C_S__3b__22_G* C_S__3b__22_G::alloc_() {
    C_S__3b__22_G* o = rt::make<C_S__3b__22_G>();
    return o;
}
rt::Value C_S__3b__22_G::mk_(rt::Value* a, int n) {
    C_S__3b__22_G* o = alloc_();
    o->C_S__3b__22_G::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3b__22_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3b__22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3b__22_G::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3b__22_G::smeth_(int id) {
    switch (id) {
    case NM_S__2c__22_G: return true;
    case NM_S__2d__22_G: return true;
    case NM_S_7_22_G: return true;
    case NM_S_2_22_G: return true;
    case NM_S__3d__22_G: return true;
    case NM_S_3_22_G: return true;
    case NM_S__3c__22_G: return true;
    default: return false;
    }
}
bool C_S__3b__22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22_G__id)); return true;
    case NM_S__2c__22_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2d__22_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_7_22_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_22_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3d__22_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3_22_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3c__22_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__22_G: out = rt::V(sm_S__2c__22_G(rt::arg<double>(a, n, 0, NAN))); return true;
    case NM_S__2d__22_G: out = rt::V(sm_S__2d__22_G()); return true;
    case NM_S_7_22_G: out = rt::V(sm_S_7_22_G()); return true;
    case NM_S_2_22_G: out = rt::V(sm_S_2_22_G()); return true;
    case NM_S__3d__22_G: out = rt::V(sm_S__3d__22_G()); return true;
    case NM_S_3_22_G: out = rt::V(sm_S_3_22_G()); return true;
    case NM_S__3c__22_G: out = rt::V(sm_S__3c__22_G()); return true;
    default: return false;
    }
}
void C_S__3b__25_::ctor_() {
    RT_FN("S__3b__25_.S__3b__25_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31104 = 284.0; this->f_S_6_21_Z = rt::touint_d(_v31104); _v31104; });
    ({ rt::Value _v31105 = rt::trv(rt::VS(g::LS[9030])); this->f_S_1i = rt::slot_string(_v31105); _v31105; });
    ({ double _v31106 = 3.0; this->f_S__22__21_U = rt::toint_d(_v31106); _v31106; });
    ({ double _v31107 = 3.0; this->f_S__21_G = rt::toint_d(_v31107); _v31107; });
    ({ double _v31108 = 30.0; this->f_S__25_w = rt::toint_d(_v31108); _v31108; });
}
rt::Value C_S__3b__25_::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3b__25_.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[9031]))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[9032]), C_S__26_c::sm_S_8_21_Z(C_S__3b__25_::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::slot_string(rt::add(l_A__loc1_, (rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[9033]), C_S__26_c::sm_S_8_21_Z(C_S__3b__25_::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::NUL;
}
rt::Value C_S__3b__25_::m_S_8_21_s() {
    RT_FN("S__3b__25_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9034])));
    return rt::NUL;
}
rt::Value C_S__3b__25_::m_S_8_5b_() {
    RT_FN("S__3b__25_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)), 1000.0, rt::trv(rt::VS(g::LS[8585])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3b__25_::g_S__20__21_3() {
    RT_FN("S__3b__25_.S__20__21_3_get");
    return ({ bool _t31109 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31109 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0), rt::V(1000.0))) : _t31109; });
    return false;
}
double C_S__3b__25_::sm_S__2c_J() {
    RT_FN("S__3b__25_.S__2c_J");
    return (3.0 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7));
    return 0.0;
}
double C_S__3b__25_::sm_S__40__21__3f_() {
    RT_FN("S__3b__25_.S__40__21__3f_");
    return (0.3 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7));
    return 0.0;
}
C_S__3b__25_* C_S__3b__25_::alloc_() {
    C_S__3b__25_* o = rt::make<C_S__3b__25_>();
    return o;
}
rt::Value C_S__3b__25_::mk_(rt::Value* a, int n) {
    C_S__3b__25_* o = alloc_();
    o->C_S__3b__25_::ctor_();
    return rt::VO(o);
}
bool C_S__3b__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3b__25_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3b__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3b__25_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3b__25_::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    case NM_S__40__21__3f_: return true;
    default: return false;
    }
}
bool C_S__3b__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__25___id)); return true;
    case NM_ids: out = g::SV.C_S__3b__25___ids; return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__25___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3b__25___ids = v; return true;
    default: return false;
    }
}
bool C_S__3b__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    default: return false;
    }
}
void C_S__3b_R::ctor_() {
    RT_FN("S__3b_R.S__3b_R");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31110 = 624.0; this->f_S_6_21_Z = rt::touint_d(_v31110); _v31110; });
    ({ rt::Value _v31111 = rt::trv(rt::VS(g::LS[9036])); this->f_S_1i = rt::slot_string(_v31111); _v31111; });
    ({ double _v31112 = 26.0; this->f_S__22__21_U = rt::toint_d(_v31112); _v31112; });
    ({ double _v31113 = 2.0; this->f_S__21_G = rt::toint_d(_v31113); _v31113; });
    ({ double _v31114 = 1275.0; this->f_S__25_w = rt::toint_d(_v31114); _v31114; });
}
rt::Value C_S__3b_R::m_S__40__22_() {
    RT_FN("S__3b_R.S__40__22_");
    return rt::slot_string(C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[9037]), rt::dcallv(rt::V(0.3), rt::N_toFixed, rt::V(1.0))), rt::trv(rt::VS(g::LS[9038])), rt::toint_d(2.0)));
    return rt::NUL;
}
rt::Value C_S__3b_R::m_S_8_21_s() {
    RT_FN("S__3b_R.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9039])));
    return rt::NUL;
}
rt::Value C_S__3b_R::m_S_8_5b_() {
    RT_FN("S__3b_R.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true), 80000.0, rt::trv(rt::VS(g::LS[8484])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3b_R::g_S__20__21_3() {
    RT_FN("S__3b_R.S__20__21_3_get");
    return ({ bool _t31115 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31115 ? (bool)((C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true) >= 80000.0)) : _t31115; });
    return false;
}
C_S__3b_R* C_S__3b_R::alloc_() {
    C_S__3b_R* o = rt::make<C_S__3b_R>();
    return o;
}
rt::Value C_S__3b_R::mk_(rt::Value* a, int n) {
    C_S__3b_R* o = alloc_();
    o->C_S__3b_R::ctor_();
    return rt::VO(o);
}
bool C_S__3b_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3b_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3b_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3b_R::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3b_R::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b_R__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3b_R__S_1_21_S); return true;
    default: return false;
    }
}
bool C_S__3b_R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b_R__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3b_R__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3b_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b_b::ctor_() {
    RT_FN("S__3b_b.S__3b_b");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31116 = 271.0; this->f_S_6_21_Z = rt::touint_d(_v31116); _v31116; });
    ({ rt::Value _v31117 = rt::trv(rt::VS(g::LS[9040])); this->f_S_1i = rt::slot_string(_v31117); _v31117; });
    ({ double _v31118 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v31118); _v31118; });
    ({ double _v31119 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31119); _v31119; });
    ({ double _v31120 = 8.0; this->f_S__22__21_U = rt::toint_d(_v31120); _v31120; });
    ({ double _v31121 = 2.0; this->f_S__21_G = rt::toint_d(_v31121); _v31121; });
    ({ double _v31122 = 2.0; this->f_S__5e__21_C = rt::toint_d(_v31122); _v31122; });
    ({ double _v31123 = 175.0; this->f_S__25_w = rt::toint_d(_v31123); _v31123; });
    ({ bool _v31124 = false; this->f_S__3d_z = _v31124; _v31124; });
}
rt::Value C_S__3b_b::m_S__40__22_() {
    RT_FN("S__3b_b.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9041]), C_S__26_c::sm_S_8_21_Z(C_S__3b_b::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3b_b::m_S_9_21__3f_() {
    RT_FN("S__3b_b.S_9_21__3f_");
    return ({ bool _t31128 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t31128 ? _t31128 : (bool)(({ bool _t31127 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t31127 ? (bool)((!({ rt::Value _o31125 = C_S_8G::sm_S__23_N(g::SV.C_S_6_21_V__id); C_S_84* _p31126 = rt::as_ptr<C_S_84>(_o31125); _p31126 ? _p31126->g_S__2d_6() : rt::T(rt::dget(_o31125, NM_S__2d_6)); }))) : _t31127; })); });
    return false;
}
rt::Value C_S__3b_b::m_S_8_5b_() {
    RT_FN("S__3b_b.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_9_21__24___id, g::SV.C_S_4_21_G__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__3b_b::g_S__20__21_3() {
    RT_FN("S__3b_b.S__20__21_3_get");
    return ({ bool _t31134 = ({ bool _t31131 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31131 ? (bool)(({ rt::Value _o31129 = C_S_8G::sm_S__21__21_H(g::SV.C_S_9_21__24___id); C_S__60_6* _p31130 = rt::as_ptr<C_S__60_6>(_o31129); _p31130 ? _p31130->f_S__3f__21_6 : rt::T(rt::dget(_o31129, NM_S__3f__21_6)); })) : _t31131; }); _t31134 ? (bool)(({ rt::Value _o31132 = C_S_8G::sm_S__21__21_H(g::SV.C_S_4_21_G__id); C_S__60_6* _p31133 = rt::as_ptr<C_S__60_6>(_o31132); _p31133 ? _p31133->f_S__3f__21_6 : rt::T(rt::dget(_o31132, NM_S__3f__21_6)); })) : _t31134; });
    return false;
}
bool C_S__3b_b::g_S_9_21__25_() {
    RT_FN("S__3b_b.S_9_21__25__get");
    return ({ bool _t31139 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t31139 ? _t31139 : (bool)(({ bool _t31138 = ({ bool _t31135 = (!this->m_S_9_21_F()); _t31135 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t31135; }); _t31138 ? (bool)(({ rt::Value _o31136 = C_S_8G::sm_S__23_N(g::SV.C_S_6_21_V__id); C_S_84* _p31137 = rt::as_ptr<C_S_84>(_o31136); _p31137 ? _p31137->g_S__2d_6() : rt::T(rt::dget(_o31136, NM_S__2d_6)); })) : _t31138; })); });
    return false;
}
double C_S__3b_b::sm_S_5_21_B() {
    RT_FN("S__3b_b.S_5_21_B");
    return (2.5 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S_6_21_V__id, false, false, C_S__26_c::dsm_S_7i_3()), 0.75));
    return 0.0;
}
C_S__3b_b* C_S__3b_b::alloc_() {
    C_S__3b_b* o = rt::make<C_S__3b_b>();
    return o;
}
rt::Value C_S__3b_b::mk_(rt::Value* a, int n) {
    C_S__3b_b* o = alloc_();
    o->C_S__3b_b::ctor_();
    return rt::VO(o);
}
bool C_S__3b_b::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3b_b::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3b_b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3b_b::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3b_b::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    default: return false;
    }
}
bool C_S__3b_b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b_b__id)); return true;
    case NM_ids: out = g::SV.C_S__3b_b__ids; return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b_b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b_b__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3b_b__ids = v; return true;
    default: return false;
    }
}
bool C_S__3b_b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    default: return false;
    }
}
void C_S__3d__21_U::ctor_() {
    RT_FN("S__3d__21_U.S__3d__21_U");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31140 = 252.0; this->f_S_6_21_Z = rt::touint_d(_v31140); _v31140; });
    ({ rt::Value _v31141 = rt::trv(rt::VS(g::LS[9043])); this->f_S_1i = rt::slot_string(_v31141); _v31141; });
    ({ double _v31142 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v31142); _v31142; });
    ({ double _v31143 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31143); _v31143; });
    ({ double _v31144 = 1.0; this->f_S__22__21_U = rt::toint_d(_v31144); _v31144; });
    ({ double _v31145 = 1.0; this->f_S__21_G = rt::toint_d(_v31145); _v31145; });
    ({ double _v31146 = 0.0; this->f_S__5e__21_C = rt::toint_d(_v31146); _v31146; });
    ({ double _v31147 = 10.0; this->f_S__25_w = rt::toint_d(_v31147); _v31147; });
}
rt::Value C_S__3d__21_U::m_S__40__22_() {
    RT_FN("S__3d__21_U.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9044]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[8227]), C_S__26_c::sm_S_8_21_Z(70.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, C_S__26_c::dsm_S__3e__21__26__1(), C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), rt::trv(rt::VS(g::LS[1722]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S__3d__21_U::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3d__21_U::m_S_8_21_s() {
    RT_FN("S__3d__21_U.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9045])));
    return rt::NUL;
}
rt::Value C_S__3d__21_U::m_S_8_5b_() {
    RT_FN("S__3d__21_U.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sm_S__25_Z(g::SV.C_S_8_21_d__id, true), 2500.0, C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3d__21_U::m_S_9_21__3f_() {
    RT_FN("S__3d__21_U.S_9_21__3f_");
    return ({ bool _t31149 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t31149 ? _t31149 : (bool)(({ bool _t31148 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t31148 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_1_21_N__id))) : _t31148; })); });
    return false;
}
bool C_S__3d__21_U::g_S__20__21_3() {
    RT_FN("S__3d__21_U.S__20__21_3_get");
    return ({ bool _t31150 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31150 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S_8_21_d__id, true) >= 2500.0)) : _t31150; });
    return false;
}
bool C_S__3d__21_U::g_S_9_21__25_() {
    RT_FN("S__3d__21_U.S_9_21__25__get");
    return ({ bool _t31153 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t31153 ? _t31153 : (bool)(({ bool _t31152 = ({ bool _t31151 = (!this->m_S_9_21_F()); _t31151 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t31151; }); _t31152 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_1_21_N__id)) : _t31152; })); });
    return false;
}
double C_S__3d__21_U::sm_S__26_s() {
    RT_FN("S__3d__21_U.S__26_s");
    return (70.0 * C_S_8G::sm_S__25_Z(g::SV.C_S_8_21_d__id, C_S_8G::dsm_S__25_Z_1()));
    return 0.0;
}
C_S__3d__21_U* C_S__3d__21_U::alloc_() {
    C_S__3d__21_U* o = rt::make<C_S__3d__21_U>();
    return o;
}
rt::Value C_S__3d__21_U::mk_(rt::Value* a, int n) {
    C_S__3d__21_U* o = alloc_();
    o->C_S__3d__21_U::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21_U::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3d__21_U::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3d__21_U::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3d__21_U::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3d__21_U::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3d__21_U::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__21_U__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3d__21_U__S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__3d__21_U__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__21_U::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__21_U__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3d__21_U__S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__3d__21_U__ids = v; return true;
    default: return false;
    }
}
bool C_S__3d__21_U::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3d__21_d::ctor_() {
    RT_FN("S__3d__21_d.S__3d__21_d");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31154 = 436.0; this->f_S_6_21_Z = rt::touint_d(_v31154); _v31154; });
    ({ rt::Value _v31155 = rt::trv(rt::VS(g::LS[9047])); this->f_S_1i = rt::slot_string(_v31155); _v31155; });
    ({ double _v31156 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v31156); _v31156; });
    ({ double _v31157 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31157); _v31157; });
    ({ double _v31158 = 14.0; this->f_S__22__21_U = rt::toint_d(_v31158); _v31158; });
    ({ double _v31159 = 2.0; this->f_S__21_G = rt::toint_d(_v31159); _v31159; });
    ({ double _v31160 = 7.0; this->f_S__5e__21_C = rt::toint_d(_v31160); _v31160; });
    ({ double _v31161 = 300.0; this->f_S__25_w = rt::toint_d(_v31161); _v31161; });
}
rt::Value C_S__3d__21_d::m_S__40__22_() {
    RT_FN("S__3d__21_d.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9048]), C_S__26_c::sm_S_8_21_Z(C_S__3d__21_d::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__3d__21_d::sm_S__3e__21_n(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3d__21_d::m_S_8_21_s() {
    RT_FN("S__3d__21_d.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9049])));
    return rt::NUL;
}
rt::Value C_S__3d__21_d::m_S_8_5b_() {
    RT_FN("S__3d__21_d.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()), 10000.0, rt::trv(rt::VS(g::LS[9050])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3d__21_d::g_S__20__21_3() {
    RT_FN("S__3d__21_d.S__20__21_3_get");
    return ({ bool _t31162 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31162 ? (bool)((C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()) >= 10000.0)) : _t31162; });
    return false;
}
double C_S__3d__21_d::sm_S__22__21__26_() {
    RT_FN("S__3d__21_d.S__22__21__26_");
    return ((0.35 * rt::m_pow(C_S__26_c::sm_S_2_21__26_(), 0.35)) + (0.035 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_2_21__26_())), 3.5)));
    return 0.0;
}
double C_S__3d__21_d::sm_S__3e__21_n() {
    RT_FN("S__3d__21_d.S__3e__21_n");
    return 300.0;
    return 0.0;
}
C_S__3d__21_d* C_S__3d__21_d::alloc_() {
    C_S__3d__21_d* o = rt::make<C_S__3d__21_d>();
    return o;
}
rt::Value C_S__3d__21_d::mk_(rt::Value* a, int n) {
    C_S__3d__21_d* o = alloc_();
    o->C_S__3d__21_d::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21_d::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3d__21_d::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3d__21_d::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3d__21_d::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3d__21_d::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    case NM_S__3e__21_n: return true;
    default: return false;
    }
}
bool C_S__3d__21_d::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__21_d__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3e__21_n: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__21_d::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__21_d__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__21_d::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    case NM_S__3e__21_n: out = rt::V(sm_S__3e__21_n()); return true;
    default: return false;
    }
}
void C_S__3d__21_h::ctor_() {
    RT_FN("S__3d__21_h.S__3d__21_h");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31163 = 711.0; this->f_S_6_21_Z = rt::touint_d(_v31163); _v31163; });
    ({ rt::Value _v31164 = rt::trv(rt::VS(g::LS[9051])); this->f_S_1i = rt::slot_string(_v31164); _v31164; });
    ({ double _v31165 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31165); _v31165; });
    ({ double _v31166 = 28.0; this->f_S__22__21_U = rt::toint_d(_v31166); _v31166; });
    ({ double _v31167 = 1.0; this->f_S__21_G = rt::toint_d(_v31167); _v31167; });
    ({ double _v31168 = 11.0; this->f_S__5e__21_C = rt::toint_d(_v31168); _v31168; });
    ({ double _v31169 = 3000.0; this->f_S__25_w = rt::toint_d(_v31169); _v31169; });
}
rt::Value C_S__3d__21_h::m_S_8_5b_() {
    RT_FN("S__3d__21_h.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sg_S_1_21_5(), g::SV.C_S__3d__21_h__S__3f__3f_, rt::trv(rt::VS(g::LS[8374])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
rt::Value C_S__3d__21_h::m_S__40__22_() {
    RT_FN("S__3d__21_h.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1909]), C_S__26_c::sm_S_6_21_T(C_S__3d__21_h::sm_S__27__21_b(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3d__21_h::m_S_8_21_s() {
    RT_FN("S__3d__21_h.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9052])));
    return rt::NUL;
}
bool C_S__3d__21_h::g_S__20__21_3() {
    RT_FN("S__3d__21_h.S__20__21_3_get");
    return ({ bool _t31171 = ({ bool _t31170 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31170 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_i__id)) : _t31170; }); _t31171 ? (bool)((C_S_8G::sg_S_1_21_5() >= g::SV.C_S__3d__21_h__S__3f__3f_)) : _t31171; });
    return false;
}
bool C_S__3d__21_h::g_S_9_21__25_() {
    RT_FN("S__3d__21_h.S_9_21__25__get");
    return ({ bool _t31172 = (!this->m_S_9_21_F()); _t31172 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == ((double)(this->f_S__2d__21__5e_)))) : _t31172; });
    return false;
}
double C_S__3d__21_h::sm_S__27__21_b() {
    RT_FN("S__3d__21_h.S__27__21_b");
    return (2.0 * rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 2.0));
    return 0.0;
}
C_S__3d__21_h* C_S__3d__21_h::alloc_() {
    C_S__3d__21_h* o = rt::make<C_S__3d__21_h>();
    return o;
}
rt::Value C_S__3d__21_h::mk_(rt::Value* a, int n) {
    C_S__3d__21_h* o = alloc_();
    o->C_S__3d__21_h::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21_h::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3d__21_h::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3d__21_h::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3d__21_h::dmeth(int id) {
    switch (id) {
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3d__21_h::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3d__21_h::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__21_h__id)); return true;
    case NM_S__3f__3f_: out = rt::V(g::SV.C_S__3d__21_h__S__3f__3f_); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__21_h::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__21_h__id = rt::touint(v); return true;
    case NM_S__3f__3f_: g::SV.C_S__3d__21_h__S__3f__3f_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3d__21_h::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3d__22_3::ctor_() {
    RT_FN("S__3d__22_3.S__3d__22_3");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31173 = 1036.0; this->f_S_6_21_Z = rt::touint_d(_v31173); _v31173; });
    ({ rt::Value _v31174 = rt::trv(rt::VS(g::LS[9053])); this->f_S_1i = rt::slot_string(_v31174); _v31174; });
    ({ double _v31175 = 32.0; this->f_S__22__21_U = rt::toint_d(_v31175); _v31175; });
    ({ double _v31176 = 1.0; this->f_S__21_G = rt::toint_d(_v31176); _v31176; });
    ({ double _v31177 = 5625.0; this->f_S__25_w = rt::toint_d(_v31177); _v31177; });
}
rt::Value C_S__3d__22_3::m_S__40__22_() {
    RT_FN("S__3d__22_3.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9054]), C_S__26_c::sm_S_8_21_Z(C_S__3d__22_3::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3d__22_3::m_S_8_5b_() {
    RT_FN("S__3d__22_3.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sg_S_1_21_5(), 25000.0, rt::trv(rt::VS(g::LS[9055])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3d__22_3::g_S__20__21_3() {
    RT_FN("S__3d__22_3.S__20__21_3_get");
    return ({ bool _t31179 = ({ bool _t31178 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31178 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t31178; }); _t31179 ? (bool)((C_S_8G::sg_S_1_21_5() >= 25000.0)) : _t31179; });
    return false;
}
double C_S__3d__22_3::sm_S__2c__21_G() {
    RT_FN("S__3d__22_3.S__2c__21_G");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S__21__21_8(), 0.5));
    return 0.0;
}
C_S__3d__22_3* C_S__3d__22_3::alloc_() {
    C_S__3d__22_3* o = rt::make<C_S__3d__22_3>();
    return o;
}
rt::Value C_S__3d__22_3::mk_(rt::Value* a, int n) {
    C_S__3d__22_3* o = alloc_();
    o->C_S__3d__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3d__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3d__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3d__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3d__22_3::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3d__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_3__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_3__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3d__22_4::ctor_() {
    RT_FN("S__3d__22_4.S__3d__22_4");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31180 = 1034.0; this->f_S_6_21_Z = rt::touint_d(_v31180); _v31180; });
    ({ rt::Value _v31181 = rt::trv(rt::VS(g::LS[9056])); this->f_S_1i = rt::slot_string(_v31181); _v31181; });
    ({ double _v31182 = 30.0; this->f_S__22__21_U = rt::toint_d(_v31182); _v31182; });
    ({ double _v31183 = 4.0; this->f_S__21_G = rt::toint_d(_v31183); _v31183; });
    ({ double _v31184 = 5125.0; this->f_S__25_w = rt::toint_d(_v31184); _v31184; });
}
rt::Value C_S__3d__22_4::m_S__40__22_() {
    RT_FN("S__3d__22_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9057]), C_S__26_c::sm_S_6_21_T(C_S__3d__22_4::sm_S__26_s(), 4.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3d__22_4::m_S_8_5b_() {
    RT_FN("S__3d__22_4.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__5e__21_r(rt::toint_d(1.0), C_S__26_c::dsm_S__5e__21_r_1(), C_S__26_c::dsm_S__5e__21_r_2()), 7200.0, rt::trv(rt::VS(g::LS[5131])), false, true));
    return rt::NUL;
}
bool C_S__3d__22_4::g_S__20__21_3() {
    RT_FN("S__3d__22_4.S__20__21_3_get");
    return ({ bool _t31186 = ({ bool _t31185 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31185 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t31185; }); _t31186 ? (bool)((C_S__26_c::sm_S__5e__21_r(rt::toint_d(1.0), C_S__26_c::dsm_S__5e__21_r_1(), C_S__26_c::dsm_S__5e__21_r_2()) >= 7200.0)) : _t31186; });
    return false;
}
double C_S__3d__22_4::sm_S__26_s() {
    RT_FN("S__3d__22_4.S__26_s");
    return (0.7 * rt::m_pow(rt::m_max2(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 39.0))), 0.7));
    return 0.0;
}
C_S__3d__22_4* C_S__3d__22_4::alloc_() {
    C_S__3d__22_4* o = rt::make<C_S__3d__22_4>();
    return o;
}
rt::Value C_S__3d__22_4::mk_(rt::Value* a, int n) {
    C_S__3d__22_4* o = alloc_();
    o->C_S__3d__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3d__22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3d__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3d__22_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3d__22_4::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3d__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_4__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3d__22_5::ctor_() {
    RT_FN("S__3d__22_5.S__3d__22_5");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31187 = 1049.0; this->f_S_6_21_Z = rt::touint_d(_v31187); _v31187; });
    ({ rt::Value _v31188 = rt::trv(rt::VS(g::LS[9058])); this->f_S_1i = rt::slot_string(_v31188); _v31188; });
    ({ double _v31189 = 0.0; this->f_S__22__21_U = rt::toint_d(_v31189); _v31189; });
    ({ double _v31190 = 6.0; this->f_S__21_G = rt::toint_d(_v31190); _v31190; });
    ({ double _v31191 = 5250.0; this->f_S__25_w = rt::toint_d(_v31191); _v31191; });
}
rt::Value C_S__3d__22_5::m_S__40__22_() {
    RT_FN("S__3d__22_5.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9059]), C_S__26_c::sm_S_6_21_T(C_S__3d__22_5::sm_S__2b__2b_(), 4.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3d__22_5::m_S_8_5b_() {
    RT_FN("S__3d__22_5.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N((C_S__23__21__21_::sm_S_57() * 30.0), 1e+20, rt::trv(rt::VS(g::LS[628])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3d__22_5::g_S__20__21_3() {
    RT_FN("S__3d__22_5.S__20__21_3_get");
    return ({ bool _t31193 = ({ bool _t31192 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31192 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t31192; }); _t31193 ? (bool)(((C_S__23__21__21_::sm_S_57() * 30.0) >= 1e+20)) : _t31193; });
    return false;
}
double C_S__3d__22_5::sm_S__2b__2b_() {
    RT_FN("S__3d__22_5.S__2b__2b_");
    return (2.0 * rt::m_pow(C_S__26_c::sm_S_3L(false, C_S__26_c::dsm_S_3L_1()), 0.8));
    return 0.0;
}
C_S__3d__22_5* C_S__3d__22_5::alloc_() {
    C_S__3d__22_5* o = rt::make<C_S__3d__22_5>();
    return o;
}
rt::Value C_S__3d__22_5::mk_(rt::Value* a, int n) {
    C_S__3d__22_5* o = alloc_();
    o->C_S__3d__22_5::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3d__22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3d__22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3d__22_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3d__22_5::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__3d__22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_5__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__3d__22__3d_::ctor_() {
    RT_FN("S__3d__22__3d_.S__3d__22__3d_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31194 = 1090.0; this->f_S_6_21_Z = rt::touint_d(_v31194); _v31194; });
    ({ rt::Value _v31195 = rt::trv(rt::VS(g::LS[9060])); this->f_S_1i = rt::slot_string(_v31195); _v31195; });
    ({ double _v31196 = 37.0; this->f_S__22__21_U = rt::toint_d(_v31196); _v31196; });
    ({ double _v31197 = 0.0; this->f_S__21_G = rt::toint_d(_v31197); _v31197; });
    ({ double _v31198 = 11625.0; this->f_S__25_w = rt::toint_d(_v31198); _v31198; });
}
rt::Value C_S__3d__22__3d_::m_S__40__22_() {
    RT_FN("S__3d__22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9061]), C_S__26_c::sm_S_8_21_Z(C_S__3d__22__3d_::sm_S__23__21_Y(C_S__3d__22__3d_::dsm_S__23__21_Y_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3d__22__3d_::m_S_8_5b_() {
    RT_FN("S__3d__22__3d_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S_8G::sg_S_8t())), 900.0, rt::trv(rt::VS(g::LS[8754])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3d__22__3d_::g_S__20__21_3() {
    RT_FN("S__3d__22__3d_.S__20__21_3_get");
    return ({ bool _t31199 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31199 ? (bool)((((double)(C_S_8G::sg_S_8t())) >= 900.0)) : _t31199; });
    return false;
}
bool C_S__3d__22__3d_::dsm_S__23__21_Y_0() { return false; }
double C_S__3d__22__3d_::sm_S__23__21_Y(bool p0) {
    bool l_param1 = p0;
    RT_FN("S__3d__22__3d_.S__23__21_Y");
    return (1.5 * rt::m_pow(C_S__23__21__21_::sm_S__2c__21_E(), 0.5));
    return 0.0;
}
C_S__3d__22__3d_* C_S__3d__22__3d_::alloc_() {
    C_S__3d__22__3d_* o = rt::make<C_S__3d__22__3d_>();
    return o;
}
rt::Value C_S__3d__22__3d_::mk_(rt::Value* a, int n) {
    C_S__3d__22__3d_* o = alloc_();
    o->C_S__3d__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3d__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3d__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3d__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3d__22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__3d__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22__3d___id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y(rt::arg<bool>(a, n, 0, C_S__3d__22__3d_::dsm_S__23__21_Y_0()))); return true;
    default: return false;
    }
}
void C_S__3d__22__40_::ctor_() {
    RT_FN("S__3d__22__40_.S__3d__22__40_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31200 = 1091.0; this->f_S_6_21_Z = rt::touint_d(_v31200); _v31200; });
    ({ rt::Value _v31201 = rt::trv(rt::VS(g::LS[9062])); this->f_S_1i = rt::slot_string(_v31201); _v31201; });
    ({ double _v31202 = 36.0; this->f_S__22__21_U = rt::toint_d(_v31202); _v31202; });
    ({ double _v31203 = 0.0; this->f_S__21_G = rt::toint_d(_v31203); _v31203; });
    ({ double _v31204 = 11375.0; this->f_S__25_w = rt::toint_d(_v31204); _v31204; });
}
rt::Value C_S__3d__22__40_::m_S__40__22_() {
    RT_FN("S__3d__22__40_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9063]), C_S__26_c::sm_S_6_21_T(C_S__3d__22__40_::sm_S__26_s(), 5.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3d__22__40_::m_S_8_5b_() {
    RT_FN("S__3d__22__40_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 15.0))), 1000000000000000.0, rt::trv(rt::VS(g::LS[8410])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3d__22__40_::g_S__20__21_3() {
    RT_FN("S__3d__22__40_.S__20__21_3_get");
    return ({ bool _t31205 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31205 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 15.0)), rt::V(1000000000000000.0))) : _t31205; });
    return false;
}
double C_S__3d__22__40_::sm_S__26_s() {
    RT_FN("S__3d__22__40_.S__26_s");
    return rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__5d__21_s(rt::toint_d((-1.0)), false, true, C_S__26_c::dsm_S__5d__21_s_3()))), 2.0);
    return 0.0;
}
C_S__3d__22__40_* C_S__3d__22__40_::alloc_() {
    C_S__3d__22__40_* o = rt::make<C_S__3d__22__40_>();
    return o;
}
rt::Value C_S__3d__22__40_::mk_(rt::Value* a, int n) {
    C_S__3d__22__40_* o = alloc_();
    o->C_S__3d__22__40_::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3d__22__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3d__22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3d__22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3d__22__40_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3d__22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22__40___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22__40___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3d_l::ctor_() {
    RT_FN("S__3d_l.S__3d_l");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31206 = 627.0; this->f_S_6_21_Z = rt::touint_d(_v31206); _v31206; });
    ({ rt::Value _v31207 = rt::trv(rt::VS(g::LS[9064])); this->f_S_1i = rt::slot_string(_v31207); _v31207; });
    ({ double _v31208 = 27.0; this->f_S__22__21_U = rt::toint_d(_v31208); _v31208; });
    ({ double _v31209 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v31209); _v31209; });
    ({ double _v31210 = 3.0; this->f_S__21_G = rt::toint_d(_v31210); _v31210; });
    ({ double _v31211 = 1425.0; this->f_S__25_w = rt::toint_d(_v31211); _v31211; });
    ({ bool _v31212 = false; this->f_S__3d_z = _v31212; _v31212; });
}
rt::Value C_S__3d_l::m_S__40__22_() {
    RT_FN("S__3d_l.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9065]), C_S__26_c::sm_S_8_21_Z(C_S__3d_l::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3d_l::m_S_8_21_s() {
    RT_FN("S__3d_l.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9066])));
    return rt::NUL;
}
rt::Value C_S__3d_l::m_S_8_5b_() {
    RT_FN("S__3d_l.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(((rt::m_min2(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(56.0)), 28800.0) + rt::m_min2(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(57.0)), 28800.0)) + rt::m_min2(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(58.0)), 28800.0)), 86400.0, rt::trv(rt::VS(g::LS[9067])), false, true), this->m_S__21_S(g::SV.C_S_3B__id, g::SV.C_S_9J__id, false)));
    return rt::NUL;
}
bool C_S__3d_l::m_S__3e_I() {
    RT_FN("S__3d_l.S__3e_I");
    return ({ bool _t31215 = ({ bool _t31214 = ({ bool _t31213 = (!this->f_S__3c__21_7); _t31213 ? (bool)(this->g_S__2b__21_a()) : _t31213; }); _t31214 ? (bool)((!this->f_S__3f__21_6)) : _t31214; }); _t31215 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t31215; });
    return false;
}
bool C_S__3d_l::m_S__2b__60_() {
    RT_FN("S__3d_l.S__2b__60_");
    return ({ bool _t31218 = ({ bool _t31217 = ({ bool _t31216 = (!this->f_S__3c__21_7); _t31216 ? (bool)(this->g_S__2b__21_a()) : _t31216; }); _t31217 ? (bool)((!this->f_S__3f__21_6)) : _t31217; }); _t31218 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t31218; });
    return false;
}
bool C_S__3d_l::m_S_9_21__3f_() {
    RT_FN("S__3d_l.S_9_21__3f_");
    return ({ bool _t31220 = ({ bool _t31219 = (!this->f_S__3c__21_7); _t31219 ? (bool)(this->f_S__3f__21_6) : _t31219; }); _t31220 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t31220; });
    return false;
}
bool C_S__3d_l::g_S__20__21_3() {
    RT_FN("S__3d_l.S__20__21_3_get");
    return ({ bool _t31230 = ({ bool _t31227 = ({ bool _t31224 = ({ bool _t31223 = ({ bool _t31222 = ({ bool _t31221 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31221 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t31221; }); _t31222 ? (bool)((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(56.0)) >= 28800.0)) : _t31222; }); _t31223 ? (bool)((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(57.0)) >= 28800.0)) : _t31223; }); _t31224 ? (bool)((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(58.0)) >= 28800.0)) : _t31224; }); _t31227 ? (bool)(({ rt::Value _o31225 = C_S_8G::sm_S__21__21_H(g::SV.C_S_3B__id); C_S__60_6* _p31226 = rt::as_ptr<C_S__60_6>(_o31225); _p31226 ? _p31226->f_S__3f__21_6 : rt::T(rt::dget(_o31225, NM_S__3f__21_6)); })) : _t31227; }); _t31230 ? (bool)(({ rt::Value _o31228 = C_S_8G::sm_S__21__21_H(g::SV.C_S_9J__id); C_S__60_6* _p31229 = rt::as_ptr<C_S__60_6>(_o31228); _p31229 ? _p31229->f_S__3f__21_6 : rt::T(rt::dget(_o31228, NM_S__3f__21_6)); })) : _t31230; });
    return false;
}
bool C_S__3d_l::g_S_9_21__25_() {
    RT_FN("S__3d_l.S_9_21__25__get");
    return ({ bool _t31231 = (!this->m_S_9_21_F()); _t31231 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t31231; });
    return false;
}
double C_S__3d_l::sm_S__2c__21_G() {
    RT_FN("S__3d_l.S__2c__21_G");
    return (1.25 * rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 1.25));
    return 0.0;
}
C_S__3d_l* C_S__3d_l::alloc_() {
    C_S__3d_l* o = rt::make<C_S__3d_l>();
    return o;
}
rt::Value C_S__3d_l::mk_(rt::Value* a, int n) {
    C_S__3d_l* o = alloc_();
    o->C_S__3d_l::ctor_();
    return rt::VO(o);
}
bool C_S__3d_l::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e_I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b__60_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3d_l::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3d_l::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__3e_I: out = rt::VB(m_S__3e_I()); return true;
    case NM_S__2b__60_: out = rt::VB(m_S__2b__60_()); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3d_l::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__3e_I: return true;
    case NM_S__2b__60_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3d_l::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3d_l::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d_l__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d_l::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d_l__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d_l::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__40__21_D::ctor_() {
    RT_FN("S__40__21_D.S__40__21_D");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31232 = 288.0; this->f_S_6_21_Z = rt::touint_d(_v31232); _v31232; });
    ({ rt::Value _v31233 = rt::trv(rt::VS(g::LS[9068])); this->f_S_1i = rt::slot_string(_v31233); _v31233; });
    ({ double _v31234 = 6.0; this->f_S__22__21_U = rt::toint_d(_v31234); _v31234; });
    ({ double _v31235 = 3.0; this->f_S__21_G = rt::toint_d(_v31235); _v31235; });
    ({ double _v31236 = 145.0; this->f_S__25_w = rt::toint_d(_v31236); _v31236; });
    ({ bool _v31237 = false; this->f_S__3d_z = _v31237; _v31237; });
}
rt::Value C_S__40__21_D::m_S__40__22_() {
    RT_FN("S__40__21_D.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9069]), C_S__26_c::sm_S_8_21_Z(30.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__40__21_D::m_S_8_21_s() {
    RT_FN("S__40__21_D.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9070])));
    return rt::NUL;
}
rt::Value C_S__40__21_D::m_S_8_5b_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__40__21_D.S_8_5b_");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id));
    return rt::slot_string(rt::add(this->m_S__3f__21_N((({ rt::Value _o31238 = l_A__loc1_; C_S_84* _p31239 = rt::as_ptr<C_S_84>(_o31238); _p31239 ? _p31239->g_S_2_2d_() : rt::tonum(rt::dget(_o31238, NM_S_2_2d_)); }) + ({ rt::Value _o31240 = l_A__loc1_; C_S_84* _p31241 = rt::as_ptr<C_S_84>(_o31240); _p31241 ? _p31241->g_S_5_21_L() : rt::tonum(rt::dget(_o31240, NM_S_5_21_L)); })), 50000.0, rt::trv(rt::VS(g::LS[8393]), ({ rt::Value _o31242 = l_A__loc1_; C_S_84* _p31243 = rt::as_ptr<C_S_84>(_o31242); _p31243 ? _p31243->f_S_1i : rt::dget(_o31242, NM_S_1i); })), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__3d__21_U__id, g::SV.C_S__2c_9__id, false)));
    return rt::NUL;
}
bool C_S__40__21_D::g_S__20__21_3() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__40__21_D.S__20__21_3_get");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id));
    return ({ bool _t31254 = ({ bool _t31249 = ({ bool _t31246 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31246 ? (bool)(({ rt::Value _o31244 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3d__21_U__id); C_S__60_6* _p31245 = rt::as_ptr<C_S__60_6>(_o31244); _p31245 ? _p31245->f_S__3f__21_6 : rt::T(rt::dget(_o31244, NM_S__3f__21_6)); })) : _t31246; }); _t31249 ? (bool)(({ rt::Value _o31247 = C_S_8G::sm_S__21__21_H(g::SV.C_S__2c_9__id); C_S__60_6* _p31248 = rt::as_ptr<C_S__60_6>(_o31247); _p31248 ? _p31248->f_S__3f__21_6 : rt::T(rt::dget(_o31247, NM_S__3f__21_6)); })) : _t31249; }); _t31254 ? (bool)(((({ rt::Value _o31250 = l_A__loc1_; C_S_84* _p31251 = rt::as_ptr<C_S_84>(_o31250); _p31251 ? _p31251->g_S_2_2d_() : rt::tonum(rt::dget(_o31250, NM_S_2_2d_)); }) + ({ rt::Value _o31252 = l_A__loc1_; C_S_84* _p31253 = rt::as_ptr<C_S_84>(_o31252); _p31253 ? _p31253->g_S_5_21_L() : rt::tonum(rt::dget(_o31252, NM_S_5_21_L)); })) >= 50000.0)) : _t31254; });
    return false;
}
C_S__40__21_D* C_S__40__21_D::alloc_() {
    C_S__40__21_D* o = rt::make<C_S__40__21_D>();
    return o;
}
rt::Value C_S__40__21_D::mk_(rt::Value* a, int n) {
    C_S__40__21_D* o = alloc_();
    o->C_S__40__21_D::ctor_();
    return rt::VO(o);
}
bool C_S__40__21_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__40__21_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__40__21_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__40__21_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__40__21_D::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21_D__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__40__21_D__S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__40__21_D__ids; return true;
    default: return false;
    }
}
bool C_S__40__21_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21_D__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__40__21_D__S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__40__21_D__ids = v; return true;
    default: return false;
    }
}
bool C_S__40__21_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__3f_::ctor_() {
    RT_FN("S__40__3f_.S__40__3f_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31255 = 514.0; this->f_S_6_21_Z = rt::touint_d(_v31255); _v31255; });
    ({ rt::Value _v31256 = rt::trv(rt::VS(g::LS[9072])); this->f_S_1i = rt::slot_string(_v31256); _v31256; });
    ({ double _v31257 = 21.0; this->f_S__22__21_U = rt::toint_d(_v31257); _v31257; });
    ({ double _v31258 = 1.0; this->f_S__21_G = rt::toint_d(_v31258); _v31258; });
    ({ double _v31259 = 425.0; this->f_S__25_w = rt::toint_d(_v31259); _v31259; });
}
rt::Value C_S__40__3f_::m_S__40__22_() {
    RT_FN("S__40__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9073]), C_S__26_c::sm_S_8_21_Z(C_S__40__3f_::sm_S__60__22_I(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__40__3f_::m_S_8_21_s() {
    RT_FN("S__40__3f_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9074])));
    return rt::NUL;
}
rt::Value C_S__40__3f_::m_S_8_5b_() {
    RT_FN("S__40__3f_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 4.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 4.0))), 500000.0, rt::trv(rt::VS(g::LS[9075])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__40__3f_::g_S__20__21_3() {
    RT_FN("S__40__3f_.S__20__21_3_get");
    return ({ bool _t31260 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31260 ? (bool)(rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 4.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 4.0)), rt::V(500000.0))) : _t31260; });
    return false;
}
double C_S__40__3f_::sm_S__60__22_I() {
    double l_A__loc5_ = NAN;
    double l_A__loc7_ = NAN;
    double l_A__loc2_ = NAN;
    double l_A__loc3_ = NAN;
    double l_A__loc6_ = NAN;
    double l_A__loc4_ = NAN;
    double l_A__loc1_ = NAN;
    RT_FN("S__40__3f_.S__60__22_I");
    (l_A__loc5_ = NAN);
    (l_A__loc7_ = NAN);
    (l_A__loc2_ = NAN);
    (l_A__loc3_ = ((double)(C_S__26_c::sm_S__2d__22__21_(rt::toint_d(1.0), C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3()))));
    (l_A__loc6_ = ((double)(C_S__26_c::sm_S__2d__22__21_(rt::toint_d(2.0), C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3()))));
    (l_A__loc4_ = ((double)(C_S__26_c::sm_S__2d__22__21_(rt::toint_d(0.0), C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3()))));
    (l_A__loc1_ = ((l_A__loc3_ + l_A__loc6_) + l_A__loc4_));
    if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0)) {
        (l_A__loc1_ = (l_A__loc1_ - l_A__loc3_));
    } else if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)) {
        (l_A__loc1_ = (l_A__loc1_ - l_A__loc6_));
    } else if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) {
        (l_A__loc1_ = (l_A__loc1_ - l_A__loc4_));
    }
    if (((((double)(C_S_8G::sg_S__2c_P())) >= 2.0) && (!(((double)(g::SV.C_S_8G__S_9_21_m)) == 0.0)))) {
        (l_A__loc5_ = ((double)(C_S__26_c::sm_S__2d__22__21_(rt::toint_d(6.0), C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3()))));
        (l_A__loc7_ = ((double)(C_S__26_c::sm_S__2d__22__21_(rt::toint_d(5.0), C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3()))));
        (l_A__loc2_ = ((double)(C_S__26_c::sm_S__2d__22__21_(rt::toint_d(4.0), C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3()))));
        (l_A__loc1_ = (l_A__loc1_ + ((l_A__loc3_ + l_A__loc6_) + l_A__loc4_)));
        if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) {
            (l_A__loc1_ = (l_A__loc1_ - l_A__loc3_));
        } else if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) {
            (l_A__loc1_ = (l_A__loc1_ - l_A__loc7_));
        } else if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)) {
            (l_A__loc1_ = (l_A__loc1_ - l_A__loc2_));
        }
    }
    return (0.4 * rt::m_pow(l_A__loc1_, 0.6));
    return 0.0;
}
C_S__40__3f_* C_S__40__3f_::alloc_() {
    C_S__40__3f_* o = rt::make<C_S__40__3f_>();
    return o;
}
rt::Value C_S__40__3f_::mk_(rt::Value* a, int n) {
    C_S__40__3f_* o = alloc_();
    o->C_S__40__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__40__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__40__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__40__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__40__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__40__3f_::smeth_(int id) {
    switch (id) {
    case NM_S__60__22_I: return true;
    default: return false;
    }
}
bool C_S__40__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__3f___id)); return true;
    case NM_S__60__22_I: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60__22_I: out = rt::V(sm_S__60__22_I()); return true;
    default: return false;
    }
}
void C_S__40__2d_::ctor_() {
    RT_FN("S__40__2d_.S__40__2d_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31261 = 272.0; this->f_S_6_21_Z = rt::touint_d(_v31261); _v31261; });
    ({ rt::Value _v31262 = rt::trv(rt::VS(g::LS[9076])); this->f_S_1i = rt::slot_string(_v31262); _v31262; });
    ({ double _v31263 = 6.0; this->f_S__22__21_U = rt::toint_d(_v31263); _v31263; });
    ({ double _v31264 = 2.0; this->f_S__21_G = rt::toint_d(_v31264); _v31264; });
    ({ double _v31265 = 150.0; this->f_S__25_w = rt::toint_d(_v31265); _v31265; });
    ({ bool _v31266 = false; this->f_S__3d_z = _v31266; _v31266; });
}
rt::Value C_S__40__2d_::m_S__40__22_() {
    RT_FN("S__40__2d_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9077]), C_S__26_c::sm_S_8_21_Z(C_S__40__2d_::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[8450]), C_S__26_c::sm_S_8_21_Z(C_S__40__2d_::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
rt::Value C_S__40__2d_::m_S_8_5b_() {
    RT_FN("S__40__2d_.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__21__21___id, g::SV.C_S_5_22___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__40__2d_::g_S__20__21_3() {
    RT_FN("S__40__2d_.S__20__21_3_get");
    return ({ bool _t31272 = ({ bool _t31269 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31269 ? (bool)(({ rt::Value _o31267 = C_S_8G::sm_S__21__21_H(g::SV.C_S__21__21___id); C_S__60_6* _p31268 = rt::as_ptr<C_S__60_6>(_o31267); _p31268 ? _p31268->f_S__3f__21_6 : rt::T(rt::dget(_o31267, NM_S__3f__21_6)); })) : _t31269; }); _t31272 ? (bool)(({ rt::Value _o31270 = C_S_8G::sm_S__21__21_H(g::SV.C_S_5_22___id); C_S__60_6* _p31271 = rt::as_ptr<C_S__60_6>(_o31270); _p31271 ? _p31271->f_S__3f__21_6 : rt::T(rt::dget(_o31270, NM_S__3f__21_6)); })) : _t31272; });
    return false;
}
double C_S__40__2d_::sm_S__2c_J() {
    RT_FN("S__40__2d_.S__2c_J");
    return (5.0 * rt::m_pow(((double)(C_S__26_c::sm_S__26__21__3c_(C_S__26_c::dsm_S__26__21__3c__0(), C_S__26_c::dsm_S__26__21__3c__1()))), 0.75));
    return 0.0;
}
double C_S__40__2d_::sm_S__23__21_Y() {
    RT_FN("S__40__2d_.S__23__21_Y");
    return 50.0;
    return 0.0;
}
C_S__40__2d_* C_S__40__2d_::alloc_() {
    C_S__40__2d_* o = rt::make<C_S__40__2d_>();
    return o;
}
rt::Value C_S__40__2d_::mk_(rt::Value* a, int n) {
    C_S__40__2d_* o = alloc_();
    o->C_S__40__2d_::ctor_();
    return rt::VO(o);
}
bool C_S__40__2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__40__2d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__40__2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__40__2d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__40__2d_::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__40__2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__2d___id)); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40__2d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__2d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__40_0::ctor_() {
    RT_FN("S__40_0.S__40_0");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31273 = 453.0; this->f_S_6_21_Z = rt::touint_d(_v31273); _v31273; });
    ({ rt::Value _v31274 = rt::trv(rt::VS(g::LS[9078])); this->f_S_1i = rt::slot_string(_v31274); _v31274; });
    ({ double _v31275 = 14.0; this->f_S__22__21_U = rt::toint_d(_v31275); _v31275; });
    ({ double _v31276 = 0.0; this->f_S__21_G = rt::toint_d(_v31276); _v31276; });
    ({ double _v31277 = 270.0; this->f_S__25_w = rt::toint_d(_v31277); _v31277; });
}
rt::Value C_S__40_0::m_S__40__22_() {
    RT_FN("S__40_0.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6684]), C_S__26_c::sm_S_6_21_T(C_S__40_0::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__40_0::m_S_8_21_s() {
    RT_FN("S__40_0.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9079])));
    return rt::NUL;
}
rt::Value C_S__40_0::m_S_8_5b_() {
    RT_FN("S__40_0.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0)), 20000.0, rt::trv(rt::VS(g::LS[8604])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__40_0::g_S__20__21_3() {
    RT_FN("S__40_0.S__20__21_3_get");
    return ({ bool _t31278 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31278 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::V(20000.0))) : _t31278; });
    return false;
}
double C_S__40_0::sm_S__27__21_b() {
    RT_FN("S__40_0.S__27__21_b");
    return (1.25 * rt::m_pow((0.5 * rt::m_log((1.0 + C_S__26_c::sg_S__22__21_0()))), 1.25));
    return 0.0;
}
C_S__40_0* C_S__40_0::alloc_() {
    C_S__40_0* o = rt::make<C_S__40_0>();
    return o;
}
rt::Value C_S__40_0::mk_(rt::Value* a, int n) {
    C_S__40_0* o = alloc_();
    o->C_S__40_0::ctor_();
    return rt::VO(o);
}
bool C_S__40_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__40_0::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__40_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__40_0::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__40_0::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__40_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40_0__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40_0__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__40_6::ctor_() {
    RT_FN("S__40_6.S__40_6");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31279 = 302.0; this->f_S_6_21_Z = rt::touint_d(_v31279); _v31279; });
    ({ rt::Value _v31280 = rt::trv(rt::VS(g::LS[9080])); this->f_S_1i = rt::slot_string(_v31280); _v31280; });
    ({ double _v31281 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v31281); _v31281; });
    ({ double _v31282 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31282); _v31282; });
    ({ double _v31283 = 8.0; this->f_S__22__21_U = rt::toint_d(_v31283); _v31283; });
    ({ double _v31284 = 0.0; this->f_S__21_G = rt::toint_d(_v31284); _v31284; });
    ({ double _v31285 = 1.0; this->f_S__5e__21_C = rt::toint_d(_v31285); _v31285; });
    ({ double _v31286 = 175.0; this->f_S__25_w = rt::toint_d(_v31286); _v31286; });
    ({ bool _v31287 = false; this->f_S__3d_z = _v31287; _v31287; });
}
rt::Value C_S__40_6::m_S__40__22_() {
    RT_FN("S__40_6.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9081]), C_S__26_c::sm_S_8_21_Z(C_S__40_6::sm_S_1_21_E(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_6_21_T(C_S__40_6::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__40_6::m_S_8_5b_() {
    RT_FN("S__40_6.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_9_21__24___id, g::SV.C_S_1T__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__40_6::m_S_9_21__3f_() {
    RT_FN("S__40_6.S_9_21__3f_");
    return ({ bool _t31290 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t31290 ? _t31290 : (bool)(({ bool _t31289 = ({ bool _t31288 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t31288 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__60__22__3c___id))) : _t31288; }); _t31289 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__26_0__id))) : _t31289; })); });
    return false;
}
bool C_S__40_6::g_S__20__21_3() {
    RT_FN("S__40_6.S__20__21_3_get");
    return ({ bool _t31296 = ({ bool _t31293 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31293 ? (bool)(({ rt::Value _o31291 = C_S_8G::sm_S__21__21_H(g::SV.C_S_9_21__24___id); C_S__60_6* _p31292 = rt::as_ptr<C_S__60_6>(_o31291); _p31292 ? _p31292->f_S__3f__21_6 : rt::T(rt::dget(_o31291, NM_S__3f__21_6)); })) : _t31293; }); _t31296 ? (bool)(({ rt::Value _o31294 = C_S_8G::sm_S__21__21_H(g::SV.C_S_1T__id); C_S__60_6* _p31295 = rt::as_ptr<C_S__60_6>(_o31294); _p31295 ? _p31295->f_S__3f__21_6 : rt::T(rt::dget(_o31294, NM_S__3f__21_6)); })) : _t31296; });
    return false;
}
bool C_S__40_6::g_S_9_21__25_() {
    RT_FN("S__40_6.S_9_21__25__get");
    return ({ bool _t31300 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t31300 ? _t31300 : (bool)(({ bool _t31299 = ({ bool _t31297 = (!this->m_S_9_21_F()); _t31297 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t31297; }); _t31299 ? (bool)((({ bool _t31298 = C_S_8G::sm_S_7d(g::SV.C_S__60__22__3c___id); _t31298 ? _t31298 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__26_0__id)); }))) : _t31299; })); });
    return false;
}
double C_S__40_6::sm_S__27__21_b() {
    RT_FN("S__40_6.S__27__21_b");
    return (5000.0 * rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.25));
    return 0.0;
}
double C_S__40_6::sm_S_1_21_E() {
    RT_FN("S__40_6.S_1_21_E");
    return 24.0;
    return 0.0;
}
C_S__40_6* C_S__40_6::alloc_() {
    C_S__40_6* o = rt::make<C_S__40_6>();
    return o;
}
rt::Value C_S__40_6::mk_(rt::Value* a, int n) {
    C_S__40_6* o = alloc_();
    o->C_S__40_6::ctor_();
    return rt::VO(o);
}
bool C_S__40_6::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__40_6::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__40_6::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__40_6::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__40_6::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    case NM_S_1_21_E: return true;
    default: return false;
    }
}
bool C_S__40_6::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40_6__id)); return true;
    case NM_ids: out = g::SV.C_S__40_6__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_21_E: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40_6::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40_6__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__40_6__ids = v; return true;
    default: return false;
    }
}
bool C_S__40_6::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    case NM_S_1_21_E: out = rt::V(sm_S_1_21_E()); return true;
    default: return false;
    }
}
void C_S__40_8::ctor_() {
    RT_FN("S__40_8.S__40_8");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31301 = 540.0; this->f_S_6_21_Z = rt::touint_d(_v31301); _v31301; });
    ({ rt::Value _v31302 = rt::trv(rt::VS(g::LS[9083])); this->f_S_1i = rt::slot_string(_v31302); _v31302; });
    ({ double _v31303 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v31303); _v31303; });
    ({ double _v31304 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31304); _v31304; });
    ({ double _v31305 = 0.0; this->f_S__3b__21__23_ = rt::toint_d(_v31305); _v31305; });
    ({ double _v31306 = 24.0; this->f_S__22__21_U = rt::toint_d(_v31306); _v31306; });
    ({ double _v31307 = 0.0; this->f_S__21_G = rt::toint_d(_v31307); _v31307; });
    ({ double _v31308 = 9.0; this->f_S__5e__21_C = rt::toint_d(_v31308); _v31308; });
    ({ double _v31309 = 700.0; this->f_S__25_w = rt::toint_d(_v31309); _v31309; });
    ({ bool _v31310 = false; this->f_S__3d_z = _v31310; _v31310; });
}
rt::Value C_S__40_8::m_S__40__22_() {
    RT_FN("S__40_8.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9084]), C_S__26_c::sm_S_6_21_T(C_S__40_8::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__40_8::m_S_8_5b_() {
    RT_FN("S__40_8.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 9.0)), 250.0, rt::trv(rt::VS(g::LS[8971])), C_S__26__21__5f_::dm_S__3f__21_N_3(), C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__3c__21_E__id, g::SV.C_S__25__21_I__id, false)));
    return rt::NUL;
}
bool C_S__40_8::g_S__20__21_3() {
    RT_FN("S__40_8.S__20__21_3_get");
    return ({ bool _t31318 = ({ bool _t31315 = ({ bool _t31312 = ({ bool _t31311 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31311 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 9.0), rt::V(250.0))) : _t31311; }); _t31312 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0)) : _t31312; }); _t31315 ? (bool)(({ rt::Value _o31313 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3c__21_E__id); C_S__60_6* _p31314 = rt::as_ptr<C_S__60_6>(_o31313); _p31314 ? _p31314->f_S__3f__21_6 : rt::T(rt::dget(_o31313, NM_S__3f__21_6)); })) : _t31315; }); _t31318 ? (bool)(({ rt::Value _o31316 = C_S_8G::sm_S__21__21_H(g::SV.C_S__25__21_I__id); C_S__60_6* _p31317 = rt::as_ptr<C_S__60_6>(_o31316); _p31317 ? _p31317->f_S__3f__21_6 : rt::T(rt::dget(_o31316, NM_S__3f__21_6)); })) : _t31318; });
    return false;
}
bool C_S__40_8::g_S_9_21__25_() {
    RT_FN("S__40_8.S_9_21__25__get");
    return ({ bool _t31320 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t31320 ? (bool)((({ bool _t31319 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0); _t31319 ? _t31319 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }))) : _t31320; });
    return false;
}
double C_S__40_8::sm_S__26_s() {
    RT_FN("S__40_8.S__26_s");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S_2_21__26_(), 0.9));
    return 0.0;
}
C_S__40_8* C_S__40_8::alloc_() {
    C_S__40_8* o = rt::make<C_S__40_8>();
    return o;
}
rt::Value C_S__40_8::mk_(rt::Value* a, int n) {
    C_S__40_8* o = alloc_();
    o->C_S__40_8::ctor_();
    return rt::VO(o);
}
bool C_S__40_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__40_8::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__40_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__40_8::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__40_8::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__40_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40_8__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40_8__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__40_S::ctor_() {
    RT_FN("S__40_S.S__40_S");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v31321 = 470.0; this->f_S_6_21_Z = rt::touint_d(_v31321); _v31321; });
    ({ rt::Value _v31322 = rt::trv(rt::VS(g::LS[9085])); this->f_S_1i = rt::slot_string(_v31322); _v31322; });
    ({ rt::Value _v31323 = rt::VS(g::LS[9086]); this->f_S__5e__21__23_ = rt::slot_string(_v31323); _v31323; });
    ({ double _v31324 = 1e+151; this->f_S__3e__3d_ = _v31324; _v31324; });
    ({ bool _v31325 = true; this->f_S__25__21__3e_ = _v31325; _v31325; });
    ({ bool _v31326 = true; this->f_S__3f_T = _v31326; _v31326; });
    ({ double _v31327 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v31327); _v31327; });
    ({ bool _v31328 = false; this->f_S_3e = _v31328; _v31328; });
}
rt::Value C_S__40_S::m_S__40__22_() {
    RT_FN("S__40_S.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9087]), C_S__26_c::sm_S_6_21_T(100000.0, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
int32_t C_S__40_S::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__40_S::dm_S_75_2() { return false; }
rt::Value C_S__40_S::dm_S_75_3() { return rt::NUL; }
double C_S__40_S::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__40_S.S_75");
    if (((((double)(l_param1)) >= 0.0) && (((double)(l_param1)) <= 5.0))) {
        return 1000000.0;
    }
    return 0.0;
    return 0.0;
}
bool C_S__40_S::g_S__2d_6() {
    RT_FN("S__40_S.S__2d_6_get");
    return ({ bool _t31331 = (({ bool _t31330 = ({ bool _t31329 = C_S_8G::sm_S_7d(g::SV.C_S__3f_y__id); _t31329 ? _t31329 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_0N__id)); }); _t31330 ? _t31330 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__27__21_S__id)); })); _t31331 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__22__21__2b___id)) : _t31331; });
    return false;
}
bool C_S__40_S::g_S__26_8() {
    RT_FN("S__40_S.S__26_8_get");
    return false;
    return false;
}
C_S__40_S* C_S__40_S::alloc_() {
    C_S__40_S* o = rt::make<C_S__40_S>();
    return o;
}
rt::Value C_S__40_S::mk_(rt::Value* a, int n) {
    C_S__40_S* o = alloc_();
    o->C_S__40_S::ctor_();
    return rt::VO(o);
}
bool C_S__40_S::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__40_S::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__40_S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__40_S::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__40_S::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__40_S::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__40_S::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__40_S::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40_S::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40_S__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__40_S__S_1_21_S); return true;
    default: return false;
    }
}
bool C_S__40_S::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40_S__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__40_S__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__40_S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40_U::ctor_() {
    RT_FN("S__40_U.S__40_U");
    (void)((this->C_S_8_21__26_::ctor_(), rt::NUL));
    ({ double _v31332 = 290.0; this->f_S_6_21_Z = rt::touint_d(_v31332); _v31332; });
    ({ rt::Value _v31333 = rt::trv(rt::VS(g::LS[9088])); this->f_S_1i = rt::slot_string(_v31333); _v31333; });
    ({ rt::Value _v31334 = rt::VS(g::LS[9089]); this->f_S__5e__21__23_ = rt::slot_string(_v31334); _v31334; });
    ({ rt::Value _v31335 = rt::trv(rt::VS(g::LS[9090])); this->f_S_7_23_ = rt::slot_string(_v31335); _v31335; });
    ({ double _v31336 = 4.0; this->f_S__21_G = rt::toint_d(_v31336); _v31336; });
    ({ double _v31337 = 4.0; this->f_S__5e__21_C = rt::toint_d(_v31337); _v31337; });
}
C_S__40_U* C_S__40_U::alloc_() {
    C_S__40_U* o = rt::make<C_S__40_U>();
    return o;
}
rt::Value C_S__40_U::mk_(rt::Value* a, int n) {
    C_S__40_U* o = alloc_();
    o->C_S__40_U::ctor_();
    return rt::VO(o);
}
bool C_S__40_U::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dget(id, out);
}
bool C_S__40_U::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dset(id, v);
}
bool C_S__40_U::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dcall(id, a, n, out);
}
bool C_S__40_U::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dmeth(id);
}
bool C_S__40_U::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40_U::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40_U__id)); return true;
    case NM_ids: out = g::SV.C_S__40_U__ids; return true;
    default: return false;
    }
}
bool C_S__40_U::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40_U__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__40_U__ids = v; return true;
    default: return false;
    }
}
bool C_S__40_U::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40_b::ctor_() {
    RT_FN("S__40_b.S__40_b");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31338 = 431.0; this->f_S_6_21_Z = rt::touint_d(_v31338); _v31338; });
    ({ rt::Value _v31339 = rt::trv(rt::VS(g::LS[9092])); this->f_S_1i = rt::slot_string(_v31339); _v31339; });
    ({ double _v31340 = 16.0; this->f_S__22__21_U = rt::toint_d(_v31340); _v31340; });
    ({ double _v31341 = 1.0; this->f_S__21_G = rt::toint_d(_v31341); _v31341; });
    ({ double _v31342 = 330.0; this->f_S__25_w = rt::toint_d(_v31342); _v31342; });
    ({ bool _v31343 = false; this->f_S__3d_z = _v31343; _v31343; });
}
rt::Value C_S__40_b::m_S__40__22_() {
    RT_FN("S__40_b.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9093]), C_S__26_c::sm_S_8_21_Z(C_S__40_b::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__40_b::m_S_8_5b_() {
    RT_FN("S__40_b.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__2c__21_M__id, g::SV.C_S__22__3d___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__40_b::g_S__20__21_3() {
    RT_FN("S__40_b.S__20__21_3_get");
    return ({ bool _t31349 = ({ bool _t31346 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31346 ? (bool)(({ rt::Value _o31344 = C_S_8G::sm_S__21__21_H(g::SV.C_S__2c__21_M__id); C_S__60_6* _p31345 = rt::as_ptr<C_S__60_6>(_o31344); _p31345 ? _p31345->f_S__3f__21_6 : rt::T(rt::dget(_o31344, NM_S__3f__21_6)); })) : _t31346; }); _t31349 ? (bool)(({ rt::Value _o31347 = C_S_8G::sm_S__21__21_H(g::SV.C_S__22__3d___id); C_S__60_6* _p31348 = rt::as_ptr<C_S__60_6>(_o31347); _p31348 ? _p31348->f_S__3f__21_6 : rt::T(rt::dget(_o31347, NM_S__3f__21_6)); })) : _t31349; });
    return false;
}
double C_S__40_b::sm_S__60_z() {
    RT_FN("S__40_b.S__60_z");
    return (15.0 * rt::m_pow(((double)(C_S__26_c::sm_S__26__21__3c_(C_S__26_c::dsm_S__26__21__3c__0(), C_S__26_c::dsm_S__26__21__3c__1()))), 0.75));
    return 0.0;
}
C_S__40_b* C_S__40_b::alloc_() {
    C_S__40_b* o = rt::make<C_S__40_b>();
    return o;
}
rt::Value C_S__40_b::mk_(rt::Value* a, int n) {
    C_S__40_b* o = alloc_();
    o->C_S__40_b::ctor_();
    return rt::VO(o);
}
bool C_S__40_b::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__40_b::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__40_b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__40_b::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__40_b::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    default: return false;
    }
}
bool C_S__40_b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40_b__id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40_b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40_b__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40_b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    default: return false;
    }
}
void C_S__40_d::ctor_() {
    RT_FN("S__40_d.S__40_d");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31350 = 422.0; this->f_S_6_21_Z = rt::touint_d(_v31350); _v31350; });
    ({ rt::Value _v31351 = rt::trv(rt::VS(g::LS[9094])); this->f_S_1i = rt::slot_string(_v31351); _v31351; });
    ({ double _v31352 = 16.0; this->f_S__22__21_U = rt::toint_d(_v31352); _v31352; });
    ({ double _v31353 = 4.0; this->f_S__21_G = rt::toint_d(_v31353); _v31353; });
    ({ double _v31354 = 7.0; this->f_S__5e__21_C = rt::toint_d(_v31354); _v31354; });
    ({ double _v31355 = 305.0; this->f_S__25_w = rt::toint_d(_v31355); _v31355; });
}
rt::Value C_S__40_d::m_S__40__22_() {
    RT_FN("S__40_d.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9095]), C_S__26_c::sm_S_8_21_Z(C_S__40_d::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[8450]), C_S__26_c::sm_S_8_21_Z(C_S__40_d::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
rt::Value C_S__40_d::m_S_8_21_s() {
    RT_FN("S__40_d.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9096])));
    return rt::NUL;
}
rt::Value C_S__40_d::m_S_8_5b_() {
    RT_FN("S__40_d.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 57.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 57.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 57.0))), 18000.0, rt::trv(rt::VS(g::LS[9097])), false, true));
    return rt::NUL;
}
bool C_S__40_d::g_S__20__21_3() {
    RT_FN("S__40_d.S__20__21_3_get");
    return ({ bool _t31356 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31356 ? (bool)(rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 57.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 57.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 57.0)), rt::V(18000.0))) : _t31356; });
    return false;
}
double C_S__40_d::sm_S__2c_J() {
    RT_FN("S__40_d.S__2c_J");
    return rt::m_floor((3.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_1_21_y(true, C_S__26_c::dsm_S_1_21_y_1()))), 3.5)));
    return 0.0;
}
double C_S__40_d::sm_S__23__21_Y() {
    RT_FN("S__40_d.S__23__21_Y");
    return 100.0;
    return 0.0;
}
C_S__40_d* C_S__40_d::alloc_() {
    C_S__40_d* o = rt::make<C_S__40_d>();
    return o;
}
rt::Value C_S__40_d::mk_(rt::Value* a, int n) {
    C_S__40_d* o = alloc_();
    o->C_S__40_d::ctor_();
    return rt::VO(o);
}
bool C_S__40_d::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__40_d::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__40_d::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__40_d::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__40_d::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__40_d::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40_d__id)); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40_d::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40_d__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40_d::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__40_g::ctor_() {
    RT_FN("S__40_g.S__40_g");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31357 = 435.0; this->f_S_6_21_Z = rt::touint_d(_v31357); _v31357; });
    ({ rt::Value _v31358 = rt::trv(rt::VS(g::LS[9098])); this->f_S_1i = rt::slot_string(_v31358); _v31358; });
    ({ double _v31359 = 17.0; this->f_S__22__21_U = rt::toint_d(_v31359); _v31359; });
    ({ double _v31360 = 2.0; this->f_S__21_G = rt::toint_d(_v31360); _v31360; });
    ({ double _v31361 = 330.0; this->f_S__25_w = rt::toint_d(_v31361); _v31361; });
    ({ bool _v31362 = false; this->f_S__3d_z = _v31362; _v31362; });
}
rt::Value C_S__40_g::m_S__40__22_() {
    RT_FN("S__40_g.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9099])));
    return rt::NUL;
}
rt::Value C_S__40_g::m_S_8_5b_() {
    RT_FN("S__40_g.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__5e__22___id, g::SV.C_S__5e_V__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__40_g::g_S__20__21_3() {
    RT_FN("S__40_g.S__20__21_3_get");
    return ({ bool _t31368 = ({ bool _t31365 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31365 ? (bool)(({ rt::Value _o31363 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5e__22___id); C_S__60_6* _p31364 = rt::as_ptr<C_S__60_6>(_o31363); _p31364 ? _p31364->f_S__3f__21_6 : rt::T(rt::dget(_o31363, NM_S__3f__21_6)); })) : _t31365; }); _t31368 ? (bool)(({ rt::Value _o31366 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5e_V__id); C_S__60_6* _p31367 = rt::as_ptr<C_S__60_6>(_o31366); _p31367 ? _p31367->f_S__3f__21_6 : rt::T(rt::dget(_o31366, NM_S__3f__21_6)); })) : _t31368; });
    return false;
}
double C_S__40_g::sm_S__40_V() {
    RT_FN("S__40_g.S__40_V");
    return 100.0;
    return 0.0;
}
C_S__40_g* C_S__40_g::alloc_() {
    C_S__40_g* o = rt::make<C_S__40_g>();
    return o;
}
rt::Value C_S__40_g::mk_(rt::Value* a, int n) {
    C_S__40_g* o = alloc_();
    o->C_S__40_g::ctor_();
    return rt::VO(o);
}
bool C_S__40_g::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__40_g::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__40_g::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__40_g::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__40_g::smeth_(int id) {
    switch (id) {
    case NM_S__40_V: return true;
    default: return false;
    }
}
bool C_S__40_g::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40_g__id)); return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40_g::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40_g__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40_g::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    default: return false;
    }
}
void C_S__5b__21_E::ctor_() {
    RT_FN("S__5b__21_E.S__5b__21_E");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31369 = 460.0; this->f_S_6_21_Z = rt::touint_d(_v31369); _v31369; });
    ({ rt::Value _v31370 = rt::trv(rt::VS(g::LS[9100])); this->f_S_1i = rt::slot_string(_v31370); _v31370; });
    ({ double _v31371 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v31371); _v31371; });
    ({ double _v31372 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31372); _v31372; });
    ({ double _v31373 = 18.0; this->f_S__22__21_U = rt::toint_d(_v31373); _v31373; });
    ({ double _v31374 = 5.0; this->f_S__21_G = rt::toint_d(_v31374); _v31374; });
    ({ double _v31375 = 7.0; this->f_S__5e__21_C = rt::toint_d(_v31375); _v31375; });
    ({ double _v31376 = 350.0; this->f_S__25_w = rt::toint_d(_v31376); _v31376; });
    ({ bool _v31377 = false; this->f_S__3d_z = _v31377; _v31377; });
}
rt::Value C_S__5b__21_E::m_S__40__22_() {
    RT_FN("S__5b__21_E.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9101]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_M__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__5b__21_E::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__5b__21_E::m_S_8_5b_() {
    RT_FN("S__5b__21_E.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_7_40___id, g::SV.C_S__23__21__23___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__5b__21_E::m_S_9_21__3f_() {
    RT_FN("S__5b__21_E.S_9_21__3f_");
    return ({ bool _t31379 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t31379 ? _t31379 : (bool)(({ bool _t31378 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t31378 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_0N__id))) : _t31378; })); });
    return false;
}
bool C_S__5b__21_E::g_S__20__21_3() {
    RT_FN("S__5b__21_E.S__20__21_3_get");
    return ({ bool _t31385 = ({ bool _t31382 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31382 ? (bool)(({ rt::Value _o31380 = C_S_8G::sm_S__21__21_H(g::SV.C_S_7_40___id); C_S__60_6* _p31381 = rt::as_ptr<C_S__60_6>(_o31380); _p31381 ? _p31381->f_S__3f__21_6 : rt::T(rt::dget(_o31380, NM_S__3f__21_6)); })) : _t31382; }); _t31385 ? (bool)(({ rt::Value _o31383 = C_S_8G::sm_S__21__21_H(g::SV.C_S__23__21__23___id); C_S__60_6* _p31384 = rt::as_ptr<C_S__60_6>(_o31383); _p31384 ? _p31384->f_S__3f__21_6 : rt::T(rt::dget(_o31383, NM_S__3f__21_6)); })) : _t31385; });
    return false;
}
bool C_S__5b__21_E::g_S_9_21__25_() {
    RT_FN("S__5b__21_E.S_9_21__25__get");
    return ({ bool _t31388 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t31388 ? _t31388 : (bool)(({ bool _t31387 = ({ bool _t31386 = (!this->m_S_9_21_F()); _t31386 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t31386; }); _t31387 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_0N__id)) : _t31387; })); });
    return false;
}
double C_S__5b__21_E::sm_S__26_s() {
    RT_FN("S__5b__21_E.S__26_s");
    return (8.0 * rt::m_pow(rt::m_log((1.0 + C_S__23__21__21_::sm_S__3e_Z(((int32_t)(g::SV.C_S_8_21_M__id))))), 1.8));
    return 0.0;
}
C_S__5b__21_E* C_S__5b__21_E::alloc_() {
    C_S__5b__21_E* o = rt::make<C_S__5b__21_E>();
    return o;
}
rt::Value C_S__5b__21_E::mk_(rt::Value* a, int n) {
    C_S__5b__21_E* o = alloc_();
    o->C_S__5b__21_E::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b__21_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b__21_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b__21_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b__21_E::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__5b__21_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21_E__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__21_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__5b__21_X::ctor_() {
    RT_FN("S__5b__21_X.S__5b__21_X");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31389 = 432.0; this->f_S_6_21_Z = rt::touint_d(_v31389); _v31389; });
    ({ rt::Value _v31390 = rt::trv(rt::VS(g::LS[9102])); this->f_S_1i = rt::slot_string(_v31390); _v31390; });
    ({ double _v31391 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v31391); _v31391; });
    ({ double _v31392 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31392); _v31392; });
    ({ double _v31393 = 14.0; this->f_S__22__21_U = rt::toint_d(_v31393); _v31393; });
    ({ double _v31394 = 1.0; this->f_S__21_G = rt::toint_d(_v31394); _v31394; });
    ({ double _v31395 = 6.0; this->f_S__5e__21_C = rt::toint_d(_v31395); _v31395; });
    ({ double _v31396 = 300.0; this->f_S__25_w = rt::toint_d(_v31396); _v31396; });
}
rt::Value C_S__5b__21_X::m_S__40__22_() {
    RT_FN("S__5b__21_X.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9103]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_M__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__5b__21_X::sm_S__2c__21_G(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()), C_S__26_c::sm_S_6_21_T(C_S__5b__21_X::sm_S__40__21__5f_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__5b__21_X::m_S_8_21_s() {
    RT_FN("S__5b__21_X.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9104])));
    return rt::NUL;
}
rt::Value C_S__5b__21_X::m_S_8_5b_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5b__21_X.S_8_5b_");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id));
    return rt::slot_string(this->m_S__3f__21_N((({ rt::Value _o31397 = l_A__loc1_; C_S_84* _p31398 = rt::as_ptr<C_S_84>(_o31397); _p31398 ? _p31398->g_S_2_2d_() : rt::tonum(rt::dget(_o31397, NM_S_2_2d_)); }) + ({ rt::Value _o31399 = l_A__loc1_; C_S_84* _p31400 = rt::as_ptr<C_S_84>(_o31399); _p31400 ? _p31400->g_S_5_21_L() : rt::tonum(rt::dget(_o31399, NM_S_5_21_L)); })), 650.0, rt::trv(rt::VS(g::LS[8393]), ({ rt::Value _o31401 = l_A__loc1_; C_S_84* _p31402 = rt::as_ptr<C_S_84>(_o31401); _p31402 ? _p31402->f_S_1i : rt::dget(_o31401, NM_S_1i); })), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__5b__21_X::m_S_9_21__3f_() {
    RT_FN("S__5b__21_X.S_9_21__3f_");
    return ({ bool _t31409 = ({ bool _t31403 = (!this->f_S__3c__21_7); _t31403 ? (bool)(this->f_S__3f__21_6) : _t31403; }); _t31409 ? (bool)((({ bool _t31408 = ({ bool _t31404 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t31404 ? _t31404 : (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_0N__id))); }); _t31408 ? _t31408 : (bool)(({ bool _t31407 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t31407 ? (bool)((!({ rt::Value _o31405 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p31406 = rt::as_ptr<C_S_84>(_o31405); _p31406 ? _p31406->g_S__2d_6() : rt::T(rt::dget(_o31405, NM_S__2d_6)); }))) : _t31407; })); }))) : _t31409; });
    return false;
}
bool C_S__5b__21_X::g_S__20__21_3() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5b__21_X.S__20__21_3_get");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id));
    return ({ bool _t31414 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31414 ? (bool)(((({ rt::Value _o31410 = l_A__loc1_; C_S_84* _p31411 = rt::as_ptr<C_S_84>(_o31410); _p31411 ? _p31411->g_S_2_2d_() : rt::tonum(rt::dget(_o31410, NM_S_2_2d_)); }) + ({ rt::Value _o31412 = l_A__loc1_; C_S_84* _p31413 = rt::as_ptr<C_S_84>(_o31412); _p31413 ? _p31413->g_S_5_21_L() : rt::tonum(rt::dget(_o31412, NM_S_5_21_L)); })) >= 650.0)) : _t31414; });
    return false;
}
bool C_S__5b__21_X::g_S_9_21__25_() {
    RT_FN("S__5b__21_X.S_9_21__25__get");
    return ({ bool _t31420 = ({ bool _t31415 = (!this->m_S_9_21_F()); _t31415 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_0N__id)) : _t31415; }); _t31420 ? (bool)((({ bool _t31419 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 7.0); _t31419 ? _t31419 : (bool)(({ bool _t31418 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t31418 ? (bool)(({ rt::Value _o31416 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p31417 = rt::as_ptr<C_S_84>(_o31416); _p31417 ? _p31417->g_S__2d_6() : rt::T(rt::dget(_o31416, NM_S__2d_6)); })) : _t31418; })); }))) : _t31420; });
    return false;
}
double C_S__5b__21_X::sm_S__2c__21_G() {
    RT_FN("S__5b__21_X.S__2c__21_G");
    return rt::m_pow(2000.0, (((double)(({ rt::Value _o31421 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p31422 = rt::as_ptr<C_S_84>(_o31421); _p31422 ? _p31422->g_S__60_r() : rt::touint(rt::dget(_o31421, NM_S__60_r)); }))) + 1.0));
    return 0.0;
}
double C_S__5b__21_X::sm_S__40__21__5f_() {
    RT_FN("S__5b__21_X.S__40__21__5f_");
    return (25.0 * rt::m_pow(rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_2_21__26_())), 2.5), (((double)(({ rt::Value _o31423 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p31424 = rt::as_ptr<C_S_84>(_o31423); _p31424 ? _p31424->g_S__60_r() : rt::touint(rt::dget(_o31423, NM_S__60_r)); }))) + 1.0)));
    return 0.0;
}
C_S__5b__21_X* C_S__5b__21_X::alloc_() {
    C_S__5b__21_X* o = rt::make<C_S__5b__21_X>();
    return o;
}
rt::Value C_S__5b__21_X::mk_(rt::Value* a, int n) {
    C_S__5b__21_X* o = alloc_();
    o->C_S__5b__21_X::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_X::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b__21_X::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b__21_X::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b__21_X::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b__21_X::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    case NM_S__40__21__5f_: return true;
    default: return false;
    }
}
bool C_S__5b__21_X::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21_X__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__21__5f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__21_X::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21_X__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21_X::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S__40__21__5f_: out = rt::V(sm_S__40__21__5f_()); return true;
    default: return false;
    }
}
void C_S__5b__21__5d_::ctor_() {
    RT_FN("S__5b__21__5d_.S__5b__21__5d_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31425 = 447.0; this->f_S_6_21_Z = rt::touint_d(_v31425); _v31425; });
    ({ rt::Value _v31426 = rt::trv(rt::VS(g::LS[9105])); this->f_S_1i = rt::slot_string(_v31426); _v31426; });
    ({ double _v31427 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v31427); _v31427; });
    ({ double _v31428 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31428); _v31428; });
    ({ double _v31429 = 13.0; this->f_S__22__21_U = rt::toint_d(_v31429); _v31429; });
    ({ double _v31430 = 0.0; this->f_S__21_G = rt::toint_d(_v31430); _v31430; });
    ({ double _v31431 = 8.0; this->f_S__5e__21_C = rt::toint_d(_v31431); _v31431; });
    ({ double _v31432 = 281.0; this->f_S__25_w = rt::toint_d(_v31432); _v31432; });
}
rt::Value C_S__5b__21__5d_::m_S__40__22_() {
    RT_FN("S__5b__21__5d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9106]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2X__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__5b__21__5d_::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__5b__21__5d_::m_S_9_21__3f_() {
    RT_FN("S__5b__21__5d_.S_9_21__3f_");
    return ({ bool _t31434 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t31434 ? _t31434 : (bool)(({ bool _t31433 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t31433 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__27__21_S__id))) : _t31433; })); });
    return false;
}
bool C_S__5b__21__5d_::g_S_9_21__25_() {
    RT_FN("S__5b__21__5d_.S_9_21__25__get");
    return ({ bool _t31437 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t31437 ? _t31437 : (bool)(({ bool _t31436 = ({ bool _t31435 = (!this->m_S_9_21_F()); _t31435 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t31435; }); _t31436 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__27__21_S__id)) : _t31436; })); });
    return false;
}
double C_S__5b__21__5d_::sm_S__26_s() {
    RT_FN("S__5b__21__5d_.S__26_s");
    return (80.0 + (0.8 * rt::m_pow(C_S__26_c::sm_S_1_22__26_((C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), true, false, false, true) - C_S__26_c::sm_S__22__21_B(rt::toint_d(58.0), true, false, false, true))), 0.8)));
    return 0.0;
}
C_S__5b__21__5d_* C_S__5b__21__5d_::alloc_() {
    C_S__5b__21__5d_* o = rt::make<C_S__5b__21__5d_>();
    return o;
}
rt::Value C_S__5b__21__5d_::mk_(rt::Value* a, int n) {
    C_S__5b__21__5d_* o = alloc_();
    o->C_S__5b__21__5d_::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21__5d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b__21__5d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b__21__5d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b__21__5d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b__21__5d_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__5b__21__5d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21__5d___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__21__5d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21__5d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21__5d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__5b__22__3f_::ctor_() {
    RT_FN("S__5b__22__3f_.S__5b__22__3f_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31438 = 1080.0; this->f_S_6_21_Z = rt::touint_d(_v31438); _v31438; });
    ({ rt::Value _v31439 = rt::trv(rt::VS(g::LS[9107])); this->f_S_1i = rt::slot_string(_v31439); _v31439; });
    ({ double _v31440 = 34.0; this->f_S__22__21_U = rt::toint_d(_v31440); _v31440; });
    ({ double _v31441 = 2.0; this->f_S__21_G = rt::toint_d(_v31441); _v31441; });
    ({ double _v31442 = 10875.0; this->f_S__25_w = rt::toint_d(_v31442); _v31442; });
}
rt::Value C_S__5b__22__3f_::m_S__40__22_() {
    RT_FN("S__5b__22__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9108])));
    return rt::NUL;
}
double C_S__5b__22__3f_::sm_S__20__22_D(double p0) {
    double l_param1 = p0;
    RT_FN("S__5b__22__3f_.S__20__22_D");
    return (0.3 * rt::m_pow(l_param1, 0.7));
    return 0.0;
}
C_S__5b__22__3f_* C_S__5b__22__3f_::alloc_() {
    C_S__5b__22__3f_* o = rt::make<C_S__5b__22__3f_>();
    return o;
}
rt::Value C_S__5b__22__3f_::mk_(rt::Value* a, int n) {
    C_S__5b__22__3f_* o = alloc_();
    o->C_S__5b__22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b__22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b__22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b__22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b__22__3f_::smeth_(int id) {
    switch (id) {
    case NM_S__20__22_D: return true;
    default: return false;
    }
}
bool C_S__5b__22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22__3f___id)); return true;
    case NM_S__20__22_D: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__22_D: out = rt::V(sm_S__20__22_D(rt::arg<double>(a, n, 0, NAN))); return true;
    default: return false;
    }
}
void C_S__5b__22_3::ctor_() {
    RT_FN("S__5b__22_3.S__5b__22_3");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31443 = 1043.0; this->f_S_6_21_Z = rt::touint_d(_v31443); _v31443; });
    ({ rt::Value _v31444 = rt::trv(rt::VS(g::LS[9109])); this->f_S_1i = rt::slot_string(_v31444); _v31444; });
    ({ double _v31445 = 31.0; this->f_S__22__21_U = rt::toint_d(_v31445); _v31445; });
    ({ double _v31446 = 2.0; this->f_S__21_G = rt::toint_d(_v31446); _v31446; });
    ({ double _v31447 = 5375.0; this->f_S__25_w = rt::toint_d(_v31447); _v31447; });
    ({ double _v31448 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v31448); _v31448; });
}
rt::Value C_S__5b__22_3::m_S__40__22_() {
    RT_FN("S__5b__22_3.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9110]), C_S__26_c::sm_S_8_21_Z(C_S__5b__22_3::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__5b__22_3::m_S__3e_I() {
    RT_FN("S__5b__22_3.S__3e_I");
    return ({ bool _t31451 = ({ bool _t31450 = ({ bool _t31449 = (!this->f_S__3c__21_7); _t31449 ? (bool)(this->g_S__2b__21_a()) : _t31449; }); _t31450 ? (bool)((!this->f_S__3f__21_6)) : _t31450; }); _t31451 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t31451; });
    return false;
}
bool C_S__5b__22_3::m_S__2b__60_() {
    RT_FN("S__5b__22_3.S__2b__60_");
    return ({ bool _t31454 = ({ bool _t31453 = ({ bool _t31452 = (!this->f_S__3c__21_7); _t31452 ? (bool)(this->g_S__2b__21_a()) : _t31452; }); _t31453 ? (bool)((!this->f_S__3f__21_6)) : _t31453; }); _t31454 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t31454; });
    return false;
}
bool C_S__5b__22_3::m_S_9_21__3f_() {
    RT_FN("S__5b__22_3.S_9_21__3f_");
    return ({ bool _t31456 = ({ bool _t31455 = (!this->f_S__3c__21_7); _t31455 ? (bool)(this->f_S__3f__21_6) : _t31455; }); _t31456 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t31456; });
    return false;
}
bool C_S__5b__22_3::g_S_9_21__25_() {
    RT_FN("S__5b__22_3.S_9_21__25__get");
    return ({ bool _t31457 = (!this->m_S_9_21_F()); _t31457 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t31457; });
    return false;
}
bool C_S__5b__22_3::g_S__20__21_3() {
    RT_FN("S__5b__22_3.S__20__21_3_get");
    return ({ bool _t31458 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31458 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t31458; });
    return false;
}
double C_S__5b__22_3::sm_S__22__21__26_() {
    RT_FN("S__5b__22_3.S__22__21__26_");
    return (0.75 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.75));
    return 0.0;
}
C_S__5b__22_3* C_S__5b__22_3::alloc_() {
    C_S__5b__22_3* o = rt::make<C_S__5b__22_3>();
    return o;
}
rt::Value C_S__5b__22_3::mk_(rt::Value* a, int n) {
    C_S__5b__22_3* o = alloc_();
    o->C_S__5b__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e_I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b__60_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e_I: out = rt::VB(m_S__3e_I()); return true;
    case NM_S__2b__60_: out = rt::VB(m_S__2b__60_()); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e_I: return true;
    case NM_S__2b__60_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_9_21__25_: return false;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b__22_3::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__5b__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22_3__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22_3__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__5b__22_4::ctor_() {
    RT_FN("S__5b__22_4.S__5b__22_4");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31459 = 1044.0; this->f_S_6_21_Z = rt::touint_d(_v31459); _v31459; });
    ({ rt::Value _v31460 = rt::trv(rt::VS(g::LS[9111])); this->f_S_1i = rt::slot_string(_v31460); _v31460; });
    ({ double _v31461 = 30.0; this->f_S__22__21_U = rt::toint_d(_v31461); _v31461; });
    ({ double _v31462 = 3.0; this->f_S__21_G = rt::toint_d(_v31462); _v31462; });
    ({ double _v31463 = 5125.0; this->f_S__25_w = rt::toint_d(_v31463); _v31463; });
}
rt::Value C_S__5b__22_4::m_S__40__22_() {
    RT_FN("S__5b__22_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9112])));
    return rt::NUL;
}
rt::Value C_S__5b__22_4::m_S_8_5b_() {
    RT_FN("S__5b__22_4.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true), 500000.0, rt::trv(rt::VS(g::LS[3959])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__5b__22_4::g_S__20__21_3() {
    RT_FN("S__5b__22_4.S__20__21_3_get");
    return ({ bool _t31465 = ({ bool _t31464 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31464 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t31464; }); _t31465 ? (bool)((C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true) >= 500000.0)) : _t31465; });
    return false;
}
C_S__5b__22_4* C_S__5b__22_4::alloc_() {
    C_S__5b__22_4* o = rt::make<C_S__5b__22_4>();
    return o;
}
rt::Value C_S__5b__22_4::mk_(rt::Value* a, int n) {
    C_S__5b__22_4* o = alloc_();
    o->C_S__5b__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b__22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b__22_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b__22_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22_4__id)); return true;
    default: return false;
    }
}
bool C_S__5b__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__22__3d_::ctor_() {
    RT_FN("S__5b__22__3d_.S__5b__22__3d_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31466 = 1087.0; this->f_S_6_21_Z = rt::touint_d(_v31466); _v31466; });
    ({ rt::Value _v31467 = rt::trv(rt::VS(g::LS[9113])); this->f_S_1i = rt::slot_string(_v31467); _v31467; });
    ({ double _v31468 = 7.0; this->f_S__22__21_U = rt::toint_d(_v31468); _v31468; });
    ({ double _v31469 = 6.0; this->f_S__21_G = rt::toint_d(_v31469); _v31469; });
    ({ double _v31470 = 11750.0; this->f_S__25_w = rt::toint_d(_v31470); _v31470; });
}
rt::Value C_S__5b__22__3d_::m_S__40__22_() {
    RT_FN("S__5b__22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9114])));
    return rt::NUL;
}
rt::Value C_S__5b__22__3d_::m_S_8_5b_() {
    RT_FN("S__5b__22__3d_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)), 5500.0, rt::trv(rt::VS(g::LS[8585])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__5b__22__3d_::g_S__20__21_3() {
    RT_FN("S__5b__22__3d_.S__20__21_3_get");
    return ({ bool _t31471 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31471 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0), rt::V(5500.0))) : _t31471; });
    return false;
}
C_S__5b__22__3d_* C_S__5b__22__3d_::alloc_() {
    C_S__5b__22__3d_* o = rt::make<C_S__5b__22__3d_>();
    return o;
}
rt::Value C_S__5b__22__3d_::mk_(rt::Value* a, int n) {
    C_S__5b__22__3d_* o = alloc_();
    o->C_S__5b__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b__22__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22__3d___id)); return true;
    default: return false;
    }
}
bool C_S__5b__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__22_E::ctor_() {
    RT_FN("S__5b__22_E.S__5b__22_E");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31472 = 1158.0; this->f_S_6_21_Z = rt::touint_d(_v31472); _v31472; });
    ({ rt::Value _v31473 = rt::trv(rt::VS(g::LS[9115])); this->f_S_1i = rt::slot_string(_v31473); _v31473; });
    ({ double _v31474 = 39.0; this->f_S__22__21_U = rt::toint_d(_v31474); _v31474; });
    ({ double _v31475 = 2.0; this->f_S__21_G = rt::toint_d(_v31475); _v31475; });
    ({ double _v31476 = 12250.0; this->f_S__25_w = rt::toint_d(_v31476); _v31476; });
}
rt::Value C_S__5b__22_E::m_S__40__22_() {
    RT_FN("S__5b__22_E.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9116]), C_S__26_c::sm_S_8_21_Z((C_S__5b__22_E::sm_S__2c__21_G() * 100.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5b__22_E::m_S_8_5b_() {
    RT_FN("S__5b__22_E.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0)), 7200.0, rt::trv(rt::VS(g::LS[9117])), false, true));
    return rt::NUL;
}
bool C_S__5b__22_E::g_S__20__21_3() {
    RT_FN("S__5b__22_E.S__20__21_3_get");
    return ({ bool _t31478 = ({ bool _t31477 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31477 ? (bool)(C_S__26_c::sm_S__5d_B(g::SV.C_S__2b_P__id, true)) : _t31477; }); _t31478 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(7200.0))) : _t31478; });
    return false;
}
double C_S__5b__22_E::sm_S__2c__21_G() {
    RT_FN("S__5b__22_E.S__2c__21_G");
    return (10.0 + (0.7 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S_6_21_V__id, false, false, C_S__26_c::dsm_S_7i_3()), 0.7)));
    return 0.0;
}
C_S__5b__22_E* C_S__5b__22_E::alloc_() {
    C_S__5b__22_E* o = rt::make<C_S__5b__22_E>();
    return o;
}
rt::Value C_S__5b__22_E::mk_(rt::Value* a, int n) {
    C_S__5b__22_E* o = alloc_();
    o->C_S__5b__22_E::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b__22_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b__22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b__22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b__22_E::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__5b__22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22_E__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5b_8::ctor_() {
    RT_FN("S__5b_8.S__5b_8");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31479 = 307.0; this->f_S_6_21_Z = rt::touint_d(_v31479); _v31479; });
    ({ rt::Value _v31480 = rt::trv(rt::VS(g::LS[9118])); this->f_S_1i = rt::slot_string(_v31480); _v31480; });
    ({ double _v31481 = 9.0; this->f_S__22__21_U = rt::toint_d(_v31481); _v31481; });
    ({ double _v31482 = 0.0; this->f_S__21_G = rt::toint_d(_v31482); _v31482; });
    ({ double _v31483 = 215.0; this->f_S__25_w = rt::toint_d(_v31483); _v31483; });
    ({ bool _v31484 = false; this->f_S__3d_z = _v31484; _v31484; });
}
rt::Value C_S__5b_8::m_S__40__22_() {
    RT_FN("S__5b_8.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9119]), C_S__26_c::sm_S_6_21_T(C_S__5b_8::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__5b_8::m_S_8_21_s() {
    RT_FN("S__5b_8.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9120])));
    return rt::NUL;
}
rt::Value C_S__5b_8::m_S_8_5b_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5b_8.S_8_5b_");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S__25__2c___id));
    return rt::slot_string(rt::add(this->m_S__3f__21_N((({ rt::Value _o31485 = l_A__loc1_; C_S_84* _p31486 = rt::as_ptr<C_S_84>(_o31485); _p31486 ? _p31486->g_S_2_2d_() : rt::tonum(rt::dget(_o31485, NM_S_2_2d_)); }) + ({ rt::Value _o31487 = l_A__loc1_; C_S_84* _p31488 = rt::as_ptr<C_S_84>(_o31487); _p31488 ? _p31488->g_S_5_21_L() : rt::tonum(rt::dget(_o31487, NM_S_5_21_L)); })), 200.0, rt::trv(rt::VS(g::LS[8393]), ({ rt::Value _o31489 = l_A__loc1_; C_S_84* _p31490 = rt::as_ptr<C_S_84>(_o31489); _p31490 ? _p31490->f_S_1i : rt::dget(_o31489, NM_S_1i); })), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__25__21__2b___id, g::SV.C_S__27__21_5__id, false)));
    return rt::NUL;
}
bool C_S__5b_8::g_S__20__21_3() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5b_8.S__20__21_3_get");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S__25__2c___id));
    return ({ bool _t31501 = ({ bool _t31496 = ({ bool _t31493 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31493 ? (bool)(({ rt::Value _o31491 = C_S_8G::sm_S__21__21_H(g::SV.C_S__25__21__2b___id); C_S__60_6* _p31492 = rt::as_ptr<C_S__60_6>(_o31491); _p31492 ? _p31492->f_S__3f__21_6 : rt::T(rt::dget(_o31491, NM_S__3f__21_6)); })) : _t31493; }); _t31496 ? (bool)(({ rt::Value _o31494 = C_S_8G::sm_S__21__21_H(g::SV.C_S__27__21_5__id); C_S__60_6* _p31495 = rt::as_ptr<C_S__60_6>(_o31494); _p31495 ? _p31495->f_S__3f__21_6 : rt::T(rt::dget(_o31494, NM_S__3f__21_6)); })) : _t31496; }); _t31501 ? (bool)(((({ rt::Value _o31497 = l_A__loc1_; C_S_84* _p31498 = rt::as_ptr<C_S_84>(_o31497); _p31498 ? _p31498->g_S_2_2d_() : rt::tonum(rt::dget(_o31497, NM_S_2_2d_)); }) + ({ rt::Value _o31499 = l_A__loc1_; C_S_84* _p31500 = rt::as_ptr<C_S_84>(_o31499); _p31500 ? _p31500->g_S_5_21_L() : rt::tonum(rt::dget(_o31499, NM_S_5_21_L)); })) >= 200.0)) : _t31501; });
    return false;
}
double C_S__5b_8::sm_S__27__21_b() {
    RT_FN("S__5b_8.S__27__21_b");
    return (100.0 * rt::m_pow((10.0 * rt::m_max2(0.0, ((double)(C_S__26_c::sm_S__3f__26_(C_S__26_c::dsm_S__3f__26__0()))))), (((double)(({ rt::Value _o31502 = C_S_8G::sm_S__23_N(g::SV.C_S__25__2c___id); C_S_84* _p31503 = rt::as_ptr<C_S_84>(_o31502); _p31503 ? _p31503->g_S__60_r() : rt::touint(rt::dget(_o31502, NM_S__60_r)); }))) + 1.0)));
    return 0.0;
}
C_S__5b_8* C_S__5b_8::alloc_() {
    C_S__5b_8* o = rt::make<C_S__5b_8>();
    return o;
}
rt::Value C_S__5b_8::mk_(rt::Value* a, int n) {
    C_S__5b_8* o = alloc_();
    o->C_S__5b_8::ctor_();
    return rt::VO(o);
}
bool C_S__5b_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b_8::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b_8::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b_8::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__5b_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b_8__id)); return true;
    case NM_ids: out = g::SV.C_S__5b_8__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b_8__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5b_8__ids = v; return true;
    default: return false;
    }
}
bool C_S__5b_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__5b__5e_::ctor_() {
    RT_FN("S__5b__5e_.S__5b__5e_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31504 = 301.0; this->f_S_6_21_Z = rt::touint_d(_v31504); _v31504; });
    ({ rt::Value _v31505 = rt::trv(rt::VS(g::LS[9122])); this->f_S_1i = rt::slot_string(_v31505); _v31505; });
    ({ double _v31506 = 10.0; this->f_S__22__21_U = rt::toint_d(_v31506); _v31506; });
    ({ double _v31507 = 0.0; this->f_S__21_G = rt::toint_d(_v31507); _v31507; });
    ({ double _v31508 = 200.0; this->f_S__25_w = rt::toint_d(_v31508); _v31508; });
    ({ bool _v31509 = false; this->f_S__3d_z = _v31509; _v31509; });
}
rt::Value C_S__5b__5e_::m_S__40__22_() {
    RT_FN("S__5b__5e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9123]), C_S__26_c::sm_S_8_21_Z(C_S__5b__5e_::sm_S__40_V(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5b__5e_::m_S_8_5b_() {
    RT_FN("S__5b__5e_.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_0_21_Y__id, g::SV.C_S_4_21_G__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__5b__5e_::g_S__20__21_3() {
    RT_FN("S__5b__5e_.S__20__21_3_get");
    return ({ bool _t31515 = ({ bool _t31512 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31512 ? (bool)(({ rt::Value _o31510 = C_S_8G::sm_S__21__21_H(g::SV.C_S_0_21_Y__id); C_S__60_6* _p31511 = rt::as_ptr<C_S__60_6>(_o31510); _p31511 ? _p31511->f_S__3f__21_6 : rt::T(rt::dget(_o31510, NM_S__3f__21_6)); })) : _t31512; }); _t31515 ? (bool)(({ rt::Value _o31513 = C_S_8G::sm_S__21__21_H(g::SV.C_S_4_21_G__id); C_S__60_6* _p31514 = rt::as_ptr<C_S__60_6>(_o31513); _p31514 ? _p31514->f_S__3f__21_6 : rt::T(rt::dget(_o31513, NM_S__3f__21_6)); })) : _t31515; });
    return false;
}
double C_S__5b__5e_::sm_S__40_V() {
    RT_FN("S__5b__5e_.S__40_V");
    return (5.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_(true, C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()))), 1.5));
    return 0.0;
}
C_S__5b__5e_* C_S__5b__5e_::alloc_() {
    C_S__5b__5e_* o = rt::make<C_S__5b__5e_>();
    return o;
}
rt::Value C_S__5b__5e_::mk_(rt::Value* a, int n) {
    C_S__5b__5e_* o = alloc_();
    o->C_S__5b__5e_::ctor_();
    return rt::VO(o);
}
bool C_S__5b__5e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b__5e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b__5e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b__5e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b__5e_::smeth_(int id) {
    switch (id) {
    case NM_S__40_V: return true;
    default: return false;
    }
}
bool C_S__5b__5e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__5e___id)); return true;
    case NM_ids: out = g::SV.C_S__5b__5e___ids; return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__5e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__5e___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5b__5e___ids = v; return true;
    default: return false;
    }
}
bool C_S__5b__5e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    default: return false;
    }
}
void C_S__5b_n::ctor_() {
    RT_FN("S__5b_n.S__5b_n");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31516 = 616.0; this->f_S_6_21_Z = rt::touint_d(_v31516); _v31516; });
    ({ rt::Value _v31517 = rt::trv(rt::VS(g::LS[9125])); this->f_S_1i = rt::slot_string(_v31517); _v31517; });
    ({ double _v31518 = 26.0; this->f_S__22__21_U = rt::toint_d(_v31518); _v31518; });
    ({ double _v31519 = 4.0; this->f_S__21_G = rt::toint_d(_v31519); _v31519; });
    ({ double _v31520 = 1325.0; this->f_S__25_w = rt::toint_d(_v31520); _v31520; });
}
rt::Value C_S__5b_n::m_S__40__22_() {
    RT_FN("S__5b_n.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9126]), C_S__26_c::sm_S_8_21_Z(C_S__5b_n::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5b_n::m_S_8_21_s() {
    RT_FN("S__5b_n.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9127])));
    return rt::NUL;
}
rt::Value C_S__5b_n::m_S_8_5b_() {
    RT_FN("S__5b_n.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sg_S_1_21_5(), 4500.0, rt::trv(rt::VS(g::LS[8374])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__5b_n::g_S__20__21_3() {
    RT_FN("S__5b_n.S__20__21_3_get");
    return ({ bool _t31521 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31521 ? (bool)((C_S_8G::sg_S_1_21_5() >= 4500.0)) : _t31521; });
    return false;
}
double C_S__5b_n::sm_S_2_21_W() {
    RT_FN("S__5b_n.S_2_21_W");
    return (0.15 * rt::m_pow(C_S__26_c::sm_S__21__21_8(), 1.15));
    return 0.0;
}
C_S__5b_n* C_S__5b_n::alloc_() {
    C_S__5b_n* o = rt::make<C_S__5b_n>();
    return o;
}
rt::Value C_S__5b_n::mk_(rt::Value* a, int n) {
    C_S__5b_n* o = alloc_();
    o->C_S__5b_n::ctor_();
    return rt::VO(o);
}
bool C_S__5b_n::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b_n::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b_n::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b_n::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b_n::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S__5b_n::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b_n__id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b_n::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b_n__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b_n::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S__5b_q::ctor_() {
    RT_FN("S__5b_q.S__5b_q");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31522 = 515.0; this->f_S_6_21_Z = rt::touint_d(_v31522); _v31522; });
    ({ rt::Value _v31523 = rt::trv(rt::VS(g::LS[9128])); this->f_S_1i = rt::slot_string(_v31523); _v31523; });
    ({ double _v31524 = 20.0; this->f_S__22__21_U = rt::toint_d(_v31524); _v31524; });
    ({ double _v31525 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v31525); _v31525; });
    ({ double _v31526 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31526); _v31526; });
    ({ double _v31527 = 1.0; this->f_S__21_G = rt::toint_d(_v31527); _v31527; });
    ({ double _v31528 = 9.0; this->f_S__5e__21_C = rt::toint_d(_v31528); _v31528; });
    ({ double _v31529 = 501.0; this->f_S__25_w = rt::toint_d(_v31529); _v31529; });
}
rt::Value C_S__5b_q::m_S__40__22_() {
    RT_FN("S__5b_q.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9129]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__5b_q::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__5b_q::m_S_9_21__3f_() {
    RT_FN("S__5b_q.S_9_21__3f_");
    return ({ bool _t31531 = (!this->C_S__26__21__5f_::m_S__3e_I()); _t31531 ? (bool)((({ bool _t31530 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t31530 ? _t31530 : (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_3_21_F__id))); }))) : _t31531; });
    return false;
}
bool C_S__5b_q::g_S_9_21__25_() {
    RT_FN("S__5b_q.S_9_21__25__get");
    return ({ bool _t31534 = (({ bool _t31533 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t31533 ? _t31533 : (bool)(({ bool _t31532 = (!this->m_S_9_21_F()); _t31532 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t31532; })); })); _t31534 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_3_21_F__id)) : _t31534; });
    return false;
}
double C_S__5b_q::sm_S__26_s() {
    RT_FN("S__5b_q.S__26_s");
    return (60.0 * rt::m_pow(C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, C_S_8G::dsm_S__25_Z_1()), 0.8));
    return 0.0;
}
C_S__5b_q* C_S__5b_q::alloc_() {
    C_S__5b_q* o = rt::make<C_S__5b_q>();
    return o;
}
rt::Value C_S__5b_q::mk_(rt::Value* a, int n) {
    C_S__5b_q* o = alloc_();
    o->C_S__5b_q::ctor_();
    return rt::VO(o);
}
bool C_S__5b_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5b_q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5b_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5b_q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5b_q::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__5b_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b_q__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b_q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__5d__21__21_::ctor_() {
    RT_FN("S__5d__21__21_.S__5d__21__21_");
    ({ rt::Value _v31535 = rt::new_vectorv(rt::E_INT); this->f_S__26_Z = _v31535; _v31535; });
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ bool _v31536 = true; this->f_S_4W = _v31536; _v31536; });
    ({ double _v31537 = 437.0; this->f_S_6_21_Z = rt::touint_d(_v31537); _v31537; });
    ({ rt::Value _v31538 = rt::trv(rt::VS(g::LS[9130])); this->f_S_1i = rt::slot_string(_v31538); _v31538; });
    ({ double _v31539 = 19.0; this->f_S__22__21_U = rt::toint_d(_v31539); _v31539; });
    ({ double _v31540 = 2.0; this->f_S__21_G = rt::toint_d(_v31540); _v31540; });
    ({ double _v31541 = 400.0; this->f_S__25_w = rt::toint_d(_v31541); _v31541; });
    ({ bool _v31542 = false; this->f_S__3d_z = _v31542; _v31542; });
}
rt::Value C_S__5d__21__21_::m_S__40__22_() {
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5d__21__21_.S__40__22_");
    (l_A__loc2_ = rt::NUL);
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[9131]), C_S__26_c::sm_S_6_21_T(C_S__5d__21__21_::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))));
    if ((this->f_S__3c__21_7 && (!(((double)(g::SV.C_S__23__21__21___S__23__21_c)) == (-1.0))))) {
        (l_A__loc2_ = C_S_8G::sm_S__2d_e(g::SV.C_S__23__21__21___S__23__21_c));
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[9132]), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o31543 = l_A__loc2_; C_S__60__21__3b_* _p31544 = rt::as_ptr<C_S__60__21__3b_>(_o31543); _p31544 ? _p31544->f_id : rt::touint(rt::dget(_o31543, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__23__21_R(((double)(g::SV.C_S__23__21__21___S_3k)), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))))));
    }
    return rt::slot_string(rt::add(l_A__loc1_, (rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[9133]), C_S__26_c::sm_S_6_21_T(12000.0, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))))));
    return rt::NUL;
}
rt::Value C_S__5d__21__21_::m_S_8_5b_() {
    RT_FN("S__5d__21__21_.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__27__21_A__id, g::SV.C_S__2b__25___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
rt::Value C_S__5d__21__21_::m_S__21__21_G() {
    rt::Value l_A__loc1_ = rt::NUL;
    int32_t l_A__loc2_ = 0;
    RT_FN("S__5d__21__21_.S__21__21_G");
    (l_A__loc1_ = rt::NUL);
    (l_A__loc2_ = rt::toint_d(0.0));
    if ((((double)(g::SV.C_S__23__21__21___S_3k)) <= 0.0)) {
        ({ rt::Value _v31545 = rt::V(0.0); rt::dset(this->f_S__26_Z, rt::N_length, _v31545); _v31545; });
        (l_A__loc2_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc2_)) < rt::alen(g::SV.C_S_8G__S__25__3c_))) {
            (l_A__loc1_ = rt::arr_at(g::SV.C_S_8G__S__25__3c_, ((double)(l_A__loc2_))));
            if (((((double)(({ rt::Value _o31546 = l_A__loc1_; C_S__60__21__3b_* _p31547 = rt::as_ptr<C_S__60__21__3b_>(_o31546); _p31547 ? _p31547->g_S__21_a() : rt::touint(rt::dget(_o31546, NM_S__21_a)); }))) > 0.0) && ((((double)(({ rt::Value _o31548 = l_A__loc1_; C_S__60__21__3b_* _p31549 = rt::as_ptr<C_S__60__21__3b_>(_o31548); _p31549 ? _p31549->f_S__2c__21_Y : rt::toint(rt::dget(_o31548, NM_S__2c__21_Y)); }))) == 0.0) || (((double)(({ rt::Value _o31550 = l_A__loc1_; C_S__60__21__3b_* _p31551 = rt::as_ptr<C_S__60__21__3b_>(_o31550); _p31551 ? _p31551->f_S__2c__21_Y : rt::toint(rt::dget(_o31550, NM_S__2c__21_Y)); }))) == ((double)(g::SV.C_S_8G__S__2c__21_Y)))))) {
                (void)(rt::dcallv(this->f_S__26_Z, rt::N_push, rt::V((double)(({ rt::Value _o31552 = l_A__loc1_; C_S__60__21__3b_* _p31553 = rt::as_ptr<C_S__60__21__3b_>(_o31552); _p31553 ? _p31553->f_S__60_r : rt::toint(rt::dget(_o31552, NM_S__60_r)); })))));
            }
            (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
        }
        if ((rt::alen(this->f_S__26_Z) > 0.0)) {
            (void)(C_S__26_c::sm_S_5_40_(rt::touint_d(16.0), false));
            (g::SV.C_S__23__21__21___S__23__21_c = rt::toint(rt::arr_at(this->f_S__26_Z, rt::m_floor(({ rt::Value _o31554 = this->f_S_9_21__27_; C_S_7_21__20_* _p31555 = rt::as_ptr<C_S_7_21__20_>(_o31554); _p31555 ? _p31555->m_S__3b__21__2c_(0.0, rt::alen(this->f_S__26_Z)) : rt::tonum(rt::dcallv(_o31554, NM_S__3b__21__2c_, rt::V(0.0), rt::V(rt::alen(this->f_S__26_Z)))); })))));
            (void)(({ rt::Value _o31556 = C_S_8G::sm_S__2d_e(g::SV.C_S__23__21__21___S__23__21_c); C_S__60__21__3b_* _p31557 = rt::as_ptr<C_S__60__21__3b_>(_o31556); _p31557 ? _p31557->m_S__23__21_(rt::touint_d(16.0), true) : rt::dcallv(_o31556, NM_S__23__21_, rt::V(16.0), rt::VB(true)); }));
            (g::SV.C_S__23__21__21___S_3k = rt::toint_d(120.0));
        } else {
            (g::SV.C_S__23__21__21___S__23__21_c = rt::toint_d((-1.0)));
            (void)(C_S__26_c::sm_S_5_40_(rt::touint_d(16.0), false));
        }
    } else {
        (g::SV.C_S__23__21__21___S_3k = rt::toint_d((((double)(g::SV.C_S__23__21__21___S_3k)) - 1.0)));
    }
    return rt::NUL;
}
bool C_S__5d__21__21_::g_S__20__21_3() {
    RT_FN("S__5d__21__21_.S__20__21_3_get");
    return ({ bool _t31563 = ({ bool _t31560 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31560 ? (bool)(({ rt::Value _o31558 = C_S_8G::sm_S__21__21_H(g::SV.C_S__27__21_A__id); C_S__60_6* _p31559 = rt::as_ptr<C_S__60_6>(_o31558); _p31559 ? _p31559->f_S__3f__21_6 : rt::T(rt::dget(_o31558, NM_S__3f__21_6)); })) : _t31560; }); _t31563 ? (bool)(({ rt::Value _o31561 = C_S_8G::sm_S__21__21_H(g::SV.C_S__2b__25___id); C_S__60_6* _p31562 = rt::as_ptr<C_S__60_6>(_o31561); _p31562 ? _p31562->f_S__3f__21_6 : rt::T(rt::dget(_o31561, NM_S__3f__21_6)); })) : _t31563; });
    return false;
}
double C_S__5d__21__21_::sm_S__26_s() {
    RT_FN("S__5d__21__21_.S__26_s");
    return (2.75 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_(true, C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()))), 2.75));
    return 0.0;
}
C_S__5d__21__21_* C_S__5d__21__21_::alloc_() {
    C_S__5d__21__21_* o = rt::make<C_S__5d__21__21_>();
    return o;
}
rt::Value C_S__5d__21__21_::mk_(rt::Value* a, int n) {
    C_S__5d__21__21_* o = alloc_();
    o->C_S__5d__21__21_::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21__21_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__26_Z: out = f_S__26_Z; return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d__21__21_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__26_Z: f_S__26_Z = v; return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d__21__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_Z: { rt::Value f = f_S__26_Z; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d__21__21_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__20__21_3: return false;
    case NM_S__26_Z: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d__21__21_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__5d__21__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21__21___id)); return true;
    case NM_S_0I: out = rt::V(g::SV.C_S__5d__21__21___S_0I); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__21__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21__21___id = rt::touint(v); return true;
    case NM_S_0I: g::SV.C_S__5d__21__21___S_0I = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__5d__21__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__5d__21__22_::ctor_() {
    RT_FN("S__5d__21__22_.S__5d__21__22_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31564 = 247.0; this->f_S_6_21_Z = rt::touint_d(_v31564); _v31564; });
    ({ rt::Value _v31565 = rt::trv(rt::VS(g::LS[9134])); this->f_S_1i = rt::slot_string(_v31565); _v31565; });
    ({ double _v31566 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v31566); _v31566; });
    ({ double _v31567 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31567); _v31567; });
    ({ double _v31568 = 10.0; this->f_S__22__21_U = rt::toint_d(_v31568); _v31568; });
    ({ double _v31569 = 4.0; this->f_S__21_G = rt::toint_d(_v31569); _v31569; });
    ({ double _v31570 = 4.0; this->f_S__5e__21_C = rt::toint_d(_v31570); _v31570; });
    ({ double _v31571 = 175.0; this->f_S__25_w = rt::toint_d(_v31571); _v31571; });
    ({ bool _v31572 = false; this->f_S__3d_z = _v31572; _v31572; });
}
rt::Value C_S__5d__21__22_::m_S__40__22_() {
    RT_FN("S__5d__21__22_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9135]), C_S__26_c::sm_S_6_21_T(C_S__5d__21__22_::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__5d__21__22_::m_S_8_5b_() {
    RT_FN("S__5d__21__22_.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_3_21_C__id, g::SV.C_S__26__21__23___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__5d__21__22_::g_S__20__21_3() {
    RT_FN("S__5d__21__22_.S__20__21_3_get");
    return ({ bool _t31578 = ({ bool _t31575 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31575 ? (bool)(({ rt::Value _o31573 = C_S_8G::sm_S__21__21_H(g::SV.C_S_3_21_C__id); C_S__60_6* _p31574 = rt::as_ptr<C_S__60_6>(_o31573); _p31574 ? _p31574->f_S__3f__21_6 : rt::T(rt::dget(_o31573, NM_S__3f__21_6)); })) : _t31575; }); _t31578 ? (bool)(({ rt::Value _o31576 = C_S_8G::sm_S__21__21_H(g::SV.C_S__26__21__23___id); C_S__60_6* _p31577 = rt::as_ptr<C_S__60_6>(_o31576); _p31577 ? _p31577->f_S__3f__21_6 : rt::T(rt::dget(_o31576, NM_S__3f__21_6)); })) : _t31578; });
    return false;
}
double C_S__5d__21__22_::sm_S__27__21_b() {
    RT_FN("S__5d__21__22_.S__27__21_b");
    return (2.5 * rt::m_pow(((double)(C_S__23__21__21_::sg_S_8_21_H())), 2.25));
    return 0.0;
}
C_S__5d__21__22_* C_S__5d__21__22_::alloc_() {
    C_S__5d__21__22_* o = rt::make<C_S__5d__21__22_>();
    return o;
}
rt::Value C_S__5d__21__22_::mk_(rt::Value* a, int n) {
    C_S__5d__21__22_* o = alloc_();
    o->C_S__5d__21__22_::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21__22_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d__21__22_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d__21__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d__21__22_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d__21__22_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__5d__21__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21__22___id)); return true;
    case NM_ids: out = g::SV.C_S__5d__21__22___ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__21__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21__22___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5d__21__22___ids = v; return true;
    default: return false;
    }
}
bool C_S__5d__21__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__5d__21_2::ctor_() {
    RT_FN("S__5d__21_2.S__5d__21_2");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31579 = 309.0; this->f_S_6_21_Z = rt::touint_d(_v31579); _v31579; });
    ({ rt::Value _v31580 = rt::trv(rt::VS(g::LS[9137])); this->f_S_1i = rt::slot_string(_v31580); _v31580; });
    ({ double _v31581 = 3.0; this->f_S__22__21_U = rt::toint_d(_v31581); _v31581; });
    ({ double _v31582 = 0.0; this->f_S__21_G = rt::toint_d(_v31582); _v31582; });
    ({ double _v31583 = 30.0; this->f_S__25_w = rt::toint_d(_v31583); _v31583; });
}
rt::Value C_S__5d__21_2::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5d__21_2.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[9138]))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[9139]), C_S__26_c::sm_S_8_21_Z(C_S__5d__21_2::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::slot_string(rt::add(l_A__loc1_, (rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[9140]), C_S__26_c::sm_S_8_21_Z(C_S__5d__21_2::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::NUL;
}
rt::Value C_S__5d__21_2::m_S_8_5b_() {
    RT_FN("S__5d__21_2.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()), 5000.0, rt::trv(rt::VS(g::LS[627])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__5d__21_2::g_S__20__21_3() {
    RT_FN("S__5d__21_2.S__20__21_3_get");
    return ({ bool _t31584 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31584 ? (bool)((C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()) >= 5000.0)) : _t31584; });
    return false;
}
double C_S__5d__21_2::sm_S__60_z() {
    RT_FN("S__5d__21_2.S__60_z");
    return (7.0 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7));
    return 0.0;
}
double C_S__5d__21_2::sm_S_2_21_W() {
    RT_FN("S__5d__21_2.S_2_21_W");
    return (0.4 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.6));
    return 0.0;
}
C_S__5d__21_2* C_S__5d__21_2::alloc_() {
    C_S__5d__21_2* o = rt::make<C_S__5d__21_2>();
    return o;
}
rt::Value C_S__5d__21_2::mk_(rt::Value* a, int n) {
    C_S__5d__21_2* o = alloc_();
    o->C_S__5d__21_2::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d__21_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d__21_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d__21_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d__21_2::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S__5d__21_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21_2__id)); return true;
    case NM_ids: out = g::SV.C_S__5d__21_2__ids; return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__21_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21_2__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5d__21_2__ids = v; return true;
    default: return false;
    }
}
bool C_S__5d__21_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S__5d__21_H::ctor_() {
    RT_FN("S__5d__21_H.S__5d__21_H");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31585 = 535.0; this->f_S_6_21_Z = rt::touint_d(_v31585); _v31585; });
    ({ rt::Value _v31586 = rt::trv(rt::VS(g::LS[9142])); this->f_S_1i = rt::slot_string(_v31586); _v31586; });
    ({ double _v31587 = 22.0; this->f_S__22__21_U = rt::toint_d(_v31587); _v31587; });
    ({ double _v31588 = 3.0; this->f_S__21_G = rt::toint_d(_v31588); _v31588; });
    ({ double _v31589 = 450.0; this->f_S__25_w = rt::toint_d(_v31589); _v31589; });
}
rt::Value C_S__5d__21_H::m_S__40__22_() {
    RT_FN("S__5d__21_H.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9143]), C_S__26_c::sm_S_8_21_Z(C_S__5d__21_H::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5d__21_H::m_S_8_21_s() {
    RT_FN("S__5d__21_H.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9144])));
    return rt::NUL;
}
rt::Value C_S__5d__21_H::m_S_8_5b_() {
    RT_FN("S__5d__21_H.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()), 40000.0, rt::trv(rt::VS(g::LS[627])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__5d__21_H::g_S__20__21_3() {
    RT_FN("S__5d__21_H.S__20__21_3_get");
    return ({ bool _t31590 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31590 ? (bool)((C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()) >= 40000.0)) : _t31590; });
    return false;
}
double C_S__5d__21_H::sm_S__22__21__26_() {
    RT_FN("S__5d__21_H.S__22__21__26_");
    return (0.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sg_S__22__21_0())), 1.35));
    return 0.0;
}
C_S__5d__21_H* C_S__5d__21_H::alloc_() {
    C_S__5d__21_H* o = rt::make<C_S__5d__21_H>();
    return o;
}
rt::Value C_S__5d__21_H::mk_(rt::Value* a, int n) {
    C_S__5d__21_H* o = alloc_();
    o->C_S__5d__21_H::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d__21_H::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d__21_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d__21_H::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d__21_H::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__5d__21_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21_H__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__21_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21_H__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__21_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__5d__21_N::ctor_() {
    RT_FN("S__5d__21_N.S__5d__21_N");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31591 = 512.0; this->f_S_6_21_Z = rt::touint_d(_v31591); _v31591; });
    ({ rt::Value _v31592 = rt::trv(rt::VS(g::LS[9145])); this->f_S_1i = rt::slot_string(_v31592); _v31592; });
    ({ double _v31593 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v31593); _v31593; });
    ({ double _v31594 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31594); _v31594; });
    ({ double _v31595 = 1.0; this->f_S__3b__21__23_ = rt::toint_d(_v31595); _v31595; });
    ({ double _v31596 = 24.0; this->f_S__22__21_U = rt::toint_d(_v31596); _v31596; });
    ({ double _v31597 = 1.0; this->f_S__21_G = rt::toint_d(_v31597); _v31597; });
    ({ double _v31598 = 9.0; this->f_S__5e__21_C = rt::toint_d(_v31598); _v31598; });
    ({ double _v31599 = 700.0; this->f_S__25_w = rt::toint_d(_v31599); _v31599; });
    ({ bool _v31600 = false; this->f_S__3d_z = _v31600; _v31600; });
}
rt::Value C_S__5d__21_N::m_S__40__22_() {
    RT_FN("S__5d__21_N.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9146]), C_S__26_c::sm_S_6_21_T(C_S__5d__21_N::sm_S_4_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__5d__21_N::m_S_8_5b_() {
    RT_FN("S__5d__21_N.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 9.0)), 250.0, rt::trv(rt::VS(g::LS[8971])), C_S__26__21__5f_::dm_S__3f__21_N_3(), C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__3e__21_R__id, g::SV.C_S__22_i__id, false)));
    return rt::NUL;
}
bool C_S__5d__21_N::g_S__20__21_3() {
    RT_FN("S__5d__21_N.S__20__21_3_get");
    return ({ bool _t31608 = ({ bool _t31605 = ({ bool _t31602 = ({ bool _t31601 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31601 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 9.0), rt::V(250.0))) : _t31601; }); _t31602 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 1.0)) : _t31602; }); _t31605 ? (bool)(({ rt::Value _o31603 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3e__21_R__id); C_S__60_6* _p31604 = rt::as_ptr<C_S__60_6>(_o31603); _p31604 ? _p31604->f_S__3f__21_6 : rt::T(rt::dget(_o31603, NM_S__3f__21_6)); })) : _t31605; }); _t31608 ? (bool)(({ rt::Value _o31606 = C_S_8G::sm_S__21__21_H(g::SV.C_S__22_i__id); C_S__60_6* _p31607 = rt::as_ptr<C_S__60_6>(_o31606); _p31607 ? _p31607->f_S__3f__21_6 : rt::T(rt::dget(_o31606, NM_S__3f__21_6)); })) : _t31608; });
    return false;
}
bool C_S__5d__21_N::g_S_9_21__25_() {
    RT_FN("S__5d__21_N.S_9_21__25__get");
    return ({ bool _t31610 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t31610 ? (bool)((({ bool _t31609 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 1.0); _t31609 ? _t31609 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }))) : _t31610; });
    return false;
}
uint32_t C_S__5d__21_N::sm_S_6_22_4() {
    RT_FN("S__5d__21_N.S_6_22_4");
    return C_S__26_c::sm_S__3b__22__24_(10.0);
    return 0u;
}
double C_S__5d__21_N::sm_S_4_21__40_() {
    RT_FN("S__5d__21_N.S_4_21__40_");
    return rt::m_pow(C_S__26_c::sm_S_0F(C_S__26_c::dsm_S_0F_0()), 0.9);
    return 0.0;
}
C_S__5d__21_N* C_S__5d__21_N::alloc_() {
    C_S__5d__21_N* o = rt::make<C_S__5d__21_N>();
    return o;
}
rt::Value C_S__5d__21_N::mk_(rt::Value* a, int n) {
    C_S__5d__21_N* o = alloc_();
    o->C_S__5d__21_N::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d__21_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d__21_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d__21_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d__21_N::smeth_(int id) {
    switch (id) {
    case NM_S_6_22_4: return true;
    case NM_S_4_21__40_: return true;
    default: return false;
    }
}
bool C_S__5d__21_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21_N__id)); return true;
    case NM_S_6_22_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_4_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__21_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21_N__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__21_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_22_4: out = rt::V((double)(sm_S_6_22_4())); return true;
    case NM_S_4_21__40_: out = rt::V(sm_S_4_21__40_()); return true;
    default: return false;
    }
}
void C_S__5d__21_b::ctor_() {
    RT_FN("S__5d__21_b.S__5d__21_b");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31611 = 544.0; this->f_S_6_21_Z = rt::touint_d(_v31611); _v31611; });
    ({ rt::Value _v31612 = rt::trv(rt::VS(g::LS[9147])); this->f_S_1i = rt::slot_string(_v31612); _v31612; });
    ({ double _v31613 = 21.0; this->f_S__22__21_U = rt::toint_d(_v31613); _v31613; });
    ({ double _v31614 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v31614); _v31614; });
    ({ double _v31615 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31615); _v31615; });
    ({ double _v31616 = 5.0; this->f_S__21_G = rt::toint_d(_v31616); _v31616; });
    ({ double _v31617 = 10.0; this->f_S__5e__21_C = rt::toint_d(_v31617); _v31617; });
    ({ double _v31618 = 600.0; this->f_S__25_w = rt::toint_d(_v31618); _v31618; });
    ({ bool _v31619 = false; this->f_S__3d_z = _v31619; _v31619; });
}
rt::Value C_S__5d__21_b::m_S__40__22_() {
    RT_FN("S__5d__21_b.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9148]), C_S__26_c::sm_S_8_21_Z(C_S__5d__21_b::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5d__21_b::m_S_8_5b_() {
    RT_FN("S__5d__21_b.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__3c_C__id, g::SV.C_S__22__21_Y__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__5d__21_b::g_S__20__21_3() {
    RT_FN("S__5d__21_b.S__20__21_3_get");
    return ({ bool _t31625 = ({ bool _t31622 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31622 ? (bool)(({ rt::Value _o31620 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3c_C__id); C_S__60_6* _p31621 = rt::as_ptr<C_S__60_6>(_o31620); _p31621 ? _p31621->f_S__3f__21_6 : rt::T(rt::dget(_o31620, NM_S__3f__21_6)); })) : _t31622; }); _t31625 ? (bool)(({ rt::Value _o31623 = C_S_8G::sm_S__21__21_H(g::SV.C_S__22__21_Y__id); C_S__60_6* _p31624 = rt::as_ptr<C_S__60_6>(_o31623); _p31624 ? _p31624->f_S__3f__21_6 : rt::T(rt::dget(_o31623, NM_S__3f__21_6)); })) : _t31625; });
    return false;
}
double C_S__5d__21_b::sm_S_9L() {
    RT_FN("S__5d__21_b.S_9L");
    return rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__40_W__id, false, false, C_S__26_c::dsm_S_7i_3()), 0.6);
    return 0.0;
}
C_S__5d__21_b* C_S__5d__21_b::alloc_() {
    C_S__5d__21_b* o = rt::make<C_S__5d__21_b>();
    return o;
}
rt::Value C_S__5d__21_b::mk_(rt::Value* a, int n) {
    C_S__5d__21_b* o = alloc_();
    o->C_S__5d__21_b::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21_b::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d__21_b::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d__21_b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d__21_b::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d__21_b::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__5d__21_b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21_b__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__21_b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21_b__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__21_b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__5d__21_h::ctor_() {
    RT_FN("S__5d__21_h.S__5d__21_h");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31626 = 713.0; this->f_S_6_21_Z = rt::touint_d(_v31626); _v31626; });
    ({ rt::Value _v31627 = rt::trv(rt::VS(g::LS[9149])); this->f_S_1i = rt::slot_string(_v31627); _v31627; });
    ({ double _v31628 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31628); _v31628; });
    ({ double _v31629 = 28.0; this->f_S__22__21_U = rt::toint_d(_v31629); _v31629; });
    ({ double _v31630 = 2.0; this->f_S__21_G = rt::toint_d(_v31630); _v31630; });
    ({ double _v31631 = 11.0; this->f_S__5e__21_C = rt::toint_d(_v31631); _v31631; });
    ({ double _v31632 = 2850.0; this->f_S__25_w = rt::toint_d(_v31632); _v31632; });
}
rt::Value C_S__5d__21_h::m_S__40__22_() {
    RT_FN("S__5d__21_h.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9150]), C_S__26_c::sm_S_6_21_T(C_S__5d__21_h::sm_S__26_s(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__5d__21_h::g_S__20__21_3() {
    RT_FN("S__5d__21_h.S__20__21_3_get");
    return ({ bool _t31633 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31633 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_i__id)) : _t31633; });
    return false;
}
double C_S__5d__21_h::sm_S__26_s() {
    RT_FN("S__5d__21_h.S__26_s");
    return (80.0 + (2.0 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(61.0), true, C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.8)));
    return 0.0;
}
C_S__5d__21_h* C_S__5d__21_h::alloc_() {
    C_S__5d__21_h* o = rt::make<C_S__5d__21_h>();
    return o;
}
rt::Value C_S__5d__21_h::mk_(rt::Value* a, int n) {
    C_S__5d__21_h* o = alloc_();
    o->C_S__5d__21_h::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21_h::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d__21_h::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d__21_h::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d__21_h::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d__21_h::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__5d__21_h::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21_h__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__21_h::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21_h__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__21_h::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__5d__22_2::ctor_() {
    RT_FN("S__5d__22_2.S__5d__22_2");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31634 = 1053.0; this->f_S_6_21_Z = rt::touint_d(_v31634); _v31634; });
    ({ rt::Value _v31635 = rt::trv(rt::VS(g::LS[9151])); this->f_S_1i = rt::slot_string(_v31635); _v31635; });
    ({ double _v31636 = 32.0; this->f_S__22__21_U = rt::toint_d(_v31636); _v31636; });
    ({ double _v31637 = 0.0; this->f_S__21_G = rt::toint_d(_v31637); _v31637; });
    ({ double _v31638 = 5625.0; this->f_S__25_w = rt::toint_d(_v31638); _v31638; });
}
rt::Value C_S__5d__22_2::m_S__40__22_() {
    RT_FN("S__5d__22_2.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9152]), C_S__26_c::sm_S_8_21_Z(C_S__5d__22_2::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5d__22_2::m_S_8_5b_() {
    RT_FN("S__5d__22_2.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__21__2d_(true, true), 1000000000000.0, rt::trv(rt::VS(g::LS[629])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__5d__22_2::g_S__20__21_3() {
    RT_FN("S__5d__22_2.S__20__21_3_get");
    return ({ bool _t31640 = ({ bool _t31639 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31639 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t31639; }); _t31640 ? (bool)((C_S__26_c::sm_S__21__2d_(true, true) >= 1000000000000.0)) : _t31640; });
    return false;
}
double C_S__5d__22_2::sm_S__22__21__26_() {
    RT_FN("S__5d__22_2.S__22__21__26_");
    return (0.75 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.25));
    return 0.0;
}
C_S__5d__22_2* C_S__5d__22_2::alloc_() {
    C_S__5d__22_2* o = rt::make<C_S__5d__22_2>();
    return o;
}
rt::Value C_S__5d__22_2::mk_(rt::Value* a, int n) {
    C_S__5d__22_2* o = alloc_();
    o->C_S__5d__22_2::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d__22_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d__22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d__22_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d__22_2::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__5d__22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22_2__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__5d__40_::ctor_() {
    RT_FN("S__5d__40_.S__5d__40_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31641 = 626.0; this->f_S_6_21_Z = rt::touint_d(_v31641); _v31641; });
    ({ rt::Value _v31642 = rt::trv(rt::VS(g::LS[9153])); this->f_S_1i = rt::slot_string(_v31642); _v31642; });
    ({ double _v31643 = 26.0; this->f_S__22__21_U = rt::toint_d(_v31643); _v31643; });
    ({ double _v31644 = 3.0; this->f_S__21_G = rt::toint_d(_v31644); _v31644; });
    ({ double _v31645 = 1325.0; this->f_S__25_w = rt::toint_d(_v31645); _v31645; });
}
rt::Value C_S__5d__40_::m_S__40__22_() {
    RT_FN("S__5d__40_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9154])));
    return rt::NUL;
}
rt::Value C_S__5d__40_::m_S_8_21_s() {
    RT_FN("S__5d__40_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9155])));
    return rt::NUL;
}
rt::Value C_S__5d__40_::m_S_8_5b_() {
    RT_FN("S__5d__40_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__3d__60_(true), 18000.0, rt::trv(rt::VS(g::LS[8378])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__5d__40_::g_S__20__21_3() {
    RT_FN("S__5d__40_.S__20__21_3_get");
    return ({ bool _t31646 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31646 ? (bool)((C_S__26_c::sm_S__3d__60_(true) >= 18000.0)) : _t31646; });
    return false;
}
C_S__5d__40_* C_S__5d__40_::alloc_() {
    C_S__5d__40_* o = rt::make<C_S__5d__40_>();
    return o;
}
rt::Value C_S__5d__40_::mk_(rt::Value* a, int n) {
    C_S__5d__40_* o = alloc_();
    o->C_S__5d__40_::ctor_();
    return rt::VO(o);
}
bool C_S__5d__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d__40_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d__40_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__40___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__5d__40___S_1_21_S); return true;
    default: return false;
    }
}
bool C_S__5d__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__40___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__5d__40___S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__5d__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d_R::ctor_() {
    RT_FN("S__5d_R.S__5d_R");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31647 = 443.0; this->f_S_6_21_Z = rt::touint_d(_v31647); _v31647; });
    ({ rt::Value _v31648 = rt::trv(rt::VS(g::LS[9156])); this->f_S_1i = rt::slot_string(_v31648); _v31648; });
    ({ double _v31649 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v31649); _v31649; });
    ({ double _v31650 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31650); _v31650; });
    ({ double _v31651 = 18.0; this->f_S__22__21_U = rt::toint_d(_v31651); _v31651; });
    ({ double _v31652 = 3.0; this->f_S__21_G = rt::toint_d(_v31652); _v31652; });
    ({ double _v31653 = 8.0; this->f_S__5e__21_C = rt::toint_d(_v31653); _v31653; });
    ({ double _v31654 = 350.0; this->f_S__25_w = rt::toint_d(_v31654); _v31654; });
    ({ bool _v31655 = false; this->f_S__3d_z = _v31655; _v31655; });
}
rt::Value C_S__5d_R::m_S__40__22_() {
    RT_FN("S__5d_R.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9157]), C_S__26_c::sm_S_6_21_T(C_S__5d_R::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__5d_R::m_S_8_5b_() {
    RT_FN("S__5d_R.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_2_21_2__id, g::SV.C_S__5d_f__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__5d_R::g_S__20__21_3() {
    RT_FN("S__5d_R.S__20__21_3_get");
    return ({ bool _t31661 = ({ bool _t31658 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31658 ? (bool)(({ rt::Value _o31656 = C_S_8G::sm_S__21__21_H(g::SV.C_S_2_21_2__id); C_S__60_6* _p31657 = rt::as_ptr<C_S__60_6>(_o31656); _p31657 ? _p31657->f_S__3f__21_6 : rt::T(rt::dget(_o31656, NM_S__3f__21_6)); })) : _t31658; }); _t31661 ? (bool)(({ rt::Value _o31659 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5d_f__id); C_S__60_6* _p31660 = rt::as_ptr<C_S__60_6>(_o31659); _p31660 ? _p31660->f_S__3f__21_6 : rt::T(rt::dget(_o31659, NM_S__3f__21_6)); })) : _t31661; });
    return false;
}
double C_S__5d_R::sm_S__27__21_b() {
    RT_FN("S__5d_R.S__27__21_b");
    return (2.5 * rt::m_pow(((double)(C_S__23__21__21_::sg_S_8_21_H())), 2.25));
    return 0.0;
}
C_S__5d_R* C_S__5d_R::alloc_() {
    C_S__5d_R* o = rt::make<C_S__5d_R>();
    return o;
}
rt::Value C_S__5d_R::mk_(rt::Value* a, int n) {
    C_S__5d_R* o = alloc_();
    o->C_S__5d_R::ctor_();
    return rt::VO(o);
}
bool C_S__5d_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d_R::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d_R::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__5d_R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d_R__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d_R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d_R__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__5d_V::ctor_() {
    RT_FN("S__5d_V.S__5d_V");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31662 = 278.0; this->f_S_6_21_Z = rt::touint_d(_v31662); _v31662; });
    ({ rt::Value _v31663 = rt::trv(rt::VS(g::LS[9158])); this->f_S_1i = rt::slot_string(_v31663); _v31663; });
    ({ double _v31664 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v31664); _v31664; });
    ({ double _v31665 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31665); _v31665; });
    ({ double _v31666 = 4.0; this->f_S__22__21_U = rt::toint_d(_v31666); _v31666; });
    ({ double _v31667 = 3.0; this->f_S__21_G = rt::toint_d(_v31667); _v31667; });
    ({ double _v31668 = 3.0; this->f_S__5e__21_C = rt::toint_d(_v31668); _v31668; });
    ({ double _v31669 = 50.0; this->f_S__25_w = rt::toint_d(_v31669); _v31669; });
}
rt::Value C_S__5d_V::m_S__40__22_() {
    RT_FN("S__5d_V.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9159])));
    return rt::NUL;
}
rt::Value C_S__5d_V::m_S_8_21_s() {
    RT_FN("S__5d_V.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9160])));
    return rt::NUL;
}
bool C_S__5d_V::m_S_9_21__3f_() {
    RT_FN("S__5d_V.S_9_21__3f_");
    return ({ bool _t31671 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t31671 ? _t31671 : (bool)(({ bool _t31670 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t31670 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_1_21_N__id))) : _t31670; })); });
    return false;
}
rt::Value C_S__5d_V::m_S_8_5b_() {
    RT_FN("S__5d_V.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)), 1250.0, rt::trv(rt::VS(g::LS[8585])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
rt::Value C_S__5d_V::m_S_6r() {
    RT_FN("S__5d_V.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o31672 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p31673 = rt::as_ptr<C_S_8G>(_o31672); _p31673 ? _p31673->m_S_17() : rt::dcallv(_o31672, NM_S_17); }));
    (void)(({ rt::Value _o31674 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p31675 = rt::as_ptr<C_S__20_g>(_o31674); _p31675 ? _p31675->m_S_69() : rt::dcallv(_o31674, NM_S_69); }));
    return rt::NUL;
}
bool C_S__5d_V::g_S__20__21_3() {
    RT_FN("S__5d_V.S__20__21_3_get");
    return ({ bool _t31676 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31676 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0), rt::V(1250.0))) : _t31676; });
    return false;
}
bool C_S__5d_V::g_S_9_21__25_() {
    RT_FN("S__5d_V.S_9_21__25__get");
    return ({ bool _t31679 = (!this->m_S_9_21_F()); _t31679 ? (bool)((({ bool _t31678 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0); _t31678 ? _t31678 : (bool)(({ bool _t31677 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t31677 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_1_21_N__id)) : _t31677; })); }))) : _t31679; });
    return false;
}
C_S__5d_V* C_S__5d_V::alloc_() {
    C_S__5d_V* o = rt::make<C_S__5d_V>();
    return o;
}
rt::Value C_S__5d_V::mk_(rt::Value* a, int n) {
    C_S__5d_V* o = alloc_();
    o->C_S__5d_V::ctor_();
    return rt::VO(o);
}
bool C_S__5d_V::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d_V::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d_V::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d_V::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_8_5b_: return true;
    case NM_S_6r: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d_V::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d_V::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d_V__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__5d_V__S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__5d_V__ids; return true;
    default: return false;
    }
}
bool C_S__5d_V::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d_V__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__5d_V__S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__5d_V__ids = v; return true;
    default: return false;
    }
}
bool C_S__5d_V::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d_f::ctor_() {
    RT_FN("S__5d_f.S__5d_f");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31680 = 419.0; this->f_S_6_21_Z = rt::touint_d(_v31680); _v31680; });
    ({ rt::Value _v31681 = rt::trv(rt::VS(g::LS[9162])); this->f_S_1i = rt::slot_string(_v31681); _v31681; });
    ({ double _v31682 = 17.0; this->f_S__22__21_U = rt::toint_d(_v31682); _v31682; });
    ({ double _v31683 = 4.0; this->f_S__21_G = rt::toint_d(_v31683); _v31683; });
    ({ double _v31684 = 330.0; this->f_S__25_w = rt::toint_d(_v31684); _v31684; });
    ({ bool _v31685 = false; this->f_S__3d_z = _v31685; _v31685; });
}
rt::Value C_S__5d_f::m_S__40__22_() {
    RT_FN("S__5d_f.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9163]), C_S__26_c::sm_S_6_21_T(C_S__5d_f::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__5d_f::m_S_8_5b_() {
    RT_FN("S__5d_f.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_5_21_W__id, g::SV.C_S__3d__21_d__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__5d_f::g_S__20__21_3() {
    RT_FN("S__5d_f.S__20__21_3_get");
    return ({ bool _t31691 = ({ bool _t31688 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31688 ? (bool)(({ rt::Value _o31686 = C_S_8G::sm_S__21__21_H(g::SV.C_S_5_21_W__id); C_S__60_6* _p31687 = rt::as_ptr<C_S__60_6>(_o31686); _p31687 ? _p31687->f_S__3f__21_6 : rt::T(rt::dget(_o31686, NM_S__3f__21_6)); })) : _t31688; }); _t31691 ? (bool)(({ rt::Value _o31689 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3d__21_d__id); C_S__60_6* _p31690 = rt::as_ptr<C_S__60_6>(_o31689); _p31690 ? _p31690->f_S__3f__21_6 : rt::T(rt::dget(_o31689, NM_S__3f__21_6)); })) : _t31691; });
    return false;
}
double C_S__5d_f::sm_S__27__21_b() {
    RT_FN("S__5d_f.S__27__21_b");
    return (0.05 * rt::m_pow(rt::m_max2(0.0, (C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), true, C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()) - C_S__26_c::sm_S_9_5b_(true, C_S__26_c::dsm_S_9_5b__1(), C_S__26_c::dsm_S_9_5b__2()))), 0.7));
    return 0.0;
}
C_S__5d_f* C_S__5d_f::alloc_() {
    C_S__5d_f* o = rt::make<C_S__5d_f>();
    return o;
}
rt::Value C_S__5d_f::mk_(rt::Value* a, int n) {
    C_S__5d_f* o = alloc_();
    o->C_S__5d_f::ctor_();
    return rt::VO(o);
}
bool C_S__5d_f::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d_f::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d_f::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d_f::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d_f::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__5d_f::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d_f__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d_f::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d_f__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d_f::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__5d_u::ctor_() {
    RT_FN("S__5d_u.S__5d_u");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31692 = 448.0; this->f_S_6_21_Z = rt::touint_d(_v31692); _v31692; });
    ({ rt::Value _v31693 = rt::trv(rt::VS(g::LS[9164])); this->f_S_1i = rt::slot_string(_v31693); _v31693; });
    ({ double _v31694 = 19.0; this->f_S__22__21_U = rt::toint_d(_v31694); _v31694; });
    ({ double _v31695 = 0.0; this->f_S__21_G = rt::toint_d(_v31695); _v31695; });
    ({ double _v31696 = 400.0; this->f_S__25_w = rt::toint_d(_v31696); _v31696; });
    ({ bool _v31697 = false; this->f_S__3d_z = _v31697; _v31697; });
}
rt::Value C_S__5d_u::m_S__40__22_() {
    RT_FN("S__5d_u.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9165]), C_S__26_c::sm_S_8_21_Z(C_S__5d_u::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5d_u::m_S_8_5b_() {
    RT_FN("S__5d_u.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__5b_8__id, g::SV.C_S_8b__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__5d_u::g_S__20__21_3() {
    RT_FN("S__5d_u.S__20__21_3_get");
    return ({ bool _t31703 = ({ bool _t31700 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31700 ? (bool)(({ rt::Value _o31698 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5b_8__id); C_S__60_6* _p31699 = rt::as_ptr<C_S__60_6>(_o31698); _p31699 ? _p31699->f_S__3f__21_6 : rt::T(rt::dget(_o31698, NM_S__3f__21_6)); })) : _t31700; }); _t31703 ? (bool)(({ rt::Value _o31701 = C_S_8G::sm_S__21__21_H(g::SV.C_S_8b__id); C_S__60_6* _p31702 = rt::as_ptr<C_S__60_6>(_o31701); _p31702 ? _p31702->f_S__3f__21_6 : rt::T(rt::dget(_o31701, NM_S__3f__21_6)); })) : _t31703; });
    return false;
}
double C_S__5d_u::sm_S__2c__21_G() {
    RT_FN("S__5d_u.S__2c__21_G");
    return rt::m_pow(rt::m_log((1.0 + rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 40.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 40.0))))), 1.5);
    return 0.0;
}
C_S__5d_u* C_S__5d_u::alloc_() {
    C_S__5d_u* o = rt::make<C_S__5d_u>();
    return o;
}
rt::Value C_S__5d_u::mk_(rt::Value* a, int n) {
    C_S__5d_u* o = alloc_();
    o->C_S__5d_u::ctor_();
    return rt::VO(o);
}
bool C_S__5d_u::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5d_u::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5d_u::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5d_u::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5d_u::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__5d_u::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d_u__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d_u::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d_u__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d_u::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5e__21_H::ctor_() {
    RT_FN("S__5e__21_H.S__5e__21_H");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31704 = 543.0; this->f_S_6_21_Z = rt::touint_d(_v31704); _v31704; });
    ({ rt::Value _v31705 = rt::trv(rt::VS(g::LS[9166])); this->f_S_1i = rt::slot_string(_v31705); _v31705; });
    ({ double _v31706 = 23.0; this->f_S__22__21_U = rt::toint_d(_v31706); _v31706; });
    ({ double _v31707 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v31707); _v31707; });
    ({ double _v31708 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31708); _v31708; });
    ({ double _v31709 = 5.0; this->f_S__21_G = rt::toint_d(_v31709); _v31709; });
    ({ double _v31710 = 9.0; this->f_S__5e__21_C = rt::toint_d(_v31710); _v31710; });
    ({ double _v31711 = 650.0; this->f_S__25_w = rt::toint_d(_v31711); _v31711; });
    ({ bool _v31712 = false; this->f_S__3d_z = _v31712; _v31712; });
}
rt::Value C_S__5e__21_H::m_S__40__22_() {
    RT_FN("S__5e__21_H.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9167]), C_S__26_c::sm_S_8_21_Z(C_S__5e__21_H::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5e__21_H::m_S_8_5b_() {
    RT_FN("S__5e__21_H.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__40_g__id, g::SV.C_S_6B__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__5e__21_H::g_S__20__21_3() {
    RT_FN("S__5e__21_H.S__20__21_3_get");
    return ({ bool _t31719 = ({ bool _t31716 = ({ bool _t31713 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31713 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t31713; }); _t31716 ? (bool)(({ rt::Value _o31714 = C_S_8G::sm_S__21__21_H(g::SV.C_S__40_g__id); C_S__60_6* _p31715 = rt::as_ptr<C_S__60_6>(_o31714); _p31715 ? _p31715->f_S__3f__21_6 : rt::T(rt::dget(_o31714, NM_S__3f__21_6)); })) : _t31716; }); _t31719 ? (bool)(({ rt::Value _o31717 = C_S_8G::sm_S__21__21_H(g::SV.C_S_6B__id); C_S__60_6* _p31718 = rt::as_ptr<C_S__60_6>(_o31717); _p31718 ? _p31718->f_S__3f__21_6 : rt::T(rt::dget(_o31717, NM_S__3f__21_6)); })) : _t31719; });
    return false;
}
double C_S__5e__21_H::sm_S_9L() {
    RT_FN("S__5e__21_H.S_9L");
    return (3.5 * rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.35));
    return 0.0;
}
C_S__5e__21_H* C_S__5e__21_H::alloc_() {
    C_S__5e__21_H* o = rt::make<C_S__5e__21_H>();
    return o;
}
rt::Value C_S__5e__21_H::mk_(rt::Value* a, int n) {
    C_S__5e__21_H* o = alloc_();
    o->C_S__5e__21_H::ctor_();
    return rt::VO(o);
}
bool C_S__5e__21_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5e__21_H::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5e__21_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5e__21_H::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5e__21_H::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__5e__21_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__21_H__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__21_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__21_H__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__21_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__5e__22_2::ctor_() {
    RT_FN("S__5e__22_2.S__5e__22_2");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31720 = 1038.0; this->f_S_6_21_Z = rt::touint_d(_v31720); _v31720; });
    ({ rt::Value _v31721 = rt::trv(rt::VS(g::LS[9168])); this->f_S_1i = rt::slot_string(_v31721); _v31721; });
    ({ double _v31722 = 31.0; this->f_S__22__21_U = rt::toint_d(_v31722); _v31722; });
    ({ double _v31723 = 1.0; this->f_S__21_G = rt::toint_d(_v31723); _v31723; });
    ({ double _v31724 = 5375.0; this->f_S__25_w = rt::toint_d(_v31724); _v31724; });
    ({ double _v31725 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v31725); _v31725; });
}
rt::Value C_S__5e__22_2::m_S__40__22_() {
    RT_FN("S__5e__22_2.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9169]), C_S__26_c::sm_S_8_21_Z(C_S__5e__22_2::sm_S__2c_J(C_S__5e__22_2::dsm_S__2c_J_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__5e__22_2::sm_S__23__21_Y(C_S__5e__22_2::dsm_S__23__21_Y_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__5e__22_2::m_S__3e_I() {
    RT_FN("S__5e__22_2.S__3e_I");
    return ({ bool _t31728 = ({ bool _t31727 = ({ bool _t31726 = (!this->f_S__3c__21_7); _t31726 ? (bool)(this->g_S__2b__21_a()) : _t31726; }); _t31727 ? (bool)((!this->f_S__3f__21_6)) : _t31727; }); _t31728 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t31728; });
    return false;
}
bool C_S__5e__22_2::m_S__2b__60_() {
    RT_FN("S__5e__22_2.S__2b__60_");
    return ({ bool _t31731 = ({ bool _t31730 = ({ bool _t31729 = (!this->f_S__3c__21_7); _t31729 ? (bool)(this->g_S__2b__21_a()) : _t31729; }); _t31730 ? (bool)((!this->f_S__3f__21_6)) : _t31730; }); _t31731 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t31731; });
    return false;
}
bool C_S__5e__22_2::m_S_9_21__3f_() {
    RT_FN("S__5e__22_2.S_9_21__3f_");
    return ({ bool _t31733 = ({ bool _t31732 = (!this->f_S__3c__21_7); _t31732 ? (bool)(this->f_S__3f__21_6) : _t31732; }); _t31733 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t31733; });
    return false;
}
bool C_S__5e__22_2::g_S__20__21_3() {
    RT_FN("S__5e__22_2.S__20__21_3_get");
    return ({ bool _t31734 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31734 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t31734; });
    return false;
}
bool C_S__5e__22_2::g_S_9_21__25_() {
    RT_FN("S__5e__22_2.S_9_21__25__get");
    return ({ bool _t31735 = (!this->m_S_9_21_F()); _t31735 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t31735; });
    return false;
}
bool C_S__5e__22_2::dsm_S__2c_J_0() { return false; }
double C_S__5e__22_2::sm_S__2c_J(bool p0) {
    bool l_param1 = p0;
    RT_FN("S__5e__22_2.S__2c_J");
    return (7.5 * rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.5));
    return 0.0;
}
bool C_S__5e__22_2::dsm_S__23__21_Y_0() { return false; }
double C_S__5e__22_2::sm_S__23__21_Y(bool p0) {
    bool l_param1 = p0;
    RT_FN("S__5e__22_2.S__23__21_Y");
    return (1.3 * rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.3));
    return 0.0;
}
C_S__5e__22_2* C_S__5e__22_2::alloc_() {
    C_S__5e__22_2* o = rt::make<C_S__5e__22_2>();
    return o;
}
rt::Value C_S__5e__22_2::mk_(rt::Value* a, int n) {
    C_S__5e__22_2* o = alloc_();
    o->C_S__5e__22_2::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e_I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b__60_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5e__22_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5e__22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e_I: out = rt::VB(m_S__3e_I()); return true;
    case NM_S__2b__60_: out = rt::VB(m_S__2b__60_()); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5e__22_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e_I: return true;
    case NM_S__2b__60_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5e__22_2::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__5e__22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22_2__id)); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J(rt::arg<bool>(a, n, 0, C_S__5e__22_2::dsm_S__2c_J_0()))); return true;
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y(rt::arg<bool>(a, n, 0, C_S__5e__22_2::dsm_S__23__21_Y_0()))); return true;
    default: return false;
    }
}
void C_S__5e__22_4::ctor_() {
    RT_FN("S__5e__22_4.S__5e__22_4");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31736 = 1041.0; this->f_S_6_21_Z = rt::touint_d(_v31736); _v31736; });
    ({ rt::Value _v31737 = rt::trv(rt::VS(g::LS[9170])); this->f_S_1i = rt::slot_string(_v31737); _v31737; });
    ({ double _v31738 = 32.0; this->f_S__22__21_U = rt::toint_d(_v31738); _v31738; });
    ({ double _v31739 = 2.0; this->f_S__21_G = rt::toint_d(_v31739); _v31739; });
    ({ double _v31740 = 5625.0; this->f_S__25_w = rt::toint_d(_v31740); _v31740; });
}
rt::Value C_S__5e__22_4::m_S__40__22_() {
    RT_FN("S__5e__22_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9171]), C_S__26_c::sm_S_8_21_Z(C_S__5e__22_4::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5e__22_4::m_S_8_5b_() {
    RT_FN("S__5e__22_4.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__3e__21_y(true, false, false, false, true), 1800.0, rt::trv(rt::VS(g::LS[9172])), false, true));
    return rt::NUL;
}
bool C_S__5e__22_4::g_S__20__21_3() {
    RT_FN("S__5e__22_4.S__20__21_3_get");
    return ({ bool _t31742 = ({ bool _t31741 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31741 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t31741; }); _t31742 ? (bool)((C_S__26_c::sm_S__3e__21_y(true, false, false, false, true) >= 1800.0)) : _t31742; });
    return false;
}
double C_S__5e__22_4::sm_S__2c__21_G() {
    RT_FN("S__5e__22_4.S__2c__21_G");
    return (50.0 + (0.25 * rt::m_pow(C_S__26_c::sm_S__3e__21_y(true, C_S__26_c::dsm_S__3e__21_y_1(), C_S__26_c::dsm_S__3e__21_y_2(), C_S__26_c::dsm_S__3e__21_y_3(), C_S__26_c::dsm_S__3e__21_y_4()), 0.5)));
    return 0.0;
}
C_S__5e__22_4* C_S__5e__22_4::alloc_() {
    C_S__5e__22_4* o = rt::make<C_S__5e__22_4>();
    return o;
}
rt::Value C_S__5e__22_4::mk_(rt::Value* a, int n) {
    C_S__5e__22_4* o = alloc_();
    o->C_S__5e__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5e__22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5e__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5e__22_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5e__22_4::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__5e__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22_4__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5e__22__3b_::ctor_() {
    RT_FN("S__5e__22__3b_.S__5e__22__3b_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31743 = 1077.0; this->f_S_6_21_Z = rt::touint_d(_v31743); _v31743; });
    ({ rt::Value _v31744 = rt::trv(rt::VS(g::LS[9173])); this->f_S_1i = rt::slot_string(_v31744); _v31744; });
    ({ double _v31745 = 37.0; this->f_S__22__21_U = rt::toint_d(_v31745); _v31745; });
    ({ double _v31746 = 1.0; this->f_S__21_G = rt::toint_d(_v31746); _v31746; });
    ({ double _v31747 = 11625.0; this->f_S__25_w = rt::toint_d(_v31747); _v31747; });
}
rt::Value C_S__5e__22__3b_::m_S__40__22_() {
    RT_FN("S__5e__22__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9174]), C_S__26_c::sm_S_8_21_Z(C_S__5e__22__3b_::sm_S__3b__22_K(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5e__22__3b_::m_S_8_5b_() {
    RT_FN("S__5e__22__3b_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0)), 100000.0, rt::trv(rt::VS(g::LS[9175])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__5e__22__3b_::g_S__20__21_3() {
    RT_FN("S__5e__22__3b_.S__20__21_3_get");
    return ({ bool _t31748 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31748 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::V(100000.0))) : _t31748; });
    return false;
}
double C_S__5e__22__3b_::sm_S__3b__22_K() {
    RT_FN("S__5e__22__3b_.S__3b__22_K");
    return 100.0;
    return 0.0;
}
C_S__5e__22__3b_* C_S__5e__22__3b_::alloc_() {
    C_S__5e__22__3b_* o = rt::make<C_S__5e__22__3b_>();
    return o;
}
rt::Value C_S__5e__22__3b_::mk_(rt::Value* a, int n) {
    C_S__5e__22__3b_* o = alloc_();
    o->C_S__5e__22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5e__22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5e__22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5e__22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5e__22__3b_::smeth_(int id) {
    switch (id) {
    case NM_S__3b__22_K: return true;
    default: return false;
    }
}
bool C_S__5e__22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22__3b___id)); return true;
    case NM_S__3b__22_K: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22__3b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3b__22_K: out = rt::V(sm_S__3b__22_K()); return true;
    default: return false;
    }
}
void C_S__5e__22_::ctor_() {
    RT_FN("S__5e__22_.S__5e__22_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31749 = 442.0; this->f_S_6_21_Z = rt::touint_d(_v31749); _v31749; });
    ({ rt::Value _v31750 = rt::trv(rt::VS(g::LS[9176])); this->f_S_1i = rt::slot_string(_v31750); _v31750; });
    ({ double _v31751 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v31751); _v31751; });
    ({ double _v31752 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31752); _v31752; });
    ({ double _v31753 = 14.0; this->f_S__22__21_U = rt::toint_d(_v31753); _v31753; });
    ({ double _v31754 = 3.0; this->f_S__21_G = rt::toint_d(_v31754); _v31754; });
    ({ double _v31755 = 6.0; this->f_S__5e__21_C = rt::toint_d(_v31755); _v31755; });
    ({ double _v31756 = 300.0; this->f_S__25_w = rt::toint_d(_v31756); _v31756; });
}
rt::Value C_S__5e__22_::m_S__40__22_() {
    RT_FN("S__5e__22_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9177]), C_S__26_c::sm_S_8_21_Z(C_S__5e__22_::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5e__22_::m_S_8_21_s() {
    RT_FN("S__5e__22_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9178])));
    return rt::NUL;
}
rt::Value C_S__5e__22_::m_S_8_5b_() {
    RT_FN("S__5e__22_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)), 1500.0, rt::trv(rt::VS(g::LS[8585])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__5e__22_::g_S__20__21_3() {
    RT_FN("S__5e__22_.S__20__21_3_get");
    return ({ bool _t31757 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31757 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0), rt::V(1500.0))) : _t31757; });
    return false;
}
double C_S__5e__22_::sm_S_2_21_W() {
    RT_FN("S__5e__22_.S_2_21_W");
    return (7.0 * rt::m_pow(C_S__23__21__21_::sm_S__40__21__3f_(), 0.7));
    return 0.0;
}
C_S__5e__22_* C_S__5e__22_::alloc_() {
    C_S__5e__22_* o = rt::make<C_S__5e__22_>();
    return o;
}
rt::Value C_S__5e__22_::mk_(rt::Value* a, int n) {
    C_S__5e__22_* o = alloc_();
    o->C_S__5e__22_::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5e__22_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5e__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5e__22_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5e__22_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S__5e__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22___id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S__5e_V::ctor_() {
    RT_FN("S__5e_V.S__5e_V");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31758 = 433.0; this->f_S_6_21_Z = rt::touint_d(_v31758); _v31758; });
    ({ rt::Value _v31759 = rt::trv(rt::VS(g::LS[9179])); this->f_S_1i = rt::slot_string(_v31759); _v31759; });
    ({ double _v31760 = 16.0; this->f_S__22__21_U = rt::toint_d(_v31760); _v31760; });
    ({ double _v31761 = 2.0; this->f_S__21_G = rt::toint_d(_v31761); _v31761; });
    ({ double _v31762 = 320.0; this->f_S__25_w = rt::toint_d(_v31762); _v31762; });
}
rt::Value C_S__5e_V::m_S__40__22_() {
    RT_FN("S__5e_V.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9180]), C_S__26_c::sm_S_6_21_T(C_S__5e_V::sm_S_2_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__5e_V::m_S_8_21_s() {
    RT_FN("S__5e_V.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9181])));
    return rt::NUL;
}
rt::Value C_S__5e_V::m_S_8_5b_() {
    RT_FN("S__5e_V.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(rt::toint_d((C_S__23__21__21_::sm_S_57() * 30.0)))), 12000.0, rt::trv(rt::VS(g::LS[8737])), C_S__26__21__5f_::dm_S__3f__21_N_3(), C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__5e_V::g_S__20__21_3() {
    RT_FN("S__5e_V.S__20__21_3_get");
    return ({ bool _t31763 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31763 ? (bool)(((C_S__23__21__21_::sm_S_57() * 30.0) >= 12000.0)) : _t31763; });
    return false;
}
double C_S__5e_V::sm_S_2_21__40_() {
    RT_FN("S__5e_V.S_2_21__40_");
    return (20.0 * rt::m_pow((C_S__26_c::sm_S_57(C_S__26_c::dsm_S_57_0()) * 30.0), 0.8));
    return 0.0;
}
C_S__5e_V* C_S__5e_V::alloc_() {
    C_S__5e_V* o = rt::make<C_S__5e_V>();
    return o;
}
rt::Value C_S__5e_V::mk_(rt::Value* a, int n) {
    C_S__5e_V* o = alloc_();
    o->C_S__5e_V::ctor_();
    return rt::VO(o);
}
bool C_S__5e_V::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5e_V::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5e_V::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5e_V::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5e_V::smeth_(int id) {
    switch (id) {
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S__5e_V::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e_V__id)); return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e_V::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e_V__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e_V::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S__5e__5b_::ctor_() {
    RT_FN("S__5e__5b_.S__5e__5b_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31764 = 241.0; this->f_S_6_21_Z = rt::touint_d(_v31764); _v31764; });
    ({ rt::Value _v31765 = rt::trv(rt::VS(g::LS[9182])); this->f_S_1i = rt::slot_string(_v31765); _v31765; });
    ({ double _v31766 = 9.0; this->f_S__22__21_U = rt::toint_d(_v31766); _v31766; });
    ({ double _v31767 = 4.0; this->f_S__21_G = rt::toint_d(_v31767); _v31767; });
    ({ double _v31768 = 150.0; this->f_S__25_w = rt::toint_d(_v31768); _v31768; });
    ({ bool _v31769 = false; this->f_S__3d_z = _v31769; _v31769; });
}
rt::Value C_S__5e__5b_::m_S__40__22_() {
    RT_FN("S__5e__5b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9183]), C_S__26_c::sm_S_8_21_Z(C_S__5e__5b_::sm_S__40_V(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5e__5b_::m_S_8_5b_() {
    RT_FN("S__5e__5b_.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__22_4__id, g::SV.C_S__3b__21_a__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__5e__5b_::g_S__20__21_3() {
    RT_FN("S__5e__5b_.S__20__21_3_get");
    return ({ bool _t31775 = ({ bool _t31772 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31772 ? (bool)(({ rt::Value _o31770 = C_S_8G::sm_S__21__21_H(g::SV.C_S__22_4__id); C_S__60_6* _p31771 = rt::as_ptr<C_S__60_6>(_o31770); _p31771 ? _p31771->f_S__3f__21_6 : rt::T(rt::dget(_o31770, NM_S__3f__21_6)); })) : _t31772; }); _t31775 ? (bool)(({ rt::Value _o31773 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3b__21_a__id); C_S__60_6* _p31774 = rt::as_ptr<C_S__60_6>(_o31773); _p31774 ? _p31774->f_S__3f__21_6 : rt::T(rt::dget(_o31773, NM_S__3f__21_6)); })) : _t31775; });
    return false;
}
double C_S__5e__5b_::sm_S__40_V() {
    RT_FN("S__5e__5b_.S__40_V");
    return (1.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2()))), 1.5));
    return 0.0;
}
C_S__5e__5b_* C_S__5e__5b_::alloc_() {
    C_S__5e__5b_* o = rt::make<C_S__5e__5b_>();
    return o;
}
rt::Value C_S__5e__5b_::mk_(rt::Value* a, int n) {
    C_S__5e__5b_* o = alloc_();
    o->C_S__5e__5b_::ctor_();
    return rt::VO(o);
}
bool C_S__5e__5b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5e__5b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5e__5b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5e__5b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5e__5b_::smeth_(int id) {
    switch (id) {
    case NM_S__40_V: return true;
    default: return false;
    }
}
bool C_S__5e__5b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__5b___id)); return true;
    case NM_ids: out = g::SV.C_S__5e__5b___ids; return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__5b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__5b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5e__5b___ids = v; return true;
    default: return false;
    }
}
bool C_S__5e__5b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    default: return false;
    }
}
void C_S__5e_e::ctor_() {
    RT_FN("S__5e_e.S__5e_e");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31776 = 262.0; this->f_S_6_21_Z = rt::touint_d(_v31776); _v31776; });
    ({ rt::Value _v31777 = rt::trv(rt::VS(g::LS[9185])); this->f_S_1i = rt::slot_string(_v31777); _v31777; });
    ({ double _v31778 = 8.0; this->f_S__22__21_U = rt::toint_d(_v31778); _v31778; });
    ({ double _v31779 = 1.0; this->f_S__21_G = rt::toint_d(_v31779); _v31779; });
    ({ double _v31780 = 150.0; this->f_S__25_w = rt::toint_d(_v31780); _v31780; });
    ({ bool _v31781 = false; this->f_S__3d_z = _v31781; _v31781; });
}
rt::Value C_S__5e_e::m_S__40__22_() {
    RT_FN("S__5e_e.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[502]), C_S__26_c::sm_S_6_21_T(C_S__5e_e::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__5e_e::m_S_8_5b_() {
    RT_FN("S__5e_e.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_8_21__5d___id, g::SV.C_S__26__21__23___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__5e_e::g_S__20__21_3() {
    RT_FN("S__5e_e.S__20__21_3_get");
    return ({ bool _t31787 = ({ bool _t31784 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31784 ? (bool)(({ rt::Value _o31782 = C_S_8G::sm_S__21__21_H(g::SV.C_S_8_21__5d___id); C_S__60_6* _p31783 = rt::as_ptr<C_S__60_6>(_o31782); _p31783 ? _p31783->f_S__3f__21_6 : rt::T(rt::dget(_o31782, NM_S__3f__21_6)); })) : _t31784; }); _t31787 ? (bool)(({ rt::Value _o31785 = C_S_8G::sm_S__21__21_H(g::SV.C_S__26__21__23___id); C_S__60_6* _p31786 = rt::as_ptr<C_S__60_6>(_o31785); _p31786 ? _p31786->f_S__3f__21_6 : rt::T(rt::dget(_o31785, NM_S__3f__21_6)); })) : _t31787; });
    return false;
}
double C_S__5e_e::sm_S__27__21_b() {
    RT_FN("S__5e_e.S__27__21_b");
    return (18.0 * rt::m_pow(((double)(C_S__26_c::sm_S__26__21__3c_(C_S__26_c::dsm_S__26__21__3c__0(), C_S__26_c::dsm_S__26__21__3c__1()))), 0.6));
    return 0.0;
}
C_S__5e_e* C_S__5e_e::alloc_() {
    C_S__5e_e* o = rt::make<C_S__5e_e>();
    return o;
}
rt::Value C_S__5e_e::mk_(rt::Value* a, int n) {
    C_S__5e_e* o = alloc_();
    o->C_S__5e_e::ctor_();
    return rt::VO(o);
}
bool C_S__5e_e::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__5e_e::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__5e_e::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__5e_e::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__5e_e::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__5e_e::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e_e__id)); return true;
    case NM_ids: out = g::SV.C_S__5e_e__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e_e::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e_e__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5e_e__ids = v; return true;
    default: return false;
    }
}
bool C_S__5e_e::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__60__21__24_::ctor_() {
    RT_FN("S__60__21__24_.S__60__21__24_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31788 = 289.0; this->f_S_6_21_Z = rt::touint_d(_v31788); _v31788; });
    ({ rt::Value _v31789 = rt::trv(rt::VS(g::LS[9187])); this->f_S_1i = rt::slot_string(_v31789); _v31789; });
    ({ double _v31790 = 12.0; this->f_S__22__21_U = rt::toint_d(_v31790); _v31790; });
    ({ double _v31791 = 3.0; this->f_S__21_G = rt::toint_d(_v31791); _v31791; });
    ({ double _v31792 = 250.0; this->f_S__25_w = rt::toint_d(_v31792); _v31792; });
    ({ bool _v31793 = false; this->f_S__3d_z = _v31793; _v31793; });
}
rt::Value C_S__60__21__24_::m_S__40__22_() {
    RT_FN("S__60__21__24_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9188]), C_S__26_c::sm_S_8_21_Z(C_S__60__21__24_::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__60__21__24_::m_S_8_5b_() {
    RT_FN("S__60__21__24_.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_7_3f___id, g::SV.C_S__40__21_D__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__60__21__24_::g_S__20__21_3() {
    RT_FN("S__60__21__24_.S__20__21_3_get");
    return ({ bool _t31799 = ({ bool _t31796 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31796 ? (bool)(({ rt::Value _o31794 = C_S_8G::sm_S__21__21_H(g::SV.C_S_7_3f___id); C_S__60_6* _p31795 = rt::as_ptr<C_S__60_6>(_o31794); _p31795 ? _p31795->f_S__3f__21_6 : rt::T(rt::dget(_o31794, NM_S__3f__21_6)); })) : _t31796; }); _t31799 ? (bool)(({ rt::Value _o31797 = C_S_8G::sm_S__21__21_H(g::SV.C_S__40__21_D__id); C_S__60_6* _p31798 = rt::as_ptr<C_S__60_6>(_o31797); _p31798 ? _p31798->f_S__3f__21_6 : rt::T(rt::dget(_o31797, NM_S__3f__21_6)); })) : _t31799; });
    return false;
}
double C_S__60__21__24_::sm_S_2_21_W() {
    RT_FN("S__60__21__24_.S_2_21_W");
    return (rt::m_floor((10.0 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.55))) / 10.0);
    return 0.0;
}
C_S__60__21__24_* C_S__60__21__24_::alloc_() {
    C_S__60__21__24_* o = rt::make<C_S__60__21__24_>();
    return o;
}
rt::Value C_S__60__21__24_::mk_(rt::Value* a, int n) {
    C_S__60__21__24_* o = alloc_();
    o->C_S__60__21__24_::ctor_();
    return rt::VO(o);
}
bool C_S__60__21__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__60__21__24_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__60__21__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__60__21__24_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__60__21__24_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S__60__21__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21__24___id)); return true;
    case NM_ids: out = g::SV.C_S__60__21__24___ids; return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__21__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21__24___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__60__21__24___ids = v; return true;
    default: return false;
    }
}
bool C_S__60__21__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S__60__21__3e_::ctor_() {
    RT_FN("S__60__21__3e_.S__60__21__3e_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31800 = 248.0; this->f_S_6_21_Z = rt::touint_d(_v31800); _v31800; });
    ({ rt::Value _v31801 = rt::trv(rt::VS(g::LS[9190])); this->f_S_1i = rt::slot_string(_v31801); _v31801; });
    ({ double _v31802 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v31802); _v31802; });
    ({ double _v31803 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31803); _v31803; });
    ({ double _v31804 = 1.0; this->f_S__22__21_U = rt::toint_d(_v31804); _v31804; });
    ({ double _v31805 = 4.0; this->f_S__21_G = rt::toint_d(_v31805); _v31805; });
    ({ double _v31806 = 3.0; this->f_S__5e__21_C = rt::toint_d(_v31806); _v31806; });
    ({ double _v31807 = 10.0; this->f_S__25_w = rt::toint_d(_v31807); _v31807; });
}
rt::Value C_S__60__21__3e_::m_S__40__22_() {
    RT_FN("S__60__21__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8401]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[8227]), C_S__26_c::sm_S_8_21_Z(90.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b_X__id, C_S__26_c::dsm_S__3e__21__26__1(), C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), rt::trv(rt::VS(g::LS[1722]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b_X__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S__60__21__3e_::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__60__21__3e_::m_S_8_21_s() {
    RT_FN("S__60__21__3e_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9191])));
    return rt::NUL;
}
bool C_S__60__21__3e_::m_S_9_21__3f_() {
    RT_FN("S__60__21__3e_.S_9_21__3f_");
    return ({ bool _t31809 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t31809 ? _t31809 : (bool)(({ bool _t31808 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t31808 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_8_5d___id))) : _t31808; })); });
    return false;
}
rt::Value C_S__60__21__3e_::m_S_8_5b_() {
    RT_FN("S__60__21__3e_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sm_S__25_Z(g::SV.C_S__5b_X__id, true), 2250.0, C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b_X__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__60__21__3e_::g_S__20__21_3() {
    RT_FN("S__60__21__3e_.S__20__21_3_get");
    return ({ bool _t31810 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31810 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__5b_X__id, true) >= 2250.0)) : _t31810; });
    return false;
}
bool C_S__60__21__3e_::g_S_9_21__25_() {
    RT_FN("S__60__21__3e_.S_9_21__25__get");
    return ({ bool _t31813 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t31813 ? _t31813 : (bool)(({ bool _t31812 = ({ bool _t31811 = (!this->m_S_9_21_F()); _t31811 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t31811; }); _t31812 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_8_5d___id)) : _t31812; })); });
    return false;
}
double C_S__60__21__3e_::sm_S__26_s() {
    RT_FN("S__60__21__3e_.S__26_s");
    return (90.0 * C_S_8G::sm_S__25_Z(g::SV.C_S__5b_X__id, C_S_8G::dsm_S__25_Z_1()));
    return 0.0;
}
C_S__60__21__3e_* C_S__60__21__3e_::alloc_() {
    C_S__60__21__3e_* o = rt::make<C_S__60__21__3e_>();
    return o;
}
rt::Value C_S__60__21__3e_::mk_(rt::Value* a, int n) {
    C_S__60__21__3e_* o = alloc_();
    o->C_S__60__21__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__60__21__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__60__21__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__60__21__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__60__21__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__60__21__3e_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__60__21__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21__3e___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__60__21__3e___S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__60__21__3e___ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__21__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21__3e___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__60__21__3e___S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__60__21__3e___ids = v; return true;
    default: return false;
    }
}
bool C_S__60__21__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__60__21_R::ctor_() {
    RT_FN("S__60__21_R.S__60__21_R");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31814 = 630.0; this->f_S_6_21_Z = rt::touint_d(_v31814); _v31814; });
    ({ rt::Value _v31815 = rt::trv(rt::VS(g::LS[9193])); this->f_S_1i = rt::slot_string(_v31815); _v31815; });
    ({ double _v31816 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v31816); _v31816; });
    ({ double _v31817 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31817); _v31817; });
    ({ double _v31818 = 26.0; this->f_S__22__21_U = rt::toint_d(_v31818); _v31818; });
    ({ double _v31819 = 0.0; this->f_S__21_G = rt::toint_d(_v31819); _v31819; });
    ({ double _v31820 = 12.0; this->f_S__5e__21_C = rt::toint_d(_v31820); _v31820; });
    ({ double _v31821 = 1450.0; this->f_S__25_w = rt::toint_d(_v31821); _v31821; });
    ({ bool _v31822 = false; this->f_S__3d_z = _v31822; _v31822; });
}
rt::Value C_S__60__21_R::m_S__40__22_() {
    RT_FN("S__60__21_R.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9194]), C_S__26_c::sm_S_6_21_T(C_S__60__21_R::sm_S__26_s(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__60__21_R::m_S_8_5b_() {
    RT_FN("S__60__21_R.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__2c_x__id, g::SV.C_S__3b__21__22___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__60__21_R::g_S__20__21_3() {
    RT_FN("S__60__21_R.S__20__21_3_get");
    return ({ bool _t31829 = ({ bool _t31826 = ({ bool _t31823 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31823 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2_21_7__id)) : _t31823; }); _t31826 ? (bool)(({ rt::Value _o31824 = C_S_8G::sm_S__21__21_H(g::SV.C_S__2c_x__id); C_S__60_6* _p31825 = rt::as_ptr<C_S__60_6>(_o31824); _p31825 ? _p31825->f_S__3f__21_6 : rt::T(rt::dget(_o31824, NM_S__3f__21_6)); })) : _t31826; }); _t31829 ? (bool)(({ rt::Value _o31827 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3b__21__22___id); C_S__60_6* _p31828 = rt::as_ptr<C_S__60_6>(_o31827); _p31828 ? _p31828->f_S__3f__21_6 : rt::T(rt::dget(_o31827, NM_S__3f__21_6)); })) : _t31829; });
    return false;
}
double C_S__60__21_R::sm_S__26_s() {
    RT_FN("S__60__21_R.S__26_s");
    return (2.5 * rt::m_pow(C_S__26_c::sm_S__22__21_z(false, C_S__26_c::dsm_S__22__21_z_1()), 0.85));
    return 0.0;
}
C_S__60__21_R* C_S__60__21_R::alloc_() {
    C_S__60__21_R* o = rt::make<C_S__60__21_R>();
    return o;
}
rt::Value C_S__60__21_R::mk_(rt::Value* a, int n) {
    C_S__60__21_R* o = alloc_();
    o->C_S__60__21_R::ctor_();
    return rt::VO(o);
}
bool C_S__60__21_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__60__21_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__60__21_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__60__21_R::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__60__21_R::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__60__21_R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21_R__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__21_R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21_R__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__21_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__60__21__5d_::ctor_() {
    RT_FN("S__60__21__5d_.S__60__21__5d_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31830 = 632.0; this->f_S_6_21_Z = rt::touint_d(_v31830); _v31830; });
    ({ rt::Value _v31831 = rt::trv(rt::VS(g::LS[9195])); this->f_S_1i = rt::slot_string(_v31831); _v31831; });
    ({ double _v31832 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v31832); _v31832; });
    ({ double _v31833 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31833); _v31833; });
    ({ double _v31834 = 27.0; this->f_S__22__21_U = rt::toint_d(_v31834); _v31834; });
    ({ double _v31835 = 5.0; this->f_S__21_G = rt::toint_d(_v31835); _v31835; });
    ({ double _v31836 = 12.0; this->f_S__5e__21_C = rt::toint_d(_v31836); _v31836; });
    ({ double _v31837 = 1400.0; this->f_S__25_w = rt::toint_d(_v31837); _v31837; });
    ({ bool _v31838 = false; this->f_S__3d_z = _v31838; _v31838; });
}
rt::Value C_S__60__21__5d_::m_S__40__22_() {
    RT_FN("S__60__21__5d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9196]), C_S__26_c::sm_S_8_21_Z(C_S__60__21__5d_::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__60__21__5d_::m_S_8_5b_() {
    RT_FN("S__60__21__5d_.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__3b__21_3__id, g::SV.C_S_7L__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__60__21__5d_::g_S__20__21_3() {
    RT_FN("S__60__21__5d_.S__20__21_3_get");
    return ({ bool _t31845 = ({ bool _t31842 = ({ bool _t31839 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31839 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2_21_7__id)) : _t31839; }); _t31842 ? (bool)(({ rt::Value _o31840 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3b__21_3__id); C_S__60_6* _p31841 = rt::as_ptr<C_S__60_6>(_o31840); _p31841 ? _p31841->f_S__3f__21_6 : rt::T(rt::dget(_o31840, NM_S__3f__21_6)); })) : _t31842; }); _t31845 ? (bool)(({ rt::Value _o31843 = C_S_8G::sm_S__21__21_H(g::SV.C_S_7L__id); C_S__60_6* _p31844 = rt::as_ptr<C_S__60_6>(_o31843); _p31844 ? _p31844->f_S__3f__21_6 : rt::T(rt::dget(_o31843, NM_S__3f__21_6)); })) : _t31845; });
    return false;
}
double C_S__60__21__5d_::sm_S__3f__21__3c_() {
    RT_FN("S__60__21__5d_.S__3f__21__3c_");
    return (25.0 + (0.5 * rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.5)));
    return 0.0;
}
C_S__60__21__5d_* C_S__60__21__5d_::alloc_() {
    C_S__60__21__5d_* o = rt::make<C_S__60__21__5d_>();
    return o;
}
rt::Value C_S__60__21__5d_::mk_(rt::Value* a, int n) {
    C_S__60__21__5d_* o = alloc_();
    o->C_S__60__21__5d_::ctor_();
    return rt::VO(o);
}
bool C_S__60__21__5d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__60__21__5d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__60__21__5d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__60__21__5d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__60__21__5d_::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__60__21__5d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21__5d___id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__21__5d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21__5d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__21__5d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__60__21_h::ctor_() {
    RT_FN("S__60__21_h.S__60__21_h");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31846 = 712.0; this->f_S_6_21_Z = rt::touint_d(_v31846); _v31846; });
    ({ rt::Value _v31847 = rt::trv(rt::VS(g::LS[4996])); this->f_S_1i = rt::slot_string(_v31847); _v31847; });
    ({ double _v31848 = 29.0; this->f_S__22__21_U = rt::toint_d(_v31848); _v31848; });
    ({ double _v31849 = 1.0; this->f_S__21_G = rt::toint_d(_v31849); _v31849; });
    ({ double _v31850 = 3100.0; this->f_S__25_w = rt::toint_d(_v31850); _v31850; });
}
rt::Value C_S__60__21_h::m_S__40__22_() {
    RT_FN("S__60__21_h.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9197]), C_S__26_c::sm_S_8_21_Z(C_S__60__21_h::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__60__21_h::m_S_8_21_s() {
    RT_FN("S__60__21_h.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9198])));
    return rt::NUL;
}
rt::Value C_S__60__21_h::m_S_8_5b_() {
    RT_FN("S__60__21_h.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 61.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 61.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 61.0))), (((g::SV.C_S__60__21_h__S_13 * 24.0) * 60.0) * 60.0), rt::trv(rt::VS(g::LS[9199])), false, true));
    return rt::NUL;
}
bool C_S__60__21_h::g_S__20__21_3() {
    RT_FN("S__60__21_h.S__20__21_3_get");
    return ({ bool _t31852 = ({ bool _t31851 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31851 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_i__id)) : _t31851; }); _t31852 ? (bool)(rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 61.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 61.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 61.0)), rt::V((((g::SV.C_S__60__21_h__S_13 * 24.0) * 60.0) * 60.0)))) : _t31852; });
    return false;
}
double C_S__60__21_h::sm_S__3f__21__3c_() {
    RT_FN("S__60__21_h.S__3f__21__3c_");
    return (1.5 * rt::m_pow(C_S__26_c::sm_S__3e__21_h(C_S__26_c::dsm_S__3e__21_h_0(), C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.35));
    return 0.0;
}
C_S__60__21_h* C_S__60__21_h::alloc_() {
    C_S__60__21_h* o = rt::make<C_S__60__21_h>();
    return o;
}
rt::Value C_S__60__21_h::mk_(rt::Value* a, int n) {
    C_S__60__21_h* o = alloc_();
    o->C_S__60__21_h::ctor_();
    return rt::VO(o);
}
bool C_S__60__21_h::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__60__21_h::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__60__21_h::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__60__21_h::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__60__21_h::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__60__21_h::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21_h__id)); return true;
    case NM_S_13: out = rt::V(g::SV.C_S__60__21_h__S_13); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__21_h::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21_h__id = rt::touint(v); return true;
    case NM_S_13: g::SV.C_S__60__21_h__S_13 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__60__21_h::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__60__22__3f_::ctor_() {
    RT_FN("S__60__22__3f_.S__60__22__3f_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31853 = 1085.0; this->f_S_6_21_Z = rt::touint_d(_v31853); _v31853; });
    ({ rt::Value _v31854 = rt::trv(rt::VS(g::LS[9200])); this->f_S_1i = rt::slot_string(_v31854); _v31854; });
    ({ double _v31855 = 37.0; this->f_S__22__21_U = rt::toint_d(_v31855); _v31855; });
    ({ double _v31856 = 3.0; this->f_S__21_G = rt::toint_d(_v31856); _v31856; });
    ({ double _v31857 = 11625.0; this->f_S__25_w = rt::toint_d(_v31857); _v31857; });
}
rt::Value C_S__60__22__3f_::m_S__40__22_() {
    RT_FN("S__60__22__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9201]), C_S__26_c::sm_S_8_21_Z(C_S__60__22__3f_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__60__22__3f_::m_S_8_5b_() {
    RT_FN("S__60__22__3f_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sg_S__22__21_0(), C_S__23__21__21_::sm_S__26_v(), rt::trv(rt::VS(g::LS[9202])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__60__22__3f_::g_S__20__21_3() {
    RT_FN("S__60__22__3f_.S__20__21_3_get");
    return ({ bool _t31858 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31858 ? (bool)((C_S_8G::sg_S__22__21_0() >= C_S__23__21__21_::sm_S__26_v())) : _t31858; });
    return false;
}
double C_S__60__22__3f_::sm_S_9L() {
    RT_FN("S__60__22__3f_.S_9L");
    return (25.0 + (0.25 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sg_S__22__21_0())), 1.5)));
    return 0.0;
}
C_S__60__22__3f_* C_S__60__22__3f_::alloc_() {
    C_S__60__22__3f_* o = rt::make<C_S__60__22__3f_>();
    return o;
}
rt::Value C_S__60__22__3f_::mk_(rt::Value* a, int n) {
    C_S__60__22__3f_* o = alloc_();
    o->C_S__60__22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__60__22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__60__22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__60__22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__60__22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__60__22__3f_::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__60__22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22__3f___id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__60__22_3::ctor_() {
    RT_FN("S__60__22_3.S__60__22_3");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31859 = 1058.0; this->f_S_6_21_Z = rt::touint_d(_v31859); _v31859; });
    ({ rt::Value _v31860 = rt::trv(rt::VS(g::LS[9203])); this->f_S_1i = rt::slot_string(_v31860); _v31860; });
    ({ double _v31861 = 33.0; this->f_S__22__21_U = rt::toint_d(_v31861); _v31861; });
    ({ double _v31862 = 5.0; this->f_S__21_G = rt::toint_d(_v31862); _v31862; });
    ({ double _v31863 = 5875.0; this->f_S__25_w = rt::toint_d(_v31863); _v31863; });
}
rt::Value C_S__60__22_3::m_S__40__22_() {
    RT_FN("S__60__22_3.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9204]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__60__22_3__S_1_21_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__60__22_3__S_6_21_c, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9205]), rt::arr_at(g::SV.C_S__2d_D__S_45, C_S__26_c::sm_S__40__22_3(true, C_S__26_c::dsm_S__40__22_3_1(), C_S__26_c::dsm_S__40__22_3_2(), C_S__26_c::dsm_S__40__22_3_3(), C_S__26_c::dsm_S__40__22_3_4())), C_S__26_c::sm_S_8_21_Z(C_S__60__22_3::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
rt::Value C_S__60__22_3::m_S_8_5b_() {
    RT_FN("S__60__22_3.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()), 1e+20, rt::trv(rt::VS(g::LS[627])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__60__22_3::g_S__20__21_3() {
    RT_FN("S__60__22_3.S__20__21_3_get");
    return ({ bool _t31865 = ({ bool _t31864 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31864 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t31864; }); _t31865 ? (bool)((C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()) >= 1e+20)) : _t31865; });
    return false;
}
double C_S__60__22_3::sm_S__23__21_Y() {
    RT_FN("S__60__22_3.S__23__21_Y");
    return 500.0;
    return 0.0;
}
C_S__60__22_3* C_S__60__22_3::alloc_() {
    C_S__60__22_3* o = rt::make<C_S__60__22_3>();
    return o;
}
rt::Value C_S__60__22_3::mk_(rt::Value* a, int n) {
    C_S__60__22_3* o = alloc_();
    o->C_S__60__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__60__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__60__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__60__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__60__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__60__22_3::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__60__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22_3__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__60__22_3__S_1_21_S); return true;
    case NM_S_6_21_c: out = rt::V(g::SV.C_S__60__22_3__S_6_21_c); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22_3__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__60__22_3__S_1_21_S = rt::tonum(v); return true;
    case NM_S_6_21_c: g::SV.C_S__60__22_3__S_6_21_c = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__60__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__60_K::ctor_() {
    RT_FN("S__60_K.S__60_K");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31866 = 321.0; this->f_S_6_21_Z = rt::touint_d(_v31866); _v31866; });
    ({ rt::Value _v31867 = rt::trv(rt::VS(g::LS[9206])); this->f_S_1i = rt::slot_string(_v31867); _v31867; });
    ({ double _v31868 = 12.0; this->f_S__22__21_U = rt::toint_d(_v31868); _v31868; });
    ({ double _v31869 = 5.0; this->f_S__21_G = rt::toint_d(_v31869); _v31869; });
    ({ double _v31870 = 250.0; this->f_S__25_w = rt::toint_d(_v31870); _v31870; });
    ({ bool _v31871 = false; this->f_S__3d_z = _v31871; _v31871; });
}
rt::Value C_S__60_K::m_S__40__22_() {
    RT_FN("S__60_K.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9207]), C_S__26_c::sm_S_8_21_Z(C_S__60_K::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__60_K::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__60_K::m_S_8_5b_() {
    RT_FN("S__60_K.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_6V__id, g::SV.C_S__60_e__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__60_K::g_S__20__21_3() {
    RT_FN("S__60_K.S__20__21_3_get");
    return ({ bool _t31877 = ({ bool _t31874 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31874 ? (bool)(({ rt::Value _o31872 = C_S_8G::sm_S__21__21_H(g::SV.C_S_6V__id); C_S__60_6* _p31873 = rt::as_ptr<C_S__60_6>(_o31872); _p31873 ? _p31873->f_S__3f__21_6 : rt::T(rt::dget(_o31872, NM_S__3f__21_6)); })) : _t31874; }); _t31877 ? (bool)(({ rt::Value _o31875 = C_S_8G::sm_S__21__21_H(g::SV.C_S__60_e__id); C_S__60_6* _p31876 = rt::as_ptr<C_S__60_6>(_o31875); _p31876 ? _p31876->f_S__3f__21_6 : rt::T(rt::dget(_o31875, NM_S__3f__21_6)); })) : _t31877; });
    return false;
}
double C_S__60_K::sm_S_5_21_B() {
    RT_FN("S__60_K.S_5_21_B");
    return rt::m_pow(C_S__23__21__21_::sm_S__2c__21_E(), 1.05);
    return 0.0;
}
double C_S__60_K::sm_S_9L() {
    RT_FN("S__60_K.S_9L");
    return 10.0;
    return 0.0;
}
C_S__60_K* C_S__60_K::alloc_() {
    C_S__60_K* o = rt::make<C_S__60_K>();
    return o;
}
rt::Value C_S__60_K::mk_(rt::Value* a, int n) {
    C_S__60_K* o = alloc_();
    o->C_S__60_K::ctor_();
    return rt::VO(o);
}
bool C_S__60_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__60_K::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__60_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__60_K::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__60_K::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__60_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60_K__id)); return true;
    case NM_ids: out = g::SV.C_S__60_K__ids; return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60_K__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__60_K__ids = v; return true;
    default: return false;
    }
}
bool C_S__60_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__60_e::ctor_() {
    RT_FN("S__60_e.S__60_e");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v31878 = 311.0; this->f_S_6_21_Z = rt::touint_d(_v31878); _v31878; });
    ({ rt::Value _v31879 = rt::trv(rt::VS(g::LS[9209])); this->f_S_1i = rt::slot_string(_v31879); _v31879; });
    ({ double _v31880 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v31880); _v31880; });
    ({ double _v31881 = 8.0; this->f_S__22__21_U = rt::toint_d(_v31881); _v31881; });
    ({ double _v31882 = 5.0; this->f_S__21_G = rt::toint_d(_v31882); _v31882; });
    ({ double _v31883 = 205.0; this->f_S__25_w = rt::toint_d(_v31883); _v31883; });
    ({ bool _v31884 = false; this->f_S__3d_z = _v31884; _v31884; });
}
rt::Value C_S__60_e::m_S__40__22_() {
    RT_FN("S__60_e.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9210]), C_S__26_c::sm_S_8_21_Z(C_S__60_e::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__60_e::sm_S__3e__21_n(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__60_e::m_S_8_21_s() {
    RT_FN("S__60_e.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9211])));
    return rt::NUL;
}
rt::Value C_S__60_e::m_S_8_5b_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__60_e.S_8_5b_");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S__60_T__id));
    return rt::slot_string(rt::add(this->m_S__3f__21_N((({ rt::Value _o31885 = l_A__loc1_; C_S_84* _p31886 = rt::as_ptr<C_S_84>(_o31885); _p31886 ? _p31886->g_S_2_2d_() : rt::tonum(rt::dget(_o31885, NM_S_2_2d_)); }) + ({ rt::Value _o31887 = l_A__loc1_; C_S_84* _p31888 = rt::as_ptr<C_S_84>(_o31887); _p31888 ? _p31888->g_S_5_21_L() : rt::tonum(rt::dget(_o31887, NM_S_5_21_L)); })), 200.0, rt::trv(rt::VS(g::LS[8393]), ({ rt::Value _o31889 = l_A__loc1_; C_S_84* _p31890 = rt::as_ptr<C_S_84>(_o31889); _p31890 ? _p31890->f_S_1i : rt::dget(_o31889, NM_S_1i); })), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S_1_21_W__id, g::SV.C_S__40__2d___id, false)));
    return rt::NUL;
}
bool C_S__60_e::m_S__3e_I() {
    RT_FN("S__60_e.S__3e_I");
    return ({ bool _t31893 = ({ bool _t31892 = ({ bool _t31891 = (!this->f_S__3c__21_7); _t31891 ? (bool)(this->g_S__2b__21_a()) : _t31891; }); _t31892 ? (bool)((!this->f_S__3f__21_6)) : _t31892; }); _t31893 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t31893; });
    return false;
}
bool C_S__60_e::m_S__2b__60_() {
    RT_FN("S__60_e.S__2b__60_");
    return ({ bool _t31896 = ({ bool _t31895 = ({ bool _t31894 = (!this->f_S__3c__21_7); _t31894 ? (bool)(this->g_S__2b__21_a()) : _t31894; }); _t31895 ? (bool)((!this->f_S__3f__21_6)) : _t31895; }); _t31896 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t31896; });
    return false;
}
bool C_S__60_e::m_S_9_21__3f_() {
    RT_FN("S__60_e.S_9_21__3f_");
    return ({ bool _t31898 = ({ bool _t31897 = (!this->f_S__3c__21_7); _t31897 ? (bool)(this->f_S__3f__21_6) : _t31897; }); _t31898 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t31898; });
    return false;
}
bool C_S__60_e::g_S__20__21_3() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__60_e.S__20__21_3_get");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S__60_T__id));
    return ({ bool _t31909 = ({ bool _t31904 = ({ bool _t31901 = this->C_S__26__21__5f_::g_S__20__21_3(); _t31901 ? (bool)(({ rt::Value _o31899 = C_S_8G::sm_S__21__21_H(g::SV.C_S_1_21_W__id); C_S__60_6* _p31900 = rt::as_ptr<C_S__60_6>(_o31899); _p31900 ? _p31900->f_S__3f__21_6 : rt::T(rt::dget(_o31899, NM_S__3f__21_6)); })) : _t31901; }); _t31904 ? (bool)(({ rt::Value _o31902 = C_S_8G::sm_S__21__21_H(g::SV.C_S__40__2d___id); C_S__60_6* _p31903 = rt::as_ptr<C_S__60_6>(_o31902); _p31903 ? _p31903->f_S__3f__21_6 : rt::T(rt::dget(_o31902, NM_S__3f__21_6)); })) : _t31904; }); _t31909 ? (bool)(((({ rt::Value _o31905 = l_A__loc1_; C_S_84* _p31906 = rt::as_ptr<C_S_84>(_o31905); _p31906 ? _p31906->g_S_2_2d_() : rt::tonum(rt::dget(_o31905, NM_S_2_2d_)); }) + ({ rt::Value _o31907 = l_A__loc1_; C_S_84* _p31908 = rt::as_ptr<C_S_84>(_o31907); _p31908 ? _p31908->g_S_5_21_L() : rt::tonum(rt::dget(_o31907, NM_S_5_21_L)); })) >= 200.0)) : _t31909; });
    return false;
}
bool C_S__60_e::g_S_9_21__25_() {
    RT_FN("S__60_e.S_9_21__25__get");
    return ({ bool _t31910 = (!this->m_S_9_21_F()); _t31910 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t31910; });
    return false;
}
double C_S__60_e::sm_S_2_21_W() {
    RT_FN("S__60_e.S_2_21_W");
    return (3.0 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.45));
    return 0.0;
}
double C_S__60_e::sm_S__3e__21_n() {
    RT_FN("S__60_e.S__3e__21_n");
    return 300.0;
    return 0.0;
}
C_S__60_e* C_S__60_e::alloc_() {
    C_S__60_e* o = rt::make<C_S__60_e>();
    return o;
}
rt::Value C_S__60_e::mk_(rt::Value* a, int n) {
    C_S__60_e* o = alloc_();
    o->C_S__60_e::ctor_();
    return rt::VO(o);
}
bool C_S__60_e::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e_I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b__60_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__60_e::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__60_e::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__3e_I: out = rt::VB(m_S__3e_I()); return true;
    case NM_S__2b__60_: out = rt::VB(m_S__2b__60_()); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__60_e::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__3e_I: return true;
    case NM_S__2b__60_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__60_e::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    case NM_S__3e__21_n: return true;
    default: return false;
    }
}
bool C_S__60_e::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60_e__id)); return true;
    case NM_ids: out = g::SV.C_S__60_e__ids; return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3e__21_n: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60_e::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60_e__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__60_e__ids = v; return true;
    default: return false;
    }
}
bool C_S__60_e::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    case NM_S__3e__21_n: out = rt::V(sm_S__3e__21_n()); return true;
    default: return false;
    }
}
void C_S__20__22__3c_::ctor_() {
    RT_FN("S__20__22__3c_.S__20__22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v31911 = 911.0; this->f_S_6_21_Z = rt::touint_d(_v31911); _v31911; });
    ({ rt::Value _v31912 = rt::trv(rt::VS(g::LS[9213])); this->f_S_1i = rt::slot_string(_v31912); _v31912; });
    ({ rt::Value _v31913 = rt::VS(g::LS[9214]); this->f_S__5e__21__23_ = rt::slot_string(_v31913); _v31913; });
    ({ double _v31914 = 1e+155; this->f_S__23__21_m = _v31914; _v31914; });
    ({ double _v31915 = 6.0; this->f_S_9_21_m = rt::toint_d(_v31915); _v31915; });
    ({ double _v31916 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31916); _v31916; });
    ({ double _v31917 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v31917); _v31917; });
    ({ bool _v31918 = true; this->f_S__3c__60_ = _v31918; _v31918; });
    ({ double _v31919 = 2.0; this->f_S__21__22_E = rt::touint_d(_v31919); _v31919; });
}
rt::Value C_S__20__22__3c_::m_S__40__22_() {
    RT_FN("S__20__22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3446]), C_S__26_c::sm_S_6_21_T(C_S__20__22__3c_::sm_S__27__21_b(), 3.0, true)));
    return rt::NUL;
}
bool C_S__20__22__3c_::g_S__2d_6() {
    RT_FN("S__20__22__3c_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 1.0);
    return false;
}
double C_S__20__22__3c_::sm_S__27__21_b() {
    RT_FN("S__20__22__3c_.S__27__21_b");
    return (0.25 * rt::m_pow(rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 12.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 12.0))), 0.85));
    return 0.0;
}
C_S__20__22__3c_* C_S__20__22__3c_::alloc_() {
    C_S__20__22__3c_* o = rt::make<C_S__20__22__3c_>();
    return o;
}
rt::Value C_S__20__22__3c_::mk_(rt::Value* a, int n) {
    C_S__20__22__3c_* o = alloc_();
    o->C_S__20__22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__20__22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__20__22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22__3c___id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__20__22_B::ctor_() {
    RT_FN("S__20__22_B.S__20__22_B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v31920 = 917.0; this->f_S_6_21_Z = rt::touint_d(_v31920); _v31920; });
    ({ rt::Value _v31921 = rt::trv(rt::VS(g::LS[9216])); this->f_S_1i = rt::slot_string(_v31921); _v31921; });
    ({ rt::Value _v31922 = rt::VS(g::LS[9217]); this->f_S__5e__21__23_ = rt::slot_string(_v31922); _v31922; });
    ({ double _v31923 = 1e+187; this->f_S__23__21_m = _v31923; _v31923; });
    ({ double _v31924 = 6.0; this->f_S_9_21_m = rt::toint_d(_v31924); _v31924; });
    ({ double _v31925 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31925); _v31925; });
    ({ double _v31926 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v31926); _v31926; });
    ({ bool _v31927 = true; this->f_S__21__21_n = _v31927; _v31927; });
    ({ double _v31928 = 12.0; this->f_S__21__22_E = rt::touint_d(_v31928); _v31928; });
}
rt::Value C_S__20__22_B::m_S__40__22_() {
    RT_FN("S__20__22_B.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9218]), C_S__26_c::sm_S_8_21_Z(C_S__20__22_B::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9219]), C_S__26_c::sm_S_8_21_Z(C_S__20__22_B::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
bool C_S__20__22_B::g_S__2d_6() {
    RT_FN("S__20__22_B.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 4.0);
    return false;
}
double C_S__20__22_B::sm_S_9L() {
    RT_FN("S__20__22_B.S_9L");
    return (1.25 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__3e__21_h(C_S__26_c::dsm_S__3e__21_h_0(), C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()))), 1.25));
    return 0.0;
}
double C_S__20__22_B::sm_S__2c__21_G() {
    RT_FN("S__20__22_B.S__2c__21_G");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S__3e__21_h(C_S__26_c::dsm_S__3e__21_h_0(), C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.25));
    return 0.0;
}
C_S__20__22_B* C_S__20__22_B::alloc_() {
    C_S__20__22_B* o = rt::make<C_S__20__22_B>();
    return o;
}
rt::Value C_S__20__22_B::mk_(rt::Value* a, int n) {
    C_S__20__22_B* o = alloc_();
    o->C_S__20__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__20__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__22_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__22_B::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__20__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22_B__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__23__21_y::ctor_() {
    RT_FN("S__23__21_y.S__23__21_y");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v31929 = 930.0; this->f_S_6_21_Z = rt::touint_d(_v31929); _v31929; });
    ({ rt::Value _v31930 = rt::trv(rt::VS(g::LS[9220])); this->f_S_1i = rt::slot_string(_v31930); _v31930; });
    ({ rt::Value _v31931 = rt::VS(g::LS[427]); this->f_S__5e__21__23_ = rt::slot_string(_v31931); _v31931; });
    ({ double _v31932 = 1e+147; this->f_S__23__21_m = _v31932; _v31932; });
    ({ double _v31933 = 6.0; this->f_S_9_21_m = rt::toint_d(_v31933); _v31933; });
    ({ double _v31934 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31934); _v31934; });
    ({ double _v31935 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v31935); _v31935; });
    ({ bool _v31936 = false; this->f_S_3e = _v31936; _v31936; });
}
rt::Value C_S__23__21_y::m_S__40__22_() {
    RT_FN("S__23__21_y.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9221]), C_S__26_c::sm_S_8_21_Z(3.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__23__21_y::m_S_6r() {
    RT_FN("S__23__21_y.S_6r");
    (void)(({ rt::Value _o31937 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p31938 = rt::as_ptr<C_S__20_g>(_o31937); _p31938 ? _p31938->m_S__26__2b_(rt::toint_d(955.0), rt::toint_d(0.0)) : rt::dcallv(_o31937, NM_S__26__2b_, rt::V(955.0), rt::V(0.0)); }));
    (void)(({ rt::Value _o31939 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p31940 = rt::as_ptr<C_S_8G>(_o31939); _p31940 ? _p31940->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__27__21_z__id)) : rt::dcallv(_o31939, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__27__21_z__id)); }));
    return rt::NUL;
}
bool C_S__23__21_y::g_S__2d_6() {
    RT_FN("S__23__21_y.S__2d_6_get");
    return ({ bool _t31943 = ({ bool _t31942 = ({ bool _t31941 = (!C_S_8G::sm_S__3c_P(g::SV.C_S__27__21_z__id)); _t31941 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21_y__id)) : _t31941; }); _t31942 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_21_x__id)) : _t31942; }); _t31943 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_21_y__id)) : _t31943; });
    return false;
}
bool C_S__23__21_y::g_S_9_21__25_() {
    RT_FN("S__23__21_y.S_9_21__25__get");
    return (C_S__26_c::sm_S_7i(g::SV.C_S__27__21_n__id, false, false, true) >= 10800.0);
    return false;
}
C_S__23__21_y* C_S__23__21_y::alloc_() {
    C_S__23__21_y* o = rt::make<C_S__23__21_y>();
    return o;
}
rt::Value C_S__23__21_y::mk_(rt::Value* a, int n) {
    C_S__23__21_y* o = alloc_();
    o->C_S__23__21_y::ctor_();
    return rt::VO(o);
}
bool C_S__23__21_y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__21_y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__21_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__21_y::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__21_y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21_y__id)); return true;
    case NM_S_13: out = rt::V(g::SV.C_S__23__21_y__S_13); return true;
    default: return false;
    }
}
bool C_S__23__21_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21_y__id = rt::touint(v); return true;
    case NM_S_13: g::SV.C_S__23__21_y__S_13 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__23__21_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__22__3d_::ctor_() {
    RT_FN("S__25__22__3d_.S__25__22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v31944 = 910.0; this->f_S_6_21_Z = rt::touint_d(_v31944); _v31944; });
    ({ rt::Value _v31945 = rt::trv(rt::VS(g::LS[9222])); this->f_S_1i = rt::slot_string(_v31945); _v31945; });
    ({ rt::Value _v31946 = rt::VS(g::LS[9223]); this->f_S__5e__21__23_ = rt::slot_string(_v31946); _v31946; });
    ({ double _v31947 = 1e+157; this->f_S__23__21_m = _v31947; _v31947; });
    ({ double _v31948 = 6.0; this->f_S_9_21_m = rt::toint_d(_v31948); _v31948; });
    ({ double _v31949 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31949); _v31949; });
    ({ double _v31950 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v31950); _v31950; });
    ({ bool _v31951 = true; this->f_S__3c__60_ = _v31951; _v31951; });
    ({ double _v31952 = 3.0; this->f_S__21__22_E = rt::touint_d(_v31952); _v31952; });
}
rt::Value C_S__25__22__3d_::m_S__40__22_() {
    RT_FN("S__25__22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9224]), C_S__26_c::sm_S_6_21_T(C_S__25__22__3d_::sm_S__26_s(), 3.0, true)));
    return rt::NUL;
}
bool C_S__25__22__3d_::g_S__2d_6() {
    RT_FN("S__25__22__3d_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 1.0);
    return false;
}
double C_S__25__22__3d_::sm_S__26_s() {
    RT_FN("S__25__22__3d_.S__26_s");
    return (0.7 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(14.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7));
    return 0.0;
}
C_S__25__22__3d_* C_S__25__22__3d_::alloc_() {
    C_S__25__22__3d_* o = rt::make<C_S__25__22__3d_>();
    return o;
}
rt::Value C_S__25__22__3d_::mk_(rt::Value* a, int n) {
    C_S__25__22__3d_* o = alloc_();
    o->C_S__25__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__25__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__25__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22__3d___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3c__22__21_::ctor_() {
    RT_FN("S__3c__22__21_.S__3c__22__21_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v31953 = 913.0; this->f_S_6_21_Z = rt::touint_d(_v31953); _v31953; });
    ({ rt::Value _v31954 = rt::trv(rt::VS(g::LS[9225])); this->f_S_1i = rt::slot_string(_v31954); _v31954; });
    ({ rt::Value _v31955 = rt::VS(g::LS[9226]); this->f_S__5e__21__23_ = rt::slot_string(_v31955); _v31955; });
    ({ rt::Value _v31956 = rt::VS(g::LS[9215]); this->f_S__3f__21__3d_ = rt::slot_string(_v31956); _v31956; });
    ({ rt::Value _v31957 = rt::VS(g::LS[9215]); this->f_S__40_1 = rt::slot_string(_v31957); _v31957; });
    ({ rt::Value _v31958 = rt::trv(rt::VS(g::LS[9227])); this->f_S_7_23_ = rt::slot_string(_v31958); _v31958; });
    ({ double _v31959 = 6.0; this->f_S_9_21_m = rt::toint_d(_v31959); _v31959; });
    ({ double _v31960 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31960); _v31960; });
    ({ double _v31961 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v31961); _v31961; });
    ({ bool _v31962 = true; this->f_S__3c__60_ = _v31962; _v31962; });
}
int32_t C_S__3c__22__21_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__3c__22__21_::dm_S_75_2() { return false; }
rt::Value C_S__3c__22__21_::dm_S_75_3() { return rt::NUL; }
double C_S__3c__22__21_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__3c__22__21_.S_75");
    if (((((double)(l_param1)) == 1.0) || (((double)(l_param1)) == 3.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+57 : 1e+30);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__3c__22__21_::g_S__2d_6() {
    RT_FN("S__3c__22__21_.S__2d_6_get");
    return ({ bool _t31963 = this->C_S__60_6::g_S__2d_6(); _t31963 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == 15.0)) : _t31963; });
    return false;
}
C_S__3c__22__21_* C_S__3c__22__21_::alloc_() {
    C_S__3c__22__21_* o = rt::make<C_S__3c__22__21_>();
    return o;
}
rt::Value C_S__3c__22__21_::mk_(rt::Value* a, int n) {
    C_S__3c__22__21_* o = alloc_();
    o->C_S__3c__22__21_::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22__21_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__22__21_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__22__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__3c__22__21_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__3c__22__21_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__3c__22__21_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__22__21_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__22__21_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__22__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22__21___id)); return true;
    default: return false;
    }
}
bool C_S__3c__22__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22__21___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__22__21_::ctor_() {
    RT_FN("S__26__22__21_.S__26__22__21_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v31964 = 915.0; this->f_S_6_21_Z = rt::touint_d(_v31964); _v31964; });
    ({ rt::Value _v31965 = rt::trv(rt::VS(g::LS[9228])); this->f_S_1i = rt::slot_string(_v31965); _v31965; });
    ({ rt::Value _v31966 = rt::VS(g::LS[9229]); this->f_S__5e__21__23_ = rt::slot_string(_v31966); _v31966; });
    ({ rt::Value _v31967 = rt::VS(g::LS[9215]); this->f_S__3f__21__3d_ = rt::slot_string(_v31967); _v31967; });
    ({ rt::Value _v31968 = rt::VS(g::LS[9215]); this->f_S__40_1 = rt::slot_string(_v31968); _v31968; });
    ({ double _v31969 = 6.0; this->f_S_9_21_m = rt::toint_d(_v31969); _v31969; });
    ({ double _v31970 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31970); _v31970; });
    ({ double _v31971 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v31971); _v31971; });
    ({ bool _v31972 = true; this->f_S__21__21_n = _v31972; _v31972; });
}
int32_t C_S__26__22__21_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__26__22__21_::dm_S_75_2() { return false; }
rt::Value C_S__26__22__21_::dm_S_75_3() { return rt::NUL; }
double C_S__26__22__21_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__26__22__21_.S_75");
    if (((((double)(l_param1)) == 1.0) || (((double)(l_param1)) == 3.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+69 : 1e+39);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__26__22__21_::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__26__22__21_.S__40__22_");
    (l_A__loc1_ = rt::slot_string(((((double)(g::SV.C_S_8G__S__2d__21_x)) == 15.0) ? rt::add(rt::trv(rt::VS(g::LS[9227])), rt::VS(g::LS[8])) : rt::VS(g::LS[113]))));
    return rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[9230]))));
    return rt::NUL;
}
bool C_S__26__22__21_::g_S__2d_6() {
    RT_FN("S__26__22__21_.S__2d_6_get");
    return ({ bool _t31975 = ({ bool _t31974 = ({ bool _t31973 = this->C_S__60_6::g_S__2d_6(); _t31973 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == 15.0)) : _t31973; }); _t31974 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 130.0)) : _t31974; }); _t31975 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__5d__22__24___id)) : _t31975; });
    return false;
}
bool C_S__26__22__21_::g_S__22_h() {
    RT_FN("S__26__22__21_.S__22_h_get");
    return (((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)));
    return false;
}
C_S__26__22__21_* C_S__26__22__21_::alloc_() {
    C_S__26__22__21_* o = rt::make<C_S__26__22__21_>();
    return o;
}
rt::Value C_S__26__22__21_::mk_(rt::Value* a, int n) {
    C_S__26__22__21_* o = alloc_();
    o->C_S__26__22__21_::ctor_();
    return rt::VO(o);
}
bool C_S__26__22__21_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__22_h: out = rt::VB(g_S__22_h()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__22__21_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__22_h: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__22__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__26__22__21_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__26__22__21_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__26__22__21_::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__22_h: { rt::Value f = rt::VB(g_S__22_h()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__22__21_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__22_h: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__22__21_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__22__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22__21___id)); return true;
    default: return false;
    }
}
bool C_S__26__22__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22__21___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__22_D::ctor_() {
    RT_FN("S__27__22_D.S__27__22_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v31976 = 919.0; this->f_S_6_21_Z = rt::touint_d(_v31976); _v31976; });
    ({ rt::Value _v31977 = rt::trv(rt::VS(g::LS[9231])); this->f_S_1i = rt::slot_string(_v31977); _v31977; });
    ({ rt::Value _v31978 = rt::VS(g::LS[9232]); this->f_S__5e__21__23_ = rt::slot_string(_v31978); _v31978; });
    ({ double _v31979 = 1e+177; this->f_S__23__21_m = _v31979; _v31979; });
    ({ double _v31980 = 6.0; this->f_S_9_21_m = rt::toint_d(_v31980); _v31980; });
    ({ double _v31981 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v31981); _v31981; });
    ({ double _v31982 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v31982); _v31982; });
    ({ bool _v31983 = true; this->f_S__3c__60_ = _v31983; _v31983; });
    ({ double _v31984 = 9.0; this->f_S__21__22_E = rt::touint_d(_v31984); _v31984; });
}
rt::Value C_S__27__22_D::m_S__40__22_() {
    RT_FN("S__27__22_D.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9233]), C_S__26_c::sm_S_6_21_T(C_S__27__22_D::sm_S__26_s(), 3.0, true)));
    return rt::NUL;
}
bool C_S__27__22_D::g_S__2d_6() {
    RT_FN("S__27__22_D.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[9215])))) >= 3.0);
    return false;
}
double C_S__27__22_D::sm_S__26_s() {
    RT_FN("S__27__22_D.S__26_s");
    return (0.6 * rt::m_pow(C_S__26_c::sm_S_1_21_y(true, C_S__26_c::dsm_S_1_21_y_1()), 0.4));
    return 0.0;
}
C_S__27__22_D* C_S__27__22_D::alloc_() {
    C_S__27__22_D* o = rt::make<C_S__27__22_D>();
    return o;
}
rt::Value C_S__27__22_D::mk_(rt::Value* a, int n) {
    C_S__27__22_D* o = alloc_();
    o->C_S__27__22_D::ctor_();
    return rt::VO(o);
}
bool C_S__27__22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__22_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__22_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__22_D::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__27__22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22_D__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22_D__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void static_init_18(std::vector<std::string>& errs) {
    try { (g::SV.C_S__3b__21_3__S_1_21_S = 2.0); } catch (...) { errs.push_back(std::string("S__3b__21_3.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__21_a__ids = rt::arr_lit({rt::VS(g::LS[9017])})); } catch (...) { errs.push_back(std::string("S__3b__21_a.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__25___ids = rt::arr_lit({rt::VS(g::LS[9035])})); } catch (...) { errs.push_back(std::string("S__3b__25_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b_R__S_1_21_S = 0.3); } catch (...) { errs.push_back(std::string("S__3b_R.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b_b__ids = rt::arr_lit({rt::VS(g::LS[9042])})); } catch (...) { errs.push_back(std::string("S__3b_b.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__21_U__S_1_21_S = 70.0); } catch (...) { errs.push_back(std::string("S__3d__21_U.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__21_U__ids = rt::arr_lit({rt::VS(g::LS[9046])})); } catch (...) { errs.push_back(std::string("S__3d__21_U.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__21_h__S__3f__3f_ = 9000.0); } catch (...) { errs.push_back(std::string("S__3d__21_h.S__3f__3f_: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__21_D__S_1_21_S = 30.0); } catch (...) { errs.push_back(std::string("S__40__21_D.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__21_D__ids = rt::arr_lit({rt::VS(g::LS[9071])})); } catch (...) { errs.push_back(std::string("S__40__21_D.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__40_6__ids = rt::arr_lit({rt::VS(g::LS[9082])})); } catch (...) { errs.push_back(std::string("S__40_6.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__40_S__S_1_21_S = 100000.0); } catch (...) { errs.push_back(std::string("S__40_S.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__40_U__ids = rt::arr_lit({rt::VS(g::LS[9091])})); } catch (...) { errs.push_back(std::string("S__40_U.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5b_8__ids = rt::arr_lit({rt::VS(g::LS[9121])})); } catch (...) { errs.push_back(std::string("S__5b_8.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5b__5e___ids = rt::arr_lit({rt::VS(g::LS[9124])})); } catch (...) { errs.push_back(std::string("S__5b__5e_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d__21__21___S_0I = 12000.0); } catch (...) { errs.push_back(std::string("S__5d__21__21_.S_0I: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d__21__22___ids = rt::arr_lit({rt::VS(g::LS[9136])})); } catch (...) { errs.push_back(std::string("S__5d__21__22_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d__21_2__ids = rt::arr_lit({rt::VS(g::LS[9141])})); } catch (...) { errs.push_back(std::string("S__5d__21_2.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d__40___S_1_21_S = 0.025); } catch (...) { errs.push_back(std::string("S__5d__40_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d_V__S_1_21_S = 0.02); } catch (...) { errs.push_back(std::string("S__5d_V.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d_V__ids = rt::arr_lit({rt::VS(g::LS[9161])})); } catch (...) { errs.push_back(std::string("S__5d_V.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__5b___ids = rt::arr_lit({rt::VS(g::LS[9184])})); } catch (...) { errs.push_back(std::string("S__5e__5b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e_e__ids = rt::arr_lit({rt::VS(g::LS[9186])})); } catch (...) { errs.push_back(std::string("S__5e_e.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__21__24___ids = rt::arr_lit({rt::VS(g::LS[9189])})); } catch (...) { errs.push_back(std::string("S__60__21__24_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__21__3e___S_1_21_S = 90.0); } catch (...) { errs.push_back(std::string("S__60__21__3e_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__21__3e___ids = rt::arr_lit({rt::VS(g::LS[9192])})); } catch (...) { errs.push_back(std::string("S__60__21__3e_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__21_h__S_13 = 3.0); } catch (...) { errs.push_back(std::string("S__60__21_h.S_13: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__22_3__S_1_21_S = 500.0); } catch (...) { errs.push_back(std::string("S__60__22_3.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__22_3__S_6_21_c = 1000.0); } catch (...) { errs.push_back(std::string("S__60__22_3.S_6_21_c: ") + rt::exc_text()); }
    try { (g::SV.C_S__60_K__ids = rt::arr_lit({rt::VS(g::LS[9208])})); } catch (...) { errs.push_back(std::string("S__60_K.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__60_e__ids = rt::arr_lit({rt::VS(g::LS[9212])})); } catch (...) { errs.push_back(std::string("S__60_e.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__21_y__S_13 = 3.0); } catch (...) { errs.push_back(std::string("S__23__21_y.S_13: ") + rt::exc_text()); }
}
}  // namespace g
