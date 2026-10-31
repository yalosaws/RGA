// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S__3c__22__3d_::ctor_() {
    RT_FN("S__3c__22__3d_.S__3c__22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9437 = 381.0; this->f_S_6_21_Z = rt::touint_d(_v9437); _v9437; });
    ({ rt::Value _v9438 = rt::trv(rt::VS(g::LS[1753])); this->f_S_1i = rt::slot_string(_v9438); _v9438; });
    ({ rt::Value _v9439 = rt::VS(g::LS[1754]); this->f_S__5e__21__23_ = rt::slot_string(_v9439); _v9439; });
    ({ double _v9440 = 5e+24; this->f_S__3e__3d_ = _v9440; _v9440; });
    ({ double _v9441 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9441); _v9441; });
    ({ double _v9442 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9442); _v9442; });
    ({ double _v9443 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9443); _v9443; });
    ({ bool _v9444 = true; this->f_S__3c__60_ = _v9444; _v9444; });
    ({ double _v9445 = 4.0; this->f_S__21__22_E = rt::touint_d(_v9445); _v9445; });
}
rt::Value C_S__3c__22__3d_::m_S__40__22_() {
    RT_FN("S__3c__22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1755]), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o9446 = C_S_8G::sm_S__2d_e(rt::toint_d(4.0)); C_S__60__21__3b_* _p9447 = rt::as_ptr<C_S__60__21__3b_>(_o9446); _p9447 ? _p9447->f_id : rt::touint(rt::dget(_o9446, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__3c__22__3d_::sm_S_4_22_D(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o9448 = C_S_8G::sm_S__2d_e(rt::toint_d(7.0)); C_S__60__21__3b_* _p9449 = rt::as_ptr<C_S__60__21__3b_>(_o9448); _p9449 ? _p9449->f_id : rt::touint(rt::dget(_o9448, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__3c__22__3d_::sm_S__2d__22__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_6_21_T(C_S__3c__22__3d_::sm_S__26_s(), 1.0, true)));
    return rt::NUL;
}
bool C_S__3c__22__3d_::g_S__2d_6() {
    RT_FN("S__3c__22__3d_.S__2d_6_get");
    return ({ bool _t9450 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1739])))) >= 2.0); _t9450 ? _t9450 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3b__22_B__id)); });
    return false;
}
double C_S__3c__22__3d_::sm_S_4_22_D() {
    RT_FN("S__3c__22__3d_.S_4_22_D");
    return 19635.0;
    return 0.0;
}
double C_S__3c__22__3d_::sm_S__2d__22__2b_() {
    RT_FN("S__3c__22__3d_.S__2d__22__2b_");
    return 98000.0;
    return 0.0;
}
double C_S__3c__22__3d_::sm_S__26_s() {
    RT_FN("S__3c__22__3d_.S__26_s");
    return 2500.0;
    return 0.0;
}
C_S__3c__22__3d_* C_S__3c__22__3d_::alloc_() {
    C_S__3c__22__3d_* o = rt::make<C_S__3c__22__3d_>();
    return o;
}
rt::Value C_S__3c__22__3d_::mk_(rt::Value* a, int n) {
    C_S__3c__22__3d_* o = alloc_();
    o->C_S__3c__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S_4_22_D: return true;
    case NM_S__2d__22__2b_: return true;
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3c__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22__3d___id)); return true;
    case NM_ids: out = g::SV.C_S__3c__22__3d___ids; return true;
    case NM_S_4_22_D: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2d__22__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22__3d___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c__22__3d___ids = v; return true;
    default: return false;
    }
}
bool C_S__3c__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_22_D: out = rt::V(sm_S_4_22_D()); return true;
    case NM_S__2d__22__2b_: out = rt::V(sm_S__2d__22__2b_()); return true;
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__27__22__3e_::ctor_() {
    RT_FN("S__27__22__3e_.S__27__22__3e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9451 = 386.0; this->f_S_6_21_Z = rt::touint_d(_v9451); _v9451; });
    ({ rt::Value _v9452 = rt::trv(rt::VS(g::LS[1757])); this->f_S_1i = rt::slot_string(_v9452); _v9452; });
    ({ rt::Value _v9453 = rt::VS(g::LS[1758]); this->f_S__5e__21__23_ = rt::slot_string(_v9453); _v9453; });
    ({ double _v9454 = 5e+30; this->f_S__3e__3d_ = _v9454; _v9454; });
    ({ double _v9455 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9455); _v9455; });
    ({ double _v9456 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9456); _v9456; });
    ({ double _v9457 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9457); _v9457; });
    ({ bool _v9458 = true; this->f_S__3c__60_ = _v9458; _v9458; });
    ({ double _v9459 = 9.0; this->f_S__21__22_E = rt::touint_d(_v9459); _v9459; });
}
rt::Value C_S__27__22__3e_::m_S__40__22_() {
    RT_FN("S__27__22__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1759]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__27__22__3e_::sm_S_2_21__40_(), (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__2b__22__2d___id) ? 5.0 : 1.0), true)));
    return rt::NUL;
}
rt::Value C_S__27__22__3e_::m_S_6r() {
    RT_FN("S__27__22__3e_.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o9460 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p9461 = rt::as_ptr<C_S_8G>(_o9460); _p9461 ? _p9461->m_S_17() : rt::dcallv(_o9460, NM_S_17); }));
    (void)(({ rt::Value _o9462 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p9463 = rt::as_ptr<C_S__20_g>(_o9462); _p9463 ? _p9463->m_S_69() : rt::dcallv(_o9462, NM_S_69); }));
    return rt::NUL;
}
bool C_S__27__22__3e_::g_S__2d_6() {
    RT_FN("S__27__22__3e_.S__2d_6_get");
    return ({ bool _t9464 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1739])))) >= 3.0); _t9464 ? _t9464 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3b__22__3d___id)); });
    return false;
}
double C_S__27__22__3e_::sm_S_2_21__40_() {
    RT_FN("S__27__22__3e_.S_2_21__40_");
    return (3.0 * rt::m_pow(C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_O__id, C_S_8G::dsm_S__25_Z_1()), 0.9));
    return 0.0;
}
C_S__27__22__3e_* C_S__27__22__3e_::alloc_() {
    C_S__27__22__3e_* o = rt::make<C_S__27__22__3e_>();
    return o;
}
rt::Value C_S__27__22__3e_::mk_(rt::Value* a, int n) {
    C_S__27__22__3e_* o = alloc_();
    o->C_S__27__22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__27__22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__22__3e_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S__27__22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22__3e___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__27__22__3e___S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__27__22__3e___ids; return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22__3e___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__27__22__3e___S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__27__22__3e___ids = v; return true;
    default: return false;
    }
}
bool C_S__27__22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S__2c__21_n::ctor_() {
    RT_FN("S__2c__21_n.S__2c__21_n");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9465 = 780.0; this->f_S_6_21_Z = rt::touint_d(_v9465); _v9465; });
    ({ rt::Value _v9466 = rt::trv(rt::VS(g::LS[1761])); this->f_S_1i = rt::slot_string(_v9466); _v9466; });
    ({ rt::Value _v9467 = rt::VS(g::LS[1762]); this->f_S__5e__21__23_ = rt::slot_string(_v9467); _v9467; });
    ({ rt::Value _v9468 = rt::VS(g::LS[1739]); this->f_S__3f__21__3d_ = rt::slot_string(_v9468); _v9468; });
    ({ rt::Value _v9469 = rt::VS(g::LS[1739]); this->f_S__40_1 = rt::slot_string(_v9469); _v9469; });
    ({ double _v9470 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9470); _v9470; });
    ({ double _v9471 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9471); _v9471; });
    ({ double _v9472 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9472); _v9472; });
    ({ bool _v9473 = true; this->f_S__21__21_n = _v9473; _v9473; });
}
rt::Value C_S__2c__21_n::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__2c__21_n.S__40__22_");
    (l_A__loc1_ = rt::slot_string(((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0) ? rt::add(rt::trv(rt::VS(g::LS[1743])), rt::VS(g::LS[8])) : rt::VS(g::LS[113]))));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 105.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[1763]), C_S__26_c::sm_S_8_21_Z(C_S__2c__21_n::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))));
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1764]), C_S__26_c::sm_S_8_21_Z(C_S__2c__21_n::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
int32_t C_S__2c__21_n::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__2c__21_n::dm_S_75_2() { return false; }
rt::Value C_S__2c__21_n::dm_S_75_3() { return rt::NUL; }
double C_S__2c__21_n::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__2c__21_n.S_75");
    if (((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 3.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+33 : 1e+18);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__2c__21_n::g_S__2d_6() {
    RT_FN("S__2c__21_n.S__2d_6_get");
    return ({ bool _t9476 = ({ bool _t9475 = ({ bool _t9474 = this->C_S__60_6::g_S__2d_6(); _t9474 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0)) : _t9474; }); _t9475 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t9475; }); _t9476 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_6_21_n__id)) : _t9476; });
    return false;
}
double C_S__2c__21_n::sm_S__23__21_Y() {
    RT_FN("S__2c__21_n.S__23__21_Y");
    return (50.0 * rt::m_pow(((C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()) / 60.0) / 60.0), 0.85));
    return 0.0;
}
double C_S__2c__21_n::sm_S__60_z() {
    RT_FN("S__2c__21_n.S__60_z");
    return (20.0 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.75));
    return 0.0;
}
C_S__2c__21_n* C_S__2c__21_n::alloc_() {
    C_S__2c__21_n* o = rt::make<C_S__2c__21_n>();
    return o;
}
rt::Value C_S__2c__21_n::mk_(rt::Value* a, int n) {
    C_S__2c__21_n* o = alloc_();
    o->C_S__2c__21_n::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21_n::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__21_n::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__21_n::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__2c__21_n::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__2c__21_n::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__2c__21_n::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__21_n::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__21_n::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    case NM_S__60_z: return true;
    default: return false;
    }
}
bool C_S__2c__21_n::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21_n__id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__21_n::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21_n__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__21_n::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    default: return false;
    }
}
void C_S_0_22__3f_::ctor_() {
    RT_FN("S_0_22__3f_.S_0_22__3f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9477 = 821.0; this->f_S_6_21_Z = rt::touint_d(_v9477); _v9477; });
    ({ rt::Value _v9478 = rt::trv(rt::VS(g::LS[1765])); this->f_S_1i = rt::slot_string(_v9478); _v9478; });
    ({ rt::Value _v9479 = rt::VS(g::LS[1766]); this->f_S__5e__21__23_ = rt::slot_string(_v9479); _v9479; });
    ({ double _v9480 = 1e+75; this->f_S__23__21_m = _v9480; _v9480; });
    ({ double _v9481 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9481); _v9481; });
    ({ double _v9482 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9482); _v9482; });
    ({ double _v9483 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9483); _v9483; });
    ({ bool _v9484 = true; this->f_S__21__21_n = _v9484; _v9484; });
    ({ double _v9485 = 11.0; this->f_S__21__22_E = rt::touint_d(_v9485); _v9485; });
}
rt::Value C_S_0_22__3f_::m_S__40__22_() {
    RT_FN("S_0_22__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1767]), C_S__26_c::sm_S_6_21_T(C_S_0_22__3f_::sm_S__26_s(), 3.0, true)));
    return rt::NUL;
}
bool C_S_0_22__3f_::g_S__2d_6() {
    RT_FN("S_0_22__3f_.S__2d_6_get");
    return ({ bool _t9487 = ({ bool _t9486 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1739])))) >= 4.0); _t9486 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_6_21_n__id)) : _t9486; }); _t9487 ? _t9487 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3d__22_B__id)); });
    return false;
}
bool C_S_0_22__3f_::g_S_9_21__25_() {
    RT_FN("S_0_22__3f_.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S_0_22__3f_::sm_S__26_s() {
    RT_FN("S_0_22__3f_.S__26_s");
    return (0.6 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.6));
    return 0.0;
}
C_S_0_22__3f_* C_S_0_22__3f_::alloc_() {
    C_S_0_22__3f_* o = rt::make<C_S_0_22__3f_>();
    return o;
}
rt::Value C_S_0_22__3f_::mk_(rt::Value* a, int n) {
    C_S_0_22__3f_* o = alloc_();
    o->C_S_0_22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S_0_22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0_22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0_22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0_22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0_22__3f_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_0_22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22__3f___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_0_5e_::ctor_() {
    RT_FN("S_0_5e_.S_0_5e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9488 = 384.0; this->f_S_6_21_Z = rt::touint_d(_v9488); _v9488; });
    ({ rt::Value _v9489 = rt::trv(rt::VS(g::LS[1768])); this->f_S_1i = rt::slot_string(_v9489); _v9489; });
    ({ rt::Value _v9490 = rt::VS(g::LS[1769]); this->f_S__5e__21__23_ = rt::slot_string(_v9490); _v9490; });
    ({ rt::Value _v9491 = rt::VS(g::LS[1739]); this->f_S__3f__21__3d_ = rt::slot_string(_v9491); _v9491; });
    ({ rt::Value _v9492 = rt::VS(g::LS[1739]); this->f_S__40_1 = rt::slot_string(_v9492); _v9492; });
    ({ rt::Value _v9493 = rt::trv(rt::VS(g::LS[1743])); this->f_S_7_23_ = rt::slot_string(_v9493); _v9493; });
    ({ double _v9494 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9494); _v9494; });
    ({ double _v9495 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9495); _v9495; });
    ({ double _v9496 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9496); _v9496; });
    ({ bool _v9497 = true; this->f_S__3c__60_ = _v9497; _v9497; });
}
int32_t C_S_0_5e_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_0_5e_::dm_S_75_2() { return false; }
rt::Value C_S_0_5e_::dm_S_75_3() { return rt::NUL; }
double C_S_0_5e_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_0_5e_.S_75");
    if (((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 3.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+27 : 4000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S_0_5e_::g_S__2d_6() {
    RT_FN("S_0_5e_.S__2d_6_get");
    return ({ bool _t9498 = this->C_S__60_6::g_S__2d_6(); _t9498 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0)) : _t9498; });
    return false;
}
C_S_0_5e_* C_S_0_5e_::alloc_() {
    C_S_0_5e_* o = rt::make<C_S_0_5e_>();
    return o;
}
rt::Value C_S_0_5e_::mk_(rt::Value* a, int n) {
    C_S_0_5e_* o = alloc_();
    o->C_S_0_5e_::ctor_();
    return rt::VO(o);
}
bool C_S_0_5e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0_5e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0_5e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_0_5e_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_0_5e_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_0_5e_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0_5e_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0_5e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_5e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_5e___id)); return true;
    case NM_ids: out = g::SV.C_S_0_5e___ids; return true;
    default: return false;
    }
}
bool C_S_0_5e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_5e___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_0_5e___ids = v; return true;
    default: return false;
    }
}
bool C_S_0_5e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1B::ctor_() {
    RT_FN("S_1B.S_1B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9499 = 385.0; this->f_S_6_21_Z = rt::touint_d(_v9499); _v9499; });
    ({ rt::Value _v9500 = rt::trv(rt::VS(g::LS[1771])); this->f_S_1i = rt::slot_string(_v9500); _v9500; });
    ({ rt::Value _v9501 = rt::VS(g::LS[1772]); this->f_S__5e__21__23_ = rt::slot_string(_v9501); _v9501; });
    ({ double _v9502 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9502); _v9502; });
    ({ double _v9503 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9503); _v9503; });
    ({ double _v9504 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9504); _v9504; });
}
rt::Value C_S_1B::m_S__40__22_() {
    RT_FN("S_1B.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1773]), C_S__26_c::sm_S_8_21_Z(C_S_1B::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
int32_t C_S_1B::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_1B::dm_S_75_2() { return false; }
rt::Value C_S_1B::dm_S_75_3() { return rt::NUL; }
double C_S_1B::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S_1B.S_75");
    (l_A__loc5_ = NAN);
    if (((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 3.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+30 : 15000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S_1B::g_S__2d_6() {
    RT_FN("S_1B.S__2d_6_get");
    return ({ bool _t9505 = C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[1774]))); _t9505 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t9505; });
    return false;
}
double C_S_1B::sm_S__40__21__3f_() {
    RT_FN("S_1B.S__40__21__3f_");
    return 15.0;
    return 0.0;
}
C_S_1B* C_S_1B::alloc_() {
    C_S_1B* o = rt::make<C_S_1B>();
    return o;
}
rt::Value C_S_1B::mk_(rt::Value* a, int n) {
    C_S_1B* o = alloc_();
    o->C_S_1B::ctor_();
    return rt::VO(o);
}
bool C_S_1B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_1B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_1B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_1B::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_1B::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_1B::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_1B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_1B::smeth_(int id) {
    switch (id) {
    case NM_S__40__21__3f_: return true;
    default: return false;
    }
}
bool C_S_1B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1B__id)); return true;
    case NM_ids: out = g::SV.C_S_1B__ids; return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1B__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_1B__ids = v; return true;
    default: return false;
    }
}
bool C_S_1B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    default: return false;
    }
}
void C_S_3_22__3c_::ctor_() {
    RT_FN("S_3_22__3c_.S_3_22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9506 = 787.0; this->f_S_6_21_Z = rt::touint_d(_v9506); _v9506; });
    ({ rt::Value _v9507 = rt::trv(rt::VS(g::LS[1776])); this->f_S_1i = rt::slot_string(_v9507); _v9507; });
    ({ rt::Value _v9508 = rt::VS(g::LS[1777]); this->f_S__5e__21__23_ = rt::slot_string(_v9508); _v9508; });
    ({ double _v9509 = 1e+60; this->f_S__23__21_m = _v9509; _v9509; });
    ({ double _v9510 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9510); _v9510; });
    ({ double _v9511 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9511); _v9511; });
    ({ double _v9512 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9512); _v9512; });
    ({ bool _v9513 = true; this->f_S__21__21_n = _v9513; _v9513; });
    ({ double _v9514 = 10.0; this->f_S__21__22_E = rt::touint_d(_v9514); _v9514; });
}
rt::Value C_S_3_22__3c_::m_S__40__22_() {
    RT_FN("S_3_22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1778]), C_S__26_c::sm_S_8_21_Z(C_S_3_22__3c_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_3_22__3c_::g_S__2d_6() {
    RT_FN("S_3_22__3c_.S__2d_6_get");
    return ({ bool _t9516 = ({ bool _t9515 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1739])))) >= 4.0); _t9515 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_6_21_n__id)) : _t9515; }); _t9516 ? _t9516 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3d__22_B__id)); });
    return false;
}
bool C_S_3_22__3c_::g_S_9_21__25_() {
    RT_FN("S_3_22__3c_.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S_3_22__3c_::sm_S__2c__21_G() {
    RT_FN("S_3_22__3c_.S__2c__21_G");
    return rt::m_pow(C_S_8G::sm_S__5e__22_C(g::SV.C_S__5b_l__id, rt::toint_d(0.0), C_S_8G::dsm_S__5e__22_C_2()), 0.7);
    return 0.0;
}
C_S_3_22__3c_* C_S_3_22__3c_::alloc_() {
    C_S_3_22__3c_* o = rt::make<C_S_3_22__3c_>();
    return o;
}
rt::Value C_S_3_22__3c_::mk_(rt::Value* a, int n) {
    C_S_3_22__3c_* o = alloc_();
    o->C_S_3_22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S_3_22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_3_22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_3_22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_3_22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_3_22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_3_22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_22__3c___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_3_22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_22__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3e_p::ctor_() {
    RT_FN("S__3e_p.S__3e_p");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9517 = 14.0; this->f_S_6_21_Z = rt::touint_d(_v9517); _v9517; });
    ({ bool _v9518 = false; this->f_S_3e = _v9518; _v9518; });
}
rt::Value C_S__3e_p::m_S__3e__21_d() {
    RT_FN("S__3e_p.S__3e__21_d");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
rt::Value C_S__3e_p::m_S__40__22_() {
    RT_FN("S__3e_p.S__40__22_");
    return rt::slot_string(this->m_S__3e__21_d());
    return rt::NUL;
}
rt::Value C_S__3e_p::m_S_6r() {
    RT_FN("S__3e_p.S_6r");
    if ((((double)(g::SV.C_S_1_2d___S_9_21__5b_)) == 0.0)) {
        (g::SV.C_S__23__21__21___S__60_Q = this->f_S__2d__21__5e_);
    } else {
        (g::SV.C_S__23__21__21___S_3_21_j = this->f_S__2d__21__5e_);
    }
    return rt::NUL;
}
bool C_S__3e_p::g_S__2d_6() {
    RT_FN("S__3e_p.S__2d_6_get");
    return false;
    return false;
}
bool C_S__3e_p::g_S_9_21__25_() {
    RT_FN("S__3e_p.S_9_21__25__get");
    if (((((double)(g::SV.C_S_1_2d___S_9_21__5b_)) == 0.0) && C_S__26_c::sm_S__5d_B(rt::touint(C_S__60_6::sg_id()), C_S__26_c::dsm_S__5d_B_1()))) {
        return false;
    }
    if (((((double)(g::SV.C_S_1_2d___S_9_21__5b_)) == 1.0) && C_S_8G::sm_S_7d(rt::touint(C_S__60_6::sg_id())))) {
        return false;
    }
    return true;
    return false;
}
double C_S__3e_p::g_S_9_21_U() {
    RT_FN("S__3e_p.S_9_21_U_get");
    return 0.0;
    return 0.0;
}
C_S__3e_p* C_S__3e_p::alloc_() {
    C_S__3e_p* o = rt::make<C_S__3e_p>();
    return o;
}
rt::Value C_S__3e_p::mk_(rt::Value* a, int n) {
    C_S__3e_p* o = alloc_();
    o->C_S__3e_p::ctor_();
    return rt::VO(o);
}
bool C_S__3e_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_S__3e__21_d: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e_p::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = m_S__3e__21_d(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e_p::dmeth(int id) {
    switch (id) {
    case NM_S__3e__21_d: return true;
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e_p::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e_p::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e_p::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_21_1::ctor_() {
    RT_FN("S_6_21_1.S_6_21_1");
    (void)((this->C_S__3e_p::ctor_(), rt::NUL));
    ({ double _v9519 = 380.0; this->f_S_6_21_Z = rt::touint_d(_v9519); _v9519; });
    ({ rt::Value _v9520 = rt::trv(rt::VS(g::LS[1779])); this->f_S_1i = rt::slot_string(_v9520); _v9520; });
    ({ rt::Value _v9521 = rt::VS(g::LS[1780]); this->f_S__5e__21__23_ = rt::slot_string(_v9521); _v9521; });
    ({ double _v9522 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9522); _v9522; });
    ({ double _v9523 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9523); _v9523; });
    ({ double _v9524 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9524); _v9524; });
}
rt::Value C_S_6_21_1::m_S__3e__21_d() {
    RT_FN("S_6_21_1.S__3e__21_d");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1781]), C_S__26_c::sm_S_8_21_Z(C_S_6_21_1::sm_S__27__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_6_21_1::sm_S__27__21_b() {
    RT_FN("S_6_21_1.S__27__21_b");
    return (12.0 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.8));
    return 0.0;
}
C_S_6_21_1* C_S_6_21_1::alloc_() {
    C_S_6_21_1* o = rt::make<C_S_6_21_1>();
    return o;
}
rt::Value C_S_6_21_1::mk_(rt::Value* a, int n) {
    C_S_6_21_1* o = alloc_();
    o->C_S_6_21_1::ctor_();
    return rt::VO(o);
}
bool C_S_6_21_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e_p::dget(id, out);
}
bool C_S_6_21_1::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e_p::dset(id, v);
}
bool C_S_6_21_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = m_S__3e__21_d(); return true;
    default: break;
    }
    return C_S__3e_p::dcall(id, a, n, out);
}
bool C_S_6_21_1::dmeth(int id) {
    switch (id) {
    case NM_S__3e__21_d: return true;
    default: break;
    }
    return C_S__3e_p::dmeth(id);
}
bool C_S_6_21_1::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_6_21_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21_1__id)); return true;
    case NM_ids: out = g::SV.C_S_6_21_1__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_21_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21_1__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_6_21_1__ids = v; return true;
    default: return false;
    }
}
bool C_S_6_21_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_6_22__3c_::ctor_() {
    RT_FN("S_6_22__3c_.S_6_22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9525 = 387.0; this->f_S_6_21_Z = rt::touint_d(_v9525); _v9525; });
    ({ rt::Value _v9526 = rt::trv(rt::VS(g::LS[1783])); this->f_S_1i = rt::slot_string(_v9526); _v9526; });
    ({ rt::Value _v9527 = rt::VS(g::LS[1784]); this->f_S__5e__21__23_ = rt::slot_string(_v9527); _v9527; });
    ({ double _v9528 = 5e+28; this->f_S__3e__3d_ = _v9528; _v9528; });
    ({ double _v9529 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9529); _v9529; });
    ({ double _v9530 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9530); _v9530; });
    ({ double _v9531 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9531); _v9531; });
    ({ bool _v9532 = true; this->f_S__3c__60_ = _v9532; _v9532; });
    ({ double _v9533 = 7.0; this->f_S__21__22_E = rt::touint_d(_v9533); _v9533; });
}
rt::Value C_S_6_22__3c_::m_S__40__22_() {
    RT_FN("S_6_22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1785]), C_S__26_c::sm_S_8_21_Z(C_S_6_22__3c_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_6_21_T(C_S_6_22__3c_::sm_S_2_21__40_(), 1.0, true)));
    return rt::NUL;
}
bool C_S_6_22__3c_::g_S__2d_6() {
    RT_FN("S_6_22__3c_.S__2d_6_get");
    return ({ bool _t9534 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1739])))) >= 3.0); _t9534 ? _t9534 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3b__22__3d___id)); });
    return false;
}
double C_S_6_22__3c_::sm_S__2c__21_G() {
    RT_FN("S_6_22__3c_.S__2c__21_G");
    return 200.0;
    return 0.0;
}
double C_S_6_22__3c_::sm_S_2_21__40_() {
    RT_FN("S_6_22__3c_.S_2_21__40_");
    return (30.0 + (1.3 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(56.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7)));
    return 0.0;
}
C_S_6_22__3c_* C_S_6_22__3c_::alloc_() {
    C_S_6_22__3c_* o = rt::make<C_S_6_22__3c_>();
    return o;
}
rt::Value C_S_6_22__3c_::mk_(rt::Value* a, int n) {
    C_S_6_22__3c_* o = alloc_();
    o->C_S_6_22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S_6_22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S_6_22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22__3c___id)); return true;
    case NM_ids: out = g::SV.C_S_6_22__3c___ids; return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22__3c___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_6_22__3c___ids = v; return true;
    default: return false;
    }
}
bool C_S_6_22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S_6_22__3f_::ctor_() {
    RT_FN("S_6_22__3f_.S_6_22__3f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9535 = 374.0; this->f_S_6_21_Z = rt::touint_d(_v9535); _v9535; });
    ({ rt::Value _v9536 = rt::trv(rt::VS(g::LS[1787])); this->f_S_1i = rt::slot_string(_v9536); _v9536; });
    ({ rt::Value _v9537 = rt::VS(g::LS[1788]); this->f_S__5e__21__23_ = rt::slot_string(_v9537); _v9537; });
    ({ double _v9538 = 5e+21; this->f_S__3e__3d_ = _v9538; _v9538; });
    ({ double _v9539 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9539); _v9539; });
    ({ double _v9540 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9540); _v9540; });
    ({ double _v9541 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9541); _v9541; });
    ({ bool _v9542 = true; this->f_S__3c__60_ = _v9542; _v9542; });
    ({ double _v9543 = 2.0; this->f_S__21__22_E = rt::touint_d(_v9543); _v9543; });
}
rt::Value C_S_6_22__3f_::m_S__40__22_() {
    RT_FN("S_6_22__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1789]), C_S__26_c::sm_S_8_21_Z(C_S_6_22__3f_::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_6_22__3f_::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_6_22__3f_::g_S__2d_6() {
    RT_FN("S_6_22__3f_.S__2d_6_get");
    return ({ bool _t9544 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1739])))) >= 1.0); _t9544 ? _t9544 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_2_22__3f___id)); });
    return false;
}
double C_S_6_22__3f_::sm_S_2_21_W() {
    RT_FN("S_6_22__3f_.S_2_21_W");
    return (1.0 + (0.5 * ((rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()))), 1.35) + rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.15)))));
    return 0.0;
}
double C_S_6_22__3f_::sm_S__22__21__26_() {
    RT_FN("S_6_22__3f_.S__22__21__26_");
    return ((0.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()))), 2.5)) + rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.25));
    return 0.0;
}
C_S_6_22__3f_* C_S_6_22__3f_::alloc_() {
    C_S_6_22__3f_* o = rt::make<C_S_6_22__3f_>();
    return o;
}
rt::Value C_S_6_22__3f_::mk_(rt::Value* a, int n) {
    C_S_6_22__3f_* o = alloc_();
    o->C_S_6_22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S_6_22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_22__3f_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S_6_22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22__3f___id)); return true;
    case NM_ids: out = g::SV.C_S_6_22__3f___ids; return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22__3f___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_6_22__3f___ids = v; return true;
    default: return false;
    }
}
bool C_S_6_22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__40__22_C::ctor_() {
    RT_FN("S__40__22_C.S__40__22_C");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9545 = 378.0; this->f_S_6_21_Z = rt::touint_d(_v9545); _v9545; });
    ({ rt::Value _v9546 = rt::trv(rt::VS(g::LS[1791])); this->f_S_1i = rt::slot_string(_v9546); _v9546; });
    ({ rt::Value _v9547 = rt::VS(g::LS[1792]); this->f_S__5e__21__23_ = rt::slot_string(_v9547); _v9547; });
    ({ double _v9548 = 5e+29; this->f_S__3e__3d_ = _v9548; _v9548; });
    ({ double _v9549 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9549); _v9549; });
    ({ double _v9550 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9550); _v9550; });
    ({ double _v9551 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9551); _v9551; });
    ({ bool _v9552 = true; this->f_S__3c__60_ = _v9552; _v9552; });
    ({ double _v9553 = 8.0; this->f_S__21__22_E = rt::touint_d(_v9553); _v9553; });
}
rt::Value C_S__40__22_C::m_S__40__22_() {
    RT_FN("S__40__22_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1793]), C_S__26_c::sm_S_8_21_Z(C_S__40__22_C::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::dcallv(rt::V(0.01), rt::N_toFixed, rt::V(2.0))));
    return rt::NUL;
}
bool C_S__40__22_C::g_S__2d_6() {
    RT_FN("S__40__22_C.S__2d_6_get");
    return ({ bool _t9554 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1739])))) >= 3.0); _t9554 ? _t9554 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3b__22__3d___id)); });
    return false;
}
double C_S__40__22_C::sm_S__40__21__3f_() {
    RT_FN("S__40__22_C.S__40__21__3f_");
    return 100.0;
    return 0.0;
}
C_S__40__22_C* C_S__40__22_C::alloc_() {
    C_S__40__22_C* o = rt::make<C_S__40__22_C>();
    return o;
}
rt::Value C_S__40__22_C::mk_(rt::Value* a, int n) {
    C_S__40__22_C* o = alloc_();
    o->C_S__40__22_C::ctor_();
    return rt::VO(o);
}
bool C_S__40__22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__40__22_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__40__22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__40__22_C::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__40__22_C::smeth_(int id) {
    switch (id) {
    case NM_S__40__21__3f_: return true;
    default: return false;
    }
}
bool C_S__40__22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22_C__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__40__22_C__S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__40__22_C__ids; return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40__22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22_C__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__40__22_C__S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__40__22_C__ids = v; return true;
    default: return false;
    }
}
bool C_S__40__22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    default: return false;
    }
}
void C_S__5d__21_v::ctor_() {
    RT_FN("S__5d__21_v.S__5d__21_v");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9555 = 871.0; this->f_S_6_21_Z = rt::touint_d(_v9555); _v9555; });
    ({ rt::Value _v9556 = rt::trv(rt::VS(g::LS[1795])); this->f_S_1i = rt::slot_string(_v9556); _v9556; });
    ({ rt::Value _v9557 = rt::VS(g::LS[1796]); this->f_S__5e__21__23_ = rt::slot_string(_v9557); _v9557; });
    ({ double _v9558 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9558); _v9558; });
    ({ double _v9559 = 4.0; this->f_S_9_21_m = rt::toint_d(_v9559); _v9559; });
    ({ double _v9560 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9560); _v9560; });
    ({ double _v9561 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9561); _v9561; });
    ({ bool _v9562 = true; this->f_S__25__21__3e_ = _v9562; _v9562; });
}
int32_t C_S__5d__21_v::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__5d__21_v::dm_S_75_2() { return false; }
rt::Value C_S__5d__21_v::dm_S_75_3() { return rt::NUL; }
double C_S__5d__21_v::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S__5d__21_v.S_75");
    (l_A__loc5_ = NAN);
    if (((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 3.0))) {
        return 1e+24;
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__5d__21_v::m_S__40__22_() {
    RT_FN("S__5d__21_v.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::trv(rt::VS(g::LS[1797]), C_S__26_c::sm_S_8_21_Z(C_S__5d__21_v::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[1798]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[1799]))));
    return rt::NUL;
}
bool C_S__5d__21_v::g_S__2d_6() {
    RT_FN("S__5d__21_v.S__2d_6_get");
    return ({ bool _t9566 = C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[1800]))); _t9566 ? (bool)((({ bool _t9565 = this->f_S__3f__21_6; _t9565 ? _t9565 : (bool)((({ rt::Value _o9563 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id); C_S_84* _p9564 = rt::as_ptr<C_S_84>(_o9563); _p9564 ? _p9564->g_S__3f_j() : rt::tonum(rt::dget(_o9563, NM_S__3f_j)); }) >= 3600.0)); }))) : _t9566; });
    return false;
}
double C_S__5d__21_v::sm_S__3f__21__3c_() {
    RT_FN("S__5d__21_v.S__3f__21__3c_");
    return (((0.85 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()))), 1.15)) * C_S__26_c::sm_S__40__22__27_(g::SV.C_S_1_21_B__id, rt::toint_d(6.0))) * ((1.0 + (0.01 * C_S_1_21_v::sm_S__2c__21_G(((int32_t)(g::SV.C_S__5d__21_v__id)))))));
    return 0.0;
}
C_S__5d__21_v* C_S__5d__21_v::alloc_() {
    C_S__5d__21_v* o = rt::make<C_S__5d__21_v>();
    return o;
}
rt::Value C_S__5d__21_v::mk_(rt::Value* a, int n) {
    C_S__5d__21_v* o = alloc_();
    o->C_S__5d__21_v::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5d__21_v::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5d__21_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__5d__21_v::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__5d__21_v::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__5d__21_v::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5d__21_v::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5d__21_v::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__5d__21_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21_v__id)); return true;
    case NM_S_0_22_K: out = rt::V(g::SV.C_S__5d__21_v__S_0_22_K); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__21_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21_v__id = rt::touint(v); return true;
    case NM_S_0_22_K: g::SV.C_S__5d__21_v__S_0_22_K = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__5d__21_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__5d__22_D::ctor_() {
    RT_FN("S__5d__22_D.S__5d__22_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9567 = 379.0; this->f_S_6_21_Z = rt::touint_d(_v9567); _v9567; });
    ({ rt::Value _v9568 = rt::trv(rt::VS(g::LS[1801])); this->f_S_1i = rt::slot_string(_v9568); _v9568; });
    ({ rt::Value _v9569 = rt::VS(g::LS[1802]); this->f_S__5e__21__23_ = rt::slot_string(_v9569); _v9569; });
    ({ double _v9570 = 5e+22; this->f_S__3e__3d_ = _v9570; _v9570; });
    ({ double _v9571 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9571); _v9571; });
    ({ double _v9572 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9572); _v9572; });
    ({ double _v9573 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9573); _v9573; });
    ({ bool _v9574 = true; this->f_S__3c__60_ = _v9574; _v9574; });
    ({ double _v9575 = 3.0; this->f_S__21__22_E = rt::touint_d(_v9575); _v9575; });
}
rt::Value C_S__5d__22_D::m_S__40__22_() {
    RT_FN("S__5d__22_D.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1803]), C_S__26_c::sm_S_8_21_Z(C_S__5d__22_D::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__5d__22_D::g_S__2d_6() {
    RT_FN("S__5d__22_D.S__2d_6_get");
    return ({ bool _t9576 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1739])))) >= 1.0); _t9576 ? _t9576 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_2_22__3f___id)); });
    return false;
}
double C_S__5d__22_D::sm_S__2c_J() {
    RT_FN("S__5d__22_D.S__2c_J");
    return (6.0 + (6.0 * rt::m_pow(((double)(C_S__26_c::sm_S__2d__22__21_(rt::toint_d(0.0), C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3()))), 0.6)));
    return 0.0;
}
C_S__5d__22_D* C_S__5d__22_D::alloc_() {
    C_S__5d__22_D* o = rt::make<C_S__5d__22_D>();
    return o;
}
rt::Value C_S__5d__22_D::mk_(rt::Value* a, int n) {
    C_S__5d__22_D* o = alloc_();
    o->C_S__5d__22_D::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5d__22_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5d__22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5d__22_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5d__22_D::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    default: return false;
    }
}
bool C_S__5d__22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22_D__id)); return true;
    case NM_ids: out = g::SV.C_S__5d__22_D__ids; return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22_D__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5d__22_D__ids = v; return true;
    default: return false;
    }
}
bool C_S__5d__22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    default: return false;
    }
}
void C_S__60__22__3b_::ctor_() {
    RT_FN("S__60__22__3b_.S__60__22__3b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9577 = 820.0; this->f_S_6_21_Z = rt::touint_d(_v9577); _v9577; });
    ({ rt::Value _v9578 = rt::trv(rt::VS(g::LS[1805])); this->f_S_1i = rt::slot_string(_v9578); _v9578; });
    ({ rt::Value _v9579 = rt::VS(g::LS[1806]); this->f_S__5e__21__23_ = rt::slot_string(_v9579); _v9579; });
    ({ double _v9580 = 1e+90; this->f_S__23__21_m = _v9580; _v9580; });
    ({ double _v9581 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9581); _v9581; });
    ({ double _v9582 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9582); _v9582; });
    ({ double _v9583 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9583); _v9583; });
    ({ bool _v9584 = true; this->f_S__21__21_n = _v9584; _v9584; });
    ({ double _v9585 = 12.0; this->f_S__21__22_E = rt::touint_d(_v9585); _v9585; });
}
rt::Value C_S__60__22__3b_::m_S__40__22_() {
    RT_FN("S__60__22__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1807]), C_S__26_c::sm_S_8_21_Z(C_S__60__22__3b_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__60__22__3b_::g_S__2d_6() {
    RT_FN("S__60__22__3b_.S__2d_6_get");
    return ({ bool _t9587 = ({ bool _t9586 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1739])))) >= 4.0); _t9586 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_6_21_n__id)) : _t9586; }); _t9587 ? _t9587 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3d__22_B__id)); });
    return false;
}
bool C_S__60__22__3b_::g_S_9_21__25_() {
    RT_FN("S__60__22__3b_.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S__60__22__3b_::sm_S_9L() {
    RT_FN("S__60__22__3b_.S_9L");
    return (0.6 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(48.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.6));
    return 0.0;
}
C_S__60__22__3b_* C_S__60__22__3b_::alloc_() {
    C_S__60__22__3b_* o = rt::make<C_S__60__22__3b_>();
    return o;
}
rt::Value C_S__60__22__3b_::mk_(rt::Value* a, int n) {
    C_S__60__22__3b_* o = alloc_();
    o->C_S__60__22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__60__22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__60__22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__60__22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__60__22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__60__22__3b_::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__60__22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22__3b___id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22__3b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__60__22__40_::ctor_() {
    RT_FN("S__60__22__40_.S__60__22__40_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9588 = 375.0; this->f_S_6_21_Z = rt::touint_d(_v9588); _v9588; });
    ({ rt::Value _v9589 = rt::trv(rt::VS(g::LS[1808])); this->f_S_1i = rt::slot_string(_v9589); _v9589; });
    ({ rt::Value _v9590 = rt::VS(g::LS[1809]); this->f_S__5e__21__23_ = rt::slot_string(_v9590); _v9590; });
    ({ double _v9591 = 5e+25; this->f_S__3e__3d_ = _v9591; _v9591; });
    ({ double _v9592 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9592); _v9592; });
    ({ double _v9593 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9593); _v9593; });
    ({ double _v9594 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9594); _v9594; });
    ({ bool _v9595 = true; this->f_S__3c__60_ = _v9595; _v9595; });
    ({ double _v9596 = 5.0; this->f_S__21__22_E = rt::touint_d(_v9596); _v9596; });
}
rt::Value C_S__60__22__40_::m_S__40__22_() {
    RT_FN("S__60__22__40_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1810]), C_S__26_c::sm_S_6_21_T(C_S__60__22__40_::sm_S__27__21_b(), 1.0, true)));
    return rt::NUL;
}
bool C_S__60__22__40_::g_S__2d_6() {
    RT_FN("S__60__22__40_.S__2d_6_get");
    return ({ bool _t9597 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1739])))) >= 2.0); _t9597 ? _t9597 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3b__22_B__id)); });
    return false;
}
double C_S__60__22__40_::sm_S__27__21_b() {
    RT_FN("S__60__22__40_.S__27__21_b");
    return (70.0 + (70.0 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__5e_x__id, C_S__26_c::dsm_S_7i_1(), C_S__26_c::dsm_S_7i_2(), C_S__26_c::dsm_S_7i_3()), 0.3)));
    return 0.0;
}
C_S__60__22__40_* C_S__60__22__40_::alloc_() {
    C_S__60__22__40_* o = rt::make<C_S__60__22__40_>();
    return o;
}
rt::Value C_S__60__22__40_::mk_(rt::Value* a, int n) {
    C_S__60__22__40_* o = alloc_();
    o->C_S__60__22__40_::ctor_();
    return rt::VO(o);
}
bool C_S__60__22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__60__22__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__60__22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__60__22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__60__22__40_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__60__22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22__40___id)); return true;
    case NM_ids: out = g::SV.C_S__60__22__40___ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22__40___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__60__22__40___ids = v; return true;
    default: return false;
    }
}
bool C_S__60__22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3b_E::ctor_() {
    RT_FN("S__3b_E.S__3b_E");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9598 = 579.0; this->f_S_6_21_Z = rt::touint_d(_v9598); _v9598; });
    ({ rt::Value _v9599 = rt::trv(rt::VS(g::LS[1812])); this->f_S_1i = rt::slot_string(_v9599); _v9599; });
    ({ rt::Value _v9600 = rt::VS(g::LS[1813]); this->f_S__5e__21__23_ = rt::slot_string(_v9600); _v9600; });
    ({ double _v9601 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9601); _v9601; });
    ({ bool _v9602 = false; this->f_S_3e = _v9602; _v9602; });
    ({ bool _v9603 = false; this->f_S__40_X = _v9603; _v9603; });
}
rt::Value C_S__3b_E::m_S__40__22_() {
    RT_FN("S__3b_E.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1814]), C_S__26_c::sm_S_8_21_Z(C_S__23__21__21_::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z((((C_S__23__21__21_::sm_S_1_3d_() - 1.0)) * 100.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
int32_t C_S__3b_E::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__3b_E::dm_S_75_2() { return false; }
rt::Value C_S__3b_E::dm_S_75_3() { return rt::NUL; }
double C_S__3b_E::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    int32_t l_A__loc6_ = 0;
    double l_A__loc7_ = NAN;
    RT_FN("S__3b_E.S_75");
    (l_A__loc5_ = NAN);
    (l_A__loc6_ = rt::toint_d(0.0));
    (l_A__loc7_ = NAN);
    if ((((double)(l_param1)) == ((double)(this->f_S__2d__21__5e_)))) {
        (l_A__loc6_ = rt::toint(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, ((double)(l_param1)))));
        if (l_param3) {
            (l_A__loc7_ = C_S__23__21__21_::sm_S_2_21_z(g::SV.C_S__3b_E__S__2d__22__25_, this->g_S__25_X(), l_A__loc6_, rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21_R, ((double)(l_param1))))));
            (l_param2 = rt::toint_d(rt::m_max2(1.0, l_A__loc7_)));
            (l_A__loc5_ = C_S__23__21__21_::sm_S__21__21_V(g::SV.C_S__3b_E__S__2d__22__25_, this->g_S__25_X(), l_A__loc6_, l_param2));
            while (((((double)(l_param2)) > 1.0) && rt::gt(rt::V(l_A__loc5_), rt::arr_at(g::SV.C_S_8G__S_6_21_R, ((double)(l_param1)))))) {
                (l_param2 = rt::toint_d((((double)(l_param2)) - 1.0)));
                (l_A__loc5_ = C_S__23__21__21_::sm_S__21__21_V(g::SV.C_S__3b_E__S__2d__22__25_, this->g_S__25_X(), l_A__loc6_, l_param2));
            }
        } else {
            (l_A__loc5_ = C_S__23__21__21_::sm_S__21__21_V(g::SV.C_S__3b_E__S__2d__22__25_, this->g_S__25_X(), l_A__loc6_, l_param2));
        }
        if ((!rt::eq(l_param4, rt::NUL))) {
            ({ rt::Value _v9604 = rt::V((double)(l_param2)); rt::idx_set(l_param4, rt::VS(g::LS[260]), _v9604); });
        }
        return l_A__loc5_;
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__3b_E::g_S__2d_6() {
    RT_FN("S__3b_E.S__2d_6_get");
    return (!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)));
    return false;
}
double C_S__3b_E::g_S__25_X() {
    double l_A__loc1_ = NAN;
    RT_FN("S__3b_E.S__25_X_get");
    (l_A__loc1_ = 1.1);
    if (C_S_8G::sm_S_7d(g::SV.C_S__5b__22_9__id)) {
        (l_A__loc1_ = (l_A__loc1_ - 0.02));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__5d__40___id)) {
        (l_A__loc1_ = (l_A__loc1_ - 0.025));
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S_9_22_4__id) && (!(((double)(C_PlayFab::sg_season())) == 0.0)))) {
        (l_A__loc1_ = (l_A__loc1_ - 0.01));
    }
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__2b__22__2d___id)) {
        (l_A__loc1_ = (l_A__loc1_ - 0.02));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__40__22_C__id)) {
        (l_A__loc1_ = (l_A__loc1_ - 0.01));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__25__22_G__id)) {
        (l_A__loc1_ = (l_A__loc1_ - g::SV.C_S__25__22_G__S_1_21_S));
    }
    return rt::m_max2(0.0, l_A__loc1_);
    return 0.0;
}
C_S__3b_E* C_S__3b_E::alloc_() {
    C_S__3b_E* o = rt::make<C_S__3b_E>();
    return o;
}
rt::Value C_S__3b_E::mk_(rt::Value* a, int n) {
    C_S__3b_E* o = alloc_();
    o->C_S__3b_E::ctor_();
    return rt::VO(o);
}
bool C_S__3b_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__25_X: out = rt::V(g_S__25_X()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__25_X: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__3b_E::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__3b_E::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__3b_E::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__25_X: { rt::Value f = rt::V(g_S__25_X()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    case NM_S__25_X: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b_E::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b_E__id)); return true;
    case NM_S__2d__22__25_: out = rt::V(g::SV.C_S__3b_E__S__2d__22__25_); return true;
    default: return false;
    }
}
bool C_S__3b_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b_E__id = rt::touint(v); return true;
    case NM_S__2d__22__25_: g::SV.C_S__3b_E__S__2d__22__25_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3b_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21_H::ctor_() {
    RT_FN("S__20__21_H.S__20__21_H");
    (void)((this->C_S__3b_E::ctor_(), rt::NUL));
    ({ double _v9605 = 121.0; this->f_S_6_21_Z = rt::touint_d(_v9605); _v9605; });
    ({ rt::Value _v9606 = rt::trv(rt::VS(g::LS[1815])); this->f_S_1i = rt::slot_string(_v9606); _v9606; });
    ({ rt::Value _v9607 = rt::VS(g::LS[1816]); this->f_S__5e__21__23_ = rt::slot_string(_v9607); _v9607; });
    ({ double _v9608 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9608); _v9608; });
    ({ double _v9609 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9609); _v9609; });
    ({ double _v9610 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9610); _v9610; });
    ({ bool _v9611 = true; this->f_S__26__21__5e_ = _v9611; _v9611; });
}
rt::Value C_S__20__21_H::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S__20__21_H.S_6r");
    (l_A__loc1_ = rt::toint_d(24.0));
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc1_))), rt::V(1.0))));
    ({ rt::Value _v9612 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V((double)(l_A__loc1_)), _v9612); });
    ({ rt::Value _v9613 = rt::V(rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 147.0)))); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(147.0), _v9613); });
    ({ rt::Value _o9614 = g::SV.C_S__23__21__21___S_6_21_d; rt::Value _i9615 = rt::V(10.0); rt::Value _v9616 = rt::add(rt::idx_get(_o9614, _i9615), rt::V(1.0)); rt::idx_set(_o9614, _i9615, _v9616); _v9616; });
    return rt::NUL;
}
bool C_S__20__21_H::g_S__2d_6() {
    RT_FN("S__20__21_H.S__2d_6_get");
    return false;
    return false;
}
C_S__20__21_H* C_S__20__21_H::alloc_() {
    C_S__20__21_H* o = rt::make<C_S__20__21_H>();
    return o;
}
rt::Value C_S__20__21_H::mk_(rt::Value* a, int n) {
    C_S__20__21_H* o = alloc_();
    o->C_S__20__21_H::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_E::dget(id, out);
}
bool C_S__20__21_H::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__3b_E::dset(id, v);
}
bool C_S__20__21_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__3b_E::dcall(id, a, n, out);
}
bool C_S__20__21_H::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__3b_E::dmeth(id);
}
bool C_S__20__21_H::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_H__id)); return true;
    case NM_ids: out = g::SV.C_S__20__21_H__ids; return true;
    default: return false;
    }
}
bool C_S__20__21_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_H__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20__21_H__ids = v; return true;
    default: return false;
    }
}
bool C_S__20__21_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__21_X::ctor_() {
    RT_FN("S__23__21_X.S__23__21_X");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9617 = 125.0; this->f_S_6_21_Z = rt::touint_d(_v9617); _v9617; });
    ({ rt::Value _v9618 = rt::trv(rt::VS(g::LS[1818])); this->f_S_1i = rt::slot_string(_v9618); _v9618; });
    ({ rt::Value _v9619 = rt::VS(g::LS[1819]); this->f_S__5e__21__23_ = rt::slot_string(_v9619); _v9619; });
    ({ double _v9620 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9620); _v9620; });
    ({ double _v9621 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9621); _v9621; });
    ({ double _v9622 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9622); _v9622; });
}
rt::Value C_S__23__21_X::m_S__40__22_() {
    RT_FN("S__23__21_X.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1820]), C_S__26_c::sm_S_6_21_T(C_S__23__21_X::sm_S_2_21__40_(), 1.0, true)));
    return rt::NUL;
}
int32_t C_S__23__21_X::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__23__21_X::dm_S_75_2() { return false; }
rt::Value C_S__23__21_X::dm_S_75_3() { return rt::NUL; }
double C_S__23__21_X::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S__23__21_X.S_75");
    (l_A__loc5_ = NAN);
    if ((((double)(l_param1)) == 10.0)) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+36 : 75000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__23__21_X::g_S__2d_6() {
    RT_FN("S__23__21_X.S__2d_6_get");
    return ({ bool _t9624 = ({ bool _t9623 = C_S__26_c::sm_S__27__21__5f_(); _t9623 ? (bool)(C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[1821])))) : _t9623; }); _t9624 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t9624; });
    return false;
}
double C_S__23__21_X::sm_S_2_21__40_() {
    RT_FN("S__23__21_X.S_2_21__40_");
    return (3.0 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.7));
    return 0.0;
}
C_S__23__21_X* C_S__23__21_X::alloc_() {
    C_S__23__21_X* o = rt::make<C_S__23__21_X>();
    return o;
}
rt::Value C_S__23__21_X::mk_(rt::Value* a, int n) {
    C_S__23__21_X* o = alloc_();
    o->C_S__23__21_X::ctor_();
    return rt::VO(o);
}
bool C_S__23__21_X::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__21_X::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__21_X::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__23__21_X::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__23__21_X::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__23__21_X::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__21_X::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__21_X::smeth_(int id) {
    switch (id) {
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S__23__21_X::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21_X__id)); return true;
    case NM_ids: out = g::SV.C_S__23__21_X__ids; return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__21_X::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21_X__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__23__21_X__ids = v; return true;
    default: return false;
    }
}
bool C_S__23__21_X::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S__23__22__3b_::ctor_() {
    RT_FN("S__23__22__3b_.S__23__22__3b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9625 = 118.0; this->f_S_6_21_Z = rt::touint_d(_v9625); _v9625; });
    ({ rt::Value _v9626 = rt::trv(rt::VS(g::LS[1823])); this->f_S_1i = rt::slot_string(_v9626); _v9626; });
    ({ rt::Value _v9627 = rt::VS(g::LS[1824]); this->f_S__5e__21__23_ = rt::slot_string(_v9627); _v9627; });
    ({ double _v9628 = 5e+55; this->f_S__3e__3d_ = _v9628; _v9628; });
    ({ double _v9629 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9629); _v9629; });
    ({ double _v9630 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9630); _v9630; });
    ({ double _v9631 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9631); _v9631; });
    ({ bool _v9632 = true; this->f_S__3c__60_ = _v9632; _v9632; });
    ({ double _v9633 = 9.0; this->f_S__21__22_E = rt::touint_d(_v9633); _v9633; });
}
rt::Value C_S__23__22__3b_::m_S__40__22_() {
    RT_FN("S__23__22__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1825]), C_S__26_c::sm_S_6_21_T(C_S__23__22__3b_::sm_S__27__21_b(), 1.0, true)));
    return rt::NUL;
}
bool C_S__23__22__3b_::g_S__2d_6() {
    RT_FN("S__23__22__3b_.S__2d_6_get");
    return ({ bool _t9634 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 3.0); _t9634 ? _t9634 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__21__22_H__id)); });
    return false;
}
double C_S__23__22__3b_::sm_S__27__21_b() {
    RT_FN("S__23__22__3b_.S__27__21_b");
    return (60.0 + (60.0 * rt::m_pow(C_S__26_c::sm_S__27_n(), 0.6)));
    return 0.0;
}
C_S__23__22__3b_* C_S__23__22__3b_::alloc_() {
    C_S__23__22__3b_* o = rt::make<C_S__23__22__3b_>();
    return o;
}
rt::Value C_S__23__22__3b_::mk_(rt::Value* a, int n) {
    C_S__23__22__3b_* o = alloc_();
    o->C_S__23__22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__23__22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__22__3b_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__23__22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__22__3b___id)); return true;
    case NM_ids: out = g::SV.C_S__23__22__3b___ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__22__3b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__23__22__3b___ids = v; return true;
    default: return false;
    }
}
bool C_S__23__22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__22__21_u::ctor_() {
    RT_FN("S__22__21_u.S__22__21_u");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9635 = 846.0; this->f_S_6_21_Z = rt::touint_d(_v9635); _v9635; });
    ({ rt::Value _v9636 = rt::trv(rt::VS(g::LS[1828])); this->f_S_1i = rt::slot_string(_v9636); _v9636; });
    ({ rt::Value _v9637 = rt::VS(g::LS[1829]); this->f_S__5e__21__23_ = rt::slot_string(_v9637); _v9637; });
    ({ rt::Value _v9638 = rt::VS(g::LS[1826]); this->f_S__3f__21__3d_ = rt::slot_string(_v9638); _v9638; });
    ({ rt::Value _v9639 = rt::VS(g::LS[1826]); this->f_S__40_1 = rt::slot_string(_v9639); _v9639; });
    ({ double _v9640 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9640); _v9640; });
    ({ double _v9641 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9641); _v9641; });
    ({ double _v9642 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9642); _v9642; });
    ({ bool _v9643 = true; this->f_S__21__21_n = _v9643; _v9643; });
}
rt::Value C_S__22__21_u::m_S__21_E() {
    RT_FN("S__22__21_u.S__21_E");
    if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) {
        return rt::slot_string(rt::VS(g::LS[1830]));
    }
    if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) {
        return rt::slot_string(rt::VS(g::LS[1831]));
    }
    return rt::slot_string(rt::VS(g::LS[1832]));
    return rt::NUL;
}
int32_t C_S__22__21_u::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__22__21_u::dm_S_75_2() { return false; }
rt::Value C_S__22__21_u::dm_S_75_3() { return rt::NUL; }
double C_S__22__21_u::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__22__21_u.S_75");
    if ((((double)(l_param1)) == 10.0)) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+45 : 1e+24);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__22__21_u::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__22__21_u.S__40__22_");
    (l_A__loc1_ = rt::slot_string(((((double)(g::SV.C_S_8G__S__23_3)) == 2.0) ? rt::add(rt::trv(rt::VS(g::LS[1833])), rt::VS(g::LS[8])) : rt::VS(g::LS[113]))));
    if ((!(((double)(g::SV.C_S_8G__S_9_21_m)) == 0.0))) {
        if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[1834]), C_S__26_c::sm_S_8_21_Z(C_S__22__21_u::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))));
        } else if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[1835]), C_S__26_c::sm_S_8_21_Z(C_S__22__21_u::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))));
        } else if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[1836])))));
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::VS(g::LS[8]))));
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[1837]), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o9644 = C_S_8G::sm_S__2d_e(((int32_t)(C_S__22__21_u::sm_S__2d_e()))); C_S__60__21__3b_* _p9645 = rt::as_ptr<C_S__60__21__3b_>(_o9644); _p9645 ? _p9645->f_id : rt::touint(rt::dget(_o9644, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__22__21_u::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))));
        }
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
bool C_S__22__21_u::g_S__2d_6() {
    RT_FN("S__22__21_u.S__2d_6_get");
    return ({ bool _t9648 = ({ bool _t9647 = ({ bool _t9646 = this->C_S__60_6::g_S__2d_6(); _t9646 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)) : _t9646; }); _t9647 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 115.0)) : _t9647; }); _t9648 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_2_21_u__id)) : _t9648; });
    return false;
}
double C_S__22__21_u::sm_S__2b__2b_() {
    RT_FN("S__22__21_u.S__2b__2b_");
    return (0.1 * rt::m_pow(C_S__26_c::sm_S_2_21__26_(), 0.85));
    return 0.0;
}
double C_S__22__21_u::sm_S__3f__21__3c_() {
    RT_FN("S__22__21_u.S__3f__21__3c_");
    return (0.05 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_9_21_P(g::SV.C_S_2_3c___id, false, true, C_S__26_c::dsm_S_9_21_P_3()))), 2.5));
    return 0.0;
}
uint32_t C_S__22__21_u::sm_S__2d_e() {
    RT_FN("S__22__21_u.S__2d_e");
    return rt::touint_d((1.0 + rt::mod(((double)(rt::touint_d(C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true)))), 11.0)));
    return 0u;
}
double C_S__22__21_u::sm_S__26_s() {
    RT_FN("S__22__21_u.S__26_s");
    return (100.0 + (3.0 * rt::m_pow(C_S__26_c::sm_S_3L(false, C_S__26_c::dsm_S_3L_1()), 0.87)));
    return 0.0;
}
C_S__22__21_u* C_S__22__21_u::alloc_() {
    C_S__22__21_u* o = rt::make<C_S__22__21_u>();
    return o;
}
rt::Value C_S__22__21_u::mk_(rt::Value* a, int n) {
    C_S__22__21_u* o = alloc_();
    o->C_S__22__21_u::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_u::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__21_E: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22__21_u::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22__21_u::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21_E: out = m_S__21_E(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__22__21_u::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__22__21_u::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__22__21_u::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22__21_u::dmeth(int id) {
    switch (id) {
    case NM_S__21_E: return true;
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22__21_u::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    case NM_S__3f__21__3c_: return true;
    case NM_S__2d_e: return true;
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__22__21_u::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_u__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2d_e: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__21_u::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_u__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_u::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    case NM_S__2d_e: out = rt::V((double)(sm_S__2d_e())); return true;
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3e__22_C::ctor_() {
    RT_FN("S__3e__22_C.S__3e__22_C");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9649 = 130.0; this->f_S_6_21_Z = rt::touint_d(_v9649); _v9649; });
    ({ rt::Value _v9650 = rt::trv(rt::VS(g::LS[1838])); this->f_S_1i = rt::slot_string(_v9650); _v9650; });
    ({ rt::Value _v9651 = rt::VS(g::LS[1839]); this->f_S__5e__21__23_ = rt::slot_string(_v9651); _v9651; });
    ({ double _v9652 = 5e+47; this->f_S__3e__3d_ = _v9652; _v9652; });
    ({ double _v9653 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9653); _v9653; });
    ({ double _v9654 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9654); _v9654; });
    ({ double _v9655 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9655); _v9655; });
    ({ bool _v9656 = true; this->f_S__3c__60_ = _v9656; _v9656; });
    ({ double _v9657 = 3.0; this->f_S__21__22_E = rt::touint_d(_v9657); _v9657; });
}
rt::Value C_S__3e__22_C::m_S__40__22_() {
    RT_FN("S__3e__22_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1840]), C_S__26_c::sm_S_6_21_T(C_S__3e__22_C::sm_S__27__21_b(), 1.0, true)));
    return rt::NUL;
}
bool C_S__3e__22_C::g_S__2d_6() {
    RT_FN("S__3e__22_C.S__2d_6_get");
    return ({ bool _t9658 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 1.0); _t9658 ? _t9658 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__60__22_G__id)); });
    return false;
}
double C_S__3e__22_C::sm_S__27__21_b() {
    RT_FN("S__3e__22_C.S__27__21_b");
    return (7.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_2_21__26_())), 2.5));
    return 0.0;
}
C_S__3e__22_C* C_S__3e__22_C::alloc_() {
    C_S__3e__22_C* o = rt::make<C_S__3e__22_C>();
    return o;
}
rt::Value C_S__3e__22_C::mk_(rt::Value* a, int n) {
    C_S__3e__22_C* o = alloc_();
    o->C_S__3e__22_C::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e__22_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e__22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e__22_C::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e__22_C::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3e__22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22_C__id)); return true;
    case NM_ids: out = g::SV.C_S__3e__22_C__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22_C__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3e__22_C__ids = v; return true;
    default: return false;
    }
}
bool C_S__3e__22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3f__22__3c_::ctor_() {
    RT_FN("S__3f__22__3c_.S__3f__22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9659 = 129.0; this->f_S_6_21_Z = rt::touint_d(_v9659); _v9659; });
    ({ rt::Value _v9660 = rt::trv(rt::VS(g::LS[1842])); this->f_S_1i = rt::slot_string(_v9660); _v9660; });
    ({ rt::Value _v9661 = rt::VS(g::LS[1843]); this->f_S__5e__21__23_ = rt::slot_string(_v9661); _v9661; });
    ({ double _v9662 = 5e+54; this->f_S__3e__3d_ = _v9662; _v9662; });
    ({ double _v9663 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9663); _v9663; });
    ({ double _v9664 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9664); _v9664; });
    ({ double _v9665 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9665); _v9665; });
    ({ bool _v9666 = true; this->f_S__3c__60_ = _v9666; _v9666; });
    ({ double _v9667 = 8.0; this->f_S__21__22_E = rt::touint_d(_v9667); _v9667; });
}
rt::Value C_S__3f__22__3c_::m_S__40__22_() {
    RT_FN("S__3f__22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1844]), C_S__26_c::sm_S_8_21_Z(C_S__3f__22__3c_::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3f__22__3c_::g_S__2d_6() {
    RT_FN("S__3f__22__3c_.S__2d_6_get");
    return ({ bool _t9668 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 3.0); _t9668 ? _t9668 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__21__22_H__id)); });
    return false;
}
double C_S__3f__22__3c_::sm_S_6_21_Y() {
    RT_FN("S__3f__22__3c_.S_6_21_Y");
    return (5.0 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.5));
    return 0.0;
}
C_S__3f__22__3c_* C_S__3f__22__3c_::alloc_() {
    C_S__3f__22__3c_* o = rt::make<C_S__3f__22__3c_>();
    return o;
}
rt::Value C_S__3f__22__3c_::mk_(rt::Value* a, int n) {
    C_S__3f__22__3c_* o = alloc_();
    o->C_S__3f__22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S__3f__22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22__3c___id)); return true;
    case NM_ids: out = g::SV.C_S__3f__22__3c___ids; return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22__3c___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f__22__3c___ids = v; return true;
    default: return false;
    }
}
bool C_S__3f__22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S__26__22__3c_::ctor_() {
    RT_FN("S__26__22__3c_.S__26__22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9669 = 128.0; this->f_S_6_21_Z = rt::touint_d(_v9669); _v9669; });
    ({ rt::Value _v9670 = rt::trv(rt::VS(g::LS[1846])); this->f_S_1i = rt::slot_string(_v9670); _v9670; });
    ({ rt::Value _v9671 = rt::VS(g::LS[1847]); this->f_S__5e__21__23_ = rt::slot_string(_v9671); _v9671; });
    ({ double _v9672 = 5e+49; this->f_S__3e__3d_ = _v9672; _v9672; });
    ({ double _v9673 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9673); _v9673; });
    ({ double _v9674 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9674); _v9674; });
    ({ double _v9675 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9675); _v9675; });
    ({ bool _v9676 = true; this->f_S__3c__60_ = _v9676; _v9676; });
    ({ double _v9677 = 4.0; this->f_S__21__22_E = rt::touint_d(_v9677); _v9677; });
}
rt::Value C_S__26__22__3c_::m_S__40__22_() {
    RT_FN("S__26__22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1848]), C_S__26_c::sm_S_8_21_Z(C_S__26__22__3c_::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__26__22__3c_::g_S__2d_6() {
    RT_FN("S__26__22__3c_.S__2d_6_get");
    return ({ bool _t9678 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 2.0); _t9678 ? _t9678 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5e__22_G__id)); });
    return false;
}
double C_S__26__22__3c_::sm_S_2_21_W() {
    RT_FN("S__26__22__3c_.S_2_21_W");
    return (3.0 + (0.3 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7)));
    return 0.0;
}
C_S__26__22__3c_* C_S__26__22__3c_::alloc_() {
    C_S__26__22__3c_* o = rt::make<C_S__26__22__3c_>();
    return o;
}
rt::Value C_S__26__22__3c_::mk_(rt::Value* a, int n) {
    C_S__26__22__3c_* o = alloc_();
    o->C_S__26__22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__26__22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S__26__22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22__3c___id)); return true;
    case NM_ids: out = g::SV.C_S__26__22__3c___ids; return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22__3c___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__26__22__3c___ids = v; return true;
    default: return false;
    }
}
bool C_S__26__22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S__26__22_C::ctor_() {
    RT_FN("S__26__22_C.S__26__22_C");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9679 = 851.0; this->f_S_6_21_Z = rt::touint_d(_v9679); _v9679; });
    ({ rt::Value _v9680 = rt::trv(rt::VS(g::LS[1850])); this->f_S_1i = rt::slot_string(_v9680); _v9680; });
    ({ rt::Value _v9681 = rt::VS(g::LS[1851]); this->f_S__5e__21__23_ = rt::slot_string(_v9681); _v9681; });
    ({ double _v9682 = 1e+110; this->f_S__23__21_m = _v9682; _v9682; });
    ({ double _v9683 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9683); _v9683; });
    ({ double _v9684 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9684); _v9684; });
    ({ double _v9685 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9685); _v9685; });
    ({ bool _v9686 = true; this->f_S__21__21_n = _v9686; _v9686; });
    ({ double _v9687 = 11.0; this->f_S__21__22_E = rt::touint_d(_v9687); _v9687; });
}
rt::Value C_S__26__22_C::m_S__40__22_() {
    RT_FN("S__26__22_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1852]), C_S__26_c::sm_S_6_21_T(C_S__26__22_C::sm_S__26_s(), 3.0, true)));
    return rt::NUL;
}
bool C_S__26__22_C::g_S__2d_6() {
    RT_FN("S__26__22_C.S__2d_6_get");
    return ({ bool _t9689 = ({ bool _t9688 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 4.0); _t9688 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_2_21_u__id)) : _t9688; }); _t9689 ? _t9689 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5b__22_G__id)); });
    return false;
}
bool C_S__26__22_C::g_S_9_21__25_() {
    RT_FN("S__26__22_C.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S__26__22_C::sm_S__26_s() {
    RT_FN("S__26__22_C.S__26_s");
    return (50.0 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.5));
    return 0.0;
}
C_S__26__22_C* C_S__26__22_C::alloc_() {
    C_S__26__22_C* o = rt::make<C_S__26__22_C>();
    return o;
}
rt::Value C_S__26__22_C::mk_(rt::Value* a, int n) {
    C_S__26__22_C* o = alloc_();
    o->C_S__26__22_C::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__22_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__22_C::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__22_C::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__26__22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_C__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_C__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__27__5b_::ctor_() {
    RT_FN("S__27__5b_.S__27__5b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9690 = 122.0; this->f_S_6_21_Z = rt::touint_d(_v9690); _v9690; });
    ({ rt::Value _v9691 = rt::trv(rt::VS(g::LS[1853])); this->f_S_1i = rt::slot_string(_v9691); _v9691; });
    ({ rt::Value _v9692 = rt::VS(g::LS[1854]); this->f_S__5e__21__23_ = rt::slot_string(_v9692); _v9692; });
    ({ rt::Value _v9693 = rt::VS(g::LS[1826]); this->f_S__3f__21__3d_ = rt::slot_string(_v9693); _v9693; });
    ({ rt::Value _v9694 = rt::VS(g::LS[1826]); this->f_S__40_1 = rt::slot_string(_v9694); _v9694; });
    ({ rt::Value _v9695 = rt::trv(rt::VS(g::LS[1855])); this->f_S_7_23_ = rt::slot_string(_v9695); _v9695; });
    ({ double _v9696 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9696); _v9696; });
    ({ double _v9697 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9697); _v9697; });
    ({ double _v9698 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9698); _v9698; });
    ({ bool _v9699 = false; this->f_S_3e = _v9699; _v9699; });
    ({ bool _v9700 = true; this->f_S__3c__60_ = _v9700; _v9700; });
}
int32_t C_S__27__5b_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__27__5b_::dm_S_75_2() { return false; }
rt::Value C_S__27__5b_::dm_S_75_3() { return rt::NUL; }
double C_S__27__5b_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__27__5b_.S_75");
    if ((((double)(l_param1)) == 10.0)) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+27 : 2500.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__27__5b_::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__27__5b_.S_6r");
    if ((!(((double)(g::SV.C_S_8G__S__23_3)) == (-1.0)))) {
        return rt::NUL;
    }
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 44.0), rt::V(1.0))));
    ({ rt::Value _v9701 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(44.0), _v9701); });
    (void)(({ rt::Value _o9702 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p9703 = rt::as_ptr<C_S_8G>(_o9702); _p9703 ? _p9703->m_S__3c_h(rt::toint_d(10.0)) : rt::dcallv(_o9702, NM_S__3c_h, rt::V(10.0)); }));
    return rt::NUL;
}
bool C_S__27__5b_::g_S__2d_6() {
    rt::Value l_A__loc1_ = rt::NUL;
    bool l_A__loc3_ = false;
    int32_t l_A__loc2_ = 0;
    RT_FN("S__27__5b_.S__2d_6_get");
    (l_A__loc1_ = rt::arr_lit({rt::V((double)(g::SV.C_S__26__3b___id)), rt::V((double)(g::SV.C_S__2c__21_H__id)), rt::V((double)(g::SV.C_S_18__id)), rt::V((double)(g::SV.C_S_2l__id)), rt::V((double)(g::SV.C_S_1_25___id)), rt::V((double)(g::SV.C_S__60__21__22___id))}));
    (l_A__loc3_ = ({ bool _t9705 = ({ bool _t9704 = C_S_8G::sm_S_7d(g::SV.C_S_8_5d___id); _t9704 ? _t9704 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5b__21_9__id)); }); _t9705 ? _t9705 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__2c__21__2b___id)); }));
    (l_A__loc2_ = rt::toint_d((((((((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1856])))) + ((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1857]))))) + ((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1858]))))) + ((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1859]))))) + ((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1860]))))) + ((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1861])))))));
    return ({ bool _t9720 = ({ bool _t9717 = ({ bool _t9716 = ({ bool _t9715 = ({ bool _t9714 = ({ bool _t9713 = ({ bool _t9712 = ({ bool _t9711 = ({ bool _t9710 = ({ bool _t9708 = (({ bool _t9706 = (((double)(C_S_8G::sg_S__2c_P())) < 2.0); _t9706 ? _t9706 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 110.0)); })); _t9708 ? (bool)((({ bool _t9707 = (((double)(C_S_8G::sg_S__2c_P())) < 3.0); _t9707 ? _t9707 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 165.0)); }))) : _t9708; }); _t9710 ? (bool)((({ bool _t9709 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t9709 ? _t9709 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 235.0)); }))) : _t9710; }); _t9711 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)) : _t9711; }); _t9712 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__21_Q__id)) : _t9712; }); _t9713 ? (bool)(C_S__26_c::sm_S__27__21__5f_()) : _t9713; }); _t9714 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) : _t9714; }); _t9715 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t9715; }); _t9716 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) : _t9716; }); _t9717 ? (bool)(C_S_8G::sm_S_7d(rt::touint(rt::arr_at(l_A__loc1_, ((double)(g::SV.C_S_8G__S__2d__21__5e_)))))) : _t9717; }); _t9720 ? (bool)((({ bool _t9719 = ({ bool _t9718 = (!l_A__loc3_); _t9718 ? (bool)((((double)(l_A__loc2_)) == 0.0)) : _t9718; }); _t9719 ? _t9719 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__2d__21_K__id)); }))) : _t9720; });
    return false;
}
C_S__27__5b_* C_S__27__5b_::alloc_() {
    C_S__27__5b_* o = rt::make<C_S__27__5b_>();
    return o;
}
rt::Value C_S__27__5b_::mk_(rt::Value* a, int n) {
    C_S__27__5b_* o = alloc_();
    o->C_S__27__5b_::ctor_();
    return rt::VO(o);
}
bool C_S__27__5b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__5b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__5b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__27__5b_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__27__5b_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__27__5b_::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__5b_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__5b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27__5b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__5b___id)); return true;
    case NM_ids: out = g::SV.C_S__27__5b___ids; return true;
    default: return false;
    }
}
bool C_S__27__5b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__5b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__27__5b___ids = v; return true;
    default: return false;
    }
}
bool C_S__27__5b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__22_D::ctor_() {
    RT_FN("S__2b__22_D.S__2b__22_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9721 = 119.0; this->f_S_6_21_Z = rt::touint_d(_v9721); _v9721; });
    ({ rt::Value _v9722 = rt::trv(rt::VS(g::LS[1863])); this->f_S_1i = rt::slot_string(_v9722); _v9722; });
    ({ rt::Value _v9723 = rt::VS(g::LS[1864]); this->f_S__5e__21__23_ = rt::slot_string(_v9723); _v9723; });
    ({ double _v9724 = 5e+50; this->f_S__3e__3d_ = _v9724; _v9724; });
    ({ double _v9725 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9725); _v9725; });
    ({ double _v9726 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9726); _v9726; });
    ({ double _v9727 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9727); _v9727; });
    ({ bool _v9728 = true; this->f_S__3c__60_ = _v9728; _v9728; });
    ({ double _v9729 = 5.0; this->f_S__21__22_E = rt::touint_d(_v9729); _v9729; });
}
rt::Value C_S__2b__22_D::m_S__40__22_() {
    RT_FN("S__2b__22_D.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1865]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__2b__3f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__2b__22_D::sm_S__27__21_b(), 1.0, true)));
    return rt::NUL;
}
bool C_S__2b__22_D::g_S__2d_6() {
    RT_FN("S__2b__22_D.S__2d_6_get");
    return ({ bool _t9730 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 2.0); _t9730 ? _t9730 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5e__22_G__id)); });
    return false;
}
double C_S__2b__22_D::sm_S__27__21_b() {
    RT_FN("S__2b__22_D.S__27__21_b");
    return (1.5 * rt::m_pow(C_S_8G::sm_S_3_22__3b_(g::SV.C_S__2b__3f___id, C_S_8G::dsm_S_3_22__3b__1()), 0.95));
    return 0.0;
}
C_S__2b__22_D* C_S__2b__22_D::alloc_() {
    C_S__2b__22_D* o = rt::make<C_S__2b__22_D>();
    return o;
}
rt::Value C_S__2b__22_D::mk_(rt::Value* a, int n) {
    C_S__2b__22_D* o = alloc_();
    o->C_S__2b__22_D::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b__22_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b__22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b__22_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b__22_D::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__2b__22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22_D__id)); return true;
    case NM_ids: out = g::SV.C_S__2b__22_D__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22_D__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2b__22_D__ids = v; return true;
    default: return false;
    }
}
bool C_S__2b__22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__2b_a::ctor_() {
    RT_FN("S__2b_a.S__2b_a");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9731 = 124.0; this->f_S_6_21_Z = rt::touint_d(_v9731); _v9731; });
    ({ rt::Value _v9732 = rt::trv(rt::VS(g::LS[1867])); this->f_S_1i = rt::slot_string(_v9732); _v9732; });
    ({ rt::Value _v9733 = rt::VS(g::LS[1868]); this->f_S__5e__21__23_ = rt::slot_string(_v9733); _v9733; });
    ({ rt::Value _v9734 = rt::VS(g::LS[1826]); this->f_S__3f__21__3d_ = rt::slot_string(_v9734); _v9734; });
    ({ rt::Value _v9735 = rt::VS(g::LS[1826]); this->f_S__40_1 = rt::slot_string(_v9735); _v9735; });
    ({ rt::Value _v9736 = rt::trv(rt::VS(g::LS[1833])); this->f_S_7_23_ = rt::slot_string(_v9736); _v9736; });
    ({ double _v9737 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9737); _v9737; });
    ({ double _v9738 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9738); _v9738; });
    ({ double _v9739 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9739); _v9739; });
    ({ bool _v9740 = true; this->f_S__3c__60_ = _v9740; _v9740; });
}
int32_t C_S__2b_a::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__2b_a::dm_S_75_2() { return false; }
rt::Value C_S__2b_a::dm_S_75_3() { return rt::NUL; }
double C_S__2b_a::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__2b_a.S_75");
    if ((((double)(l_param1)) == 10.0)) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+39 : 25000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__2b_a::g_S__2d_6() {
    RT_FN("S__2b_a.S__2d_6_get");
    return ({ bool _t9741 = this->C_S__60_6::g_S__2d_6(); _t9741 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)) : _t9741; });
    return false;
}
C_S__2b_a* C_S__2b_a::alloc_() {
    C_S__2b_a* o = rt::make<C_S__2b_a>();
    return o;
}
rt::Value C_S__2b_a::mk_(rt::Value* a, int n) {
    C_S__2b_a* o = alloc_();
    o->C_S__2b_a::ctor_();
    return rt::VO(o);
}
bool C_S__2b_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b_a::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__2b_a::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__2b_a::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__2b_a::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b_a::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b_a::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b_a__id)); return true;
    case NM_ids: out = g::SV.C_S__2b_a__ids; return true;
    default: return false;
    }
}
bool C_S__2b_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b_a__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2b_a__ids = v; return true;
    default: return false;
    }
}
bool C_S__2b_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__21__3f_::ctor_() {
    RT_FN("S__2c__21__3f_.S__2c__21__3f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9742 = 123.0; this->f_S_6_21_Z = rt::touint_d(_v9742); _v9742; });
    ({ rt::Value _v9743 = rt::trv(rt::VS(g::LS[1870])); this->f_S_1i = rt::slot_string(_v9743); _v9743; });
    ({ rt::Value _v9744 = rt::VS(g::LS[1871]); this->f_S__5e__21__23_ = rt::slot_string(_v9744); _v9744; });
    ({ rt::Value _v9745 = rt::VS(g::LS[1826]); this->f_S__3f__21__3d_ = rt::slot_string(_v9745); _v9745; });
    ({ rt::Value _v9746 = rt::VS(g::LS[1826]); this->f_S__40_1 = rt::slot_string(_v9746); _v9746; });
    ({ rt::Value _v9747 = rt::trv(rt::VS(g::LS[1833])); this->f_S_7_23_ = rt::slot_string(_v9747); _v9747; });
    ({ double _v9748 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9748); _v9748; });
    ({ double _v9749 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9749); _v9749; });
    ({ double _v9750 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9750); _v9750; });
    ({ bool _v9751 = true; this->f_S__3c__60_ = _v9751; _v9751; });
}
int32_t C_S__2c__21__3f_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__2c__21__3f_::dm_S_75_2() { return false; }
rt::Value C_S__2c__21__3f_::dm_S_75_3() { return rt::NUL; }
double C_S__2c__21__3f_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__2c__21__3f_.S_75");
    if ((((double)(l_param1)) == 10.0)) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+33 : 10000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__2c__21__3f_::g_S__2d_6() {
    RT_FN("S__2c__21__3f_.S__2d_6_get");
    return ({ bool _t9752 = this->C_S__60_6::g_S__2d_6(); _t9752 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)) : _t9752; });
    return false;
}
C_S__2c__21__3f_* C_S__2c__21__3f_::alloc_() {
    C_S__2c__21__3f_* o = rt::make<C_S__2c__21__3f_>();
    return o;
}
rt::Value C_S__2c__21__3f_::mk_(rt::Value* a, int n) {
    C_S__2c__21__3f_* o = alloc_();
    o->C_S__2c__21__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__21__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__21__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__2c__21__3f_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__2c__21__3f_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__2c__21__3f_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__21__3f_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__21__3f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__21__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21__3f___id)); return true;
    case NM_ids: out = g::SV.C_S__2c__21__3f___ids; return true;
    default: return false;
    }
}
bool C_S__2c__21__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21__3f___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c__21__3f___ids = v; return true;
    default: return false;
    }
}
bool C_S__2c__21__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_21_v::ctor_() {
    RT_FN("S_0_21_v.S_0_21_v");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9753 = 864.0; this->f_S_6_21_Z = rt::touint_d(_v9753); _v9753; });
    ({ rt::Value _v9754 = rt::trv(rt::VS(g::LS[1873])); this->f_S_1i = rt::slot_string(_v9754); _v9754; });
    ({ rt::Value _v9755 = rt::VS(g::LS[1874]); this->f_S__5e__21__23_ = rt::slot_string(_v9755); _v9755; });
    ({ double _v9756 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9756); _v9756; });
    ({ double _v9757 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9757); _v9757; });
    ({ double _v9758 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9758); _v9758; });
    ({ bool _v9759 = true; this->f_S__25__21__3e_ = _v9759; _v9759; });
}
int32_t C_S_0_21_v::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_0_21_v::dm_S_75_2() { return false; }
rt::Value C_S_0_21_v::dm_S_75_3() { return rt::NUL; }
double C_S_0_21_v::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S_0_21_v.S_75");
    (l_A__loc5_ = NAN);
    if ((((double)(l_param1)) == 10.0)) {
        return 1e+24;
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S_0_21_v::m_S__40__22_() {
    RT_FN("S_0_21_v.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::trv(rt::VS(g::LS[1875]), C_S__26_c::sm_S_6_21_T(C_S_0_21_v::sm_S__27__21_b(), 3.0, true)), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[1798]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[1799]))));
    return rt::NUL;
}
bool C_S_0_21_v::g_S__2d_6() {
    RT_FN("S_0_21_v.S__2d_6_get");
    return ({ bool _t9764 = ({ bool _t9760 = C_S__26_c::sm_S__27__21__5f_(); _t9760 ? (bool)(C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[1876])))) : _t9760; }); _t9764 ? (bool)((({ bool _t9763 = this->f_S__3f__21_6; _t9763 ? _t9763 : (bool)((({ rt::Value _o9761 = C_S_8G::sm_S__23_N(g::SV.C_S__40_W__id); C_S_84* _p9762 = rt::as_ptr<C_S_84>(_o9761); _p9762 ? _p9762->g_S__3f_j() : rt::tonum(rt::dget(_o9761, NM_S__3f_j)); }) >= 3600.0)); }))) : _t9764; });
    return false;
}
double C_S_0_21_v::sm_S__27__21_b() {
    RT_FN("S_0_21_v.S__27__21_b");
    return (((0.2 * ((rt::m_log((1.0 + C_S__23__21__21_::sm_S__2c_d())) * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.4)))) * C_S__26_c::sm_S__40__22__27_(g::SV.C_S__2d_J__id, rt::toint_d(10.0))) * ((1.0 + (0.01 * C_S_1_21_v::sm_S__2c__21_G(((int32_t)(g::SV.C_S_0_21_v__id)))))));
    return 0.0;
}
C_S_0_21_v* C_S_0_21_v::alloc_() {
    C_S_0_21_v* o = rt::make<C_S_0_21_v>();
    return o;
}
rt::Value C_S_0_21_v::mk_(rt::Value* a, int n) {
    C_S_0_21_v* o = alloc_();
    o->C_S_0_21_v::ctor_();
    return rt::VO(o);
}
bool C_S_0_21_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0_21_v::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0_21_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_0_21_v::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_0_21_v::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_0_21_v::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0_21_v::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0_21_v::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_0_21_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21_v__id)); return true;
    case NM_S_0_22_K: out = rt::V(g::SV.C_S_0_21_v__S_0_22_K); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_21_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21_v__id = rt::touint(v); return true;
    case NM_S_0_22_K: g::SV.C_S_0_21_v__S_0_22_K = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_0_21_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_4_22__3c_::ctor_() {
    RT_FN("S_4_22__3c_.S_4_22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9765 = 132.0; this->f_S_6_21_Z = rt::touint_d(_v9765); _v9765; });
    ({ rt::Value _v9766 = rt::trv(rt::VS(g::LS[1877])); this->f_S_1i = rt::slot_string(_v9766); _v9766; });
    ({ rt::Value _v9767 = rt::VS(g::LS[1878]); this->f_S__5e__21__23_ = rt::slot_string(_v9767); _v9767; });
    ({ double _v9768 = 5e+45; this->f_S__3e__3d_ = _v9768; _v9768; });
    ({ double _v9769 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9769); _v9769; });
    ({ double _v9770 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9770); _v9770; });
    ({ double _v9771 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9771); _v9771; });
    ({ bool _v9772 = true; this->f_S__3c__60_ = _v9772; _v9772; });
    ({ double _v9773 = 1.0; this->f_S__21__22_E = rt::touint_d(_v9773); _v9773; });
}
rt::Value C_S_4_22__3c_::m_S__40__22_() {
    RT_FN("S_4_22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1879]), C_S__26_c::sm_S_6_21_T(C_S_4_22__3c_::sm_S__27__21_b(), 1.0, true)));
    return rt::NUL;
}
bool C_S_4_22__3c_::g_S__2d_6() {
    RT_FN("S_4_22__3c_.S__2d_6_get");
    return ({ bool _t9774 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 1.0); _t9774 ? _t9774 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__60__22_G__id)); });
    return false;
}
double C_S_4_22__3c_::sm_S__27__21_b() {
    RT_FN("S_4_22__3c_.S__27__21_b");
    return (1.3 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(3.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7));
    return 0.0;
}
C_S_4_22__3c_* C_S_4_22__3c_::alloc_() {
    C_S_4_22__3c_* o = rt::make<C_S_4_22__3c_>();
    return o;
}
rt::Value C_S_4_22__3c_::mk_(rt::Value* a, int n) {
    C_S_4_22__3c_* o = alloc_();
    o->C_S_4_22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S_4_22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_4_22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22__3c___id)); return true;
    case NM_ids: out = g::SV.C_S_4_22__3c___ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22__3c___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_4_22__3c___ids = v; return true;
    default: return false;
    }
}
bool C_S_4_22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_8_22_B::ctor_() {
    RT_FN("S_8_22_B.S_8_22_B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9775 = 853.0; this->f_S_6_21_Z = rt::touint_d(_v9775); _v9775; });
    ({ rt::Value _v9776 = rt::trv(rt::VS(g::LS[1881])); this->f_S_1i = rt::slot_string(_v9776); _v9776; });
    ({ rt::Value _v9777 = rt::VS(g::LS[1882]); this->f_S__5e__21__23_ = rt::slot_string(_v9777); _v9777; });
    ({ double _v9778 = 1e+100; this->f_S__23__21_m = _v9778; _v9778; });
    ({ double _v9779 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9779); _v9779; });
    ({ double _v9780 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9780); _v9780; });
    ({ double _v9781 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9781); _v9781; });
    ({ bool _v9782 = true; this->f_S__21__21_n = _v9782; _v9782; });
    ({ double _v9783 = 10.0; this->f_S__21__22_E = rt::touint_d(_v9783); _v9783; });
}
rt::Value C_S_8_22_B::m_S__40__22_() {
    RT_FN("S_8_22_B.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1883]), C_S__26_c::sm_S_8_21_Z(C_S_8_22_B::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_8_22_B::g_S__2d_6() {
    RT_FN("S_8_22_B.S__2d_6_get");
    return ({ bool _t9785 = ({ bool _t9784 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 4.0); _t9784 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_2_21_u__id)) : _t9784; }); _t9785 ? _t9785 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5b__22_G__id)); });
    return false;
}
bool C_S_8_22_B::g_S_9_21__25_() {
    RT_FN("S_8_22_B.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S_8_22_B::sm_S__40__21__3f_() {
    RT_FN("S_8_22_B.S__40__21__3f_");
    return (4.0 * rt::m_pow(C_S_8G::sm_S__5e__22_C(g::SV.C_S_2_21__2b___id, rt::toint_d(0.0), C_S_8G::dsm_S__5e__22_C_2()), 0.8));
    return 0.0;
}
C_S_8_22_B* C_S_8_22_B::alloc_() {
    C_S_8_22_B* o = rt::make<C_S_8_22_B>();
    return o;
}
rt::Value C_S_8_22_B::mk_(rt::Value* a, int n) {
    C_S_8_22_B* o = alloc_();
    o->C_S_8_22_B::ctor_();
    return rt::VO(o);
}
bool C_S_8_22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_22_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_22_B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_22_B::smeth_(int id) {
    switch (id) {
    case NM_S__40__21__3f_: return true;
    default: return false;
    }
}
bool C_S_8_22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22_B__id)); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    default: return false;
    }
}
void C_S_9_22__40_::ctor_() {
    RT_FN("S_9_22__40_.S_9_22__40_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9786 = 131.0; this->f_S_6_21_Z = rt::touint_d(_v9786); _v9786; });
    ({ rt::Value _v9787 = rt::trv(rt::VS(g::LS[1884])); this->f_S_1i = rt::slot_string(_v9787); _v9787; });
    ({ rt::Value _v9788 = rt::VS(g::LS[1885]); this->f_S__5e__21__23_ = rt::slot_string(_v9788); _v9788; });
    ({ double _v9789 = 5e+53; this->f_S__3e__3d_ = _v9789; _v9789; });
    ({ double _v9790 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9790); _v9790; });
    ({ double _v9791 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9791); _v9791; });
    ({ double _v9792 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9792); _v9792; });
    ({ bool _v9793 = true; this->f_S__3c__60_ = _v9793; _v9793; });
    ({ double _v9794 = 7.0; this->f_S__21__22_E = rt::touint_d(_v9794); _v9794; });
}
rt::Value C_S_9_22__40_::m_S__40__22_() {
    RT_FN("S_9_22__40_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1886]), C_S__26_c::sm_S_8_21_Z(C_S_9_22__40_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_9_22__40_::g_S__2d_6() {
    RT_FN("S_9_22__40_.S__2d_6_get");
    return ({ bool _t9795 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 3.0); _t9795 ? _t9795 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__21__22_H__id)); });
    return false;
}
double C_S_9_22__40_::sm_S_9L() {
    RT_FN("S_9_22__40_.S_9L");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S_0_23_(C_S__26_c::dsm_S_0_23__0(), C_S__26_c::dsm_S_0_23__1()), 0.5));
    return 0.0;
}
C_S_9_22__40_* C_S_9_22__40_::alloc_() {
    C_S_9_22__40_* o = rt::make<C_S_9_22__40_>();
    return o;
}
rt::Value C_S_9_22__40_::mk_(rt::Value* a, int n) {
    C_S_9_22__40_* o = alloc_();
    o->C_S_9_22__40_::ctor_();
    return rt::VO(o);
}
bool C_S_9_22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_22__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_22__40_::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S_9_22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22__40___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_9_22__40___S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S_9_22__40___ids; return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_9_22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22__40___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_9_22__40___S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S_9_22__40___ids = v; return true;
    default: return false;
    }
}
bool C_S_9_22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S_9a::ctor_() {
    RT_FN("S_9a.S_9a");
    (void)((this->C_S__3e_p::ctor_(), rt::NUL));
    ({ double _v9796 = 120.0; this->f_S_6_21_Z = rt::touint_d(_v9796); _v9796; });
    ({ rt::Value _v9797 = rt::trv(rt::VS(g::LS[1888])); this->f_S_1i = rt::slot_string(_v9797); _v9797; });
    ({ rt::Value _v9798 = rt::VS(g::LS[1889]); this->f_S__5e__21__23_ = rt::slot_string(_v9798); _v9798; });
    ({ double _v9799 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9799); _v9799; });
    ({ double _v9800 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9800); _v9800; });
    ({ double _v9801 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9801); _v9801; });
}
rt::Value C_S_9a::m_S__3e__21_d() {
    RT_FN("S_9a.S__3e__21_d");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1890]), C_S__26_c::sm_S_8_21_Z(C_S_9a::sm_S__27__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_9a::sm_S__27__21_b() {
    RT_FN("S_9a.S__27__21_b");
    return (2.75 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_(C_S__26_c::dsm_S_3_22__26__0(), C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()))), 2.75));
    return 0.0;
}
C_S_9a* C_S_9a::alloc_() {
    C_S_9a* o = rt::make<C_S_9a>();
    return o;
}
rt::Value C_S_9a::mk_(rt::Value* a, int n) {
    C_S_9a* o = alloc_();
    o->C_S_9a::ctor_();
    return rt::VO(o);
}
bool C_S_9a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e_p::dget(id, out);
}
bool C_S_9a::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e_p::dset(id, v);
}
bool C_S_9a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = m_S__3e__21_d(); return true;
    default: break;
    }
    return C_S__3e_p::dcall(id, a, n, out);
}
bool C_S_9a::dmeth(int id) {
    switch (id) {
    case NM_S__3e__21_d: return true;
    default: break;
    }
    return C_S__3e_p::dmeth(id);
}
bool C_S_9a::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_9a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9a__id)); return true;
    case NM_ids: out = g::SV.C_S_9a__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_9a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9a__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_9a__ids = v; return true;
    default: return false;
    }
}
bool C_S_9a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3d__22__3c_::ctor_() {
    RT_FN("S__3d__22__3c_.S__3d__22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9802 = 127.0; this->f_S_6_21_Z = rt::touint_d(_v9802); _v9802; });
    ({ rt::Value _v9803 = rt::trv(rt::VS(g::LS[1892])); this->f_S_1i = rt::slot_string(_v9803); _v9803; });
    ({ rt::Value _v9804 = rt::VS(g::LS[1893]); this->f_S__5e__21__23_ = rt::slot_string(_v9804); _v9804; });
    ({ double _v9805 = 5e+46; this->f_S__3e__3d_ = _v9805; _v9805; });
    ({ double _v9806 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9806); _v9806; });
    ({ double _v9807 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9807); _v9807; });
    ({ double _v9808 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9808); _v9808; });
    ({ bool _v9809 = true; this->f_S__3c__60_ = _v9809; _v9809; });
    ({ double _v9810 = 2.0; this->f_S__21__22_E = rt::touint_d(_v9810); _v9810; });
}
rt::Value C_S__3d__22__3c_::m_S__40__22_() {
    RT_FN("S__3d__22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1894]), C_S__26_c::sm_S_8_21_Z(C_S__3d__22__3c_::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3d__22__3c_::g_S__2d_6() {
    RT_FN("S__3d__22__3c_.S__2d_6_get");
    return ({ bool _t9811 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 1.0); _t9811 ? _t9811 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__60__22_G__id)); });
    return false;
}
double C_S__3d__22__3c_::sm_S__2c_J() {
    RT_FN("S__3d__22__3c_.S__2c_J");
    return (100.0 + (10.0 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.5)));
    return 0.0;
}
C_S__3d__22__3c_* C_S__3d__22__3c_::alloc_() {
    C_S__3d__22__3c_* o = rt::make<C_S__3d__22__3c_>();
    return o;
}
rt::Value C_S__3d__22__3c_::mk_(rt::Value* a, int n) {
    C_S__3d__22__3c_* o = alloc_();
    o->C_S__3d__22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3d__22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3d__22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3d__22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3d__22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    default: return false;
    }
}
bool C_S__3d__22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22__3c___id)); return true;
    case NM_ids: out = g::SV.C_S__3d__22__3c___ids; return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22__3c___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3d__22__3c___ids = v; return true;
    default: return false;
    }
}
bool C_S__3d__22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    default: return false;
    }
}
void C_S__5b__22_9::ctor_() {
    RT_FN("S__5b__22_9.S__5b__22_9");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9812 = 117.0; this->f_S_6_21_Z = rt::touint_d(_v9812); _v9812; });
    ({ rt::Value _v9813 = rt::trv(rt::VS(g::LS[1896])); this->f_S_1i = rt::slot_string(_v9813); _v9813; });
    ({ rt::Value _v9814 = rt::VS(g::LS[1897]); this->f_S__5e__21__23_ = rt::slot_string(_v9814); _v9814; });
    ({ double _v9815 = 5e+51; this->f_S__3e__3d_ = _v9815; _v9815; });
    ({ double _v9816 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9816); _v9816; });
    ({ double _v9817 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9817); _v9817; });
    ({ double _v9818 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9818); _v9818; });
    ({ bool _v9819 = true; this->f_S__3c__60_ = _v9819; _v9819; });
    ({ double _v9820 = 6.0; this->f_S__21__22_E = rt::touint_d(_v9820); _v9820; });
}
rt::Value C_S__5b__22_9::m_S__40__22_() {
    RT_FN("S__5b__22_9.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1898])));
    return rt::NUL;
}
bool C_S__5b__22_9::g_S__2d_6() {
    RT_FN("S__5b__22_9.S__2d_6_get");
    return ({ bool _t9821 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 2.0); _t9821 ? _t9821 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5e__22_G__id)); });
    return false;
}
C_S__5b__22_9* C_S__5b__22_9::alloc_() {
    C_S__5b__22_9* o = rt::make<C_S__5b__22_9>();
    return o;
}
rt::Value C_S__5b__22_9::mk_(rt::Value* a, int n) {
    C_S__5b__22_9* o = alloc_();
    o->C_S__5b__22_9::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5b__22_9::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5b__22_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5b__22_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5b__22_9::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__22_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22_9__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__5b__22_9__S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__5b__22_9__ids; return true;
    default: return false;
    }
}
bool C_S__5b__22_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22_9__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__5b__22_9__S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__5b__22_9__ids = v; return true;
    default: return false;
    }
}
bool C_S__5b__22_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__22__3e_::ctor_() {
    RT_FN("S__60__22__3e_.S__60__22__3e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9822 = 852.0; this->f_S_6_21_Z = rt::touint_d(_v9822); _v9822; });
    ({ rt::Value _v9823 = rt::trv(rt::VS(g::LS[1900])); this->f_S_1i = rt::slot_string(_v9823); _v9823; });
    ({ rt::Value _v9824 = rt::VS(g::LS[1901]); this->f_S__5e__21__23_ = rt::slot_string(_v9824); _v9824; });
    ({ double _v9825 = 1e+120; this->f_S__23__21_m = _v9825; _v9825; });
    ({ double _v9826 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v9826); _v9826; });
    ({ double _v9827 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9827); _v9827; });
    ({ double _v9828 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9828); _v9828; });
    ({ bool _v9829 = true; this->f_S__21__21_n = _v9829; _v9829; });
    ({ double _v9830 = 12.0; this->f_S__21__22_E = rt::touint_d(_v9830); _v9830; });
}
rt::Value C_S__60__22__3e_::m_S__40__22_() {
    RT_FN("S__60__22__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1902]), C_S__26_c::sm_S_8_21_Z(C_S__60__22__3e_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__60__22__3e_::g_S__2d_6() {
    RT_FN("S__60__22__3e_.S__2d_6_get");
    return ({ bool _t9832 = ({ bool _t9831 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1826])))) >= 4.0); _t9831 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_2_21_u__id)) : _t9831; }); _t9832 ? _t9832 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5b__22_G__id)); });
    return false;
}
bool C_S__60__22__3e_::g_S_9_21__25_() {
    RT_FN("S__60__22__3e_.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S__60__22__3e_::sm_S_9L() {
    RT_FN("S__60__22__3e_.S_9L");
    return (2.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sg_S__22__21_0())), 1.5));
    return 0.0;
}
C_S__60__22__3e_* C_S__60__22__3e_::alloc_() {
    C_S__60__22__3e_* o = rt::make<C_S__60__22__3e_>();
    return o;
}
rt::Value C_S__60__22__3e_::mk_(rt::Value* a, int n) {
    C_S__60__22__3e_* o = alloc_();
    o->C_S__60__22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__60__22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__60__22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__60__22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__60__22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__60__22__3e_::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__60__22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22__3e___id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__22__5b_::ctor_() {
    RT_FN("S__22__5b_.S__22__5b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9833 = 604.0; this->f_S_6_21_Z = rt::touint_d(_v9833); _v9833; });
    ({ rt::Value _v9834 = rt::trv(rt::VS(g::LS[1903])); this->f_S_1i = rt::slot_string(_v9834); _v9834; });
    ({ rt::Value _v9835 = rt::VS(g::LS[1904]); this->f_S__5e__21__23_ = rt::slot_string(_v9835); _v9835; });
    ({ double _v9836 = 1e+58; this->f_S__3c_R = _v9836; _v9836; });
    ({ bool _v9837 = true; this->f_S__25__21__3e_ = _v9837; _v9837; });
    ({ bool _v9838 = true; this->f_S__3f_T = _v9838; _v9838; });
    ({ double _v9839 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v9839); _v9839; });
    ({ bool _v9840 = false; this->f_S_3e = _v9840; _v9840; });
}
rt::Value C_S__22__5b_::m_S__40__22_() {
    RT_FN("S__22__5b_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[1905])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[1906]), C_S__26_c::sm_S__23__21_R(rt::m_max2(0.0, (7200.0 - C_S__26_c::sm_S__20__21__3b_(rt::toint_d(81.0)))), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
    return rt::NUL;
}
rt::Value C_S__22__5b_::m_S__3d__21__26_() {
    RT_FN("S__22__5b_.S__3d__21__26_");
    (void)(this->C_S__60_6::m_S__3d__21__26_());
    (void)(({ rt::Value _o9841 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p9842 = rt::as_ptr<C_S__20_g>(_o9841); _p9842 ? _p9842->m_S__26__2b_(rt::toint_d(933.0), rt::toint_d(0.0)) : rt::dcallv(_o9841, NM_S__26__2b_, rt::V(933.0), rt::V(0.0)); }));
    return rt::NUL;
}
rt::Value C_S__22__5b_::m_S_6r() {
    RT_FN("S__22__5b_.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    ({ rt::Value _v9845 = ({ rt::Value _v9844 = ({ rt::Value _v9843 = rt::V(0.0); rt::idx_set(g::SV.C_S_8G__S__40_w, rt::V(81.0), _v9843); _v9843; }); rt::idx_set(g::SV.C_S_8G__S__3d_y, rt::V(81.0), _v9844); _v9844; }); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(81.0), _v9845); });
    (void)(({ rt::Value _o9846 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p9847 = rt::as_ptr<C_S__20_g>(_o9846); _p9847 ? _p9847->m_S__26__2b_(rt::toint_d(937.0), rt::toint_d(0.0)) : rt::dcallv(_o9846, NM_S__26__2b_, rt::V(937.0), rt::V(0.0)); }));
    return rt::NUL;
}
int32_t C_S__22__5b_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__22__5b_::dm_S_75_2() { return false; }
rt::Value C_S__22__5b_::dm_S_75_3() { return rt::NUL; }
double C_S__22__5b_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__22__5b_.S_75");
    if (C_S__26_c::sm_S__3e__25_(l_param1)) {
        return 1000000000.0;
    }
    return 0.0;
    return 0.0;
}
bool C_S__22__5b_::g_S__2d_6() {
    RT_FN("S__22__5b_.S__2d_6_get");
    return ({ bool _t9848 = C_S_8G::sm_S__3c_P(g::SV.C_S_1S__id); _t9848 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 42.0)) : _t9848; });
    return false;
}
bool C_S__22__5b_::g_S_9_21__25_() {
    RT_FN("S__22__5b_.S_9_21__25__get");
    return ({ bool _t9849 = (((double)(C_S_8G::sg_S_8_21_H())) >= 42.0); _t9849 ? (bool)((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(81.0)) >= 7200.0)) : _t9849; });
    return false;
}
bool C_S__22__5b_::g_S__26_8() {
    RT_FN("S__22__5b_.S__26_8_get");
    return false;
    return false;
}
C_S__22__5b_* C_S__22__5b_::alloc_() {
    C_S__22__5b_* o = rt::make<C_S__22__5b_>();
    return o;
}
rt::Value C_S__22__5b_::mk_(rt::Value* a, int n) {
    C_S__22__5b_* o = alloc_();
    o->C_S__22__5b_::ctor_();
    return rt::VO(o);
}
bool C_S__22__5b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22__5b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22__5b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3d__21__26_: out = m_S__3d__21__26_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__22__5b_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__22__5b_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__22__5b_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22__5b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3d__21__26_: return true;
    case NM_S_6r: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22__5b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__5b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__5b___id)); return true;
    default: return false;
    }
}
bool C_S__22__5b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__5b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__5b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__22_A::ctor_() {
    RT_FN("S__3c__22_A.S__3c__22_A");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9850 = 596.0; this->f_S_6_21_Z = rt::touint_d(_v9850); _v9850; });
    ({ rt::Value _v9851 = rt::trv(rt::VS(g::LS[1907])); this->f_S_1i = rt::slot_string(_v9851); _v9851; });
    ({ rt::Value _v9852 = rt::VS(g::LS[1908]); this->f_S__5e__21__23_ = rt::slot_string(_v9852); _v9852; });
    ({ double _v9853 = 5e+105; this->f_S__3c_R = _v9853; _v9853; });
    ({ double _v9854 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9854); _v9854; });
    ({ double _v9855 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9855); _v9855; });
    ({ double _v9856 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9856); _v9856; });
    ({ bool _v9857 = true; this->f_S__3c__60_ = _v9857; _v9857; });
    ({ double _v9858 = 5.0; this->f_S__21__22_E = rt::touint_d(_v9858); _v9858; });
}
rt::Value C_S__3c__22_A::m_S__40__22_() {
    RT_FN("S__3c__22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1909]), C_S__26_c::sm_S_6_21_T(C_S__3c__22_A::sm_S__27__21_b(), 2.0, true)));
    return rt::NUL;
}
bool C_S__3c__22_A::g_S__2d_6() {
    RT_FN("S__3c__22_A.S__2d_6_get");
    return ({ bool _t9859 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 2.0); _t9859 ? _t9859 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__23__22_H__id)); });
    return false;
}
bool C_S__3c__22_A::g_S_9_21__25_() {
    RT_FN("S__3c__22_A.S_9_21__25__get");
    return C_S__26_c::sm_S_4_21_j(rt::VO(this));
    return false;
}
double C_S__3c__22_A::sm_S__27__21_b() {
    RT_FN("S__3c__22_A.S__27__21_b");
    return (5.0 * rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 1.25));
    return 0.0;
}
C_S__3c__22_A* C_S__3c__22_A::alloc_() {
    C_S__3c__22_A* o = rt::make<C_S__3c__22_A>();
    return o;
}
rt::Value C_S__3c__22_A::mk_(rt::Value* a, int n) {
    C_S__3c__22_A* o = alloc_();
    o->C_S__3c__22_A::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__22_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__22_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__22_A::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3c__22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22_A__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3c_G::ctor_() {
    RT_FN("S__3c_G.S__3c_G");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9860 = 606.0; this->f_S_6_21_Z = rt::touint_d(_v9860); _v9860; });
    ({ rt::Value _v9861 = rt::trv(rt::VS(g::LS[1911])); this->f_S_1i = rt::slot_string(_v9861); _v9861; });
    ({ rt::Value _v9862 = rt::VS(g::LS[1912]); this->f_S__5e__21__23_ = rt::slot_string(_v9862); _v9862; });
    ({ double _v9863 = 1e+70; this->f_S__3c_R = _v9863; _v9863; });
    ({ bool _v9864 = true; this->f_S__25__21__3e_ = _v9864; _v9864; });
    ({ bool _v9865 = true; this->f_S__3f_T = _v9865; _v9865; });
    ({ double _v9866 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v9866); _v9866; });
    ({ bool _v9867 = false; this->f_S_3e = _v9867; _v9867; });
}
rt::Value C_S__3c_G::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3c_G.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[1913]))));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 46.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1906]), C_S__26_c::sm_S__23__21_R(rt::m_max2(0.0, (7200.0 - C_S__26_c::sm_S__20__21__3b_(rt::toint_d(81.0)))), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[1914]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__3c_G__S__5e__21_s, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1915]), rt::V(46.0))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__3c_G::m_S__3d__21__26_() {
    RT_FN("S__3c_G.S__3d__21__26_");
    (void)(this->C_S__60_6::m_S__3d__21__26_());
    (void)(({ rt::Value _o9868 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p9869 = rt::as_ptr<C_S__20_g>(_o9868); _p9869 ? _p9869->m_S__26__2b_(rt::toint_d(935.0), rt::toint_d(0.0)) : rt::dcallv(_o9868, NM_S__26__2b_, rt::V(935.0), rt::V(0.0)); }));
    return rt::NUL;
}
rt::Value C_S__3c_G::m_S_6r() {
    RT_FN("S__3c_G.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    ({ rt::Value _v9872 = ({ rt::Value _v9871 = ({ rt::Value _v9870 = rt::V(0.0); rt::idx_set(g::SV.C_S_8G__S__40_w, rt::V(81.0), _v9870); _v9870; }); rt::idx_set(g::SV.C_S_8G__S__3d_y, rt::V(81.0), _v9871); _v9871; }); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(81.0), _v9872); });
    return rt::NUL;
}
int32_t C_S__3c_G::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__3c_G::dm_S_75_2() { return false; }
rt::Value C_S__3c_G::dm_S_75_3() { return rt::NUL; }
double C_S__3c_G::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__3c_G.S_75");
    if (C_S__26_c::sm_S__3e__25_(l_param1)) {
        return 1000000000000000.0;
    }
    return 0.0;
    return 0.0;
}
bool C_S__3c_G::g_S__2d_6() {
    RT_FN("S__3c_G.S__2d_6_get");
    return ({ bool _t9873 = C_S_8G::sm_S_7d(g::SV.C_S__40__21__20___id); _t9873 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 42.0)) : _t9873; });
    return false;
}
bool C_S__3c_G::g_S_9_21__25_() {
    RT_FN("S__3c_G.S_9_21__25__get");
    return ({ bool _t9876 = ({ bool _t9875 = ({ bool _t9874 = (((double)(C_S_8G::sg_S_8_21_H())) >= 46.0); _t9874 ? (bool)((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(81.0)) >= 7200.0)) : _t9874; }); _t9875 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0)) : _t9875; }); _t9876 ? (bool)((C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()) >= g::SV.C_S__3c_G__S__5e__21_s)) : _t9876; });
    return false;
}
bool C_S__3c_G::g_S__26_8() {
    RT_FN("S__3c_G.S__26_8_get");
    return false;
    return false;
}
C_S__3c_G* C_S__3c_G::alloc_() {
    C_S__3c_G* o = rt::make<C_S__3c_G>();
    return o;
}
rt::Value C_S__3c_G::mk_(rt::Value* a, int n) {
    C_S__3c_G* o = alloc_();
    o->C_S__3c_G::ctor_();
    return rt::VO(o);
}
bool C_S__3c_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3d__21__26_: out = m_S__3d__21__26_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__3c_G::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__3c_G::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__3c_G::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c_G::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3d__21__26_: return true;
    case NM_S_6r: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c_G::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c_G__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__3c_G__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__3c_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c_G__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__3c_G__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3c_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c_a::ctor_() {
    RT_FN("S__3c_a.S__3c_a");
    (void)((this->C_S__3e_p::ctor_(), rt::NUL));
    ({ double _v9877 = 598.0; this->f_S_6_21_Z = rt::touint_d(_v9877); _v9877; });
    ({ rt::Value _v9878 = rt::trv(rt::VS(g::LS[1916])); this->f_S_1i = rt::slot_string(_v9878); _v9878; });
    ({ rt::Value _v9879 = rt::VS(g::LS[1917]); this->f_S__5e__21__23_ = rt::slot_string(_v9879); _v9879; });
    ({ double _v9880 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9880); _v9880; });
    ({ double _v9881 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9881); _v9881; });
    ({ double _v9882 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9882); _v9882; });
}
rt::Value C_S__3c_a::m_S__3e__21_d() {
    RT_FN("S__3c_a.S__3e__21_d");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1918]), C_S__26_c::sm_S_8_21_Z(C_S__3c_a::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3c_a::sm_S__26_s() {
    RT_FN("S__3c_a.S__26_s");
    return (3.0 * rt::m_pow(C_S__26_c::sm_S_0F(C_S__26_c::dsm_S_0F_0()), 0.3));
    return 0.0;
}
C_S__3c_a* C_S__3c_a::alloc_() {
    C_S__3c_a* o = rt::make<C_S__3c_a>();
    return o;
}
rt::Value C_S__3c_a::mk_(rt::Value* a, int n) {
    C_S__3c_a* o = alloc_();
    o->C_S__3c_a::ctor_();
    return rt::VO(o);
}
bool C_S__3c_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e_p::dget(id, out);
}
bool C_S__3c_a::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e_p::dset(id, v);
}
bool C_S__3c_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = m_S__3e__21_d(); return true;
    default: break;
    }
    return C_S__3e_p::dcall(id, a, n, out);
}
bool C_S__3c_a::dmeth(int id) {
    switch (id) {
    case NM_S__3e__21_d: return true;
    default: break;
    }
    return C_S__3e_p::dmeth(id);
}
bool C_S__3c_a::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3c_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c_a__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c_a__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3e__21_w::ctor_() {
    RT_FN("S__3e__21_w.S__3e__21_w");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9883 = 863.0; this->f_S_6_21_Z = rt::touint_d(_v9883); _v9883; });
    ({ rt::Value _v9884 = rt::trv(rt::VS(g::LS[1919])); this->f_S_1i = rt::slot_string(_v9884); _v9884; });
    ({ rt::Value _v9885 = rt::VS(g::LS[1920]); this->f_S__5e__21__23_ = rt::slot_string(_v9885); _v9885; });
    ({ double _v9886 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9886); _v9886; });
    ({ double _v9887 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9887); _v9887; });
    ({ double _v9888 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9888); _v9888; });
    ({ bool _v9889 = true; this->f_S__25__21__3e_ = _v9889; _v9889; });
}
int32_t C_S__3e__21_w::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__3e__21_w::dm_S_75_2() { return false; }
rt::Value C_S__3e__21_w::dm_S_75_3() { return rt::NUL; }
double C_S__3e__21_w::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S__3e__21_w.S_75");
    (l_A__loc5_ = NAN);
    if (((((double)(l_param1)) == 9.0) || (((double)(l_param1)) == 10.0))) {
        return 1e+24;
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__3e__21_w::m_S__40__22_() {
    RT_FN("S__3e__21_w.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::trv(rt::VS(g::LS[1921]), C_S__26_c::sm_S_8_21_Z(C_S__3e__21_w::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[1798]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[1799]))));
    return rt::NUL;
}
bool C_S__3e__21_w::g_S__2d_6() {
    RT_FN("S__3e__21_w.S__2d_6_get");
    return ({ bool _t9893 = C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[1922]))); _t9893 ? (bool)((({ bool _t9892 = this->f_S__3f__21_6; _t9892 ? _t9892 : (bool)((({ rt::Value _o9890 = C_S_8G::sm_S__23_N(g::SV.C_S_5_21_3__id); C_S_84* _p9891 = rt::as_ptr<C_S_84>(_o9890); _p9891 ? _p9891->g_S__3f_j() : rt::tonum(rt::dget(_o9890, NM_S__3f_j)); }) >= 3600.0)); }))) : _t9893; });
    return false;
}
double C_S__3e__21_w::sm_S__2c__21_G() {
    RT_FN("S__3e__21_w.S__2c__21_G");
    return rt::m_floor(((((1.0 + (0.05 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__5b__21_j())), 1.15)))) * C_S__26_c::sm_S__40__22__27_(g::SV.C_S_88__id, rt::toint_d(12.0))) * ((1.0 + (0.01 * C_S_1_21_v::sm_S__2c__21_G(((int32_t)(g::SV.C_S__3e__21_w__id))))))));
    return 0.0;
}
C_S__3e__21_w* C_S__3e__21_w::alloc_() {
    C_S__3e__21_w* o = rt::make<C_S__3e__21_w>();
    return o;
}
rt::Value C_S__3e__21_w::mk_(rt::Value* a, int n) {
    C_S__3e__21_w* o = alloc_();
    o->C_S__3e__21_w::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_w::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e__21_w::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e__21_w::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__3e__21_w::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__3e__21_w::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__3e__21_w::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e__21_w::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e__21_w::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3e__21_w::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_w__id)); return true;
    case NM_S_0_22_K: out = rt::V(g::SV.C_S__3e__21_w__S_0_22_K); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__21_w::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_w__id = rt::touint(v); return true;
    case NM_S_0_22_K: g::SV.C_S__3e__21_w__S_0_22_K = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3e__21_w::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3e__22_B::ctor_() {
    RT_FN("S__3e__22_B.S__3e__22_B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9894 = 599.0; this->f_S_6_21_Z = rt::touint_d(_v9894); _v9894; });
    ({ rt::Value _v9895 = rt::trv(rt::VS(g::LS[1923])); this->f_S_1i = rt::slot_string(_v9895); _v9895; });
    ({ rt::Value _v9896 = rt::VS(g::LS[1924]); this->f_S__5e__21__23_ = rt::slot_string(_v9896); _v9896; });
    ({ double _v9897 = 5e+99; this->f_S__3c_R = _v9897; _v9897; });
    ({ double _v9898 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9898); _v9898; });
    ({ double _v9899 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9899); _v9899; });
    ({ double _v9900 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9900); _v9900; });
    ({ bool _v9901 = true; this->f_S__3c__60_ = _v9901; _v9901; });
    ({ double _v9902 = 4.0; this->f_S__21__22_E = rt::touint_d(_v9902); _v9902; });
}
rt::Value C_S__3e__22_B::m_S__40__22_() {
    RT_FN("S__3e__22_B.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1925]), C_S__26_c::sm_S_8_21_Z(C_S__3e__22_B::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__3e__22_B::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_6_21_T(C_S__3e__22_B::sm_S_2_21__40_(), 2.0, true)));
    return rt::NUL;
}
bool C_S__3e__22_B::g_S__2d_6() {
    RT_FN("S__3e__22_B.S__2d_6_get");
    return ({ bool _t9903 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 2.0); _t9903 ? _t9903 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__23__22_H__id)); });
    return false;
}
bool C_S__3e__22_B::g_S_9_21__25_() {
    RT_FN("S__3e__22_B.S_9_21__25__get");
    return C_S__26_c::sm_S_4_21_j(rt::VO(this));
    return false;
}
double C_S__3e__22_B::sm_S_5_21_B() {
    RT_FN("S__3e__22_B.S_5_21_B");
    return (5.0 * rt::m_pow(C_S__26_c::sm_S__22__21_B(C_S__26_c::sm_S__3b__21_4(rt::toint_d(12.0)), true, false, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.5));
    return 0.0;
}
double C_S__3e__22_B::sm_S_9L() {
    RT_FN("S__3e__22_B.S_9L");
    return (0.6 * rt::m_pow(C_S__26_c::sm_S__22__21_B(C_S__26_c::sm_S__3b__21_4(rt::toint_d(12.0)), true, false, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.4));
    return 0.0;
}
double C_S__3e__22_B::sm_S_2_21__40_() {
    RT_FN("S__3e__22_B.S_2_21__40_");
    return (0.8 * rt::m_pow(C_S__26_c::sm_S__22__21_B(C_S__26_c::sm_S__3b__21_4(rt::toint_d(12.0)), true, false, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.4));
    return 0.0;
}
C_S__3e__22_B* C_S__3e__22_B::alloc_() {
    C_S__3e__22_B* o = rt::make<C_S__3e__22_B>();
    return o;
}
rt::Value C_S__3e__22_B::mk_(rt::Value* a, int n) {
    C_S__3e__22_B* o = alloc_();
    o->C_S__3e__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e__22_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e__22_B::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    case NM_S_9L: return true;
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S__3e__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22_B__id)); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S__3f_A::ctor_() {
    RT_FN("S__3f_A.S__3f_A");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9904 = 602.0; this->f_S_6_21_Z = rt::touint_d(_v9904); _v9904; });
    ({ rt::Value _v9905 = rt::trv(rt::VS(g::LS[1926])); this->f_S_1i = rt::slot_string(_v9905); _v9905; });
    ({ rt::Value _v9906 = rt::VS(g::LS[1927]); this->f_S__5e__21__23_ = rt::slot_string(_v9906); _v9906; });
    ({ rt::Value _v9907 = rt::VS(g::LS[1910]); this->f_S__3f__21__3d_ = rt::slot_string(_v9907); _v9907; });
    ({ rt::Value _v9908 = rt::VS(g::LS[1910]); this->f_S__40_1 = rt::slot_string(_v9908); _v9908; });
    ({ rt::Value _v9909 = rt::trv(rt::VS(g::LS[1928])); this->f_S_7_23_ = rt::slot_string(_v9909); _v9909; });
    ({ double _v9910 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9910); _v9910; });
    ({ double _v9911 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9911); _v9911; });
    ({ double _v9912 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9912); _v9912; });
    ({ bool _v9913 = true; this->f_S__3c__60_ = _v9913; _v9913; });
}
int32_t C_S__3f_A::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__3f_A::dm_S_75_2() { return false; }
rt::Value C_S__3f_A::dm_S_75_3() { return rt::NUL; }
double C_S__3f_A::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__3f_A.S_75");
    if (((((double)(l_param1)) == 9.0) || (((double)(l_param1)) == 10.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+39 : 5000000000000000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__3f_A::g_S__2d_6() {
    RT_FN("S__3f_A.S__2d_6_get");
    return ({ bool _t9916 = ({ bool _t9915 = ({ bool _t9914 = this->C_S__60_6::g_S__2d_6(); _t9914 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 12.0)) : _t9914; }); _t9915 ? (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 41.0), rt::V(0.0))) : _t9915; }); _t9916 ? (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 42.0), rt::V(0.0))) : _t9916; });
    return false;
}
C_S__3f_A* C_S__3f_A::alloc_() {
    C_S__3f_A* o = rt::make<C_S__3f_A>();
    return o;
}
rt::Value C_S__3f_A::mk_(rt::Value* a, int n) {
    C_S__3f_A* o = alloc_();
    o->C_S__3f_A::ctor_();
    return rt::VO(o);
}
bool C_S__3f_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__3f_A::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__3f_A::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__3f_A::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f_A::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f_A::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f_A__id)); return true;
    default: return false;
    }
}
bool C_S__3f_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__22_A::ctor_() {
    RT_FN("S__27__22_A.S__27__22_A");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9917 = 608.0; this->f_S_6_21_Z = rt::touint_d(_v9917); _v9917; });
    ({ rt::Value _v9918 = rt::trv(rt::VS(g::LS[1929])); this->f_S_1i = rt::slot_string(_v9918); _v9918; });
    ({ rt::Value _v9919 = rt::VS(g::LS[1930]); this->f_S__5e__21__23_ = rt::slot_string(_v9919); _v9919; });
    ({ double _v9920 = 5e+75; this->f_S__3c_R = _v9920; _v9920; });
    ({ double _v9921 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9921); _v9921; });
    ({ double _v9922 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9922); _v9922; });
    ({ double _v9923 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9923); _v9923; });
    ({ bool _v9924 = true; this->f_S__3c__60_ = _v9924; _v9924; });
    ({ double _v9925 = 1.0; this->f_S__21__22_E = rt::touint_d(_v9925); _v9925; });
}
rt::Value C_S__27__22_A::m_S__40__22_() {
    RT_FN("S__27__22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1931]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_M__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2X__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__27__22_A::sm_S_3_22_H(), 2.0, true), C_S__26_c::sm_S_6_21_T(C_S__27__22_A::sm_S_89(), 2.0, true)));
    return rt::NUL;
}
bool C_S__27__22_A::g_S__2d_6() {
    RT_FN("S__27__22_A.S__2d_6_get");
    return ({ bool _t9926 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 1.0); _t9926 ? _t9926 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__2d__22_H__id)); });
    return false;
}
bool C_S__27__22_A::g_S_9_21__25_() {
    RT_FN("S__27__22_A.S_9_21__25__get");
    return C_S__26_c::sm_S_4_21_j(rt::VO(this));
    return false;
}
double C_S__27__22_A::sm_S_3_22_H() {
    RT_FN("S__27__22_A.S_3_22_H");
    return (0.3 * rt::m_pow(((g::SV.C_S__23__21__21___S_2_21_P / 2.0) + ((double)(C_S__26_c::sm_S__2d__22__21_(rt::toint_d(0.0), C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3())))), 0.7));
    return 0.0;
}
double C_S__27__22_A::sm_S_89() {
    RT_FN("S__27__22_A.S_89");
    return (7.5 * rt::m_pow(((g::SV.C_S__23__21__21___S_2_21_P / 2.0) + ((double)(C_S__26_c::sm_S__2d__22__21_(rt::toint_d(0.0), C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3())))), 0.75));
    return 0.0;
}
C_S__27__22_A* C_S__27__22_A::alloc_() {
    C_S__27__22_A* o = rt::make<C_S__27__22_A>();
    return o;
}
rt::Value C_S__27__22_A::mk_(rt::Value* a, int n) {
    C_S__27__22_A* o = alloc_();
    o->C_S__27__22_A::ctor_();
    return rt::VO(o);
}
bool C_S__27__22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__22_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__22_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__22_A::smeth_(int id) {
    switch (id) {
    case NM_S_3_22_H: return true;
    case NM_S_89: return true;
    default: return false;
    }
}
bool C_S__27__22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22_A__id)); return true;
    case NM_S_3_22_H: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_89: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_3_22_H: out = rt::V(sm_S_3_22_H()); return true;
    case NM_S_89: out = rt::V(sm_S_89()); return true;
    default: return false;
    }
}
void C_S__2c__22__3c_::ctor_() {
    RT_FN("S__2c__22__3c_.S__2c__22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9927 = 858.0; this->f_S_6_21_Z = rt::touint_d(_v9927); _v9927; });
    ({ rt::Value _v9928 = rt::trv(rt::VS(g::LS[1932])); this->f_S_1i = rt::slot_string(_v9928); _v9928; });
    ({ rt::Value _v9929 = rt::VS(g::LS[1933]); this->f_S__5e__21__23_ = rt::slot_string(_v9929); _v9929; });
    ({ double _v9930 = 1e+120; this->f_S__23__21_m = _v9930; _v9930; });
    ({ double _v9931 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9931); _v9931; });
    ({ double _v9932 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9932); _v9932; });
    ({ double _v9933 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9933); _v9933; });
    ({ bool _v9934 = true; this->f_S__21__21_n = _v9934; _v9934; });
    ({ double _v9935 = 12.0; this->f_S__21__22_E = rt::touint_d(_v9935); _v9935; });
}
rt::Value C_S__2c__22__3c_::m_S__40__22_() {
    RT_FN("S__2c__22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1840]), C_S__26_c::sm_S_6_21_T(C_S__2c__22__3c_::sm_S__27__21_b(), 3.0, true)));
    return rt::NUL;
}
bool C_S__2c__22__3c_::g_S__2d_6() {
    RT_FN("S__2c__22__3c_.S__2d_6_get");
    return ({ bool _t9937 = ({ bool _t9936 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 4.0); _t9936 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__3e__21_u__id)) : _t9936; }); _t9937 ? _t9937 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__27__22_H__id)); });
    return false;
}
bool C_S__2c__22__3c_::g_S_9_21__25_() {
    RT_FN("S__2c__22__3c_.S_9_21__25__get");
    return ({ bool _t9938 = C_S__26_c::sm_S_4_21_j(rt::VO(this)); _t9938 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t9938; });
    return false;
}
double C_S__2c__22__3c_::sm_S__27__21_b() {
    RT_FN("S__2c__22__3c_.S__27__21_b");
    return (10.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_2_21__26_())), 2.0));
    return 0.0;
}
C_S__2c__22__3c_* C_S__2c__22__3c_::alloc_() {
    C_S__2c__22__3c_* o = rt::make<C_S__2c__22__3c_>();
    return o;
}
rt::Value C_S__2c__22__3c_::mk_(rt::Value* a, int n) {
    C_S__2c__22__3c_* o = alloc_();
    o->C_S__2c__22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__2c__22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22__3c___id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_0R::ctor_() {
    RT_FN("S_0R.S_0R");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9939 = 601.0; this->f_S_6_21_Z = rt::touint_d(_v9939); _v9939; });
    ({ rt::Value _v9940 = rt::trv(rt::VS(g::LS[1934])); this->f_S_1i = rt::slot_string(_v9940); _v9940; });
    ({ rt::Value _v9941 = rt::VS(g::LS[1935]); this->f_S__5e__21__23_ = rt::slot_string(_v9941); _v9941; });
    ({ rt::Value _v9942 = rt::VS(g::LS[1910]); this->f_S__3f__21__3d_ = rt::slot_string(_v9942); _v9942; });
    ({ rt::Value _v9943 = rt::VS(g::LS[1910]); this->f_S__40_1 = rt::slot_string(_v9943); _v9943; });
    ({ rt::Value _v9944 = rt::trv(rt::VS(g::LS[1928])); this->f_S_7_23_ = rt::slot_string(_v9944); _v9944; });
    ({ double _v9945 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9945); _v9945; });
    ({ double _v9946 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9946); _v9946; });
    ({ double _v9947 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9947); _v9947; });
    ({ bool _v9948 = true; this->f_S__3c__60_ = _v9948; _v9948; });
}
int32_t C_S_0R::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_0R::dm_S_75_2() { return false; }
rt::Value C_S_0R::dm_S_75_3() { return rt::NUL; }
double C_S_0R::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_0R.S_75");
    if (((((double)(l_param1)) == 9.0) || (((double)(l_param1)) == 10.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+33 : 5000000000000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S_0R::g_S__2d_6() {
    RT_FN("S_0R.S__2d_6_get");
    return ({ bool _t9951 = ({ bool _t9950 = ({ bool _t9949 = this->C_S__60_6::g_S__2d_6(); _t9949 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 12.0)) : _t9949; }); _t9950 ? (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 41.0), rt::V(0.0))) : _t9950; }); _t9951 ? (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 42.0), rt::V(0.0))) : _t9951; });
    return false;
}
C_S_0R* C_S_0R::alloc_() {
    C_S_0R* o = rt::make<C_S_0R>();
    return o;
}
rt::Value C_S_0R::mk_(rt::Value* a, int n) {
    C_S_0R* o = alloc_();
    o->C_S_0R::ctor_();
    return rt::VO(o);
}
bool C_S_0R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_0R::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_0R::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_0R::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0R::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0R::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0R__id)); return true;
    default: return false;
    }
}
bool C_S_0R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0R__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_21_U::ctor_() {
    RT_FN("S_1_21_U.S_1_21_U");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9952 = 600.0; this->f_S_6_21_Z = rt::touint_d(_v9952); _v9952; });
    ({ rt::Value _v9953 = rt::trv(rt::VS(g::LS[1936])); this->f_S_1i = rt::slot_string(_v9953); _v9953; });
    ({ rt::Value _v9954 = rt::VS(g::LS[1937]); this->f_S__5e__21__23_ = rt::slot_string(_v9954); _v9954; });
    ({ rt::Value _v9955 = rt::VS(g::LS[1910]); this->f_S__3f__21__3d_ = rt::slot_string(_v9955); _v9955; });
    ({ rt::Value _v9956 = rt::VS(g::LS[1910]); this->f_S__40_1 = rt::slot_string(_v9956); _v9956; });
    ({ rt::Value _v9957 = rt::trv(rt::VS(g::LS[1938])); this->f_S_7_23_ = rt::slot_string(_v9957); _v9957; });
    ({ double _v9958 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9958); _v9958; });
    ({ double _v9959 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9959); _v9959; });
    ({ double _v9960 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9960); _v9960; });
    ({ bool _v9961 = false; this->f_S_3e = _v9961; _v9961; });
    ({ bool _v9962 = true; this->f_S__3c__60_ = _v9962; _v9962; });
}
int32_t C_S_1_21_U::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_1_21_U::dm_S_75_2() { return false; }
rt::Value C_S_1_21_U::dm_S_75_3() { return rt::NUL; }
double C_S_1_21_U::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_1_21_U.S_75");
    if (((((double)(l_param1)) == 9.0) || (((double)(l_param1)) == 10.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+27 : 5000000000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S_1_21_U::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S_1_21_U.S_6r");
    if ((!(((double)(g::SV.C_S_8G__S__23_3)) == (-1.0)))) {
        return rt::NUL;
    }
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 78.0), rt::V(1.0))));
    ({ rt::Value _v9963 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(78.0), _v9963); });
    (void)(({ rt::Value _o9964 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p9965 = rt::as_ptr<C_S_8G>(_o9964); _p9965 ? _p9965->m_S__3c_h(rt::toint_d(12.0)) : rt::dcallv(_o9964, NM_S__3c_h, rt::V(12.0)); }));
    return rt::NUL;
}
bool C_S_1_21_U::g_S__2d_6() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_1_21_U.S__2d_6_get");
    (l_A__loc1_ = rt::arr_lit({rt::V(0.0), rt::V(0.0), rt::V(0.0), rt::V(0.0), rt::V(0.0), rt::V(0.0), rt::V((double)(g::SV.C_S_0_5e___id)), rt::V((double)(g::SV.C_S__3d__21_O__id)), rt::V((double)(g::SV.C_S__25__21_V__id))}));
    return ({ bool _t9976 = ({ bool _t9975 = ({ bool _t9974 = ({ bool _t9973 = ({ bool _t9972 = ({ bool _t9971 = ({ bool _t9970 = ({ bool _t9968 = (({ bool _t9966 = (((double)(C_S_8G::sg_S__2c_P())) < 2.0); _t9966 ? _t9966 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 110.0)); })); _t9968 ? (bool)((({ bool _t9967 = (((double)(C_S_8G::sg_S__2c_P())) < 3.0); _t9967 ? _t9967 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 165.0)); }))) : _t9968; }); _t9970 ? (bool)((({ bool _t9969 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t9969 ? _t9969 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 235.0)); }))) : _t9970; }); _t9971 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t9971; }); _t9972 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) : _t9972; }); _t9973 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t9973; }); _t9974 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) : _t9974; }); _t9975 ? (bool)(C_S_8G::sm_S_7d(rt::touint(rt::arr_at(l_A__loc1_, ((double)(g::SV.C_S_8G__S__2d__21__5e_)))))) : _t9975; }); _t9976 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b_r__id)) : _t9976; });
    return false;
}
C_S_1_21_U* C_S_1_21_U::alloc_() {
    C_S_1_21_U* o = rt::make<C_S_1_21_U>();
    return o;
}
rt::Value C_S_1_21_U::mk_(rt::Value* a, int n) {
    C_S_1_21_U* o = alloc_();
    o->C_S_1_21_U::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_U::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_1_21_U::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_1_21_U::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_1_21_U::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_1_21_U::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_1_21_U::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_1_21_U::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_1_21_U::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_U::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_U__id)); return true;
    default: return false;
    }
}
bool C_S_1_21_U::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_U__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_21_U::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_22_A::ctor_() {
    RT_FN("S_3_22_A.S_3_22_A");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9977 = 859.0; this->f_S_6_21_Z = rt::touint_d(_v9977); _v9977; });
    ({ rt::Value _v9978 = rt::trv(rt::VS(g::LS[1939])); this->f_S_1i = rt::slot_string(_v9978); _v9978; });
    ({ rt::Value _v9979 = rt::VS(g::LS[1940]); this->f_S__5e__21__23_ = rt::slot_string(_v9979); _v9979; });
    ({ double _v9980 = 1e+100; this->f_S__23__21_m = _v9980; _v9980; });
    ({ double _v9981 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9981); _v9981; });
    ({ double _v9982 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9982); _v9982; });
    ({ double _v9983 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9983); _v9983; });
    ({ bool _v9984 = true; this->f_S__21__21_n = _v9984; _v9984; });
    ({ double _v9985 = 10.0; this->f_S__21__22_E = rt::touint_d(_v9985); _v9985; });
}
rt::Value C_S_3_22_A::m_S__40__22_() {
    RT_FN("S_3_22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1941]), C_S__26_c::sm_S_8_21_Z(C_S_3_22_A::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_3_22_A::g_S__2d_6() {
    RT_FN("S_3_22_A.S__2d_6_get");
    return ({ bool _t9987 = ({ bool _t9986 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 4.0); _t9986 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__3e__21_u__id)) : _t9986; }); _t9987 ? _t9987 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__27__22_H__id)); });
    return false;
}
bool C_S_3_22_A::g_S_9_21__25_() {
    RT_FN("S_3_22_A.S_9_21__25__get");
    return ({ bool _t9988 = C_S__26_c::sm_S_4_21_j(rt::VO(this)); _t9988 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t9988; });
    return false;
}
double C_S_3_22_A::sm_S__22__21__26_() {
    RT_FN("S_3_22_A.S__22__21__26_");
    return (0.6 * rt::m_pow(C_S_8G::sm_S__5e__22_C(g::SV.C_S_8_21_d__id, rt::toint_d(1.0), C_S_8G::dsm_S__5e__22_C_2()), 0.6));
    return 0.0;
}
double C_S_3_22_A::sm_S_9L() {
    RT_FN("S_3_22_A.S_9L");
    return (0.6 * rt::m_pow(C_S_8G::sm_S__5e__22_C(g::SV.C_S_8_21_d__id, rt::toint_d(1.0), C_S_8G::dsm_S__5e__22_C_2()), 0.6));
    return 0.0;
}
C_S_3_22_A* C_S_3_22_A::alloc_() {
    C_S_3_22_A* o = rt::make<C_S_3_22_A>();
    return o;
}
rt::Value C_S_3_22_A::mk_(rt::Value* a, int n) {
    C_S_3_22_A* o = alloc_();
    o->C_S_3_22_A::ctor_();
    return rt::VO(o);
}
bool C_S_3_22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_3_22_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_3_22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_3_22_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_3_22_A::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S_3_22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_22_A__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_3_22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S_4_22__3f_::ctor_() {
    RT_FN("S_4_22__3f_.S_4_22__3f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v9989 = 860.0; this->f_S_6_21_Z = rt::touint_d(_v9989); _v9989; });
    ({ rt::Value _v9990 = rt::trv(rt::VS(g::LS[1942])); this->f_S_1i = rt::slot_string(_v9990); _v9990; });
    ({ rt::Value _v9991 = rt::VS(g::LS[1943]); this->f_S__5e__21__23_ = rt::slot_string(_v9991); _v9991; });
    ({ double _v9992 = 1e+110; this->f_S__23__21_m = _v9992; _v9992; });
    ({ double _v9993 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v9993); _v9993; });
    ({ double _v9994 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v9994); _v9994; });
    ({ double _v9995 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v9995); _v9995; });
    ({ bool _v9996 = true; this->f_S__21__21_n = _v9996; _v9996; });
    ({ double _v9997 = 11.0; this->f_S__21__22_E = rt::touint_d(_v9997); _v9997; });
}
rt::Value C_S_4_22__3f_::m_S__40__22_() {
    RT_FN("S_4_22__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1944]), rt::dcallv(rt::V(C_S_4_22__3f_::sm_S__2c__21_G()), rt::N_toFixed, rt::V(1.0))));
    return rt::NUL;
}
bool C_S_4_22__3f_::g_S__2d_6() {
    RT_FN("S_4_22__3f_.S__2d_6_get");
    return ({ bool _t9999 = ({ bool _t9998 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 4.0); _t9998 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__3e__21_u__id)) : _t9998; }); _t9999 ? _t9999 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__27__22_H__id)); });
    return false;
}
bool C_S_4_22__3f_::g_S_9_21__25_() {
    RT_FN("S_4_22__3f_.S_9_21__25__get");
    return ({ bool _t10000 = C_S__26_c::sm_S_4_21_j(rt::VO(this)); _t10000 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t10000; });
    return false;
}
double C_S_4_22__3f_::sm_S__2c__21_G() {
    RT_FN("S_4_22__3f_.S__2c__21_G");
    return 0.7;
    return 0.0;
}
C_S_4_22__3f_* C_S_4_22__3f_::alloc_() {
    C_S_4_22__3f_* o = rt::make<C_S_4_22__3f_>();
    return o;
}
rt::Value C_S_4_22__3f_::mk_(rt::Value* a, int n) {
    C_S_4_22__3f_* o = alloc_();
    o->C_S_4_22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S_4_22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_22__3f_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_4_22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22__3f___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_4_22_A::ctor_() {
    RT_FN("S_4_22_A.S_4_22_A");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10001 = 610.0; this->f_S_6_21_Z = rt::touint_d(_v10001); _v10001; });
    ({ rt::Value _v10002 = rt::trv(rt::VS(g::LS[1945])); this->f_S_1i = rt::slot_string(_v10002); _v10002; });
    ({ rt::Value _v10003 = rt::VS(g::LS[1946]); this->f_S__5e__21__23_ = rt::slot_string(_v10003); _v10003; });
    ({ double _v10004 = 5e+129; this->f_S__3c_R = _v10004; _v10004; });
    ({ double _v10005 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v10005); _v10005; });
    ({ double _v10006 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10006); _v10006; });
    ({ double _v10007 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10007); _v10007; });
    ({ bool _v10008 = true; this->f_S__3c__60_ = _v10008; _v10008; });
    ({ double _v10009 = 8.0; this->f_S__21__22_E = rt::touint_d(_v10009); _v10009; });
}
rt::Value C_S_4_22_A::m_S__40__22_() {
    RT_FN("S_4_22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1947]), C_S__26_c::sm_S_6_21_T(C_S_4_22_A::sm_S__27__21_b(), 2.0, true)));
    return rt::NUL;
}
bool C_S_4_22_A::g_S__2d_6() {
    RT_FN("S_4_22_A.S__2d_6_get");
    return ({ bool _t10010 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 3.0); _t10010 ? _t10010 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__20__22_H__id)); });
    return false;
}
bool C_S_4_22_A::g_S_9_21__25_() {
    RT_FN("S_4_22_A.S_9_21__25__get");
    return C_S__26_c::sm_S_4_21_j(rt::VO(this));
    return false;
}
double C_S_4_22_A::sm_S__27__21_b() {
    RT_FN("S_4_22_A.S__27__21_b");
    return (1.5 * rt::m_pow(C_S__23__21__21_::sm_S__40__21__3f_(), 0.75));
    return 0.0;
}
C_S_4_22_A* C_S_4_22_A::alloc_() {
    C_S_4_22_A* o = rt::make<C_S_4_22_A>();
    return o;
}
rt::Value C_S_4_22_A::mk_(rt::Value* a, int n) {
    C_S_4_22_A* o = alloc_();
    o->C_S_4_22_A::ctor_();
    return rt::VO(o);
}
bool C_S_4_22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_22_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_22_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_22_A::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_4_22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22_A__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_4q::ctor_() {
    RT_FN("S_4q.S_4q");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10011 = 603.0; this->f_S_6_21_Z = rt::touint_d(_v10011); _v10011; });
    ({ rt::Value _v10012 = rt::trv(rt::VS(g::LS[1948])); this->f_S_1i = rt::slot_string(_v10012); _v10012; });
    ({ rt::Value _v10013 = rt::VS(g::LS[1949]); this->f_S__5e__21__23_ = rt::slot_string(_v10013); _v10013; });
    ({ double _v10014 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v10014); _v10014; });
    ({ double _v10015 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10015); _v10015; });
    ({ double _v10016 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10016); _v10016; });
}
rt::Value C_S_4q::m_S__40__22_() {
    RT_FN("S_4q.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1950]), C_S__26_c::sm_S_6_21_T(C_S_4q::sm_S_2_21__40_(), 2.0, true)));
    return rt::NUL;
}
int32_t C_S_4q::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_4q::dm_S_75_2() { return false; }
rt::Value C_S_4q::dm_S_75_3() { return rt::NUL; }
double C_S_4q::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S_4q.S_75");
    (l_A__loc5_ = NAN);
    if (((((double)(l_param1)) == 9.0) || (((double)(l_param1)) == 10.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+36 : 5e+17);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S_4q::g_S__2d_6() {
    RT_FN("S_4q.S__2d_6_get");
    return ({ bool _t10017 = C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[1951]))); _t10017 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t10017; });
    return false;
}
double C_S_4q::sm_S_2_21__40_() {
    RT_FN("S_4q.S_2_21__40_");
    return (0.7 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(79.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.85));
    return 0.0;
}
C_S_4q* C_S_4q::alloc_() {
    C_S_4q* o = rt::make<C_S_4q>();
    return o;
}
rt::Value C_S_4q::mk_(rt::Value* a, int n) {
    C_S_4q* o = alloc_();
    o->C_S_4q::ctor_();
    return rt::VO(o);
}
bool C_S_4q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_4q::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_4q::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_4q::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4q::smeth_(int id) {
    switch (id) {
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S_4q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4q__id)); return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S_5_22_C::ctor_() {
    RT_FN("S_5_22_C.S_5_22_C");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10018 = 612.0; this->f_S_6_21_Z = rt::touint_d(_v10018); _v10018; });
    ({ rt::Value _v10019 = rt::trv(rt::VS(g::LS[1952])); this->f_S_1i = rt::slot_string(_v10019); _v10019; });
    ({ rt::Value _v10020 = rt::VS(g::LS[1953]); this->f_S__5e__21__23_ = rt::slot_string(_v10020); _v10020; });
    ({ double _v10021 = 5e+111; this->f_S__3c_R = _v10021; _v10021; });
    ({ double _v10022 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v10022); _v10022; });
    ({ double _v10023 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10023); _v10023; });
    ({ double _v10024 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10024); _v10024; });
    ({ bool _v10025 = true; this->f_S__3c__60_ = _v10025; _v10025; });
    ({ double _v10026 = 6.0; this->f_S__21__22_E = rt::touint_d(_v10026); _v10026; });
}
rt::Value C_S_5_22_C::m_S__40__22_() {
    RT_FN("S_5_22_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1954]), C_S__26_c::sm_S_8_21_Z(C_S_5_22_C::sm_S_1_3d_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_5_22_C::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_5_22_C::g_S__2d_6() {
    RT_FN("S_5_22_C.S__2d_6_get");
    return ({ bool _t10027 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 2.0); _t10027 ? _t10027 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__23__22_H__id)); });
    return false;
}
bool C_S_5_22_C::g_S_9_21__25_() {
    RT_FN("S_5_22_C.S_9_21__25__get");
    return C_S__26_c::sm_S_4_21_j(rt::VO(this));
    return false;
}
double C_S_5_22_C::sm_S_1_3d_() {
    RT_FN("S_5_22_C.S_1_3d_");
    return rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.5);
    return 0.0;
}
double C_S_5_22_C::sm_S__23__21_Y() {
    RT_FN("S_5_22_C.S__23__21_Y");
    return (0.8 * rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.4));
    return 0.0;
}
C_S_5_22_C* C_S_5_22_C::alloc_() {
    C_S_5_22_C* o = rt::make<C_S_5_22_C>();
    return o;
}
rt::Value C_S_5_22_C::mk_(rt::Value* a, int n) {
    C_S_5_22_C* o = alloc_();
    o->C_S_5_22_C::ctor_();
    return rt::VO(o);
}
bool C_S_5_22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_22_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_22_C::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_22_C::smeth_(int id) {
    switch (id) {
    case NM_S_1_3d_: return true;
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S_5_22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22_C__id)); return true;
    case NM_S_1_3d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22_C__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_1_3d_: out = rt::V(sm_S_1_3d_()); return true;
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S_6_22_D::ctor_() {
    RT_FN("S_6_22_D.S_6_22_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10028 = 595.0; this->f_S_6_21_Z = rt::touint_d(_v10028); _v10028; });
    ({ rt::Value _v10029 = rt::trv(rt::VS(g::LS[1955])); this->f_S_1i = rt::slot_string(_v10029); _v10029; });
    ({ rt::Value _v10030 = rt::VS(g::LS[1956]); this->f_S__5e__21__23_ = rt::slot_string(_v10030); _v10030; });
    ({ double _v10031 = 5e+123; this->f_S__3c_R = _v10031; _v10031; });
    ({ double _v10032 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v10032); _v10032; });
    ({ double _v10033 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10033); _v10033; });
    ({ double _v10034 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10034); _v10034; });
    ({ bool _v10035 = true; this->f_S__3c__60_ = _v10035; _v10035; });
    ({ double _v10036 = 7.0; this->f_S__21__22_E = rt::touint_d(_v10036); _v10036; });
}
rt::Value C_S_6_22_D::m_S__40__22_() {
    RT_FN("S_6_22_D.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1957]), C_S__26_c::sm_S_8_21_Z(C_S_6_22_D::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_6_22_D::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_6_22_D::g_S__2d_6() {
    RT_FN("S_6_22_D.S__2d_6_get");
    return ({ bool _t10037 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 3.0); _t10037 ? _t10037 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__20__22_H__id)); });
    return false;
}
bool C_S_6_22_D::g_S_9_21__25_() {
    RT_FN("S_6_22_D.S_9_21__25__get");
    return C_S__26_c::sm_S_4_21_j(rt::VO(this));
    return false;
}
double C_S_6_22_D::sm_S__60_z() {
    RT_FN("S_6_22_D.S__60_z");
    return (15.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2()))), 2.5));
    return 0.0;
}
double C_S_6_22_D::sm_S__3f__21__3c_() {
    RT_FN("S_6_22_D.S__3f__21__3c_");
    return (0.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2()))), 1.5));
    return 0.0;
}
C_S_6_22_D* C_S_6_22_D::alloc_() {
    C_S_6_22_D* o = rt::make<C_S_6_22_D>();
    return o;
}
rt::Value C_S_6_22_D::mk_(rt::Value* a, int n) {
    C_S_6_22_D* o = alloc_();
    o->C_S_6_22_D::ctor_();
    return rt::VO(o);
}
bool C_S_6_22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_22_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_22_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_22_D::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S_6_22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22_D__id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22_D__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S_7_22__40_::ctor_() {
    RT_FN("S_7_22__40_.S_7_22__40_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10038 = 609.0; this->f_S_6_21_Z = rt::touint_d(_v10038); _v10038; });
    ({ rt::Value _v10039 = rt::trv(rt::VS(g::LS[1958])); this->f_S_1i = rt::slot_string(_v10039); _v10039; });
    ({ rt::Value _v10040 = rt::VS(g::LS[1959]); this->f_S__5e__21__23_ = rt::slot_string(_v10040); _v10040; });
    ({ double _v10041 = 5e+87; this->f_S__3c_R = _v10041; _v10041; });
    ({ double _v10042 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v10042); _v10042; });
    ({ double _v10043 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10043); _v10043; });
    ({ double _v10044 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10044); _v10044; });
    ({ bool _v10045 = true; this->f_S__3c__60_ = _v10045; _v10045; });
    ({ double _v10046 = 3.0; this->f_S__21__22_E = rt::touint_d(_v10046); _v10046; });
}
rt::Value C_S_7_22__40_::m_S__40__22_() {
    RT_FN("S_7_22__40_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[1960]), C_S__26_c::sm_S_8_21_Z(C_S_7_22__40_::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[1961]), C_S__26_c::sm_S_8_21_Z(C_S_7_22__40_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
bool C_S_7_22__40_::g_S__2d_6() {
    RT_FN("S_7_22__40_.S__2d_6_get");
    return ({ bool _t10047 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 1.0); _t10047 ? _t10047 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__2d__22_H__id)); });
    return false;
}
bool C_S_7_22__40_::g_S_9_21__25_() {
    RT_FN("S_7_22__40_.S_9_21__25__get");
    return C_S__26_c::sm_S_4_21_j(rt::VO(this));
    return false;
}
double C_S_7_22__40_::sm_S_2_21_W() {
    RT_FN("S_7_22__40_.S_2_21_W");
    return (0.7 * rt::m_pow((C_S__26_c::sm_S_0_23_(rt::toint_d(0.0), C_S__26_c::dsm_S_0_23__1()) + C_S__26_c::sm_S_0_23_(rt::toint_d(3.0), C_S__26_c::dsm_S_0_23__1())), 0.7));
    return 0.0;
}
double C_S_7_22__40_::sm_S_9L() {
    RT_FN("S_7_22__40_.S_9L");
    return (75.0 + (1.25 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__22__21_B(rt::toint_d(79.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()))), 1.25)));
    return 0.0;
}
C_S_7_22__40_* C_S_7_22__40_::alloc_() {
    C_S_7_22__40_* o = rt::make<C_S_7_22__40_>();
    return o;
}
rt::Value C_S_7_22__40_::mk_(rt::Value* a, int n) {
    C_S_7_22__40_* o = alloc_();
    o->C_S_7_22__40_::ctor_();
    return rt::VO(o);
}
bool C_S_7_22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7_22__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7_22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7_22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7_22__40_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S_7_22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22__40___id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22__40___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__3d__22_D::ctor_() {
    RT_FN("S__3d__22_D.S__3d__22_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10048 = 611.0; this->f_S_6_21_Z = rt::touint_d(_v10048); _v10048; });
    ({ rt::Value _v10049 = rt::trv(rt::VS(g::LS[1962])); this->f_S_1i = rt::slot_string(_v10049); _v10049; });
    ({ rt::Value _v10050 = rt::VS(g::LS[1963]); this->f_S__5e__21__23_ = rt::slot_string(_v10050); _v10050; });
    ({ double _v10051 = 5e+81; this->f_S__3c_R = _v10051; _v10051; });
    ({ double _v10052 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v10052); _v10052; });
    ({ double _v10053 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10053); _v10053; });
    ({ double _v10054 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10054); _v10054; });
    ({ bool _v10055 = true; this->f_S__3c__60_ = _v10055; _v10055; });
    ({ double _v10056 = 2.0; this->f_S__21__22_E = rt::touint_d(_v10056); _v10056; });
}
rt::Value C_S__3d__22_D::m_S__40__22_() {
    RT_FN("S__3d__22_D.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[1964]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21__60___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__3d__22_D::sm_S__26_s(), 2.0, true)), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[1965]))));
    return rt::NUL;
}
bool C_S__3d__22_D::g_S__2d_6() {
    RT_FN("S__3d__22_D.S__2d_6_get");
    return ({ bool _t10057 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 1.0); _t10057 ? _t10057 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__2d__22_H__id)); });
    return false;
}
bool C_S__3d__22_D::g_S_9_21__25_() {
    RT_FN("S__3d__22_D.S_9_21__25__get");
    return C_S__26_c::sm_S_4_21_j(rt::VO(this));
    return false;
}
double C_S__3d__22_D::sm_S__26_s() {
    RT_FN("S__3d__22_D.S__26_s");
    return (((double)(({ rt::Value _o10058 = C_S_8G::sm_S_9_3d_(g::SV.C_S__3e__21__60___id); C_S__60__21__3b_* _p10059 = rt::as_ptr<C_S__60__21__3b_>(_o10058); _p10059 ? _p10059->f_S_1_21_c : rt::touint(rt::dget(_o10058, NM_S_1_21_c)); }))) * rt::m_pow(rt::m_log((1.0 + C_S__23__21__21_::sm_S__2c_d())), 3.0));
    return 0.0;
}
C_S__3d__22_D* C_S__3d__22_D::alloc_() {
    C_S__3d__22_D* o = rt::make<C_S__3d__22_D>();
    return o;
}
rt::Value C_S__3d__22_D::mk_(rt::Value* a, int n) {
    C_S__3d__22_D* o = alloc_();
    o->C_S__3d__22_D::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3d__22_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3d__22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3d__22_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3d__22_D::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3d__22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_D__id)); return true;
    case NM_S_6_21_c: out = rt::V(g::SV.C_S__3d__22_D__S_6_21_c); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_D__id = rt::touint(v); return true;
    case NM_S_6_21_c: g::SV.C_S__3d__22_D__S_6_21_c = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3d__22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__40__21__20_::ctor_() {
    RT_FN("S__40__21__20_.S__40__21__20_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10060 = 605.0; this->f_S_6_21_Z = rt::touint_d(_v10060); _v10060; });
    ({ rt::Value _v10061 = rt::trv(rt::VS(g::LS[1966])); this->f_S_1i = rt::slot_string(_v10061); _v10061; });
    ({ rt::Value _v10062 = rt::VS(g::LS[1967]); this->f_S__5e__21__23_ = rt::slot_string(_v10062); _v10062; });
    ({ double _v10063 = 1e+64; this->f_S__3c_R = _v10063; _v10063; });
    ({ bool _v10064 = true; this->f_S__25__21__3e_ = _v10064; _v10064; });
    ({ bool _v10065 = true; this->f_S__3f_T = _v10065; _v10065; });
    ({ double _v10066 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v10066); _v10066; });
    ({ bool _v10067 = false; this->f_S_3e = _v10067; _v10067; });
}
rt::Value C_S__40__21__20_::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__40__21__20_.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[1968]))));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 44.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1969]), C_S__26_c::sm_S__23__21_R(rt::m_max2(0.0, (7200.0 - C_S__26_c::sm_S__20__21__3b_(rt::toint_d(81.0)))), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))))));
    } else {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1915]), rt::V(44.0))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__40__21__20_::m_S__3d__21__26_() {
    RT_FN("S__40__21__20_.S__3d__21__26_");
    (void)(this->C_S__60_6::m_S__3d__21__26_());
    (void)(({ rt::Value _o10068 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p10069 = rt::as_ptr<C_S__20_g>(_o10068); _p10069 ? _p10069->m_S__26__2b_(rt::toint_d(934.0), rt::toint_d(0.0)) : rt::dcallv(_o10068, NM_S__26__2b_, rt::V(934.0), rt::V(0.0)); }));
    return rt::NUL;
}
rt::Value C_S__40__21__20_::m_S_6r() {
    RT_FN("S__40__21__20_.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    ({ rt::Value _v10072 = ({ rt::Value _v10071 = ({ rt::Value _v10070 = rt::V(0.0); rt::idx_set(g::SV.C_S_8G__S__40_w, rt::V(81.0), _v10070); _v10070; }); rt::idx_set(g::SV.C_S_8G__S__3d_y, rt::V(81.0), _v10071); _v10071; }); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(81.0), _v10072); });
    return rt::NUL;
}
int32_t C_S__40__21__20_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__40__21__20_::dm_S_75_2() { return false; }
rt::Value C_S__40__21__20_::dm_S_75_3() { return rt::NUL; }
double C_S__40__21__20_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__40__21__20_.S_75");
    if (C_S__26_c::sm_S__3e__25_(l_param1)) {
        return 1000000000000.0;
    }
    return 0.0;
    return 0.0;
}
bool C_S__40__21__20_::g_S__2d_6() {
    RT_FN("S__40__21__20_.S__2d_6_get");
    return ({ bool _t10073 = C_S_8G::sm_S_7d(g::SV.C_S__22__5b___id); _t10073 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 42.0)) : _t10073; });
    return false;
}
bool C_S__40__21__20_::g_S_9_21__25_() {
    RT_FN("S__40__21__20_.S_9_21__25__get");
    return ({ bool _t10074 = (((double)(C_S_8G::sg_S_8_21_H())) >= 44.0); _t10074 ? (bool)((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(81.0)) >= 7200.0)) : _t10074; });
    return false;
}
bool C_S__40__21__20_::g_S__26_8() {
    RT_FN("S__40__21__20_.S__26_8_get");
    return false;
    return false;
}
C_S__40__21__20_* C_S__40__21__20_::alloc_() {
    C_S__40__21__20_* o = rt::make<C_S__40__21__20_>();
    return o;
}
rt::Value C_S__40__21__20_::mk_(rt::Value* a, int n) {
    C_S__40__21__20_* o = alloc_();
    o->C_S__40__21__20_::ctor_();
    return rt::VO(o);
}
bool C_S__40__21__20_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__40__21__20_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__40__21__20_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3d__21__26_: out = m_S__3d__21__26_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__40__21__20_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__40__21__20_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__40__21__20_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__40__21__20_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3d__21__26_: return true;
    case NM_S_6r: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__40__21__20_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21__20_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21__20___id)); return true;
    default: return false;
    }
}
bool C_S__40__21__20_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21__20___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__21__20_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__22__3c_::ctor_() {
    RT_FN("S__5e__22__3c_.S__5e__22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10075 = 597.0; this->f_S_6_21_Z = rt::touint_d(_v10075); _v10075; });
    ({ rt::Value _v10076 = rt::trv(rt::VS(g::LS[1970])); this->f_S_1i = rt::slot_string(_v10076); _v10076; });
    ({ rt::Value _v10077 = rt::VS(g::LS[1971]); this->f_S__5e__21__23_ = rt::slot_string(_v10077); _v10077; });
    ({ double _v10078 = 5e+135; this->f_S__3c_R = _v10078; _v10078; });
    ({ double _v10079 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v10079); _v10079; });
    ({ double _v10080 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10080); _v10080; });
    ({ double _v10081 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10081); _v10081; });
    ({ bool _v10082 = true; this->f_S__3c__60_ = _v10082; _v10082; });
    ({ double _v10083 = 9.0; this->f_S__21__22_E = rt::touint_d(_v10083); _v10083; });
}
rt::Value C_S__5e__22__3c_::m_S__40__22_() {
    RT_FN("S__5e__22__3c_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[1972]), C_S__26_c::sm_S_6_21_T(C_S__5e__22__3c_::sm_S__27__21_b(), 2.0, true)), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[1973]), C_S__26_c::sm_S_6_21_T(C_S__5e__22__3c_::sm_S__2b__2b_(), 2.0, true))));
    return rt::NUL;
}
bool C_S__5e__22__3c_::g_S__2d_6() {
    RT_FN("S__5e__22__3c_.S__2d_6_get");
    return ({ bool _t10084 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1910])))) >= 3.0); _t10084 ? _t10084 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__20__22_H__id)); });
    return false;
}
bool C_S__5e__22__3c_::g_S_9_21__25_() {
    RT_FN("S__5e__22__3c_.S_9_21__25__get");
    return C_S__26_c::sm_S_4_21_j(rt::VO(this));
    return false;
}
double C_S__5e__22__3c_::sm_S__27__21_b() {
    RT_FN("S__5e__22__3c_.S__27__21_b");
    return (C_S_8G::sm_S__3c__21_B(g::SV.C_S_5_21_3__id) ? (250.0 * rt::m_pow((((double)(({ rt::Value _o10085 = C_S_8G::sm_S__23_N(g::SV.C_S_5_21_3__id); C_S_84* _p10086 = rt::as_ptr<C_S_84>(_o10085); _p10086 ? _p10086->g_S__60_r() : rt::touint(rt::dget(_o10085, NM_S__60_r)); }))) + 1.0), 2.0)) : 0.0);
    return 0.0;
}
double C_S__5e__22__3c_::sm_S__2b__2b_() {
    RT_FN("S__5e__22__3c_.S__2b__2b_");
    return 100.0;
    return 0.0;
}
C_S__5e__22__3c_* C_S__5e__22__3c_::alloc_() {
    C_S__5e__22__3c_* o = rt::make<C_S__5e__22__3c_>();
    return o;
}
rt::Value C_S__5e__22__3c_::mk_(rt::Value* a, int n) {
    C_S__5e__22__3c_* o = alloc_();
    o->C_S__5e__22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5e__22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5e__22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5e__22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5e__22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__5e__22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22__3c___id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__5e__27_::ctor_() {
    RT_FN("S__5e__27_.S__5e__27_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10087 = 607.0; this->f_S_6_21_Z = rt::touint_d(_v10087); _v10087; });
    ({ rt::Value _v10088 = rt::trv(rt::VS(g::LS[1974])); this->f_S_1i = rt::slot_string(_v10088); _v10088; });
    ({ rt::Value _v10089 = rt::VS(g::LS[1975]); this->f_S__5e__21__23_ = rt::slot_string(_v10089); _v10089; });
    ({ double _v10090 = 1e+76; this->f_S__3c_R = _v10090; _v10090; });
    ({ bool _v10091 = true; this->f_S__25__21__3e_ = _v10091; _v10091; });
    ({ bool _v10092 = true; this->f_S__3f_T = _v10092; _v10092; });
    ({ double _v10093 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v10093); _v10093; });
    ({ bool _v10094 = false; this->f_S_3e = _v10094; _v10094; });
}
rt::Value C_S__5e__27_::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5e__27_.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[1976]))));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 48.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1906]), C_S__26_c::sm_S__23__21_R(rt::m_max2(0.0, (7200.0 - C_S__26_c::sm_S__20__21__3b_(rt::toint_d(81.0)))), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[1977]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__5e__27___S__5e__21_s, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1915]), rt::V(48.0))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__5e__27_::m_S__3d__21__26_() {
    RT_FN("S__5e__27_.S__3d__21__26_");
    (void)(this->C_S__60_6::m_S__3d__21__26_());
    (void)(({ rt::Value _o10095 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p10096 = rt::as_ptr<C_S__20_g>(_o10095); _p10096 ? _p10096->m_S__26__2b_(rt::toint_d(936.0), rt::toint_d(0.0)) : rt::dcallv(_o10095, NM_S__26__2b_, rt::V(936.0), rt::V(0.0)); }));
    return rt::NUL;
}
rt::Value C_S__5e__27_::m_S_6r() {
    RT_FN("S__5e__27_.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o10097 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p10098 = rt::as_ptr<C_S_8G>(_o10097); _p10098 ? _p10098->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__5b_r__id)) : rt::dcallv(_o10097, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__5b_r__id)); }));
    (void)(({ rt::Value _o10099 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p10100 = rt::as_ptr<C_S__20_g>(_o10099); _p10100 ? _p10100->m_S__26__2b_(rt::toint_d(931.0), rt::toint_d(0.0)) : rt::dcallv(_o10099, NM_S__26__2b_, rt::V(931.0), rt::V(0.0)); }));
    return rt::NUL;
}
int32_t C_S__5e__27_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__5e__27_::dm_S_75_2() { return false; }
rt::Value C_S__5e__27_::dm_S_75_3() { return rt::NUL; }
double C_S__5e__27_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__5e__27_.S_75");
    if (C_S__26_c::sm_S__3e__25_(l_param1)) {
        return 1e+18;
    }
    return 0.0;
    return 0.0;
}
bool C_S__5e__27_::g_S__2d_6() {
    RT_FN("S__5e__27_.S__2d_6_get");
    return ({ bool _t10101 = C_S_8G::sm_S_7d(g::SV.C_S__3c_G__id); _t10101 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 42.0)) : _t10101; });
    return false;
}
bool C_S__5e__27_::g_S_9_21__25_() {
    RT_FN("S__5e__27_.S_9_21__25__get");
    return ({ bool _t10103 = ({ bool _t10102 = (((double)(C_S_8G::sg_S_8_21_H())) >= 48.0); _t10102 ? (bool)((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(81.0)) >= 7200.0)) : _t10102; }); _t10103 ? (bool)((C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()) >= g::SV.C_S__5e__27___S__5e__21_s)) : _t10103; });
    return false;
}
bool C_S__5e__27_::g_S__26_8() {
    RT_FN("S__5e__27_.S__26_8_get");
    return false;
    return false;
}
C_S__5e__27_* C_S__5e__27_::alloc_() {
    C_S__5e__27_* o = rt::make<C_S__5e__27_>();
    return o;
}
rt::Value C_S__5e__27_::mk_(rt::Value* a, int n) {
    C_S__5e__27_* o = alloc_();
    o->C_S__5e__27_::ctor_();
    return rt::VO(o);
}
bool C_S__5e__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5e__27_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5e__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3d__21__26_: out = m_S__3d__21__26_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__5e__27_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__5e__27_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__5e__27_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5e__27_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3d__21__26_: return true;
    case NM_S_6r: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5e__27_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__27___id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__5e__27___S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__5e__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__27___id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__5e__27___S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__5e__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__21_u::ctor_() {
    RT_FN("S__60__21_u.S__60__21_u");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10104 = 855.0; this->f_S_6_21_Z = rt::touint_d(_v10104); _v10104; });
    ({ rt::Value _v10105 = rt::trv(rt::VS(g::LS[1978])); this->f_S_1i = rt::slot_string(_v10105); _v10105; });
    ({ rt::Value _v10106 = rt::VS(g::LS[1979]); this->f_S__5e__21__23_ = rt::slot_string(_v10106); _v10106; });
    ({ rt::Value _v10107 = rt::VS(g::LS[1910]); this->f_S__3f__21__3d_ = rt::slot_string(_v10107); _v10107; });
    ({ rt::Value _v10108 = rt::VS(g::LS[1910]); this->f_S__40_1 = rt::slot_string(_v10108); _v10108; });
    ({ double _v10109 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v10109); _v10109; });
    ({ double _v10110 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10110); _v10110; });
    ({ double _v10111 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10111); _v10111; });
    ({ bool _v10112 = true; this->f_S__21__21_n = _v10112; _v10112; });
}
rt::Value C_S__60__21_u::m_S__21_E() {
    RT_FN("S__60__21_u.S__21_E");
    if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) {
        return rt::slot_string(rt::VS(g::LS[1980]));
    }
    if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) {
        return rt::slot_string(rt::VS(g::LS[1981]));
    }
    return rt::slot_string(rt::VS(g::LS[1982]));
    return rt::NUL;
}
int32_t C_S__60__21_u::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__60__21_u::dm_S_75_2() { return false; }
rt::Value C_S__60__21_u::dm_S_75_3() { return rt::NUL; }
double C_S__60__21_u::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__60__21_u.S_75");
    if (((((double)(l_param1)) == 9.0) || (((double)(l_param1)) == 10.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+45 : 1e+26);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__60__21_u::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__60__21_u.S__40__22_");
    (l_A__loc1_ = rt::slot_string(((((double)(g::SV.C_S_8G__S__23_3)) == 12.0) ? rt::add(rt::trv(rt::VS(g::LS[1928])), rt::VS(g::LS[8])) : rt::VS(g::LS[113]))));
    if ((!(((double)(g::SV.C_S_8G__S_9_21_m)) == 0.0))) {
        if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[1983]), C_S__26_c::sm_S_8_21_Z(C_S__60__21_u::sm_S__27__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))));
        } else if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[1984]), C_S__26_c::sm_S_8_21_Z(C_S__60__21_u::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))));
        } else if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[1985]), C_S__26_c::sm_S_8_21_Z(C_S__60__21_u::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))));
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1986]), ((rt::mod(rt::m_floor(rt::m_log((1.0 + C_S__26_c::sm_S_0F(C_S__26_c::dsm_S_0F_0())))), 2.0) == 1.0) ? rt::trv(rt::VS(g::LS[1987])) : rt::trv(rt::VS(g::LS[1988]))))))));
        }
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
bool C_S__60__21_u::g_S__2d_6() {
    RT_FN("S__60__21_u.S__2d_6_get");
    return ({ bool _t10115 = ({ bool _t10114 = ({ bool _t10113 = this->C_S__60_6::g_S__2d_6(); _t10113 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 12.0)) : _t10113; }); _t10114 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 115.0)) : _t10114; }); _t10115 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__3e__21_u__id)) : _t10115; });
    return false;
}
double C_S__60__21_u::sm_S__27__21_b() {
    RT_FN("S__60__21_u.S__27__21_b");
    return (0.7 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(48.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7));
    return 0.0;
}
double C_S__60__21_u::sm_S__3f__21__3c_() {
    RT_FN("S__60__21_u.S__3f__21__3c_");
    return (8.0 * rt::m_pow(C_S__26_c::sm_S__25__21_6(false, true), 0.8));
    return 0.0;
}
double C_S__60__21_u::sm_S__26_s() {
    RT_FN("S__60__21_u.S__26_s");
    return (((((rt::mod(rt::m_floor(rt::m_log((1.0 + C_S__26_c::sm_S_0F(C_S__26_c::dsm_S_0F_0())))), 2.0) == 1.0) ? 3.0 : 1.0)) * 2.0) * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.3));
    return 0.0;
}
C_S__60__21_u* C_S__60__21_u::alloc_() {
    C_S__60__21_u* o = rt::make<C_S__60__21_u>();
    return o;
}
rt::Value C_S__60__21_u::mk_(rt::Value* a, int n) {
    C_S__60__21_u* o = alloc_();
    o->C_S__60__21_u::ctor_();
    return rt::VO(o);
}
bool C_S__60__21_u::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__21_E: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__60__21_u::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__60__21_u::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21_E: out = m_S__21_E(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__60__21_u::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__60__21_u::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__60__21_u::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__60__21_u::dmeth(int id) {
    switch (id) {
    case NM_S__21_E: return true;
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__60__21_u::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    case NM_S__3f__21__3c_: return true;
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__60__21_u::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21_u__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__21_u::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21_u__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__21_u::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__26_M::ctor_() {
    RT_FN("S__26_M.S__26_M");
    (void)(rt::NUL);
}
rt::Value C_S__26_M::sm_S__21_f() {
    RT_FN("S__26_M.S__21_f");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::dcallv(rt::V((4.0)), rt::N_toString), rt::VS(g::LS[155])), rt::dcallv(rt::V((3.0)), rt::N_toString)), rt::VS(g::LS[155])), rt::dcallv(rt::V((15.0)), rt::N_toString)));
    return rt::NUL;
}
rt::Value C_S__26_M::sm_S__27__21_U() {
    RT_FN("S__26_M.S__27__21_U");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::dcallv(rt::V((3.0)), rt::N_toString), rt::VS(g::LS[155])), rt::dcallv(rt::V((15.0)), rt::N_toString)), rt::VS(g::LS[155])), rt::dcallv(rt::V((0.0)), rt::N_toString)));
    return rt::NUL;
}
rt::Value C_S__26_M::sm_S_85() {
    RT_FN("S__26_M.S_85");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::dcallv(rt::V((4.0)), rt::N_toString), rt::VS(g::LS[155])), rt::dcallv(rt::V((3.0)), rt::N_toString)), rt::VS(g::LS[155])), rt::dcallv(rt::V((15.0)), rt::N_toString)));
    return rt::NUL;
}
uint32_t C_S__26_M::sm_S__27__21_6(bool p0) {
    bool l_param1 = p0;
    RT_FN("S__26_M.S__27__21_6");
    return rt::touint_d((4031500.0 + ((l_param1 ? 0.0 : 0.0))));
    return 0u;
}
C_S__26_M* C_S__26_M::alloc_() {
    C_S__26_M* o = rt::make<C_S__26_M>();
    return o;
}
rt::Value C_S__26_M::mk_(rt::Value* a, int n) {
    C_S__26_M* o = alloc_();
    o->C_S__26_M::ctor_();
    return rt::VO(o);
}
bool C_S__26_M::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__26_M::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__26_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__26_M::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__26_M::smeth_(int id) {
    switch (id) {
    case NM_S__21_f: return true;
    case NM_S__27__21_U: return true;
    case NM_S_85: return true;
    case NM_S__27__21_6: return true;
    default: return false;
    }
}
bool C_S__26_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3c__21_W: out = rt::V((double)(g::SV.C_S__26_M__S__3c__21_W)); return true;
    case NM_S__2d__2d_: out = rt::V((double)(g::SV.C_S__26_M__S__2d__2d_)); return true;
    case NM_S__40__5e_: out = rt::V((double)(g::SV.C_S__26_M__S__40__5e_)); return true;
    case NM_S__21__5f_: out = rt::V((double)(g::SV.C_S__26_M__S__21__5f_)); return true;
    case NM_S__21_f: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__21_U: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_85: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__21_6: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__3c__21_W: g::SV.C_S__26_M__S__3c__21_W = rt::toint(v); return true;
    case NM_S__2d__2d_: g::SV.C_S__26_M__S__2d__2d_ = rt::toint(v); return true;
    case NM_S__40__5e_: g::SV.C_S__26_M__S__40__5e_ = rt::toint(v); return true;
    case NM_S__21__5f_: g::SV.C_S__26_M__S__21__5f_ = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S__26_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21_f: out = sm_S__21_f(); return true;
    case NM_S__27__21_U: out = sm_S__27__21_U(); return true;
    case NM_S_85: out = sm_S_85(); return true;
    case NM_S__27__21_6: out = rt::V((double)(sm_S__27__21_6(rt::arg<bool>(a, n, 0, false)))); return true;
    default: return false;
    }
}
void C_S__2d_E::ctor_() {
    RT_FN("S__2d_E.S__2d_E");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10116 = 388.0; this->f_S_6_21_Z = rt::touint_d(_v10116); _v10116; });
    ({ rt::Value _v10117 = rt::trv(rt::VS(g::LS[1989])); this->f_S_1i = rt::slot_string(_v10117); _v10117; });
    ({ rt::Value _v10118 = rt::VS(g::LS[1990]); this->f_S__5e__21__23_ = rt::slot_string(_v10118); _v10118; });
    ({ rt::Value _v10119 = rt::trv(rt::VS(g::LS[1991])); this->f_S_7_23_ = rt::slot_string(_v10119); _v10119; });
    ({ double _v10120 = 1e+16; this->f_S__3e__3d_ = _v10120; _v10120; });
    ({ double _v10121 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10121); _v10121; });
    ({ bool _v10122 = false; this->f_S_3e = _v10122; _v10122; });
}
rt::Value C_S__2d_E::m_S_6r() {
    RT_FN("S__2d_E.S_6r");
    (void)(({ rt::Value _o10123 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p10124 = rt::as_ptr<C_S_8G>(_o10123); _p10124 ? _p10124->m_S_0_21__5f_(rt::toint_d(3.0)) : rt::dcallv(_o10123, NM_S_0_21__5f_, rt::V(3.0)); }));
    return rt::NUL;
}
bool C_S__2d_E::g_S__2d_6() {
    RT_FN("S__2d_E.S__2d_6_get");
    return ({ bool _t10127 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0); _t10127 ? (bool)((({ bool _t10126 = ({ bool _t10125 = C_S_8G::sm_S__3c_P(g::SV.C_S_3N__id); _t10125 ? _t10125 : (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21__3b___id)); }); _t10126 ? _t10126 : (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id)); }))) : _t10127; });
    return false;
}
C_S__2d_E* C_S__2d_E::alloc_() {
    C_S__2d_E* o = rt::make<C_S__2d_E>();
    return o;
}
rt::Value C_S__2d_E::mk_(rt::Value* a, int n) {
    C_S__2d_E* o = alloc_();
    o->C_S__2d_E::ctor_();
    return rt::VO(o);
}
bool C_S__2d_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d_E::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d_E::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d_E__id)); return true;
    case NM_ids: out = g::SV.C_S__2d_E__ids; return true;
    default: return false;
    }
}
bool C_S__2d_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d_E__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2d_E__ids = v; return true;
    default: return false;
    }
}
bool C_S__2d_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26_c::ctor_() {
    RT_FN("S__26_c.S__26_c");
    (void)(rt::NUL);
}
rt::Value C_S__26_c::sm_S__5b__21_C() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S__26_c.S__5b__21_C");
    (g::SV.C_S__26_c__S_4_22_8 = rt::arr_lit({rt::V((double)(g::SV.C_S_21__id)), rt::V((double)(g::SV.C_S__40_D__id)), rt::V((double)(g::SV.C_S__2b_P__id)), rt::V((double)(g::SV.C_S__22__5f___id)), rt::V((double)(g::SV.C_S__27__21_E__id)), rt::V((double)(g::SV.C_S__3d__21__27___id)), rt::V((double)(g::SV.C_S_6_21_1__id)), rt::V((double)(g::SV.C_S__40__21_T__id)), rt::V((double)(g::SV.C_S__3d_J__id)), rt::V((double)(g::SV.C_S__60_O__id)), rt::V((double)(g::SV.C_S_9a__id)), rt::NUL, rt::V((double)(g::SV.C_S__3c_a__id)), rt::V((double)(g::SV.C_S_2_22__24___id)), rt::V((double)(g::SV.C_S__22__22__26___id)), rt::V((double)(g::SV.C_S_0_22__24___id))}));
    (g::SV.C_S__26_c__S__2c_L = rt::arr_lit({rt::NUL, rt::V((double)(g::SV.C_S_7I__id)), rt::V((double)(g::SV.C_S__60_T__id)), rt::V((double)(g::SV.C_S_6n__id)), rt::V((double)(g::SV.C_S_9_21_n__id)), rt::V((double)(g::SV.C_S__25__21_n__id)), rt::V((double)(g::SV.C_S__27__21_n__id))}));
    (g::SV.C_S__26_c__S_4_3c_ = rt::arr_lit({rt::V((double)(g::SV.C_S__27_K__id)), rt::V((double)(g::SV.C_S__27__21__27___id)), rt::V((double)(g::SV.C_S_6_21_V__id)), rt::V((double)(g::SV.C_S_2_21_E__id)), rt::V((double)(g::SV.C_S__20__21_5__id)), rt::V((double)(g::SV.C_S_8_3e___id)), rt::V((double)(g::SV.C_S__5e_x__id)), rt::V((double)(g::SV.C_S__21_C__id)), rt::V((double)(g::SV.C_S__25__21_J__id)), rt::V((double)(g::SV.C_S_7_21_K__id)), rt::V((double)(g::SV.C_S__40_W__id)), rt::NUL, rt::V((double)(g::SV.C_S_5_21_3__id)), rt::V((double)(g::SV.C_S_2_22__21___id)), rt::V((double)(g::SV.C_S__21__22__21___id)), rt::V((double)(g::SV.C_S_7_22__20___id))}));
    (g::SV.C_S__26_c__S__26__21__20_ = rt::arr_lit({rt::V(0.0), rt::V(1.0), rt::V(2.0), rt::V(3.0), rt::V(4.0), rt::V(5.0)}));
    (g::SV.C_S__26_c__S__5d_d = rt::arr_lit({rt::V((double)(g::SV.C_S_1_21_T__id)), rt::V((double)(g::SV.C_S_4H__id)), rt::V((double)(g::SV.C_S__25_f__id)), rt::V((double)(g::SV.C_S__3d__21_H__id)), rt::V((double)(g::SV.C_S_7_21__24___id)), rt::V((double)(g::SV.C_S__60_N__id)), rt::V((double)(g::SV.C_S__40_B__id)), rt::V((double)(g::SV.C_S__22__27___id))}));
    (g::SV.C_S__26_c__S__60_2 = rt::arr_lit({rt::V((double)(g::SV.C_S__2b__5e___id)), rt::V((double)(g::SV.C_S__20__21_K__id)), rt::V((double)(g::SV.C_S__3d__21__2c___id)), rt::V((double)(g::SV.C_S__3c__21_p__id)), rt::V((double)(g::SV.C_S__3d__21_p__id)), rt::V((double)(g::SV.C_S_1_21_T__id)), rt::V((double)(g::SV.C_S_4H__id)), rt::V((double)(g::SV.C_S__25_f__id)), rt::V((double)(g::SV.C_S__3d__21_H__id)), rt::V((double)(g::SV.C_S_7_21__24___id)), rt::V((double)(g::SV.C_S__60_N__id)), rt::V((double)(g::SV.C_S__40_B__id)), rt::V((double)(g::SV.C_S__22__27___id)), rt::V((double)(g::SV.C_S__3f__21__3f___id)), rt::V((double)(g::SV.C_S_7_3e___id)), rt::V((double)(g::SV.C_S__23__21_5__id)), rt::V((double)(g::SV.C_S_9_2c___id)), rt::V((double)(g::SV.C_S__60__21_1__id)), rt::V((double)(g::SV.C_S__23__21__5e___id)), rt::V((double)(g::SV.C_S__23_P__id)), rt::V((double)(g::SV.C_S__3e_x__id)), rt::V((double)(g::SV.C_S__3c__2b___id)), rt::V((double)(g::SV.C_S_5_21_a__id)), rt::V((double)(g::SV.C_S__5d__5d___id)), rt::V((double)(g::SV.C_S_2_21_i__id)), rt::V((double)(g::SV.C_S__26__21_j__id)), rt::V((double)(g::SV.C_S_5_21_i__id)), rt::V((double)(g::SV.C_S__2b__21_i__id)), rt::V((double)(g::SV.C_S__5d__21_j__id)), rt::V((double)(g::SV.C_S__40__21_i__id)), rt::V((double)(g::SV.C_S_0_21_j__id)), rt::V((double)(g::SV.C_S_3_21_i__id)), rt::V((double)(g::SV.C_S_8_21_i__id)), rt::V((double)(g::SV.C_S__25__21_k__id)), rt::V((double)(g::SV.C_S__3c__21_k__id)), rt::V((double)(g::SV.C_S__22__21_k__id)), rt::V((double)(g::SV.C_S_1_21_k__id)), rt::V((double)(g::SV.C_S_4_21_k__id)), rt::V((double)(g::SV.C_S__2b__21_k__id)), rt::V((double)(g::SV.C_S_5_21_k__id)), rt::V((double)(g::SV.C_S_8_21_k__id)), rt::V((double)(g::SV.C_S__2d__21_k__id)), rt::V((double)(g::SV.C_S__3b__21_p__id)), rt::V((double)(g::SV.C_S__2b__22_1__id)), rt::V((double)(g::SV.C_S__25__22_2__id)), rt::V((double)(g::SV.C_S__60__22_1__id)), rt::V((double)(g::SV.C_S_3_22_1__id)), rt::V((double)(g::SV.C_S__5b__22_1__id)), rt::V((double)(g::SV.C_S_3_22_2__id)), rt::V((double)(g::SV.C_S__26__22_2__id)), rt::V((double)(g::SV.C_S__20__22_2__id)), rt::V((double)(g::SV.C_S__22__22_1__id)), rt::V((double)(g::SV.C_S__27__22_1__id)), rt::V((double)(g::SV.C_S_7_22_1__id)), rt::V((double)(g::SV.C_S__23__22_1__id)), rt::V((double)(g::SV.C_S__21__22_1__id)), rt::V((double)(g::SV.C_S__2c__22_1__id)), rt::V((double)(g::SV.C_S_2_22_2__id)), rt::V((double)(g::SV.C_S_5_22_1__id))}));
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) < rt::alen(g::SV.C_S_8G__S_0_21_A))) {
        ({ rt::Value _v10130 = rt::add(({ rt::Value _o10128 = rt::arr_at(g::SV.C_S_8G__S_0_21_A, ((double)(l_A__loc1_))); C_S_84* _p10129 = rt::as_ptr<C_S_84>(_o10128); _p10129 ? _p10129->f_S__20_r : rt::dget(_o10128, NM_S__20_r); }), rt::VS(g::LS[1271])); rt::idx_set(g::SV.C_S__26_c__S__40__21_b, rt::V((double)(({ rt::Value _o10131 = rt::arr_at(g::SV.C_S_8G__S_0_21_A, ((double)(l_A__loc1_))); C_S_84* _p10132 = rt::as_ptr<C_S_84>(_o10131); _p10132 ? _p10132->f_id : rt::touint(rt::dget(_o10131, NM_id)); }))), _v10130); });
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) < rt::alen(g::SV.C_S_8G__S__2d__21_4))) {
        if (rt::is_class(rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc1_))), C_S_1_22__3e_::CI)) {
            (void)(rt::dcallv(g::SV.C_S__26_c__S__2b__22_F, rt::N_push, rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc1_)))));
        }
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    (g::SV.C_S__26_c__S_0P = rt::arr_lit({rt::V((double)(g::SV.C_S_1_21_M__id)), rt::V((double)(g::SV.C_S__3b_8__id)), rt::V((double)(g::SV.C_S__2d__21__60___id)), rt::V((double)(g::SV.C_S__5d_s__id)), rt::V((double)(g::SV.C_S__3d__21__2b___id)), rt::V((double)(g::SV.C_S__22_9__id)), rt::V((double)(g::SV.C_S_1_21_B__id)), rt::V((double)(g::SV.C_S__5b__21__3f___id)), rt::V((double)(g::SV.C_S__2d_H__id)), rt::V((double)(g::SV.C_S__25__21_2__id)), rt::V((double)(g::SV.C_S__2d_J__id)), rt::NUL, rt::V((double)(g::SV.C_S_88__id)), rt::V((double)(g::SV.C_S__20__22__27___id)), rt::V((double)(g::SV.C_S_4_22__27___id)), rt::V((double)(g::SV.C_S__60__22__24___id))}));
    (g::SV.C_S__26_c__S_0_22_H = rt::arr_lit({rt::V((double)(g::SV.C_S_1_21_M__id)), rt::V((double)(g::SV.C_S__3b_8__id)), rt::V((double)(g::SV.C_S__2d__21__60___id)), rt::V((double)(g::SV.C_S__5d_s__id)), rt::V((double)(g::SV.C_S__3d__21__2b___id)), rt::V((double)(g::SV.C_S__22_9__id)), rt::V((double)(g::SV.C_S_1_21_B__id)), rt::V((double)(g::SV.C_S__5b__21__3f___id)), rt::V((double)(g::SV.C_S__2d_H__id)), rt::V((double)(g::SV.C_S__25__21_2__id)), rt::V((double)(g::SV.C_S__2d_J__id)), rt::V((double)(g::SV.C_S_88__id)), rt::V((double)(g::SV.C_S__20__22__27___id)), rt::V((double)(g::SV.C_S_4_22__27___id)), rt::V((double)(g::SV.C_S__60__22__24___id))}));
    return rt::NUL;
}
bool C_S__26_c::dsm_S__40__21__5b__1() { return false; }
bool C_S__26_c::dsm_S__40__21__5b__2() { return false; }
double C_S__26_c::sm_S__40__21__5b_(bool p0, bool p1, bool p2) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc4_ = NAN;
    RT_FN("S__26_c.S__40__21__5b_");
    (l_A__loc4_ = 0.0);
    (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 6.0))));
    (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 7.0))));
    (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 8.0))));
    (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 9.0))));
    (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 10.0))));
    (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 11.0))));
    (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 41.0))));
    (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 42.0))));
    if ((!l_param1)) {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 6.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 7.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 8.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 9.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 10.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 11.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 41.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 42.0))));
    }
    if (l_param2) {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 6.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 7.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 8.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 9.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 10.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 11.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 41.0))));
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 42.0))));
    }
    if ((!l_param3)) {
        if (C_S_8G::sm_S_7d(g::SV.C_S_7_22__24___id)) {
            (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S_7_22__24_::sm_S__2c__21_G()))));
        }
        if ((C_S_8G::sm_S_7d(g::SV.C_S__3b__22__26___id) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id))) {
            (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S_2_22__21_::sm_S__2c__21_G()))));
        }
    }
    return l_A__loc4_;
    return 0.0;
}
double C_S__26_c::sm_S__3d__22__26_(uint32_t p0) {
    uint32_t l_param1 = p0;
    double l_A__loc2_ = NAN;
    RT_FN("S__26_c.S__3d__22__26_");
    (l_A__loc2_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_param1)))));
    if (C_S_8G::sm_S_7d(g::SV.C_S_7_22__24___id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S_7_22__24_::sm_S__2c__21_G()))));
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S__3b__22__26___id) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id))) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S_2_22__21_::sm_S__2c__21_G()))));
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::dsm_S__21__2d__0() { return false; }
bool C_S__26_c::dsm_S__21__2d__1() { return false; }
double C_S__26_c::sm_S__21__2d_(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S__21__2d_");
    (l_A__loc3_ = (l_param2 ? C_S__23__21__21_::sm_S__40__22_0() : C_S__23__21__21_::sm_S__21__2d_()));
    if ((!l_param2)) {
        if (((!l_param1) && C_S_8G::sm_S_7d(g::SV.C_S__3d__22_9__id))) {
            (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__3d__22_9::sm_S__2c__21_G()))));
        }
        if (((!l_param1) && C_S_8G::sm_S_7d(g::SV.C_S__5b__21_v__id))) {
            (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__5b__21_v::sm_S__2c__21_G()))));
        }
        if (((!l_param1) && C_S_8G::sm_S_7d(g::SV.C_S__5b__21_y__id))) {
            (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__5b__21_y::sm_S__2c__21_G()))));
        }
        if (((!l_param1) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id))) {
            (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S_2_22__21_::sm_S__2c__21_G()))));
        }
        if (((!l_param1) && C_S_8G::sm_S_7d(g::SV.C_S_9_22__24___id))) {
            (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S_9_22__24_::sm_S__2c__21_G()))));
        }
        if (((!l_param1) && C_S_8G::sm_S_7d(g::SV.C_S_6_22__3c___id))) {
            (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S_6_22__3c_::sm_S__2c__21_G()))));
        }
    }
    return rt::m_floor(l_A__loc3_);
    return 0.0;
}
int32_t C_S__26_c::dsm_S_0_23__0() { return rt::toint_d((-1.0)); }
bool C_S__26_c::dsm_S_0_23__1() { return false; }
double C_S__26_c::sm_S_0_23_(int32_t p0, bool p1) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    int32_t l_A__loc6_ = 0;
    double l_A__loc5_ = NAN;
    double l_A__loc3_ = NAN;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("S__26_c.S_0_23_");
    (l_A__loc6_ = rt::toint_d(0.0));
    (l_A__loc5_ = NAN);
    (l_A__loc3_ = 0.0);
    {
        std::vector<rt::Value> _lst10133;
        rt::each(g::SV.C_S_8G__S__25__3c_, _lst10133);
        for (const rt::Value& _x10134 : _lst10133) {
            l_A__loc4_ = _x10134;
            (l_A__loc6_ = ({ rt::Value _o10135 = l_A__loc4_; C_S__60__21__3b_* _p10136 = rt::as_ptr<C_S__60__21__3b_>(_o10135); _p10136 ? _p10136->f_S__2c__21_Y : rt::toint(rt::dget(_o10135, NM_S__2c__21_Y)); }));
            if ((!(((double)(({ rt::Value _o10137 = l_A__loc4_; C_S__60__21__3b_* _p10138 = rt::as_ptr<C_S__60__21__3b_>(_o10137); _p10138 ? _p10138->m_S__27__3c_() : rt::toint(rt::dcallv(_o10137, NM_S__27__3c_)); }))) == (-1.0)))) {
                (l_A__loc6_ = ({ rt::Value _o10143 = C_S_8G::sm_S__21__21_H(rt::touint(rt::arr_at(({ rt::Value _o10139 = l_A__loc4_; C_S__60__21__3b_* _p10140 = rt::as_ptr<C_S__60__21__3b_>(_o10139); _p10140 ? _p10140->f_S_9_3b_ : rt::dget(_o10139, NM_S_9_3b_); }), ((double)(({ rt::Value _o10141 = l_A__loc4_; C_S__60__21__3b_* _p10142 = rt::as_ptr<C_S__60__21__3b_>(_o10141); _p10142 ? _p10142->m_S__27__3c_() : rt::toint(rt::dcallv(_o10141, NM_S__27__3c_)); })))))); C_S__60_6* _p10144 = rt::as_ptr<C_S__60_6>(_o10143); _p10144 ? _p10144->f_S_9_21_m : rt::toint(rt::dget(_o10143, NM_S_9_21_m)); }));
                if ((((double)(l_A__loc6_)) == 0.0)) {
                    (l_A__loc6_ = ({ rt::Value _o10145 = l_A__loc4_; C_S__60__21__3b_* _p10146 = rt::as_ptr<C_S__60__21__3b_>(_o10145); _p10146 ? _p10146->f_S__2c__21_Y : rt::toint(rt::dget(_o10145, NM_S__2c__21_Y)); }));
                }
            }
            if ((({ bool _t10150 = ({ bool _t10149 = (((double)(l_param1)) == (-1.0)); _t10149 ? _t10149 : (bool)((((double)(l_param1)) == ((double)(({ rt::Value _o10147 = l_A__loc4_; C_S__60__21__3b_* _p10148 = rt::as_ptr<C_S__60__21__3b_>(_o10147); _p10148 ? _p10148->f_S__2c__21_Y : rt::toint(rt::dget(_o10147, NM_S__2c__21_Y)); }))))); }); _t10150 ? _t10150 : (bool)((((double)(l_param1)) == ((double)(l_A__loc6_)))); }) || (({ bool _t10153 = ({ bool _t10151 = (!l_param2); _t10151 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_6_22_G__id)) : _t10151; }); _t10153 ? (bool)((({ bool _t10152 = (((double)(l_param1)) == 2.0); _t10152 ? _t10152 : (bool)((((double)(l_param1)) == 1.0)); }))) : _t10153; }) && (((double)(({ rt::Value _o10154 = l_A__loc4_; C_S__60__21__3b_* _p10155 = rt::as_ptr<C_S__60__21__3b_>(_o10154); _p10155 ? _p10155->f_S__2c__21_Y : rt::toint(rt::dget(_o10154, NM_S__2c__21_Y)); }))) == 0.0)))) {
                if (l_param2) {
                    (l_A__loc3_ = (l_A__loc3_ + ((double)(({ rt::Value _o10156 = l_A__loc4_; C_S__60__21__3b_* _p10157 = rt::as_ptr<C_S__60__21__3b_>(_o10156); _p10157 ? _p10157->g_S__21_a() : rt::touint(rt::dget(_o10156, NM_S__21_a)); })))));
                } else {
                    (l_A__loc5_ = C_S__26_c::sm_S__5b__22__3c_(l_A__loc4_, ((double)(({ rt::Value _o10158 = l_A__loc4_; C_S__60__21__3b_* _p10159 = rt::as_ptr<C_S__60__21__3b_>(_o10158); _p10159 ? _p10159->g_S__21_a() : rt::touint(rt::dget(_o10158, NM_S__21_a)); })))));
                    (l_A__loc3_ = (l_A__loc3_ + rt::m_floor(l_A__loc5_)));
                }
            }
        }
    }
    return l_A__loc3_;
    return 0.0;
}
int32_t C_S__26_c::dsm_S_4_21__60__0() { return rt::toint_d((-1.0)); }
bool C_S__26_c::dsm_S_4_21__60__1() { return false; }
double C_S__26_c::sm_S_4_21__60_(int32_t p0, bool p1) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc4_ = NAN;
    double l_A__loc3_ = NAN;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S__26_c.S_4_21__60_");
    (l_A__loc4_ = NAN);
    (l_A__loc3_ = 0.0);
    {
        std::vector<rt::Value> _lst10160;
        rt::each(g::SV.C_S_8G__S__25__3c_, _lst10160);
        for (const rt::Value& _x10161 : _lst10160) {
            l_A__loc5_ = _x10161;
            if (((((double)(l_param1)) == (-1.0)) || (((double)(({ rt::Value _o10162 = l_A__loc5_; C_S__60__21__3b_* _p10163 = rt::as_ptr<C_S__60__21__3b_>(_o10162); _p10163 ? _p10163->f_S__2c__21_Y : rt::toint(rt::dget(_o10162, NM_S__2c__21_Y)); }))) == ((double)(l_param1))))) {
                (l_A__loc4_ = C_S_8G::sm_S__25_Z(({ rt::Value _o10164 = l_A__loc5_; C_S__60__21__3b_* _p10165 = rt::as_ptr<C_S__60__21__3b_>(_o10164); _p10165 ? _p10165->f_id : rt::touint(rt::dget(_o10164, NM_id)); }), l_param2));
                if ((l_A__loc4_ > l_A__loc3_)) {
                    (l_A__loc3_ = l_A__loc4_);
                }
            }
        }
    }
    return l_A__loc3_;
    return 0.0;
}
double C_S__26_c::sm_S_3_22_N() {
    double l_A__loc1_ = NAN;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__26_c.S_3_22_N");
    (l_A__loc1_ = 0.0);
    {
        std::vector<rt::Value> _lst10166;
        rt::each(g::SV.C_S_8G__S__25__3c_, _lst10166);
        for (const rt::Value& _x10167 : _lst10166) {
            l_A__loc2_ = _x10167;
            if (((((double)(({ rt::Value _o10168 = l_A__loc2_; C_S__60__21__3b_* _p10169 = rt::as_ptr<C_S__60__21__3b_>(_o10168); _p10169 ? _p10169->g_S__21_a() : rt::touint(rt::dget(_o10168, NM_S__21_a)); }))) > 0.0) && (((double)(({ rt::Value _o10170 = l_A__loc2_; C_S__60__21__3b_* _p10171 = rt::as_ptr<C_S__60__21__3b_>(_o10170); _p10171 ? _p10171->f_S_1_21_c : rt::touint(rt::dget(_o10170, NM_S_1_21_c)); }))) > l_A__loc1_))) {
                (l_A__loc1_ = ((double)(({ rt::Value _o10172 = l_A__loc2_; C_S__60__21__3b_* _p10173 = rt::as_ptr<C_S__60__21__3b_>(_o10172); _p10173 ? _p10173->f_S_1_21_c : rt::touint(rt::dget(_o10172, NM_S_1_21_c)); }))));
            }
        }
    }
    return l_A__loc1_;
    return 0.0;
}
double C_S__26_c::sm_S__5b__22__3c_(rt::Value p0, double p1) {
    rt::Value l_param1 = p0;
    double l_param2 = p1;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S__5b__22__3c_");
    if (((((double)(({ rt::Value _o10174 = l_param1; C_S__60__21__3b_* _p10175 = rt::as_ptr<C_S__60__21__3b_>(_o10174); _p10175 ? _p10175->f_S__60_r : rt::toint(rt::dget(_o10174, NM_S__60_r)); }))) >= 9.0) && C_S_8G::sm_S_7d(g::SV.C_S__3b__21_3__id))) {
        (l_param2 = (l_param2 * 2.0));
    }
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__3f__21_H__id)) {
        (l_param2 = (l_param2 * 1.1));
    }
    if (((((double)(({ rt::Value _o10176 = l_param1; C_S__60__21__3b_* _p10177 = rt::as_ptr<C_S__60__21__3b_>(_o10176); _p10177 ? _p10177->f_id : rt::touint(rt::dget(_o10176, NM_id)); }))) == ((double)(g::SV.C_S__3e__21__60___id))) && C_S_8G::sm_S_7d(g::SV.C_S__26__21_V__id))) {
        (l_param2 = (l_param2 * 1.05));
    }
    if (C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id)) {
        (l_param2 = (l_param2 * (1.0 + (0.01 * C_S_2_22__21_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__5b__21_y__id)) {
        (l_param2 = (l_param2 * (1.0 + (0.01 * C_S__5b__21_y::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_9_22__25___id)) {
        (l_param2 = (l_param2 * (1.0 + (0.01 * C_S_9_22__25_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3f__22_C__id)) {
        (l_param2 = (l_param2 * (1.0 + (0.01 * C_S__3f__22_C::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_0_22_F__id)) {
        (l_param2 = (l_param2 * (1.0 + (0.01 * C_S_0_22_F::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S__3c__21_B(g::SV.C_S__3b__21__2b___id)) {
        (l_param2 = (l_param2 * (1.0 + (0.01 * C_S__3b__21__2b_::sm_S__2c__21_G()))));
    }
    if ((({ bool _t10186 = (({ bool _t10185 = ({ bool _t10182 = (((double)(({ rt::Value _o10178 = l_param1; C_S__60__21__3b_* _p10179 = rt::as_ptr<C_S__60__21__3b_>(_o10178); _p10179 ? _p10179->f_id : rt::touint(rt::dget(_o10178, NM_id)); }))) == ((double)(g::SV.C_S_8_21_d__id))); _t10182 ? _t10182 : (bool)((((double)(({ rt::Value _o10180 = l_param1; C_S__60__21__3b_* _p10181 = rt::as_ptr<C_S__60__21__3b_>(_o10180); _p10181 ? _p10181->f_id : rt::touint(rt::dget(_o10180, NM_id)); }))) == ((double)(g::SV.C_S_2_21__2b___id)))); }); _t10185 ? _t10185 : (bool)((((double)(({ rt::Value _o10183 = l_param1; C_S__60__21__3b_* _p10184 = rt::as_ptr<C_S__60__21__3b_>(_o10183); _p10184 ? _p10184->f_id : rt::touint(rt::dget(_o10183, NM_id)); }))) == ((double)(g::SV.C_S__5b__21__5f___id)))); })); _t10186 ? (bool)(C_S__26_c::sm_S__5b__21_s(g::SV.C_S__60__21_r__id)) : _t10186; }) && C_S_8G::sm_S__3c_P(g::SV.C_S__2b__22_C__id))) {
        (l_param2 = (l_param2 * (1.0 + (0.01 * C_S__60__21_r::sm_S__2c__21_G()))));
    }
    if (((({ bool _t10206 = ({ bool _t10203 = ({ bool _t10200 = ({ bool _t10197 = ({ bool _t10194 = ({ bool _t10191 = (((double)(({ rt::Value _o10187 = l_param1; C_S__60__21__3b_* _p10188 = rt::as_ptr<C_S__60__21__3b_>(_o10187); _p10188 ? _p10188->f_id : rt::touint(rt::dget(_o10187, NM_id)); }))) == ((double)(g::SV.C_S__3f__21_V__id))); _t10191 ? _t10191 : (bool)((((double)(({ rt::Value _o10189 = l_param1; C_S__60__21__3b_* _p10190 = rt::as_ptr<C_S__60__21__3b_>(_o10189); _p10190 ? _p10190->f_id : rt::touint(rt::dget(_o10189, NM_id)); }))) == ((double)(g::SV.C_S_0_2d___id)))); }); _t10194 ? _t10194 : (bool)((((double)(({ rt::Value _o10192 = l_param1; C_S__60__21__3b_* _p10193 = rt::as_ptr<C_S__60__21__3b_>(_o10192); _p10193 ? _p10193->f_id : rt::touint(rt::dget(_o10192, NM_id)); }))) == ((double)(g::SV.C_S_1_21_O__id)))); }); _t10197 ? _t10197 : (bool)((((double)(({ rt::Value _o10195 = l_param1; C_S__60__21__3b_* _p10196 = rt::as_ptr<C_S__60__21__3b_>(_o10195); _p10196 ? _p10196->f_id : rt::touint(rt::dget(_o10195, NM_id)); }))) == ((double)(g::SV.C_S__5e__21_7__id)))); }); _t10200 ? _t10200 : (bool)((((double)(({ rt::Value _o10198 = l_param1; C_S__60__21__3b_* _p10199 = rt::as_ptr<C_S__60__21__3b_>(_o10198); _p10199 ? _p10199->f_id : rt::touint(rt::dget(_o10198, NM_id)); }))) == ((double)(g::SV.C_S__3e__21__60___id)))); }); _t10203 ? _t10203 : (bool)((((double)(({ rt::Value _o10201 = l_param1; C_S__60__21__3b_* _p10202 = rt::as_ptr<C_S__60__21__3b_>(_o10201); _p10202 ? _p10202->f_id : rt::touint(rt::dget(_o10201, NM_id)); }))) == ((double)(g::SV.C_S_7A__id)))); }); _t10206 ? _t10206 : (bool)((((double)(({ rt::Value _o10204 = l_param1; C_S__60__21__3b_* _p10205 = rt::as_ptr<C_S__60__21__3b_>(_o10204); _p10205 ? _p10205->f_id : rt::touint(rt::dget(_o10204, NM_id)); }))) == ((double)(g::SV.C_S__3e__21_O__id)))); })) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_A__id))) {
        (l_param2 = (l_param2 * (1.0 + (0.01 * C_S_2_22_A::sm_S__2c__21_G()))));
    }
    if (((!(((double)(({ rt::Value _o10207 = l_param1; C_S__60__21__3b_* _p10208 = rt::as_ptr<C_S__60__21__3b_>(_o10207); _p10208 ? _p10208->m_S__27__3c_() : rt::toint(rt::dcallv(_o10207, NM_S__27__3c_)); }))) == (-1.0))) && C_S_8G::sm_S_7d(g::SV.C_S__40__22_Q__id))) {
        (l_param2 = (l_param2 * (1.0 + (0.01 * C_S__40__22_Q::sm_S__2c__21_G()))));
    }
    (l_A__loc3_ = 0.0);
    if (((({ bool _t10216 = ({ bool _t10213 = (((double)(({ rt::Value _o10209 = l_param1; C_S__60__21__3b_* _p10210 = rt::as_ptr<C_S__60__21__3b_>(_o10209); _p10210 ? _p10210->f_id : rt::touint(rt::dget(_o10209, NM_id)); }))) == ((double)(g::SV.C_S_8_21_d__id))); _t10213 ? _t10213 : (bool)((((double)(({ rt::Value _o10211 = l_param1; C_S__60__21__3b_* _p10212 = rt::as_ptr<C_S__60__21__3b_>(_o10211); _p10212 ? _p10212->f_id : rt::touint(rt::dget(_o10211, NM_id)); }))) == ((double)(g::SV.C_S_2_21__2b___id)))); }); _t10216 ? _t10216 : (bool)((((double)(({ rt::Value _o10214 = l_param1; C_S__60__21__3b_* _p10215 = rt::as_ptr<C_S__60__21__3b_>(_o10214); _p10215 ? _p10215->f_id : rt::touint(rt::dget(_o10214, NM_id)); }))) == ((double)(g::SV.C_S__5b__21__5f___id)))); })) && C_S__26_c::sm_S__3b_X(g::SV.C_S_1_21_M__id, C_S__26_c::dsm_S__3b_X_1(), C_S__26_c::dsm_S__3b_X_2()))) {
        (l_A__loc3_ = (l_A__loc3_ + C_S_1_21_M::sm_S__2c__21_G()));
    }
    return (l_param2 * ((1.0 + (0.01 * l_A__loc3_))));
    return 0.0;
}
bool C_S__26_c::dsm_S__3b__22_5_2() { return false; }
double C_S__26_c::sm_S__3b__22_5(double p0, uint32_t p1, bool p2) {
    double l_param1 = p0;
    uint32_t l_param2 = p1;
    bool l_param3 = p2;
    RT_FN("S__26_c.S__3b__22_5");
    if ((({ bool _t10217 = (!l_param3); _t10217 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_8_22_G__id)) : _t10217; }) && (!C_S__26_c::sm_S__3b_X(l_param2, false, true)))) {
        (l_param1 = rt::m_min2(l_param1, g::SV.C_S_8_22_G__S_1_22_H));
    }
    if (C_S_8G::sm_S__3c__21_B(g::SV.C_S_1_22_F__id)) {
        (l_param1 = (l_param1 + C_S_1_22_F::sm_S__2c__21_G()));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__40__22__3d___id)) {
        (l_param1 = (l_param1 * (1.0 + (0.01 * C_S__40__22__3d_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3e__22__26___id)) {
        (l_param1 = (l_param1 * (1.0 + (0.01 * C_S__3e__22__26_::sm_S__2c__21_G()))));
    }
    if (C_S__26_c::sm_S__5b__21_s(g::SV.C_S_6_22_0__id)) {
        (l_param1 = (l_param1 * (1.0 + (0.01 * C_S_6_22_0::sm_S__2c__21_G()))));
    }
    if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__3d__22__2d___id) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id))) {
        (l_param1 = (l_param1 * (1.0 + (0.01 * C_S__3d__22__2d_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_0_22_D__id)) {
        (l_param1 = (l_param1 * (1.0 + (0.01 * C_S_0_22_D::sm_S__2c__21_G()))));
    }
    if ((C_S__26_c::sm_S__5b__21_s(g::SV.C_S__22__21_r__id) && C_S_8G::sm_S__3c_P(g::SV.C_S_3_22__3e___id))) {
        (l_param1 = (l_param1 * (1.0 + (0.01 * C_S__22__21_r::sm_S__2c__21_G()))));
    }
    return l_param1;
    return 0.0;
}
bool C_S__26_c::dsm_S__25__21_6_0() { return true; }
bool C_S__26_c::dsm_S__25__21_6_1() { return false; }
double C_S__26_c::sm_S__25__21_6(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S__25__21_6");
    if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) {
        return 0.0;
    }
    (l_A__loc3_ = 0.0);
    if ((!rt::eq(rt::arr_at(g::SV.C_S__26_c__S_0P, ((double)(g::SV.C_S__23__21__21___S_3_22_))), rt::NUL))) {
        (l_A__loc3_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(({ rt::Value _o10219 = (({ rt::Value _t10218 = C_S_8G::sm_S__21__21_H(rt::touint(rt::arr_at(g::SV.C_S__26_c__S_0P, ((double)(g::SV.C_S__23__21__21___S_3_22_))))); rt::is_class(_t10218, C_S_6P::CI) ? _t10218 : rt::NUL; })); C_S_6P* _p10220 = rt::as_ptr<C_S_6P>(_o10219); _p10220 ? _p10220->f_S_0_21_N : rt::toint(rt::dget(_o10219, NM_S_0_21_N)); }))))));
        if ((!l_param1)) {
            (l_A__loc3_ = C_S__26_c::sm_S__3b__22_5(l_A__loc3_, rt::touint(rt::arr_at(g::SV.C_S__26_c__S_0P, ((double)(g::SV.C_S__23__21__21___S_3_22_)))), l_param2));
        }
    }
    return l_A__loc3_;
    return 0.0;
}
bool C_S__26_c::dsm_S__3f__21_v_1() { return true; }
bool C_S__26_c::dsm_S__3f__21_v_2() { return false; }
double C_S__26_c::sm_S__3f__21_v(int32_t p0, bool p1, bool p2) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc4_ = NAN;
    RT_FN("S__26_c.S__3f__21_v");
    (l_A__loc4_ = 0.0);
    if ((!rt::eq(rt::arr_at(g::SV.C_S__26_c__S_0P, ((double)(l_param1))), rt::NUL))) {
        (l_A__loc4_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(({ rt::Value _o10222 = (({ rt::Value _t10221 = C_S_8G::sm_S__21__21_H(rt::touint(rt::arr_at(g::SV.C_S__26_c__S_0P, ((double)(l_param1))))); rt::is_class(_t10221, C_S_6P::CI) ? _t10221 : rt::NUL; })); C_S_6P* _p10223 = rt::as_ptr<C_S_6P>(_o10222); _p10223 ? _p10223->f_S_0_21_N : rt::toint(rt::dget(_o10222, NM_S_0_21_N)); }))))));
        if ((!l_param2)) {
            (l_A__loc4_ = C_S__26_c::sm_S__3b__22_5(l_A__loc4_, rt::touint(rt::arr_at(g::SV.C_S__26_c__S_0P, ((double)(l_param1)))), l_param3));
        }
    }
    return l_A__loc4_;
    return 0.0;
}
bool C_S__26_c::dsm_S__60__21__3d__0() { return true; }
double C_S__26_c::sm_S__60__21__3d_(bool p0) {
    bool l_param1 = p0;
    int32_t l_A__loc4_ = 0;
    double l_A__loc3_ = NAN;
    double l_A__loc2_ = NAN;
    RT_FN("S__26_c.S__60__21__3d_");
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc3_ = NAN);
    (l_A__loc2_ = 0.0);
    (l_A__loc4_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc4_)) <= 14.0)) {
        (l_A__loc3_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(l_A__loc4_)))));
        if ((!l_param1)) {
            (l_A__loc3_ = C_S__26_c::sm_S__3b__22_5(l_A__loc3_, rt::touint(rt::arr_at(g::SV.C_S__26_c__S_0_22_H, ((double)(l_A__loc4_)))), true));
        }
        (l_A__loc2_ = (l_A__loc2_ + l_A__loc3_));
        (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::dsm_S__2c_T_0() { return true; }
double C_S__26_c::sm_S__2c_T(bool p0) {
    bool l_param1 = p0;
    int32_t l_A__loc4_ = 0;
    double l_A__loc3_ = NAN;
    double l_A__loc2_ = NAN;
    RT_FN("S__26_c.S__2c_T");
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc3_ = NAN);
    (l_A__loc2_ = 0.0);
    (l_A__loc4_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc4_)) <= 14.0)) {
        (l_A__loc3_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(l_A__loc4_)))));
        if ((!l_param1)) {
            (l_A__loc3_ = C_S__26_c::sm_S__3b__22_5(l_A__loc3_, rt::touint(rt::arr_at(g::SV.C_S__26_c__S_0_22_H, ((double)(l_A__loc4_)))), true));
        }
        (l_A__loc2_ = rt::m_max2(l_A__loc2_, l_A__loc3_));
        (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::dsm_S_5_22_5_0() { return true; }
double C_S__26_c::sm_S_5_22_5(bool p0) {
    bool l_param1 = p0;
    int32_t l_A__loc4_ = 0;
    double l_A__loc3_ = NAN;
    double l_A__loc2_ = NAN;
    RT_FN("S__26_c.S_5_22_5");
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc3_ = NAN);
    (l_A__loc2_ = 1.7976931348623157e+308);
    (l_A__loc4_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc4_)) <= 14.0)) {
        (l_A__loc3_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(l_A__loc4_)))));
        if ((!l_param1)) {
            (l_A__loc3_ = C_S__26_c::sm_S__3b__22_5(l_A__loc3_, rt::touint(rt::arr_at(g::SV.C_S__26_c__S_0_22_H, ((double)(l_A__loc4_)))), true));
        }
        (l_A__loc2_ = rt::m_min2(l_A__loc2_, l_A__loc3_));
        (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::sm_S_5d() {
    RT_FN("S__26_c.S_5d");
    if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) {
        return false;
    }
    if ((!rt::eq(rt::arr_at(g::SV.C_S__26_c__S_0P, ((double)(g::SV.C_S__23__21__21___S_3_22_))), rt::NUL))) {
        return ({ rt::Value _o10227 = rt::arr_at(({ rt::Value _o10225 = (({ rt::Value _t10224 = C_S_8G::sm_S__21__21_H(rt::touint(rt::arr_at(g::SV.C_S__26_c__S_0P, ((double)(g::SV.C_S__23__21__21___S_3_22_))))); rt::is_class(_t10224, C_S_6P::CI) ? _t10224 : rt::NUL; })); C_S_6P* _p10226 = rt::as_ptr<C_S_6P>(_o10225); _p10226 ? _p10226->f_S_7_21_2 : rt::dget(_o10225, NM_S_7_21_2); }), 1.0); C_S__3b_x* _p10228 = rt::as_ptr<C_S__3b_x>(_o10227); _p10228 ? _p10228->f_S__3c__21_7 : rt::T(rt::dget(_o10227, NM_S__3c__21_7)); });
    }
    return false;
    return false;
}
double C_S__26_c::sm_S__27__22__2d_(int32_t p0, uint32_t p1) {
    int32_t l_param1 = p0;
    uint32_t l_param2 = p1;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S__27__22__2d_");
    (l_A__loc3_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(l_param1)))));
    if (((((double)(g::SV.C_S__40__22_7__S__5b__21_x)) == ((double)(l_param2))) && C_S_8G::sm_S__3c__21_B(g::SV.C_S__40__22_7__id))) {
        (l_A__loc3_ = C_S__40__22_7::sm_S__25__21_6());
    }
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__21__22_0__id)) {
        (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__21__22_0::sm_S__40__21__5f_()))));
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S_8_22_G__id) && (!C_S__26_c::sm_S__3b_X(l_param2, false, true)))) {
        (l_A__loc3_ = rt::m_min2(l_A__loc3_, g::SV.C_S_8_22_G__S_1_22_H));
    }
    return l_A__loc3_;
    return 0.0;
}
bool C_S__26_c::dsm_S_0_21_C_1() { return true; }
bool C_S__26_c::dsm_S_0_21_C_2() { return false; }
double C_S__26_c::sm_S_0_21_C(int32_t p0, bool p1, bool p2) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    int32_t l_A__loc4_ = 0;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S__26_c.S_0_21_C");
    (l_A__loc4_ = rt::toint_d(0.0));
    {
        std::vector<rt::Value> _lst10229;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst10229);
        for (const rt::Value& _x10230 : _lst10229) {
            l_A__loc5_ = _x10230;
            if ((({ bool _t10235 = ({ rt::Value _o10231 = l_A__loc5_; C_S__60_6* _p10232 = rt::as_ptr<C_S__60_6>(_o10231); _p10232 ? _p10232->f_S__3c__21_7 : rt::T(rt::dget(_o10231, NM_S__3c__21_7)); }); _t10235 ? (bool)((((double)(({ rt::Value _o10233 = l_A__loc5_; C_S__60_6* _p10234 = rt::as_ptr<C_S__60_6>(_o10233); _p10234 ? _p10234->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10233, NM_S__2d__21__5e_)); }))) == ((double)(l_param1)))) : _t10235; }) && (({ bool _t10238 = (!l_param2); _t10238 ? _t10238 : (bool)(({ rt::Value _o10236 = l_A__loc5_; C_S__60_6* _p10237 = rt::as_ptr<C_S__60_6>(_o10236); _p10237 ? _p10237->f_S__3c__60_ : rt::T(rt::dget(_o10236, NM_S__3c__60_)); })); }) || ({ rt::Value _o10239 = l_A__loc5_; C_S__60_6* _p10240 = rt::as_ptr<C_S__60_6>(_o10239); _p10240 ? _p10240->f_S__21__21_n : rt::T(rt::dget(_o10239, NM_S__21__21_n)); })))) {
                (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
            }
        }
    }
    if (l_param3) {
    }
    return ((double)(l_A__loc4_));
    return 0.0;
}
bool C_S__26_c::dsm_S__5e__22__3e__0() { return false; }
double C_S__26_c::sm_S__5e__22__3e_(bool p0) {
    bool l_param1 = p0;
    double l_A__loc2_ = NAN;
    RT_FN("S__26_c.S__5e__22__3e_");
    (l_A__loc2_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)));
    if (l_param1) {
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::dsm_S_3_22_J_0() { return true; }
double C_S__26_c::sm_S_3_22_J(bool p0) {
    bool l_param1 = p0;
    double l_A__loc2_ = NAN;
    RT_FN("S__26_c.S_3_22_J");
    (l_A__loc2_ = 0.0);
    if (C_S_8G::sm_S_7d(g::SV.C_S__5d__21_N__id)) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S__5d__21_N::sm_S_6_22_4()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__5d__22_C__id)) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S__5d__22_C::sm_S_6_22_4()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__23__27___id)) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S__23__27_::sm_S_6_22_4()))));
    }
    if (C_S__26_c::sm_S__5d_B(g::SV.C_S__40_D__id, C_S__26_c::dsm_S__5d_B_1())) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S__40_D::sm_S_6_22_4()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_5_22_F__id)) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S_5_22_F::sm_S_6_22_4()))));
    }
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S_9_3c___id)) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S_9_3c_::sm_S_6_22_4()))));
    }
    if (C_S__26_c::sm_S__3d__21_x(g::SV.C_S__3d__21_m__id, (((double)(C_S_8G::sg_S_8_21_H())) >= 105.0), C_S__26_c::dsm_S__3d__21_x_2())) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S__3d__21_m::sm_S_6_22_4()))));
    }
    if (C_S__26_c::sm_S__3b_X(g::SV.C_S__3b_8__id, C_S__26_c::dsm_S__3b_X_1(), C_S__26_c::dsm_S__3b_X_2())) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S__3b_8::sm_S_6_22_4()))));
    }
    if (C_S__26_c::sm_S__5b__21_s(g::SV.C_S__40__21_p__id)) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S__40__21_p::sm_S_6_22_4()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_5_22_3__id)) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S_5_22_3::sm_S_6_22_4()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_4_22_K__id)) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S_4_22_K::sm_S_6_22_4()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__60__22_M__id)) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S__60__22_M::sm_S_6_22_4()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__2c__22__3d___id)) {
        (l_A__loc2_ = (l_A__loc2_ + C_S__2c__22__3d_::sm_S_6_22_4()));
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S_7_22_9__id) && (((double)(C_S_8G::sg_S_8_21_H())) >= 70.0))) {
        (l_A__loc2_ = (l_A__loc2_ + C_S_7_22_9::sm_S_6_22_4(C_S_7_22_9::dsm_S_6_22_4_0())));
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S_2_22__26___id) && (!(((double)(C_PlayFab::sg_season())) == 0.0)))) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S_2_22__26_::sm_S_6_22_4()))));
    }
    if ((({ bool _t10241 = (!l_param1); _t10241 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_4v__id)) : _t10241; }) && C_S_8G::sm_S__3c__21_B(g::SV.C_S__27__21__27___id))) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S_4v::sm_S_6_22_4()))));
    }
    if ((({ bool _t10243 = ({ bool _t10242 = (!l_param1); _t10242 ? (bool)(C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__20__22_8__id)) : _t10242; }); _t10243 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)) : _t10243; }) && C_S_8G::sm_S__3c__21_B(g::SV.C_S__3b__21__2b___id))) {
        (l_A__loc2_ = (l_A__loc2_ + C_S__20__22_8::sm_S_6_22_4()));
    }
    if (((((double)(C_PlayFab::sg_season())) == 9.0) && C_S_8G::sm_S_7d(g::SV.C_S_1_21_k__id))) {
        (l_A__loc2_ = (l_A__loc2_ + ((double)(C_S_1_21_k::sm_S_6_22_4()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__27__21_A__id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S__27__21_A::sm_S__3b__22_K()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__5e__22__3b___id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S__5e__22__3b_::sm_S__3b__22_K()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_3_21_w__id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S_3_21_w::sm_S__3b__22_K()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__5e__22_K__id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S__5e__22_K::sm_S__3b__22_K()))));
    }
    return l_A__loc2_;
    return 0.0;
}
double C_S__26_c::sm_S__22__22_L() {
    double l_A__loc1_ = NAN;
    RT_FN("S__26_c.S__22__22_L");
    (l_A__loc1_ = ((double)(C_S_8G::sg_S__2c_P())));
    if (C_S_8G::sm_S_7d(g::SV.C_S_9_22_K__id)) {
        (l_A__loc1_ = (l_A__loc1_ * 2.0));
    }
    return l_A__loc1_;
    return 0.0;
}
double C_S__26_c::sm_S_6_22__26_(double p0, int32_t p1) {
    double l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__26_c.S_6_22__26_");
    if (C_S__26_c::sm_S__5d_B(g::SV.C_S_0_22__24___id, C_S__26_c::dsm_S__5d_B_1())) {
        (l_param1 = (l_param1 * (1.0 + (0.01 * C_S_0_22__24_::sm_S__2c__21_G()))));
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S__5e__22_4__id) && (({ bool _t10244 = (((double)(l_param2)) == ((double)(g::SV.C_S_8G__S__2d__21__5e_))); _t10244 ? _t10244 : (bool)((((double)(l_param2)) == ((double)(g::SV.C_S_8G__S__23_3)))); }) || (((double)(l_param2)) == ((double)(g::SV.C_S_8G__S__2d__21_x)))))) {
        (l_param1 = (l_param1 * (1.0 + (0.01 * C_S__5e__22_4::sm_S__2c__21_G()))));
    }
    return l_param1;
    return 0.0;
}
bool C_S__26_c::dsm_S__60__21_D_0() { return false; }
double C_S__26_c::sm_S__60__21_D(bool p0) {
    bool l_param1 = p0;
    double l_A__loc2_ = NAN;
    RT_FN("S__26_c.S__60__21_D");
    (l_A__loc2_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)));
    if (l_param1) {
        return l_A__loc2_;
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_3_22__3c___id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S_3_22__3c_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__5b__21_y__id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S__5b__21_y::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S_2_22__21_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__27__22__27___id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S__27__22__27_::sm_S__2c__21_G()))));
    }
    if ((({ bool _t10245 = C_S_8G::sm_S__3c__21_B(g::SV.C_S__3b__21__2b___id); _t10245 ? (bool)(C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__20__22_8__id)) : _t10245; }) && (((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0))) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S__20__22_8::sm_S_1_3d_()))));
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::dsm_S__3e__21_h_0() { return false; }
bool C_S__26_c::dsm_S__3e__21_h_1() { return false; }
bool C_S__26_c::dsm_S__3e__21_h_2() { return false; }
double C_S__26_c::sm_S__3e__21_h(bool p0, bool p1, bool p2) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc4_ = NAN;
    RT_FN("S__26_c.S__3e__21_h");
    (l_A__loc4_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0)));
    if ((!l_param1)) {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 4.0))));
    }
    if (l_param2) {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 4.0))));
    }
    if (l_param3) {
        return l_A__loc4_;
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__40__22__40___id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__40__22__40_::sm_S__2c__21_G()))));
    }
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__20__21__2c___id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__20__21__2c_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__5b__21_y__id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__5b__21_y::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3d__22_9__id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__3d__22_9::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_5_22_3__id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S_5_22_3::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S_2_22__21_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_3_22__3f___id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S_3_22__3f_::sm_S__2c__21_G()))));
    }
    if ((C_S__26_c::sm_S__5b__21_s(g::SV.C_S__40__21_p__id) && C_S_8G::sm_S__3c_P(g::SV.C_S_7_22_D__id))) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__40__21_p::sm_S__2c__21_G()))));
    }
    return l_A__loc4_;
    return 0.0;
}
bool C_S__26_c::dsm_S_6_22_K_0() { return false; }
bool C_S__26_c::dsm_S_6_22_K_1() { return false; }
bool C_S__26_c::dsm_S_6_22_K_2() { return false; }
double C_S__26_c::sm_S_6_22_K(bool p0, bool p1, bool p2) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc4_ = NAN;
    RT_FN("S__26_c.S_6_22_K");
    (l_A__loc4_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 87.0)));
    if ((!l_param1)) {
        (l_A__loc4_ = rt::m_max2(l_A__loc4_, rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 87.0))));
    }
    if (l_param2) {
        (l_A__loc4_ = rt::m_max2(l_A__loc4_, rt::tonum(rt::arr_at(g::SV.C_S_8G__S__40_w, 87.0))));
    }
    if (l_param3) {
        return l_A__loc4_;
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__40__22__40___id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__40__22__40_::sm_S__2c__21_G()))));
    }
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__20__21__2c___id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__20__21__2c_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__5b__21_y__id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__5b__21_y::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3d__22_9__id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__3d__22_9::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_5_22_3__id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S_5_22_3::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S_2_22__21_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_3_22__3f___id)) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S_3_22__3f_::sm_S__2c__21_G()))));
    }
    if ((C_S__26_c::sm_S__5b__21_s(g::SV.C_S__40__21_p__id) && C_S_8G::sm_S__3c_P(g::SV.C_S_7_22_D__id))) {
        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__40__21_p::sm_S__2c__21_G()))));
    }
    return l_A__loc4_;
    return 0.0;
}
double C_S__26_c::sm_S__21__21_8() {
    double l_A__loc1_ = NAN;
    RT_FN("S__26_c.S__21__21_8");
    (l_A__loc1_ = C_S_8G::sg_S_1_21_5());
    if (C_S_8G::sm_S_7d(g::SV.C_S__5e__22__24___id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__5e__22__24_::sm_S__2c__21_G()))));
    }
    if (C_S__26_c::sm_S__3b_X(g::SV.C_S__60__22__24___id, C_S__26_c::dsm_S__3b_X_1(), C_S__26_c::dsm_S__3b_X_2())) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__60__22__24_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_4_21_6__id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S_4_21_6::sm_S__2c__21_G()))));
    }
    if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__3d__22__2d___id) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id))) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__3d__22__2d_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3b__22_A__id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__3b__22_A::sm_S__2c__21_G()))));
    }
    return l_A__loc1_;
    return 0.0;
}
double C_S__26_c::sm_S_6_21_x() {
    double l_A__loc2_ = NAN;
    double l_A__loc1_ = NAN;
    RT_FN("S__26_c.S_6_21_x");
    (l_A__loc2_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 98.0)));
    if (C_S_8G::sm_S_7d(g::SV.C_S__5e__22__24___id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S__5e__22__24_::sm_S__2c__21_G()))));
    }
    if (C_S__26_c::sm_S__3b_X(g::SV.C_S__60__22__24___id, C_S__26_c::dsm_S__3b_X_1(), C_S__26_c::dsm_S__3b_X_2())) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S__60__22__24_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_4_21_6__id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S_4_21_6::sm_S__2c__21_G()))));
    }
    if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__3d__22__2d___id) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id))) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S__3d__22__2d_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3b__22_A__id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S__3b__22_A::sm_S__2c__21_G()))));
    }
    (l_A__loc1_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 98.0)));
    if (C_S_8G::sm_S_7d(g::SV.C_S__5e__22__24___id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__5e__22__24_::sm_S__2c__21_G()))));
    }
    if (C_S__26_c::sm_S__3b_X(g::SV.C_S__60__22__24___id, C_S__26_c::dsm_S__3b_X_1(), C_S__26_c::dsm_S__3b_X_2())) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__60__22__24_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_4_21_6__id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S_4_21_6::sm_S__2c__21_G()))));
    }
    if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__3d__22__2d___id) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id))) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__3d__22__2d_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3b__22_A__id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__3b__22_A::sm_S__2c__21_G()))));
    }
    return rt::m_max2(l_A__loc1_, l_A__loc2_);
    return 0.0;
}
bool C_S__26_c::dsm_S__23__22__21__0() { return true; }
bool C_S__26_c::dsm_S__23__22__21__1() { return false; }
bool C_S__26_c::dsm_S__23__22__21__2() { return false; }
double C_S__26_c::sm_S__23__22__21_(bool p0, bool p1, bool p2) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc4_ = NAN;
    RT_FN("S__26_c.S__23__22__21_");
    (l_A__loc4_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 35.0)));
    if ((!l_param1)) {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 35.0))));
    }
    if (l_param2) {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 35.0))));
    }
    if ((!l_param3)) {
        if (C_S_8G::sm_S_7d(g::SV.C_S__5e__22__24___id)) {
            (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__5e__22__24_::sm_S__2c__21_G()))));
        }
        if (C_S__26_c::sm_S__3b_X(g::SV.C_S__60__22__24___id, C_S__26_c::dsm_S__3b_X_1(), C_S__26_c::dsm_S__3b_X_2())) {
            (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__60__22__24_::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S_4_21_6__id)) {
            (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S_4_21_6::sm_S__2c__21_G()))));
        }
        if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__3d__22__2d___id) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id))) {
            (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__3d__22__2d_::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__3b__22_A__id)) {
            (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__3b__22_A::sm_S__2c__21_G()))));
        }
    }
    return l_A__loc4_;
    return 0.0;
}
double C_S__26_c::sm_S__5b__21_j() {
    double l_A__loc1_ = NAN;
    RT_FN("S__26_c.S__5b__21_j");
    (l_A__loc1_ = ((double)(C_S_8G::sg_S__3b__21__20_())));
    if (C_S_8G::sm_S_7d(g::SV.C_S__20__22_B__id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__20__22_B::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3d__22_3__id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__3d__22_3::sm_S__2c__21_G()))));
    }
    if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__3d__22__2d___id) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id))) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__3d__22__2d_::sm_S__2c__21_G()))));
    }
    if (C_S__26_c::sm_S__3b_X(g::SV.C_S__60__22__24___id, C_S__26_c::dsm_S__3b_X_1(), C_S__26_c::dsm_S__3b_X_2())) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__60__22__24_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__5d_u__id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__5d_u::sm_S__2c__21_G()))));
    }
    return l_A__loc1_;
    return 0.0;
}
uint32_t C_S__26_c::sm_S__3b__22__24_(double p0) {
    double l_param1 = p0;
    RT_FN("S__26_c.S__3b__22__24_");
    return rt::touint_d(rt::m_floor(l_param1));
    return 0u;
}
double C_S__26_c::sm_S_2_21__26_() {
    double l_A__loc1_ = NAN;
    RT_FN("S__26_c.S_2_21__26_");
    (l_A__loc1_ = C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()));
    if (C_S_8G::sm_S_7d(g::SV.C_S__2c__22__26___id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__2c__22__26_::sm_S__2c__21_G()))));
    }
    return l_A__loc1_;
    return 0.0;
}
bool C_S__26_c::dsm_S_57_0() { return false; }
double C_S__26_c::sm_S_57(bool p0) {
    bool l_param1 = p0;
    double l_A__loc2_ = NAN;
    RT_FN("S__26_c.S_57");
    (l_A__loc2_ = (l_param1 ? C_S__23__21__21_::sm_S_8k(true) : C_S__23__21__21_::sm_S_57()));
    if (C_S_8G::sm_S_7d(g::SV.C_S_8_22__24___id)) {
        (l_A__loc2_ = (l_A__loc2_ * (1.0 + (0.01 * C_S_8_22__24_::sm_S__2c__21_G()))));
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::dsm_S_3_22__26__0() { return false; }
bool C_S__26_c::dsm_S_3_22__26__1() { return false; }
bool C_S__26_c::dsm_S_3_22__26__2() { return false; }
double C_S__26_c::sm_S_3_22__26_(bool p0, bool p1, bool p2) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc4_ = NAN;
    RT_FN("S__26_c.S_3_22__26_");
    (l_A__loc4_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 16.0)));
    if ((!l_param1)) {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 16.0))));
    }
    if (l_param2) {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 16.0))));
    }
    if ((!l_param3)) {
        if (C_S_8G::sm_S_7d(g::SV.C_S__3e__22__24___id)) {
            (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__3e__22__24_::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S__3c__21_B(g::SV.C_S_9_21_n__id)) {
            (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S_9_21_n::sm_S__2c__21_G()))));
        }
    }
    return l_A__loc4_;
    return 0.0;
}
rt::Value C_S__26_c::sm_S_6_21__5f_(double p0) {
    double l_param1 = p0;
    RT_FN("S__26_c.S_6_21__5f_");
    if (((!((l_param1 * 0.0) == 0.0)) || (l_param1 < 0.0))) {
        return rt::NUL;
    }
    (g::SV.C_S__26_c__S_3_21__3c_ = (g::SV.C_S__26_c__S_3_21__3c_ + l_param1));
    return rt::NUL;
}
rt::Value C_S__26_c::sm_S__2d_0() {
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc4_ = 0;
    double l_A__loc1_ = NAN;
    int32_t l_A__loc5_ = 0;
    RT_FN("S__26_c.S__2d_0");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc1_ = NAN);
    (l_A__loc5_ = rt::toint_d(0.0));
    if ((g::SV.C_S__26_c__S_3_21__3c_ <= 0.0)) {
        return rt::NUL;
    }
    if ((g::SV.C_S__26_c__S_3_21__3c_ > 100.0)) {
        (l_A__loc4_ = rt::toint_d((C_S__26_c::sm_S__27__21__5f_() ? 8.0 : 6.0)));
        (l_A__loc1_ = rt::m_floor((((g::SV.C_S__26_c__S_3_21__3c_ - 100.0)) / ((double)(l_A__loc4_)))));
        (g::SV.C_S__26_c__S_3_21__3c_ = (g::SV.C_S__26_c__S_3_21__3c_ - (l_A__loc1_ * ((double)(l_A__loc4_)))));
        (l_A__loc2_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc2_)) < ((double)(l_A__loc4_)))) {
            (l_A__loc5_ = l_A__loc2_);
            if ((((double)(l_A__loc5_)) == 6.0)) {
                (l_A__loc5_ = rt::toint_d(9.0));
            }
            if ((((double)(l_A__loc5_)) == 7.0)) {
                (l_A__loc5_ = rt::toint_d(10.0));
            }
            (void)(C_S__26_c::sm_S__27__3d_(l_A__loc1_, l_A__loc5_));
            (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
        }
    }
    (l_A__loc2_ = rt::toint_d(g::SV.C_S__26_c__S_3_21__3c_));
    while ((((double)(l_A__loc2_)) > 0.0)) {
        (void)(C_S__26_c::sm_S__27__3d_(1.0, C_S__26_c::sm_S_6_21_9()));
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) - 1.0)));
    }
    (g::SV.C_S__26_c__S_3_21__3c_ = 0.0);
    return rt::NUL;
}
double C_S__26_c::sm_S__27__3d_(double p0, int32_t p1) {
    double l_param1 = p0;
    int32_t l_param2 = p1;
    double l_A__loc4_ = NAN;
    double l_A__loc3_ = NAN;
    double l_A__loc5_ = NAN;
    double l_A__loc6_ = NAN;
    int32_t l_A__loc7_ = 0;
    RT_FN("S__26_c.S__27__3d_");
    (l_A__loc4_ = NAN);
    (l_A__loc3_ = NAN);
    (l_A__loc5_ = NAN);
    (l_A__loc6_ = NAN);
    if (((!((l_param1 * 0.0) == 0.0)) || (l_param1 < 0.0))) {
        return 0.0;
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S__5b__22_E__id) && (((double)(l_param2)) == 2.0))) {
        (l_param1 = (l_param1 * C_S__5b__22_E::sm_S__2c__21_G()));
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S__40__22_J__id) && (((double)(C_S_8G::sg_S_8_21_H())) >= 58.0))) {
        (l_A__loc4_ = 0.0);
        (l_A__loc3_ = 0.0);
        (l_A__loc5_ = C_S_7_22_9::sm_S_5_22_0(C_S_7_22_9::dsm_S_5_22_0_0()));
        (l_A__loc6_ = ((((double)(C_S_8G::sg_S_8_21_H())) >= 115.0) ? C_S__3f__22_J::sm_S__2d__21_r(C_S__3f__22_J::dsm_S__2d__21_r_0()) : 0.0));
        if (((((double)(l_param2)) == ((double)(g::SV.C_S_8G__S__2d__21__5e_))) || (((double)(l_param2)) == ((double)(g::SV.C_S_8G__S__23_3))))) {
            (l_A__loc4_ = (l_A__loc4_ + l_A__loc5_));
            (l_A__loc3_ = (l_A__loc3_ + l_A__loc6_));
        }
        if (C_S__26_c::sm_S_4_21_(g::SV.C_S_8G__S__2d__21__5e_, l_param2)) {
            (l_A__loc4_ = (l_A__loc4_ + (l_A__loc5_ / 2.0)));
            (l_A__loc3_ = (l_A__loc3_ + (l_A__loc6_ / 2.0)));
        }
        if (C_S__26_c::sm_S_4_21_(g::SV.C_S_8G__S__23_3, l_param2)) {
            (l_A__loc4_ = (l_A__loc4_ + (l_A__loc5_ / 2.0)));
            (l_A__loc3_ = (l_A__loc3_ + (l_A__loc6_ / 2.0)));
        }
        if (C_S__26_c::sm_S_4_21_(g::SV.C_S_8G__S__2d__21_x, l_param2)) {
            (l_A__loc4_ = (l_A__loc4_ + (l_A__loc5_ / 2.0)));
            (l_A__loc3_ = (l_A__loc3_ + (l_A__loc6_ / 2.0)));
        }
        if ((((double)(l_param2)) == ((double)(g::SV.C_S__23__21__21___S__60_Q)))) {
            (l_A__loc4_ = (l_A__loc4_ + l_A__loc5_));
            (l_A__loc3_ = (l_A__loc3_ + l_A__loc6_));
        } else if (C_S__26_c::sm_S_4_21_(g::SV.C_S__23__21__21___S__60_Q, l_param2)) {
            (l_A__loc4_ = (l_A__loc4_ + (l_A__loc5_ / 2.0)));
            (l_A__loc3_ = (l_A__loc3_ + (l_A__loc6_ / 2.0)));
        }
        if ((((double)(l_param2)) == ((double)(g::SV.C_S__23__21__21___S_3_21_j)))) {
            (l_A__loc4_ = (l_A__loc4_ + l_A__loc5_));
            (l_A__loc3_ = (l_A__loc3_ + l_A__loc6_));
        } else if (C_S__26_c::sm_S_4_21_(g::SV.C_S__23__21__21___S_3_21_j, l_param2)) {
            (l_A__loc4_ = (l_A__loc4_ + (l_A__loc5_ / 2.0)));
            (l_A__loc3_ = (l_A__loc3_ + (l_A__loc6_ / 2.0)));
        }
        if ((((double)(l_param2)) == ((double)(g::SV.C_S__23__21__21___S_6_21_r)))) {
            (l_A__loc3_ = (l_A__loc3_ + l_A__loc6_));
        } else if (C_S__26_c::sm_S_4_21_(g::SV.C_S__23__21__21___S_6_21_r, l_param2)) {
            (l_A__loc3_ = (l_A__loc3_ + (l_A__loc6_ / 2.0)));
        }
        if (((((double)(l_param2)) == ((double)(g::SV.C_S__23__21__21___S_1_22_0))) && C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__5d__22__2d___id))) {
            (l_A__loc3_ = (l_A__loc3_ + l_A__loc6_));
        } else if ((C_S__26_c::sm_S_4_21_(g::SV.C_S__23__21__21___S_1_22_0, l_param2) && C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__5d__22__2d___id))) {
            (l_A__loc3_ = (l_A__loc3_ + (l_A__loc6_ / 2.0)));
        }
        if ((l_A__loc4_ > 0.0)) {
            (l_param1 = (l_param1 * l_A__loc4_));
        }
        if ((l_A__loc3_ > 0.0)) {
            (l_param1 = (l_param1 * l_A__loc3_));
            if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S_9_22__2c___id)) {
                (l_param1 = (l_param1 * rt::m_pow(8.0, (l_A__loc3_ / l_A__loc6_))));
            }
        }
        if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__5d__22__2d___id) && (!(((double)(g::SV.C_S__23__21__21___S_1_22_0)) == (-1.0))))) {
            if ((((double)(l_param2)) == ((double)(g::SV.C_S__23__21__21___S_1_22_0)))) {
                (l_param1 = (l_param1 * (1.0 + (0.01 * C_S__5d__22__2d_::sm_S__2c__21_G()))));
            } else if (C_S__26_c::sm_S_4_21_(g::SV.C_S__23__21__21___S_1_22_0, l_param2)) {
                (l_param1 = (l_param1 * (1.0 + (0.01 * ((C_S__5d__22__2d_::sm_S__2c__21_G() / 2.0))))));
            }
        }
    }
    (l_param1 = rt::m_floor(l_param1));
    (l_A__loc7_ = C_S__26_c::sm_S_1_21_D(l_param2));
    ({ rt::Value _o10246 = g::SV.C_S_8G__S_6_21_R; rt::Value _i10247 = rt::V((double)(l_param2)); rt::Value _v10248 = rt::add(rt::idx_get(_o10246, _i10247), rt::V(l_param1)); rt::idx_set(_o10246, _i10247, _v10248); _v10248; });
    ({ rt::Value _o10249 = g::SV.C_S_8G__S_5_21_V; rt::Value _i10250 = rt::V((double)(l_A__loc7_)); rt::Value _v10251 = rt::add(rt::idx_get(_o10249, _i10250), rt::V(l_param1)); rt::idx_set(_o10249, _i10250, _v10251); _v10251; });
    ({ rt::Value _v10252 = rt::V(C_S__26_c::sm_S__40__21__5b_(true, false, true)); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(148.0), _v10252); });
    return l_param1;
    return 0.0;
}
bool C_S__26_c::sm_S_4_21_(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__26_c.S_4_21_");
    if (((((double)(l_param1)) == 6.0) && ((((double)(l_param2)) == 2.0) || (((double)(l_param2)) == 3.0)))) {
        return true;
    }
    if (((((double)(l_param1)) == 7.0) && ((((double)(l_param2)) == 1.0) || (((double)(l_param2)) == 5.0)))) {
        return true;
    }
    if (((((double)(l_param1)) == 8.0) && ((((double)(l_param2)) == 0.0) || (((double)(l_param2)) == 4.0)))) {
        return true;
    }
    if (((((double)(l_param1)) == 12.0) && ((((double)(l_param2)) == 9.0) || (((double)(l_param2)) == 10.0)))) {
        return true;
    }
    if (((((double)(l_param1)) == 13.0) && ((((double)(l_param2)) == 2.0) || (((double)(l_param2)) == 4.0)))) {
        return true;
    }
    if (((((double)(l_param1)) == 14.0) && ((((double)(l_param2)) == 0.0) || (((double)(l_param2)) == 5.0)))) {
        return true;
    }
    if (((((double)(l_param1)) == 15.0) && ((((double)(l_param2)) == 1.0) || (((double)(l_param2)) == 3.0)))) {
        return true;
    }
    return false;
    return false;
}
int32_t C_S__26_c::sm_S_6_21_9() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S__26_c.S_6_21_9");
    if ((!C_S__26_c::sm_S__27__21__5f_())) {
        return rt::toint_d(rt::m_floor(C_S__26_c::sm_S__3b__21__2c_(0.0, 6.0)));
    }
    (l_A__loc1_ = rt::toint_d(rt::m_floor(C_S__26_c::sm_S__3b__21__2c_(0.0, 8.0))));
    if ((((double)(l_A__loc1_)) == 6.0)) {
        return rt::toint_d(9.0);
    }
    if ((((double)(l_A__loc1_)) == 7.0)) {
        return rt::toint_d(10.0);
    }
    return l_A__loc1_;
    return 0;
}
int32_t C_S__26_c::sm_S_1_21_D(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S_1_21_D");
    if ((((double)(l_param1)) == 9.0)) {
        return rt::toint_d(41.0);
    }
    if ((((double)(l_param1)) == 10.0)) {
        return rt::toint_d(42.0);
    }
    return rt::toint_d((6.0 + ((double)(l_param1))));
    return 0;
}
int32_t C_S__26_c::sm_S__5e_Z(int32_t p0) {
    int32_t l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    RT_FN("S__26_c.S__5e_Z");
    (l_A__loc2_ = rt::toint_d((17.0 + ((double)(l_param1)))));
    if ((((double)(l_param1)) == 6.0)) {
        (l_A__loc2_ = rt::toint_d(32.0));
    }
    if ((((double)(l_param1)) == 7.0)) {
        (l_A__loc2_ = rt::toint_d(33.0));
    }
    if ((((double)(l_param1)) == 8.0)) {
        (l_A__loc2_ = rt::toint_d(34.0));
    }
    if ((((double)(l_param1)) == 9.0)) {
        (l_A__loc2_ = rt::toint_d(43.0));
    }
    if ((((double)(l_param1)) == 10.0)) {
        (l_A__loc2_ = rt::toint_d(44.0));
    }
    if ((((double)(l_param1)) == 11.0)) {
        (l_A__loc2_ = rt::toint_d(49.0));
    }
    if ((((double)(l_param1)) == 12.0)) {
        (l_A__loc2_ = rt::toint_d(78.0));
    }
    if ((((double)(l_param1)) == 13.0)) {
        (l_A__loc2_ = rt::toint_d(136.0));
    }
    if ((((double)(l_param1)) == 14.0)) {
        (l_A__loc2_ = rt::toint_d(137.0));
    }
    if ((((double)(l_param1)) == 15.0)) {
        (l_A__loc2_ = rt::toint_d(138.0));
    }
    return l_A__loc2_;
    return 0;
}
bool C_S__26_c::dsm_S_0F_0() { return false; }
double C_S__26_c::sm_S_0F(bool p0) {
    bool l_param1 = p0;
    RT_FN("S__26_c.S_0F");
    return C_S__23__21__21_::sm_S_0F(l_param1, C_S__23__21__21_::dsm_S_0F_1());
    return 0.0;
}
bool C_S__26_c::dsm_S_9_5b__0() { return false; }
bool C_S__26_c::dsm_S_9_5b__1() { return false; }
bool C_S__26_c::dsm_S_9_5b__2() { return false; }
double C_S__26_c::sm_S_9_5b_(bool p0, bool p1, bool p2) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc4_ = NAN;
    double l_A__loc7_ = NAN;
    double l_A__loc5_ = NAN;
    RT_FN("S__26_c.S_9_5b_");
    (l_A__loc4_ = 0.0);
    (l_A__loc7_ = 0.0);
    (l_A__loc5_ = 0.0);
    if ((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0))) {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 62.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 62.0)))));
        if (l_param1) {
            (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, 62.0))));
        }
    } else {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__2d__21__5e_)))), rt::arr_at(g::SV.C_S_8G__S__3d_y, ((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__2d__21__5e_))))))));
        if (l_param1) {
            (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, ((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__2d__21__5e_)))))));
        }
        if ((({ bool _t10253 = (!l_param3); _t10253 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t10253; }) && C_S_8G::sm_S_7d(g::SV.C_S__60__22_3__id))) {
            (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * g::SV.C_S__60__22_3__S_6_21_c))));
        }
    }
    if ((!(((double)(g::SV.C_S_8G__S__23_3)) == (-1.0)))) {
        (l_A__loc7_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__23_3)))), rt::arr_at(g::SV.C_S_8G__S__3d_y, ((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__23_3)))))));
        if (l_param1) {
            (l_A__loc7_ = rt::tonum(rt::add(rt::V(l_A__loc7_), rt::arr_at(g::SV.C_S_8G__S__40_w, ((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__23_3)))))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__60__22_3__id)) {
            (l_A__loc7_ = (l_A__loc7_ * (1.0 + (0.01 * g::SV.C_S__60__22_3__S_1_21_S))));
        }
    }
    if ((!(((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0)))) {
        (l_A__loc5_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__2d__21_x)))), rt::arr_at(g::SV.C_S_8G__S__3d_y, ((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__2d__21_x)))))));
        if (l_param1) {
            (l_A__loc5_ = rt::tonum(rt::add(rt::V(l_A__loc5_), rt::arr_at(g::SV.C_S_8G__S__40_w, ((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__2d__21_x)))))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__60__22_3__id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * g::SV.C_S__60__22_3__S_6_21_c))));
        }
    }
    return C_S__26_c::sm_S_1_22__26_(rt::m_maxv(rt::V(l_A__loc4_), rt::V(l_A__loc7_), rt::V(l_A__loc5_)));
    return 0.0;
}
bool C_S__26_c::dsm_S__22__21_B_1() { return false; }
bool C_S__26_c::dsm_S__22__21_B_2() { return false; }
bool C_S__26_c::dsm_S__22__21_B_3() { return false; }
bool C_S__26_c::dsm_S__22__21_B_4() { return false; }
double C_S__26_c::sm_S__22__21_B(int32_t p0, bool p1, bool p2, bool p3, bool p4) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    bool l_param4 = p3;
    bool l_param5 = p4;
    double l_A__loc6_ = NAN;
    RT_FN("S__26_c.S__22__21_B");
    (l_A__loc6_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_param1)))));
    if ((!l_param3)) {
        (l_A__loc6_ = rt::tonum(rt::add(rt::V(l_A__loc6_), rt::arr_at(g::SV.C_S_8G__S__3d_y, ((double)(l_param1))))));
    }
    if (l_param2) {
        (l_A__loc6_ = rt::tonum(rt::add(rt::V(l_A__loc6_), rt::arr_at(g::SV.C_S_8G__S__40_w, ((double)(l_param1))))));
    }
    if (l_param5) {
        return l_A__loc6_;
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S__60__22_3__id) && (({ bool _t10254 = (((double)(l_param1)) == 59.0); _t10254 ? _t10254 : (bool)((((double)(l_param1)) == 60.0)); }) || (((double)(l_param1)) == 79.0)))) {
        (l_A__loc6_ = (l_A__loc6_ * (1.0 + (0.01 * g::SV.C_S__60__22_3__S_1_21_S))));
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S__60__22_3__id) && (({ bool _t10256 = ({ bool _t10255 = (((double)(l_param1)) == 141.0); _t10255 ? _t10255 : (bool)((((double)(l_param1)) == 139.0)); }); _t10256 ? _t10256 : (bool)((((double)(l_param1)) == 140.0)); }) || (((double)(l_param1)) == 61.0)))) {
        (l_A__loc6_ = (l_A__loc6_ * (1.0 + (0.01 * g::SV.C_S__60__22_3__S_6_21_c))));
    }
    if ((((double)(l_param1)) == 1.0)) {
        if (C_S_8G::sm_S_7d(g::SV.C_S_1_22__25___id)) {
            (l_A__loc6_ = (l_A__loc6_ + C_S_1_22__25_::sm_S__2c__21_G()));
        }
        if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__60__22__2d___id)) {
            (l_A__loc6_ = (l_A__loc6_ + C_S__60__22__2d_::sm_S__2c__21_G()));
        }
    }
    return C_S__26_c::sm_S_1_22__26_(l_A__loc6_);
    return 0.0;
}
double C_S__26_c::sm_S_1_22__26_(double p0) {
    double l_param1 = p0;
    RT_FN("S__26_c.S_1_22__26_");
    if ((C_S_8G::sm_S_7d(g::SV.C_S__5e_M__id) && C_S__26_c::sm_S__5d_B(g::SV.C_S_9a__id, C_S__26_c::dsm_S__5d_B_1()))) {
        (l_param1 = (l_param1 * (1.0 + (0.01 * C_S__5e_M::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__23__22__26___id)) {
        (l_param1 = (l_param1 * (1.0 + (0.01 * C_S__23__22__26_::sm_S__2c__21_G()))));
    }
    return l_param1;
    return 0.0;
}
bool C_S__26_c::dsm_S__40__22_3_1() { return false; }
bool C_S__26_c::dsm_S__40__22_3_2() { return false; }
bool C_S__26_c::dsm_S__40__22_3_3() { return false; }
bool C_S__26_c::dsm_S__40__22_3_4() { return false; }
double C_S__26_c::sm_S__40__22_3(bool p0, bool p1, bool p2, bool p3, bool p4) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    bool l_param4 = p3;
    bool l_param5 = p4;
    int32_t l_A__loc8_ = 0;
    double l_A__loc9_ = NAN;
    int32_t l_A__loc7_ = 0;
    double l_A__loc6_ = NAN;
    RT_FN("S__26_c.S__40__22_3");
    (l_A__loc8_ = rt::toint_d(0.0));
    (l_A__loc9_ = NAN);
    (l_A__loc7_ = rt::toint_d(0.0));
    (l_A__loc6_ = (l_param1 ? 1.7976931348623157e+308 : 0.0));
    (l_A__loc8_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc8_)) <= 15.0)) {
        if ((!((((double)(C_S_8G::sg_S__2c_P())) >= 2.0) && (((double)(l_A__loc8_)) == 11.0)))) {
            if ((!((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) && (({ bool _t10260 = ({ bool _t10259 = ({ bool _t10258 = ({ bool _t10257 = (((double)(l_A__loc8_)) == 12.0); _t10257 ? _t10257 : (bool)((((double)(l_A__loc8_)) == 9.0)); }); _t10258 ? _t10258 : (bool)((((double)(l_A__loc8_)) == 10.0)); }); _t10259 ? _t10259 : (bool)((((double)(l_A__loc8_)) == 13.0)); }); _t10260 ? _t10260 : (bool)((((double)(l_A__loc8_)) == 14.0)); }) || (((double)(l_A__loc8_)) == 15.0))))) {
                (l_A__loc9_ = C_S__26_c::sm_S__22__21_B(C_S__26_c::sm_S__3b__21_4(l_A__loc8_), l_param2, l_param3, l_param4, l_param5));
                if ((({ bool _t10261 = l_param1; _t10261 ? (bool)((l_A__loc9_ < l_A__loc6_)) : _t10261; }) || ((!l_param1) && (l_A__loc9_ > l_A__loc6_)))) {
                    (l_A__loc6_ = l_A__loc9_);
                    (l_A__loc7_ = l_A__loc8_);
                }
            }
        }
        (l_A__loc8_ = rt::toint_d((((double)(l_A__loc8_)) + 1.0)));
    }
    return ((double)(l_A__loc7_));
    return 0.0;
}
bool C_S__26_c::dsm_S__3e__21_y_1() { return false; }
bool C_S__26_c::dsm_S__3e__21_y_2() { return false; }
bool C_S__26_c::dsm_S__3e__21_y_3() { return false; }
bool C_S__26_c::dsm_S__3e__21_y_4() { return false; }
double C_S__26_c::sm_S__3e__21_y(bool p0, bool p1, bool p2, bool p3, bool p4) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    bool l_param4 = p3;
    bool l_param5 = p4;
    int32_t l_A__loc7_ = 0;
    double l_A__loc8_ = NAN;
    double l_A__loc6_ = NAN;
    RT_FN("S__26_c.S__3e__21_y");
    (l_A__loc7_ = rt::toint_d(0.0));
    (l_A__loc8_ = NAN);
    (l_A__loc6_ = (l_param1 ? 1.7976931348623157e+308 : 0.0));
    (l_A__loc7_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc7_)) <= 15.0)) {
        if ((!((((double)(C_S_8G::sg_S__2c_P())) >= 2.0) && (((double)(l_A__loc7_)) == 11.0)))) {
            if ((!((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) && (({ bool _t10265 = ({ bool _t10264 = ({ bool _t10263 = ({ bool _t10262 = (((double)(l_A__loc7_)) == 12.0); _t10262 ? _t10262 : (bool)((((double)(l_A__loc7_)) == 9.0)); }); _t10263 ? _t10263 : (bool)((((double)(l_A__loc7_)) == 10.0)); }); _t10264 ? _t10264 : (bool)((((double)(l_A__loc7_)) == 13.0)); }); _t10265 ? _t10265 : (bool)((((double)(l_A__loc7_)) == 14.0)); }) || (((double)(l_A__loc7_)) == 15.0))))) {
                (l_A__loc8_ = C_S__26_c::sm_S__22__21_B(C_S__26_c::sm_S__3b__21_4(l_A__loc7_), l_param2, l_param3, l_param4, l_param5));
                if ((({ bool _t10266 = l_param1; _t10266 ? (bool)((l_A__loc8_ < l_A__loc6_)) : _t10266; }) || ((!l_param1) && (l_A__loc8_ > l_A__loc6_)))) {
                    (l_A__loc6_ = l_A__loc8_);
                }
            }
        }
        (l_A__loc7_ = rt::toint_d((((double)(l_A__loc7_)) + 1.0)));
    }
    return ((l_A__loc6_ == 1.7976931348623157e+308) ? 0.0 : l_A__loc6_);
    return 0.0;
}
bool C_S__26_c::dsm_S__26__21_y_1() { return false; }
bool C_S__26_c::dsm_S__26__21_y_2() { return false; }
double C_S__26_c::sm_S__26__21_y(bool p0, bool p1, bool p2) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    int32_t l_A__loc5_ = 0;
    double l_A__loc6_ = NAN;
    double l_A__loc4_ = NAN;
    RT_FN("S__26_c.S__26__21_y");
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc6_ = NAN);
    (l_A__loc4_ = (l_param1 ? 1.7976931348623157e+308 : 0.0));
    (l_A__loc5_ = rt::toint_d(1.0));
    while ((((double)(l_A__loc5_)) <= (((((double)(C_S_8G::sg_S__2c_P())) < 2.0) ? 3.0 : 6.0)))) {
        (l_A__loc6_ = ((double)(C_S__26_c::sm_S__2d__22__21_(l_A__loc5_, l_param2, l_param3, C_S__26_c::dsm_S__2d__22__21__3()))));
        if ((({ bool _t10267 = l_param1; _t10267 ? (bool)((l_A__loc6_ < l_A__loc4_)) : _t10267; }) || ((!l_param1) && (l_A__loc6_ > l_A__loc4_)))) {
            (l_A__loc4_ = l_A__loc6_);
        }
        (l_A__loc5_ = rt::toint_d((((double)(l_A__loc5_)) + 1.0)));
    }
    return ((l_A__loc4_ == 1.7976931348623157e+308) ? 0.0 : l_A__loc4_);
    return 0.0;
}
bool C_S__26_c::dsm_S__3b__22_F_1() { return false; }
bool C_S__26_c::dsm_S__3b__22_F_2() { return false; }
double C_S__26_c::sm_S__3b__22_F(bool p0, bool p1, bool p2) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    int32_t l_A__loc5_ = 0;
    double l_A__loc7_ = NAN;
    double l_A__loc4_ = NAN;
    double l_A__loc6_ = NAN;
    RT_FN("S__26_c.S__3b__22_F");
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc7_ = NAN);
    (l_A__loc4_ = (-1.0));
    (l_A__loc6_ = (l_param1 ? 1.7976931348623157e+308 : 0.0));
    (l_A__loc5_ = rt::toint_d(1.0));
    while ((((double)(l_A__loc5_)) <= (((((double)(C_S_8G::sg_S__2c_P())) < 2.0) ? 3.0 : 6.0)))) {
        (l_A__loc7_ = ((double)(C_S__26_c::sm_S__2d__22__21_(l_A__loc5_, l_param2, l_param3, false))));
        if ((({ bool _t10268 = l_param1; _t10268 ? (bool)((l_A__loc7_ < l_A__loc6_)) : _t10268; }) || ((!l_param1) && (l_A__loc7_ > l_A__loc6_)))) {
            (l_A__loc6_ = l_A__loc7_);
            (l_A__loc4_ = ((double)(l_A__loc5_)));
        }
        (l_A__loc5_ = rt::toint_d((((double)(l_A__loc5_)) + 1.0)));
    }
    return l_A__loc4_;
    return 0.0;
}
bool C_S__26_c::dsm_S__2d__22__21__1() { return false; }
bool C_S__26_c::dsm_S__2d__22__21__2() { return false; }
bool C_S__26_c::dsm_S__2d__22__21__3() { return false; }
int32_t C_S__26_c::sm_S__2d__22__21_(int32_t p0, bool p1, bool p2, bool p3) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    bool l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S__26_c.S__2d__22__21_");
    if ((((double)(l_param1)) == 1.0)) {
        return rt::toint_d(C_S__26_c::sm_S__22__21_B(rt::toint_d(2.0), l_param2, l_param3, l_param4, C_S__26_c::dsm_S__22__21_B_4()));
    }
    if ((((double)(l_param1)) == 2.0)) {
        return rt::toint_d(C_S__26_c::sm_S__22__21_B(rt::toint_d(3.0), l_param2, l_param3, l_param4, C_S__26_c::dsm_S__22__21_B_4()));
    }
    if ((((double)(l_param1)) == 4.0)) {
        return rt::toint_d(C_S__26_c::sm_S__22__21_B(rt::toint_d(48.0), l_param2, l_param3, l_param4, C_S__26_c::dsm_S__22__21_B_4()));
    }
    if ((((double)(l_param1)) == 5.0)) {
        return rt::toint_d(C_S__26_c::sm_S__22__21_B(rt::toint_d(36.0), l_param2, l_param3, l_param4, C_S__26_c::dsm_S__22__21_B_4()));
    }
    if ((((double)(l_param1)) == 6.0)) {
        return rt::toint_d(C_S__26_c::sm_S__22__21_B(rt::toint_d(14.0), l_param2, l_param3, l_param4, C_S__26_c::dsm_S__22__21_B_4()));
    }
    (l_A__loc5_ = C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), l_param2, l_param3, l_param4, true));
    return rt::toint_d(C_S__26_c::sm_S_1_22__26_(((l_A__loc5_ - C_S__26_c::sm_S__22__21_B(rt::toint_d(2.0), l_param2, l_param3, l_param4, true)) - C_S__26_c::sm_S__22__21_B(rt::toint_d(3.0), l_param2, l_param3, l_param4, true))));
    return 0;
}
bool C_S__26_c::sm_S__3e__21_v(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S__3e__21_v");
    return ({ bool _t10273 = ({ bool _t10272 = ({ bool _t10271 = ({ bool _t10270 = ({ bool _t10269 = (((double)(l_param1)) == 10.0); _t10269 ? _t10269 : (bool)((((double)(l_param1)) == 9.0)); }); _t10270 ? _t10270 : (bool)((((double)(l_param1)) == 12.0)); }); _t10271 ? _t10271 : (bool)((((double)(l_param1)) == 13.0)); }); _t10272 ? _t10272 : (bool)((((double)(l_param1)) == 14.0)); }); _t10273 ? _t10273 : (bool)((((double)(l_param1)) == 15.0)); });
    return false;
}
int32_t C_S__26_c::sm_S__3b__21_4(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S__3b__21_4");
    if ((((double)(l_param1)) == 12.0)) {
        return rt::toint_d(79.0);
    }
    if ((((double)(l_param1)) == 13.0)) {
        return rt::toint_d(139.0);
    }
    if ((((double)(l_param1)) == 14.0)) {
        return rt::toint_d(140.0);
    }
    if ((((double)(l_param1)) == 15.0)) {
        return rt::toint_d(141.0);
    }
    return rt::toint_d((50.0 + ((double)(l_param1))));
    return 0;
}
int32_t C_S__26_c::sm_S__3b__22_H(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S__3b__22_H");
    if ((((double)(l_param1)) == 1.0)) {
        return rt::toint_d(2.0);
    }
    if ((((double)(l_param1)) == 2.0)) {
        return rt::toint_d(3.0);
    }
    if ((((double)(l_param1)) == 4.0)) {
        return rt::toint_d(48.0);
    }
    if ((((double)(l_param1)) == 5.0)) {
        return rt::toint_d(36.0);
    }
    if ((((double)(l_param1)) == 6.0)) {
        return rt::toint_d(14.0);
    }
    return rt::toint_d(1.0);
    return 0;
}
bool C_S__26_c::dsm_S_3L_1() { return false; }
double C_S__26_c::sm_S_3L(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S_3L");
    (l_A__loc3_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 45.0)));
    if ((!l_param1)) {
        (l_A__loc3_ = rt::tonum(rt::add(rt::V(l_A__loc3_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 45.0))));
    }
    if ((!l_param2)) {
        if (C_S_8G::sm_S_7d(g::SV.C_S__25_s__id)) {
            (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__25_s::sm_S__40__21__5f_()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__3b__22_4__id)) {
            (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__3b__22_4::sm_S__2c__21_G()))));
        }
    }
    return C_S__26_c::sm_S_1_22__26_(l_A__loc3_);
    return 0.0;
}
rt::Value C_S__26_c::sm_S__3c_f(double p0) {
    double l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc3_ = rt::UNDEF;
    rt::Value l_A__loc4_ = rt::UNDEF;
    RT_FN("S__26_c.S__3c_f");
    (l_A__loc2_ = rt::toint_d(0.0));
    if (C_S_8G::sm_S__3c_P(g::SV.C_S_1S__id)) {
        if ((C_S_8G::sm_S_7d(g::SV.C_S__22__5b___id) && (!C_S_8G::sm_S_7d(g::SV.C_S__40__21__20___id)))) {
            (l_A__loc3_ = rt::V(81.0));
            (l_A__loc4_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc3_), rt::V(((C_S_8G::sm_S__3c__21_B(g::SV.C_S_8_3e___id) ? l_param1 : 0.0)))));
            ({ rt::Value _v10274 = l_A__loc4_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc3_, _v10274); });
        } else {
            (l_A__loc4_ = rt::V(81.0));
            (l_A__loc3_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc4_), rt::V(l_param1)));
            ({ rt::Value _v10275 = l_A__loc3_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc4_, _v10275); });
        }
    }
    if ((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0))) {
        (l_A__loc3_ = rt::V(62.0));
        (l_A__loc4_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc3_), rt::V(l_param1)));
        ({ rt::Value _v10276 = l_A__loc4_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc3_, _v10276); });
    } else {
        (l_A__loc4_ = rt::V((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__2d__21__5e_))));
        (l_A__loc3_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc4_), rt::V(l_param1)));
        ({ rt::Value _v10277 = l_A__loc3_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc4_, _v10277); });
    }
    if ((!(((double)(g::SV.C_S_8G__S__23_3)) == (-1.0)))) {
        (l_A__loc3_ = rt::V((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__23_3))));
        (l_A__loc4_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc3_), rt::V(l_param1)));
        ({ rt::Value _v10278 = l_A__loc4_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc3_, _v10278); });
    }
    if ((!(((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0)))) {
        (l_A__loc4_ = rt::V((double)(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__2d__21_x))));
        (l_A__loc3_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc4_), rt::V(l_param1)));
        ({ rt::Value _v10279 = l_A__loc3_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc4_, _v10279); });
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_6_22_G__id)) {
        (l_A__loc2_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc2_)) <= 15.0)) {
            if ((!(({ bool _t10280 = (((double)(l_A__loc2_)) == ((double)(g::SV.C_S_8G__S__2d__21__5e_))); _t10280 ? _t10280 : (bool)((((double)(l_A__loc2_)) == ((double)(g::SV.C_S_8G__S__23_3)))); }) || (((double)(l_A__loc2_)) == ((double)(g::SV.C_S_8G__S__2d__21_x)))))) {
                (l_A__loc3_ = rt::V((double)(C_S__26_c::sm_S__3b__21_4(l_A__loc2_))));
                (l_A__loc4_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc3_), rt::V((0.1 * l_param1))));
                ({ rt::Value _v10281 = l_A__loc4_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc3_, _v10281); });
            }
            (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
        }
    }
    if ((((double)(C_PlayFab::sg_season())) == 6.0)) {
        if (C_S_8G::sm_S_7d(g::SV.C_S__23_P__id)) {
            (l_A__loc4_ = rt::V(129.0));
            (l_A__loc3_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc4_), rt::V(l_param1)));
            ({ rt::Value _v10282 = l_A__loc3_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc4_, _v10282); });
        } else if (C_S_8G::sm_S_7d(g::SV.C_S__23__21_5__id)) {
            (l_A__loc3_ = rt::V(128.0));
            (l_A__loc4_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc3_), rt::V(l_param1)));
            ({ rt::Value _v10283 = l_A__loc4_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc3_, _v10283); });
        }
    } else if ((((double)(C_PlayFab::sg_season())) == 8.0)) {
        if (C_S_8G::sm_S_7d(g::SV.C_S__5d__21_j__id)) {
            (l_A__loc4_ = rt::V(85.0));
            (l_A__loc3_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc4_), rt::V(l_param1)));
            ({ rt::Value _v10284 = l_A__loc3_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc4_, _v10284); });
        } else if (C_S_8G::sm_S_7d(g::SV.C_S_2_21_i__id)) {
            (l_A__loc3_ = rt::V(86.0));
            (l_A__loc4_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc3_), rt::V(l_param1)));
            ({ rt::Value _v10285 = l_A__loc4_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc3_, _v10285); });
        }
    }
    (g::SV.C_S__23__21__21___S__40__21_r = rt::toint_d((((double)(g::SV.C_S__23__21__21___S__40__21_r)) + l_param1)));
    return rt::NUL;
}
rt::Value C_S__26_c::sm_S_9_22_H(double p0) {
    double l_param1 = p0;
    rt::Value l_A__loc2_ = rt::UNDEF;
    rt::Value l_A__loc3_ = rt::UNDEF;
    RT_FN("S__26_c.S_9_22_H");
    if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0)) {
        (l_A__loc2_ = rt::V(2.0));
        (l_A__loc3_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc2_), rt::V(l_param1)));
        ({ rt::Value _v10286 = l_A__loc3_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc2_, _v10286); });
    } else if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)) {
        (l_A__loc3_ = rt::V(3.0));
        (l_A__loc2_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc3_), rt::V(l_param1)));
        ({ rt::Value _v10287 = l_A__loc2_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc3_, _v10287); });
    }
    if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) {
        (l_A__loc2_ = rt::V(14.0));
        (l_A__loc3_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc2_), rt::V(l_param1)));
        ({ rt::Value _v10288 = l_A__loc3_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc2_, _v10288); });
    } else if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) {
        (l_A__loc3_ = rt::V(36.0));
        (l_A__loc2_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc3_), rt::V(l_param1)));
        ({ rt::Value _v10289 = l_A__loc2_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc3_, _v10289); });
    } else if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)) {
        (l_A__loc2_ = rt::V(48.0));
        (l_A__loc3_ = rt::add(rt::idx_get(g::SV.C_S_8G__S_5_21_V, l_A__loc2_), rt::V(l_param1)));
        ({ rt::Value _v10290 = l_A__loc3_; rt::idx_set(g::SV.C_S_8G__S_5_21_V, l_A__loc2_, _v10290); });
    }
    return rt::NUL;
}
int32_t C_S__26_c::sm_S__5b__21_1(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S__5b__21_1");
    if ((((double)(l_param1)) == 12.0)) {
        return rt::toint_d(80.0);
    }
    if ((((double)(l_param1)) == 13.0)) {
        return rt::toint_d(142.0);
    }
    if ((((double)(l_param1)) == 14.0)) {
        return rt::toint_d(143.0);
    }
    if ((((double)(l_param1)) == 15.0)) {
        return rt::toint_d(144.0);
    }
    return rt::toint_d((66.0 + ((double)(l_param1))));
    return 0;
}
double C_S__26_c::sm_S__23_L(int32_t p0) {
    int32_t l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    RT_FN("S__26_c.S__23_L");
    (l_A__loc2_ = C_S__26_c::sm_S__5b__21_1(l_param1));
    return rt::tonum(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc2_))), rt::arr_at(g::SV.C_S_8G__S__3d_y, ((double)(l_A__loc2_)))), rt::arr_at(g::SV.C_S_8G__S__40_w, ((double)(l_A__loc2_)))));
    return 0.0;
}
int32_t C_S__26_c::sm_S_3K(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S_3K");
    if ((((double)(l_param1)) == 6.0)) {
        return rt::toint_d(154.0);
    }
    return rt::toint_d((90.0 + ((double)(l_param1))));
    return 0;
}
int32_t C_S__26_c::dsm_S__26__21__3c__0() { return rt::toint_d((-1.0)); }
bool C_S__26_c::dsm_S__26__21__3c__1() { return false; }
int32_t C_S__26_c::sm_S__26__21__3c_(int32_t p0, bool p1) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    int32_t l_A__loc4_ = 0;
    int32_t l_A__loc6_ = 0;
    int32_t l_A__loc5_ = 0;
    int32_t l_A__loc3_ = 0;
    RT_FN("S__26_c.S__26__21__3c_");
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc6_ = rt::toint_d(0.0));
    (l_A__loc5_ = rt::toint_d(0.0));
    if ((!(((double)(l_param1)) == (-1.0)))) {
        (l_A__loc4_ = C_S__26_c::sm_S_3K(l_param1));
        return rt::toint(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc4_))), rt::arr_at(g::SV.C_S_8G__S__3d_y, ((double)(l_A__loc4_)))), rt::arr_at(g::SV.C_S_8G__S__40_w, ((double)(l_A__loc4_)))));
    }
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc6_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc6_)) <= 6.0)) {
        (l_A__loc5_ = C_S__26_c::sm_S_3K(l_A__loc6_));
        (l_A__loc3_ = rt::toint(rt::add(rt::V((double)(l_A__loc3_)), rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc5_))), rt::arr_at(g::SV.C_S_8G__S__3d_y, ((double)(l_A__loc5_)))), rt::arr_at(g::SV.C_S_8G__S__40_w, ((double)(l_A__loc5_)))))));
        (l_A__loc6_ = rt::toint_d((((double)(l_A__loc6_)) + 1.0)));
    }
    if ((!l_param2)) {
        if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__3d__22__2d___id) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id))) {
            (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) * (1.0 + (0.01 * C_S__3d__22__2d_::sm_S__2c__21_G())))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S_2_21__60___id)) {
            (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) * (1.0 + (0.01 * C_S_2_21__60_::sm_S__2c__21_G())))));
        }
        if (C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id)) {
            (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) * (1.0 + (0.01 * C_S_2_22__21_::sm_S__40__21__5f_())))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__20__22__26___id)) {
            (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) * (1.0 + (0.01 * C_S__20__22__26_::sm_S__2c__21_G())))));
        }
    }
    return l_A__loc3_;
    return 0;
}
int32_t C_S__26_c::dsm_S_1_22__2c__0() { return rt::toint_d((-1.0)); }
double C_S__26_c::sm_S_1_22__2c_(int32_t p0) {
    int32_t l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc4_ = rt::NUL;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S_1_22__2c_");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::NUL);
    (l_A__loc3_ = 0.0);
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) < rt::alen(g::SV.C_S_8G__S__2d__21_4))) {
        (l_A__loc4_ = rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc2_))));
        if ((({ bool _t10293 = rt::is_class(l_A__loc4_, C_S__26__21__5f_::CI); _t10293 ? (bool)(({ rt::Value _o10291 = l_A__loc4_; C_S__60_6* _p10292 = rt::as_ptr<C_S__60_6>(_o10291); _p10292 ? _p10292->f_S__3c__21_7 : rt::T(rt::dget(_o10291, NM_S__3c__21_7)); })) : _t10293; }) && ((((double)(l_param1)) == (-1.0)) || (((double)(({ rt::Value _o10295 = (({ rt::Value _t10294 = l_A__loc4_; rt::is_class(_t10294, C_S__26__21__5f_::CI) ? _t10294 : rt::NUL; })); C_S__26__21__5f_* _p10296 = rt::as_ptr<C_S__26__21__5f_>(_o10295); _p10296 ? _p10296->f_S__21_G : rt::toint(rt::dget(_o10295, NM_S__21_G)); }))) == ((double)(l_param1)))))) {
            (l_A__loc3_ = (l_A__loc3_ + ((double)(({ rt::Value _o10298 = (({ rt::Value _t10297 = l_A__loc4_; rt::is_class(_t10297, C_S__26__21__5f_::CI) ? _t10297 : rt::NUL; })); C_S__26__21__5f_* _p10299 = rt::as_ptr<C_S__26__21__5f_>(_o10298); _p10299 ? _p10299->f_S__25_w : rt::toint(rt::dget(_o10298, NM_S__25_w)); })))));
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return l_A__loc3_;
    return 0.0;
}
bool C_S__26_c::sm_S__3e__25_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S__3e__25_");
    if ((({ bool _t10305 = ({ bool _t10304 = ({ bool _t10303 = ({ bool _t10302 = ({ bool _t10301 = ({ bool _t10300 = (((double)(l_param1)) == 6.0); _t10300 ? _t10300 : (bool)((((double)(l_param1)) == 8.0)); }); _t10301 ? _t10301 : (bool)((((double)(l_param1)) == 7.0)); }); _t10302 ? _t10302 : (bool)((((double)(l_param1)) == 11.0)); }); _t10303 ? _t10303 : (bool)((((double)(l_param1)) == 12.0)); }); _t10304 ? _t10304 : (bool)((((double)(l_param1)) == 13.0)); }); _t10305 ? _t10305 : (bool)((((double)(l_param1)) == 14.0)); }) || (((double)(l_param1)) == 15.0))) {
        return false;
    }
    return true;
    return false;
}
double C_S__26_c::sm_S__5d__22_J() {
    double l_A__loc1_ = NAN;
    RT_FN("S__26_c.S__5d__22_J");
    (l_A__loc1_ = 0.0);
    if (C_S_8G::sm_S_7d(g::SV.C_S__22__22_B__id)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S__22__22_B::sm_S__2c__21_G()));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_0_21_Y__id)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S_0_21_Y::sm_S__2c__21_G()));
    }
    if ((C_S__26_c::sm_S__5b__21_s(g::SV.C_S_6_21_s__id) && C_S_8G::sm_S__3c_P(g::SV.C_S__3e__22__3f___id))) {
        (l_A__loc1_ = (l_A__loc1_ + C_S_6_21_s::sm_S__2c__21_G()));
    }
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S_5_22__2b___id)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S_5_22__2b_::sm_S__2c__21_G()));
    }
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__3f_D__id)) {
        (l_A__loc1_ = (l_A__loc1_ + 1.0));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_1_22__27___id)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S_1_22__27_::sm_S__2c__21_G()));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__22__22_G__id)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S__22__22_G::sm_S__2c__21_G()));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3e__21_L__id)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S__3e__21_L::sm_S__2c__21_G()));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3d__22_K__id)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S__3d__22_K::sm_S__2c__21_G()));
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S_2_22_F__id) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_21_E__id))) {
        (l_A__loc1_ = (l_A__loc1_ + C_S_2_22_F::sm_S__2c__21_G()));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3e__21_w__id)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S__3e__21_w::sm_S__2c__21_G()));
    }
    if (C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_21_E__id)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S_2_21_E::sm_S__2c__21_G()));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_2_22_E__id)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S_2_22_E::sm_S__2c__21_G()));
    }
    if ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 42.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_9_22_P__id))) {
        (l_A__loc1_ = (l_A__loc1_ + C_S_9_22_P::sm_S__2c__21_G()));
    }
    if (((g::SV.C_S_8G__S__3d__22_P > 0.0) || (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 41.0), rt::V(0.0)) && C_S_8G::sm_S_7d(g::SV.C_S_2_22_P__id)))) {
        (l_A__loc1_ = (l_A__loc1_ + 1.0));
    }
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__3f_D__id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__3f_D::sm_S__2c__21_G()))));
    }
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__20_M__id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S__20_M::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_1_22__27___id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S_1_22__27_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_0_22_C__id)) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S_0_22_C::sm_S__2c__21_G()))));
    }
    return rt::m_floor(l_A__loc1_);
    return 0.0;
}
double C_S__26_c::sm_S__27_n() {
    double l_A__loc1_ = NAN;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__26_c.S__27_n");
    (l_A__loc1_ = 0.0);
    if ((!C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__20_V__id))) {
        (l_A__loc1_ = (l_A__loc1_ + C_S__26_c::sm_S_9_21_P(g::SV.C_S__40_W__id, false, true, C_S__26_c::dsm_S_9_21_P_3())));
    } else {
        {
            std::vector<rt::Value> _lst10306;
            rt::each(g::SV.C_S_8G__S_0_21_A, _lst10306);
            for (const rt::Value& _x10307 : _lst10306) {
                l_A__loc2_ = _x10307;
                if ((({ rt::Value _o10308 = l_A__loc2_; C_S_84* _p10309 = rt::as_ptr<C_S_84>(_o10308); _p10309 ? _p10309->g_S__2d_6() : rt::T(rt::dget(_o10308, NM_S__2d_6)); }) && (!(((double)(({ rt::Value _o10310 = l_A__loc2_; C_S_84* _p10311 = rt::as_ptr<C_S_84>(_o10310); _p10311 ? _p10311->f_id : rt::touint(rt::dget(_o10310, NM_id)); }))) == ((double)(g::SV.C_S_2_3c___id)))))) {
                    (l_A__loc1_ = (l_A__loc1_ + C_S__26_c::sm_S_9_21_P(({ rt::Value _o10312 = l_A__loc2_; C_S_84* _p10313 = rt::as_ptr<C_S_84>(_o10312); _p10313 ? _p10313->f_id : rt::touint(rt::dget(_o10312, NM_id)); }), false, true, C_S__26_c::dsm_S_9_21_P_3())));
                }
            }
        }
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__2b__21_X__id)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S__2b__21_X::sm_S__2c__21_G()));
    }
    if (rt::gt(rt::V(l_A__loc1_), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 155.0))) {
        ({ rt::Value _v10314 = rt::V(l_A__loc1_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(155.0), _v10314); });
    }
    return l_A__loc1_;
    return 0.0;
}
double C_S__26_c::sm_S__20__21__3b_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S__20__21__3b_");
    return rt::tonum(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_param1))), rt::arr_at(g::SV.C_S_8G__S__3d_y, ((double)(l_param1)))), rt::arr_at(g::SV.C_S_8G__S__40_w, ((double)(l_param1)))));
    return 0.0;
}
bool C_S__26_c::dsm_S__5e__21_r_1() { return false; }
bool C_S__26_c::dsm_S__5e__21_r_2() { return false; }
double C_S__26_c::sm_S__5e__21_r(int32_t p0, bool p1, bool p2) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc4_ = NAN;
    RT_FN("S__26_c.S__5e__21_r");
    (l_A__loc4_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_param1)))));
    if ((!l_param3)) {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__3d_y, ((double)(l_param1))))));
    }
    if (l_param2) {
        (l_A__loc4_ = rt::tonum(rt::add(rt::V(l_A__loc4_), rt::arr_at(g::SV.C_S_8G__S__40_w, ((double)(l_param1))))));
    }
    if ((!((l_A__loc4_ * 0.0) == 0.0))) {
        return 1e+308;
    }
    return l_A__loc4_;
    return 0.0;
}
bool C_S__26_c::dsm_S__20__21_q_1() { return false; }
bool C_S__26_c::dsm_S__20__21_q_2() { return false; }
double C_S__26_c::sm_S__20__21_q(int32_t p0, bool p1, bool p2) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc4_ = NAN;
    RT_FN("S__26_c.S__20__21_q");
    (l_A__loc4_ = rt::m_maxv(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_param1))), (l_param3 ? rt::V(0.0) : rt::arr_at(g::SV.C_S_8G__S__3d_y, ((double)(l_param1)))), (l_param2 ? rt::arr_at(g::SV.C_S_8G__S__40_w, ((double)(l_param1))) : rt::V(0.0))));
    if ((!((l_A__loc4_ * 0.0) == 0.0))) {
        return 1e+308;
    }
    return l_A__loc4_;
    return 0.0;
}
bool C_S__26_c::sm_S__27__21__5f_() {
    RT_FN("S__26_c.S__27__21__5f_");
    return ({ bool _t10315 = (((double)(C_S_8G::sg_S_8_21_H())) >= 3.0); _t10315 ? _t10315 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_3o__id)); });
    return false;
}
bool C_S__26_c::sm_S_9X() {
    bool l_A__loc1_ = false;
    RT_FN("S__26_c.S_9X");
    (l_A__loc1_ = ({ bool _t10332 = ({ bool _t10331 = ({ bool _t10330 = ({ bool _t10329 = ({ bool _t10328 = ({ bool _t10327 = ({ bool _t10326 = ({ bool _t10325 = ({ bool _t10324 = ({ bool _t10323 = ({ bool _t10322 = ({ bool _t10321 = ({ bool _t10320 = ({ bool _t10319 = ({ bool _t10318 = ({ bool _t10317 = ({ bool _t10316 = C_S_8G::sm_S_7d(g::SV.C_S_1_21_N__id); _t10316 ? _t10316 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3c__21_0__id)); }); _t10317 ? _t10317 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5d__21__60___id)); }); _t10318 ? _t10318 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_8_5d___id)); }); _t10319 ? _t10319 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5b__21_9__id)); }); _t10320 ? _t10320 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__2c__21__2b___id)); }); _t10321 ? _t10321 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3f_y__id)); }); _t10322 ? _t10322 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_0N__id)); }); _t10323 ? _t10323 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__27__21_S__id)); }); _t10324 ? _t10324 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_3_21_F__id)); }); _t10325 ? _t10325 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__23_x__id)); }); _t10326 ? _t10326 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3b__21_i__id)); }); _t10327 ? _t10327 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__21__21_i__id)); }); _t10328 ? _t10328 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5e__21_j__id)); }); _t10329 ? _t10329 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__25__21_O__id)); }); _t10330 ? _t10330 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_6_22__27___id)); }); _t10331 ? _t10331 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_5_22__27___id)); }); _t10332 ? _t10332 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5d__22__24___id)); }));
    return ({ bool _t10340 = ({ bool _t10339 = ({ bool _t10337 = ({ bool _t10335 = ({ bool _t10333 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1048])))) > 0.0); _t10333 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0))) : _t10333; }); _t10335 ? (bool)((({ bool _t10334 = (!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)); _t10334 ? _t10334 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__40_S__id)); }))) : _t10335; }); _t10337 ? (bool)((({ bool _t10336 = (!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); _t10336 ? _t10336 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__26__21_i__id)); }))) : _t10337; }); _t10339 ? (bool)((({ bool _t10338 = (((double)(g::SV.C_S_8G__S__23_3)) == (-1.0)); _t10338 ? _t10338 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__2d__21_K__id)); }))) : _t10339; }); _t10340 ? (bool)(l_A__loc1_) : _t10340; });
    return false;
}
bool C_S__26_c::sm_S__5b_Q() {
    RT_FN("S__26_c.S__5b_Q");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__60_H__id);
    return false;
}
bool C_S__26_c::sm_S__26_7() {
    RT_FN("S__26_c.S__26_7");
    return (((double)(C_S_8G::sg_S_8_21_H())) >= 2.0);
    return false;
}
bool C_S__26_c::sm_S_1V() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__26_c.S_1V");
    if ((!(((double)(C_PlayFab::sg_season())) == 0.0))) {
        return true;
    }
    {
        std::vector<rt::Value> _lst10341;
        rt::each(g::SV.C_S_8G__S_0Q, _lst10341);
        for (const rt::Value& _x10342 : _lst10341) {
            l_A__loc1_ = _x10342;
            if ((({ rt::Value _o10343 = l_A__loc1_; C_S__23__21__60_* _p10344 = rt::as_ptr<C_S__23__21__60_>(_o10343); _p10344 ? _p10344->f_S__3f__21__2c_ : rt::T(rt::dget(_o10343, NM_S__3f__21__2c_)); }) && ({ rt::Value _o10345 = l_A__loc1_; C_S__23__21__60_* _p10346 = rt::as_ptr<C_S__23__21__60_>(_o10345); _p10346 ? _p10346->f_S_4_21_K : rt::T(rt::dget(_o10345, NM_S_4_21_K)); }))) {
                return true;
            }
        }
    }
    return false;
    return false;
}
double C_S__26_c::sm_S_0_22_3(double p0, double p1) {
    double l_param1 = p0;
    double l_param2 = p1;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S_0_22_3");
    (l_A__loc3_ = (l_param1 + l_param2));
    if ((!((l_A__loc3_ * 0.0) == 0.0))) {
        return l_param1;
    }
    return l_A__loc3_;
    return 0.0;
}
bool C_S__26_c::dsm_S__5d_B_1() { return false; }
bool C_S__26_c::sm_S__5d_B(uint32_t p0, bool p1) {
    uint32_t l_param1 = p0;
    bool l_param2 = p1;
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26_c.S__5d_B");
    (l_A__loc4_ = rt::NUL);
    (l_A__loc3_ = C_S_8G::sm_S__21__21_H(l_param1));
    if (l_param2) {
        return ({ rt::Value _o10347 = l_A__loc3_; C_S__60_6* _p10348 = rt::as_ptr<C_S__60_6>(_o10347); _p10348 ? _p10348->f_S__3c__21_7 : rt::T(rt::dget(_o10347, NM_S__3c__21_7)); });
    }
    if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__27__22_8__id) && C_S__27__22_8::sm_S__2d__22_K(({ rt::Value _o10349 = l_A__loc3_; C_S__60_6* _p10350 = rt::as_ptr<C_S__60_6>(_o10349); _p10350 ? _p10350->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10349, NM_S__2d__21__5e_)); })))) {
        return true;
    }
    if ((({ bool _t10354 = ({ bool _t10351 = (((double)(C_PlayFab::sg_season())) == 7.0); _t10351 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_1__id)) : _t10351; }); _t10354 ? (bool)((!(((double)(({ rt::Value _o10352 = l_A__loc3_; C_S__60_6* _p10353 = rt::as_ptr<C_S__60_6>(_o10352); _p10353 ? _p10353->f_S__2c__21_Y : rt::toint(rt::dget(_o10352, NM_S__2c__21_Y)); }))) == (-1.0)))) : _t10354; }) && (((double)(C_S__3e__21_1::sm_S__2b_A())) >= 25.0))) {
        if (((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0) && ((((double)(l_param1)) == ((double)(g::SV.C_S_9a__id))) || (((double)(l_param1)) == ((double)(g::SV.C_S__3c_a__id)))))) {
            return true;
        }
        if (((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0) && ((((double)(l_param1)) == ((double)(g::SV.C_S__60_O__id))) || (((double)(l_param1)) == ((double)(g::SV.C_S__3c_a__id)))))) {
            return true;
        }
        if (((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0) && ((((double)(l_param1)) == ((double)(g::SV.C_S__60_O__id))) || (((double)(l_param1)) == ((double)(g::SV.C_S_9a__id)))))) {
            return true;
        }
    }
    if (({ rt::Value _o10355 = l_A__loc3_; C_S__60_6* _p10356 = rt::as_ptr<C_S__60_6>(_o10355); _p10356 ? _p10356->f_S__3c__21_7 : rt::T(rt::dget(_o10355, NM_S__3c__21_7)); })) {
        return true;
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__3c__21_T__id)) {
        if ((({ bool _t10357 = (((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0)); _t10357 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t10357; }) && (((double)(({ rt::Value _o10358 = l_A__loc3_; C_S__60_6* _p10359 = rt::as_ptr<C_S__60_6>(_o10358); _p10359 ? _p10359->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10358, NM_S__2d__21__5e_)); }))) == ((double)(g::SV.C_S_8G__S__2d__21__5e_))))) {
            return true;
        }
        if (((((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0)) && (((double)(({ rt::Value _o10360 = l_A__loc3_; C_S__60_6* _p10361 = rt::as_ptr<C_S__60_6>(_o10360); _p10361 ? _p10361->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10360, NM_S__2d__21__5e_)); }))) == ((double)(g::SV.C_S_8G__S__23_3))))) {
            return true;
        }
        if (((((double)(({ rt::Value _o10362 = l_A__loc3_; C_S__60_6* _p10363 = rt::as_ptr<C_S__60_6>(_o10362); _p10363 ? _p10363->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10362, NM_S__2d__21__5e_)); }))) == ((double)(g::SV.C_S_8G__S__2d__21_x))) && (((double)(C_S_8G::sg_S_8_21_H())) >= 130.0))) {
            return true;
        }
        if ((({ bool _t10366 = (((double)(({ rt::Value _o10364 = l_A__loc3_; C_S__60_6* _p10365 = rt::as_ptr<C_S__60_6>(_o10364); _p10365 ? _p10365->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10364, NM_S__2d__21__5e_)); }))) == ((double)(g::SV.C_S_8G__S__23_3))); _t10366 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t10366; }) && (((double)(C_S_8G::sg_S_8_21_H())) < 130.0))) {
            return true;
        }
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_4_22_4__id)) {
        (l_A__loc4_ = C_S_4_22_4::sm_S__3d__22__3b_());
        if (((!rt::eq(l_A__loc4_, rt::NUL)) && (((double)(({ rt::Value _o10367 = l_A__loc4_; C_S__60_6* _p10368 = rt::as_ptr<C_S__60_6>(_o10367); _p10368 ? _p10368->f_id : rt::touint(rt::dget(_o10367, NM_id)); }))) == ((double)(l_param1))))) {
            return true;
        }
    }
    return false;
    return false;
}
bool C_S__26_c::sm_S_9_22_0() {
    RT_FN("S__26_c.S_9_22_0");
    return ({ bool _t10369 = C_S__26_c::sm_S__5d_B(g::SV.C_S__22__22__26___id, C_S__26_c::dsm_S__5d_B_1()); _t10369 ? _t10369 : (bool)(C_S__26_c::sm_S__25__22__2d_(g::SV.C_S_0_22__2d___id)); });
    return false;
}
bool C_S__26_c::dsm_S__3b_X_1() { return false; }
bool C_S__26_c::dsm_S__3b_X_2() { return false; }
bool C_S__26_c::sm_S__3b_X(uint32_t p0, bool p1, bool p2) {
    uint32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    int32_t l_A__loc4_ = 0;
    RT_FN("S__26_c.S__3b_X");
    (l_A__loc4_ = ({ rt::Value _o10370 = C_S_8G::sm_S__21__21_H(l_param1); C_S__60_6* _p10371 = rt::as_ptr<C_S__60_6>(_o10370); _p10371 ? _p10371->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10370, NM_S__2d__21__5e_)); }));
    if ((({ bool _t10372 = (!l_param2); _t10372 ? (bool)((((double)(g::SV.C_S__40__22_7__S__5b__21_x)) == ((double)(l_param1)))) : _t10372; }) && C_S_8G::sm_S__3c__21_B(g::SV.C_S__40__22_7__id))) {
        return true;
    }
    if ((({ bool _t10373 = (!l_param2); _t10373 ? (bool)((!l_param3)) : _t10373; }) && C_S_8G::sm_S_7d(g::SV.C_S_8_22_G__id))) {
        if (((((double)(C_S__26_c::sm_S__3d__21_u(l_A__loc4_))) == ((double)(C_S__26_c::sm_S__3d__21_u(g::SV.C_S_8G__S__2d__21__5e_)))) || (((double)(C_S__26_c::sm_S_9_22__2d_(l_A__loc4_))) == ((double)(C_S__26_c::sm_S_9_22__2d_(g::SV.C_S_8G__S__2d__21__5e_)))))) {
            return true;
        }
    }
    if (((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0)) && (((double)(g::SV.C_S__23__21__21___S_3_21_j)) == (-1.0)))) {
        return false;
    }
    return ({ bool _t10376 = ({ bool _t10374 = (!(((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))); _t10374 ? (bool)((((double)(g::SV.C_S__23__21__21___S_3_22_)) == ((double)(l_A__loc4_)))) : _t10374; }); _t10376 ? _t10376 : (bool)(({ bool _t10375 = (!(((double)(g::SV.C_S__23__21__21___S_3_21_j)) == (-1.0))); _t10375 ? (bool)((((double)(g::SV.C_S__23__21__21___S_3_21_j)) == ((double)(l_A__loc4_)))) : _t10375; })); });
    return false;
}
double C_S__26_c::sm_S__40__22__27_(uint32_t p0, int32_t p1) {
    uint32_t l_param1 = p0;
    int32_t l_param2 = p1;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S__40__22__27_");
    (l_A__loc3_ = 0.0);
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__22__22_0__id)) {
        if (C_S__26_c::sm_S__3b_X(l_param1, true, C_S__26_c::dsm_S__3b_X_2())) {
            (l_A__loc3_ = (1.0 + (0.3 * C_S__26_c::sm_S__3f__21_v(l_param2, false, true))));
        } else {
            (l_A__loc3_ = (1.0 + (0.03 * C_S__26_c::sm_S__3f__21_v(l_param2, false, true))));
        }
    } else {
        (l_A__loc3_ = (C_S__26_c::sm_S__3b_X(l_param1, true, C_S__26_c::dsm_S__3b_X_2()) ? (1.0 + (0.2 * C_S__26_c::sm_S__3f__21_v(l_param2, false, true))) : 1.0));
    }
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__21__22_0__id)) {
        (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__21__22_0::sm_S__40__21__5f_()))));
    }
    if ((C_S_8G::sm_S_7d(g::SV.C_S__5e__22_4__id) && (({ bool _t10377 = (((double)(l_param2)) == ((double)(g::SV.C_S_8G__S__2d__21__5e_))); _t10377 ? _t10377 : (bool)((((double)(l_param2)) == ((double)(g::SV.C_S_8G__S__23_3)))); }) || (((double)(l_param2)) == ((double)(g::SV.C_S_8G__S__2d__21_x)))))) {
        (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__5e__22_4::sm_S__2c__21_G()))));
    }
    return l_A__loc3_;
    return 0.0;
}
bool C_S__26_c::sm_S__5b__21_s(uint32_t p0) {
    uint32_t l_param1 = p0;
    int32_t l_A__loc3_ = 0;
    int32_t l_A__loc4_ = 0;
    int32_t l_A__loc5_ = 0;
    bool l_A__loc2_ = false;
    RT_FN("S__26_c.S__5b__21_s");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc5_ = ({ rt::Value _o10378 = C_S_8G::sm_S__21__21_H(l_param1); C_S__60_6* _p10379 = rt::as_ptr<C_S__60_6>(_o10378); _p10379 ? _p10379->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10378, NM_S__2d__21__5e_)); }));
    if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__60__22_7__id) && C_S__27__22_8::sm_S__2d__22_K(l_A__loc5_))) {
        return true;
    }
    (l_A__loc2_ = false);
    if (((!(((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) && (((double)(g::SV.C_S__23__21__21___S_6_21_r)) == ((double)(l_A__loc5_))))) {
        (l_A__loc2_ = true);
    }
    if ((({ bool _t10380 = (!(((double)(g::SV.C_S__23__21__21___S_1_22_0)) == (-1.0))); _t10380 ? (bool)((((double)(g::SV.C_S__23__21__21___S_1_22_0)) == ((double)(l_A__loc5_)))) : _t10380; }) && C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__5d__22__2d___id))) {
        (l_A__loc2_ = true);
    }
    if (((!l_A__loc2_) && C_S_8G::sm_S_7d(g::SV.C_S_3_22_B__id))) {
        (l_A__loc3_ = C_S__26_c::sm_S_8_22_3(C_S__26_c::sm_S__3d__21_u(l_A__loc5_)));
        (l_A__loc4_ = C_S__26_c::sm_S_8_22_3(C_S__26_c::sm_S_9_22__2d_(l_A__loc5_)));
        return ({ bool _t10381 = (((double)(l_A__loc3_)) == ((double)(g::SV.C_S_8G__S__2c__21_Y))); _t10381 ? (bool)((((double)(l_A__loc4_)) == ((double)(g::SV.C_S_8G__S_9_21_m)))) : _t10381; });
    }
    return l_A__loc2_;
    return false;
}
bool C_S__26_c::sm_S__60__21_i(uint32_t p0) {
    uint32_t l_param1 = p0;
    rt::Value l_A__loc3_ = rt::NUL;
    bool l_A__loc2_ = false;
    RT_FN("S__26_c.S__60__21_i");
    (l_A__loc3_ = rt::NUL);
    (l_A__loc2_ = C_S_8G::sm_S_7d(l_param1));
    if (((!l_A__loc2_) && C_S_8G::sm_S_7d(g::SV.C_S_1_21_j__id))) {
        if ((((double)(C_S_8G::sg_S__2c_P())) >= 3.0)) {
            (l_A__loc3_ = C_S_8G::sm_S__21__21_H(l_param1));
            if (({ rt::Value _o10382 = l_A__loc3_; C_S__60_6* _p10383 = rt::as_ptr<C_S__60_6>(_o10382); _p10383 ? _p10383->f_S__22__22__2b_ : rt::T(rt::dget(_o10382, NM_S__22__22__2b_)); })) {
                return false;
            }
            if (((({ bool _t10391 = ({ bool _t10388 = (((double)(({ rt::Value _o10384 = l_A__loc3_; C_S__60_6* _p10385 = rt::as_ptr<C_S__60_6>(_o10384); _p10385 ? _p10385->f_S__2c__21_Y : rt::toint(rt::dget(_o10384, NM_S__2c__21_Y)); }))) == 0.0); _t10388 ? (bool)((((double)(({ rt::Value _o10386 = l_A__loc3_; C_S__60_6* _p10387 = rt::as_ptr<C_S__60_6>(_o10386); _p10387 ? _p10387->f_S_9_21_m : rt::toint(rt::dget(_o10386, NM_S_9_21_m)); }))) == ((double)(g::SV.C_S_8G__S_9_21_m)))) : _t10388; }); _t10391 ? _t10391 : (bool)((((double)(({ rt::Value _o10389 = l_A__loc3_; C_S__60_6* _p10390 = rt::as_ptr<C_S__60_6>(_o10389); _p10390 ? _p10390->f_S__2c__21_Y : rt::toint(rt::dget(_o10389, NM_S__2c__21_Y)); }))) == ((double)(g::SV.C_S_8G__S__2c__21_Y)))); })) && ((((double)(C_S__26_c::sm_S_9_22__2d_(({ rt::Value _o10392 = l_A__loc3_; C_S__60_6* _p10393 = rt::as_ptr<C_S__60_6>(_o10392); _p10393 ? _p10393->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10392, NM_S__2d__21__5e_)); })))) == ((double)(g::SV.C_S_8G__S_9_21_m))) || (((double)(C_S__26_c::sm_S_9_22__2d_(({ rt::Value _o10394 = l_A__loc3_; C_S__60_6* _p10395 = rt::as_ptr<C_S__60_6>(_o10394); _p10395 ? _p10395->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10394, NM_S__2d__21__5e_)); })))) == ((double)(g::SV.C_S_8G__S__2c__21_Y)))))) {
                return true;
            }
        } else {
            if (((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0) && (({ bool _t10397 = ({ bool _t10396 = (((double)(l_param1)) == ((double)(g::SV.C_S_1_21_N__id))); _t10396 ? _t10396 : (bool)((((double)(l_param1)) == ((double)(g::SV.C_S__3c__21_0__id)))); }); _t10397 ? _t10397 : (bool)((((double)(l_param1)) == ((double)(g::SV.C_S__5d__21__60___id)))); }) || (((double)(l_param1)) == ((double)(g::SV.C_S_3_21_F__id)))))) {
                return true;
            }
            if (((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0) && (({ bool _t10399 = ({ bool _t10398 = (((double)(l_param1)) == ((double)(g::SV.C_S_8_5d___id))); _t10398 ? _t10398 : (bool)((((double)(l_param1)) == ((double)(g::SV.C_S__5b__21_9__id)))); }); _t10399 ? _t10399 : (bool)((((double)(l_param1)) == ((double)(g::SV.C_S__2c__21__2b___id)))); }) || (((double)(l_param1)) == ((double)(g::SV.C_S__23_x__id)))))) {
                return true;
            }
            if (((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0) && (({ bool _t10401 = ({ bool _t10400 = (((double)(l_param1)) == ((double)(g::SV.C_S__3f_y__id))); _t10400 ? _t10400 : (bool)((((double)(l_param1)) == ((double)(g::SV.C_S_0N__id)))); }); _t10401 ? _t10401 : (bool)((((double)(l_param1)) == ((double)(g::SV.C_S__27__21_S__id)))); }) || (((double)(l_param1)) == ((double)(g::SV.C_S__25__21_O__id)))))) {
                return true;
            }
        }
    }
    return l_A__loc2_;
    return false;
}
bool C_S__26_c::dsm_S__3d__21_x_2() { return false; }
bool C_S__26_c::sm_S__3d__21_x(uint32_t p0, bool p1, bool p2) {
    uint32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    int32_t l_A__loc5_ = 0;
    int32_t l_A__loc7_ = 0;
    rt::Value l_A__loc6_ = rt::NUL;
    bool l_A__loc4_ = false;
    RT_FN("S__26_c.S__3d__21_x");
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc7_ = rt::toint_d(0.0));
    (l_A__loc6_ = C_S_8G::sm_S__21__21_H(l_param1));
    (l_A__loc4_ = ({ bool _t10410 = (({ bool _t10409 = ({ bool _t10406 = ({ rt::Value _o10402 = l_A__loc6_; C_S__60_6* _p10403 = rt::as_ptr<C_S__60_6>(_o10402); _p10403 ? _p10403->f_S__3c__21_7 : rt::T(rt::dget(_o10402, NM_S__3c__21_7)); }); _t10406 ? _t10406 : (bool)((((double)(g::SV.C_S__23__21__21___S__27__22__2b_)) == ((double)(({ rt::Value _o10404 = l_A__loc6_; C_S__60_6* _p10405 = rt::as_ptr<C_S__60_6>(_o10404); _p10405 ? _p10405->f_S_6_21_Z : rt::touint(rt::dget(_o10404, NM_S_6_21_Z)); }))))); }); _t10409 ? _t10409 : (bool)((((double)(g::SV.C_S__23__21__21___S__3d__22_7)) == ((double)(({ rt::Value _o10407 = l_A__loc6_; C_S__60_6* _p10408 = rt::as_ptr<C_S__60_6>(_o10407); _p10408 ? _p10408->f_S_6_21_Z : rt::touint(rt::dget(_o10407, NM_S_6_21_Z)); }))))); })); _t10410 ? (bool)(l_param2) : _t10410; }));
    if ((({ bool _t10414 = ({ bool _t10411 = (!l_A__loc4_); _t10411 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__22__22_4__id)) : _t10411; }); _t10414 ? (bool)((((double)(({ rt::Value _o10412 = l_A__loc6_; C_S__60_6* _p10413 = rt::as_ptr<C_S__60_6>(_o10412); _p10413 ? _p10413->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10412, NM_S__2d__21__5e_)); }))) >= 0.0)) : _t10414; }) && (((double)(({ rt::Value _o10415 = l_A__loc6_; C_S__60_6* _p10416 = rt::as_ptr<C_S__60_6>(_o10415); _p10416 ? _p10416->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10415, NM_S__2d__21__5e_)); }))) <= 8.0))) {
        (l_A__loc5_ = C_S__26_c::sm_S_8_22_3(C_S__26_c::sm_S__3d__21_u(({ rt::Value _o10417 = l_A__loc6_; C_S__60_6* _p10418 = rt::as_ptr<C_S__60_6>(_o10417); _p10418 ? _p10418->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10417, NM_S__2d__21__5e_)); }))));
        (l_A__loc7_ = C_S__26_c::sm_S_8_22_3(C_S__26_c::sm_S_9_22__2d_(({ rt::Value _o10419 = l_A__loc6_; C_S__60_6* _p10420 = rt::as_ptr<C_S__60_6>(_o10419); _p10420 ? _p10420->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10419, NM_S__2d__21__5e_)); }))));
        return ({ bool _t10421 = (((double)(l_A__loc5_)) == ((double)(g::SV.C_S_8G__S__2c__21_Y))); _t10421 ? (bool)((((double)(l_A__loc7_)) == ((double)(g::SV.C_S_8G__S_9_21_m)))) : _t10421; });
    }
    return l_A__loc4_;
    return false;
}
int32_t C_S__26_c::sm_S_8_22_3(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S_8_22_3");
    if ((((double)(l_param1)) == 1.0)) {
        return rt::toint_d(2.0);
    }
    if ((((double)(l_param1)) == 2.0)) {
        return rt::toint_d(1.0);
    }
    if ((((double)(l_param1)) == 4.0)) {
        return rt::toint_d(5.0);
    }
    if ((((double)(l_param1)) == 5.0)) {
        return rt::toint_d(4.0);
    }
    return l_param1;
    return 0;
}
bool C_S__26_c::sm_S__25__22__2d_(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S__26_c.S__25__22__2d_");
    return ({ bool _t10422 = C_S_8G::sm_S_7d(g::SV.C_S_5_22__2d___id); _t10422 ? (bool)(C_S_8G::sm_S_7d(l_param1)) : _t10422; });
    return false;
}
int32_t C_S__26_c::sm_S_7_22_B(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__26_c.S_7_22_B");
    if ((((double)(l_param2)) == 6.0)) {
        if ((((double)(l_param1)) == 1.0)) {
            return rt::toint_d(1.0);
        }
        if ((((double)(l_param1)) == 2.0)) {
            return rt::toint_d(3.0);
        }
        if ((((double)(l_param1)) == 3.0)) {
            return rt::toint_d(7.0);
        }
    } else if ((((double)(l_param2)) == 5.0)) {
        if ((((double)(l_param1)) == 1.0)) {
            return rt::toint_d(0.0);
        }
        if ((((double)(l_param1)) == 2.0)) {
            return rt::toint_d(5.0);
        }
        if ((((double)(l_param1)) == 3.0)) {
            return rt::toint_d(8.0);
        }
    } else if ((((double)(l_param2)) == 4.0)) {
        if ((((double)(l_param1)) == 1.0)) {
            return rt::toint_d(2.0);
        }
        if ((((double)(l_param1)) == 2.0)) {
            return rt::toint_d(4.0);
        }
        if ((((double)(l_param1)) == 3.0)) {
            return rt::toint_d(6.0);
        }
    }
    return rt::toint_d(11.0);
    return 0;
}
int32_t C_S__26_c::sm_S__3d__21_u(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S__3d__21_u");
    if ((({ bool _t10423 = (((double)(l_param1)) >= 0.0); _t10423 ? (bool)((((double)(l_param1)) <= 2.0)) : _t10423; }) || (((double)(l_param1)) == 9.0))) {
        return rt::toint_d(1.0);
    }
    if ((({ bool _t10424 = (((double)(l_param1)) >= 3.0); _t10424 ? (bool)((((double)(l_param1)) <= 5.0)) : _t10424; }) || (((double)(l_param1)) == 10.0))) {
        return rt::toint_d(2.0);
    }
    if ((({ bool _t10425 = (((double)(l_param1)) >= 6.0); _t10425 ? (bool)((((double)(l_param1)) <= 8.0)) : _t10425; }) || (((double)(l_param1)) == 12.0))) {
        return rt::toint_d(3.0);
    }
    return rt::toint_d(0.0);
    return 0;
}
int32_t C_S__26_c::sm_S_9_22__2d_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S_9_22__2d_");
    if ((({ bool _t10427 = ({ bool _t10426 = (((double)(l_param1)) == 2.0); _t10426 ? _t10426 : (bool)((((double)(l_param1)) == 4.0)); }); _t10427 ? _t10427 : (bool)((((double)(l_param1)) == 6.0)); }) || (((double)(l_param1)) == 13.0))) {
        return rt::toint_d(4.0);
    }
    if ((({ bool _t10429 = ({ bool _t10428 = (((double)(l_param1)) == 5.0); _t10428 ? _t10428 : (bool)((((double)(l_param1)) == 0.0)); }); _t10429 ? _t10429 : (bool)((((double)(l_param1)) == 8.0)); }) || (((double)(l_param1)) == 14.0))) {
        return rt::toint_d(5.0);
    }
    if ((({ bool _t10431 = ({ bool _t10430 = (((double)(l_param1)) == 1.0); _t10430 ? _t10430 : (bool)((((double)(l_param1)) == 3.0)); }); _t10431 ? _t10431 : (bool)((((double)(l_param1)) == 7.0)); }) || (((double)(l_param1)) == 15.0))) {
        return rt::toint_d(6.0);
    }
    if ((((double)(l_param1)) == 10.0)) {
        return rt::toint_d(2.0);
    }
    if ((((double)(l_param1)) == 9.0)) {
        return rt::toint_d(1.0);
    }
    if ((((double)(l_param1)) == 12.0)) {
        return rt::toint_d(3.0);
    }
    return rt::toint_d(0.0);
    return 0;
}
uint32_t C_S__26_c::sm_S__2b__22_4(rt::Value p0) {
    rt::Value l_param1 = p0;
    uint32_t l_A__loc2_ = 0u;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26_c.S__2b__22_4");
    (l_A__loc2_ = rt::touint_d(1.0));
    if ((!({ rt::Value _o10432 = l_param1; C_S_84* _p10433 = rt::as_ptr<C_S_84>(_o10432); _p10433 ? _p10433->f_S__27_a : rt::T(rt::dget(_o10432, NM_S__27_a)); }))) {
        return l_A__loc2_;
    }
    {
        std::vector<rt::Value> _lst10434;
        rt::each(rt::idx_get(g::SV.C_S_8G__S__2d_s, rt::arr_at(g::SV.C_S__26_c__S__40__21_b, ((double)(({ rt::Value _o10436 = l_param1; C_S_84* _p10437 = rt::as_ptr<C_S_84>(_o10436); _p10437 ? _p10437->f_id : rt::touint(rt::dget(_o10436, NM_id)); }))))), _lst10434);
        for (const rt::Value& _x10435 : _lst10434) {
            l_A__loc3_ = _x10435;
            (l_A__loc2_ = rt::touint_d((((double)(l_A__loc2_)) + 1.0)));
        }
    }
    return l_A__loc2_;
    return 0u;
}
bool C_S__26_c::sm_S__23__22__3c_(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__26_c.S__23__22__3c_");
    if ((({ bool _t10440 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t10440 ? (bool)((((double)(({ rt::Value _o10438 = l_param1; C_S_84* _p10439 = rt::as_ptr<C_S_84>(_o10438); _p10439 ? _p10439->f_id : rt::touint(rt::dget(_o10438, NM_id)); }))) == ((double)(g::SV.C_S_2_3c___id)))) : _t10440; }) && (({ bool _t10441 = C_S_8G::sm_S_7d(g::SV.C_S__3d__21_i__id); _t10441 ? _t10441 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_4_21_i__id)); }) || C_S_8G::sm_S_7d(g::SV.C_S__3b__21_j__id)))) {
        return true;
    }
    if ((((double)(({ rt::Value _o10442 = l_param1; C_S_84* _p10443 = rt::as_ptr<C_S_84>(_o10442); _p10443 ? _p10443->f_id : rt::touint(rt::dget(_o10442, NM_id)); }))) == ((double)(g::SV.C_S_1_22_F__id)))) {
        return C_S_8G::sm_S_7d(g::SV.C_S__25__22_F__id);
    }
    return ({ bool _t10493 = ({ bool _t10490 = ({ bool _t10487 = ({ bool _t10484 = ({ bool _t10481 = ({ bool _t10478 = ({ bool _t10475 = ({ bool _t10472 = ({ bool _t10469 = ({ bool _t10466 = ({ bool _t10463 = ({ bool _t10460 = ({ bool _t10457 = ({ bool _t10454 = ({ bool _t10451 = ({ bool _t10448 = (((double)(({ rt::Value _o10444 = l_param1; C_S_84* _p10445 = rt::as_ptr<C_S_84>(_o10444); _p10445 ? _p10445->f_id : rt::touint(rt::dget(_o10444, NM_id)); }))) == ((double)(g::SV.C_S__27_K__id))); _t10448 ? _t10448 : (bool)((((double)(({ rt::Value _o10446 = l_param1; C_S_84* _p10447 = rt::as_ptr<C_S_84>(_o10446); _p10447 ? _p10447->f_id : rt::touint(rt::dget(_o10446, NM_id)); }))) == ((double)(g::SV.C_S__27__21__27___id)))); }); _t10451 ? _t10451 : (bool)((((double)(({ rt::Value _o10449 = l_param1; C_S_84* _p10450 = rt::as_ptr<C_S_84>(_o10449); _p10450 ? _p10450->f_id : rt::touint(rt::dget(_o10449, NM_id)); }))) == ((double)(g::SV.C_S_6_21_V__id)))); }); _t10454 ? _t10454 : (bool)((((double)(({ rt::Value _o10452 = l_param1; C_S_84* _p10453 = rt::as_ptr<C_S_84>(_o10452); _p10453 ? _p10453->f_id : rt::touint(rt::dget(_o10452, NM_id)); }))) == ((double)(g::SV.C_S_8_3e___id)))); }); _t10457 ? _t10457 : (bool)((((double)(({ rt::Value _o10455 = l_param1; C_S_84* _p10456 = rt::as_ptr<C_S_84>(_o10455); _p10456 ? _p10456->f_id : rt::touint(rt::dget(_o10455, NM_id)); }))) == ((double)(g::SV.C_S__20__21_5__id)))); }); _t10460 ? _t10460 : (bool)((((double)(({ rt::Value _o10458 = l_param1; C_S_84* _p10459 = rt::as_ptr<C_S_84>(_o10458); _p10459 ? _p10459->f_id : rt::touint(rt::dget(_o10458, NM_id)); }))) == ((double)(g::SV.C_S_2_21_E__id)))); }); _t10463 ? _t10463 : (bool)((((double)(({ rt::Value _o10461 = l_param1; C_S_84* _p10462 = rt::as_ptr<C_S_84>(_o10461); _p10462 ? _p10462->f_id : rt::touint(rt::dget(_o10461, NM_id)); }))) == ((double)(g::SV.C_S__5e_x__id)))); }); _t10466 ? _t10466 : (bool)((((double)(({ rt::Value _o10464 = l_param1; C_S_84* _p10465 = rt::as_ptr<C_S_84>(_o10464); _p10465 ? _p10465->f_id : rt::touint(rt::dget(_o10464, NM_id)); }))) == ((double)(g::SV.C_S__21_C__id)))); }); _t10469 ? _t10469 : (bool)((((double)(({ rt::Value _o10467 = l_param1; C_S_84* _p10468 = rt::as_ptr<C_S_84>(_o10467); _p10468 ? _p10468->f_id : rt::touint(rt::dget(_o10467, NM_id)); }))) == ((double)(g::SV.C_S__25__21_J__id)))); }); _t10472 ? _t10472 : (bool)((((double)(({ rt::Value _o10470 = l_param1; C_S_84* _p10471 = rt::as_ptr<C_S_84>(_o10470); _p10471 ? _p10471->f_id : rt::touint(rt::dget(_o10470, NM_id)); }))) == ((double)(g::SV.C_S__40_W__id)))); }); _t10475 ? _t10475 : (bool)((((double)(({ rt::Value _o10473 = l_param1; C_S_84* _p10474 = rt::as_ptr<C_S_84>(_o10473); _p10474 ? _p10474->f_id : rt::touint(rt::dget(_o10473, NM_id)); }))) == ((double)(g::SV.C_S_7_21_K__id)))); }); _t10478 ? _t10478 : (bool)((((double)(({ rt::Value _o10476 = l_param1; C_S_84* _p10477 = rt::as_ptr<C_S_84>(_o10476); _p10477 ? _p10477->f_id : rt::touint(rt::dget(_o10476, NM_id)); }))) == ((double)(g::SV.C_S_5j__id)))); }); _t10481 ? _t10481 : (bool)((((double)(({ rt::Value _o10479 = l_param1; C_S_84* _p10480 = rt::as_ptr<C_S_84>(_o10479); _p10480 ? _p10480->f_id : rt::touint(rt::dget(_o10479, NM_id)); }))) == ((double)(g::SV.C_S__23_9__id)))); }); _t10484 ? _t10484 : (bool)((((double)(({ rt::Value _o10482 = l_param1; C_S_84* _p10483 = rt::as_ptr<C_S_84>(_o10482); _p10483 ? _p10483->f_id : rt::touint(rt::dget(_o10482, NM_id)); }))) == ((double)(g::SV.C_S_5_21_3__id)))); }); _t10487 ? _t10487 : (bool)((((double)(({ rt::Value _o10485 = l_param1; C_S_84* _p10486 = rt::as_ptr<C_S_84>(_o10485); _p10486 ? _p10486->f_id : rt::touint(rt::dget(_o10485, NM_id)); }))) == ((double)(g::SV.C_S__21__22__21___id)))); }); _t10490 ? _t10490 : (bool)((((double)(({ rt::Value _o10488 = l_param1; C_S_84* _p10489 = rt::as_ptr<C_S_84>(_o10488); _p10489 ? _p10489->f_id : rt::touint(rt::dget(_o10488, NM_id)); }))) == ((double)(g::SV.C_S_2_22__21___id)))); }); _t10493 ? _t10493 : (bool)((((double)(({ rt::Value _o10491 = l_param1; C_S_84* _p10492 = rt::as_ptr<C_S_84>(_o10491); _p10492 ? _p10492->f_id : rt::touint(rt::dget(_o10491, NM_id)); }))) == ((double)(g::SV.C_S_7_22__20___id)))); });
    return false;
}
bool C_S__26_c::dsm_S__3d__21__3e__0() { return false; }
double C_S__26_c::sm_S__3d__21__3e_(bool p0) {
    bool l_param1 = p0;
    double l_A__loc2_ = NAN;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26_c.S__3d__21__3e_");
    (l_A__loc2_ = 0.0);
    {
        std::vector<rt::Value> _lst10494;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst10494);
        for (const rt::Value& _x10495 : _lst10494) {
            l_A__loc3_ = _x10495;
            if ((({ rt::Value _o10496 = l_A__loc3_; C_S_84* _p10497 = rt::as_ptr<C_S_84>(_o10496); _p10497 ? _p10497->g_S__2d_6() : rt::T(rt::dget(_o10496, NM_S__2d_6)); }) && C_S__26_c::sm_S__23__22__3c_(l_A__loc3_))) {
                (l_A__loc2_ = (l_A__loc2_ + C_S__26_c::sm_S_9_21_P(({ rt::Value _o10498 = l_A__loc3_; C_S_84* _p10499 = rt::as_ptr<C_S_84>(_o10498); _p10499 ? _p10499->f_id : rt::touint(rt::dget(_o10498, NM_id)); }), false, l_param1, C_S__26_c::dsm_S_9_21_P_3())));
            }
        }
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::dsm_S_4_21_r_0() { return false; }
double C_S__26_c::sm_S_4_21_r(bool p0) {
    bool l_param1 = p0;
    double l_A__loc2_ = NAN;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26_c.S_4_21_r");
    (l_A__loc2_ = 0.0);
    {
        std::vector<rt::Value> _lst10500;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst10500);
        for (const rt::Value& _x10501 : _lst10500) {
            l_A__loc3_ = _x10501;
            if ((({ rt::Value _o10502 = l_A__loc3_; C_S_84* _p10503 = rt::as_ptr<C_S_84>(_o10502); _p10503 ? _p10503->g_S__2d_6() : rt::T(rt::dget(_o10502, NM_S__2d_6)); }) && C_S__26_c::sm_S__23__22__3c_(l_A__loc3_))) {
                (l_A__loc2_ = (l_A__loc2_ + C_S__26_c::sm_S_7i(({ rt::Value _o10504 = l_A__loc3_; C_S_84* _p10505 = rt::as_ptr<C_S_84>(_o10504); _p10505 ? _p10505->f_id : rt::touint(rt::dget(_o10504, NM_id)); }), false, l_param1, C_S__26_c::dsm_S_7i_3())));
            }
        }
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::dsm_S__27__22_I_1() { return false; }
bool C_S__26_c::dsm_S__27__22_I_2() { return false; }
double C_S__26_c::sm_S__27__22_I(int32_t p0, bool p1, bool p2) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc4_ = NAN;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S__26_c.S__27__22_I");
    (l_A__loc4_ = 0.0);
    {
        std::vector<rt::Value> _lst10506;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst10506);
        for (const rt::Value& _x10507 : _lst10506) {
            l_A__loc5_ = _x10507;
            if ((({ rt::Value _o10508 = l_A__loc5_; C_S_84* _p10509 = rt::as_ptr<C_S_84>(_o10508); _p10509 ? _p10509->g_S__2d_6() : rt::T(rt::dget(_o10508, NM_S__2d_6)); }) && ((((double)(({ rt::Value _o10510 = l_A__loc5_; C_S_84* _p10511 = rt::as_ptr<C_S_84>(_o10510); _p10511 ? _p10511->f_S__2c__21_Y : rt::toint(rt::dget(_o10510, NM_S__2c__21_Y)); }))) == ((double)(l_param1))) || (((double)(({ rt::Value _o10512 = l_A__loc5_; C_S_84* _p10513 = rt::as_ptr<C_S_84>(_o10512); _p10513 ? _p10513->f_S_9_21_m : rt::toint(rt::dget(_o10512, NM_S_9_21_m)); }))) == ((double)(l_param1)))))) {
                (l_A__loc4_ = (l_A__loc4_ + C_S__26_c::sm_S_7i(({ rt::Value _o10514 = l_A__loc5_; C_S_84* _p10515 = rt::as_ptr<C_S_84>(_o10514); _p10515 ? _p10515->f_id : rt::touint(rt::dget(_o10514, NM_id)); }), false, l_param2, l_param3)));
            }
        }
    }
    return l_A__loc4_;
    return 0.0;
}
double C_S__26_c::sm_S_8_21_9() {
    double l_A__loc1_ = NAN;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__26_c.S_8_21_9");
    (l_A__loc1_ = 0.0);
    {
        std::vector<rt::Value> _lst10516;
        rt::each(g::SV.C_S_8G__S__25__3c_, _lst10516);
        for (const rt::Value& _x10517 : _lst10516) {
            l_A__loc2_ = _x10517;
            if ((!(((double)(({ rt::Value _o10518 = l_A__loc2_; C_S__60__21__3b_* _p10519 = rt::as_ptr<C_S__60__21__3b_>(_o10518); _p10519 ? _p10519->m_S__27__3c_() : rt::toint(rt::dcallv(_o10518, NM_S__27__3c_)); }))) == (-1.0)))) {
                (l_A__loc1_ = (l_A__loc1_ + C_S__23__21__21_::sm_S__3e_Z(((int32_t)(({ rt::Value _o10520 = l_A__loc2_; C_S__60__21__3b_* _p10521 = rt::as_ptr<C_S__60__21__3b_>(_o10520); _p10521 ? _p10521->f_id : rt::touint(rt::dget(_o10520, NM_id)); }))))));
            }
        }
    }
    return l_A__loc1_;
    return 0.0;
}
bool C_S__26_c::dsm_S__3d__60__0() { return false; }
double C_S__26_c::sm_S__3d__60_(bool p0) {
    bool l_param1 = p0;
    double l_A__loc4_ = NAN;
    double l_A__loc2_ = NAN;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26_c.S__3d__60_");
    (l_A__loc4_ = NAN);
    (l_A__loc2_ = 0.0);
    {
        std::vector<rt::Value> _lst10522;
        rt::each(g::SV.C_S_8G__S__25__3c_, _lst10522);
        for (const rt::Value& _x10523 : _lst10522) {
            l_A__loc3_ = _x10523;
            if (((!(((double)(({ rt::Value _o10524 = l_A__loc3_; C_S__60__21__3b_* _p10525 = rt::as_ptr<C_S__60__21__3b_>(_o10524); _p10525 ? _p10525->m_S__27__3c_() : rt::toint(rt::dcallv(_o10524, NM_S__27__3c_)); }))) == (-1.0))) || ((!l_param1) && C_S_8G::sm_S_7d(g::SV.C_S_6_22_G__id)))) {
                (l_A__loc4_ = ((double)(({ rt::Value _o10526 = l_A__loc3_; C_S__60__21__3b_* _p10527 = rt::as_ptr<C_S__60__21__3b_>(_o10526); _p10527 ? _p10527->g_S__21_a() : rt::touint(rt::dget(_o10526, NM_S__21_a)); }))));
                if ((!l_param1)) {
                    (l_A__loc4_ = C_S__26_c::sm_S__5b__22__3c_(l_A__loc3_, l_A__loc4_));
                }
                (l_A__loc2_ = (l_A__loc2_ + rt::m_floor(l_A__loc4_)));
            }
        }
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::dsm_S_1_22_O_0() { return false; }
double C_S__26_c::sm_S_1_22_O(bool p0) {
    bool l_param1 = p0;
    double l_A__loc4_ = NAN;
    double l_A__loc2_ = NAN;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26_c.S_1_22_O");
    (l_A__loc4_ = NAN);
    (l_A__loc2_ = 0.0);
    {
        std::vector<rt::Value> _lst10528;
        rt::each(g::SV.C_S_8G__S__25__3c_, _lst10528);
        for (const rt::Value& _x10529 : _lst10528) {
            l_A__loc3_ = _x10529;
            if ((((double)(({ rt::Value _o10530 = l_A__loc3_; C_S__60__21__3b_* _p10531 = rt::as_ptr<C_S__60__21__3b_>(_o10530); _p10531 ? _p10531->m_S__27__3c_() : rt::toint(rt::dcallv(_o10530, NM_S__27__3c_)); }))) == (-1.0))) {
                (l_A__loc4_ = ((double)(({ rt::Value _o10532 = l_A__loc3_; C_S__60__21__3b_* _p10533 = rt::as_ptr<C_S__60__21__3b_>(_o10532); _p10533 ? _p10533->g_S__21_a() : rt::touint(rt::dget(_o10532, NM_S__21_a)); }))));
                if ((!l_param1)) {
                    (l_A__loc4_ = C_S__26_c::sm_S__5b__22__3c_(l_A__loc3_, l_A__loc4_));
                }
                (l_A__loc2_ = (l_A__loc2_ + rt::m_floor(l_A__loc4_)));
            }
        }
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::dsm_S__3e__21__26__1() { return false; }
bool C_S__26_c::dsm_S__3e__21__26__2() { return false; }
bool C_S__26_c::dsm_S__3e__21__26__3() { return false; }
rt::Value C_S__26_c::sm_S__3e__21__26_(uint32_t p0, bool p1, bool p2, bool p3) {
    uint32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    bool l_param4 = p3;
    rt::Value l_A__loc5_ = rt::NUL;
    int32_t l_A__loc6_ = 0;
    RT_FN("S__26_c.S__3e__21__26_");
    (l_A__loc5_ = C_S_8G::sm_S_9_3d_(l_param1));
    (l_A__loc6_ = rt::toint_d((l_param3 ? 0.0 : ((double)(({ rt::Value _o10534 = l_A__loc5_; C_S__60__21__3b_* _p10535 = rt::as_ptr<C_S__60__21__3b_>(_o10534); _p10535 ? _p10535->m_S__27__3c_() : rt::toint(rt::dcallv(_o10534, NM_S__27__3c_)); }))))));
    return rt::slot_string((((!l_param4) && ((!(((double)(l_A__loc6_)) == (-1.0))) || l_param3)) ? C_Translation::sm__mn(rt::arr_at(({ rt::Value _o10536 = l_A__loc5_; C_S__60__21__3b_* _p10537 = rt::as_ptr<C_S__60__21__3b_>(_o10536); _p10537 ? _p10537->f_S__27_T : rt::dget(_o10536, NM_S__27_T); }), ((double)(l_A__loc6_))), rt::arr_at(({ rt::Value _o10538 = l_A__loc5_; C_S__60__21__3b_* _p10539 = rt::as_ptr<C_S__60__21__3b_>(_o10538); _p10539 ? _p10539->f_S__2d__21__26_ : rt::dget(_o10538, NM_S__2d__21__26_); }), ((double)(l_A__loc6_))), (l_param2 ? 2.0 : 1.0), rt::arr_lit({})) : C_Translation::sm__mn(({ rt::Value _o10540 = l_A__loc5_; C_S__60__21__3b_* _p10541 = rt::as_ptr<C_S__60__21__3b_>(_o10540); _p10541 ? _p10541->f_S_1i : rt::dget(_o10540, NM_S_1i); }), ({ rt::Value _o10542 = l_A__loc5_; C_S__60__21__3b_* _p10543 = rt::as_ptr<C_S__60__21__3b_>(_o10542); _p10543 ? _p10543->f_S__2d_v : rt::dget(_o10542, NM_S__2d_v); }), (l_param2 ? 2.0 : 1.0), rt::arr_lit({}))));
    return rt::NUL;
}
double C_S__26_c::dsm_S__23__3f__1() { return 0.0; }
bool C_S__26_c::dsm_S__23__3f__2() { return false; }
bool C_S__26_c::dsm_S__23__3f__3() { return false; }
rt::Value C_S__26_c::sm_S__23__3f_(uint32_t p0, double p1, bool p2, bool p3) {
    uint32_t l_param1 = p0;
    double l_param2 = p1;
    bool l_param3 = p2;
    bool l_param4 = p3;
    rt::Value l_A__loc5_ = rt::NUL;
    int32_t l_A__loc6_ = 0;
    RT_FN("S__26_c.S__23__3f_");
    (l_A__loc5_ = C_S_8G::sm_S_9_3d_(l_param1));
    (l_A__loc6_ = rt::toint_d((l_param3 ? 0.0 : ((double)(({ rt::Value _o10544 = l_A__loc5_; C_S__60__21__3b_* _p10545 = rt::as_ptr<C_S__60__21__3b_>(_o10544); _p10545 ? _p10545->m_S__27__3c_() : rt::toint(rt::dcallv(_o10544, NM_S__27__3c_)); }))))));
    return rt::slot_string((((!l_param4) && ((!(((double)(l_A__loc6_)) == (-1.0))) || l_param3)) ? C_Translation::sm__mn(rt::add(rt::VS(g::LS[874]), rt::arr_at(({ rt::Value _o10546 = l_A__loc5_; C_S__60__21__3b_* _p10547 = rt::as_ptr<C_S__60__21__3b_>(_o10546); _p10547 ? _p10547->f_S__27_T : rt::dget(_o10546, NM_S__27_T); }), ((double)(l_A__loc6_)))), rt::add(rt::VS(g::LS[874]), rt::arr_at(({ rt::Value _o10548 = l_A__loc5_; C_S__60__21__3b_* _p10549 = rt::as_ptr<C_S__60__21__3b_>(_o10548); _p10549 ? _p10549->f_S__2d__21__26_ : rt::dget(_o10548, NM_S__2d__21__26_); }), ((double)(l_A__loc6_)))), l_param2, rt::arr_lit({C_S__26_c::sm_S_8_21_Z(l_param2, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())})) : C_Translation::sm__mn(rt::add(rt::VS(g::LS[874]), ({ rt::Value _o10550 = l_A__loc5_; C_S__60__21__3b_* _p10551 = rt::as_ptr<C_S__60__21__3b_>(_o10550); _p10551 ? _p10551->f_S_1i : rt::dget(_o10550, NM_S_1i); })), rt::add(rt::VS(g::LS[874]), ({ rt::Value _o10552 = l_A__loc5_; C_S__60__21__3b_* _p10553 = rt::as_ptr<C_S__60__21__3b_>(_o10552); _p10553 ? _p10553->f_S__2d_v : rt::dget(_o10552, NM_S__2d_v); })), l_param2, rt::arr_lit({C_S__26_c::sm_S_8_21_Z(l_param2, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())}))));
    return rt::NUL;
}
rt::Value C_S__26_c::sm_S_1_2c_(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S__26_c.S_1_2c_");
    return rt::slot_string(({ rt::Value _o10554 = C_S_8G::sm_S__23_N(l_param1); C_S_84* _p10555 = rt::as_ptr<C_S_84>(_o10554); _p10555 ? _p10555->m_S_1_21_P() : rt::dcallv(_o10554, NM_S_1_21_P); }));
    return rt::NUL;
}
double C_S__26_c::dsm_S_3_22__2b__1() { return (-1.0); }
uint32_t C_S__26_c::sm_S_3_22__2b_(rt::Value p0, double p1) {
    rt::Value l_param1 = p0;
    double l_param2 = p1;
    rt::Value l_A__loc4_ = rt::NUL;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S_3_22__2b_");
    (l_A__loc4_ = rt::dict_lit({{rt::VS(g::LS[260]), rt::V(0.0)}}));
    (l_A__loc3_ = C_S__23__21__21_::sm_S__26__21_d(l_param1, rt::toint_d(0.0), true, l_A__loc4_, l_param2));
    return C_S__26_c::sm_S__23__22__2b_(({ rt::Value _o10556 = l_param1; C_S__60__21__3b_* _p10557 = rt::as_ptr<C_S__60__21__3b_>(_o10556); _p10557 ? _p10557->g_S__21_a() : rt::touint(rt::dget(_o10556, NM_S__21_a)); }), rt::touint(rt::idx_get(l_A__loc4_, rt::VS(g::LS[260]))));
    return 0u;
}
uint32_t C_S__26_c::sm_S__5d__22__27_() {
    rt::Value l_A__loc1_ = rt::NUL;
    double l_A__loc2_ = NAN;
    RT_FN("S__26_c.S__5d__22__27_");
    (l_A__loc1_ = rt::dict_lit({{rt::VS(g::LS[260]), rt::V(0.0)}}));
    (l_A__loc2_ = C_S__23__21__21_::sm_S__23__21__3f_(rt::toint_d(10000.0), C_S_8G::sg_S__40_e(), l_A__loc1_));
    return C_S__26_c::sm_S__23__22__2b_(rt::touint_d(C_S_8G::sg_S_1_21_5()), rt::touint(rt::idx_get(l_A__loc1_, rt::VS(g::LS[260]))));
    return 0u;
}
uint32_t C_S__26_c::sm_S__2b__22__2b_(int32_t p0) {
    int32_t l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S__2b__22__2b_");
    (l_A__loc2_ = rt::dict_lit({{rt::VS(g::LS[260]), rt::V(0.0)}}));
    (l_A__loc3_ = ({ rt::Value _o10558 = rt::arr_at(g::SV.C_S_7_21_1__S_2_21_6, ((double)(l_param1))); C_S__60_6* _p10559 = rt::as_ptr<C_S__60_6>(_o10558); _p10559 ? _p10559->m_S_75(l_param1, rt::toint_d(10000.0), true, l_A__loc2_) : rt::tonum(rt::dcallv(_o10558, NM_S_75, rt::V((double)(l_param1)), rt::V(10000.0), rt::VB(true), l_A__loc2_)); }));
    return C_S__26_c::sm_S__23__22__2b_(rt::touint(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, ((double)(l_param1)))), rt::touint(rt::idx_get(l_A__loc2_, rt::VS(g::LS[260]))));
    return 0u;
}
uint32_t C_S__26_c::sm_S__23__22__2b_(uint32_t p0, uint32_t p1) {
    uint32_t l_param1 = p0;
    uint32_t l_param2 = p1;
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc4_ = rt::UNDEF;
    RT_FN("S__26_c.S__23__22__2b_");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::V(0.0));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < rt::alen(g::SV.C_S__26_c__S_2_22__2d_))) {
        (l_A__loc4_ = rt::V((double)(rt::touint_d((rt::tonum(rt::arr_at(g::SV.C_S__26_c__S_2_22__2d_, ((double)(l_A__loc3_)))) - rt::mod(((double)(l_param1)), rt::tonum(rt::arr_at(g::SV.C_S__26_c__S_2_22__2d_, ((double)(l_A__loc3_))))))))));
        if (rt::le(l_A__loc4_, rt::V((double)(l_param2)))) {
            return rt::touint(l_A__loc4_);
        }
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    return rt::touint_d((10.0 - rt::mod(((double)(l_param1)), 10.0)));
    return 0u;
}
bool C_S__26_c::dsm_S_9_21_P_1() { return false; }
bool C_S__26_c::dsm_S_9_21_P_2() { return false; }
bool C_S__26_c::dsm_S_9_21_P_3() { return false; }
double C_S__26_c::sm_S_9_21_P(uint32_t p0, bool p1, bool p2, bool p3) {
    uint32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    bool l_param4 = p3;
    rt::Value l_A__loc6_ = rt::NUL;
    double l_A__loc5_ = NAN;
    RT_FN("S__26_c.S_9_21_P");
    (l_A__loc6_ = C_S_8G::sm_S__23_N(l_param1));
    (l_A__loc5_ = ({ rt::Value _o10560 = l_A__loc6_; C_S_84* _p10561 = rt::as_ptr<C_S_84>(_o10560); _p10561 ? _p10561->g_S_2_2d_() : rt::tonum(rt::dget(_o10560, NM_S_2_2d_)); }));
    if ((!l_param3)) {
        (l_A__loc5_ = (l_A__loc5_ + ({ rt::Value _o10562 = l_A__loc6_; C_S_84* _p10563 = rt::as_ptr<C_S_84>(_o10562); _p10563 ? _p10563->g_S_5_21_L() : rt::tonum(rt::dget(_o10562, NM_S_5_21_L)); })));
    }
    if (l_param2) {
        (l_A__loc5_ = (l_A__loc5_ + ({ rt::Value _o10564 = l_A__loc6_; C_S_84* _p10565 = rt::as_ptr<C_S_84>(_o10564); _p10565 ? _p10565->g_S__23_y() : rt::tonum(rt::dget(_o10564, NM_S__23_y)); })));
    }
    if ((!l_param4)) {
        if (((((double)(l_param1)) == ((double)(g::SV.C_S__21__22__21___id))) && C_S_8G::sm_S__3c__21_B(g::SV.C_S__21__22__21___id))) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S__21__22__21_::sm_S__22__22_K()))));
        }
        if (((((double)(({ rt::Value _o10566 = l_A__loc6_; C_S_84* _p10567 = rt::as_ptr<C_S_84>(_o10566); _p10567 ? _p10567->f_S__2c__21_Y : rt::toint(rt::dget(_o10566, NM_S__2c__21_Y)); }))) == 2.0) && (({ bool _t10568 = C_S_8G::sm_S__3c__21_B(g::SV.C_S__27__22__25___id); _t10568 ? (bool)(C_S__27__22__25_::sm_S__5b__22__2c_(g::SV.C_S_8_3e___id)) : _t10568; }) || (((double)(({ rt::Value _o10569 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p10570 = rt::as_ptr<C_S_84>(_o10569); _p10570 ? _p10570->g_S__60_r() : rt::touint(rt::dget(_o10569, NM_S__60_r)); }))) > 0.0)))) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S_8_3e_::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__5b__21_y__id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S__5b__21_y::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S_2_22__21_::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S_7_22__25___id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S_7_22__25_::sm_S__2c__21_G()))));
        }
        if (C_S__26_c::sm_S__5d_B(g::SV.C_S__3d__21__27___id, C_S__26_c::dsm_S__5d_B_1())) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S__3d__21__27_::sm_S__40__21__5f_()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S_5_22_B__id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S_5_22_B::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S_7_22__3f___id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S_7_22__3f_::sm_S__2c__21_G()))));
        }
        if (C_S__26_c::sm_S__5b__21_s(g::SV.C_S_7_21_t__id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S_7_21_t::sm_S__2c__21_G()))));
        }
    }
    return l_A__loc5_;
    return 0.0;
}
double C_S__26_c::sm_S_3_22__2d_(int32_t p0) {
    int32_t l_param1 = p0;
    double l_A__loc2_ = NAN;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26_c.S_3_22__2d_");
    (l_A__loc2_ = 0.0);
    {
        std::vector<rt::Value> _lst10571;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst10571);
        for (const rt::Value& _x10572 : _lst10571) {
            l_A__loc3_ = _x10572;
            if ((({ bool _t10580 = (!(((double)(({ rt::Value _o10573 = l_A__loc3_; C_S_84* _p10574 = rt::as_ptr<C_S_84>(_o10573); _p10574 ? _p10574->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10573, NM_S__2d__21__5e_)); }))) == (-1.0))); _t10580 ? (bool)((({ bool _t10579 = (((double)(({ rt::Value _o10575 = l_A__loc3_; C_S_84* _p10576 = rt::as_ptr<C_S_84>(_o10575); _p10576 ? _p10576->f_S__2c__21_Y : rt::toint(rt::dget(_o10575, NM_S__2c__21_Y)); }))) == ((double)(l_param1))); _t10579 ? _t10579 : (bool)((((double)(({ rt::Value _o10577 = l_A__loc3_; C_S_84* _p10578 = rt::as_ptr<C_S_84>(_o10577); _p10578 ? _p10578->f_S_9_21_m : rt::toint(rt::dget(_o10577, NM_S_9_21_m)); }))) == ((double)(l_param1)))); }))) : _t10580; }) && ({ rt::Value _o10581 = l_A__loc3_; C_S_84* _p10582 = rt::as_ptr<C_S_84>(_o10581); _p10582 ? _p10582->g_S__2d_6() : rt::T(rt::dget(_o10581, NM_S__2d_6)); }))) {
                (l_A__loc2_ = (l_A__loc2_ + 1.0));
            }
        }
    }
    return l_A__loc2_;
    return 0.0;
}
int32_t C_S__26_c::dsm_S__5d__21_s_0() { return rt::toint_d((-1.0)); }
bool C_S__26_c::dsm_S__5d__21_s_1() { return false; }
bool C_S__26_c::dsm_S__5d__21_s_2() { return false; }
bool C_S__26_c::dsm_S__5d__21_s_3() { return false; }
double C_S__26_c::sm_S__5d__21_s(int32_t p0, bool p1, bool p2, bool p3) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    bool l_param4 = p3;
    double l_A__loc5_ = NAN;
    rt::Value l_A__loc6_ = rt::NUL;
    RT_FN("S__26_c.S__5d__21_s");
    (l_A__loc5_ = 0.0);
    {
        std::vector<rt::Value> _lst10583;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst10583);
        for (const rt::Value& _x10584 : _lst10583) {
            l_A__loc6_ = _x10584;
            if ((({ bool _t10587 = (((double)(l_param1)) == (-1.0)); _t10587 ? _t10587 : (bool)((((double)(({ rt::Value _o10585 = l_A__loc6_; C_S_84* _p10586 = rt::as_ptr<C_S_84>(_o10585); _p10586 ? _p10586->f_S__2c__21_Y : rt::toint(rt::dget(_o10585, NM_S__2c__21_Y)); }))) == ((double)(l_param1)))); }) || (((double)(({ rt::Value _o10588 = l_A__loc6_; C_S_84* _p10589 = rt::as_ptr<C_S_84>(_o10588); _p10589 ? _p10589->f_S_9_21_m : rt::toint(rt::dget(_o10588, NM_S_9_21_m)); }))) == ((double)(l_param1))))) {
                (l_A__loc5_ = (l_A__loc5_ + C_S__26_c::sm_S_9_21_P(({ rt::Value _o10590 = l_A__loc6_; C_S_84* _p10591 = rt::as_ptr<C_S_84>(_o10590); _p10591 ? _p10591->f_id : rt::touint(rt::dget(_o10590, NM_id)); }), l_param2, l_param3, l_param4)));
            }
        }
    }
    if ((({ bool _t10592 = (!l_param4); _t10592 ? (bool)((((double)(l_param1)) == 2.0)) : _t10592; }) && C_S__26_c::sm_S__3d__21_x(g::SV.C_S__27__21_l__id, (((double)(C_S_8G::sg_S_8_21_H())) >= 105.0), C_S__26_c::dsm_S__3d__21_x_2()))) {
        (l_A__loc5_ = (l_A__loc5_ + C_S__27__21_l::sm_S__2c__21_G()));
    }
    return l_A__loc5_;
    return 0.0;
}
bool C_S__26_c::dsm_S_1_21_y_0() { return false; }
bool C_S__26_c::dsm_S_1_21_y_1() { return false; }
double C_S__26_c::sm_S_1_21_y(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S_1_21_y");
    (l_A__loc3_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0)));
    if ((!l_param1)) {
        (l_A__loc3_ = rt::tonum(rt::add(rt::V(l_A__loc3_), rt::arr_at(g::SV.C_S_8G__S__3d_y, 15.0))));
    }
    if (l_param2) {
        (l_A__loc3_ = rt::tonum(rt::add(rt::V(l_A__loc3_), rt::arr_at(g::SV.C_S_8G__S__40_w, 15.0))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S__5b__21_y__id)) {
        (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__5b__21_y::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id)) {
        (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S_2_22__21_::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_7_22__25___id)) {
        (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S_7_22__25_::sm_S__2c__21_G()))));
    }
    if (C_S__26_c::sm_S__5d_B(g::SV.C_S__3d__21__27___id, C_S__26_c::dsm_S__5d_B_1())) {
        (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__3d__21__27_::sm_S__40__21__5f_()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_5_22_B__id)) {
        (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S_5_22_B::sm_S__2c__21_G()))));
    }
    if (C_S_8G::sm_S_7d(g::SV.C_S_7_22__3f___id)) {
        (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S_7_22__3f_::sm_S__2c__21_G()))));
    }
    if (C_S__26_c::sm_S__5b__21_s(g::SV.C_S_7_21_t__id)) {
        (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S_7_21_t::sm_S__2c__21_G()))));
    }
    return l_A__loc3_;
    return 0.0;
}
bool C_S__26_c::dsm_S_7i_1() { return false; }
bool C_S__26_c::dsm_S_7i_2() { return true; }
bool C_S__26_c::dsm_S_7i_3() { return false; }
double C_S__26_c::sm_S_7i(uint32_t p0, bool p1, bool p2, bool p3) {
    uint32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    bool l_param4 = p3;
    rt::Value l_A__loc6_ = rt::NUL;
    double l_A__loc5_ = NAN;
    RT_FN("S__26_c.S_7i");
    (l_A__loc6_ = C_S_8G::sm_S__23_N(l_param1));
    (l_A__loc5_ = ({ rt::Value _o10593 = l_A__loc6_; C_S_84* _p10594 = rt::as_ptr<C_S_84>(_o10593); _p10594 ? _p10594->g_S__3f_j() : rt::tonum(rt::dget(_o10593, NM_S__3f_j)); }));
    if ((!l_param3)) {
        (l_A__loc5_ = (l_A__loc5_ + ({ rt::Value _o10595 = l_A__loc6_; C_S_84* _p10596 = rt::as_ptr<C_S_84>(_o10595); _p10596 ? _p10596->g_S__3c_q() : rt::tonum(rt::dget(_o10595, NM_S__3c_q)); })));
    }
    if (l_param2) {
        (l_A__loc5_ = (l_A__loc5_ + ({ rt::Value _o10597 = l_A__loc6_; C_S_84* _p10598 = rt::as_ptr<C_S_84>(_o10597); _p10598 ? _p10598->g_S__3c__21_G() : rt::tonum(rt::dget(_o10597, NM_S__3c__21_G)); })));
    }
    if ((!l_param4)) {
        if ((({ bool _t10599 = C_S_8G::sm_S_7d(g::SV.C_S__5d__22_B__id); _t10599 ? (bool)((((double)(l_param1)) == ((double)(g::SV.C_S__20__21_5__id)))) : _t10599; }) && l_param3)) {
            (l_A__loc5_ = (l_A__loc5_ + C_S__5d__22_B::sm_S__2c__21_G()));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S_5_21_k__id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S_5_21_k::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__3f__22_C__id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S__3f__22_C::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__5e__3e___id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S__5e__3e_::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__3e__22_E__id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S__3e__22_E::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__3e__22_G__id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S__3e__22_G::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S_7_22__3f___id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S_7_22__3f_::sm_S__2c__21_G()))));
        }
        if (C_S_8G::sm_S_7d(g::SV.C_S__21__22__25___id)) {
            (l_A__loc5_ = (l_A__loc5_ * (1.0 + (0.01 * C_S__21__22__25_::sm_S__2c__21_G()))));
        }
    }
    return l_A__loc5_;
    return 0.0;
}
bool C_S__26_c::dsm_S__3e__21_p_0() { return false; }
bool C_S__26_c::dsm_S__3e__21_p_1() { return false; }
double C_S__26_c::sm_S__3e__21_p(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc3_ = NAN;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("S__26_c.S__3e__21_p");
    (l_A__loc3_ = 0.0);
    {
        std::vector<rt::Value> _lst10600;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst10600);
        for (const rt::Value& _x10601 : _lst10600) {
            l_A__loc4_ = _x10601;
            if (({ rt::Value _o10602 = l_A__loc4_; C_S_84* _p10603 = rt::as_ptr<C_S_84>(_o10602); _p10603 ? _p10603->g_S__2d_6() : rt::T(rt::dget(_o10602, NM_S__2d_6)); })) {
                (l_A__loc3_ = (l_A__loc3_ + C_S__26_c::sm_S_7i(({ rt::Value _o10604 = l_A__loc4_; C_S_84* _p10605 = rt::as_ptr<C_S_84>(_o10604); _p10605 ? _p10605->f_id : rt::touint(rt::dget(_o10604, NM_id)); }), false, l_param1, l_param2)));
            }
        }
    }
    return l_A__loc3_;
    return 0.0;
}
bool C_S__26_c::dsm_S__22__22__20__0() { return false; }
bool C_S__26_c::dsm_S__22__22__20__1() { return false; }
bool C_S__26_c::dsm_S__22__22__20__2() { return false; }
double C_S__26_c::sm_S__22__22__20_(bool p0, bool p1, bool p2) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc5_ = NAN;
    double l_A__loc4_ = NAN;
    rt::Value l_A__loc6_ = rt::NUL;
    RT_FN("S__26_c.S__22__22__20_");
    (l_A__loc5_ = NAN);
    (l_A__loc4_ = (l_param1 ? 1.7976931348623157e+308 : 0.0));
    {
        std::vector<rt::Value> _lst10606;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst10606);
        for (const rt::Value& _x10607 : _lst10606) {
            l_A__loc6_ = _x10607;
            if ((!(({ bool _t10630 = ({ bool _t10627 = ({ bool _t10624 = ({ bool _t10621 = ({ bool _t10618 = ({ bool _t10615 = ({ bool _t10612 = (((double)(({ rt::Value _o10608 = l_A__loc6_; C_S_84* _p10609 = rt::as_ptr<C_S_84>(_o10608); _p10609 ? _p10609->f_id : rt::touint(rt::dget(_o10608, NM_id)); }))) == ((double)(g::SV.C_S_2_3c___id))); _t10612 ? _t10612 : (bool)((((double)(({ rt::Value _o10610 = l_A__loc6_; C_S_84* _p10611 = rt::as_ptr<C_S_84>(_o10610); _p10611 ? _p10611->f_id : rt::touint(rt::dget(_o10610, NM_id)); }))) == ((double)(g::SV.C_S_5j__id)))); }); _t10615 ? _t10615 : (bool)((((double)(({ rt::Value _o10613 = l_A__loc6_; C_S_84* _p10614 = rt::as_ptr<C_S_84>(_o10613); _p10614 ? _p10614->f_id : rt::touint(rt::dget(_o10613, NM_id)); }))) == ((double)(g::SV.C_S__23_9__id)))); }); _t10618 ? _t10618 : (bool)((((double)(({ rt::Value _o10616 = l_A__loc6_; C_S_84* _p10617 = rt::as_ptr<C_S_84>(_o10616); _p10617 ? _p10617->f_id : rt::touint(rt::dget(_o10616, NM_id)); }))) == ((double)(g::SV.C_S__5e_h__id)))); }); _t10621 ? _t10621 : (bool)((((double)(({ rt::Value _o10619 = l_A__loc6_; C_S_84* _p10620 = rt::as_ptr<C_S_84>(_o10619); _p10620 ? _p10620->f_id : rt::touint(rt::dget(_o10619, NM_id)); }))) == ((double)(g::SV.C_S__60__25___id)))); }); _t10624 ? _t10624 : (bool)((((double)(({ rt::Value _o10622 = l_A__loc6_; C_S_84* _p10623 = rt::as_ptr<C_S_84>(_o10622); _p10623 ? _p10623->f_id : rt::touint(rt::dget(_o10622, NM_id)); }))) == ((double)(g::SV.C_S__40__21_Y__id)))); }); _t10627 ? _t10627 : (bool)((((double)(({ rt::Value _o10625 = l_A__loc6_; C_S_84* _p10626 = rt::as_ptr<C_S_84>(_o10625); _p10626 ? _p10626->f_id : rt::touint(rt::dget(_o10625, NM_id)); }))) == ((double)(g::SV.C_S__27__22__25___id)))); }); _t10630 ? _t10630 : (bool)((((double)(({ rt::Value _o10628 = l_A__loc6_; C_S_84* _p10629 = rt::as_ptr<C_S_84>(_o10628); _p10629 ? _p10629->f_id : rt::touint(rt::dget(_o10628, NM_id)); }))) == ((double)(g::SV.C_S__40__22_7__id)))); }) || (((double)(({ rt::Value _o10631 = l_A__loc6_; C_S_84* _p10632 = rt::as_ptr<C_S_84>(_o10631); _p10632 ? _p10632->f_id : rt::touint(rt::dget(_o10631, NM_id)); }))) == ((double)(g::SV.C_S_1_22_F__id)))))) {
                if ((!((((double)(C_S_8G::sg_S_8_21_H())) < 14.0) && (((double)(({ rt::Value _o10633 = l_A__loc6_; C_S_84* _p10634 = rt::as_ptr<C_S_84>(_o10633); _p10634 ? _p10634->f_id : rt::touint(rt::dget(_o10633, NM_id)); }))) == ((double)(g::SV.C_S__25__2c___id)))))) {
                    if ((!((((double)(C_S_8G::sg_S__2c_P())) < 1.0) && (((double)(({ rt::Value _o10635 = l_A__loc6_; C_S_84* _p10636 = rt::as_ptr<C_S_84>(_o10635); _p10636 ? _p10636->f_id : rt::touint(rt::dget(_o10635, NM_id)); }))) == ((double)(g::SV.C_S_5_21_3__id)))))) {
                        if ((!((((double)(C_S_8G::sg_S__2c_P())) < 2.0) && (({ bool _t10650 = ({ bool _t10647 = ({ bool _t10644 = ({ bool _t10641 = (((double)(({ rt::Value _o10637 = l_A__loc6_; C_S_84* _p10638 = rt::as_ptr<C_S_84>(_o10637); _p10638 ? _p10638->f_id : rt::touint(rt::dget(_o10637, NM_id)); }))) == ((double)(g::SV.C_S_9_21_n__id))); _t10641 ? _t10641 : (bool)((((double)(({ rt::Value _o10639 = l_A__loc6_; C_S_84* _p10640 = rt::as_ptr<C_S_84>(_o10639); _p10640 ? _p10640->f_id : rt::touint(rt::dget(_o10639, NM_id)); }))) == ((double)(g::SV.C_S__27__21_n__id)))); }); _t10644 ? _t10644 : (bool)((((double)(({ rt::Value _o10642 = l_A__loc6_; C_S_84* _p10643 = rt::as_ptr<C_S_84>(_o10642); _p10643 ? _p10643->f_id : rt::touint(rt::dget(_o10642, NM_id)); }))) == ((double)(g::SV.C_S__25__21_n__id)))); }); _t10647 ? _t10647 : (bool)((((double)(({ rt::Value _o10645 = l_A__loc6_; C_S_84* _p10646 = rt::as_ptr<C_S_84>(_o10645); _p10646 ? _p10646->f_id : rt::touint(rt::dget(_o10645, NM_id)); }))) == ((double)(g::SV.C_S_2_22__21___id)))); }); _t10650 ? _t10650 : (bool)((((double)(({ rt::Value _o10648 = l_A__loc6_; C_S_84* _p10649 = rt::as_ptr<C_S_84>(_o10648); _p10649 ? _p10649->f_id : rt::touint(rt::dget(_o10648, NM_id)); }))) == ((double)(g::SV.C_S_7_22__20___id)))); }) || (((double)(({ rt::Value _o10651 = l_A__loc6_; C_S_84* _p10652 = rt::as_ptr<C_S_84>(_o10651); _p10652 ? _p10652->f_id : rt::touint(rt::dget(_o10651, NM_id)); }))) == ((double)(g::SV.C_S__21__22__21___id))))))) {
                            (l_A__loc5_ = C_S__26_c::sm_S_7i(({ rt::Value _o10653 = l_A__loc6_; C_S_84* _p10654 = rt::as_ptr<C_S_84>(_o10653); _p10654 ? _p10654->f_id : rt::touint(rt::dget(_o10653, NM_id)); }), false, l_param2, l_param3));
                            if ((({ bool _t10655 = l_param1; _t10655 ? (bool)((l_A__loc5_ < l_A__loc4_)) : _t10655; }) || ((!l_param1) && (l_A__loc5_ > l_A__loc4_)))) {
                                (l_A__loc4_ = l_A__loc5_);
                            }
                        }
                    }
                }
            }
        }
    }
    return ((l_A__loc4_ == 1.7976931348623157e+308) ? 0.0 : l_A__loc4_);
    return 0.0;
}
bool C_S__26_c::dsm_S__3c__21_v_0() { return false; }
double C_S__26_c::sm_S__3c__21_v(bool p0) {
    bool l_param1 = p0;
    double l_A__loc2_ = NAN;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26_c.S__3c__21_v");
    (l_A__loc2_ = 0.0);
    {
        std::vector<rt::Value> _lst10656;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst10656);
        for (const rt::Value& _x10657 : _lst10656) {
            l_A__loc3_ = _x10657;
            if (({ rt::Value _o10658 = l_A__loc3_; C_S_84* _p10659 = rt::as_ptr<C_S_84>(_o10658); _p10659 ? _p10659->g_S__2d_6() : rt::T(rt::dget(_o10658, NM_S__2d_6)); })) {
                (l_A__loc2_ = (l_A__loc2_ + C_S__26_c::sm_S_1_21__3b_(({ rt::Value _o10660 = l_A__loc3_; C_S_84* _p10661 = rt::as_ptr<C_S_84>(_o10660); _p10661 ? _p10661->f_id : rt::touint(rt::dget(_o10660, NM_id)); }), l_param1)));
            }
        }
    }
    return l_A__loc2_;
    return 0.0;
}
bool C_S__26_c::dsm_S_1_21__3b__1() { return false; }
double C_S__26_c::sm_S_1_21__3b_(uint32_t p0, bool p1) {
    uint32_t l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S_1_21__3b_");
    (l_A__loc3_ = (({ rt::Value _o10662 = C_S_8G::sm_S__23_N(l_param1); C_S_84* _p10663 = rt::as_ptr<C_S_84>(_o10662); _p10663 ? _p10663->f_S_4_22_I : rt::tonum(rt::dget(_o10662, NM_S_4_22_I)); }) / 30.0));
    if ((!l_param2)) {
        if ((C_S_8G::sm_S__3c__21_B(g::SV.C_S__21__22__21___id) && ({ rt::Value _o10664 = g::SV.C_S__21__22__21___S__25__22__20_; C_S__3b_m* _p10665 = rt::as_ptr<C_S__3b_m>(_o10664); _p10665 ? _p10665->m_S__27_W(g::SV.C_S__21__22__21___S_9_21_y) : rt::T(rt::dcallv(_o10664, NM_S__27_W, rt::V((double)(g::SV.C_S__21__22__21___S_9_21_y)))); }))) {
            (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__21__22__21_::sm_S__2c__21_G()))));
        }
    }
    return l_A__loc3_;
    return 0.0;
}
bool C_S__26_c::dsm_S__22__21_z_0() { return false; }
bool C_S__26_c::dsm_S__22__21_z_1() { return false; }
double C_S__26_c::sm_S__22__21_z(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc4_ = NAN;
    double l_A__loc3_ = NAN;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S__26_c.S__22__21_z");
    (l_A__loc4_ = NAN);
    (l_A__loc3_ = (l_param1 ? 1.7976931348623157e+308 : 0.0));
    {
        std::vector<rt::Value> _lst10666;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst10666);
        for (const rt::Value& _x10667 : _lst10666) {
            l_A__loc5_ = _x10667;
            if (({ rt::Value _o10668 = l_A__loc5_; C_S_84* _p10669 = rt::as_ptr<C_S_84>(_o10668); _p10669 ? _p10669->g_S__2d_6() : rt::T(rt::dget(_o10668, NM_S__2d_6)); })) {
                (l_A__loc4_ = (({ rt::Value _o10670 = l_A__loc5_; C_S_84* _p10671 = rt::as_ptr<C_S_84>(_o10670); _p10671 ? _p10671->f_S_4_22_I : rt::tonum(rt::dget(_o10670, NM_S_4_22_I)); }) / 30.0));
                if ((!l_param2)) {
                    if ((C_S_8G::sm_S__3c__21_B(g::SV.C_S__21__22__21___id) && ({ rt::Value _o10672 = g::SV.C_S__21__22__21___S__25__22__20_; C_S__3b_m* _p10673 = rt::as_ptr<C_S__3b_m>(_o10672); _p10673 ? _p10673->m_S__27_W(g::SV.C_S__21__22__21___S_9_21_y) : rt::T(rt::dcallv(_o10672, NM_S__27_W, rt::V((double)(g::SV.C_S__21__22__21___S_9_21_y)))); }))) {
                        (l_A__loc4_ = (l_A__loc4_ * (1.0 + (0.01 * C_S__21__22__21_::sm_S__2c__21_G()))));
                    }
                }
                if ((({ bool _t10674 = l_param1; _t10674 ? (bool)((l_A__loc4_ < l_A__loc3_)) : _t10674; }) || ((!l_param1) && (l_A__loc4_ > l_A__loc3_)))) {
                    (l_A__loc3_ = l_A__loc4_);
                }
            }
        }
    }
    return ((l_A__loc3_ == 1.7976931348623157e+308) ? 0.0 : l_A__loc3_);
    return 0.0;
}
bool C_S__26_c::dsm_S__3f__26__0() { return false; }
int32_t C_S__26_c::sm_S__3f__26_(bool p0) {
    bool l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26_c.S__3f__26_");
    (l_A__loc2_ = rt::toint_d(0.0));
    {
        std::vector<rt::Value> _lst10675;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst10675);
        for (const rt::Value& _x10676 : _lst10675) {
            l_A__loc3_ = _x10676;
            if (({ rt::Value _o10677 = l_A__loc3_; C_S_84* _p10678 = rt::as_ptr<C_S_84>(_o10677); _p10678 ? _p10678->f_S_23 : rt::T(rt::dget(_o10677, NM_S_23)); })) {
                (l_A__loc2_ = rt::toint_d((({ double _old10679 = ((double)(l_A__loc2_)); l_A__loc2_ = rt::toint_d((_old10679 + 1.0)); (_old10679 + 1.0); }) + ((double)(({ rt::Value _o10680 = l_A__loc3_; C_S_84* _p10681 = rt::as_ptr<C_S_84>(_o10680); _p10681 ? _p10681->g_S__60_r() : rt::touint(rt::dget(_o10680, NM_S__60_r)); }))))));
            }
        }
    }
    if ((!l_param1)) {
        if (C_S_8G::sm_S_7d(g::SV.C_S__22__22__3c___id)) {
            (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) * (1.0 + (0.01 * C_S__22__22__3c_::sm_S__2c__21_G())))));
        }
    }
    return l_A__loc2_;
    return 0;
}
int32_t C_S__26_c::dsm_S_8_22_F_0() { return rt::toint_d((-1.0)); }
int32_t C_S__26_c::sm_S_8_22_F(int32_t p0) {
    int32_t l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__26_c.S_8_22_F");
    (l_A__loc2_ = rt::toint_d(0.0));
    {
        std::vector<rt::Value> _lst10682;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst10682);
        for (const rt::Value& _x10683 : _lst10682) {
            l_A__loc3_ = _x10683;
            if ((({ rt::Value _o10684 = l_A__loc3_; C_S_84* _p10685 = rt::as_ptr<C_S_84>(_o10684); _p10685 ? _p10685->f_S_23 : rt::T(rt::dget(_o10684, NM_S_23)); }) && (({ bool _t10688 = (((double)(l_param1)) == (-1.0)); _t10688 ? _t10688 : (bool)((((double)(({ rt::Value _o10686 = l_A__loc3_; C_S_84* _p10687 = rt::as_ptr<C_S_84>(_o10686); _p10687 ? _p10687->f_S__2c__21_Y : rt::toint(rt::dget(_o10686, NM_S__2c__21_Y)); }))) == ((double)(l_param1)))); }) || (({ bool _t10693 = (!(((double)(({ rt::Value _o10689 = l_A__loc3_; C_S_84* _p10690 = rt::as_ptr<C_S_84>(_o10689); _p10690 ? _p10690->f_S_9_21_m : rt::toint(rt::dget(_o10689, NM_S_9_21_m)); }))) == 0.0)); _t10693 ? (bool)((((double)(({ rt::Value _o10691 = l_A__loc3_; C_S_84* _p10692 = rt::as_ptr<C_S_84>(_o10691); _p10692 ? _p10692->f_S_9_21_m : rt::toint(rt::dget(_o10691, NM_S_9_21_m)); }))) == ((double)(l_param1)))) : _t10693; }) && (((double)(C_S_8G::sg_S__2c_P())) >= 2.0))))) {
                (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
            }
        }
    }
    return l_A__loc2_;
    return 0;
}
int32_t C_S__26_c::sm_S__3d__22_Q() {
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc1_ = 0;
    RT_FN("S__26_c.S__3d__22_Q");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::toint_d(1.0));
    while ((((double)(l_A__loc2_)) <= 6.0)) {
        if ((((double)(C_S__26_c::sm_S_8_22_F(l_A__loc2_))) > 0.0)) {
            (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return l_A__loc1_;
    return 0;
}
double C_S__26_c::sm_S__40__22_2() {
    int32_t l_A__loc2_ = 0;
    double l_A__loc1_ = NAN;
    RT_FN("S__26_c.S__40__22_2");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = 0.0);
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) < rt::alen(g::SV.C_S__26_c__S__40__21_b))) {
        if (({ rt::Value _o10694 = C_S_8G::sm_S__23_N(((uint32_t)(l_A__loc2_))); C_S_84* _p10695 = rt::as_ptr<C_S_84>(_o10694); _p10695 ? _p10695->f_S__27_a : rt::T(rt::dget(_o10694, NM_S__27_a)); })) {
            (l_A__loc1_ = (l_A__loc1_ + ((double)(C_S_8G::sm_S__27__21_M(rt::arr_at(g::SV.C_S__26_c__S__40__21_b, ((double)(l_A__loc2_))))))));
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return l_A__loc1_;
    return 0.0;
}
double C_S__26_c::sm_S_3_22_M() {
    int32_t l_A__loc2_ = 0;
    double l_A__loc1_ = NAN;
    RT_FN("S__26_c.S_3_22_M");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = 0.0);
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) <= 6.0)) {
        (l_A__loc1_ = (l_A__loc1_ + C_S__23__21__21_::sm_S__2b__22_5(l_A__loc2_)));
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return l_A__loc1_;
    return 0.0;
}
double C_S__26_c::sm_S__3f__22_H() {
    int32_t l_A__loc2_ = 0;
    double l_A__loc1_ = NAN;
    RT_FN("S__26_c.S__3f__22_H");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = 0.0);
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) <= 6.0)) {
        (l_A__loc1_ = (l_A__loc1_ + rt::m_max2(0.0, (C_S__23__21__21_::sm_S__2b__22_5(l_A__loc2_) - C_S__26_c::sm_S_1_22__2c_(l_A__loc2_)))));
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return l_A__loc1_;
    return 0.0;
}
uint32_t C_S__26_c::sm_S__5e__21_L() {
    int32_t l_A__loc2_ = 0;
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S__26_c.S__5e__21_L");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::touint_d(0.0));
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) < rt::alen(g::SV.C_S__26_c__S__5d_d))) {
        if (C_S_8G::sm_S__27__22_(rt::touint(rt::arr_at(g::SV.C_S__26_c__S__5d_d, ((double)(l_A__loc2_)))))) {
            (l_A__loc1_ = rt::touint_d((((double)(l_A__loc1_)) + 1.0)));
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return l_A__loc1_;
    return 0u;
}
bool C_S__26_c::dsm_S__5b__21_I_1() { return false; }
bool C_S__26_c::dsm_S__5b__21_I_2() { return false; }
rt::Value C_S__26_c::sm_S__5b__21_I(double p0, bool p1, bool p2) {
    double l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    int32_t l_A__loc6_ = 0;
    int32_t l_A__loc5_ = 0;
    double l_A__loc11_ = NAN;
    rt::Value l_A__loc4_ = rt::UNDEF;
    rt::Value l_A__loc9_ = rt::UNDEF;
    rt::Value l_A__loc10_ = rt::NUL;
    uint32_t l_A__loc12_ = 0u;
    uint32_t l_A__loc7_ = 0u;
    uint32_t l_A__loc8_ = 0u;
    bool l_A__loc13_ = false;
    int32_t l_A__loc15_ = 0;
    double l_A__loc14_ = NAN;
    RT_FN("S__26_c.S__5b__21_I");
    (l_A__loc6_ = rt::toint_d(0.0));
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc11_ = NAN);
    (l_A__loc4_ = rt::V(0.0));
    (l_A__loc9_ = rt::V(0.0));
    (l_A__loc10_ = rt::new_vectorv(rt::E_UINT));
    (l_A__loc6_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc6_)) < rt::alen(g::SV.C_S__26_c__S__5d_d))) {
        if ((!C_S_8G::sm_S__27__22_(rt::touint(rt::arr_at(g::SV.C_S__26_c__S__5d_d, ((double)(l_A__loc6_))))))) {
            (void)(rt::dcallv(l_A__loc10_, rt::N_push, rt::arr_at(g::SV.C_S__26_c__S__5d_d, ((double)(l_A__loc6_)))));
        }
        (l_A__loc6_ = rt::toint_d((((double)(l_A__loc6_)) + 1.0)));
    }
    (l_A__loc12_ = C_S__26_c::sm_S__5e__21_L());
    (l_A__loc7_ = rt::touint_d(0.0));
    (l_A__loc8_ = rt::touint_d(0.0));
    (l_A__loc13_ = false);
    (l_A__loc5_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc5_)) < l_param1)) {
        (l_A__loc11_ = ({ rt::Value _o10696 = g::SV.C_S__26_c__S__3c_5; C_S_7_21__20_* _p10697 = rt::as_ptr<C_S_7_21__20_>(_o10696); _p10697 ? _p10697->m_S__3b__21__2c_(0.0, 100.0) : rt::tonum(rt::dcallv(_o10696, NM_S__3b__21__2c_, rt::V(0.0), rt::V(100.0))); }));
        if ((l_param3 || (({ bool _t10698 = (l_A__loc11_ > 0.0); _t10698 ? (bool)((l_A__loc11_ < 0.1)) : _t10698; }) && (rt::alen(l_A__loc10_) > 0.0)))) {
            (l_A__loc4_ = rt::V((double)(rt::touint_d(rt::m_floor(({ rt::Value _o10699 = g::SV.C_S__26_c__S__3c_5; C_S_7_21__20_* _p10700 = rt::as_ptr<C_S_7_21__20_>(_o10699); _p10700 ? _p10700->m_S__3b__21__2c_(0.0, rt::alen(l_A__loc10_)) : rt::tonum(rt::dcallv(_o10699, NM_S__3b__21__2c_, rt::V(0.0), rt::V(rt::alen(l_A__loc10_)))); }))))));
            (l_A__loc9_ = rt::idx_get(l_A__loc10_, l_A__loc4_));
            (void)(rt::dcallv(l_A__loc10_, rt::N_splice, l_A__loc4_, rt::V(1.0)));
            ({ bool _v10703 = true; rt::Value _o10701 = C_S_8G::sm_S__21__21_H(rt::touint(l_A__loc9_)); C_S__60_6* _p10702 = rt::as_ptr<C_S__60_6>(_o10701); if (_p10702) _p10702->f_S__3f__21_6 = _v10703; else rt::dset(_o10701, NM_S__3f__21_6, rt::VB(_v10703)); _v10703; });
            ({ double _v10704 = (C_S_8G::sg_S__3c__21__27_() + 1.0); C_S_8G::ss_S__3c__21__27_(_v10704); _v10704; });
            ({ rt::Value _o10705 = g::SV.C_S_8G__S_5_21_V; rt::Value _i10706 = rt::V(102.0); rt::Value _v10707 = rt::add(rt::idx_get(_o10705, _i10706), rt::V(1.0)); rt::idx_set(_o10705, _i10706, _v10707); _v10707; });
            (l_A__loc13_ = true);
            (void)(({ rt::Value _o10710 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p10711 = rt::as_ptr<C_S__20_g>(_o10710); _p10711 ? _p10711->m_S_3_21__2b_(rt::trv(rt::VS(g::LS[1993]), ({ rt::Value _o10708 = C_S_8G::sm_S__21__21_H(rt::touint(l_A__loc9_)); C_S__60_6* _p10709 = rt::as_ptr<C_S__60_6>(_o10708); _p10709 ? _p10709->f_S_1i : rt::dget(_o10708, NM_S_1i); })), C_S__20_g::dm_S_3_21__2b__1()) : rt::dcallv(_o10710, NM_S_3_21__2b_, rt::trv(rt::VS(g::LS[1993]), ({ rt::Value _o10712 = C_S_8G::sm_S__21__21_H(rt::touint(l_A__loc9_)); C_S__60_6* _p10713 = rt::as_ptr<C_S__60_6>(_o10712); _p10713 ? _p10713->f_S_1i : rt::dget(_o10712, NM_S_1i); }))); }));
        } else if (((l_A__loc11_ > 0.0) && (l_A__loc11_ < 4.0))) {
            (l_A__loc8_ = rt::touint_d((((double)(l_A__loc8_)) + 1.0)));
        } else {
            (l_A__loc7_ = rt::touint_d((((double)(l_A__loc7_)) + 1.0)));
        }
        (l_A__loc5_ = rt::toint_d((((double)(l_A__loc5_)) + 1.0)));
    }
    if ((({ bool _t10714 = (((double)(l_A__loc8_)) > 0.0); _t10714 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0)) : _t10714; }) && (!C_S_8G::sm_S__3c_P(g::SV.C_S__26_y__id)))) {
        (void)(({ rt::Value _o10715 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p10716 = rt::as_ptr<C_S_8G>(_o10715); _p10716 ? _p10716->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__26_y__id)) : rt::dcallv(_o10715, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__26_y__id)); }));
    }
    if ((({ bool _t10717 = (((double)(l_A__loc8_)) > 0.0); _t10717 ? (bool)((!C_S_8G::sm_S__3c_P(g::SV.C_S_2_22_K__id))) : _t10717; }) && (C_S__23__21__21_::sm_S__21__2d_() >= 100000.0))) {
        (void)(({ rt::Value _o10718 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p10719 = rt::as_ptr<C_S_8G>(_o10718); _p10719 ? _p10719->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S_2_22_K__id)) : rt::dcallv(_o10718, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S_2_22_K__id)); }));
    }
    (l_A__loc15_ = rt::toint_d(5.0));
    (l_A__loc14_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, ((double)(l_A__loc15_))), rt::V((double)(l_A__loc8_)))));
    ({ rt::Value _v10720 = rt::V(l_A__loc14_); rt::idx_set(g::SV.C_S_8G__S_6_21__2d_, rt::V((double)(l_A__loc15_)), _v10720); });
    ({ rt::Value _o10721 = g::SV.C_S_8G__S_5_21_V; rt::Value _i10722 = rt::V(124.0); rt::Value _v10723 = rt::add(rt::idx_get(_o10721, _i10722), rt::V((double)(l_A__loc8_))); rt::idx_set(_o10721, _i10722, _v10723); _v10723; });
    ({ rt::Value _o10724 = g::SV.C_S_8G__S_6_21__2d_; rt::Value _i10725 = rt::V(4.0); rt::Value _v10726 = rt::add(rt::idx_get(_o10724, _i10725), rt::V((double)(l_A__loc7_))); rt::idx_set(_o10724, _i10725, _v10726); _v10726; });
    ({ rt::Value _o10727 = g::SV.C_S_8G__S_5_21_V; rt::Value _i10728 = rt::V(123.0); rt::Value _v10729 = rt::add(rt::idx_get(_o10727, _i10728), rt::V((double)(l_A__loc7_))); rt::idx_set(_o10727, _i10728, _v10729); _v10729; });
    if ((({ bool _t10730 = (!l_param2); _t10730 ? (bool)((!l_A__loc13_)) : _t10730; }) && ((((double)(l_A__loc7_)) > 0.0) || (((double)(l_A__loc8_)) > 0.0)))) {
        if (((((double)(l_A__loc7_)) > 0.0) && (((double)(l_A__loc8_)) == 0.0))) {
            (void)(({ rt::Value _o10731 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p10732 = rt::as_ptr<C_S__20_g>(_o10731); _p10732 ? _p10732->m_S_3_21__2b_(rt::tr_nv(rt::VS(g::LS[1994]), rt::VS(g::LS[1995]), rt::V((double)(l_A__loc7_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc7_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), C_S__20_g::dm_S_3_21__2b__1()) : rt::dcallv(_o10731, NM_S_3_21__2b_, rt::tr_nv(rt::VS(g::LS[1994]), rt::VS(g::LS[1995]), rt::V((double)(l_A__loc7_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc7_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))); }));
        } else if (((((double)(l_A__loc7_)) == 0.0) && (((double)(l_A__loc8_)) > 0.0))) {
            (void)(({ rt::Value _o10733 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p10734 = rt::as_ptr<C_S__20_g>(_o10733); _p10734 ? _p10734->m_S_3_21__2b_(rt::tr_nv(rt::VS(g::LS[1996]), rt::VS(g::LS[1997]), rt::V((double)(l_A__loc8_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc8_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), C_S__20_g::dm_S_3_21__2b__1()) : rt::dcallv(_o10733, NM_S_3_21__2b_, rt::tr_nv(rt::VS(g::LS[1996]), rt::VS(g::LS[1997]), rt::V((double)(l_A__loc8_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc8_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))); }));
        } else {
            (void)(({ rt::Value _o10735 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p10736 = rt::as_ptr<C_S__20_g>(_o10735); _p10736 ? _p10736->m_S_3_21__2b_(rt::tr_nv(rt::VS(g::LS[1998]), rt::VS(g::LS[1999]), rt::V((double)(l_A__loc7_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc7_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::tr_nv(rt::VS(g::LS[2000]), rt::VS(g::LS[2001]), rt::V((double)(l_A__loc8_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc8_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), C_S__20_g::dm_S_3_21__2b__1()) : rt::dcallv(_o10735, NM_S_3_21__2b_, rt::tr_nv(rt::VS(g::LS[1998]), rt::VS(g::LS[1999]), rt::V((double)(l_A__loc7_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc7_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::tr_nv(rt::VS(g::LS[2000]), rt::VS(g::LS[2001]), rt::V((double)(l_A__loc8_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc8_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))); }));
        }
    }
    return rt::NUL;
}
rt::Value C_S__26_c::sm_S__2b__21_I(rt::Value p0, bool p1) {
    rt::Value l_param1 = p0;
    bool l_param2 = p1;
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc5_ = rt::NUL;
    int32_t l_A__loc4_ = 0;
    RT_FN("S__26_c.S__2b__21_I");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc5_ = rt::NUL);
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < rt::alen(g::SV.C_S_8G__S__25__3c_))) {
        (l_A__loc5_ = rt::arr_at(g::SV.C_S_8G__S__25__3c_, ((double)(l_A__loc3_))));
        (l_A__loc4_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc4_)) < rt::alen(l_param1))) {
            (void)(({ rt::Value _o10737 = l_A__loc5_; C_S__60__21__3b_* _p10738 = rt::as_ptr<C_S__60__21__3b_>(_o10737); _p10738 ? _p10738->m_S__23__21_(rt::touint(rt::arr_at(l_param1, ((double)(l_A__loc4_)))), l_param2) : rt::dcallv(_o10737, NM_S__23__21_, rt::arr_at(l_param1, ((double)(l_A__loc4_))), rt::VB(l_param2)); }));
            (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
        }
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S__26_c::sm_S_5_40_(uint32_t p0, bool p1) {
    uint32_t l_param1 = p0;
    bool l_param2 = p1;
    int32_t l_A__loc3_ = 0;
    RT_FN("S__26_c.S_5_40_");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < rt::alen(g::SV.C_S_8G__S__25__3c_))) {
        (void)(({ rt::Value _o10739 = rt::arr_at(g::SV.C_S_8G__S__25__3c_, ((double)(l_A__loc3_))); C_S__60__21__3b_* _p10740 = rt::as_ptr<C_S__60__21__3b_>(_o10739); _p10740 ? _p10740->m_S__23__21_(l_param1, l_param2) : rt::dcallv(_o10739, NM_S__23__21_, rt::V((double)(l_param1)), rt::VB(l_param2)); }));
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S__26_c::sm_S_0p(rt::Value p0, bool p1) {
    rt::Value l_param1 = p0;
    bool l_param2 = p1;
    int32_t l_A__loc3_ = 0;
    RT_FN("S__26_c.S_0p");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < rt::alen(g::SV.C_S_8G__S__25__3c_))) {
        (void)(({ rt::Value _o10741 = rt::arr_at(g::SV.C_S_8G__S__25__3c_, ((double)(l_A__loc3_))); C_S__60__21__3b_* _p10742 = rt::as_ptr<C_S__60__21__3b_>(_o10741); _p10742 ? _p10742->m_S__5d__21__2c_(l_param1, l_param2) : rt::dcallv(_o10741, NM_S__5d__21__2c_, l_param1, rt::VB(l_param2)); }));
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    return rt::NUL;
}
int32_t C_S__26_c::sm_S__40__22_M() {
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    int32_t l_A__loc1_ = 0;
    RT_FN("S__26_c.S__40__22_M");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::NUL);
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) <= 15.0)) {
        if ((!(({ bool _t10744 = ({ bool _t10743 = (((double)(l_A__loc3_)) == 11.0); _t10743 ? _t10743 : (bool)((((double)(l_A__loc3_)) == 13.0)); }); _t10744 ? _t10744 : (bool)((((double)(l_A__loc3_)) == 14.0)); }) || (((double)(l_A__loc3_)) == 15.0)))) {
            (l_A__loc2_ = C_S_8G::sm_S__2d_5(rt::touint_d(((105400.0 + ((double)(l_A__loc3_))) + 25.0))));
            if (((!rt::eq(l_A__loc2_, rt::NUL)) && ({ rt::Value _o10745 = l_A__loc2_; C_S__23__21__60_* _p10746 = rt::as_ptr<C_S__23__21__60_>(_o10745); _p10746 ? _p10746->f_S_4_21_K : rt::T(rt::dget(_o10745, NM_S_4_21_K)); }))) {
                (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
            }
        }
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    return l_A__loc1_;
    return 0;
}
double C_S__26_c::sm_S__22_X() {
    RT_FN("S__26_c.S__22_X");
    return ({ rt::Value _o10747 = g::SV.C_S__26_c__S_9_21__27_; C_S_7_21__20_* _p10748 = rt::as_ptr<C_S_7_21__20_>(_o10747); _p10748 ? _p10748->m_S__22_X() : rt::tonum(rt::dcallv(_o10747, NM_S__22_X)); });
    return 0.0;
}
double C_S__26_c::sm_S__3b__21__2c_(double p0, double p1) {
    double l_param1 = p0;
    double l_param2 = p1;
    RT_FN("S__26_c.S__3b__21__2c_");
    return ({ rt::Value _o10749 = g::SV.C_S__26_c__S_9_21__27_; C_S_7_21__20_* _p10750 = rt::as_ptr<C_S_7_21__20_>(_o10749); _p10750 ? _p10750->m_S__3b__21__2c_(l_param1, l_param2) : rt::tonum(rt::dcallv(_o10749, NM_S__3b__21__2c_, rt::V(l_param1), rt::V(l_param2))); });
    return 0.0;
}
bool C_S__26_c::sm_S_4_21_j(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__26_c.S_4_21_j");
    return true;
    return false;
}
bool C_S__26_c::sm_S__60__22__2b_(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__26_c.S__60__22__2b_");
    return true;
    return false;
}
double C_S__26_c::sm_S__2c__22_F() {
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    double l_A__loc3_ = NAN;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("S__26_c.S__2c__22_F");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::arr_lit({}));
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) <= 15.0)) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, rt::V(0.0)));
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    (l_A__loc3_ = 0.0);
    {
        std::vector<rt::Value> _lst10751;
        rt::each(g::SV.C_S__26_c__S__2b__22_F, _lst10751);
        for (const rt::Value& _x10752 : _lst10751) {
            l_A__loc4_ = _x10752;
            if ((rt::eq(rt::arr_at(l_A__loc1_, ((double)(({ rt::Value _o10753 = l_A__loc4_; C_S__60_6* _p10754 = rt::as_ptr<C_S__60_6>(_o10753); _p10754 ? _p10754->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10753, NM_S__2d__21__5e_)); })))), rt::V(0.0)) && ({ rt::Value _o10755 = l_A__loc4_; C_S__60_6* _p10756 = rt::as_ptr<C_S__60_6>(_o10755); _p10756 ? _p10756->f_S__3c__21_7 : rt::T(rt::dget(_o10755, NM_S__3c__21_7)); }))) {
                ({ rt::Value _v10757 = rt::V(1.0); rt::idx_set(l_A__loc1_, rt::V((double)(({ rt::Value _o10758 = l_A__loc4_; C_S__60_6* _p10759 = rt::as_ptr<C_S__60_6>(_o10758); _p10759 ? _p10759->f_S__2d__21__5e_ : rt::toint(rt::dget(_o10758, NM_S__2d__21__5e_)); }))), _v10757); });
                (l_A__loc3_ = (l_A__loc3_ + 1.0));
            }
        }
    }
    return l_A__loc3_;
    return 0.0;
}
double C_S__26_c::sm_S_1_21_n(double p0) {
    double l_param1 = p0;
    double l_A__loc2_ = NAN;
    RT_FN("S__26_c.S_1_21_n");
    (l_A__loc2_ = 0.0);
    while ((l_param1 >= 1.0)) {
        (l_A__loc2_ = (l_A__loc2_ + rt::mod(l_param1, 10.0)));
        (l_param1 = rt::m_floor((l_param1 / 10.0)));
    }
    return l_A__loc2_;
    return 0.0;
}
double C_S__26_c::sm_S__2c__22_L(double p0, double p1) {
    double l_param1 = p0;
    double l_param2 = p1;
    RT_FN("S__26_c.S__2c__22_L");
    if ((C_S_8G::sm_S__3c_P(g::SV.C_S__3c__21_2__id) && (((double)(C_S__3c__21_2::sm_S__2b_A())) >= 50.0))) {
        (l_param1 = (l_param1 * (1.0 + ((0.01 * l_param2) * C_S__3c__21_2::sm_S__40_L()))));
    }
    return l_param1;
    return 0.0;
}
bool C_S__26_c::dsm_S_8_21_Z_1() { return false; }
bool C_S__26_c::dsm_S_8_21_Z_2() { return false; }
rt::Value C_S__26_c::sm_S_8_21_Z(double p0, bool p1, bool p2) {
    double l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    int32_t l_A__loc4_ = 0;
    rt::Value l_A__loc10_ = rt::NUL;
    int32_t l_A__loc7_ = 0;
    rt::Value l_A__loc11_ = rt::NUL;
    double l_A__loc12_ = NAN;
    bool l_A__loc8_ = false;
    int32_t l_A__loc5_ = 0;
    int32_t l_A__loc9_ = 0;
    double l_A__loc6_ = NAN;
    RT_FN("S__26_c.S_8_21_Z");
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc10_ = rt::slot_string(rt::NUL));
    (l_A__loc7_ = rt::toint_d(0.0));
    (l_A__loc11_ = rt::slot_string(rt::NUL));
    (l_A__loc12_ = NAN);
    if ((!((l_param1 * 0.0) == 0.0))) {
        return rt::slot_string(rt::VS(g::LS[2002]));
    }
    (l_A__loc8_ = rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)));
    (l_A__loc5_ = rt::toint(rt::arr_at(g::SV.C_S_8G__S_4P, 0.0)));
    if ((l_param1 < 1000000.0)) {
        (l_A__loc4_ = rt::toint_d(rt::m_floor(l_param1)));
        (l_A__loc10_ = rt::slot_string(rt::dcallv(rt::V((double)(l_A__loc4_)), rt::N_toString)));
        if (((((double)(l_A__loc4_)) < 1000.0) || (!l_A__loc8_))) {
            return rt::slot_string(l_A__loc10_);
        }
        return rt::slot_string(rt::add(rt::add(rt::dcallv(l_A__loc10_, rt::N_substr, rt::V(0.0), rt::V((rt::alen(l_A__loc10_) - 3.0))), rt::VS(g::LS[119])), rt::dcallv(l_A__loc10_, rt::N_substr, rt::V((rt::alen(l_A__loc10_) - 3.0)))));
    }
    (l_A__loc9_ = rt::toint_d(rt::m_floor((rt::m_log(l_param1) / 2.302585092994046))));
    if ((((double)(l_A__loc5_)) == 0.0)) {
        (l_A__loc7_ = rt::toint_d(rt::m_floor((((((double)(l_A__loc9_)) - 6.0)) / 3.0))));
        if ((((double)(l_A__loc7_)) < 0.0)) {
            return rt::slot_string(rt::add(rt::add(rt::VS(g::LS[1391]), ((l_param2 ? rt::VS(g::LS[8]) : rt::VS(g::LS[113])))), rt::VS(g::LS[348])));
        }
        (l_A__loc11_ = rt::slot_string(C_S__26_c::sm_S__3e_4(rt::dcallv(rt::V(((l_param1 / rt::tonum(rt::arr_at(g::SV.C_S__2d_D__S__20__21__26_, ((double)(l_A__loc7_))))))), rt::N_toPrecision, rt::V(4.0)))));
        if (rt::eq(l_A__loc11_, rt::VS(g::LS[2003]))) {
            return rt::slot_string(rt::add(rt::add(rt::VS(g::LS[1391]), ((l_param2 ? rt::VS(g::LS[8]) : rt::VS(g::LS[113])))), rt::arr_at(g::SV.C_S__2d_D__S_1X, (((double)(l_A__loc7_)) + 1.0))));
        }
        (l_A__loc12_ = (l_param1 / rt::tonum(rt::arr_at(g::SV.C_S__2d_D__S__20__21__26_, ((double)(l_A__loc7_))))));
        if (l_param3) {
            (l_A__loc12_ = rt::m_floor(l_A__loc12_));
        }
        return rt::slot_string(rt::add(rt::add(C_S__26_c::sm_S__3e_4(rt::dcallv(rt::V(l_A__loc12_), rt::N_toPrecision, rt::V(4.0))), ((l_param2 ? rt::VS(g::LS[8]) : rt::VS(g::LS[113])))), rt::arr_at(g::SV.C_S__2d_D__S_1X, ((double)(l_A__loc7_)))));
    }
    if ((((double)(l_A__loc5_)) == 2.0)) {
        (l_A__loc9_ = rt::toint_d((((double)(rt::toint_d(rt::m_floor((((double)(l_A__loc9_)) / 3.0))))) * 3.0)));
    }
    (l_A__loc6_ = (l_param1 * rt::m_pow(10.0, (-((double)(l_A__loc9_))))));
    if (l_param3) {
        (l_A__loc6_ = rt::m_floor(l_A__loc6_));
    }
    if (((((double)(l_A__loc5_)) == 1.0) && (l_A__loc6_ >= 9.999))) {
        return rt::slot_string(rt::add(rt::add(rt::add(rt::VS(g::LS[1391]), ((l_param2 ? rt::VS(g::LS[8]) : rt::VS(g::LS[113])))), rt::VS(g::LS[156])), rt::dcallv(rt::V(((((double)(l_A__loc9_)) + 1.0))), rt::N_toString)));
    }
    if (((((double)(l_A__loc5_)) == 2.0) && (l_A__loc6_ >= 999.999))) {
        return rt::slot_string(rt::add(rt::add(rt::add(rt::VS(g::LS[1391]), ((l_param2 ? rt::VS(g::LS[8]) : rt::VS(g::LS[113])))), rt::VS(g::LS[156])), rt::dcallv(rt::V(((((double)(l_A__loc9_)) + 3.0))), rt::N_toString)));
    }
    return rt::slot_string(rt::add(rt::add(rt::add(C_S__26_c::sm_S__3e_4(rt::dcallv(rt::V(l_A__loc6_), rt::N_toPrecision, rt::V(4.0))), ((l_param2 ? rt::VS(g::LS[8]) : rt::VS(g::LS[113])))), rt::VS(g::LS[156])), rt::dcallv(rt::V((double)(l_A__loc9_)), rt::N_toString)));
    return rt::NUL;
}
rt::Value C_S__26_c::sm_S__26__21__3f_(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("S__26_c.S__26__21__3f_");
    return rt::slot_string(rt::dcallv(l_param1, rt::N_replace, rt::new_regexp(rt::VS(g::LS[320]).s, rt::VS(g::LS[174]).s), rt::VS(g::LS[113])));
    return rt::NUL;
}
double C_S__26_c::dsm_S_6_21_T_1() { return 1.0; }
bool C_S__26_c::dsm_S_6_21_T_2() { return false; }
rt::Value C_S__26_c::sm_S_6_21_T(double p0, double p1, bool p2) {
    double l_param1 = p0;
    double l_param2 = p1;
    bool l_param3 = p2;
    RT_FN("S__26_c.S_6_21_T");
    if (((!l_param3) || (((double)(C_S_8G::sg_S__2c_P())) < 4.0))) {
        (l_param1 = (((C_S__23__21__21_::sm_S__23__25_(((l_param1 / 100.0) + 1.0), l_param2) - 1.0)) * 100.0));
    }
    return rt::slot_string(C_S__26_c::sm_S_8_21_Z(l_param1, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()));
    return rt::NUL;
}
double C_S__26_c::dsm_S__40__22_A_2() { return 1.0; }
bool C_S__26_c::dsm_S__40__22_A_3() { return false; }
rt::Value C_S__26_c::sm_S__40__22_A(double p0, double p1, double p2, bool p3) {
    double l_param1 = p0;
    double l_param2 = p1;
    double l_param3 = p2;
    bool l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S__26_c.S__40__22_A");
    (l_A__loc5_ = 0.0);
    if (((!l_param4) || (((double)(C_S_8G::sg_S__2c_P())) < 4.0))) {
        (l_A__loc5_ = ((((C_S__23__21__21_::sm_S__23__25_(((l_param1 / 100.0) + 1.0), l_param3) * C_S__23__21__21_::sm_S__23__25_(((l_param2 / 100.0) + 1.0), l_param3)) - 1.0)) * 100.0));
    } else {
        (l_A__loc5_ = (((((((l_param1 / 100.0) + 1.0)) * (((l_param2 / 100.0) + 1.0))) - 1.0)) * 100.0));
    }
    return rt::slot_string(C_S__26_c::sm_S_8_21_Z(l_A__loc5_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()));
    return rt::NUL;
}
double C_S__26_c::dsm_S_5_22__3b__3() { return 1.0; }
bool C_S__26_c::dsm_S_5_22__3b__4() { return false; }
rt::Value C_S__26_c::sm_S_5_22__3b_(double p0, double p1, double p2, double p3, bool p4) {
    double l_param1 = p0;
    double l_param2 = p1;
    double l_param3 = p2;
    double l_param4 = p3;
    bool l_param5 = p4;
    double l_A__loc6_ = NAN;
    RT_FN("S__26_c.S_5_22__3b_");
    (l_A__loc6_ = 0.0);
    if (((!l_param5) || (((double)(C_S_8G::sg_S__2c_P())) < 4.0))) {
        (l_A__loc6_ = (((((C_S__23__21__21_::sm_S__23__25_(((l_param1 / 100.0) + 1.0), l_param4) * C_S__23__21__21_::sm_S__23__25_(((l_param2 / 100.0) + 1.0), l_param4)) * C_S__23__21__21_::sm_S__23__25_(((l_param3 / 100.0) + 1.0), l_param4)) - 1.0)) * 100.0));
    } else {
        (l_A__loc6_ = ((((((((l_param1 / 100.0) + 1.0)) * (((l_param2 / 100.0) + 1.0))) * (((l_param3 / 100.0) + 1.0))) - 1.0)) * 100.0));
    }
    return rt::slot_string(C_S__26_c::sm_S_8_21_Z(l_A__loc6_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()));
    return rt::NUL;
}
double C_S__26_c::dsm_S__22__22_A_4() { return 1.0; }
bool C_S__26_c::dsm_S__22__22_A_5() { return false; }
rt::Value C_S__26_c::sm_S__22__22_A(double p0, double p1, double p2, double p3, double p4, bool p5) {
    double l_param1 = p0;
    double l_param2 = p1;
    double l_param3 = p2;
    double l_param4 = p3;
    double l_param5 = p4;
    bool l_param6 = p5;
    double l_A__loc7_ = NAN;
    RT_FN("S__26_c.S__22__22_A");
    (l_A__loc7_ = 0.0);
    if (((!l_param6) || (((double)(C_S_8G::sg_S__2c_P())) < 4.0))) {
        (l_A__loc7_ = ((((((C_S__23__21__21_::sm_S__23__25_(((l_param1 / 100.0) + 1.0), l_param5) * C_S__23__21__21_::sm_S__23__25_(((l_param2 / 100.0) + 1.0), l_param5)) * C_S__23__21__21_::sm_S__23__25_(((l_param3 / 100.0) + 1.0), l_param5)) * C_S__23__21__21_::sm_S__23__25_(((l_param4 / 100.0) + 1.0), l_param5)) - 1.0)) * 100.0));
    } else {
        (l_A__loc7_ = (((((((((l_param1 / 100.0) + 1.0)) * (((l_param2 / 100.0) + 1.0))) * (((l_param3 / 100.0) + 1.0))) * (((l_param4 / 100.0) + 1.0))) - 1.0)) * 100.0));
    }
    return rt::slot_string(C_S__26_c::sm_S_8_21_Z(l_A__loc7_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()));
    return rt::NUL;
}
double C_S__26_c::dsm_S__25__22__3e__1() { return 1.0; }
uint32_t C_S__26_c::dsm_S__25__22__3e__2() { return rt::touint_d(0.0); }
uint32_t C_S__26_c::dsm_S__25__22__3e__3() { return rt::touint_d(0.0); }
rt::Value C_S__26_c::sm_S__25__22__3e_(double p0, double p1, uint32_t p2, uint32_t p3) {
    double l_param1 = p0;
    double l_param2 = p1;
    uint32_t l_param3 = p2;
    uint32_t l_param4 = p3;
    RT_FN("S__26_c.S__25__22__3e_");
    (l_param1 = (((C_S__23__21__21_::sm_S__23__25_(((l_param1 / 100.0) + 1.0), l_param2) - 1.0)) * 100.0));
    if ((((double)(l_param3)) > 0.0)) {
        return rt::slot_string(rt::dcallv(rt::V(l_param1), rt::N_toFixed, rt::V((double)(l_param3))));
    }
    if ((((double)(l_param4)) > 0.0)) {
        return rt::slot_string(rt::dcallv(rt::V(l_param1), rt::N_toPrecision, rt::V((double)(l_param4))));
    }
    if ((l_param1 < 10.0)) {
        return rt::slot_string(C_S__26_c::sm_S__3e_4(rt::dcallv(rt::V(l_param1), rt::N_toFixed, rt::V(2.0))));
    }
    if ((l_param1 < 100.0)) {
        return rt::slot_string(C_S__26_c::sm_S__3e_4(rt::dcallv(rt::V(l_param1), rt::N_toFixed, rt::V(1.0))));
    }
    return rt::slot_string(C_S__26_c::sm_S_8_21_Z(l_param1, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()));
    return rt::NUL;
}
rt::Value C_S__26_c::sm_S_5_21_p(double p0) {
    double l_param1 = p0;
    RT_FN("S__26_c.S_5_21_p");
    if ((g::SV.C_S__26_c__S__3b__22__25_ >= 0.0)) {
        (l_param1 = g::SV.C_S__26_c__S__3b__22__25_);
    }
    if (((l_param1 / 30.0) <= 60.0)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[2004]), rt::dcallv(rt::V(rt::m_floor((l_param1 / 30.0))), rt::N_toString)));
    }
    return rt::slot_string(C_S__26_c::sm_S_4_21__3f_((l_param1 / 30.0)));
    return rt::NUL;
}
int32_t C_S__26_c::sm_S__2c_o(double p0) {
    double l_param1 = p0;
    int32_t l_A__loc3_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S__26_c.S__2c_o");
    (l_A__loc3_ = rt::toint_d(rt::m_floor((rt::m_log(l_param1) / 2.302585092994046))));
    (l_A__loc2_ = (l_param1 * rt::m_pow(10.0, (-((double)(l_A__loc3_))))));
    if ((l_A__loc2_ >= 9.999)) {
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    return l_A__loc3_;
    return 0;
}
bool C_S__26_c::dsm_S__23__21_R_1() { return false; }
bool C_S__26_c::dsm_S__23__21_R_2() { return false; }
rt::Value C_S__26_c::sm_S__23__21_R(double p0, bool p1, bool p2) {
    double l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    double l_A__loc5_ = NAN;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("S__26_c.S__23__21_R");
    (l_A__loc5_ = NAN);
    (l_A__loc4_ = rt::slot_string(rt::VS(g::LS[113])));
    if ((l_param1 >= 86400.0)) {
        (l_A__loc5_ = rt::m_floor((l_param1 / 86400.0)));
        (l_A__loc4_ = rt::slot_string(rt::add(l_A__loc4_, rt::add(rt::add(rt::VS(g::LS[355]), C_S__26_c::sm_S_8_21_Z(l_A__loc5_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), (((l_param3 || (!(((double)(g::SV.C_Translation__locale)) == 5.0))) ? rt::VS(g::LS[2005]) : rt::VS(g::LS[2006])))))));
        (l_param1 = (l_param1 - (l_A__loc5_ * 86400.0)));
    }
    if ((l_param1 >= 3600.0)) {
        (l_A__loc4_ = rt::slot_string(rt::add(l_A__loc4_, rt::add(rt::add(rt::VS(g::LS[355]), rt::dcallv(rt::V((double)(rt::toint_d(rt::m_floor((l_param1 / 3600.0))))), rt::N_toString)), (((l_param3 || (!(((double)(g::SV.C_Translation__locale)) == 5.0))) ? rt::VS(g::LS[1402]) : rt::VS(g::LS[2007])))))));
        (l_param1 = rt::mod(l_param1, 3600.0));
    }
    if ((l_param1 >= 60.0)) {
        (l_A__loc4_ = rt::slot_string(rt::add(l_A__loc4_, rt::add(rt::add(rt::VS(g::LS[355]), rt::dcallv(rt::V((double)(rt::toint_d(rt::m_floor((l_param1 / 60.0))))), rt::N_toString)), (((l_param3 || (!(((double)(g::SV.C_Translation__locale)) == 5.0))) ? rt::VS(g::LS[1403]) : rt::VS(g::LS[2008])))))));
        (l_param1 = rt::mod(l_param1, 60.0));
    }
    if (((({ bool _t10760 = rt::eq(l_A__loc4_, rt::VS(g::LS[113])); _t10760 ? _t10760 : (bool)((l_param1 > 0.0)); })) && (!l_param2))) {
        (l_A__loc4_ = rt::slot_string(rt::add(l_A__loc4_, rt::add(rt::add(rt::VS(g::LS[355]), rt::V((double)(rt::toint_d(l_param1)))), (((l_param3 || (!(((double)(g::SV.C_Translation__locale)) == 5.0))) ? rt::VS(g::LS[226]) : rt::VS(g::LS[2009])))))));
    }
    return rt::slot_string(rt::dcallv(l_A__loc4_, rt::N_substr, rt::V(2.0)));
    return rt::NUL;
}
rt::Value C_S__26_c::sm_S_4_21__3f_(double p0) {
    double l_param1 = p0;
    RT_FN("S__26_c.S_4_21__3f_");
    return rt::slot_string(rt::dcallv(rt::dcallv(C_S__26_c::sm_S__23__21_R(l_param1, false, true), rt::N_split, rt::VS(g::LS[355])), rt::N_join, rt::VS(g::LS[9])));
    return rt::NUL;
}
rt::Value C_S__26_c::sm_S__2d__21__22_(double p0) {
    double l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__26_c.S__2d__21__22_");
    (l_A__loc2_ = rt::slot_string(rt::VS(g::LS[113])));
    if ((l_param1 >= 100000.0)) {
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::add(rt::VS(g::LS[355]), C_S__26_c::sm_S_8_21_Z(rt::m_floor((l_param1 / 100000.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), (((!(((double)(g::SV.C_Translation__locale)) == 5.0)) ? rt::VS(g::LS[2010]) : rt::VS(g::LS[2011])))))));
        (l_param1 = rt::mod(l_param1, 100000.0));
    }
    if ((l_param1 >= 100.0)) {
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::add(rt::VS(g::LS[355]), rt::dcallv(rt::V((double)(rt::toint_d(rt::m_floor((l_param1 / 100.0))))), rt::N_toString)), (((!(((double)(g::SV.C_Translation__locale)) == 5.0)) ? rt::VS(g::LS[1403]) : rt::VS(g::LS[2008])))))));
        (l_param1 = rt::mod(l_param1, 100.0));
    }
    if ((rt::eq(l_A__loc2_, rt::VS(g::LS[113])) || (l_param1 > 0.0))) {
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::add(rt::VS(g::LS[355]), rt::V((double)(rt::toint_d(l_param1)))), (((!(((double)(g::SV.C_Translation__locale)) == 5.0)) ? rt::VS(g::LS[2012]) : rt::VS(g::LS[2013])))))));
    }
    return rt::slot_string(rt::dcallv(l_A__loc2_, rt::N_substr, rt::V(2.0)));
    return rt::NUL;
}
int32_t C_S__26_c::sm_S__22_E() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__26_c.S__22_E");
    if ((!(((double)(C_PlayFab::sg_serverTime())) == (-1.0)))) {
        return rt::toint_d(((((double)(C_PlayFab::sg_serverTime())) + ((double)(rt::toint_d((rt::getTimer() / 1000.0))))) - ((double)(C_PlayFab::sg_serverTimer()))));
    }
    if ((!(((double)(g::SV.C_TimeServer__serverTime)) == (-1.0)))) {
        return rt::toint_d(((((double)(g::SV.C_TimeServer__serverTime)) + ((double)(g::SV.C_TimeServer__serverTimeDiff))) + ((double)(rt::toint_d((rt::getTimer() / 1000.0))))));
    }
    (l_A__loc1_ = rt::new_datev());
    return rt::toint_d(rt::m_round((rt::tonum(rt::dget(l_A__loc1_, rt::N_time)) / 1000.0)));
    return 0;
}
int32_t C_S__26_c::sm_S__27__21_O() {
    RT_FN("S__26_c.S__27__21_O");
    return rt::toint_d(rt::m_floor((rt::mod(((double)(C_S__26_c::sm_S__22_E())), 86400.0) / 3600.0)));
    return 0;
}
int32_t C_S__26_c::sm_S_5_22__21_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__26_c.S_5_22__21_");
    (l_A__loc1_ = rt::new_datev());
    return rt::toint(rt::dget(l_A__loc1_, rt::N_dateUTC));
    return 0;
}
int32_t C_S__26_c::sm_S__2b__22__21_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__26_c.S__2b__22__21_");
    (l_A__loc1_ = rt::new_datev());
    return rt::toint(rt::dget(l_A__loc1_, rt::N_dayUTC));
    return 0;
}
int32_t C_S__26_c::sm_S_5_22_P(int32_t p0) {
    int32_t l_param1 = p0;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    int32_t l_A__loc4_ = 0;
    int32_t l_A__loc3_ = 0;
    int32_t l_A__loc6_ = 0;
    RT_FN("S__26_c.S_5_22_P");
    (l_A__loc5_ = rt::NUL);
    (l_A__loc2_ = rt::new_datev());
    ({ rt::Value _v10761 = rt::V((((double)(l_param1)) * 1000.0)); rt::dset(l_A__loc2_, rt::N_time, _v10761); _v10761; });
    ({ rt::Value _o10763 = l_A__loc2_; rt::Value _v10762 = rt::V((rt::tonum(rt::dget(_o10763, rt::N_time)) - 60000.0)); rt::dset(_o10763, rt::N_time, _v10762); _v10762; });
    (l_A__loc4_ = rt::toint(rt::dget(l_A__loc2_, rt::N_fullYearUTC)));
    (l_A__loc3_ = rt::toint(rt::add(rt::dget(l_A__loc2_, rt::N_monthUTC), rt::V(1.0))));
    (l_A__loc6_ = rt::toint(rt::dget(l_A__loc2_, rt::N_dateUTC)));
    if (rt::lt(rt::dget(l_A__loc2_, rt::N_hoursUTC), rt::V(13.0))) {
        (l_A__loc6_ = rt::toint_d((((double)(l_A__loc6_)) - 1.0)));
    }
    if ((((double)(l_A__loc6_)) == 0.0)) {
        if ((((double)(l_A__loc3_)) == 1.0)) {
            (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) - 1.0)));
            (l_A__loc3_ = rt::toint_d(12.0));
            (l_A__loc6_ = rt::toint_d(31.0));
        } else {
            (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) - 1.0)));
            (l_A__loc5_ = rt::arr_lit({rt::V(0.0), rt::V(31.0), rt::V(28.0), rt::V(31.0), rt::V(30.0), rt::V(31.0), rt::V(30.0), rt::V(31.0), rt::V(31.0), rt::V(30.0), rt::V(31.0), rt::V(30.0), rt::V(31.0)}));
            (l_A__loc6_ = rt::toint(rt::arr_at(l_A__loc5_, ((double)(l_A__loc3_)))));
            if ((({ bool _t10765 = (((double)(l_A__loc3_)) == 2.0); _t10765 ? (bool)((({ bool _t10764 = (rt::mod(((double)(l_A__loc4_)), 4.0) == 0.0); _t10764 ? (bool)((!(rt::mod(((double)(l_A__loc4_)), 100.0) == 0.0))) : _t10764; }))) : _t10765; }) || (rt::mod(((double)(l_A__loc4_)), 400.0) == 0.0))) {
                (l_A__loc6_ = rt::toint_d(29.0));
            }
        }
    }
    return rt::toint_d((((((double)(l_A__loc4_)) * 10000.0) + (((double)(l_A__loc3_)) * 100.0)) + ((double)(l_A__loc6_))));
    return 0;
}
int32_t C_S__26_c::sm_S_1_21_() {
    RT_FN("S__26_c.S_1_21_");
    if (((((double)(C_PlayFab::sg_serverTime())) == (-1.0)) && (((double)(g::SV.C_TimeServer__serverTime)) == (-1.0)))) {
        return rt::toint_d(0.0);
    }
    return C_S__26_c::sm_S_5_22_P(C_S__26_c::sm_S__22_E());
    return 0;
}
uint32_t C_S__26_c::sm_S_8_22__25_() {
    RT_FN("S__26_c.S_8_22__25_");
    if ((((double)(C_PlayFab::sg_serverTime())) == (-1.0))) {
        return rt::touint_d(0.0);
    }
    return rt::touint_d(rt::m_floor((((((double)(C_PlayFab::sg_serverTime())) / 60.0) / 60.0) / 24.0)));
    return 0u;
}
rt::Value C_S__26_c::sm_S__3d__21_n() {
    RT_FN("S__26_c.S__3d__21_n");
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[2014])));
    }
    if ((((double)(C_S_8G::sg_S__2c_P())) == 3.0)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[2015])));
    }
    if ((((double)(C_S_8G::sg_S__2c_P())) == 2.0)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[2016])));
    }
    if ((((double)(C_S_8G::sg_S__2c_P())) == 1.0)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[2017])));
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[2018])));
    return rt::NUL;
}
int32_t C_S__26_c::sm_S__25__21__21_() {
    rt::Value l_A__loc2_ = rt::NUL;
    double l_A__loc4_ = NAN;
    uint32_t l_A__loc3_ = 0u;
    uint32_t l_A__loc1_ = 0u;
    uint32_t l_A__loc5_ = 0u;
    RT_FN("S__26_c.S__25__21__21_");
    (l_A__loc2_ = rt::new_datev());
    (l_A__loc4_ = ((double)(rt::touint_d((rt::tonum(rt::dget(l_A__loc2_, rt::N_time)) / 1000.0)))));
    if ((((double)(C_PlayFab::sg_season())) == 0.0)) {
        (l_A__loc4_ = (l_A__loc4_ - 60.0));
    } else {
        (l_A__loc4_ = (l_A__loc4_ + 60.0));
    }
    (l_A__loc3_ = ((uint32_t)(C_PlayFab::sg_seasonNE())));
    (l_A__loc1_ = ((uint32_t)(C_PlayFab::sg_seasonNES())));
    (l_A__loc5_ = ((uint32_t)(C_PlayFab::sg_seasonNEE())));
    if (((({ bool _t10767 = ({ bool _t10766 = (((double)(l_A__loc3_)) == 0.0); _t10766 ? _t10766 : (bool)((((double)(l_A__loc1_)) == 0.0)); }); _t10767 ? _t10767 : (bool)((((double)(l_A__loc5_)) == 0.0)); })) && rt::T(rt::dcallv(rt::dget(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_data), rt::N_hasOwnProperty, rt::VS(g::LS[2019]))))) {
        (l_A__loc3_ = rt::touint(rt::idx_get(rt::dget(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_data), rt::VS(g::LS[2019]))));
        (l_A__loc1_ = rt::touint(rt::idx_get(rt::dget(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_data), rt::VS(g::LS[2020]))));
        (l_A__loc5_ = rt::touint(rt::idx_get(rt::dget(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_data), rt::VS(g::LS[2021]))));
    }
    if (((l_A__loc4_ >= ((double)(l_A__loc1_))) && (l_A__loc4_ <= ((double)(l_A__loc5_))))) {
        return ((int32_t)(l_A__loc3_));
    }
    return rt::toint_d(0.0);
    return 0;
}
rt::Value C_S__26_c::sm_S__3d_D() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__26_c.S__3d_D");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    {
        rt::Value _sw10768 = rt::V((((double)(C_PlayFab::sg_season())) - 5.0));
        int _c10769 = -1;
        if (_c10769 == -1 && rt::strict_eq(_sw10768, rt::V(0.0))) _c10769 = 0;
        if (_c10769 == -1) _c10769 = 1;
        switch (_c10769) {
        case 0: {
            (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[2022]))));
        }
        default: break;
        }
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
int32_t C_S__26_c::sm_S__5b_5(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S__5b_5");
    return rt::toint_d(((((double)(l_param1)) == 11.0) ? 960.0 : 720.0));
    return 0;
}
int32_t C_S__26_c::sm_S_1_22_1(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_c.S_1_22_1");
    return rt::toint_d(((({ bool _t10770 = (((double)(l_param1)) == 11.0); _t10770 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0)))) : _t10770; }) && (((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) ? 30.0 : 60.0));
    return 0;
}
bool C_S__26_c::sm_S_53() {
    rt::Value l_A__loc4_ = rt::NUL;
    int32_t l_A__loc3_ = 0;
    int32_t l_A__loc1_ = 0;
    int32_t l_A__loc5_ = 0;
    int32_t l_A__loc2_ = 0;
    RT_FN("S__26_c.S_53");
    (l_A__loc4_ = rt::new_datev());
    (l_A__loc3_ = rt::toint(rt::dget(l_A__loc4_, rt::N_fullYearUTC)));
    (l_A__loc1_ = rt::toint(rt::add(rt::dget(l_A__loc4_, rt::N_monthUTC), rt::V(1.0))));
    (l_A__loc5_ = rt::toint(rt::dget(l_A__loc4_, rt::N_dateUTC)));
    (l_A__loc2_ = rt::toint(rt::dget(l_A__loc4_, rt::N_hoursUTC)));
    if (((((double)(l_A__loc1_)) == 4.0) && (({ bool _t10771 = (((double)(l_A__loc5_)) == 1.0); _t10771 ? (bool)((((double)(l_A__loc2_)) >= 7.0)) : _t10771; }) || ((((double)(l_A__loc5_)) == 2.0) && (((double)(l_A__loc2_)) < 7.0))))) {
        return true;
    }
    return false;
    return false;
}
rt::Value C_S__26_c::sm_S_3_21_K(uint32_t p0) {
    uint32_t l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    uint32_t l_A__loc7_ = 0u;
    uint32_t l_A__loc6_ = 0u;
    uint32_t l_A__loc4_ = 0u;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S__26_c.S_3_21_K");
    (l_A__loc2_ = rt::new_datev());
    ({ rt::Value _v10772 = rt::V((((double)(l_param1)) * 1000.0)); rt::dset(l_A__loc2_, rt::N_time, _v10772); _v10772; });
    (l_A__loc3_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::idx_get(g::SV.C_S__26_c__S_2_21_8, rt::dcallv(l_A__loc2_, rt::N_getUTCMonth)))));
    (l_A__loc7_ = rt::touint(rt::dcallv(l_A__loc2_, rt::N_getUTCDate)));
    (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::VS(g::LS[9]), rt::dcallv(rt::V((double)(l_A__loc7_)), rt::N_toString)))));
    if ((({ bool _t10773 = (((double)(l_A__loc7_)) == 1.0); _t10773 ? _t10773 : (bool)((((double)(l_A__loc7_)) == 21.0)); }) || (((double)(l_A__loc7_)) == 31.0))) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::VS(g::LS[2023]))));
    } else if (((((double)(l_A__loc7_)) == 2.0) || (((double)(l_A__loc7_)) == 22.0))) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::VS(g::LS[2024]))));
    } else if (((((double)(l_A__loc7_)) == 3.0) || (((double)(l_A__loc7_)) == 23.0))) {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::VS(g::LS[2025]))));
    } else {
        (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::VS(g::LS[2026]))));
    }
    (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::add(rt::VS(g::LS[9]), rt::dcallv(rt::dcallv(l_A__loc2_, rt::N_getUTCFullYear), rt::N_toString)), rt::VS(g::LS[355])))));
    (l_A__loc6_ = rt::touint(rt::dcallv(l_A__loc2_, rt::N_getUTCHours)));
    (l_A__loc4_ = rt::touint(rt::dcallv(l_A__loc2_, NM_getUTCMinutes)));
    (l_A__loc5_ = rt::slot_string(rt::VS(g::LS[333])));
    if ((((double)(l_A__loc6_)) >= 12.0)) {
        (l_A__loc5_ = rt::slot_string(rt::VS(g::LS[332])));
        if ((((double)(l_A__loc6_)) >= 13.0)) {
            (l_A__loc6_ = rt::touint_d((((double)(l_A__loc6_)) - 12.0)));
        }
    }
    if ((((double)(l_A__loc6_)) == 0.0)) {
        (l_A__loc6_ = rt::touint_d(12.0));
    }
    return rt::slot_string(rt::add(l_A__loc3_, (rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::dcallv(rt::V((double)(l_A__loc6_)), rt::N_toString), rt::VS(g::LS[155])), (((((double)(l_A__loc4_)) < 10.0) ? rt::VS(g::LS[151]) : rt::VS(g::LS[113])))), rt::dcallv(rt::V((double)(l_A__loc4_)), rt::N_toString)), rt::VS(g::LS[9])), l_A__loc5_), rt::VS(g::LS[2027])))));
    return rt::NUL;
}
uint32_t C_S__26_c::sm_S_6_2d_(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    double l_A__loc3_ = NAN;
    RT_FN("S__26_c.S_6_2d_");
    (l_A__loc3_ = (C_S__26_c::sm_S__20__21__3b_(l_param1) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, ((double)(l_param2))))));
    if ((l_A__loc3_ < 198.0)) {
        return rt::touint_d(rt::m_max2(1.0, (1.0 + rt::m_floor((l_A__loc3_ / 22.0)))));
    }
    if ((l_A__loc3_ < 858.0)) {
        return rt::touint_d((10.0 + rt::m_floor((((l_A__loc3_ - 198.0)) / 44.0))));
    }
    return rt::touint_d(rt::m_min2(50.0, (25.0 + rt::m_floor(((((l_A__loc3_ - 198.0) - 660.0)) / 88.0)))));
    return 0u;
}
rt::Value C_S__26_c::sm_S__3e_4(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_A__loc2_ = rt::NUL;
    int32_t l_A__loc3_ = 0;
    RT_FN("S__26_c.S__3e_4");
    (l_A__loc2_ = rt::slot_string(rt::NUL));
    (l_A__loc3_ = rt::toint_d(0.0));
    if (rt::lt(rt::dcallv(l_param1, rt::N_indexOf, rt::VS(g::LS[155])), rt::V(0.0))) {
        return rt::slot_string(l_param1);
    }
    (l_A__loc3_ = rt::toint_d((rt::alen(l_param1) - 1.0)));
    while ((((double)(l_A__loc3_)) >= 0.0)) {
        (l_A__loc2_ = rt::slot_string(rt::dcallv(l_param1, rt::N_charAt, rt::V((double)(l_A__loc3_)))));
        if (rt::eq(l_A__loc2_, rt::VS(g::LS[155]))) {
            (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) - 1.0)));
            break;
        }
        if ((!rt::eq(l_A__loc2_, rt::VS(g::LS[151])))) {
            break;
        }
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) - 1.0)));
    }
    return rt::slot_string(rt::dcallv(l_param1, rt::N_substr, rt::V(0.0), rt::V((((double)(l_A__loc3_)) + 1.0))));
    return rt::NUL;
}
rt::Value C_S__26_c::sm_S__23_f(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__26_c.S__23_f");
    (l_A__loc2_ = rt::slot_string(rt::dcallv(rt::VO(C_JSON::CI.ref), NM_stringify, l_param1)));
    if ((rt::alen(l_A__loc2_) >= 2.0)) {
        (l_A__loc2_ = rt::slot_string(rt::dcallv(rt::dcallv(rt::dcallv(l_A__loc2_, rt::N_substring, rt::V(1.0), rt::V((rt::alen(l_A__loc2_) - 1.0))), rt::N_split, rt::VS(g::LS[2028])), rt::N_join, rt::VS(g::LS[125]))));
    }
    return rt::slot_string(l_A__loc2_);
    return rt::NUL;
}
int32_t C_S__26_c::dsm_S__20__21_C_2() { return rt::toint_d(1.0); }
rt::Value C_S__26_c::sm_S__20__21_C(rt::Value p0, rt::Value p1, int32_t p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    int32_t l_param3 = p2;
    RT_FN("S__26_c.S__20__21_C");
    return rt::slot_string(((((double)(C_S_8G::sg_S__2c_P())) >= ((double)(l_param3))) ? l_param2 : l_param1));
    return rt::NUL;
}
double C_S__26_c::sg_S__22__21_0() {
    double l_A__loc1_ = NAN;
    RT_FN("S__26_c.S__22__21_0_get");
    (l_A__loc1_ = C_S_8G::sg_S__22__21_0());
    if ((C_S_8G::sm_S_7d(g::SV.C_S__3b__22__26___id) && C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_22__21___id))) {
        (l_A__loc1_ = (l_A__loc1_ * (1.0 + (0.01 * C_S_2_22__21_::sm_S__2c__21_G()))));
    }
    return l_A__loc1_;
    return 0.0;
}
double C_S__26_c::sg_S__40_e() {
    RT_FN("S__26_c.S__40_e_get");
    return C_S_8G::sg_S__40_e();
    return 0.0;
}
C_S__26_c* C_S__26_c::alloc_() {
    C_S__26_c* o = rt::make<C_S__26_c>();
    return o;
}
rt::Value C_S__26_c::mk_(rt::Value* a, int n) {
    C_S__26_c* o = alloc_();
    o->C_S__26_c::ctor_();
    return rt::VO(o);
}
bool C_S__26_c::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__26_c::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__26_c::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__26_c::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__26_c::smeth_(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__40__21__5b_: return true;
    case NM_S__3d__22__26_: return true;
    case NM_S__21__2d_: return true;
    case NM_S_0_23_: return true;
    case NM_S_4_21__60_: return true;
    case NM_S_3_22_N: return true;
    case NM_S__5b__22__3c_: return true;
    case NM_S__3b__22_5: return true;
    case NM_S__25__21_6: return true;
    case NM_S__3f__21_v: return true;
    case NM_S__60__21__3d_: return true;
    case NM_S__2c_T: return true;
    case NM_S_5_22_5: return true;
    case NM_S_5d: return true;
    case NM_S__27__22__2d_: return true;
    case NM_S_0_21_C: return true;
    case NM_S__5e__22__3e_: return true;
    case NM_S_3_22_J: return true;
    case NM_S__22__22_L: return true;
    case NM_S_6_22__26_: return true;
    case NM_S__60__21_D: return true;
    case NM_S__3e__21_h: return true;
    case NM_S_6_22_K: return true;
    case NM_S__21__21_8: return true;
    case NM_S_6_21_x: return true;
    case NM_S__23__22__21_: return true;
    case NM_S__5b__21_j: return true;
    case NM_S__3b__22__24_: return true;
    case NM_S_2_21__26_: return true;
    case NM_S_57: return true;
    case NM_S_3_22__26_: return true;
    case NM_S_6_21__5f_: return true;
    case NM_S__2d_0: return true;
    case NM_S__27__3d_: return true;
    case NM_S_4_21_: return true;
    case NM_S_6_21_9: return true;
    case NM_S_1_21_D: return true;
    case NM_S__5e_Z: return true;
    case NM_S_0F: return true;
    case NM_S_9_5b_: return true;
    case NM_S__22__21_B: return true;
    case NM_S_1_22__26_: return true;
    case NM_S__40__22_3: return true;
    case NM_S__3e__21_y: return true;
    case NM_S__26__21_y: return true;
    case NM_S__3b__22_F: return true;
    case NM_S__2d__22__21_: return true;
    case NM_S__3e__21_v: return true;
    case NM_S__3b__21_4: return true;
    case NM_S__3b__22_H: return true;
    case NM_S_3L: return true;
    case NM_S__3c_f: return true;
    case NM_S_9_22_H: return true;
    case NM_S__5b__21_1: return true;
    case NM_S__23_L: return true;
    case NM_S_3K: return true;
    case NM_S__26__21__3c_: return true;
    case NM_S_1_22__2c_: return true;
    case NM_S__3e__25_: return true;
    case NM_S__5d__22_J: return true;
    case NM_S__27_n: return true;
    case NM_S__20__21__3b_: return true;
    case NM_S__5e__21_r: return true;
    case NM_S__20__21_q: return true;
    case NM_S__27__21__5f_: return true;
    case NM_S_9X: return true;
    case NM_S__5b_Q: return true;
    case NM_S__26_7: return true;
    case NM_S_1V: return true;
    case NM_S_0_22_3: return true;
    case NM_S__5d_B: return true;
    case NM_S_9_22_0: return true;
    case NM_S__3b_X: return true;
    case NM_S__40__22__27_: return true;
    case NM_S__5b__21_s: return true;
    case NM_S__60__21_i: return true;
    case NM_S__3d__21_x: return true;
    case NM_S_8_22_3: return true;
    case NM_S__25__22__2d_: return true;
    case NM_S_7_22_B: return true;
    case NM_S__3d__21_u: return true;
    case NM_S_9_22__2d_: return true;
    case NM_S__2b__22_4: return true;
    case NM_S__23__22__3c_: return true;
    case NM_S__3d__21__3e_: return true;
    case NM_S_4_21_r: return true;
    case NM_S__27__22_I: return true;
    case NM_S_8_21_9: return true;
    case NM_S__3d__60_: return true;
    case NM_S_1_22_O: return true;
    case NM_S__3e__21__26_: return true;
    case NM_S__23__3f_: return true;
    case NM_S_1_2c_: return true;
    case NM_S_3_22__2b_: return true;
    case NM_S__5d__22__27_: return true;
    case NM_S__2b__22__2b_: return true;
    case NM_S__23__22__2b_: return true;
    case NM_S_9_21_P: return true;
    case NM_S_3_22__2d_: return true;
    case NM_S__5d__21_s: return true;
    case NM_S_1_21_y: return true;
    case NM_S_7i: return true;
    case NM_S__3e__21_p: return true;
    case NM_S__22__22__20_: return true;
    case NM_S__3c__21_v: return true;
    case NM_S_1_21__3b_: return true;
    case NM_S__22__21_z: return true;
    case NM_S__3f__26_: return true;
    case NM_S_8_22_F: return true;
    case NM_S__3d__22_Q: return true;
    case NM_S__40__22_2: return true;
    case NM_S_3_22_M: return true;
    case NM_S__3f__22_H: return true;
    case NM_S__5e__21_L: return true;
    case NM_S__5b__21_I: return true;
    case NM_S__2b__21_I: return true;
    case NM_S_5_40_: return true;
    case NM_S_0p: return true;
    case NM_S__40__22_M: return true;
    case NM_S__22_X: return true;
    case NM_S__3b__21__2c_: return true;
    case NM_S_4_21_j: return true;
    case NM_S__60__22__2b_: return true;
    case NM_S__2c__22_F: return true;
    case NM_S_1_21_n: return true;
    case NM_S__2c__22_L: return true;
    case NM_S_8_21_Z: return true;
    case NM_S__26__21__3f_: return true;
    case NM_S_6_21_T: return true;
    case NM_S__40__22_A: return true;
    case NM_S_5_22__3b_: return true;
    case NM_S__22__22_A: return true;
    case NM_S__25__22__3e_: return true;
    case NM_S_5_21_p: return true;
    case NM_S__2c_o: return true;
    case NM_S__23__21_R: return true;
    case NM_S_4_21__3f_: return true;
    case NM_S__2d__21__22_: return true;
    case NM_S__22_E: return true;
    case NM_S__27__21_O: return true;
    case NM_S_5_22__21_: return true;
    case NM_S__2b__22__21_: return true;
    case NM_S_5_22_P: return true;
    case NM_S_1_21_: return true;
    case NM_S_8_22__25_: return true;
    case NM_S__3d__21_n: return true;
    case NM_S__25__21__21_: return true;
    case NM_S__3d_D: return true;
    case NM_S__5b_5: return true;
    case NM_S_1_22_1: return true;
    case NM_S_53: return true;
    case NM_S_3_21_K: return true;
    case NM_S_6_2d_: return true;
    case NM_S__3e_4: return true;
    case NM_S__23_f: return true;
    case NM_S__20__21_C: return true;
    default: return false;
    }
}
bool C_S__26_c::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_4_22_8: out = g::SV.C_S__26_c__S_4_22_8; return true;
    case NM_S__2c_L: out = g::SV.C_S__26_c__S__2c_L; return true;
    case NM_S_4_3c_: out = g::SV.C_S__26_c__S_4_3c_; return true;
    case NM_S__26__21__20_: out = g::SV.C_S__26_c__S__26__21__20_; return true;
    case NM_S__5d_d: out = g::SV.C_S__26_c__S__5d_d; return true;
    case NM_S__60_2: out = g::SV.C_S__26_c__S__60_2; return true;
    case NM_S_0P: out = g::SV.C_S__26_c__S_0P; return true;
    case NM_S_0_22_H: out = g::SV.C_S__26_c__S_0_22_H; return true;
    case NM_S_3_21__3c_: out = rt::V(g::SV.C_S__26_c__S_3_21__3c_); return true;
    case NM_S__3b__22__25_: out = rt::V(g::SV.C_S__26_c__S__3b__22__25_); return true;
    case NM_S__40__21_b: out = g::SV.C_S__26_c__S__40__21_b; return true;
    case NM_S__2b__22_F: out = g::SV.C_S__26_c__S__2b__22_F; return true;
    case NM_S_2_22__2d_: out = g::SV.C_S__26_c__S_2_22__2d_; return true;
    case NM_S__3c_5: out = g::SV.C_S__26_c__S__3c_5; return true;
    case NM_S_9_21__27_: out = g::SV.C_S__26_c__S_9_21__27_; return true;
    case NM_S_2_21_8: out = g::SV.C_S__26_c__S_2_21_8; return true;
    case NM_S__22__21_0: out = rt::V(sg_S__22__21_0()); return true;
    case NM_S__40_e: out = rt::V(sg_S__40_e()); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__21__5b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3d__22__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__21__2d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_0_23_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_4_21__60_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3_22_N: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5b__22__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3b__22_5: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__25__21_6: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__21_v: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__60__21__3d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c_T: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_22_5: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5d: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__22__2d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_0_21_C: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5e__22__3e_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3_22_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__22_L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_22__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__60__21_D: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3e__21_h: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_22_K: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__21__21_8: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_21_x: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__22__21_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5b__21_j: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3b__22__24_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_57: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3_22__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_21__5f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2d_0: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__3d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_4_21_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_21_9: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_21_D: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5e_Z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_0F: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9_5b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_22__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__22_3: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3e__21_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__26__21_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3b__22_F: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2d__22__21_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3e__21_v: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3b__21_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3b__22_H: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3c_f: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9_22_H: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5b__21_1: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23_L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3K: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__26__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_22__2c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3e__25_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5d__22_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27_n: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__20__21__3b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5e__21_r: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__20__21_q: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__21__5f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9X: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5b_Q: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__26_7: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_0_22_3: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5d_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9_22_0: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3b_X: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__22__27_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5b__21_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__60__21_i: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3d__21_x: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_8_22_3: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__25__22__2d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_7_22_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3d__21_u: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9_22__2d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__22_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__22__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3d__21__3e_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_4_21_r: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__22_I: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_8_21_9: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3d__60_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_22_O: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3e__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_2c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3_22__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5d__22__27_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__22__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__22__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9_21_P: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3_22__2d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5d__21_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_21_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_7i: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3e__21_p: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__22__20_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3c__21_v: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_21__3b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__21_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_8_22_F: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3d__22_Q: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__22_2: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3_22_M: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__22_H: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5e__21_L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5b__21_I: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__21_I: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_0p: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__22_M: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22_X: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3b__21__2c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_4_21_j: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__60__22__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__22_F: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_21_n: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__22_L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_8_21_Z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__26__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_21_T: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__22_A: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_22__3b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__22_A: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__25__22__3e_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_21_p: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c_o: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_R: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_4_21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2d__21__22_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22_E: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__21_O: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_22__21_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__22__21_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_22_P: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_21_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_8_22__25_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3d__21_n: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__25__21__21_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3d_D: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5b_5: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_22_1: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_53: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3_21_K: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_2d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3e_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23_f: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__20__21_C: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26_c::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_4_22_8: g::SV.C_S__26_c__S_4_22_8 = v; return true;
    case NM_S__2c_L: g::SV.C_S__26_c__S__2c_L = v; return true;
    case NM_S_4_3c_: g::SV.C_S__26_c__S_4_3c_ = v; return true;
    case NM_S__26__21__20_: g::SV.C_S__26_c__S__26__21__20_ = v; return true;
    case NM_S__5d_d: g::SV.C_S__26_c__S__5d_d = v; return true;
    case NM_S__60_2: g::SV.C_S__26_c__S__60_2 = v; return true;
    case NM_S_0P: g::SV.C_S__26_c__S_0P = v; return true;
    case NM_S_0_22_H: g::SV.C_S__26_c__S_0_22_H = v; return true;
    case NM_S_3_21__3c_: g::SV.C_S__26_c__S_3_21__3c_ = rt::tonum(v); return true;
    case NM_S__3b__22__25_: g::SV.C_S__26_c__S__3b__22__25_ = rt::tonum(v); return true;
    case NM_S__40__21_b: g::SV.C_S__26_c__S__40__21_b = v; return true;
    case NM_S__2b__22_F: g::SV.C_S__26_c__S__2b__22_F = v; return true;
    case NM_S_2_22__2d_: g::SV.C_S__26_c__S_2_22__2d_ = v; return true;
    case NM_S__3c_5: g::SV.C_S__26_c__S__3c_5 = v; return true;
    case NM_S_9_21__27_: g::SV.C_S__26_c__S_9_21__27_ = v; return true;
    case NM_S_2_21_8: g::SV.C_S__26_c__S_2_21_8 = v; return true;
    default: return false;
    }
}
bool C_S__26_c::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = sm_S__5b__21_C(); return true;
    case NM_S__40__21__5b_: out = rt::V(sm_S__40__21__5b_(rt::arg<bool>(a, n, 0, false), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__40__21__5b__1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__40__21__5b__2()))); return true;
    case NM_S__3d__22__26_: out = rt::V(sm_S__3d__22__26_(rt::arg<uint32_t>(a, n, 0, 0u))); return true;
    case NM_S__21__2d_: out = rt::V(sm_S__21__2d_(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__21__2d__0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__21__2d__1()))); return true;
    case NM_S_0_23_: out = rt::V(sm_S_0_23_(rt::arg<int32_t>(a, n, 0, C_S__26_c::dsm_S_0_23__0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_0_23__1()))); return true;
    case NM_S_4_21__60_: out = rt::V(sm_S_4_21__60_(rt::arg<int32_t>(a, n, 0, C_S__26_c::dsm_S_4_21__60__0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_4_21__60__1()))); return true;
    case NM_S_3_22_N: out = rt::V(sm_S_3_22_N()); return true;
    case NM_S__5b__22__3c_: out = rt::V(sm_S__5b__22__3c_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, NAN))); return true;
    case NM_S__3b__22_5: out = rt::V(sm_S__3b__22_5(rt::arg<double>(a, n, 0, NAN), rt::arg<uint32_t>(a, n, 1, 0u), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__3b__22_5_2()))); return true;
    case NM_S__25__21_6: out = rt::V(sm_S__25__21_6(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__25__21_6_0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__25__21_6_1()))); return true;
    case NM_S__3f__21_v: out = rt::V(sm_S__3f__21_v(rt::arg<int32_t>(a, n, 0, 0), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__3f__21_v_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__3f__21_v_2()))); return true;
    case NM_S__60__21__3d_: out = rt::V(sm_S__60__21__3d_(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__60__21__3d__0()))); return true;
    case NM_S__2c_T: out = rt::V(sm_S__2c_T(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__2c_T_0()))); return true;
    case NM_S_5_22_5: out = rt::V(sm_S_5_22_5(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S_5_22_5_0()))); return true;
    case NM_S_5d: out = rt::VB(sm_S_5d()); return true;
    case NM_S__27__22__2d_: out = rt::V(sm_S__27__22__2d_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<uint32_t>(a, n, 1, 0u))); return true;
    case NM_S_0_21_C: out = rt::V(sm_S_0_21_C(rt::arg<int32_t>(a, n, 0, 0), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_0_21_C_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S_0_21_C_2()))); return true;
    case NM_S__5e__22__3e_: out = rt::V(sm_S__5e__22__3e_(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__5e__22__3e__0()))); return true;
    case NM_S_3_22_J: out = rt::V(sm_S_3_22_J(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S_3_22_J_0()))); return true;
    case NM_S__22__22_L: out = rt::V(sm_S__22__22_L()); return true;
    case NM_S_6_22__26_: out = rt::V(sm_S_6_22__26_(rt::arg<double>(a, n, 0, NAN), rt::arg<int32_t>(a, n, 1, 0))); return true;
    case NM_S__60__21_D: out = rt::V(sm_S__60__21_D(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__60__21_D_0()))); return true;
    case NM_S__3e__21_h: out = rt::V(sm_S__3e__21_h(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__3e__21_h_0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__3e__21_h_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__3e__21_h_2()))); return true;
    case NM_S_6_22_K: out = rt::V(sm_S_6_22_K(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S_6_22_K_0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_6_22_K_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S_6_22_K_2()))); return true;
    case NM_S__21__21_8: out = rt::V(sm_S__21__21_8()); return true;
    case NM_S_6_21_x: out = rt::V(sm_S_6_21_x()); return true;
    case NM_S__23__22__21_: out = rt::V(sm_S__23__22__21_(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__23__22__21__0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__23__22__21__1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__23__22__21__2()))); return true;
    case NM_S__5b__21_j: out = rt::V(sm_S__5b__21_j()); return true;
    case NM_S__3b__22__24_: out = rt::V((double)(sm_S__3b__22__24_(rt::arg<double>(a, n, 0, NAN)))); return true;
    case NM_S_2_21__26_: out = rt::V(sm_S_2_21__26_()); return true;
    case NM_S_57: out = rt::V(sm_S_57(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S_57_0()))); return true;
    case NM_S_3_22__26_: out = rt::V(sm_S_3_22__26_(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S_3_22__26__0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_3_22__26__1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S_3_22__26__2()))); return true;
    case NM_S_6_21__5f_: out = sm_S_6_21__5f_(rt::arg<double>(a, n, 0, NAN)); return true;
    case NM_S__2d_0: out = sm_S__2d_0(); return true;
    case NM_S__27__3d_: out = rt::V(sm_S__27__3d_(rt::arg<double>(a, n, 0, NAN), rt::arg<int32_t>(a, n, 1, 0))); return true;
    case NM_S_4_21_: out = rt::VB(sm_S_4_21_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0))); return true;
    case NM_S_6_21_9: out = rt::V((double)(sm_S_6_21_9())); return true;
    case NM_S_1_21_D: out = rt::V((double)(sm_S_1_21_D(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S__5e_Z: out = rt::V((double)(sm_S__5e_Z(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S_0F: out = rt::V(sm_S_0F(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S_0F_0()))); return true;
    case NM_S_9_5b_: out = rt::V(sm_S_9_5b_(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S_9_5b__0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_9_5b__1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S_9_5b__2()))); return true;
    case NM_S__22__21_B: out = rt::V(sm_S__22__21_B(rt::arg<int32_t>(a, n, 0, 0), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__22__21_B_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__22__21_B_2()), rt::arg<bool>(a, n, 3, C_S__26_c::dsm_S__22__21_B_3()), rt::arg<bool>(a, n, 4, C_S__26_c::dsm_S__22__21_B_4()))); return true;
    case NM_S_1_22__26_: out = rt::V(sm_S_1_22__26_(rt::arg<double>(a, n, 0, NAN))); return true;
    case NM_S__40__22_3: out = rt::V(sm_S__40__22_3(rt::arg<bool>(a, n, 0, false), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__40__22_3_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__40__22_3_2()), rt::arg<bool>(a, n, 3, C_S__26_c::dsm_S__40__22_3_3()), rt::arg<bool>(a, n, 4, C_S__26_c::dsm_S__40__22_3_4()))); return true;
    case NM_S__3e__21_y: out = rt::V(sm_S__3e__21_y(rt::arg<bool>(a, n, 0, false), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__3e__21_y_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__3e__21_y_2()), rt::arg<bool>(a, n, 3, C_S__26_c::dsm_S__3e__21_y_3()), rt::arg<bool>(a, n, 4, C_S__26_c::dsm_S__3e__21_y_4()))); return true;
    case NM_S__26__21_y: out = rt::V(sm_S__26__21_y(rt::arg<bool>(a, n, 0, false), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__26__21_y_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__26__21_y_2()))); return true;
    case NM_S__3b__22_F: out = rt::V(sm_S__3b__22_F(rt::arg<bool>(a, n, 0, false), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__3b__22_F_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__3b__22_F_2()))); return true;
    case NM_S__2d__22__21_: out = rt::V((double)(sm_S__2d__22__21_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__2d__22__21__1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__2d__22__21__2()), rt::arg<bool>(a, n, 3, C_S__26_c::dsm_S__2d__22__21__3())))); return true;
    case NM_S__3e__21_v: out = rt::VB(sm_S__3e__21_v(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__3b__21_4: out = rt::V((double)(sm_S__3b__21_4(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S__3b__22_H: out = rt::V((double)(sm_S__3b__22_H(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S_3L: out = rt::V(sm_S_3L(rt::arg<bool>(a, n, 0, false), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_3L_1()))); return true;
    case NM_S__3c_f: out = sm_S__3c_f(rt::arg<double>(a, n, 0, NAN)); return true;
    case NM_S_9_22_H: out = sm_S_9_22_H(rt::arg<double>(a, n, 0, NAN)); return true;
    case NM_S__5b__21_1: out = rt::V((double)(sm_S__5b__21_1(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S__23_L: out = rt::V(sm_S__23_L(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_3K: out = rt::V((double)(sm_S_3K(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S__26__21__3c_: out = rt::V((double)(sm_S__26__21__3c_(rt::arg<int32_t>(a, n, 0, C_S__26_c::dsm_S__26__21__3c__0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__26__21__3c__1())))); return true;
    case NM_S_1_22__2c_: out = rt::V(sm_S_1_22__2c_(rt::arg<int32_t>(a, n, 0, C_S__26_c::dsm_S_1_22__2c__0()))); return true;
    case NM_S__3e__25_: out = rt::VB(sm_S__3e__25_(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__5d__22_J: out = rt::V(sm_S__5d__22_J()); return true;
    case NM_S__27_n: out = rt::V(sm_S__27_n()); return true;
    case NM_S__20__21__3b_: out = rt::V(sm_S__20__21__3b_(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__5e__21_r: out = rt::V(sm_S__5e__21_r(rt::arg<int32_t>(a, n, 0, 0), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__5e__21_r_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__5e__21_r_2()))); return true;
    case NM_S__20__21_q: out = rt::V(sm_S__20__21_q(rt::arg<int32_t>(a, n, 0, 0), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__20__21_q_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__20__21_q_2()))); return true;
    case NM_S__27__21__5f_: out = rt::VB(sm_S__27__21__5f_()); return true;
    case NM_S_9X: out = rt::VB(sm_S_9X()); return true;
    case NM_S__5b_Q: out = rt::VB(sm_S__5b_Q()); return true;
    case NM_S__26_7: out = rt::VB(sm_S__26_7()); return true;
    case NM_S_1V: out = rt::VB(sm_S_1V()); return true;
    case NM_S_0_22_3: out = rt::V(sm_S_0_22_3(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, NAN))); return true;
    case NM_S__5d_B: out = rt::VB(sm_S__5d_B(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__5d_B_1()))); return true;
    case NM_S_9_22_0: out = rt::VB(sm_S_9_22_0()); return true;
    case NM_S__3b_X: out = rt::VB(sm_S__3b_X(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__3b_X_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__3b_X_2()))); return true;
    case NM_S__40__22__27_: out = rt::V(sm_S__40__22__27_(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<int32_t>(a, n, 1, 0))); return true;
    case NM_S__5b__21_s: out = rt::VB(sm_S__5b__21_s(rt::arg<uint32_t>(a, n, 0, 0u))); return true;
    case NM_S__60__21_i: out = rt::VB(sm_S__60__21_i(rt::arg<uint32_t>(a, n, 0, 0u))); return true;
    case NM_S__3d__21_x: out = rt::VB(sm_S__3d__21_x(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<bool>(a, n, 1, false), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__3d__21_x_2()))); return true;
    case NM_S_8_22_3: out = rt::V((double)(sm_S_8_22_3(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S__25__22__2d_: out = rt::VB(sm_S__25__22__2d_(rt::arg<uint32_t>(a, n, 0, 0u))); return true;
    case NM_S_7_22_B: out = rt::V((double)(sm_S_7_22_B(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)))); return true;
    case NM_S__3d__21_u: out = rt::V((double)(sm_S__3d__21_u(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S_9_22__2d_: out = rt::V((double)(sm_S_9_22__2d_(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S__2b__22_4: out = rt::V((double)(sm_S__2b__22_4(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)))); return true;
    case NM_S__23__22__3c_: out = rt::VB(sm_S__23__22__3c_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    case NM_S__3d__21__3e_: out = rt::V(sm_S__3d__21__3e_(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__3d__21__3e__0()))); return true;
    case NM_S_4_21_r: out = rt::V(sm_S_4_21_r(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S_4_21_r_0()))); return true;
    case NM_S__27__22_I: out = rt::V(sm_S__27__22_I(rt::arg<int32_t>(a, n, 0, 0), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__27__22_I_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__27__22_I_2()))); return true;
    case NM_S_8_21_9: out = rt::V(sm_S_8_21_9()); return true;
    case NM_S__3d__60_: out = rt::V(sm_S__3d__60_(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__3d__60__0()))); return true;
    case NM_S_1_22_O: out = rt::V(sm_S_1_22_O(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S_1_22_O_0()))); return true;
    case NM_S__3e__21__26_: out = sm_S__3e__21__26_(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__3e__21__26__1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__3e__21__26__2()), rt::arg<bool>(a, n, 3, C_S__26_c::dsm_S__3e__21__26__3())); return true;
    case NM_S__23__3f_: out = sm_S__23__3f_(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<double>(a, n, 1, C_S__26_c::dsm_S__23__3f__1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__23__3f__2()), rt::arg<bool>(a, n, 3, C_S__26_c::dsm_S__23__3f__3())); return true;
    case NM_S_1_2c_: out = sm_S_1_2c_(rt::arg<uint32_t>(a, n, 0, 0u)); return true;
    case NM_S_3_22__2b_: out = rt::V((double)(sm_S_3_22__2b_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, C_S__26_c::dsm_S_3_22__2b__1())))); return true;
    case NM_S__5d__22__27_: out = rt::V((double)(sm_S__5d__22__27_())); return true;
    case NM_S__2b__22__2b_: out = rt::V((double)(sm_S__2b__22__2b_(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S__23__22__2b_: out = rt::V((double)(sm_S__23__22__2b_(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<uint32_t>(a, n, 1, 0u)))); return true;
    case NM_S_9_21_P: out = rt::V(sm_S_9_21_P(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_9_21_P_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S_9_21_P_2()), rt::arg<bool>(a, n, 3, C_S__26_c::dsm_S_9_21_P_3()))); return true;
    case NM_S_3_22__2d_: out = rt::V(sm_S_3_22__2d_(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__5d__21_s: out = rt::V(sm_S__5d__21_s(rt::arg<int32_t>(a, n, 0, C_S__26_c::dsm_S__5d__21_s_0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__5d__21_s_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__5d__21_s_2()), rt::arg<bool>(a, n, 3, C_S__26_c::dsm_S__5d__21_s_3()))); return true;
    case NM_S_1_21_y: out = rt::V(sm_S_1_21_y(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S_1_21_y_0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_1_21_y_1()))); return true;
    case NM_S_7i: out = rt::V(sm_S_7i(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_7i_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S_7i_2()), rt::arg<bool>(a, n, 3, C_S__26_c::dsm_S_7i_3()))); return true;
    case NM_S__3e__21_p: out = rt::V(sm_S__3e__21_p(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__3e__21_p_0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__3e__21_p_1()))); return true;
    case NM_S__22__22__20_: out = rt::V(sm_S__22__22__20_(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__22__22__20__0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__22__22__20__1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__22__22__20__2()))); return true;
    case NM_S__3c__21_v: out = rt::V(sm_S__3c__21_v(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__3c__21_v_0()))); return true;
    case NM_S_1_21__3b_: out = rt::V(sm_S_1_21__3b_(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_1_21__3b__1()))); return true;
    case NM_S__22__21_z: out = rt::V(sm_S__22__21_z(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__22__21_z_0()), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__22__21_z_1()))); return true;
    case NM_S__3f__26_: out = rt::V((double)(sm_S__3f__26_(rt::arg<bool>(a, n, 0, C_S__26_c::dsm_S__3f__26__0())))); return true;
    case NM_S_8_22_F: out = rt::V((double)(sm_S_8_22_F(rt::arg<int32_t>(a, n, 0, C_S__26_c::dsm_S_8_22_F_0())))); return true;
    case NM_S__3d__22_Q: out = rt::V((double)(sm_S__3d__22_Q())); return true;
    case NM_S__40__22_2: out = rt::V(sm_S__40__22_2()); return true;
    case NM_S_3_22_M: out = rt::V(sm_S_3_22_M()); return true;
    case NM_S__3f__22_H: out = rt::V(sm_S__3f__22_H()); return true;
    case NM_S__5e__21_L: out = rt::V((double)(sm_S__5e__21_L())); return true;
    case NM_S__5b__21_I: out = sm_S__5b__21_I(rt::arg<double>(a, n, 0, NAN), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__5b__21_I_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__5b__21_I_2())); return true;
    case NM_S__2b__21_I: out = sm_S__2b__21_I(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, false)); return true;
    case NM_S_5_40_: out = sm_S_5_40_(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<bool>(a, n, 1, false)); return true;
    case NM_S_0p: out = sm_S_0p(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, false)); return true;
    case NM_S__40__22_M: out = rt::V((double)(sm_S__40__22_M())); return true;
    case NM_S__22_X: out = rt::V(sm_S__22_X()); return true;
    case NM_S__3b__21__2c_: out = rt::V(sm_S__3b__21__2c_(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, NAN))); return true;
    case NM_S_4_21_j: out = rt::VB(sm_S_4_21_j(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    case NM_S__60__22__2b_: out = rt::VB(sm_S__60__22__2b_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    case NM_S__2c__22_F: out = rt::V(sm_S__2c__22_F()); return true;
    case NM_S_1_21_n: out = rt::V(sm_S_1_21_n(rt::arg<double>(a, n, 0, NAN))); return true;
    case NM_S__2c__22_L: out = rt::V(sm_S__2c__22_L(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, NAN))); return true;
    case NM_S_8_21_Z: out = sm_S_8_21_Z(rt::arg<double>(a, n, 0, NAN), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S_8_21_Z_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S_8_21_Z_2())); return true;
    case NM_S__26__21__3f_: out = sm_S__26__21__3f_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S_6_21_T: out = sm_S_6_21_T(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, C_S__26_c::dsm_S_6_21_T_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S_6_21_T_2())); return true;
    case NM_S__40__22_A: out = sm_S__40__22_A(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, C_S__26_c::dsm_S__40__22_A_2()), rt::arg<bool>(a, n, 3, C_S__26_c::dsm_S__40__22_A_3())); return true;
    case NM_S_5_22__3b_: out = sm_S_5_22__3b_(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN), rt::arg<double>(a, n, 3, C_S__26_c::dsm_S_5_22__3b__3()), rt::arg<bool>(a, n, 4, C_S__26_c::dsm_S_5_22__3b__4())); return true;
    case NM_S__22__22_A: out = sm_S__22__22_A(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN), rt::arg<double>(a, n, 3, NAN), rt::arg<double>(a, n, 4, C_S__26_c::dsm_S__22__22_A_4()), rt::arg<bool>(a, n, 5, C_S__26_c::dsm_S__22__22_A_5())); return true;
    case NM_S__25__22__3e_: out = sm_S__25__22__3e_(rt::arg<double>(a, n, 0, NAN), rt::arg<double>(a, n, 1, C_S__26_c::dsm_S__25__22__3e__1()), rt::arg<uint32_t>(a, n, 2, C_S__26_c::dsm_S__25__22__3e__2()), rt::arg<uint32_t>(a, n, 3, C_S__26_c::dsm_S__25__22__3e__3())); return true;
    case NM_S_5_21_p: out = sm_S_5_21_p(rt::arg<double>(a, n, 0, NAN)); return true;
    case NM_S__2c_o: out = rt::V((double)(sm_S__2c_o(rt::arg<double>(a, n, 0, NAN)))); return true;
    case NM_S__23__21_R: out = sm_S__23__21_R(rt::arg<double>(a, n, 0, NAN), rt::arg<bool>(a, n, 1, C_S__26_c::dsm_S__23__21_R_1()), rt::arg<bool>(a, n, 2, C_S__26_c::dsm_S__23__21_R_2())); return true;
    case NM_S_4_21__3f_: out = sm_S_4_21__3f_(rt::arg<double>(a, n, 0, NAN)); return true;
    case NM_S__2d__21__22_: out = sm_S__2d__21__22_(rt::arg<double>(a, n, 0, NAN)); return true;
    case NM_S__22_E: out = rt::V((double)(sm_S__22_E())); return true;
    case NM_S__27__21_O: out = rt::V((double)(sm_S__27__21_O())); return true;
    case NM_S_5_22__21_: out = rt::V((double)(sm_S_5_22__21_())); return true;
    case NM_S__2b__22__21_: out = rt::V((double)(sm_S__2b__22__21_())); return true;
    case NM_S_5_22_P: out = rt::V((double)(sm_S_5_22_P(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S_1_21_: out = rt::V((double)(sm_S_1_21_())); return true;
    case NM_S_8_22__25_: out = rt::V((double)(sm_S_8_22__25_())); return true;
    case NM_S__3d__21_n: out = sm_S__3d__21_n(); return true;
    case NM_S__25__21__21_: out = rt::V((double)(sm_S__25__21__21_())); return true;
    case NM_S__3d_D: out = sm_S__3d_D(); return true;
    case NM_S__5b_5: out = rt::V((double)(sm_S__5b_5(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S_1_22_1: out = rt::V((double)(sm_S_1_22_1(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S_53: out = rt::VB(sm_S_53()); return true;
    case NM_S_3_21_K: out = sm_S_3_21_K(rt::arg<uint32_t>(a, n, 0, 0u)); return true;
    case NM_S_6_2d_: out = rt::V((double)(sm_S_6_2d_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)))); return true;
    case NM_S__3e_4: out = sm_S__3e_4(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__23_f: out = sm_S__23_f(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__20__21_C: out = sm_S__20__21_C(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<int32_t>(a, n, 2, C_S__26_c::dsm_S__20__21_C_2())); return true;
    default: return false;
    }
}
void C_S__26_f::ctor_() {
    RT_FN("S__26_f.S__26_f");
    (void)(rt::NUL);
}
rt::Value C_S__26_f::sm_S__5b__21_C() {
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc8_ = rt::NUL;
    rt::Value l_A__loc12_ = rt::NUL;
    rt::Value l_A__loc10_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_A__loc1_ = rt::NUL;
    bool l_A__loc7_ = false;
    bool l_A__loc16_ = false;
    int32_t l_A__loc5_ = 0;
    rt::Value l_A__loc13_ = rt::NUL;
    rt::Value l_A__loc19_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::UNDEF;
    rt::Value l_A__loc18_ = rt::UNDEF;
    rt::Value l_A__loc14_ = rt::NUL;
    rt::Value l_A__loc17_ = rt::NUL;
    rt::Value l_A__loc6_ = rt::NUL;
    rt::Value l_A__loc11_ = rt::NUL;
    rt::Value l_A__loc15_ = rt::NUL;
    int32_t l_A__loc9_ = 0;
    RT_FN("S__26_f.S__5b__21_C");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc8_ = rt::slot_string(rt::NUL));
    (l_A__loc12_ = rt::NUL);
    (l_A__loc10_ = rt::NUL);
    (l_A__loc4_ = rt::slot_string(rt::NUL));
    (l_A__loc1_ = rt::slot_string(rt::NUL));
    (l_A__loc7_ = false);
    (l_A__loc16_ = false);
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc13_ = rt::slot_string(rt::NUL));
    (l_A__loc19_ = rt::slot_string(rt::NUL));
    (l_A__loc2_ = rt::V(0.0));
    (l_A__loc18_ = rt::V(0.0));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2041]), rt::arr_lit({rt::VS(g::LS[2042]), rt::VS(g::LS[2043]), rt::VS(g::LS[2044])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2045]), rt::arr_lit({rt::VS(g::LS[2046]), rt::VS(g::LS[2047])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2048]), rt::arr_lit({rt::VS(g::LS[2049]), rt::VS(g::LS[2050])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2051]), rt::arr_lit({rt::VS(g::LS[2052]), rt::VS(g::LS[2053]), rt::VS(g::LS[2054]), rt::VS(g::LS[2055])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2056]), rt::arr_lit({rt::VS(g::LS[2057]), rt::VS(g::LS[2058]), rt::VS(g::LS[2059]), rt::VS(g::LS[2060]), rt::VS(g::LS[2061])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2062]), rt::arr_lit({rt::VS(g::LS[2063]), rt::VS(g::LS[2064])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2065]), rt::arr_lit({rt::VS(g::LS[2066]), rt::VS(g::LS[2067]), rt::VS(g::LS[2068]), rt::VS(g::LS[2069]), rt::VS(g::LS[2070]), rt::VS(g::LS[2071]), rt::VS(g::LS[2072]), rt::VS(g::LS[2073]), rt::VS(g::LS[2074]), rt::VS(g::LS[2075]), rt::VS(g::LS[2076]), rt::VS(g::LS[2077])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2078]), rt::arr_lit({rt::VS(g::LS[2079]), rt::VS(g::LS[2080]), rt::VS(g::LS[2081]), rt::VS(g::LS[2082])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2083]), rt::arr_lit({rt::VS(g::LS[2084]), rt::VS(g::LS[2085]), rt::VS(g::LS[2086]), rt::VS(g::LS[2087]), rt::VS(g::LS[2088]), rt::VS(g::LS[2089]), rt::VS(g::LS[2090]), rt::VS(g::LS[2091]), rt::VS(g::LS[2092]), rt::VS(g::LS[2093]), rt::VS(g::LS[2094]), rt::VS(g::LS[2095])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2096]), rt::arr_lit({rt::VS(g::LS[2043])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2097]), rt::arr_lit({rt::VS(g::LS[2046]), rt::VS(g::LS[2098])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2099]), rt::arr_lit({rt::VS(g::LS[2049]), rt::VS(g::LS[2100]), rt::VS(g::LS[2101]), rt::VS(g::LS[2102]), rt::VS(g::LS[2103]), rt::VS(g::LS[2104]), rt::VS(g::LS[2105]), rt::VS(g::LS[2106]), rt::VS(g::LS[2107]), rt::VS(g::LS[2108]), rt::VS(g::LS[2109]), rt::VS(g::LS[2110]), rt::VS(g::LS[2111])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2112]), rt::arr_lit({rt::VS(g::LS[2052]), rt::VS(g::LS[2113]), rt::VS(g::LS[2114]), rt::VS(g::LS[2115]), rt::VS(g::LS[2116]), rt::VS(g::LS[2117]), rt::VS(g::LS[2118]), rt::VS(g::LS[2119]), rt::VS(g::LS[2120]), rt::VS(g::LS[2121]), rt::VS(g::LS[2122]), rt::VS(g::LS[2123]), rt::VS(g::LS[2124]), rt::VS(g::LS[2125]), rt::VS(g::LS[2126]), rt::VS(g::LS[2127])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2128]), rt::arr_lit({rt::VS(g::LS[2057]), rt::VS(g::LS[2129]), rt::VS(g::LS[2130]), rt::VS(g::LS[2131]), rt::VS(g::LS[2132]), rt::VS(g::LS[2133]), rt::VS(g::LS[2134]), rt::VS(g::LS[2135]), rt::VS(g::LS[2136]), rt::VS(g::LS[2137]), rt::VS(g::LS[2138]), rt::VS(g::LS[2139]), rt::VS(g::LS[2140]), rt::VS(g::LS[2141]), rt::VS(g::LS[2142]), rt::VS(g::LS[2143]), rt::VS(g::LS[2144]), rt::VS(g::LS[2145]), rt::VS(g::LS[2146]), rt::VS(g::LS[2147]), rt::VS(g::LS[2148]), rt::VS(g::LS[2149]), rt::VS(g::LS[2150]), rt::VS(g::LS[2151]), rt::VS(g::LS[2152]), rt::VS(g::LS[2153]), rt::VS(g::LS[2154]), rt::VS(g::LS[2155])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2156]), rt::arr_lit({rt::VS(g::LS[2063]), rt::VS(g::LS[2157]), rt::VS(g::LS[2158]), rt::VS(g::LS[2159]), rt::VS(g::LS[2160]), rt::VS(g::LS[2161]), rt::VS(g::LS[2162]), rt::VS(g::LS[2163]), rt::VS(g::LS[2164]), rt::VS(g::LS[2165]), rt::VS(g::LS[2166]), rt::VS(g::LS[2167]), rt::VS(g::LS[2168]), rt::VS(g::LS[2169]), rt::VS(g::LS[2170])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2171]), rt::arr_lit({rt::VS(g::LS[2172]), rt::VS(g::LS[2173]), rt::VS(g::LS[2174]), rt::VS(g::LS[2175]), rt::VS(g::LS[2176]), rt::VS(g::LS[2177]), rt::VS(g::LS[2178]), rt::VS(g::LS[2179]), rt::VS(g::LS[2180]), rt::VS(g::LS[113]), rt::VS(g::LS[2181]), rt::VS(g::LS[2182]), rt::VS(g::LS[2183]), rt::VS(g::LS[2184]), rt::VS(g::LS[2185]), rt::VS(g::LS[2186]), rt::VS(g::LS[2187]), rt::VS(g::LS[2188]), rt::VS(g::LS[2189]), rt::VS(g::LS[2190]), rt::VS(g::LS[2191]), rt::VS(g::LS[113]), rt::VS(g::LS[2192]), rt::VS(g::LS[2193]), rt::VS(g::LS[2194]), rt::VS(g::LS[2195]), rt::VS(g::LS[2196]), rt::VS(g::LS[2197]), rt::VS(g::LS[2198]), rt::VS(g::LS[2199]), rt::VS(g::LS[2200]), rt::VS(g::LS[2201]), rt::VS(g::LS[2202]), rt::VS(g::LS[2203]), rt::VS(g::LS[2204]), rt::VS(g::LS[2205]), rt::VS(g::LS[2206]), rt::VS(g::LS[2207]), rt::VS(g::LS[2208]), rt::VS(g::LS[2209])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2210]), rt::arr_lit({rt::VS(g::LS[2066])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2211]), rt::arr_lit({rt::VS(g::LS[2079])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2212]), rt::arr_lit({rt::VS(g::LS[2043])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2213]), rt::arr_lit({rt::VS(g::LS[2046])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2214]), rt::arr_lit({rt::VS(g::LS[2049])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2215]), rt::arr_lit({rt::VS(g::LS[2052])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2216]), rt::arr_lit({rt::VS(g::LS[2217])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2218]), rt::arr_lit({rt::VS(g::LS[2057])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2219]), rt::arr_lit({rt::VS(g::LS[2063])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2220]), rt::arr_lit({rt::VS(g::LS[2066])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2221]), rt::arr_lit({rt::VS(g::LS[2079])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2222]), rt::arr_lit({rt::VS(g::LS[2043])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2223]), rt::arr_lit({rt::VS(g::LS[2046])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2224]), rt::arr_lit({rt::VS(g::LS[2049])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2225]), rt::arr_lit({rt::VS(g::LS[2052])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2226]), rt::arr_lit({rt::VS(g::LS[2057]), rt::VS(g::LS[2227])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2228]), rt::arr_lit({rt::VS(g::LS[2063])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2229]), rt::arr_lit({rt::VS(g::LS[2066])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2230]), rt::arr_lit({rt::VS(g::LS[2231])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2232]), rt::arr_lit({rt::VS(g::LS[2233])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2234]), rt::arr_lit({rt::VS(g::LS[2235])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2236]), rt::arr_lit({rt::VS(g::LS[2237])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2238]), rt::arr_lit({rt::VS(g::LS[2239])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2240]), rt::arr_lit({rt::VS(g::LS[2241])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2242]), rt::arr_lit({rt::VS(g::LS[2243]), rt::VS(g::LS[2244])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2245]), rt::arr_lit({rt::VS(g::LS[2246])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2247]), rt::arr_lit({rt::VS(g::LS[2079]), rt::VS(g::LS[2248]), rt::VS(g::LS[2249]), rt::VS(g::LS[2250]), rt::VS(g::LS[2251]), rt::VS(g::LS[2252]), rt::VS(g::LS[2253]), rt::VS(g::LS[2254]), rt::VS(g::LS[2255]), rt::VS(g::LS[2256]), rt::VS(g::LS[2257]), rt::VS(g::LS[2258]), rt::VS(g::LS[2259]), rt::VS(g::LS[2260]), rt::VS(g::LS[2261]), rt::VS(g::LS[2262]), rt::VS(g::LS[2263]), rt::VS(g::LS[2264]), rt::VS(g::LS[2265]), rt::VS(g::LS[2266]), rt::VS(g::LS[2267]), rt::VS(g::LS[2268]), rt::VS(g::LS[2269]), rt::VS(g::LS[2270]), rt::VS(g::LS[2271]), rt::VS(g::LS[2272]), rt::VS(g::LS[2273]), rt::VS(g::LS[2274]), rt::VS(g::LS[2275]), rt::VS(g::LS[2276]), rt::VS(g::LS[2277]), rt::VS(g::LS[2278]), rt::VS(g::LS[2279]), rt::VS(g::LS[2280]), rt::VS(g::LS[2281]), rt::VS(g::LS[2282]), rt::VS(g::LS[2283]), rt::VS(g::LS[2284]), rt::VS(g::LS[2285]), rt::VS(g::LS[2286]), rt::VS(g::LS[2287]), rt::VS(g::LS[2288]), rt::VS(g::LS[2289])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2290]), rt::arr_lit({rt::VS(g::LS[2043]), rt::VS(g::LS[2291]), rt::VS(g::LS[2292]), rt::VS(g::LS[2293]), rt::VS(g::LS[2294]), rt::VS(g::LS[2295]), rt::VS(g::LS[2296]), rt::VS(g::LS[2297]), rt::VS(g::LS[2298]), rt::VS(g::LS[2299]), rt::VS(g::LS[2300]), rt::VS(g::LS[2301]), rt::VS(g::LS[2302]), rt::VS(g::LS[2303]), rt::VS(g::LS[2304]), rt::VS(g::LS[2305]), rt::VS(g::LS[2306]), rt::VS(g::LS[2307]), rt::VS(g::LS[2308]), rt::VS(g::LS[2309]), rt::VS(g::LS[2310]), rt::VS(g::LS[2311]), rt::VS(g::LS[2312]), rt::VS(g::LS[2313]), rt::VS(g::LS[2314]), rt::VS(g::LS[2315]), rt::VS(g::LS[2316]), rt::VS(g::LS[2317]), rt::VS(g::LS[2318]), rt::VS(g::LS[2319]), rt::VS(g::LS[2320]), rt::VS(g::LS[2321]), rt::VS(g::LS[2322]), rt::VS(g::LS[2323]), rt::VS(g::LS[2324]), rt::VS(g::LS[2325]), rt::VS(g::LS[2326]), rt::VS(g::LS[2327]), rt::VS(g::LS[2328]), rt::VS(g::LS[2329]), rt::VS(g::LS[2330]), rt::VS(g::LS[2331])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2332]), rt::arr_lit({rt::VS(g::LS[2046]), rt::VS(g::LS[2333]), rt::VS(g::LS[2334])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2335]), rt::arr_lit({rt::VS(g::LS[2049])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2336]), rt::arr_lit({rt::VS(g::LS[2052]), rt::VS(g::LS[2337]), rt::VS(g::LS[2338]), rt::VS(g::LS[2339]), rt::VS(g::LS[2340]), rt::VS(g::LS[2341]), rt::VS(g::LS[2342])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2343]), rt::arr_lit({rt::VS(g::LS[2344]), rt::VS(g::LS[2345]), rt::VS(g::LS[2346]), rt::VS(g::LS[2347]), rt::VS(g::LS[2348]), rt::VS(g::LS[2349]), rt::VS(g::LS[2350]), rt::VS(g::LS[2351]), rt::VS(g::LS[2352]), rt::VS(g::LS[2353]), rt::VS(g::LS[2354]), rt::VS(g::LS[2355]), rt::VS(g::LS[2356]), rt::VS(g::LS[2357]), rt::VS(g::LS[2358]), rt::VS(g::LS[2359]), rt::VS(g::LS[2360]), rt::VS(g::LS[2361]), rt::VS(g::LS[2362]), rt::VS(g::LS[2363]), rt::VS(g::LS[2364]), rt::VS(g::LS[2365]), rt::VS(g::LS[2366]), rt::VS(g::LS[2367]), rt::VS(g::LS[2368]), rt::VS(g::LS[2369]), rt::VS(g::LS[2370]), rt::VS(g::LS[2371]), rt::VS(g::LS[2372]), rt::VS(g::LS[2373]), rt::VS(g::LS[2374]), rt::VS(g::LS[2375]), rt::VS(g::LS[2376]), rt::VS(g::LS[2377]), rt::VS(g::LS[2378]), rt::VS(g::LS[2379]), rt::VS(g::LS[2380]), rt::VS(g::LS[2381]), rt::VS(g::LS[2382]), rt::VS(g::LS[2383]), rt::VS(g::LS[2384]), rt::VS(g::LS[2385]), rt::VS(g::LS[2386]), rt::VS(g::LS[2387]), rt::VS(g::LS[2388]), rt::VS(g::LS[2389]), rt::VS(g::LS[2390]), rt::VS(g::LS[2391]), rt::VS(g::LS[2392]), rt::VS(g::LS[2393])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2394]), rt::arr_lit({rt::VS(g::LS[2057])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2395]), rt::arr_lit({rt::VS(g::LS[2063]), rt::VS(g::LS[2396]), rt::VS(g::LS[2397]), rt::VS(g::LS[2398]), rt::VS(g::LS[2399]), rt::VS(g::LS[2400]), rt::VS(g::LS[2401]), rt::VS(g::LS[2402]), rt::VS(g::LS[2403]), rt::VS(g::LS[2404])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2405]), rt::arr_lit({rt::VS(g::LS[2066])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2406]), rt::arr_lit({rt::VS(g::LS[2407]), rt::VS(g::LS[2408]), rt::VS(g::LS[2409]), rt::VS(g::LS[2410]), rt::VS(g::LS[2411]), rt::VS(g::LS[2412]), rt::VS(g::LS[2413]), rt::VS(g::LS[2414]), rt::VS(g::LS[2415])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2416]), rt::arr_lit({rt::VS(g::LS[2417])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2418]), rt::arr_lit({rt::VS(g::LS[2419])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2420]), rt::arr_lit({rt::VS(g::LS[2421]), rt::VS(g::LS[2422]), rt::VS(g::LS[2423])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2424]), rt::arr_lit({rt::VS(g::LS[2425]), rt::VS(g::LS[2426]), rt::VS(g::LS[2427]), rt::VS(g::LS[2428]), rt::VS(g::LS[2429]), rt::VS(g::LS[2430]), rt::VS(g::LS[2431]), rt::VS(g::LS[2432]), rt::VS(g::LS[2433]), rt::VS(g::LS[2434]), rt::VS(g::LS[2435]), rt::VS(g::LS[2436]), rt::VS(g::LS[2437]), rt::VS(g::LS[2438]), rt::VS(g::LS[2439]), rt::VS(g::LS[2440]), rt::VS(g::LS[2441]), rt::VS(g::LS[2442]), rt::VS(g::LS[2443]), rt::VS(g::LS[2444])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2445]), rt::arr_lit({rt::VS(g::LS[2446]), rt::VS(g::LS[2447]), rt::VS(g::LS[2448]), rt::VS(g::LS[2449]), rt::VS(g::LS[2450]), rt::VS(g::LS[2451]), rt::VS(g::LS[2452]), rt::VS(g::LS[2453]), rt::VS(g::LS[2454]), rt::VS(g::LS[2455]), rt::VS(g::LS[2456]), rt::VS(g::LS[2457]), rt::VS(g::LS[2458]), rt::VS(g::LS[2459]), rt::VS(g::LS[2460]), rt::VS(g::LS[2461]), rt::VS(g::LS[2462]), rt::VS(g::LS[2463]), rt::VS(g::LS[2464]), rt::VS(g::LS[2465]), rt::VS(g::LS[2466]), rt::VS(g::LS[2467]), rt::VS(g::LS[2468]), rt::VS(g::LS[2469]), rt::VS(g::LS[2470]), rt::VS(g::LS[2471]), rt::VS(g::LS[2472]), rt::VS(g::LS[2473]), rt::VS(g::LS[2474]), rt::VS(g::LS[2475]), rt::VS(g::LS[2476]), rt::VS(g::LS[2477]), rt::VS(g::LS[2473]), rt::VS(g::LS[2478]), rt::VS(g::LS[2479]), rt::VS(g::LS[2480]), rt::VS(g::LS[2481]), rt::VS(g::LS[2482]), rt::VS(g::LS[2483]), rt::VS(g::LS[2484]), rt::VS(g::LS[2485]), rt::VS(g::LS[2486]), rt::VS(g::LS[2487]), rt::VS(g::LS[2488]), rt::VS(g::LS[2489])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2490]), rt::arr_lit({rt::VS(g::LS[2491]), rt::VS(g::LS[2492]), rt::VS(g::LS[2493]), rt::VS(g::LS[2494]), rt::VS(g::LS[2495]), rt::VS(g::LS[2496])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2497]), rt::arr_lit({rt::VS(g::LS[2498]), rt::VS(g::LS[2499]), rt::VS(g::LS[2500]), rt::VS(g::LS[2501]), rt::VS(g::LS[2502]), rt::VS(g::LS[2503]), rt::VS(g::LS[2504])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2505]), rt::arr_lit({rt::VS(g::LS[2506]), rt::VS(g::LS[2507]), rt::VS(g::LS[2508]), rt::VS(g::LS[2509]), rt::VS(g::LS[2510]), rt::VS(g::LS[2511]), rt::VS(g::LS[2512]), rt::VS(g::LS[2513]), rt::VS(g::LS[2514]), rt::VS(g::LS[2515]), rt::VS(g::LS[2516]), rt::VS(g::LS[2517]), rt::VS(g::LS[2518]), rt::VS(g::LS[2519]), rt::VS(g::LS[2520]), rt::VS(g::LS[2521]), rt::VS(g::LS[2522]), rt::VS(g::LS[2523]), rt::VS(g::LS[2524]), rt::VS(g::LS[2525]), rt::VS(g::LS[2526]), rt::VS(g::LS[2527]), rt::VS(g::LS[2528]), rt::VS(g::LS[2529]), rt::VS(g::LS[2530])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2531]), rt::arr_lit({rt::VS(g::LS[2532]), rt::VS(g::LS[2533]), rt::VS(g::LS[2534]), rt::VS(g::LS[2535]), rt::VS(g::LS[2536]), rt::VS(g::LS[2537]), rt::VS(g::LS[2538]), rt::VS(g::LS[2539]), rt::VS(g::LS[2540]), rt::VS(g::LS[2541]), rt::VS(g::LS[2542]), rt::VS(g::LS[2543]), rt::VS(g::LS[2544]), rt::VS(g::LS[2545]), rt::VS(g::LS[2546]), rt::VS(g::LS[2547]), rt::VS(g::LS[2548]), rt::VS(g::LS[2549]), rt::VS(g::LS[2550]), rt::VS(g::LS[2551]), rt::VS(g::LS[2552]), rt::VS(g::LS[2553]), rt::VS(g::LS[2554]), rt::VS(g::LS[2555]), rt::VS(g::LS[2556]), rt::VS(g::LS[2557]), rt::VS(g::LS[2558]), rt::VS(g::LS[2559]), rt::VS(g::LS[2560]), rt::VS(g::LS[2561]), rt::VS(g::LS[2562]), rt::VS(g::LS[2563]), rt::VS(g::LS[2564]), rt::VS(g::LS[2565]), rt::VS(g::LS[2566]), rt::VS(g::LS[2567]), rt::VS(g::LS[2568]), rt::VS(g::LS[2569]), rt::VS(g::LS[2570]), rt::VS(g::LS[2571]), rt::VS(g::LS[2572]), rt::VS(g::LS[2573]), rt::VS(g::LS[2574]), rt::VS(g::LS[2575])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2576]), rt::arr_lit({rt::VS(g::LS[2577]), rt::VS(g::LS[2578]), rt::VS(g::LS[2579]), rt::VS(g::LS[2580]), rt::VS(g::LS[2581]), rt::VS(g::LS[2582]), rt::VS(g::LS[2583]), rt::VS(g::LS[2584]), rt::VS(g::LS[2585])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2586]), rt::arr_lit({rt::VS(g::LS[2587]), rt::VS(g::LS[2588]), rt::VS(g::LS[2589]), rt::VS(g::LS[2590]), rt::VS(g::LS[2591]), rt::VS(g::LS[2592]), rt::VS(g::LS[2593]), rt::VS(g::LS[2594]), rt::VS(g::LS[2595])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2596]), rt::arr_lit({rt::VS(g::LS[2597]), rt::VS(g::LS[2598]), rt::VS(g::LS[2599]), rt::VS(g::LS[2600]), rt::VS(g::LS[2601]), rt::VS(g::LS[2602]), rt::VS(g::LS[2603]), rt::VS(g::LS[2604]), rt::VS(g::LS[2605]), rt::VS(g::LS[2606]), rt::VS(g::LS[2607]), rt::VS(g::LS[2608]), rt::VS(g::LS[2542]), rt::VS(g::LS[2609]), rt::VS(g::LS[2610]), rt::VS(g::LS[2611]), rt::VS(g::LS[2612]), rt::VS(g::LS[2613]), rt::VS(g::LS[2614]), rt::VS(g::LS[2615]), rt::VS(g::LS[2616]), rt::VS(g::LS[2617]), rt::VS(g::LS[2618]), rt::VS(g::LS[2619]), rt::VS(g::LS[2620]), rt::VS(g::LS[2621]), rt::VS(g::LS[2622]), rt::VS(g::LS[2623]), rt::VS(g::LS[2624]), rt::VS(g::LS[2625]), rt::VS(g::LS[2626]), rt::VS(g::LS[2627]), rt::VS(g::LS[2628]), rt::VS(g::LS[2629]), rt::VS(g::LS[2630]), rt::VS(g::LS[2631]), rt::VS(g::LS[2632]), rt::VS(g::LS[2633]), rt::VS(g::LS[2634]), rt::VS(g::LS[2635]), rt::VS(g::LS[2636]), rt::VS(g::LS[2637]), rt::VS(g::LS[2638]), rt::VS(g::LS[2639]), rt::VS(g::LS[2560]), rt::VS(g::LS[2640]), rt::VS(g::LS[2641]), rt::VS(g::LS[2642]), rt::VS(g::LS[2643]), rt::VS(g::LS[2644]), rt::VS(g::LS[2645]), rt::VS(g::LS[2646]), rt::VS(g::LS[2647]), rt::VS(g::LS[2648]), rt::VS(g::LS[2649]), rt::VS(g::LS[2650]), rt::VS(g::LS[2651]), rt::VS(g::LS[2652]), rt::VS(g::LS[2653]), rt::VS(g::LS[2654]), rt::VS(g::LS[2655]), rt::VS(g::LS[2656]), rt::VS(g::LS[2657]), rt::VS(g::LS[2658]), rt::VS(g::LS[2659]), rt::VS(g::LS[2660]), rt::VS(g::LS[2661]), rt::VS(g::LS[2662]), rt::VS(g::LS[2663]), rt::VS(g::LS[2664]), rt::VS(g::LS[2665]), rt::VS(g::LS[2666]), rt::VS(g::LS[2667]), rt::VS(g::LS[2668]), rt::VS(g::LS[2669]), rt::VS(g::LS[2670]), rt::VS(g::LS[2671]), rt::VS(g::LS[2672]), rt::VS(g::LS[2673]), rt::VS(g::LS[2674]), rt::VS(g::LS[2675]), rt::VS(g::LS[2676]), rt::VS(g::LS[2677]), rt::VS(g::LS[2678])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2679]), rt::arr_lit({rt::VS(g::LS[2680]), rt::VS(g::LS[2681]), rt::VS(g::LS[2682]), rt::VS(g::LS[2683]), rt::VS(g::LS[2684]), rt::VS(g::LS[2685]), rt::VS(g::LS[2686]), rt::VS(g::LS[2687]), rt::VS(g::LS[2688]), rt::VS(g::LS[2689]), rt::VS(g::LS[2690]), rt::VS(g::LS[2691]), rt::VS(g::LS[2692]), rt::VS(g::LS[2693]), rt::VS(g::LS[2694]), rt::VS(g::LS[2695]), rt::VS(g::LS[2696]), rt::VS(g::LS[2697]), rt::VS(g::LS[2698]), rt::VS(g::LS[2699]), rt::VS(g::LS[2700]), rt::VS(g::LS[2701]), rt::VS(g::LS[2702]), rt::VS(g::LS[2703]), rt::VS(g::LS[2704]), rt::VS(g::LS[2705]), rt::VS(g::LS[2706]), rt::VS(g::LS[2707]), rt::VS(g::LS[2708]), rt::VS(g::LS[2709]), rt::VS(g::LS[2710]), rt::VS(g::LS[2711]), rt::VS(g::LS[2712]), rt::VS(g::LS[2713]), rt::VS(g::LS[2714]), rt::VS(g::LS[2715]), rt::VS(g::LS[2716]), rt::VS(g::LS[2717]), rt::VS(g::LS[2718]), rt::VS(g::LS[2719]), rt::VS(g::LS[2720]), rt::VS(g::LS[2721]), rt::VS(g::LS[2722]), rt::VS(g::LS[2708]), rt::VS(g::LS[2723]), rt::VS(g::LS[2724]), rt::VS(g::LS[2725]), rt::VS(g::LS[2726]), rt::VS(g::LS[2727]), rt::VS(g::LS[2728]), rt::VS(g::LS[2729]), rt::VS(g::LS[2730]), rt::VS(g::LS[2731]), rt::VS(g::LS[2732]), rt::VS(g::LS[2733]), rt::VS(g::LS[2734]), rt::VS(g::LS[2735]), rt::VS(g::LS[2736]), rt::VS(g::LS[2737]), rt::VS(g::LS[2738]), rt::VS(g::LS[2739]), rt::VS(g::LS[2740]), rt::VS(g::LS[2741]), rt::VS(g::LS[2742]), rt::VS(g::LS[2743]), rt::VS(g::LS[2744]), rt::VS(g::LS[2745]), rt::VS(g::LS[2746]), rt::VS(g::LS[2747]), rt::VS(g::LS[2748]), rt::VS(g::LS[2749]), rt::VS(g::LS[2750]), rt::VS(g::LS[2751]), rt::VS(g::LS[2752]), rt::VS(g::LS[2753]), rt::VS(g::LS[2754]), rt::VS(g::LS[2755]), rt::VS(g::LS[2756]), rt::VS(g::LS[2757]), rt::VS(g::LS[2758]), rt::VS(g::LS[2759]), rt::VS(g::LS[2760]), rt::VS(g::LS[2761]), rt::VS(g::LS[2762]), rt::VS(g::LS[2763]), rt::VS(g::LS[2764]), rt::VS(g::LS[2765]), rt::VS(g::LS[2766]), rt::VS(g::LS[2767]), rt::VS(g::LS[2768]), rt::VS(g::LS[2769]), rt::VS(g::LS[2770]), rt::VS(g::LS[2771]), rt::VS(g::LS[2772]), rt::VS(g::LS[2773]), rt::VS(g::LS[2774])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2775]), rt::arr_lit({rt::VS(g::LS[2776]), rt::VS(g::LS[2777]), rt::VS(g::LS[2778]), rt::VS(g::LS[2779]), rt::VS(g::LS[2780]), rt::VS(g::LS[2781]), rt::VS(g::LS[2782]), rt::VS(g::LS[2783]), rt::VS(g::LS[2784]), rt::VS(g::LS[2785]), rt::VS(g::LS[2786]), rt::VS(g::LS[2787]), rt::VS(g::LS[2788]), rt::VS(g::LS[2789]), rt::VS(g::LS[2790]), rt::VS(g::LS[2791]), rt::VS(g::LS[2792]), rt::VS(g::LS[2793])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2794]), rt::arr_lit({rt::VS(g::LS[2795]), rt::VS(g::LS[2796]), rt::VS(g::LS[2797]), rt::VS(g::LS[2798]), rt::VS(g::LS[2799]), rt::VS(g::LS[2800]), rt::VS(g::LS[2801]), rt::VS(g::LS[2802]), rt::VS(g::LS[2803]), rt::VS(g::LS[2804]), rt::VS(g::LS[2805]), rt::VS(g::LS[2806]), rt::VS(g::LS[2807]), rt::VS(g::LS[2808]), rt::VS(g::LS[2809]), rt::VS(g::LS[2810]), rt::VS(g::LS[2811]), rt::VS(g::LS[2812]), rt::VS(g::LS[2813]), rt::VS(g::LS[2814]), rt::VS(g::LS[2815]), rt::VS(g::LS[2816]), rt::VS(g::LS[2817]), rt::VS(g::LS[2818]), rt::VS(g::LS[2819]), rt::VS(g::LS[2820]), rt::VS(g::LS[2821]), rt::VS(g::LS[2822]), rt::VS(g::LS[2622]), rt::VS(g::LS[2823]), rt::VS(g::LS[2824]), rt::VS(g::LS[2825]), rt::VS(g::LS[2826]), rt::VS(g::LS[2827]), rt::VS(g::LS[2828]), rt::VS(g::LS[2829]), rt::VS(g::LS[2830]), rt::VS(g::LS[2831]), rt::VS(g::LS[2832]), rt::VS(g::LS[2833]), rt::VS(g::LS[2834]), rt::VS(g::LS[2835]), rt::VS(g::LS[2836]), rt::VS(g::LS[2837]), rt::VS(g::LS[2838]), rt::VS(g::LS[2839]), rt::VS(g::LS[2840]), rt::VS(g::LS[2735]), rt::VS(g::LS[2841]), rt::VS(g::LS[2842]), rt::VS(g::LS[2843]), rt::VS(g::LS[2844]), rt::VS(g::LS[2845]), rt::VS(g::LS[2846]), rt::VS(g::LS[2847]), rt::VS(g::LS[2848]), rt::VS(g::LS[2849]), rt::VS(g::LS[2850]), rt::VS(g::LS[2851]), rt::VS(g::LS[2852]), rt::VS(g::LS[2853]), rt::VS(g::LS[2854]), rt::VS(g::LS[2855]), rt::VS(g::LS[2856]), rt::VS(g::LS[2857]), rt::VS(g::LS[2858]), rt::VS(g::LS[2859]), rt::VS(g::LS[2860]), rt::VS(g::LS[2861]), rt::VS(g::LS[2862]), rt::VS(g::LS[2863]), rt::VS(g::LS[2864]), rt::VS(g::LS[2865]), rt::VS(g::LS[2866]), rt::VS(g::LS[2867]), rt::VS(g::LS[2868]), rt::VS(g::LS[2869]), rt::VS(g::LS[2870]), rt::VS(g::LS[2871]), rt::VS(g::LS[2872]), rt::VS(g::LS[2873]), rt::VS(g::LS[2874]), rt::VS(g::LS[2875]), rt::VS(g::LS[2876]), rt::VS(g::LS[2877]), rt::VS(g::LS[2878]), rt::VS(g::LS[2879]), rt::VS(g::LS[2880]), rt::VS(g::LS[2881]), rt::VS(g::LS[2882]), rt::VS(g::LS[2551]), rt::VS(g::LS[2883]), rt::VS(g::LS[2884]), rt::VS(g::LS[2885]), rt::VS(g::LS[2886]), rt::VS(g::LS[2887]), rt::VS(g::LS[2888]), rt::VS(g::LS[2889]), rt::VS(g::LS[2890]), rt::VS(g::LS[2891]), rt::VS(g::LS[2892]), rt::VS(g::LS[2893]), rt::VS(g::LS[2894]), rt::VS(g::LS[2895]), rt::VS(g::LS[2896]), rt::VS(g::LS[2897]), rt::VS(g::LS[2898]), rt::VS(g::LS[2899]), rt::VS(g::LS[2900]), rt::VS(g::LS[2901]), rt::VS(g::LS[2902]), rt::VS(g::LS[2903]), rt::VS(g::LS[2904]), rt::VS(g::LS[2905]), rt::VS(g::LS[2906]), rt::VS(g::LS[2907]), rt::VS(g::LS[2908]), rt::VS(g::LS[2909]), rt::VS(g::LS[2910]), rt::VS(g::LS[2911]), rt::VS(g::LS[2912]), rt::VS(g::LS[2913]), rt::VS(g::LS[2914]), rt::VS(g::LS[2915]), rt::VS(g::LS[2916]), rt::VS(g::LS[2917]), rt::VS(g::LS[2918]), rt::VS(g::LS[2919]), rt::VS(g::LS[2920]), rt::VS(g::LS[2921])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2922]), rt::arr_lit({rt::VS(g::LS[2923])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2924]), rt::arr_lit({rt::VS(g::LS[2925]), rt::VS(g::LS[2926]), rt::VS(g::LS[2927]), rt::VS(g::LS[2928]), rt::VS(g::LS[2929]), rt::VS(g::LS[2930]), rt::VS(g::LS[2931]), rt::VS(g::LS[2932]), rt::VS(g::LS[2933]), rt::VS(g::LS[2934]), rt::VS(g::LS[2935]), rt::VS(g::LS[2936]), rt::VS(g::LS[2937]), rt::VS(g::LS[2938]), rt::VS(g::LS[2939]), rt::VS(g::LS[2940]), rt::VS(g::LS[2941]), rt::VS(g::LS[2942]), rt::VS(g::LS[2943]), rt::VS(g::LS[2944]), rt::VS(g::LS[2945]), rt::VS(g::LS[2946]), rt::VS(g::LS[2947]), rt::VS(g::LS[2948]), rt::VS(g::LS[2949]), rt::VS(g::LS[2950]), rt::VS(g::LS[2951]), rt::VS(g::LS[2952]), rt::VS(g::LS[2953]), rt::VS(g::LS[2954]), rt::VS(g::LS[2955]), rt::VS(g::LS[2956]), rt::VS(g::LS[2957]), rt::VS(g::LS[2958]), rt::VS(g::LS[2959]), rt::VS(g::LS[2960]), rt::VS(g::LS[2961]), rt::VS(g::LS[2962]), rt::VS(g::LS[2963]), rt::VS(g::LS[2964]), rt::VS(g::LS[2965]), rt::VS(g::LS[2966]), rt::VS(g::LS[2967]), rt::VS(g::LS[2968]), rt::VS(g::LS[2969])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[2970]), rt::arr_lit({rt::VS(g::LS[2971]), rt::VS(g::LS[2972]), rt::VS(g::LS[2973]), rt::VS(g::LS[2974]), rt::VS(g::LS[2975]), rt::VS(g::LS[2976]), rt::VS(g::LS[2977]), rt::VS(g::LS[2978]), rt::VS(g::LS[2979]), rt::VS(g::LS[2980]), rt::VS(g::LS[2981]), rt::VS(g::LS[2982]), rt::VS(g::LS[2983]), rt::VS(g::LS[2984]), rt::VS(g::LS[2985]), rt::VS(g::LS[2986]), rt::VS(g::LS[2987]), rt::VS(g::LS[2988]), rt::VS(g::LS[2989]), rt::VS(g::LS[2990]), rt::VS(g::LS[2991]), rt::VS(g::LS[2992]), rt::VS(g::LS[2993]), rt::VS(g::LS[2994]), rt::VS(g::LS[2995]), rt::VS(g::LS[2996]), rt::VS(g::LS[2997]), rt::VS(g::LS[2998]), rt::VS(g::LS[2999]), rt::VS(g::LS[3000]), rt::VS(g::LS[3001]), rt::VS(g::LS[2936]), rt::VS(g::LS[3002]), rt::VS(g::LS[3003]), rt::VS(g::LS[3004]), rt::VS(g::LS[3005]), rt::VS(g::LS[3006]), rt::VS(g::LS[3007]), rt::VS(g::LS[3008]), rt::VS(g::LS[3009]), rt::VS(g::LS[2105]), rt::VS(g::LS[3010]), rt::VS(g::LS[3011]), rt::VS(g::LS[3012]), rt::VS(g::LS[3013]), rt::VS(g::LS[3014]), rt::VS(g::LS[3015]), rt::VS(g::LS[3016]), rt::VS(g::LS[3017]), rt::VS(g::LS[3018]), rt::VS(g::LS[3019]), rt::VS(g::LS[3020]), rt::VS(g::LS[3021]), rt::VS(g::LS[3022])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[3023]), rt::arr_lit({rt::VS(g::LS[3024])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[3025]), rt::arr_lit({rt::VS(g::LS[3026]), rt::VS(g::LS[3027]), rt::VS(g::LS[3028]), rt::VS(g::LS[3029]), rt::VS(g::LS[3030])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[3031]), rt::arr_lit({rt::VS(g::LS[3032]), rt::VS(g::LS[3033]), rt::VS(g::LS[3034]), rt::VS(g::LS[3035]), rt::VS(g::LS[3036]), rt::VS(g::LS[3037]), rt::VS(g::LS[3038]), rt::VS(g::LS[3039]), rt::VS(g::LS[3040]), rt::VS(g::LS[3041]), rt::VS(g::LS[3042]), rt::VS(g::LS[3043]), rt::VS(g::LS[3044]), rt::VS(g::LS[2929]), rt::VS(g::LS[3045]), rt::VS(g::LS[3046]), rt::VS(g::LS[3047]), rt::VS(g::LS[3048]), rt::VS(g::LS[3049]), rt::VS(g::LS[3050]), rt::VS(g::LS[3051]), rt::VS(g::LS[3052]), rt::VS(g::LS[3053]), rt::VS(g::LS[3054]), rt::VS(g::LS[3055]), rt::VS(g::LS[3056]), rt::VS(g::LS[2978]), rt::VS(g::LS[3057]), rt::VS(g::LS[3058]), rt::VS(g::LS[3059]), rt::VS(g::LS[3060]), rt::VS(g::LS[3061]), rt::VS(g::LS[3062]), rt::VS(g::LS[3063]), rt::VS(g::LS[3064]), rt::VS(g::LS[3065]), rt::VS(g::LS[3066]), rt::VS(g::LS[3067]), rt::VS(g::LS[3068])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[3069]), rt::arr_lit({rt::VS(g::LS[3070]), rt::VS(g::LS[3071]), rt::VS(g::LS[3072]), rt::VS(g::LS[3073]), rt::VS(g::LS[3074]), rt::VS(g::LS[3075]), rt::VS(g::LS[3076]), rt::VS(g::LS[3077]), rt::VS(g::LS[3078]), rt::VS(g::LS[3079]), rt::VS(g::LS[3080]), rt::VS(g::LS[3081]), rt::VS(g::LS[3082]), rt::VS(g::LS[3083]), rt::VS(g::LS[3084]), rt::VS(g::LS[3085]), rt::VS(g::LS[2986]), rt::VS(g::LS[3086]), rt::VS(g::LS[3087]), rt::VS(g::LS[3088]), rt::VS(g::LS[3089]), rt::VS(g::LS[3090]), rt::VS(g::LS[3091])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[3092]), rt::arr_lit({rt::VS(g::LS[3093]), rt::VS(g::LS[3094]), rt::VS(g::LS[3095]), rt::VS(g::LS[3096]), rt::VS(g::LS[3097]), rt::VS(g::LS[3098]), rt::VS(g::LS[3099]), rt::VS(g::LS[3100])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[3101]), rt::arr_lit({rt::VS(g::LS[3102]), rt::VS(g::LS[3103]), rt::VS(g::LS[3104]), rt::VS(g::LS[3105]), rt::VS(g::LS[3106]), rt::VS(g::LS[3107]), rt::VS(g::LS[3108]), rt::VS(g::LS[3109]), rt::VS(g::LS[3110]), rt::VS(g::LS[3111]), rt::VS(g::LS[3112]), rt::VS(g::LS[3113]), rt::VS(g::LS[3114]), rt::VS(g::LS[3115])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[3116]), rt::arr_lit({rt::VS(g::LS[3117]), rt::VS(g::LS[3118]), rt::VS(g::LS[3119])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[3120]), rt::arr_lit({rt::VS(g::LS[3121]), rt::VS(g::LS[3122]), rt::VS(g::LS[3123]), rt::VS(g::LS[3124]), rt::VS(g::LS[3125]), rt::VS(g::LS[3126]), rt::VS(g::LS[3127]), rt::VS(g::LS[3128]), rt::VS(g::LS[3129]), rt::VS(g::LS[3130])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[3131]), rt::arr_lit({rt::VS(g::LS[3132]), rt::VS(g::LS[3133]), rt::VS(g::LS[3134]), rt::VS(g::LS[3135]), rt::VS(g::LS[3136]), rt::VS(g::LS[3137]), rt::VS(g::LS[3138]), rt::VS(g::LS[3139]), rt::VS(g::LS[3140]), rt::VS(g::LS[3141])})));
    (void)(C_S__26_f::sm_S_7e(rt::VS(g::LS[3142]), rt::arr_lit({rt::VS(g::LS[3143]), rt::VS(g::LS[3144]), rt::VS(g::LS[3145]), rt::VS(g::LS[3146]), rt::VS(g::LS[3147]), rt::VS(g::LS[3148]), rt::VS(g::LS[3149]), rt::VS(g::LS[3150]), rt::VS(g::LS[3151]), rt::VS(g::LS[3152]), rt::VS(g::LS[3153]), rt::VS(g::LS[3154]), rt::VS(g::LS[3155]), rt::VS(g::LS[3156]), rt::VS(g::LS[3157]), rt::VS(g::LS[3158]), rt::VS(g::LS[3159]), rt::VS(g::LS[3160]), rt::VS(g::LS[3161]), rt::VS(g::LS[3162]), rt::VS(g::LS[3163]), rt::VS(g::LS[3061]), rt::VS(g::LS[3164]), rt::VS(g::LS[3165]), rt::VS(g::LS[3166]), rt::VS(g::LS[3167]), rt::VS(g::LS[3168]), rt::VS(g::LS[3169]), rt::VS(g::LS[3170]), rt::VS(g::LS[3171]), rt::VS(g::LS[3172]), rt::VS(g::LS[3173]), rt::VS(g::LS[3174]), rt::VS(g::LS[3175]), rt::VS(g::LS[3176]), rt::VS(g::LS[3177]), rt::VS(g::LS[3178]), rt::VS(g::LS[3179]), rt::VS(g::LS[3180]), rt::VS(g::LS[3181]), rt::VS(g::LS[3182]), rt::VS(g::LS[3183]), rt::VS(g::LS[3184]), rt::VS(g::LS[3185]), rt::VS(g::LS[3186]), rt::VS(g::LS[3187]), rt::VS(g::LS[3188]), rt::VS(g::LS[3189]), rt::VS(g::LS[3190]), rt::VS(g::LS[3191]), rt::VS(g::LS[3192]), rt::VS(g::LS[3193]), rt::VS(g::LS[3194]), rt::VS(g::LS[3195]), rt::VS(g::LS[3196]), rt::VS(g::LS[3197]), rt::VS(g::LS[3198]), rt::VS(g::LS[3199]), rt::VS(g::LS[3200]), rt::VS(g::LS[3201]), rt::VS(g::LS[3202]), rt::VS(g::LS[3203]), rt::VS(g::LS[3204]), rt::VS(g::LS[3205]), rt::VS(g::LS[3206]), rt::VS(g::LS[3207]), rt::VS(g::LS[3208]), rt::VS(g::LS[3209]), rt::VS(g::LS[3210]), rt::VS(g::LS[3211]), rt::VS(g::LS[3212]), rt::VS(g::LS[3213]), rt::VS(g::LS[3214]), rt::VS(g::LS[3215]), rt::VS(g::LS[3216]), rt::VS(g::LS[3217]), rt::VS(g::LS[3218]), rt::VS(g::LS[3219]), rt::VS(g::LS[3220]), rt::VS(g::LS[3221]), rt::VS(g::LS[3222]), rt::VS(g::LS[3223]), rt::VS(g::LS[3224]), rt::VS(g::LS[3225]), rt::VS(g::LS[3226]), rt::VS(g::LS[3227]), rt::VS(g::LS[3228]), rt::VS(g::LS[3229]), rt::VS(g::LS[3230]), rt::VS(g::LS[3231]), rt::VS(g::LS[3232]), rt::VS(g::LS[3233]), rt::VS(g::LS[3234]), rt::VS(g::LS[3235]), rt::VS(g::LS[3236]), rt::VS(g::LS[3237]), rt::VS(g::LS[3238]), rt::VS(g::LS[3239]), rt::VS(g::LS[3240]), rt::VS(g::LS[3241]), rt::VS(g::LS[3242]), rt::VS(g::LS[3243]), rt::VS(g::LS[3244]), rt::VS(g::LS[3245]), rt::VS(g::LS[3246]), rt::VS(g::LS[3247]), rt::VS(g::LS[3248]), rt::VS(g::LS[3249]), rt::VS(g::LS[3250]), rt::VS(g::LS[3251]), rt::VS(g::LS[3252]), rt::VS(g::LS[3253]), rt::VS(g::LS[3254]), rt::VS(g::LS[3255]), rt::VS(g::LS[3256]), rt::VS(g::LS[3257]), rt::VS(g::LS[3258]), rt::VS(g::LS[3259]), rt::VS(g::LS[3260]), rt::VS(g::LS[3261])})));
    if ((rt::alen(rt::dget(rt::VO(rt::STUBCLASS), NM_os)) > 0.0)) {
        (g::SV.C_S__26_f__S_5_21__25_ = rt::touint(rt::dcallv(rt::dget(rt::VO(rt::STUBCLASS), NM_os), rt::N_charCodeAt, rt::V((rt::alen(rt::dget(rt::VO(rt::STUBCLASS), NM_os)) - 1.0)))));
    }
    (g::SV.C_S__26_f__S__26_J = rt::new_stubinst());
    ({ rt::Value _v10776 = rt::V((g::SV.C_S__20_g__S__22_g ? 600.0 : 570.0)); rt::dset(g::SV.C_S__26_f__S__26_J, NM_width, _v10776); _v10776; });
    ({ rt::Value _v10778 = ({ rt::Value _v10777 = rt::VS(g::LS[3262]); rt::dset(g::SV.C_S__26_f__S__26_J, NM_verticalScrollPolicy, _v10777); _v10777; }); rt::dset(g::SV.C_S__26_f__S__26_J, NM_horizontalScrollPolicy, _v10778); _v10778; });
    (l_A__loc14_ = rt::new_stubinst());
    ({ rt::Value _v10779 = rt::VS(g::LS[1310]); rt::dset(l_A__loc14_, NM_horizontalAlign, _v10779); _v10779; });
    ({ rt::Value _v10780 = rt::V(5.0); rt::dset(l_A__loc14_, NM_gap, _v10780); _v10780; });
    ({ rt::Value _v10781 = l_A__loc14_; rt::dset(g::SV.C_S__26_f__S__26_J, NM_layout, _v10781); _v10781; });
    (l_A__loc17_ = rt::new_stubinst());
    (l_A__loc6_ = rt::new_stubinst());
    ({ rt::Value _v10782 = rt::V(10.0); rt::dset(l_A__loc6_, NM_gap, _v10782); _v10782; });
    ({ rt::Value _v10783 = l_A__loc6_; rt::dset(l_A__loc17_, NM_layout, _v10783); _v10783; });
    (void)(rt::dcallv(g::SV.C_S__26_f__S__26_J, NM_addChild, l_A__loc17_));
    (g::SV.C_S__26_f__S__60__23_ = rt::new_stubinst());
    (void)(rt::dcallv(g::SV.C_S__26_f__S__26_J, NM_addChild, g::SV.C_S__26_f__S__60__23_));
    (l_A__loc11_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc15_ = rt::NUL);
    (l_A__loc9_ = rt::toint_d((-1.0)));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < rt::alen(g::SV.C_S__26_f__S__27__21__5e_))) {
        (l_A__loc8_ = rt::slot_string(rt::dcallv(rt::arr_at(g::SV.C_S__26_f__S__27__21__5e_, ((double)(l_A__loc3_))), rt::N_substr, rt::V(0.0), rt::V(3.0))));
        if ((!rt::eq(l_A__loc8_, l_A__loc11_))) {
            (l_A__loc9_ = rt::toint_d((((double)(l_A__loc9_)) + 1.0)));
            (l_A__loc11_ = rt::slot_string(l_A__loc8_));
            if ((!rt::eq(l_A__loc15_, rt::NUL))) {
                ({ rt::Value _v10784 = rt::dcallv(rt::dget(l_A__loc15_, NM_text), rt::N_substring, rt::V(2.0)); rt::dset(l_A__loc15_, NM_text, _v10784); _v10784; });
            }
            (l_A__loc12_ = rt::new_stubinst());
            ({ rt::Value _v10786 = ({ rt::Value _v10785 = rt::V(35.0); rt::dset(l_A__loc12_, NM_height, _v10785); _v10785; }); rt::dset(l_A__loc12_, NM_width, _v10786); _v10786; });
            ({ rt::Value _v10787 = rt::V(3.0); rt::dset(l_A__loc12_, NM_labelOffsetY, _v10787); _v10787; });
            ({ rt::Value _v10788 = rt::VB(true); rt::dset(l_A__loc12_, NM_useHandCursor, _v10788); _v10788; });
            ({ rt::Value _v10789 = rt::new_stubinst(); rt::dset(rt::dget(l_A__loc12_, NM_defaultLabelProperties), NM_elementFormat, _v10789); _v10789; });
            (l_A__loc10_ = rt::new_stubinst());
            ({ rt::Value _v10790 = g::SV.C_S_99__S__26_E; rt::dset(l_A__loc10_, NM_defaultValue, _v10790); _v10790; });
            (void)(rt::dcallv(l_A__loc10_, NM_setValueForState, g::SV.C_S_99__S_5_21_4, rt::VS(g::LS[1434]), rt::VB(false)));
            (void)(rt::dcallv(l_A__loc10_, NM_setValueForState, g::SV.C_S_99__S_8x, rt::VS(g::LS[1282]), rt::VB(false)));
            ({ rt::Value _v10791 = rt::dict_lit({{rt::VS(g::LS[3263]), rt::V(60.0)}, {rt::VS(g::LS[1325]), rt::V(50.0)}}); rt::dset(l_A__loc10_, NM_displayObjectProperties, _v10791); _v10791; });
            ({ rt::Value _v10792 = rt::dget(l_A__loc10_, NM_updateValue); rt::dset(l_A__loc12_, NM_stateToSkinFunction, _v10792); _v10792; });
            ({ rt::Value _v10793 = l_A__loc8_; rt::dset(l_A__loc12_, NM_label, _v10793); _v10793; });
            (void)(rt::dcallv(l_A__loc12_, NM_addEventListener, rt::VS(g::LS[1322]), rt::dget(rt::VO(C_S__26_f::CI.ref), NM_S__22_p)));
            (void)(rt::dcallv(l_A__loc17_, NM_addChild, l_A__loc12_));
            (void)(rt::dcallv(g::SV.C_S__26_f__S_7_21_7, rt::N_push, l_A__loc12_));
            (l_A__loc15_ = rt::new_stubinst());
            ({ rt::Value _v10794 = rt::new_stubinst(); rt::dset(l_A__loc15_, NM_textFormat, _v10794); _v10794; });
            ({ rt::Value _v10795 = rt::V(550.0); rt::dset(l_A__loc15_, NM_width, _v10795); _v10795; });
            ({ rt::Value _v10796 = rt::V(400.0); rt::dset(l_A__loc15_, NM_height, _v10796); _v10796; });
            ({ rt::Value _v10797 = rt::VS(g::LS[3262]); rt::dset(l_A__loc15_, NM_horizontalScrollPolicy, _v10797); _v10797; });
            ({ rt::Value _v10798 = rt::VS(g::LS[3265]); rt::dset(l_A__loc15_, NM_verticalScrollPolicy, _v10798); _v10798; });
            ({ rt::Value _v10799 = rt::VS(g::LS[3266]); rt::dset(l_A__loc15_, NM_scrollBarDisplayMode, _v10799); _v10799; });
            if (g::SV.C_S__20_g__S__22_g) {
                ({ rt::Value _v10800 = rt::VS(g::LS[3267]); rt::dset(l_A__loc15_, NM_interactionMode, _v10800); _v10800; });
                ({ rt::Value _v10801 = rt::V(0.0); rt::dset(l_A__loc15_, NM_verticalScrollStep, _v10801); _v10801; });
                ({ rt::Value _v10802 = rt::V(50.0); rt::dset(l_A__loc15_, NM_verticalMouseWheelScrollStep, _v10802); _v10802; });
            }
            ({ rt::Value _v10803 = rt::dget(rt::VO(C_S__3d__21_4::CI.ref), NM_S__22__21_4); rt::dset(l_A__loc15_, NM_verticalScrollBarFactory, _v10803); _v10803; });
            if ((((double)(l_A__loc3_)) == 0.0)) {
                (void)(rt::dcallv(g::SV.C_S__26_f__S__60__23_, NM_addChild, l_A__loc15_));
            }
            (void)(rt::dcallv(g::SV.C_S__26_f__S__3b_f, rt::N_push, l_A__loc15_));
        }
        (l_A__loc1_ = rt::slot_string((l_A__loc4_ = rt::slot_string(rt::add(rt::VS(g::LS[8]), rt::arr_at(g::SV.C_S__26_f__S__27__21__5e_, ((double)(l_A__loc3_))))))));
        (l_A__loc7_ = false);
        (l_A__loc16_ = true);
        (l_A__loc5_ = rt::toint_d(0.0));
        {
            for (; (((double)(l_A__loc5_)) < rt::alen(rt::arr_at(g::SV.C_S__26_f__S_9_21_Z, ((double)(l_A__loc3_))))); ({ (l_A__loc5_ = rt::toint_d((((double)(l_A__loc5_)) + 1.0))); })) {
                (l_A__loc13_ = rt::slot_string(rt::arr_at(rt::arr_at(g::SV.C_S__26_f__S_9_21_Z, ((double)(l_A__loc3_))), ((double)(l_A__loc5_)))));
                if (rt::eq(l_A__loc13_, rt::VS(g::LS[2042]))) {
                    if ((!l_A__loc16_)) {
                        continue;
                    }
                    (l_A__loc16_ = false);
                    (l_A__loc19_ = rt::slot_string(rt::arr_at(g::SV.C_S__2d_D__S__23__21_E, rt::m_min2(rt::m_max2(0.0, ((double)(C_PlayFab::sg_seasonNE()))), 11.0))));
                    (l_A__loc2_ = rt::V((double)(((uint32_t)(C_PlayFab::sg_seasonNES())))));
                    (l_A__loc18_ = rt::V((double)(((uint32_t)(C_PlayFab::sg_seasonNEE())))));
                    if (((({ bool _t10805 = ({ bool _t10804 = rt::eq(l_A__loc19_, rt::VS(g::LS[113])); _t10804 ? _t10804 : (bool)(rt::eq(l_A__loc2_, rt::V(0.0))); }); _t10805 ? _t10805 : (bool)(rt::eq(l_A__loc18_, rt::V(0.0))); })) && rt::T(rt::dcallv(rt::dget(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_data), rt::N_hasOwnProperty, rt::VS(g::LS[2019]))))) {
                        (l_A__loc19_ = rt::slot_string(rt::arr_at(g::SV.C_S__2d_D__S__23__21_E, rt::m_min2(rt::m_max2(0.0, rt::tonum(rt::idx_get(rt::dget(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_data), rt::VS(g::LS[2019])))), 11.0))));
                        (l_A__loc2_ = rt::V((double)(rt::touint(rt::idx_get(rt::dget(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_data), rt::VS(g::LS[2020]))))));
                        (l_A__loc18_ = rt::V((double)(rt::touint(rt::idx_get(rt::dget(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_data), rt::VS(g::LS[2021]))))));
                    }
                    if ((({ bool _t10807 = ({ bool _t10806 = rt::eq(l_A__loc19_, rt::VS(g::LS[113])); _t10806 ? _t10806 : (bool)(rt::eq(l_A__loc2_, rt::V(0.0))); }); _t10807 ? _t10807 : (bool)(rt::eq(l_A__loc18_, rt::V(0.0))); }) || rt::lt(l_A__loc18_, rt::V((double)(C_S__26_c::sm_S__22_E()))))) {
                        continue;
                    }
                    (l_A__loc13_ = rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[3268]), l_A__loc19_), rt::VS(g::LS[3269])), C_S__26_c::sm_S_3_21_K(rt::touint(l_A__loc2_))), rt::VS(g::LS[3270])), C_S__26_c::sm_S_3_21_K(rt::touint(l_A__loc18_))), rt::VS(g::LS[155]))));
                }
                if ((!(rt::ge(rt::dcallv(l_A__loc13_, rt::N_indexOf, rt::VS(g::LS[3271])), rt::V(0.0)) && (!g::SV.C_S__20_g__S__22_g)))) {
                    if ((!(rt::ge(rt::dcallv(l_A__loc13_, rt::N_indexOf, rt::VS(g::LS[3272])), rt::V(0.0)) && g::SV.C_S__20_g__S__22_g))) {
                        (l_A__loc13_ = rt::slot_string(rt::dcallv(rt::dcallv(l_A__loc13_, rt::N_replace, rt::VS(g::LS[3271]), rt::VS(g::LS[113])), rt::N_replace, rt::VS(g::LS[3272]), rt::VS(g::LS[113]))));
                        if (rt::eq(rt::dcallv(l_A__loc13_, rt::N_substring, rt::V(0.0), rt::V(1.0)), rt::VS(g::LS[3273]))) {
                            (l_A__loc4_ = rt::slot_string(rt::add(l_A__loc4_, rt::VS(g::LS[3274]))));
                        } else {
                            (l_A__loc4_ = rt::slot_string(rt::add(l_A__loc4_, rt::VS(g::LS[3275]))));
                        }
                        (l_A__loc4_ = rt::slot_string(rt::add(l_A__loc4_, l_A__loc13_)));
                        if ((((double)(l_A__loc5_)) < 20.0)) {
                            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[3275]), l_A__loc13_))));
                        }
                        if ((((double)(l_A__loc5_)) >= 20.0)) {
                            (l_A__loc7_ = true);
                        }
                    }
                }
            }
        }
        if ((((double)(l_A__loc3_)) == 0.0)) {
            (g::SV.C_S__26_f__S_4O = rt::slot_string(rt::arr_at(g::SV.C_S__26_f__S__27__21__5e_, ((double)(l_A__loc3_)))));
            (g::SV.C_S__26_f__S_0_21__3f_ = rt::slot_string(rt::dcallv(l_A__loc1_, rt::N_substring, rt::V(2.0))));
            if (l_A__loc7_) {
                (g::SV.C_S__26_f__S_0_21__3f_ = rt::slot_string(rt::add(g::SV.C_S__26_f__S_0_21__3f_, rt::trv(rt::VS(g::LS[3276])))));
            }
        }
        ({ rt::Value _o10809 = l_A__loc15_; rt::Value _v10808 = rt::add(rt::dget(_o10809, NM_text), l_A__loc4_); rt::dset(_o10809, NM_text, _v10808); _v10808; });
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    ({ rt::Value _v10810 = rt::dcallv(rt::dget(l_A__loc15_, NM_text), rt::N_substring, rt::V(2.0)); rt::dset(l_A__loc15_, NM_text, _v10810); _v10810; });
    return rt::NUL;
}
rt::Value C_S__26_f::sm_S__22_p(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__26_f.S__22_p");
    (void)(rt::dcallv(g::SV.C_S__26_f__S__60__23_, NM_removeChild, rt::arr_at(g::SV.C_S__26_f__S__3b_f, ((double)(g::SV.C_S__26_f__S__3f__25_)))));
    (g::SV.C_S__26_f__S__3f__25_ = rt::toint(rt::dcallv(g::SV.C_S__26_f__S_7_21_7, rt::N_indexOf, ({ rt::Value _t10811 = rt::dget(l_param1, NM_currentTarget); rt::is_stubtype(_t10811) ? _t10811 : rt::NUL; }))));
    (void)(rt::dcallv(g::SV.C_S__26_f__S__60__23_, NM_addChild, rt::arr_at(g::SV.C_S__26_f__S__3b_f, ((double)(g::SV.C_S__26_f__S__3f__25_)))));
    return rt::NUL;
}
rt::Value C_S__26_f::sm_S__20__21__2b_() {
    RT_FN("S__26_f.S__20__21__2b_");
    (void)(({ rt::Value _o10812 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p10813 = rt::as_ptr<C_S__20_g>(_o10812); _p10813 ? _p10813->m_S__2d__25_(rt::trv(rt::VS(g::LS[3277])), rt::VS(g::LS[113]), rt::NUL, rt::NUL, g::SV.C_S__26_f__S__26_J, true, false, rt::VS(g::LS[113]), rt::dget(rt::VO(C_S__26_f::CI.ref), NM_S_2w), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o10812, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3277])), rt::VS(g::LS[113]), rt::NUL, rt::NUL, g::SV.C_S__26_f__S__26_J, rt::VB(true), rt::VB(false), rt::VS(g::LS[113]), rt::dget(rt::VO(C_S__26_f::CI.ref), NM_S_2w)); }));
    (g::SV.C_S__26_f__S__3b__21_N = true);
    return rt::NUL;
}
rt::Value C_S__26_f::sm_S_2w() {
    RT_FN("S__26_f.S_2w");
    (g::SV.C_S__26_f__S__3b__21_N = false);
    (g::SV.C_S_8G__S_5_21__20_ = 0.0);
    return rt::NUL;
}
rt::Value C_S__26_f::sm_S_7e(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = p1;
    RT_FN("S__26_f.S_7e");
    if ((({ bool _t10814 = (rt::alen(l_param1) >= 5.0); _t10814 ? (bool)(rt::eq(rt::dcallv(l_param1, rt::N_substr, rt::V(0.0), rt::V(5.0)), rt::VS(g::LS[3271]))) : _t10814; }) && (!g::SV.C_S__20_g__S__22_g))) {
        return rt::NUL;
    }
    if ((({ bool _t10815 = (rt::alen(l_param1) >= 8.0); _t10815 ? (bool)(rt::eq(rt::dcallv(l_param1, rt::N_substr, rt::V(0.0), rt::V(8.0)), rt::VS(g::LS[3272]))) : _t10815; }) && g::SV.C_S__20_g__S__22_g)) {
        return rt::NUL;
    }
    (l_param1 = rt::slot_string(rt::dcallv(rt::dcallv(l_param1, rt::N_replace, rt::VS(g::LS[3271]), rt::VS(g::LS[113])), rt::N_replace, rt::VS(g::LS[3272]), rt::VS(g::LS[113]))));
    if ((rt::eq(rt::dcallv(l_param1, rt::N_substr, rt::V(0.0), rt::V(1.0)), rt::VS(g::LS[1391])) && (!g::SV.C_S__20_g__S__22_g))) {
        return rt::NUL;
    }
    (void)(rt::dcallv(g::SV.C_S__26_f__S__27__21__5e_, rt::N_push, l_param1));
    (void)(rt::dcallv(g::SV.C_S__26_f__S_9_21_Z, rt::N_push, l_param2));
    return rt::NUL;
}
C_S__26_f* C_S__26_f::alloc_() {
    C_S__26_f* o = rt::make<C_S__26_f>();
    return o;
}
rt::Value C_S__26_f::mk_(rt::Value* a, int n) {
    C_S__26_f* o = alloc_();
    o->C_S__26_f::ctor_();
    return rt::VO(o);
}
bool C_S__26_f::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__26_f::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__26_f::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__26_f::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__26_f::smeth_(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__22_p: return true;
    case NM_S__20__21__2b_: return true;
    case NM_S_2w: return true;
    case NM_S_7e: return true;
    default: return false;
    }
}
bool C_S__26_f::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__26_n: out = g::SV.C_S__26_f__S__26_n; return true;
    case NM_S_4O: out = g::SV.C_S__26_f__S_4O; return true;
    case NM_S_0_21__3f_: out = g::SV.C_S__26_f__S_0_21__3f_; return true;
    case NM_S_5_21__25_: out = rt::V((double)(g::SV.C_S__26_f__S_5_21__25_)); return true;
    case NM_S__26_J: out = g::SV.C_S__26_f__S__26_J; return true;
    case NM_S__60__23_: out = g::SV.C_S__26_f__S__60__23_; return true;
    case NM_S__3f__25_: out = rt::V((double)(g::SV.C_S__26_f__S__3f__25_)); return true;
    case NM_S__3b__21_N: out = rt::VB(g::SV.C_S__26_f__S__3b__21_N); return true;
    case NM_S__27__21__5e_: out = g::SV.C_S__26_f__S__27__21__5e_; return true;
    case NM_S_9_21_Z: out = g::SV.C_S__26_f__S_9_21_Z; return true;
    case NM_S_7_21_7: out = g::SV.C_S__26_f__S_7_21_7; return true;
    case NM_S__3b_f: out = g::SV.C_S__26_f__S__3b_f; return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22_p: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__20__21__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2w: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_7e: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26_f::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__26_n: g::SV.C_S__26_f__S__26_n = rt::slot_string(v); return true;
    case NM_S_4O: g::SV.C_S__26_f__S_4O = rt::slot_string(v); return true;
    case NM_S_0_21__3f_: g::SV.C_S__26_f__S_0_21__3f_ = rt::slot_string(v); return true;
    case NM_S_5_21__25_: g::SV.C_S__26_f__S_5_21__25_ = rt::touint(v); return true;
    case NM_S__26_J: g::SV.C_S__26_f__S__26_J = v; return true;
    case NM_S__60__23_: g::SV.C_S__26_f__S__60__23_ = v; return true;
    case NM_S__3f__25_: g::SV.C_S__26_f__S__3f__25_ = rt::toint(v); return true;
    case NM_S__3b__21_N: g::SV.C_S__26_f__S__3b__21_N = rt::T(v); return true;
    case NM_S__27__21__5e_: g::SV.C_S__26_f__S__27__21__5e_ = v; return true;
    case NM_S_9_21_Z: g::SV.C_S__26_f__S_9_21_Z = v; return true;
    case NM_S_7_21_7: g::SV.C_S__26_f__S_7_21_7 = v; return true;
    case NM_S__3b_f: g::SV.C_S__26_f__S__3b_f = v; return true;
    default: return false;
    }
}
bool C_S__26_f::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = sm_S__5b__21_C(); return true;
    case NM_S__22_p: out = sm_S__22_p(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__20__21__2b_: out = sm_S__20__21__2b_(); return true;
    case NM_S_2w: out = sm_S_2w(); return true;
    case NM_S_7e: out = sm_S_7e(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF)); return true;
    default: return false;
    }
}
void C_S__21__22__3c_::ctor_() {
    RT_FN("S__21__22__3c_.S__21__22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10816 = 204.0; this->f_S_6_21_Z = rt::touint_d(_v10816); _v10816; });
    ({ rt::Value _v10817 = rt::trv(rt::VS(g::LS[3278])); this->f_S_1i = rt::slot_string(_v10817); _v10817; });
    ({ rt::Value _v10818 = rt::VS(g::LS[3279]); this->f_S__5e__21__23_ = rt::slot_string(_v10818); _v10818; });
    ({ double _v10819 = 50000000.0; this->f_S__3e__3d_ = _v10819; _v10819; });
    ({ double _v10820 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10820); _v10820; });
    ({ double _v10821 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10821); _v10821; });
    ({ double _v10822 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10822); _v10822; });
    ({ bool _v10823 = true; this->f_S__3c__60_ = _v10823; _v10823; });
    ({ double _v10824 = 1.0; this->f_S__21__22_E = rt::touint_d(_v10824); _v10824; });
}
rt::Value C_S__21__22__3c_::m_S__40__22_() {
    RT_FN("S__21__22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3280]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__21__22__3c_::sm_S__2b__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__21__22__3c_::m_S_6r() {
    RT_FN("S__21__22__3c_.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o10825 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p10826 = rt::as_ptr<C_S_8G>(_o10825); _p10826 ? _p10826->m_S_17() : rt::dcallv(_o10825, NM_S_17); }));
    (void)(({ rt::Value _o10827 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p10828 = rt::as_ptr<C_S__20_g>(_o10827); _p10828 ? _p10828->m_S_69() : rt::dcallv(_o10827, NM_S_69); }));
    return rt::NUL;
}
bool C_S__21__22__3c_::g_S__2d_6() {
    RT_FN("S__21__22__3c_.S__2d_6_get");
    return ({ bool _t10829 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 1.0); _t10829 ? _t10829 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5d__22__3f___id)); });
    return false;
}
double C_S__21__22__3c_::sm_S__2b__21_b() {
    RT_FN("S__21__22__3c_.S__2b__21_b");
    return 600.0;
    return 0.0;
}
C_S__21__22__3c_* C_S__21__22__3c_::alloc_() {
    C_S__21__22__3c_* o = rt::make<C_S__21__22__3c_>();
    return o;
}
rt::Value C_S__21__22__3c_::mk_(rt::Value* a, int n) {
    C_S__21__22__3c_* o = alloc_();
    o->C_S__21__22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__21__22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__21__22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__21__22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__21__22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__21__22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S__2b__21_b: return true;
    default: return false;
    }
}
bool C_S__21__22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22__3c___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__21__22__3c___S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__21__22__3c___ids; return true;
    case NM_S__2b__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22__3c___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__21__22__3c___S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__21__22__3c___ids = v; return true;
    default: return false;
    }
}
bool C_S__21__22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_b: out = rt::V(sm_S__2b__21_b()); return true;
    default: return false;
    }
}
void C_S__23__22_B::ctor_() {
    RT_FN("S__23__22_B.S__23__22_B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10830 = 206.0; this->f_S_6_21_Z = rt::touint_d(_v10830); _v10830; });
    ({ rt::Value _v10831 = rt::trv(rt::VS(g::LS[3283])); this->f_S_1i = rt::slot_string(_v10831); _v10831; });
    ({ rt::Value _v10832 = rt::VS(g::LS[3284]); this->f_S__5e__21__23_ = rt::slot_string(_v10832); _v10832; });
    ({ double _v10833 = 50000000000000.0; this->f_S__3e__3d_ = _v10833; _v10833; });
    ({ double _v10834 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10834); _v10834; });
    ({ double _v10835 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10835); _v10835; });
    ({ double _v10836 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10836); _v10836; });
    ({ bool _v10837 = true; this->f_S__3c__60_ = _v10837; _v10837; });
    ({ double _v10838 = 6.0; this->f_S__21__22_E = rt::touint_d(_v10838); _v10838; });
}
rt::Value C_S__23__22_B::m_S__40__22_() {
    RT_FN("S__23__22_B.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3285]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__23__22_B::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__23__22_B::g_S__2d_6() {
    RT_FN("S__23__22_B.S__2d_6_get");
    return ({ bool _t10839 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 2.0); _t10839 ? _t10839 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__60__22_D__id)); });
    return false;
}
double C_S__23__22_B::sm_S_5_21_B() {
    RT_FN("S__23__22_B.S_5_21_B");
    return (0.3 * rt::m_pow(((C_S_8G::sm_S__25_Z(g::SV.C_S_8_21_d__id, C_S_8G::dsm_S__25_Z_1()) + C_S_8G::sm_S__25_Z(g::SV.C_S_2_21__2b___id, C_S_8G::dsm_S__25_Z_1())) + C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, C_S_8G::dsm_S__25_Z_1())), 0.7));
    return 0.0;
}
C_S__23__22_B* C_S__23__22_B::alloc_() {
    C_S__23__22_B* o = rt::make<C_S__23__22_B>();
    return o;
}
rt::Value C_S__23__22_B::mk_(rt::Value* a, int n) {
    C_S__23__22_B* o = alloc_();
    o->C_S__23__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__23__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__22_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__22_B::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    default: return false;
    }
}
bool C_S__23__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__22_B__id)); return true;
    case NM_ids: out = g::SV.C_S__23__22_B__ids; return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__22_B__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__23__22_B__ids = v; return true;
    default: return false;
    }
}
bool C_S__23__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    default: return false;
    }
}
void C_S__25__21_v::ctor_() {
    RT_FN("S__25__21_v.S__25__21_v");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10840 = 869.0; this->f_S_6_21_Z = rt::touint_d(_v10840); _v10840; });
    ({ rt::Value _v10841 = rt::trv(rt::VS(g::LS[3287])); this->f_S_1i = rt::slot_string(_v10841); _v10841; });
    ({ rt::Value _v10842 = rt::VS(g::LS[3288]); this->f_S__5e__21__23_ = rt::slot_string(_v10842); _v10842; });
    ({ double _v10843 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10843); _v10843; });
    ({ double _v10844 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10844); _v10844; });
    ({ double _v10845 = 5.0; this->f_S_9_21_m = rt::toint_d(_v10845); _v10845; });
    ({ double _v10846 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10846); _v10846; });
    ({ bool _v10847 = true; this->f_S__25__21__3e_ = _v10847; _v10847; });
}
int32_t C_S__25__21_v::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__25__21_v::dm_S_75_2() { return false; }
rt::Value C_S__25__21_v::dm_S_75_3() { return rt::NUL; }
double C_S__25__21_v::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S__25__21_v.S_75");
    (l_A__loc5_ = NAN);
    if ((((double)(l_param1)) == 0.0)) {
        return 1e+24;
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__25__21_v::m_S__40__22_() {
    RT_FN("S__25__21_v.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::trv(rt::VS(g::LS[3285]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__25__21_v::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[1798]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[1799]))));
    return rt::NUL;
}
bool C_S__25__21_v::g_S__2d_6() {
    RT_FN("S__25__21_v.S__2d_6_get");
    return ({ bool _t10851 = C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[3289]))); _t10851 ? (bool)((({ bool _t10850 = this->f_S__3f__21_6; _t10850 ? _t10850 : (bool)((({ rt::Value _o10848 = C_S_8G::sm_S__23_N(g::SV.C_S__27_K__id); C_S_84* _p10849 = rt::as_ptr<C_S_84>(_o10848); _p10849 ? _p10849->g_S__3f_j() : rt::tonum(rt::dget(_o10848, NM_S__3f_j)); }) >= 3600.0)); }))) : _t10851; });
    return false;
}
double C_S__25__21_v::sm_S_5_21_B() {
    RT_FN("S__25__21_v.S_5_21_B");
    return ((rt::m_floor((2.0 * rt::m_pow(((C_S_8G::sm_S__25_Z(g::SV.C_S_8_21_d__id, C_S_8G::dsm_S__25_Z_1()) + C_S_8G::sm_S__25_Z(g::SV.C_S_2_21__2b___id, C_S_8G::dsm_S__25_Z_1())) + C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, C_S_8G::dsm_S__25_Z_1())), 0.8))) * C_S__26_c::sm_S__40__22__27_(g::SV.C_S_1_21_M__id, rt::toint_d(0.0))) * ((1.0 + (0.01 * C_S_1_21_v::sm_S__2c__21_G(((int32_t)(g::SV.C_S__25__21_v__id)))))));
    return 0.0;
}
C_S__25__21_v* C_S__25__21_v::alloc_() {
    C_S__25__21_v* o = rt::make<C_S__25__21_v>();
    return o;
}
rt::Value C_S__25__21_v::mk_(rt::Value* a, int n) {
    C_S__25__21_v* o = alloc_();
    o->C_S__25__21_v::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__21_v::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__21_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__25__21_v::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__25__21_v::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__25__21_v::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__21_v::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__21_v::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    default: return false;
    }
}
bool C_S__25__21_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_v__id)); return true;
    case NM_S_0_22_K: out = rt::V(g::SV.C_S__25__21_v__S_0_22_K); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__21_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_v__id = rt::touint(v); return true;
    case NM_S_0_22_K: g::SV.C_S__25__21_v__S_0_22_K = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__25__21_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    default: return false;
    }
}
void C_S__3e__3c_::ctor_() {
    RT_FN("S__3e__3c_.S__3e__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10852 = 198.0; this->f_S_6_21_Z = rt::touint_d(_v10852); _v10852; });
    ({ rt::Value _v10853 = rt::trv(rt::VS(g::LS[3290])); this->f_S_1i = rt::slot_string(_v10853); _v10853; });
    ({ rt::Value _v10854 = rt::VS(g::LS[3291]); this->f_S__5e__21__23_ = rt::slot_string(_v10854); _v10854; });
    ({ rt::Value _v10855 = rt::VS(g::LS[3281]); this->f_S__3f__21__3d_ = rt::slot_string(_v10855); _v10855; });
    ({ rt::Value _v10856 = rt::VS(g::LS[3281]); this->f_S__40_1 = rt::slot_string(_v10856); _v10856; });
    ({ rt::Value _v10857 = rt::trv(rt::VS(g::LS[3292])); this->f_S_7_23_ = rt::slot_string(_v10857); _v10857; });
    ({ double _v10858 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10858); _v10858; });
    ({ double _v10859 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10859); _v10859; });
    ({ double _v10860 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10860); _v10860; });
    ({ bool _v10861 = true; this->f_S__3c__60_ = _v10861; _v10861; });
}
int32_t C_S__3e__3c_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__3e__3c_::dm_S_75_2() { return false; }
rt::Value C_S__3e__3c_::dm_S_75_3() { return rt::NUL; }
double C_S__3e__3c_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__3e__3c_.S_75");
    if ((((double)(l_param1)) == 0.0)) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+21 : 100.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__3e__3c_::g_S__2d_6() {
    RT_FN("S__3e__3c_.S__2d_6_get");
    return ({ bool _t10862 = this->C_S__60_6::g_S__2d_6(); _t10862 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0)) : _t10862; });
    return false;
}
C_S__3e__3c_* C_S__3e__3c_::alloc_() {
    C_S__3e__3c_* o = rt::make<C_S__3e__3c_>();
    return o;
}
rt::Value C_S__3e__3c_::mk_(rt::Value* a, int n) {
    C_S__3e__3c_* o = alloc_();
    o->C_S__3e__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__3e__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__3e__3c_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__3e__3c_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__3e__3c_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e__3c_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e__3c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__3c___id)); return true;
    case NM_ids: out = g::SV.C_S__3e__3c___ids; return true;
    default: return false;
    }
}
bool C_S__3e__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__3c___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3e__3c___ids = v; return true;
    default: return false;
    }
}
bool C_S__3e__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__3b_::ctor_() {
    RT_FN("S__26__3b_.S__26__3b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10863 = 199.0; this->f_S_6_21_Z = rt::touint_d(_v10863); _v10863; });
    ({ rt::Value _v10864 = rt::trv(rt::VS(g::LS[3294])); this->f_S_1i = rt::slot_string(_v10864); _v10864; });
    ({ rt::Value _v10865 = rt::VS(g::LS[3295]); this->f_S__5e__21__23_ = rt::slot_string(_v10865); _v10865; });
    ({ rt::Value _v10866 = rt::VS(g::LS[3281]); this->f_S__3f__21__3d_ = rt::slot_string(_v10866); _v10866; });
    ({ rt::Value _v10867 = rt::VS(g::LS[3281]); this->f_S__40_1 = rt::slot_string(_v10867); _v10867; });
    ({ rt::Value _v10868 = rt::trv(rt::VS(g::LS[3292])); this->f_S_7_23_ = rt::slot_string(_v10868); _v10868; });
    ({ double _v10869 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10869); _v10869; });
    ({ double _v10870 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10870); _v10870; });
    ({ double _v10871 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10871); _v10871; });
    ({ bool _v10872 = true; this->f_S__3c__60_ = _v10872; _v10872; });
}
int32_t C_S__26__3b_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__26__3b_::dm_S_75_2() { return false; }
rt::Value C_S__26__3b_::dm_S_75_3() { return rt::NUL; }
double C_S__26__3b_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__26__3b_.S_75");
    if ((((double)(l_param1)) == 0.0)) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+27 : 500.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__26__3b_::g_S__2d_6() {
    RT_FN("S__26__3b_.S__2d_6_get");
    return ({ bool _t10873 = this->C_S__60_6::g_S__2d_6(); _t10873 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0)) : _t10873; });
    return false;
}
C_S__26__3b_* C_S__26__3b_::alloc_() {
    C_S__26__3b_* o = rt::make<C_S__26__3b_>();
    return o;
}
rt::Value C_S__26__3b_::mk_(rt::Value* a, int n) {
    C_S__26__3b_* o = alloc_();
    o->C_S__26__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__26__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__26__3b_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__26__3b_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__26__3b_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__3b_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__3b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__3b___id)); return true;
    case NM_ids: out = g::SV.C_S__26__3b___ids; return true;
    default: return false;
    }
}
bool C_S__26__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__3b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__26__3b___ids = v; return true;
    default: return false;
    }
}
bool C_S__26__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__22__3b_::ctor_() {
    RT_FN("S__2c__22__3b_.S__2c__22__3b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10874 = 208.0; this->f_S_6_21_Z = rt::touint_d(_v10874); _v10874; });
    ({ rt::Value _v10875 = rt::trv(rt::VS(g::LS[3297])); this->f_S_1i = rt::slot_string(_v10875); _v10875; });
    ({ rt::Value _v10876 = rt::VS(g::LS[3298]); this->f_S__5e__21__23_ = rt::slot_string(_v10876); _v10876; });
    ({ double _v10877 = 5e+17; this->f_S__3e__3d_ = _v10877; _v10877; });
    ({ double _v10878 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10878); _v10878; });
    ({ double _v10879 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10879); _v10879; });
    ({ double _v10880 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10880); _v10880; });
    ({ bool _v10881 = true; this->f_S__3c__60_ = _v10881; _v10881; });
    ({ double _v10882 = 9.0; this->f_S__21__22_E = rt::touint_d(_v10882); _v10882; });
}
rt::Value C_S__2c__22__3b_::m_S__40__22_() {
    RT_FN("S__2c__22__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3299]), C_S__26_c::sm_S_8_21_Z(C_S__2c__22__3b_::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2c__22__3b_::g_S__2d_6() {
    RT_FN("S__2c__22__3b_.S__2d_6_get");
    return ({ bool _t10883 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 3.0); _t10883 ? _t10883 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_7_22_A__id)); });
    return false;
}
double C_S__2c__22__3b_::sm_S__60_z() {
    RT_FN("S__2c__22__3b_.S__60_z");
    return (1.3 * rt::m_pow(C_S__26_c::sm_S_0_23_(rt::toint_d(1.0), C_S__26_c::dsm_S_0_23__1()), 0.7));
    return 0.0;
}
C_S__2c__22__3b_* C_S__2c__22__3b_::alloc_() {
    C_S__2c__22__3b_* o = rt::make<C_S__2c__22__3b_>();
    return o;
}
rt::Value C_S__2c__22__3b_::mk_(rt::Value* a, int n) {
    C_S__2c__22__3b_* o = alloc_();
    o->C_S__2c__22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__22__3b_::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    default: return false;
    }
}
bool C_S__2c__22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22__3b___id)); return true;
    case NM_ids: out = g::SV.C_S__2c__22__3b___ids; return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22__3b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c__22__3b___ids = v; return true;
    default: return false;
    }
}
bool C_S__2c__22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    default: return false;
    }
}
void C_S__2c__22__3d_::ctor_() {
    RT_FN("S__2c__22__3d_.S__2c__22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10884 = 201.0; this->f_S_6_21_Z = rt::touint_d(_v10884); _v10884; });
    ({ rt::Value _v10885 = rt::trv(rt::VS(g::LS[3301])); this->f_S_1i = rt::slot_string(_v10885); _v10885; });
    ({ rt::Value _v10886 = rt::VS(g::LS[3302]); this->f_S__5e__21__23_ = rt::slot_string(_v10886); _v10886; });
    ({ double _v10887 = 500000000000.0; this->f_S__3e__3d_ = _v10887; _v10887; });
    ({ double _v10888 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10888); _v10888; });
    ({ double _v10889 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10889); _v10889; });
    ({ double _v10890 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10890); _v10890; });
    ({ bool _v10891 = true; this->f_S__3c__60_ = _v10891; _v10891; });
    ({ double _v10892 = 4.0; this->f_S__21__22_E = rt::touint_d(_v10892); _v10892; });
}
rt::Value C_S__2c__22__3d_::m_S__40__22_() {
    RT_FN("S__2c__22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3303]), C_S__26_c::sm_S_8_21_Z(C_S__2c__22__3d_::sm_S_6_22_4(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2c__22__3d_::g_S__2d_6() {
    RT_FN("S__2c__22__3d_.S__2d_6_get");
    return ({ bool _t10893 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 2.0); _t10893 ? _t10893 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__60__22_D__id)); });
    return false;
}
double C_S__2c__22__3d_::sm_S_6_22_4() {
    RT_FN("S__2c__22__3d_.S_6_22_4");
    return ((double)(C_S__26_c::sm_S__3b__22__24_(((double)(C_S__26_c::sm_S__3f__26_(C_S__26_c::dsm_S__3f__26__0()))))));
    return 0.0;
}
C_S__2c__22__3d_* C_S__2c__22__3d_::alloc_() {
    C_S__2c__22__3d_* o = rt::make<C_S__2c__22__3d_>();
    return o;
}
rt::Value C_S__2c__22__3d_::mk_(rt::Value* a, int n) {
    C_S__2c__22__3d_* o = alloc_();
    o->C_S__2c__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S_6_22_4: return true;
    default: return false;
    }
}
bool C_S__2c__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22__3d___id)); return true;
    case NM_ids: out = g::SV.C_S__2c__22__3d___ids; return true;
    case NM_S_6_22_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22__3d___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c__22__3d___ids = v; return true;
    default: return false;
    }
}
bool C_S__2c__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_22_4: out = rt::V(sm_S_6_22_4()); return true;
    default: return false;
    }
}
void C_S_1_22__3b_::ctor_() {
    RT_FN("S_1_22__3b_.S_1_22__3b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10894 = 816.0; this->f_S_6_21_Z = rt::touint_d(_v10894); _v10894; });
    ({ rt::Value _v10895 = rt::trv(rt::VS(g::LS[3305])); this->f_S_1i = rt::slot_string(_v10895); _v10895; });
    ({ rt::Value _v10896 = rt::VS(g::LS[3306]); this->f_S__5e__21__23_ = rt::slot_string(_v10896); _v10896; });
    ({ double _v10897 = 1e+90; this->f_S__23__21_m = _v10897; _v10897; });
    ({ double _v10898 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10898); _v10898; });
    ({ double _v10899 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10899); _v10899; });
    ({ double _v10900 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10900); _v10900; });
    ({ bool _v10901 = true; this->f_S__21__21_n = _v10901; _v10901; });
    ({ bool _v10902 = true; this->f_S_4W = _v10902; _v10902; });
    ({ double _v10903 = 12.0; this->f_S__21__22_E = rt::touint_d(_v10903); _v10903; });
}
rt::Value C_S_1_22__3b_::m_S__40__22_() {
    RT_FN("S_1_22__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3307]), C_S__26_c::sm_S_8_21_Z(C_S_1_22__3b_::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_1_22__3b_::g_S__2d_6() {
    RT_FN("S_1_22__3b_.S__2d_6_get");
    return ({ bool _t10905 = ({ bool _t10904 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 4.0); _t10904 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__2c__21_o__id)) : _t10904; }); _t10905 ? _t10905 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__21__22__40___id)); });
    return false;
}
bool C_S_1_22__3b_::g_S_9_21__25_() {
    RT_FN("S_1_22__3b_.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S_1_22__3b_::sm_S__22__21__26_() {
    RT_FN("S_1_22__3b_.S__22__21__26_");
    return (0.01 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__5d__21_s(rt::toint_d(5.0), C_S__26_c::dsm_S__5d__21_s_1(), C_S__26_c::dsm_S__5d__21_s_2(), C_S__26_c::dsm_S__5d__21_s_3()))), 6.0));
    return 0.0;
}
C_S_1_22__3b_* C_S_1_22__3b_::alloc_() {
    C_S_1_22__3b_* o = rt::make<C_S_1_22__3b_>();
    return o;
}
rt::Value C_S_1_22__3b_::mk_(rt::Value* a, int n) {
    C_S_1_22__3b_* o = alloc_();
    o->C_S_1_22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S_1_22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_1_22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_1_22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_1_22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_1_22__3b_::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S_1_22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22__3b___id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22__3b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S_1K::ctor_() {
    RT_FN("S_1K.S_1K");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10906 = 200.0; this->f_S_6_21_Z = rt::touint_d(_v10906); _v10906; });
    ({ rt::Value _v10907 = rt::trv(rt::VS(g::LS[3308])); this->f_S_1i = rt::slot_string(_v10907); _v10907; });
    ({ rt::Value _v10908 = rt::VS(g::LS[3309]); this->f_S__5e__21__23_ = rt::slot_string(_v10908); _v10908; });
    ({ double _v10909 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10909); _v10909; });
    ({ double _v10910 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10910); _v10910; });
    ({ double _v10911 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10911); _v10911; });
}
int32_t C_S_1K::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_1K::dm_S_75_2() { return false; }
rt::Value C_S_1K::dm_S_75_3() { return rt::NUL; }
double C_S_1K::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S_1K.S_75");
    (l_A__loc5_ = NAN);
    if ((((double)(l_param1)) == 0.0)) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+30 : 5000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S_1K::m_S__40__22_() {
    RT_FN("S_1K.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3310]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[3311]), rt::dcallv(rt::V(0.075), rt::N_toFixed, rt::V(3.0)), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, C_S__26_c::dsm_S__3e__21__26__1(), C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, C_S__26_c::dsm_S__3e__21__26__1(), C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, C_S__26_c::dsm_S__3e__21__26__1(), C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), rt::trv(rt::VS(g::LS[3312]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S_1K::sm_S__27__21_b(), 1.0, true)));
    return rt::NUL;
}
bool C_S_1K::g_S__2d_6() {
    RT_FN("S_1K.S__2d_6_get");
    return ({ bool _t10912 = C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[3313]))); _t10912 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t10912; });
    return false;
}
double C_S_1K::sm_S__27__21_b() {
    RT_FN("S_1K.S__27__21_b");
    return (0.075 * (((C_S_8G::sm_S__25_Z(g::SV.C_S_8_21_d__id, C_S_8G::dsm_S__25_Z_1()) + C_S_8G::sm_S__25_Z(g::SV.C_S_2_21__2b___id, C_S_8G::dsm_S__25_Z_1())) + C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, C_S_8G::dsm_S__25_Z_1()))));
    return 0.0;
}
C_S_1K* C_S_1K::alloc_() {
    C_S_1K* o = rt::make<C_S_1K>();
    return o;
}
rt::Value C_S_1K::mk_(rt::Value* a, int n) {
    C_S_1K* o = alloc_();
    o->C_S_1K::ctor_();
    return rt::VO(o);
}
bool C_S_1K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_1K::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_1K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_1K::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_1K::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_1K::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_1K::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_1K::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_1K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1K__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_1K__S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S_1K__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1K__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_1K__S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S_1K__ids = v; return true;
    default: return false;
    }
}
bool C_S_1K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_21::ctor_() {
    RT_FN("S_21.S_21");
    (void)((this->C_S__3e_p::ctor_(), rt::NUL));
    ({ double _v10913 = 194.0; this->f_S_6_21_Z = rt::touint_d(_v10913); _v10913; });
    ({ rt::Value _v10914 = rt::trv(rt::VS(g::LS[3315])); this->f_S_1i = rt::slot_string(_v10914); _v10914; });
    ({ rt::Value _v10915 = rt::VS(g::LS[3316]); this->f_S__5e__21__23_ = rt::slot_string(_v10915); _v10915; });
    ({ double _v10916 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10916); _v10916; });
    ({ double _v10917 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10917); _v10917; });
    ({ double _v10918 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10918); _v10918; });
}
rt::Value C_S_21::m_S__3e__21_d() {
    RT_FN("S_21.S__3e__21_d");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3317]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S_21::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_21::sm_S__26_s() {
    RT_FN("S_21.S__26_s");
    return (18.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), 3.0));
    return 0.0;
}
C_S_21* C_S_21::alloc_() {
    C_S_21* o = rt::make<C_S_21>();
    return o;
}
rt::Value C_S_21::mk_(rt::Value* a, int n) {
    C_S_21* o = alloc_();
    o->C_S_21::ctor_();
    return rt::VO(o);
}
bool C_S_21::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e_p::dget(id, out);
}
bool C_S_21::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e_p::dset(id, v);
}
bool C_S_21::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = m_S__3e__21_d(); return true;
    default: break;
    }
    return C_S__3e_p::dcall(id, a, n, out);
}
bool C_S_21::dmeth(int id) {
    switch (id) {
    case NM_S__3e__21_d: return true;
    default: break;
    }
    return C_S__3e_p::dmeth(id);
}
bool C_S_21::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_21::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_21__id)); return true;
    case NM_ids: out = g::SV.C_S_21__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_21::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_21__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_21__ids = v; return true;
    default: return false;
    }
}
bool C_S_21::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_3_21_m::ctor_() {
    RT_FN("S_3_21_m.S_3_21_m");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10919 = 778.0; this->f_S_6_21_Z = rt::touint_d(_v10919); _v10919; });
    ({ rt::Value _v10920 = rt::trv(rt::VS(g::LS[3319])); this->f_S_1i = rt::slot_string(_v10920); _v10920; });
    ({ rt::Value _v10921 = rt::VS(g::LS[3320]); this->f_S__5e__21__23_ = rt::slot_string(_v10921); _v10921; });
    ({ rt::Value _v10922 = rt::VS(g::LS[3281]); this->f_S__3f__21__3d_ = rt::slot_string(_v10922); _v10922; });
    ({ rt::Value _v10923 = rt::VS(g::LS[3281]); this->f_S__40_1 = rt::slot_string(_v10923); _v10923; });
    ({ double _v10924 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10924); _v10924; });
    ({ double _v10925 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10925); _v10925; });
    ({ double _v10926 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10926); _v10926; });
    ({ bool _v10927 = true; this->f_S__21__21_n = _v10927; _v10927; });
}
rt::Value C_S_3_21_m::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_3_21_m.S__40__22_");
    (l_A__loc1_ = rt::slot_string(((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0) ? rt::add(rt::trv(rt::VS(g::LS[3292])), rt::VS(g::LS[8])) : rt::VS(g::LS[113]))));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 105.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[3321]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S_3_21_m::sm_S_5_22__20_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
int32_t C_S_3_21_m::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_3_21_m::dm_S_75_2() { return false; }
rt::Value C_S_3_21_m::dm_S_75_3() { return rt::NUL; }
double C_S_3_21_m::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_3_21_m.S_75");
    if ((((double)(l_param1)) == 0.0)) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+33 : 1e+18);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S_3_21_m::g_S__2d_6() {
    RT_FN("S_3_21_m.S__2d_6_get");
    return ({ bool _t10930 = ({ bool _t10929 = ({ bool _t10928 = this->C_S__60_6::g_S__2d_6(); _t10928 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0)) : _t10928; }); _t10929 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t10929; }); _t10930 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__2c__21_o__id)) : _t10930; });
    return false;
}
double C_S_3_21_m::sm_S_5_22__20_() {
    double l_A__loc1_ = NAN;
    RT_FN("S_3_21_m.S_5_22__20_");
    (l_A__loc1_ = ((C_S_8G::sm_S__25_Z(g::SV.C_S_8_21_d__id, C_S_8G::dsm_S__25_Z_1()) + C_S_8G::sm_S__25_Z(g::SV.C_S_2_21__2b___id, C_S_8G::dsm_S__25_Z_1())) + C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, C_S_8G::dsm_S__25_Z_1())));
    return (13.0 * rt::m_pow(((rt::mod(C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true), 2.0) == 0.0) ? l_A__loc1_ : (C_S__26_c::sm_S_0_23_(C_S__26_c::dsm_S_0_23__0(), C_S__26_c::dsm_S_0_23__1()) - l_A__loc1_)), 0.65));
    return 0.0;
}
C_S_3_21_m* C_S_3_21_m::alloc_() {
    C_S_3_21_m* o = rt::make<C_S_3_21_m>();
    return o;
}
rt::Value C_S_3_21_m::mk_(rt::Value* a, int n) {
    C_S_3_21_m* o = alloc_();
    o->C_S_3_21_m::ctor_();
    return rt::VO(o);
}
bool C_S_3_21_m::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_3_21_m::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_3_21_m::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_3_21_m::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_3_21_m::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_3_21_m::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_3_21_m::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_3_21_m::smeth_(int id) {
    switch (id) {
    case NM_S_5_22__20_: return true;
    default: return false;
    }
}
bool C_S_3_21_m::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_21_m__id)); return true;
    case NM_S_5_22__20_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_3_21_m::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_21_m__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_21_m::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__20_: out = rt::V(sm_S_5_22__20_()); return true;
    default: return false;
    }
}
void C_S_5_22__3d_::ctor_() {
    RT_FN("S_5_22__3d_.S_5_22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10931 = 817.0; this->f_S_6_21_Z = rt::touint_d(_v10931); _v10931; });
    ({ rt::Value _v10932 = rt::trv(rt::VS(g::LS[3322])); this->f_S_1i = rt::slot_string(_v10932); _v10932; });
    ({ rt::Value _v10933 = rt::VS(g::LS[3323]); this->f_S__5e__21__23_ = rt::slot_string(_v10933); _v10933; });
    ({ double _v10934 = 1e+75; this->f_S__23__21_m = _v10934; _v10934; });
    ({ double _v10935 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10935); _v10935; });
    ({ double _v10936 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10936); _v10936; });
    ({ double _v10937 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10937); _v10937; });
    ({ bool _v10938 = true; this->f_S__21__21_n = _v10938; _v10938; });
    ({ double _v10939 = 11.0; this->f_S__21__22_E = rt::touint_d(_v10939); _v10939; });
}
rt::Value C_S_5_22__3d_::m_S__40__22_() {
    RT_FN("S_5_22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3324]), C_S__26_c::sm_S_8_21_Z(C_S_5_22__3d_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_5_22__3d_::g_S__2d_6() {
    RT_FN("S_5_22__3d_.S__2d_6_get");
    return ({ bool _t10941 = ({ bool _t10940 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 4.0); _t10940 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__2c__21_o__id)) : _t10940; }); _t10941 ? _t10941 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__21__22__40___id)); });
    return false;
}
bool C_S_5_22__3d_::g_S_9_21__25_() {
    RT_FN("S_5_22__3d_.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S_5_22__3d_::sm_S_9L() {
    RT_FN("S_5_22__3d_.S_9L");
    return (0.6 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(36.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.6));
    return 0.0;
}
C_S_5_22__3d_* C_S_5_22__3d_::alloc_() {
    C_S_5_22__3d_* o = rt::make<C_S_5_22__3d_>();
    return o;
}
rt::Value C_S_5_22__3d_::mk_(rt::Value* a, int n) {
    C_S_5_22__3d_* o = alloc_();
    o->C_S_5_22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S_5_22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S_5_22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22__3d___id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S_8_22__3b_::ctor_() {
    RT_FN("S_8_22__3b_.S_8_22__3b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10942 = 777.0; this->f_S_6_21_Z = rt::touint_d(_v10942); _v10942; });
    ({ rt::Value _v10943 = rt::trv(rt::VS(g::LS[3325])); this->f_S_1i = rt::slot_string(_v10943); _v10943; });
    ({ rt::Value _v10944 = rt::VS(g::LS[3326]); this->f_S__5e__21__23_ = rt::slot_string(_v10944); _v10944; });
    ({ double _v10945 = 1e+60; this->f_S__23__21_m = _v10945; _v10945; });
    ({ double _v10946 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10946); _v10946; });
    ({ double _v10947 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10947); _v10947; });
    ({ double _v10948 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10948); _v10948; });
    ({ bool _v10949 = true; this->f_S__21__21_n = _v10949; _v10949; });
    ({ double _v10950 = 10.0; this->f_S__21__22_E = rt::touint_d(_v10950); _v10950; });
}
rt::Value C_S_8_22__3b_::m_S__40__22_() {
    RT_FN("S_8_22__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3327]), C_S__26_c::sm_S_8_21_Z(C_S_8_22__3b_::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_8_22__3b_::g_S__2d_6() {
    RT_FN("S_8_22__3b_.S__2d_6_get");
    return ({ bool _t10952 = ({ bool _t10951 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 4.0); _t10951 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__2c__21_o__id)) : _t10951; }); _t10952 ? _t10952 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__21__22__40___id)); });
    return false;
}
bool C_S_8_22__3b_::g_S_9_21__25_() {
    RT_FN("S_8_22__3b_.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S_8_22__3b_::sm_S__60_z() {
    RT_FN("S_8_22__3b_.S__60_z");
    return (2.5 * rt::m_pow(C_S_8G::sm_S__5e__22_C(g::SV.C_S__40_E__id, rt::toint_d(0.0), C_S_8G::dsm_S__5e__22_C_2()), 1.5));
    return 0.0;
}
C_S_8_22__3b_* C_S_8_22__3b_::alloc_() {
    C_S_8_22__3b_* o = rt::make<C_S_8_22__3b_>();
    return o;
}
rt::Value C_S_8_22__3b_::mk_(rt::Value* a, int n) {
    C_S_8_22__3b_* o = alloc_();
    o->C_S_8_22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S_8_22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_22__3b_::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    default: return false;
    }
}
bool C_S_8_22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22__3b___id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22__3b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    default: return false;
    }
}
void C_S_8_22__3d_::ctor_() {
    RT_FN("S_8_22__3d_.S_8_22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10953 = 205.0; this->f_S_6_21_Z = rt::touint_d(_v10953); _v10953; });
    ({ rt::Value _v10954 = rt::trv(rt::VS(g::LS[3328])); this->f_S_1i = rt::slot_string(_v10954); _v10954; });
    ({ rt::Value _v10955 = rt::VS(g::LS[3329]); this->f_S__5e__21__23_ = rt::slot_string(_v10955); _v10955; });
    ({ double _v10956 = 5e+16; this->f_S__3e__3d_ = _v10956; _v10956; });
    ({ double _v10957 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10957); _v10957; });
    ({ double _v10958 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10958); _v10958; });
    ({ double _v10959 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10959); _v10959; });
    ({ bool _v10960 = true; this->f_S__3c__60_ = _v10960; _v10960; });
    ({ double _v10961 = 8.0; this->f_S__21__22_E = rt::touint_d(_v10961); _v10961; });
}
rt::Value C_S_8_22__3d_::m_S__40__22_() {
    RT_FN("S_8_22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3330]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S_8_22__3d_::sm_S__27__21_b(), 1.0, true)));
    return rt::NUL;
}
bool C_S_8_22__3d_::g_S__2d_6() {
    RT_FN("S_8_22__3d_.S__2d_6_get");
    return ({ bool _t10962 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 3.0); _t10962 ? _t10962 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_7_22_A__id)); });
    return false;
}
double C_S_8_22__3d_::sm_S__27__21_b() {
    RT_FN("S_8_22__3d_.S__27__21_b");
    return (1.25 * rt::m_pow(((C_S_8G::sm_S__25_Z(g::SV.C_S_8_21_d__id, C_S_8G::dsm_S__25_Z_1()) + C_S_8G::sm_S__25_Z(g::SV.C_S_2_21__2b___id, C_S_8G::dsm_S__25_Z_1())) + C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, C_S_8G::dsm_S__25_Z_1())), 0.75));
    return 0.0;
}
C_S_8_22__3d_* C_S_8_22__3d_::alloc_() {
    C_S_8_22__3d_* o = rt::make<C_S_8_22__3d_>();
    return o;
}
rt::Value C_S_8_22__3d_::mk_(rt::Value* a, int n) {
    C_S_8_22__3d_* o = alloc_();
    o->C_S_8_22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S_8_22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_8_22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22__3d___id)); return true;
    case NM_ids: out = g::SV.C_S_8_22__3d___ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22__3d___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_8_22__3d___ids = v; return true;
    default: return false;
    }
}
bool C_S_8_22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_9_21__5e_::ctor_() {
    RT_FN("S_9_21__5e_.S_9_21__5e_");
    (void)((this->C_S__3b_E::ctor_(), rt::NUL));
    ({ double _v10963 = 196.0; this->f_S_6_21_Z = rt::touint_d(_v10963); _v10963; });
    ({ rt::Value _v10964 = rt::trv(rt::VS(g::LS[3332])); this->f_S_1i = rt::slot_string(_v10964); _v10964; });
    ({ rt::Value _v10965 = rt::VS(g::LS[3333]); this->f_S__5e__21__23_ = rt::slot_string(_v10965); _v10965; });
    ({ double _v10966 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10966); _v10966; });
    ({ double _v10967 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10967); _v10967; });
    ({ double _v10968 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10968); _v10968; });
    ({ bool _v10969 = true; this->f_S__26__21__5e_ = _v10969; _v10969; });
}
rt::Value C_S_9_21__5e_::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S_9_21__5e_.S_6r");
    (l_A__loc1_ = rt::toint_d(24.0));
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc1_))), rt::V(1.0))));
    ({ rt::Value _v10970 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V((double)(l_A__loc1_)), _v10970); });
    ({ rt::Value _v10971 = rt::V(rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 147.0)))); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(147.0), _v10971); });
    ({ rt::Value _o10972 = g::SV.C_S__23__21__21___S_6_21_d; rt::Value _i10973 = rt::V(0.0); rt::Value _v10974 = rt::add(rt::idx_get(_o10972, _i10973), rt::V(1.0)); rt::idx_set(_o10972, _i10973, _v10974); _v10974; });
    return rt::NUL;
}
bool C_S_9_21__5e_::g_S__2d_6() {
    RT_FN("S_9_21__5e_.S__2d_6_get");
    return false;
    return false;
}
C_S_9_21__5e_* C_S_9_21__5e_::alloc_() {
    C_S_9_21__5e_* o = rt::make<C_S_9_21__5e_>();
    return o;
}
rt::Value C_S_9_21__5e_::mk_(rt::Value* a, int n) {
    C_S_9_21__5e_* o = alloc_();
    o->C_S_9_21__5e_::ctor_();
    return rt::VO(o);
}
bool C_S_9_21__5e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_E::dget(id, out);
}
bool C_S_9_21__5e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__3b_E::dset(id, v);
}
bool C_S_9_21__5e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__3b_E::dcall(id, a, n, out);
}
bool C_S_9_21__5e_::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__3b_E::dmeth(id);
}
bool C_S_9_21__5e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21__5e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21__5e___id)); return true;
    case NM_ids: out = g::SV.C_S_9_21__5e___ids; return true;
    default: return false;
    }
}
bool C_S_9_21__5e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21__5e___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_9_21__5e___ids = v; return true;
    default: return false;
    }
}
bool C_S_9_21__5e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void static_init_6(std::vector<std::string>& errs) {
    try { (g::SV.C_S__3c__22__3d___ids = rt::arr_lit({rt::VS(g::LS[1756])})); } catch (...) { errs.push_back(std::string("S__3c__22__3d_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__22__3e___S_1_21_S = 0.01); } catch (...) { errs.push_back(std::string("S__27__22__3e_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__22__3e___ids = rt::arr_lit({rt::VS(g::LS[1760])})); } catch (...) { errs.push_back(std::string("S__27__22__3e_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_5e___ids = rt::arr_lit({rt::VS(g::LS[1770])})); } catch (...) { errs.push_back(std::string("S_0_5e_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_1B__ids = rt::arr_lit({rt::VS(g::LS[1775])})); } catch (...) { errs.push_back(std::string("S_1B.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_6_21_1__ids = rt::arr_lit({rt::VS(g::LS[1782])})); } catch (...) { errs.push_back(std::string("S_6_21_1.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_6_22__3c___ids = rt::arr_lit({rt::VS(g::LS[1786])})); } catch (...) { errs.push_back(std::string("S_6_22__3c_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_6_22__3f___ids = rt::arr_lit({rt::VS(g::LS[1790])})); } catch (...) { errs.push_back(std::string("S_6_22__3f_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_C__S_1_21_S = 0.01); } catch (...) { errs.push_back(std::string("S__40__22_C.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_C__ids = rt::arr_lit({rt::VS(g::LS[1794])})); } catch (...) { errs.push_back(std::string("S__40__22_C.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d__21_v__S_0_22_K = 1.0); } catch (...) { errs.push_back(std::string("S__5d__21_v.S_0_22_K: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d__22_D__ids = rt::arr_lit({rt::VS(g::LS[1804])})); } catch (...) { errs.push_back(std::string("S__5d__22_D.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__22__40___ids = rt::arr_lit({rt::VS(g::LS[1811])})); } catch (...) { errs.push_back(std::string("S__60__22__40_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b_E__S__2d__22__25_ = 20.0); } catch (...) { errs.push_back(std::string("S__3b_E.S__2d__22__25_: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__21_H__ids = rt::arr_lit({rt::VS(g::LS[1817])})); } catch (...) { errs.push_back(std::string("S__20__21_H.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__21_X__ids = rt::arr_lit({rt::VS(g::LS[1822])})); } catch (...) { errs.push_back(std::string("S__23__21_X.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__22__3b___ids = rt::arr_lit({rt::VS(g::LS[1827])})); } catch (...) { errs.push_back(std::string("S__23__22__3b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__22_C__ids = rt::arr_lit({rt::VS(g::LS[1841])})); } catch (...) { errs.push_back(std::string("S__3e__22_C.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__22__3c___ids = rt::arr_lit({rt::VS(g::LS[1845])})); } catch (...) { errs.push_back(std::string("S__3f__22__3c_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__22__3c___ids = rt::arr_lit({rt::VS(g::LS[1849])})); } catch (...) { errs.push_back(std::string("S__26__22__3c_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__5b___ids = rt::arr_lit({rt::VS(g::LS[1862])})); } catch (...) { errs.push_back(std::string("S__27__5b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2b__22_D__ids = rt::arr_lit({rt::VS(g::LS[1866])})); } catch (...) { errs.push_back(std::string("S__2b__22_D.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2b_a__ids = rt::arr_lit({rt::VS(g::LS[1869])})); } catch (...) { errs.push_back(std::string("S__2b_a.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__21__3f___ids = rt::arr_lit({rt::VS(g::LS[1872])})); } catch (...) { errs.push_back(std::string("S__2c__21__3f_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_21_v__S_0_22_K = 1.0); } catch (...) { errs.push_back(std::string("S_0_21_v.S_0_22_K: ") + rt::exc_text()); }
    try { (g::SV.C_S_4_22__3c___ids = rt::arr_lit({rt::VS(g::LS[1880])})); } catch (...) { errs.push_back(std::string("S_4_22__3c_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_22__40___S_1_21_S = 8.0); } catch (...) { errs.push_back(std::string("S_9_22__40_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_22__40___ids = rt::arr_lit({rt::VS(g::LS[1887])})); } catch (...) { errs.push_back(std::string("S_9_22__40_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_9a__ids = rt::arr_lit({rt::VS(g::LS[1891])})); } catch (...) { errs.push_back(std::string("S_9a.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__22__3c___ids = rt::arr_lit({rt::VS(g::LS[1895])})); } catch (...) { errs.push_back(std::string("S__3d__22__3c_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5b__22_9__S_1_21_S = 0.02); } catch (...) { errs.push_back(std::string("S__5b__22_9.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__5b__22_9__ids = rt::arr_lit({rt::VS(g::LS[1899])})); } catch (...) { errs.push_back(std::string("S__5b__22_9.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c_G__S__5e__21_s = 5000.0); } catch (...) { errs.push_back(std::string("S__3c_G.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__21_w__S_0_22_K = 1.0); } catch (...) { errs.push_back(std::string("S__3e__21_w.S_0_22_K: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__22_D__S_6_21_c = 0.3); } catch (...) { errs.push_back(std::string("S__3d__22_D.S_6_21_c: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__27___S__5e__21_s = 60000.0); } catch (...) { errs.push_back(std::string("S__5e__27_.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_M__S__3c__21_W = rt::toint_d(4.0)); } catch (...) { errs.push_back(std::string("S__26_M.S__3c__21_W: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_M__S__2d__2d_ = rt::toint_d(3.0)); } catch (...) { errs.push_back(std::string("S__26_M.S__2d__2d_: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_M__S__40__5e_ = rt::toint_d(15.0)); } catch (...) { errs.push_back(std::string("S__26_M.S__40__5e_: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_M__S__21__5f_ = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("S__26_M.S__21__5f_: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d_E__ids = rt::arr_lit({rt::VS(g::LS[1992])})); } catch (...) { errs.push_back(std::string("S__2d_E.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_c__S_3_21__3c_ = 0.0); } catch (...) { errs.push_back(std::string("S__26_c.S_3_21__3c_: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_c__S__3b__22__25_ = (-1.0)); } catch (...) { errs.push_back(std::string("S__26_c.S__3b__22__25_: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_c__S__40__21_b = rt::arr_lit({})); } catch (...) { errs.push_back(std::string("S__26_c.S__40__21_b: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_c__S__2b__22_F = rt::arr_lit({})); } catch (...) { errs.push_back(std::string("S__26_c.S__2b__22_F: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_c__S_2_22__2d_ = rt::arr_lit({rt::V(10000.0), rt::V(1000.0), rt::V(100.0)})); } catch (...) { errs.push_back(std::string("S__26_c.S_2_22__2d_: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_c__S__3c_5 = ({ C_S_7_21__20_* _n10774 = C_S_7_21__20_::alloc_(); _n10774->C_S_7_21__20_::ctor_(); rt::VO(_n10774); })); } catch (...) { errs.push_back(std::string("S__26_c.S__3c_5: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_c__S_9_21__27_ = ({ C_S_7_21__20_* _n10775 = C_S_7_21__20_::alloc_(); _n10775->C_S_7_21__20_::ctor_(); rt::VO(_n10775); })); } catch (...) { errs.push_back(std::string("S__26_c.S_9_21__27_: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_c__S_2_21_8 = rt::arr_lit({rt::VS(g::LS[2029]), rt::VS(g::LS[2030]), rt::VS(g::LS[2031]), rt::VS(g::LS[2032]), rt::VS(g::LS[2033]), rt::VS(g::LS[2034]), rt::VS(g::LS[2035]), rt::VS(g::LS[2036]), rt::VS(g::LS[2037]), rt::VS(g::LS[2038]), rt::VS(g::LS[2039]), rt::VS(g::LS[2040])})); } catch (...) { errs.push_back(std::string("S__26_c.S_2_21_8: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_f__S__26_n = rt::slot_string(rt::VS(g::LS[113]))); } catch (...) { errs.push_back(std::string("S__26_f.S__26_n: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_f__S_4O = rt::slot_string(rt::VS(g::LS[113]))); } catch (...) { errs.push_back(std::string("S__26_f.S_4O: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_f__S_0_21__3f_ = rt::slot_string(rt::VS(g::LS[113]))); } catch (...) { errs.push_back(std::string("S__26_f.S_0_21__3f_: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_f__S_5_21__25_ = rt::touint_d(0.0)); } catch (...) { errs.push_back(std::string("S__26_f.S_5_21__25_: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_f__S__3f__25_ = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("S__26_f.S__3f__25_: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_f__S__3b__21_N = false); } catch (...) { errs.push_back(std::string("S__26_f.S__3b__21_N: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_f__S__27__21__5e_ = rt::new_vectorv(rt::E_STR)); } catch (...) { errs.push_back(std::string("S__26_f.S__27__21__5e_: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_f__S_9_21_Z = rt::new_vectorv(rt::E_ANY)); } catch (...) { errs.push_back(std::string("S__26_f.S_9_21_Z: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_f__S_7_21_7 = rt::new_vectorv(rt::E_ANY)); } catch (...) { errs.push_back(std::string("S__26_f.S_7_21_7: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_f__S__3b_f = rt::new_vectorv(rt::E_ANY)); } catch (...) { errs.push_back(std::string("S__26_f.S__3b_f: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__22__3c___S_1_21_S = 0.02); } catch (...) { errs.push_back(std::string("S__21__22__3c_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__22__3c___ids = rt::arr_lit({rt::VS(g::LS[3282])})); } catch (...) { errs.push_back(std::string("S__21__22__3c_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__22_B__ids = rt::arr_lit({rt::VS(g::LS[3286])})); } catch (...) { errs.push_back(std::string("S__23__22_B.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__21_v__S_0_22_K = 1.0); } catch (...) { errs.push_back(std::string("S__25__21_v.S_0_22_K: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__3c___ids = rt::arr_lit({rt::VS(g::LS[3293])})); } catch (...) { errs.push_back(std::string("S__3e__3c_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__3b___ids = rt::arr_lit({rt::VS(g::LS[3296])})); } catch (...) { errs.push_back(std::string("S__26__3b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__22__3b___ids = rt::arr_lit({rt::VS(g::LS[3300])})); } catch (...) { errs.push_back(std::string("S__2c__22__3b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__22__3d___ids = rt::arr_lit({rt::VS(g::LS[3304])})); } catch (...) { errs.push_back(std::string("S__2c__22__3d_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_1K__S_1_21_S = 0.075); } catch (...) { errs.push_back(std::string("S_1K.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_1K__ids = rt::arr_lit({rt::VS(g::LS[3314])})); } catch (...) { errs.push_back(std::string("S_1K.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_21__ids = rt::arr_lit({rt::VS(g::LS[3318])})); } catch (...) { errs.push_back(std::string("S_21.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_8_22__3d___ids = rt::arr_lit({rt::VS(g::LS[3331])})); } catch (...) { errs.push_back(std::string("S_8_22__3d_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_21__5e___ids = rt::arr_lit({rt::VS(g::LS[3334])})); } catch (...) { errs.push_back(std::string("S_9_21__5e_.ids: ") + rt::exc_text()); }
}
}  // namespace g
