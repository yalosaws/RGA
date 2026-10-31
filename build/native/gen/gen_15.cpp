// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S__40__22_9::ctor_() {
    RT_FN("S__40__22_9.S__40__22_9");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28407 = 115.0; this->f_S_6_21_Z = rt::touint_d(_v28407); _v28407; });
    ({ rt::Value _v28408 = rt::trv(rt::VS(g::LS[8289])); this->f_S_1i = rt::slot_string(_v28408); _v28408; });
    ({ rt::Value _v28409 = rt::VS(g::LS[8290]); this->f_S__5e__21__23_ = rt::slot_string(_v28409); _v28409; });
    ({ double _v28410 = 50000000.0; this->f_S__3e__3d_ = _v28410; _v28410; });
    ({ double _v28411 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v28411); _v28411; });
    ({ double _v28412 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28412); _v28412; });
    ({ double _v28413 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v28413); _v28413; });
    ({ bool _v28414 = true; this->f_S__3c__60_ = _v28414; _v28414; });
    ({ double _v28415 = 1.0; this->f_S__21__22_E = rt::touint_d(_v28415); _v28415; });
}
rt::Value C_S__40__22_9::m_S__40__22_() {
    RT_FN("S__40__22_9.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3480]), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o28416 = C_S_8G::sm_S__2d_e(rt::toint_d(9.0)); C_S__60__21__3b_* _p28417 = rt::as_ptr<C_S__60__21__3b_>(_o28416); _p28417 ? _p28417->f_id : rt::touint(rt::dget(_o28416, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__40__22_9::sm_S__26_s(), 1.0, true)));
    return rt::NUL;
}
bool C_S__40__22_9::g_S__2d_6() {
    RT_FN("S__40__22_9.S__2d_6_get");
    return ({ bool _t28418 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[8232])))) >= 1.0); _t28418 ? _t28418 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__2d__22_B__id)); });
    return false;
}
double C_S__40__22_9::sm_S__26_s() {
    RT_FN("S__40__22_9.S__26_s");
    return (7.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), 3.5));
    return 0.0;
}
C_S__40__22_9* C_S__40__22_9::alloc_() {
    C_S__40__22_9* o = rt::make<C_S__40__22_9>();
    return o;
}
rt::Value C_S__40__22_9::mk_(rt::Value* a, int n) {
    C_S__40__22_9* o = alloc_();
    o->C_S__40__22_9::ctor_();
    return rt::VO(o);
}
bool C_S__40__22_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__40__22_9::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__40__22_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__40__22_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__40__22_9::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__40__22_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22_9__id)); return true;
    case NM_ids: out = g::SV.C_S__40__22_9__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40__22_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22_9__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__40__22_9__ids = v; return true;
    default: return false;
    }
}
bool C_S__40__22_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__40__22__3b_::ctor_() {
    RT_FN("S__40__22__3b_.S__40__22__3b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28419 = 114.0; this->f_S_6_21_Z = rt::touint_d(_v28419); _v28419; });
    ({ rt::Value _v28420 = rt::trv(rt::VS(g::LS[8292])); this->f_S_1i = rt::slot_string(_v28420); _v28420; });
    ({ rt::Value _v28421 = rt::VS(g::LS[8293]); this->f_S__5e__21__23_ = rt::slot_string(_v28421); _v28421; });
    ({ double _v28422 = 500000000000.0; this->f_S__3e__3d_ = _v28422; _v28422; });
    ({ double _v28423 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v28423); _v28423; });
    ({ double _v28424 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28424); _v28424; });
    ({ double _v28425 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v28425); _v28425; });
    ({ bool _v28426 = true; this->f_S__3c__60_ = _v28426; _v28426; });
    ({ double _v28427 = 4.0; this->f_S__21__22_E = rt::touint_d(_v28427); _v28427; });
}
rt::Value C_S__40__22__3b_::m_S__40__22_() {
    RT_FN("S__40__22__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8294]), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o28428 = C_S_8G::sm_S__2d_e(rt::toint_d(9.0)); C_S__60__21__3b_* _p28429 = rt::as_ptr<C_S__60__21__3b_>(_o28428); _p28429 ? _p28429->f_id : rt::touint(rt::dget(_o28428, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__40__22__3b_::sm_S_4_22_D(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o28430 = C_S_8G::sm_S__2d_e(rt::toint_d(10.0)); C_S__60__21__3b_* _p28431 = rt::as_ptr<C_S__60__21__3b_>(_o28430); _p28431 ? _p28431->f_id : rt::touint(rt::dget(_o28430, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__40__22__3b_::sm_S__2d__22__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__40__22__3b_::g_S__2d_6() {
    RT_FN("S__40__22__3b_.S__2d_6_get");
    return ({ bool _t28432 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[8232])))) >= 2.0); _t28432 ? _t28432 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5e__22_9__id)); });
    return false;
}
double C_S__40__22__3b_::sm_S_4_22_D() {
    RT_FN("S__40__22__3b_.S_4_22_D");
    return 900000.0;
    return 0.0;
}
double C_S__40__22__3b_::sm_S__2d__22__2b_() {
    RT_FN("S__40__22__3b_.S__2d__22__2b_");
    return 8800000.0;
    return 0.0;
}
C_S__40__22__3b_* C_S__40__22__3b_::alloc_() {
    C_S__40__22__3b_* o = rt::make<C_S__40__22__3b_>();
    return o;
}
rt::Value C_S__40__22__3b_::mk_(rt::Value* a, int n) {
    C_S__40__22__3b_* o = alloc_();
    o->C_S__40__22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__40__22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__40__22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__40__22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__40__22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__40__22__3b_::smeth_(int id) {
    switch (id) {
    case NM_S_4_22_D: return true;
    case NM_S__2d__22__2b_: return true;
    default: return false;
    }
}
bool C_S__40__22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22__3b___id)); return true;
    case NM_ids: out = g::SV.C_S__40__22__3b___ids; return true;
    case NM_S_4_22_D: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2d__22__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40__22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22__3b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__40__22__3b___ids = v; return true;
    default: return false;
    }
}
bool C_S__40__22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_22_D: out = rt::V(sm_S_4_22_D()); return true;
    case NM_S__2d__22__2b_: out = rt::V(sm_S__2d__22__2b_()); return true;
    default: return false;
    }
}
void C_S__60__21__22_::ctor_() {
    RT_FN("S__60__21__22_.S__60__21__22_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28433 = 106.0; this->f_S_6_21_Z = rt::touint_d(_v28433); _v28433; });
    ({ rt::Value _v28434 = rt::trv(rt::VS(g::LS[8296])); this->f_S_1i = rt::slot_string(_v28434); _v28434; });
    ({ rt::Value _v28435 = rt::VS(g::LS[8297]); this->f_S__5e__21__23_ = rt::slot_string(_v28435); _v28435; });
    ({ rt::Value _v28436 = rt::VS(g::LS[8232]); this->f_S__3f__21__3d_ = rt::slot_string(_v28436); _v28436; });
    ({ rt::Value _v28437 = rt::VS(g::LS[8232]); this->f_S__40_1 = rt::slot_string(_v28437); _v28437; });
    ({ rt::Value _v28438 = rt::trv(rt::VS(g::LS[8243])); this->f_S_7_23_ = rt::slot_string(_v28438); _v28438; });
    ({ double _v28439 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v28439); _v28439; });
    ({ double _v28440 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28440); _v28440; });
    ({ double _v28441 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v28441); _v28441; });
    ({ bool _v28442 = true; this->f_S__3c__60_ = _v28442; _v28442; });
}
int32_t C_S__60__21__22_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__60__21__22_::dm_S_75_2() { return false; }
rt::Value C_S__60__21__22_::dm_S_75_3() { return rt::NUL; }
double C_S__60__21__22_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__60__21__22_.S_75");
    if ((((double)(l_param1)) == 5.0)) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+27 : 500.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__60__21__22_::g_S__2d_6() {
    RT_FN("S__60__21__22_.S__2d_6_get");
    return ({ bool _t28443 = this->C_S__60_6::g_S__2d_6(); _t28443 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 5.0)) : _t28443; });
    return false;
}
C_S__60__21__22_* C_S__60__21__22_::alloc_() {
    C_S__60__21__22_* o = rt::make<C_S__60__21__22_>();
    return o;
}
rt::Value C_S__60__21__22_::mk_(rt::Value* a, int n) {
    C_S__60__21__22_* o = alloc_();
    o->C_S__60__21__22_::ctor_();
    return rt::VO(o);
}
bool C_S__60__21__22_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__60__21__22_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__60__21__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__60__21__22_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__60__21__22_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__60__21__22_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__60__21__22_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__60__21__22_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__21__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21__22___id)); return true;
    case NM_ids: out = g::SV.C_S__60__21__22___ids; return true;
    default: return false;
    }
}
bool C_S__60__21__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21__22___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__60__21__22___ids = v; return true;
    default: return false;
    }
}
bool C_S__60__21__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__21_a::ctor_() {
    RT_FN("S__23__21_a.S__23__21_a");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28444 = 547.0; this->f_S_6_21_Z = rt::touint_d(_v28444); _v28444; });
    ({ rt::Value _v28445 = rt::trv(rt::VS(g::LS[8299])); this->f_S_1i = rt::slot_string(_v28445); _v28445; });
    ({ rt::Value _v28446 = rt::VS(g::LS[8300]); this->f_S__5e__21__23_ = rt::slot_string(_v28446); _v28446; });
    ({ rt::Value _v28447 = rt::trv(rt::VS(g::LS[8301])); this->f_S_7_23_ = rt::slot_string(_v28447); _v28447; });
    ({ double _v28448 = 1e+232; this->f_S__3e__3d_ = _v28448; _v28448; });
    ({ double _v28449 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28449); _v28449; });
}
int32_t C_S__23__21_a::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__23__21_a::dm_S_75_2() { return false; }
rt::Value C_S__23__21_a::dm_S_75_3() { return rt::NUL; }
double C_S__23__21_a::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__23__21_a.S_75");
    if ((((double)(l_param1)) == 9.0)) {
        return 100000000.0;
    }
    return 0.0;
    return 0.0;
}
bool C_S__23__21_a::g_S__2d_6() {
    RT_FN("S__23__21_a.S__2d_6_get");
    return ({ bool _t28451 = ({ bool _t28450 = C_S_8G::sm_S__3c_P(g::SV.C_S__2c__60___id); _t28450 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 9.0)) : _t28450; }); _t28451 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 2.0)) : _t28451; });
    return false;
}
C_S__23__21_a* C_S__23__21_a::alloc_() {
    C_S__23__21_a* o = rt::make<C_S__23__21_a>();
    return o;
}
rt::Value C_S__23__21_a::mk_(rt::Value* a, int n) {
    C_S__23__21_a* o = alloc_();
    o->C_S__23__21_a::ctor_();
    return rt::VO(o);
}
bool C_S__23__21_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__21_a::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__21_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__23__21_a::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__23__21_a::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__23__21_a::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__21_a::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__21_a::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21_a__id)); return true;
    default: return false;
    }
}
bool C_S__23__21_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21_a__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__21_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__22_M::ctor_() {
    RT_FN("S__23__22_M.S__23__22_M");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28452 = 1224.0; this->f_S_6_21_Z = rt::touint_d(_v28452); _v28452; });
    ({ rt::Value _v28453 = rt::trv(rt::VS(g::LS[7674])); this->f_S_1i = rt::slot_string(_v28453); _v28453; });
    ({ rt::Value _v28454 = rt::VS(g::LS[8302]); this->f_S__5e__21__23_ = rt::slot_string(_v28454); _v28454; });
    ({ double _v28455 = 1e+136; this->f_S__23__21_m = _v28455; _v28455; });
    ({ double _v28456 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28456); _v28456; });
}
rt::Value C_S__23__22_M::m_S__40__22_() {
    RT_FN("S__23__22_M.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8303]), C_S__26_c::sm_S_6_21_T(C_S__23__22_M::sm_S__27__21_b(), 3.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__23__22_M::g_S__2d_6() {
    RT_FN("S__23__22_M.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21_v__id);
    return false;
}
double C_S__23__22_M::sm_S__27__21_b() {
    RT_FN("S__23__22_M.S__27__21_b");
    return rt::m_pow((4.0 * rt::m_pow((C_S__26_c::sm_S_57(C_S__26_c::dsm_S_57_0()) * 30.0), 0.2)), ((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0) ? 1.5 : 1.0));
    return 0.0;
}
C_S__23__22_M* C_S__23__22_M::alloc_() {
    C_S__23__22_M* o = rt::make<C_S__23__22_M>();
    return o;
}
rt::Value C_S__23__22_M::mk_(rt::Value* a, int n) {
    C_S__23__22_M* o = alloc_();
    o->C_S__23__22_M::ctor_();
    return rt::VO(o);
}
bool C_S__23__22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__22_M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__22_M::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__23__22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__22_M__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__25__22_M::ctor_() {
    RT_FN("S__25__22_M.S__25__22_M");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28457 = 1225.0; this->f_S_6_21_Z = rt::touint_d(_v28457); _v28457; });
    ({ rt::Value _v28458 = rt::trv(rt::VS(g::LS[7675])); this->f_S_1i = rt::slot_string(_v28458); _v28458; });
    ({ rt::Value _v28459 = rt::VS(g::LS[8304]); this->f_S__5e__21__23_ = rt::slot_string(_v28459); _v28459; });
    ({ double _v28460 = 1e+136; this->f_S__23__21_m = _v28460; _v28460; });
    ({ double _v28461 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28461); _v28461; });
}
rt::Value C_S__25__22_M::m_S__40__22_() {
    RT_FN("S__25__22_M.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8305]), C_S__26_c::sm_S_6_21_T(C_S__25__22_M::sm_S__27__21_b(), 3.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__25__22_M::g_S__2d_6() {
    RT_FN("S__25__22_M.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S_8_21_w__id);
    return false;
}
double C_S__25__22_M::sm_S__27__21_b() {
    RT_FN("S__25__22_M.S__27__21_b");
    return rt::m_pow((9.0 * rt::m_pow(C_S__26_c::sm_S_2_21__26_(), 0.2)), ((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0) ? 1.5 : 1.0));
    return 0.0;
}
C_S__25__22_M* C_S__25__22_M::alloc_() {
    C_S__25__22_M* o = rt::make<C_S__25__22_M>();
    return o;
}
rt::Value C_S__25__22_M::mk_(rt::Value* a, int n) {
    C_S__25__22_M* o = alloc_();
    o->C_S__25__22_M::ctor_();
    return rt::VO(o);
}
bool C_S__25__22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__22_M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__22_M::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__25__22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22_M__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__22_c::ctor_() {
    RT_FN("S__22_c.S__22_c");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28462 = 509.0; this->f_S_6_21_Z = rt::touint_d(_v28462); _v28462; });
    ({ rt::Value _v28463 = rt::trv(rt::VS(g::LS[8306])); this->f_S_1i = rt::slot_string(_v28463); _v28463; });
    ({ rt::Value _v28464 = rt::VS(g::LS[8307]); this->f_S__5e__21__23_ = rt::slot_string(_v28464); _v28464; });
    ({ double _v28465 = 1.0; this->f_S__3e__3d_ = _v28465; _v28465; });
    ({ double _v28466 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28466); _v28466; });
}
rt::Value C_S__22_c::m_S__40__22_() {
    RT_FN("S__22_c.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8308]), C_S__26_c::sm_S_6_21_T(2500.0, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()), rt::dcallv(rt::V((5.0)), rt::N_toString)));
    return rt::NUL;
}
bool C_S__22_c::g_S__2d_6() {
    RT_FN("S__22_c.S__2d_6_get");
    return ({ bool _t28468 = ({ bool _t28467 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) >= 0.0); _t28467 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) <= 5.0)) : _t28467; }); _t28468 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_7Q__id)) : _t28468; });
    return false;
}
double C_S__22_c::sm_S__27__21_b() {
    RT_FN("S__22_c.S__27__21_b");
    return (rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(300.0)) ? 2500.0 : 0.0);
    return 0.0;
}
C_S__22_c* C_S__22_c::alloc_() {
    C_S__22_c* o = rt::make<C_S__22_c>();
    return o;
}
rt::Value C_S__22_c::mk_(rt::Value* a, int n) {
    C_S__22_c* o = alloc_();
    o->C_S__22_c::ctor_();
    return rt::VO(o);
}
bool C_S__22_c::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22_c::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22_c::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22_c::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22_c::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__22_c::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_c__id)); return true;
    case NM_S_4_22_J: out = rt::V(g::SV.C_S__22_c__S_4_22_J); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__22_c__S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22_c::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_c__id = rt::touint(v); return true;
    case NM_S_4_22_J: g::SV.C_S__22_c__S_4_22_J = rt::tonum(v); return true;
    case NM_S_1_21_S: g::SV.C_S__22_c__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__22_c::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3c__21_P::ctor_() {
    RT_FN("S__3c__21_P.S__3c__21_P");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28469 = 508.0; this->f_S_6_21_Z = rt::touint_d(_v28469); _v28469; });
    ({ rt::Value _v28470 = rt::trv(rt::VS(g::LS[8309])); this->f_S_1i = rt::slot_string(_v28470); _v28470; });
    ({ rt::Value _v28471 = rt::VS(g::LS[8310]); this->f_S__5e__21__23_ = rt::slot_string(_v28471); _v28471; });
    ({ double _v28472 = 1e+65; this->f_S__3e__3d_ = _v28472; _v28472; });
    ({ double _v28473 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28473); _v28473; });
    ({ double _v28474 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28474); _v28474; });
}
rt::Value C_S__3c__21_P::m_S__40__22_() {
    RT_FN("S__3c__21_P.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8311]), C_S__26_c::sm_S_6_21_T(C_S__3c__21_P::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__3c__21_P::g_S__2d_6() {
    RT_FN("S__3c__21_P.S__2d_6_get");
    return ({ bool _t28475 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t28475 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__22_2__id)) : _t28475; });
    return false;
}
double C_S__3c__21_P::sm_S__27__21_b() {
    RT_FN("S__3c__21_P.S__27__21_b");
    return (0.75 * rt::m_pow((C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), true, C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()) - C_S__26_c::sm_S_9_5b_(true, false, true)), 0.6));
    return 0.0;
}
C_S__3c__21_P* C_S__3c__21_P::alloc_() {
    C_S__3c__21_P* o = rt::make<C_S__3c__21_P>();
    return o;
}
rt::Value C_S__3c__21_P::mk_(rt::Value* a, int n) {
    C_S__3c__21_P* o = alloc_();
    o->C_S__3c__21_P::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_P::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__21_P::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__21_P::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__21_P::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__21_P::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3c__21_P::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_P__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_P::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_P__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_P::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3f__21_q::ctor_() {
    RT_FN("S__3f__21_q.S__3f__21_q");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28476 = 839.0; this->f_S_6_21_Z = rt::touint_d(_v28476); _v28476; });
    ({ rt::Value _v28477 = rt::trv(rt::VS(g::LS[8312])); this->f_S_1i = rt::slot_string(_v28477); _v28477; });
    ({ rt::Value _v28478 = rt::VS(g::LS[8313]); this->f_S__5e__21__23_ = rt::slot_string(_v28478); _v28478; });
    ({ double _v28479 = 1e+90; this->f_S__23__21_m = _v28479; _v28479; });
    ({ double _v28480 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28480); _v28480; });
}
rt::Value C_S__3f__21_q::m_S__40__22_() {
    RT_FN("S__3f__21_q.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8314])));
    return rt::NUL;
}
bool C_S__3f__21_q::g_S__2d_6() {
    RT_FN("S__3f__21_q.S__2d_6_get");
    return ({ bool _t28481 = C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_s__id); _t28481 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t28481; });
    return false;
}
double C_S__3f__21_q::sm_S__2c__2b_() {
    RT_FN("S__3f__21_q.S__2c__2b_");
    return ((((double)(C_S_8G::sg_S_8_21_H())) * 0.002) / ((double)(C_S_8G::sg_S__2c_P())));
    return 0.0;
}
C_S__3f__21_q* C_S__3f__21_q::alloc_() {
    C_S__3f__21_q* o = rt::make<C_S__3f__21_q>();
    return o;
}
rt::Value C_S__3f__21_q::mk_(rt::Value* a, int n) {
    C_S__3f__21_q* o = alloc_();
    o->C_S__3f__21_q::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__21_q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__21_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__21_q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__21_q::smeth_(int id) {
    switch (id) {
    case NM_S__2c__2b_: return true;
    default: return false;
    }
}
bool C_S__3f__21_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_q__id)); return true;
    case NM_S__2c__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__21_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__21_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__2b_: out = rt::V(sm_S__2c__2b_()); return true;
    default: return false;
    }
}
void C_S__26__22_M::ctor_() {
    RT_FN("S__26__22_M.S__26__22_M");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28482 = 1226.0; this->f_S_6_21_Z = rt::touint_d(_v28482); _v28482; });
    ({ rt::Value _v28483 = rt::trv(rt::VS(g::LS[7676])); this->f_S_1i = rt::slot_string(_v28483); _v28483; });
    ({ rt::Value _v28484 = rt::VS(g::LS[8315]); this->f_S__5e__21__23_ = rt::slot_string(_v28484); _v28484; });
    ({ double _v28485 = 1e+136; this->f_S__23__21_m = _v28485; _v28485; });
    ({ double _v28486 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28486); _v28486; });
}
rt::Value C_S__26__22_M::m_S__40__22_() {
    RT_FN("S__26__22_M.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8316]), C_S__26_c::sm_S_6_21_T(C_S__26__22_M::sm_S__27__21_b(), 3.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__26__22_M::g_S__2d_6() {
    RT_FN("S__26__22_M.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S_3_21_v__id);
    return false;
}
double C_S__26__22_M::sm_S__27__21_b() {
    RT_FN("S__26__22_M.S__27__21_b");
    return rt::m_pow(rt::m_pow(C_S__26_c::sm_S_0F(C_S__26_c::dsm_S_0F_0()), 0.2), ((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0) ? 1.5 : 1.0));
    return 0.0;
}
C_S__26__22_M* C_S__26__22_M::alloc_() {
    C_S__26__22_M* o = rt::make<C_S__26__22_M>();
    return o;
}
rt::Value C_S__26__22_M::mk_(rt::Value* a, int n) {
    C_S__26__22_M* o = alloc_();
    o->C_S__26__22_M::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__22_M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__22_M::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__26__22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_M__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__2c__21_p::ctor_() {
    RT_FN("S__2c__21_p.S__2c__21_p");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28487 = 788.0; this->f_S_6_21_Z = rt::touint_d(_v28487); _v28487; });
    ({ rt::Value _v28488 = rt::trv(rt::VS(g::LS[8317])); this->f_S_1i = rt::slot_string(_v28488); _v28488; });
    ({ rt::Value _v28489 = rt::VS(g::LS[8318]); this->f_S__5e__21__23_ = rt::slot_string(_v28489); _v28489; });
    ({ double _v28490 = 1.0; this->f_S__3e__3d_ = _v28490; _v28490; });
    ({ double _v28491 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28491); _v28491; });
}
rt::Value C_S__2c__21_p::m_S__40__22_() {
    RT_FN("S__2c__21_p.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8319]), C_S__26_c::sm_S_6_21_T(2500.0, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()), rt::dcallv(rt::V((15.0)), rt::N_toString)));
    return rt::NUL;
}
bool C_S__2c__21_p::g_S__2d_6() {
    RT_FN("S__2c__21_p.S__2d_6_get");
    return ({ bool _t28494 = ({ bool _t28493 = ({ bool _t28492 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) >= 6.0); _t28492 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) <= 8.0)) : _t28492; }); _t28493 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_7Q__id)) : _t28493; }); _t28494 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5e__21_o__id)) : _t28494; });
    return false;
}
double C_S__2c__21_p::sm_S__27__21_b() {
    RT_FN("S__2c__21_p.S__27__21_b");
    return (rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(900.0)) ? 2500.0 : 0.0);
    return 0.0;
}
C_S__2c__21_p* C_S__2c__21_p::alloc_() {
    C_S__2c__21_p* o = rt::make<C_S__2c__21_p>();
    return o;
}
rt::Value C_S__2c__21_p::mk_(rt::Value* a, int n) {
    C_S__2c__21_p* o = alloc_();
    o->C_S__2c__21_p::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__21_p::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__21_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__21_p::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__21_p::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__2c__21_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21_p__id)); return true;
    case NM_S_4_22_J: out = rt::V(g::SV.C_S__2c__21_p__S_4_22_J); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__2c__21_p__S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__21_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21_p__id = rt::touint(v); return true;
    case NM_S_4_22_J: g::SV.C_S__2c__21_p__S_4_22_J = rt::tonum(v); return true;
    case NM_S_1_21_S: g::SV.C_S__2c__21_p__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2c__21_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__2d__21_P::ctor_() {
    RT_FN("S__2d__21_P.S__2d__21_P");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28495 = 507.0; this->f_S_6_21_Z = rt::touint_d(_v28495); _v28495; });
    ({ rt::Value _v28496 = rt::trv(rt::VS(g::LS[8320])); this->f_S_1i = rt::slot_string(_v28496); _v28496; });
    ({ rt::Value _v28497 = rt::VS(g::LS[8321]); this->f_S__5e__21__23_ = rt::slot_string(_v28497); _v28497; });
    ({ double _v28498 = 1000000.0; this->f_S__3c_R = _v28498; _v28498; });
    ({ double _v28499 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28499); _v28499; });
}
rt::Value C_S__2d__21_P::m_S__40__22_() {
    RT_FN("S__2d__21_P.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[384])));
    return rt::NUL;
}
bool C_S__2d__21_P::g_S__2d_6() {
    RT_FN("S__2d__21_P.S__2d_6_get");
    return ({ bool _t28500 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t28500 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__26__21_H__id)) : _t28500; });
    return false;
}
C_S__2d__21_P* C_S__2d__21_P::alloc_() {
    C_S__2d__21_P* o = rt::make<C_S__2d__21_P>();
    return o;
}
rt::Value C_S__2d__21_P::mk_(rt::Value* a, int n) {
    C_S__2d__21_P* o = alloc_();
    o->C_S__2d__21_P::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_P::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__21_P::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__21_P::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__21_P::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__21_P::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__21_P::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_P__id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_P::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_P__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__21_P::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_21_n::ctor_() {
    RT_FN("S_0_21_n.S_0_21_n");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28501 = 750.0; this->f_S_6_21_Z = rt::touint_d(_v28501); _v28501; });
    ({ rt::Value _v28502 = rt::trv(rt::VS(g::LS[8322])); this->f_S_1i = rt::slot_string(_v28502); _v28502; });
    ({ rt::Value _v28503 = rt::VS(g::LS[8323]); this->f_S__5e__21__23_ = rt::slot_string(_v28503); _v28503; });
    ({ double _v28504 = 1e+21; this->f_S__23__21_m = _v28504; _v28504; });
    ({ double _v28505 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28505); _v28505; });
}
rt::Value C_S_0_21_n::m_S__40__22_() {
    RT_FN("S_0_21_n.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[559]), C_S__26_c::sm_S_8_21_Z(C_S_0_21_n::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_0_21_n::g_S__2d_6() {
    RT_FN("S_0_21_n.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S_5_21_m__id);
    return false;
}
double C_S_0_21_n::sm_S__23__21_Y() {
    RT_FN("S_0_21_n.S__23__21_Y");
    return 200.0;
    return 0.0;
}
C_S_0_21_n* C_S_0_21_n::alloc_() {
    C_S_0_21_n* o = rt::make<C_S_0_21_n>();
    return o;
}
rt::Value C_S_0_21_n::mk_(rt::Value* a, int n) {
    C_S_0_21_n* o = alloc_();
    o->C_S_0_21_n::ctor_();
    return rt::VO(o);
}
bool C_S_0_21_n::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0_21_n::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0_21_n::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0_21_n::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0_21_n::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S_0_21_n::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21_n__id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_21_n::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21_n__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_21_n::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S_2_21_1::ctor_() {
    RT_FN("S_2_21_1.S_2_21_1");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28506 = 502.0; this->f_S_6_21_Z = rt::touint_d(_v28506); _v28506; });
    ({ rt::Value _v28507 = rt::trv(rt::VS(g::LS[8324])); this->f_S_1i = rt::slot_string(_v28507); _v28507; });
    ({ rt::Value _v28508 = rt::VS(g::LS[8325]); this->f_S__5e__21__23_ = rt::slot_string(_v28508); _v28508; });
    ({ double _v28509 = 1e+75; this->f_S__3e__3d_ = _v28509; _v28509; });
    ({ double _v28510 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28510); _v28510; });
}
rt::Value C_S_2_21_1::m_S__40__22_() {
    RT_FN("S_2_21_1.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[489]), rt::dcallv(rt::V(C_S_2_21_1::sm_S__22__21__26_()), rt::N_toFixed, rt::V(1.0))));
    return rt::NUL;
}
bool C_S_2_21_1::g_S__2d_6() {
    RT_FN("S_2_21_1.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__26__23___id);
    return false;
}
double C_S_2_21_1::sm_S__22__21__26_() {
    RT_FN("S_2_21_1.S__22__21__26_");
    return 2.5;
    return 0.0;
}
C_S_2_21_1* C_S_2_21_1::alloc_() {
    C_S_2_21_1* o = rt::make<C_S_2_21_1>();
    return o;
}
rt::Value C_S_2_21_1::mk_(rt::Value* a, int n) {
    C_S_2_21_1* o = alloc_();
    o->C_S_2_21_1::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2_21_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2_21_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2_21_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2_21_1::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S_2_21_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_1__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_21_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_1__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_21_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S_2_21_B::ctor_() {
    RT_FN("S_2_21_B.S_2_21_B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28511 = 501.0; this->f_S_6_21_Z = rt::touint_d(_v28511); _v28511; });
    ({ rt::Value _v28512 = rt::trv(rt::VS(g::LS[8326])); this->f_S_1i = rt::slot_string(_v28512); _v28512; });
    ({ rt::Value _v28513 = rt::VS(g::LS[8327]); this->f_S__5e__21__23_ = rt::slot_string(_v28513); _v28513; });
    ({ double _v28514 = 1e+50; this->f_S__3e__3d_ = _v28514; _v28514; });
    ({ double _v28515 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28515); _v28515; });
}
rt::Value C_S_2_21_B::m_S__40__22_() {
    RT_FN("S_2_21_B.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8328]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[8329]), rt::dcallv(rt::V((10.0)), rt::N_toString)), rt::trv(rt::VS(g::LS[8330])), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S_2_21_B::sm_S_4_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S_2_21_B::g_S__2d_6() {
    RT_FN("S_2_21_B.S__2d_6_get");
    return ({ bool _t28516 = C_S_8G::sm_S__3c_P(g::SV.C_S__27__21_L__id); _t28516 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t28516; });
    return false;
}
double C_S_2_21_B::sm_S_4_21__40_() {
    RT_FN("S_2_21_B.S_4_21__40_");
    return (10.0 * C_S__26_c::sm_S__5b__21_j());
    return 0.0;
}
C_S_2_21_B* C_S_2_21_B::alloc_() {
    C_S_2_21_B* o = rt::make<C_S_2_21_B>();
    return o;
}
rt::Value C_S_2_21_B::mk_(rt::Value* a, int n) {
    C_S_2_21_B* o = alloc_();
    o->C_S_2_21_B::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2_21_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2_21_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2_21_B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2_21_B::smeth_(int id) {
    switch (id) {
    case NM_S_4_21__40_: return true;
    default: return false;
    }
}
bool C_S_2_21_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_B__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_2_21_B__S_1_21_S); return true;
    case NM_S_4_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_21_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_B__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_2_21_B__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_2_21_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_21__40_: out = rt::V(sm_S_4_21__40_()); return true;
    default: return false;
    }
}
void C_S_4a::ctor_() {
    RT_FN("S_4a.S_4a");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28517 = 469.0; this->f_S_6_21_Z = rt::touint_d(_v28517); _v28517; });
    ({ rt::Value _v28518 = rt::trv(rt::VS(g::LS[8331])); this->f_S_1i = rt::slot_string(_v28518); _v28518; });
    ({ rt::Value _v28519 = rt::VS(g::LS[8332]); this->f_S__5e__21__23_ = rt::slot_string(_v28519); _v28519; });
    ({ double _v28520 = 1e+35; this->f_S__3e__3d_ = _v28520; _v28520; });
    ({ bool _v28521 = true; this->f_S__25__21__3e_ = _v28521; _v28521; });
    ({ bool _v28522 = true; this->f_S__3f_T = _v28522; _v28522; });
    ({ double _v28523 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v28523); _v28523; });
}
rt::Value C_S_4a::m_S__40__22_() {
    RT_FN("S_4a.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8333])));
    return rt::NUL;
}
bool C_S_4a::g_S__2d_6() {
    RT_FN("S_4a.S__2d_6_get");
    return (C_S_8G::sg_S_1_21_5() >= 100.0);
    return false;
}
bool C_S_4a::g_S__26_8() {
    RT_FN("S_4a.S__26_8_get");
    return false;
    return false;
}
C_S_4a* C_S_4a::alloc_() {
    C_S_4a* o = rt::make<C_S_4a>();
    return o;
}
rt::Value C_S_4a::mk_(rt::Value* a, int n) {
    C_S_4a* o = alloc_();
    o->C_S_4a::ctor_();
    return rt::VO(o);
}
bool C_S_4a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4a::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4a::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4a::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4a__id)); return true;
    default: return false;
    }
}
bool C_S_4a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4a__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_51::ctor_() {
    RT_FN("S_51.S_51");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28524 = 698.0; this->f_S_6_21_Z = rt::touint_d(_v28524); _v28524; });
    ({ rt::Value _v28525 = rt::trv(rt::VS(g::LS[8334])); this->f_S_1i = rt::slot_string(_v28525); _v28525; });
    ({ rt::Value _v28526 = rt::VS(g::LS[8335]); this->f_S__5e__21__23_ = rt::slot_string(_v28526); _v28526; });
    ({ double _v28527 = 1e+100; this->f_S__3c_R = _v28527; _v28527; });
    ({ double _v28528 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28528); _v28528; });
}
rt::Value C_S_51::m_S__40__22_() {
    RT_FN("S_51.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8336])));
    return rt::NUL;
}
bool C_S_51::g_S__2d_6() {
    RT_FN("S_51.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S_3I__id);
    return false;
}
double C_S_51::sm_S__2c__2b_() {
    RT_FN("S_51.S__2c__2b_");
    return 0.97;
    return 0.0;
}
C_S_51* C_S_51::alloc_() {
    C_S_51* o = rt::make<C_S_51>();
    return o;
}
rt::Value C_S_51::mk_(rt::Value* a, int n) {
    C_S_51* o = alloc_();
    o->C_S_51::ctor_();
    return rt::VO(o);
}
bool C_S_51::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_51::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_51::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_51::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_51::smeth_(int id) {
    switch (id) {
    case NM_S__2c__2b_: return true;
    default: return false;
    }
}
bool C_S_51::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_51__id)); return true;
    case NM_S__2c__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_51::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_51__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_51::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__2b_: out = rt::V(sm_S__2c__2b_()); return true;
    default: return false;
    }
}
void C_S_6m::ctor_() {
    RT_FN("S_6m.S_6m");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28529 = 647.0; this->f_S_6_21_Z = rt::touint_d(_v28529); _v28529; });
    ({ rt::Value _v28530 = rt::trv(rt::VS(g::LS[8337])); this->f_S_1i = rt::slot_string(_v28530); _v28530; });
    ({ rt::Value _v28531 = rt::VS(g::LS[8338]); this->f_S__5e__21__23_ = rt::slot_string(_v28531); _v28531; });
    ({ double _v28532 = 1e+120; this->f_S__3e__3d_ = _v28532; _v28532; });
    ({ double _v28533 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28533); _v28533; });
}
rt::Value C_S_6m::m_S__21_E() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S_6m.S__21_E");
    (l_A__loc1_ = C_S__26_c::sm_S__27__21_O());
    if ((((double)(l_A__loc1_)) < 6.0)) {
        return rt::slot_string(rt::VS(g::LS[8338]));
    }
    if (((((double)(l_A__loc1_)) >= 6.0) && (((double)(l_A__loc1_)) < 12.0))) {
        return rt::slot_string(rt::VS(g::LS[8339]));
    }
    if (((((double)(l_A__loc1_)) >= 12.0) && (((double)(l_A__loc1_)) < 18.0))) {
        return rt::slot_string(rt::VS(g::LS[8340]));
    }
    return rt::slot_string(rt::VS(g::LS[8341]));
    return rt::NUL;
}
rt::Value C_S_6m::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    int32_t l_A__loc2_ = 0;
    RT_FN("S_6m.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::add(rt::trv(rt::VS(g::LS[8342])), rt::VS(g::LS[143]))));
    (l_A__loc2_ = C_S__26_c::sm_S__27__21_O());
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::add(rt::VS(g::LS[143]), ((((((double)(l_A__loc2_)) < 6.0) || C_S_8G::sm_S_7d(g::SV.C_S_9_22__26___id)) ? rt::VS(g::LS[162]) : rt::VS(g::LS[113])))), rt::trv(rt::VS(g::LS[8343]), C_S__26_c::sm_S_8_21_Z(C_S_6m::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::add(rt::VS(g::LS[143]), (((({ bool _t28534 = (((double)(l_A__loc2_)) >= 6.0); _t28534 ? (bool)((((double)(l_A__loc2_)) < 12.0)) : _t28534; }) || C_S_8G::sm_S_7d(g::SV.C_S_9_22__26___id)) ? rt::VS(g::LS[162]) : rt::VS(g::LS[113])))), rt::trv(rt::VS(g::LS[8344]), C_S__26_c::sm_S_8_21_Z(C_S_6m::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::add(rt::VS(g::LS[143]), (((({ bool _t28535 = (((double)(l_A__loc2_)) >= 12.0); _t28535 ? (bool)((((double)(l_A__loc2_)) < 18.0)) : _t28535; }) || C_S_8G::sm_S_7d(g::SV.C_S_9_22__26___id)) ? rt::VS(g::LS[162]) : rt::VS(g::LS[113])))), rt::trv(rt::VS(g::LS[8345]), C_S__26_c::sm_S_6_21_T(C_S_6m::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))))));
    return rt::slot_string(rt::add(l_A__loc1_, (rt::add(rt::add(rt::VS(g::LS[143]), ((((((double)(l_A__loc2_)) >= 18.0) || C_S_8G::sm_S_7d(g::SV.C_S_9_22__26___id)) ? rt::VS(g::LS[162]) : rt::VS(g::LS[113])))), rt::trv(rt::VS(g::LS[8346]), C_S__26_c::sm_S_6_21_T(C_S_6m::sm_S__2b__2b_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))))));
    return rt::NUL;
}
bool C_S_6m::g_S__2d_6() {
    RT_FN("S_6m.S__2d_6_get");
    return ({ bool _t28537 = ({ bool _t28536 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t28536 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2b__21__22___id)) : _t28536; }); _t28537 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_6_21__3f___id)) : _t28537; });
    return false;
}
double C_S_6m::sm_S_5_21_B() {
    RT_FN("S_6m.S_5_21_B");
    return (((((double)(C_S__26_c::sm_S__27__21_O())) < 6.0) || C_S_8G::sm_S_7d(g::SV.C_S_9_22__26___id)) ? (0.25 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sg_S__22__21_0())), (1.25 + (0.25 * ((double)(C_S_8G::sg_S__2c_P())))))) : 0.0);
    return 0.0;
}
double C_S_6m::sm_S_2_21_W() {
    RT_FN("S_6m.S_2_21_W");
    return ((({ bool _t28538 = (((double)(C_S__26_c::sm_S__27__21_O())) >= 6.0); _t28538 ? (bool)((((double)(C_S__26_c::sm_S__27__21_O())) < 12.0)) : _t28538; }) || C_S_8G::sm_S_7d(g::SV.C_S_9_22__26___id)) ? rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), (1.5 + (0.25 * ((double)(C_S_8G::sg_S__2c_P()))))) : 0.0);
    return 0.0;
}
double C_S_6m::sm_S__27__21_b() {
    RT_FN("S_6m.S__27__21_b");
    return ((({ bool _t28539 = (((double)(C_S__26_c::sm_S__27__21_O())) >= 12.0); _t28539 ? (bool)((((double)(C_S__26_c::sm_S__27__21_O())) < 18.0)) : _t28539; }) || C_S_8G::sm_S_7d(g::SV.C_S_9_22__26___id)) ? (2.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2()))), (1.25 + (2.0 * ((double)(C_S_8G::sg_S__2c_P())))))) : 0.0);
    return 0.0;
}
double C_S_6m::sm_S__2b__2b_() {
    RT_FN("S_6m.S__2b__2b_");
    return (((((double)(C_S__26_c::sm_S__27__21_O())) >= 18.0) || C_S_8G::sm_S_7d(g::SV.C_S_9_22__26___id)) ? (15.0 * rt::m_pow(C_S__26_c::sm_S_0_23_(C_S__26_c::dsm_S_0_23__0(), C_S__26_c::dsm_S_0_23__1()), (0.85 + (0.15 * ((double)(C_S_8G::sg_S__2c_P())))))) : 0.0);
    return 0.0;
}
C_S_6m* C_S_6m::alloc_() {
    C_S_6m* o = rt::make<C_S_6m>();
    return o;
}
rt::Value C_S_6m::mk_(rt::Value* a, int n) {
    C_S_6m* o = alloc_();
    o->C_S_6m::ctor_();
    return rt::VO(o);
}
bool C_S_6m::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__21_E: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6m::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6m::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21_E: out = m_S__21_E(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6m::dmeth(int id) {
    switch (id) {
    case NM_S__21_E: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6m::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    case NM_S_2_21_W: return true;
    case NM_S__27__21_b: return true;
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S_6m::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6m__id)); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6m::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6m__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6m::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S_7_21_p::ctor_() {
    RT_FN("S_7_21_p.S_7_21_p");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28540 = 790.0; this->f_S_6_21_Z = rt::touint_d(_v28540); _v28540; });
    ({ rt::Value _v28541 = rt::trv(rt::VS(g::LS[8347])); this->f_S_1i = rt::slot_string(_v28541); _v28541; });
    ({ rt::Value _v28542 = rt::VS(g::LS[8348]); this->f_S__5e__21__23_ = rt::slot_string(_v28542); _v28542; });
    ({ double _v28543 = 1e+20; this->f_S__3c_R = _v28543; _v28543; });
    ({ double _v28544 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28544); _v28544; });
}
rt::Value C_S_7_21_p::m_S__40__22_() {
    RT_FN("S_7_21_p.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8349]), C_S__26_c::sm_S_6_21_T(C_S_7_21_p::sm_S__26_s(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S_7_21_p::g_S__2d_6() {
    RT_FN("S_7_21_p.S__2d_6_get");
    return ({ bool _t28546 = ({ bool _t28545 = C_S_8G::sm_S__3c_P(g::SV.C_S__2b__21__5d___id); _t28545 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) > 0.0)) : _t28545; }); _t28546 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t28546; });
    return false;
}
double C_S_7_21_p::sm_S__26_s() {
    RT_FN("S_7_21_p.S__26_s");
    return (6.5 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.65));
    return 0.0;
}
C_S_7_21_p* C_S_7_21_p::alloc_() {
    C_S_7_21_p* o = rt::make<C_S_7_21_p>();
    return o;
}
rt::Value C_S_7_21_p::mk_(rt::Value* a, int n) {
    C_S_7_21_p* o = alloc_();
    o->C_S_7_21_p::ctor_();
    return rt::VO(o);
}
bool C_S_7_21_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7_21_p::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7_21_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7_21_p::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7_21_p::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_7_21_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21_p__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_21_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21_p__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_21_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_8_21_R::ctor_() {
    RT_FN("S_8_21_R.S_8_21_R");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28547 = 546.0; this->f_S_6_21_Z = rt::touint_d(_v28547); _v28547; });
    ({ rt::Value _v28548 = rt::trv(rt::VS(g::LS[8350])); this->f_S_1i = rt::slot_string(_v28548); _v28548; });
    ({ rt::Value _v28549 = rt::VS(g::LS[8351]); this->f_S__5e__21__23_ = rt::slot_string(_v28549); _v28549; });
    ({ rt::Value _v28550 = rt::trv(rt::VS(g::LS[8352])); this->f_S_7_23_ = rt::slot_string(_v28550); _v28550; });
    ({ double _v28551 = 1e+232; this->f_S__3e__3d_ = _v28551; _v28551; });
    ({ double _v28552 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28552); _v28552; });
}
int32_t C_S_8_21_R::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_8_21_R::dm_S_75_2() { return false; }
rt::Value C_S_8_21_R::dm_S_75_3() { return rt::NUL; }
double C_S_8_21_R::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_8_21_R.S_75");
    if ((((double)(l_param1)) == 10.0)) {
        return 100000000.0;
    }
    return 0.0;
    return 0.0;
}
bool C_S_8_21_R::g_S__2d_6() {
    RT_FN("S_8_21_R.S__2d_6_get");
    return ({ bool _t28554 = ({ bool _t28553 = C_S_8G::sm_S__3c_P(g::SV.C_S__3e_a__id); _t28553 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)) : _t28553; }); _t28554 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 2.0)) : _t28554; });
    return false;
}
C_S_8_21_R* C_S_8_21_R::alloc_() {
    C_S_8_21_R* o = rt::make<C_S_8_21_R>();
    return o;
}
rt::Value C_S_8_21_R::mk_(rt::Value* a, int n) {
    C_S_8_21_R* o = alloc_();
    o->C_S_8_21_R::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_21_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_21_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_8_21_R::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_8_21_R::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_8_21_R::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_21_R::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_21_R::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21_R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21_R__id)); return true;
    default: return false;
    }
}
bool C_S_8_21_R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21_R__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_21_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_22__26_::ctor_() {
    RT_FN("S_9_22__26_.S_9_22__26_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28555 = 954.0; this->f_S_6_21_Z = rt::touint_d(_v28555); _v28555; });
    ({ rt::Value _v28556 = rt::trv(rt::VS(g::LS[8353])); this->f_S_1i = rt::slot_string(_v28556); _v28556; });
    ({ rt::Value _v28557 = rt::VS(g::LS[8354]); this->f_S__5e__21__23_ = rt::slot_string(_v28557); _v28557; });
    ({ double _v28558 = 1e+20; this->f_S__23__21_m = _v28558; _v28558; });
    ({ double _v28559 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28559); _v28559; });
}
rt::Value C_S_9_22__26_::m_S__40__22_() {
    RT_FN("S_9_22__26_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8355])));
    return rt::NUL;
}
bool C_S_9_22__26_::g_S__2d_6() {
    RT_FN("S_9_22__26_.S__2d_6_get");
    return ({ bool _t28562 = ({ bool _t28561 = ({ bool _t28560 = C_S_8G::sm_S__3c_P(g::SV.C_S__2d__22__26___id); _t28560 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_6m__id)) : _t28560; }); _t28561 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t28561; }); _t28562 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0))) : _t28562; });
    return false;
}
C_S_9_22__26_* C_S_9_22__26_::alloc_() {
    C_S_9_22__26_* o = rt::make<C_S_9_22__26_>();
    return o;
}
rt::Value C_S_9_22__26_::mk_(rt::Value* a, int n) {
    C_S_9_22__26_* o = alloc_();
    o->C_S_9_22__26_::ctor_();
    return rt::VO(o);
}
bool C_S_9_22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_22__26_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_22__26_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_22__26_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22__26___id)); return true;
    default: return false;
    }
}
bool C_S_9_22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22__26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__21_6::ctor_() {
    RT_FN("S__40__21_6.S__40__21_6");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28563 = 477.0; this->f_S_6_21_Z = rt::touint_d(_v28563); _v28563; });
    ({ rt::Value _v28564 = rt::trv(rt::VS(g::LS[8356])); this->f_S_1i = rt::slot_string(_v28564); _v28564; });
    ({ rt::Value _v28565 = rt::VS(g::LS[8357]); this->f_S__5e__21__23_ = rt::slot_string(_v28565); _v28565; });
    ({ rt::Value _v28566 = rt::trv(rt::VS(g::LS[8358])); this->f_S_7_23_ = rt::slot_string(_v28566); _v28566; });
    ({ double _v28567 = 1e+200; this->f_S__3e__3d_ = _v28567; _v28567; });
    ({ double _v28568 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28568); _v28568; });
}
bool C_S__40__21_6::g_S__2d_6() {
    RT_FN("S__40__21_6.S__2d_6_get");
    return ({ bool _t28571 = ({ bool _t28569 = (((double)(C_S_8G::sg_S__2c_P())) <= 1.0); _t28569 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__20__60___id)) : _t28569; }); _t28571 ? (bool)((({ bool _t28570 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) >= 6.0); _t28570 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) <= 8.0)) : _t28570; }))) : _t28571; });
    return false;
}
C_S__40__21_6* C_S__40__21_6::alloc_() {
    C_S__40__21_6* o = rt::make<C_S__40__21_6>();
    return o;
}
rt::Value C_S__40__21_6::mk_(rt::Value* a, int n) {
    C_S__40__21_6* o = alloc_();
    o->C_S__40__21_6::ctor_();
    return rt::VO(o);
}
bool C_S__40__21_6::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__40__21_6::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__40__21_6::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__40__21_6::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__40__21_6::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21_6::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21_6__id)); return true;
    default: return false;
    }
}
bool C_S__40__21_6::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21_6__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__21_6::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__21_h::ctor_() {
    RT_FN("S__40__21_h.S__40__21_h");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28572 = 721.0; this->f_S_6_21_Z = rt::touint_d(_v28572); _v28572; });
    ({ rt::Value _v28573 = rt::trv(rt::VS(g::LS[8359])); this->f_S_1i = rt::slot_string(_v28573); _v28573; });
    ({ rt::Value _v28574 = rt::VS(g::LS[8360]); this->f_S__5e__21__23_ = rt::slot_string(_v28574); _v28574; });
    ({ double _v28575 = 1e+152; this->f_S__3c_R = _v28575; _v28575; });
    ({ double _v28576 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28576); _v28576; });
    ({ double _v28577 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28577); _v28577; });
}
rt::Value C_S__40__21_h::m_S__40__22_() {
    RT_FN("S__40__21_h.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8311]), C_S__26_c::sm_S_6_21_T(C_S__40__21_h::sm_S__27__21_b(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__40__21_h::g_S__2d_6() {
    RT_FN("S__40__21_h.S__2d_6_get");
    return ({ bool _t28578 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t28578 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3c__21_j__id)) : _t28578; });
    return false;
}
double C_S__40__21_h::sm_S__27__21_b() {
    RT_FN("S__40__21_h.S__27__21_b");
    return (0.3 * rt::m_pow((C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), true, C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()) - C_S__26_c::sm_S_9_5b_(true, false, true)), 0.7));
    return 0.0;
}
C_S__40__21_h* C_S__40__21_h::alloc_() {
    C_S__40__21_h* o = rt::make<C_S__40__21_h>();
    return o;
}
rt::Value C_S__40__21_h::mk_(rt::Value* a, int n) {
    C_S__40__21_h* o = alloc_();
    o->C_S__40__21_h::ctor_();
    return rt::VO(o);
}
bool C_S__40__21_h::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__40__21_h::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__40__21_h::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__40__21_h::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__40__21_h::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__40__21_h::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21_h__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40__21_h::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21_h__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__21_h::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__40__21_n::ctor_() {
    RT_FN("S__40__21_n.S__40__21_n");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28579 = 746.0; this->f_S_6_21_Z = rt::touint_d(_v28579); _v28579; });
    ({ rt::Value _v28580 = rt::trv(rt::VS(g::LS[8361])); this->f_S_1i = rt::slot_string(_v28580); _v28580; });
    ({ rt::Value _v28581 = rt::VS(g::LS[8362]); this->f_S__5e__21__23_ = rt::slot_string(_v28581); _v28581; });
    ({ double _v28582 = 1e+21; this->f_S__23__21_m = _v28582; _v28582; });
    ({ double _v28583 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28583); _v28583; });
}
rt::Value C_S__40__21_n::m_S__40__22_() {
    RT_FN("S__40__21_n.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[384])));
    return rt::NUL;
}
bool C_S__40__21_n::g_S__2d_6() {
    RT_FN("S__40__21_n.S__2d_6_get");
    return ({ bool _t28584 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t28584 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__21__21_o__id)) : _t28584; });
    return false;
}
C_S__40__21_n* C_S__40__21_n::alloc_() {
    C_S__40__21_n* o = rt::make<C_S__40__21_n>();
    return o;
}
rt::Value C_S__40__21_n::mk_(rt::Value* a, int n) {
    C_S__40__21_n* o = alloc_();
    o->C_S__40__21_n::ctor_();
    return rt::VO(o);
}
bool C_S__40__21_n::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__40__21_n::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__40__21_n::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__40__21_n::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__40__21_n::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21_n::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21_n__id)); return true;
    default: return false;
    }
}
bool C_S__40__21_n::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21_n__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__21_n::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__21_S::ctor_() {
    RT_FN("S__60__21_S.S__60__21_S");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28585 = 548.0; this->f_S_6_21_Z = rt::touint_d(_v28585); _v28585; });
    ({ rt::Value _v28586 = rt::trv(rt::VS(g::LS[8363])); this->f_S_1i = rt::slot_string(_v28586); _v28586; });
    ({ rt::Value _v28587 = rt::VS(g::LS[8364]); this->f_S__5e__21__23_ = rt::slot_string(_v28587); _v28587; });
    ({ double _v28588 = 2e+154; this->f_S__3e__3d_ = _v28588; _v28588; });
    ({ double _v28589 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v28589); _v28589; });
}
rt::Value C_S__60__21_S::m_S__40__22_() {
    RT_FN("S__60__21_S.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[392]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[393]), rt::dcallv(rt::V(0.1), rt::N_toFixed, rt::V(1.0))), rt::trv(rt::VS(g::LS[394])), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S__60__21_S::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__60__21_S::g_S__2d_6() {
    RT_FN("S__60__21_S.S__2d_6_get");
    return ({ bool _t28590 = C_S_8G::sm_S__3c_P(g::SV.C_S__22_7__id); _t28590 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t28590; });
    return false;
}
double C_S__60__21_S::sm_S__27__21_b() {
    RT_FN("S__60__21_S.S__27__21_b");
    return (0.1 * C_S__23__21__21_::sm_S__2c__21_E());
    return 0.0;
}
C_S__60__21_S* C_S__60__21_S::alloc_() {
    C_S__60__21_S* o = rt::make<C_S__60__21_S>();
    return o;
}
rt::Value C_S__60__21_S::mk_(rt::Value* a, int n) {
    C_S__60__21_S* o = alloc_();
    o->C_S__60__21_S::ctor_();
    return rt::VO(o);
}
bool C_S__60__21_S::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__60__21_S::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__60__21_S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__60__21_S::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__60__21_S::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__60__21_S::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21_S__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__60__21_S__S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__21_S::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21_S__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__60__21_S__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__60__21_S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__26__21__5f_::ctor_() {
    RT_FN("S__26__21__5f_.S__26__21__5f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ bool _v28591 = true; this->f_S__25__21__3e_ = _v28591; _v28591; });
    ({ bool _v28592 = false; this->f_S_3e = _v28592; _v28592; });
}
rt::Value C_S__26__21__5f_::m_S__5b__21_C() {
    RT_FN("S__26__21__5f_.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ rt::Value _v28593 = rt::add(rt::VS(g::LS[1337]), rt::arr_at(g::SV.C_S__2d_D__S__5e__2d_, ((double)(this->f_S__21_G)))); this->f_S__5e__21__23_ = rt::slot_string(_v28593); _v28593; });
    return rt::NUL;
}
rt::Value C_S__26__21__5f_::m_S_8_21_s() {
    RT_FN("S__26__21__5f_.S_8_21_s");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
bool C_S__26__21__5f_::m_S_9_21_F() {
    RT_FN("S__26__21__5f_.S_9_21_F");
    if ((({ bool _t28594 = (((double)(C_S_8G::sg_S__2c_P())) == 2.0); _t28594 ? (bool)((!(((double)(this->f_S__2d__21__5e_)) == (-1.0)))) : _t28594; }) && ((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == ((double)(this->f_S__2d__21__5e_))) || (((double)(g::SV.C_S_8G__S__23_3)) == ((double)(this->f_S__2d__21__5e_)))))) {
        return false;
    }
    if ((((double)(C_S_8G::sg_S__2c_P())) < 3.0)) {
        return (((double)(C_S__26__21__5f_::sm_S__23__22__27_(this->f_S__3f__21__3d_))) >= ((double)(C_S__23__21__21_::sm_S_0U(this->f_S__21_G))));
    }
    return ((C_S__26_c::sm_S_1_22__2c_(this->f_S__21_G) + ((double)(this->f_S__25_w))) > C_S__23__21__21_::sm_S__2b__22_5(this->f_S__21_G));
    return false;
}
rt::Value C_S__26__21__5f_::m_S_8_5b_() {
    RT_FN("S__26__21__5f_.S_8_5b_");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
bool C_S__26__21__5f_::dm_S__3f__21_N_3() { return false; }
bool C_S__26__21__5f_::dm_S__3f__21_N_4() { return false; }
rt::Value C_S__26__21__5f_::m_S__3f__21_N(double p0, double p1, rt::Value p2, bool p3, bool p4) {
    double l_param1 = p0;
    double l_param2 = p1;
    rt::Value l_param3 = rt::slot_string(p2);
    bool l_param4 = p3;
    bool l_param5 = p4;
    rt::Value l_A__loc6_ = rt::NUL;
    int32_t l_A__loc7_ = 0;
    RT_FN("S__26__21__5f_.S__3f__21_N");
    (l_A__loc6_ = rt::slot_string(rt::NUL));
    (l_A__loc7_ = rt::toint_d(rt::m_min2(rt::m_floor(((100.0 * l_param1) / l_param2)), 100.0)));
    if (((!this->g_S__2d_6()) && (!this->f_S__3f__21_6))) {
        (l_A__loc6_ = rt::slot_string(rt::VS(g::LS[113])));
        if (l_param4) {
            return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[8365]), C_S__26_c::sm_S_8_21_Z(l_param1, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(l_param2, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[9])), l_param3));
        }
        if (l_param5) {
            return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[8365]), C_S__26_c::sm_S__23__21_R(l_param1, C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()), C_S__26_c::sm_S__23__21_R(l_param2, C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2())), rt::VS(g::LS[9])), l_param3));
        }
        return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[8365]), rt::dcallv(rt::V(l_param1), rt::N_toString), rt::dcallv(rt::V(l_param2), rt::N_toString)), rt::VS(g::LS[9])), l_param3));
    }
    if (l_param4) {
        return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[1347]), C_S__26_c::sm_S_8_21_Z(l_param2, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[9])), l_param3));
    }
    if (l_param5) {
        return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[1347]), C_S__26_c::sm_S__23__21_R(l_param2, C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2())), rt::VS(g::LS[9])), l_param3));
    }
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[1347]), rt::dcallv(rt::V(l_param2), rt::N_toString)), rt::VS(g::LS[9])), l_param3));
    return rt::NUL;
}
bool C_S__26__21__5f_::dm_S__21_S_2() { return true; }
rt::Value C_S__26__21__5f_::m_S__21_S(uint32_t p0, uint32_t p1, bool p2) {
    uint32_t l_param1 = p0;
    uint32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_A__loc6_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_A__loc7_ = rt::NUL;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S__26__21__5f_.S__21_S");
    (l_A__loc6_ = ({ rt::Value _t28595 = C_S_8G::sm_S__21__21_H(l_param1); rt::is_class(_t28595, C_S__26__21__5f_::CI) ? _t28595 : rt::NUL; }));
    (l_A__loc4_ = ({ rt::Value _t28596 = C_S_8G::sm_S__21__21_H(l_param2); rt::is_class(_t28596, C_S__26__21__5f_::CI) ? _t28596 : rt::NUL; }));
    (l_A__loc7_ = rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::add(({ rt::Value _o28597 = l_A__loc6_; C_S__26__21__5f_* _p28598 = rt::as_ptr<C_S__26__21__5f_>(_o28597); _p28598 ? _p28598->f_S_1i : rt::dget(_o28597, NM_S_1i); }), rt::VS(g::LS[194])), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, ((double)(({ rt::Value _o28599 = l_A__loc6_; C_S__26__21__5f_* _p28600 = rt::as_ptr<C_S__26__21__5f_>(_o28599); _p28600 ? _p28600->f_S__21_G : rt::toint(rt::dget(_o28599, NM_S__21_G)); }))))), rt::VS(g::LS[9])), rt::dcallv(rt::V((double)(({ rt::Value _o28601 = l_A__loc6_; C_S__26__21__5f_* _p28602 = rt::as_ptr<C_S__26__21__5f_>(_o28601); _p28602 ? _p28602->f_S__25_w : rt::toint(rt::dget(_o28601, NM_S__25_w)); }))), rt::N_toString)), rt::VS(g::LS[931]))));
    (l_A__loc5_ = rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::add(({ rt::Value _o28603 = l_A__loc4_; C_S__26__21__5f_* _p28604 = rt::as_ptr<C_S__26__21__5f_>(_o28603); _p28604 ? _p28604->f_S_1i : rt::dget(_o28603, NM_S_1i); }), rt::VS(g::LS[194])), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, ((double)(({ rt::Value _o28605 = l_A__loc4_; C_S__26__21__5f_* _p28606 = rt::as_ptr<C_S__26__21__5f_>(_o28605); _p28606 ? _p28606->f_S__21_G : rt::toint(rt::dget(_o28605, NM_S__21_G)); }))))), rt::VS(g::LS[9])), rt::dcallv(rt::V((double)(({ rt::Value _o28607 = l_A__loc4_; C_S__26__21__5f_* _p28608 = rt::as_ptr<C_S__26__21__5f_>(_o28607); _p28608 ? _p28608->f_S__25_w : rt::toint(rt::dget(_o28607, NM_S__25_w)); }))), rt::N_toString)), rt::VS(g::LS[931]))));
    if (((!this->g_S__2d_6()) && (!this->f_S__3f__21_6))) {
        return rt::slot_string(rt::add(rt::add(((l_param3 ? rt::trv(rt::VS(g::LS[8366])) : rt::VS(g::LS[113]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[8367]), (({ rt::Value _o28609 = l_A__loc6_; C_S__26__21__5f_* _p28610 = rt::as_ptr<C_S__26__21__5f_>(_o28609); _p28610 ? _p28610->f_S__3f__21_6 : rt::T(rt::dget(_o28609, NM_S__3f__21_6)); }) ? l_A__loc7_ : rt::trv(rt::VS(g::LS[1339]))), (({ rt::Value _o28611 = l_A__loc4_; C_S__26__21__5f_* _p28612 = rt::as_ptr<C_S__26__21__5f_>(_o28611); _p28612 ? _p28612->f_S__3f__21_6 : rt::T(rt::dget(_o28611, NM_S__3f__21_6)); }) ? l_A__loc5_ : rt::trv(rt::VS(g::LS[1339]))))));
    }
    return rt::slot_string(rt::add(rt::add(((l_param3 ? rt::trv(rt::VS(g::LS[8366])) : rt::VS(g::LS[113]))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[8367]), l_A__loc7_, l_A__loc5_)));
    return rt::NUL;
}
bool C_S__26__21__5f_::m_S__3e_I() {
    RT_FN("S__26__21__5f_.S__3e_I");
    return ({ bool _t28619 = ({ bool _t28614 = ({ bool _t28613 = (!this->f_S__3c__21_7); _t28613 ? (bool)(this->g_S__2b__21_a()) : _t28613; }); _t28614 ? (bool)((!this->f_S__3f__21_6)) : _t28614; }); _t28619 ? (bool)((({ bool _t28618 = ({ bool _t28616 = ({ bool _t28615 = (!(((double)(this->f_S__5e__21_C)) == ((double)(g::SV.C_S_8G__S__2d__21__5e_)))); _t28615 ? (bool)((!(((double)(this->f_S__5e__21_C)) == ((double)(g::SV.C_S_8G__S__23_3))))) : _t28615; }); _t28616 ? (bool)((!(((double)(this->f_S__5e__21_C)) == (-1.0)))) : _t28616; }); _t28618 ? _t28618 : (bool)(({ bool _t28617 = (!(((double)(this->f_S__3b__21__23_)) == (-1.0))); _t28617 ? (bool)((!(((double)(this->f_S__3b__21__23_)) == ((double)(g::SV.C_S_8G__S__2d__21__5e_))))) : _t28617; })); }))) : _t28619; });
    return false;
}
bool C_S__26__21__5f_::m_S__2b__60_() {
    RT_FN("S__26__21__5f_.S__2b__60_");
    return ({ bool _t28625 = ({ bool _t28623 = ({ bool _t28621 = ({ bool _t28620 = (!this->f_S__3c__21_7); _t28620 ? (bool)(this->g_S__2b__21_a()) : _t28620; }); _t28621 ? (bool)((!this->f_S__3f__21_6)) : _t28621; }); _t28623 ? (bool)((!(({ bool _t28622 = (!(((double)(this->f_S__5e__21_C)) == ((double)(g::SV.C_S_8G__S__2d__21__5e_)))); _t28622 ? (bool)((!(((double)(this->f_S__5e__21_C)) == ((double)(g::SV.C_S_8G__S__23_3))))) : _t28622; }) && (!(((double)(this->f_S__5e__21_C)) == (-1.0)))))) : _t28623; }); _t28625 ? (bool)((({ bool _t28624 = (((double)(this->f_S__3b__21__23_)) == (-1.0)); _t28624 ? _t28624 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == ((double)(this->f_S__3b__21__23_)))); }))) : _t28625; });
    return false;
}
bool C_S__26__21__5f_::m_S_9_21__3f_() {
    RT_FN("S__26__21__5f_.S_9_21__3f_");
    return ({ bool _t28632 = ({ bool _t28626 = (!this->f_S__3c__21_7); _t28626 ? (bool)(this->f_S__3f__21_6) : _t28626; }); _t28632 ? (bool)((({ bool _t28631 = (({ bool _t28630 = ({ bool _t28628 = ({ bool _t28627 = (!(((double)(this->f_S__2d__21__5e_)) == ((double)(g::SV.C_S_8G__S__2d__21__5e_)))); _t28627 ? (bool)((!(((double)(this->f_S__2d__21__5e_)) == ((double)(g::SV.C_S_8G__S__23_3))))) : _t28627; }); _t28628 ? (bool)((!(((double)(this->f_S__2d__21__5e_)) == (-1.0)))) : _t28628; }); _t28630 ? _t28630 : (bool)(({ bool _t28629 = (!(((double)(this->f_S__3b__21__23_)) == (-1.0))); _t28629 ? (bool)((!(((double)(this->f_S__3b__21__23_)) == ((double)(g::SV.C_S_8G__S__2d__21__5e_))))) : _t28629; })); })); _t28631 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) : _t28631; }))) : _t28632; });
    return false;
}
double C_S__26__21__5f_::g_S_9_21_U() {
    RT_FN("S__26__21__5f_.S_9_21_U_get");
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) {
        return 0.0;
    }
    if ((((double)(C_S_8G::sg_S__2c_P())) == 1.0)) {
        if ((((double)(this->f_S__25_w)) <= 780.0)) {
            return 0.0;
        }
        return (5e+41 * rt::m_pow(1.14, (((double)(this->f_S__25_w)) - 780.0)));
    }
    return (5e+122 * rt::m_pow(1.4, ((double)(this->f_S__25_w))));
    return 0.0;
}
bool C_S__26__21__5f_::g_S_9_21__25_() {
    RT_FN("S__26__21__5f_.S_9_21__25__get");
    if (((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) && (((double)(this->f_S__25_w)) < 5000.0))) {
        return false;
    }
    if (((((double)(C_S_8G::sg_S__2c_P())) >= 3.0) && (((double)(this->f_S__25_w)) < 405.0))) {
        return false;
    }
    if ((({ bool _t28634 = ({ bool _t28633 = (!(((double)(this->f_S__2d__21__5e_)) == (-1.0))); _t28633 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == ((double)(this->f_S__2d__21__5e_))))) : _t28633; }); _t28634 ? (bool)((!(((double)(g::SV.C_S_8G__S__23_3)) == ((double)(this->f_S__2d__21__5e_))))) : _t28634; }) && ((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) || ((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0) && this->m_S_9_21__3f_())))) {
        return false;
    }
    if (this->m_S_9_21_F()) {
        return false;
    }
    return true;
    return false;
}
bool C_S__26__21__5f_::g_S__2b__21_a() {
    RT_FN("S__26__21__5f_.S__2b__21_a_get");
    if (((((double)(this->f_S__25_w)) >= 5000.0) && ((((double)(C_S_8G::sg_S_8_21_H())) < 180.0) || (!C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id))))) {
        return false;
    }
    return (((double)(C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true))) >= ((double)(this->f_S__25_w)));
    return false;
}
bool C_S__26__21__5f_::g_S__2d_6() {
    RT_FN("S__26__21__5f_.S__2d_6_get");
    return this->g_S__20__21_3();
    return false;
}
bool C_S__26__21__5f_::g_S__20__21_3() {
    RT_FN("S__26__21__5f_.S__20__21_3_get");
    if ((!C_S__26_c::sm_S_9X())) {
        return false;
    }
    if ((({ bool _t28635 = (!(((double)(this->f_S__5e__21_C)) == (-1.0))); _t28635 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == ((double)(this->f_S__5e__21_C))))) : _t28635; }) && (!(((double)(g::SV.C_S_8G__S__23_3)) == ((double)(this->f_S__5e__21_C)))))) {
        return false;
    }
    if ((({ bool _t28636 = (!(((double)(this->f_S__25_w)) == 1.0)); _t28636 ? (bool)((((double)(this->f_S__25_w)) > 0.0)) : _t28636; }) && (((double)(C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true))) < ((double)(this->f_S__25_w))))) {
        return false;
    }
    return true;
    return false;
}
int32_t C_S__26__21__5f_::sm_S__23__22__27_(rt::Value p0) {
    rt::Value l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26__21__5f_.S__23__22__27_");
    (l_A__loc2_ = rt::toint_d(0.0));
    {
        std::vector<rt::Value> _lst28637;
        rt::each(rt::idx_get(g::SV.C_S_8G__S__2d_s, l_param1), _lst28637);
        for (const rt::Value& _x28638 : _lst28637) {
            l_A__loc3_ = _x28638;
            if (({ rt::Value _o28639 = l_A__loc3_; C_S__60_6* _p28640 = rt::as_ptr<C_S__60_6>(_o28639); _p28640 ? _p28640->f_S__3c__21_7 : rt::T(rt::dget(_o28639, NM_S__3c__21_7)); })) {
                if ((!(({ bool _t28643 = (((double)(C_S_8G::sg_S__2c_P())) == 2.0); _t28643 ? (bool)((!(((double)(({ rt::Value _o28641 = l_A__loc3_; C_S__60_6* _p28642 = rt::as_ptr<C_S__60_6>(_o28641); _p28642 ? _p28642->f_S__2d__21__5e_ : rt::toint(rt::dget(_o28641, NM_S__2d__21__5e_)); }))) == (-1.0)))) : _t28643; }) && ((((double)(({ rt::Value _o28644 = l_A__loc3_; C_S__60_6* _p28645 = rt::as_ptr<C_S__60_6>(_o28644); _p28645 ? _p28645->f_S__2d__21__5e_ : rt::toint(rt::dget(_o28644, NM_S__2d__21__5e_)); }))) == ((double)(g::SV.C_S_8G__S__2d__21__5e_))) || (((double)(({ rt::Value _o28646 = l_A__loc3_; C_S__60_6* _p28647 = rt::as_ptr<C_S__60_6>(_o28646); _p28647 ? _p28647->f_S__2d__21__5e_ : rt::toint(rt::dget(_o28646, NM_S__2d__21__5e_)); }))) == ((double)(g::SV.C_S_8G__S__23_3))))))) {
                    (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
                }
            }
        }
    }
    return l_A__loc2_;
    return 0;
}
C_S__26__21__5f_* C_S__26__21__5f_::alloc_() {
    C_S__26__21__5f_* o = rt::make<C_S__26__21__5f_>();
    return o;
}
rt::Value C_S__26__21__5f_::mk_(rt::Value* a, int n) {
    C_S__26__21__5f_* o = alloc_();
    o->C_S__26__21__5f_::ctor_();
    return rt::VO(o);
}
bool C_S__26__21__5f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__2b__21_a: out = rt::VB(g_S__2b__21_a()); return true;
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__21_G: out = rt::V((double)(f_S__21_G)); return true;
    case NM_S__25_w: out = rt::V((double)(f_S__25_w)); return true;
    case NM_S__3d_z: out = rt::VB(f_S__3d_z); return true;
    case NM_S__5e__21_C: out = rt::V((double)(f_S__5e__21_C)); return true;
    case NM_S__3b__21__23_: out = rt::V((double)(f_S__3b__21__23_)); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21_F: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3f__21_N: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21_S: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e_I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b__60_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__21__5f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__21_G: f_S__21_G = rt::toint(v); return true;
    case NM_S__25_w: f_S__25_w = rt::toint(v); return true;
    case NM_S__3d_z: f_S__3d_z = rt::T(v); return true;
    case NM_S__5e__21_C: f_S__5e__21_C = rt::toint(v); return true;
    case NM_S__3b__21__23_: f_S__3b__21__23_ = rt::toint(v); return true;
    case NM_S_9_21_U: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__2b__21_a: return false;
    case NM_S__2d_6: return false;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__21__5f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_9_21_F: out = rt::VB(m_S_9_21_F()); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__3f__21_N: out = m_S__3f__21_N(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, NAN), rt::arg<rt::Value>(a, n, 2, rt::UNDEF), rt::arg<bool>(a, n, 3, C_S__26__21__5f_::dm_S__3f__21_N_3()), rt::arg<bool>(a, n, 4, C_S__26__21__5f_::dm_S__3f__21_N_4())); return true;
    case NM_S__21_S: out = m_S__21_S(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<uint32_t>(a, n, 1, 0u), rt::arg<bool>(a, n, 2, C_S__26__21__5f_::dm_S__21_S_2())); return true;
    case NM_S__3e_I: out = rt::VB(m_S__3e_I()); return true;
    case NM_S__2b__60_: out = rt::VB(m_S__2b__60_()); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__2b__21_a: { rt::Value f = rt::VB(g_S__2b__21_a()); out = rt::call_value(f, a, n); return true; }
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S__21_G: { rt::Value f = rt::V((double)(f_S__21_G)); out = rt::call_value(f, a, n); return true; }
    case NM_S__25_w: { rt::Value f = rt::V((double)(f_S__25_w)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3d_z: { rt::Value f = rt::VB(f_S__3d_z); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21_C: { rt::Value f = rt::V((double)(f_S__5e__21_C)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3b__21__23_: { rt::Value f = rt::V((double)(f_S__3b__21__23_)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__21__5f_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_8_21_s: return true;
    case NM_S_9_21_F: return true;
    case NM_S_8_5b_: return true;
    case NM_S__3f__21_N: return true;
    case NM_S__21_S: return true;
    case NM_S__3e_I: return true;
    case NM_S__2b__60_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_9_21_U: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__2b__21_a: return false;
    case NM_S__2d_6: return false;
    case NM_S__20__21_3: return false;
    case NM_S__21_G: return false;
    case NM_S__25_w: return false;
    case NM_S__3d_z: return false;
    case NM_S__5e__21_C: return false;
    case NM_S__3b__21__23_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__21__5f_::smeth_(int id) {
    switch (id) {
    case NM_S__23__22__27_: return true;
    default: return false;
    }
}
bool C_S__26__21__5f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__23__22__27_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__21__5f_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21__5f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__22__27_: out = rt::V((double)(sm_S__23__22__27_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)))); return true;
    default: return false;
    }
}
void C_S__20__21_F::ctor_() {
    RT_FN("S__20__21_F.S__20__21_F");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28648 = 545.0; this->f_S_6_21_Z = rt::touint_d(_v28648); _v28648; });
    ({ rt::Value _v28649 = rt::trv(rt::VS(g::LS[8368])); this->f_S_1i = rt::slot_string(_v28649); _v28649; });
    ({ double _v28650 = 24.0; this->f_S__22__21_U = rt::toint_d(_v28650); _v28650; });
    ({ double _v28651 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v28651); _v28651; });
    ({ double _v28652 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28652); _v28652; });
    ({ double _v28653 = 5.0; this->f_S__3b__21__23_ = rt::toint_d(_v28653); _v28653; });
    ({ double _v28654 = 5.0; this->f_S__21_G = rt::toint_d(_v28654); _v28654; });
    ({ double _v28655 = 10.0; this->f_S__5e__21_C = rt::toint_d(_v28655); _v28655; });
    ({ double _v28656 = 700.0; this->f_S__25_w = rt::toint_d(_v28656); _v28656; });
    ({ bool _v28657 = false; this->f_S__3d_z = _v28657; _v28657; });
}
rt::Value C_S__20__21_F::m_S__40__22_() {
    RT_FN("S__20__21_F.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8369]), C_S__26_c::sm_S_6_21_T(C_S__20__21_F::sm_S_2_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__20__21_F::m_S_8_5b_() {
    RT_FN("S__20__21_F.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 10.0)), 250.0, rt::trv(rt::VS(g::LS[8370])), C_S__26__21__5f_::dm_S__3f__21_N_3(), C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S_1_5b___id, g::SV.C_S__5d__21_b__id, false)));
    return rt::NUL;
}
bool C_S__20__21_F::g_S__20__21_3() {
    RT_FN("S__20__21_F.S__20__21_3_get");
    return ({ bool _t28665 = ({ bool _t28662 = ({ bool _t28659 = ({ bool _t28658 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28658 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 10.0), rt::V(250.0))) : _t28658; }); _t28659 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 5.0)) : _t28659; }); _t28662 ? (bool)(({ rt::Value _o28660 = C_S_8G::sm_S__21__21_H(g::SV.C_S_1_5b___id); C_S__60_6* _p28661 = rt::as_ptr<C_S__60_6>(_o28660); _p28661 ? _p28661->f_S__3f__21_6 : rt::T(rt::dget(_o28660, NM_S__3f__21_6)); })) : _t28662; }); _t28665 ? (bool)(({ rt::Value _o28663 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5d__21_b__id); C_S__60_6* _p28664 = rt::as_ptr<C_S__60_6>(_o28663); _p28664 ? _p28664->f_S__3f__21_6 : rt::T(rt::dget(_o28663, NM_S__3f__21_6)); })) : _t28665; });
    return false;
}
bool C_S__20__21_F::g_S_9_21__25_() {
    RT_FN("S__20__21_F.S_9_21__25__get");
    return ({ bool _t28667 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t28667 ? (bool)((({ bool _t28666 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 5.0); _t28666 ? _t28666 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }))) : _t28667; });
    return false;
}
double C_S__20__21_F::sm_S_2_21__40_() {
    RT_FN("S__20__21_F.S_2_21__40_");
    return (8.0 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.8));
    return 0.0;
}
C_S__20__21_F* C_S__20__21_F::alloc_() {
    C_S__20__21_F* o = rt::make<C_S__20__21_F>();
    return o;
}
rt::Value C_S__20__21_F::mk_(rt::Value* a, int n) {
    C_S__20__21_F* o = alloc_();
    o->C_S__20__21_F::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__20__21_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__20__21_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__20__21_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__20__21_F::smeth_(int id) {
    switch (id) {
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S__20__21_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_F__id)); return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__21_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__21_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S__20__21_W::ctor_() {
    RT_FN("S__20__21_W.S__20__21_W");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28668 = 516.0; this->f_S_6_21_Z = rt::touint_d(_v28668); _v28668; });
    ({ rt::Value _v28669 = rt::trv(rt::VS(g::LS[8371])); this->f_S_1i = rt::slot_string(_v28669); _v28669; });
    ({ double _v28670 = 22.0; this->f_S__22__21_U = rt::toint_d(_v28670); _v28670; });
    ({ double _v28671 = 1.0; this->f_S__21_G = rt::toint_d(_v28671); _v28671; });
    ({ double _v28672 = 475.0; this->f_S__25_w = rt::toint_d(_v28672); _v28672; });
}
rt::Value C_S__20__21_W::m_S__40__22_() {
    RT_FN("S__20__21_W.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8372]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_W::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__20__21_W::m_S_8_21_s() {
    RT_FN("S__20__21_W.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8373])));
    return rt::NUL;
}
rt::Value C_S__20__21_W::m_S_8_5b_() {
    RT_FN("S__20__21_W.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sg_S_1_21_5(), 3000.0, rt::trv(rt::VS(g::LS[8374])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__20__21_W::g_S__20__21_3() {
    RT_FN("S__20__21_W.S__20__21_3_get");
    return ({ bool _t28673 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28673 ? (bool)((C_S_8G::sg_S_1_21_5() >= 3000.0)) : _t28673; });
    return false;
}
double C_S__20__21_W::sm_S__5e_y() {
    RT_FN("S__20__21_W.S__5e_y");
    return (3.0 * rt::m_pow(C_S__26_c::sm_S__21__21_8(), 0.35));
    return 0.0;
}
C_S__20__21_W* C_S__20__21_W::alloc_() {
    C_S__20__21_W* o = rt::make<C_S__20__21_W>();
    return o;
}
rt::Value C_S__20__21_W::mk_(rt::Value* a, int n) {
    C_S__20__21_W* o = alloc_();
    o->C_S__20__21_W::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_W::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__20__21_W::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__20__21_W::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__20__21_W::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__20__21_W::smeth_(int id) {
    switch (id) {
    case NM_S__5e_y: return true;
    default: return false;
    }
}
bool C_S__20__21_W::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_W__id)); return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__21_W::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_W__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__21_W::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5e_y: out = rt::V(sm_S__5e_y()); return true;
    default: return false;
    }
}
void C_S__20__22_5::ctor_() {
    RT_FN("S__20__22_5.S__20__22_5");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v28674 = 1029.0; this->f_S_6_21_Z = rt::touint_d(_v28674); _v28674; });
    ({ rt::Value _v28675 = rt::VS(g::LS[1048]); this->f_S__3f__21__3d_ = rt::slot_string(_v28675); _v28675; });
    ({ double _v28676 = 1e+100; this->f_S__23__22__2d_ = _v28676; _v28676; });
    ({ bool _v28677 = true; this->f_S__25__21__3e_ = _v28677; _v28677; });
    ({ bool _v28678 = true; this->f_S__3f_T = _v28678; _v28678; });
    ({ double _v28679 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v28679); _v28679; });
    ({ bool _v28680 = false; this->f_S_3e = _v28680; _v28680; });
}
int32_t C_S__20__22_5::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__20__22_5::dm_S_75_2() { return false; }
rt::Value C_S__20__22_5::dm_S_75_3() { return rt::NUL; }
double C_S__20__22_5::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__20__22_5.S_75");
    if ((((double)(l_param1)) == ((double)(this->f_S__5e__21_C)))) {
        return 1e+45;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__20__22_5::m_S__40__22_() {
    RT_FN("S__20__22_5.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8375]), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, ((double)(this->f_S__21_G))), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, ((double)(this->f_S__21_G))), C_S__26_c::sm_S_8_21_Z(C_S__20__22_5::sm_S__20__22_D(this->f_S__26__22_L, this->f_S__27__22_L), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__20__22_5::g_S__2d_6() {
    RT_FN("S__20__22_5.S__2d_6_get");
    return ({ bool _t28682 = ({ bool _t28681 = (((double)(C_S_8G::sg_S_8_21_H())) >= 180.0); _t28681 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t28681; }); _t28682 ? (bool)((((double)(C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true))) >= 5000.0)) : _t28682; });
    return false;
}
bool C_S__20__22_5::g_S__26_8() {
    RT_FN("S__20__22_5.S__26_8_get");
    return false;
    return false;
}
double C_S__20__22_5::sm_S__20__22_D(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__20__22_5.S__20__22_D");
    return (500.0 + rt::m_pow(rt::m_log((1.0 + rt::m_pow((((((double)(C_S__26_c::sm_S__2d__22__21_(l_param1, C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3()))) + 1.0)) * ((((double)(C_S__26_c::sm_S__2d__22__21_(l_param2, C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3()))) + 1.0))), 0.5))), 3.0));
    return 0.0;
}
double C_S__20__22_5::sm_S__2b__22_L(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__20__22_5.S__2b__22_L");
    return C_S__20__22_5::sm_S__20__22_D(({ rt::Value _o28684 = (({ rt::Value _t28683 = l_param1; rt::is_class(_t28683, C_S__20__22_5::CI) ? _t28683 : rt::NUL; })); C_S__20__22_5* _p28685 = rt::as_ptr<C_S__20__22_5>(_o28684); _p28685 ? _p28685->f_S__26__22_L : rt::toint(rt::dget(_o28684, NM_S__26__22_L)); }), ({ rt::Value _o28687 = (({ rt::Value _t28686 = l_param1; rt::is_class(_t28686, C_S__20__22_5::CI) ? _t28686 : rt::NUL; })); C_S__20__22_5* _p28688 = rt::as_ptr<C_S__20__22_5>(_o28687); _p28688 ? _p28688->f_S__27__22_L : rt::toint(rt::dget(_o28687, NM_S__27__22_L)); }));
    return 0.0;
}
C_S__20__22_5* C_S__20__22_5::alloc_() {
    C_S__20__22_5* o = rt::make<C_S__20__22_5>();
    return o;
}
rt::Value C_S__20__22_5::mk_(rt::Value* a, int n) {
    C_S__20__22_5* o = alloc_();
    o->C_S__20__22_5::ctor_();
    return rt::VO(o);
}
bool C_S__20__22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__21_G: out = rt::V((double)(f_S__21_G)); return true;
    case NM_S__5e__21_C: out = rt::V((double)(f_S__5e__21_C)); return true;
    case NM_S__26__22_L: out = rt::V((double)(f_S__26__22_L)); return true;
    case NM_S__27__22_L: out = rt::V((double)(f_S__27__22_L)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__21_G: f_S__21_G = rt::toint(v); return true;
    case NM_S__5e__21_C: f_S__5e__21_C = rt::toint(v); return true;
    case NM_S__26__22_L: f_S__26__22_L = rt::toint(v); return true;
    case NM_S__27__22_L: f_S__27__22_L = rt::toint(v); return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__20__22_5::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__20__22_5::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__20__22_5::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    case NM_S__21_G: { rt::Value f = rt::V((double)(f_S__21_G)); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21_C: { rt::Value f = rt::V((double)(f_S__5e__21_C)); out = rt::call_value(f, a, n); return true; }
    case NM_S__26__22_L: { rt::Value f = rt::V((double)(f_S__26__22_L)); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_L: { rt::Value f = rt::V((double)(f_S__27__22_L)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__22_5::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    case NM_S__21_G: return false;
    case NM_S__5e__21_C: return false;
    case NM_S__26__22_L: return false;
    case NM_S__27__22_L: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__22_5::smeth_(int id) {
    switch (id) {
    case NM_S__20__22_D: return true;
    case NM_S__2b__22_L: return true;
    default: return false;
    }
}
bool C_S__20__22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__22_D: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__22_L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__22_5::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__22_D: out = rt::V(sm_S__20__22_D(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0))); return true;
    case NM_S__2b__22_L: out = rt::V(sm_S__2b__22_L(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    default: return false;
    }
}
void C_S__20__22_F::ctor_() {
    RT_FN("S__20__22_F.S__20__22_F");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28689 = 1164.0; this->f_S_6_21_Z = rt::touint_d(_v28689); _v28689; });
    ({ rt::Value _v28690 = rt::trv(rt::VS(g::LS[8376])); this->f_S_1i = rt::slot_string(_v28690); _v28690; });
    ({ double _v28691 = 38.0; this->f_S__22__21_U = rt::toint_d(_v28691); _v28691; });
    ({ double _v28692 = 0.0; this->f_S__21_G = rt::toint_d(_v28692); _v28692; });
    ({ double _v28693 = 11875.0; this->f_S__25_w = rt::toint_d(_v28693); _v28693; });
}
rt::Value C_S__20__22_F::m_S__40__22_() {
    RT_FN("S__20__22_F.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8377])));
    return rt::NUL;
}
rt::Value C_S__20__22_F::m_S_8_5b_() {
    RT_FN("S__20__22_F.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__3d__60_(true), 5000.0, rt::trv(rt::VS(g::LS[8378])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__20__22_F::g_S__20__21_3() {
    RT_FN("S__20__22_F.S__20__21_3_get");
    return ({ bool _t28694 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28694 ? (bool)((C_S__26_c::sm_S__3d__60_(true) >= 5000.0)) : _t28694; });
    return false;
}
C_S__20__22_F* C_S__20__22_F::alloc_() {
    C_S__20__22_F* o = rt::make<C_S__20__22_F>();
    return o;
}
rt::Value C_S__20__22_F::mk_(rt::Value* a, int n) {
    C_S__20__22_F* o = alloc_();
    o->C_S__20__22_F::ctor_();
    return rt::VO(o);
}
bool C_S__20__22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__20__22_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__20__22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__20__22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__20__22_F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22_F__id)); return true;
    case NM_S__60__22_E: out = rt::V(g::SV.C_S__20__22_F__S__60__22_E); return true;
    default: return false;
    }
}
bool C_S__20__22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22_F__id = rt::touint(v); return true;
    case NM_S__60__22_E: g::SV.C_S__20__22_F__S__60__22_E = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__20__22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__3f_::ctor_() {
    RT_FN("S__20__3f_.S__20__3f_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28695 = 237.0; this->f_S_6_21_Z = rt::touint_d(_v28695); _v28695; });
    ({ rt::Value _v28696 = rt::trv(rt::VS(g::LS[8379])); this->f_S_1i = rt::slot_string(_v28696); _v28696; });
    ({ double _v28697 = 11.0; this->f_S__22__21_U = rt::toint_d(_v28697); _v28697; });
    ({ double _v28698 = 4.0; this->f_S__21_G = rt::toint_d(_v28698); _v28698; });
    ({ double _v28699 = 200.0; this->f_S__25_w = rt::toint_d(_v28699); _v28699; });
    ({ bool _v28700 = false; this->f_S__3d_z = _v28700; _v28700; });
}
rt::Value C_S__20__3f_::m_S__40__22_() {
    RT_FN("S__20__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8380]), C_S__26_c::sm_S_6_21_T(C_S__20__3f_::sm_S_4_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__20__3f_::m_S_8_5b_() {
    RT_FN("S__20__3f_.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__3f_k__id, g::SV.C_S_3_21__60___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__20__3f_::g_S__20__21_3() {
    RT_FN("S__20__3f_.S__20__21_3_get");
    return ({ bool _t28706 = ({ bool _t28703 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28703 ? (bool)(({ rt::Value _o28701 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3f_k__id); C_S__60_6* _p28702 = rt::as_ptr<C_S__60_6>(_o28701); _p28702 ? _p28702->f_S__3f__21_6 : rt::T(rt::dget(_o28701, NM_S__3f__21_6)); })) : _t28703; }); _t28706 ? (bool)(({ rt::Value _o28704 = C_S_8G::sm_S__21__21_H(g::SV.C_S_3_21__60___id); C_S__60_6* _p28705 = rt::as_ptr<C_S__60_6>(_o28704); _p28705 ? _p28705->f_S__3f__21_6 : rt::T(rt::dget(_o28704, NM_S__3f__21_6)); })) : _t28706; });
    return false;
}
double C_S__20__3f_::sm_S_4_21__40_() {
    RT_FN("S__20__3f_.S_4_21__40_");
    return (3.0 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7));
    return 0.0;
}
C_S__20__3f_* C_S__20__3f_::alloc_() {
    C_S__20__3f_* o = rt::make<C_S__20__3f_>();
    return o;
}
rt::Value C_S__20__3f_::mk_(rt::Value* a, int n) {
    C_S__20__3f_* o = alloc_();
    o->C_S__20__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__20__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__20__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__20__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__20__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__20__3f_::smeth_(int id) {
    switch (id) {
    case NM_S_4_21__40_: return true;
    default: return false;
    }
}
bool C_S__20__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__3f___id)); return true;
    case NM_ids: out = g::SV.C_S__20__3f___ids; return true;
    case NM_S_4_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__3f___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20__3f___ids = v; return true;
    default: return false;
    }
}
bool C_S__20__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_21__40_: out = rt::V(sm_S_4_21__40_()); return true;
    default: return false;
    }
}
void C_S__20_I::ctor_() {
    RT_FN("S__20_I.S__20_I");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28707 = 257.0; this->f_S_6_21_Z = rt::touint_d(_v28707); _v28707; });
    ({ rt::Value _v28708 = rt::trv(rt::VS(g::LS[8382])); this->f_S_1i = rt::slot_string(_v28708); _v28708; });
    ({ double _v28709 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v28709); _v28709; });
    ({ double _v28710 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28710); _v28710; });
    ({ double _v28711 = 2.0; this->f_S__22__21_U = rt::toint_d(_v28711); _v28711; });
    ({ double _v28712 = 1.0; this->f_S__21_G = rt::toint_d(_v28712); _v28712; });
    ({ double _v28713 = 2.0; this->f_S__5e__21_C = rt::toint_d(_v28713); _v28713; });
    ({ double _v28714 = 25.0; this->f_S__25_w = rt::toint_d(_v28714); _v28714; });
}
rt::Value C_S__20_I::m_S__40__22_() {
    RT_FN("S__20_I.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8383]), C_S__26_c::sm_S_8_21_Z(C_S__20_I::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__20_I::m_S_8_21_s() {
    RT_FN("S__20_I.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8384])));
    return rt::NUL;
}
rt::Value C_S__20_I::m_S_8_5b_() {
    RT_FN("S__20_I.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 15.0))), 12000.0, rt::trv(rt::VS(g::LS[8385])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__20_I::g_S__20__21_3() {
    RT_FN("S__20_I.S__20__21_3_get");
    return ({ bool _t28715 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28715 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 15.0)), rt::V(12000.0))) : _t28715; });
    return false;
}
double C_S__20_I::sm_S_2_21_W() {
    RT_FN("S__20_I.S_2_21_W");
    return (20.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_1_21_y(true, C_S__26_c::dsm_S_1_21_y_1()))), 2.0));
    return 0.0;
}
C_S__20_I* C_S__20_I::alloc_() {
    C_S__20_I* o = rt::make<C_S__20_I>();
    return o;
}
rt::Value C_S__20_I::mk_(rt::Value* a, int n) {
    C_S__20_I* o = alloc_();
    o->C_S__20_I::ctor_();
    return rt::VO(o);
}
bool C_S__20_I::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__20_I::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__20_I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__20_I::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__20_I::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S__20_I::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20_I__id)); return true;
    case NM_ids: out = g::SV.C_S__20_I__ids; return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20_I::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20_I__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20_I__ids = v; return true;
    default: return false;
    }
}
bool C_S__20_I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S__20_U::ctor_() {
    RT_FN("S__20_U.S__20_U");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28716 = 280.0; this->f_S_6_21_Z = rt::touint_d(_v28716); _v28716; });
    ({ rt::Value _v28717 = rt::trv(rt::VS(g::LS[8387])); this->f_S_1i = rt::slot_string(_v28717); _v28717; });
    ({ double _v28718 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v28718); _v28718; });
    ({ double _v28719 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28719); _v28719; });
    ({ double _v28720 = 11.0; this->f_S__22__21_U = rt::toint_d(_v28720); _v28720; });
    ({ double _v28721 = 3.0; this->f_S__21_G = rt::toint_d(_v28721); _v28721; });
    ({ double _v28722 = 5.0; this->f_S__5e__21_C = rt::toint_d(_v28722); _v28722; });
    ({ double _v28723 = 230.0; this->f_S__25_w = rt::toint_d(_v28723); _v28723; });
    ({ bool _v28724 = false; this->f_S__3d_z = _v28724; _v28724; });
}
rt::Value C_S__20_U::m_S__40__22_() {
    RT_FN("S__20_U.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8388]), C_S__26_c::sm_S_8_21_Z(C_S__20_U::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__20_U::m_S_8_5b_() {
    RT_FN("S__20_U.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__3c_C__id, g::SV.C_S__3b__25___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__20_U::g_S__20__21_3() {
    RT_FN("S__20_U.S__20__21_3_get");
    return ({ bool _t28730 = ({ bool _t28727 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28727 ? (bool)(({ rt::Value _o28725 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3c_C__id); C_S__60_6* _p28726 = rt::as_ptr<C_S__60_6>(_o28725); _p28726 ? _p28726->f_S__3f__21_6 : rt::T(rt::dget(_o28725, NM_S__3f__21_6)); })) : _t28727; }); _t28730 ? (bool)(({ rt::Value _o28728 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3b__25___id); C_S__60_6* _p28729 = rt::as_ptr<C_S__60_6>(_o28728); _p28729 ? _p28729->f_S__3f__21_6 : rt::T(rt::dget(_o28728, NM_S__3f__21_6)); })) : _t28730; });
    return false;
}
bool C_S__20_U::g_S_9_21__25_() {
    RT_FN("S__20_U.S_9_21__25__get");
    return ({ bool _t28732 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t28732 ? _t28732 : (bool)(({ bool _t28731 = (!this->m_S_9_21_F()); _t28731 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t28731; })); });
    return false;
}
double C_S__20_U::sm_S__2c__21_G() {
    RT_FN("S__20_U.S__2c__21_G");
    return (25.0 + (0.25 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(3.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.5)));
    return 0.0;
}
C_S__20_U* C_S__20_U::alloc_() {
    C_S__20_U* o = rt::make<C_S__20_U>();
    return o;
}
rt::Value C_S__20_U::mk_(rt::Value* a, int n) {
    C_S__20_U* o = alloc_();
    o->C_S__20_U::ctor_();
    return rt::VO(o);
}
bool C_S__20_U::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__20_U::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__20_U::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__20_U::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__20_U::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__20_U::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20_U__id)); return true;
    case NM_ids: out = g::SV.C_S__20_U__ids; return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20_U::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20_U__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20_U__ids = v; return true;
    default: return false;
    }
}
bool C_S__20_U::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__20_Y::ctor_() {
    RT_FN("S__20_Y.S__20_Y");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28733 = 449.0; this->f_S_6_21_Z = rt::touint_d(_v28733); _v28733; });
    ({ rt::Value _v28734 = rt::trv(rt::VS(g::LS[8390])); this->f_S_1i = rt::slot_string(_v28734); _v28734; });
    ({ double _v28735 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v28735); _v28735; });
    ({ double _v28736 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28736); _v28736; });
    ({ double _v28737 = 15.0; this->f_S__22__21_U = rt::toint_d(_v28737); _v28737; });
    ({ double _v28738 = 0.0; this->f_S__21_G = rt::toint_d(_v28738); _v28738; });
    ({ double _v28739 = 8.0; this->f_S__5e__21_C = rt::toint_d(_v28739); _v28739; });
    ({ double _v28740 = 300.0; this->f_S__25_w = rt::toint_d(_v28740); _v28740; });
}
rt::Value C_S__20_Y::m_S__40__22_() {
    RT_FN("S__20_Y.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8391]), C_S__26_c::sm_S_6_21_T(C_S__20_Y::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__20_Y::m_S_8_21_s() {
    RT_FN("S__20_Y.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8392])));
    return rt::NUL;
}
bool C_S__20_Y::m_S_9_21__3f_() {
    RT_FN("S__20_Y.S_9_21__3f_");
    return ({ bool _t28744 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t28744 ? _t28744 : (bool)(({ bool _t28743 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t28743 ? (bool)((!({ rt::Value _o28741 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id); C_S_84* _p28742 = rt::as_ptr<C_S_84>(_o28741); _p28742 ? _p28742->g_S__2d_6() : rt::T(rt::dget(_o28741, NM_S__2d_6)); }))) : _t28743; })); });
    return false;
}
rt::Value C_S__20_Y::m_S_8_5b_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__20_Y.S_8_5b_");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id));
    return rt::slot_string(this->m_S__3f__21_N((({ rt::Value _o28745 = l_A__loc1_; C_S_84* _p28746 = rt::as_ptr<C_S_84>(_o28745); _p28746 ? _p28746->g_S_2_2d_() : rt::tonum(rt::dget(_o28745, NM_S_2_2d_)); }) + ({ rt::Value _o28747 = l_A__loc1_; C_S_84* _p28748 = rt::as_ptr<C_S_84>(_o28747); _p28748 ? _p28748->g_S_5_21_L() : rt::tonum(rt::dget(_o28747, NM_S_5_21_L)); })), 8.0, rt::trv(rt::VS(g::LS[8393]), ({ rt::Value _o28749 = l_A__loc1_; C_S_84* _p28750 = rt::as_ptr<C_S_84>(_o28749); _p28750 ? _p28750->f_S_1i : rt::dget(_o28749, NM_S_1i); })), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__20_Y::g_S_9_21__25_() {
    RT_FN("S__20_Y.S_9_21__25__get");
    return ({ bool _t28755 = (!this->m_S_9_21_F()); _t28755 ? (bool)((({ bool _t28754 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0); _t28754 ? _t28754 : (bool)(({ bool _t28753 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t28753 ? (bool)(({ rt::Value _o28751 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id); C_S_84* _p28752 = rt::as_ptr<C_S_84>(_o28751); _p28752 ? _p28752->g_S__2d_6() : rt::T(rt::dget(_o28751, NM_S__2d_6)); })) : _t28753; })); }))) : _t28755; });
    return false;
}
bool C_S__20_Y::g_S__20__21_3() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__20_Y.S__20__21_3_get");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id));
    return ({ bool _t28760 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28760 ? (bool)(((({ rt::Value _o28756 = l_A__loc1_; C_S_84* _p28757 = rt::as_ptr<C_S_84>(_o28756); _p28757 ? _p28757->g_S_2_2d_() : rt::tonum(rt::dget(_o28756, NM_S_2_2d_)); }) + ({ rt::Value _o28758 = l_A__loc1_; C_S_84* _p28759 = rt::as_ptr<C_S_84>(_o28758); _p28759 ? _p28759->g_S_5_21_L() : rt::tonum(rt::dget(_o28758, NM_S_5_21_L)); })) >= 8.0)) : _t28760; });
    return false;
}
double C_S__20_Y::sm_S__26_s() {
    RT_FN("S__20_Y.S__26_s");
    return (25.0 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__5e_x__id, C_S__26_c::dsm_S_7i_1(), C_S__26_c::dsm_S_7i_2(), C_S__26_c::dsm_S_7i_3()), 0.9));
    return 0.0;
}
C_S__20_Y* C_S__20_Y::alloc_() {
    C_S__20_Y* o = rt::make<C_S__20_Y>();
    return o;
}
rt::Value C_S__20_Y::mk_(rt::Value* a, int n) {
    C_S__20_Y* o = alloc_();
    o->C_S__20_Y::ctor_();
    return rt::VO(o);
}
bool C_S__20_Y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__20_Y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__20_Y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__20_Y::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_8_5b_: return true;
    case NM_S_9_21__25_: return false;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__20_Y::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__20_Y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20_Y__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20_Y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20_Y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20_Y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__20_n::ctor_() {
    RT_FN("S__20_n.S__20_n");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28761 = 303.0; this->f_S_6_21_Z = rt::touint_d(_v28761); _v28761; });
    ({ rt::Value _v28762 = rt::trv(rt::VS(g::LS[8394])); this->f_S_1i = rt::slot_string(_v28762); _v28762; });
    ({ double _v28763 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v28763); _v28763; });
    ({ double _v28764 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28764); _v28764; });
    ({ double _v28765 = 0.0; this->f_S__22__21_U = rt::toint_d(_v28765); _v28765; });
    ({ double _v28766 = 0.0; this->f_S__21_G = rt::toint_d(_v28766); _v28766; });
    ({ double _v28767 = 0.0; this->f_S__5e__21_C = rt::toint_d(_v28767); _v28767; });
    ({ double _v28768 = 1.0; this->f_S__25_w = rt::toint_d(_v28768); _v28768; });
}
rt::Value C_S__20_n::m_S__40__22_() {
    RT_FN("S__20_n.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8395]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__20_n::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__20_n::m_S_9_21__3f_() {
    RT_FN("S__20_n.S_9_21__3f_");
    return ({ bool _t28770 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t28770 ? _t28770 : (bool)(({ bool _t28769 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t28769 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_1_21_N__id))) : _t28769; })); });
    return false;
}
bool C_S__20_n::g_S_9_21__25_() {
    RT_FN("S__20_n.S_9_21__25__get");
    return ({ bool _t28773 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t28773 ? _t28773 : (bool)(({ bool _t28772 = ({ bool _t28771 = (!this->m_S_9_21_F()); _t28771 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t28771; }); _t28772 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_1_21_N__id)) : _t28772; })); });
    return false;
}
double C_S__20_n::sm_S__26_s() {
    RT_FN("S__20_n.S__26_s");
    return (1.2 * rt::m_pow(C_S__26_c::sm_S_3_22__26_(true, C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()), 0.8));
    return 0.0;
}
C_S__20_n* C_S__20_n::alloc_() {
    C_S__20_n* o = rt::make<C_S__20_n>();
    return o;
}
rt::Value C_S__20_n::mk_(rt::Value* a, int n) {
    C_S__20_n* o = alloc_();
    o->C_S__20_n::ctor_();
    return rt::VO(o);
}
bool C_S__20_n::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__20_n::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__20_n::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__20_n::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__20_n::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__20_n::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20_n__id)); return true;
    case NM_ids: out = g::SV.C_S__20_n__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20_n::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20_n__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20_n__ids = v; return true;
    default: return false;
    }
}
bool C_S__20_n::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__21__21_O::ctor_() {
    RT_FN("S__21__21_O.S__21__21_O");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28774 = 281.0; this->f_S_6_21_Z = rt::touint_d(_v28774); _v28774; });
    ({ rt::Value _v28775 = rt::trv(rt::VS(g::LS[8397])); this->f_S_1i = rt::slot_string(_v28775); _v28775; });
    ({ double _v28776 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v28776); _v28776; });
    ({ double _v28777 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28777); _v28777; });
    ({ double _v28778 = 0.0; this->f_S__22__21_U = rt::toint_d(_v28778); _v28778; });
    ({ double _v28779 = 3.0; this->f_S__21_G = rt::toint_d(_v28779); _v28779; });
    ({ double _v28780 = 3.0; this->f_S__5e__21_C = rt::toint_d(_v28780); _v28780; });
    ({ double _v28781 = 1.0; this->f_S__25_w = rt::toint_d(_v28781); _v28781; });
}
rt::Value C_S__21__21_O::m_S__40__22_() {
    RT_FN("S__21__21_O.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8398]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b_X__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__21__21_O::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__21__21_O::m_S_9_21__3f_() {
    RT_FN("S__21__21_O.S_9_21__3f_");
    return ({ bool _t28783 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t28783 ? _t28783 : (bool)(({ bool _t28782 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t28782 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_8_5d___id))) : _t28782; })); });
    return false;
}
bool C_S__21__21_O::g_S_9_21__25_() {
    RT_FN("S__21__21_O.S_9_21__25__get");
    return ({ bool _t28786 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t28786 ? _t28786 : (bool)(({ bool _t28785 = ({ bool _t28784 = (!this->m_S_9_21_F()); _t28784 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t28784; }); _t28785 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_8_5d___id)) : _t28785; })); });
    return false;
}
double C_S__21__21_O::sm_S__26_s() {
    RT_FN("S__21__21_O.S__26_s");
    return (2.0 * rt::m_pow(C_S__26_c::sm_S_0_23_(C_S__26_c::dsm_S_0_23__0(), C_S__26_c::dsm_S_0_23__1()), 0.8));
    return 0.0;
}
C_S__21__21_O* C_S__21__21_O::alloc_() {
    C_S__21__21_O* o = rt::make<C_S__21__21_O>();
    return o;
}
rt::Value C_S__21__21_O::mk_(rt::Value* a, int n) {
    C_S__21__21_O* o = alloc_();
    o->C_S__21__21_O::ctor_();
    return rt::VO(o);
}
bool C_S__21__21_O::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__21__21_O::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__21__21_O::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__21__21_O::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__21__21_O::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__21__21_O::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21_O__id)); return true;
    case NM_ids: out = g::SV.C_S__21__21_O__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__21_O::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21_O__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21__21_O__ids = v; return true;
    default: return false;
    }
}
bool C_S__21__21_O::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__21__21_R::ctor_() {
    RT_FN("S__21__21_R.S__21__21_R");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28787 = 454.0; this->f_S_6_21_Z = rt::touint_d(_v28787); _v28787; });
    ({ rt::Value _v28788 = rt::trv(rt::VS(g::LS[8400])); this->f_S_1i = rt::slot_string(_v28788); _v28788; });
    ({ double _v28789 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v28789); _v28789; });
    ({ double _v28790 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28790); _v28790; });
    ({ double _v28791 = 13.0; this->f_S__22__21_U = rt::toint_d(_v28791); _v28791; });
    ({ double _v28792 = 5.0; this->f_S__21_G = rt::toint_d(_v28792); _v28792; });
    ({ double _v28793 = 6.0; this->f_S__5e__21_C = rt::toint_d(_v28793); _v28793; });
    ({ double _v28794 = 290.0; this->f_S__25_w = rt::toint_d(_v28794); _v28794; });
}
rt::Value C_S__21__21_R::m_S__40__22_() {
    RT_FN("S__21__21_R.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8401]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[8227]), C_S__26_c::sm_S_8_21_Z(200.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, C_S__26_c::dsm_S__3e__21__26__1(), C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), rt::trv(rt::VS(g::LS[1722]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S__21__21_R::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__21__21_R::m_S_8_21_s() {
    RT_FN("S__21__21_R.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8402])));
    return rt::NUL;
}
rt::Value C_S__21__21_R::m_S_8_5b_() {
    RT_FN("S__21__21_R.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_O__id, true), 3000.0, C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__21__21_R::m_S_9_21__3f_() {
    RT_FN("S__21__21_R.S_9_21__3f_");
    return ({ bool _t28796 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t28796 ? _t28796 : (bool)(({ bool _t28795 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t28795 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__3f_y__id))) : _t28795; })); });
    return false;
}
bool C_S__21__21_R::g_S__20__21_3() {
    RT_FN("S__21__21_R.S__20__21_3_get");
    return ({ bool _t28797 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28797 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_O__id, true) >= 3000.0)) : _t28797; });
    return false;
}
bool C_S__21__21_R::g_S_9_21__25_() {
    RT_FN("S__21__21_R.S_9_21__25__get");
    return ({ bool _t28800 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t28800 ? _t28800 : (bool)(({ bool _t28799 = ({ bool _t28798 = (!this->m_S_9_21_F()); _t28798 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t28798; }); _t28799 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__3f_y__id)) : _t28799; })); });
    return false;
}
double C_S__21__21_R::sm_S__26_s() {
    RT_FN("S__21__21_R.S__26_s");
    return (200.0 * C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_O__id, C_S_8G::dsm_S__25_Z_1()));
    return 0.0;
}
C_S__21__21_R* C_S__21__21_R::alloc_() {
    C_S__21__21_R* o = rt::make<C_S__21__21_R>();
    return o;
}
rt::Value C_S__21__21_R::mk_(rt::Value* a, int n) {
    C_S__21__21_R* o = alloc_();
    o->C_S__21__21_R::ctor_();
    return rt::VO(o);
}
bool C_S__21__21_R::dget(int id, rt::Value& out) {
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
bool C_S__21__21_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__21__21_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__21__21_R::dmeth(int id) {
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
bool C_S__21__21_R::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__21__21_R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21_R__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__21__21_R__S_1_21_S); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__21_R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21_R__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__21__21_R__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__21__21_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__21__21_::ctor_() {
    RT_FN("S__21__21_.S__21__21_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28801 = 312.0; this->f_S_6_21_Z = rt::touint_d(_v28801); _v28801; });
    ({ rt::Value _v28802 = rt::trv(rt::VS(g::LS[8403])); this->f_S_1i = rt::slot_string(_v28802); _v28802; });
    ({ double _v28803 = 4.0; this->f_S__22__21_U = rt::toint_d(_v28803); _v28803; });
    ({ double _v28804 = 5.0; this->f_S__21_G = rt::toint_d(_v28804); _v28804; });
    ({ double _v28805 = 120.0; this->f_S__25_w = rt::toint_d(_v28805); _v28805; });
}
rt::Value C_S__21__21_::m_S__40__22_() {
    RT_FN("S__21__21_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8404]), C_S__26_c::sm_S_6_21_T(C_S__21__21_::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__21__21_::m_S_8_21_s() {
    RT_FN("S__21__21_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8405])));
    return rt::NUL;
}
rt::Value C_S__21__21_::m_S_8_5b_() {
    RT_FN("S__21__21_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__21__2d_(true, true), 500.0, rt::trv(rt::VS(g::LS[8406])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__21__21_::g_S__20__21_3() {
    RT_FN("S__21__21_.S__20__21_3_get");
    return ({ bool _t28806 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28806 ? (bool)((C_S__26_c::sm_S__21__2d_(true, true) >= 500.0)) : _t28806; });
    return false;
}
double C_S__21__21_::sm_S__26_s() {
    RT_FN("S__21__21_.S__26_s");
    return (9.0 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.9));
    return 0.0;
}
C_S__21__21_* C_S__21__21_::alloc_() {
    C_S__21__21_* o = rt::make<C_S__21__21_>();
    return o;
}
rt::Value C_S__21__21_::mk_(rt::Value* a, int n) {
    C_S__21__21_* o = alloc_();
    o->C_S__21__21_::ctor_();
    return rt::VO(o);
}
bool C_S__21__21_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__21__21_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__21__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__21__21_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__21__21_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__21__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21___id)); return true;
    case NM_ids: out = g::SV.C_S__21__21___ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21__21___ids = v; return true;
    default: return false;
    }
}
bool C_S__21__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__21__22_4::ctor_() {
    RT_FN("S__21__22_4.S__21__22_4");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28807 = 1054.0; this->f_S_6_21_Z = rt::touint_d(_v28807); _v28807; });
    ({ rt::Value _v28808 = rt::trv(rt::VS(g::LS[8408])); this->f_S_1i = rt::slot_string(_v28808); _v28808; });
    ({ double _v28809 = 33.0; this->f_S__22__21_U = rt::toint_d(_v28809); _v28809; });
    ({ double _v28810 = 0.0; this->f_S__21_G = rt::toint_d(_v28810); _v28810; });
    ({ double _v28811 = 5875.0; this->f_S__25_w = rt::toint_d(_v28811); _v28811; });
}
rt::Value C_S__21__22_4::m_S__40__22_() {
    RT_FN("S__21__22_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8409]), C_S__26_c::sm_S_8_21_Z(C_S__21__22_4::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__21__22_4::m_S_8_5b_() {
    RT_FN("S__21__22_4.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 15.0))), 1000000000000.0, rt::trv(rt::VS(g::LS[8410])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__21__22_4::g_S__20__21_3() {
    RT_FN("S__21__22_4.S__20__21_3_get");
    return ({ bool _t28813 = ({ bool _t28812 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28812 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t28812; }); _t28813 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 15.0)), rt::V(1000000000000.0))) : _t28813; });
    return false;
}
double C_S__21__22_4::sm_S_9L() {
    RT_FN("S__21__22_4.S_9L");
    return rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__5d__21_s(rt::toint_d((-1.0)), false, false, C_S__26_c::dsm_S__5d__21_s_3()))), 1.75);
    return 0.0;
}
C_S__21__22_4* C_S__21__22_4::alloc_() {
    C_S__21__22_4* o = rt::make<C_S__21__22_4>();
    return o;
}
rt::Value C_S__21__22_4::mk_(rt::Value* a, int n) {
    C_S__21__22_4* o = alloc_();
    o->C_S__21__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__21__22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__21__22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__21__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__21__22_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__21__22_4::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__21__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22_4__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__21__22_5::ctor_() {
    RT_FN("S__21__22_5.S__21__22_5");
    (void)((this->C_S__20__22_5::ctor_(), rt::NUL));
    ({ double _v28814 = 1027.0; this->f_S_6_21_Z = rt::touint_d(_v28814); _v28814; });
    ({ rt::Value _v28815 = rt::trv(rt::VS(g::LS[8411])); this->f_S_1i = rt::slot_string(_v28815); _v28815; });
    ({ rt::Value _v28816 = rt::VS(g::LS[8412]); this->f_S__5e__21__23_ = rt::slot_string(_v28816); _v28816; });
    ({ double _v28817 = 3.0; this->f_S__21_G = rt::toint_d(_v28817); _v28817; });
    ({ double _v28818 = 3.0; this->f_S__5e__21_C = rt::toint_d(_v28818); _v28818; });
    ({ double _v28819 = 2.0; this->f_S__26__22_L = rt::toint_d(_v28819); _v28819; });
    ({ double _v28820 = 6.0; this->f_S__27__22_L = rt::toint_d(_v28820); _v28820; });
}
bool C_S__21__22_5::g_S__2d_6() {
    RT_FN("S__21__22_5.S__2d_6_get");
    return ({ bool _t28821 = this->C_S__20__22_5::g_S__2d_6(); _t28821 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5e__22_3__id)) : _t28821; });
    return false;
}
C_S__21__22_5* C_S__21__22_5::alloc_() {
    C_S__21__22_5* o = rt::make<C_S__21__22_5>();
    return o;
}
rt::Value C_S__21__22_5::mk_(rt::Value* a, int n) {
    C_S__21__22_5* o = alloc_();
    o->C_S__21__22_5::ctor_();
    return rt::VO(o);
}
bool C_S__21__22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__20__22_5::dget(id, out);
}
bool C_S__21__22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__20__22_5::dset(id, v);
}
bool C_S__21__22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__22_5::dcall(id, a, n, out);
}
bool C_S__21__22_5::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__20__22_5::dmeth(id);
}
bool C_S__21__22_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22_5__id)); return true;
    default: return false;
    }
}
bool C_S__21__22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21_D::ctor_() {
    RT_FN("S__21_D.S__21_D");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28822 = 306.0; this->f_S_6_21_Z = rt::touint_d(_v28822); _v28822; });
    ({ rt::Value _v28823 = rt::trv(rt::VS(g::LS[8413])); this->f_S_1i = rt::slot_string(_v28823); _v28823; });
    ({ double _v28824 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v28824); _v28824; });
    ({ double _v28825 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28825); _v28825; });
    ({ double _v28826 = 11.0; this->f_S__22__21_U = rt::toint_d(_v28826); _v28826; });
    ({ double _v28827 = 0.0; this->f_S__21_G = rt::toint_d(_v28827); _v28827; });
    ({ double _v28828 = 4.0; this->f_S__5e__21_C = rt::toint_d(_v28828); _v28828; });
    ({ double _v28829 = 225.0; this->f_S__25_w = rt::toint_d(_v28829); _v28829; });
    ({ bool _v28830 = false; this->f_S__3d_z = _v28830; _v28830; });
}
rt::Value C_S__21_D::m_S__40__22_() {
    RT_FN("S__21_D.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8414]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__40_y__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__21_D::sm_S_2_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__21_D::m_S_9_21__3f_() {
    RT_FN("S__21_D.S_9_21__3f_");
    return ({ bool _t28832 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t28832 ? _t28832 : (bool)(({ bool _t28831 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t28831 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__5b__21_9__id))) : _t28831; })); });
    return false;
}
rt::Value C_S__21_D::m_S_8_5b_() {
    RT_FN("S__21_D.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__3b_b__id, g::SV.C_S__5b__5e___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__21_D::g_S__20__21_3() {
    RT_FN("S__21_D.S__20__21_3_get");
    return ({ bool _t28838 = ({ bool _t28835 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28835 ? (bool)(({ rt::Value _o28833 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3b_b__id); C_S__60_6* _p28834 = rt::as_ptr<C_S__60_6>(_o28833); _p28834 ? _p28834->f_S__3f__21_6 : rt::T(rt::dget(_o28833, NM_S__3f__21_6)); })) : _t28835; }); _t28838 ? (bool)(({ rt::Value _o28836 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5b__5e___id); C_S__60_6* _p28837 = rt::as_ptr<C_S__60_6>(_o28836); _p28837 ? _p28837->f_S__3f__21_6 : rt::T(rt::dget(_o28836, NM_S__3f__21_6)); })) : _t28838; });
    return false;
}
bool C_S__21_D::g_S_9_21__25_() {
    RT_FN("S__21_D.S_9_21__25__get");
    return ({ bool _t28841 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t28841 ? _t28841 : (bool)(({ bool _t28840 = ({ bool _t28839 = (!this->m_S_9_21_F()); _t28839 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t28839; }); _t28840 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__5b__21_9__id)) : _t28840; })); });
    return false;
}
double C_S__21_D::sm_S_2_21__40_() {
    RT_FN("S__21_D.S_2_21__40_");
    return (5.0 * rt::m_pow(C_S_8G::sm_S__25_Z(g::SV.C_S__40_y__id, C_S_8G::dsm_S__25_Z_1()), 0.75));
    return 0.0;
}
C_S__21_D* C_S__21_D::alloc_() {
    C_S__21_D* o = rt::make<C_S__21_D>();
    return o;
}
rt::Value C_S__21_D::mk_(rt::Value* a, int n) {
    C_S__21_D* o = alloc_();
    o->C_S__21_D::ctor_();
    return rt::VO(o);
}
bool C_S__21_D::dget(int id, rt::Value& out) {
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
bool C_S__21_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__21_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__21_D::dmeth(int id) {
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
bool C_S__21_D::smeth_(int id) {
    switch (id) {
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S__21_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21_D__id)); return true;
    case NM_ids: out = g::SV.C_S__21_D__ids; return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21_D__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21_D__ids = v; return true;
    default: return false;
    }
}
bool C_S__21_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S__21_i::ctor_() {
    RT_FN("S__21_i.S__21_i");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28842 = 308.0; this->f_S_6_21_Z = rt::touint_d(_v28842); _v28842; });
    ({ rt::Value _v28843 = rt::trv(rt::VS(g::LS[8416])); this->f_S_1i = rt::slot_string(_v28843); _v28843; });
    ({ double _v28844 = 6.0; this->f_S__22__21_U = rt::toint_d(_v28844); _v28844; });
    ({ double _v28845 = 0.0; this->f_S__21_G = rt::toint_d(_v28845); _v28845; });
    ({ double _v28846 = 150.0; this->f_S__25_w = rt::toint_d(_v28846); _v28846; });
    ({ bool _v28847 = false; this->f_S__3d_z = _v28847; _v28847; });
}
rt::Value C_S__21_i::m_S__40__22_() {
    RT_FN("S__21_i.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8417]), C_S__26_c::sm_S_6_21_T(C_S__21_i::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__21_i::m_S_8_5b_() {
    RT_FN("S__21_i.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_0_24___id, g::SV.C_S__3e__21_R__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__21_i::g_S__20__21_3() {
    RT_FN("S__21_i.S__20__21_3_get");
    return ({ bool _t28853 = ({ bool _t28850 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28850 ? (bool)(({ rt::Value _o28848 = C_S_8G::sm_S__21__21_H(g::SV.C_S_0_24___id); C_S__60_6* _p28849 = rt::as_ptr<C_S__60_6>(_o28848); _p28849 ? _p28849->f_S__3f__21_6 : rt::T(rt::dget(_o28848, NM_S__3f__21_6)); })) : _t28850; }); _t28853 ? (bool)(({ rt::Value _o28851 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3e__21_R__id); C_S__60_6* _p28852 = rt::as_ptr<C_S__60_6>(_o28851); _p28852 ? _p28852->f_S__3f__21_6 : rt::T(rt::dget(_o28851, NM_S__3f__21_6)); })) : _t28853; });
    return false;
}
double C_S__21_i::sm_S__26_s() {
    RT_FN("S__21_i.S__26_s");
    return (10.0 * rt::m_pow((C_S__26_c::sm_S_57(C_S__26_c::dsm_S_57_0()) * 30.0), 0.6));
    return 0.0;
}
C_S__21_i* C_S__21_i::alloc_() {
    C_S__21_i* o = rt::make<C_S__21_i>();
    return o;
}
rt::Value C_S__21_i::mk_(rt::Value* a, int n) {
    C_S__21_i* o = alloc_();
    o->C_S__21_i::ctor_();
    return rt::VO(o);
}
bool C_S__21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__21_i::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__21_i::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21_i__id)); return true;
    case NM_ids: out = g::SV.C_S__21_i__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21_i__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21_i__ids = v; return true;
    default: return false;
    }
}
bool C_S__21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__23__21__23_::ctor_() {
    RT_FN("S__23__21__23_.S__23__21__23_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28854 = 424.0; this->f_S_6_21_Z = rt::touint_d(_v28854); _v28854; });
    ({ rt::Value _v28855 = rt::trv(rt::VS(g::LS[8419])); this->f_S_1i = rt::slot_string(_v28855); _v28855; });
    ({ double _v28856 = 14.0; this->f_S__22__21_U = rt::toint_d(_v28856); _v28856; });
    ({ double _v28857 = 4.0; this->f_S__21_G = rt::toint_d(_v28857); _v28857; });
    ({ double _v28858 = 270.0; this->f_S__25_w = rt::toint_d(_v28858); _v28858; });
}
rt::Value C_S__23__21__23_::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    bool l_A__loc3_ = false;
    double l_A__loc4_ = NAN;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__23__21__23_.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[8420]), C_S__26_c::sm_S_6_21_T(C_S__23__21__23_::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))));
    (l_A__loc3_ = false);
    (l_A__loc4_ = C_S__26_c::sm_S_3_22_N());
    {
        std::vector<rt::Value> _lst28859;
        rt::each(g::SV.C_S_8G__S__25__3c_, _lst28859);
        for (const rt::Value& _x28860 : _lst28859) {
            l_A__loc2_ = _x28860;
            if ((({ bool _t28865 = (((double)(({ rt::Value _o28861 = l_A__loc2_; C_S__60__21__3b_* _p28862 = rt::as_ptr<C_S__60__21__3b_>(_o28861); _p28862 ? _p28862->g_S__21_a() : rt::touint(rt::dget(_o28861, NM_S__21_a)); }))) > 0.0); _t28865 ? (bool)((((double)(({ rt::Value _o28863 = l_A__loc2_; C_S__60__21__3b_* _p28864 = rt::as_ptr<C_S__60__21__3b_>(_o28863); _p28864 ? _p28864->f_S_1_21_c : rt::touint(rt::dget(_o28863, NM_S_1_21_c)); }))) > 0.0)) : _t28865; }) && (((double)(({ rt::Value _o28866 = l_A__loc2_; C_S__60__21__3b_* _p28867 = rt::as_ptr<C_S__60__21__3b_>(_o28866); _p28867 ? _p28867->f_S_1_21_c : rt::touint(rt::dget(_o28866, NM_S_1_21_c)); }))) == l_A__loc4_))) {
                if ((!l_A__loc3_)) {
                    (l_A__loc3_ = true);
                    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[8421]), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o28868 = l_A__loc2_; C_S__60__21__3b_* _p28869 = rt::as_ptr<C_S__60__21__3b_>(_o28868); _p28869 ? _p28869->f_id : rt::touint(rt::dget(_o28868, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()))))));
                } else {
                    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[1597]), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o28870 = l_A__loc2_; C_S__60__21__3b_* _p28871 = rt::as_ptr<C_S__60__21__3b_>(_o28870); _p28871 ? _p28871->f_id : rt::touint(rt::dget(_o28870, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())))));
                }
            }
        }
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__23__21__23_::m_S_8_21_s() {
    RT_FN("S__23__21__23_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8422])));
    return rt::NUL;
}
rt::Value C_S__23__21__23_::m_S_8_5b_() {
    RT_FN("S__23__21__23_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__40__21__5b_(true, false, true), 20000000000.0, rt::trv(rt::VS(g::LS[3381])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__23__21__23_::g_S__20__21_3() {
    RT_FN("S__23__21__23_.S__20__21_3_get");
    return ({ bool _t28872 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28872 ? (bool)((C_S__26_c::sm_S__40__21__5b_(true, false, true) >= 20000000000.0)) : _t28872; });
    return false;
}
double C_S__23__21__23_::sm_S__26_s() {
    RT_FN("S__23__21__23_.S__26_s");
    return (60.0 + (60.0 * rt::m_pow(C_S__26_c::sm_S__21__21_8(), 0.6)));
    return 0.0;
}
C_S__23__21__23_* C_S__23__21__23_::alloc_() {
    C_S__23__21__23_* o = rt::make<C_S__23__21__23_>();
    return o;
}
rt::Value C_S__23__21__23_::mk_(rt::Value* a, int n) {
    C_S__23__21__23_* o = alloc_();
    o->C_S__23__21__23_::ctor_();
    return rt::VO(o);
}
bool C_S__23__21__23_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__23__21__23_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__23__21__23_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__23__21__23_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__23__21__23_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__23__21__23_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21__23___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__21__23_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21__23___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__21__23_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__23__21_8::ctor_() {
    RT_FN("S__23__21_8.S__23__21_8");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28873 = 428.0; this->f_S_6_21_Z = rt::touint_d(_v28873); _v28873; });
    ({ rt::Value _v28874 = rt::trv(rt::VS(g::LS[8423])); this->f_S_1i = rt::slot_string(_v28874); _v28874; });
    ({ double _v28875 = 15.0; this->f_S__22__21_U = rt::toint_d(_v28875); _v28875; });
    ({ double _v28876 = 1.0; this->f_S__21_G = rt::toint_d(_v28876); _v28876; });
    ({ double _v28877 = 6.0; this->f_S__5e__21_C = rt::toint_d(_v28877); _v28877; });
    ({ double _v28878 = 305.0; this->f_S__25_w = rt::toint_d(_v28878); _v28878; });
}
rt::Value C_S__23__21_8::m_S__40__22_() {
    RT_FN("S__23__21_8.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3556]), C_S__26_c::sm_S_8_21_Z(C_S__23__21_8::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__23__21_8::m_S_8_21_s() {
    RT_FN("S__23__21_8.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8424])));
    return rt::NUL;
}
rt::Value C_S__23__21_8::m_S_8_5b_() {
    RT_FN("S__23__21_8.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 56.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 56.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 56.0))), 18000.0, rt::trv(rt::VS(g::LS[8425])), false, true));
    return rt::NUL;
}
bool C_S__23__21_8::g_S__20__21_3() {
    RT_FN("S__23__21_8.S__20__21_3_get");
    return ({ bool _t28879 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28879 ? (bool)(rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 56.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 56.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 56.0)), rt::V(18000.0))) : _t28879; });
    return false;
}
double C_S__23__21_8::sm_S_9L() {
    RT_FN("S__23__21_8.S_9L");
    return (0.7 * rt::m_pow(C_S__26_c::sm_S_3L(false, C_S__26_c::dsm_S_3L_1()), 0.7));
    return 0.0;
}
C_S__23__21_8* C_S__23__21_8::alloc_() {
    C_S__23__21_8* o = rt::make<C_S__23__21_8>();
    return o;
}
rt::Value C_S__23__21_8::mk_(rt::Value* a, int n) {
    C_S__23__21_8* o = alloc_();
    o->C_S__23__21_8::ctor_();
    return rt::VO(o);
}
bool C_S__23__21_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__23__21_8::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__23__21_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__23__21_8::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__23__21_8::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__23__21_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21_8__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__21_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21_8__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__21_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__23__22__3e_::ctor_() {
    RT_FN("S__23__22__3e_.S__23__22__3e_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28880 = 1079.0; this->f_S_6_21_Z = rt::touint_d(_v28880); _v28880; });
    ({ rt::Value _v28881 = rt::trv(rt::VS(g::LS[8426])); this->f_S_1i = rt::slot_string(_v28881); _v28881; });
    ({ double _v28882 = 36.0; this->f_S__22__21_U = rt::toint_d(_v28882); _v28882; });
    ({ double _v28883 = 2.0; this->f_S__21_G = rt::toint_d(_v28883); _v28883; });
    ({ double _v28884 = 11375.0; this->f_S__25_w = rt::toint_d(_v28884); _v28884; });
}
rt::Value C_S__23__22__3e_::m_S__40__22_() {
    RT_FN("S__23__22__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8427]), C_S__26_c::sm_S_8_21_Z(C_S__23__22__3e_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__23__22__3e_::m_S_8_5b_() {
    RT_FN("S__23__22__3e_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N((({ rt::Value _o28885 = C_S_8G::sm_S__23_N(g::SV.C_S__25__2c___id); C_S_84* _p28886 = rt::as_ptr<C_S_84>(_o28885); _p28886 ? _p28886->g_S__3f_j() : rt::tonum(rt::dget(_o28885, NM_S__3f_j)); }) + ({ rt::Value _o28887 = C_S_8G::sm_S__23_N(g::SV.C_S__25__2c___id); C_S_84* _p28888 = rt::as_ptr<C_S_84>(_o28887); _p28888 ? _p28888->g_S__3c_q() : rt::tonum(rt::dget(_o28887, NM_S__3c_q)); })), 14400.0, rt::trv(rt::VS(g::LS[8428])), false, true));
    return rt::NUL;
}
bool C_S__23__22__3e_::g_S__20__21_3() {
    RT_FN("S__23__22__3e_.S__20__21_3_get");
    return ({ bool _t28893 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28893 ? (bool)(((({ rt::Value _o28889 = C_S_8G::sm_S__23_N(g::SV.C_S__25__2c___id); C_S_84* _p28890 = rt::as_ptr<C_S_84>(_o28889); _p28890 ? _p28890->g_S__3f_j() : rt::tonum(rt::dget(_o28889, NM_S__3f_j)); }) + ({ rt::Value _o28891 = C_S_8G::sm_S__23_N(g::SV.C_S__25__2c___id); C_S_84* _p28892 = rt::as_ptr<C_S_84>(_o28891); _p28892 ? _p28892->g_S__3c_q() : rt::tonum(rt::dget(_o28891, NM_S__3c_q)); })) >= 14400.0)) : _t28893; });
    return false;
}
double C_S__23__22__3e_::sm_S__2c__21_G() {
    RT_FN("S__23__22__3e_.S__2c__21_G");
    return 50.0;
    return 0.0;
}
C_S__23__22__3e_* C_S__23__22__3e_::alloc_() {
    C_S__23__22__3e_* o = rt::make<C_S__23__22__3e_>();
    return o;
}
rt::Value C_S__23__22__3e_::mk_(rt::Value* a, int n) {
    C_S__23__22__3e_* o = alloc_();
    o->C_S__23__22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__23__22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__23__22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__23__22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__23__22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__23__22__3e_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__23__22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__22__3e___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__22__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__23__22_5::ctor_() {
    RT_FN("S__23__22_5.S__23__22_5");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28894 = 1047.0; this->f_S_6_21_Z = rt::touint_d(_v28894); _v28894; });
    ({ rt::Value _v28895 = rt::trv(rt::VS(g::LS[8429])); this->f_S_1i = rt::slot_string(_v28895); _v28895; });
    ({ double _v28896 = 31.0; this->f_S__22__21_U = rt::toint_d(_v28896); _v28896; });
    ({ double _v28897 = 3.0; this->f_S__21_G = rt::toint_d(_v28897); _v28897; });
    ({ double _v28898 = 5375.0; this->f_S__25_w = rt::toint_d(_v28898); _v28898; });
    ({ double _v28899 = 6.0; this->f_S_9_21_m = rt::toint_d(_v28899); _v28899; });
}
rt::Value C_S__23__22_5::m_S__40__22_() {
    RT_FN("S__23__22_5.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8430]), C_S__26_c::sm_S_8_21_Z(C_S__23__22_5::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__23__22_5::sm_S_1_3d_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__23__22_5::m_S__3e_I() {
    RT_FN("S__23__22_5.S__3e_I");
    return ({ bool _t28902 = ({ bool _t28901 = ({ bool _t28900 = (!this->f_S__3c__21_7); _t28900 ? (bool)(this->g_S__2b__21_a()) : _t28900; }); _t28901 ? (bool)((!this->f_S__3f__21_6)) : _t28901; }); _t28902 ? (bool)((!(((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m))))) : _t28902; });
    return false;
}
bool C_S__23__22_5::m_S__2b__60_() {
    RT_FN("S__23__22_5.S__2b__60_");
    return ({ bool _t28905 = ({ bool _t28904 = ({ bool _t28903 = (!this->f_S__3c__21_7); _t28903 ? (bool)(this->g_S__2b__21_a()) : _t28903; }); _t28904 ? (bool)((!this->f_S__3f__21_6)) : _t28904; }); _t28905 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)))) : _t28905; });
    return false;
}
bool C_S__23__22_5::m_S_9_21__3f_() {
    RT_FN("S__23__22_5.S_9_21__3f_");
    return ({ bool _t28907 = ({ bool _t28906 = (!this->f_S__3c__21_7); _t28906 ? (bool)(this->f_S__3f__21_6) : _t28906; }); _t28907 ? (bool)((!(((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m))))) : _t28907; });
    return false;
}
bool C_S__23__22_5::g_S_9_21__25_() {
    RT_FN("S__23__22_5.S_9_21__25__get");
    return ({ bool _t28908 = (!this->m_S_9_21_F()); _t28908 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)))) : _t28908; });
    return false;
}
bool C_S__23__22_5::g_S__20__21_3() {
    RT_FN("S__23__22_5.S__20__21_3_get");
    return ({ bool _t28909 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28909 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t28909; });
    return false;
}
double C_S__23__22_5::sm_S__40__21__3f_() {
    RT_FN("S__23__22_5.S__40__21__3f_");
    return rt::m_pow(C_S__26_c::sm_S_9_21_P(g::SV.C_S_2_3c___id, false, true, C_S__26_c::dsm_S_9_21_P_3()), 0.2);
    return 0.0;
}
double C_S__23__22_5::sm_S_1_3d_() {
    RT_FN("S__23__22_5.S_1_3d_");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S_9_21_P(g::SV.C_S_2_3c___id, false, true, C_S__26_c::dsm_S_9_21_P_3()), 0.15));
    return 0.0;
}
C_S__23__22_5* C_S__23__22_5::alloc_() {
    C_S__23__22_5* o = rt::make<C_S__23__22_5>();
    return o;
}
rt::Value C_S__23__22_5::mk_(rt::Value* a, int n) {
    C_S__23__22_5* o = alloc_();
    o->C_S__23__22_5::ctor_();
    return rt::VO(o);
}
bool C_S__23__22_5::dget(int id, rt::Value& out) {
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
bool C_S__23__22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__23__22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__23__22_5::dmeth(int id) {
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
bool C_S__23__22_5::smeth_(int id) {
    switch (id) {
    case NM_S__40__21__3f_: return true;
    case NM_S_1_3d_: return true;
    default: return false;
    }
}
bool C_S__23__22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__22_5__id)); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_3d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    case NM_S_1_3d_: out = rt::V(sm_S_1_3d_()); return true;
    default: return false;
    }
}
void C_S__23__22_A::ctor_() {
    RT_FN("S__23__22_A.S__23__22_A");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28910 = 1072.0; this->f_S_6_21_Z = rt::touint_d(_v28910); _v28910; });
    ({ rt::Value _v28911 = rt::trv(rt::VS(g::LS[8431])); this->f_S_1i = rt::slot_string(_v28911); _v28911; });
    ({ double _v28912 = 36.0; this->f_S__22__21_U = rt::toint_d(_v28912); _v28912; });
    ({ double _v28913 = 4.0; this->f_S__21_G = rt::toint_d(_v28913); _v28913; });
    ({ double _v28914 = 11375.0; this->f_S__25_w = rt::toint_d(_v28914); _v28914; });
}
rt::Value C_S__23__22_A::m_S__40__22_() {
    RT_FN("S__23__22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8432]), C_S__26_c::sm_S_6_21_T(C_S__23__22_A::sm_S_4_21__40_(), 5.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__23__22_A::m_S_8_5b_() {
    RT_FN("S__23__22_A.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N((C_S__23__21__21_::sm_S_57() * 30.0), 1e+20, rt::trv(rt::VS(g::LS[628])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__23__22_A::g_S__20__21_3() {
    RT_FN("S__23__22_A.S__20__21_3_get");
    return ({ bool _t28915 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28915 ? (bool)(((C_S__23__21__21_::sm_S_57() * 30.0) >= 1e+20)) : _t28915; });
    return false;
}
double C_S__23__22_A::sm_S_4_21__40_() {
    RT_FN("S__23__22_A.S_4_21__40_");
    return rt::m_pow(rt::m_log((1.0 + (C_S__26_c::sm_S_57(C_S__26_c::dsm_S_57_0()) * 30.0))), 2.0);
    return 0.0;
}
C_S__23__22_A* C_S__23__22_A::alloc_() {
    C_S__23__22_A* o = rt::make<C_S__23__22_A>();
    return o;
}
rt::Value C_S__23__22_A::mk_(rt::Value* a, int n) {
    C_S__23__22_A* o = alloc_();
    o->C_S__23__22_A::ctor_();
    return rt::VO(o);
}
bool C_S__23__22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__23__22_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__23__22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__23__22_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__23__22_A::smeth_(int id) {
    switch (id) {
    case NM_S_4_21__40_: return true;
    default: return false;
    }
}
bool C_S__23__22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__22_A__id)); return true;
    case NM_S_4_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_21__40_: out = rt::V(sm_S_4_21__40_()); return true;
    default: return false;
    }
}
void C_S__23__3e_::ctor_() {
    RT_FN("S__23__3e_.S__23__3e_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28916 = 631.0; this->f_S_6_21_Z = rt::touint_d(_v28916); _v28916; });
    ({ rt::Value _v28917 = rt::trv(rt::VS(g::LS[8433])); this->f_S_1i = rt::slot_string(_v28917); _v28917; });
    ({ double _v28918 = 25.0; this->f_S__22__21_U = rt::toint_d(_v28918); _v28918; });
    ({ double _v28919 = 5.0; this->f_S__21_G = rt::toint_d(_v28919); _v28919; });
    ({ double _v28920 = 1275.0; this->f_S__25_w = rt::toint_d(_v28920); _v28920; });
}
rt::Value C_S__23__3e_::m_S__40__22_() {
    RT_FN("S__23__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8434]), C_S__26_c::sm_S_1_2c_(g::SV.C_S__3b__21__2b___id), C_S__26_c::sm_S_8_21_Z(C_S__23__3e_::sm_S__40_V(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__23__3e_::m_S_8_21_s() {
    RT_FN("S__23__3e_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8435])));
    return rt::NUL;
}
rt::Value C_S__23__3e_::m_S_8_5b_() {
    RT_FN("S__23__3e_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(({ rt::Value _o28921 = C_S_8G::sm_S__23_N(g::SV.C_S__3b__21__2b___id); C_S_84* _p28922 = rt::as_ptr<C_S_84>(_o28921); _p28922 ? _p28922->g_S__3f_j() : rt::tonum(rt::dget(_o28921, NM_S__3f_j)); }), 7200.0, rt::trv(rt::VS(g::LS[8436])), false, true));
    return rt::NUL;
}
bool C_S__23__3e_::g_S__20__21_3() {
    RT_FN("S__23__3e_.S__20__21_3_get");
    return ({ bool _t28925 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28925 ? (bool)((({ rt::Value _o28923 = C_S_8G::sm_S__23_N(g::SV.C_S__3b__21__2b___id); C_S_84* _p28924 = rt::as_ptr<C_S_84>(_o28923); _p28924 ? _p28924->g_S__3f_j() : rt::tonum(rt::dget(_o28923, NM_S__3f_j)); }) >= 7200.0)) : _t28925; });
    return false;
}
double C_S__23__3e_::sm_S__40_V() {
    RT_FN("S__23__3e_.S__40_V");
    return rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__3b__21__2b___id, false, false, C_S__26_c::dsm_S_7i_3()), 0.5);
    return 0.0;
}
C_S__23__3e_* C_S__23__3e_::alloc_() {
    C_S__23__3e_* o = rt::make<C_S__23__3e_>();
    return o;
}
rt::Value C_S__23__3e_::mk_(rt::Value* a, int n) {
    C_S__23__3e_* o = alloc_();
    o->C_S__23__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__23__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__23__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__23__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__23__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__23__3e_::smeth_(int id) {
    switch (id) {
    case NM_S__40_V: return true;
    default: return false;
    }
}
bool C_S__23__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__3e___id)); return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    default: return false;
    }
}
void C_S__25__21__2b_::ctor_() {
    RT_FN("S__25__21__2b_.S__25__21__2b_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28926 = 299.0; this->f_S_6_21_Z = rt::touint_d(_v28926); _v28926; });
    ({ rt::Value _v28927 = rt::trv(rt::VS(g::LS[8437])); this->f_S_1i = rt::slot_string(_v28927); _v28927; });
    ({ double _v28928 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v28928); _v28928; });
    ({ double _v28929 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28929); _v28929; });
    ({ double _v28930 = 1.0; this->f_S__22__21_U = rt::toint_d(_v28930); _v28930; });
    ({ double _v28931 = 0.0; this->f_S__21_G = rt::toint_d(_v28931); _v28931; });
    ({ double _v28932 = 2.0; this->f_S__5e__21_C = rt::toint_d(_v28932); _v28932; });
    ({ double _v28933 = 10.0; this->f_S__25_w = rt::toint_d(_v28933); _v28933; });
}
rt::Value C_S__25__21__2b_::m_S__40__22_() {
    RT_FN("S__25__21__2b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8401]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[8227]), C_S__26_c::sm_S_8_21_Z(160.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_0_2d___id, C_S__26_c::dsm_S__3e__21__26__1(), C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), rt::trv(rt::VS(g::LS[1722]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_0_2d___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S__25__21__2b_::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__25__21__2b_::m_S_8_21_s() {
    RT_FN("S__25__21__2b_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8438])));
    return rt::NUL;
}
rt::Value C_S__25__21__2b_::m_S_8_5b_() {
    RT_FN("S__25__21__2b_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sm_S__25_Z(g::SV.C_S_0_2d___id, true), 2000.0, C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_0_2d___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__25__21__2b_::m_S_9_21__3f_() {
    RT_FN("S__25__21__2b_.S_9_21__3f_");
    return ({ bool _t28935 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t28935 ? _t28935 : (bool)(({ bool _t28934 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t28934 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__5d__21__60___id))) : _t28934; })); });
    return false;
}
bool C_S__25__21__2b_::g_S__20__21_3() {
    RT_FN("S__25__21__2b_.S__20__21_3_get");
    return ({ bool _t28936 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28936 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S_0_2d___id, true) >= 2000.0)) : _t28936; });
    return false;
}
bool C_S__25__21__2b_::g_S_9_21__25_() {
    RT_FN("S__25__21__2b_.S_9_21__25__get");
    return ({ bool _t28939 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t28939 ? _t28939 : (bool)(({ bool _t28938 = ({ bool _t28937 = (!this->m_S_9_21_F()); _t28937 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t28937; }); _t28938 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__5d__21__60___id)) : _t28938; })); });
    return false;
}
double C_S__25__21__2b_::sm_S__26_s() {
    RT_FN("S__25__21__2b_.S__26_s");
    return (160.0 * C_S_8G::sm_S__25_Z(g::SV.C_S_0_2d___id, C_S_8G::dsm_S__25_Z_1()));
    return 0.0;
}
C_S__25__21__2b_* C_S__25__21__2b_::alloc_() {
    C_S__25__21__2b_* o = rt::make<C_S__25__21__2b_>();
    return o;
}
rt::Value C_S__25__21__2b_::mk_(rt::Value* a, int n) {
    C_S__25__21__2b_* o = alloc_();
    o->C_S__25__21__2b_::ctor_();
    return rt::VO(o);
}
bool C_S__25__21__2b_::dget(int id, rt::Value& out) {
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
bool C_S__25__21__2b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__25__21__2b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__25__21__2b_::dmeth(int id) {
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
bool C_S__25__21__2b_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__25__21__2b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21__2b___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__25__21__2b___S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__25__21__2b___ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__21__2b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21__2b___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__25__21__2b___S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__25__21__2b___ids = v; return true;
    default: return false;
    }
}
bool C_S__25__21__2b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__25__21_F::ctor_() {
    RT_FN("S__25__21_F.S__25__21_F");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28940 = 522.0; this->f_S_6_21_Z = rt::touint_d(_v28940); _v28940; });
    ({ rt::Value _v28941 = rt::trv(rt::VS(g::LS[8440])); this->f_S_1i = rt::slot_string(_v28941); _v28941; });
    ({ double _v28942 = 24.0; this->f_S__22__21_U = rt::toint_d(_v28942); _v28942; });
    ({ double _v28943 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v28943); _v28943; });
    ({ double _v28944 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28944); _v28944; });
    ({ double _v28945 = 4.0; this->f_S__3b__21__23_ = rt::toint_d(_v28945); _v28945; });
    ({ double _v28946 = 4.0; this->f_S__21_G = rt::toint_d(_v28946); _v28946; });
    ({ double _v28947 = 10.0; this->f_S__5e__21_C = rt::toint_d(_v28947); _v28947; });
    ({ double _v28948 = 700.0; this->f_S__25_w = rt::toint_d(_v28948); _v28948; });
    ({ bool _v28949 = false; this->f_S__3d_z = _v28949; _v28949; });
}
rt::Value C_S__25__21_F::m_S__40__22_() {
    RT_FN("S__25__21_F.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8441]), C_S__26_c::sm_S_6_21_T(C_S__25__21_F::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__25__21_F::m_S_8_5b_() {
    RT_FN("S__25__21_F.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 10.0)), 250.0, rt::trv(rt::VS(g::LS[8370])), C_S__26__21__5f_::dm_S__3f__21_N_3(), C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S_3_21_C__id, g::SV.C_S_1_21_a__id, false)));
    return rt::NUL;
}
bool C_S__25__21_F::g_S__20__21_3() {
    RT_FN("S__25__21_F.S__20__21_3_get");
    return ({ bool _t28957 = ({ bool _t28954 = ({ bool _t28951 = ({ bool _t28950 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28950 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 10.0), rt::V(250.0))) : _t28950; }); _t28951 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0)) : _t28951; }); _t28954 ? (bool)(({ rt::Value _o28952 = C_S_8G::sm_S__21__21_H(g::SV.C_S_3_21_C__id); C_S__60_6* _p28953 = rt::as_ptr<C_S__60_6>(_o28952); _p28953 ? _p28953->f_S__3f__21_6 : rt::T(rt::dget(_o28952, NM_S__3f__21_6)); })) : _t28954; }); _t28957 ? (bool)(({ rt::Value _o28955 = C_S_8G::sm_S__21__21_H(g::SV.C_S_1_21_a__id); C_S__60_6* _p28956 = rt::as_ptr<C_S__60_6>(_o28955); _p28956 ? _p28956->f_S__3f__21_6 : rt::T(rt::dget(_o28955, NM_S__3f__21_6)); })) : _t28957; });
    return false;
}
bool C_S__25__21_F::g_S_9_21__25_() {
    RT_FN("S__25__21_F.S_9_21__25__get");
    return ({ bool _t28959 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t28959 ? (bool)((({ bool _t28958 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0); _t28958 ? _t28958 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }))) : _t28959; });
    return false;
}
double C_S__25__21_F::sm_S__27__21_b() {
    RT_FN("S__25__21_F.S__27__21_b");
    return (5.0 * rt::m_pow(C_S__26_c::sm_S_3_22__26_(true, C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()), 0.55));
    return 0.0;
}
C_S__25__21_F* C_S__25__21_F::alloc_() {
    C_S__25__21_F* o = rt::make<C_S__25__21_F>();
    return o;
}
rt::Value C_S__25__21_F::mk_(rt::Value* a, int n) {
    C_S__25__21_F* o = alloc_();
    o->C_S__25__21_F::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__25__21_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__25__21_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__25__21_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__25__21_F::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__25__21_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_F__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__21_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__21_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__25__21_I::ctor_() {
    RT_FN("S__25__21_I.S__25__21_I");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28960 = 450.0; this->f_S_6_21_Z = rt::touint_d(_v28960); _v28960; });
    ({ rt::Value _v28961 = rt::trv(rt::VS(g::LS[8442])); this->f_S_1i = rt::slot_string(_v28961); _v28961; });
    ({ double _v28962 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v28962); _v28962; });
    ({ double _v28963 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v28963); _v28963; });
    ({ double _v28964 = 18.0; this->f_S__22__21_U = rt::toint_d(_v28964); _v28964; });
    ({ double _v28965 = 0.0; this->f_S__21_G = rt::toint_d(_v28965); _v28965; });
    ({ double _v28966 = 8.0; this->f_S__5e__21_C = rt::toint_d(_v28966); _v28966; });
    ({ double _v28967 = 375.0; this->f_S__25_w = rt::toint_d(_v28967); _v28967; });
    ({ bool _v28968 = false; this->f_S__3d_z = _v28968; _v28968; });
}
rt::Value C_S__25__21_I::m_S__40__22_() {
    RT_FN("S__25__21_I.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8443]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__25__21_J__S__20_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__25__21_I::m_S_8_5b_() {
    RT_FN("S__25__21_I.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_7_21_C__id, g::SV.C_S__22__21_I__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__25__21_I::m_S_9_21__3f_() {
    RT_FN("S__25__21_I.S_9_21__3f_");
    return ({ bool _t28972 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t28972 ? _t28972 : (bool)(({ bool _t28971 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t28971 ? (bool)((!({ rt::Value _o28969 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id); C_S_84* _p28970 = rt::as_ptr<C_S_84>(_o28969); _p28970 ? _p28970->g_S__2d_6() : rt::T(rt::dget(_o28969, NM_S__2d_6)); }))) : _t28971; })); });
    return false;
}
bool C_S__25__21_I::g_S__20__21_3() {
    RT_FN("S__25__21_I.S__20__21_3_get");
    return ({ bool _t28978 = ({ bool _t28975 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28975 ? (bool)(({ rt::Value _o28973 = C_S_8G::sm_S__21__21_H(g::SV.C_S_7_21_C__id); C_S__60_6* _p28974 = rt::as_ptr<C_S__60_6>(_o28973); _p28974 ? _p28974->f_S__3f__21_6 : rt::T(rt::dget(_o28973, NM_S__3f__21_6)); })) : _t28975; }); _t28978 ? (bool)(({ rt::Value _o28976 = C_S_8G::sm_S__21__21_H(g::SV.C_S__22__21_I__id); C_S__60_6* _p28977 = rt::as_ptr<C_S__60_6>(_o28976); _p28977 ? _p28977->f_S__3f__21_6 : rt::T(rt::dget(_o28976, NM_S__3f__21_6)); })) : _t28978; });
    return false;
}
bool C_S__25__21_I::g_S_9_21__25_() {
    RT_FN("S__25__21_I.S_9_21__25__get");
    return ({ bool _t28983 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t28983 ? _t28983 : (bool)(({ bool _t28982 = ({ bool _t28979 = (!this->m_S_9_21_F()); _t28979 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t28979; }); _t28982 ? (bool)(({ rt::Value _o28980 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id); C_S_84* _p28981 = rt::as_ptr<C_S_84>(_o28980); _p28981 ? _p28981->g_S__2d_6() : rt::T(rt::dget(_o28980, NM_S__2d_6)); })) : _t28982; })); });
    return false;
}
C_S__25__21_I* C_S__25__21_I::alloc_() {
    C_S__25__21_I* o = rt::make<C_S__25__21_I>();
    return o;
}
rt::Value C_S__25__21_I::mk_(rt::Value* a, int n) {
    C_S__25__21_I* o = alloc_();
    o->C_S__25__21_I::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_I::dget(int id, rt::Value& out) {
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
bool C_S__25__21_I::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__25__21_I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__25__21_I::dmeth(int id) {
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
bool C_S__25__21_I::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21_I::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_I__id)); return true;
    default: return false;
    }
}
bool C_S__25__21_I::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_I__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__21_I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__21_P::ctor_() {
    RT_FN("S__25__21_P.S__25__21_P");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v28984 = 317.0; this->f_S_6_21_Z = rt::touint_d(_v28984); _v28984; });
    ({ rt::Value _v28985 = rt::trv(rt::VS(g::LS[8444])); this->f_S_1i = rt::slot_string(_v28985); _v28985; });
    ({ double _v28986 = 6.0; this->f_S__22__21_U = rt::toint_d(_v28986); _v28986; });
    ({ double _v28987 = 5.0; this->f_S__21_G = rt::toint_d(_v28987); _v28987; });
    ({ double _v28988 = 180.0; this->f_S__25_w = rt::toint_d(_v28988); _v28988; });
    ({ bool _v28989 = false; this->f_S__3d_z = _v28989; _v28989; });
}
rt::Value C_S__25__21_P::m_S__40__22_() {
    RT_FN("S__25__21_P.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8445]), C_S__26_c::sm_S_8_21_Z(15.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__25__21_P::m_S_8_21_s() {
    RT_FN("S__25__21_P.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8446])));
    return rt::NUL;
}
rt::Value C_S__25__21_P::m_S_8_5b_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__25__21_P.S_8_5b_");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S__3b__21__2b___id));
    return rt::slot_string(rt::add(this->m_S__3f__21_N((({ rt::Value _o28990 = l_A__loc1_; C_S_84* _p28991 = rt::as_ptr<C_S_84>(_o28990); _p28991 ? _p28991->g_S_2_2d_() : rt::tonum(rt::dget(_o28990, NM_S_2_2d_)); }) + ({ rt::Value _o28992 = l_A__loc1_; C_S_84* _p28993 = rt::as_ptr<C_S_84>(_o28992); _p28993 ? _p28993->g_S_5_21_L() : rt::tonum(rt::dget(_o28992, NM_S_5_21_L)); })), 150.0, rt::trv(rt::VS(g::LS[8393]), ({ rt::Value _o28994 = l_A__loc1_; C_S_84* _p28995 = rt::as_ptr<C_S_84>(_o28994); _p28995 ? _p28995->f_S_1i : rt::dget(_o28994, NM_S_1i); })), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__2d__27___id, g::SV.C_S__3c_C__id, false)));
    return rt::NUL;
}
bool C_S__25__21_P::g_S__20__21_3() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__25__21_P.S__20__21_3_get");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S__3b__21__2b___id));
    return ({ bool _t29006 = ({ bool _t29001 = ({ bool _t28998 = this->C_S__26__21__5f_::g_S__20__21_3(); _t28998 ? (bool)(({ rt::Value _o28996 = C_S_8G::sm_S__21__21_H(g::SV.C_S__2d__27___id); C_S__60_6* _p28997 = rt::as_ptr<C_S__60_6>(_o28996); _p28997 ? _p28997->f_S__3f__21_6 : rt::T(rt::dget(_o28996, NM_S__3f__21_6)); })) : _t28998; }); _t29001 ? (bool)(({ rt::Value _o28999 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3c_C__id); C_S__60_6* _p29000 = rt::as_ptr<C_S__60_6>(_o28999); _p29000 ? _p29000->f_S__3f__21_6 : rt::T(rt::dget(_o28999, NM_S__3f__21_6)); })) : _t29001; }); _t29006 ? (bool)(((({ rt::Value _o29002 = l_A__loc1_; C_S_84* _p29003 = rt::as_ptr<C_S_84>(_o29002); _p29003 ? _p29003->g_S_2_2d_() : rt::tonum(rt::dget(_o29002, NM_S_2_2d_)); }) + ({ rt::Value _o29004 = l_A__loc1_; C_S_84* _p29005 = rt::as_ptr<C_S_84>(_o29004); _p29005 ? _p29005->g_S_5_21_L() : rt::tonum(rt::dget(_o29004, NM_S_5_21_L)); })) >= 150.0)) : _t29006; });
    return false;
}
C_S__25__21_P* C_S__25__21_P::alloc_() {
    C_S__25__21_P* o = rt::make<C_S__25__21_P>();
    return o;
}
rt::Value C_S__25__21_P::mk_(rt::Value* a, int n) {
    C_S__25__21_P* o = alloc_();
    o->C_S__25__21_P::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_P::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__25__21_P::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__25__21_P::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__25__21_P::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__25__21_P::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21_P::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_P__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__25__21_P__S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__25__21_P__ids; return true;
    default: return false;
    }
}
bool C_S__25__21_P::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_P__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__25__21_P__S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__25__21_P__ids = v; return true;
    default: return false;
    }
}
bool C_S__25__21_P::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__21_j::ctor_() {
    RT_FN("S__25__21_j.S__25__21_j");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29007 = 709.0; this->f_S_6_21_Z = rt::touint_d(_v29007); _v29007; });
    ({ rt::Value _v29008 = rt::trv(rt::VS(g::LS[8448])); this->f_S_1i = rt::slot_string(_v29008); _v29008; });
    ({ double _v29009 = 29.0; this->f_S__22__21_U = rt::toint_d(_v29009); _v29009; });
    ({ double _v29010 = 4.0; this->f_S__21_G = rt::toint_d(_v29010); _v29010; });
    ({ double _v29011 = 3400.0; this->f_S__25_w = rt::toint_d(_v29011); _v29011; });
    ({ bool _v29012 = false; this->f_S__3d_z = _v29012; _v29012; });
}
rt::Value C_S__25__21_j::m_S__40__22_() {
    RT_FN("S__25__21_j.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[8449]), C_S__26_c::sm_S_8_21_Z(C_S__25__21_j::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[8450]), C_S__26_c::sm_S_8_21_Z(C_S__25__21_j::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
rt::Value C_S__25__21_j::m_S_8_21_s() {
    RT_FN("S__25__21_j.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8451])));
    return rt::NUL;
}
rt::Value C_S__25__21_j::m_S_8_5b_() {
    RT_FN("S__25__21_j.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(C_S__26_c::sm_S__40__21__5b_(true, false, true), g::SV.C_S__25__21_j__S__2c__26_, rt::trv(rt::VS(g::LS[3381])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__3d__21_h__id, g::SV.C_S_5_21_h__id, false)));
    return rt::NUL;
}
bool C_S__25__21_j::g_S__20__21_3() {
    RT_FN("S__25__21_j.S__20__21_3_get");
    return ({ bool _t29020 = ({ bool _t29017 = ({ bool _t29014 = ({ bool _t29013 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29013 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_i__id)) : _t29013; }); _t29014 ? (bool)((C_S__26_c::sm_S__40__21__5b_(true, false, true) >= g::SV.C_S__25__21_j__S__2c__26_)) : _t29014; }); _t29017 ? (bool)(({ rt::Value _o29015 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3d__21_h__id); C_S__60_6* _p29016 = rt::as_ptr<C_S__60_6>(_o29015); _p29016 ? _p29016->f_S__3f__21_6 : rt::T(rt::dget(_o29015, NM_S__3f__21_6)); })) : _t29017; }); _t29020 ? (bool)(({ rt::Value _o29018 = C_S_8G::sm_S__21__21_H(g::SV.C_S_5_21_h__id); C_S__60_6* _p29019 = rt::as_ptr<C_S__60_6>(_o29018); _p29019 ? _p29019->f_S__3f__21_6 : rt::T(rt::dget(_o29018, NM_S__3f__21_6)); })) : _t29020; });
    return false;
}
double C_S__25__21_j::sm_S__2c_J() {
    RT_FN("S__25__21_j.S__2c_J");
    return (3.0 * rt::m_pow(C_S__26_c::sm_S__60__21__3d_(false), 2.25));
    return 0.0;
}
double C_S__25__21_j::sm_S__23__21_Y() {
    RT_FN("S__25__21_j.S__23__21_Y");
    return 300.0;
    return 0.0;
}
C_S__25__21_j* C_S__25__21_j::alloc_() {
    C_S__25__21_j* o = rt::make<C_S__25__21_j>();
    return o;
}
rt::Value C_S__25__21_j::mk_(rt::Value* a, int n) {
    C_S__25__21_j* o = alloc_();
    o->C_S__25__21_j::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_j::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__25__21_j::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__25__21_j::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__25__21_j::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__25__21_j::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__25__21_j::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_j__id)); return true;
    case NM_S__2c__26_: out = rt::V(g::SV.C_S__25__21_j__S__2c__26_); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__21_j::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_j__id = rt::touint(v); return true;
    case NM_S__2c__26_: g::SV.C_S__25__21_j__S__2c__26_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__25__21_j::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__25__22_5::ctor_() {
    RT_FN("S__25__22_5.S__25__22_5");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29021 = 1033.0; this->f_S_6_21_Z = rt::touint_d(_v29021); _v29021; });
    ({ rt::Value _v29022 = rt::trv(rt::VS(g::LS[8452])); this->f_S_1i = rt::slot_string(_v29022); _v29022; });
    ({ double _v29023 = 33.0; this->f_S__22__21_U = rt::toint_d(_v29023); _v29023; });
    ({ double _v29024 = 4.0; this->f_S__21_G = rt::toint_d(_v29024); _v29024; });
    ({ double _v29025 = 5875.0; this->f_S__25_w = rt::toint_d(_v29025); _v29025; });
}
rt::Value C_S__25__22_5::m_S__40__22_() {
    RT_FN("S__25__22_5.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8453]), C_S__26_c::sm_S_8_21_Z(C_S__25__22_5::sm_S_1_3d_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__25__22_5::m_S_8_5b_() {
    RT_FN("S__25__22_5.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__40__21__5b_(true, false, true), 1e+40, rt::trv(rt::VS(g::LS[3381])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__25__22_5::g_S__20__21_3() {
    RT_FN("S__25__22_5.S__20__21_3_get");
    return ({ bool _t29027 = ({ bool _t29026 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29026 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t29026; }); _t29027 ? (bool)((C_S__26_c::sm_S__40__21__5b_(true, false, true) >= 1e+40)) : _t29027; });
    return false;
}
double C_S__25__22_5::sm_S_1_3d_() {
    RT_FN("S__25__22_5.S_1_3d_");
    return rt::m_pow((0.5 * rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2())))), 1.5);
    return 0.0;
}
C_S__25__22_5* C_S__25__22_5::alloc_() {
    C_S__25__22_5* o = rt::make<C_S__25__22_5>();
    return o;
}
rt::Value C_S__25__22_5::mk_(rt::Value* a, int n) {
    C_S__25__22_5* o = alloc_();
    o->C_S__25__22_5::ctor_();
    return rt::VO(o);
}
bool C_S__25__22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__25__22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__25__22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__25__22_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__25__22_5::smeth_(int id) {
    switch (id) {
    case NM_S_1_3d_: return true;
    default: return false;
    }
}
bool C_S__25__22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22_5__id)); return true;
    case NM_S_1_3d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_1_3d_: out = rt::V(sm_S_1_3d_()); return true;
    default: return false;
    }
}
void C_S__25__22_G::ctor_() {
    RT_FN("S__25__22_G.S__25__22_G");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29028 = 1178.0; this->f_S_6_21_Z = rt::touint_d(_v29028); _v29028; });
    ({ rt::Value _v29029 = rt::trv(rt::VS(g::LS[8454])); this->f_S_1i = rt::slot_string(_v29029); _v29029; });
    ({ double _v29030 = 40.0; this->f_S__22__21_U = rt::toint_d(_v29030); _v29030; });
    ({ double _v29031 = 3.0; this->f_S__21_G = rt::toint_d(_v29031); _v29031; });
    ({ double _v29032 = 13125.0; this->f_S__25_w = rt::toint_d(_v29032); _v29032; });
}
rt::Value C_S__25__22_G::m_S__40__22_() {
    RT_FN("S__25__22_G.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8455])));
    return rt::NUL;
}
rt::Value C_S__25__22_G::m_S_8_5b_() {
    RT_FN("S__25__22_G.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N((1000.0 - C_S__23__21__21_::sm_S__5b_Z(C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id))), 200.0, rt::trv(rt::VS(g::LS[8456])), false, false));
    return rt::NUL;
}
rt::Value C_S__25__22_G::m_S_6r() {
    RT_FN("S__25__22_G.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o29033 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p29034 = rt::as_ptr<C_S_8G>(_o29033); _p29034 ? _p29034->m_S_17() : rt::dcallv(_o29033, NM_S_17); }));
    (void)(({ rt::Value _o29035 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p29036 = rt::as_ptr<C_S__20_g>(_o29035); _p29036 ? _p29036->m_S_69() : rt::dcallv(_o29035, NM_S_69); }));
    return rt::NUL;
}
bool C_S__25__22_G::g_S__20__21_3() {
    RT_FN("S__25__22_G.S__20__21_3_get");
    return ({ bool _t29037 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29037 ? (bool)(((1000.0 - C_S__23__21__21_::sm_S__5b_Z(C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id))) >= 200.0)) : _t29037; });
    return false;
}
C_S__25__22_G* C_S__25__22_G::alloc_() {
    C_S__25__22_G* o = rt::make<C_S__25__22_G>();
    return o;
}
rt::Value C_S__25__22_G::mk_(rt::Value* a, int n) {
    C_S__25__22_G* o = alloc_();
    o->C_S__25__22_G::ctor_();
    return rt::VO(o);
}
bool C_S__25__22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__25__22_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__25__22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__25__22_G::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S_6r: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__25__22_G::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22_G__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__25__22_G__S_1_21_S); return true;
    default: return false;
    }
}
bool C_S__25__22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22_G__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__25__22_G__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__25__22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__21__22_::ctor_() {
    RT_FN("S__22__21__22_.S__22__21__22_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29038 = 426.0; this->f_S_6_21_Z = rt::touint_d(_v29038); _v29038; });
    ({ rt::Value _v29039 = rt::trv(rt::VS(g::LS[8457])); this->f_S_1i = rt::slot_string(_v29039); _v29039; });
    ({ double _v29040 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v29040); _v29040; });
    ({ double _v29041 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29041); _v29041; });
    ({ double _v29042 = 13.0; this->f_S__22__21_U = rt::toint_d(_v29042); _v29042; });
    ({ double _v29043 = 1.0; this->f_S__21_G = rt::toint_d(_v29043); _v29043; });
    ({ double _v29044 = 6.0; this->f_S__5e__21_C = rt::toint_d(_v29044); _v29044; });
    ({ double _v29045 = 281.0; this->f_S__25_w = rt::toint_d(_v29045); _v29045; });
}
rt::Value C_S__22__21__22_::m_S__40__22_() {
    RT_FN("S__22__21__22_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8398]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__22__21__22_::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__22__21__22_::m_S_9_21__3f_() {
    RT_FN("S__22__21__22_.S_9_21__3f_");
    return ({ bool _t29047 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29047 ? _t29047 : (bool)(({ bool _t29046 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t29046 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__3f_y__id))) : _t29046; })); });
    return false;
}
bool C_S__22__21__22_::g_S_9_21__25_() {
    RT_FN("S__22__21__22_.S_9_21__25__get");
    return ({ bool _t29050 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29050 ? _t29050 : (bool)(({ bool _t29049 = ({ bool _t29048 = (!this->m_S_9_21_F()); _t29048 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29048; }); _t29049 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__3f_y__id)) : _t29049; })); });
    return false;
}
double C_S__22__21__22_::sm_S__26_s() {
    RT_FN("S__22__21__22_.S__26_s");
    return (80.0 * rt::m_pow(C_S__26_c::sm_S_0_23_(C_S__26_c::dsm_S_0_23__0(), C_S__26_c::dsm_S_0_23__1()), 0.8));
    return 0.0;
}
C_S__22__21__22_* C_S__22__21__22_::alloc_() {
    C_S__22__21__22_* o = rt::make<C_S__22__21__22_>();
    return o;
}
rt::Value C_S__22__21__22_::mk_(rt::Value* a, int n) {
    C_S__22__21__22_* o = alloc_();
    o->C_S__22__21__22_::ctor_();
    return rt::VO(o);
}
bool C_S__22__21__22_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22__21__22_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__21__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22__21__22_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22__21__22_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__22__21__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21__22___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__21__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21__22___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__22__21_E::ctor_() {
    RT_FN("S__22__21_E.S__22__21_E");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29051 = 434.0; this->f_S_6_21_Z = rt::touint_d(_v29051); _v29051; });
    ({ rt::Value _v29052 = rt::trv(rt::VS(g::LS[8458])); this->f_S_1i = rt::slot_string(_v29052); _v29052; });
    ({ double _v29053 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v29053); _v29053; });
    ({ double _v29054 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29054); _v29054; });
    ({ double _v29055 = 18.0; this->f_S__22__21_U = rt::toint_d(_v29055); _v29055; });
    ({ double _v29056 = 2.0; this->f_S__21_G = rt::toint_d(_v29056); _v29056; });
    ({ double _v29057 = 6.0; this->f_S__5e__21_C = rt::toint_d(_v29057); _v29057; });
    ({ double _v29058 = 350.0; this->f_S__25_w = rt::toint_d(_v29058); _v29058; });
    ({ bool _v29059 = false; this->f_S__3d_z = _v29059; _v29059; });
}
rt::Value C_S__22__21_E::m_S__40__22_() {
    RT_FN("S__22__21_E.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8459]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__22__21_E::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__22__21_E::m_S_8_5b_() {
    RT_FN("S__22__21_E.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__60_K__id, g::SV.C_S_32__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__22__21_E::m_S_9_21__3f_() {
    RT_FN("S__22__21_E.S_9_21__3f_");
    return ({ bool _t29061 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29061 ? _t29061 : (bool)(({ bool _t29060 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t29060 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__3f_y__id))) : _t29060; })); });
    return false;
}
bool C_S__22__21_E::g_S__20__21_3() {
    RT_FN("S__22__21_E.S__20__21_3_get");
    return ({ bool _t29067 = ({ bool _t29064 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29064 ? (bool)(({ rt::Value _o29062 = C_S_8G::sm_S__21__21_H(g::SV.C_S__60_K__id); C_S__60_6* _p29063 = rt::as_ptr<C_S__60_6>(_o29062); _p29063 ? _p29063->f_S__3f__21_6 : rt::T(rt::dget(_o29062, NM_S__3f__21_6)); })) : _t29064; }); _t29067 ? (bool)(({ rt::Value _o29065 = C_S_8G::sm_S__21__21_H(g::SV.C_S_32__id); C_S__60_6* _p29066 = rt::as_ptr<C_S__60_6>(_o29065); _p29066 ? _p29066->f_S__3f__21_6 : rt::T(rt::dget(_o29065, NM_S__3f__21_6)); })) : _t29067; });
    return false;
}
bool C_S__22__21_E::g_S_9_21__25_() {
    RT_FN("S__22__21_E.S_9_21__25__get");
    return ({ bool _t29070 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29070 ? _t29070 : (bool)(({ bool _t29069 = ({ bool _t29068 = (!this->m_S_9_21_F()); _t29068 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29068; }); _t29069 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__3f_y__id)) : _t29069; })); });
    return false;
}
double C_S__22__21_E::sm_S_9L() {
    RT_FN("S__22__21_E.S_9L");
    return (0.2 * rt::m_pow(C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_O__id, C_S_8G::dsm_S__25_Z_1()), 0.8));
    return 0.0;
}
C_S__22__21_E* C_S__22__21_E::alloc_() {
    C_S__22__21_E* o = rt::make<C_S__22__21_E>();
    return o;
}
rt::Value C_S__22__21_E::mk_(rt::Value* a, int n) {
    C_S__22__21_E* o = alloc_();
    o->C_S__22__21_E::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_E::dget(int id, rt::Value& out) {
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
bool C_S__22__21_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__21_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__22__21_E::dmeth(int id) {
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
bool C_S__22__21_E::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__22__21_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_E__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__21_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__22__21_I::ctor_() {
    RT_FN("S__22__21_I.S__22__21_I");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29071 = 451.0; this->f_S_6_21_Z = rt::touint_d(_v29071); _v29071; });
    ({ rt::Value _v29072 = rt::trv(rt::VS(g::LS[8460])); this->f_S_1i = rt::slot_string(_v29072); _v29072; });
    ({ double _v29073 = 16.0; this->f_S__22__21_U = rt::toint_d(_v29073); _v29073; });
    ({ double _v29074 = 0.0; this->f_S__21_G = rt::toint_d(_v29074); _v29074; });
    ({ double _v29075 = 8.0; this->f_S__5e__21_C = rt::toint_d(_v29075); _v29075; });
    ({ double _v29076 = 305.0; this->f_S__25_w = rt::toint_d(_v29076); _v29076; });
}
rt::Value C_S__22__21_I::m_S__40__22_() {
    RT_FN("S__22__21_I.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8461]), C_S__26_c::sm_S_6_21_T(C_S__22__21_I::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__22__21_I::m_S_8_21_s() {
    RT_FN("S__22__21_I.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8462])));
    return rt::NUL;
}
rt::Value C_S__22__21_I::m_S_8_5b_() {
    RT_FN("S__22__21_I.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 58.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 58.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 58.0))), 18000.0, rt::trv(rt::VS(g::LS[8463])), false, true));
    return rt::NUL;
}
bool C_S__22__21_I::g_S__20__21_3() {
    RT_FN("S__22__21_I.S__20__21_3_get");
    return ({ bool _t29077 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29077 ? (bool)(rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 58.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 58.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 58.0)), rt::V(18000.0))) : _t29077; });
    return false;
}
double C_S__22__21_I::sm_S__27__21_b() {
    RT_FN("S__22__21_I.S__27__21_b");
    return rt::m_pow(rt::m_log((1.0 + C_S__23__21__21_::sm_S__2c_d())), 2.5);
    return 0.0;
}
C_S__22__21_I* C_S__22__21_I::alloc_() {
    C_S__22__21_I* o = rt::make<C_S__22__21_I>();
    return o;
}
rt::Value C_S__22__21_I::mk_(rt::Value* a, int n) {
    C_S__22__21_I* o = alloc_();
    o->C_S__22__21_I::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_I::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22__21_I::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__21_I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22__21_I::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22__21_I::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__22__21_I::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_I__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__21_I::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_I__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__22__21_L::ctor_() {
    RT_FN("S__22__21_L.S__22__21_L");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29078 = 429.0; this->f_S_6_21_Z = rt::touint_d(_v29078); _v29078; });
    ({ rt::Value _v29079 = rt::trv(rt::VS(g::LS[8464])); this->f_S_1i = rt::slot_string(_v29079); _v29079; });
    ({ double _v29080 = 19.0; this->f_S__22__21_U = rt::toint_d(_v29080); _v29080; });
    ({ double _v29081 = 1.0; this->f_S__21_G = rt::toint_d(_v29081); _v29081; });
    ({ double _v29082 = 400.0; this->f_S__25_w = rt::toint_d(_v29082); _v29082; });
    ({ bool _v29083 = false; this->f_S__3d_z = _v29083; _v29083; });
}
rt::Value C_S__22__21_L::m_S__40__22_() {
    RT_FN("S__22__21_L.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[8465]), C_S__26_c::sm_S_8_21_Z(C_S__22__21_L::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[8450]), C_S__26_c::sm_S_8_21_Z(C_S__22__21_L::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
rt::Value C_S__22__21_L::m_S_8_5b_() {
    RT_FN("S__22__21_L.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__2b_v__id, g::SV.C_S__5b__21_X__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__22__21_L::g_S__20__21_3() {
    RT_FN("S__22__21_L.S__20__21_3_get");
    return ({ bool _t29089 = ({ bool _t29086 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29086 ? (bool)(({ rt::Value _o29084 = C_S_8G::sm_S__21__21_H(g::SV.C_S__2b_v__id); C_S__60_6* _p29085 = rt::as_ptr<C_S__60_6>(_o29084); _p29085 ? _p29085->f_S__3f__21_6 : rt::T(rt::dget(_o29084, NM_S__3f__21_6)); })) : _t29086; }); _t29089 ? (bool)(({ rt::Value _o29087 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5b__21_X__id); C_S__60_6* _p29088 = rt::as_ptr<C_S__60_6>(_o29087); _p29088 ? _p29088->f_S__3f__21_6 : rt::T(rt::dget(_o29087, NM_S__3f__21_6)); })) : _t29089; });
    return false;
}
double C_S__22__21_L::sm_S__2c_J() {
    RT_FN("S__22__21_L.S__2c_J");
    return rt::m_floor((3.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2()))), 3.0)));
    return 0.0;
}
double C_S__22__21_L::sm_S__23__21_Y() {
    RT_FN("S__22__21_L.S__23__21_Y");
    return 100.0;
    return 0.0;
}
C_S__22__21_L* C_S__22__21_L::alloc_() {
    C_S__22__21_L* o = rt::make<C_S__22__21_L>();
    return o;
}
rt::Value C_S__22__21_L::mk_(rt::Value* a, int n) {
    C_S__22__21_L* o = alloc_();
    o->C_S__22__21_L::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22__21_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__21_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22__21_L::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22__21_L::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__22__21_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_L__id)); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__21_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__22__21_R::ctor_() {
    RT_FN("S__22__21_R.S__22__21_R");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29090 = 531.0; this->f_S_6_21_Z = rt::touint_d(_v29090); _v29090; });
    ({ rt::Value _v29091 = rt::trv(rt::VS(g::LS[8466])); this->f_S_1i = rt::slot_string(_v29091); _v29091; });
    ({ double _v29092 = 21.0; this->f_S__22__21_U = rt::toint_d(_v29092); _v29092; });
    ({ double _v29093 = 3.0; this->f_S__21_G = rt::toint_d(_v29093); _v29093; });
    ({ double _v29094 = 425.0; this->f_S__25_w = rt::toint_d(_v29094); _v29094; });
}
rt::Value C_S__22__21_R::m_S__40__22_() {
    RT_FN("S__22__21_R.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6985]), C_S__26_c::sm_S_8_21_Z(C_S__22__21_R::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__22__21_R::m_S_8_21_s() {
    RT_FN("S__22__21_R.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8467])));
    return rt::NUL;
}
rt::Value C_S__22__21_R::m_S_8_5b_() {
    RT_FN("S__22__21_R.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__40__21__5b_(true, false, true), 100000000000.0, rt::trv(rt::VS(g::LS[3381])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__22__21_R::g_S__20__21_3() {
    RT_FN("S__22__21_R.S__20__21_3_get");
    return ({ bool _t29095 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29095 ? (bool)((C_S__26_c::sm_S__40__21__5b_(true, false, true) >= 100000000000.0)) : _t29095; });
    return false;
}
double C_S__22__21_R::sm_S__40__21__3f_() {
    RT_FN("S__22__21_R.S__40__21__3f_");
    return (2.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2()))), 2.0));
    return 0.0;
}
C_S__22__21_R* C_S__22__21_R::alloc_() {
    C_S__22__21_R* o = rt::make<C_S__22__21_R>();
    return o;
}
rt::Value C_S__22__21_R::mk_(rt::Value* a, int n) {
    C_S__22__21_R* o = alloc_();
    o->C_S__22__21_R::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22__21_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__21_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22__21_R::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22__21_R::smeth_(int id) {
    switch (id) {
    case NM_S__40__21__3f_: return true;
    default: return false;
    }
}
bool C_S__22__21_R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_R__id)); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__21_R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_R__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    default: return false;
    }
}
void C_S__22__21_Y::ctor_() {
    RT_FN("S__22__21_Y.S__22__21_Y");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29096 = 541.0; this->f_S_6_21_Z = rt::touint_d(_v29096); _v29096; });
    ({ rt::Value _v29097 = rt::trv(rt::VS(g::LS[8468])); this->f_S_1i = rt::slot_string(_v29097); _v29097; });
    ({ double _v29098 = 20.0; this->f_S__22__21_U = rt::toint_d(_v29098); _v29098; });
    ({ double _v29099 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v29099); _v29099; });
    ({ double _v29100 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29100); _v29100; });
    ({ double _v29101 = 5.0; this->f_S__21_G = rt::toint_d(_v29101); _v29101; });
    ({ double _v29102 = 10.0; this->f_S__5e__21_C = rt::toint_d(_v29102); _v29102; });
    ({ double _v29103 = 501.0; this->f_S__25_w = rt::toint_d(_v29103); _v29103; });
}
rt::Value C_S__22__21_Y::m_S__40__22_() {
    RT_FN("S__22__21_Y.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8469]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__2b__3f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__22__21_Y::sm_S__26_s(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__22__21_Y::m_S_9_21__3f_() {
    RT_FN("S__22__21_Y.S_9_21__3f_");
    return ({ bool _t29105 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29105 ? _t29105 : (bool)(({ bool _t29104 = this->f_S__3f__21_6; _t29104 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__23_x__id))) : _t29104; })); });
    return false;
}
bool C_S__22__21_Y::g_S_9_21__25_() {
    RT_FN("S__22__21_Y.S_9_21__25__get");
    return ({ bool _t29108 = (({ bool _t29107 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29107 ? _t29107 : (bool)(({ bool _t29106 = (!this->m_S_9_21_F()); _t29106 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29106; })); })); _t29108 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__23_x__id)) : _t29108; });
    return false;
}
double C_S__22__21_Y::sm_S__26_s() {
    RT_FN("S__22__21_Y.S__26_s");
    return (3.5 * rt::m_pow(rt::m_log((1.0 + C_S__23__21__21_::sm_S__2c_d())), 3.5));
    return 0.0;
}
C_S__22__21_Y* C_S__22__21_Y::alloc_() {
    C_S__22__21_Y* o = rt::make<C_S__22__21_Y>();
    return o;
}
rt::Value C_S__22__21_Y::mk_(rt::Value* a, int n) {
    C_S__22__21_Y* o = alloc_();
    o->C_S__22__21_Y::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_Y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22__21_Y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__21_Y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22__21_Y::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22__21_Y::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__22__21_Y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_Y__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__21_Y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_Y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_Y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__22__22__3c_::ctor_() {
    RT_FN("S__22__22__3c_.S__22__22__3c_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29109 = 1086.0; this->f_S_6_21_Z = rt::touint_d(_v29109); _v29109; });
    ({ rt::Value _v29110 = rt::trv(rt::VS(g::LS[8470])); this->f_S_1i = rt::slot_string(_v29110); _v29110; });
    ({ double _v29111 = 4.0; this->f_S__22__21_U = rt::toint_d(_v29111); _v29111; });
    ({ double _v29112 = 6.0; this->f_S__21_G = rt::toint_d(_v29112); _v29112; });
    ({ double _v29113 = 11000.0; this->f_S__25_w = rt::toint_d(_v29113); _v29113; });
}
rt::Value C_S__22__22__3c_::m_S__40__22_() {
    RT_FN("S__22__22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8471]), C_S__26_c::sm_S_8_21_Z(C_S__22__22__3c_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__22__22__3c_::sm_S__2c__21_G() {
    RT_FN("S__22__22__3c_.S__2c__21_G");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S_4_21_r(false), 0.5));
    return 0.0;
}
C_S__22__22__3c_* C_S__22__22__3c_::alloc_() {
    C_S__22__22__3c_* o = rt::make<C_S__22__22__3c_>();
    return o;
}
rt::Value C_S__22__22__3c_::mk_(rt::Value* a, int n) {
    C_S__22__22__3c_* o = alloc_();
    o->C_S__22__22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__22__22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22__22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22__22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22__22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__22__22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__22__3c___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__22__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__22__22_4::ctor_() {
    RT_FN("S__22__22_4.S__22__22_4");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29114 = 1048.0; this->f_S_6_21_Z = rt::touint_d(_v29114); _v29114; });
    ({ rt::Value _v29115 = rt::trv(rt::VS(g::LS[8472])); this->f_S_1i = rt::slot_string(_v29115); _v29115; });
    ({ double _v29116 = 2.0; this->f_S__22__21_U = rt::toint_d(_v29116); _v29116; });
    ({ double _v29117 = 6.0; this->f_S__21_G = rt::toint_d(_v29117); _v29117; });
    ({ double _v29118 = 5750.0; this->f_S__25_w = rt::toint_d(_v29118); _v29118; });
}
rt::Value C_S__22__22_4::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__22__22_4.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[8473]))));
    (l_A__loc2_ = C_S__22__22_4::sm_S__21__22_3());
    if ((!rt::eq(l_A__loc2_, rt::NUL))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[8474]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(({ rt::Value _o29119 = l_A__loc2_; C_S__60_6* _p29120 = rt::as_ptr<C_S__60_6>(_o29119); _p29120 ? _p29120->f_S__2d__21__5e_ : rt::toint(rt::dget(_o29119, NM_S__2d__21__5e_)); })))), ({ rt::Value _o29121 = l_A__loc2_; C_S__60_6* _p29122 = rt::as_ptr<C_S__60_6>(_o29121); _p29122 ? _p29122->m_S__40__22_() : rt::dcallv(_o29121, NM_S__40__22_); }))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__22__22_4::m_S_6r() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__22__22_4.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (l_A__loc1_ = C_S__22__22_4::sm_S__21__22_3());
    if (((!rt::eq(l_A__loc1_, rt::NUL)) && rt::is_class(l_A__loc1_, C_S__27__21_o::CI))) {
        (void)(({ rt::Value _o29124 = (({ rt::Value _t29123 = l_A__loc1_; rt::is_class(_t29123, C_S__27__21_o::CI) ? _t29123 : rt::NUL; })); C_S__27__21_o* _p29125 = rt::as_ptr<C_S__27__21_o>(_o29124); _p29125 ? _p29125->m_S__22__21_t(rt::touint_d(1.0)) : rt::dcallv(_o29124, NM_S__22__21_t, rt::V(1.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S__22__22_4::m_S_8_5b_() {
    RT_FN("S__22__22_4.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__3d__60_(true), 250000.0, rt::trv(rt::VS(g::LS[8378])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__22__22_4::g_S__20__21_3() {
    RT_FN("S__22__22_4.S__20__21_3_get");
    return ({ bool _t29127 = ({ bool _t29126 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29126 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t29126; }); _t29127 ? (bool)((C_S__26_c::sm_S__3d__60_(true) >= 250000.0)) : _t29127; });
    return false;
}
rt::Value C_S__22__22_4::sm_S__21__22_3() {
    rt::Value l_A__loc1_ = rt::NUL;
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc4_ = rt::NUL;
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc5_ = 0;
    RT_FN("S__22__22_4.S__21__22_3");
    (l_A__loc1_ = rt::NUL);
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::NUL);
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc5_ = rt::toint_d(0.0));
    if (((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0)) && (!(((double)(g::SV.C_S_8G__S_9_21_m)) == 0.0)))) {
        (l_A__loc1_ = rt::arr_lit({rt::V((double)(g::SV.C_S_3_21_m__id)), rt::V((double)(g::SV.C_S_2_21_l__id)), rt::V((double)(g::SV.C_S__3d__21_m__id)), rt::V((double)(g::SV.C_S_2_21_m__id)), rt::V((double)(g::SV.C_S__27__21_l__id)), rt::V((double)(g::SV.C_S__5d__21_n__id)), rt::V((double)(g::SV.C_S__2c__21_n__id)), rt::V((double)(g::SV.C_S_2_21_o__id)), rt::V((double)(g::SV.C_S__27__21_o__id))}));
        (l_A__loc3_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc3_)) < rt::alen(l_A__loc1_))) {
            (l_A__loc4_ = C_S_8G::sm_S__21__21_H(rt::touint(rt::arr_at(l_A__loc1_, ((double)(l_A__loc3_))))));
            (l_A__loc2_ = C_S__26_c::sm_S_8_22_3(C_S__26_c::sm_S__3d__21_u(({ rt::Value _o29128 = l_A__loc4_; C_S__60_6* _p29129 = rt::as_ptr<C_S__60_6>(_o29128); _p29129 ? _p29129->f_S__2d__21__5e_ : rt::toint(rt::dget(_o29128, NM_S__2d__21__5e_)); }))));
            (l_A__loc5_ = C_S__26_c::sm_S_8_22_3(C_S__26_c::sm_S_9_22__2d_(({ rt::Value _o29130 = l_A__loc4_; C_S__60_6* _p29131 = rt::as_ptr<C_S__60_6>(_o29130); _p29131 ? _p29131->f_S__2d__21__5e_ : rt::toint(rt::dget(_o29130, NM_S__2d__21__5e_)); }))));
            if (((((double)(l_A__loc2_)) == ((double)(g::SV.C_S_8G__S__2c__21_Y))) && (((double)(l_A__loc5_)) == ((double)(g::SV.C_S_8G__S_9_21_m))))) {
                return l_A__loc4_;
            }
            (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
        }
    }
    return rt::NUL;
    return rt::NUL;
}
C_S__22__22_4* C_S__22__22_4::alloc_() {
    C_S__22__22_4* o = rt::make<C_S__22__22_4>();
    return o;
}
rt::Value C_S__22__22_4::mk_(rt::Value* a, int n) {
    C_S__22__22_4* o = alloc_();
    o->C_S__22__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__22__22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22__22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22__22_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22__22_4::smeth_(int id) {
    switch (id) {
    case NM_S__21__22_3: return true;
    default: return false;
    }
}
bool C_S__22__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__22_4__id)); return true;
    case NM_S__21__22_3: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__22_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__22_3: out = sm_S__21__22_3(); return true;
    default: return false;
    }
}
void C_S__22__22_F::ctor_() {
    RT_FN("S__22__22_F.S__22__22_F");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29132 = 1156.0; this->f_S_6_21_Z = rt::touint_d(_v29132); _v29132; });
    ({ rt::Value _v29133 = rt::trv(rt::VS(g::LS[8475])); this->f_S_1i = rt::slot_string(_v29133); _v29133; });
    ({ double _v29134 = 39.0; this->f_S__22__21_U = rt::toint_d(_v29134); _v29134; });
    ({ double _v29135 = 1.0; this->f_S__21_G = rt::toint_d(_v29135); _v29135; });
    ({ double _v29136 = 12250.0; this->f_S__25_w = rt::toint_d(_v29136); _v29136; });
}
rt::Value C_S__22__22_F::m_S__40__22_() {
    RT_FN("S__22__22_F.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8476]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__25__21_J__S__5e__22_E, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__22__22_F::m_S_8_5b_() {
    RT_FN("S__22__22_F.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__25__21_J__id, true), 172800.0, rt::trv(rt::VS(g::LS[8477])), false, true));
    return rt::NUL;
}
bool C_S__22__22_F::g_S__20__21_3() {
    RT_FN("S__22__22_F.S__20__21_3_get");
    return ({ bool _t29137 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29137 ? (bool)((C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__25__21_J__id, true) >= 172800.0)) : _t29137; });
    return false;
}
C_S__22__22_F* C_S__22__22_F::alloc_() {
    C_S__22__22_F* o = rt::make<C_S__22__22_F>();
    return o;
}
rt::Value C_S__22__22_F::mk_(rt::Value* a, int n) {
    C_S__22__22_F* o = alloc_();
    o->C_S__22__22_F::ctor_();
    return rt::VO(o);
}
bool C_S__22__22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22__22_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22__22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22__22_F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__22_F__id)); return true;
    default: return false;
    }
}
bool C_S__22__22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__22_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__22_G::ctor_() {
    RT_FN("S__22__22_G.S__22__22_G");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29138 = 1184.0; this->f_S_6_21_Z = rt::touint_d(_v29138); _v29138; });
    ({ rt::Value _v29139 = rt::trv(rt::VS(g::LS[8478])); this->f_S_1i = rt::slot_string(_v29139); _v29139; });
    ({ double _v29140 = 40.0; this->f_S__22__21_U = rt::toint_d(_v29140); _v29140; });
    ({ double _v29141 = 5.0; this->f_S__21_G = rt::toint_d(_v29141); _v29141; });
    ({ double _v29142 = 13125.0; this->f_S__25_w = rt::toint_d(_v29142); _v29142; });
}
rt::Value C_S__22__22_G::m_S__40__22_() {
    RT_FN("S__22__22_G.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8479]), C_S__26_c::sm_S_8_21_Z(C_S__22__22_G::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__22__22_G::m_S_8_5b_() {
    RT_FN("S__22__22_G.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__5d__22_J(), 200.0, rt::trv(rt::VS(g::LS[8480])), false, true));
    return rt::NUL;
}
bool C_S__22__22_G::g_S__20__21_3() {
    RT_FN("S__22__22_G.S__20__21_3_get");
    return ({ bool _t29143 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29143 ? (bool)((C_S__26_c::sm_S__5d__22_J() >= 50.0)) : _t29143; });
    return false;
}
double C_S__22__22_G::sm_S__2c__21_G() {
    RT_FN("S__22__22_G.S__2c__21_G");
    return rt::m_floor((1.0 + (0.5 * rt::m_pow(rt::m_log((1.0 + rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 40.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 40.0))))), 1.25))));
    return 0.0;
}
C_S__22__22_G* C_S__22__22_G::alloc_() {
    C_S__22__22_G* o = rt::make<C_S__22__22_G>();
    return o;
}
rt::Value C_S__22__22_G::mk_(rt::Value* a, int n) {
    C_S__22__22_G* o = alloc_();
    o->C_S__22__22_G::ctor_();
    return rt::VO(o);
}
bool C_S__22__22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22__22_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22__22_G::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22__22_G::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__22__22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__22_G__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__22_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__22__25_::ctor_() {
    RT_FN("S__22__25_.S__22__25_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29144 = 279.0; this->f_S_6_21_Z = rt::touint_d(_v29144); _v29144; });
    ({ rt::Value _v29145 = rt::trv(rt::VS(g::LS[8481])); this->f_S_1i = rt::slot_string(_v29145); _v29145; });
    ({ double _v29146 = 7.0; this->f_S__22__21_U = rt::toint_d(_v29146); _v29146; });
    ({ double _v29147 = 3.0; this->f_S__21_G = rt::toint_d(_v29147); _v29147; });
    ({ double _v29148 = 3.0; this->f_S__5e__21_C = rt::toint_d(_v29148); _v29148; });
    ({ double _v29149 = 135.0; this->f_S__25_w = rt::toint_d(_v29149); _v29149; });
}
rt::Value C_S__22__25_::m_S__40__22_() {
    RT_FN("S__22__25_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8482])));
    return rt::NUL;
}
rt::Value C_S__22__25_::m_S_8_21_s() {
    RT_FN("S__22__25_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8483])));
    return rt::NUL;
}
rt::Value C_S__22__25_::m_S_8_5b_() {
    RT_FN("S__22__25_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true), 24000.0, rt::trv(rt::VS(g::LS[8484])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
rt::Value C_S__22__25_::m_S_6r() {
    RT_FN("S__22__25_.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o29150 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p29151 = rt::as_ptr<C_S_8G>(_o29150); _p29151 ? _p29151->m_S_17() : rt::dcallv(_o29150, NM_S_17); }));
    (void)(({ rt::Value _o29152 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p29153 = rt::as_ptr<C_S__20_g>(_o29152); _p29153 ? _p29153->m_S_69() : rt::dcallv(_o29152, NM_S_69); }));
    return rt::NUL;
}
bool C_S__22__25_::g_S__20__21_3() {
    RT_FN("S__22__25_.S__20__21_3_get");
    return ({ bool _t29154 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29154 ? (bool)((C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true) >= 24000.0)) : _t29154; });
    return false;
}
C_S__22__25_* C_S__22__25_::alloc_() {
    C_S__22__25_* o = rt::make<C_S__22__25_>();
    return o;
}
rt::Value C_S__22__25_::mk_(rt::Value* a, int n) {
    C_S__22__25_* o = alloc_();
    o->C_S__22__25_::ctor_();
    return rt::VO(o);
}
bool C_S__22__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22__25_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22__25_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S_6r: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22__25_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__25___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__22__25___S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__22__25___ids; return true;
    default: return false;
    }
}
bool C_S__22__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__25___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__22__25___S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__22__25___ids = v; return true;
    default: return false;
    }
}
bool C_S__22__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22_4::ctor_() {
    RT_FN("S__22_4.S__22_4");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29155 = 239.0; this->f_S_6_21_Z = rt::touint_d(_v29155); _v29155; });
    ({ rt::Value _v29156 = rt::trv(rt::VS(g::LS[8486])); this->f_S_1i = rt::slot_string(_v29156); _v29156; });
    ({ double _v29157 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v29157); _v29157; });
    ({ double _v29158 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29158); _v29158; });
    ({ double _v29159 = 3.0; this->f_S__22__21_U = rt::toint_d(_v29159); _v29159; });
    ({ double _v29160 = 4.0; this->f_S__21_G = rt::toint_d(_v29160); _v29160; });
    ({ double _v29161 = 5.0; this->f_S__5e__21_C = rt::toint_d(_v29161); _v29161; });
    ({ double _v29162 = 25.0; this->f_S__25_w = rt::toint_d(_v29162); _v29162; });
}
rt::Value C_S__22_4::m_S__40__22_() {
    RT_FN("S__22_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8487]), C_S__26_c::sm_S_8_21_Z(C_S__22_4::sm_S__5b__22__40_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(rt::m_abs(C_S__22_4::sm_S__25_4()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_6_21_T(1600.0, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__22_4::m_S_8_21_s() {
    RT_FN("S__22_4.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8488])));
    return rt::NUL;
}
rt::Value C_S__22_4::m_S_8_5b_() {
    RT_FN("S__22_4.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_7i(g::SV.C_S_8_3e___id, false, false, true), 6666.0, rt::trv(rt::VS(g::LS[8489])), false, true));
    return rt::NUL;
}
bool C_S__22_4::m_S_9_21__3f_() {
    RT_FN("S__22_4.S_9_21__3f_");
    return ({ bool _t29166 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29166 ? _t29166 : (bool)(({ bool _t29165 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t29165 ? (bool)((!({ rt::Value _o29163 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p29164 = rt::as_ptr<C_S_84>(_o29163); _p29164 ? _p29164->g_S__2d_6() : rt::T(rt::dget(_o29163, NM_S__2d_6)); }))) : _t29165; })); });
    return false;
}
bool C_S__22_4::g_S__20__21_3() {
    RT_FN("S__22_4.S__20__21_3_get");
    return ({ bool _t29167 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29167 ? (bool)((C_S__26_c::sm_S_7i(g::SV.C_S_8_3e___id, false, false, true) >= 6666.0)) : _t29167; });
    return false;
}
bool C_S__22_4::g_S_9_21__25_() {
    RT_FN("S__22_4.S_9_21__25__get");
    return ({ bool _t29172 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29172 ? _t29172 : (bool)(({ bool _t29171 = ({ bool _t29168 = (!this->m_S_9_21_F()); _t29168 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29168; }); _t29171 ? (bool)(({ rt::Value _o29169 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p29170 = rt::as_ptr<C_S_84>(_o29169); _p29170 ? _p29170->g_S__2d_6() : rt::T(rt::dget(_o29169, NM_S__2d_6)); })) : _t29171; })); });
    return false;
}
double C_S__22_4::sm_S__5b__22__40_() {
    RT_FN("S__22_4.S__5b__22__40_");
    return 4.0;
    return 0.0;
}
double C_S__22_4::sm_S__25_4() {
    RT_FN("S__22_4.S__25_4");
    return (-400.0);
    return 0.0;
}
C_S__22_4* C_S__22_4::alloc_() {
    C_S__22_4* o = rt::make<C_S__22_4>();
    return o;
}
rt::Value C_S__22_4::mk_(rt::Value* a, int n) {
    C_S__22_4* o = alloc_();
    o->C_S__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__22_4::dget(int id, rt::Value& out) {
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
bool C_S__22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__22_4::dmeth(int id) {
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
bool C_S__22_4::smeth_(int id) {
    switch (id) {
    case NM_S__5b__22__40_: return true;
    case NM_S__25_4: return true;
    default: return false;
    }
}
bool C_S__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_4__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__22_4__S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__22_4__ids; return true;
    case NM_S__5b__22__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__25_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_4__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__22_4__S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__22_4__ids = v; return true;
    default: return false;
    }
}
bool C_S__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__22__40_: out = rt::V(sm_S__5b__22__40_()); return true;
    case NM_S__25_4: out = rt::V(sm_S__25_4()); return true;
    default: return false;
    }
}
void C_S__22__3d_::ctor_() {
    RT_FN("S__22__3d_.S__22__3d_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29173 = 313.0; this->f_S_6_21_Z = rt::touint_d(_v29173); _v29173; });
    ({ rt::Value _v29174 = rt::trv(rt::VS(g::LS[8491])); this->f_S_1i = rt::slot_string(_v29174); _v29174; });
    ({ double _v29175 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v29175); _v29175; });
    ({ double _v29176 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29176); _v29176; });
    ({ double _v29177 = 11.0; this->f_S__22__21_U = rt::toint_d(_v29177); _v29177; });
    ({ double _v29178 = 5.0; this->f_S__21_G = rt::toint_d(_v29178); _v29178; });
    ({ double _v29179 = 2.0; this->f_S__5e__21_C = rt::toint_d(_v29179); _v29179; });
    ({ double _v29180 = 225.0; this->f_S__25_w = rt::toint_d(_v29180); _v29180; });
    ({ bool _v29181 = false; this->f_S__3d_z = _v29181; _v29181; });
}
rt::Value C_S__22__3d_::m_S__40__22_() {
    RT_FN("S__22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8492]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_0_2d___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__22__3d_::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__22__3d_::m_S_9_21__3f_() {
    RT_FN("S__22__3d_.S_9_21__3f_");
    return ({ bool _t29183 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29183 ? _t29183 : (bool)(({ bool _t29182 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t29182 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__5d__21__60___id))) : _t29182; })); });
    return false;
}
rt::Value C_S__22__3d_::m_S_8_5b_() {
    RT_FN("S__22__3d_.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__2d__27___id, g::SV.C_S_5_22___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__22__3d_::g_S__20__21_3() {
    RT_FN("S__22__3d_.S__20__21_3_get");
    return ({ bool _t29189 = ({ bool _t29186 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29186 ? (bool)(({ rt::Value _o29184 = C_S_8G::sm_S__21__21_H(g::SV.C_S__2d__27___id); C_S__60_6* _p29185 = rt::as_ptr<C_S__60_6>(_o29184); _p29185 ? _p29185->f_S__3f__21_6 : rt::T(rt::dget(_o29184, NM_S__3f__21_6)); })) : _t29186; }); _t29189 ? (bool)(({ rt::Value _o29187 = C_S_8G::sm_S__21__21_H(g::SV.C_S_5_22___id); C_S__60_6* _p29188 = rt::as_ptr<C_S__60_6>(_o29187); _p29188 ? _p29188->f_S__3f__21_6 : rt::T(rt::dget(_o29187, NM_S__3f__21_6)); })) : _t29189; });
    return false;
}
bool C_S__22__3d_::g_S_9_21__25_() {
    RT_FN("S__22__3d_.S_9_21__25__get");
    return ({ bool _t29192 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29192 ? _t29192 : (bool)(({ bool _t29191 = ({ bool _t29190 = (!this->m_S_9_21_F()); _t29190 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29190; }); _t29191 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__5d__21__60___id)) : _t29191; })); });
    return false;
}
double C_S__22__3d_::sm_S__26_s() {
    RT_FN("S__22__3d_.S__26_s");
    return (5.0 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S_7I__id, false, false, C_S__26_c::dsm_S_7i_3()), 0.65));
    return 0.0;
}
C_S__22__3d_* C_S__22__3d_::alloc_() {
    C_S__22__3d_* o = rt::make<C_S__22__3d_>();
    return o;
}
rt::Value C_S__22__3d_::mk_(rt::Value* a, int n) {
    C_S__22__3d_* o = alloc_();
    o->C_S__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__22__3d_::dget(int id, rt::Value& out) {
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
bool C_S__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__22__3d_::dmeth(int id) {
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
bool C_S__22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__3d___id)); return true;
    case NM_ids: out = g::SV.C_S__22__3d___ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__3d___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__22__3d___ids = v; return true;
    default: return false;
    }
}
bool C_S__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__22_i::ctor_() {
    RT_FN("S__22_i.S__22_i");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29193 = 513.0; this->f_S_6_21_Z = rt::touint_d(_v29193); _v29193; });
    ({ rt::Value _v29194 = rt::trv(rt::VS(g::LS[8494])); this->f_S_1i = rt::slot_string(_v29194); _v29194; });
    ({ double _v29195 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v29195); _v29195; });
    ({ double _v29196 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29196); _v29196; });
    ({ double _v29197 = 23.0; this->f_S__22__21_U = rt::toint_d(_v29197); _v29197; });
    ({ double _v29198 = 1.0; this->f_S__21_G = rt::toint_d(_v29198); _v29198; });
    ({ double _v29199 = 9.0; this->f_S__5e__21_C = rt::toint_d(_v29199); _v29199; });
    ({ double _v29200 = 600.0; this->f_S__25_w = rt::toint_d(_v29200); _v29200; });
    ({ bool _v29201 = false; this->f_S__3d_z = _v29201; _v29201; });
}
rt::Value C_S__22_i::m_S__40__22_() {
    RT_FN("S__22_i.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8495]), C_S__26_c::sm_S_6_21_T(C_S__22_i::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__22_i::m_S_8_5b_() {
    RT_FN("S__22_i.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__26__21__23___id, g::SV.C_S__5b_q__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__22_i::g_S__20__21_3() {
    RT_FN("S__22_i.S__20__21_3_get");
    return ({ bool _t29207 = ({ bool _t29204 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29204 ? (bool)(({ rt::Value _o29202 = C_S_8G::sm_S__21__21_H(g::SV.C_S__26__21__23___id); C_S__60_6* _p29203 = rt::as_ptr<C_S__60_6>(_o29202); _p29203 ? _p29203->f_S__3f__21_6 : rt::T(rt::dget(_o29202, NM_S__3f__21_6)); })) : _t29204; }); _t29207 ? (bool)(({ rt::Value _o29205 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5b_q__id); C_S__60_6* _p29206 = rt::as_ptr<C_S__60_6>(_o29205); _p29206 ? _p29206->f_S__3f__21_6 : rt::T(rt::dget(_o29205, NM_S__3f__21_6)); })) : _t29207; });
    return false;
}
bool C_S__22_i::g_S_9_21__25_() {
    RT_FN("S__22_i.S_9_21__25__get");
    return ({ bool _t29209 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29209 ? _t29209 : (bool)(({ bool _t29208 = (!this->m_S_9_21_F()); _t29208 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29208; })); });
    return false;
}
double C_S__22_i::sm_S__26_s() {
    RT_FN("S__22_i.S__26_s");
    return rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 2.0);
    return 0.0;
}
C_S__22_i* C_S__22_i::alloc_() {
    C_S__22_i* o = rt::make<C_S__22_i>();
    return o;
}
rt::Value C_S__22_i::mk_(rt::Value* a, int n) {
    C_S__22_i* o = alloc_();
    o->C_S__22_i::ctor_();
    return rt::VO(o);
}
bool C_S__22_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22_i::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22_i::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__22_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_i__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__22_v::ctor_() {
    RT_FN("S__22_v.S__22_v");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29210 = 254.0; this->f_S_6_21_Z = rt::touint_d(_v29210); _v29210; });
    ({ rt::Value _v29211 = rt::trv(rt::VS(g::LS[8496])); this->f_S_1i = rt::slot_string(_v29211); _v29211; });
    ({ double _v29212 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v29212); _v29212; });
    ({ double _v29213 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29213); _v29213; });
    ({ double _v29214 = 9.0; this->f_S__22__21_U = rt::toint_d(_v29214); _v29214; });
    ({ double _v29215 = 1.0; this->f_S__21_G = rt::toint_d(_v29215); _v29215; });
    ({ double _v29216 = 3.0; this->f_S__5e__21_C = rt::toint_d(_v29216); _v29216; });
    ({ double _v29217 = 175.0; this->f_S__25_w = rt::toint_d(_v29217); _v29217; });
    ({ bool _v29218 = false; this->f_S__3d_z = _v29218; _v29218; });
}
rt::Value C_S__22_v::m_S__40__22_() {
    RT_FN("S__22_v.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8497]), C_S__26_c::sm_S_8_21_Z(C_S__22_v::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__22_v::m_S_8_5b_() {
    RT_FN("S__22_v.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_3_21__3d___id, g::SV.C_S__26__21_Y__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__22_v::g_S__20__21_3() {
    RT_FN("S__22_v.S__20__21_3_get");
    return ({ bool _t29224 = ({ bool _t29221 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29221 ? (bool)(({ rt::Value _o29219 = C_S_8G::sm_S__21__21_H(g::SV.C_S_3_21__3d___id); C_S__60_6* _p29220 = rt::as_ptr<C_S__60_6>(_o29219); _p29220 ? _p29220->f_S__3f__21_6 : rt::T(rt::dget(_o29219, NM_S__3f__21_6)); })) : _t29221; }); _t29224 ? (bool)(({ rt::Value _o29222 = C_S_8G::sm_S__21__21_H(g::SV.C_S__26__21_Y__id); C_S__60_6* _p29223 = rt::as_ptr<C_S__60_6>(_o29222); _p29223 ? _p29223->f_S__3f__21_6 : rt::T(rt::dget(_o29222, NM_S__3f__21_6)); })) : _t29224; });
    return false;
}
double C_S__22_v::sm_S__5e_y() {
    RT_FN("S__22_v.S__5e_y");
    return (0.25 * rt::m_pow(C_S__26_c::sm_S_0_23_(C_S__26_c::dsm_S_0_23__0(), C_S__26_c::dsm_S_0_23__1()), 0.5));
    return 0.0;
}
C_S__22_v* C_S__22_v::alloc_() {
    C_S__22_v* o = rt::make<C_S__22_v>();
    return o;
}
rt::Value C_S__22_v::mk_(rt::Value* a, int n) {
    C_S__22_v* o = alloc_();
    o->C_S__22_v::ctor_();
    return rt::VO(o);
}
bool C_S__22_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22_v::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22_v::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22_v::smeth_(int id) {
    switch (id) {
    case NM_S__5e_y: return true;
    default: return false;
    }
}
bool C_S__22_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_v__id)); return true;
    case NM_ids: out = g::SV.C_S__22_v__ids; return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_v__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__22_v__ids = v; return true;
    default: return false;
    }
}
bool C_S__22_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5e_y: out = rt::V(sm_S__5e_y()); return true;
    default: return false;
    }
}
void C_S__22_z::ctor_() {
    RT_FN("S__22_z.S__22_z");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29225 = 423.0; this->f_S_6_21_Z = rt::touint_d(_v29225); _v29225; });
    ({ rt::Value _v29226 = rt::trv(rt::VS(g::LS[8499])); this->f_S_1i = rt::slot_string(_v29226); _v29226; });
    ({ double _v29227 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v29227); _v29227; });
    ({ double _v29228 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29228); _v29228; });
    ({ double _v29229 = 13.0; this->f_S__22__21_U = rt::toint_d(_v29229); _v29229; });
    ({ double _v29230 = 4.0; this->f_S__21_G = rt::toint_d(_v29230); _v29230; });
    ({ double _v29231 = 7.0; this->f_S__5e__21_C = rt::toint_d(_v29231); _v29231; });
    ({ double _v29232 = 281.0; this->f_S__25_w = rt::toint_d(_v29232); _v29232; });
}
rt::Value C_S__22_z::m_S__40__22_() {
    RT_FN("S__22_z.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8500]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_M__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__22_z::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__22_z::m_S_9_21__3f_() {
    RT_FN("S__22_z.S_9_21__3f_");
    return ({ bool _t29234 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29234 ? _t29234 : (bool)(({ bool _t29233 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t29233 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_0N__id))) : _t29233; })); });
    return false;
}
bool C_S__22_z::g_S_9_21__25_() {
    RT_FN("S__22_z.S_9_21__25__get");
    return ({ bool _t29237 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29237 ? _t29237 : (bool)(({ bool _t29236 = ({ bool _t29235 = (!this->m_S_9_21_F()); _t29235 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29235; }); _t29236 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_0N__id)) : _t29236; })); });
    return false;
}
double C_S__22_z::sm_S__26_s() {
    RT_FN("S__22_z.S__26_s");
    return (0.75 * rt::m_pow(C_S__26_c::sm_S_3_22__26_(C_S__26_c::dsm_S_3_22__26__0(), C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()), 0.75));
    return 0.0;
}
C_S__22_z* C_S__22_z::alloc_() {
    C_S__22_z* o = rt::make<C_S__22_z>();
    return o;
}
rt::Value C_S__22_z::mk_(rt::Value* a, int n) {
    C_S__22_z* o = alloc_();
    o->C_S__22_z::ctor_();
    return rt::VO(o);
}
bool C_S__22_z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__22_z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__22_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__22_z::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__22_z::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__22_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_z__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_z__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3c__21_A::ctor_() {
    RT_FN("S__3c__21_A.S__3c__21_A");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29238 = 618.0; this->f_S_6_21_Z = rt::touint_d(_v29238); _v29238; });
    ({ rt::Value _v29239 = rt::trv(rt::VS(g::LS[8501])); this->f_S_1i = rt::slot_string(_v29239); _v29239; });
    ({ double _v29240 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v29240); _v29240; });
    ({ double _v29241 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29241); _v29241; });
    ({ double _v29242 = 7.0; this->f_S__3b__21__23_ = rt::toint_d(_v29242); _v29242; });
    ({ double _v29243 = 27.0; this->f_S__22__21_U = rt::toint_d(_v29243); _v29243; });
    ({ double _v29244 = 4.0; this->f_S__21_G = rt::toint_d(_v29244); _v29244; });
    ({ double _v29245 = 12.0; this->f_S__5e__21_C = rt::toint_d(_v29245); _v29245; });
    ({ double _v29246 = 1500.0; this->f_S__25_w = rt::toint_d(_v29246); _v29246; });
    ({ bool _v29247 = false; this->f_S__3d_z = _v29247; _v29247; });
}
rt::Value C_S__3c__21_A::m_S__40__22_() {
    RT_FN("S__3c__21_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3584]), C_S__26_c::sm_S_8_21_Z(C_S__3c__21_A::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3c__21_A::m_S_8_21_s() {
    RT_FN("S__3c__21_A.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8502])));
    return rt::NUL;
}
rt::Value C_S__3c__21_A::m_S_8_5b_() {
    RT_FN("S__3c__21_A.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(({ rt::Value _o29248 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p29249 = rt::as_ptr<C_S_84>(_o29248); _p29249 ? _p29249->g_S__3f_j() : rt::tonum(rt::dget(_o29248, NM_S__3f_j)); }), 3600.0, rt::trv(rt::VS(g::LS[8503])), false, true), this->m_S__21_S(g::SV.C_S_8_40___id, g::SV.C_S__5b_n__id, false)));
    return rt::NUL;
}
bool C_S__3c__21_A::g_S__20__21_3() {
    RT_FN("S__3c__21_A.S__20__21_3_get");
    return ({ bool _t29260 = ({ bool _t29257 = ({ bool _t29254 = ({ bool _t29253 = ({ bool _t29250 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29250 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2_21_7__id)) : _t29250; }); _t29253 ? (bool)((({ rt::Value _o29251 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p29252 = rt::as_ptr<C_S_84>(_o29251); _p29252 ? _p29252->g_S__3f_j() : rt::tonum(rt::dget(_o29251, NM_S__3f_j)); }) >= 3600.0)) : _t29253; }); _t29254 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 7.0)) : _t29254; }); _t29257 ? (bool)(({ rt::Value _o29255 = C_S_8G::sm_S__21__21_H(g::SV.C_S_8_40___id); C_S__60_6* _p29256 = rt::as_ptr<C_S__60_6>(_o29255); _p29256 ? _p29256->f_S__3f__21_6 : rt::T(rt::dget(_o29255, NM_S__3f__21_6)); })) : _t29257; }); _t29260 ? (bool)(({ rt::Value _o29258 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5b_n__id); C_S__60_6* _p29259 = rt::as_ptr<C_S__60_6>(_o29258); _p29259 ? _p29259->f_S__3f__21_6 : rt::T(rt::dget(_o29258, NM_S__3f__21_6)); })) : _t29260; });
    return false;
}
bool C_S__3c__21_A::g_S_9_21__25_() {
    RT_FN("S__3c__21_A.S_9_21__25__get");
    return ({ bool _t29262 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29262 ? (bool)((({ bool _t29261 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 7.0); _t29261 ? _t29261 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }))) : _t29262; });
    return false;
}
double C_S__3c__21_A::sm_S__22__21__26_() {
    RT_FN("S__3c__21_A.S__22__21__26_");
    return (0.8 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.8));
    return 0.0;
}
C_S__3c__21_A* C_S__3c__21_A::alloc_() {
    C_S__3c__21_A* o = rt::make<C_S__3c__21_A>();
    return o;
}
rt::Value C_S__3c__21_A::mk_(rt::Value* a, int n) {
    C_S__3c__21_A* o = alloc_();
    o->C_S__3c__21_A::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3c__21_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3c__21_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3c__21_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3c__21_A::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__3c__21_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_A__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__3c__21_E::ctor_() {
    RT_FN("S__3c__21_E.S__3c__21_E");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29263 = 305.0; this->f_S_6_21_Z = rt::touint_d(_v29263); _v29263; });
    ({ rt::Value _v29264 = rt::trv(rt::VS(g::LS[8504])); this->f_S_1i = rt::slot_string(_v29264); _v29264; });
    ({ double _v29265 = 4.0; this->f_S__22__21_U = rt::toint_d(_v29265); _v29265; });
    ({ double _v29266 = 0.0; this->f_S__21_G = rt::toint_d(_v29266); _v29266; });
    ({ double _v29267 = 105.0; this->f_S__25_w = rt::toint_d(_v29267); _v29267; });
}
rt::Value C_S__3c__21_E::m_S_8_21_s() {
    RT_FN("S__3c__21_E.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8505])));
    return rt::NUL;
}
rt::Value C_S__3c__21_E::m_S__40__22_() {
    RT_FN("S__3c__21_E.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8506]), C_S__26_c::sm_S_8_21_Z(C_S__3c__21_E::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3c__21_E::m_S_8_5b_() {
    RT_FN("S__3c__21_E.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d((-1.0)), true))), 600.0, rt::trv(rt::VS(g::LS[8507])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3c__21_E::g_S__20__21_3() {
    RT_FN("S__3c__21_E.S__20__21_3_get");
    return ({ bool _t29268 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29268 ? (bool)((((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d((-1.0)), true))) >= 600.0)) : _t29268; });
    return false;
}
double C_S__3c__21_E::sm_S_2_21_W() {
    RT_FN("S__3c__21_E.S_2_21_W");
    return (2.5 * rt::m_pow(((double)(C_S__26_c::sm_S__26__21__3c_(C_S__26_c::dsm_S__26__21__3c__0(), C_S__26_c::dsm_S__26__21__3c__1()))), 0.5));
    return 0.0;
}
C_S__3c__21_E* C_S__3c__21_E::alloc_() {
    C_S__3c__21_E* o = rt::make<C_S__3c__21_E>();
    return o;
}
rt::Value C_S__3c__21_E::mk_(rt::Value* a, int n) {
    C_S__3c__21_E* o = alloc_();
    o->C_S__3c__21_E::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3c__21_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3c__21_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3c__21_E::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_s: return true;
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3c__21_E::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S__3c__21_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_E__id)); return true;
    case NM_ids: out = g::SV.C_S__3c__21_E__ids; return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_E__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c__21_E__ids = v; return true;
    default: return false;
    }
}
bool C_S__3c__21_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S__3c__21_I::ctor_() {
    RT_FN("S__3c__21_I.S__3c__21_I");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29269 = 456.0; this->f_S_6_21_Z = rt::touint_d(_v29269); _v29269; });
    ({ rt::Value _v29270 = rt::trv(rt::VS(g::LS[8509])); this->f_S_1i = rt::slot_string(_v29270); _v29270; });
    ({ double _v29271 = 15.0; this->f_S__22__21_U = rt::toint_d(_v29271); _v29271; });
    ({ double _v29272 = 5.0; this->f_S__21_G = rt::toint_d(_v29272); _v29272; });
    ({ double _v29273 = 270.0; this->f_S__25_w = rt::toint_d(_v29273); _v29273; });
}
rt::Value C_S__3c__21_I::m_S__40__22_() {
    RT_FN("S__3c__21_I.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8510]), C_S__26_c::sm_S_6_21_T(C_S__3c__21_I::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3c__21_I::m_S_8_21_s() {
    RT_FN("S__3c__21_I.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8511])));
    return rt::NUL;
}
rt::Value C_S__3c__21_I::m_S_8_5b_() {
    RT_FN("S__3c__21_I.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sg_S_1_21_5(), 2000.0, rt::trv(rt::VS(g::LS[8374])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3c__21_I::g_S__20__21_3() {
    RT_FN("S__3c__21_I.S__20__21_3_get");
    return ({ bool _t29274 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29274 ? (bool)((C_S_8G::sg_S_1_21_5() >= 2000.0)) : _t29274; });
    return false;
}
double C_S__3c__21_I::sm_S__26_s() {
    RT_FN("S__3c__21_I.S__26_s");
    return (15.0 * rt::m_pow(C_S__26_c::sm_S__21__21_8(), 0.8));
    return 0.0;
}
C_S__3c__21_I* C_S__3c__21_I::alloc_() {
    C_S__3c__21_I* o = rt::make<C_S__3c__21_I>();
    return o;
}
rt::Value C_S__3c__21_I::mk_(rt::Value* a, int n) {
    C_S__3c__21_I* o = alloc_();
    o->C_S__3c__21_I::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_I::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3c__21_I::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3c__21_I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3c__21_I::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3c__21_I::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3c__21_I::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_I__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_I::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_I__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3c__21_T::ctor_() {
    RT_FN("S__3c__21_T.S__3c__21_T");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29275 = 420.0; this->f_S_6_21_Z = rt::touint_d(_v29275); _v29275; });
    ({ rt::Value _v29276 = rt::trv(rt::VS(g::LS[8512])); this->f_S_1i = rt::slot_string(_v29276); _v29276; });
    ({ double _v29277 = 19.0; this->f_S__22__21_U = rt::toint_d(_v29277); _v29277; });
    ({ double _v29278 = 4.0; this->f_S__21_G = rt::toint_d(_v29278); _v29278; });
    ({ double _v29279 = 400.0; this->f_S__25_w = rt::toint_d(_v29279); _v29279; });
    ({ bool _v29280 = false; this->f_S__3d_z = _v29280; _v29280; });
}
rt::Value C_S__3c__21_T::m_S__40__22_() {
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3c__21_T.S__40__22_");
    (l_A__loc2_ = (((!(((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0))) && (((double)(C_S_8G::sg_S_8_21_H())) >= 130.0)) ? g::SV.C_S_8G__S__2d__21_x : (((!(((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) ? g::SV.C_S_8G__S__23_3 : g::SV.C_S_8G__S__2d__21__5e_))));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[8513]), (((!(((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0))) && (((double)(C_S_8G::sg_S_8_21_H())) >= 130.0)) ? rt::trv(rt::VS(g::LS[8514])) : (((!(((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) ? rt::trv(rt::VS(g::LS[8515])) : rt::VS(g::LS[113])))))));
    if (((!rt::eq(rt::arr_at(g::SV.C_S__26_c__S_4_22_8, ((double)(l_A__loc2_))), rt::UNDEF)) && (!rt::eq(rt::arr_at(g::SV.C_S__26_c__S_4_22_8, ((double)(l_A__loc2_))), rt::NUL)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[8516]), ({ rt::Value _o29281 = C_S_8G::sm_S__21__21_H(rt::touint(rt::arr_at(g::SV.C_S__26_c__S_4_22_8, ((double)(l_A__loc2_))))); C_S__60_6* _p29282 = rt::as_ptr<C_S__60_6>(_o29281); _p29282 ? _p29282->m_S__40__22_() : rt::dcallv(_o29281, NM_S__40__22_); }))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
bool C_S__3c__21_T::m_S_9_21__3f_() {
    RT_FN("S__3c__21_T.S_9_21__3f_");
    return ({ bool _t29283 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29283 ? _t29283 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); });
    return false;
}
rt::Value C_S__3c__21_T::m_S_8_5b_() {
    RT_FN("S__3c__21_T.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__5b__21__5d___id, g::SV.C_S_3_21_A__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__3c__21_T::g_S_9_21__25_() {
    RT_FN("S__3c__21_T.S_9_21__25__get");
    return ({ bool _t29284 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29284 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) : _t29284; });
    return false;
}
bool C_S__3c__21_T::g_S__20__21_3() {
    RT_FN("S__3c__21_T.S__20__21_3_get");
    return ({ bool _t29290 = ({ bool _t29287 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29287 ? (bool)(({ rt::Value _o29285 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5b__21__5d___id); C_S__60_6* _p29286 = rt::as_ptr<C_S__60_6>(_o29285); _p29286 ? _p29286->f_S__3f__21_6 : rt::T(rt::dget(_o29285, NM_S__3f__21_6)); })) : _t29287; }); _t29290 ? (bool)(({ rt::Value _o29288 = C_S_8G::sm_S__21__21_H(g::SV.C_S_3_21_A__id); C_S__60_6* _p29289 = rt::as_ptr<C_S__60_6>(_o29288); _p29289 ? _p29289->f_S__3f__21_6 : rt::T(rt::dget(_o29288, NM_S__3f__21_6)); })) : _t29290; });
    return false;
}
C_S__3c__21_T* C_S__3c__21_T::alloc_() {
    C_S__3c__21_T* o = rt::make<C_S__3c__21_T>();
    return o;
}
rt::Value C_S__3c__21_T::mk_(rt::Value* a, int n) {
    C_S__3c__21_T* o = alloc_();
    o->C_S__3c__21_T::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_T::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3c__21_T::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3c__21_T::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3c__21_T::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_8_5b_: return true;
    case NM_S_9_21__25_: return false;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3c__21_T::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_T::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_T__id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_T::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_T__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_T::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__22_3::ctor_() {
    RT_FN("S__3c__22_3.S__3c__22_3");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29291 = 1057.0; this->f_S_6_21_Z = rt::touint_d(_v29291); _v29291; });
    ({ rt::Value _v29292 = rt::trv(rt::VS(g::LS[8517])); this->f_S_1i = rt::slot_string(_v29292); _v29292; });
    ({ double _v29293 = 31.0; this->f_S__22__21_U = rt::toint_d(_v29293); _v29293; });
    ({ double _v29294 = 5.0; this->f_S__21_G = rt::toint_d(_v29294); _v29294; });
    ({ double _v29295 = 5375.0; this->f_S__25_w = rt::toint_d(_v29295); _v29295; });
    ({ double _v29296 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v29296); _v29296; });
}
rt::Value C_S__3c__22_3::m_S__40__22_() {
    RT_FN("S__3c__22_3.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8518]), C_S__26_c::sm_S_8_21_Z(C_S__3c__22_3::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3c__22_3::m_S__3e_I() {
    RT_FN("S__3c__22_3.S__3e_I");
    return ({ bool _t29299 = ({ bool _t29298 = ({ bool _t29297 = (!this->f_S__3c__21_7); _t29297 ? (bool)(this->g_S__2b__21_a()) : _t29297; }); _t29298 ? (bool)((!this->f_S__3f__21_6)) : _t29298; }); _t29299 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t29299; });
    return false;
}
bool C_S__3c__22_3::m_S__2b__60_() {
    RT_FN("S__3c__22_3.S__2b__60_");
    return ({ bool _t29302 = ({ bool _t29301 = ({ bool _t29300 = (!this->f_S__3c__21_7); _t29300 ? (bool)(this->g_S__2b__21_a()) : _t29300; }); _t29301 ? (bool)((!this->f_S__3f__21_6)) : _t29301; }); _t29302 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t29302; });
    return false;
}
bool C_S__3c__22_3::m_S_9_21__3f_() {
    RT_FN("S__3c__22_3.S_9_21__3f_");
    return ({ bool _t29304 = ({ bool _t29303 = (!this->f_S__3c__21_7); _t29303 ? (bool)(this->f_S__3f__21_6) : _t29303; }); _t29304 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t29304; });
    return false;
}
bool C_S__3c__22_3::g_S_9_21__25_() {
    RT_FN("S__3c__22_3.S_9_21__25__get");
    return ({ bool _t29305 = (!this->m_S_9_21_F()); _t29305 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t29305; });
    return false;
}
bool C_S__3c__22_3::g_S__20__21_3() {
    RT_FN("S__3c__22_3.S__20__21_3_get");
    return ({ bool _t29306 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29306 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t29306; });
    return false;
}
double C_S__3c__22_3::sm_S_9L() {
    RT_FN("S__3c__22_3.S_9L");
    return (2.5 * rt::m_pow(C_S__23__21__21_::sm_S__2c__21_E(), 0.5));
    return 0.0;
}
C_S__3c__22_3* C_S__3c__22_3::alloc_() {
    C_S__3c__22_3* o = rt::make<C_S__3c__22_3>();
    return o;
}
rt::Value C_S__3c__22_3::mk_(rt::Value* a, int n) {
    C_S__3c__22_3* o = alloc_();
    o->C_S__3c__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22_3::dget(int id, rt::Value& out) {
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
bool C_S__3c__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3c__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__3c__22_3::dmeth(int id) {
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
bool C_S__3c__22_3::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__3c__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22_3__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22_3__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__3c__22_4::ctor_() {
    RT_FN("S__3c__22_4.S__3c__22_4");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29307 = 1035.0; this->f_S_6_21_Z = rt::touint_d(_v29307); _v29307; });
    ({ rt::Value _v29308 = rt::trv(rt::VS(g::LS[8519])); this->f_S_1i = rt::slot_string(_v29308); _v29308; });
    ({ double _v29309 = 32.0; this->f_S__22__21_U = rt::toint_d(_v29309); _v29309; });
    ({ double _v29310 = 4.0; this->f_S__21_G = rt::toint_d(_v29310); _v29310; });
    ({ double _v29311 = 5625.0; this->f_S__25_w = rt::toint_d(_v29311); _v29311; });
}
rt::Value C_S__3c__22_4::m_S__40__22_() {
    RT_FN("S__3c__22_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8520])));
    return rt::NUL;
}
rt::Value C_S__3c__22_4::m_S_8_5b_() {
    RT_FN("S__3c__22_4.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__22__21_z(false, true), 86400.0, rt::trv(rt::VS(g::LS[8521])), false, true));
    return rt::NUL;
}
bool C_S__3c__22_4::g_S__20__21_3() {
    RT_FN("S__3c__22_4.S__20__21_3_get");
    return ({ bool _t29313 = ({ bool _t29312 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29312 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t29312; }); _t29313 ? (bool)((C_S__26_c::sm_S__22__21_z(false, true) >= 86400.0)) : _t29313; });
    return false;
}
C_S__3c__22_4* C_S__3c__22_4::alloc_() {
    C_S__3c__22_4* o = rt::make<C_S__3c__22_4>();
    return o;
}
rt::Value C_S__3c__22_4::mk_(rt::Value* a, int n) {
    C_S__3c__22_4* o = alloc_();
    o->C_S__3c__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3c__22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3c__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3c__22_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3c__22_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22_4__id)); return true;
    default: return false;
    }
}
bool C_S__3c__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__22_5::ctor_() {
    RT_FN("S__3c__22_5.S__3c__22_5");
    (void)((this->C_S__20__22_5::ctor_(), rt::NUL));
    ({ double _v29314 = 1025.0; this->f_S_6_21_Z = rt::touint_d(_v29314); _v29314; });
    ({ rt::Value _v29315 = rt::trv(rt::VS(g::LS[8522])); this->f_S_1i = rt::slot_string(_v29315); _v29315; });
    ({ rt::Value _v29316 = rt::VS(g::LS[8523]); this->f_S__5e__21__23_ = rt::slot_string(_v29316); _v29316; });
    ({ double _v29317 = 1.0; this->f_S__21_G = rt::toint_d(_v29317); _v29317; });
    ({ double _v29318 = 1.0; this->f_S__5e__21_C = rt::toint_d(_v29318); _v29318; });
    ({ double _v29319 = 1.0; this->f_S__26__22_L = rt::toint_d(_v29319); _v29319; });
    ({ double _v29320 = 6.0; this->f_S__27__22_L = rt::toint_d(_v29320); _v29320; });
}
bool C_S__3c__22_5::g_S__2d_6() {
    RT_FN("S__3c__22_5.S__2d_6_get");
    return ({ bool _t29321 = this->C_S__20__22_5::g_S__2d_6(); _t29321 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_3_22_5__id)) : _t29321; });
    return false;
}
C_S__3c__22_5* C_S__3c__22_5::alloc_() {
    C_S__3c__22_5* o = rt::make<C_S__3c__22_5>();
    return o;
}
rt::Value C_S__3c__22_5::mk_(rt::Value* a, int n) {
    C_S__3c__22_5* o = alloc_();
    o->C_S__3c__22_5::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__20__22_5::dget(id, out);
}
bool C_S__3c__22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__20__22_5::dset(id, v);
}
bool C_S__3c__22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__22_5::dcall(id, a, n, out);
}
bool C_S__3c__22_5::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__20__22_5::dmeth(id);
}
bool C_S__3c__22_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22_5__id)); return true;
    default: return false;
    }
}
bool C_S__3c__22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c_2::ctor_() {
    RT_FN("S__3c_2.S__3c_2");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29322 = 322.0; this->f_S_6_21_Z = rt::touint_d(_v29322); _v29322; });
    ({ rt::Value _v29323 = rt::trv(rt::VS(g::LS[8524])); this->f_S_1i = rt::slot_string(_v29323); _v29323; });
    ({ double _v29324 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v29324); _v29324; });
    ({ double _v29325 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29325); _v29325; });
    ({ double _v29326 = 2.0; this->f_S__22__21_U = rt::toint_d(_v29326); _v29326; });
    ({ double _v29327 = 5.0; this->f_S__21_G = rt::toint_d(_v29327); _v29327; });
    ({ double _v29328 = 3.0; this->f_S__5e__21_C = rt::toint_d(_v29328); _v29328; });
    ({ double _v29329 = 25.0; this->f_S__25_w = rt::toint_d(_v29329); _v29329; });
}
rt::Value C_S__3c_2::m_S__40__22_() {
    RT_FN("S__3c_2.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8525]), C_S__26_c::sm_S_6_21_T(C_S__3c_2::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3c_2::m_S_8_21_s() {
    RT_FN("S__3c_2.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8526])));
    return rt::NUL;
}
rt::Value C_S__3c_2::m_S_8_5b_() {
    RT_FN("S__3c_2.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 0.0)), 1e+132, rt::trv(rt::VS(g::LS[2018])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3c_2::g_S__20__21_3() {
    RT_FN("S__3c_2.S__20__21_3_get");
    return ({ bool _t29330 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29330 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 0.0), rt::V(1e+132))) : _t29330; });
    return false;
}
double C_S__3c_2::sm_S__27__21_b() {
    RT_FN("S__3c_2.S__27__21_b");
    return (10.0 * rt::m_pow(C_S__26_c::sm_S_9_21_P(g::SV.C_S_2_3c___id, false, true, C_S__26_c::dsm_S_9_21_P_3()), 0.4));
    return 0.0;
}
C_S__3c_2* C_S__3c_2::alloc_() {
    C_S__3c_2* o = rt::make<C_S__3c_2>();
    return o;
}
rt::Value C_S__3c_2::mk_(rt::Value* a, int n) {
    C_S__3c_2* o = alloc_();
    o->C_S__3c_2::ctor_();
    return rt::VO(o);
}
bool C_S__3c_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3c_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3c_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3c_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3c_2::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3c_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c_2__id)); return true;
    case NM_ids: out = g::SV.C_S__3c_2__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c_2__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c_2__ids = v; return true;
    default: return false;
    }
}
bool C_S__3c_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void static_init_15(std::vector<std::string>& errs) {
    try { (g::SV.C_S__40__22_9__ids = rt::arr_lit({rt::VS(g::LS[8291])})); } catch (...) { errs.push_back(std::string("S__40__22_9.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22__3b___ids = rt::arr_lit({rt::VS(g::LS[8295])})); } catch (...) { errs.push_back(std::string("S__40__22__3b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__21__22___ids = rt::arr_lit({rt::VS(g::LS[8298])})); } catch (...) { errs.push_back(std::string("S__60__21__22_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_c__S_4_22_J = 5.0); } catch (...) { errs.push_back(std::string("S__22_c.S_4_22_J: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_c__S_1_21_S = 2500.0); } catch (...) { errs.push_back(std::string("S__22_c.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__21_p__S_4_22_J = 15.0); } catch (...) { errs.push_back(std::string("S__2c__21_p.S_4_22_J: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__21_p__S_1_21_S = 2500.0); } catch (...) { errs.push_back(std::string("S__2c__21_p.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_B__S_1_21_S = 10.0); } catch (...) { errs.push_back(std::string("S_2_21_B.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__21_S__S_1_21_S = 0.1); } catch (...) { errs.push_back(std::string("S__60__21_S.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__22_F__S__60__22_E = 0.15); } catch (...) { errs.push_back(std::string("S__20__22_F.S__60__22_E: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__3f___ids = rt::arr_lit({rt::VS(g::LS[8381])})); } catch (...) { errs.push_back(std::string("S__20__3f_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20_I__ids = rt::arr_lit({rt::VS(g::LS[8386])})); } catch (...) { errs.push_back(std::string("S__20_I.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20_U__ids = rt::arr_lit({rt::VS(g::LS[8389])})); } catch (...) { errs.push_back(std::string("S__20_U.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20_n__ids = rt::arr_lit({rt::VS(g::LS[8396])})); } catch (...) { errs.push_back(std::string("S__20_n.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__21_O__ids = rt::arr_lit({rt::VS(g::LS[8399])})); } catch (...) { errs.push_back(std::string("S__21__21_O.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__21_R__S_1_21_S = 200.0); } catch (...) { errs.push_back(std::string("S__21__21_R.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__21___ids = rt::arr_lit({rt::VS(g::LS[8407])})); } catch (...) { errs.push_back(std::string("S__21__21_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__21_D__ids = rt::arr_lit({rt::VS(g::LS[8415])})); } catch (...) { errs.push_back(std::string("S__21_D.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__21_i__ids = rt::arr_lit({rt::VS(g::LS[8418])})); } catch (...) { errs.push_back(std::string("S__21_i.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__21__2b___S_1_21_S = 160.0); } catch (...) { errs.push_back(std::string("S__25__21__2b_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__21__2b___ids = rt::arr_lit({rt::VS(g::LS[8439])})); } catch (...) { errs.push_back(std::string("S__25__21__2b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__21_P__S_1_21_S = 15.0); } catch (...) { errs.push_back(std::string("S__25__21_P.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__21_P__ids = rt::arr_lit({rt::VS(g::LS[8447])})); } catch (...) { errs.push_back(std::string("S__25__21_P.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__21_j__S__2c__26_ = 1e+30); } catch (...) { errs.push_back(std::string("S__25__21_j.S__2c__26_: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22_G__S_1_21_S = 0.02); } catch (...) { errs.push_back(std::string("S__25__22_G.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__22__25___S_1_21_S = 0.01); } catch (...) { errs.push_back(std::string("S__22__25_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__22__25___ids = rt::arr_lit({rt::VS(g::LS[8485])})); } catch (...) { errs.push_back(std::string("S__22__25_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_4__S_1_21_S = 1600.0); } catch (...) { errs.push_back(std::string("S__22_4.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_4__ids = rt::arr_lit({rt::VS(g::LS[8490])})); } catch (...) { errs.push_back(std::string("S__22_4.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__22__3d___ids = rt::arr_lit({rt::VS(g::LS[8493])})); } catch (...) { errs.push_back(std::string("S__22__3d_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_v__ids = rt::arr_lit({rt::VS(g::LS[8498])})); } catch (...) { errs.push_back(std::string("S__22_v.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c__21_E__ids = rt::arr_lit({rt::VS(g::LS[8508])})); } catch (...) { errs.push_back(std::string("S__3c__21_E.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c_2__ids = rt::arr_lit({rt::VS(g::LS[8527])})); } catch (...) { errs.push_back(std::string("S__3c_2.ids: ") + rt::exc_text()); }
}
}  // namespace g
