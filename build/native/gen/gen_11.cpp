// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S__3d_R::ctor_() {
    RT_FN("S__3d_R.S__3d_R");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v19296 = 653.0; this->f_S_6_21_Z = rt::touint_d(_v19296); _v19296; });
    ({ rt::Value _v19297 = rt::trv(rt::VS(g::LS[5747])); this->f_S_1i = rt::slot_string(_v19297); _v19297; });
    ({ rt::Value _v19298 = rt::VS(g::LS[5748]); this->f_S__5e__21__23_ = rt::slot_string(_v19298); _v19298; });
    ({ rt::Value _v19299 = rt::trv(rt::VS(g::LS[5749])); this->f_S_7_23_ = rt::slot_string(_v19299); _v19299; });
    ({ double _v19300 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v19300); _v19300; });
    ({ bool _v19301 = false; this->f_S_3e = _v19301; _v19301; });
}
rt::Value C_S__3d_R::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__3d_R.S_6r");
    ({ bool _v19302 = false; this->f_S__3c__21_7 = _v19302; _v19302; });
    (l_A__loc2_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)) - 1.0));
    ({ rt::Value _v19303 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(13.0), _v19303); });
    return rt::NUL;
}
bool C_S__3d_R::g_S__2d_6() {
    RT_FN("S__3d_R.S__2d_6_get");
    return ({ bool _t19306 = ({ bool _t19305 = (({ bool _t19304 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t19304 ? _t19304 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 230.0)); })); _t19305 ? (bool)((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) : _t19305; }); _t19306 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 60.0)) : _t19306; });
    return false;
}
bool C_S__3d_R::g_S__26_8() {
    RT_FN("S__3d_R.S__26_8_get");
    return false;
    return false;
}
C_S__3d_R* C_S__3d_R::alloc_() {
    C_S__3d_R* o = rt::make<C_S__3d_R>();
    return o;
}
rt::Value C_S__3d_R::mk_(rt::Value* a, int n) {
    C_S__3d_R* o = alloc_();
    o->C_S__3d_R::ctor_();
    return rt::VO(o);
}
bool C_S__3d_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3d_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3d_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3d_R::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3d_R::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d_R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d_R__id)); return true;
    default: return false;
    }
}
bool C_S__3d_R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d_R__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__21__3b_::ctor_() {
    RT_FN("S__40__21__3b_.S__40__21__3b_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19307 = 685.0; this->f_S_6_21_Z = rt::touint_d(_v19307); _v19307; });
    ({ rt::Value _v19308 = rt::trv(rt::VS(g::LS[5750])); this->f_S_1i = rt::slot_string(_v19308); _v19308; });
    ({ rt::Value _v19309 = rt::VS(g::LS[5751]); this->f_S__5e__21__23_ = rt::slot_string(_v19309); _v19309; });
    ({ double _v19310 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19310); _v19310; });
    ({ double _v19311 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19311); _v19311; });
    ({ double _v19312 = 3.0; this->f_S_0_21_N = rt::toint_d(_v19312); _v19312; });
    ({ double _v19313 = 26.0; this->f_S__5e__21__25_ = rt::toint_d(_v19313); _v19313; });
    ({ double _v19314 = 106.0; this->f_S_3_21_r = rt::touint_d(_v19314); _v19314; });
}
rt::Value C_S__40__21__3b_::m_S_8_21_1() {
    RT_FN("S__40__21__3b_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5752]), C_S__26_c::sm_S_8_21_Z(C_S__40__21__3b_::sm_S__2b__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__40__21__3b_::sm_S__2b__21_b() {
    RT_FN("S__40__21__3b_.S__2b__21_b");
    return (5.0 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.5));
    return 0.0;
}
C_S__40__21__3b_* C_S__40__21__3b_::alloc_() {
    C_S__40__21__3b_* o = rt::make<C_S__40__21__3b_>();
    return o;
}
rt::Value C_S__40__21__3b_::mk_(rt::Value* a, int n) {
    C_S__40__21__3b_* o = alloc_();
    o->C_S__40__21__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__40__21__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__40__21__3b_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__40__21__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__40__21__3b_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__40__21__3b_::smeth_(int id) {
    switch (id) {
    case NM_S__2b__21_b: return true;
    default: return false;
    }
}
bool C_S__40__21__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21__3b___id)); return true;
    case NM_S__2b__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40__21__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21__3b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__21__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_b: out = rt::V(sm_S__2b__21_b()); return true;
    default: return false;
    }
}
void C_S__40__22_K::ctor_() {
    RT_FN("S__40__22_K.S__40__22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19315 = 1240.0; this->f_S_6_21_Z = rt::touint_d(_v19315); _v19315; });
    ({ rt::Value _v19316 = rt::trv(rt::VS(g::LS[5753])); this->f_S_1i = rt::slot_string(_v19316); _v19316; });
    ({ rt::Value _v19317 = rt::VS(g::LS[5754]); this->f_S__5e__21__23_ = rt::slot_string(_v19317); _v19317; });
    ({ double _v19318 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v19318); _v19318; });
    ({ double _v19319 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19319); _v19319; });
    ({ double _v19320 = 6.0; this->f_S_0_21_N = rt::toint_d(_v19320); _v19320; });
    ({ double _v19321 = 63.0; this->f_S__5e__21__25_ = rt::toint_d(_v19321); _v19321; });
    ({ double _v19322 = 190.0; this->f_S_3_21_r = rt::touint_d(_v19322); _v19322; });
}
rt::Value C_S__40__22_K::m_S_8_21_1() {
    RT_FN("S__40__22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5755]), C_S__26_c::sm_S_8_21_Z(C_S__40__22_K::sm_S__40_L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__40__22_K::sm_S__40_L() {
    RT_FN("S__40__22_K.S__40_L");
    return (0.1 * rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 1.1));
    return 0.0;
}
C_S__40__22_K* C_S__40__22_K::alloc_() {
    C_S__40__22_K* o = rt::make<C_S__40__22_K>();
    return o;
}
rt::Value C_S__40__22_K::mk_(rt::Value* a, int n) {
    C_S__40__22_K* o = alloc_();
    o->C_S__40__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__40__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__40__22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__40__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__40__22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__40__22_K::smeth_(int id) {
    switch (id) {
    case NM_S__40_L: return true;
    default: return false;
    }
}
bool C_S__40__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22_K__id)); return true;
    case NM_S__40_L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_L: out = rt::V(sm_S__40_L()); return true;
    default: return false;
    }
}
void C_S__5b__21__3f_::ctor_() {
    RT_FN("S__5b__21__3f_.S__5b__21__3f_");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v19323 = 662.0; this->f_S_6_21_Z = rt::touint_d(_v19323); _v19323; });
    ({ rt::Value _v19324 = rt::trv(rt::VS(g::LS[5756])); this->f_S_1i = rt::slot_string(_v19324); _v19324; });
    ({ rt::Value _v19325 = rt::VS(g::LS[5757]); this->f_S__5e__21__23_ = rt::slot_string(_v19325); _v19325; });
    ({ double _v19326 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v19326); _v19326; });
    ({ double _v19327 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19327); _v19327; });
    ({ double _v19328 = 7.0; this->f_S_0_21_N = rt::toint_d(_v19328); _v19328; });
}
rt::Value C_S__5b__21__3f_::m_S__5b__21_C() {
    RT_FN("S__5b__21__3f_.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v19329 = g::SV.C_S__40__21_T__id; this->f_S_6_21_p = _v19329; _v19329; });
    return rt::NUL;
}
int32_t C_S__5b__21__3f_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__5b__21__3f_::dm_S_75_2() { return false; }
rt::Value C_S__5b__21__3f_::dm_S_75_3() { return rt::NUL; }
double C_S__5b__21__3f_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__5b__21__3f_.S_75");
    if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) {
        return 0.0;
    }
    if (((((double)(l_param1)) == 1.0) || (((double)(l_param1)) == 5.0))) {
        return this->C_S_6P::m_S_75(rt::toint_d(7.0), C_S_6P::dm_S_75_1(), C_S_6P::dm_S_75_2(), C_S_6P::dm_S_75_3());
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__5b__21__3f_::m_S_1_21_6() {
    RT_FN("S__5b__21__3f_.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5758]), rt::dcallv(rt::V((2.0)), rt::N_toString), C_S__26_c::sm_S_8_21_Z(C_S__5b__21__3f_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__5b__21__3f_::sm_S__2c__21_G() {
    RT_FN("S__5b__21__3f_.S__2c__21_G");
    return (2.0 * C_S__26_c::sm_S__27__22__2d_(rt::toint_d(7.0), g::SV.C_S__5b__21__3f___id));
    return 0.0;
}
C_S__5b__21__3f_* C_S__5b__21__3f_::alloc_() {
    C_S__5b__21__3f_* o = rt::make<C_S__5b__21__3f_>();
    return o;
}
rt::Value C_S__5b__21__3f_::mk_(rt::Value* a, int n) {
    C_S__5b__21__3f_* o = alloc_();
    o->C_S__5b__21__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S__5b__21__3f_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S__5b__21__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__5b__21__3f_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__5b__21__3f_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__5b__21__3f_::dm_S_75_3()))); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S__5b__21__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_75: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S__5b__21__3f_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__5b__21__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21__3f___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__5b__21__3f___S_1_21_S); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__21__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21__3f___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__5b__21__3f___S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__5b__21__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5b__22_K::ctor_() {
    RT_FN("S__5b__22_K.S__5b__22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19330 = 1232.0; this->f_S_6_21_Z = rt::touint_d(_v19330); _v19330; });
    ({ rt::Value _v19331 = rt::trv(rt::VS(g::LS[5759])); this->f_S_1i = rt::slot_string(_v19331); _v19331; });
    ({ rt::Value _v19332 = rt::VS(g::LS[5760]); this->f_S__5e__21__23_ = rt::slot_string(_v19332); _v19332; });
    ({ double _v19333 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19333); _v19333; });
    ({ double _v19334 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19334); _v19334; });
    ({ double _v19335 = 10.0; this->f_S_0_21_N = rt::toint_d(_v19335); _v19335; });
    ({ double _v19336 = 73.0; this->f_S__5e__21__25_ = rt::toint_d(_v19336); _v19336; });
    ({ double _v19337 = 210.0; this->f_S_3_21_r = rt::touint_d(_v19337); _v19337; });
}
rt::Value C_S__5b__22_K::m_S_8_21_1() {
    RT_FN("S__5b__22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5761]), C_S__26_c::sm_S_8_21_Z(C_S__5b__22_K::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__5b__22_K::sm_S_6_21_Y() {
    RT_FN("S__5b__22_K.S_6_21_Y");
    return (0.4 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.8));
    return 0.0;
}
C_S__5b__22_K* C_S__5b__22_K::alloc_() {
    C_S__5b__22_K* o = rt::make<C_S__5b__22_K>();
    return o;
}
rt::Value C_S__5b__22_K::mk_(rt::Value* a, int n) {
    C_S__5b__22_K* o = alloc_();
    o->C_S__5b__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__5b__22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__5b__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__5b__22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__5b__22_K::smeth_(int id) {
    switch (id) {
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S__5b__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22_K__id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S__5d__21_T::ctor_() {
    RT_FN("S__5d__21_T.S__5d__21_T");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19338 = 663.0; this->f_S_6_21_Z = rt::touint_d(_v19338); _v19338; });
    ({ rt::Value _v19339 = rt::trv(rt::VS(g::LS[5762])); this->f_S_1i = rt::slot_string(_v19339); _v19339; });
    ({ rt::Value _v19340 = rt::VS(g::LS[5763]); this->f_S__5e__21__23_ = rt::slot_string(_v19340); _v19340; });
    ({ double _v19341 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v19341); _v19341; });
    ({ double _v19342 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19342); _v19342; });
    ({ double _v19343 = 7.0; this->f_S_0_21_N = rt::toint_d(_v19343); _v19343; });
    ({ double _v19344 = 5.0; this->f_S__5e__21__25_ = rt::toint_d(_v19344); _v19344; });
    ({ double _v19345 = 65.0; this->f_S_3_21_r = rt::touint_d(_v19345); _v19345; });
}
rt::Value C_S__5d__21_T::m_S_8_21_1() {
    RT_FN("S__5d__21_T.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5764]), C_S__26_c::sm_S_8_21_Z(C_S__5d__21_T::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__5d__21_T::sm_S__26_s() {
    RT_FN("S__5d__21_T.S__26_s");
    return (1.5 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 1.5));
    return 0.0;
}
C_S__5d__21_T* C_S__5d__21_T::alloc_() {
    C_S__5d__21_T* o = rt::make<C_S__5d__21_T>();
    return o;
}
rt::Value C_S__5d__21_T::mk_(rt::Value* a, int n) {
    C_S__5d__21_T* o = alloc_();
    o->C_S__5d__21_T::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21_T::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__5d__21_T::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__5d__21_T::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__5d__21_T::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__5d__21_T::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__5d__21_T::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21_T__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__21_T::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21_T__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__21_T::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__5d__21_d::ctor_() {
    RT_FN("S__5d__21_d.S__5d__21_d");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19346 = 673.0; this->f_S_6_21_Z = rt::touint_d(_v19346); _v19346; });
    ({ rt::Value _v19347 = rt::trv(rt::VS(g::LS[5765])); this->f_S_1i = rt::slot_string(_v19347); _v19347; });
    ({ rt::Value _v19348 = rt::VS(g::LS[5766]); this->f_S__5e__21__23_ = rt::slot_string(_v19348); _v19348; });
    ({ double _v19349 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19349); _v19349; });
    ({ double _v19350 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19350); _v19350; });
    ({ double _v19351 = 1.0; this->f_S_0_21_N = rt::toint_d(_v19351); _v19351; });
    ({ double _v19352 = 35.0; this->f_S__5e__21__25_ = rt::toint_d(_v19352); _v19352; });
    ({ double _v19353 = 124.0; this->f_S_3_21_r = rt::touint_d(_v19353); _v19353; });
}
rt::Value C_S__5d__21_d::m_S_8_21_1() {
    RT_FN("S__5d__21_d.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5767]), C_S__26_c::sm_S_8_21_Z(C_S__5d__21_d::sm_S_4_21__40_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__5d__21_d::sm_S_4_21__40_() {
    RT_FN("S__5d__21_d.S_4_21__40_");
    return rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.9);
    return 0.0;
}
C_S__5d__21_d* C_S__5d__21_d::alloc_() {
    C_S__5d__21_d* o = rt::make<C_S__5d__21_d>();
    return o;
}
rt::Value C_S__5d__21_d::mk_(rt::Value* a, int n) {
    C_S__5d__21_d* o = alloc_();
    o->C_S__5d__21_d::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21_d::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__5d__21_d::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__5d__21_d::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__5d__21_d::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__5d__21_d::smeth_(int id) {
    switch (id) {
    case NM_S_4_21__40_: return true;
    default: return false;
    }
}
bool C_S__5d__21_d::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21_d__id)); return true;
    case NM_S_4_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__21_d::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21_d__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__21_d::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_21__40_: out = rt::V(sm_S_4_21__40_()); return true;
    default: return false;
    }
}
void C_S__5d__21_p::ctor_() {
    RT_FN("S__5d__21_p.S__5d__21_p");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19354 = 796.0; this->f_S_6_21_Z = rt::touint_d(_v19354); _v19354; });
    ({ rt::Value _v19355 = rt::trv(rt::VS(g::LS[5768])); this->f_S_1i = rt::slot_string(_v19355); _v19355; });
    ({ rt::Value _v19356 = rt::VS(g::LS[5769]); this->f_S__5e__21__23_ = rt::slot_string(_v19356); _v19356; });
    ({ double _v19357 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v19357); _v19357; });
    ({ double _v19358 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19358); _v19358; });
    ({ double _v19359 = 11.0; this->f_S_0_21_N = rt::toint_d(_v19359); _v19359; });
    ({ double _v19360 = 45.0; this->f_S__5e__21__25_ = rt::toint_d(_v19360); _v19360; });
    ({ double _v19361 = 144.0; this->f_S_3_21_r = rt::touint_d(_v19361); _v19361; });
}
rt::Value C_S__5d__21_p::m_S_8_21_1() {
    RT_FN("S__5d__21_p.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5770])));
    return rt::NUL;
}
C_S__5d__21_p* C_S__5d__21_p::alloc_() {
    C_S__5d__21_p* o = rt::make<C_S__5d__21_p>();
    return o;
}
rt::Value C_S__5d__21_p::mk_(rt::Value* a, int n) {
    C_S__5d__21_p* o = alloc_();
    o->C_S__5d__21_p::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__5d__21_p::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__5d__21_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__5d__21_p::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__5d__21_p::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__21_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21_p__id)); return true;
    default: return false;
    }
}
bool C_S__5d__21_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21_p__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__21_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__22_K::ctor_() {
    RT_FN("S__5d__22_K.S__5d__22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19362 = 1239.0; this->f_S_6_21_Z = rt::touint_d(_v19362); _v19362; });
    ({ rt::Value _v19363 = rt::trv(rt::VS(g::LS[5771])); this->f_S_1i = rt::slot_string(_v19363); _v19363; });
    ({ rt::Value _v19364 = rt::VS(g::LS[5772]); this->f_S__5e__21__23_ = rt::slot_string(_v19364); _v19364; });
    ({ double _v19365 = 6.0; this->f_S_9_21_m = rt::toint_d(_v19365); _v19365; });
    ({ double _v19366 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19366); _v19366; });
    ({ double _v19367 = 14.0; this->f_S_0_21_N = rt::toint_d(_v19367); _v19367; });
    ({ double _v19368 = 73.0; this->f_S__5e__21__25_ = rt::toint_d(_v19368); _v19368; });
    ({ double _v19369 = 211.0; this->f_S_3_21_r = rt::touint_d(_v19369); _v19369; });
}
rt::Value C_S__5d__22_K::m_S_8_21_1() {
    RT_FN("S__5d__22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1944]), rt::dcallv(rt::V(C_S__5d__22_K::sm_S__2c__21_G()), rt::N_toFixed, rt::V(1.0))));
    return rt::NUL;
}
double C_S__5d__22_K::sm_S__2c__21_G() {
    RT_FN("S__5d__22_K.S__2c__21_G");
    return 0.7;
    return 0.0;
}
C_S__5d__22_K* C_S__5d__22_K::alloc_() {
    C_S__5d__22_K* o = rt::make<C_S__5d__22_K>();
    return o;
}
rt::Value C_S__5d__22_K::mk_(rt::Value* a, int n) {
    C_S__5d__22_K* o = alloc_();
    o->C_S__5d__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__5d__22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__5d__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__5d__22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__5d__22_K::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__5d__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22_K__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5d_s::ctor_() {
    RT_FN("S__5d_s.S__5d_s");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v19370 = 682.0; this->f_S_6_21_Z = rt::touint_d(_v19370); _v19370; });
    ({ rt::Value _v19371 = rt::trv(rt::VS(g::LS[5773])); this->f_S_1i = rt::slot_string(_v19371); _v19371; });
    ({ rt::Value _v19372 = rt::VS(g::LS[5774]); this->f_S__5e__21__23_ = rt::slot_string(_v19372); _v19372; });
    ({ double _v19373 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19373); _v19373; });
    ({ double _v19374 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19374); _v19374; });
    ({ double _v19375 = 3.0; this->f_S_0_21_N = rt::toint_d(_v19375); _v19375; });
}
rt::Value C_S__5d_s::m_S__5b__21_C() {
    RT_FN("S__5d_s.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v19376 = g::SV.C_S__22__5f___id; this->f_S_6_21_p = _v19376; _v19376; });
    return rt::NUL;
}
rt::Value C_S__5d_s::m_S_1_21_6() {
    RT_FN("S__5d_s.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5775]), C_S__26_c::sm_S_8_21_Z(C_S__5d_s::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__5d_s::sm_S__2c__21_G() {
    RT_FN("S__5d_s.S__2c__21_G");
    return (1.5 * rt::m_pow(C_S__26_c::sm_S__27__22__2d_(rt::toint_d(3.0), g::SV.C_S__5d_s__id), 1.5));
    return 0.0;
}
C_S__5d_s* C_S__5d_s::alloc_() {
    C_S__5d_s* o = rt::make<C_S__5d_s>();
    return o;
}
rt::Value C_S__5d_s::mk_(rt::Value* a, int n) {
    C_S__5d_s* o = alloc_();
    o->C_S__5d_s::ctor_();
    return rt::VO(o);
}
bool C_S__5d_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S__5d_s::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S__5d_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S__5d_s::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S__5d_s::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__5d_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d_s__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5e__22__24_::ctor_() {
    RT_FN("S__5e__22__24_.S__5e__22__24_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19377 = 972.0; this->f_S_6_21_Z = rt::touint_d(_v19377); _v19377; });
    ({ rt::Value _v19378 = rt::trv(rt::VS(g::LS[5776])); this->f_S_1i = rt::slot_string(_v19378); _v19378; });
    ({ rt::Value _v19379 = rt::VS(g::LS[5777]); this->f_S__5e__21__23_ = rt::slot_string(_v19379); _v19379; });
    ({ double _v19380 = 6.0; this->f_S_9_21_m = rt::toint_d(_v19380); _v19380; });
    ({ double _v19381 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19381); _v19381; });
    ({ double _v19382 = 14.0; this->f_S_0_21_N = rt::toint_d(_v19382); _v19382; });
    ({ double _v19383 = 58.0; this->f_S__5e__21__25_ = rt::toint_d(_v19383); _v19383; });
    ({ double _v19384 = 181.0; this->f_S_3_21_r = rt::touint_d(_v19384); _v19384; });
}
rt::Value C_S__5e__22__24_::m_S_8_21_1() {
    RT_FN("S__5e__22__24_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5778]), C_S__26_c::sm_S_8_21_Z(C_S__5e__22__24_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__5e__22__24_::sm_S__2c__21_G() {
    RT_FN("S__5e__22__24_.S__2c__21_G");
    return 200.0;
    return 0.0;
}
C_S__5e__22__24_* C_S__5e__22__24_::alloc_() {
    C_S__5e__22__24_* o = rt::make<C_S__5e__22__24_>();
    return o;
}
rt::Value C_S__5e__22__24_::mk_(rt::Value* a, int n) {
    C_S__5e__22__24_* o = alloc_();
    o->C_S__5e__22__24_::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__5e__22__24_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__5e__22__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__5e__22__24_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__5e__22__24_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__5e__22__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22__24___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__22__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5e__22_K::ctor_() {
    RT_FN("S__5e__22_K.S__5e__22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19385 = 1227.0; this->f_S_6_21_Z = rt::touint_d(_v19385); _v19385; });
    ({ rt::Value _v19386 = rt::trv(rt::VS(g::LS[5779])); this->f_S_1i = rt::slot_string(_v19386); _v19386; });
    ({ rt::Value _v19387 = rt::VS(g::LS[5780]); this->f_S__5e__21__23_ = rt::slot_string(_v19387); _v19387; });
    ({ double _v19388 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19388); _v19388; });
    ({ double _v19389 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19389); _v19389; });
    ({ double _v19390 = 2.0; this->f_S_0_21_N = rt::toint_d(_v19390); _v19390; });
    ({ double _v19391 = 74.0; this->f_S__5e__21__25_ = rt::toint_d(_v19391); _v19391; });
    ({ double _v19392 = 212.0; this->f_S_3_21_r = rt::touint_d(_v19392); _v19392; });
}
rt::Value C_S__5e__22_K::m_S_8_21_1() {
    RT_FN("S__5e__22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5781]), C_S__26_c::sm_S_8_21_Z(C_S__5e__22_K::sm_S__3b__22_K(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__5e__22_K::sm_S__3b__22_K() {
    RT_FN("S__5e__22_K.S__3b__22_K");
    return (1.5 * rt::m_pow(((double)(C_S__26_c::sm_S__3f__26_(C_S__26_c::dsm_S__3f__26__0()))), 0.75));
    return 0.0;
}
C_S__5e__22_K* C_S__5e__22_K::alloc_() {
    C_S__5e__22_K* o = rt::make<C_S__5e__22_K>();
    return o;
}
rt::Value C_S__5e__22_K::mk_(rt::Value* a, int n) {
    C_S__5e__22_K* o = alloc_();
    o->C_S__5e__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__5e__22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__5e__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__5e__22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__5e__22_K::smeth_(int id) {
    switch (id) {
    case NM_S__3b__22_K: return true;
    default: return false;
    }
}
bool C_S__5e__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22_K__id)); return true;
    case NM_S__3b__22_K: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3b__22_K: out = rt::V(sm_S__3b__22_K()); return true;
    default: return false;
    }
}
void C_S__5e__3e_::ctor_() {
    RT_FN("S__5e__3e_.S__5e__3e_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19393 = 665.0; this->f_S_6_21_Z = rt::touint_d(_v19393); _v19393; });
    ({ rt::Value _v19394 = rt::trv(rt::VS(g::LS[5782])); this->f_S_1i = rt::slot_string(_v19394); _v19394; });
    ({ rt::Value _v19395 = rt::VS(g::LS[5783]); this->f_S__5e__21__23_ = rt::slot_string(_v19395); _v19395; });
    ({ double _v19396 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v19396); _v19396; });
    ({ double _v19397 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19397); _v19397; });
    ({ double _v19398 = 7.0; this->f_S_0_21_N = rt::toint_d(_v19398); _v19398; });
    ({ double _v19399 = 37.0; this->f_S__5e__21__25_ = rt::toint_d(_v19399); _v19399; });
    ({ double _v19400 = 128.0; this->f_S_3_21_r = rt::touint_d(_v19400); _v19400; });
}
rt::Value C_S__5e__3e_::m_S_8_21_1() {
    RT_FN("S__5e__3e_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5784]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__5e__3e___S__3b_n, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__5e__3e_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__5e__3e_::sm_S__2c__21_G() {
    RT_FN("S__5e__3e_.S__2c__21_G");
    return (g::SV.C_S__5e__3e___S_1_21_S * rt::m_floor((C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()) / g::SV.C_S__5e__3e___S__3b_n)));
    return 0.0;
}
C_S__5e__3e_* C_S__5e__3e_::alloc_() {
    C_S__5e__3e_* o = rt::make<C_S__5e__3e_>();
    return o;
}
rt::Value C_S__5e__3e_::mk_(rt::Value* a, int n) {
    C_S__5e__3e_* o = alloc_();
    o->C_S__5e__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__5e__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__5e__3e_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__5e__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__5e__3e_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__5e__3e_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__5e__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__3e___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__5e__3e___S_1_21_S); return true;
    case NM_S__3b_n: out = rt::V(g::SV.C_S__5e__3e___S__3b_n); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__3e___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__5e__3e___S_1_21_S = rt::tonum(v); return true;
    case NM_S__3b_n: g::SV.C_S__5e__3e___S__3b_n = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__5e__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5e_M::ctor_() {
    RT_FN("S__5e_M.S__5e_M");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19401 = 659.0; this->f_S_6_21_Z = rt::touint_d(_v19401); _v19401; });
    ({ rt::Value _v19402 = rt::trv(rt::VS(g::LS[5785])); this->f_S_1i = rt::slot_string(_v19402); _v19402; });
    ({ rt::Value _v19403 = rt::VS(g::LS[5786]); this->f_S__5e__21__23_ = rt::slot_string(_v19403); _v19403; });
    ({ double _v19404 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19404); _v19404; });
    ({ double _v19405 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19405); _v19405; });
    ({ double _v19406 = 10.0; this->f_S_0_21_N = rt::toint_d(_v19406); _v19406; });
    ({ double _v19407 = 7.0; this->f_S__5e__21__25_ = rt::toint_d(_v19407); _v19407; });
    ({ double _v19408 = 67.0; this->f_S_3_21_r = rt::touint_d(_v19408); _v19408; });
}
rt::Value C_S__5e_M::m_S_8_21_1() {
    RT_FN("S__5e_M.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5787]), C_S__26_c::sm_S_8_21_Z(C_S__5e_M::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__5e_M::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__5e_M::sm_S__2c__21_G() {
    RT_FN("S__5e_M.S__2c__21_G");
    return 100.0;
    return 0.0;
}
double C_S__5e_M::sm_S__3f__21__3c_() {
    RT_FN("S__5e_M.S__3f__21__3c_");
    return (2.0 * rt::m_pow(rt::m_log((1.0 + rt::m_maxv(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 155.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 155.0), rt::arr_at(g::SV.C_S_8G__S__40_w, 155.0)))), 2.0));
    return 0.0;
}
C_S__5e_M* C_S__5e_M::alloc_() {
    C_S__5e_M* o = rt::make<C_S__5e_M>();
    return o;
}
rt::Value C_S__5e_M::mk_(rt::Value* a, int n) {
    C_S__5e_M* o = alloc_();
    o->C_S__5e_M::ctor_();
    return rt::VO(o);
}
bool C_S__5e_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__5e_M::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__5e_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__5e_M::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__5e_M::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__5e_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e_M__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__60__21_4::ctor_() {
    RT_FN("S__60__21_4.S__60__21_4");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19409 = 675.0; this->f_S_6_21_Z = rt::touint_d(_v19409); _v19409; });
    ({ rt::Value _v19410 = rt::trv(rt::VS(g::LS[5788])); this->f_S_1i = rt::slot_string(_v19410); _v19410; });
    ({ rt::Value _v19411 = rt::VS(g::LS[5789]); this->f_S__5e__21__23_ = rt::slot_string(_v19411); _v19411; });
    ({ double _v19412 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v19412); _v19412; });
    ({ double _v19413 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19413); _v19413; });
    ({ double _v19414 = 8.0; this->f_S_0_21_N = rt::toint_d(_v19414); _v19414; });
    ({ double _v19415 = 4.0; this->f_S__5e__21__25_ = rt::toint_d(_v19415); _v19415; });
    ({ double _v19416 = 64.0; this->f_S_3_21_r = rt::touint_d(_v19416); _v19416; });
}
rt::Value C_S__60__21_4::m_S_8_21_1() {
    RT_FN("S__60__21_4.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5790]), C_S__26_c::sm_S_8_21_Z(C_S__60__21_4::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__60__21_4::sm_S_2_21_W() {
    RT_FN("S__60__21_4.S_2_21_W");
    return (3.0 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.6));
    return 0.0;
}
C_S__60__21_4* C_S__60__21_4::alloc_() {
    C_S__60__21_4* o = rt::make<C_S__60__21_4>();
    return o;
}
rt::Value C_S__60__21_4::mk_(rt::Value* a, int n) {
    C_S__60__21_4* o = alloc_();
    o->C_S__60__21_4::ctor_();
    return rt::VO(o);
}
bool C_S__60__21_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__60__21_4::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__60__21_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__60__21_4::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__60__21_4::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S__60__21_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21_4__id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__21_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__21_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S__60__21_p::ctor_() {
    RT_FN("S__60__21_p.S__60__21_p");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19417 = 798.0; this->f_S_6_21_Z = rt::touint_d(_v19417); _v19417; });
    ({ rt::Value _v19418 = rt::trv(rt::VS(g::LS[5791])); this->f_S_1i = rt::slot_string(_v19418); _v19418; });
    ({ rt::Value _v19419 = rt::VS(g::LS[5792]); this->f_S__5e__21__23_ = rt::slot_string(_v19419); _v19419; });
    ({ double _v19420 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v19420); _v19420; });
    ({ double _v19421 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19421); _v19421; });
    ({ double _v19422 = 7.0; this->f_S_0_21_N = rt::toint_d(_v19422); _v19422; });
    ({ double _v19423 = 42.0; this->f_S__5e__21__25_ = rt::toint_d(_v19423); _v19423; });
    ({ double _v19424 = 138.0; this->f_S_3_21_r = rt::touint_d(_v19424); _v19424; });
}
rt::Value C_S__60__21_p::m_S_8_21_1() {
    RT_FN("S__60__21_p.S_8_21_1");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5793]), C_S__26_c::sm_S_8_21_Z(C_S__60__21_p::sm_S__40_V(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[5794]), C_S__26_c::sm_S_8_21_Z(C_S__60__21_p::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
double C_S__60__21_p::sm_S__40_V() {
    RT_FN("S__60__21_p.S__40_V");
    return (2.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), 2.0));
    return 0.0;
}
double C_S__60__21_p::sm_S__2c__21_G() {
    RT_FN("S__60__21_p.S__2c__21_G");
    return rt::m_pow(rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__21_C__id, C_S__26_c::dsm_S_1_21__3b__1()), 0.5), (1.0 + (0.01 * ((((double)(({ rt::Value _o19425 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p19426 = rt::as_ptr<C_S_84>(_o19425); _p19426 ? _p19426->g_S__60_r() : rt::touint(rt::dget(_o19425, NM_S__60_r)); }))) + 1.0)))));
    return 0.0;
}
C_S__60__21_p* C_S__60__21_p::alloc_() {
    C_S__60__21_p* o = rt::make<C_S__60__21_p>();
    return o;
}
rt::Value C_S__60__21_p::mk_(rt::Value* a, int n) {
    C_S__60__21_p* o = alloc_();
    o->C_S__60__21_p::ctor_();
    return rt::VO(o);
}
bool C_S__60__21_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__60__21_p::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__60__21_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__60__21_p::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__60__21_p::smeth_(int id) {
    switch (id) {
    case NM_S__40_V: return true;
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__60__21_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21_p__id)); return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__21_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21_p__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__21_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__60__22__24_::ctor_() {
    RT_FN("S__60__22__24_.S__60__22__24_");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v19427 = 967.0; this->f_S_6_21_Z = rt::touint_d(_v19427); _v19427; });
    ({ rt::Value _v19428 = rt::trv(rt::VS(g::LS[5795])); this->f_S_1i = rt::slot_string(_v19428); _v19428; });
    ({ rt::Value _v19429 = rt::VS(g::LS[5796]); this->f_S__5e__21__23_ = rt::slot_string(_v19429); _v19429; });
    ({ double _v19430 = 6.0; this->f_S_9_21_m = rt::toint_d(_v19430); _v19430; });
    ({ double _v19431 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19431); _v19431; });
    ({ double _v19432 = 14.0; this->f_S_0_21_N = rt::toint_d(_v19432); _v19432; });
}
rt::Value C_S__60__22__24_::m_S__5b__21_C() {
    RT_FN("S__60__22__24_.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v19433 = g::SV.C_S_0_22__24___id; this->f_S_6_21_p = _v19433; _v19433; });
    return rt::NUL;
}
int32_t C_S__60__22__24_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__60__22__24_::dm_S_75_2() { return false; }
rt::Value C_S__60__22__24_::dm_S_75_3() { return rt::NUL; }
double C_S__60__22__24_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__60__22__24_.S_75");
    if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) {
        return 0.0;
    }
    if (C_S__26_c::sm_S_4_21_(this->f_S__2d__21__5e_, l_param1)) {
        return this->C_S_6P::m_S_75(this->f_S__2d__21__5e_, C_S_6P::dm_S_75_1(), C_S_6P::dm_S_75_2(), C_S_6P::dm_S_75_3());
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__60__22__24_::m_S_1_21_6() {
    RT_FN("S__60__22__24_.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5797]), rt::dcallv(rt::V(g::SV.C_S__60__22__24___S_1_21_S), rt::N_toString), C_S__26_c::sm_S_8_21_Z(C_S__60__22__24_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__60__22__24_::sm_S__2c__21_G() {
    RT_FN("S__60__22__24_.S__2c__21_G");
    return (g::SV.C_S__60__22__24___S_1_21_S * C_S__26_c::sm_S__27__22__2d_(rt::toint_d(14.0), g::SV.C_S__60__22__24___id));
    return 0.0;
}
C_S__60__22__24_* C_S__60__22__24_::alloc_() {
    C_S__60__22__24_* o = rt::make<C_S__60__22__24_>();
    return o;
}
rt::Value C_S__60__22__24_::mk_(rt::Value* a, int n) {
    C_S__60__22__24_* o = alloc_();
    o->C_S__60__22__24_::ctor_();
    return rt::VO(o);
}
bool C_S__60__22__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S__60__22__24_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S__60__22__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__60__22__24_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__60__22__24_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__60__22__24_::dm_S_75_3()))); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S__60__22__24_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_75: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S__60__22__24_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__60__22__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22__24___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__60__22__24___S_1_21_S); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__22__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22__24___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__60__22__24___S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__60__22__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__60__22_K::ctor_() {
    RT_FN("S__60__22_K.S__60__22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19434 = 1234.0; this->f_S_6_21_Z = rt::touint_d(_v19434); _v19434; });
    ({ rt::Value _v19435 = rt::trv(rt::VS(g::LS[5798])); this->f_S_1i = rt::slot_string(_v19435); _v19435; });
    ({ rt::Value _v19436 = rt::VS(g::LS[5799]); this->f_S__5e__21__23_ = rt::slot_string(_v19436); _v19436; });
    ({ double _v19437 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19437); _v19437; });
    ({ double _v19438 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19438); _v19438; });
    ({ double _v19439 = 9.0; this->f_S_0_21_N = rt::toint_d(_v19439); _v19439; });
    ({ double _v19440 = 70.0; this->f_S__5e__21__25_ = rt::toint_d(_v19440); _v19440; });
    ({ double _v19441 = 204.0; this->f_S_3_21_r = rt::touint_d(_v19441); _v19441; });
}
rt::Value C_S__60__22_K::m_S_8_21_1() {
    RT_FN("S__60__22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5800]), C_S__26_c::sm_S_8_21_Z(C_S__60__22_K::sm_S_6_22__24_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__60__22_K::sm_S_6_22__24_() {
    RT_FN("S__60__22_K.S_6_22__24_");
    return rt::m_min2(3000.0, (0.6 * rt::m_pow(C_S__26_c::sm_S__21__21_8(), 0.6)));
    return 0.0;
}
C_S__60__22_K* C_S__60__22_K::alloc_() {
    C_S__60__22_K* o = rt::make<C_S__60__22_K>();
    return o;
}
rt::Value C_S__60__22_K::mk_(rt::Value* a, int n) {
    C_S__60__22_K* o = alloc_();
    o->C_S__60__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__60__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__60__22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__60__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__60__22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__60__22_K::smeth_(int id) {
    switch (id) {
    case NM_S_6_22__24_: return true;
    default: return false;
    }
}
bool C_S__60__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22_K__id)); return true;
    case NM_S_6_22__24_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_22__24_: out = rt::V(sm_S_6_22__24_()); return true;
    default: return false;
    }
}
void C_S__20__21_e::ctor_() {
    RT_FN("S__20__21_e.S__20__21_e");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ bool _v19442 = true; this->f_S__40__21_Z = _v19442; _v19442; });
}
rt::Value C_S__20__21_e::m_S__3e__2d_() {
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__20__21_e.S__3e__2d_");
    (l_A__loc2_ = rt::slot_string(rt::NUL));
    (l_A__loc1_ = rt::slot_string(rt::add(rt::add(this->f_S_1i, rt::VS(g::LS[181])), rt::idx_get(rt::dcallv(this->m_S__40__22_(), rt::N_split, rt::VS(g::LS[143])), rt::V(0.0)))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[1345]), rt::dcallv(rt::V(((((double)(this->f_S__22__21_U)) + 1.0))), rt::N_toString), rt::dcallv(rt::idx_get(g::SV.C_S_9_21_A__S_5_21__2b_, this->f_S__3f__21__3d_), rt::N_toString))))));
    if ((!this->f_S_4_21_K)) {
        (l_A__loc2_ = rt::slot_string(this->m_S_8_5b_()));
        if ((!rt::eq(l_A__loc2_, rt::VS(g::LS[113])))) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5801]))), l_A__loc2_))));
        }
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__20__21_e::m_S__40__22_() {
    RT_FN("S__20__21_e.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5802]), C_S__26_c::sm_S_8_21_Z(((((double)(this->f_S__22__21_U)) == 0.0) ? 1.0 : ((double)(this->f_S__22__21_U))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__20__21_e::g_S__2d_6() {
    RT_FN("S__20__21_e.S__2d_6_get");
    return (((double)(C_PlayFab::sg_season())) == ((double)(this->f_S__27__21_H)));
    return false;
}
C_S__20__21_e* C_S__20__21_e::alloc_() {
    C_S__20__21_e* o = rt::make<C_S__20__21_e>();
    return o;
}
rt::Value C_S__20__21_e::mk_(rt::Value* a, int n) {
    C_S__20__21_e* o = alloc_();
    o->C_S__20__21_e::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_e::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27__21_H: out = rt::V((double)(f_S__27__21_H)); return true;
    case NM_S__3e__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__20__21_e::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__27__21_H: f_S__27__21_H = rt::touint(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__20__21_e::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__2d_: out = m_S__3e__2d_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__21_H: { rt::Value f = rt::V((double)(f_S__27__21_H)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__20__21_e::dmeth(int id) {
    switch (id) {
    case NM_S__3e__2d_: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__27__21_H: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__20__21_e::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_e::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_e::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_e::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__20__21__3f_::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__20__21__3f_::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__20__21__3f_.S__20__21__3f_");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19443 = 224.0; this->f_S_6_21_Z = rt::touint_d(_v19443); _v19443; });
    ({ int32_t _v19444 = l_param1; this->f_S_5w = _v19444; _v19444; });
    ({ rt::Value _v19445 = l_param2; this->f_S_1i = rt::slot_string(_v19445); _v19445; });
    ({ rt::Value _v19446 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19446); _v19446; });
    ({ rt::Value _v19447 = rt::VS(g::LS[5803]); this->f_S__3f__21__3d_ = rt::slot_string(_v19447); _v19447; });
    ({ double _v19448 = 7.0; this->f_S__27__21_H = rt::touint_d(_v19448); _v19448; });
}
rt::Value C_S__20__21__3f_::m_S__21__21_G() {
    RT_FN("S__20__21__3f_.S__21__21_G");
    if ((({ bool _t19451 = ({ bool _t19450 = ({ bool _t19449 = (!this->f_S_4_21_K); _t19449 ? (bool)((((double)(C_PlayFab::sg_season())) == 7.0)) : _t19449; }); _t19450 ? (bool)((((double)(C_S__3e__21_1::sm_S__2b_A())) >= ((double)(this->f_S_5w)))) : _t19450; }); _t19451 ? (bool)((((double)(C_S_3E::sm_S__2b_A())) >= ((double)(this->f_S_5w)))) : _t19451; }) && (((double)(C_S__3c__21_2::sm_S__2b_A())) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19452 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19453 = rt::as_ptr<C_S_8G>(_o19452); _p19453 ? _p19453->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19452, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__20__21__3f_::m_S_8_5b_() {
    RT_FN("S__20__21__3f_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((rt::m_min2(((double)(this->f_S_5w)), ((double)(C_S__3e__21_1::sm_S__2b_A()))) + rt::m_min2(((double)(this->f_S_5w)), ((double)(C_S_3E::sm_S__2b_A())))) + rt::m_min2(((double)(this->f_S_5w)), ((double)(C_S__3c__21_2::sm_S__2b_A())))), (((double)(this->f_S_5w)) * 3.0), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__20__21__3f_::m_S__40__22_() {
    RT_FN("S__20__21__3f_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5804]), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S__20__21__3f_* C_S__20__21__3f_::alloc_() {
    C_S__20__21__3f_* o = rt::make<C_S__20__21__3f_>();
    return o;
}
rt::Value C_S__20__21__3f_::mk_(rt::Value* a, int n) {
    C_S__20__21__3f_* o = alloc_();
    o->C_S__20__21__3f_::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__20__21__3f_::dctor_2()));
    return rt::VO(o);
}
bool C_S__20__21__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S__20__21__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S__20__21__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S__20__21__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S__20__21__3f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__20__21_i::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__20__21_i::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__20__21_i.S__20__21_i");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19454 = 248.0; this->f_S_6_21_Z = rt::touint_d(_v19454); _v19454; });
    ({ int32_t _v19455 = l_param1; this->f_S_5w = _v19455; _v19455; });
    ({ rt::Value _v19456 = l_param2; this->f_S_1i = rt::slot_string(_v19456); _v19456; });
    ({ rt::Value _v19457 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19457); _v19457; });
    ({ rt::Value _v19458 = rt::VS(g::LS[5805]); this->f_S__3f__21__3d_ = rt::slot_string(_v19458); _v19458; });
    ({ double _v19459 = 8.0; this->f_S__27__21_H = rt::touint_d(_v19459); _v19459; });
}
rt::Value C_S__20__21_i::m_S__21__21_G() {
    RT_FN("S__20__21_i.S__21__21_G");
    if ((({ bool _t19460 = (!this->f_S_4_21_K); _t19460 ? (bool)((((double)(C_PlayFab::sg_season())) == 8.0)) : _t19460; }) && (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[5806])))) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19461 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19462 = rt::as_ptr<C_S_8G>(_o19461); _p19462 ? _p19462->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19461, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__20__21_i::m_S_8_5b_() {
    RT_FN("S__20__21_i.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[5806])))), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__20__21_i::m_S__40__22_() {
    RT_FN("S__20__21_i.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5807]), rt::VS(g::LS[5808]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S__20__21_i* C_S__20__21_i::alloc_() {
    C_S__20__21_i* o = rt::make<C_S__20__21_i>();
    return o;
}
rt::Value C_S__20__21_i::mk_(rt::Value* a, int n) {
    C_S__20__21_i* o = alloc_();
    o->C_S__20__21_i::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__20__21_i::dctor_2()));
    return rt::VO(o);
}
bool C_S__20__21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S__20__21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S__20__21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S__20__21_i::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S__20__21_i::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_i::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__21__21_k::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__21__21_k::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__21__21_k.S__21__21_k");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19463 = 255.0; this->f_S_6_21_Z = rt::touint_d(_v19463); _v19463; });
    ({ int32_t _v19464 = l_param1; this->f_S_5w = _v19464; _v19464; });
    ({ rt::Value _v19465 = l_param2; this->f_S_1i = rt::slot_string(_v19465); _v19465; });
    ({ rt::Value _v19466 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19466); _v19466; });
    ({ rt::Value _v19467 = rt::VS(g::LS[5809]); this->f_S__3f__21__3d_ = rt::slot_string(_v19467); _v19467; });
    ({ double _v19468 = 9.0; this->f_S__27__21_H = rt::touint_d(_v19468); _v19468; });
}
rt::Value C_S__21__21_k::m_S__21__21_G() {
    RT_FN("S__21__21_k.S__21__21_G");
    if ((({ bool _t19469 = (!this->f_S_4_21_K); _t19469 ? (bool)((((double)(C_PlayFab::sg_season())) == 9.0)) : _t19469; }) && (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(89.0)) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19470 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19471 = rt::as_ptr<C_S_8G>(_o19470); _p19471 ? _p19471->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19470, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__21__21_k::m_S_8_5b_() {
    RT_FN("S__21__21_k.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(89.0)), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__21__21_k::m_S__40__22_() {
    RT_FN("S__21__21_k.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5810]), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S__21__21_k* C_S__21__21_k::alloc_() {
    C_S__21__21_k* o = rt::make<C_S__21__21_k>();
    return o;
}
rt::Value C_S__21__21_k::mk_(rt::Value* a, int n) {
    C_S__21__21_k* o = alloc_();
    o->C_S__21__21_k::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__21__21_k::dctor_2()));
    return rt::VO(o);
}
bool C_S__21__21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S__21__21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S__21__21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S__21__21_k::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S__21__21_k::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_k::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__22__22_2::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__22__22_2::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__22__22_2.S__22__22_2");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19472 = 338.0; this->f_S_6_21_Z = rt::touint_d(_v19472); _v19472; });
    ({ int32_t _v19473 = l_param1; this->f_S_5w = _v19473; _v19473; });
    ({ rt::Value _v19474 = l_param2; this->f_S_1i = rt::slot_string(_v19474); _v19474; });
    ({ rt::Value _v19475 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19475); _v19475; });
    ({ rt::Value _v19476 = rt::VS(g::LS[5811]); this->f_S__3f__21__3d_ = rt::slot_string(_v19476); _v19476; });
    ({ double _v19477 = 11.0; this->f_S__27__21_H = rt::touint_d(_v19477); _v19477; });
}
rt::Value C_S__22__22_2::m_S__21__21_G() {
    RT_FN("S__22__22_2.S__21__21_G");
    if ((({ bool _t19478 = (!this->f_S_4_21_K); _t19478 ? (bool)((((double)(C_PlayFab::sg_season())) == 11.0)) : _t19478; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 28.0), rt::V((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19479 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19480 = rt::as_ptr<C_S_8G>(_o19479); _p19480 ? _p19480->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19479, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__22__22_2::m_S_8_5b_() {
    RT_FN("S__22__22_2.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 28.0)), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__22__22_2::m_S__40__22_() {
    RT_FN("S__22__22_2.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5812]), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S__22__22_2* C_S__22__22_2::alloc_() {
    C_S__22__22_2* o = rt::make<C_S__22__22_2>();
    return o;
}
rt::Value C_S__22__22_2::mk_(rt::Value* a, int n) {
    C_S__22__22_2* o = alloc_();
    o->C_S__22__22_2::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__22__22_2::dctor_2()));
    return rt::VO(o);
}
bool C_S__22__22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S__22__22_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S__22__22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S__22__22_2::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S__22__22_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__22_2::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__2c__21_i::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__2c__21_i::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__2c__21_i.S__2c__21_i");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19481 = 247.0; this->f_S_6_21_Z = rt::touint_d(_v19481); _v19481; });
    ({ int32_t _v19482 = l_param1; this->f_S_5w = _v19482; _v19482; });
    ({ rt::Value _v19483 = l_param2; this->f_S_1i = rt::slot_string(_v19483); _v19483; });
    ({ rt::Value _v19484 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19484); _v19484; });
    ({ rt::Value _v19485 = rt::VS(g::LS[5813]); this->f_S__3f__21__3d_ = rt::slot_string(_v19485); _v19485; });
    ({ double _v19486 = 8.0; this->f_S__27__21_H = rt::touint_d(_v19486); _v19486; });
}
rt::Value C_S__2c__21_i::m_S__21__21_G() {
    RT_FN("S__2c__21_i.S__21__21_G");
    if ((({ bool _t19487 = (!this->f_S_4_21_K); _t19487 ? (bool)((((double)(C_PlayFab::sg_season())) == 8.0)) : _t19487; }) && (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[5814])))) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19488 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19489 = rt::as_ptr<C_S_8G>(_o19488); _p19489 ? _p19489->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19488, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__2c__21_i::m_S_8_5b_() {
    RT_FN("S__2c__21_i.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[5814])))), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__2c__21_i::m_S__40__22_() {
    RT_FN("S__2c__21_i.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5815]), rt::VS(g::LS[5816]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S__2c__21_i* C_S__2c__21_i::alloc_() {
    C_S__2c__21_i* o = rt::make<C_S__2c__21_i>();
    return o;
}
rt::Value C_S__2c__21_i::mk_(rt::Value* a, int n) {
    C_S__2c__21_i* o = alloc_();
    o->C_S__2c__21_i::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__2c__21_i::dctor_2()));
    return rt::VO(o);
}
bool C_S__2c__21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S__2c__21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S__2c__21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S__2c__21_i::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S__2c__21_i::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__21_i::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__2d_W::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__2d_W::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__2d_W.S__2d_W");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19490 = 209.0; this->f_S_6_21_Z = rt::touint_d(_v19490); _v19490; });
    ({ int32_t _v19491 = l_param1; this->f_S_5w = _v19491; _v19491; });
    ({ rt::Value _v19492 = l_param2; this->f_S_1i = rt::slot_string(_v19492); _v19492; });
    ({ rt::Value _v19493 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19493); _v19493; });
    ({ rt::Value _v19494 = rt::VS(g::LS[5817]); this->f_S__3f__21__3d_ = rt::slot_string(_v19494); _v19494; });
    ({ double _v19495 = 6.0; this->f_S__27__21_H = rt::touint_d(_v19495); _v19495; });
}
rt::Value C_S__2d_W::m_S__21__21_G() {
    RT_FN("S__2d_W.S__21__21_G");
    if ((({ bool _t19496 = (!this->f_S_4_21_K); _t19496 ? (bool)((((double)(C_PlayFab::sg_season())) == 6.0)) : _t19496; }) && (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[5818])))) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19497 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19498 = rt::as_ptr<C_S_8G>(_o19497); _p19498 ? _p19498->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19497, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__2d_W::m_S_8_5b_() {
    RT_FN("S__2d_W.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[5818])))), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__2d_W::m_S__40__22_() {
    RT_FN("S__2d_W.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5819]), rt::VS(g::LS[5820]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S__2d_W* C_S__2d_W::alloc_() {
    C_S__2d_W* o = rt::make<C_S__2d_W>();
    return o;
}
rt::Value C_S__2d_W::mk_(rt::Value* a, int n) {
    C_S__2d_W* o = alloc_();
    o->C_S__2d_W::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__2d_W::dctor_2()));
    return rt::VO(o);
}
bool C_S__2d_W::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S__2d_W::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S__2d_W::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S__2d_W::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S__2d_W::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d_W::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d_W::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d_W::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_1_21_A::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_1_21_A::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S_1_21_A.S_1_21_A");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19499 = 168.0; this->f_S_6_21_Z = rt::touint_d(_v19499); _v19499; });
    ({ int32_t _v19500 = l_param1; this->f_S_5w = _v19500; _v19500; });
    ({ rt::Value _v19501 = l_param2; this->f_S_1i = rt::slot_string(_v19501); _v19501; });
    ({ rt::Value _v19502 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19502); _v19502; });
    ({ rt::Value _v19503 = rt::VS(g::LS[5821]); this->f_S__3f__21__3d_ = rt::slot_string(_v19503); _v19503; });
    ({ double _v19504 = 2.0; this->f_S__27__21_H = rt::touint_d(_v19504); _v19504; });
}
rt::Value C_S_1_21_A::m_S__21__21_G() {
    RT_FN("S_1_21_A.S__21__21_G");
    if ((({ bool _t19505 = (!this->f_S_4_21_K); _t19505 ? (bool)((((double)(C_PlayFab::sg_season())) == 2.0)) : _t19505; }) && (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(110.0)) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19506 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19507 = rt::as_ptr<C_S_8G>(_o19506); _p19507 ? _p19507->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19506, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_1_21_A::m_S_8_5b_() {
    RT_FN("S_1_21_A.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(110.0)), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S_1_21_A::m_S__40__22_() {
    RT_FN("S_1_21_A.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5822]), rt::VS(g::LS[5823]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S_1_21_A* C_S_1_21_A::alloc_() {
    C_S_1_21_A* o = rt::make<C_S_1_21_A>();
    return o;
}
rt::Value C_S_1_21_A::mk_(rt::Value* a, int n) {
    C_S_1_21_A* o = alloc_();
    o->C_S_1_21_A::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S_1_21_A::dctor_2()));
    return rt::VO(o);
}
bool C_S_1_21_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S_1_21_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S_1_21_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S_1_21_A::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S_1_21_A::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_A::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_A::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_1_22_2::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_1_22_2::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S_1_22_2.S_1_22_2");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19508 = 339.0; this->f_S_6_21_Z = rt::touint_d(_v19508); _v19508; });
    ({ int32_t _v19509 = l_param1; this->f_S_5w = _v19509; _v19509; });
    ({ rt::Value _v19510 = l_param2; this->f_S_1i = rt::slot_string(_v19510); _v19510; });
    ({ rt::Value _v19511 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19511); _v19511; });
    ({ rt::Value _v19512 = rt::VS(g::LS[5824]); this->f_S__3f__21__3d_ = rt::slot_string(_v19512); _v19512; });
    ({ double _v19513 = 11.0; this->f_S__27__21_H = rt::touint_d(_v19513); _v19513; });
}
rt::Value C_S_1_22_2::m_S__21__21_G() {
    RT_FN("S_1_22_2.S__21__21_G");
    if ((({ bool _t19514 = (!this->f_S_4_21_K); _t19514 ? (bool)((((double)(C_PlayFab::sg_season())) == 11.0)) : _t19514; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 27.0), rt::V((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19515 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19516 = rt::as_ptr<C_S_8G>(_o19515); _p19516 ? _p19516->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19515, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_1_22_2::m_S_8_5b_() {
    RT_FN("S_1_22_2.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 27.0)), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S_1_22_2::m_S__40__22_() {
    RT_FN("S_1_22_2.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5825]), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S_1_22_2* C_S_1_22_2::alloc_() {
    C_S_1_22_2* o = rt::make<C_S_1_22_2>();
    return o;
}
rt::Value C_S_1_22_2::mk_(rt::Value* a, int n) {
    C_S_1_22_2* o = alloc_();
    o->C_S_1_22_2::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S_1_22_2::dctor_2()));
    return rt::VO(o);
}
bool C_S_1_22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S_1_22_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S_1_22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S_1_22_2::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S_1_22_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_22_2::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_9_21_k::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_9_21_k::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S_9_21_k.S_9_21_k");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19517 = 254.0; this->f_S_6_21_Z = rt::touint_d(_v19517); _v19517; });
    ({ int32_t _v19518 = l_param1; this->f_S_5w = _v19518; _v19518; });
    ({ rt::Value _v19519 = l_param2; this->f_S_1i = rt::slot_string(_v19519); _v19519; });
    ({ rt::Value _v19520 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19520); _v19520; });
    ({ rt::Value _v19521 = rt::VS(g::LS[5826]); this->f_S__3f__21__3d_ = rt::slot_string(_v19521); _v19521; });
    ({ double _v19522 = 9.0; this->f_S__27__21_H = rt::touint_d(_v19522); _v19522; });
}
rt::Value C_S_9_21_k::m_S__21__21_G() {
    RT_FN("S_9_21_k.S__21__21_G");
    if ((({ bool _t19523 = (!this->f_S_4_21_K); _t19523 ? (bool)((((double)(C_PlayFab::sg_season())) == 9.0)) : _t19523; }) && (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(88.0)) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19524 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19525 = rt::as_ptr<C_S_8G>(_o19524); _p19525 ? _p19525->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19524, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_9_21_k::m_S_8_5b_() {
    RT_FN("S_9_21_k.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(88.0)), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S_9_21_k::m_S__40__22_() {
    RT_FN("S_9_21_k.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5827]), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S_9_21_k* C_S_9_21_k::alloc_() {
    C_S_9_21_k* o = rt::make<C_S_9_21_k>();
    return o;
}
rt::Value C_S_9_21_k::mk_(rt::Value* a, int n) {
    C_S_9_21_k* o = alloc_();
    o->C_S_9_21_k::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S_9_21_k::dctor_2()));
    return rt::VO(o);
}
bool C_S_9_21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S_9_21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S_9_21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S_9_21_k::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S_9_21_k::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21_k::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_9_22_1::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_9_22_1::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S_9_22_1.S_9_22_1");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19526 = 337.0; this->f_S_6_21_Z = rt::touint_d(_v19526); _v19526; });
    ({ int32_t _v19527 = l_param1; this->f_S_5w = _v19527; _v19527; });
    ({ rt::Value _v19528 = l_param2; this->f_S_1i = rt::slot_string(_v19528); _v19528; });
    ({ rt::Value _v19529 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19529); _v19529; });
    ({ rt::Value _v19530 = rt::VS(g::LS[5828]); this->f_S__3f__21__3d_ = rt::slot_string(_v19530); _v19530; });
    ({ double _v19531 = 11.0; this->f_S__27__21_H = rt::touint_d(_v19531); _v19531; });
}
rt::Value C_S_9_22_1::m_S__21__21_G() {
    RT_FN("S_9_22_1.S__21__21_G");
    if ((({ bool _t19532 = (!this->f_S_4_21_K); _t19532 ? (bool)((((double)(C_PlayFab::sg_season())) == 11.0)) : _t19532; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 29.0), rt::V((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19533 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19534 = rt::as_ptr<C_S_8G>(_o19533); _p19534 ? _p19534->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19533, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_9_22_1::m_S_8_5b_() {
    RT_FN("S_9_22_1.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 29.0)), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S_9_22_1::m_S__40__22_() {
    RT_FN("S_9_22_1.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5829]), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S_9_22_1* C_S_9_22_1::alloc_() {
    C_S_9_22_1* o = rt::make<C_S_9_22_1>();
    return o;
}
rt::Value C_S_9_22_1::mk_(rt::Value* a, int n) {
    C_S_9_22_1* o = alloc_();
    o->C_S_9_22_1::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S_9_22_1::dctor_2()));
    return rt::VO(o);
}
bool C_S_9_22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S_9_22_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S_9_22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S_9_22_1::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S_9_22_1::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22_1::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_9Z::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_9Z::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S_9Z.S_9Z");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19535 = 195.0; this->f_S_6_21_Z = rt::touint_d(_v19535); _v19535; });
    ({ int32_t _v19536 = l_param1; this->f_S_5w = _v19536; _v19536; });
    ({ rt::Value _v19537 = l_param2; this->f_S_1i = rt::slot_string(_v19537); _v19537; });
    ({ rt::Value _v19538 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19538); _v19538; });
    ({ rt::Value _v19539 = rt::VS(g::LS[5830]); this->f_S__3f__21__3d_ = rt::slot_string(_v19539); _v19539; });
    ({ double _v19540 = 4.0; this->f_S__27__21_H = rt::touint_d(_v19540); _v19540; });
}
rt::Value C_S_9Z::m_S__21__21_G() {
    RT_FN("S_9Z.S__21__21_G");
    if ((({ bool _t19541 = (!this->f_S_4_21_K); _t19541 ? (bool)((((double)(C_PlayFab::sg_season())) == 4.0)) : _t19541; }) && (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(123.0)) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19542 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19543 = rt::as_ptr<C_S_8G>(_o19542); _p19543 ? _p19543->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19542, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_9Z::m_S_8_5b_() {
    RT_FN("S_9Z.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(123.0)), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S_9Z::m_S__40__22_() {
    RT_FN("S_9Z.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5831]), rt::VS(g::LS[5832]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S_9Z* C_S_9Z::alloc_() {
    C_S_9Z* o = rt::make<C_S_9Z>();
    return o;
}
rt::Value C_S_9Z::mk_(rt::Value* a, int n) {
    C_S_9Z* o = alloc_();
    o->C_S_9Z::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S_9Z::dctor_2()));
    return rt::VO(o);
}
bool C_S_9Z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S_9Z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S_9Z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S_9Z::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S_9Z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9Z::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9Z::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9Z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__3b__21__3d_::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__3b__21__3d_::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__3b__21__3d_.S__3b__21__3d_");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19544 = 225.0; this->f_S_6_21_Z = rt::touint_d(_v19544); _v19544; });
    ({ int32_t _v19545 = l_param1; this->f_S_5w = _v19545; _v19545; });
    ({ rt::Value _v19546 = l_param2; this->f_S_1i = rt::slot_string(_v19546); _v19546; });
    ({ rt::Value _v19547 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19547); _v19547; });
    ({ rt::Value _v19548 = rt::VS(g::LS[5833]); this->f_S__3f__21__3d_ = rt::slot_string(_v19548); _v19548; });
    ({ double _v19549 = 7.0; this->f_S__27__21_H = rt::touint_d(_v19549); _v19549; });
}
rt::Value C_S__3b__21__3d_::m_S__21__21_G() {
    RT_FN("S__3b__21__3d_.S__21__21_G");
    if ((({ bool _t19550 = (!this->f_S_4_21_K); _t19550 ? (bool)((((double)(C_PlayFab::sg_season())) == 7.0)) : _t19550; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 16.0), rt::V((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19551 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19552 = rt::as_ptr<C_S_8G>(_o19551); _p19552 ? _p19552->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19551, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3b__21__3d_::m_S_8_5b_() {
    RT_FN("S__3b__21__3d_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 16.0)), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__3b__21__3d_::m_S__40__22_() {
    RT_FN("S__3b__21__3d_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5834]), rt::VS(g::LS[5835]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S__3b__21__3d_* C_S__3b__21__3d_::alloc_() {
    C_S__3b__21__3d_* o = rt::make<C_S__3b__21__3d_>();
    return o;
}
rt::Value C_S__3b__21__3d_::mk_(rt::Value* a, int n) {
    C_S__3b__21__3d_* o = alloc_();
    o->C_S__3b__21__3d_::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__3b__21__3d_::dctor_2()));
    return rt::VO(o);
}
bool C_S__3b__21__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S__3b__21__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S__3b__21__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S__3b__21__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S__3b__21__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__3b_k::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__3b_k::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__3b_k.S__3b_k");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19553 = 167.0; this->f_S_6_21_Z = rt::touint_d(_v19553); _v19553; });
    ({ int32_t _v19554 = l_param1; this->f_S_5w = _v19554; _v19554; });
    ({ rt::Value _v19555 = l_param2; this->f_S_1i = rt::slot_string(_v19555); _v19555; });
    ({ rt::Value _v19556 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19556); _v19556; });
    ({ rt::Value _v19557 = rt::VS(g::LS[5836]); this->f_S__3f__21__3d_ = rt::slot_string(_v19557); _v19557; });
    ({ double _v19558 = 2.0; this->f_S__27__21_H = rt::touint_d(_v19558); _v19558; });
}
rt::Value C_S__3b_k::m_S__21__21_G() {
    RT_FN("S__3b_k.S__21__21_G");
    if ((({ bool _t19559 = (!this->f_S_4_21_K); _t19559 ? (bool)((((double)(C_PlayFab::sg_season())) == 2.0)) : _t19559; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 17.0), rt::V((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19560 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19561 = rt::as_ptr<C_S_8G>(_o19560); _p19561 ? _p19561->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19560, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3b_k::m_S_8_5b_() {
    RT_FN("S__3b_k.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 17.0)), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__3b_k::m_S__40__22_() {
    RT_FN("S__3b_k.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5837]), rt::VS(g::LS[5838]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S__3b_k* C_S__3b_k::alloc_() {
    C_S__3b_k* o = rt::make<C_S__3b_k>();
    return o;
}
rt::Value C_S__3b_k::mk_(rt::Value* a, int n) {
    C_S__3b_k* o = alloc_();
    o->C_S__3b_k::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__3b_k::dctor_2()));
    return rt::VO(o);
}
bool C_S__3b_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S__3b_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S__3b_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S__3b_k::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S__3b_k::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_k::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_k::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__3d_S::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__3d_S::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__3d_S.S__3d_S");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19562 = 176.0; this->f_S_6_21_Z = rt::touint_d(_v19562); _v19562; });
    ({ int32_t _v19563 = l_param1; this->f_S_5w = _v19563; _v19563; });
    ({ rt::Value _v19564 = l_param2; this->f_S_1i = rt::slot_string(_v19564); _v19564; });
    ({ rt::Value _v19565 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19565); _v19565; });
    ({ rt::Value _v19566 = rt::VS(g::LS[5839]); this->f_S__3f__21__3d_ = rt::slot_string(_v19566); _v19566; });
    ({ double _v19567 = 3.0; this->f_S__27__21_H = rt::touint_d(_v19567); _v19567; });
}
rt::Value C_S__3d_S::m_S__21__21_G() {
    RT_FN("S__3d_S.S__21__21_G");
    if ((({ bool _t19568 = (!this->f_S_4_21_K); _t19568 ? (bool)((((double)(C_PlayFab::sg_season())) == 3.0)) : _t19568; }) && (((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(114.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(115.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(116.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(117.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(118.0))) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19569 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19570 = rt::as_ptr<C_S_8G>(_o19569); _p19570 ? _p19570->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19569, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3d_S::m_S_8_5b_() {
    RT_FN("S__3d_S.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(114.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(115.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(116.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(117.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(118.0))), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__3d_S::m_S__40__22_() {
    RT_FN("S__3d_S.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5840]), rt::VS(g::LS[5841]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S__3d_S* C_S__3d_S::alloc_() {
    C_S__3d_S* o = rt::make<C_S__3d_S>();
    return o;
}
rt::Value C_S__3d_S::mk_(rt::Value* a, int n) {
    C_S__3d_S* o = alloc_();
    o->C_S__3d_S::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__3d_S::dctor_2()));
    return rt::VO(o);
}
bool C_S__3d_S::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S__3d_S::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S__3d_S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S__3d_S::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S__3d_S::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d_S::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d_S::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d_S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__40_O::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__40_O::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__40_O.S__40_O");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19571 = 208.0; this->f_S_6_21_Z = rt::touint_d(_v19571); _v19571; });
    ({ int32_t _v19572 = l_param1; this->f_S_5w = _v19572; _v19572; });
    ({ rt::Value _v19573 = l_param2; this->f_S_1i = rt::slot_string(_v19573); _v19573; });
    ({ rt::Value _v19574 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19574); _v19574; });
    ({ rt::Value _v19575 = rt::VS(g::LS[5842]); this->f_S__3f__21__3d_ = rt::slot_string(_v19575); _v19575; });
    ({ double _v19576 = 6.0; this->f_S__27__21_H = rt::touint_d(_v19576); _v19576; });
}
rt::Value C_S__40_O::m_S__21__21_G() {
    RT_FN("S__40_O.S__21__21_G");
    if ((({ bool _t19577 = (!this->f_S_4_21_K); _t19577 ? (bool)((((double)(C_PlayFab::sg_season())) == 6.0)) : _t19577; }) && (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[5843])))) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19578 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19579 = rt::as_ptr<C_S_8G>(_o19578); _p19579 ? _p19579->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19578, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__40_O::m_S_8_5b_() {
    RT_FN("S__40_O.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[5843])))), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__40_O::m_S__40__22_() {
    RT_FN("S__40_O.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5844]), rt::VS(g::LS[5845]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S__40_O* C_S__40_O::alloc_() {
    C_S__40_O* o = rt::make<C_S__40_O>();
    return o;
}
rt::Value C_S__40_O::mk_(rt::Value* a, int n) {
    C_S__40_O* o = alloc_();
    o->C_S__40_O::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__40_O::dctor_2()));
    return rt::VO(o);
}
bool C_S__40_O::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S__40_O::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S__40_O::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S__40_O::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S__40_O::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40_O::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40_O::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40_O::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__5b__21_F::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__5b__21_F::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__5b__21_F.S__5b__21_F");
    (void)((this->C_S__20__21_e::ctor_(), rt::NUL));
    ({ double _v19580 = 196.0; this->f_S_6_21_Z = rt::touint_d(_v19580); _v19580; });
    ({ int32_t _v19581 = l_param1; this->f_S_5w = _v19581; _v19581; });
    ({ rt::Value _v19582 = l_param2; this->f_S_1i = rt::slot_string(_v19582); _v19582; });
    ({ rt::Value _v19583 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v19583); _v19583; });
    ({ rt::Value _v19584 = rt::VS(g::LS[5846]); this->f_S__3f__21__3d_ = rt::slot_string(_v19584); _v19584; });
    ({ double _v19585 = 4.0; this->f_S__27__21_H = rt::touint_d(_v19585); _v19585; });
}
rt::Value C_S__5b__21_F::m_S__21__21_G() {
    RT_FN("S__5b__21_F.S__21__21_G");
    if ((({ bool _t19586 = (!this->f_S_4_21_K); _t19586 ? (bool)((((double)(C_PlayFab::sg_season())) == 4.0)) : _t19586; }) && (((double)(C_S__26_c::sm_S__5e__21_L())) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o19587 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19588 = rt::as_ptr<C_S_8G>(_o19587); _p19588 ? _p19588->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o19587, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__5b__21_F::m_S_8_5b_() {
    RT_FN("S__5b__21_F.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S__26_c::sm_S__5e__21_L())), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__5b__21_F::m_S__40__22_() {
    RT_FN("S__5b__21_F.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5847]), rt::VS(g::LS[5848]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), this->C_S__20__21_e::m_S__40__22_()));
    return rt::NUL;
}
C_S__5b__21_F* C_S__5b__21_F::alloc_() {
    C_S__5b__21_F* o = rt::make<C_S__5b__21_F>();
    return o;
}
rt::Value C_S__5b__21_F::mk_(rt::Value* a, int n) {
    C_S__5b__21_F* o = alloc_();
    o->C_S__5b__21_F::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__5b__21_F::dctor_2()));
    return rt::VO(o);
}
bool C_S__5b__21_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__20__21_e::dget(id, out);
}
bool C_S__5b__21_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__20__21_e::dset(id, v);
}
bool C_S__5b__21_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__21_e::dcall(id, a, n, out);
}
bool C_S__5b__21_F::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__20__21_e::dmeth(id);
}
bool C_S__5b__21_F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_F::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_F::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c_F::ctor_() {
    RT_FN("S__2c_F.S__2c_F");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v19589 = 224.0; this->f_S_6_21_Z = rt::touint_d(_v19589); _v19589; });
    ({ rt::Value _v19590 = rt::trv(rt::VS(g::LS[5849])); this->f_S_1i = rt::slot_string(_v19590); _v19590; });
    ({ rt::Value _v19591 = rt::VS(g::LS[5850]); this->f_S__5e__21__23_ = rt::slot_string(_v19591); _v19591; });
    ({ rt::Value _v19592 = rt::trv(rt::VS(g::LS[5851])); this->f_S_7_23_ = rt::slot_string(_v19592); _v19592; });
    ({ double _v19593 = 25000.0; this->f_S__3e__3d_ = _v19593; _v19593; });
    ({ double _v19594 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v19594); _v19594; });
    ({ bool _v19595 = false; this->f_S_3e = _v19595; _v19595; });
}
rt::Value C_S__2c_F::m_S_6r() {
    RT_FN("S__2c_F.S_6r");
    (void)(({ rt::Value _o19596 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19597 = rt::as_ptr<C_S_8G>(_o19596); _p19597 ? _p19597->m_S_0_21__5f_(rt::toint_d(1.0)) : rt::dcallv(_o19596, NM_S_0_21__5f_, rt::V(1.0)); }));
    return rt::NUL;
}
bool C_S__2c_F::g_S__2d_6() {
    RT_FN("S__2c_F.S__2d_6_get");
    return (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0);
    return false;
}
C_S__2c_F* C_S__2c_F::alloc_() {
    C_S__2c_F* o = rt::make<C_S__2c_F>();
    return o;
}
rt::Value C_S__2c_F::mk_(rt::Value* a, int n) {
    C_S__2c_F* o = alloc_();
    o->C_S__2c_F::ctor_();
    return rt::VO(o);
}
bool C_S__2c_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c_F::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c_F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c_F__id)); return true;
    case NM_ids: out = g::SV.C_S__2c_F__ids; return true;
    default: return false;
    }
}
bool C_S__2c_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c_F__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c_F__ids = v; return true;
    default: return false;
    }
}
bool C_S__2c_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_5b_::ctor_(rt::Value p0, double p1, double p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_param2 = p1;
    double l_param3 = p2;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("S_6_5b_.S_6_5b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v19598 = 225.0; this->f_S_6_21_Z = rt::touint_d(_v19598); _v19598; });
    ({ rt::Value _v19599 = l_param1; this->f_S_1i = rt::slot_string(_v19599); _v19599; });
    ({ rt::Value _v19600 = rt::VS(g::LS[1255]); this->f_S__3f__21__3d_ = rt::slot_string(_v19600); _v19600; });
    ({ rt::Value _v19601 = rt::VS(g::LS[5853]); this->f_S__40_1 = rt::slot_string(_v19601); _v19601; });
    ({ double _v19602 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v19602); _v19602; });
    ({ int32_t _v19603 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v19603; _v19603; });
    ({ double _v19606 = ({ double _v19605 = ({ double _v19604 = 1.0; this->f_S__22__21_p = _v19604; _v19604; }); this->f_S__2b__21__20_ = _v19605; _v19605; }); this->f_S__3e__23_ = _v19606; _v19606; });
    {
        std::vector<rt::Value> _lst19607;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst19607);
        for (const rt::Value& _x19608 : _lst19607) {
            l_A__loc4_ = _x19608;
            if (rt::eq(({ rt::Value _o19609 = l_A__loc4_; C_S__60_6* _p19610 = rt::as_ptr<C_S__60_6>(_o19609); _p19610 ? _p19610->f_S__40_1 : rt::dget(_o19609, NM_S__40_1); }), this->f_S__40_1)) {
                if ((((double)(({ rt::Value _o19611 = l_A__loc4_; C_S__60_6* _p19612 = rt::as_ptr<C_S__60_6>(_o19611); _p19612 ? _p19612->f_S__22__21_U : rt::toint(rt::dget(_o19611, NM_S__22__21_U)); }))) < 4.0)) {
                    ({ double _v19613 = (this->f_S__3e__23_ * 2.0); this->f_S__3e__23_ = _v19613; _v19613; });
                } else if ((((double)(({ rt::Value _o19614 = l_A__loc4_; C_S__60_6* _p19615 = rt::as_ptr<C_S__60_6>(_o19614); _p19615 ? _p19615->f_S__22__21_U : rt::toint(rt::dget(_o19614, NM_S__22__21_U)); }))) < 5.0)) {
                    ({ double _v19616 = (this->f_S__2b__21__20_ * 2.0); this->f_S__2b__21__20_ = _v19616; _v19616; });
                } else {
                    ({ double _v19617 = (this->f_S__22__21_p * 2.0); this->f_S__22__21_p = _v19617; _v19617; });
                }
            }
        }
    }
    if ((((double)(this->f_S__22__21_U)) < 4.0)) {
        ({ double _v19618 = (this->f_S__3e__23_ * 2.0); this->f_S__3e__23_ = _v19618; _v19618; });
    } else if ((((double)(this->f_S__22__21_U)) < 5.0)) {
        ({ double _v19619 = (this->f_S__2b__21__20_ * 2.0); this->f_S__2b__21__20_ = _v19619; _v19619; });
    } else {
        ({ double _v19620 = (this->f_S__22__21_p * 2.0); this->f_S__22__21_p = _v19620; _v19620; });
    }
    ({ rt::Value _v19621 = rt::add(rt::VS(g::LS[5854]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v19621); _v19621; });
    ({ double _v19622 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19622); _v19622; });
    ({ double _v19623 = l_param2; this->f_S__5e__21__5d_ = _v19623; _v19623; });
    if ((((double)(this->f_S__22__21_U)) < 4.0)) {
        ({ double _v19624 = l_param3; this->f_S__3e__3d_ = _v19624; _v19624; });
    } else if ((((double)(this->f_S__22__21_U)) < 5.0)) {
        ({ double _v19625 = l_param3; this->f_S__3c_R = _v19625; _v19625; });
    } else {
        ({ double _v19626 = l_param3; this->f_S__23__21_m = _v19626; _v19626; });
    }
    ({ bool _v19627 = true; this->f_S__2b__21_9 = _v19627; _v19627; });
}
rt::Value C_S_6_5b_::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_6_5b_.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    if ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7)) {
        if ((((double)(this->f_S__22__21_U)) < 4.0)) {
            (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_6_21_T((((this->f_S__3e__23_ - 1.0)) * 100.0), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
        } else if ((((double)(this->f_S__22__21_U)) < 5.0)) {
            (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_8_21_Z(((((C_S__23__21__21_::sm_S__23__25_(this->f_S__3e__23_, C_S__23__21__21_::dsm_S__23__25__1()) * C_S__23__21__21_::sm_S__23__25_(this->f_S__2b__21__20_, 2.0)) - 1.0)) * 100.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
        } else {
            (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_8_21_Z((((((C_S__23__21__21_::sm_S__23__25_(this->f_S__3e__23_, C_S__23__21__21_::dsm_S__23__25__1()) * C_S__23__21__21_::sm_S__23__25_(this->f_S__2b__21__20_, 2.0)) * C_S__23__21__21_::sm_S__23__25_(this->f_S__22__21_p, 3.0)) - 1.0)) * 100.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
        }
    } else if ((((double)(this->f_S__22__21_U)) < 4.0)) {
        (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_6_21_T((((this->f_S__3e__23_ - 1.0)) * 100.0), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    } else if ((((double)(this->f_S__22__21_U)) < 5.0)) {
        (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_6_21_T((((this->f_S__2b__21__20_ - 1.0)) * 100.0), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    } else {
        (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_6_21_T((((this->f_S__22__21_p - 1.0)) * 100.0), 3.0, C_S__26_c::dsm_S_6_21_T_2())));
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[5855]), l_A__loc1_));
    return rt::NUL;
}
rt::Value C_S_6_5b_::m_S__3e__21__2d_() {
    RT_FN("S_6_5b_.S__3e__21__2d_");
    return rt::slot_string(rt::add(rt::VS(g::LS[5856]), this->m_S__2b__21__21_(true)));
    return rt::NUL;
}
bool C_S_6_5b_::g_S__2d_6() {
    RT_FN("S_6_5b_.S__2d_6_get");
    return ({ bool _t19632 = ({ bool _t19628 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t19628 ? (bool)((C_S__26_c::sm_S_0_23_(rt::toint_d(1.0), true) >= this->f_S__5e__21__5d_)) : _t19628; }); _t19632 ? (bool)((({ bool _t19631 = ({ bool _t19630 = (((double)(this->f_S__22__21_U)) < 4.0); _t19630 ? _t19630 : (bool)(({ bool _t19629 = (((double)(this->f_S__22__21_U)) < 5.0); _t19629 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 1.0)) : _t19629; })); }); _t19631 ? _t19631 : (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)); }))) : _t19632; });
    return false;
}
C_S_6_5b_* C_S_6_5b_::alloc_() {
    C_S_6_5b_* o = rt::make<C_S_6_5b_>();
    return o;
}
rt::Value C_S_6_5b_::mk_(rt::Value* a, int n) {
    C_S_6_5b_* o = alloc_();
    o->C_S_6_5b_::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN));
    return rt::VO(o);
}
bool C_S_6_5b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S__3e__23_: out = rt::V(f_S__3e__23_); return true;
    case NM_S__2b__21__20_: out = rt::V(f_S__2b__21__20_); return true;
    case NM_S__22__21_p: out = rt::V(f_S__22__21_p); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_5b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S__3e__23_: f_S__3e__23_ = rt::tonum(v); return true;
    case NM_S__2b__21__20_: f_S__2b__21__20_ = rt::tonum(v); return true;
    case NM_S__22__21_p: f_S__22__21_p = rt::tonum(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_5b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__23_: { rt::Value f = rt::V(f_S__3e__23_); out = rt::call_value(f, a, n); return true; }
    case NM_S__2b__21__20_: { rt::Value f = rt::V(f_S__2b__21__20_); out = rt::call_value(f, a, n); return true; }
    case NM_S__22__21_p: { rt::Value f = rt::V(f_S__22__21_p); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_5b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__2d_6: return false;
    case NM_S__5e__21__5d_: return false;
    case NM_S__3e__23_: return false;
    case NM_S__2b__21__20_: return false;
    case NM_S__22__21_p: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_5b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_5b_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_5b_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_5b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b_Q::ctor_() {
    RT_FN("S__3b_Q.S__3b_Q");
    ({ rt::Value _v19633 = rt::new_vectorv(rt::E_ANY); this->f_S_19 = _v19633; _v19633; });
    (void)(rt::NUL);
}
rt::Value C_S__3b_Q::m_S__2b__21_R() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3b_Q.S__2b__21_R");
    ({ rt::Value _v19634 = rt::V(525.0); rt::dset(rt::VO(this), NM_width, _v19634); _v19634; });
    (l_A__loc1_ = rt::callv(rt::dget(rt::VO(this), NM_FlowLayout)));
    ({ rt::Value _v19635 = l_A__loc1_; rt::dset(rt::VO(this), NM_layout, _v19635); _v19635; });
    return rt::NUL;
}
rt::Value C_S__3b_Q::m_S__27_x(rt::Value p0) {
    rt::Value l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    RT_FN("S__3b_Q.S__27_x");
    (l_A__loc2_ = rt::toint_d(0.0));
    ({ double _v19636 = rt::alen(l_param1); this->f_S_2_2c_ = rt::toint_d(_v19636); _v19636; });
    (void)(this->m_S__20_m(true, C_S__3b_Q::dm_S__20_m_1()));
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) < ((double)(this->f_S_2_2c_)))) {
        (void)(this->m_S__3f__21__5e_(this->f_S__3f__21_C, l_A__loc2_, rt::arr_at(l_param1, ((double)(l_A__loc2_)))));
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return rt::NUL;
}
bool C_S__3b_Q::dm_S__20_m_0() { return false; }
bool C_S__3b_Q::dm_S__20_m_1() { return false; }
rt::Value C_S__3b_Q::m_S__20_m(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("S__3b_Q.S__20_m");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::NUL);
    ({ double _v19637 = (((double)(this->f_S__3f__21_C)) + 1.0); this->f_S__3f__21_C = rt::toint_d(_v19637); _v19637; });
    (void)(rt::dcallv(this->f_S_19, rt::N_push, rt::new_vectorv(rt::E_ANY)));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < ((double)(this->f_S_2_2c_)))) {
        (l_A__loc4_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
        if (g::SV.C_S__20_g__S__22_g) {
            ({ rt::Value _v19638 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), ((l_param1 || ((((double)(l_A__loc3_)) == 0.0) && l_param2)) ? g::SV.C_S_99__S__5e_z : g::SV.C_S_99__S_8_21_5), rt::V(26.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc4_, NM_textRendererProperties), NM_elementFormat, _v19638); _v19638; });
        } else {
            ({ rt::Value _v19639 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), ((l_param1 || ((((double)(l_A__loc3_)) == 0.0) && l_param2)) ? g::SV.C_S_99__S__5e_z : g::SV.C_S_99__S_8_21_5), rt::V(34.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc4_, NM_textRendererProperties), NM_elementFormat, _v19639); _v19639; });
        }
        if (g::SV.C_S__20_g__S__22_g) {
            if ((((double)(this->f_S_2_2c_)) == 5.0)) {
                if ((((double)(l_A__loc3_)) == 0.0)) {
                    ({ rt::Value _v19640 = rt::V(110.0); rt::dset(l_A__loc4_, NM_width, _v19640); _v19640; });
                } else if ((((double)(l_A__loc3_)) == 1.0)) {
                    ({ rt::Value _v19641 = rt::V(100.0); rt::dset(l_A__loc4_, NM_width, _v19641); _v19641; });
                } else if ((((double)(l_A__loc3_)) == 2.0)) {
                    ({ rt::Value _v19642 = rt::V(95.0); rt::dset(l_A__loc4_, NM_width, _v19642); _v19642; });
                } else if ((((double)(l_A__loc3_)) == 3.0)) {
                    ({ rt::Value _v19643 = rt::V(150.0); rt::dset(l_A__loc4_, NM_width, _v19643); _v19643; });
                } else if ((((double)(l_A__loc3_)) == 4.0)) {
                    ({ rt::Value _v19644 = rt::V(70.0); rt::dset(l_A__loc4_, NM_width, _v19644); _v19644; });
                }
            } else {
                ({ rt::Value _v19645 = rt::V(rt::m_floor((rt::tonum(rt::dget(rt::VO(this), NM_width)) / ((double)(this->f_S_2_2c_))))); rt::dset(l_A__loc4_, NM_width, _v19645); _v19645; });
            }
        } else if ((((double)(this->f_S_2_2c_)) == 3.0)) {
            if ((((double)(l_A__loc3_)) == 0.0)) {
                ({ rt::Value _v19646 = rt::V(225.0); rt::dset(l_A__loc4_, NM_width, _v19646); _v19646; });
            } else if ((((double)(l_A__loc3_)) == 1.0)) {
                ({ rt::Value _v19647 = rt::V(150.0); rt::dset(l_A__loc4_, NM_width, _v19647); _v19647; });
            } else if ((((double)(l_A__loc3_)) == 2.0)) {
                ({ rt::Value _v19648 = rt::V(150.0); rt::dset(l_A__loc4_, NM_width, _v19648); _v19648; });
            }
        } else if ((((double)(this->f_S_2_2c_)) == 4.0)) {
            if ((((double)(l_A__loc3_)) == 0.0)) {
                ({ rt::Value _v19649 = rt::V(130.0); rt::dset(l_A__loc4_, NM_width, _v19649); _v19649; });
            } else if ((((double)(l_A__loc3_)) == 1.0)) {
                ({ rt::Value _v19650 = rt::V(130.0); rt::dset(l_A__loc4_, NM_width, _v19650); _v19650; });
            } else if ((((double)(l_A__loc3_)) == 2.0)) {
                ({ rt::Value _v19651 = rt::V(100.0); rt::dset(l_A__loc4_, NM_width, _v19651); _v19651; });
            } else if ((((double)(l_A__loc3_)) == 3.0)) {
                ({ rt::Value _v19652 = rt::V(165.0); rt::dset(l_A__loc4_, NM_width, _v19652); _v19652; });
            }
        } else if ((((double)(this->f_S_2_2c_)) == 5.0)) {
            if ((((double)(l_A__loc3_)) == 0.0)) {
                ({ rt::Value _v19653 = rt::V(110.0); rt::dset(l_A__loc4_, NM_width, _v19653); _v19653; });
            } else if ((((double)(l_A__loc3_)) == 1.0)) {
                ({ rt::Value _v19654 = rt::V(100.0); rt::dset(l_A__loc4_, NM_width, _v19654); _v19654; });
            } else if ((((double)(l_A__loc3_)) == 2.0)) {
                ({ rt::Value _v19655 = rt::V(90.0); rt::dset(l_A__loc4_, NM_width, _v19655); _v19655; });
            } else if ((((double)(l_A__loc3_)) == 3.0)) {
                ({ rt::Value _v19656 = rt::V(150.0); rt::dset(l_A__loc4_, NM_width, _v19656); _v19656; });
            } else if ((((double)(l_A__loc3_)) == 4.0)) {
                ({ rt::Value _v19657 = rt::V(75.0); rt::dset(l_A__loc4_, NM_width, _v19657); _v19657; });
            }
        }
        ({ rt::Value _v19658 = rt::VS(g::LS[9]); rt::dset(l_A__loc4_, NM_text, _v19658); _v19658; });
        (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc4_));
        (void)(rt::dcallv(rt::arr_at(this->f_S_19, ((double)(this->f_S__3f__21_C))), rt::N_push, l_A__loc4_));
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    if ((!rt::eq(rt::dget(rt::VO(this), NM_parent), rt::NUL))) {
        (void)(({ rt::Value _o19660 = (({ rt::Value _t19659 = rt::dget(rt::VO(this), NM_parent); rt::is_class(_t19659, C_S__2b__21_G::CI) ? _t19659 : rt::NUL; })); C_S__2b__21_G* _p19661 = rt::as_ptr<C_S__2b__21_G>(_o19660); _p19661 ? _p19661->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))) : rt::dcallv(_o19660, NM_S__21__21_c, rt::V((-1.0)), rt::V((-1.0))); }));
    }
    return rt::NUL;
}
rt::Value C_S__3b_Q::dm_S__22_w_0() { return rt::slot_string(rt::VS(g::LS[9])); }
rt::Value C_S__3b_Q::m_S__22_w(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__3b_Q.S__22_w");
    ({ double _v19662 = (((double)(this->f_S__3f__21_C)) + 1.0); this->f_S__3f__21_C = rt::toint_d(_v19662); _v19662; });
    (void)(rt::dcallv(this->f_S_19, rt::N_push, rt::new_vectorv(rt::E_ANY)));
    (l_A__loc2_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v19663 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(26.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc2_, NM_textRendererProperties), NM_elementFormat, _v19663); _v19663; });
    } else {
        ({ rt::Value _v19664 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(34.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc2_, NM_textRendererProperties), NM_elementFormat, _v19664); _v19664; });
    }
    ({ rt::Value _v19665 = rt::dget(rt::VO(this), NM_width); rt::dset(l_A__loc2_, NM_width, _v19665); _v19665; });
    ({ rt::Value _v19666 = l_param1; rt::dset(l_A__loc2_, NM_text, _v19666); _v19666; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc2_));
    (void)(rt::dcallv(rt::arr_at(this->f_S_19, ((double)(this->f_S__3f__21_C))), rt::N_push, l_A__loc2_));
    if ((!rt::eq(rt::dget(rt::VO(this), NM_parent), rt::NUL))) {
        (void)(({ rt::Value _o19668 = (({ rt::Value _t19667 = rt::dget(rt::VO(this), NM_parent); rt::is_class(_t19667, C_S__2b__21_G::CI) ? _t19667 : rt::NUL; })); C_S__2b__21_G* _p19669 = rt::as_ptr<C_S__2b__21_G>(_o19668); _p19669 ? _p19669->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))) : rt::dcallv(_o19668, NM_S__21__21_c, rt::V((-1.0)), rt::V((-1.0))); }));
    }
    return rt::NUL;
}
rt::Value C_S__3b_Q::m_S__27__21__2b_() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S__3b_Q.S__27__21__2b_");
    (l_A__loc1_ = rt::toint_d(0.0));
    ({ double _v19670 = (((double)(this->f_S__3f__21_C)) - 1.0); this->f_S__3f__21_C = rt::toint_d(_v19670); _v19670; });
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) < rt::alen(rt::arr_at(this->f_S_19, (rt::alen(this->f_S_19) - 1.0))))) {
        (void)(rt::dcallv((({ rt::Value _t19671 = rt::arr_at(rt::arr_at(this->f_S_19, (rt::alen(this->f_S_19) - 1.0)), ((double)(l_A__loc1_))); rt::is_stubtype(_t19671) ? _t19671 : rt::NUL; })), NM_removeFromParent));
        (void)(rt::dcallv((({ rt::Value _t19672 = rt::arr_at(rt::arr_at(this->f_S_19, (rt::alen(this->f_S_19) - 1.0)), ((double)(l_A__loc1_))); rt::is_stubtype(_t19672) ? _t19672 : rt::NUL; })), NM_dispose));
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    (void)(rt::dcallv(this->f_S_19, rt::N_pop));
    return rt::NUL;
}
rt::Value C_S__3b_Q::m_S__3f__21__5e_(int32_t p0, int32_t p1, rt::Value p2) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__3b_Q.S__3f__21__5e_");
    ({ rt::Value _v19673 = l_param3; rt::dset(rt::arr_at(rt::arr_at(this->f_S_19, ((double)(l_param1))), ((double)(l_param2))), NM_text, _v19673); _v19673; });
    return rt::NUL;
}
rt::Value C_S__3b_Q::m_S__21__21_G() {
    RT_FN("S__3b_Q.S__21__21_G");
    return rt::NUL;
}
rt::Value C_S__3b_Q::m_S_8_21__5b_() {
    RT_FN("S__3b_Q.S_8_21__5b_");
    return rt::NUL;
}
rt::Value C_S__3b_Q::m_S__21__21_c(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__3b_Q.S__21__21_c");
    return rt::NUL;
}
C_S__3b_Q* C_S__3b_Q::alloc_() {
    C_S__3b_Q* o = rt::make<C_S__3b_Q>();
    return o;
}
rt::Value C_S__3b_Q::mk_(rt::Value* a, int n) {
    C_S__3b_Q* o = alloc_();
    o->C_S__3b_Q::ctor_();
    return rt::VO(o);
}
bool C_S__3b_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_19: out = f_S_19; return true;
    case NM_S_2_2c_: out = rt::V((double)(f_S_2_2c_)); return true;
    case NM_S__3f__21_C: out = rt::V((double)(f_S__3f__21_C)); return true;
    case NM_S__3f__21_1: out = rt::VB(f_S__3f__21_1); return true;
    case NM_S__25__21_r: out = rt::VB(f_S__25__21_r); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_x: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20_m: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__22_w: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27__21__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3f__21__5e_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21__5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_c: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__3b_Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_19: f_S_19 = v; return true;
    case NM_S_2_2c_: f_S_2_2c_ = rt::toint(v); return true;
    case NM_S__3f__21_C: f_S__3f__21_C = rt::toint(v); return true;
    case NM_S__3f__21_1: f_S__3f__21_1 = rt::T(v); return true;
    case NM_S__25__21_r: f_S__25__21_r = rt::T(v); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__3b_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__27_x: out = m_S__27_x(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__20_m: out = m_S__20_m(rt::arg<bool>(a, n, 0, C_S__3b_Q::dm_S__20_m_0()), rt::arg<bool>(a, n, 1, C_S__3b_Q::dm_S__20_m_1())); return true;
    case NM_S__22_w: out = m_S__22_w(rt::arg<rt::Value>(a, n, 0, C_S__3b_Q::dm_S__22_w_0())); return true;
    case NM_S__27__21__2b_: out = m_S__27__21__2b_(); return true;
    case NM_S__3f__21__5e_: out = m_S__3f__21__5e_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0), rt::arg<rt::Value>(a, n, 2, rt::UNDEF)); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_21__5b_: out = m_S_8_21__5b_(); return true;
    case NM_S__21__21_c: out = m_S__21__21_c(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)); return true;
    case NM_S_19: { rt::Value f = f_S_19; out = rt::call_value(f, a, n); return true; }
    case NM_S_2_2c_: { rt::Value f = rt::V((double)(f_S_2_2c_)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_C: { rt::Value f = rt::V((double)(f_S__3f__21_C)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_1: { rt::Value f = rt::VB(f_S__3f__21_1); out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21_r: { rt::Value f = rt::VB(f_S__25__21_r); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__3b_Q::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__27_x: return true;
    case NM_S__20_m: return true;
    case NM_S__22_w: return true;
    case NM_S__27__21__2b_: return true;
    case NM_S__3f__21__5e_: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_21__5b_: return true;
    case NM_S__21__21_c: return true;
    case NM_S_19: return false;
    case NM_S_2_2c_: return false;
    case NM_S__3f__21_C: return false;
    case NM_S__3f__21_1: return false;
    case NM_S__25__21_r: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__3b_Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_Q::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1F::ctor_() {
    RT_FN("S_1F.S_1F");
    (void)((this->C_S__3b_Q::ctor_(), rt::NUL));
}
rt::Value C_S_1F::m_S__2b__21_R() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S_1F.S__2b__21_R");
    (l_A__loc1_ = rt::toint_d(0.0));
    (void)(this->C_S__3b_Q::m_S__2b__21_R());
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) <= 20.0)) {
        (void)(this->m_S__22_w(C_S__3b_Q::dm_S__22_w_0()));
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S_1F::m_S__21__21_G() {
    double l_A__loc6_ = NAN;
    double l_A__loc8_ = NAN;
    double l_A__loc7_ = NAN;
    double l_A__loc1_ = NAN;
    double l_A__loc3_ = NAN;
    double l_A__loc4_ = NAN;
    double l_A__loc2_ = NAN;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S_1F.S__21__21_G");
    ({ bool _v19674 = rt::eq(rt::dget(g::SV.C_S_8_21__2d___S__27_r, NM_selectedIndex), rt::V(0.0)); this->f_S__3f__21_1 = _v19674; _v19674; });
    ({ bool _v19675 = rt::eq(rt::dget(g::SV.C_S_8_21__2d___S__27_r, NM_selectedIndex), rt::V(2.0)); this->f_S__25__21_r = _v19675; _v19675; });
    (l_A__loc6_ = (C_S__23__21__21_::sm_S_5D(C_S__23__21__21_::dsm_S_5D_0()) * 30.0));
    (l_A__loc8_ = C_S__23__21__21_::sm_S__40_k());
    (l_A__loc7_ = 0.0);
    (l_A__loc1_ = C_S__23__21__21_::sm_S__21__2d_());
    if ((l_A__loc1_ > 0.0)) {
        (l_A__loc7_ = ((C_S__23__21__21_::sm_S_2_21__40_() * C_S__23__21__21_::sm_S__21_t()) * l_A__loc1_));
    }
    (l_A__loc3_ = (l_A__loc6_ + l_A__loc7_));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(0.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5857]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(rt::toint_d(12.0), false, true), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(1.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5858]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__20__21_q(rt::toint_d(12.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(2.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5859]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__20__21_q(rt::toint_d(13.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(3.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5860]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(rt::toint_d(24.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(4.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5861]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__20__21_q(rt::toint_d(24.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(5.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5862]), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(l_A__loc7_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(6.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5863]), rt::add(C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__20__21_q(rt::toint_d(96.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::VS(g::LS[113])))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(7.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5864]), C_S__26_c::sm_S_8_21_Z(l_A__loc8_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (l_A__loc4_ = C_S__26_c::sm_S__5e__21_r(rt::toint_d(4.0), this->f_S__25__21_r, this->f_S__3f__21_1));
    (l_A__loc2_ = C_S__26_c::sm_S__5e__21_r(rt::toint_d(63.0), this->f_S__25__21_r, this->f_S__3f__21_1));
    (l_A__loc5_ = rt::slot_string(((l_A__loc2_ > 0.0) ? rt::trv(rt::VS(g::LS[5865]), C_S__26_c::sm_S_8_21_Z(l_A__loc2_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::dcallv(rt::V((double)(rt::toint_d(rt::m_round(((100.0 * l_A__loc2_) / l_A__loc4_))))), rt::N_toString)) : rt::VS(g::LS[113]))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(8.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5866]), C_S__26_c::sm_S_8_21_Z(l_A__loc4_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), l_A__loc5_)));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(9.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5867]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(rt::toint_d(0.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(10.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5868]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__20__21_q(rt::toint_d(31.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(11.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5869]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(rt::toint_d(5.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(12.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5870]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(rt::toint_d(102.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(13.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5871]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(rt::toint_d(134.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(14.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5872]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(rt::toint_d(16.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(15.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5873]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__20__21_q(rt::toint_d(145.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(16.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5874]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(rt::toint_d(15.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(17.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5875]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__20__21_q(rt::toint_d(40.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(18.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5876]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(rt::toint_d(35.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(19.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5877]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(rt::toint_d(135.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(20.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5878]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__20__21_q(rt::toint_d(149.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
C_S_1F* C_S_1F::alloc_() {
    C_S_1F* o = rt::make<C_S_1F>();
    return o;
}
rt::Value C_S_1F::mk_(rt::Value* a, int n) {
    C_S_1F* o = alloc_();
    o->C_S_1F::ctor_();
    return rt::VO(o);
}
bool C_S_1F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b_4: out = rt::VB(f_S__5b_4); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_Q::dget(id, out);
}
bool C_S_1F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5b_4: f_S__5b_4 = rt::T(v); return true;
    default: break;
    }
    return C_S__3b_Q::dset(id, v);
}
bool C_S_1F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5b_4: { rt::Value f = rt::VB(f_S__5b_4); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__3b_Q::dcall(id, a, n, out);
}
bool C_S_1F::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5b_4: return false;
    default: break;
    }
    return C_S__3b_Q::dmeth(id);
}
bool C_S_1F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1F::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1F::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_22_4::ctor_() {
    RT_FN("S_7_22_4.S_7_22_4");
    (void)((this->C_S__3b_Q::ctor_(), rt::NUL));
}
rt::Value C_S_7_22_4::m_S__2b__21_R() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S_7_22_4.S__2b__21_R");
    (l_A__loc1_ = rt::toint_d(0.0));
    (void)(this->C_S__3b_Q::m_S__2b__21_R());
    (void)(this->m_S__27_x(rt::arr_lit({rt::VS(g::LS[113]), rt::trv(rt::VS(g::LS[5879])), rt::trv(rt::VS(g::LS[5880]))})));
    ({ int32_t _v19676 = this->f_S__3f__21_C; this->f_S__3d__21_G = _v19676; _v19676; });
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) < 10.0)) {
        (void)(this->m_S__20_m(false, true));
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S_7_22_4::m_S__21__21_G() {
    bool l_A__loc3_ = false;
    bool l_A__loc10_ = false;
    bool l_A__loc7_ = false;
    bool l_A__loc13_ = false;
    bool l_A__loc11_ = false;
    bool l_A__loc4_ = false;
    bool l_A__loc1_ = false;
    bool l_A__loc6_ = false;
    bool l_A__loc9_ = false;
    bool l_A__loc8_ = false;
    bool l_A__loc15_ = false;
    bool l_A__loc5_ = false;
    bool l_A__loc16_ = false;
    bool l_A__loc12_ = false;
    int32_t l_A__loc14_ = 0;
    int32_t l_A__loc2_ = 0;
    RT_FN("S_7_22_4.S__21__21_G");
    ({ bool _v19677 = rt::eq(rt::dget(g::SV.C_S_8_21__2d___S__27_r, NM_selectedIndex), rt::V(0.0)); this->f_S__3f__21_1 = _v19677; _v19677; });
    ({ bool _v19678 = rt::eq(rt::dget(g::SV.C_S_8_21__2d___S__27_r, NM_selectedIndex), rt::V(2.0)); this->f_S__25__21_r = _v19678; _v19678; });
    (l_A__loc3_ = (((double)(C_S_8G::sg_S_8_21_H())) >= 14.0));
    if ((!(this->f_S__3e__22_5 == l_A__loc3_))) {
        if (this->f_S__3e__22_5) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19679 = l_A__loc3_; this->f_S__3e__22_5 = _v19679; _v19679; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc10_ = (((double)(C_S_8G::sg_S__2c_P())) >= 2.0));
    if ((!(this->f_S_6_22_3 == l_A__loc10_))) {
        if (this->f_S_6_22_3) {
            (void)(this->m_S__27__21__2b_());
            (void)(this->m_S__27__21__2b_());
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
            (void)(this->m_S__20_m(false, true));
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19680 = l_A__loc10_; this->f_S_6_22_3 = _v19680; _v19680; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc7_ = C_S_8G::sm_S__3c_P(g::SV.C_S_3N__id));
    if ((!(this->f_S__2d_n == l_A__loc7_))) {
        if (this->f_S__2d_n) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19681 = l_A__loc7_; this->f_S__2d_n = _v19681; _v19681; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc13_ = C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21__3b___id));
    if ((!(this->f_S__22__21__5e_ == l_A__loc13_))) {
        if (this->f_S__22__21__5e_) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19682 = l_A__loc13_; this->f_S__22__21__5e_ = _v19682; _v19682; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc11_ = C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id));
    if ((!(this->f_S__60_S == l_A__loc11_))) {
        if (this->f_S__60_S) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19683 = l_A__loc11_; this->f_S__60_S = _v19683; _v19683; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc4_ = ({ bool _t19685 = ({ bool _t19684 = l_A__loc7_; _t19684 ? _t19684 : (bool)(l_A__loc13_); }); _t19685 ? _t19685 : (bool)(l_A__loc11_); }));
    if ((!(this->f_S__40__22_4 == l_A__loc4_))) {
        if (this->f_S__40__22_4) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19686 = l_A__loc4_; this->f_S__40__22_4 = _v19686; _v19686; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc1_ = C_S__26_c::sm_S__27__21__5f_());
    if ((!(this->f_S_4Y == l_A__loc1_))) {
        if (this->f_S_4Y) {
            (void)(this->m_S__27__21__2b_());
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19687 = l_A__loc1_; this->f_S_4Y = _v19687; _v19687; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc6_ = C_S_8G::sm_S__3c_P(g::SV.C_S__5b_r__id));
    if ((!(this->f_S_1_21_2 == l_A__loc6_))) {
        if (this->f_S_1_21_2) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19688 = l_A__loc6_; this->f_S_1_21_2 = _v19688; _v19688; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc9_ = C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_z__id));
    if ((!(this->f_S__2b__22__20_ == l_A__loc9_))) {
        if (this->f_S__2b__22__20_) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19689 = l_A__loc9_; this->f_S__2b__22__20_ = _v19689; _v19689; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc8_ = C_S_8G::sm_S__3c_P(g::SV.C_S__60__21_z__id));
    if ((!(this->f_S__40__21_x == l_A__loc8_))) {
        if (this->f_S__40__21_x) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19690 = l_A__loc8_; this->f_S__40__21_x = _v19690; _v19690; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc15_ = C_S_8G::sm_S__3c_P(g::SV.C_S__27__21_z__id));
    if ((!(this->f_S__3e__21_x == l_A__loc15_))) {
        if (this->f_S__3e__21_x) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19691 = l_A__loc15_; this->f_S__3e__21_x = _v19691; _v19691; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc5_ = (((double)(C_S_8G::sg_S_8_21_H())) >= 130.0));
    if ((!(this->f_S_9_22_0 == l_A__loc5_))) {
        if (this->f_S_9_22_0) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19692 = l_A__loc5_; this->f_S_9_22_0 = _v19692; _v19692; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc16_ = ({ rt::Value _o19693 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3e__22_7__id); C_S__60_6* _p19694 = rt::as_ptr<C_S__60_6>(_o19693); _p19694 ? _p19694->f_S__3f__21_6 : rt::T(rt::dget(_o19693, NM_S__3f__21_6)); }));
    if ((!(this->f_S__3f__22_8 == l_A__loc16_))) {
        if (this->f_S__3f__22_8) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19695 = l_A__loc16_; this->f_S__3f__22_8 = _v19695; _v19695; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc12_ = (((double)(C_S_8G::sg_S__2c_P())) >= 4.0));
    if ((!(this->f_S__3e__22_H == l_A__loc12_))) {
        if (this->f_S__3e__22_H) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19696 = l_A__loc12_; this->f_S__3e__22_H = _v19696; _v19696; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc14_ = this->f_S__3d__21_G);
    (l_A__loc14_ = rt::toint_d((((double)(l_A__loc14_)) + 1.0)));
    (void)(this->m_S__5d__22_4(((uint32_t)(l_A__loc14_)), C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id)));
    (l_A__loc14_ = rt::toint_d((((double)(l_A__loc14_)) + 1.0)));
    (void)(this->m_S__5d__22_4(((uint32_t)(l_A__loc14_)), C_S_8G::sm_S__23_N(g::SV.C_S__3b__21__2b___id)));
    if (l_A__loc3_) {
        (l_A__loc14_ = rt::toint_d((((double)(l_A__loc14_)) + 1.0)));
        (void)(this->m_S__5d__22_4(((uint32_t)(l_A__loc14_)), C_S_8G::sm_S__23_N(g::SV.C_S__25__2c___id)));
    }
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::toint_d(1.0));
    while ((((double)(l_A__loc2_)) <= 6.0)) {
        if ((!((((double)(l_A__loc2_)) == 3.0) && (({ bool _t19697 = (!this->f_S__2d_n); _t19697 ? (bool)((!this->f_S__22__21__5e_)) : _t19697; }) && (!this->f_S__60_S))))) {
            if ((!(({ bool _t19698 = (((double)(l_A__loc2_)) >= 4.0); _t19698 ? (bool)((((double)(l_A__loc2_)) <= 6.0)) : _t19698; }) && (!this->f_S_6_22_3)))) {
                (l_A__loc14_ = rt::toint_d((((double)(l_A__loc14_)) + 1.0)));
                (void)(this->m_S__5d__22_4(((uint32_t)(l_A__loc14_)), C_S_8G::sm_S__23_N(rt::touint(rt::arr_at(g::SV.C_S__26_c__S__2c_L, ((double)(l_A__loc2_)))))));
            }
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) <= 15.0)) {
        if ((!(((double)(l_A__loc2_)) == 11.0))) {
            if ((!((((double)(l_A__loc2_)) == 7.0) && (!this->f_S__22__21__5e_)))) {
                if ((!((((double)(l_A__loc2_)) == 6.0) && (!this->f_S__2d_n)))) {
                    if ((!((((double)(l_A__loc2_)) == 8.0) && (!this->f_S__60_S)))) {
                        if ((!((({ bool _t19699 = (((double)(l_A__loc2_)) == 9.0); _t19699 ? _t19699 : (bool)((((double)(l_A__loc2_)) == 10.0)); })) && (!this->f_S_4Y)))) {
                            if ((!((((double)(l_A__loc2_)) == 12.0) && (!this->f_S_1_21_2)))) {
                                if ((!((((double)(l_A__loc2_)) == 14.0) && (!l_A__loc8_)))) {
                                    if ((!((((double)(l_A__loc2_)) == 13.0) && (!l_A__loc9_)))) {
                                        if ((!((((double)(l_A__loc2_)) == 15.0) && (!l_A__loc15_)))) {
                                            (l_A__loc14_ = rt::toint_d((((double)(l_A__loc14_)) + 1.0)));
                                            (void)(this->m_S__5d__22_4(((uint32_t)(l_A__loc14_)), C_S_8G::sm_S__23_N(rt::touint(rt::arr_at(g::SV.C_S__26_c__S_4_3c_, ((double)(l_A__loc2_)))))));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    if (l_A__loc5_) {
        (l_A__loc14_ = rt::toint_d((((double)(l_A__loc14_)) + 1.0)));
        (void)(this->m_S__5d__22_4(((uint32_t)(l_A__loc14_)), C_S_8G::sm_S__23_N(g::SV.C_S__27__22__25___id)));
    }
    if (l_A__loc16_) {
        (l_A__loc14_ = rt::toint_d((((double)(l_A__loc14_)) + 1.0)));
        (void)(this->m_S__5d__22_4(((uint32_t)(l_A__loc14_)), C_S_8G::sm_S__23_N(g::SV.C_S__40__22_7__id)));
    }
    if (l_A__loc12_) {
        (l_A__loc14_ = rt::toint_d((((double)(l_A__loc14_)) + 1.0)));
        (void)(this->m_S__5d__22_4(((uint32_t)(l_A__loc14_)), C_S_8G::sm_S__23_N(g::SV.C_S_1_22_F__id)));
    }
    return rt::NUL;
}
rt::Value C_S_7_22_4::m_S__5d__22_4(uint32_t p0, rt::Value p1) {
    uint32_t l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("S_7_22_4.S__5d__22_4");
    (void)(this->m_S__3f__21__5e_(((int32_t)(l_param1)), rt::toint_d(0.0), ({ rt::Value _o19700 = l_param2; C_S_84* _p19701 = rt::as_ptr<C_S_84>(_o19700); _p19701 ? _p19701->m_S_1_21_P() : rt::dcallv(_o19700, NM_S_1_21_P); })));
    (void)(this->m_S__3f__21__5e_(((int32_t)(l_param1)), rt::toint_d(1.0), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S_9_21_P(({ rt::Value _o19702 = l_param2; C_S_84* _p19703 = rt::as_ptr<C_S_84>(_o19702); _p19703 ? _p19703->f_id : rt::touint(rt::dget(_o19702, NM_id)); }), this->f_S__25__21_r, this->f_S__3f__21_1, true), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    (void)(this->m_S__3f__21__5e_(((int32_t)(l_param1)), rt::toint_d(2.0), C_S__26_c::sm_S__23__21_R(C_S__26_c::sm_S_7i(({ rt::Value _o19704 = l_param2; C_S_84* _p19705 = rt::as_ptr<C_S_84>(_o19704); _p19705 ? _p19705->f_id : rt::touint(rt::dget(_o19704, NM_id)); }), this->f_S__25__21_r, this->f_S__3f__21_1, true), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2())));
    return rt::NUL;
}
C_S_7_22_4* C_S_7_22_4::alloc_() {
    C_S_7_22_4* o = rt::make<C_S_7_22_4>();
    return o;
}
rt::Value C_S_7_22_4::mk_(rt::Value* a, int n) {
    C_S_7_22_4* o = alloc_();
    o->C_S_7_22_4::ctor_();
    return rt::VO(o);
}
bool C_S_7_22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3d__21_G: out = rt::V((double)(f_S__3d__21_G)); return true;
    case NM_S__3e__22_5: out = rt::VB(f_S__3e__22_5); return true;
    case NM_S__40__22_4: out = rt::VB(f_S__40__22_4); return true;
    case NM_S_6_22_3: out = rt::VB(f_S_6_22_3); return true;
    case NM_S__22__21__5e_: out = rt::VB(f_S__22__21__5e_); return true;
    case NM_S__2d_n: out = rt::VB(f_S__2d_n); return true;
    case NM_S__60_S: out = rt::VB(f_S__60_S); return true;
    case NM_S_4Y: out = rt::VB(f_S_4Y); return true;
    case NM_S_1_21_2: out = rt::VB(f_S_1_21_2); return true;
    case NM_S__40__21_x: out = rt::VB(f_S__40__21_x); return true;
    case NM_S__2b__22__20_: out = rt::VB(f_S__2b__22__20_); return true;
    case NM_S__3e__21_x: out = rt::VB(f_S__3e__21_x); return true;
    case NM_S_9_22_0: out = rt::VB(f_S_9_22_0); return true;
    case NM_S__3f__22_8: out = rt::VB(f_S__3f__22_8); return true;
    case NM_S__3e__22_H: out = rt::VB(f_S__3e__22_H); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5d__22_4: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_Q::dget(id, out);
}
bool C_S_7_22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3d__21_G: f_S__3d__21_G = rt::toint(v); return true;
    case NM_S__3e__22_5: f_S__3e__22_5 = rt::T(v); return true;
    case NM_S__40__22_4: f_S__40__22_4 = rt::T(v); return true;
    case NM_S_6_22_3: f_S_6_22_3 = rt::T(v); return true;
    case NM_S__22__21__5e_: f_S__22__21__5e_ = rt::T(v); return true;
    case NM_S__2d_n: f_S__2d_n = rt::T(v); return true;
    case NM_S__60_S: f_S__60_S = rt::T(v); return true;
    case NM_S_4Y: f_S_4Y = rt::T(v); return true;
    case NM_S_1_21_2: f_S_1_21_2 = rt::T(v); return true;
    case NM_S__40__21_x: f_S__40__21_x = rt::T(v); return true;
    case NM_S__2b__22__20_: f_S__2b__22__20_ = rt::T(v); return true;
    case NM_S__3e__21_x: f_S__3e__21_x = rt::T(v); return true;
    case NM_S_9_22_0: f_S_9_22_0 = rt::T(v); return true;
    case NM_S__3f__22_8: f_S__3f__22_8 = rt::T(v); return true;
    case NM_S__3e__22_H: f_S__3e__22_H = rt::T(v); return true;
    default: break;
    }
    return C_S__3b_Q::dset(id, v);
}
bool C_S_7_22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__22_4: out = m_S__5d__22_4(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<rt::Value>(a, n, 1, rt::UNDEF)); return true;
    case NM_S__3d__21_G: { rt::Value f = rt::V((double)(f_S__3d__21_G)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__22_5: { rt::Value f = rt::VB(f_S__3e__22_5); out = rt::call_value(f, a, n); return true; }
    case NM_S__40__22_4: { rt::Value f = rt::VB(f_S__40__22_4); out = rt::call_value(f, a, n); return true; }
    case NM_S_6_22_3: { rt::Value f = rt::VB(f_S_6_22_3); out = rt::call_value(f, a, n); return true; }
    case NM_S__22__21__5e_: { rt::Value f = rt::VB(f_S__22__21__5e_); out = rt::call_value(f, a, n); return true; }
    case NM_S__2d_n: { rt::Value f = rt::VB(f_S__2d_n); out = rt::call_value(f, a, n); return true; }
    case NM_S__60_S: { rt::Value f = rt::VB(f_S__60_S); out = rt::call_value(f, a, n); return true; }
    case NM_S_4Y: { rt::Value f = rt::VB(f_S_4Y); out = rt::call_value(f, a, n); return true; }
    case NM_S_1_21_2: { rt::Value f = rt::VB(f_S_1_21_2); out = rt::call_value(f, a, n); return true; }
    case NM_S__40__21_x: { rt::Value f = rt::VB(f_S__40__21_x); out = rt::call_value(f, a, n); return true; }
    case NM_S__2b__22__20_: { rt::Value f = rt::VB(f_S__2b__22__20_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__21_x: { rt::Value f = rt::VB(f_S__3e__21_x); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_22_0: { rt::Value f = rt::VB(f_S_9_22_0); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__22_8: { rt::Value f = rt::VB(f_S__3f__22_8); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__22_H: { rt::Value f = rt::VB(f_S__3e__22_H); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__3b_Q::dcall(id, a, n, out);
}
bool C_S_7_22_4::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__22_4: return true;
    case NM_S__3d__21_G: return false;
    case NM_S__3e__22_5: return false;
    case NM_S__40__22_4: return false;
    case NM_S_6_22_3: return false;
    case NM_S__22__21__5e_: return false;
    case NM_S__2d_n: return false;
    case NM_S__60_S: return false;
    case NM_S_4Y: return false;
    case NM_S_1_21_2: return false;
    case NM_S__40__21_x: return false;
    case NM_S__2b__22__20_: return false;
    case NM_S__3e__21_x: return false;
    case NM_S_9_22_0: return false;
    case NM_S__3f__22_8: return false;
    case NM_S__3e__22_H: return false;
    default: break;
    }
    return C_S__3b_Q::dmeth(id);
}
bool C_S_7_22_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22_4::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__24_::ctor_() {
    RT_FN("S__40__24_.S__40__24_");
    (void)((this->C_S__3b_Q::ctor_(), rt::NUL));
}
rt::Value C_S__40__24_::m_S__2b__21_R() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S__40__24_.S__2b__21_R");
    (l_A__loc1_ = rt::toint_d(0.0));
    (void)(this->C_S__3b_Q::m_S__2b__21_R());
    (void)(this->m_S__22_w(rt::trv(rt::VS(g::LS[5881]), rt::VS(g::LS[151]))));
    (void)(this->m_S__22_w(rt::trv(rt::VS(g::LS[5881]), rt::VS(g::LS[151]))));
    (void)(this->m_S__22_w(rt::trv(rt::VS(g::LS[5881]), rt::VS(g::LS[151]))));
    (void)(this->m_S__22_w(rt::trv(rt::VS(g::LS[5882]), rt::VS(g::LS[151]))));
    (void)(this->m_S__22_w(C_S__3b_Q::dm_S__22_w_0()));
    (void)(this->m_S__27_x(rt::arr_lit({rt::VS(g::LS[113]), rt::trv(rt::VS(g::LS[3910])), rt::trv(rt::VS(g::LS[5883])), rt::trv(rt::VS(g::LS[5884])), rt::trv(rt::VS(g::LS[5747]))})));
    ({ int32_t _v19706 = this->f_S__3f__21_C; this->f_S__3d__21_G = _v19706; _v19706; });
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) <= 5.0)) {
        (void)(this->m_S__20_m(false, true));
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S__40__24_::m_S__21__21_G() {
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc5_ = 0;
    int32_t l_A__loc3_ = 0;
    bool l_A__loc11_ = false;
    bool l_A__loc7_ = false;
    bool l_A__loc10_ = false;
    bool l_A__loc1_ = false;
    bool l_A__loc4_ = false;
    bool l_A__loc6_ = false;
    bool l_A__loc8_ = false;
    bool l_A__loc9_ = false;
    bool l_A__loc13_ = false;
    int32_t l_A__loc12_ = 0;
    RT_FN("S__40__24_.S__21__21_G");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::toint_d(0.0));
    ({ bool _v19707 = rt::eq(rt::dget(g::SV.C_S_8_21__2d___S__27_r, NM_selectedIndex), rt::V(0.0)); this->f_S__3f__21_1 = _v19707; _v19707; });
    ({ bool _v19708 = rt::eq(rt::dget(g::SV.C_S_8_21__2d___S__27_r, NM_selectedIndex), rt::V(2.0)); this->f_S__25__21_r = _v19708; _v19708; });
    (l_A__loc11_ = C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21__3b___id));
    if ((!(this->f_S__22__21__5e_ == l_A__loc11_))) {
        if (this->f_S__22__21__5e_) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19709 = l_A__loc11_; this->f_S__22__21__5e_ = _v19709; _v19709; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc7_ = C_S_8G::sm_S__3c_P(g::SV.C_S_3N__id));
    if ((!(this->f_S__2d_n == l_A__loc7_))) {
        if (this->f_S__2d_n) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19710 = l_A__loc7_; this->f_S__2d_n = _v19710; _v19710; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc10_ = C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id));
    if ((!(this->f_S__60_S == l_A__loc10_))) {
        if (this->f_S__60_S) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19711 = l_A__loc10_; this->f_S__60_S = _v19711; _v19711; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc1_ = C_S__26_c::sm_S__27__21__5f_());
    if ((!(this->f_S_4Y == l_A__loc1_))) {
        if (this->f_S_4Y) {
            (void)(this->m_S__27__21__2b_());
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19712 = l_A__loc1_; this->f_S_4Y = _v19712; _v19712; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc4_ = C_S_8G::sm_S__3c_P(g::SV.C_S__3e_L__id));
    if ((!(this->f_S__5d__21__5f_ == l_A__loc4_))) {
        if (this->f_S__5d__21__5f_) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19713 = l_A__loc4_; this->f_S__5d__21__5f_ = _v19713; _v19713; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc6_ = C_S_8G::sm_S__3c_P(g::SV.C_S__5b_r__id));
    if ((!(this->f_S_1_21_2 == l_A__loc6_))) {
        if (this->f_S_1_21_2) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19714 = l_A__loc6_; this->f_S_1_21_2 = _v19714; _v19714; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc8_ = C_S_8G::sm_S__3c_P(g::SV.C_S__60__21_z__id));
    if ((!(this->f_S__40__21_x == l_A__loc8_))) {
        if (this->f_S__40__21_x) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19715 = l_A__loc8_; this->f_S__40__21_x = _v19715; _v19715; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc9_ = C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_z__id));
    if ((!(this->f_S__2b__22__20_ == l_A__loc9_))) {
        if (this->f_S__2b__22__20_) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19716 = l_A__loc9_; this->f_S__2b__22__20_ = _v19716; _v19716; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (l_A__loc13_ = C_S_8G::sm_S__3c_P(g::SV.C_S__27__21_z__id));
    if ((!(this->f_S__3e__21_x == l_A__loc13_))) {
        if (this->f_S__3e__21_x) {
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__20_m(false, true));
        }
        ({ bool _v19717 = l_A__loc13_; this->f_S__3e__21_x = _v19717; _v19717; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (void)(this->m_S__3f__21__5e_(rt::toint_d(0.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5860]), C_S__26_c::sm_S_8_21_Z(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(1.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5885]), C_S__26_c::sm_S_8_21_Z(C_S__23__21__21_::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(2.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5886]), C_S__26_c::sm_S_8_21_Z(C_S__23__21__21_::sm_S_1_3d_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(3.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5882]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__40__21__5b_(this->f_S__3f__21_1, false, true), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    (l_A__loc12_ = this->f_S__3d__21_G);
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) <= 15.0)) {
        if ((!((((double)(l_A__loc2_)) == 7.0) && (!this->f_S__22__21__5e_)))) {
            if ((!((((double)(l_A__loc2_)) == 6.0) && (!this->f_S__2d_n)))) {
                if ((!((((double)(l_A__loc2_)) == 8.0) && (!this->f_S__60_S)))) {
                    if ((!((({ bool _t19718 = (((double)(l_A__loc2_)) == 9.0); _t19718 ? _t19718 : (bool)((((double)(l_A__loc2_)) == 10.0)); })) && (!this->f_S_4Y)))) {
                        if ((!((((double)(l_A__loc2_)) == 11.0) && (!this->f_S__5d__21__5f_)))) {
                            if ((!((((double)(l_A__loc2_)) == 12.0) && (!this->f_S_1_21_2)))) {
                                if ((!((((double)(l_A__loc2_)) == 14.0) && (!l_A__loc8_)))) {
                                    if ((!((((double)(l_A__loc2_)) == 13.0) && (!l_A__loc9_)))) {
                                        if ((!((((double)(l_A__loc2_)) == 15.0) && (!l_A__loc13_)))) {
                                            (l_A__loc12_ = rt::toint_d((((double)(l_A__loc12_)) + 1.0)));
                                            (void)(this->m_S__3f__21__5e_(l_A__loc12_, rt::toint_d(0.0), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(l_A__loc2_)))));
                                            if ((!C_S__26_c::sm_S__3e__25_(l_A__loc2_))) {
                                                (void)(this->m_S__3f__21__5e_(l_A__loc12_, rt::toint_d(1.0), rt::VS(g::LS[134])));
                                            } else {
                                                (l_A__loc5_ = C_S__26_c::sm_S_1_21_D(l_A__loc2_));
                                                (void)(this->m_S__3f__21__5e_(l_A__loc12_, rt::toint_d(1.0), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(l_A__loc5_, this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
                                            }
                                            (l_A__loc3_ = C_S__26_c::sm_S__5e_Z(l_A__loc2_));
                                            (void)(this->m_S__3f__21__5e_(l_A__loc12_, rt::toint_d(2.0), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__5e__21_r(l_A__loc3_, this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
                                            (void)(this->m_S__3f__21__5e_(l_A__loc12_, rt::toint_d(3.0), C_S__26_c::sm_S__23__21_R(C_S__26_c::sm_S__5e__21_r(C_S__26_c::sm_S__3b__21_4(l_A__loc2_), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2())));
                                            (void)(this->m_S__3f__21__5e_(l_A__loc12_, rt::toint_d(4.0), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__3f__21_v(l_A__loc2_, C_S__26_c::dsm_S__3f__21_v_1(), C_S__26_c::dsm_S__3f__21_v_2()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return rt::NUL;
}
C_S__40__24_* C_S__40__24_::alloc_() {
    C_S__40__24_* o = rt::make<C_S__40__24_>();
    return o;
}
rt::Value C_S__40__24_::mk_(rt::Value* a, int n) {
    C_S__40__24_* o = alloc_();
    o->C_S__40__24_::ctor_();
    return rt::VO(o);
}
bool C_S__40__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3d__21_G: out = rt::V((double)(f_S__3d__21_G)); return true;
    case NM_S__22__21__5e_: out = rt::VB(f_S__22__21__5e_); return true;
    case NM_S__2d_n: out = rt::VB(f_S__2d_n); return true;
    case NM_S__60_S: out = rt::VB(f_S__60_S); return true;
    case NM_S_4Y: out = rt::VB(f_S_4Y); return true;
    case NM_S__5d__21__5f_: out = rt::VB(f_S__5d__21__5f_); return true;
    case NM_S_1_21_2: out = rt::VB(f_S_1_21_2); return true;
    case NM_S__40__21_x: out = rt::VB(f_S__40__21_x); return true;
    case NM_S__2b__22__20_: out = rt::VB(f_S__2b__22__20_); return true;
    case NM_S__3e__21_x: out = rt::VB(f_S__3e__21_x); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_Q::dget(id, out);
}
bool C_S__40__24_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3d__21_G: f_S__3d__21_G = rt::toint(v); return true;
    case NM_S__22__21__5e_: f_S__22__21__5e_ = rt::T(v); return true;
    case NM_S__2d_n: f_S__2d_n = rt::T(v); return true;
    case NM_S__60_S: f_S__60_S = rt::T(v); return true;
    case NM_S_4Y: f_S_4Y = rt::T(v); return true;
    case NM_S__5d__21__5f_: f_S__5d__21__5f_ = rt::T(v); return true;
    case NM_S_1_21_2: f_S_1_21_2 = rt::T(v); return true;
    case NM_S__40__21_x: f_S__40__21_x = rt::T(v); return true;
    case NM_S__2b__22__20_: f_S__2b__22__20_ = rt::T(v); return true;
    case NM_S__3e__21_x: f_S__3e__21_x = rt::T(v); return true;
    default: break;
    }
    return C_S__3b_Q::dset(id, v);
}
bool C_S__40__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__3d__21_G: { rt::Value f = rt::V((double)(f_S__3d__21_G)); out = rt::call_value(f, a, n); return true; }
    case NM_S__22__21__5e_: { rt::Value f = rt::VB(f_S__22__21__5e_); out = rt::call_value(f, a, n); return true; }
    case NM_S__2d_n: { rt::Value f = rt::VB(f_S__2d_n); out = rt::call_value(f, a, n); return true; }
    case NM_S__60_S: { rt::Value f = rt::VB(f_S__60_S); out = rt::call_value(f, a, n); return true; }
    case NM_S_4Y: { rt::Value f = rt::VB(f_S_4Y); out = rt::call_value(f, a, n); return true; }
    case NM_S__5d__21__5f_: { rt::Value f = rt::VB(f_S__5d__21__5f_); out = rt::call_value(f, a, n); return true; }
    case NM_S_1_21_2: { rt::Value f = rt::VB(f_S_1_21_2); out = rt::call_value(f, a, n); return true; }
    case NM_S__40__21_x: { rt::Value f = rt::VB(f_S__40__21_x); out = rt::call_value(f, a, n); return true; }
    case NM_S__2b__22__20_: { rt::Value f = rt::VB(f_S__2b__22__20_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__21_x: { rt::Value f = rt::VB(f_S__3e__21_x); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__3b_Q::dcall(id, a, n, out);
}
bool C_S__40__24_::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S__3d__21_G: return false;
    case NM_S__22__21__5e_: return false;
    case NM_S__2d_n: return false;
    case NM_S__60_S: return false;
    case NM_S_4Y: return false;
    case NM_S__5d__21__5f_: return false;
    case NM_S_1_21_2: return false;
    case NM_S__40__21_x: return false;
    case NM_S__2b__22__20_: return false;
    case NM_S__3e__21_x: return false;
    default: break;
    }
    return C_S__3b_Q::dmeth(id);
}
bool C_S__40__24_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__24_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__21_Y::ctor_() {
    RT_FN("S__60__21_Y.S__60__21_Y");
    (void)((this->C_S__3b_Q::ctor_(), rt::NUL));
}
rt::Value C_S__60__21_Y::m_S__2b__21_R() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S__60__21_Y.S__2b__21_R");
    (l_A__loc1_ = rt::toint_d(0.0));
    (void)(this->C_S__3b_Q::m_S__2b__21_R());
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) <= 6.0)) {
        (void)(this->m_S__22_w(C_S__3b_Q::dm_S__22_w_0()));
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S__60__21_Y::m_S__21__21_G() {
    bool l_A__loc1_ = false;
    RT_FN("S__60__21_Y.S__21__21_G");
    ({ bool _v19719 = rt::eq(rt::dget(g::SV.C_S_8_21__2d___S__27_r, NM_selectedIndex), rt::V(0.0)); this->f_S__3f__21_1 = _v19719; _v19719; });
    ({ bool _v19720 = rt::eq(rt::dget(g::SV.C_S_8_21__2d___S__27_r, NM_selectedIndex), rt::V(2.0)); this->f_S__25__21_r = _v19720; _v19720; });
    (l_A__loc1_ = (((double)(C_S_8G::sg_S__2c_P())) >= 2.0));
    if ((!(this->f_S_7_21_m == l_A__loc1_))) {
        if (this->f_S_7_21_m) {
            (void)(this->m_S__27__21__2b_());
            (void)(this->m_S__27__21__2b_());
            (void)(this->m_S__27__21__2b_());
        } else {
            (void)(this->m_S__22_w(C_S__3b_Q::dm_S__22_w_0()));
            (void)(this->m_S__22_w(C_S__3b_Q::dm_S__22_w_0()));
            (void)(this->m_S__22_w(C_S__3b_Q::dm_S__22_w_0()));
        }
        ({ bool _v19721 = l_A__loc1_; this->f_S_7_21_m = _v19721; _v19721; });
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    }
    (void)(this->m_S__3f__21__5e_(rt::toint_d(0.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5887]), C_S__26_c::sm_S__23__21_R(C_S__26_c::sm_S__5e__21_r(rt::toint_d(1.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(1.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5888]), C_S__26_c::sm_S__23__21_R(rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 29.0)), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(2.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5889]), C_S__26_c::sm_S__23__21_R(rt::m_maxv(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), ((!this->f_S__3f__21_1) ? rt::arr_at(g::SV.C_S_8G__S__3d_y, 39.0) : rt::V(0.0)), (this->f_S__25__21_r ? rt::arr_at(g::SV.C_S_8G__S__40_w, 39.0) : rt::V(0.0))), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(3.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5890]), C_S__26_c::sm_S__23__21_R(C_S__26_c::sm_S__5e__21_r(rt::toint_d(45.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(4.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5891]), C_S__26_c::sm_S__23__21_R(((C_S__26_c::sm_S__5e__21_r(rt::toint_d(1.0), this->f_S__25__21_r, this->f_S__3f__21_1) - C_S__26_c::sm_S__5e__21_r(rt::toint_d(2.0), this->f_S__25__21_r, this->f_S__3f__21_1)) - C_S__26_c::sm_S__5e__21_r(rt::toint_d(3.0), this->f_S__25__21_r, this->f_S__3f__21_1)), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(5.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5892]), C_S__26_c::sm_S__23__21_R(C_S__26_c::sm_S__5e__21_r(rt::toint_d(2.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
    (void)(this->m_S__3f__21__5e_(rt::toint_d(6.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5893]), C_S__26_c::sm_S__23__21_R(C_S__26_c::sm_S__5e__21_r(rt::toint_d(3.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
    if (this->f_S_7_21_m) {
        (void)(this->m_S__3f__21__5e_(rt::toint_d(7.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5894]), C_S__26_c::sm_S__23__21_R(C_S__26_c::sm_S__5e__21_r(rt::toint_d(48.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
        (void)(this->m_S__3f__21__5e_(rt::toint_d(8.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5895]), C_S__26_c::sm_S__23__21_R(C_S__26_c::sm_S__5e__21_r(rt::toint_d(14.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
        (void)(this->m_S__3f__21__5e_(rt::toint_d(9.0), rt::toint_d(0.0), rt::trv(rt::VS(g::LS[5896]), C_S__26_c::sm_S__23__21_R(C_S__26_c::sm_S__5e__21_r(rt::toint_d(36.0), this->f_S__25__21_r, this->f_S__3f__21_1), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
    }
    return rt::NUL;
}
C_S__60__21_Y* C_S__60__21_Y::alloc_() {
    C_S__60__21_Y* o = rt::make<C_S__60__21_Y>();
    return o;
}
rt::Value C_S__60__21_Y::mk_(rt::Value* a, int n) {
    C_S__60__21_Y* o = alloc_();
    o->C_S__60__21_Y::ctor_();
    return rt::VO(o);
}
bool C_S__60__21_Y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_7_21_m: out = rt::VB(f_S_7_21_m); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_Q::dget(id, out);
}
bool C_S__60__21_Y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_7_21_m: f_S_7_21_m = rt::T(v); return true;
    default: break;
    }
    return C_S__3b_Q::dset(id, v);
}
bool C_S__60__21_Y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_7_21_m: { rt::Value f = rt::VB(f_S_7_21_m); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__3b_Q::dcall(id, a, n, out);
}
bool C_S__60__21_Y::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_7_21_m: return false;
    default: break;
    }
    return C_S__3b_Q::dmeth(id);
}
bool C_S__60__21_Y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__21_Y::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__21_Y::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__21_Y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__21_S::ctor_() {
    RT_FN("S__25__21_S.S__25__21_S");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S__25__21_S::m_S__2b__21_R() {
    RT_FN("S__25__21_S.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    if (g::SV.C_S__20_g__S__22_g) {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale3Image), g::SV.C_S_99__S__3d_M), rt::callv(rt::dget(rt::VO(this), NM_Scale3Image), g::SV.C_S_99__S__3e_V), rt::callv(rt::dget(rt::VO(this), NM_Scale3Image), g::SV.C_S_99__S_6D), rt::NUL, rt::callv(rt::dget(rt::VO(this), NM_Scale3Image), g::SV.C_S_99__S_27)));
        ({ rt::Value _v19722 = rt::V(170.0); rt::dset(rt::VO(this), NM_width, _v19722); _v19722; });
        ({ rt::Value _v19723 = rt::V(40.0); rt::dset(rt::VO(this), NM_height, _v19723); _v19723; });
    } else {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3d__21_N), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__23_T), rt::callv(rt::dget(rt::VO(this), NM_Scale3Image), g::SV.C_S_99__S_6D), rt::NUL, rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_8r)));
        ({ rt::Value _v19724 = rt::V(250.0); rt::dset(rt::VO(this), NM_width, _v19724); _v19724; });
        ({ rt::Value _v19725 = rt::V(50.0); rt::dset(rt::VO(this), NM_height, _v19725); _v19725; });
    }
    ({ rt::Value _v19726 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_Z = _v19726; _v19726; });
    ({ rt::Value _v19727 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_textAlign, _v19727); _v19727; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v19728 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(36.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v19728); _v19728; });
        ({ rt::Value _v19729 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(36.0), rt::V(16185078.0), rt::V(0.5)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_disabledElementFormat, _v19729); _v19729; });
        ({ rt::Value _v19730 = rt::V(13.0); rt::dset(this->f_S_9_21_Z, NM_y, _v19730); _v19730; });
        ({ rt::Value _v19731 = rt::dget(rt::VO(this), NM_height); rt::dset(this->f_S_9_21_Z, NM_height, _v19731); _v19731; });
    } else {
        ({ rt::Value _v19732 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(18.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v19732); _v19732; });
        ({ rt::Value _v19733 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(18.0), rt::V(16185078.0), rt::V(0.5)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_disabledElementFormat, _v19733); _v19733; });
        ({ rt::Value _v19734 = rt::V(12.0); rt::dset(this->f_S_9_21_Z, NM_height, _v19734); _v19734; });
    }
    ({ rt::Value _v19735 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S_9_21_Z, NM_width, _v19735); _v19735; });
    ({ rt::Value _v19736 = rt::trv(rt::VS(g::LS[5897])); rt::dset(this->f_S_9_21_Z, NM_text, _v19736); _v19736; });
    ({ rt::Value _v19737 = rt::VB(false); rt::dset(this->f_S_9_21_Z, NM_touchable, _v19737); _v19737; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_9_21_Z));
    ({ rt::Value _v19738 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S__25__21_Y = _v19738; _v19738; });
    ({ rt::Value _v19739 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S__25__21_Y, NM_textRendererProperties), NM_textAlign, _v19739); _v19739; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v19740 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(20.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S__25__21_Y, NM_textRendererProperties), NM_elementFormat, _v19740); _v19740; });
        ({ rt::Value _v19741 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(20.0), rt::V(16185078.0), rt::V(0.5)); rt::dset(rt::dget(this->f_S__25__21_Y, NM_textRendererProperties), NM_disabledElementFormat, _v19741); _v19741; });
        ({ rt::Value _v19742 = rt::V(24.0); rt::dset(this->f_S__25__21_Y, NM_y, _v19742); _v19742; });
    } else {
        ({ rt::Value _v19743 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(18.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S__25__21_Y, NM_textRendererProperties), NM_elementFormat, _v19743); _v19743; });
        ({ rt::Value _v19744 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(18.0), rt::V(16185078.0), rt::V(0.5)); rt::dset(rt::dget(this->f_S__25__21_Y, NM_textRendererProperties), NM_disabledElementFormat, _v19744); _v19744; });
        ({ rt::Value _v19745 = rt::V(12.0); rt::dset(this->f_S__25__21_Y, NM_height, _v19745); _v19745; });
        ({ rt::Value _v19746 = rt::V(27.0); rt::dset(this->f_S__25__21_Y, NM_y, _v19746); _v19746; });
    }
    ({ rt::Value _v19747 = rt::VB(false); rt::dset(this->f_S__25__21_Y, NM_touchable, _v19747); _v19747; });
    ({ rt::Value _v19748 = rt::VB(false); rt::dset(this->f_S__25__21_Y, NM_visible, _v19748); _v19748; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__25__21_Y));
    ({ rt::Value _v19749 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[3926]))); this->f_S_1_21_3 = _v19749; _v19749; });
    ({ rt::Value _v19750 = rt::VB(false); rt::dset(this->f_S_1_21_3, NM_touchable, _v19750); _v19750; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v19751 = rt::V(21.0); rt::dset(this->f_S_1_21_3, NM_y, _v19751); _v19751; });
        ({ rt::Value _v19753 = ({ rt::Value _v19752 = rt::V(16.0); rt::dset(this->f_S_1_21_3, NM_height, _v19752); _v19752; }); rt::dset(this->f_S_1_21_3, NM_width, _v19753); _v19753; });
    } else {
        ({ rt::Value _v19755 = ({ rt::Value _v19754 = rt::V(20.0); rt::dset(this->f_S_1_21_3, NM_height, _v19754); _v19754; }); rt::dset(this->f_S_1_21_3, NM_width, _v19755); _v19755; });
    }
    ({ rt::Value _v19756 = rt::VB(false); rt::dset(this->f_S_1_21_3, NM_visible, _v19756); _v19756; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_1_21_3));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    return rt::NUL;
}
rt::Value C_S__25__21_S::m_S__21__21_G() {
    rt::Value l_A__loc3_ = rt::NUL;
    double l_A__loc1_ = NAN;
    bool l_A__loc2_ = false;
    RT_FN("S__25__21_S.S__21__21_G");
    (l_A__loc3_ = rt::slot_string(rt::NUL));
    (void)(this->C_S_6_2b_::m_S__21__21_G());
    (l_A__loc1_ = C_S__23__21__21_::sm_S_9_21_E());
    (l_A__loc2_ = ({ bool _t19757 = (!rt::eq(rt::V((double)(this->f_S_7_21_b)), rt::arr_at(g::SV.C_S_8G__S_4P, 0.0))); _t19757 ? _t19757 : (bool)((!(this->f_S__20_z == (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)))))); }));
    if (((!(l_A__loc1_ == this->f_S__20__21__40_)) || l_A__loc2_)) {
        ({ rt::Value _v19758 = rt::arr_at(g::SV.C_S_8G__S_4P, 0.0); this->f_S_7_21_b = rt::toint(_v19758); _v19758; });
        ({ bool _v19759 = rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)); this->f_S__20_z = _v19759; _v19759; });
        ({ double _v19760 = l_A__loc1_; this->f_S__20__21__40_ = _v19760; _v19760; });
        if ((this->f_S__20__21__40_ <= 0.0)) {
            ({ rt::Value _v19762 = ({ rt::Value _v19761 = rt::VB(false); rt::dset(this->f_S_1_21_3, NM_visible, _v19761); _v19761; }); rt::dset(this->f_S__25__21_Y, NM_visible, _v19762); _v19762; });
            ({ rt::Value _v19763 = rt::V((g::SV.C_S__20_g__S__22_g ? 13.0 : ((rt::tonum(rt::dget(rt::VO(this), NM_height)) / 2.0) - (rt::tonum(rt::dget(this->f_S_9_21_Z, NM_height)) / 2.0)))); rt::dset(this->f_S_9_21_Z, NM_y, _v19763); _v19763; });
        } else {
            ({ rt::Value _v19765 = ({ rt::Value _v19764 = rt::VB(true); rt::dset(this->f_S_1_21_3, NM_visible, _v19764); _v19764; }); rt::dset(this->f_S__25__21_Y, NM_visible, _v19765); _v19765; });
            ({ rt::Value _v19766 = rt::V((g::SV.C_S__20_g__S__22_g ? 6.0 : ((((rt::tonum(rt::dget(rt::VO(this), NM_height)) / 2.0) - (rt::tonum(rt::dget(this->f_S_9_21_Z, NM_height)) / 2.0)) - (rt::tonum(rt::dget(this->f_S__25__21_Y, NM_height)) / 2.0)) - 3.0))); rt::dset(this->f_S_9_21_Z, NM_y, _v19766); _v19766; });
            (l_A__loc3_ = rt::slot_string(rt::add(rt::VS(g::LS[158]), C_S__26_c::sm_S_8_21_Z(this->f_S__20__21__40_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            if ((!rt::eq(l_A__loc3_, rt::dget(this->f_S__25__21_Y, NM_text)))) {
                ({ rt::Value _v19767 = l_A__loc3_; rt::dset(this->f_S__25__21_Y, NM_text, _v19767); _v19767; });
                if (g::SV.C_S__20_g__S__22_g) {
                    ({ rt::Value _v19768 = rt::V(NAN); rt::dset(this->f_S__25__21_Y, NM_width, _v19768); _v19768; });
                }
                (void)(rt::dcallv(this->f_S__25__21_Y, NM_validate));
                ({ rt::Value _v19769 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_width)) / 2.0) - (rt::tonum(rt::dget(this->f_S__25__21_Y, NM_width)) / 2.0))); rt::dset(this->f_S__25__21_Y, NM_x, _v19769); _v19769; });
                if (g::SV.C_S__20_g__S__22_g) {
                    ({ rt::Value _o19771 = this->f_S__25__21_Y; rt::Value _v19770 = rt::V((rt::tonum(rt::dget(_o19771, NM_x)) - 7.0)); rt::dset(_o19771, NM_x, _v19770); _v19770; });
                    ({ rt::Value _v19772 = rt::add(rt::add(rt::dget(this->f_S__25__21_Y, NM_x), rt::dget(this->f_S__25__21_Y, NM_width)), rt::V(3.0)); rt::dset(this->f_S_1_21_3, NM_x, _v19772); _v19772; });
                } else {
                    ({ rt::Value _v19773 = rt::V((rt::tonum(rt::dget(this->f_S__25__21_Y, NM_y)) - 5.0)); rt::dset(this->f_S_1_21_3, NM_y, _v19773); _v19773; });
                    ({ rt::Value _v19774 = rt::add(rt::dget(this->f_S__25__21_Y, NM_x), rt::dget(this->f_S__25__21_Y, NM_width)); rt::dset(this->f_S_1_21_3, NM_x, _v19774); _v19774; });
                }
            }
        }
    }
    return rt::NUL;
}
bool C_S__25__21_S::dm_S_8_21_Q_0() { return false; }
bool C_S__25__21_S::dm_S_8_21_Q_1() { return false; }
rt::Value C_S__25__21_S::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc5_ = NAN;
    double l_A__loc3_ = NAN;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("S__25__21_S.S_8_21_Q");
    (l_A__loc5_ = NAN);
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    (l_A__loc3_ = C_S__23__21__21_::sm_S_6_21_Y(C_S__23__21__21_::dsm_S_6_21_Y_0()));
    (l_A__loc4_ = rt::slot_string(rt::trv(rt::VS(g::LS[5898]))));
    if ((C_S__23__21__21_::sm_S_9_21_E() < 1.0)) {
        (l_A__loc4_ = rt::slot_string(rt::add(l_A__loc4_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5899]))))));
    } else {
        (l_A__loc5_ = C_S__23__21__21_::sm_S_9_21_E());
        (l_A__loc4_ = rt::slot_string(rt::add(l_A__loc4_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1468]), rt::tr_nv(rt::VS(g::LS[1469]), rt::VS(g::LS[1470]), rt::V(l_A__loc5_), C_S__26_c::sm_S_8_21_Z(l_A__loc5_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), C_S__26_c::sm_S_8_21_Z((l_A__loc5_ * l_A__loc3_), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    (l_A__loc4_ = rt::slot_string(rt::add(l_A__loc4_, rt::add(rt::VS(g::LS[8]), C_S__23__21__21_::sm_S__2d_B()))));
    (void)(({ rt::Value _o19775 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19776 = rt::as_ptr<C_S__20_g>(_o19775); _p19776 ? _p19776->m_S__2d__25_(rt::trv(rt::VS(g::LS[5900])), l_A__loc4_, rt::arr_lit({rt::trv(rt::VS(g::LS[5900])), rt::trv(rt::VS(g::LS[3360]))}), rt::arr_lit({rt::dget(g::SV.C_S_8G__S__3e__21_a, NM_S__3c_N), rt::VO(rt::new_bound(rt::VO(this), NM_S_49))}), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o19775, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5900])), l_A__loc4_, rt::arr_lit({rt::trv(rt::VS(g::LS[5900])), rt::trv(rt::VS(g::LS[3360]))}), rt::arr_lit({rt::dget(g::SV.C_S_8G__S__3e__21_a, NM_S__3c_N), rt::VO(rt::new_bound(rt::VO(this), NM_S_49))})); }));
    return rt::NUL;
}
rt::Value C_S__25__21_S::m_S_49() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__25__21_S.S_49");
    (l_A__loc1_ = C_S_8G::sm_S__21__21_H(g::SV.C_S__22_b__id));
    if ((C_S_8G::sg_S__3c__21__27_() < ({ rt::Value _o19777 = l_A__loc1_; C_S__60_6* _p19778 = rt::as_ptr<C_S__60_6>(_o19777); _p19778 ? _p19778->m_S_6U() : rt::tonum(rt::dcallv(_o19777, NM_S_6U)); }))) {
        (void)(({ rt::Value _o19781 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19782 = rt::as_ptr<C_S__20_g>(_o19781); _p19782 ? _p19782->m_S__2d__25_(rt::trv(rt::VS(g::LS[3379])), rt::trv(rt::VS(g::LS[5901]), C_S__26_c::sm_S_8_21_Z(({ rt::Value _o19779 = l_A__loc1_; C_S__60_6* _p19780 = rt::as_ptr<C_S__60_6>(_o19779); _p19780 ? _p19780->m_S_6U() : rt::tonum(rt::dcallv(_o19779, NM_S_6U)); }), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__26__21__60_))}), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o19781, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3379])), rt::trv(rt::VS(g::LS[5901]), C_S__26_c::sm_S_8_21_Z(({ rt::Value _o19783 = l_A__loc1_; C_S__60_6* _p19784 = rt::as_ptr<C_S__60_6>(_o19783); _p19784 ? _p19784->m_S_6U() : rt::tonum(rt::dcallv(_o19783, NM_S_6U)); }), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__26__21__60_))})); }));
    } else {
        (void)(({ rt::Value _o19786 = (({ rt::Value _t19785 = l_A__loc1_; rt::is_class(_t19785, C_S__5e_::CI) ? _t19785 : rt::NUL; })); C_S__5e_* _p19787 = rt::as_ptr<C_S__5e_>(_o19786); _p19787 ? _p19787->m_S__5b_A(rt::NUL) : rt::dcallv(_o19786, NM_S__5b_A, rt::NUL); }));
    }
    return rt::NUL;
}
rt::Value C_S__25__21_S::m_S__26__21__60_() {
    RT_FN("S__25__21_S.S__26__21__60_");
    (void)(({ rt::Value _o19794 = (({ rt::Value _t19793 = ({ rt::Value _o19791 = (({ rt::Value _t19790 = ({ rt::Value _o19788 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19789 = rt::as_ptr<C_S__20_g>(_o19788); _p19789 ? _p19789->m_S__2b__21__2c_(rt::touint_d(5.0)) : rt::dcallv(_o19788, NM_S__2b__21__2c_, rt::V(5.0)); }); rt::is_class(_t19790, C_S__21_M::CI) ? _t19790 : rt::NUL; })); C_S__21_M* _p19792 = rt::as_ptr<C_S__21_M>(_o19791); _p19792 ? _p19792->m_S__21__21__23_(rt::toint_d(2.0)) : rt::dcallv(_o19791, NM_S__21__21__23_, rt::V(2.0)); }); rt::is_class(_t19793, C_S__3d__21__5f_::CI) ? _t19793 : rt::NUL; })); C_S__3d__21__5f_* _p19795 = rt::as_ptr<C_S__3d__21__5f_>(_o19794); _p19795 ? _p19795->m_S__25__21__26_() : rt::dcallv(_o19794, NM_S__25__21__26_); }));
    return rt::NUL;
}
C_S__25__21_S* C_S__25__21_S::alloc_() {
    C_S__25__21_S* o = rt::make<C_S__25__21_S>();
    return o;
}
rt::Value C_S__25__21_S::mk_(rt::Value* a, int n) {
    C_S__25__21_S* o = alloc_();
    o->C_S__25__21_S::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_S::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S__25__21_Y: out = f_S__25__21_Y; return true;
    case NM_S_1_21_3: out = f_S_1_21_3; return true;
    case NM_S__20__21__40_: out = rt::V(f_S__20__21__40_); return true;
    case NM_S_7_21_b: out = rt::V((double)(f_S_7_21_b)); return true;
    case NM_S__20_z: out = rt::VB(f_S__20_z); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_49: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__26__21__60_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S__25__21_S::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21_Z: f_S_9_21_Z = v; return true;
    case NM_S__25__21_Y: f_S__25__21_Y = v; return true;
    case NM_S_1_21_3: f_S_1_21_3 = v; return true;
    case NM_S__20__21__40_: f_S__20__21__40_ = rt::tonum(v); return true;
    case NM_S_7_21_b: f_S_7_21_b = rt::toint(v); return true;
    case NM_S__20_z: f_S__20_z = rt::T(v); return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S__25__21_S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S__25__21_S::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S__25__21_S::dm_S_8_21_Q_1())); return true;
    case NM_S_49: out = m_S_49(); return true;
    case NM_S__26__21__60_: out = m_S__26__21__60_(); return true;
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21_Y: { rt::Value f = f_S__25__21_Y; out = rt::call_value(f, a, n); return true; }
    case NM_S_1_21_3: { rt::Value f = f_S_1_21_3; out = rt::call_value(f, a, n); return true; }
    case NM_S__20__21__40_: { rt::Value f = rt::V(f_S__20__21__40_); out = rt::call_value(f, a, n); return true; }
    case NM_S_7_21_b: { rt::Value f = rt::V((double)(f_S_7_21_b)); out = rt::call_value(f, a, n); return true; }
    case NM_S__20_z: { rt::Value f = rt::VB(f_S__20_z); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S__25__21_S::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_21_Q: return true;
    case NM_S_49: return true;
    case NM_S__26__21__60_: return true;
    case NM_S_9_21_Z: return false;
    case NM_S__25__21_Y: return false;
    case NM_S_1_21_3: return false;
    case NM_S__20__21__40_: return false;
    case NM_S_7_21_b: return false;
    case NM_S__20_z: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S__25__21_S::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21_S::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21_S::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21_S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22_W::ctor_() {
    RT_FN("S__22_W.S__22_W");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S__22_W::m_S__2b__21_R() {
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__22_W.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    if (g::SV.C_S__20_g__S__22_g) {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2b_4), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2b_f), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5e_S), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    } else {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_0_21_H), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5b_R), C_S_6_2b_::dm_S__3d__22__2(), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    }
    ({ rt::Value _v19797 = ({ rt::Value _v19796 = rt::V((g::SV.C_S__20_g__S__22_g ? 80.0 : 97.0)); rt::dset(rt::VO(this), NM_height, _v19796); _v19796; }); rt::dset(rt::VO(this), NM_width, _v19797); _v19797; });
    (l_A__loc2_ = rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::add(rt::add(rt::add(rt::VS(g::LS[5902]), ((g::SV.C_S__20_g__S__22_g ? rt::VS(g::LS[5903]) : rt::VS(g::LS[113])))), rt::VS(g::LS[5904])), rt::arr_at(g::SV.C_Translation__LOCALE_CODE, ((double)(g::SV.C_Translation__locale))))));
    if ((!rt::T(l_A__loc2_))) {
        (l_A__loc2_ = rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::add(rt::VS(g::LS[5902]), ((g::SV.C_S__20_g__S__22_g ? rt::VS(g::LS[5903]) : rt::VS(g::LS[113]))))));
    }
    ({ rt::Value _v19798 = rt::callv(rt::dget(rt::VO(this), NM_Image), l_A__loc2_); this->f_S__5e__21__23_ = _v19798; _v19798; });
    ({ rt::Value _v19800 = ({ rt::Value _v19799 = rt::V((g::SV.C_S__20_g__S__22_g ? 75.0 : 97.0)); rt::dset(this->f_S__5e__21__23_, NM_height, _v19799); _v19799; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v19800); _v19800; });
    ({ rt::Value _v19802 = ({ rt::Value _v19801 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)))) / 2.0)); rt::dset(this->f_S__5e__21__23_, NM_y, _v19801); _v19801; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v19802); _v19802; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    ({ rt::Value _v19803 = rt::callv(rt::dget(rt::VO(this), NM_LayoutGroup)); this->f_S_8S = _v19803; _v19803; });
    ({ rt::Value _v19804 = rt::V((g::SV.C_S__20_g__S__22_g ? 3.0 : 7.0)); rt::dset(this->f_S_8S, NM_x, _v19804); _v19804; });
    ({ rt::Value _v19805 = rt::V((g::SV.C_S__20_g__S__22_g ? 3.0 : 10.0)); rt::dset(this->f_S_8S, NM_y, _v19805); _v19805; });
    (l_A__loc1_ = rt::callv(rt::dget(rt::VO(this), NM_VerticalLayout)));
    ({ rt::Value _v19806 = rt::V((-2.0)); rt::dset(l_A__loc1_, NM_gap, _v19806); _v19806; });
    ({ rt::Value _v19807 = l_A__loc1_; rt::dset(this->f_S_8S, NM_layout, _v19807); _v19807; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_8S));
    ({ rt::Value _v19808 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S__5e_0 = _v19808; _v19808; });
    ({ rt::Value _v19809 = rt::dget(rt::VO(C_S_99::CI.ref), NM_S__23__21_H); rt::dset(this->f_S__5e_0, NM_textRendererFactory, _v19809); _v19809; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v19810 = rt::callv(rt::dget(rt::VO(this), NM_BitmapFontTextFormat), rt::VS(g::LS[4671]), rt::V(11.0), rt::V(16777215.0), rt::VS(g::LS[1481])); rt::dset(rt::dget(this->f_S__5e_0, NM_textRendererProperties), NM_textFormat, _v19810); _v19810; });
    } else {
        ({ rt::Value _v19811 = rt::callv(rt::dget(rt::VO(this), NM_BitmapFontTextFormat), rt::VS(g::LS[4671]), rt::V(17.0), rt::V(16777215.0), rt::VS(g::LS[1481])); rt::dset(rt::dget(this->f_S__5e_0, NM_textRendererProperties), NM_textFormat, _v19811); _v19811; });
    }
    (void)(rt::dcallv(this->f_S_8S, NM_addChild, this->f_S__5e_0));
    ({ rt::Value _v19812 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S__23__21__40_ = _v19812; _v19812; });
    ({ rt::Value _v19813 = rt::dget(rt::VO(C_S_99::CI.ref), NM_S__23__21_H); rt::dset(this->f_S__23__21__40_, NM_textRendererFactory, _v19813); _v19813; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v19814 = rt::callv(rt::dget(rt::VO(this), NM_BitmapFontTextFormat), rt::VS(g::LS[4671]), rt::V(11.0), rt::V(10079487.0), rt::VS(g::LS[1481])); rt::dset(rt::dget(this->f_S__23__21__40_, NM_textRendererProperties), NM_textFormat, _v19814); _v19814; });
    } else {
        ({ rt::Value _v19815 = rt::callv(rt::dget(rt::VO(this), NM_BitmapFontTextFormat), rt::VS(g::LS[4671]), rt::V(17.0), rt::V(10079487.0), rt::VS(g::LS[1481])); rt::dset(rt::dget(this->f_S__23__21__40_, NM_textRendererProperties), NM_textFormat, _v19815); _v19815; });
    }
    (void)(rt::dcallv(this->f_S_8S, NM_addChild, this->f_S__23__21__40_));
    ({ rt::Value _v19816 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S__27__22_P = _v19816; _v19816; });
    ({ rt::Value _v19817 = rt::dget(rt::VO(C_S_99::CI.ref), NM_S__23__21_H); rt::dset(this->f_S__27__22_P, NM_textRendererFactory, _v19817); _v19817; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v19818 = rt::callv(rt::dget(rt::VO(this), NM_BitmapFontTextFormat), rt::VS(g::LS[4671]), rt::V(11.0), rt::V(6837639.0), rt::VS(g::LS[1481])); rt::dset(rt::dget(this->f_S__27__22_P, NM_textRendererProperties), NM_textFormat, _v19818); _v19818; });
    } else {
        ({ rt::Value _v19819 = rt::callv(rt::dget(rt::VO(this), NM_BitmapFontTextFormat), rt::VS(g::LS[4671]), rt::V(17.0), rt::V(6837639.0), rt::VS(g::LS[1481])); rt::dset(rt::dget(this->f_S__27__22_P, NM_textRendererProperties), NM_textFormat, _v19819); _v19819; });
    }
    (void)(rt::dcallv(this->f_S_8S, NM_addChild, this->f_S__27__22_P));
    ({ rt::Value _v19820 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_1n = _v19820; _v19820; });
    ({ rt::Value _v19821 = rt::dget(rt::VO(C_S_99::CI.ref), NM_S__23__21_H); rt::dset(this->f_S_1n, NM_textRendererFactory, _v19821); _v19821; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v19822 = rt::callv(rt::dget(rt::VO(this), NM_BitmapFontTextFormat), rt::VS(g::LS[4671]), rt::V(11.0), rt::V(16764057.0), rt::VS(g::LS[1481])); rt::dset(rt::dget(this->f_S_1n, NM_textRendererProperties), NM_textFormat, _v19822); _v19822; });
    } else {
        ({ rt::Value _v19823 = rt::callv(rt::dget(rt::VO(this), NM_BitmapFontTextFormat), rt::VS(g::LS[4671]), rt::V(17.0), rt::V(16764057.0), rt::VS(g::LS[1481])); rt::dset(rt::dget(this->f_S_1n, NM_textRendererProperties), NM_textFormat, _v19823); _v19823; });
    }
    (void)(rt::dcallv(this->f_S_8S, NM_addChild, this->f_S_1n));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    ({ rt::Value _v19824 = rt::VO(rt::new_bound(rt::VO(this), NM_S_2L)); rt::dset(rt::dget(rt::VO(this), NM_Kongregate), NM_closedCallback, _v19824); _v19824; });
    ({ rt::Value _v19825 = rt::VO(rt::new_bound(rt::VO(this), NM_S__2b_G)); rt::dset(rt::dget(rt::VO(this), NM_Kongregate), NM_completedCallback, _v19825); _v19825; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__21__21_G() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__22_W.S__21__21_G");
    (l_A__loc1_ = rt::NUL);
    (void)(this->C_S_6_2b_::m_S__21__21_G());
    if (this->f_S_1z) {
        ({ bool _v19826 = false; this->f_S_1z = _v19826; _v19826; });
        (void)(this->m_S__22_l(C_S__22_W::dm_S__22_l_0()));
    }
    ({ rt::Value _v19830 = ({ rt::Value _v19829 = rt::VB(({ bool _t19828 = (g::SV.C_S_8G__S__21_4 > 0.0); _t19828 ? _t19828 : (bool)(({ bool _t19827 = rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)); _t19827 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)) : _t19827; })); })); rt::dset(this->f_S__5e_0, NM_includeInLayout, _v19829); _v19829; }); rt::dset(this->f_S__5e_0, NM_visible, _v19830); _v19830; });
    if (rt::T(rt::dget(this->f_S__5e_0, NM_visible))) {
        ({ rt::Value _v19831 = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)) ? rt::trv(rt::VS(g::LS[5905])) : C_S__26_c::sm_S_4_21__3f_(g::SV.C_S_8G__S__21_4)); rt::dset(this->f_S__5e_0, NM_text, _v19831); _v19831; });
    }
    ({ rt::Value _v19835 = ({ rt::Value _v19834 = rt::VB(({ bool _t19833 = (g::SV.C_S_8G__S__40__21__24_ > 0.0); _t19833 ? _t19833 : (bool)(({ bool _t19832 = rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)); _t19832 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)) : _t19832; })); })); rt::dset(this->f_S__23__21__40_, NM_includeInLayout, _v19834); _v19834; }); rt::dset(this->f_S__23__21__40_, NM_visible, _v19835); _v19835; });
    if (rt::T(rt::dget(this->f_S__23__21__40_, NM_visible))) {
        ({ rt::Value _v19836 = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)) ? rt::trv(rt::VS(g::LS[5905])) : C_S__26_c::sm_S_4_21__3f_(g::SV.C_S_8G__S__40__21__24_)); rt::dset(this->f_S__23__21__40_, NM_text, _v19836); _v19836; });
    }
    ({ rt::Value _v19840 = ({ rt::Value _v19839 = rt::VB(({ bool _t19838 = (g::SV.C_S_8G__S__3d__22_P > 0.0); _t19838 ? _t19838 : (bool)(({ bool _t19837 = rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)); _t19837 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)) : _t19837; })); })); rt::dset(this->f_S__27__22_P, NM_includeInLayout, _v19839); _v19839; }); rt::dset(this->f_S__27__22_P, NM_visible, _v19840); _v19840; });
    if (rt::T(rt::dget(this->f_S__27__22_P, NM_visible))) {
        ({ rt::Value _v19841 = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)) ? rt::trv(rt::VS(g::LS[5905])) : C_S__26_c::sm_S_4_21__3f_(g::SV.C_S_8G__S__3d__22_P)); rt::dset(this->f_S__27__22_P, NM_text, _v19841); _v19841; });
    }
    ({ rt::Value _v19853 = ({ rt::Value _v19852 = rt::VB(({ bool _t19851 = (({ bool _t19843 = (g::SV.C_S_8G__S__3e_u > 0.0); _t19843 ? _t19843 : (bool)(({ bool _t19842 = rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)); _t19842 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)) : _t19842; })); })); _t19851 ? (bool)((({ bool _t19850 = ({ bool _t19849 = ({ bool _t19848 = ({ bool _t19847 = ({ bool _t19846 = ({ bool _t19845 = ({ bool _t19844 = (((double)(C_PlayFab::sg_season())) == 2.0); _t19844 ? _t19844 : (bool)((((double)(C_PlayFab::sg_season())) == 3.0)); }); _t19845 ? _t19845 : (bool)((((double)(C_PlayFab::sg_season())) == 4.0)); }); _t19846 ? _t19846 : (bool)((((double)(C_PlayFab::sg_season())) == 6.0)); }); _t19847 ? _t19847 : (bool)((((double)(C_PlayFab::sg_season())) == 8.0)); }); _t19848 ? _t19848 : (bool)((((double)(C_PlayFab::sg_season())) == 7.0)); }); _t19849 ? _t19849 : (bool)((((double)(C_PlayFab::sg_season())) == 9.0)); }); _t19850 ? _t19850 : (bool)((((double)(C_PlayFab::sg_season())) == 11.0)); }))) : _t19851; })); rt::dset(this->f_S_1n, NM_includeInLayout, _v19852); _v19852; }); rt::dset(this->f_S_1n, NM_visible, _v19853); _v19853; });
    if (rt::T(rt::dget(this->f_S_1n, NM_visible))) {
        ({ rt::Value _v19854 = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)) ? rt::trv(rt::VS(g::LS[5905])) : C_S__26_c::sm_S_4_21__3f_(g::SV.C_S_8G__S__3e_u)); rt::dset(this->f_S_1n, NM_text, _v19854); _v19854; });
    }
    if ((rt::pybool(({ rt::Value _t19856 = ({ rt::Value _t19855 = rt::dget(this->f_S__5e_0, NM_visible); rt::pybool(_t19855) ? (rt::Value)(rt::dget(this->f_S__23__21__40_, NM_visible)) : _t19855; }); rt::pybool(_t19856) ? (rt::Value)(rt::dget(this->f_S__27__22_P, NM_visible)) : _t19856; })) && rt::T(rt::dget(this->f_S_1n, NM_visible)))) {
        if (rt::eq(this->f_S__3d_3, rt::VS(g::LS[5902]))) {
            ({ rt::Value _v19857 = rt::VS(g::LS[5906]); this->f_S__3d_3 = rt::slot_string(_v19857); _v19857; });
            ({ rt::Value _v19858 = rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::add(this->f_S__3d_3, ((g::SV.C_S__20_g__S__22_g ? rt::VS(g::LS[5903]) : rt::VS(g::LS[113]))))); rt::dset(this->f_S__5e__21__23_, NM_texture, _v19858); _v19858; });
        }
    } else if (rt::eq(this->f_S__3d_3, rt::VS(g::LS[5906]))) {
        ({ rt::Value _v19859 = rt::VS(g::LS[5902]); this->f_S__3d_3 = rt::slot_string(_v19859); _v19859; });
        (l_A__loc1_ = rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::add(rt::add(rt::add(rt::VS(g::LS[5902]), ((g::SV.C_S__20_g__S__22_g ? rt::VS(g::LS[5903]) : rt::VS(g::LS[113])))), rt::VS(g::LS[5904])), rt::arr_at(g::SV.C_Translation__LOCALE_CODE, ((double)(g::SV.C_Translation__locale))))));
        if ((!rt::T(l_A__loc1_))) {
            (l_A__loc1_ = rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::add(rt::VS(g::LS[5902]), ((g::SV.C_S__20_g__S__22_g ? rt::VS(g::LS[5903]) : rt::VS(g::LS[113]))))));
        }
        ({ rt::Value _v19860 = l_A__loc1_; rt::dset(this->f_S__5e__21__23_, NM_texture, _v19860); _v19860; });
    }
    return rt::NUL;
}
bool C_S__22_W::dm_S_8_21_Q_0() { return false; }
bool C_S__22_W::dm_S_8_21_Q_1() { return false; }
rt::Value C_S__22_W::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__22_W.S_8_21_Q");
    if ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id))) {
        (void)(({ rt::Value _o19861 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19862 = rt::as_ptr<C_S__20_g>(_o19861); _p19862 ? _p19862->m_S__2d__25_(rt::trv(rt::VS(g::LS[5907])), rt::trv(rt::VS(g::LS[5908])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o19861, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5907])), rt::trv(rt::VS(g::LS[5908]))); }));
        return rt::NUL;
    }
    (void)(this->m_S__2b__24_());
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    (void)(({ rt::Value _o19863 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19864 = rt::as_ptr<C_S__20_g>(_o19863); _p19864 ? _p19864->m_S_4_60_(rt::toint_d(22.0)) : rt::dcallv(_o19863, NM_S_4_60_, rt::V(22.0)); }));
    (l_A__loc3_ = rt::slot_string(rt::add(rt::trv(rt::VS(g::LS[5909])), rt::VS(g::LS[143]))));
    (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5910]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[143])))));
    (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5911]), C_S__26_c::sm_S_8_21_Z(10.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(10.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[143])))));
    (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5912]), C_S__26_c::sm_S_8_21_Z(10.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[143])))));
    if ((((double)(C_PlayFab::sg_season())) == 2.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5913])), rt::VS(g::LS[143])))));
    } else if ((((double)(C_PlayFab::sg_season())) == 3.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5914])), rt::VS(g::LS[143])))));
    } else if ((((double)(C_PlayFab::sg_season())) == 4.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5915])), rt::VS(g::LS[143])))));
    } else if ((((double)(C_PlayFab::sg_season())) == 6.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5916])), rt::VS(g::LS[143])))));
    } else if ((((double)(C_PlayFab::sg_season())) == 8.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5917])), rt::VS(g::LS[143])))));
    } else if ((((double)(C_PlayFab::sg_season())) == 7.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5918])), rt::VS(g::LS[143])))));
    } else if ((((double)(C_PlayFab::sg_season())) == 9.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5919])), rt::VS(g::LS[143])))));
    } else if ((((double)(C_PlayFab::sg_season())) == 11.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5920])), rt::VS(g::LS[143])))));
    }
    if (rt::eq(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__3d_x), rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__3c__21_h))) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5921]))))));
        (void)(({ rt::Value _o19865 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19866 = rt::as_ptr<C_S__20_g>(_o19865); _p19866 ? _p19866->m_S__2d__25_(rt::trv(rt::VS(g::LS[5907])), l_A__loc3_, C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o19865, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5907])), l_A__loc3_); }));
        return rt::NUL;
    }
    if (rt::gt(rt::dget(rt::dget(rt::VO(this), NM_Kongregate), NM_adsAvailable), rt::V(0.0))) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5922]))))));
        (void)(({ rt::Value _o19867 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19868 = rt::as_ptr<C_S__20_g>(_o19867); _p19868 ? _p19868->m_S__2d__25_(rt::trv(rt::VS(g::LS[5907])), l_A__loc3_, rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__2b_c))}), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o19867, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5907])), l_A__loc3_, rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__2b_c))})); }));
    } else {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5923]))))));
        (void)(({ rt::Value _o19869 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19870 = rt::as_ptr<C_S__20_g>(_o19869); _p19870 ? _p19870->m_S__2d__25_(rt::trv(rt::VS(g::LS[5907])), l_A__loc3_, C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o19869, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5907])), l_A__loc3_); }));
    }
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__2b_c() {
    RT_FN("S__22_W.S__2b_c");
    if (g::SV.C_S__20_g__S__22_g) {
        ({ double _v19873 = 0.0; rt::Value _o19871 = g::SV.C_S__20_g__S__26_K; C_S_33* _p19872 = rt::as_ptr<C_S_33>(_o19871); if (_p19872) _p19872->s_S__25__21__3f_(_v19873); else rt::dset(_o19871, NM_S__25__21__3f_, rt::V(_v19873)); _v19873; });
    }
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_showIncentivizedAd));
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5924]), rt::dict_lit({{rt::VS(g::LS[5925]), rt::VB(true)}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__5b_i() {
    RT_FN("S__22_W.S__5b_i");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5907])));
    return rt::NUL;
}
rt::Value C_S__22_W::m_S_9_21_0() {
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__22_W.S_9_21_0");
    (l_A__loc2_ = rt::slot_string(rt::NUL));
    if ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id))) {
        (l_A__loc2_ = rt::slot_string(rt::trv(rt::VS(g::LS[5930]))));
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5931]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5932]), C_S__26_c::sm_S_8_21_Z(10.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(10.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5933]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
        if ((({ bool _t19879 = ({ bool _t19878 = ({ bool _t19877 = ({ bool _t19876 = ({ bool _t19875 = ({ bool _t19874 = (((double)(C_PlayFab::sg_season())) == 2.0); _t19874 ? _t19874 : (bool)((((double)(C_PlayFab::sg_season())) == 3.0)); }); _t19875 ? _t19875 : (bool)((((double)(C_PlayFab::sg_season())) == 4.0)); }); _t19876 ? _t19876 : (bool)((((double)(C_PlayFab::sg_season())) == 6.0)); }); _t19877 ? _t19877 : (bool)((((double)(C_PlayFab::sg_season())) == 8.0)); }); _t19878 ? _t19878 : (bool)((((double)(C_PlayFab::sg_season())) == 7.0)); }); _t19879 ? _t19879 : (bool)((((double)(C_PlayFab::sg_season())) == 9.0)); }) || (((double)(C_PlayFab::sg_season())) == 11.0))) {
            (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5934]))))));
        }
        return rt::slot_string(l_A__loc2_);
    }
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[5935]))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5936]))))));
    if ((g::SV.C_S_8G__S__21_4 > 0.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5937])))));
    }
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5938]))))));
    if ((g::SV.C_S_8G__S__40__21__24_ > 0.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5937])))));
    }
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5939]))))));
    if ((g::SV.C_S_8G__S__3d__22_P > 0.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5937])))));
    }
    if ((((double)(C_PlayFab::sg_season())) == 2.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5940]))))));
        if ((g::SV.C_S_8G__S__3e_u > 0.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5937])))));
        }
    } else if ((((double)(C_PlayFab::sg_season())) == 3.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5941]))))));
        if ((g::SV.C_S_8G__S__3e_u > 0.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5937])))));
        }
    } else if ((((double)(C_PlayFab::sg_season())) == 4.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5942]))))));
        if ((g::SV.C_S_8G__S__3e_u > 0.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5937])))));
        }
    } else if ((((double)(C_PlayFab::sg_season())) == 6.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5943]))))));
        if ((g::SV.C_S_8G__S__3e_u > 0.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5937])))));
        }
    } else if ((((double)(C_PlayFab::sg_season())) == 8.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5944]))))));
        if ((g::SV.C_S_8G__S__3e_u > 0.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5937])))));
        }
    } else if ((((double)(C_PlayFab::sg_season())) == 7.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5945]))))));
        if ((g::SV.C_S_8G__S__3e_u > 0.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5937])))));
        }
    } else if ((((double)(C_PlayFab::sg_season())) == 9.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5946]))))));
        if ((g::SV.C_S_8G__S__3e_u > 0.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5937])))));
        }
    } else if ((((double)(C_PlayFab::sg_season())) == 11.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5947]))))));
        if ((g::SV.C_S_8G__S__3e_u > 0.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5937])))));
        }
    }
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::VS(g::LS[143]))));
    if (((g::SV.C_S_8G__S__21_4 > 0.0) || (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5948]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__23__21_R(g::SV.C_S_8G__S__21_4, C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))))));
    }
    if (((g::SV.C_S_8G__S__40__21__24_ > 0.0) || (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5949]), C_S__26_c::sm_S_8_21_Z(10.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(10.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__23__21_R(g::SV.C_S_8G__S__40__21__24_, C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))))));
    }
    if (((g::SV.C_S_8G__S__3d__22_P > 0.0) || (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5950]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__23__21_R(g::SV.C_S_8G__S__3d__22_P, C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))))));
    }
    if ((({ bool _t19885 = ({ bool _t19884 = ({ bool _t19883 = ({ bool _t19882 = ({ bool _t19881 = ({ bool _t19880 = (((double)(C_PlayFab::sg_season())) == 2.0); _t19880 ? _t19880 : (bool)((((double)(C_PlayFab::sg_season())) == 3.0)); }); _t19881 ? _t19881 : (bool)((((double)(C_PlayFab::sg_season())) == 4.0)); }); _t19882 ? _t19882 : (bool)((((double)(C_PlayFab::sg_season())) == 6.0)); }); _t19883 ? _t19883 : (bool)((((double)(C_PlayFab::sg_season())) == 8.0)); }); _t19884 ? _t19884 : (bool)((((double)(C_PlayFab::sg_season())) == 7.0)); }); _t19885 ? _t19885 : (bool)((((double)(C_PlayFab::sg_season())) == 9.0)); }) || (((double)(C_PlayFab::sg_season())) == 11.0))) {
        if (((g::SV.C_S_8G__S__3e_u > 0.0) || (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)))) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5951]), C_S__26_c::sm_S__23__21_R(g::SV.C_S_8G__S__3e_u, C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))))));
        }
    }
    if (rt::eq(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__3d_x), rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__3c__21_h))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5921]))))));
    } else {
        if ((rt::eq(rt::dget(rt::dget(rt::VO(this), NM_Kongregate), NM_adsAvailable), rt::V((-1.0))) && (rt::getTimer() >= 90000.0))) {
            ({ rt::Value _v19886 = rt::V(0.0); rt::dset(rt::dget(rt::VO(this), NM_Kongregate), NM_adsAvailable, _v19886); _v19886; });
        }
        if (rt::eq(rt::dget(rt::dget(rt::VO(this), NM_Kongregate), NM_adsAvailable), rt::V(0.0))) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5952]))))));
        } else if (rt::eq(rt::dget(rt::dget(rt::VO(this), NM_Kongregate), NM_adsAvailable), rt::V((-1.0)))) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5953]))))));
        }
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__22_W::m_S_7_21__23_() {
    RT_FN("S__22_W.S_7_21__23_");
    return rt::slot_string(rt::VS(g::LS[1433]));
    return rt::NUL;
}
rt::Value C_S__22_W::dm_S__2b_G_0() { return rt::NUL; }
rt::Value C_S__22_W::m_S__2b_G(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__22_W.S__2b_G");
    ({ bool _v19887 = true; this->f_S_1z = _v19887; _v19887; });
    return rt::NUL;
}
rt::Value C_S__22_W::dm_S__22_l_0() { return rt::NUL; }
rt::Value C_S__22_W::m_S__22_l(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc3_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("S__22_W.S__22_l");
    if (this->f_S__2b_Z) {
        return rt::NUL;
    }
    if (g::SV.C_S__20_g__S__22_g) {
        ({ double _v19890 = ((rt::tonum(rt::idx_get(rt::dget(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__2b__21_J), rt::N_data), rt::VS(g::LS[4188]))) / ((g::SV.C_S__20_g__S__22_g ? 2.0 : 1.0))) / 100.0); rt::Value _o19888 = g::SV.C_S__20_g__S__26_K; C_S_33* _p19889 = rt::as_ptr<C_S_33>(_o19888); if (_p19889) _p19889->s_S__25__21__3f_(_v19890); else rt::dset(_o19888, NM_S__25__21__3f_, rt::V(_v19890)); _v19890; });
    }
    ({ bool _v19891 = true; this->f_S__2b_Z = _v19891; _v19891; });
    (l_A__loc3_ = rt::slot_string(rt::add(rt::trv(rt::VS(g::LS[5954])), rt::VS(g::LS[143]))));
    (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5910]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[143])))));
    (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::trv(rt::VS(g::LS[5911]), C_S__26_c::sm_S_8_21_Z(10.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(10.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[143])))));
    (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::trv(rt::VS(g::LS[5912]), C_S__26_c::sm_S_8_21_Z(10.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))));
    (l_A__loc2_ = rt::arr_lit({rt::trv(rt::VS(g::LS[1445])), rt::trv(rt::VS(g::LS[5955])), rt::trv(rt::VS(g::LS[1618]))}));
    (l_A__loc4_ = rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__60_R)), rt::VO(rt::new_bound(rt::VO(this), NM_S__3c_Z)), rt::VO(rt::new_bound(rt::VO(this), NM_S__20__22_Q))}));
    if ((((double)(C_PlayFab::sg_season())) == 2.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5913]))))));
        (void)(rt::dcallv(l_A__loc2_, rt::N_push, rt::trv(rt::VS(g::LS[5956]))));
        (void)(rt::dcallv(l_A__loc4_, rt::N_push, rt::VO(rt::new_bound(rt::VO(this), NM_S__2b__21_T))));
    } else if ((((double)(C_PlayFab::sg_season())) == 3.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5914]))))));
        (void)(rt::dcallv(l_A__loc2_, rt::N_push, rt::trv(rt::VS(g::LS[5957]))));
        (void)(rt::dcallv(l_A__loc4_, rt::N_push, rt::VO(rt::new_bound(rt::VO(this), NM_S__20_8))));
    } else if ((((double)(C_PlayFab::sg_season())) == 4.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5915]))))));
        (void)(rt::dcallv(l_A__loc2_, rt::N_push, rt::trv(rt::VS(g::LS[5958]))));
        (void)(rt::dcallv(l_A__loc4_, rt::N_push, rt::VO(rt::new_bound(rt::VO(this), NM_S__27__21__3b_))));
    } else if ((((double)(C_PlayFab::sg_season())) == 6.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5916]))))));
        (void)(rt::dcallv(l_A__loc2_, rt::N_push, rt::trv(rt::VS(g::LS[5959]))));
        (void)(rt::dcallv(l_A__loc4_, rt::N_push, rt::VO(rt::new_bound(rt::VO(this), NM_S__2b__40_))));
    } else if ((((double)(C_PlayFab::sg_season())) == 8.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5917]))))));
        (void)(rt::dcallv(l_A__loc2_, rt::N_push, rt::trv(rt::VS(g::LS[5960]))));
        (void)(rt::dcallv(l_A__loc4_, rt::N_push, rt::VO(rt::new_bound(rt::VO(this), NM_S__2c__21_j))));
    } else if ((((double)(C_PlayFab::sg_season())) == 7.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5918]))))));
        (void)(rt::dcallv(l_A__loc2_, rt::N_push, rt::trv(rt::VS(g::LS[5961]))));
        (void)(rt::dcallv(l_A__loc4_, rt::N_push, rt::VO(rt::new_bound(rt::VO(this), NM_S_7_21_W))));
    } else if ((((double)(C_PlayFab::sg_season())) == 9.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5919]))))));
        (void)(rt::dcallv(l_A__loc2_, rt::N_push, rt::trv(rt::VS(g::LS[5962]))));
        (void)(rt::dcallv(l_A__loc4_, rt::N_push, rt::VO(rt::new_bound(rt::VO(this), NM_S__3f__21_k))));
    } else if ((((double)(C_PlayFab::sg_season())) == 11.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5963]))))));
        (void)(rt::dcallv(l_A__loc2_, rt::N_push, rt::trv(rt::VS(g::LS[5964]))));
        (void)(rt::dcallv(l_A__loc4_, rt::N_push, rt::VO(rt::new_bound(rt::VO(this), NM_S__5d__22_1))));
    }
    (void)(({ rt::Value _o19892 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19893 = rt::as_ptr<C_S__20_g>(_o19892); _p19893 ? _p19893->m_S__2d__25_(rt::trv(rt::VS(g::LS[5907])), l_A__loc3_, l_A__loc2_, l_A__loc4_, rt::NUL, false, C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o19892, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5907])), l_A__loc3_, l_A__loc2_, l_A__loc4_, rt::NUL, rt::VB(false)); }));
    ({ bool _v19894 = true; this->f_S__2b_Z = _v19894; _v19894; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__60_R() {
    RT_FN("S__22_W.S__60_R");
    (g::SV.C_S_8G__S__21_4 = 14400.0);
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5965]), rt::dict_lit({{rt::VS(g::LS[5966]), rt::VS(g::LS[1445])}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    ({ bool _v19895 = false; this->f_S__2b_Z = _v19895; _v19895; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__3c_Z() {
    RT_FN("S__22_W.S__3c_Z");
    (g::SV.C_S_8G__S__40__21__24_ = 14400.0);
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5965]), rt::dict_lit({{rt::VS(g::LS[5966]), rt::VS(g::LS[3363])}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    ({ bool _v19896 = false; this->f_S__2b_Z = _v19896; _v19896; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__20__22_Q() {
    double l_A__loc3_ = NAN;
    double l_A__loc4_ = NAN;
    double l_A__loc2_ = NAN;
    double l_A__loc5_ = NAN;
    RT_FN("S__22_W.S__20__22_Q");
    (g::SV.C_S_8G__S__3d__22_P = 14400.0);
    (l_A__loc3_ = C_S_2_3c_::sm_S__2c__21_G(30.0));
    (l_A__loc4_ = C_S__23__21__21_::sm_S__21_t());
    (l_A__loc4_ = ((C_S__23__21__21_::sm_S_2_21__40_() * l_A__loc4_) * C_S__23__21__21_::sm_S__21__2d_()));
    (l_A__loc2_ = ((((C_S__23__21__21_::sm_S__3e_Z(C_S__23__21__21_::dsm_S__3e_Z_0()) + l_A__loc4_)) * l_A__loc3_) * 10.0));
    if (((!((l_A__loc2_ * 0.0) == 0.0)) || (l_A__loc2_ < 0.0))) {
        (l_A__loc2_ = 0.0);
    }
    ({ double _v19897 = C_S__26_c::sm_S_0_22_3(C_S_8G::sg_S__40_e(), l_A__loc2_); C_S_8G::ss_S__40_e(_v19897); _v19897; });
    ({ rt::Value _v19898 = rt::V(C_S__26_c::sm_S_0_22_3(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 0.0)), l_A__loc2_)); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(0.0), _v19898); });
    (l_A__loc5_ = C_S__23__21__21_::sm_S__21__21__5d_(l_A__loc3_, false));
    (void)(C_S__26_c::sm_S_6_21__5f_((l_A__loc5_ * 10.0)));
    ({ double _v19903 = (({ rt::Value _o19899 = C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id); C_S_84* _p19900 = rt::as_ptr<C_S_84>(_o19899); _p19900 ? _p19900->g_S_2_2d_() : rt::tonum(rt::dget(_o19899, NM_S_2_2d_)); }) + 10.0); rt::Value _o19901 = C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id); C_S_84* _p19902 = rt::as_ptr<C_S_84>(_o19901); if (_p19902) _p19902->s_S_2_2d_(_v19903); else rt::dset(_o19901, NM_S_2_2d_, rt::V(_v19903)); _v19903; });
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5965]), rt::dict_lit({{rt::VS(g::LS[5966]), rt::VS(g::LS[1618])}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    ({ bool _v19904 = false; this->f_S__2b_Z = _v19904; _v19904; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__2b__21_T() {
    RT_FN("S__22_W.S__2b__21_T");
    if ((!(((double)(C_PlayFab::sg_season())) == 2.0))) {
        return rt::NUL;
    }
    (g::SV.C_S_8G__S__3e_u = 14400.0);
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5965]), rt::dict_lit({{rt::VS(g::LS[5966]), rt::VS(g::LS[5956])}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    ({ bool _v19905 = false; this->f_S__2b_Z = _v19905; _v19905; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__20_8() {
    RT_FN("S__22_W.S__20_8");
    if ((!(((double)(C_PlayFab::sg_season())) == 3.0))) {
        return rt::NUL;
    }
    (g::SV.C_S_8G__S__3e_u = 14400.0);
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5965]), rt::dict_lit({{rt::VS(g::LS[5966]), rt::VS(g::LS[5957])}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    ({ bool _v19906 = false; this->f_S__2b_Z = _v19906; _v19906; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__27__21__3b_() {
    RT_FN("S__22_W.S__27__21__3b_");
    if ((!(((double)(C_PlayFab::sg_season())) == 4.0))) {
        return rt::NUL;
    }
    (g::SV.C_S_8G__S__3e_u = 14400.0);
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5965]), rt::dict_lit({{rt::VS(g::LS[5966]), rt::VS(g::LS[5958])}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    ({ bool _v19907 = false; this->f_S__2b_Z = _v19907; _v19907; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__2b__40_() {
    RT_FN("S__22_W.S__2b__40_");
    if ((!(((double)(C_PlayFab::sg_season())) == 6.0))) {
        return rt::NUL;
    }
    (g::SV.C_S_8G__S__3e_u = 14400.0);
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5965]), rt::dict_lit({{rt::VS(g::LS[5966]), rt::VS(g::LS[5959])}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    ({ bool _v19908 = false; this->f_S__2b_Z = _v19908; _v19908; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__2c__21_j() {
    RT_FN("S__22_W.S__2c__21_j");
    if ((!(((double)(C_PlayFab::sg_season())) == 8.0))) {
        return rt::NUL;
    }
    (g::SV.C_S_8G__S__3e_u = 14400.0);
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5965]), rt::dict_lit({{rt::VS(g::LS[5966]), rt::VS(g::LS[5960])}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    ({ bool _v19909 = false; this->f_S__2b_Z = _v19909; _v19909; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S_7_21_W() {
    RT_FN("S__22_W.S_7_21_W");
    if ((!(((double)(C_PlayFab::sg_season())) == 7.0))) {
        return rt::NUL;
    }
    (g::SV.C_S_8G__S__3e_u = 14400.0);
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5965]), rt::dict_lit({{rt::VS(g::LS[5966]), rt::VS(g::LS[5961])}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    ({ bool _v19910 = false; this->f_S__2b_Z = _v19910; _v19910; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__3f__21_k() {
    RT_FN("S__22_W.S__3f__21_k");
    if ((!(((double)(C_PlayFab::sg_season())) == 9.0))) {
        return rt::NUL;
    }
    (g::SV.C_S_8G__S__3e_u = 14400.0);
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5965]), rt::dict_lit({{rt::VS(g::LS[5966]), rt::VS(g::LS[5962])}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    ({ bool _v19911 = false; this->f_S__2b_Z = _v19911; _v19911; });
    return rt::NUL;
}
rt::Value C_S__22_W::m_S__5d__22_1() {
    RT_FN("S__22_W.S__5d__22_1");
    if ((!(((double)(C_PlayFab::sg_season())) == 11.0))) {
        return rt::NUL;
    }
    (g::SV.C_S_8G__S__3e_u = 14400.0);
    (void)(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_sendAnalyticsEvent, rt::VS(g::LS[5965]), rt::dict_lit({{rt::VS(g::LS[5966]), rt::VS(g::LS[5964])}, {rt::VS(g::LS[5926]), rt::VS(g::LS[5927])}, {rt::VS(g::LS[5928]), rt::VS(g::LS[5929])}})));
    ({ bool _v19912 = false; this->f_S__2b_Z = _v19912; _v19912; });
    return rt::NUL;
}
rt::Value C_S__22_W::dm_S_2L_0() { return rt::NUL; }
rt::Value C_S__22_W::m_S_2L(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__22_W.S_2L");
    (void)(({ rt::Value _o19913 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19914 = rt::as_ptr<C_S__20_g>(_o19913); _p19914 ? _p19914->m_S__2d__25_(rt::trv(rt::VS(g::LS[5907])), rt::trv(rt::VS(g::LS[5967])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o19913, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5907])), rt::trv(rt::VS(g::LS[5967]))); }));
    return rt::NUL;
}
C_S__22_W* C_S__22_W::alloc_() {
    C_S__22_W* o = rt::make<C_S__22_W>();
    return o;
}
rt::Value C_S__22_W::mk_(rt::Value* a, int n) {
    C_S__22_W* o = alloc_();
    o->C_S__22_W::ctor_();
    return rt::VO(o);
}
bool C_S__22_W::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S_8S: out = f_S_8S; return true;
    case NM_S__5e_0: out = f_S__5e_0; return true;
    case NM_S__23__21__40_: out = f_S__23__21__40_; return true;
    case NM_S__27__22_P: out = f_S__27__22_P; return true;
    case NM_S_1n: out = f_S_1n; return true;
    case NM_S__3d_3: out = f_S__3d_3; return true;
    case NM_S__2b_Z: out = rt::VB(f_S__2b_Z); return true;
    case NM_S_1z: out = rt::VB(f_S_1z); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b_c: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5b_i: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21_0: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7_21__23_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__22_l: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__60_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3c_Z: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__22_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b__21_T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20_8: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27__21__3b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b__40_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2c__21_j: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7_21_W: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3f__21_k: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5d__22_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_2L: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S__22_W::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    case NM_S_8S: f_S_8S = v; return true;
    case NM_S__5e_0: f_S__5e_0 = v; return true;
    case NM_S__23__21__40_: f_S__23__21__40_ = v; return true;
    case NM_S__27__22_P: f_S__27__22_P = v; return true;
    case NM_S_1n: f_S_1n = v; return true;
    case NM_S__3d_3: f_S__3d_3 = rt::slot_string(v); return true;
    case NM_S__2b_Z: f_S__2b_Z = rt::T(v); return true;
    case NM_S_1z: f_S_1z = rt::T(v); return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S__22_W::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S__22_W::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S__22_W::dm_S_8_21_Q_1())); return true;
    case NM_S__2b_c: out = m_S__2b_c(); return true;
    case NM_S__5b_i: out = m_S__5b_i(); return true;
    case NM_S_9_21_0: out = m_S_9_21_0(); return true;
    case NM_S_7_21__23_: out = m_S_7_21__23_(); return true;
    case NM_S__2b_G: out = m_S__2b_G(rt::arg<rt::Value>(a, n, 0, C_S__22_W::dm_S__2b_G_0())); return true;
    case NM_S__22_l: out = m_S__22_l(rt::arg<rt::Value>(a, n, 0, C_S__22_W::dm_S__22_l_0())); return true;
    case NM_S__60_R: out = m_S__60_R(); return true;
    case NM_S__3c_Z: out = m_S__3c_Z(); return true;
    case NM_S__20__22_Q: out = m_S__20__22_Q(); return true;
    case NM_S__2b__21_T: out = m_S__2b__21_T(); return true;
    case NM_S__20_8: out = m_S__20_8(); return true;
    case NM_S__27__21__3b_: out = m_S__27__21__3b_(); return true;
    case NM_S__2b__40_: out = m_S__2b__40_(); return true;
    case NM_S__2c__21_j: out = m_S__2c__21_j(); return true;
    case NM_S_7_21_W: out = m_S_7_21_W(); return true;
    case NM_S__3f__21_k: out = m_S__3f__21_k(); return true;
    case NM_S__5d__22_1: out = m_S__5d__22_1(); return true;
    case NM_S_2L: out = m_S_2L(rt::arg<rt::Value>(a, n, 0, C_S__22_W::dm_S_2L_0())); return true;
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S_8S: { rt::Value f = f_S_8S; out = rt::call_value(f, a, n); return true; }
    case NM_S__5e_0: { rt::Value f = f_S__5e_0; out = rt::call_value(f, a, n); return true; }
    case NM_S__23__21__40_: { rt::Value f = f_S__23__21__40_; out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_P: { rt::Value f = f_S__27__22_P; out = rt::call_value(f, a, n); return true; }
    case NM_S_1n: { rt::Value f = f_S_1n; out = rt::call_value(f, a, n); return true; }
    case NM_S__3d_3: { rt::Value f = f_S__3d_3; out = rt::call_value(f, a, n); return true; }
    case NM_S__2b_Z: { rt::Value f = rt::VB(f_S__2b_Z); out = rt::call_value(f, a, n); return true; }
    case NM_S_1z: { rt::Value f = rt::VB(f_S_1z); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S__22_W::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__2b_c: return true;
    case NM_S__5b_i: return true;
    case NM_S_9_21_0: return true;
    case NM_S_7_21__23_: return true;
    case NM_S__2b_G: return true;
    case NM_S__22_l: return true;
    case NM_S__60_R: return true;
    case NM_S__3c_Z: return true;
    case NM_S__20__22_Q: return true;
    case NM_S__2b__21_T: return true;
    case NM_S__20_8: return true;
    case NM_S__27__21__3b_: return true;
    case NM_S__2b__40_: return true;
    case NM_S__2c__21_j: return true;
    case NM_S_7_21_W: return true;
    case NM_S__3f__21_k: return true;
    case NM_S__5d__22_1: return true;
    case NM_S_2L: return true;
    case NM_S__5e__21__23_: return false;
    case NM_S_8S: return false;
    case NM_S__5e_0: return false;
    case NM_S__23__21__40_: return false;
    case NM_S__27__22_P: return false;
    case NM_S_1n: return false;
    case NM_S__3d_3: return false;
    case NM_S__2b_Z: return false;
    case NM_S_1z: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S__22_W::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22_W::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2b_V: out = rt::V((double)(g::SV.C_S__22_W__S__2b_V)); return true;
    case NM_S_6_22_P: out = rt::V(g::SV.C_S__22_W__S_6_22_P); return true;
    case NM_S_1_22_P: out = rt::V(g::SV.C_S__22_W__S_1_22_P); return true;
    case NM_S__5e__22_O: out = rt::V(g::SV.C_S__22_W__S__5e__22_O); return true;
    case NM_S__26__22_P: out = rt::V(g::SV.C_S__22_W__S__26__22_P); return true;
    case NM_S__2b__22_P: out = rt::V(g::SV.C_S__22_W__S__2b__22_P); return true;
    default: return false;
    }
}
bool C_S__22_W::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__2b_V: g::SV.C_S__22_W__S__2b_V = rt::toint(v); return true;
    case NM_S_6_22_P: g::SV.C_S__22_W__S_6_22_P = rt::tonum(v); return true;
    case NM_S_1_22_P: g::SV.C_S__22_W__S_1_22_P = rt::tonum(v); return true;
    case NM_S__5e__22_O: g::SV.C_S__22_W__S__5e__22_O = rt::tonum(v); return true;
    case NM_S__26__22_P: g::SV.C_S__22_W__S__26__22_P = rt::tonum(v); return true;
    case NM_S__2b__22_P: g::SV.C_S__22_W__S__2b__22_P = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__22_W::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__21_w::ctor_() {
    RT_FN("S__3c__21_w.S__3c__21_w");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S__3c__21_w::m_S__2b__21_R() {
    RT_FN("S__3c__21_w.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    if (g::SV.C_S__20_g__S__22_g) {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5d__23_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__27__21__26_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_U), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
        ({ rt::Value _v19916 = ({ rt::Value _v19915 = rt::V(40.0); rt::dset(rt::VO(this), NM_height, _v19915); _v19915; }); rt::dset(rt::VO(this), NM_width, _v19916); _v19916; });
        ({ rt::Value _v19917 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[4981]))); this->f_S__5e__21__23_ = _v19917; _v19917; });
        ({ rt::Value _v19918 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[5968]))); this->f_S__3b__21_W = _v19918; _v19918; });
        ({ rt::Value _v19922 = ({ rt::Value _v19921 = ({ rt::Value _v19920 = ({ rt::Value _v19919 = rt::V((rt::tonum(rt::dget(rt::VO(this), NM_width)) - 4.0)); rt::dset(this->f_S__3b__21_W, NM_height, _v19919); _v19919; }); rt::dset(this->f_S__3b__21_W, NM_width, _v19920); _v19920; }); rt::dset(this->f_S__5e__21__23_, NM_height, _v19921); _v19921; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v19922); _v19922; });
        ({ rt::Value _v19926 = ({ rt::Value _v19925 = ({ rt::Value _v19924 = ({ rt::Value _v19923 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)))) / 2.0)); rt::dset(this->f_S__3b__21_W, NM_y, _v19923); _v19923; }); rt::dset(this->f_S__3b__21_W, NM_x, _v19924); _v19924; }); rt::dset(this->f_S__5e__21__23_, NM_y, _v19925); _v19925; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v19926); _v19926; });
    } else {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__27__3e_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_2c_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__27__3e_), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
        ({ rt::Value _v19927 = rt::V(50.0); rt::dset(rt::VO(this), NM_width, _v19927); _v19927; });
        ({ rt::Value _v19928 = rt::V(56.0); rt::dset(rt::VO(this), NM_height, _v19928); _v19928; });
        ({ rt::Value _v19929 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[4981]))); this->f_S__5e__21__23_ = _v19929; _v19929; });
        ({ rt::Value _v19930 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[5968]))); this->f_S__3b__21_W = _v19930; _v19930; });
        ({ rt::Value _v19934 = ({ rt::Value _v19933 = ({ rt::Value _v19932 = ({ rt::Value _v19931 = rt::V((rt::tonum(rt::dget(rt::VO(this), NM_width)) - 12.0)); rt::dset(this->f_S__3b__21_W, NM_height, _v19931); _v19931; }); rt::dset(this->f_S__3b__21_W, NM_width, _v19932); _v19932; }); rt::dset(this->f_S__5e__21__23_, NM_height, _v19933); _v19933; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v19934); _v19934; });
        ({ rt::Value _v19936 = ({ rt::Value _v19935 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)))) / 2.0)); rt::dset(this->f_S__3b__21_W, NM_x, _v19935); _v19935; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v19936); _v19936; });
        ({ rt::Value _v19938 = ({ rt::Value _v19937 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_height)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_height)))) / 2.0)); rt::dset(this->f_S__3b__21_W, NM_y, _v19937); _v19937; }); rt::dset(this->f_S__5e__21__23_, NM_y, _v19938); _v19938; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__3b__21_W));
    ({ rt::Value _v19939 = rt::VB((!rt::T(rt::idx_get(rt::dget(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__2b__21_J), rt::N_data), rt::VS(g::LS[4185]))))); rt::dset(this->f_S__5e__21__23_, NM_visible, _v19939); _v19939; });
    ({ rt::Value _v19940 = rt::idx_get(rt::dget(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__2b__21_J), rt::N_data), rt::VS(g::LS[4185])); rt::dset(this->f_S__3b__21_W, NM_visible, _v19940); _v19940; });
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    return rt::NUL;
}
bool C_S__3c__21_w::dm_S_8_21_Q_0() { return false; }
bool C_S__3c__21_w::dm_S_8_21_Q_1() { return false; }
rt::Value C_S__3c__21_w::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S__3c__21_w.S_8_21_Q");
    ({ bool _v19945 = (!({ rt::Value _o19941 = g::SV.C_S__20_g__S__26_K; C_S_33* _p19942 = rt::as_ptr<C_S_33>(_o19941); _p19942 ? _p19942->g_S_1m() : rt::T(rt::dget(_o19941, NM_S_1m)); })); rt::Value _o19943 = g::SV.C_S__20_g__S__26_K; C_S_33* _p19944 = rt::as_ptr<C_S_33>(_o19943); if (_p19944) _p19944->s_S_1m(_v19945); else rt::dset(_o19943, NM_S_1m, rt::VB(_v19945)); _v19945; });
    ({ rt::Value _v19948 = rt::VB(({ rt::Value _o19946 = g::SV.C_S__20_g__S__26_K; C_S_33* _p19947 = rt::as_ptr<C_S_33>(_o19946); _p19947 ? _p19947->g_S_1m() : rt::T(rt::dget(_o19946, NM_S_1m)); })); rt::idx_set(rt::dget(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__2b__21_J), rt::N_data), rt::VS(g::LS[4185]), _v19948); });
    ({ rt::Value _v19949 = rt::VB((!rt::T(rt::idx_get(rt::dget(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__2b__21_J), rt::N_data), rt::VS(g::LS[4185]))))); rt::dset(this->f_S__5e__21__23_, NM_visible, _v19949); _v19949; });
    ({ rt::Value _v19950 = rt::idx_get(rt::dget(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__2b__21_J), rt::N_data), rt::VS(g::LS[4185])); rt::dset(this->f_S__3b__21_W, NM_visible, _v19950); _v19950; });
    return rt::NUL;
}
rt::Value C_S__3c__21_w::m_S__21__21_G() {
    RT_FN("S__3c__21_w.S__21__21_G");
    (void)(this->C_S_6_2b_::m_S__21__21_G());
    if ((!rt::eq(rt::dget(this->f_S__3b__21_W, NM_visible), rt::idx_get(rt::dget(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__2b__21_J), rt::N_data), rt::VS(g::LS[4185]))))) {
        ({ rt::Value _v19951 = rt::VB((!rt::T(rt::idx_get(rt::dget(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__2b__21_J), rt::N_data), rt::VS(g::LS[4185]))))); rt::dset(this->f_S__5e__21__23_, NM_visible, _v19951); _v19951; });
        ({ rt::Value _v19952 = rt::idx_get(rt::dget(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__2b__21_J), rt::N_data), rt::VS(g::LS[4185])); rt::dset(this->f_S__3b__21_W, NM_visible, _v19952); _v19952; });
    }
    return rt::NUL;
}
C_S__3c__21_w* C_S__3c__21_w::alloc_() {
    C_S__3c__21_w* o = rt::make<C_S__3c__21_w>();
    return o;
}
rt::Value C_S__3c__21_w::mk_(rt::Value* a, int n) {
    C_S__3c__21_w* o = alloc_();
    o->C_S__3c__21_w::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_w::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S__3b__21_W: out = f_S__3b__21_W; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S__3c__21_w::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    case NM_S__3b__21_W: f_S__3b__21_W = v; return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S__3c__21_w::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S__3c__21_w::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S__3c__21_w::dm_S_8_21_Q_1())); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3b__21_W: { rt::Value f = f_S__3b__21_W; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S__3c__21_w::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5e__21__23_: return false;
    case NM_S__3b__21_W: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S__3c__21_w::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_w::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_w::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_w::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f_v::ctor_() {
    RT_FN("S__3f_v.S__3f_v");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S__3f_v::m_S__2b__21_R() {
    RT_FN("S__3f_v.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_6_21_H), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2d__26_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_8d), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    ({ rt::Value _v19953 = rt::V(160.0); rt::dset(rt::VO(this), NM_width, _v19953); _v19953; });
    if ((g::SV.C_S__20_g__S__22_g && (((double)(g::SV.C_Translation__locale)) == 5.0))) {
        ({ rt::Value _o19955 = rt::VO(this); rt::Value _v19954 = rt::add(rt::dget(_o19955, NM_width), rt::V(40.0)); rt::dset(_o19955, NM_width, _v19954); _v19954; });
    }
    ({ rt::Value _v19956 = rt::V((g::SV.C_S__20_g__S__22_g ? 45.0 : 70.0)); rt::dset(rt::VO(this), NM_height, _v19956); _v19956; });
    ({ rt::Value _v19957 = rt::add(rt::dget(rt::VO(this), NM_width), rt::V(10.0)); rt::dset(rt::VO(this), NM_minTouchWidth, _v19957); _v19957; });
    ({ rt::Value _v19958 = rt::add(rt::dget(rt::VO(this), NM_height), rt::V(10.0)); rt::dset(rt::VO(this), NM_minTouchHeight, _v19958); _v19958; });
    ({ rt::Value _v19959 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_Z = _v19959; _v19959; });
    ({ rt::Value _v19960 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_textAlign, _v19960); _v19960; });
    ({ rt::Value _v19961 = rt::V(6.0); rt::dset(this->f_S_9_21_Z, NM_paddingTop, _v19961); _v19961; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v19962 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(42.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v19962); _v19962; });
    } else {
        ({ rt::Value _v19963 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(26.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v19963); _v19963; });
        (void)(C_S_99::sm_S__3d__21_7(this->f_S_9_21_Z));
    }
    ({ rt::Value _v19964 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S_9_21_Z, NM_width, _v19964); _v19964; });
    ({ rt::Value _v19965 = rt::VB(false); rt::dset(this->f_S_9_21_Z, NM_touchable, _v19965); _v19965; });
    ({ rt::Value _v19967 = ({ rt::Value _v19966 = rt::VB(true); rt::dset(rt::VO(this), NM_includeInLayout, _v19966); _v19966; }); rt::dset(rt::VO(this), NM_visible, _v19967); _v19967; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_9_21_Z));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    return rt::NUL;
}
rt::Value C_S__3f_v::m_S__21__21_G() {
    RT_FN("S__3f_v.S__21__21_G");
    (void)(this->C_S_6_2b_::m_S__21__21_G());
    ({ rt::Value _v19969 = ({ rt::Value _v19968 = rt::VB(true); rt::dset(rt::VO(this), NM_includeInLayout, _v19968); _v19968; }); rt::dset(rt::VO(this), NM_visible, _v19969); _v19969; });
    if ((!(((double)(g::SV.C_S_8G__S__3e__21_K)) == ((double)(this->f_S__25__21_))))) {
        ({ int32_t _v19970 = g::SV.C_S_8G__S__3e__21_K; this->f_S__25__21_ = _v19970; _v19970; });
        {
            rt::Value _sw19971 = rt::V((double)(this->f_S__25__21_));
            int _c19972 = -1;
            if (_c19972 == -1 && rt::strict_eq(_sw19971, rt::V((double)(g::SV.C_S__3f_v__S__5d__21_A)))) _c19972 = 0;
            if (_c19972 == -1 && rt::strict_eq(_sw19971, rt::V((double)(g::SV.C_S__3f_v__S__60__3b_)))) _c19972 = 1;
            if (_c19972 == -1 && rt::strict_eq(_sw19971, rt::V((double)(g::SV.C_S__3f_v__S__3f_6)))) _c19972 = 2;
            if (_c19972 == -1 && rt::strict_eq(_sw19971, rt::V((double)(g::SV.C_S__3f_v__S__5d__2c_)))) _c19972 = 3;
            if (_c19972 == -1 && rt::strict_eq(_sw19971, rt::V((double)(g::SV.C_S__3f_v__S_9_22__2b_)))) _c19972 = 4;
            if (_c19972 == -1) _c19972 = 5;
            switch (_c19972) {
            case 0: {
                ({ rt::Value _v19973 = rt::trv(rt::VS(g::LS[5969])); rt::dset(this->f_S_9_21_Z, NM_text, _v19973); _v19973; });
                break;
            }
            case 1: {
                ({ rt::Value _v19974 = rt::trv(rt::VS(g::LS[5970])); rt::dset(this->f_S_9_21_Z, NM_text, _v19974); _v19974; });
                break;
            }
            case 2: {
                ({ rt::Value _v19975 = rt::trv(rt::VS(g::LS[5971])); rt::dset(this->f_S_9_21_Z, NM_text, _v19975); _v19975; });
                break;
            }
            case 3: {
                ({ rt::Value _v19976 = rt::trv(rt::VS(g::LS[5972])); rt::dset(this->f_S_9_21_Z, NM_text, _v19976); _v19976; });
                break;
            }
            case 4: {
                ({ rt::Value _v19977 = (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[5973])) : rt::trv(rt::VS(g::LS[5974]))); rt::dset(this->f_S_9_21_Z, NM_text, _v19977); _v19977; });
                break;
            }
            case 5: {
                ({ rt::Value _v19978 = rt::trv(rt::VS(g::LS[5975])); rt::dset(this->f_S_9_21_Z, NM_text, _v19978); _v19978; });
            }
            default: break;
            }
        }
        (void)(rt::dcallv(this->f_S_9_21_Z, NM_validate));
        ({ rt::Value _v19979 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_height)) / 2.0) - (rt::tonum(rt::dget(this->f_S_9_21_Z, NM_height)) / 2.0))); rt::dset(this->f_S_9_21_Z, NM_y, _v19979); _v19979; });
    }
    return rt::NUL;
}
bool C_S__3f_v::dm_S_8_21_Q_0() { return false; }
bool C_S__3f_v::dm_S_8_21_Q_1() { return false; }
rt::Value C_S__3f_v::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S__3f_v.S_8_21_Q");
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    (g::SV.C_S_8G__S__3e__21_K = rt::toint_d((((double)(g::SV.C_S_8G__S__3e__21_K)) + 1.0)));
    if (((((double)(g::SV.C_S_8G__S__3e__21_K)) == ((double)(g::SV.C_S__3f_v__S__5d__2c_))) && (((double)(C_S_8G::sg_S_8_21_H())) == 0.0))) {
        (g::SV.C_S_8G__S__3e__21_K = rt::toint_d((((double)(g::SV.C_S_8G__S__3e__21_K)) + 1.0)));
    }
    if ((((double)(g::SV.C_S_8G__S__3e__21_K)) > ((double)(g::SV.C_S__3f_v__S__40_7)))) {
        (g::SV.C_S_8G__S__3e__21_K = rt::toint_d(0.0));
    }
    (void)(this->m_S__21__21_G());
    return rt::NUL;
}
C_S__3f_v* C_S__3f_v::alloc_() {
    C_S__3f_v* o = rt::make<C_S__3f_v>();
    return o;
}
rt::Value C_S__3f_v::mk_(rt::Value* a, int n) {
    C_S__3f_v* o = alloc_();
    o->C_S__3f_v::ctor_();
    return rt::VO(o);
}
bool C_S__3f_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S__25__21_: out = rt::V((double)(f_S__25__21_)); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S__3f_v::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21_Z: f_S_9_21_Z = v; return true;
    case NM_S__25__21_: f_S__25__21_ = rt::toint(v); return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S__3f_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S__3f_v::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S__3f_v::dm_S_8_21_Q_1())); return true;
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21_: { rt::Value f = rt::V((double)(f_S__25__21_)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S__3f_v::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_21_Q: return true;
    case NM_S_9_21_Z: return false;
    case NM_S__25__21_: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S__3f_v::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__21_A: out = rt::V((double)(g::SV.C_S__3f_v__S__5d__21_A)); return true;
    case NM_S__60__3b_: out = rt::V((double)(g::SV.C_S__3f_v__S__60__3b_)); return true;
    case NM_S__3f_6: out = rt::V((double)(g::SV.C_S__3f_v__S__3f_6)); return true;
    case NM_S__5d__2c_: out = rt::V((double)(g::SV.C_S__3f_v__S__5d__2c_)); return true;
    case NM_S_9_22__2b_: out = rt::V((double)(g::SV.C_S__3f_v__S_9_22__2b_)); return true;
    case NM_S__23__21_S: out = rt::V((double)(g::SV.C_S__3f_v__S__23__21_S)); return true;
    case NM_S__40_7: out = rt::V((double)(g::SV.C_S__3f_v__S__40_7)); return true;
    default: return false;
    }
}
bool C_S__3f_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__21_A: g::SV.C_S__3f_v__S__5d__21_A = rt::toint(v); return true;
    case NM_S__60__3b_: g::SV.C_S__3f_v__S__60__3b_ = rt::toint(v); return true;
    case NM_S__3f_6: g::SV.C_S__3f_v__S__3f_6 = rt::toint(v); return true;
    case NM_S__5d__2c_: g::SV.C_S__3f_v__S__5d__2c_ = rt::toint(v); return true;
    case NM_S_9_22__2b_: g::SV.C_S__3f_v__S_9_22__2b_ = rt::toint(v); return true;
    case NM_S__23__21_S: g::SV.C_S__3f_v__S__23__21_S = rt::toint(v); return true;
    case NM_S__40_7: g::SV.C_S__3f_v__S__40_7 = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S__3f_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b_Y::ctor_() {
    RT_FN("S__2b_Y.S__2b_Y");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S__2b_Y::m_S__2b__21_R() {
    RT_FN("S__2b_Y.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5d__23_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__27__21__26_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_U), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    ({ rt::Value _v19981 = ({ rt::Value _v19980 = rt::V(40.0); rt::dset(rt::VO(this), NM_height, _v19980); _v19980; }); rt::dset(rt::VO(this), NM_width, _v19981); _v19981; });
    ({ rt::Value _v19983 = ({ rt::Value _v19982 = rt::add(rt::dget(rt::VO(this), NM_width), rt::V(10.0)); rt::dset(rt::VO(this), NM_minTouchHeight, _v19982); _v19982; }); rt::dset(rt::VO(this), NM_minTouchWidth, _v19983); _v19983; });
    ({ rt::Value _v19984 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[5976]))); this->f_S__5e__21__23_ = _v19984; _v19984; });
    ({ rt::Value _v19986 = ({ rt::Value _v19985 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S__5e__21__23_, NM_height, _v19985); _v19985; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v19986); _v19986; });
    ({ rt::Value _v19988 = ({ rt::Value _v19987 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)))) / 2.0)); rt::dset(this->f_S__5e__21__23_, NM_y, _v19987); _v19987; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v19988); _v19988; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    (void)(rt::dcallv(rt::VO(this), NM_flatten));
    return rt::NUL;
}
bool C_S__2b_Y::dm_S_8_21_Q_0() { return false; }
bool C_S__2b_Y::dm_S_8_21_Q_1() { return false; }
rt::Value C_S__2b_Y::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S__2b_Y.S_8_21_Q");
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    (g::SV.C_S__20_g__S_3_21_9 = (!g::SV.C_S__20_g__S_3_21_9));
    (void)(({ rt::Value _o19989 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19990 = rt::as_ptr<C_S__20_g>(_o19989); _p19990 ? _p19990->m_S_9_21_K(C_S__20_g::dm_S_9_21_K_0()) : rt::dcallv(_o19989, NM_S_9_21_K); }));
    if (g::SV.C_S__20_g__S_3_21_9) {
        (void)(this->m_S__2b__24_());
        (void)(this->m_S_4_21__5d_());
        ({ bool _v19993 = true; rt::Value _o19991 = g::SV.C_S__20_g__S__5b__21_7; C_S_8_21_Y* _p19992 = rt::as_ptr<C_S_8_21_Y>(_o19991); if (_p19992) _p19992->f_S__3b_4 = _v19993; else rt::dset(_o19991, NM_S__3b_4, rt::VB(_v19993)); _v19993; });
    } else {
        ({ bool _v19996 = false; rt::Value _o19994 = g::SV.C_S__20_g__S__5b__21_7; C_S_8_21_Y* _p19995 = rt::as_ptr<C_S_8_21_Y>(_o19994); if (_p19995) _p19995->f_S__3b_4 = _v19996; else rt::dset(_o19994, NM_S__3b_4, rt::VB(_v19996)); _v19996; });
        (void)(this->m_S__2b__24_());
    }
    return rt::NUL;
}
rt::Value C_S__2b_Y::m_S__5b_i() {
    RT_FN("S__2b_Y.S__5b_i");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
rt::Value C_S__2b_Y::m_S_9_21_0() {
    RT_FN("S__2b_Y.S_9_21_0");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5977])));
    return rt::NUL;
}
bool C_S__2b_Y::m_S__26_B() {
    RT_FN("S__2b_Y.S__26_B");
    return false;
    return false;
}
bool C_S__2b_Y::m_S__5d_k() {
    RT_FN("S__2b_Y.S__5d_k");
    return false;
    return false;
}
C_S__2b_Y* C_S__2b_Y::alloc_() {
    C_S__2b_Y* o = rt::make<C_S__2b_Y>();
    return o;
}
rt::Value C_S__2b_Y::mk_(rt::Value* a, int n) {
    C_S__2b_Y* o = alloc_();
    o->C_S__2b_Y::ctor_();
    return rt::VO(o);
}
bool C_S__2b_Y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5b_i: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21_0: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__26_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5d_k: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S__2b_Y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S__2b_Y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S__2b_Y::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S__2b_Y::dm_S_8_21_Q_1())); return true;
    case NM_S__5b_i: out = m_S__5b_i(); return true;
    case NM_S_9_21_0: out = m_S_9_21_0(); return true;
    case NM_S__26_B: out = rt::VB(m_S__26_B()); return true;
    case NM_S__5d_k: out = rt::VB(m_S__5d_k()); return true;
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S__2b_Y::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__5b_i: return true;
    case NM_S_9_21_0: return true;
    case NM_S__26_B: return true;
    case NM_S__5d_k: return true;
    case NM_S__5e__21__23_: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S__2b_Y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b_Y::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b_Y::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b_Y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c_Y::ctor_() {
    RT_FN("S__2c_Y.S__2c_Y");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S__2c_Y::m_S__2b__21_R() {
    RT_FN("S__2c_Y.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2b_4), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2b_f), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5e_S), rt::NUL, rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3c__21_L)));
    ({ rt::Value _v19997 = rt::V((g::SV.C_S__20_g__S__22_g ? 150.0 : 178.0)); rt::dset(rt::VO(this), NM_width, _v19997); _v19997; });
    ({ rt::Value _v19998 = rt::V(60.0); rt::dset(rt::VO(this), NM_height, _v19998); _v19998; });
    ({ rt::Value _v19999 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_4_21_A); this->f_S__2d__21__2c_ = _v19999; _v19999; });
    ({ rt::Value _v20001 = ({ rt::Value _v20000 = rt::V(54.0); rt::dset(this->f_S__2d__21__2c_, NM_height, _v20000); _v20000; }); rt::dset(this->f_S__2d__21__2c_, NM_width, _v20001); _v20001; });
    ({ rt::Value _v20003 = ({ rt::Value _v20002 = rt::V(3.0); rt::dset(this->f_S__2d__21__2c_, NM_y, _v20002); _v20002; }); rt::dset(this->f_S__2d__21__2c_, NM_x, _v20003); _v20003; });
    ({ rt::Value _v20004 = rt::VB(false); rt::dset(this->f_S__2d__21__2c_, NM_touchable, _v20004); _v20004; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__2d__21__2c_));
    ({ rt::Value _v20005 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[5471]))); this->f_S__5e__21__23_ = _v20005; _v20005; });
    ({ rt::Value _v20007 = ({ rt::Value _v20006 = rt::V(50.0); rt::dset(this->f_S__5e__21__23_, NM_height, _v20006); _v20006; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v20007); _v20007; });
    ({ rt::Value _v20009 = ({ rt::Value _v20008 = rt::V(5.0); rt::dset(this->f_S__5e__21__23_, NM_y, _v20008); _v20008; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v20009); _v20009; });
    ({ rt::Value _v20010 = rt::VB(false); rt::dset(this->f_S__5e__21__23_, NM_touchable, _v20010); _v20010; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    ({ rt::Value _v20011 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_Z = _v20011; _v20011; });
    ({ rt::Value _v20012 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_textAlign, _v20012); _v20012; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v20013 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(24.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20013); _v20013; });
        ({ rt::Value _v20014 = rt::V(10.0); rt::dset(this->f_S_9_21_Z, NM_y, _v20014); _v20014; });
    } else {
        ({ rt::Value _v20015 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(12.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20015); _v20015; });
        (void)(C_S_99::sm_S__3d__21_7(this->f_S_9_21_Z));
        ({ rt::Value _v20016 = rt::V(4.0); rt::dset(this->f_S_9_21_Z, NM_y, _v20016); _v20016; });
    }
    ({ rt::Value _v20017 = rt::add(rt::add(rt::dget(this->f_S__5e__21__23_, NM_x), rt::dget(this->f_S__5e__21__23_, NM_width)), rt::V(5.0)); rt::dset(this->f_S_9_21_Z, NM_x, _v20017); _v20017; });
    ({ rt::Value _v20018 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S_9_21_Z, NM_x))) - 5.0)); rt::dset(this->f_S_9_21_Z, NM_width, _v20018); _v20018; });
    ({ rt::Value _v20019 = rt::VB(false); rt::dset(this->f_S_9_21_Z, NM_touchable, _v20019); _v20019; });
    ({ rt::Value _v20020 = rt::trv(rt::VS(g::LS[5978])); rt::dset(this->f_S_9_21_Z, NM_text, _v20020); _v20020; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_9_21_Z));
    (void)(rt::dcallv(this->f_S_9_21_Z, NM_validate));
    ({ rt::Value _v20021 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_height)) / 2.0) - (rt::tonum(rt::dget(this->f_S_9_21_Z, NM_height)) / 2.0))); rt::dset(this->f_S_9_21_Z, NM_y, _v20021); _v20021; });
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    return rt::NUL;
}
rt::Value C_S__2c_Y::m_S__21__21_G() {
    RT_FN("S__2c_Y.S__21__21_G");
    (void)(this->C_S_6_2b_::m_S__21__21_G());
    return rt::NUL;
}
bool C_S__2c_Y::dm_S_8_21_Q_0() { return false; }
bool C_S__2c_Y::dm_S_8_21_Q_1() { return false; }
rt::Value C_S__2c_Y::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc3_ = NAN;
    double l_A__loc5_ = NAN;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("S__2c_Y.S_8_21_Q");
    (l_A__loc3_ = ({ rt::Value _o20022 = C_S_8G::sm_S__21__21_H(g::SV.C_S__60_J__id); C_S__60_6* _p20023 = rt::as_ptr<C_S__60_6>(_o20022); _p20023 ? _p20023->m_S_6U() : rt::tonum(rt::dcallv(_o20022, NM_S_6U)); }));
    (l_A__loc5_ = ({ rt::Value _o20024 = C_S_8G::sm_S__21__21_H(g::SV.C_S__60_J__id); C_S__60_6* _p20025 = rt::as_ptr<C_S__60_6>(_o20024); _p20025 ? _p20025->g_S_9_21_U() : rt::tonum(rt::dget(_o20024, NM_S_9_21_U)); }));
    (l_A__loc4_ = rt::slot_string(rt::trv(rt::VS(g::LS[5979]))));
    if ((((double)(C_S_8G::sg_S__2c_P())) > 0.0)) {
        (l_A__loc4_ = rt::slot_string(rt::add(l_A__loc4_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5980]), C_S__26_c::sm_S_8_21_Z(l_A__loc5_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
        (void)(({ rt::Value _o20026 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20027 = rt::as_ptr<C_S__20_g>(_o20026); _p20027 ? _p20027->m_S__2d__25_(rt::trv(rt::VS(g::LS[5470])), l_A__loc4_, rt::arr_lit({rt::add(rt::add(rt::trv(rt::VS(g::LS[5981])), rt::VS(g::LS[143])), rt::tr_nv(rt::VS(g::LS[1211]), rt::VS(g::LS[1212]), rt::V(l_A__loc3_), C_S__26_c::sm_S_8_21_Z(l_A__loc3_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::trv(rt::VS(g::LS[5982]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3b__21_q)), rt::VO(rt::new_bound(rt::VO(this), NM_S__3f_M))}), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20026, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5470])), l_A__loc4_, rt::arr_lit({rt::add(rt::add(rt::trv(rt::VS(g::LS[5981])), rt::VS(g::LS[143])), rt::tr_nv(rt::VS(g::LS[1211]), rt::VS(g::LS[1212]), rt::V(l_A__loc3_), C_S__26_c::sm_S_8_21_Z(l_A__loc3_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::trv(rt::VS(g::LS[5982]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3b__21_q)), rt::VO(rt::new_bound(rt::VO(this), NM_S__3f_M))})); }));
    } else {
        (void)(({ rt::Value _o20028 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20029 = rt::as_ptr<C_S__20_g>(_o20028); _p20029 ? _p20029->m_S__2d__25_(rt::trv(rt::VS(g::LS[5470])), l_A__loc4_, rt::arr_lit({rt::add(rt::add(rt::trv(rt::VS(g::LS[5981])), rt::VS(g::LS[143])), rt::tr_nv(rt::VS(g::LS[1211]), rt::VS(g::LS[1212]), rt::V(l_A__loc3_), C_S__26_c::sm_S_8_21_Z(l_A__loc3_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3b__21_q))}), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20028, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5470])), l_A__loc4_, rt::arr_lit({rt::add(rt::add(rt::trv(rt::VS(g::LS[5981])), rt::VS(g::LS[143])), rt::tr_nv(rt::VS(g::LS[1211]), rt::VS(g::LS[1212]), rt::V(l_A__loc3_), C_S__26_c::sm_S_8_21_Z(l_A__loc3_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3b__21_q))})); }));
    }
    return rt::NUL;
}
rt::Value C_S__2c_Y::m_S__3b__21_q() {
    double l_A__loc1_ = NAN;
    RT_FN("S__2c_Y.S__3b__21_q");
    (l_A__loc1_ = ({ rt::Value _o20030 = C_S_8G::sm_S__21__21_H(g::SV.C_S__60_J__id); C_S__60_6* _p20031 = rt::as_ptr<C_S__60_6>(_o20030); _p20031 ? _p20031->m_S_6U() : rt::tonum(rt::dcallv(_o20030, NM_S_6U)); }));
    if ((C_S_8G::sg_S__3c__21__27_() < l_A__loc1_)) {
        (void)(({ rt::Value _o20032 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20033 = rt::as_ptr<C_S__20_g>(_o20032); _p20033 ? _p20033->m_S__2d__25_(rt::trv(rt::VS(g::LS[3379])), rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5983]), rt::VS(g::LS[5984]), rt::V(l_A__loc1_), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[5985]))), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__26__21__60_))}), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20032, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3379])), rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[5983]), rt::VS(g::LS[5984]), rt::V(l_A__loc1_), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[5985]))), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__26__21__60_))})); }));
    } else {
        (void)(({ rt::Value _o20034 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20035 = rt::as_ptr<C_S__20_g>(_o20034); _p20035 ? _p20035->m_S__2d__25_(rt::trv(rt::VS(g::LS[5470])), rt::trv(rt::VS(g::LS[5986]), rt::tr_nv(rt::VS(g::LS[1211]), rt::VS(g::LS[1212]), rt::V(l_A__loc1_), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S_7_21_r))}), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20034, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5470])), rt::trv(rt::VS(g::LS[5986]), rt::tr_nv(rt::VS(g::LS[1211]), rt::VS(g::LS[1212]), rt::V(l_A__loc1_), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S_7_21_r))})); }));
    }
    return rt::NUL;
}
rt::Value C_S__2c_Y::m_S_7_21_r() {
    double l_A__loc1_ = NAN;
    RT_FN("S__2c_Y.S_7_21_r");
    (l_A__loc1_ = ({ rt::Value _o20036 = C_S_8G::sm_S__21__21_H(g::SV.C_S__60_J__id); C_S__60_6* _p20037 = rt::as_ptr<C_S__60_6>(_o20036); _p20037 ? _p20037->m_S_6U() : rt::tonum(rt::dcallv(_o20036, NM_S_6U)); }));
    if ((C_S_8G::sg_S__3c__21__27_() >= l_A__loc1_)) {
        (void)(({ rt::Value _o20038 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p20039 = rt::as_ptr<C_S_8G>(_o20038); _p20039 ? _p20039->m_S__23_X(C_S_8G::sm_S__21__21_H(g::SV.C_S__60_J__id), true) : rt::T(rt::dcallv(_o20038, NM_S__23_X, C_S_8G::sm_S__21__21_H(g::SV.C_S__60_J__id), rt::VB(true))); }));
    }
    return rt::NUL;
}
rt::Value C_S__2c_Y::m_S__26__21__60_() {
    RT_FN("S__2c_Y.S__26__21__60_");
    (void)(({ rt::Value _o20046 = (({ rt::Value _t20045 = ({ rt::Value _o20043 = (({ rt::Value _t20042 = ({ rt::Value _o20040 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20041 = rt::as_ptr<C_S__20_g>(_o20040); _p20041 ? _p20041->m_S__2b__21__2c_(rt::touint_d(5.0)) : rt::dcallv(_o20040, NM_S__2b__21__2c_, rt::V(5.0)); }); rt::is_class(_t20042, C_S__21_M::CI) ? _t20042 : rt::NUL; })); C_S__21_M* _p20044 = rt::as_ptr<C_S__21_M>(_o20043); _p20044 ? _p20044->m_S__21__21__23_(rt::toint_d(2.0)) : rt::dcallv(_o20043, NM_S__21__21__23_, rt::V(2.0)); }); rt::is_class(_t20045, C_S__3d__21__5f_::CI) ? _t20045 : rt::NUL; })); C_S__3d__21__5f_* _p20047 = rt::as_ptr<C_S__3d__21__5f_>(_o20046); _p20047 ? _p20047->m_S__25__21__26_() : rt::dcallv(_o20046, NM_S__25__21__26_); }));
    return rt::NUL;
}
rt::Value C_S__2c_Y::m_S__3f_M() {
    double l_A__loc1_ = NAN;
    RT_FN("S__2c_Y.S__3f_M");
    (l_A__loc1_ = ({ rt::Value _o20048 = C_S_8G::sm_S__21__21_H(g::SV.C_S__60_J__id); C_S__60_6* _p20049 = rt::as_ptr<C_S__60_6>(_o20048); _p20049 ? _p20049->g_S_9_21_U() : rt::tonum(rt::dget(_o20048, NM_S_9_21_U)); }));
    if ((C_S_8G::sg_S__40_e() < l_A__loc1_)) {
        (void)(({ rt::Value _o20050 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20051 = rt::as_ptr<C_S__20_g>(_o20050); _p20051 ? _p20051->m_S__2d__25_(rt::trv(rt::VS(g::LS[5470])), rt::trv(rt::VS(g::LS[5987]), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20050, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5470])), rt::trv(rt::VS(g::LS[5987]), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))); }));
    } else {
        (void)(({ rt::Value _o20052 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p20053 = rt::as_ptr<C_S_8G>(_o20052); _p20053 ? _p20053->m_S__23_X(C_S_8G::sm_S__21__21_H(g::SV.C_S__60_J__id), false) : rt::T(rt::dcallv(_o20052, NM_S__23_X, C_S_8G::sm_S__21__21_H(g::SV.C_S__60_J__id), rt::VB(false))); }));
    }
    return rt::NUL;
}
C_S__2c_Y* C_S__2c_Y::alloc_() {
    C_S__2c_Y* o = rt::make<C_S__2c_Y>();
    return o;
}
rt::Value C_S__2c_Y::mk_(rt::Value* a, int n) {
    C_S__2c_Y* o = alloc_();
    o->C_S__2c_Y::ctor_();
    return rt::VO(o);
}
bool C_S__2c_Y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d__21__2c_: out = f_S__2d__21__2c_; return true;
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S__2c_6: out = rt::V(f_S__2c_6); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3b__21_q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7_21_r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__26__21__60_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3f_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S__2c_Y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d__21__2c_: f_S__2d__21__2c_ = v; return true;
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    case NM_S_9_21_Z: f_S_9_21_Z = v; return true;
    case NM_S__2c_6: f_S__2c_6 = rt::tonum(v); return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S__2c_Y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S__2c_Y::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S__2c_Y::dm_S_8_21_Q_1())); return true;
    case NM_S__3b__21_q: out = m_S__3b__21_q(); return true;
    case NM_S_7_21_r: out = m_S_7_21_r(); return true;
    case NM_S__26__21__60_: out = m_S__26__21__60_(); return true;
    case NM_S__3f_M: out = m_S__3f_M(); return true;
    case NM_S__2d__21__2c_: { rt::Value f = f_S__2d__21__2c_; out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S__2c_6: { rt::Value f = rt::V(f_S__2c_6); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S__2c_Y::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__3b__21_q: return true;
    case NM_S_7_21_r: return true;
    case NM_S__26__21__60_: return true;
    case NM_S__3f_M: return true;
    case NM_S__2d__21__2c_: return false;
    case NM_S__5e__21__23_: return false;
    case NM_S_9_21_Z: return false;
    case NM_S__2c_6: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S__2c_Y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c_Y::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c_Y::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c_Y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_2c_::ctor_(bool p0) {
    bool l_param1 = p0;
    RT_FN("S_0_2c_.S_0_2c_");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
    ({ bool _v20054 = l_param1; this->f_S__3e__22_L = _v20054; _v20054; });
}
rt::Value C_S_0_2c_::m_S__2b__21_R() {
    RT_FN("S_0_2c_.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_4), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__26_E), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_8x), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    if (this->f_S__3e__22_L) {
        ({ rt::Value _v20056 = ({ rt::Value _v20055 = rt::V((g::SV.C_S__20_g__S__22_g ? 34.0 : 75.0)); rt::dset(rt::VO(this), NM_height, _v20055); _v20055; }); rt::dset(rt::VO(this), NM_width, _v20056); _v20056; });
    } else {
        ({ rt::Value _v20058 = ({ rt::Value _v20057 = rt::V((g::SV.C_S__20_g__S__22_g ? 50.0 : 75.0)); rt::dset(rt::VO(this), NM_height, _v20057); _v20057; }); rt::dset(rt::VO(this), NM_width, _v20058); _v20058; });
    }
    ({ rt::Value _v20059 = rt::VS(g::LS[5988]); this->f_S__2c__21_U = rt::slot_string(_v20059); _v20059; });
    if ((((double)(this->f_S__3f__21__3d_)) == 1.0)) {
        ({ rt::Value _v20060 = rt::VS(g::LS[1405]); this->f_S__2c__21_U = rt::slot_string(_v20060); _v20060; });
    } else if ((((double)(this->f_S__3f__21__3d_)) == 2.0)) {
        ({ rt::Value _v20061 = rt::VS(g::LS[1406]); this->f_S__2c__21_U = rt::slot_string(_v20061); _v20061; });
    } else if ((((double)(this->f_S__3f__21__3d_)) == 3.0)) {
        ({ rt::Value _v20062 = rt::VS(g::LS[1407]); this->f_S__2c__21_U = rt::slot_string(_v20062); _v20062; });
    } else if ((((double)(this->f_S__3f__21__3d_)) == 4.0)) {
        ({ rt::Value _v20063 = rt::VS(g::LS[4578]); this->f_S__2c__21_U = rt::slot_string(_v20063); _v20063; });
    }
    ({ rt::Value _v20064 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, this->f_S__2c__21_U)); this->f_S__5e__21__23_ = _v20064; _v20064; });
    if (this->f_S__3e__22_L) {
        ({ rt::Value _v20066 = ({ rt::Value _v20065 = rt::V((g::SV.C_S__20_g__S__22_g ? (rt::tonum(rt::dget(rt::VO(this), NM_width)) - 4.0) : (rt::tonum(rt::dget(rt::VO(this), NM_width)) - 5.0))); rt::dset(this->f_S__5e__21__23_, NM_height, _v20065); _v20065; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v20066); _v20066; });
    } else {
        ({ rt::Value _v20068 = ({ rt::Value _v20067 = rt::V((g::SV.C_S__20_g__S__22_g ? (rt::tonum(rt::dget(rt::VO(this), NM_width)) - 5.0) : (rt::tonum(rt::dget(rt::VO(this), NM_width)) - 10.0))); rt::dset(this->f_S__5e__21__23_, NM_height, _v20067); _v20067; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v20068); _v20068; });
    }
    ({ rt::Value _v20070 = ({ rt::Value _v20069 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_width)) / 2.0) - (rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)) / 2.0))); rt::dset(this->f_S__5e__21__23_, NM_y, _v20069); _v20069; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v20070); _v20070; });
    ({ rt::Value _v20071 = rt::VB(false); rt::dset(this->f_S__5e__21__23_, NM_touchable, _v20071); _v20071; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    return rt::NUL;
}
rt::Value C_S_0_2c_::m_S__5b__2c_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_0_2c_.S__5b__2c_");
    ({ int32_t _v20072 = l_param1; this->f_S__3f__21__3d_ = _v20072; _v20072; });
    (void)(this->m_S__2b__21_R());
    return rt::NUL;
}
rt::Value C_S_0_2c_::m_S_5I(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc3_ = rt::NUL;
    int32_t l_A__loc2_ = 0;
    RT_FN("S_0_2c_.S_5I");
    (l_A__loc3_ = rt::NUL);
    ({ rt::Value _v20073 = l_param1; this->f_S_0_21_A = _v20073; _v20073; });
    if (rt::eq(this->f_S_0_21_A, rt::NUL)) {
        return rt::NUL;
    }
    (l_A__loc2_ = rt::toint_d(0.0));
    if ((((double)(this->f_S__3f__21__3d_)) == 1.0)) {
        (l_A__loc2_ = rt::toint_d((((double)(({ rt::Value _o20074 = this->f_S_0_21_A; C_S_84* _p20075 = rt::as_ptr<C_S_84>(_o20074); _p20075 ? _p20075->f_S__23__21_B : rt::toint(rt::dget(_o20074, NM_S__23__21_B)); }))) + 1.0)));
    } else if ((((double)(this->f_S__3f__21__3d_)) == 2.0)) {
        (l_A__loc2_ = rt::toint_d((((double)(({ rt::Value _o20076 = this->f_S_0_21_A; C_S_84* _p20077 = rt::as_ptr<C_S_84>(_o20076); _p20077 ? _p20077->f_S_5_21_H : rt::toint(rt::dget(_o20076, NM_S_5_21_H)); }))) + 1.0)));
    } else if ((((double)(this->f_S__3f__21__3d_)) == 3.0)) {
        (l_A__loc2_ = rt::toint_d((((double)(({ rt::Value _o20078 = this->f_S_0_21_A; C_S_84* _p20079 = rt::as_ptr<C_S_84>(_o20078); _p20079 ? _p20079->f_S_8_23_ : rt::toint(rt::dget(_o20078, NM_S_8_23_)); }))) + 1.0)));
    } else if ((((double)(this->f_S__3f__21__3d_)) == 4.0)) {
        (l_A__loc2_ = rt::toint_d((((double)(({ rt::Value _o20080 = this->f_S_0_21_A; C_S_84* _p20081 = rt::as_ptr<C_S_84>(_o20080); _p20081 ? _p20081->f_S_6_21_A : rt::toint(rt::dget(_o20080, NM_S_6_21_A)); }))) + 1.0)));
    }
    if (((((double)(this->f_S__3f__21__3d_)) > 0.0) && (!(((double)(l_A__loc2_)) == 0.0)))) {
        (l_A__loc3_ = rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::add(rt::add(rt::add(this->f_S__2c__21_U, (((((double)(l_A__loc2_)) < 10.0) ? rt::VS(g::LS[151]) : rt::VS(g::LS[113])))), rt::dcallv(rt::V((double)(l_A__loc2_)), rt::N_toString)), rt::VS(g::LS[5989]))));
        if ((!rt::eq(l_A__loc3_, rt::NUL))) {
            ({ rt::Value _v20082 = l_A__loc3_; rt::dset(this->f_S__5e__21__23_, NM_texture, _v20082); _v20082; });
        } else {
            (void)(rt::NUL);
            ({ rt::Value _v20083 = rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, this->f_S__2c__21_U); rt::dset(this->f_S__5e__21__23_, NM_texture, _v20083); _v20083; });
        }
    } else {
        ({ rt::Value _v20084 = rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, this->f_S__2c__21_U); rt::dset(this->f_S__5e__21__23_, NM_texture, _v20084); _v20084; });
    }
    return rt::NUL;
}
bool C_S_0_2c_::dm_S_8_21_Q_0() { return false; }
bool C_S_0_2c_::dm_S_8_21_Q_1() { return false; }
rt::Value C_S_0_2c_::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_A__loc5_ = false;
    bool l_A__loc3_ = false;
    bool l_A__loc8_ = false;
    int32_t l_A__loc7_ = 0;
    rt::Value l_A__loc6_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("S_0_2c_.S_8_21_Q");
    (l_A__loc5_ = false);
    (l_A__loc3_ = false);
    (l_A__loc8_ = false);
    (l_A__loc7_ = rt::toint_d(0.0));
    if ((this->f_S__3e__22_L && rt::eq(this->f_S_0_21_A, rt::NUL))) {
        (l_A__loc5_ = true);
        (l_A__loc3_ = true);
        {
            std::vector<rt::Value> _lst20085;
            rt::each(g::SV.C_S_8G__S_0_21_A, _lst20085);
            for (const rt::Value& _x20086 : _lst20085) {
                l_A__loc6_ = _x20086;
                if ((({ rt::Value _o20087 = l_A__loc6_; C_S_84* _p20088 = rt::as_ptr<C_S_84>(_o20087); _p20088 ? _p20088->g_S__2d_6() : rt::T(rt::dget(_o20087, NM_S__2d_6)); }) && (!(((double)(({ rt::Value _o20089 = l_A__loc6_; C_S_84* _p20090 = rt::as_ptr<C_S_84>(_o20089); _p20090 ? _p20090->f_id : rt::touint(rt::dget(_o20089, NM_id)); }))) == ((double)(g::SV.C_S_2_3c___id)))))) {
                    if (({ rt::Value _o20091 = l_A__loc6_; C_S_84* _p20092 = rt::as_ptr<C_S_84>(_o20091); _p20092 ? _p20092->f_S_3A : rt::T(rt::dget(_o20091, NM_S_3A)); })) {
                        (l_A__loc3_ = false);
                    }
                    if (((((double)(this->f_S__3f__21__3d_)) == 1.0) && ((!({ rt::Value _o20093 = l_A__loc6_; C_S_84* _p20094 = rt::as_ptr<C_S_84>(_o20093); _p20094 ? _p20094->f_S_3A : rt::T(rt::dget(_o20093, NM_S_3A)); })) || (((double)(({ rt::Value _o20095 = l_A__loc6_; C_S_84* _p20096 = rt::as_ptr<C_S_84>(_o20095); _p20096 ? _p20096->f_S__23__21_B : rt::toint(rt::dget(_o20095, NM_S__23__21_B)); }))) == (-1.0))))) {
                        (l_A__loc5_ = false);
                    }
                    if (((((double)(this->f_S__3f__21__3d_)) == 2.0) && ((!({ rt::Value _o20097 = l_A__loc6_; C_S_84* _p20098 = rt::as_ptr<C_S_84>(_o20097); _p20098 ? _p20098->f_S_3A : rt::T(rt::dget(_o20097, NM_S_3A)); })) || (((double)(({ rt::Value _o20099 = l_A__loc6_; C_S_84* _p20100 = rt::as_ptr<C_S_84>(_o20099); _p20100 ? _p20100->f_S_5_21_H : rt::toint(rt::dget(_o20099, NM_S_5_21_H)); }))) == (-1.0))))) {
                        (l_A__loc5_ = false);
                    }
                    if (((((double)(this->f_S__3f__21__3d_)) == 3.0) && ((!({ rt::Value _o20101 = l_A__loc6_; C_S_84* _p20102 = rt::as_ptr<C_S_84>(_o20101); _p20102 ? _p20102->f_S_3A : rt::T(rt::dget(_o20101, NM_S_3A)); })) || (((double)(({ rt::Value _o20103 = l_A__loc6_; C_S_84* _p20104 = rt::as_ptr<C_S_84>(_o20103); _p20104 ? _p20104->f_S_8_23_ : rt::toint(rt::dget(_o20103, NM_S_8_23_)); }))) == (-1.0))))) {
                        (l_A__loc5_ = false);
                    }
                }
            }
        }
        (l_A__loc8_ = (l_A__loc3_ ? true : (!l_A__loc5_)));
        {
            std::vector<rt::Value> _lst20105;
            rt::each(g::SV.C_S_8G__S_0_21_A, _lst20105);
            for (const rt::Value& _x20106 : _lst20105) {
                l_A__loc4_ = _x20106;
                if (({ rt::Value _o20107 = l_A__loc4_; C_S_84* _p20108 = rt::as_ptr<C_S_84>(_o20107); _p20108 ? _p20108->g_S__2d_6() : rt::T(rt::dget(_o20107, NM_S__2d_6)); })) {
                    ({ rt::Value _v20109 = l_A__loc4_; this->f_S_0_21_A = _v20109; _v20109; });
                    if ((l_A__loc8_ && ({ rt::Value _o20110 = this->f_S_0_21_A; C_S_84* _p20111 = rt::as_ptr<C_S_84>(_o20110); _p20111 ? _p20111->f_S_3A : rt::T(rt::dget(_o20110, NM_S_3A)); }))) {
                        ({ bool _v20114 = false; rt::Value _o20112 = this->f_S_0_21_A; C_S_84* _p20113 = rt::as_ptr<C_S_84>(_o20112); if (_p20113) _p20113->f_S_3A = _v20114; else rt::dset(_o20112, NM_S_3A, rt::VB(_v20114)); _v20114; });
                        if ((!(((double)(({ rt::Value _o20115 = this->f_S_0_21_A; C_S_84* _p20116 = rt::as_ptr<C_S_84>(_o20115); _p20116 ? _p20116->f_S__23__21_B : rt::toint(rt::dget(_o20115, NM_S__23__21_B)); }))) == (-1.0)))) {
                            (void)(({ rt::Value _o20117 = this->f_S_0_21_A; C_S_84* _p20118 = rt::as_ptr<C_S_84>(_o20117); _p20118 ? _p20118->m_S_6_21_2(false, false) : rt::dcallv(_o20117, NM_S_6_21_2, rt::VB(false), rt::VB(false)); }));
                        }
                        if ((!(((double)(({ rt::Value _o20119 = this->f_S_0_21_A; C_S_84* _p20120 = rt::as_ptr<C_S_84>(_o20119); _p20120 ? _p20120->f_S_5_21_H : rt::toint(rt::dget(_o20119, NM_S_5_21_H)); }))) == (-1.0)))) {
                            (void)(({ rt::Value _o20121 = this->f_S_0_21_A; C_S_84* _p20122 = rt::as_ptr<C_S_84>(_o20121); _p20122 ? _p20122->m_S_6_21_2(true, false) : rt::dcallv(_o20121, NM_S_6_21_2, rt::VB(true), rt::VB(false)); }));
                        }
                        if ((!(((double)(({ rt::Value _o20123 = this->f_S_0_21_A; C_S_84* _p20124 = rt::as_ptr<C_S_84>(_o20123); _p20124 ? _p20124->f_S_8_23_ : rt::toint(rt::dget(_o20123, NM_S_8_23_)); }))) == (-1.0)))) {
                            (void)(({ rt::Value _o20125 = this->f_S_0_21_A; C_S_84* _p20126 = rt::as_ptr<C_S_84>(_o20125); _p20126 ? _p20126->m_S_6_21_2(false, true) : rt::dcallv(_o20125, NM_S_6_21_2, rt::VB(false), rt::VB(true)); }));
                        }
                    } else if (((!l_A__loc8_) && (!({ rt::Value _o20127 = this->f_S_0_21_A; C_S_84* _p20128 = rt::as_ptr<C_S_84>(_o20127); _p20128 ? _p20128->f_S_3A : rt::T(rt::dget(_o20127, NM_S_3A)); })))) {
                        continue;
                    }
                    (l_A__loc7_ = rt::toint_d((-1.0)));
                    if ((({ bool _t20131 = (((double)(({ rt::Value _o20129 = l_A__loc4_; C_S_84* _p20130 = rt::as_ptr<C_S_84>(_o20129); _p20130 ? _p20130->f_id : rt::touint(rt::dget(_o20129, NM_id)); }))) == ((double)(g::SV.C_S_2_3c___id))); _t20131 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__2d__21_X__id)) : _t20131; }) && ((((double)(this->f_S__3f__21__3d_)) == 1.0) || (((double)(this->f_S__3f__21__3d_)) == 3.0)))) {
                        (l_A__loc7_ = this->f_S__3f__21__3d_);
                        ({ double _v20132 = 2.0; this->f_S__3f__21__3d_ = rt::toint_d(_v20132); _v20132; });
                    }
                    (void)(this->m_S_8_21_Q(false, false));
                    if ((!(((double)(l_A__loc7_)) == (-1.0)))) {
                        ({ int32_t _v20133 = l_A__loc7_; this->f_S__3f__21__3d_ = _v20133; _v20133; });
                    }
                }
            }
        }
        ({ rt::Value _v20134 = rt::NUL; this->f_S_0_21_A = _v20134; _v20134; });
        return rt::NUL;
    }
    if (rt::eq(this->f_S_0_21_A, rt::NUL)) {
        return rt::NUL;
    }
    if ((((double)(this->f_S__3f__21__3d_)) == 0.0)) {
        ({ bool _v20139 = (!({ rt::Value _o20135 = this->f_S_0_21_A; C_S_84* _p20136 = rt::as_ptr<C_S_84>(_o20135); _p20136 ? _p20136->f_S_3A : rt::T(rt::dget(_o20135, NM_S_3A)); })); rt::Value _o20137 = this->f_S_0_21_A; C_S_84* _p20138 = rt::as_ptr<C_S_84>(_o20137); if (_p20138) _p20138->f_S_3A = _v20139; else rt::dset(_o20137, NM_S_3A, rt::VB(_v20139)); _v20139; });
    } else if ((((double)(this->f_S__3f__21__3d_)) == 1.0)) {
        if ((({ rt::Value _o20140 = this->f_S_0_21_A; C_S_84* _p20141 = rt::as_ptr<C_S_84>(_o20140); _p20141 ? _p20141->f_S_3A : rt::T(rt::dget(_o20140, NM_S_3A)); }) && (!(((double)(({ rt::Value _o20142 = this->f_S_0_21_A; C_S_84* _p20143 = rt::as_ptr<C_S_84>(_o20142); _p20143 ? _p20143->f_S_5_21_H : rt::toint(rt::dget(_o20142, NM_S_5_21_H)); }))) == (-1.0))))) {
            ({ bool _v20146 = false; rt::Value _o20144 = this->f_S_0_21_A; C_S_84* _p20145 = rt::as_ptr<C_S_84>(_o20144); if (_p20145) _p20145->f_S_3A = _v20146; else rt::dset(_o20144, NM_S_3A, rt::VB(_v20146)); _v20146; });
            (void)(({ rt::Value _o20147 = this->f_S_0_21_A; C_S_84* _p20148 = rt::as_ptr<C_S_84>(_o20147); _p20148 ? _p20148->m_S_6_21_2(true, false) : rt::dcallv(_o20147, NM_S_6_21_2, rt::VB(true), rt::VB(false)); }));
        }
        if ((({ rt::Value _o20149 = this->f_S_0_21_A; C_S_84* _p20150 = rt::as_ptr<C_S_84>(_o20149); _p20150 ? _p20150->f_S_3A : rt::T(rt::dget(_o20149, NM_S_3A)); }) && (!(((double)(({ rt::Value _o20151 = this->f_S_0_21_A; C_S_84* _p20152 = rt::as_ptr<C_S_84>(_o20151); _p20152 ? _p20152->f_S_8_23_ : rt::toint(rt::dget(_o20151, NM_S_8_23_)); }))) == (-1.0))))) {
            ({ bool _v20155 = false; rt::Value _o20153 = this->f_S_0_21_A; C_S_84* _p20154 = rt::as_ptr<C_S_84>(_o20153); if (_p20154) _p20154->f_S_3A = _v20155; else rt::dset(_o20153, NM_S_3A, rt::VB(_v20155)); _v20155; });
            (void)(({ rt::Value _o20156 = this->f_S_0_21_A; C_S_84* _p20157 = rt::as_ptr<C_S_84>(_o20156); _p20157 ? _p20157->m_S_6_21_2(false, true) : rt::dcallv(_o20156, NM_S_6_21_2, rt::VB(false), rt::VB(true)); }));
        }
        ({ bool _v20162 = (!({ rt::Value _o20158 = this->f_S_0_21_A; C_S_84* _p20159 = rt::as_ptr<C_S_84>(_o20158); _p20159 ? _p20159->f_S_3A : rt::T(rt::dget(_o20158, NM_S_3A)); })); rt::Value _o20160 = this->f_S_0_21_A; C_S_84* _p20161 = rt::as_ptr<C_S_84>(_o20160); if (_p20161) _p20161->f_S_3A = _v20162; else rt::dset(_o20160, NM_S_3A, rt::VB(_v20162)); _v20162; });
        (void)(({ rt::Value _o20163 = this->f_S_0_21_A; C_S_84* _p20164 = rt::as_ptr<C_S_84>(_o20163); _p20164 ? _p20164->m_S_6_21_2(false, false) : rt::dcallv(_o20163, NM_S_6_21_2, rt::VB(false), rt::VB(false)); }));
    } else if ((((double)(this->f_S__3f__21__3d_)) == 2.0)) {
        if ((({ rt::Value _o20165 = this->f_S_0_21_A; C_S_84* _p20166 = rt::as_ptr<C_S_84>(_o20165); _p20166 ? _p20166->f_S_3A : rt::T(rt::dget(_o20165, NM_S_3A)); }) && (!(((double)(({ rt::Value _o20167 = this->f_S_0_21_A; C_S_84* _p20168 = rt::as_ptr<C_S_84>(_o20167); _p20168 ? _p20168->f_S__23__21_B : rt::toint(rt::dget(_o20167, NM_S__23__21_B)); }))) == (-1.0))))) {
            ({ bool _v20171 = false; rt::Value _o20169 = this->f_S_0_21_A; C_S_84* _p20170 = rt::as_ptr<C_S_84>(_o20169); if (_p20170) _p20170->f_S_3A = _v20171; else rt::dset(_o20169, NM_S_3A, rt::VB(_v20171)); _v20171; });
            (void)(({ rt::Value _o20172 = this->f_S_0_21_A; C_S_84* _p20173 = rt::as_ptr<C_S_84>(_o20172); _p20173 ? _p20173->m_S_6_21_2(false, false) : rt::dcallv(_o20172, NM_S_6_21_2, rt::VB(false), rt::VB(false)); }));
        }
        if ((({ rt::Value _o20174 = this->f_S_0_21_A; C_S_84* _p20175 = rt::as_ptr<C_S_84>(_o20174); _p20175 ? _p20175->f_S_3A : rt::T(rt::dget(_o20174, NM_S_3A)); }) && (!(((double)(({ rt::Value _o20176 = this->f_S_0_21_A; C_S_84* _p20177 = rt::as_ptr<C_S_84>(_o20176); _p20177 ? _p20177->f_S_8_23_ : rt::toint(rt::dget(_o20176, NM_S_8_23_)); }))) == (-1.0))))) {
            ({ bool _v20180 = false; rt::Value _o20178 = this->f_S_0_21_A; C_S_84* _p20179 = rt::as_ptr<C_S_84>(_o20178); if (_p20179) _p20179->f_S_3A = _v20180; else rt::dset(_o20178, NM_S_3A, rt::VB(_v20180)); _v20180; });
            (void)(({ rt::Value _o20181 = this->f_S_0_21_A; C_S_84* _p20182 = rt::as_ptr<C_S_84>(_o20181); _p20182 ? _p20182->m_S_6_21_2(false, true) : rt::dcallv(_o20181, NM_S_6_21_2, rt::VB(false), rt::VB(true)); }));
        }
        ({ bool _v20187 = (!({ rt::Value _o20183 = this->f_S_0_21_A; C_S_84* _p20184 = rt::as_ptr<C_S_84>(_o20183); _p20184 ? _p20184->f_S_3A : rt::T(rt::dget(_o20183, NM_S_3A)); })); rt::Value _o20185 = this->f_S_0_21_A; C_S_84* _p20186 = rt::as_ptr<C_S_84>(_o20185); if (_p20186) _p20186->f_S_3A = _v20187; else rt::dset(_o20185, NM_S_3A, rt::VB(_v20187)); _v20187; });
        (void)(({ rt::Value _o20188 = this->f_S_0_21_A; C_S_84* _p20189 = rt::as_ptr<C_S_84>(_o20188); _p20189 ? _p20189->m_S_6_21_2(true, false) : rt::dcallv(_o20188, NM_S_6_21_2, rt::VB(true), rt::VB(false)); }));
    } else if ((((double)(this->f_S__3f__21__3d_)) == 3.0)) {
        if ((({ rt::Value _o20190 = this->f_S_0_21_A; C_S_84* _p20191 = rt::as_ptr<C_S_84>(_o20190); _p20191 ? _p20191->f_S_3A : rt::T(rt::dget(_o20190, NM_S_3A)); }) && (!(((double)(({ rt::Value _o20192 = this->f_S_0_21_A; C_S_84* _p20193 = rt::as_ptr<C_S_84>(_o20192); _p20193 ? _p20193->f_S__23__21_B : rt::toint(rt::dget(_o20192, NM_S__23__21_B)); }))) == (-1.0))))) {
            ({ bool _v20196 = false; rt::Value _o20194 = this->f_S_0_21_A; C_S_84* _p20195 = rt::as_ptr<C_S_84>(_o20194); if (_p20195) _p20195->f_S_3A = _v20196; else rt::dset(_o20194, NM_S_3A, rt::VB(_v20196)); _v20196; });
            (void)(({ rt::Value _o20197 = this->f_S_0_21_A; C_S_84* _p20198 = rt::as_ptr<C_S_84>(_o20197); _p20198 ? _p20198->m_S_6_21_2(false, false) : rt::dcallv(_o20197, NM_S_6_21_2, rt::VB(false), rt::VB(false)); }));
        } else if ((({ rt::Value _o20199 = this->f_S_0_21_A; C_S_84* _p20200 = rt::as_ptr<C_S_84>(_o20199); _p20200 ? _p20200->f_S_3A : rt::T(rt::dget(_o20199, NM_S_3A)); }) && (!(((double)(({ rt::Value _o20201 = this->f_S_0_21_A; C_S_84* _p20202 = rt::as_ptr<C_S_84>(_o20201); _p20202 ? _p20202->f_S_5_21_H : rt::toint(rt::dget(_o20201, NM_S_5_21_H)); }))) == (-1.0))))) {
            ({ bool _v20205 = false; rt::Value _o20203 = this->f_S_0_21_A; C_S_84* _p20204 = rt::as_ptr<C_S_84>(_o20203); if (_p20204) _p20204->f_S_3A = _v20205; else rt::dset(_o20203, NM_S_3A, rt::VB(_v20205)); _v20205; });
            (void)(({ rt::Value _o20206 = this->f_S_0_21_A; C_S_84* _p20207 = rt::as_ptr<C_S_84>(_o20206); _p20207 ? _p20207->m_S_6_21_2(true, false) : rt::dcallv(_o20206, NM_S_6_21_2, rt::VB(true), rt::VB(false)); }));
        }
        ({ bool _v20212 = (!({ rt::Value _o20208 = this->f_S_0_21_A; C_S_84* _p20209 = rt::as_ptr<C_S_84>(_o20208); _p20209 ? _p20209->f_S_3A : rt::T(rt::dget(_o20208, NM_S_3A)); })); rt::Value _o20210 = this->f_S_0_21_A; C_S_84* _p20211 = rt::as_ptr<C_S_84>(_o20210); if (_p20211) _p20211->f_S_3A = _v20212; else rt::dset(_o20210, NM_S_3A, rt::VB(_v20212)); _v20212; });
        (void)(({ rt::Value _o20213 = this->f_S_0_21_A; C_S_84* _p20214 = rt::as_ptr<C_S_84>(_o20213); _p20214 ? _p20214->m_S_6_21_2(false, true) : rt::dcallv(_o20213, NM_S_6_21_2, rt::VB(false), rt::VB(true)); }));
    } else if ((((double)(this->f_S__3f__21__3d_)) == 4.0)) {
        if (g::SV.C_S__20_g__S_3_21_n) {
            ({ uint32_t _v20219 = C_S__23__21__21_::sm_S_8_21_6(({ rt::Value _o20215 = this->f_S_0_21_A; C_S_84* _p20216 = rt::as_ptr<C_S_84>(_o20215); _p20216 ? _p20216->f_id : rt::touint(rt::dget(_o20215, NM_id)); })); rt::Value _o20217 = this->f_S_0_21_A; C_S_84* _p20218 = rt::as_ptr<C_S_84>(_o20217); if (_p20218) _p20218->f_S_6_21_A = ((int32_t)(_v20219)); else rt::dset(_o20217, NM_S_6_21_A, rt::V((double)(_v20219))); _v20219; });
        } else {
            ({ rt::Value _o20220 = this->f_S_0_21_A; C_S_84* _p20221 = rt::as_ptr<C_S_84>(_o20220); double _v20222 = (((double)((_p20221 ? _p20221->f_S_6_21_A : rt::toint(rt::dget(_o20220, NM_S_6_21_A))))) + 1.0); if (_p20221) _p20221->f_S_6_21_A = rt::toint_d(_v20222); else rt::dset(_o20220, NM_S_6_21_A, rt::V(_v20222)); _v20222; });
        }
        if ((((double)(C_S__23__21__21_::sm_S_8_21_6(({ rt::Value _o20223 = this->f_S_0_21_A; C_S_84* _p20224 = rt::as_ptr<C_S_84>(_o20223); _p20224 ? _p20224->f_id : rt::touint(rt::dget(_o20223, NM_id)); })))) < ((double)(({ rt::Value _o20225 = this->f_S_0_21_A; C_S_84* _p20226 = rt::as_ptr<C_S_84>(_o20225); _p20226 ? _p20226->f_S_6_21_A : rt::toint(rt::dget(_o20225, NM_S_6_21_A)); }))))) {
            ({ double _v20229 = (-1.0); rt::Value _o20227 = this->f_S_0_21_A; C_S_84* _p20228 = rt::as_ptr<C_S_84>(_o20227); if (_p20228) _p20228->f_S_6_21_A = rt::toint_d(_v20229); else rt::dset(_o20227, NM_S_6_21_A, rt::V(_v20229)); _v20229; });
        }
        if ((((double)(({ rt::Value _o20230 = this->f_S_0_21_A; C_S_84* _p20231 = rt::as_ptr<C_S_84>(_o20230); _p20231 ? _p20231->f_S_6_21_A : rt::toint(rt::dget(_o20230, NM_S_6_21_A)); }))) == 0.0)) {
            ({ double _v20234 = 1.0; rt::Value _o20232 = this->f_S_0_21_A; C_S_84* _p20233 = rt::as_ptr<C_S_84>(_o20232); if (_p20233) _p20233->f_S_6_21_A = rt::toint_d(_v20234); else rt::dset(_o20232, NM_S_6_21_A, rt::V(_v20234)); _v20234; });
        }
    }
    if (this->f_S__3e__22_L) {
        return rt::NUL;
    }
    (void)(({ rt::Value _o20236 = (({ rt::Value _t20235 = rt::dget(rt::dget(rt::VO(this), NM_parent), NM_parent); rt::is_class(_t20235, C_S__22__21_Z::CI) ? _t20235 : rt::NUL; })); C_S__22__21_Z* _p20237 = rt::as_ptr<C_S__22__21_Z>(_o20236); _p20237 ? _p20237->m_S_5I(this->f_S_0_21_A) : rt::dcallv(_o20236, NM_S_5I, this->f_S_0_21_A); }));
    (void)(rt::dcallv((({ rt::Value _t20240 = ({ rt::Value _o20238 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20239 = rt::as_ptr<C_S__20_g>(_o20238); _p20239 ? _p20239->m_S__2b__21__2c_(rt::touint_d(2.0)) : rt::dcallv(_o20238, NM_S__2b__21__2c_, rt::V(2.0)); }); rt::is_stubtype(_t20240) ? _t20240 : rt::NUL; })), NM_S__21__21_G));
    return rt::NUL;
}
bool C_S_0_2c_::dm_S_9_21_I_0() { return false; }
bool C_S_0_2c_::dm_S_9_21_I_1() { return false; }
rt::Value C_S_0_2c_::m_S_9_21_I(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S_0_2c_.S_9_21_I");
    (void)(this->m_S_8_21_Q(l_param1, l_param2));
    return rt::NUL;
}
C_S_0_2c_* C_S_0_2c_::alloc_() {
    C_S_0_2c_* o = rt::make<C_S_0_2c_>();
    return o;
}
rt::Value C_S_0_2c_::mk_(rt::Value* a, int n) {
    C_S_0_2c_* o = alloc_();
    o->C_S_0_2c_::ctor_(rt::arg<bool>(a, n, 0, false));
    return rt::VO(o);
}
bool C_S_0_2c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S__3f__21__3d_: out = rt::V((double)(f_S__3f__21__3d_)); return true;
    case NM_S_0_21_A: out = f_S_0_21_A; return true;
    case NM_S__2c__21_U: out = f_S__2c__21_U; return true;
    case NM_S__3e__22_L: out = rt::VB(f_S__3e__22_L); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5b__2c_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_5I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21_I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S_0_2c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    case NM_S__3f__21__3d_: f_S__3f__21__3d_ = rt::toint(v); return true;
    case NM_S_0_21_A: f_S_0_21_A = v; return true;
    case NM_S__2c__21_U: f_S__2c__21_U = rt::slot_string(v); return true;
    case NM_S__3e__22_L: f_S__3e__22_L = rt::T(v); return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S_0_2c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__5b__2c_: out = m_S__5b__2c_(rt::arg<int32_t>(a, n, 0, 0)); return true;
    case NM_S_5I: out = m_S_5I(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S_0_2c_::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S_0_2c_::dm_S_8_21_Q_1())); return true;
    case NM_S_9_21_I: out = m_S_9_21_I(rt::arg<bool>(a, n, 0, C_S_0_2c_::dm_S_9_21_I_0()), rt::arg<bool>(a, n, 1, C_S_0_2c_::dm_S_9_21_I_1())); return true;
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21__3d_: { rt::Value f = rt::V((double)(f_S__3f__21__3d_)); out = rt::call_value(f, a, n); return true; }
    case NM_S_0_21_A: { rt::Value f = f_S_0_21_A; out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__21_U: { rt::Value f = f_S__2c__21_U; out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__22_L: { rt::Value f = rt::VB(f_S__3e__22_L); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S_0_2c_::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__5b__2c_: return true;
    case NM_S_5I: return true;
    case NM_S_8_21_Q: return true;
    case NM_S_9_21_I: return true;
    case NM_S__5e__21__23_: return false;
    case NM_S__3f__21__3d_: return false;
    case NM_S_0_21_A: return false;
    case NM_S__2c__21_U: return false;
    case NM_S__3e__22_L: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S_0_2c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_2c_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_2c_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_2c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_C::dctor_0() { return false; }
void C_S_2_21_C::ctor_(bool p0) {
    bool l_param1 = p0;
    RT_FN("S_2_21_C.S_2_21_C");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
    ({ bool _v20241 = l_param1; this->f_S__3e__22_L = _v20241; _v20241; });
}
rt::Value C_S_2_21_C::m_S__2b__21_R() {
    RT_FN("S_2_21_C.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    if (g::SV.C_S__20_g__S__22_g) {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_6_21_H), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2d__26_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_8d), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
        ({ rt::Value _v20242 = rt::V(165.0); rt::dset(rt::VO(this), NM_width, _v20242); _v20242; });
        if ((!this->f_S__3e__22_L)) {
            ({ rt::Value _o20244 = rt::VO(this); rt::Value _v20243 = rt::V((rt::tonum(rt::dget(_o20244, NM_width)) - 50.0)); rt::dset(_o20244, NM_width, _v20243); _v20243; });
        }
        ({ rt::Value _v20245 = rt::V(45.0); rt::dset(rt::VO(this), NM_height, _v20245); _v20245; });
    } else {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__23_5), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__23_z), C_S_6_2b_::dm_S__3d__22__2(), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
        ({ rt::Value _v20246 = rt::V((this->f_S__3e__22_L ? 258.0 : 208.0)); rt::dset(rt::VO(this), NM_width, _v20246); _v20246; });
        ({ rt::Value _v20247 = rt::V(102.0); rt::dset(rt::VO(this), NM_height, _v20247); _v20247; });
    }
    ({ rt::Value _v20248 = rt::add(rt::dget(rt::VO(this), NM_width), rt::V(10.0)); rt::dset(rt::VO(this), NM_minTouchWidth, _v20248); _v20248; });
    ({ rt::Value _v20249 = rt::add(rt::dget(rt::VO(this), NM_height), rt::V(10.0)); rt::dset(rt::VO(this), NM_minTouchHeight, _v20249); _v20249; });
    ({ rt::Value _v20250 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_Z = _v20250; _v20250; });
    ({ rt::Value _v20251 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_textAlign, _v20251); _v20251; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v20252 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(34.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20252); _v20252; });
    } else {
        ({ rt::Value _v20253 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(28.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20253); _v20253; });
        (void)(C_S_99::sm_S__3d__21_7(this->f_S_9_21_Z));
    }
    ({ rt::Value _v20254 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S_9_21_Z, NM_width, _v20254); _v20254; });
    ({ rt::Value _v20255 = rt::VB(false); rt::dset(this->f_S_9_21_Z, NM_touchable, _v20255); _v20255; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_9_21_Z));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    return rt::NUL;
}
rt::Value C_S_2_21_C::m_S__21__21_G() {
    RT_FN("S_2_21_C.S__21__21_G");
    (void)(this->C_S_6_2b_::m_S__21__21_G());
    if (this->f_S__3e__22_L) {
        return rt::NUL;
    }
    if ((!(((double)(g::SV.C_S_8G__S__5b__21_M)) == ((double)(this->f_S__25__21_))))) {
        ({ int32_t _v20256 = g::SV.C_S_8G__S__5b__21_M; this->f_S__25__21_ = _v20256; _v20256; });
        (void)(this->m_S__40__22_L(this->f_S__25__21_));
    }
    return rt::NUL;
}
rt::Value C_S_2_21_C::m_S__40__22_L(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_2_21_C.S__40__22_L");
    {
        rt::Value _sw20257 = rt::V((double)(l_param1));
        int _c20258 = -1;
        if (_c20258 == -1 && rt::strict_eq(_sw20257, rt::V((double)(g::SV.C_S_2_21_C__S__5d__21_A)))) _c20258 = 0;
        if (_c20258 == -1 && rt::strict_eq(_sw20257, rt::V((double)(g::SV.C_S_2_21_C__S__60__3b_)))) _c20258 = 1;
        if (_c20258 == -1 && rt::strict_eq(_sw20257, rt::V((double)(g::SV.C_S_2_21_C__S__3f_6)))) _c20258 = 2;
        if (_c20258 == -1 && rt::strict_eq(_sw20257, rt::V((double)(g::SV.C_S_2_21_C__S__5d__2c_)))) _c20258 = 3;
        if (_c20258 == -1 && rt::strict_eq(_sw20257, rt::V((double)(g::SV.C_S_2_21_C__S__21__22__2d_)))) _c20258 = 4;
        if (_c20258 == -1 && rt::strict_eq(_sw20257, rt::V((double)(g::SV.C_S_2_21_C__S_9_22__2b_)))) _c20258 = 5;
        if (_c20258 == -1) _c20258 = 6;
        switch (_c20258) {
        case 0: {
            ({ rt::Value _v20259 = rt::trv(rt::VS(g::LS[5969])); rt::dset(this->f_S_9_21_Z, NM_text, _v20259); _v20259; });
            break;
        }
        case 1: {
            ({ rt::Value _v20260 = rt::trv(rt::VS(g::LS[5970])); rt::dset(this->f_S_9_21_Z, NM_text, _v20260); _v20260; });
            break;
        }
        case 2: {
            ({ rt::Value _v20261 = rt::trv(rt::VS(g::LS[5971])); rt::dset(this->f_S_9_21_Z, NM_text, _v20261); _v20261; });
            break;
        }
        case 3: {
            ({ rt::Value _v20262 = rt::trv(rt::VS(g::LS[5972])); rt::dset(this->f_S_9_21_Z, NM_text, _v20262); _v20262; });
            break;
        }
        case 4: {
            ({ rt::Value _v20263 = rt::trv(rt::VS(g::LS[5991])); rt::dset(this->f_S_9_21_Z, NM_text, _v20263); _v20263; });
            break;
        }
        case 5: {
            ({ rt::Value _v20264 = (this->f_S__3e__22_L ? rt::trv(rt::VS(g::LS[5973])) : rt::trv(rt::VS(g::LS[5974]))); rt::dset(this->f_S_9_21_Z, NM_text, _v20264); _v20264; });
            break;
        }
        case 6: {
            ({ rt::Value _v20265 = rt::trv(rt::VS(g::LS[5975])); rt::dset(this->f_S_9_21_Z, NM_text, _v20265); _v20265; });
        }
        default: break;
        }
    }
    (void)(rt::dcallv(this->f_S_9_21_Z, NM_validate));
    ({ rt::Value _v20266 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_height)) / 2.0) - (rt::tonum(rt::dget(this->f_S_9_21_Z, NM_height)) / 2.0)) + ((g::SV.C_S__20_g__S__22_g ? 3.0 : 0.0)))); rt::dset(this->f_S_9_21_Z, NM_y, _v20266); _v20266; });
    return rt::NUL;
}
bool C_S_2_21_C::dm_S_8_21_Q_0() { return false; }
bool C_S_2_21_C::dm_S_8_21_Q_1() { return false; }
rt::Value C_S_2_21_C::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S_2_21_C.S_8_21_Q");
    (l_A__loc3_ = rt::NUL);
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    if ((!this->f_S__3e__22_L)) {
        (l_A__loc3_ = ({ C_S__5b__22_L* _n20267 = C_S__5b__22_L::alloc_(); _n20267->C_S__5b__22_L::ctor_(); rt::VO(_n20267); }));
        (void)(({ rt::Value _o20268 = l_A__loc3_; C_S__5b__22_L* _p20269 = rt::as_ptr<C_S__5b__22_L>(_o20268); _p20269 ? _p20269->m_S__2b__21_R() : rt::dcallv(_o20268, NM_S__2b__21_R); }));
        ({ rt::Value _v20272 = ({ rt::Value _o20270 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20271 = rt::as_ptr<C_S__20_g>(_o20270); _p20271 ? _p20271->m_S__2d__25_(rt::VS(g::LS[113]), rt::VS(g::LS[113]), rt::NUL, rt::NUL, l_A__loc3_, true, false, C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20270, NM_S__2d__25_, rt::VS(g::LS[113]), rt::VS(g::LS[113]), rt::NUL, rt::NUL, l_A__loc3_, rt::VB(true), rt::VB(false)); }); this->f_S__40_X = _v20272; _v20272; });
    } else {
        (g::SV.C_S_8G__S__5b__21_M = this->f_S__25__21_);
        (void)(({ rt::Value _o20273 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p20274 = rt::as_ptr<C_S_8G>(_o20273); _p20274 ? _p20274->m_S_17() : rt::dcallv(_o20273, NM_S_17); }));
        (void)(({ rt::Value _o20278 = (({ rt::Value _t20277 = ({ rt::Value _o20275 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20276 = rt::as_ptr<C_S__20_g>(_o20275); _p20276 ? _p20276->m_S__2b__21__2c_(rt::touint_d(8.0)) : rt::dcallv(_o20275, NM_S__2b__21__2c_, rt::V(8.0)); }); rt::is_class(_t20277, C_S__3e_F::CI) ? _t20277 : rt::NUL; })); C_S__3e_F* _p20279 = rt::as_ptr<C_S__3e_F>(_o20278); _p20279 ? _p20279->m_S__60__26_() : rt::dcallv(_o20278, NM_S__60__26_); }));
        if (g::SV.C_S__20_g__S__22_g) {
            (void)(({ rt::Value _o20285 = ({ rt::Value _o20283 = (({ rt::Value _t20282 = ({ rt::Value _o20280 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20281 = rt::as_ptr<C_S__20_g>(_o20280); _p20281 ? _p20281->m_S__2b__21__2c_(rt::touint_d(5.0)) : rt::dcallv(_o20280, NM_S__2b__21__2c_, rt::V(5.0)); }); rt::is_class(_t20282, C_S__21_M::CI) ? _t20282 : rt::NUL; })); C_S__21_M* _p20284 = rt::as_ptr<C_S__21_M>(_o20283); _p20284 ? _p20284->f_S__22__21_8 : rt::dget(_o20283, NM_S__22__21_8); }); C_S_2_21_C* _p20286 = rt::as_ptr<C_S_2_21_C>(_o20285); _p20286 ? _p20286->m_S__60__26_() : rt::dcallv(_o20285, NM_S__60__26_); }));
        } else {
            (void)(({ rt::Value _o20292 = ({ rt::Value _o20290 = (({ rt::Value _t20289 = ({ rt::Value _o20287 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20288 = rt::as_ptr<C_S__20_g>(_o20287); _p20288 ? _p20288->m_S__2b__21__2c_(rt::touint_d(14.0)) : rt::dcallv(_o20287, NM_S__2b__21__2c_, rt::V(14.0)); }); rt::is_class(_t20289, C_S__22__21__27_::CI) ? _t20289 : rt::NUL; })); C_S__22__21__27_* _p20291 = rt::as_ptr<C_S__22__21__27_>(_o20290); _p20291 ? _p20291->f_S__22__21_8 : rt::dget(_o20290, NM_S__22__21_8); }); C_S_2_21_C* _p20293 = rt::as_ptr<C_S_2_21_C>(_o20292); _p20293 ? _p20293->m_S__60__26_() : rt::dcallv(_o20292, NM_S__60__26_); }));
        }
    }
    (void)(({ rt::Value _o20294 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20295 = rt::as_ptr<C_S__20_g>(_o20294); _p20295 ? _p20295->m_S_4_60_(rt::toint_d(7.0)) : rt::dcallv(_o20294, NM_S_4_60_, rt::V(7.0)); }));
    return rt::NUL;
}
rt::Value C_S_2_21_C::m_S__60__26_() {
    RT_FN("S_2_21_C.S__60__26_");
    (void)(({ rt::Value _o20296 = this->f_S__40_X; C_S__22__3c_* _p20297 = rt::as_ptr<C_S__22__3c_>(_o20296); _p20297 ? _p20297->m_S__40_i() : rt::dcallv(_o20296, NM_S__40_i); }));
    ({ int32_t _v20298 = g::SV.C_S_8G__S__5b__21_M; this->f_S__25__21_ = _v20298; _v20298; });
    (void)(this->m_S__40__22_L(this->f_S__25__21_));
    return rt::NUL;
}
C_S_2_21_C* C_S_2_21_C::alloc_() {
    C_S_2_21_C* o = rt::make<C_S_2_21_C>();
    return o;
}
rt::Value C_S_2_21_C::mk_(rt::Value* a, int n) {
    C_S_2_21_C* o = alloc_();
    o->C_S_2_21_C::ctor_(rt::arg<bool>(a, n, 0, C_S_2_21_C::dctor_0()));
    return rt::VO(o);
}
bool C_S_2_21_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e__22_L: out = rt::VB(f_S__3e__22_L); return true;
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S__40_X: out = f_S__40_X; return true;
    case NM_S__25__21_: out = rt::V((double)(f_S__25__21_)); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_L: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__60__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S_2_21_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3e__22_L: f_S__3e__22_L = rt::T(v); return true;
    case NM_S_9_21_Z: f_S_9_21_Z = v; return true;
    case NM_S__40_X: f_S__40_X = v; return true;
    case NM_S__25__21_: f_S__25__21_ = rt::toint(v); return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S_2_21_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__40__22_L: out = m_S__40__22_L(rt::arg<int32_t>(a, n, 0, 0)); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S_2_21_C::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S_2_21_C::dm_S_8_21_Q_1())); return true;
    case NM_S__60__26_: out = m_S__60__26_(); return true;
    case NM_S__3e__22_L: { rt::Value f = rt::VB(f_S__3e__22_L); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S__40_X: { rt::Value f = f_S__40_X; out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21_: { rt::Value f = rt::V((double)(f_S__25__21_)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S_2_21_C::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S__40__22_L: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__60__26_: return true;
    case NM_S__3e__22_L: return false;
    case NM_S_9_21_Z: return false;
    case NM_S__40_X: return false;
    case NM_S__25__21_: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S_2_21_C::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__21_A: out = rt::V((double)(g::SV.C_S_2_21_C__S__5d__21_A)); return true;
    case NM_S__60__3b_: out = rt::V((double)(g::SV.C_S_2_21_C__S__60__3b_)); return true;
    case NM_S__3f_6: out = rt::V((double)(g::SV.C_S_2_21_C__S__3f_6)); return true;
    case NM_S__5d__2c_: out = rt::V((double)(g::SV.C_S_2_21_C__S__5d__2c_)); return true;
    case NM_S__21__22__2d_: out = rt::V((double)(g::SV.C_S_2_21_C__S__21__22__2d_)); return true;
    case NM_S_9_22__2b_: out = rt::V((double)(g::SV.C_S_2_21_C__S_9_22__2b_)); return true;
    case NM_S__23__21_S: out = rt::V((double)(g::SV.C_S_2_21_C__S__23__21_S)); return true;
    case NM_S__40_7: out = rt::V((double)(g::SV.C_S_2_21_C__S__40_7)); return true;
    default: return false;
    }
}
bool C_S_2_21_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__21_A: g::SV.C_S_2_21_C__S__5d__21_A = rt::toint(v); return true;
    case NM_S__60__3b_: g::SV.C_S_2_21_C__S__60__3b_ = rt::toint(v); return true;
    case NM_S__3f_6: g::SV.C_S_2_21_C__S__3f_6 = rt::toint(v); return true;
    case NM_S__5d__2c_: g::SV.C_S_2_21_C__S__5d__2c_ = rt::toint(v); return true;
    case NM_S__21__22__2d_: g::SV.C_S_2_21_C__S__21__22__2d_ = rt::toint(v); return true;
    case NM_S_9_22__2b_: g::SV.C_S_2_21_C__S_9_22__2b_ = rt::toint(v); return true;
    case NM_S__23__21_S: g::SV.C_S_2_21_C__S__23__21_S = rt::toint(v); return true;
    case NM_S__40_7: g::SV.C_S_2_21_C__S__40_7 = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S_2_21_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_21_Z::ctor_() {
    RT_FN("S_2_21_Z.S_2_21_Z");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S_2_21_Z::m_S__2b__21_R() {
    RT_FN("S_2_21_Z.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    if (g::SV.C_S__20_g__S__22_g) {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5d__23_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__27__21__26_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_U), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
        ({ rt::Value _v20300 = ({ rt::Value _v20299 = rt::V(40.0); rt::dset(rt::VO(this), NM_height, _v20299); _v20299; }); rt::dset(rt::VO(this), NM_width, _v20300); _v20300; });
        ({ rt::Value _v20301 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[5992]))); this->f_S__5e__21__23_ = _v20301; _v20301; });
        ({ rt::Value _v20303 = ({ rt::Value _v20302 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S__5e__21__23_, NM_height, _v20302); _v20302; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v20303); _v20303; });
        ({ rt::Value _v20305 = ({ rt::Value _v20304 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)))) / 2.0)); rt::dset(this->f_S__5e__21__23_, NM_y, _v20304); _v20304; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v20305); _v20305; });
    } else {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__27__3e_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_2c_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__27__3e_), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
        ({ rt::Value _v20306 = rt::V(50.0); rt::dset(rt::VO(this), NM_width, _v20306); _v20306; });
        ({ rt::Value _v20307 = rt::V(56.0); rt::dset(rt::VO(this), NM_height, _v20307); _v20307; });
        ({ rt::Value _v20308 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[5993]))); this->f_S__5e__21__23_ = _v20308; _v20308; });
        ({ rt::Value _v20310 = ({ rt::Value _v20309 = rt::V((rt::tonum(rt::dget(rt::VO(this), NM_width)) - 12.0)); rt::dset(this->f_S__5e__21__23_, NM_height, _v20309); _v20309; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v20310); _v20310; });
        ({ rt::Value _v20311 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)))) / 2.0)); rt::dset(this->f_S__5e__21__23_, NM_x, _v20311); _v20311; });
        ({ rt::Value _v20312 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_height)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_height)))) / 2.0)); rt::dset(this->f_S__5e__21__23_, NM_y, _v20312); _v20312; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    ({ rt::Value _v20314 = ({ C_S__3f_K* _n20313 = C_S__3f_K::alloc_(); _n20313->C_S__3f_K::ctor_(); rt::VO(_n20313); }); this->f_S__27_b = _v20314; _v20314; });
    (void)(({ rt::Value _o20315 = this->f_S__27_b; C_S__3f_K* _p20316 = rt::as_ptr<C_S__3f_K>(_o20315); _p20316 ? _p20316->m_S__2b__21_R() : rt::dcallv(_o20315, NM_S__2b__21_R); }));
    return rt::NUL;
}
bool C_S_2_21_Z::dm_S_8_21_Q_0() { return false; }
bool C_S_2_21_Z::dm_S_8_21_Q_1() { return false; }
rt::Value C_S_2_21_Z::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S_2_21_Z.S_8_21_Q");
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    (void)(({ rt::Value _o20317 = this->f_S__27_b; C_S__3f_K* _p20318 = rt::as_ptr<C_S__3f_K>(_o20317); _p20318 ? _p20318->m_S__26__40_() : rt::dcallv(_o20317, NM_S__26__40_); }));
    (void)(({ rt::Value _o20319 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20320 = rt::as_ptr<C_S__20_g>(_o20319); _p20320 ? _p20320->m_S__2d__25_(rt::VS(g::LS[113]), rt::VS(g::LS[113]), rt::NUL, rt::NUL, this->f_S__27_b, true, false, C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20319, NM_S__2d__25_, rt::VS(g::LS[113]), rt::VS(g::LS[113]), rt::NUL, rt::NUL, this->f_S__27_b, rt::VB(true), rt::VB(false)); }));
    return rt::NUL;
}
rt::Value C_S_2_21_Z::m_S__21__21_G() {
    RT_FN("S_2_21_Z.S__21__21_G");
    (void)(this->C_S_6_2b_::m_S__21__21_G());
    (void)(({ rt::Value _o20321 = this->f_S__27_b; C_S__3f_K* _p20322 = rt::as_ptr<C_S__3f_K>(_o20321); _p20322 ? _p20322->m_S__21__21_G() : rt::dcallv(_o20321, NM_S__21__21_G); }));
    return rt::NUL;
}
rt::Value C_S_2_21_Z::m_S__21__21_c(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S_2_21_Z.S__21__21_c");
    (void)(this->C_S_6_2b_::m_S__21__21_c(l_param1, l_param2));
    if ((!rt::eq(this->f_S__27_b, rt::NUL))) {
        (void)(({ rt::Value _o20323 = this->f_S__27_b; C_S__3f_K* _p20324 = rt::as_ptr<C_S__3f_K>(_o20323); _p20324 ? _p20324->m_S__3e__26_() : rt::dcallv(_o20323, NM_S__3e__26_); }));
    }
    return rt::NUL;
}
C_S_2_21_Z* C_S_2_21_Z::alloc_() {
    C_S_2_21_Z* o = rt::make<C_S_2_21_Z>();
    return o;
}
rt::Value C_S_2_21_Z::mk_(rt::Value* a, int n) {
    C_S_2_21_Z* o = alloc_();
    o->C_S_2_21_Z::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_Z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S__27_b: out = f_S__27_b; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_c: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S_2_21_Z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    case NM_S__27_b: f_S__27_b = v; return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S_2_21_Z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S_2_21_Z::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S_2_21_Z::dm_S_8_21_Q_1())); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__21__21_c: out = m_S__21__21_c(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)); return true;
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S__27_b: { rt::Value f = f_S__27_b; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S_2_21_Z::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__21__21_G: return true;
    case NM_S__21__21_c: return true;
    case NM_S__5e__21__23_: return false;
    case NM_S__27_b: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S_2_21_Z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_Z::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_Z::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_Z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3Y::ctor_() {
    RT_FN("S_3Y.S_3Y");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S_3Y::m_S__2b__21_R() {
    double l_A__loc1_ = NAN;
    RT_FN("S_3Y.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    if (g::SV.C_S__20_g__S__22_g) {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_6_21_H), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2d__26_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_8d), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
        ({ rt::Value _v20325 = rt::V(150.0); rt::dset(rt::VO(this), NM_width, _v20325); _v20325; });
        ({ rt::Value _v20326 = rt::V(38.0); rt::dset(rt::VO(this), NM_height, _v20326); _v20326; });
    } else {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__23_5), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__23_z), C_S_6_2b_::dm_S__3d__22__2(), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
        ({ rt::Value _v20327 = rt::V(150.0); rt::dset(rt::VO(this), NM_width, _v20327); _v20327; });
        ({ rt::Value _v20328 = rt::V(60.0); rt::dset(rt::VO(this), NM_height, _v20328); _v20328; });
    }
    ({ rt::Value _v20329 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_Z = _v20329; _v20329; });
    ({ rt::Value _v20330 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_textAlign, _v20330); _v20330; });
    (l_A__loc1_ = 20.0);
    if ((((double)(g::SV.C_Translation__locale)) == 1.0)) {
        (l_A__loc1_ = 18.0);
    } else if ((({ bool _t20333 = ({ bool _t20332 = ({ bool _t20331 = (((double)(g::SV.C_Translation__locale)) == 2.0); _t20331 ? _t20331 : (bool)((((double)(g::SV.C_Translation__locale)) == 4.0)); }); _t20332 ? _t20332 : (bool)((((double)(g::SV.C_Translation__locale)) == 3.0)); }); _t20333 ? _t20333 : (bool)((((double)(g::SV.C_Translation__locale)) == 5.0)); }) || (((double)(g::SV.C_Translation__locale)) == 6.0))) {
        (l_A__loc1_ = 16.0);
    }
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v20334 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(((((double)(g::SV.C_Translation__locale)) == 5.0) ? 24.0 : 30.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20334); _v20334; });
    } else {
        ({ rt::Value _v20335 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc1_), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20335); _v20335; });
        (void)(C_S_99::sm_S__3d__21_7(this->f_S_9_21_Z));
    }
    ({ rt::Value _v20336 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S_9_21_Z, NM_width, _v20336); _v20336; });
    ({ rt::Value _v20337 = rt::VB(false); rt::dset(this->f_S_9_21_Z, NM_touchable, _v20337); _v20337; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_9_21_Z));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    return rt::NUL;
}
rt::Value C_S_3Y::m_S__21__21_G() {
    RT_FN("S_3Y.S__21__21_G");
    (void)(this->C_S_6_2b_::m_S__21__21_G());
    ({ rt::Value _v20338 = rt::VB(true); rt::dset(rt::VO(this), NM_visible, _v20338); _v20338; });
    if ((!(((double)(g::SV.C_S_8G__S_7_21_N)) == ((double)(this->f_S__25__21_))))) {
        ({ int32_t _v20339 = g::SV.C_S_8G__S_7_21_N; this->f_S__25__21_ = _v20339; _v20339; });
        {
            rt::Value _sw20340 = rt::V((double)(this->f_S__25__21_));
            int _c20341 = -1;
            if (_c20341 == -1 && rt::strict_eq(_sw20340, rt::V((double)(g::SV.C_S_3Y__S__5d__21_A)))) _c20341 = 0;
            if (_c20341 == -1 && rt::strict_eq(_sw20340, rt::V((double)(g::SV.C_S_3Y__S__60__3b_)))) _c20341 = 1;
            if (_c20341 == -1 && rt::strict_eq(_sw20340, rt::V((double)(g::SV.C_S_3Y__S__3f_6)))) _c20341 = 2;
            if (_c20341 == -1 && rt::strict_eq(_sw20340, rt::V((double)(g::SV.C_S_3Y__S__5d__2c_)))) _c20341 = 3;
            if (_c20341 == -1 && rt::strict_eq(_sw20340, rt::V((double)(g::SV.C_S_3Y__S_9_22__2b_)))) _c20341 = 4;
            if (_c20341 == -1) _c20341 = 5;
            switch (_c20341) {
            case 0: {
                ({ rt::Value _v20342 = rt::trv(rt::VS(g::LS[5969])); rt::dset(this->f_S_9_21_Z, NM_text, _v20342); _v20342; });
                break;
            }
            case 1: {
                ({ rt::Value _v20343 = rt::trv(rt::VS(g::LS[5970])); rt::dset(this->f_S_9_21_Z, NM_text, _v20343); _v20343; });
                break;
            }
            case 2: {
                ({ rt::Value _v20344 = rt::trv(rt::VS(g::LS[5971])); rt::dset(this->f_S_9_21_Z, NM_text, _v20344); _v20344; });
                break;
            }
            case 3: {
                ({ rt::Value _v20345 = rt::trv(rt::VS(g::LS[5972])); rt::dset(this->f_S_9_21_Z, NM_text, _v20345); _v20345; });
                break;
            }
            case 4: {
                ({ rt::Value _v20346 = (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[5973])) : rt::trv(rt::VS(g::LS[5974]))); rt::dset(this->f_S_9_21_Z, NM_text, _v20346); _v20346; });
                break;
            }
            case 5: {
                ({ rt::Value _v20347 = (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[5994]), C_S__26_c::sm_S_8_21_Z(this->f_S__2c__21_T, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())) : rt::trv(rt::VS(g::LS[5995]), C_S__26_c::sm_S_8_21_Z(this->f_S__2c__21_T, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))); rt::dset(this->f_S_9_21_Z, NM_text, _v20347); _v20347; });
            }
            default: break;
            }
        }
        (void)(rt::dcallv(this->f_S_9_21_Z, NM_validate));
        ({ rt::Value _v20348 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_height)) / 2.0) - (rt::tonum(rt::dget(this->f_S_9_21_Z, NM_height)) / 2.0)) + ((g::SV.C_S__20_g__S__22_g ? 2.0 : 0.0)))); rt::dset(this->f_S_9_21_Z, NM_y, _v20348); _v20348; });
    }
    return rt::NUL;
}
rt::Value C_S_3Y::m_S_9_21__3e_(double p0) {
    double l_param1 = p0;
    RT_FN("S_3Y.S_9_21__3e_");
    ({ double _v20349 = l_param1; this->f_S__2c__21_T = _v20349; _v20349; });
    ({ double _v20350 = (-1.0); this->f_S__25__21_ = rt::toint_d(_v20350); _v20350; });
    (void)(this->m_S__21__21_G());
    return rt::NUL;
}
bool C_S_3Y::dm_S_8_21_Q_0() { return false; }
bool C_S_3Y::dm_S_8_21_Q_1() { return false; }
rt::Value C_S_3Y::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S_3Y.S_8_21_Q");
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    (g::SV.C_S_8G__S_7_21_N = rt::toint_d((((double)(g::SV.C_S_8G__S_7_21_N)) + 1.0)));
    if (((((double)(g::SV.C_S_8G__S_7_21_N)) == ((double)(g::SV.C_S_3Y__S__5d__2c_))) && (((double)(C_S_8G::sg_S_8_21_H())) == 0.0))) {
        (g::SV.C_S_8G__S_7_21_N = rt::toint_d((((double)(g::SV.C_S_8G__S_7_21_N)) + 1.0)));
    }
    if ((((double)(g::SV.C_S_8G__S_7_21_N)) > ((double)(g::SV.C_S_3Y__S__40_7)))) {
        (g::SV.C_S_8G__S_7_21_N = rt::toint_d(0.0));
    }
    (void)(({ rt::Value _o20351 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p20352 = rt::as_ptr<C_S_8G>(_o20351); _p20352 ? _p20352->m_S_17() : rt::dcallv(_o20351, NM_S_17); }));
    (void)(({ rt::Value _o20359 = (({ rt::Value _t20358 = ({ rt::Value _o20356 = (({ rt::Value _t20355 = ({ rt::Value _o20353 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20354 = rt::as_ptr<C_S__20_g>(_o20353); _p20354 ? _p20354->m_S__2b__21__2c_(rt::touint_d(9.0)) : rt::dcallv(_o20353, NM_S__2b__21__2c_, rt::V(9.0)); }); rt::is_class(_t20355, C_S_2A::CI) ? _t20355 : rt::NUL; })); C_S_2A* _p20357 = rt::as_ptr<C_S_2A>(_o20356); _p20357 ? _p20357->m_S__60__21__3f_() : rt::dcallv(_o20356, NM_S__60__21__3f_); }); rt::is_class(_t20358, C_S__40__21_J::CI) ? _t20358 : rt::NUL; })); C_S__40__21_J* _p20360 = rt::as_ptr<C_S__40__21_J>(_o20359); _p20360 ? _p20360->m_S__21__21_G() : rt::dcallv(_o20359, NM_S__21__21_G); }));
    (void)(this->m_S__21__21_G());
    return rt::NUL;
}
C_S_3Y* C_S_3Y::alloc_() {
    C_S_3Y* o = rt::make<C_S_3Y>();
    return o;
}
rt::Value C_S_3Y::mk_(rt::Value* a, int n) {
    C_S_3Y* o = alloc_();
    o->C_S_3Y::ctor_();
    return rt::VO(o);
}
bool C_S_3Y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S__25__21_: out = rt::V((double)(f_S__25__21_)); return true;
    case NM_S__2c__21_T: out = rt::V(f_S__2c__21_T); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3e_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S_3Y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21_Z: f_S_9_21_Z = v; return true;
    case NM_S__25__21_: f_S__25__21_ = rt::toint(v); return true;
    case NM_S__2c__21_T: f_S__2c__21_T = rt::tonum(v); return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S_3Y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_9_21__3e_: out = m_S_9_21__3e_(rt::arg<double>(a, n, 0, NAN)); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S_3Y::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S_3Y::dm_S_8_21_Q_1())); return true;
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21_: { rt::Value f = rt::V((double)(f_S__25__21_)); out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__21_T: { rt::Value f = rt::V(f_S__2c__21_T); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S_3Y::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_9_21__3e_: return true;
    case NM_S_8_21_Q: return true;
    case NM_S_9_21_Z: return false;
    case NM_S__25__21_: return false;
    case NM_S__2c__21_T: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S_3Y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3Y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__21_A: out = rt::V((double)(g::SV.C_S_3Y__S__5d__21_A)); return true;
    case NM_S__60__3b_: out = rt::V((double)(g::SV.C_S_3Y__S__60__3b_)); return true;
    case NM_S__3f_6: out = rt::V((double)(g::SV.C_S_3Y__S__3f_6)); return true;
    case NM_S__5d__2c_: out = rt::V((double)(g::SV.C_S_3Y__S__5d__2c_)); return true;
    case NM_S_9_22__2b_: out = rt::V((double)(g::SV.C_S_3Y__S_9_22__2b_)); return true;
    case NM_S__23__21_S: out = rt::V((double)(g::SV.C_S_3Y__S__23__21_S)); return true;
    case NM_S__40_7: out = rt::V((double)(g::SV.C_S_3Y__S__40_7)); return true;
    default: return false;
    }
}
bool C_S_3Y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__21_A: g::SV.C_S_3Y__S__5d__21_A = rt::toint(v); return true;
    case NM_S__60__3b_: g::SV.C_S_3Y__S__60__3b_ = rt::toint(v); return true;
    case NM_S__3f_6: g::SV.C_S_3Y__S__3f_6 = rt::toint(v); return true;
    case NM_S__5d__2c_: g::SV.C_S_3Y__S__5d__2c_ = rt::toint(v); return true;
    case NM_S_9_22__2b_: g::SV.C_S_3Y__S_9_22__2b_ = rt::toint(v); return true;
    case NM_S__23__21_S: g::SV.C_S_3Y__S__23__21_S = rt::toint(v); return true;
    case NM_S__40_7: g::SV.C_S_3Y__S__40_7 = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S_3Y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3x::ctor_() {
    RT_FN("S_3x.S_3x");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S_3x::m_S__2b__21_R() {
    RT_FN("S_3x.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__26_E), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_4), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_8x), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    ({ rt::Value _v20361 = rt::V((g::SV.C_S__20_g__S__22_g ? 175.0 : 250.0)); rt::dset(rt::VO(this), NM_width, _v20361); _v20361; });
    ({ rt::Value _v20362 = rt::V((g::SV.C_S__20_g__S__22_g ? 35.0 : 40.0)); rt::dset(rt::VO(this), NM_height, _v20362); _v20362; });
    ({ rt::Value _v20363 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_Z = _v20363; _v20363; });
    ({ rt::Value _v20364 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_textAlign, _v20364); _v20364; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v20365 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(((((double)(g::SV.C_Translation__locale)) == 5.0) ? 28.0 : 34.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20365); _v20365; });
        ({ rt::Value _v20366 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(((((double)(g::SV.C_Translation__locale)) == 5.0) ? 28.0 : 34.0)), rt::V(16185078.0), rt::V(0.5)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_disabledElementFormat, _v20366); _v20366; });
    } else {
        ({ rt::Value _v20367 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(((((double)(g::SV.C_Translation__locale)) == 2.0) ? 18.0 : 20.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20367); _v20367; });
        ({ rt::Value _v20368 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(((((double)(g::SV.C_Translation__locale)) == 2.0) ? 18.0 : 20.0)), rt::V(16185078.0), rt::V(0.5)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_disabledElementFormat, _v20368); _v20368; });
        (void)(C_S_99::sm_S__3d__21_7(this->f_S_9_21_Z));
    }
    ({ rt::Value _v20369 = rt::V((g::SV.C_S__20_g__S__22_g ? 11.0 : 4.0)); rt::dset(this->f_S_9_21_Z, NM_y, _v20369); _v20369; });
    ({ rt::Value _v20370 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S_9_21_Z, NM_width, _v20370); _v20370; });
    ({ rt::Value _v20371 = rt::dget(rt::VO(this), NM_height); rt::dset(this->f_S_9_21_Z, NM_height, _v20371); _v20371; });
    ({ rt::Value _v20372 = rt::trv(rt::VS(g::LS[5996])); rt::dset(this->f_S_9_21_Z, NM_text, _v20372); _v20372; });
    ({ rt::Value _v20373 = rt::VB(false); rt::dset(this->f_S_9_21_Z, NM_touchable, _v20373); _v20373; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_9_21_Z));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    ({ rt::Value _v20375 = ({ C_S_5m* _n20374 = C_S_5m::alloc_(); _n20374->C_S_5m::ctor_(); rt::VO(_n20374); }); this->f_S_5_21_S = _v20375; _v20375; });
    (void)(({ rt::Value _o20376 = this->f_S_5_21_S; C_S_5m* _p20377 = rt::as_ptr<C_S_5m>(_o20376); _p20377 ? _p20377->m_S__2b__21_R() : rt::dcallv(_o20376, NM_S__2b__21_R); }));
    return rt::NUL;
}
bool C_S_3x::dm_S_8_21_Q_0() { return false; }
bool C_S_3x::dm_S_8_21_Q_1() { return false; }
rt::Value C_S_3x::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S_3x.S_8_21_Q");
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    (void)(({ rt::Value _o20378 = this->f_S_5_21_S; C_S_5m* _p20379 = rt::as_ptr<C_S_5m>(_o20378); _p20379 ? _p20379->m_S__20__21__2b_(C_S_2_25_::dm_S__20__21__2b__0()) : rt::dcallv(_o20378, NM_S__20__21__2b_); }));
    return rt::NUL;
}
C_S_3x* C_S_3x::alloc_() {
    C_S_3x* o = rt::make<C_S_3x>();
    return o;
}
rt::Value C_S_3x::mk_(rt::Value* a, int n) {
    C_S_3x* o = alloc_();
    o->C_S_3x::ctor_();
    return rt::VO(o);
}
bool C_S_3x::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S_5_21_S: out = f_S_5_21_S; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S_3x::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21_Z: f_S_9_21_Z = v; return true;
    case NM_S_5_21_S: f_S_5_21_S = v; return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S_3x::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S_3x::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S_3x::dm_S_8_21_Q_1())); return true;
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S_5_21_S: { rt::Value f = f_S_5_21_S; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S_3x::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_8_21_Q: return true;
    case NM_S_9_21_Z: return false;
    case NM_S_5_21_S: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S_3x::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3x::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3x::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3x::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_59::ctor_() {
    RT_FN("S_59.S_59");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S_59::m_S__2b__21_R() {
    RT_FN("S_59.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    if (g::SV.C_S__20_g__S__22_g) {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale3Image), g::SV.C_S_99__S_4_24_), rt::callv(rt::dget(rt::VO(this), NM_Scale3Image), g::SV.C_S_99__S__3c_E), rt::callv(rt::dget(rt::VO(this), NM_Scale3Image), g::SV.C_S_99__S__22__40_), rt::NUL, rt::callv(rt::dget(rt::VO(this), NM_Scale3Image), g::SV.C_S_99__S_27)));
        ({ rt::Value _v20380 = rt::V(170.0); rt::dset(rt::VO(this), NM_width, _v20380); _v20380; });
        ({ rt::Value _v20381 = rt::V(40.0); rt::dset(rt::VO(this), NM_height, _v20381); _v20381; });
    } else {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__25_J), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_6_21__3b_), rt::callv(rt::dget(rt::VO(this), NM_Scale3Image), g::SV.C_S_99__S__22__40_), rt::NUL, rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_8_21__5f_)));
        ({ rt::Value _v20382 = rt::V(250.0); rt::dset(rt::VO(this), NM_width, _v20382); _v20382; });
        ({ rt::Value _v20383 = rt::V(50.0); rt::dset(rt::VO(this), NM_height, _v20383); _v20383; });
    }
    ({ rt::Value _v20384 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_Z = _v20384; _v20384; });
    ({ rt::Value _v20385 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_textAlign, _v20385); _v20385; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v20386 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(((((double)(g::SV.C_Translation__locale)) == 5.0) ? 26.0 : 32.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20386); _v20386; });
        ({ rt::Value _v20387 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(((((double)(g::SV.C_Translation__locale)) == 5.0) ? 26.0 : 32.0)), rt::V(16515072.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_disabledElementFormat, _v20387); _v20387; });
        ({ rt::Value _v20388 = rt::V(13.0); rt::dset(this->f_S_9_21_Z, NM_y, _v20388); _v20388; });
        ({ rt::Value _v20389 = rt::dget(rt::VO(this), NM_height); rt::dset(this->f_S_9_21_Z, NM_height, _v20389); _v20389; });
    } else {
        ({ rt::Value _v20390 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(18.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20390); _v20390; });
        ({ rt::Value _v20391 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(18.0), rt::V(16185078.0), rt::V(0.5)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_disabledElementFormat, _v20391); _v20391; });
        ({ rt::Value _v20392 = rt::V(12.0); rt::dset(this->f_S_9_21_Z, NM_height, _v20392); _v20392; });
    }
    ({ rt::Value _v20393 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S_9_21_Z, NM_width, _v20393); _v20393; });
    ({ rt::Value _v20394 = rt::trv(rt::VS(g::LS[4943])); rt::dset(this->f_S_9_21_Z, NM_text, _v20394); _v20394; });
    ({ rt::Value _v20395 = rt::VB(false); rt::dset(this->f_S_9_21_Z, NM_touchable, _v20395); _v20395; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_9_21_Z));
    ({ rt::Value _v20396 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S__25__21_Y = _v20396; _v20396; });
    ({ rt::Value _v20397 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S__25__21_Y, NM_textRendererProperties), NM_textAlign, _v20397); _v20397; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v20398 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(20.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S__25__21_Y, NM_textRendererProperties), NM_elementFormat, _v20398); _v20398; });
        ({ rt::Value _v20399 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(20.0), rt::V(16185078.0), rt::V(0.5)); rt::dset(rt::dget(this->f_S__25__21_Y, NM_textRendererProperties), NM_disabledElementFormat, _v20399); _v20399; });
        ({ rt::Value _v20400 = rt::V(24.0); rt::dset(this->f_S__25__21_Y, NM_y, _v20400); _v20400; });
    } else {
        ({ rt::Value _v20401 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(18.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S__25__21_Y, NM_textRendererProperties), NM_elementFormat, _v20401); _v20401; });
        ({ rt::Value _v20402 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(18.0), rt::V(16185078.0), rt::V(0.5)); rt::dset(rt::dget(this->f_S__25__21_Y, NM_textRendererProperties), NM_disabledElementFormat, _v20402); _v20402; });
        ({ rt::Value _v20403 = rt::V(12.0); rt::dset(this->f_S__25__21_Y, NM_height, _v20403); _v20403; });
        ({ rt::Value _v20404 = rt::V(27.0); rt::dset(this->f_S__25__21_Y, NM_y, _v20404); _v20404; });
    }
    ({ rt::Value _v20405 = rt::VB(false); rt::dset(this->f_S__25__21_Y, NM_touchable, _v20405); _v20405; });
    ({ rt::Value _v20406 = rt::VB(false); rt::dset(this->f_S__25__21_Y, NM_visible, _v20406); _v20406; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__25__21_Y));
    ({ rt::Value _v20407 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[3926]))); this->f_S_1_21_3 = _v20407; _v20407; });
    ({ rt::Value _v20408 = rt::VB(false); rt::dset(this->f_S_1_21_3, NM_touchable, _v20408); _v20408; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v20409 = rt::V(21.0); rt::dset(this->f_S_1_21_3, NM_y, _v20409); _v20409; });
        ({ rt::Value _v20411 = ({ rt::Value _v20410 = rt::V(16.0); rt::dset(this->f_S_1_21_3, NM_height, _v20410); _v20410; }); rt::dset(this->f_S_1_21_3, NM_width, _v20411); _v20411; });
    } else {
        ({ rt::Value _v20413 = ({ rt::Value _v20412 = rt::V(20.0); rt::dset(this->f_S_1_21_3, NM_height, _v20412); _v20412; }); rt::dset(this->f_S_1_21_3, NM_width, _v20413); _v20413; });
    }
    ({ rt::Value _v20414 = rt::VB(false); rt::dset(this->f_S_1_21_3, NM_visible, _v20414); _v20414; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_1_21_3));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    return rt::NUL;
}
rt::Value C_S_59::m_S__21__21_G() {
    rt::Value l_A__loc3_ = rt::NUL;
    double l_A__loc1_ = NAN;
    bool l_A__loc2_ = false;
    RT_FN("S_59.S__21__21_G");
    (l_A__loc3_ = rt::slot_string(rt::NUL));
    (void)(this->C_S_6_2b_::m_S__21__21_G());
    if ((({ bool _t20419 = ({ bool _t20417 = ({ bool _t20415 = (((double)(C_S_8G::sg_S__2c_P())) == 0.0); _t20415 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 39.0)) : _t20415; }); _t20417 ? _t20417 : (bool)(({ bool _t20416 = (((double)(C_S_8G::sg_S__2c_P())) == 1.0); _t20416 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 99.0)) : _t20416; })); }); _t20419 ? _t20419 : (bool)(({ bool _t20418 = (((double)(C_S_8G::sg_S__2c_P())) == 2.0); _t20418 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 159.0)) : _t20418; })); }) || ((((double)(C_S_8G::sg_S__2c_P())) == 3.0) && (((double)(C_S_8G::sg_S_8_21_H())) >= 219.0)))) {
        ({ rt::Value _v20420 = rt::trv(rt::VS(g::LS[4949])); rt::dset(this->f_S_9_21_Z, NM_text, _v20420); _v20420; });
        ({ bool _v20421 = true; this->s_isEnabled(_v20421); _v20421; });
        ({ rt::Value _v20428 = ({ rt::Value _v20427 = rt::VB(((({ bool _t20426 = ({ bool _t20424 = ({ bool _t20422 = (((double)(C_S_8G::sg_S__2c_P())) == 0.0); _t20422 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 40.0)) : _t20422; }); _t20424 ? _t20424 : (bool)(({ bool _t20423 = (((double)(C_S_8G::sg_S__2c_P())) == 1.0); _t20423 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 100.0)) : _t20423; })); }); _t20426 ? _t20426 : (bool)(({ bool _t20425 = (((double)(C_S_8G::sg_S__2c_P())) == 2.0); _t20425 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 160.0)) : _t20425; })); }) || ((((double)(C_S_8G::sg_S__2c_P())) == 3.0) && (((double)(C_S_8G::sg_S_8_21_H())) >= 220.0))) ? true : (C_S_8G::sg_S__22__21_0() >= C_S__23__21__21_::sm_S__26_v()))); rt::dset(this->f_S_9_21_Z, NM_isEnabled, _v20427); _v20427; }); this->f_S__40_X = rt::T(_v20428); _v20428; });
    } else {
        ({ rt::Value _v20430 = ({ rt::Value _v20429 = rt::VB((C_S_8G::sg_S__22__21_0() >= C_S__23__21__21_::sm_S__26_v())); rt::dset(this->f_S_9_21_Z, NM_isEnabled, _v20429); _v20429; }); this->f_S__40_X = rt::T(_v20430); _v20430; });
        if ((({ bool _t20431 = (((double)(C_S_8G::sg_S__2c_P())) == 0.0); _t20431 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) == 0.0)) : _t20431; }) && (!rt::T(rt::dget(this->f_S_9_21_Z, NM_isEnabled))))) {
            ({ rt::Value _v20432 = rt::trv(rt::VS(g::LS[1339])); rt::dset(this->f_S_9_21_Z, NM_text, _v20432); _v20432; });
            ({ bool _v20433 = false; this->s_isEnabled(_v20433); _v20433; });
        } else {
            ({ rt::Value _v20434 = rt::trv(rt::VS(g::LS[5997]), rt::dcallv(rt::V((double)(C_S_8G::sg_S_8_21_H())), rt::N_toString)); rt::dset(this->f_S_9_21_Z, NM_text, _v20434); _v20434; });
            ({ bool _v20435 = true; this->s_isEnabled(_v20435); _v20435; });
        }
    }
    (l_A__loc1_ = (this->g_isEnabled() ? (C_S__23__21__21_::sm_S__26_v() - C_S_8G::sg_S__22__21_0()) : 0.0));
    (l_A__loc2_ = ({ bool _t20436 = (!rt::eq(rt::V((double)(this->f_S_7_21_b)), rt::arr_at(g::SV.C_S_8G__S_4P, 0.0))); _t20436 ? _t20436 : (bool)((!(this->f_S__20_z == (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)))))); }));
    if (((!(l_A__loc1_ == this->f_S__20__21__40_)) || l_A__loc2_)) {
        ({ rt::Value _v20437 = rt::arr_at(g::SV.C_S_8G__S_4P, 0.0); this->f_S_7_21_b = rt::toint(_v20437); _v20437; });
        ({ bool _v20438 = rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)); this->f_S__20_z = _v20438; _v20438; });
        ({ double _v20439 = l_A__loc1_; this->f_S__20__21__40_ = _v20439; _v20439; });
        if ((this->f_S__20__21__40_ <= 0.0)) {
            ({ rt::Value _v20441 = ({ rt::Value _v20440 = rt::VB(false); rt::dset(this->f_S_1_21_3, NM_visible, _v20440); _v20440; }); rt::dset(this->f_S__25__21_Y, NM_visible, _v20441); _v20441; });
            ({ rt::Value _v20442 = rt::V((g::SV.C_S__20_g__S__22_g ? 13.0 : ((rt::tonum(rt::dget(rt::VO(this), NM_height)) / 2.0) - (rt::tonum(rt::dget(this->f_S_9_21_Z, NM_height)) / 2.0)))); rt::dset(this->f_S_9_21_Z, NM_y, _v20442); _v20442; });
        } else {
            ({ rt::Value _v20444 = ({ rt::Value _v20443 = rt::VB(true); rt::dset(this->f_S_1_21_3, NM_visible, _v20443); _v20443; }); rt::dset(this->f_S__25__21_Y, NM_visible, _v20444); _v20444; });
            ({ rt::Value _v20445 = rt::V((g::SV.C_S__20_g__S__22_g ? 6.0 : ((((rt::tonum(rt::dget(rt::VO(this), NM_height)) / 2.0) - (rt::tonum(rt::dget(this->f_S_9_21_Z, NM_height)) / 2.0)) - (rt::tonum(rt::dget(this->f_S__25__21_Y, NM_height)) / 2.0)) - 3.0))); rt::dset(this->f_S_9_21_Z, NM_y, _v20445); _v20445; });
            (l_A__loc3_ = rt::slot_string(rt::add(rt::VS(g::LS[134]), C_S__26_c::sm_S_8_21_Z(this->f_S__20__21__40_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            if ((!rt::eq(l_A__loc3_, rt::dget(this->f_S__25__21_Y, NM_text)))) {
                ({ rt::Value _v20446 = l_A__loc3_; rt::dset(this->f_S__25__21_Y, NM_text, _v20446); _v20446; });
                if (g::SV.C_S__20_g__S__22_g) {
                    ({ rt::Value _v20447 = rt::V(NAN); rt::dset(this->f_S__25__21_Y, NM_width, _v20447); _v20447; });
                }
                (void)(rt::dcallv(this->f_S__25__21_Y, NM_validate));
                ({ rt::Value _v20448 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_width)) / 2.0) - (rt::tonum(rt::dget(this->f_S__25__21_Y, NM_width)) / 2.0))); rt::dset(this->f_S__25__21_Y, NM_x, _v20448); _v20448; });
                if (g::SV.C_S__20_g__S__22_g) {
                    ({ rt::Value _o20450 = this->f_S__25__21_Y; rt::Value _v20449 = rt::V((rt::tonum(rt::dget(_o20450, NM_x)) - 7.0)); rt::dset(_o20450, NM_x, _v20449); _v20449; });
                    ({ rt::Value _v20451 = rt::add(rt::add(rt::dget(this->f_S__25__21_Y, NM_x), rt::dget(this->f_S__25__21_Y, NM_width)), rt::V(3.0)); rt::dset(this->f_S_1_21_3, NM_x, _v20451); _v20451; });
                } else {
                    ({ rt::Value _v20452 = rt::V((rt::tonum(rt::dget(this->f_S__25__21_Y, NM_y)) - 5.0)); rt::dset(this->f_S_1_21_3, NM_y, _v20452); _v20452; });
                    ({ rt::Value _v20453 = rt::add(rt::dget(this->f_S__25__21_Y, NM_x), rt::dget(this->f_S__25__21_Y, NM_width)); rt::dset(this->f_S_1_21_3, NM_x, _v20453); _v20453; });
                }
            }
        }
    }
    return rt::NUL;
}
bool C_S_59::dm_S_8_21_Q_0() { return false; }
bool C_S_59::dm_S_8_21_Q_1() { return false; }
rt::Value C_S_59::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S_59.S_8_21_Q");
    (void)(this->m_S__21__21_G());
    if ((!this->g_isEnabled())) {
        return rt::NUL;
    }
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    (l_A__loc5_ = rt::slot_string(rt::trv(rt::VS(g::LS[4943]))));
    (l_A__loc4_ = rt::slot_string(rt::trv(rt::VS(g::LS[5998]))));
    (l_A__loc3_ = rt::slot_string(rt::VS(g::LS[113])));
    if (((((double)(C_S_8G::sg_S__2c_P())) == 0.0) && (((double)(C_S_8G::sg_S_8_21_H())) >= 39.0))) {
        (l_A__loc5_ = rt::slot_string(rt::trv(rt::VS(g::LS[4949]))));
        (l_A__loc4_ = rt::slot_string(rt::trv(rt::VS(g::LS[5999]))));
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::trv(rt::VS(g::LS[6000])))));
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::VS(g::LS[8]))));
    } else if (((((double)(C_S_8G::sg_S__2c_P())) == 1.0) && (((double)(C_S_8G::sg_S_8_21_H())) >= 99.0))) {
        (l_A__loc5_ = rt::slot_string(rt::trv(rt::VS(g::LS[4949]))));
        (l_A__loc4_ = rt::slot_string(rt::trv(rt::VS(g::LS[5999]))));
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::trv(rt::VS(g::LS[6001])))));
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::VS(g::LS[8]))));
    } else if (((((double)(C_S_8G::sg_S__2c_P())) == 2.0) && (((double)(C_S_8G::sg_S_8_21_H())) >= 159.0))) {
        (l_A__loc5_ = rt::slot_string(rt::trv(rt::VS(g::LS[4949]))));
        (l_A__loc4_ = rt::slot_string(rt::trv(rt::VS(g::LS[5999]))));
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::trv(rt::VS(g::LS[6002])))));
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::VS(g::LS[8]))));
    } else if (((((double)(C_S_8G::sg_S__2c_P())) == 3.0) && (((double)(C_S_8G::sg_S_8_21_H())) >= 219.0))) {
        (l_A__loc5_ = rt::slot_string(rt::trv(rt::VS(g::LS[4949]))));
        (l_A__loc4_ = rt::slot_string(rt::trv(rt::VS(g::LS[5999]))));
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::trv(rt::VS(g::LS[6003])))));
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::VS(g::LS[8]))));
    }
    (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::trv(rt::VS(g::LS[6004])))));
    if ((((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 1.0) && ((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) < 10.0))) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6005]), C_S__26_c::sm_S_6_21_T(C_S__40__22_J::sm_S__27__22__2c_(rt::toint_d(1.0)), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))))));
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[6006]), C_S__26_c::sm_S_6_21_T(C_S__40__22_J::sm_S__2b__2b_(rt::toint_d(1.0)), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))))));
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[6007]), C_S__26_c::sm_S_8_21_Z(C_S__40__22_J::sm_S__2c_J(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[6008]), rt::dcallv(rt::V(C_S__40__22_J::sm_S_2_21_W(rt::toint_d(1.0))), rt::N_toFixed, rt::V(1.0)))))));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) > 1.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6009]))))));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 2.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6010]), rt::dcallv(rt::V(0.2), rt::N_toFixed, rt::V(1.0)), rt::dcallv(rt::V(C_S__40__22_J::sm_S__5e_y(rt::toint_d(1.0))), rt::N_toFixed, rt::V(1.0)))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 3.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6011]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 5.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6012]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_6_21_T(C_S__40__22_J::sm_S_2_21__40_(rt::toint_d(1.0)), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 7.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6013]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 10.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6015]), C_S__26_c::sm_S_6_21_T(C_S__40__22_J::sm_S_3h(rt::toint_d(1.0)), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 12.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6016]), C_S__26_c::sm_S_8_21_Z(35.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__40__22_J::sm_S__60_z(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 14.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6017]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 16.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6018]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 20.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6019]), rt::dcallv(rt::V(0.01), rt::N_toFixed, rt::V(2.0)))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 24.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6020]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 25.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6021]), rt::dcallv(rt::V(0.5), rt::N_toFixed, rt::V(1.0)), C_S__26_c::sm_S_8_21_Z(C_S__40__22_J::sm_S__40__21__3f_(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 32.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6022]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 42.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6023]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 43.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6024]), C_S__26_c::sm_S_8_21_Z(C_S_7_22_9::sm_S__5d_e(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 46.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6025]), C_S__26_c::sm_S_6_21_T(C_S_7_22_9::sm_S__5d__22__2b_(rt::toint_d(1.0)), 2.0, C_S__26_c::dsm_S_6_21_T_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 50.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6026]), C_S__26_c::sm_S_8_21_Z(C_S_7_22_9::sm_S__23__21_Y(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 58.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6027]), C_S__26_c::sm_S_8_21_Z(C_S_7_22_9::sm_S_5_22_0(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 60.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6028]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 70.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6029]), C_S__26_c::sm_S_8_21_Z(C_S_7_22_9::sm_S_6_22_4(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 75.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6030]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 80.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6031]), C_S__26_c::sm_S_8_21_Z(4.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 90.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6032]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 101.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6033]), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 105.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6034]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 107.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6035]))))));
        if ((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) {
            (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[194]), rt::trv(rt::VS(g::LS[5259]), C_S__26_c::sm_S_6_21_T(C_S__3f__22_J::sm_S_0_21_q(g::SV.C_S_8G__S__2d__21__5e_, C_S__3f__22_J::dsm_S_0_21_q_1()), 3.0, C_S__26_c::dsm_S_6_21_T_2()))), (((!(((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) ? rt::add(rt::VS(g::LS[9]), rt::trv(rt::VS(g::LS[5260]), C_S__26_c::sm_S_6_21_T(C_S__3f__22_J::sm_S_0_21_q(g::SV.C_S_8G__S__23_3, C_S__3f__22_J::dsm_S_0_21_q_1()), 3.0, C_S__26_c::dsm_S_6_21_T_2()))) : rt::VS(g::LS[113])))), (((!(((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0))) ? rt::add(rt::VS(g::LS[9]), rt::trv(rt::VS(g::LS[5261]), C_S__26_c::sm_S_6_21_T(C_S__3f__22_J::sm_S_0_21_q(g::SV.C_S_8G__S__2d__21_x, C_S__3f__22_J::dsm_S_0_21_q_1()), 3.0, C_S__26_c::dsm_S_6_21_T_2()))) : rt::VS(g::LS[113])))), rt::VS(g::LS[931])))));
        }
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 110.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6036]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 112.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6037]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 115.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6038]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 115.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6039]), C_S__26_c::sm_S_8_21_Z(C_S__3f__22_J::sm_S__2d__21_r(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 120.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[6040]), C_S__26_c::sm_S_6_21_T(C_S_7_22_9::sm_S__5d__22__2b_(rt::toint_d(1.0)), 3.0, C_S__26_c::dsm_S_6_21_T_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 125.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6041]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 130.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6042]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 150.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6043]), C_S__26_c::sm_S_8_21_Z(C_S__3f__22_J::sm_S__40__21__5f_(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 165.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6036]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 170.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6044]), C_S__26_c::sm_S_8_21_Z(C_S__5b__22_J::sm_S_6_22__24_(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 172.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6041]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 200.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[6040]), C_S__26_c::sm_S_6_21_T(C_S__5b__22_J::sm_S_6_22__40_(rt::toint_d(1.0)), 4.0, C_S__26_c::dsm_S_6_21_T_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 220.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6014]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[6045]), C_S__26_c::sm_S_8_21_Z(C_S__5d__22_L::sm_S_1_22_M(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 225.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[6046]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 230.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[6028]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 235.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[6036]))))));
    } else if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 255.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[6041]))))));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 2.0)) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6047]))))));
    } else if ((({ bool _t20478 = ({ bool _t20477 = ({ bool _t20476 = ({ bool _t20475 = ({ bool _t20474 = ({ bool _t20473 = ({ bool _t20472 = ({ bool _t20471 = ({ bool _t20470 = ({ bool _t20469 = ({ bool _t20468 = ({ bool _t20467 = ({ bool _t20466 = ({ bool _t20465 = ({ bool _t20464 = ({ bool _t20463 = ({ bool _t20462 = ({ bool _t20461 = ({ bool _t20460 = ({ bool _t20459 = ({ bool _t20458 = ({ bool _t20457 = ({ bool _t20456 = ({ bool _t20455 = ({ bool _t20454 = ((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 4.0); _t20454 ? _t20454 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 6.0)); }); _t20455 ? _t20455 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 8.0)); }); _t20456 ? _t20456 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 9.0)); }); _t20457 ? _t20457 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 11.0)); }); _t20458 ? _t20458 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 18.0)); }); _t20459 ? _t20459 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 19.0)); }); _t20460 ? _t20460 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 21.0)); }); _t20461 ? _t20461 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 25.0)); }); _t20462 ? _t20462 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 27.0)); }); _t20463 ? _t20463 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 33.0)); }); _t20464 ? _t20464 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 53.0)); }); _t20465 ? _t20465 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 56.0)); }); _t20466 ? _t20466 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 59.0)); }); _t20467 ? _t20467 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 62.0)); }); _t20468 ? _t20468 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 65.0)); }); _t20469 ? _t20469 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 68.0)); }); _t20470 ? _t20470 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 135.0)); }); _t20471 ? _t20471 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 139.0)); }); _t20472 ? _t20472 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 143.0)); }); _t20473 ? _t20473 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 148.0)); }); _t20474 ? _t20474 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 153.0)); }); _t20475 ? _t20475 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 190.0)); }); _t20476 ? _t20476 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 194.0)); }); _t20477 ? _t20477 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 198.0)); }); _t20478 ? _t20478 : (bool)(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 202.0)); }) || ((((double)(C_S_8G::sg_S_8_21_H())) + 1.0) == 206.0))) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6048]))))));
    }
    if ((!rt::T(rt::dget(this->f_S_9_21_Z, NM_isEnabled)))) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[6049]), rt::dcallv(rt::V(((((double)(C_S_8G::sg_S_8_21_H())) + 1.0))), rt::N_toString), C_S__26_c::sm_S_8_21_Z(C_S__23__21__21_::sm_S__26_v(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
        (void)(({ rt::Value _o20479 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20480 = rt::as_ptr<C_S__20_g>(_o20479); _p20480 ? _p20480->m_S__2d__25_(l_A__loc5_, l_A__loc3_, rt::NUL, rt::NUL, rt::NUL, true, true, rt::VS(g::LS[113]), rt::NUL, true, C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20479, NM_S__2d__25_, l_A__loc5_, l_A__loc3_, rt::NUL, rt::NUL, rt::NUL, rt::VB(true), rt::VB(true), rt::VS(g::LS[113]), rt::NUL, rt::VB(true)); }));
    } else {
        (void)(({ rt::Value _o20486 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20487 = rt::as_ptr<C_S__20_g>(_o20486); _p20487 ? _p20487->m_S__2d__25_(l_A__loc5_, l_A__loc3_, rt::arr_lit({l_A__loc4_}), rt::arr_lit({((({ bool _t20485 = ({ bool _t20483 = ({ bool _t20481 = (((double)(C_S_8G::sg_S__2c_P())) == 0.0); _t20481 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 39.0)) : _t20481; }); _t20483 ? _t20483 : (bool)(({ bool _t20482 = (((double)(C_S_8G::sg_S__2c_P())) == 1.0); _t20482 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 99.0)) : _t20482; })); }); _t20485 ? _t20485 : (bool)(({ bool _t20484 = (((double)(C_S_8G::sg_S__2c_P())) == 2.0); _t20484 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 159.0)) : _t20484; })); }) || ((((double)(C_S_8G::sg_S__2c_P())) == 3.0) && (((double)(C_S_8G::sg_S_8_21_H())) >= 219.0))) ? rt::dget(g::SV.C_S_8G__S__3e__21_a, NM_S__3b__5b_) : rt::dget(g::SV.C_S_8G__S__3e__21_a, NM_S__40__21__21_))}), rt::NUL, true, true, rt::VS(g::LS[113]), rt::NUL, true, C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20486, NM_S__2d__25_, l_A__loc5_, l_A__loc3_, rt::arr_lit({l_A__loc4_}), rt::arr_lit({((({ bool _t20492 = ({ bool _t20490 = ({ bool _t20488 = (((double)(C_S_8G::sg_S__2c_P())) == 0.0); _t20488 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 39.0)) : _t20488; }); _t20490 ? _t20490 : (bool)(({ bool _t20489 = (((double)(C_S_8G::sg_S__2c_P())) == 1.0); _t20489 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 99.0)) : _t20489; })); }); _t20492 ? _t20492 : (bool)(({ bool _t20491 = (((double)(C_S_8G::sg_S__2c_P())) == 2.0); _t20491 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 159.0)) : _t20491; })); }) || ((((double)(C_S_8G::sg_S__2c_P())) == 3.0) && (((double)(C_S_8G::sg_S_8_21_H())) >= 219.0))) ? rt::dget(g::SV.C_S_8G__S__3e__21_a, NM_S__3b__5b_) : rt::dget(g::SV.C_S_8G__S__3e__21_a, NM_S__40__21__21_))}), rt::NUL, rt::VB(true), rt::VB(true), rt::VS(g::LS[113]), rt::NUL, rt::VB(true)); }));
    }
    return rt::NUL;
}
C_S_59* C_S_59::alloc_() {
    C_S_59* o = rt::make<C_S_59>();
    return o;
}
rt::Value C_S_59::mk_(rt::Value* a, int n) {
    C_S_59* o = alloc_();
    o->C_S_59::ctor_();
    return rt::VO(o);
}
bool C_S_59::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40_X: out = rt::VB(f_S__40_X); return true;
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S__25__21_Y: out = f_S__25__21_Y; return true;
    case NM_S_1_21_3: out = f_S_1_21_3; return true;
    case NM_S__20__21__40_: out = rt::V(f_S__20__21__40_); return true;
    case NM_S_7_21_b: out = rt::V((double)(f_S_7_21_b)); return true;
    case NM_S__20_z: out = rt::VB(f_S__20_z); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S_59::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__40_X: f_S__40_X = rt::T(v); return true;
    case NM_S_9_21_Z: f_S_9_21_Z = v; return true;
    case NM_S__25__21_Y: f_S__25__21_Y = v; return true;
    case NM_S_1_21_3: f_S_1_21_3 = v; return true;
    case NM_S__20__21__40_: f_S__20__21__40_ = rt::tonum(v); return true;
    case NM_S_7_21_b: f_S_7_21_b = rt::toint(v); return true;
    case NM_S__20_z: f_S__20_z = rt::T(v); return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S_59::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S_59::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S_59::dm_S_8_21_Q_1())); return true;
    case NM_S__40_X: { rt::Value f = rt::VB(f_S__40_X); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21_Y: { rt::Value f = f_S__25__21_Y; out = rt::call_value(f, a, n); return true; }
    case NM_S_1_21_3: { rt::Value f = f_S_1_21_3; out = rt::call_value(f, a, n); return true; }
    case NM_S__20__21__40_: { rt::Value f = rt::V(f_S__20__21__40_); out = rt::call_value(f, a, n); return true; }
    case NM_S_7_21_b: { rt::Value f = rt::V((double)(f_S_7_21_b)); out = rt::call_value(f, a, n); return true; }
    case NM_S__20_z: { rt::Value f = rt::VB(f_S__20_z); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S_59::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__40_X: return false;
    case NM_S_9_21_Z: return false;
    case NM_S__25__21_Y: return false;
    case NM_S_1_21_3: return false;
    case NM_S__20__21__40_: return false;
    case NM_S_7_21_b: return false;
    case NM_S__20_z: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S_59::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_59::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_59::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_59::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_22__2d_::ctor_() {
    RT_FN("S_7_22__2d_.S_7_22__2d_");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S_7_22__2d_::m_S__2b__21_R() {
    RT_FN("S_7_22__2d_.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_4), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__26_E), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_8x), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    ({ rt::Value _v20494 = ({ rt::Value _v20493 = rt::V((g::SV.C_S__20_g__S__22_g ? 50.0 : 75.0)); rt::dset(rt::VO(this), NM_height, _v20493); _v20493; }); rt::dset(rt::VO(this), NM_width, _v20494); _v20494; });
    ({ rt::Value _v20495 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__3b__22__2d_); this->f_S__5e__21__23_ = _v20495; _v20495; });
    ({ rt::Value _v20497 = ({ rt::Value _v20496 = rt::V((g::SV.C_S__20_g__S__22_g ? 45.0 : 65.0)); rt::dset(this->f_S__5e__21__23_, NM_height, _v20496); _v20496; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v20497); _v20497; });
    ({ rt::Value _v20499 = ({ rt::Value _v20498 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_width)) / 2.0) - (rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)) / 2.0))); rt::dset(this->f_S__5e__21__23_, NM_y, _v20498); _v20498; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v20499); _v20499; });
    ({ rt::Value _v20500 = rt::VB(false); rt::dset(this->f_S__5e__21__23_, NM_touchable, _v20500); _v20500; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    return rt::NUL;
}
rt::Value C_S_7_22__2d_::m_S_5I(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S_7_22__2d_.S_5I");
    ({ rt::Value _v20501 = l_param1; this->f_S_0_21_A = _v20501; _v20501; });
    if (rt::eq(this->f_S_0_21_A, rt::NUL)) {
        return rt::NUL;
    }
    return rt::NUL;
}
bool C_S_7_22__2d_::dm_S_8_21_Q_0() { return false; }
bool C_S_7_22__2d_::dm_S_8_21_Q_1() { return false; }
rt::Value C_S_7_22__2d_::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S_7_22__2d_.S_8_21_Q");
    if (rt::eq(this->f_S_0_21_A, rt::NUL)) {
        return rt::NUL;
    }
    if ((((double)(({ rt::Value _o20502 = this->f_S_0_21_A; C_S_84* _p20503 = rt::as_ptr<C_S_84>(_o20502); _p20503 ? _p20503->f_S__27__21_X : rt::toint(rt::dget(_o20502, NM_S__27__21_X)); }))) < 60.0)) {
        return rt::NUL;
    }
    ({ bool _v20506 = false; rt::Value _o20504 = this->f_S_0_21_A; C_S_84* _p20505 = rt::as_ptr<C_S_84>(_o20504); if (_p20505) _p20505->f_S_23 = _v20506; else rt::dset(_o20504, NM_S_23, rt::VB(_v20506)); _v20506; });
    ({ double _v20509 = 0.0; rt::Value _o20507 = this->f_S_0_21_A; C_S_84* _p20508 = rt::as_ptr<C_S_84>(_o20507); if (_p20508) _p20508->f_S__27__21_X = rt::toint_d(_v20509); else rt::dset(_o20507, NM_S__27__21_X, rt::V(_v20509)); _v20509; });
    ({ double _v20512 = 0.0; rt::Value _o20510 = this->f_S_0_21_A; C_S_84* _p20511 = rt::as_ptr<C_S_84>(_o20510); if (_p20511) _p20511->s_S__60_r(rt::touint_d(_v20512)); else rt::dset(_o20510, NM_S__60_r, rt::V(_v20512)); _v20512; });
    (void)(({ rt::Value _o20513 = this->f_S_0_21_A; C_S_84* _p20514 = rt::as_ptr<C_S_84>(_o20513); _p20514 ? _p20514->m_S__5b__21__3b_() : rt::dcallv(_o20513, NM_S__5b__21__3b_); }));
    (void)(({ rt::Value _o20516 = (({ rt::Value _t20515 = rt::dget(rt::dget(rt::VO(this), NM_parent), NM_parent); rt::is_class(_t20515, C_S__22__21_Z::CI) ? _t20515 : rt::NUL; })); C_S__22__21_Z* _p20517 = rt::as_ptr<C_S__22__21_Z>(_o20516); _p20517 ? _p20517->m_S_5I(this->f_S_0_21_A) : rt::dcallv(_o20516, NM_S_5I, this->f_S_0_21_A); }));
    (void)(rt::dcallv((({ rt::Value _t20520 = ({ rt::Value _o20518 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20519 = rt::as_ptr<C_S__20_g>(_o20518); _p20519 ? _p20519->m_S__2b__21__2c_(rt::touint_d(2.0)) : rt::dcallv(_o20518, NM_S__2b__21__2c_, rt::V(2.0)); }); rt::is_stubtype(_t20520) ? _t20520 : rt::NUL; })), NM_S__21__21_G));
    return rt::NUL;
}
bool C_S_7_22__2d_::dm_S_9_21_I_0() { return false; }
bool C_S_7_22__2d_::dm_S_9_21_I_1() { return false; }
rt::Value C_S_7_22__2d_::m_S_9_21_I(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S_7_22__2d_.S_9_21_I");
    (void)(this->m_S_8_21_Q(l_param1, l_param2));
    return rt::NUL;
}
C_S_7_22__2d_* C_S_7_22__2d_::alloc_() {
    C_S_7_22__2d_* o = rt::make<C_S_7_22__2d_>();
    return o;
}
rt::Value C_S_7_22__2d_::mk_(rt::Value* a, int n) {
    C_S_7_22__2d_* o = alloc_();
    o->C_S_7_22__2d_::ctor_();
    return rt::VO(o);
}
bool C_S_7_22__2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S_0_21_A: out = f_S_0_21_A; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_5I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21_I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S_7_22__2d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    case NM_S_0_21_A: f_S_0_21_A = v; return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S_7_22__2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_5I: out = m_S_5I(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S_7_22__2d_::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S_7_22__2d_::dm_S_8_21_Q_1())); return true;
    case NM_S_9_21_I: out = m_S_9_21_I(rt::arg<bool>(a, n, 0, C_S_7_22__2d_::dm_S_9_21_I_0()), rt::arg<bool>(a, n, 1, C_S_7_22__2d_::dm_S_9_21_I_1())); return true;
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S_0_21_A: { rt::Value f = f_S_0_21_A; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S_7_22__2d_::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_5I: return true;
    case NM_S_8_21_Q: return true;
    case NM_S_9_21_I: return true;
    case NM_S__5e__21__23_: return false;
    case NM_S_0_21_A: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S_7_22__2d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22__2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22__2d_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22__2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9P::ctor_() {
    RT_FN("S_9P.S_9P");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S_9P::m_S__2b__21_R() {
    RT_FN("S_9P.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    if (g::SV.C_S__20_g__S__22_g) {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5d__23_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__27__21__26_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_U), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
        ({ rt::Value _v20522 = ({ rt::Value _v20521 = rt::V(40.0); rt::dset(rt::VO(this), NM_height, _v20521); _v20521; }); rt::dset(rt::VO(this), NM_width, _v20522); _v20522; });
        ({ rt::Value _v20523 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__60__5e_); this->f_S__5e__21__23_ = _v20523; _v20523; });
        ({ rt::Value _v20525 = ({ rt::Value _v20524 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S__5e__21__23_, NM_height, _v20524); _v20524; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v20525); _v20525; });
        ({ rt::Value _v20527 = ({ rt::Value _v20526 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)))) / 2.0)); rt::dset(this->f_S__5e__21__23_, NM_y, _v20526); _v20526; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v20527); _v20527; });
    } else {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S_0G), rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__60__21_8), rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S_0G), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
        ({ rt::Value _v20528 = rt::V(45.0); rt::dset(rt::VO(this), NM_width, _v20528); _v20528; });
        ({ rt::Value _v20529 = rt::V(40.0); rt::dset(rt::VO(this), NM_height, _v20529); _v20529; });
        ({ rt::Value _v20530 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[5993]))); this->f_S__5e__21__23_ = _v20530; _v20530; });
        ({ rt::Value _v20531 = rt::VB(false); rt::dset(this->f_S__5e__21__23_, NM_visible, _v20531); _v20531; });
        ({ rt::Value _v20533 = ({ rt::Value _v20532 = rt::V((rt::tonum(rt::dget(rt::VO(this), NM_width)) - 12.0)); rt::dset(this->f_S__5e__21__23_, NM_height, _v20532); _v20532; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v20533); _v20533; });
        ({ rt::Value _v20534 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)))) / 2.0)); rt::dset(this->f_S__5e__21__23_, NM_x, _v20534); _v20534; });
        ({ rt::Value _v20535 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_height)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_height)))) / 2.0)); rt::dset(this->f_S__5e__21__23_, NM_y, _v20535); _v20535; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    ({ rt::Value _v20537 = ({ C_S_8_21__2d_* _n20536 = C_S_8_21__2d_::alloc_(); _n20536->C_S_8_21__2d_::ctor_(); rt::VO(_n20536); }); this->f_S_5C = _v20537; _v20537; });
    (void)(({ rt::Value _o20538 = this->f_S_5C; C_S_8_21__2d_* _p20539 = rt::as_ptr<C_S_8_21__2d_>(_o20538); _p20539 ? _p20539->m_S__2b__21_R() : rt::dcallv(_o20538, NM_S__2b__21_R); }));
    (void)(({ rt::Value _o20540 = this->f_S_5C; C_S_8_21__2d_* _p20541 = rt::as_ptr<C_S_8_21__2d_>(_o20540); _p20541 ? _p20541->m_S_3H() : rt::dcallv(_o20540, NM_S_3H); }));
    return rt::NUL;
}
bool C_S_9P::dm_S_8_21_Q_0() { return false; }
bool C_S_9P::dm_S_8_21_Q_1() { return false; }
rt::Value C_S_9P::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S_9P.S_8_21_Q");
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    (void)(({ rt::Value _o20542 = this->f_S_5C; C_S_8_21__2d_* _p20543 = rt::as_ptr<C_S_8_21__2d_>(_o20542); _p20543 ? _p20543->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))) : rt::dcallv(_o20542, NM_S__21__21_c, rt::V((-1.0)), rt::V((-1.0))); }));
    (void)(({ rt::Value _o20544 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20545 = rt::as_ptr<C_S__20_g>(_o20544); _p20545 ? _p20545->m_S__2d__25_(rt::VS(g::LS[113]), rt::VS(g::LS[113]), rt::NUL, rt::NUL, this->f_S_5C, true, false, C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20544, NM_S__2d__25_, rt::VS(g::LS[113]), rt::VS(g::LS[113]), rt::NUL, rt::NUL, this->f_S_5C, rt::VB(true), rt::VB(false)); }));
    (void)(({ rt::Value _o20546 = this->f_S_5C; C_S_8_21__2d_* _p20547 = rt::as_ptr<C_S_8_21__2d_>(_o20546); _p20547 ? _p20547->m_S__21__21_G() : rt::dcallv(_o20546, NM_S__21__21_G); }));
    if (((!g::SV.C_S__20_g__S__22_g) && (!C_S_8G::sm_S__3c_P(g::SV.C_S__40__27___id)))) {
        (void)(({ rt::Value _o20548 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p20549 = rt::as_ptr<C_S_8G>(_o20548); _p20549 ? _p20549->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__40__27___id)) : rt::dcallv(_o20548, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__40__27___id)); }));
    }
    return rt::NUL;
}
rt::Value C_S_9P::m_S__21__21_c(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S_9P.S__21__21_c");
    (void)(this->C_S_6_2b_::m_S__21__21_c(l_param1, l_param2));
    return rt::NUL;
}
C_S_9P* C_S_9P::alloc_() {
    C_S_9P* o = rt::make<C_S_9P>();
    return o;
}
rt::Value C_S_9P::mk_(rt::Value* a, int n) {
    C_S_9P* o = alloc_();
    o->C_S_9P::ctor_();
    return rt::VO(o);
}
bool C_S_9P::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S_5C: out = f_S_5C; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_c: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S_9P::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    case NM_S_5C: f_S_5C = v; return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S_9P::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S_9P::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S_9P::dm_S_8_21_Q_1())); return true;
    case NM_S__21__21_c: out = m_S__21__21_c(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)); return true;
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S_5C: { rt::Value f = f_S_5C; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S_9P::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__21__21_c: return true;
    case NM_S__5e__21__23_: return false;
    case NM_S_5C: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S_9P::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9P::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9P::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9P::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__21__5f_::ctor_() {
    RT_FN("S__3d__21__5f_.S__3d__21__5f_");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S__3d__21__5f_::m_S__2b__21_R() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3d__21__5f_.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    if (g::SV.C_S__20_g__S__22_g) {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2b_4), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2b_f), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5e_S), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    } else {
        (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_0_21_H), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5b_R), C_S_6_2b_::dm_S__3d__22__2(), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    }
    ({ rt::Value _v20551 = ({ rt::Value _v20550 = rt::V((g::SV.C_S__20_g__S__22_g ? 80.0 : 97.0)); rt::dset(rt::VO(this), NM_height, _v20550); _v20550; }); rt::dset(rt::VO(this), NM_width, _v20551); _v20551; });
    (l_A__loc1_ = rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::add(rt::add(rt::add(rt::VS(g::LS[6050]), ((g::SV.C_S__20_g__S__22_g ? rt::VS(g::LS[5903]) : rt::VS(g::LS[113])))), rt::VS(g::LS[5904])), rt::arr_at(g::SV.C_Translation__LOCALE_CODE, ((double)(g::SV.C_Translation__locale))))));
    if ((!rt::T(l_A__loc1_))) {
        (l_A__loc1_ = rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::add(rt::VS(g::LS[6050]), ((g::SV.C_S__20_g__S__22_g ? rt::VS(g::LS[5903]) : rt::VS(g::LS[113]))))));
    }
    ({ rt::Value _v20552 = rt::callv(rt::dget(rt::VO(this), NM_Image), l_A__loc1_); this->f_S__5e__21__23_ = _v20552; _v20552; });
    ({ rt::Value _v20554 = ({ rt::Value _v20553 = rt::V((g::SV.C_S__20_g__S__22_g ? 75.0 : 97.0)); rt::dset(this->f_S__5e__21__23_, NM_height, _v20553); _v20553; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v20554); _v20554; });
    ({ rt::Value _v20556 = ({ rt::Value _v20555 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)))) / 2.0)); rt::dset(this->f_S__5e__21__23_, NM_y, _v20555); _v20555; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v20556); _v20556; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    ({ rt::Value _v20557 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[6051]))); this->f_S_1_21__3d_ = _v20557; _v20557; });
    ({ rt::Value _v20558 = rt::V((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S_1_21__3d_, NM_width)))); rt::dset(this->f_S_1_21__3d_, NM_x, _v20558); _v20558; });
    ({ rt::Value _v20559 = rt::V(0.0); rt::dset(this->f_S_1_21__3d_, NM_y, _v20559); _v20559; });
    ({ rt::Value _v20560 = rt::VB(false); rt::dset(this->f_S_1_21__3d_, NM_visible, _v20560); _v20560; });
    ({ rt::Value _v20561 = rt::VB(false); rt::dset(this->f_S_1_21__3d_, NM_touchable, _v20561); _v20561; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_1_21__3d_));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    ({ rt::Value _v20563 = ({ C_S_4Z* _n20562 = C_S_4Z::alloc_(); _n20562->C_S_4Z::ctor_(); rt::VO(_n20562); }); this->f_S__3e_z = _v20563; _v20563; });
    (void)(({ rt::Value _o20564 = this->f_S__3e_z; C_S_4Z* _p20565 = rt::as_ptr<C_S_4Z>(_o20564); _p20565 ? _p20565->m_S__2b__21_R() : rt::dcallv(_o20564, NM_S__2b__21_R); }));
    return rt::NUL;
}
rt::Value C_S__3d__21__5f_::m_S__21__21_G() {
    RT_FN("S__3d__21__5f_.S__21__21_G");
    (void)(this->C_S_6_2b_::m_S__21__21_G());
    if ((!(((double)(this->f_S__2b__26_)) == ((double)(C_PlayFab::sg_season()))))) {
        ({ int32_t _v20566 = C_PlayFab::sg_season(); this->f_S__2b__26_ = _v20566; _v20566; });
    }
    return rt::NUL;
}
bool C_S__3d__21__5f_::dm_S_8_21_Q_0() { return false; }
bool C_S__3d__21__5f_::dm_S_8_21_Q_1() { return false; }
rt::Value C_S__3d__21__5f_::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S__3d__21__5f_.S_8_21_Q");
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    (void)(({ rt::Value _o20567 = this->f_S__3e_z; C_S_4Z* _p20568 = rt::as_ptr<C_S_4Z>(_o20567); _p20568 ? _p20568->m_S_3H() : rt::dcallv(_o20567, NM_S_3H); }));
    (void)(({ rt::Value _o20569 = this->f_S__3e_z; C_S_4Z* _p20570 = rt::as_ptr<C_S_4Z>(_o20569); _p20570 ? _p20570->m_S__26__40_() : rt::dcallv(_o20569, NM_S__26__40_); }));
    (void)(({ rt::Value _o20571 = this->f_S__3e_z; C_S_4Z* _p20572 = rt::as_ptr<C_S_4Z>(_o20571); _p20572 ? _p20572->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))) : rt::dcallv(_o20571, NM_S__21__21_c, rt::V((-1.0)), rt::V((-1.0))); }));
    (void)(({ rt::Value _o20573 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20574 = rt::as_ptr<C_S__20_g>(_o20573); _p20574 ? _p20574->m_S_4_60_(rt::toint_d(19.0)) : rt::dcallv(_o20573, NM_S_4_60_, rt::V(19.0)); }));
    ({ rt::Value _v20577 = ({ rt::Value _o20575 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20576 = rt::as_ptr<C_S__20_g>(_o20575); _p20576 ? _p20576->m_S__2d__25_(rt::trv(rt::VS(g::LS[6052])), rt::VS(g::LS[113]), rt::NUL, rt::NUL, this->f_S__3e_z, true, false, C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20575, NM_S__2d__25_, rt::trv(rt::VS(g::LS[6052])), rt::VS(g::LS[113]), rt::NUL, rt::NUL, this->f_S__3e_z, rt::VB(true), rt::VB(false)); }); this->f_S__40_X = _v20577; _v20577; });
    return rt::NUL;
}
rt::Value C_S__3d__21__5f_::m_S__25__21__26_() {
    RT_FN("S__3d__21__5f_.S__25__21__26_");
    (void)(this->m_S_8_21_Q(C_S__3d__21__5f_::dm_S_8_21_Q_0(), C_S__3d__21__5f_::dm_S_8_21_Q_1()));
    return rt::NUL;
}
C_S__3d__21__5f_* C_S__3d__21__5f_::alloc_() {
    C_S__3d__21__5f_* o = rt::make<C_S__3d__21__5f_>();
    return o;
}
rt::Value C_S__3d__21__5f_::mk_(rt::Value* a, int n) {
    C_S__3d__21__5f_* o = alloc_();
    o->C_S__3d__21__5f_::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21__5f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_1_21__3d_: out = f_S_1_21__3d_; return true;
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S__3e_z: out = f_S__3e_z; return true;
    case NM_S__2b__26_: out = rt::V((double)(f_S__2b__26_)); return true;
    case NM_S__40_X: out = f_S__40_X; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__25__21__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S__3d__21__5f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_1_21__3d_: f_S_1_21__3d_ = v; return true;
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    case NM_S__3e_z: f_S__3e_z = v; return true;
    case NM_S__2b__26_: f_S__2b__26_ = rt::toint(v); return true;
    case NM_S__40_X: f_S__40_X = v; return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S__3d__21__5f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S__3d__21__5f_::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S__3d__21__5f_::dm_S_8_21_Q_1())); return true;
    case NM_S__25__21__26_: out = m_S__25__21__26_(); return true;
    case NM_S_1_21__3d_: { rt::Value f = f_S_1_21__3d_; out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3e_z: { rt::Value f = f_S__3e_z; out = rt::call_value(f, a, n); return true; }
    case NM_S__2b__26_: { rt::Value f = rt::V((double)(f_S__2b__26_)); out = rt::call_value(f, a, n); return true; }
    case NM_S__40_X: { rt::Value f = f_S__40_X; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S__3d__21__5f_::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__25__21__26_: return true;
    case NM_S_1_21__3d_: return false;
    case NM_S__5e__21__23_: return false;
    case NM_S__3e_z: return false;
    case NM_S__2b__26_: return false;
    case NM_S__40_X: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S__3d__21__5f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__21__5f_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__21__5f_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__21__5f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__21_J::ctor_() {
    RT_FN("S__40__21_J.S__40__21_J");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S__40__21_J::m_S__2b__21_R() {
    RT_FN("S__40__21_J.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2b_4), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2b_f), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5e_S), rt::NUL, rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3c__21_L)));
    ({ rt::Value _v20578 = rt::V((g::SV.C_S__20_g__S__22_g ? 150.0 : 178.0)); rt::dset(rt::VO(this), NM_width, _v20578); _v20578; });
    ({ rt::Value _v20579 = rt::V(60.0); rt::dset(rt::VO(this), NM_height, _v20579); _v20579; });
    ({ rt::Value _v20580 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_4_21_A); this->f_S__2d__21__2c_ = _v20580; _v20580; });
    ({ rt::Value _v20582 = ({ rt::Value _v20581 = rt::V(54.0); rt::dset(this->f_S__2d__21__2c_, NM_height, _v20581); _v20581; }); rt::dset(this->f_S__2d__21__2c_, NM_width, _v20582); _v20582; });
    ({ rt::Value _v20584 = ({ rt::Value _v20583 = rt::V(3.0); rt::dset(this->f_S__2d__21__2c_, NM_y, _v20583); _v20583; }); rt::dset(this->f_S__2d__21__2c_, NM_x, _v20584); _v20584; });
    ({ rt::Value _v20585 = rt::VB(false); rt::dset(this->f_S__2d__21__2c_, NM_touchable, _v20585); _v20585; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__2d__21__2c_));
    ({ rt::Value _v20586 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[5339]))); this->f_S__5e__21__23_ = _v20586; _v20586; });
    ({ rt::Value _v20588 = ({ rt::Value _v20587 = rt::V(50.0); rt::dset(this->f_S__5e__21__23_, NM_height, _v20587); _v20587; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v20588); _v20588; });
    ({ rt::Value _v20590 = ({ rt::Value _v20589 = rt::V(5.0); rt::dset(this->f_S__5e__21__23_, NM_y, _v20589); _v20589; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v20590); _v20590; });
    ({ rt::Value _v20591 = rt::VB(false); rt::dset(this->f_S__5e__21__23_, NM_touchable, _v20591); _v20591; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    ({ rt::Value _v20592 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_Z = _v20592; _v20592; });
    ({ rt::Value _v20593 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_textAlign, _v20593); _v20593; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v20594 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(((((double)(g::SV.C_Translation__locale)) == 5.0) ? 26.0 : 30.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20594); _v20594; });
    } else {
        ({ rt::Value _v20595 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V((((((double)(g::SV.C_Translation__locale)) == 2.0) || (((double)(g::SV.C_Translation__locale)) == 5.0)) ? 14.0 : 18.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20595); _v20595; });
    }
    ({ rt::Value _v20596 = rt::add(rt::add(rt::dget(this->f_S__5e__21__23_, NM_x), rt::dget(this->f_S__5e__21__23_, NM_width)), rt::V(5.0)); rt::dset(this->f_S_9_21_Z, NM_x, _v20596); _v20596; });
    ({ rt::Value _v20597 = rt::V(15.0); rt::dset(this->f_S_9_21_Z, NM_y, _v20597); _v20597; });
    ({ rt::Value _v20598 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S_9_21_Z, NM_x))) - 5.0)); rt::dset(this->f_S_9_21_Z, NM_width, _v20598); _v20598; });
    ({ rt::Value _v20599 = rt::VB(false); rt::dset(this->f_S_9_21_Z, NM_touchable, _v20599); _v20599; });
    ({ rt::Value _v20600 = rt::trv(rt::VS(g::LS[6053])); rt::dset(this->f_S_9_21_Z, NM_text, _v20600); _v20600; });
    if (rt::eq(rt::dget(this->f_S_9_21_Z, NM_text), rt::VS(g::LS[6054]))) {
        ({ rt::Value _v20601 = rt::VS(g::LS[1293]); rt::dset(this->f_S_9_21_Z, NM_text, _v20601); _v20601; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_9_21_Z));
    ({ rt::Value _v20602 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_U = _v20602; _v20602; });
    ({ rt::Value _v20603 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S_9_21_U, NM_textRendererProperties), NM_textAlign, _v20603); _v20603; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v20604 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(24.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_U, NM_textRendererProperties), NM_elementFormat, _v20604); _v20604; });
        ({ rt::Value _v20605 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(24.0), rt::V(16515072.0)); rt::dset(rt::dget(this->f_S_9_21_U, NM_textRendererProperties), NM_disabledElementFormat, _v20605); _v20605; });
    } else {
        ({ rt::Value _v20606 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(14.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_U, NM_textRendererProperties), NM_elementFormat, _v20606); _v20606; });
        ({ rt::Value _v20607 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(14.0), rt::V(16515072.0)); rt::dset(rt::dget(this->f_S_9_21_U, NM_textRendererProperties), NM_disabledElementFormat, _v20607); _v20607; });
    }
    ({ rt::Value _v20608 = rt::add(rt::add(rt::dget(this->f_S__5e__21__23_, NM_x), rt::dget(this->f_S__5e__21__23_, NM_width)), rt::V(5.0)); rt::dset(this->f_S_9_21_U, NM_x, _v20608); _v20608; });
    ({ rt::Value _v20609 = rt::V(40.0); rt::dset(this->f_S_9_21_U, NM_y, _v20609); _v20609; });
    ({ rt::Value _v20610 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S_9_21_U, NM_x))) - 5.0)); rt::dset(this->f_S_9_21_U, NM_width, _v20610); _v20610; });
    ({ rt::Value _v20611 = rt::VB(false); rt::dset(this->f_S_9_21_U, NM_touchable, _v20611); _v20611; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_9_21_U));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    return rt::NUL;
}
rt::Value C_S__40__21_J::m_S__21__21_G() {
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    double l_A__loc4_ = NAN;
    bool l_A__loc1_ = false;
    RT_FN("S__40__21_J.S__21__21_G");
    (void)(this->C_S_6_2b_::m_S__21__21_G());
    (l_A__loc3_ = rt::toint_d(1.0));
    {
        rt::Value _sw20612 = rt::V((double)(g::SV.C_S_8G__S_7_21_N));
        int _c20613 = -1;
        if (_c20613 == -1 && rt::strict_eq(_sw20612, rt::V((double)(g::SV.C_S_3Y__S__60__3b_)))) _c20613 = 0;
        if (_c20613 == -1 && rt::strict_eq(_sw20612, rt::V((double)(g::SV.C_S_3Y__S__3f_6)))) _c20613 = 1;
        if (_c20613 == -1 && rt::strict_eq(_sw20612, rt::V((double)(g::SV.C_S_3Y__S__5d__2c_)))) _c20613 = 2;
        if (_c20613 == -1 && rt::strict_eq(_sw20612, rt::V((double)(g::SV.C_S_3Y__S_9_22__2b_)))) _c20613 = 3;
        if (_c20613 == -1 && rt::strict_eq(_sw20612, rt::V((double)(g::SV.C_S_3Y__S__23__21_S)))) _c20613 = 4;
        if (_c20613 == -1) _c20613 = 5;
        switch (_c20613) {
        case 0: {
            (l_A__loc3_ = rt::toint_d(10.0));
            break;
        }
        case 1: {
            (l_A__loc3_ = rt::toint_d(100.0));
            break;
        }
        case 2: {
            (l_A__loc3_ = rt::toint_d(1000.0));
            break;
        }
        case 3: {
            (l_A__loc3_ = ((int32_t)(C_S__26_c::sm_S__5d__22__27_())));
            break;
        }
        case 4: {
            (l_A__loc3_ = rt::toint_d(10000.0));
        }
        default: break;
        }
    }
    (l_A__loc2_ = rt::dict_lit({{rt::VS(g::LS[260]), rt::V(0.0)}}));
    (l_A__loc4_ = C_S__23__21__21_::sm_S__23__21__3f_(l_A__loc3_, ((((double)(g::SV.C_S_8G__S_7_21_N)) == ((double)(g::SV.C_S_3Y__S__23__21_S))) ? C_S_8G::sg_S__40_e() : (-1.0)), l_A__loc2_));
    (l_A__loc1_ = ({ bool _t20614 = (!rt::eq(rt::V((double)(this->f_S_7_21_b)), rt::arr_at(g::SV.C_S_8G__S_4P, 0.0))); _t20614 ? _t20614 : (bool)((!(this->f_S__20_z == (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)))))); }));
    if (((!(this->f_S__2c_6 == l_A__loc4_)) || l_A__loc1_)) {
        ({ rt::Value _v20615 = rt::arr_at(g::SV.C_S_8G__S_4P, 0.0); this->f_S_7_21_b = rt::toint(_v20615); _v20615; });
        ({ bool _v20616 = rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)); this->f_S__20_z = _v20616; _v20616; });
        ({ double _v20617 = l_A__loc4_; this->f_S__2c_6 = _v20617; _v20617; });
        ({ rt::Value _v20618 = C_S__26_c::sm_S_8_21_Z(l_A__loc4_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()); rt::dset(this->f_S_9_21_U, NM_text, _v20618); _v20618; });
        (void)(({ rt::Value _o20625 = (({ rt::Value _t20624 = ({ rt::Value _o20622 = (({ rt::Value _t20621 = ({ rt::Value _o20619 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20620 = rt::as_ptr<C_S__20_g>(_o20619); _p20620 ? _p20620->m_S__2b__21__2c_(rt::touint_d(9.0)) : rt::dcallv(_o20619, NM_S__2b__21__2c_, rt::V(9.0)); }); rt::is_class(_t20621, C_S_2A::CI) ? _t20621 : rt::NUL; })); C_S_2A* _p20623 = rt::as_ptr<C_S_2A>(_o20622); _p20623 ? _p20623->m_S__5e__21_T() : rt::dcallv(_o20622, NM_S__5e__21_T); }); rt::is_class(_t20624, C_S_3Y::CI) ? _t20624 : rt::NUL; })); C_S_3Y* _p20626 = rt::as_ptr<C_S_3Y>(_o20625); _p20626 ? _p20626->m_S_9_21__3e_(rt::tonum(rt::idx_get(l_A__loc2_, rt::VS(g::LS[260])))) : rt::dcallv(_o20625, NM_S_9_21__3e_, rt::idx_get(l_A__loc2_, rt::VS(g::LS[260]))); }));
    }
    ({ rt::Value _v20628 = ({ rt::Value _v20627 = rt::VB((this->f_S__2c_6 <= C_S_8G::sg_S__40_e())); rt::dset(this->f_S_9_21_U, NM_isEnabled, _v20627); _v20627; }); this->s_isEnabled(rt::T(_v20628)); _v20628; });
    return rt::NUL;
}
bool C_S__40__21_J::dm_S_8_21_Q_0() { return false; }
bool C_S__40__21_J::dm_S_8_21_Q_1() { return false; }
rt::Value C_S__40__21_J::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S__40__21_J.S_8_21_Q");
    (void)(this->m_S__21__21_G());
    if ((!this->g_isEnabled())) {
        return rt::NUL;
    }
    (void)(({ rt::Value _o20629 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p20630 = rt::as_ptr<C_S_8G>(_o20629); _p20630 ? _p20630->m_S__2c_k(C_S_8G::sm_S__21__21_H(g::SV.C_S__5b_9__id), l_param1, l_param2) : rt::dcallv(_o20629, NM_S__2c_k, C_S_8G::sm_S__21__21_H(g::SV.C_S__5b_9__id), rt::VB(l_param1), rt::VB(l_param2)); }));
    (void)(this->m_S__21__21_G());
    (void)(({ rt::Value _o20634 = (({ rt::Value _t20633 = ({ rt::Value _o20631 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20632 = rt::as_ptr<C_S__20_g>(_o20631); _p20632 ? _p20632->m_S__2b__21__2c_(rt::touint_d(9.0)) : rt::dcallv(_o20631, NM_S__2b__21__2c_, rt::V(9.0)); }); rt::is_class(_t20633, C_S_2A::CI) ? _t20633 : rt::NUL; })); C_S_2A* _p20635 = rt::as_ptr<C_S_2A>(_o20634); _p20635 ? _p20635->m_S__3e_o() : rt::dcallv(_o20634, NM_S__3e_o); }));
    return rt::NUL;
}
C_S__40__21_J* C_S__40__21_J::alloc_() {
    C_S__40__21_J* o = rt::make<C_S__40__21_J>();
    return o;
}
rt::Value C_S__40__21_J::mk_(rt::Value* a, int n) {
    C_S__40__21_J* o = alloc_();
    o->C_S__40__21_J::ctor_();
    return rt::VO(o);
}
bool C_S__40__21_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d__21__2c_: out = f_S__2d__21__2c_; return true;
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S_9_21_U: out = f_S_9_21_U; return true;
    case NM_S__2c_6: out = rt::V(f_S__2c_6); return true;
    case NM_S_7_21_b: out = rt::V((double)(f_S_7_21_b)); return true;
    case NM_S__20_z: out = rt::VB(f_S__20_z); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S__40__21_J::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d__21__2c_: f_S__2d__21__2c_ = v; return true;
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    case NM_S_9_21_Z: f_S_9_21_Z = v; return true;
    case NM_S_9_21_U: f_S_9_21_U = v; return true;
    case NM_S__2c_6: f_S__2c_6 = rt::tonum(v); return true;
    case NM_S_7_21_b: f_S_7_21_b = rt::toint(v); return true;
    case NM_S__20_z: f_S__20_z = rt::T(v); return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S__40__21_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S__40__21_J::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S__40__21_J::dm_S_8_21_Q_1())); return true;
    case NM_S__2d__21__2c_: { rt::Value f = f_S__2d__21__2c_; out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_U: { rt::Value f = f_S_9_21_U; out = rt::call_value(f, a, n); return true; }
    case NM_S__2c_6: { rt::Value f = rt::V(f_S__2c_6); out = rt::call_value(f, a, n); return true; }
    case NM_S_7_21_b: { rt::Value f = rt::V((double)(f_S_7_21_b)); out = rt::call_value(f, a, n); return true; }
    case NM_S__20_z: { rt::Value f = rt::VB(f_S__20_z); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S__40__21_J::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__2d__21__2c_: return false;
    case NM_S__5e__21__23_: return false;
    case NM_S_9_21_Z: return false;
    case NM_S_9_21_U: return false;
    case NM_S__2c_6: return false;
    case NM_S_7_21_b: return false;
    case NM_S__20_z: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S__40__21_J::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21_J::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21_J::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__21__3c_::ctor_() {
    RT_FN("S__5e__21__3c_.S__5e__21__3c_");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S__5e__21__3c_::m_S__2b__21_R() {
    RT_FN("S__5e__21__3c_.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__26_E), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_4), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_8x), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    ({ rt::Value _v20636 = rt::V((g::SV.C_S__20_g__S__22_g ? 175.0 : 250.0)); rt::dset(rt::VO(this), NM_width, _v20636); _v20636; });
    ({ rt::Value _v20637 = rt::V((g::SV.C_S__20_g__S__22_g ? 35.0 : 40.0)); rt::dset(rt::VO(this), NM_height, _v20637); _v20637; });
    ({ rt::Value _v20638 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_Z = _v20638; _v20638; });
    ({ rt::Value _v20639 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_textAlign, _v20639); _v20639; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v20640 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(((((double)(g::SV.C_Translation__locale)) == 5.0) ? 28.0 : 34.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20640); _v20640; });
        ({ rt::Value _v20641 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(((((double)(g::SV.C_Translation__locale)) == 5.0) ? 28.0 : 34.0)), rt::V(16185078.0), rt::V(0.5)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_disabledElementFormat, _v20641); _v20641; });
    } else {
        ({ rt::Value _v20642 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(((((double)(g::SV.C_Translation__locale)) == 2.0) ? 18.0 : 20.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v20642); _v20642; });
        ({ rt::Value _v20643 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(((((double)(g::SV.C_Translation__locale)) == 2.0) ? 18.0 : 20.0)), rt::V(16185078.0), rt::V(0.5)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_disabledElementFormat, _v20643); _v20643; });
        (void)(C_S_99::sm_S__3d__21_7(this->f_S_9_21_Z));
    }
    ({ rt::Value _v20644 = rt::V((g::SV.C_S__20_g__S__22_g ? 11.0 : 4.0)); rt::dset(this->f_S_9_21_Z, NM_y, _v20644); _v20644; });
    ({ rt::Value _v20645 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S_9_21_Z, NM_width, _v20645); _v20645; });
    ({ rt::Value _v20646 = rt::dget(rt::VO(this), NM_height); rt::dset(this->f_S_9_21_Z, NM_height, _v20646); _v20646; });
    ({ rt::Value _v20647 = rt::trv(rt::VS(g::LS[6055])); rt::dset(this->f_S_9_21_Z, NM_text, _v20647); _v20647; });
    ({ rt::Value _v20648 = rt::VB(false); rt::dset(this->f_S_9_21_Z, NM_touchable, _v20648); _v20648; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_9_21_Z));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    ({ rt::Value _v20650 = ({ C_S__2d_N* _n20649 = C_S__2d_N::alloc_(); _n20649->C_S__2d_N::ctor_(); rt::VO(_n20649); }); this->f_S_5_21_S = _v20650; _v20650; });
    (void)(({ rt::Value _o20651 = this->f_S_5_21_S; C_S__2d_N* _p20652 = rt::as_ptr<C_S__2d_N>(_o20651); _p20652 ? _p20652->m_S__2b__21_R() : rt::dcallv(_o20651, NM_S__2b__21_R); }));
    return rt::NUL;
}
bool C_S__5e__21__3c_::dm_S_8_21_Q_0() { return false; }
bool C_S__5e__21__3c_::dm_S_8_21_Q_1() { return false; }
rt::Value C_S__5e__21__3c_::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S__5e__21__3c_.S_8_21_Q");
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    (void)(({ rt::Value _o20653 = this->f_S_5_21_S; C_S__2d_N* _p20654 = rt::as_ptr<C_S__2d_N>(_o20653); _p20654 ? _p20654->m_S__20__21__2b_() : rt::dcallv(_o20653, NM_S__20__21__2b_); }));
    return rt::NUL;
}
C_S__5e__21__3c_* C_S__5e__21__3c_::alloc_() {
    C_S__5e__21__3c_* o = rt::make<C_S__5e__21__3c_>();
    return o;
}
rt::Value C_S__5e__21__3c_::mk_(rt::Value* a, int n) {
    C_S__5e__21__3c_* o = alloc_();
    o->C_S__5e__21__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__5e__21__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S_5_21_S: out = f_S_5_21_S; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S__5e__21__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21_Z: f_S_9_21_Z = v; return true;
    case NM_S_5_21_S: f_S_5_21_S = v; return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S__5e__21__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S__5e__21__3c_::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S__5e__21__3c_::dm_S_8_21_Q_1())); return true;
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S_5_21_S: { rt::Value f = f_S_5_21_S; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S__5e__21__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_8_21_Q: return true;
    case NM_S_9_21_Z: return false;
    case NM_S_5_21_S: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S__5e__21__3c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__21__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__21__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__21__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e_C::ctor_() {
    RT_FN("S__5e_C.S__5e_C");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S__5e_C::m_S__2b__21_R() {
    RT_FN("S__5e_C.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5d__23_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__27__21__26_), rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_U), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    ({ rt::Value _v20656 = ({ rt::Value _v20655 = rt::V(40.0); rt::dset(rt::VO(this), NM_height, _v20655); _v20655; }); rt::dset(rt::VO(this), NM_width, _v20656); _v20656; });
    ({ rt::Value _v20658 = ({ rt::Value _v20657 = rt::add(rt::dget(rt::VO(this), NM_width), rt::V(10.0)); rt::dset(rt::VO(this), NM_minTouchHeight, _v20657); _v20657; }); rt::dset(rt::VO(this), NM_minTouchWidth, _v20658); _v20658; });
    ({ rt::Value _v20659 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[6056]))); this->f_S__5e__21__23_ = _v20659; _v20659; });
    ({ rt::Value _v20661 = ({ rt::Value _v20660 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S__5e__21__23_, NM_height, _v20660); _v20660; }); rt::dset(this->f_S__5e__21__23_, NM_width, _v20661); _v20661; });
    ({ rt::Value _v20663 = ({ rt::Value _v20662 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S__5e__21__23_, NM_width)))) / 2.0)); rt::dset(this->f_S__5e__21__23_, NM_y, _v20662); _v20662; }); rt::dset(this->f_S__5e__21__23_, NM_x, _v20663); _v20663; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    (void)(rt::dcallv(rt::VO(this), NM_flatten));
    return rt::NUL;
}
bool C_S__5e_C::dm_S_8_21_Q_0() { return false; }
bool C_S__5e_C::dm_S_8_21_Q_1() { return false; }
rt::Value C_S__5e_C::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc4_ = NAN;
    RT_FN("S__5e_C.S_8_21_Q");
    (void)(this->m_S_1_3c_(this->f_S__23__21_G));
    if (g::SV.C_S__20_g__S_3_21_9) {
        return rt::NUL;
    }
    (l_A__loc4_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 125.0), rt::V(1.0))));
    ({ rt::Value _v20664 = rt::V(l_A__loc4_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(125.0), _v20664); });
    (void)(this->m_S_4_21__5d_());
    return rt::NUL;
}
rt::Value C_S__5e_C::m_S__5b_i() {
    RT_FN("S__5e_C.S__5b_i");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6057])));
    return rt::NUL;
}
rt::Value C_S__5e_C::m_S_9_21_0() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5e_C.S_9_21_0");
    (l_A__loc1_ = rt::slot_string(this->m_S__5d_O()));
    if ((!rt::eq(l_A__loc1_, rt::VS(g::LS[113])))) {
        return rt::slot_string(rt::add(rt::add(l_A__loc1_, rt::VS(g::LS[8])), this->m_S__2b_E()));
    }
    return rt::slot_string(this->m_S__2b_E());
    return rt::NUL;
}
bool C_S__5e_C::m_S__26_B() {
    RT_FN("S__5e_C.S__26_B");
    return false;
    return false;
}
rt::Value C_S__5e_C::m_S__5d_O() {
    RT_FN("S__5e_C.S__5d_O");
    if ((((double)(C_S_8G::sg_S_8_21_H())) == 0.0)) {
        if ((C_S_8G::sg_S__22__21_0() == 0.0)) {
            if ((C_S__26_c::sm_S_0_23_(C_S__26_c::dsm_S_0_23__0(), C_S__26_c::dsm_S_0_23__1()) < 1.0)) {
                return rt::slot_string(rt::trv(rt::VS(g::LS[6058])));
            }
            if ((!C_S_8G::sm_S__3f__21_L(rt::trv(rt::VS(g::LS[1498]))))) {
                return rt::slot_string(rt::trv(rt::VS(g::LS[6059])));
            }
            if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0)) {
                return rt::slot_string(rt::trv(rt::VS(g::LS[6060])));
            }
            if ((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0))) {
                return rt::slot_string(rt::trv(rt::VS(g::LS[6061])));
            }
            if ((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) {
                return rt::slot_string(rt::trv(rt::VS(g::LS[6062])));
            }
        }
        if (((C_S_8G::sg_S__22__21_0() >= 10.0) && (C_S_8G::sg_S__22__21_0() < 1000000000.0))) {
            return rt::slot_string(rt::trv(rt::VS(g::LS[6063])));
        }
        if (((C_S_8G::sg_S__22__21_0() >= 1000000000.0) && (!C_S__26_c::sm_S__5b_Q()))) {
            return rt::slot_string(rt::trv(rt::VS(g::LS[6064])));
        }
        if ((C_S__26_c::sm_S__5b_Q() && (!(({ bool _t20665 = C_S_8G::sm_S__3c_P(g::SV.C_S_3N__id); _t20665 ? _t20665 : (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21__3b___id)); }) || C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id))))) {
            return rt::slot_string(rt::trv(rt::VS(g::LS[6065])));
        }
        if (((({ bool _t20667 = ({ bool _t20666 = C_S_8G::sm_S__3c_P(g::SV.C_S_3N__id); _t20666 ? _t20666 : (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21__3b___id)); }); _t20667 ? _t20667 : (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id)); })) && (!(({ bool _t20668 = C_S_8G::sm_S__3c_P(g::SV.C_S_3N__id); _t20668 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21__3b___id)) : _t20668; }) && C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id))))) {
            return rt::slot_string(rt::trv(rt::VS(g::LS[6066])));
        }
        if ((({ bool _t20670 = ({ bool _t20669 = C_S_8G::sm_S__3c_P(g::SV.C_S_3N__id); _t20669 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21__3b___id)) : _t20669; }); _t20670 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id)) : _t20670; }) && (!C_S_8G::sm_S__3c_P(g::SV.C_S_2J__id)))) {
            return rt::slot_string(rt::trv(rt::VS(g::LS[6067])));
        }
        return rt::slot_string(rt::trv(rt::VS(g::LS[6068])));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 3.0)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[6069])));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) >= 3.0) && (((double)(C_S_8G::sg_S_8_21_H())) < 16.0))) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[6070])));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) >= 16.0) && (((double)(C_S_8G::sg_S_8_21_H())) < 39.0))) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[6071])));
    }
    if (((((double)(C_S_8G::sg_S__2c_P())) >= 1.0) && (((double)(C_S_8G::sg_S_8_21_H())) < 46.0))) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[6072])));
    }
    if ((({ bool _t20671 = (((double)(C_S_8G::sg_S_8_21_H())) >= 46.0); _t20671 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 1.0)) : _t20671; }) && (!C_S_8G::sm_S__3c_P(g::SV.C_S__5b_r__id)))) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[6073])));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) >= 60.0) && (((double)(C_S_8G::sg_S__2c_P())) < 2.0))) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[6074])));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) >= 255.0) && (!C_S_8G::sm_S__3c_P(g::SV.C_S__22__22_I__id)))) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[6075])));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
rt::Value C_S__5e_C::m_S__2b_E() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5e_C.S__2b_E");
    (l_A__loc1_ = rt::new_vectorv(rt::E_STR));
    (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6076]))));
    (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6077]))));
    (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6078]))));
    if ((!g::SV.C_S__20_g__S__22_g)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6079]))));
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6080]))));
    }
    if ((!rt::T(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_isDesktop)))) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6081]))));
    }
    if (rt::lt(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 16.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 16.0)), rt::V(60000.0))) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6082]))));
    }
    if ((C_S_8G::sg_S__22__21_0() >= 1000000000.0)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6083]))));
    }
    if ((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(16.0)) <= 60000.0)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6084]))));
    }
    if ((C_S_8G::sg_S__22__21_0() >= 1.0)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6085]))));
    }
    if (C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6086]))));
    }
    if ((C_S_8G::sg_S__3c__21__27_() >= 1.0)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6087]))));
    }
    if (((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0))) && (((double)(C_S_8G::sg_S__2c_P())) < 4.0))) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6088]))));
    }
    if (C_S__26_c::sm_S__5b_Q()) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6089]))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 7.0)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6090]))));
    }
    if (C_S__26_c::sm_S_9X()) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6091]))));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) >= 3.0) && (((double)(C_S_8G::sg_S_8_21_H())) < 16.0))) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6092]))));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) >= 16.0) && (((double)(C_S_8G::sg_S_8_21_H())) < 40.0))) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6093]))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 42.0)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6094]))));
    }
    if (((((double)(C_S_8G::sg_S__2c_P())) >= 1.0) && (((double)(C_S_8G::sg_S_8_21_H())) < 100.0))) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6095]))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 100.0)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6096]))));
    }
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6097]))));
    }
    if ((((double)(C_S__26_c::sm_S__40__22_M())) > 0.0)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6098]))));
    }
    if ((rt::eq(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__3d_x), rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S_7_21_G)) || rt::eq(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__3d_x), rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S_6_3d_)))) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::trv(rt::VS(g::LS[6099]))));
    }
    return rt::slot_string(rt::arr_at(l_A__loc1_, rt::m_floor(C_S__26_c::sm_S__3b__21__2c_(0.0, rt::alen(l_A__loc1_)))));
    return rt::NUL;
}
C_S__5e_C* C_S__5e_C::alloc_() {
    C_S__5e_C* o = rt::make<C_S__5e_C>();
    return o;
}
rt::Value C_S__5e_C::mk_(rt::Value* a, int n) {
    C_S__5e_C* o = alloc_();
    o->C_S__5e_C::ctor_();
    return rt::VO(o);
}
bool C_S__5e_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5b_i: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21_0: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__26_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5d_O: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b_E: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S__5e_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S__5e_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S__5e_C::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S__5e_C::dm_S_8_21_Q_1())); return true;
    case NM_S__5b_i: out = m_S__5b_i(); return true;
    case NM_S_9_21_0: out = m_S_9_21_0(); return true;
    case NM_S__26_B: out = rt::VB(m_S__26_B()); return true;
    case NM_S__5d_O: out = m_S__5d_O(); return true;
    case NM_S__2b_E: out = m_S__2b_E(); return true;
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S__5e_C::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__5b_i: return true;
    case NM_S_9_21_0: return true;
    case NM_S__26_B: return true;
    case NM_S__5d_O: return true;
    case NM_S__2b_E: return true;
    case NM_S__5e__21__23_: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S__5e_C::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e_C::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e_C::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21_K::ctor_() {
    RT_FN("S__20__21_K.S__20__21_K");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20672 = 580.0; this->f_S_6_21_Z = rt::touint_d(_v20672); _v20672; });
    ({ rt::Value _v20673 = rt::trv(rt::VS(g::LS[6100])); this->f_S_1i = rt::slot_string(_v20673); _v20673; });
    ({ rt::Value _v20674 = rt::VS(g::LS[6101]); this->f_S__5e__21__23_ = rt::slot_string(_v20674); _v20674; });
    ({ double _v20675 = 1.0; this->f_S__3e__3d_ = _v20675; _v20675; });
    ({ double _v20676 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20676); _v20676; });
}
rt::Value C_S__20__21_K::m_S__40__22_() {
    RT_FN("S__20__21_K.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6102]), C_S__26_c::sm_S_6_21_T(C_S__20__21_K::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__20__21_K::g_S__2d_6() {
    RT_FN("S__20__21_K.S__2d_6_get");
    return ({ bool _t20677 = (((double)(C_PlayFab::sg_season())) == 5.0); _t20677 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 0.0), rt::V(this->f_S__3e__3d_))) : _t20677; });
    return false;
}
bool C_S__20__21_K::g_S__26_8() {
    RT_FN("S__20__21_K.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 5.0);
    return false;
}
double C_S__20__21_K::sm_S__27__21_b() {
    RT_FN("S__20__21_K.S__27__21_b");
    return ((((double)(C_PlayFab::sg_season())) == 5.0) ? ((0.003 * ((((double)(C_S__23__21__21_::sg_S_8_21_H())) + 1.0))) * rt::m_pow((((C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), true, C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()) + (g::SV.C_S__23__21__21___S_2_21_P / 2.0))) * ((((((double)(C_S__23__21__21_::sg_S_8_21_H())) + 1.0)) / 2.5))), 0.7)) : 0.0);
    return 0.0;
}
C_S__20__21_K* C_S__20__21_K::alloc_() {
    C_S__20__21_K* o = rt::make<C_S__20__21_K>();
    return o;
}
rt::Value C_S__20__21_K::mk_(rt::Value* a, int n) {
    C_S__20__21_K* o = alloc_();
    o->C_S__20__21_K::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__21_K::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__21_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__21_K::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__21_K::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__20__21_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_K__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__21_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__21_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__20__22_2::ctor_() {
    RT_FN("S__20__22_2.S__20__22_2");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20678 = 1014.0; this->f_S_6_21_Z = rt::touint_d(_v20678); _v20678; });
    ({ rt::Value _v20679 = rt::trv(rt::VS(g::LS[6103])); this->f_S_1i = rt::slot_string(_v20679); _v20679; });
    ({ rt::Value _v20680 = rt::VS(g::LS[6104]); this->f_S__5e__21__23_ = rt::slot_string(_v20680); _v20680; });
    ({ rt::Value _v20681 = rt::VS(g::LS[6105]); this->f_S__3f__21__3d_ = rt::slot_string(_v20681); _v20681; });
    ({ double _v20682 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20682); _v20682; });
}
rt::Value C_S__20__22_2::m_S__40__22_() {
    RT_FN("S__20__22_2.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6106]), C_S__26_c::sm_S_1_2c_(g::SV.C_S__25__21_n__id), C_S__26_c::sm_S_8_21_Z(1000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__20__22_2::g_S__2d_6() {
    RT_FN("S__20__22_2.S__2d_6_get");
    return ({ bool _t20685 = rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 28.0), rt::V(10.0)); _t20685 ? (bool)(({ rt::Value _o20683 = C_S_8G::sm_S__21__21_H(g::SV.C_S__27__22_1__id); C_S__60_6* _p20684 = rt::as_ptr<C_S__60_6>(_o20683); _p20684 ? _p20684->g_S__2d_6() : rt::T(rt::dget(_o20683, NM_S__2d_6)); })) : _t20685; });
    return false;
}
bool C_S__20__22_2::g_S__26_8() {
    RT_FN("S__20__22_2.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
C_S__20__22_2* C_S__20__22_2::alloc_() {
    C_S__20__22_2* o = rt::make<C_S__20__22_2>();
    return o;
}
rt::Value C_S__20__22_2::mk_(rt::Value* a, int n) {
    C_S__20__22_2* o = alloc_();
    o->C_S__20__22_2::ctor_();
    return rt::VO(o);
}
bool C_S__20__22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__22_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__22_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__22_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22_2__id)); return true;
    case NM_S__3f__22_1: out = rt::V(g::SV.C_S__20__22_2__S__3f__22_1); return true;
    default: return false;
    }
}
bool C_S__20__22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22_2__id = rt::touint(v); return true;
    case NM_S__3f__22_1: g::SV.C_S__20__22_2__S__3f__22_1 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__20__22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__22_N::ctor_() {
    RT_FN("S__20__22_N.S__20__22_N");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20686 = 1220.0; this->f_S_6_21_Z = rt::touint_d(_v20686); _v20686; });
    ({ rt::Value _v20687 = rt::trv(rt::VS(g::LS[6107])); this->f_S_1i = rt::slot_string(_v20687); _v20687; });
    ({ rt::Value _v20688 = rt::VS(g::LS[6108]); this->f_S__5e__21__23_ = rt::slot_string(_v20688); _v20688; });
    ({ double _v20689 = 1.0; this->f_S__3e__3d_ = _v20689; _v20689; });
    ({ double _v20690 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20690); _v20690; });
}
rt::Value C_S__20__22_N::m_S__40__22_() {
    RT_FN("S__20__22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5239]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__20__22_N::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__20__22_N::g_S__2d_6() {
    RT_FN("S__20__22_N.S__2d_6_get");
    return ({ bool _t20691 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20691 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__21__22_N__id)) : _t20691; });
    return false;
}
bool C_S__20__22_N::g_S__26_8() {
    RT_FN("S__20__22_N.S__26_8_get");
    return ({ bool _t20692 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20692 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__21__22_N__id)) : _t20692; });
    return false;
}
double C_S__20__22_N::sm_S__26_s() {
    RT_FN("S__20__22_N.S__26_s");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 25.0 : 0.0);
    return 0.0;
}
C_S__20__22_N* C_S__20__22_N::alloc_() {
    C_S__20__22_N* o = rt::make<C_S__20__22_N>();
    return o;
}
rt::Value C_S__20__22_N::mk_(rt::Value* a, int n) {
    C_S__20__22_N* o = alloc_();
    o->C_S__20__22_N::ctor_();
    return rt::VO(o);
}
bool C_S__20__22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__22_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__22_N::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__20__22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22_N__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22_N__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__21__21_N::ctor_(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__21__21_N.S__21__21_N");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20693 = 563.0; this->f_S_6_21_Z = rt::touint_d(_v20693); _v20693; });
    ({ rt::Value _v20694 = l_param1; this->f_S_1i = rt::slot_string(_v20694); _v20694; });
    ({ rt::Value _v20695 = l_param2; this->f_S__3b_y = rt::slot_string(_v20695); _v20695; });
    ({ rt::Value _v20697 = ({ rt::Value _v20696 = rt::VS(g::LS[6110]); this->f_S__40_1 = rt::slot_string(_v20696); _v20696; }); this->f_S__3f__21__3d_ = rt::slot_string(_v20697); _v20697; });
    ({ int32_t _v20698 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v20698; _v20698; });
    ({ rt::Value _v20699 = rt::add(rt::VS(g::LS[6111]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v20699); _v20699; });
    ({ double _v20700 = 1.0; this->f_S__3e__3d_ = _v20700; _v20700; });
    ({ bool _v20701 = false; this->f_S__2b__21_9 = _v20701; _v20701; });
    ({ bool _v20702 = true; this->f_S__3f_T = _v20702; _v20702; });
    ({ bool _v20703 = false; this->f_S_3e = _v20703; _v20703; });
    ({ double _v20704 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20704); _v20704; });
}
rt::Value C_S__21__21_N::m_S__40__22_() {
    RT_FN("S__21__21_N.S__40__22_");
    return rt::slot_string(rt::dcallv(this->f_S__3b_y, rt::N_replace, rt::VS(g::LS[6112]), C_S__26_c::sm_S_8_21_Z(1000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__21__21_N::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__21__21_N.S_6r");
    ({ rt::Value _v20705 = rt::V(0.0); rt::idx_set(g::SV.C_S_8G__S_6_21__2d_, rt::V(7.0), _v20705); });
    (l_A__loc2_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)) - 1.0));
    ({ rt::Value _v20706 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(13.0), _v20706); });
    return rt::NUL;
}
bool C_S__21__21_N::g_S__2d_6() {
    RT_FN("S__21__21_N.S__2d_6_get");
    return ({ bool _t20708 = (({ bool _t20707 = (((double)(this->f_S__22__21_U)) == 1.0); _t20707 ? _t20707 : (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 7.0), rt::V(10.0))); })); _t20708 ? (bool)(C_S__26_c::sm_S_53()) : _t20708; });
    return false;
}
bool C_S__21__21_N::g_S__26_8() {
    RT_FN("S__21__21_N.S__26_8_get");
    return C_S__26_c::sm_S_53();
    return false;
}
C_S__21__21_N* C_S__21__21_N::alloc_() {
    C_S__21__21_N* o = rt::make<C_S__21__21_N>();
    return o;
}
rt::Value C_S__21__21_N::mk_(rt::Value* a, int n) {
    C_S__21__21_N* o = alloc_();
    o->C_S__21__21_N::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF));
    return rt::VO(o);
}
bool C_S__21__21_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__3b_y: out = f_S__3b_y; return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__21__21_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3b_y: f_S__3b_y = rt::slot_string(v); return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__21__21_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3b_y: { rt::Value f = f_S__3b_y; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__21__21_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    case NM_S__3b_y: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__21__21_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_N::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_N::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__21__3d_::ctor_() {
    RT_FN("S__25__21__3d_.S__25__21__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ bool _v20709 = true; this->f_S__25__21__2c_ = _v20709; _v20709; });
    ({ bool _v20710 = false; this->f_S_3e = _v20710; _v20710; });
}
rt::Value C_S__25__21__3d_::m_S_6r() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S__25__21__3d_.S_6r");
    ({ bool _v20711 = false; this->f_S__3c__21_7 = _v20711; _v20711; });
    ({ rt::Value _o20712 = g::SV.C_S_8G__S_5_21_V; rt::Value _i20713 = rt::V(13.0); rt::Value _v20714 = rt::V((rt::tonum(rt::idx_get(_o20712, _i20713)) - 1.0)); rt::idx_set(_o20712, _i20713, _v20714); _v20714; });
    (l_A__loc1_ = rt::touint_d(rt::m_floor(((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(114.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(117.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(116.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(115.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(118.0))))));
    if (((((double)(l_A__loc1_)) > 0.0) && (rt::mod(((double)(l_A__loc1_)), 100.0) == 0.0))) {
        ({ double _v20715 = (C_S_8G::sg_S__3c__21__27_() + 1.0); C_S_8G::ss_S__3c__21__27_(_v20715); _v20715; });
        ({ rt::Value _o20716 = g::SV.C_S_8G__S_5_21_V; rt::Value _i20717 = rt::V(102.0); rt::Value _v20718 = rt::add(rt::idx_get(_o20716, _i20717), rt::V(1.0)); rt::idx_set(_o20716, _i20717, _v20718); _v20718; });
    }
    return rt::NUL;
}
bool C_S__25__21__3d_::g_S__2d_6() {
    RT_FN("S__25__21__3d_.S__2d_6_get");
    return false;
    return false;
}
C_S__25__21__3d_* C_S__25__21__3d_::alloc_() {
    C_S__25__21__3d_* o = rt::make<C_S__25__21__3d_>();
    return o;
}
rt::Value C_S__25__21__3d_::mk_(rt::Value* a, int n) {
    C_S__25__21__3d_* o = alloc_();
    o->C_S__25__21__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__25__21__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__21__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__21__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__21__3d_::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__21__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__21_T::ctor_() {
    RT_FN("S__21__21_T.S__21__21_T");
    (void)((this->C_S__25__21__3d_::ctor_(), rt::NUL));
    ({ rt::Value _v20719 = rt::trv(rt::VS(g::LS[6113])); this->f_S_1i = rt::slot_string(_v20719); _v20719; });
    ({ rt::Value _v20720 = rt::VS(g::LS[6114]); this->f_S__5e__21__23_ = rt::slot_string(_v20720); _v20720; });
}
rt::Value C_S__21__21_T::m_S__40__22_() {
    RT_FN("S__21__21_T.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6115]), rt::dcallv(rt::V(0.5), rt::N_toFixed, rt::V(1.0)), rt::dcallv(rt::V(C_S__2d__21_Z::sm_S__5e_y()), rt::N_toFixed, rt::V(1.0))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5360]))));
    return rt::NUL;
}
double C_S__21__21_T::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__21__21_T.S__27_B");
    if ((((double)(l_param1)) == 2.0)) {
        return (((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(117.0)) + 1.0)) * 100.0);
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__21__21_T::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__21__21_T.S_6r");
    if ((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(117.0)) >= 500.0)) {
        return rt::NUL;
    }
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 117.0), rt::V(1.0))));
    ({ rt::Value _v20721 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(117.0), _v20721); });
    (void)(this->C_S__25__21__3d_::m_S_6r());
    return rt::NUL;
}
bool C_S__21__21_T::g_S_9_21__25_() {
    RT_FN("S__21__21_T.S_9_21__25__get");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(117.0)) < 500.0);
    return false;
}
C_S__21__21_T* C_S__21__21_T::alloc_() {
    C_S__21__21_T* o = rt::make<C_S__21__21_T>();
    return o;
}
rt::Value C_S__21__21_T::mk_(rt::Value* a, int n) {
    C_S__21__21_T* o = alloc_();
    o->C_S__21__21_T::ctor_();
    return rt::VO(o);
}
bool C_S__21__21_T::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__25__21__3d_::dget(id, out);
}
bool C_S__21__21_T::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__25__21__3d_::dset(id, v);
}
bool C_S__21__21_T::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__25__21__3d_::dcall(id, a, n, out);
}
bool C_S__21__21_T::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__25__21__3d_::dmeth(id);
}
bool C_S__21__21_T::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_T::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21_T__id)); return true;
    default: return false;
    }
}
bool C_S__21__21_T::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21_T__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__21_T::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__22_1::ctor_() {
    RT_FN("S__21__22_1.S__21__22_1");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20722 = 1019.0; this->f_S_6_21_Z = rt::touint_d(_v20722); _v20722; });
    ({ rt::Value _v20723 = rt::trv(rt::VS(g::LS[6116])); this->f_S_1i = rt::slot_string(_v20723); _v20723; });
    ({ rt::Value _v20724 = rt::VS(g::LS[6117]); this->f_S__5e__21__23_ = rt::slot_string(_v20724); _v20724; });
    ({ rt::Value _v20725 = rt::VS(g::LS[6105]); this->f_S__3f__21__3d_ = rt::slot_string(_v20725); _v20725; });
    ({ double _v20726 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20726); _v20726; });
}
rt::Value C_S__21__22_1::m_S__40__22_() {
    RT_FN("S__21__22_1.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6106]), C_S__26_c::sm_S_1_2c_(g::SV.C_S_9_21_n__id), C_S__26_c::sm_S_8_21_Z(1000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__21__22_1::g_S__2d_6() {
    RT_FN("S__21__22_1.S__2d_6_get");
    return ({ bool _t20729 = rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 27.0), rt::V(10.0)); _t20729 ? (bool)(({ rt::Value _o20727 = C_S_8G::sm_S__21__21_H(g::SV.C_S_2_22_2__id); C_S__60_6* _p20728 = rt::as_ptr<C_S__60_6>(_o20727); _p20728 ? _p20728->g_S__2d_6() : rt::T(rt::dget(_o20727, NM_S__2d_6)); })) : _t20729; });
    return false;
}
bool C_S__21__22_1::g_S__26_8() {
    RT_FN("S__21__22_1.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
C_S__21__22_1* C_S__21__22_1::alloc_() {
    C_S__21__22_1* o = rt::make<C_S__21__22_1>();
    return o;
}
rt::Value C_S__21__22_1::mk_(rt::Value* a, int n) {
    C_S__21__22_1* o = alloc_();
    o->C_S__21__22_1::ctor_();
    return rt::VO(o);
}
bool C_S__21__22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__21__22_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__21__22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__21__22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__21__22_1::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22_1__id)); return true;
    case NM_S__3f__22_1: out = rt::V(g::SV.C_S__21__22_1__S__3f__22_1); return true;
    default: return false;
    }
}
bool C_S__21__22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22_1__id = rt::touint(v); return true;
    case NM_S__3f__22_1: g::SV.C_S__21__22_1__S__3f__22_1 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__21__22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__22_M::ctor_() {
    RT_FN("S__21__22_M.S__21__22_M");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20730 = 1213.0; this->f_S_6_21_Z = rt::touint_d(_v20730); _v20730; });
    ({ rt::Value _v20731 = rt::trv(rt::VS(g::LS[6118])); this->f_S_1i = rt::slot_string(_v20731); _v20731; });
    ({ rt::Value _v20732 = rt::VS(g::LS[6119]); this->f_S__5e__21__23_ = rt::slot_string(_v20732); _v20732; });
    ({ double _v20733 = 1.0; this->f_S__3e__3d_ = _v20733; _v20733; });
    ({ double _v20734 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20734); _v20734; });
}
rt::Value C_S__21__22_M::m_S__40__22_() {
    RT_FN("S__21__22_M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6120]), C_S__26_c::sm_S_8_21_Z(C_S__21__22_M::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__21__22_M::g_S__2d_6() {
    RT_FN("S__21__22_M.S__2d_6_get");
    return ({ bool _t20735 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20735 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__60__22_L__id)) : _t20735; });
    return false;
}
bool C_S__21__22_M::g_S__26_8() {
    RT_FN("S__21__22_M.S__26_8_get");
    return ({ bool _t20736 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20736 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__60__22_L__id)) : _t20736; });
    return false;
}
double C_S__21__22_M::sm_S__5e_y() {
    RT_FN("S__21__22_M.S__5e_y");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 10.0 : 0.0);
    return 0.0;
}
C_S__21__22_M* C_S__21__22_M::alloc_() {
    C_S__21__22_M* o = rt::make<C_S__21__22_M>();
    return o;
}
rt::Value C_S__21__22_M::mk_(rt::Value* a, int n) {
    C_S__21__22_M* o = alloc_();
    o->C_S__21__22_M::ctor_();
    return rt::VO(o);
}
bool C_S__21__22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__21__22_M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__21__22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__21__22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__21__22_M::smeth_(int id) {
    switch (id) {
    case NM_S__5e_y: return true;
    default: return false;
    }
}
bool C_S__21__22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22_M__id)); return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5e_y: out = rt::V(sm_S__5e_y()); return true;
    default: return false;
    }
}
void C_S__23__21_5::ctor_() {
    RT_FN("S__23__21_5.S__23__21_5");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20737 = 587.0; this->f_S_6_21_Z = rt::touint_d(_v20737); _v20737; });
    ({ rt::Value _v20738 = rt::trv(rt::VS(g::LS[6121])); this->f_S_1i = rt::slot_string(_v20738); _v20738; });
    ({ rt::Value _v20739 = rt::VS(g::LS[6122]); this->f_S__5e__21__23_ = rt::slot_string(_v20739); _v20739; });
    ({ rt::Value _v20740 = rt::VS(g::LS[6123]); this->f_S__3f__21__3d_ = rt::slot_string(_v20740); _v20740; });
    ({ rt::Value _v20741 = rt::trv(rt::VS(g::LS[6124])); this->f_S_7_23_ = rt::slot_string(_v20741); _v20741; });
    ({ double _v20742 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20742); _v20742; });
    ({ bool _v20743 = false; this->f_S_3e = _v20743; _v20743; });
    ({ bool _v20744 = true; this->f_S_0_21_d = _v20744; _v20744; });
}
double C_S__23__21_5::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__23__21_5.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 8.0))) {
        return 400.0;
    }
    return 0.0;
    return 0.0;
}
bool C_S__23__21_5::g_S__2d_6() {
    RT_FN("S__23__21_5.S__2d_6_get");
    return ({ bool _t20745 = (((double)(C_PlayFab::sg_season())) == 6.0); _t20745 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__23_P__id))) : _t20745; });
    return false;
}
C_S__23__21_5* C_S__23__21_5::alloc_() {
    C_S__23__21_5* o = rt::make<C_S__23__21_5>();
    return o;
}
rt::Value C_S__23__21_5::mk_(rt::Value* a, int n) {
    C_S__23__21_5* o = alloc_();
    o->C_S__23__21_5::ctor_();
    return rt::VO(o);
}
bool C_S__23__21_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__21_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__21_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__21_5::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__21_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21_5__id)); return true;
    default: return false;
    }
}
bool C_S__23__21_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__21_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__21__5e_::ctor_() {
    RT_FN("S__23__21__5e_.S__23__21__5e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20746 = 590.0; this->f_S_6_21_Z = rt::touint_d(_v20746); _v20746; });
    ({ rt::Value _v20747 = rt::trv(rt::VS(g::LS[6125])); this->f_S_1i = rt::slot_string(_v20747); _v20747; });
    ({ rt::Value _v20748 = rt::VS(g::LS[6126]); this->f_S__5e__21__23_ = rt::slot_string(_v20748); _v20748; });
    ({ rt::Value _v20749 = rt::VS(g::LS[5843]); this->f_S__3f__21__3d_ = rt::slot_string(_v20749); _v20749; });
    ({ double _v20750 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20750); _v20750; });
    ({ bool _v20751 = false; this->f_S_3e = _v20751; _v20751; });
    ({ bool _v20752 = true; this->f_S_0_21_d = _v20752; _v20752; });
}
double C_S__23__21__5e_::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__23__21__5e_.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 8.0))) {
        return 2000.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__23__21__5e_::m_S__40__22_() {
    RT_FN("S__23__21__5e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6127]), C_S__26_c::sm_S_8_21_Z(rt::m_abs(C_S__23__21__5e_::sm_S_0_21_T()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__23__21__5e_::g_S__2d_6() {
    RT_FN("S__23__21__5e_.S__2d_6_get");
    return C_S_8G::sm_S_7d(g::SV.C_S__23__21_5__id);
    return false;
}
double C_S__23__21__5e_::sm_S_0_21_T() {
    RT_FN("S__23__21__5e_.S_0_21_T");
    return (((((double)(C_PlayFab::sg_season())) == 6.0) && C_S_8G::sm_S_7d(g::SV.C_S__23__21_5__id)) ? (-50.0) : 0.0);
    return 0.0;
}
C_S__23__21__5e_* C_S__23__21__5e_::alloc_() {
    C_S__23__21__5e_* o = rt::make<C_S__23__21__5e_>();
    return o;
}
rt::Value C_S__23__21__5e_::mk_(rt::Value* a, int n) {
    C_S__23__21__5e_* o = alloc_();
    o->C_S__23__21__5e_::ctor_();
    return rt::VO(o);
}
bool C_S__23__21__5e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__21__5e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__21__5e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__21__5e_::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__21__5e_::smeth_(int id) {
    switch (id) {
    case NM_S_0_21_T: return true;
    default: return false;
    }
}
bool C_S__23__21__5e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21__5e___id)); return true;
    case NM_S_0_21_T: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__21__5e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21__5e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__21__5e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_0_21_T: out = rt::V(sm_S_0_21_T()); return true;
    default: return false;
    }
}
void C_S__23__22_1::ctor_() {
    RT_FN("S__23__22_1.S__23__22_1");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20753 = 1018.0; this->f_S_6_21_Z = rt::touint_d(_v20753); _v20753; });
    ({ rt::Value _v20754 = rt::trv(rt::VS(g::LS[6128])); this->f_S_1i = rt::slot_string(_v20754); _v20754; });
    ({ rt::Value _v20755 = rt::VS(g::LS[6129]); this->f_S__5e__21__23_ = rt::slot_string(_v20755); _v20755; });
    ({ rt::Value _v20756 = rt::VS(g::LS[6105]); this->f_S__3f__21__3d_ = rt::slot_string(_v20756); _v20756; });
    ({ double _v20757 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20757); _v20757; });
}
rt::Value C_S__23__22_1::m_S__40__22_() {
    RT_FN("S__23__22_1.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6130]), C_S__26_c::sm_S_8_21_Z(C_S__23__22_1::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__23__22_1::g_S__2d_6() {
    RT_FN("S__23__22_1.S__2d_6_get");
    return ({ bool _t20760 = rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 27.0), rt::V(5.0)); _t20760 ? (bool)(({ rt::Value _o20758 = C_S_8G::sm_S__21__21_H(g::SV.C_S_2_22_2__id); C_S__60_6* _p20759 = rt::as_ptr<C_S__60_6>(_o20758); _p20759 ? _p20759->g_S__2d_6() : rt::T(rt::dget(_o20758, NM_S__2d_6)); })) : _t20760; });
    return false;
}
bool C_S__23__22_1::g_S__26_8() {
    RT_FN("S__23__22_1.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
double C_S__23__22_1::sm_S__2c__21_G() {
    RT_FN("S__23__22_1.S__2c__21_G");
    return ((((double)(C_PlayFab::sg_season())) == 11.0) ? 10.0 : 0.0);
    return 0.0;
}
C_S__23__22_1* C_S__23__22_1::alloc_() {
    C_S__23__22_1* o = rt::make<C_S__23__22_1>();
    return o;
}
rt::Value C_S__23__22_1::mk_(rt::Value* a, int n) {
    C_S__23__22_1* o = alloc_();
    o->C_S__23__22_1::ctor_();
    return rt::VO(o);
}
bool C_S__23__22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__22_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__22_1::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__23__22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__22_1__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__22_1__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__23__22_K::ctor_() {
    RT_FN("S__23__22_K.S__23__22_K");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20761 = 1202.0; this->f_S_6_21_Z = rt::touint_d(_v20761); _v20761; });
    ({ rt::Value _v20762 = rt::trv(rt::VS(g::LS[6131])); this->f_S_1i = rt::slot_string(_v20762); _v20762; });
    ({ rt::Value _v20763 = rt::VS(g::LS[6132]); this->f_S__5e__21__23_ = rt::slot_string(_v20763); _v20763; });
    ({ double _v20764 = 1.0; this->f_S__3e__3d_ = _v20764; _v20764; });
    ({ double _v20765 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20765); _v20765; });
}
rt::Value C_S__23__22_K::m_S__40__22_() {
    RT_FN("S__23__22_K.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6133]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__23__22_K__S_1_21_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__23__22_K::g_S__2d_6() {
    RT_FN("S__23__22_K.S__2d_6_get");
    return ({ bool _t20766 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20766 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__26__22_K__id)) : _t20766; });
    return false;
}
bool C_S__23__22_K::g_S__26_8() {
    RT_FN("S__23__22_K.S__26_8_get");
    return ({ bool _t20767 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20767 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__26__22_K__id)) : _t20767; });
    return false;
}
double C_S__23__22_K::sm_S__26_s() {
    RT_FN("S__23__22_K.S__26_s");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? g::SV.C_S__23__22_K__S_1_21_S : 0.0);
    return 0.0;
}
C_S__23__22_K* C_S__23__22_K::alloc_() {
    C_S__23__22_K* o = rt::make<C_S__23__22_K>();
    return o;
}
rt::Value C_S__23__22_K::mk_(rt::Value* a, int n) {
    C_S__23__22_K* o = alloc_();
    o->C_S__23__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__23__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__22_K::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__22_K::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__22_K::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__23__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__22_K__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__23__22_K__S_1_21_S); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__22_K__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__23__22_K__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__23__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__23__22_N::ctor_() {
    RT_FN("S__23__22_N.S__23__22_N");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20768 = 1221.0; this->f_S_6_21_Z = rt::touint_d(_v20768); _v20768; });
    ({ rt::Value _v20769 = rt::trv(rt::VS(g::LS[6134])); this->f_S_1i = rt::slot_string(_v20769); _v20769; });
    ({ rt::Value _v20770 = rt::VS(g::LS[6135]); this->f_S__5e__21__23_ = rt::slot_string(_v20770); _v20770; });
    ({ double _v20771 = 1.0; this->f_S__3e__3d_ = _v20771; _v20771; });
    ({ double _v20772 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20772); _v20772; });
}
rt::Value C_S__23__22_N::m_S__40__22_() {
    RT_FN("S__23__22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6136]), C_S__26_c::sm_S_8_21_Z(C_S__23__22_N::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__23__22_N::g_S__2d_6() {
    RT_FN("S__23__22_N.S__2d_6_get");
    return ({ bool _t20773 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20773 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__25__22_N__id)) : _t20773; });
    return false;
}
bool C_S__23__22_N::g_S__26_8() {
    RT_FN("S__23__22_N.S__26_8_get");
    return ({ bool _t20774 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20774 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__25__22_N__id)) : _t20774; });
    return false;
}
double C_S__23__22_N::sm_S__2b__2b_() {
    RT_FN("S__23__22_N.S__2b__2b_");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 50.0 : 0.0);
    return 0.0;
}
C_S__23__22_N* C_S__23__22_N::alloc_() {
    C_S__23__22_N* o = rt::make<C_S__23__22_N>();
    return o;
}
rt::Value C_S__23__22_N::mk_(rt::Value* a, int n) {
    C_S__23__22_N* o = alloc_();
    o->C_S__23__22_N::ctor_();
    return rt::VO(o);
}
bool C_S__23__22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__22_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__22_N::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__23__22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__22_N__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__22_N__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__23_I::ctor_() {
    RT_FN("S__23_I.S__23_I");
    (void)((this->C_S__25__21__3d_::ctor_(), rt::NUL));
    ({ rt::Value _v20775 = rt::trv(rt::VS(g::LS[6137])); this->f_S_1i = rt::slot_string(_v20775); _v20775; });
    ({ rt::Value _v20776 = rt::VS(g::LS[6138]); this->f_S__5e__21__23_ = rt::slot_string(_v20776); _v20776; });
}
rt::Value C_S__23_I::m_S__40__22_() {
    RT_FN("S__23_I.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5363]), C_S__26_c::sm_S_8_21_Z(25.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__2d__21_Z::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5360]))));
    return rt::NUL;
}
double C_S__23_I::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__23_I.S__27_B");
    if ((((double)(l_param1)) == 2.0)) {
        return (((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(116.0)) + 1.0)) * 100.0);
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__23_I::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__23_I.S_6r");
    if ((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(116.0)) >= 500.0)) {
        return rt::NUL;
    }
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 116.0), rt::V(1.0))));
    ({ rt::Value _v20777 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(116.0), _v20777); });
    (void)(this->C_S__25__21__3d_::m_S_6r());
    return rt::NUL;
}
bool C_S__23_I::g_S_9_21__25_() {
    RT_FN("S__23_I.S_9_21__25__get");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(116.0)) < 500.0);
    return false;
}
C_S__23_I* C_S__23_I::alloc_() {
    C_S__23_I* o = rt::make<C_S__23_I>();
    return o;
}
rt::Value C_S__23_I::mk_(rt::Value* a, int n) {
    C_S__23_I* o = alloc_();
    o->C_S__23_I::ctor_();
    return rt::VO(o);
}
bool C_S__23_I::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__25__21__3d_::dget(id, out);
}
bool C_S__23_I::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__25__21__3d_::dset(id, v);
}
bool C_S__23_I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__25__21__3d_::dcall(id, a, n, out);
}
bool C_S__23_I::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__25__21__3d_::dmeth(id);
}
bool C_S__23_I::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23_I::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23_I__id)); return true;
    default: return false;
    }
}
bool C_S__23_I::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23_I__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23_I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23_P::ctor_() {
    RT_FN("S__23_P.S__23_P");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20778 = 591.0; this->f_S_6_21_Z = rt::touint_d(_v20778); _v20778; });
    ({ rt::Value _v20779 = rt::trv(rt::VS(g::LS[6139])); this->f_S_1i = rt::slot_string(_v20779); _v20779; });
    ({ rt::Value _v20780 = rt::VS(g::LS[6140]); this->f_S__5e__21__23_ = rt::slot_string(_v20780); _v20780; });
    ({ rt::Value _v20781 = rt::VS(g::LS[6141]); this->f_S__3f__21__3d_ = rt::slot_string(_v20781); _v20781; });
    ({ rt::Value _v20782 = rt::trv(rt::VS(g::LS[6142])); this->f_S_7_23_ = rt::slot_string(_v20782); _v20782; });
    ({ double _v20783 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20783); _v20783; });
    ({ bool _v20784 = false; this->f_S_3e = _v20784; _v20784; });
    ({ bool _v20785 = true; this->f_S_0_21_d = _v20785; _v20785; });
}
double C_S__23_P::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__23_P.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 9.0))) {
        return 400.0;
    }
    return 0.0;
    return 0.0;
}
bool C_S__23_P::g_S__2d_6() {
    RT_FN("S__23_P.S__2d_6_get");
    return ({ bool _t20786 = (((double)(C_PlayFab::sg_season())) == 6.0); _t20786 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__23__21_5__id))) : _t20786; });
    return false;
}
C_S__23_P* C_S__23_P::alloc_() {
    C_S__23_P* o = rt::make<C_S__23_P>();
    return o;
}
rt::Value C_S__23_P::mk_(rt::Value* a, int n) {
    C_S__23_P* o = alloc_();
    o->C_S__23_P::ctor_();
    return rt::VO(o);
}
bool C_S__23_P::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23_P::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23_P::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23_P::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23_P::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23_P::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23_P__id)); return true;
    default: return false;
    }
}
bool C_S__23_P::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23_P__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23_P::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__21_k::ctor_() {
    RT_FN("S__25__21_k.S__25__21_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20787 = 739.0; this->f_S_6_21_Z = rt::touint_d(_v20787); _v20787; });
    ({ rt::Value _v20788 = rt::trv(rt::VS(g::LS[6143])); this->f_S_1i = rt::slot_string(_v20788); _v20788; });
    ({ rt::Value _v20789 = rt::VS(g::LS[6144]); this->f_S__5e__21__23_ = rt::slot_string(_v20789); _v20789; });
    ({ double _v20790 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v20790); _v20790; });
    ({ double _v20791 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20791); _v20791; });
    ({ bool _v20792 = false; this->f_S_3e = _v20792; _v20792; });
    ({ bool _v20793 = false; this->f_S__40_X = _v20793; _v20793; });
}
rt::Value C_S__25__21_k::m_S__40__22_() {
    RT_FN("S__25__21_k.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6145])));
    return rt::NUL;
}
bool C_S__25__21_k::g_S__2d_6() {
    RT_FN("S__25__21_k.S__2d_6_get");
    return ({ bool _t20795 = ({ bool _t20794 = (((double)(C_PlayFab::sg_season())) == 9.0); _t20794 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t20794; }); _t20795 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__3c__21_k__id))) : _t20795; });
    return false;
}
bool C_S__25__21_k::g_S__26_8() {
    RT_FN("S__25__21_k.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 9.0);
    return false;
}
C_S__25__21_k* C_S__25__21_k::alloc_() {
    C_S__25__21_k* o = rt::make<C_S__25__21_k>();
    return o;
}
rt::Value C_S__25__21_k::mk_(rt::Value* a, int n) {
    C_S__25__21_k* o = alloc_();
    o->C_S__25__21_k::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__21_k::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_k__id)); return true;
    default: return false;
    }
}
bool C_S__25__21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__22__22_::ctor_() {
    RT_FN("S__25__22__22_.S__25__22__22_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20796 = 932.0; this->f_S_6_21_Z = rt::touint_d(_v20796); _v20796; });
    ({ rt::Value _v20797 = rt::trv(rt::VS(g::LS[6146])); this->f_S_1i = rt::slot_string(_v20797); _v20797; });
    ({ rt::Value _v20798 = rt::VS(g::LS[6147]); this->f_S__5e__21__23_ = rt::slot_string(_v20798); _v20798; });
    ({ double _v20799 = 1.0; this->f_S__3e__3d_ = _v20799; _v20799; });
    ({ double _v20800 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20800); _v20800; });
}
rt::Value C_S__25__22__22_::m_S__40__22_() {
    RT_FN("S__25__22__22_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6148]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__25__22__22___S_1_21_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__25__22__22_::g_S__2d_6() {
    RT_FN("S__25__22__22_.S__2d_6_get");
    return ({ bool _t20801 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20801 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__27__22__22___id)) : _t20801; });
    return false;
}
bool C_S__25__22__22_::g_S__26_8() {
    RT_FN("S__25__22__22_.S__26_8_get");
    return ({ bool _t20802 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20802 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__27__22__22___id)) : _t20802; });
    return false;
}
double C_S__25__22__22_::sm_S__26__22__22_() {
    RT_FN("S__25__22__22_.S__26__22__22_");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? g::SV.C_S__25__22__22___S_1_21_S : 0.0);
    return 0.0;
}
C_S__25__22__22_* C_S__25__22__22_::alloc_() {
    C_S__25__22__22_* o = rt::make<C_S__25__22__22_>();
    return o;
}
rt::Value C_S__25__22__22_::mk_(rt::Value* a, int n) {
    C_S__25__22__22_* o = alloc_();
    o->C_S__25__22__22_::ctor_();
    return rt::VO(o);
}
bool C_S__25__22__22_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__22__22_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__22__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__22__22_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__22__22_::smeth_(int id) {
    switch (id) {
    case NM_S__26__22__22_: return true;
    default: return false;
    }
}
bool C_S__25__22__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22__22___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__25__22__22___S_1_21_S); return true;
    case NM_S__26__22__22_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__22__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22__22___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__25__22__22___S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__25__22__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26__22__22_: out = rt::V(sm_S__26__22__22_()); return true;
    default: return false;
    }
}
void C_S__25__22_2::ctor_() {
    RT_FN("S__25__22_2.S__25__22_2");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20803 = 1008.0; this->f_S_6_21_Z = rt::touint_d(_v20803); _v20803; });
    ({ rt::Value _v20804 = rt::trv(rt::VS(g::LS[6149])); this->f_S_1i = rt::slot_string(_v20804); _v20804; });
    ({ rt::Value _v20805 = rt::VS(g::LS[6150]); this->f_S__5e__21__23_ = rt::slot_string(_v20805); _v20805; });
    ({ rt::Value _v20806 = rt::VS(g::LS[6105]); this->f_S__3f__21__3d_ = rt::slot_string(_v20806); _v20806; });
    ({ double _v20807 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20807); _v20807; });
}
rt::Value C_S__25__22_2::m_S__40__22_() {
    RT_FN("S__25__22_2.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6151]), C_S__26_c::sm_S_8_21_Z(C_S__25__22_2::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__25__22_2::g_S__2d_6() {
    RT_FN("S__25__22_2.S__2d_6_get");
    return ({ bool _t20810 = rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 29.0), rt::V(5.0)); _t20810 ? (bool)(({ rt::Value _o20808 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5b__22_1__id); C_S__60_6* _p20809 = rt::as_ptr<C_S__60_6>(_o20808); _p20809 ? _p20809->g_S__2d_6() : rt::T(rt::dget(_o20808, NM_S__2d_6)); })) : _t20810; });
    return false;
}
bool C_S__25__22_2::g_S__26_8() {
    RT_FN("S__25__22_2.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
double C_S__25__22_2::sm_S__2c__21_G() {
    RT_FN("S__25__22_2.S__2c__21_G");
    return ((((double)(C_PlayFab::sg_season())) == 11.0) ? 30.0 : 0.0);
    return 0.0;
}
C_S__25__22_2* C_S__25__22_2::alloc_() {
    C_S__25__22_2* o = rt::make<C_S__25__22_2>();
    return o;
}
rt::Value C_S__25__22_2::mk_(rt::Value* a, int n) {
    C_S__25__22_2* o = alloc_();
    o->C_S__25__22_2::ctor_();
    return rt::VO(o);
}
bool C_S__25__22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__22_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__22_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__22_2::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__25__22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22_2__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__25__22_E::ctor_() {
    RT_FN("S__25__22_E.S__25__22_E");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20811 = 1136.0; this->f_S_6_21_Z = rt::touint_d(_v20811); _v20811; });
    ({ rt::Value _v20812 = rt::trv(rt::VS(g::LS[6152])); this->f_S_1i = rt::slot_string(_v20812); _v20812; });
    ({ rt::Value _v20813 = rt::VS(g::LS[6153]); this->f_S__5e__21__23_ = rt::slot_string(_v20813); _v20813; });
    ({ double _v20814 = 1.0; this->f_S__3e__3d_ = _v20814; _v20814; });
    ({ double _v20815 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20815); _v20815; });
}
rt::Value C_S__25__22_E::m_S__40__22_() {
    RT_FN("S__25__22_E.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6154]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__25__22_E__S_1_21_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__25__22_E::g_S__2d_6() {
    RT_FN("S__25__22_E.S__2d_6_get");
    return ({ bool _t20816 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20816 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__26__22_E__id)) : _t20816; });
    return false;
}
bool C_S__25__22_E::g_S__26_8() {
    RT_FN("S__25__22_E.S__26_8_get");
    return ({ bool _t20817 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20817 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__26__22_E__id)) : _t20817; });
    return false;
}
double C_S__25__22_E::sm_S__27__21_b() {
    RT_FN("S__25__22_E.S__27__21_b");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? g::SV.C_S__25__22_E__S_1_21_S : 0.0);
    return 0.0;
}
C_S__25__22_E* C_S__25__22_E::alloc_() {
    C_S__25__22_E* o = rt::make<C_S__25__22_E>();
    return o;
}
rt::Value C_S__25__22_E::mk_(rt::Value* a, int n) {
    C_S__25__22_E* o = alloc_();
    o->C_S__25__22_E::ctor_();
    return rt::VO(o);
}
bool C_S__25__22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__22_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__22_E::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__25__22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22_E__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__25__22_E__S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22_E__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__25__22_E__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__25__22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void static_init_11(std::vector<std::string>& errs) {
    try { (g::SV.C_S__5b__21__3f___S_1_21_S = 2.0); } catch (...) { errs.push_back(std::string("S__5b__21__3f_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__3e___S_1_21_S = 0.5); } catch (...) { errs.push_back(std::string("S__5e__3e_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__3e___S__3b_n = 2500.0); } catch (...) { errs.push_back(std::string("S__5e__3e_.S__3b_n: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__22__24___S_1_21_S = 3.0); } catch (...) { errs.push_back(std::string("S__60__22__24_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c_F__ids = rt::arr_lit({rt::VS(g::LS[5852])})); } catch (...) { errs.push_back(std::string("S__2c_F.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_W__S__2b_V = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("S__22_W.S__2b_V: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_W__S_6_22_P = 100.0); } catch (...) { errs.push_back(std::string("S__22_W.S_6_22_P: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_W__S_1_22_P = 10.0); } catch (...) { errs.push_back(std::string("S__22_W.S_1_22_P: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_W__S__5e__22_O = 10.0); } catch (...) { errs.push_back(std::string("S__22_W.S__5e__22_O: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_W__S__26__22_P = 10.0); } catch (...) { errs.push_back(std::string("S__22_W.S__26__22_P: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_W__S__2b__22_P = 1.0); } catch (...) { errs.push_back(std::string("S__22_W.S__2b__22_P: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_v__S__5d__21_A = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("S__3f_v.S__5d__21_A: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_v__S__60__3b_ = rt::toint_d(1.0)); } catch (...) { errs.push_back(std::string("S__3f_v.S__60__3b_: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_v__S__3f_6 = rt::toint_d(2.0)); } catch (...) { errs.push_back(std::string("S__3f_v.S__3f_6: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_v__S__5d__2c_ = rt::toint_d(3.0)); } catch (...) { errs.push_back(std::string("S__3f_v.S__5d__2c_: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_v__S_9_22__2b_ = rt::toint_d(4.0)); } catch (...) { errs.push_back(std::string("S__3f_v.S_9_22__2b_: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_v__S__23__21_S = rt::toint_d(5.0)); } catch (...) { errs.push_back(std::string("S__3f_v.S__23__21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_v__S__40_7 = rt::toint_d(5.0)); } catch (...) { errs.push_back(std::string("S__3f_v.S__40_7: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_C__S__5d__21_A = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("S_2_21_C.S__5d__21_A: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_C__S__60__3b_ = rt::toint_d(1.0)); } catch (...) { errs.push_back(std::string("S_2_21_C.S__60__3b_: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_C__S__3f_6 = rt::toint_d(2.0)); } catch (...) { errs.push_back(std::string("S_2_21_C.S__3f_6: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_C__S__5d__2c_ = rt::toint_d(3.0)); } catch (...) { errs.push_back(std::string("S_2_21_C.S__5d__2c_: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_C__S__21__22__2d_ = rt::toint_d(4.0)); } catch (...) { errs.push_back(std::string("S_2_21_C.S__21__22__2d_: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_C__S_9_22__2b_ = rt::toint_d(5.0)); } catch (...) { errs.push_back(std::string("S_2_21_C.S_9_22__2b_: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_C__S__23__21_S = rt::toint_d(6.0)); } catch (...) { errs.push_back(std::string("S_2_21_C.S__23__21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_C__S__40_7 = rt::toint_d(6.0)); } catch (...) { errs.push_back(std::string("S_2_21_C.S__40_7: ") + rt::exc_text()); }
    try { (g::SV.C_S_3Y__S__5d__21_A = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("S_3Y.S__5d__21_A: ") + rt::exc_text()); }
    try { (g::SV.C_S_3Y__S__60__3b_ = rt::toint_d(1.0)); } catch (...) { errs.push_back(std::string("S_3Y.S__60__3b_: ") + rt::exc_text()); }
    try { (g::SV.C_S_3Y__S__3f_6 = rt::toint_d(2.0)); } catch (...) { errs.push_back(std::string("S_3Y.S__3f_6: ") + rt::exc_text()); }
    try { (g::SV.C_S_3Y__S__5d__2c_ = rt::toint_d(3.0)); } catch (...) { errs.push_back(std::string("S_3Y.S__5d__2c_: ") + rt::exc_text()); }
    try { (g::SV.C_S_3Y__S_9_22__2b_ = rt::toint_d(4.0)); } catch (...) { errs.push_back(std::string("S_3Y.S_9_22__2b_: ") + rt::exc_text()); }
    try { (g::SV.C_S_3Y__S__23__21_S = rt::toint_d(5.0)); } catch (...) { errs.push_back(std::string("S_3Y.S__23__21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_3Y__S__40_7 = rt::toint_d(5.0)); } catch (...) { errs.push_back(std::string("S_3Y.S__40_7: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__22_2__S__3f__22_1 = 1000.0); } catch (...) { errs.push_back(std::string("S__20__22_2.S__3f__22_1: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__22_1__S__3f__22_1 = 1000.0); } catch (...) { errs.push_back(std::string("S__21__22_1.S__3f__22_1: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__22_K__S_1_21_S = 50.0); } catch (...) { errs.push_back(std::string("S__23__22_K.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22__22___S_1_21_S = 50.0); } catch (...) { errs.push_back(std::string("S__25__22__22_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22_E__S_1_21_S = 50.0); } catch (...) { errs.push_back(std::string("S__25__22_E.S_1_21_S: ") + rt::exc_text()); }
}
}  // namespace g
