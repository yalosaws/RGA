// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S__3c_C::ctor_() {
    RT_FN("S__3c_C.S__3c_C");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29331 = 316.0; this->f_S_6_21_Z = rt::touint_d(_v29331); _v29331; });
    ({ rt::Value _v29332 = rt::trv(rt::VS(g::LS[8528])); this->f_S_1i = rt::slot_string(_v29332); _v29332; });
    ({ double _v29333 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v29333); _v29333; });
    ({ double _v29334 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29334); _v29334; });
    ({ double _v29335 = 3.0; this->f_S__22__21_U = rt::toint_d(_v29335); _v29335; });
    ({ double _v29336 = 5.0; this->f_S__21_G = rt::toint_d(_v29336); _v29336; });
    ({ double _v29337 = 5.0; this->f_S__5e__21_C = rt::toint_d(_v29337); _v29337; });
    ({ double _v29338 = 50.0; this->f_S__25_w = rt::toint_d(_v29338); _v29338; });
}
rt::Value C_S__3c_C::m_S__40__22_() {
    RT_FN("S__3c_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8529]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__40_y__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__3c_C::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3c_C::m_S_8_21_s() {
    RT_FN("S__3c_C.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8530])));
    return rt::NUL;
}
rt::Value C_S__3c_C::m_S_8_5b_() {
    RT_FN("S__3c_C.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 3.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 3.0))), 3600.0, rt::trv(rt::VS(g::LS[8531])), false, true));
    return rt::NUL;
}
bool C_S__3c_C::m_S_9_21__3f_() {
    RT_FN("S__3c_C.S_9_21__3f_");
    return ({ bool _t29340 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29340 ? _t29340 : (bool)(({ bool _t29339 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t29339 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__5b__21_9__id))) : _t29339; })); });
    return false;
}
bool C_S__3c_C::g_S__20__21_3() {
    RT_FN("S__3c_C.S__20__21_3_get");
    return ({ bool _t29341 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29341 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 3.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 3.0)), rt::V(3600.0))) : _t29341; });
    return false;
}
bool C_S__3c_C::g_S_9_21__25_() {
    RT_FN("S__3c_C.S_9_21__25__get");
    return ({ bool _t29344 = (!this->m_S_9_21_F()); _t29344 ? (bool)((({ bool _t29343 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0); _t29343 ? _t29343 : (bool)(({ bool _t29342 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t29342 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__5b__21_9__id)) : _t29342; })); }))) : _t29344; });
    return false;
}
double C_S__3c_C::sm_S__2c_J() {
    RT_FN("S__3c_C.S__2c_J");
    return (2.0 * rt::m_pow(C_S_8G::sm_S__25_Z(g::SV.C_S__40_y__id, C_S_8G::dsm_S__25_Z_1()), 1.2));
    return 0.0;
}
C_S__3c_C* C_S__3c_C::alloc_() {
    C_S__3c_C* o = rt::make<C_S__3c_C>();
    return o;
}
rt::Value C_S__3c_C::mk_(rt::Value* a, int n) {
    C_S__3c_C* o = alloc_();
    o->C_S__3c_C::ctor_();
    return rt::VO(o);
}
bool C_S__3c_C::dget(int id, rt::Value& out) {
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
bool C_S__3c_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3c_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__3c_C::dmeth(int id) {
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
bool C_S__3c_C::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    default: return false;
    }
}
bool C_S__3c_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c_C__id)); return true;
    case NM_ids: out = g::SV.C_S__3c_C__ids; return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c_C__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c_C__ids = v; return true;
    default: return false;
    }
}
bool C_S__3c_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    default: return false;
    }
}
void C_S__3c_L::ctor_() {
    RT_FN("S__3c_L.S__3c_L");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29345 = 251.0; this->f_S_6_21_Z = rt::touint_d(_v29345); _v29345; });
    ({ rt::Value _v29346 = rt::trv(rt::VS(g::LS[8533])); this->f_S_1i = rt::slot_string(_v29346); _v29346; });
    ({ double _v29347 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v29347); _v29347; });
    ({ double _v29348 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29348); _v29348; });
    ({ double _v29349 = 11.0; this->f_S__22__21_U = rt::toint_d(_v29349); _v29349; });
    ({ double _v29350 = 1.0; this->f_S__21_G = rt::toint_d(_v29350); _v29350; });
    ({ double _v29351 = 1.0; this->f_S__5e__21_C = rt::toint_d(_v29351); _v29351; });
    ({ double _v29352 = 225.0; this->f_S__25_w = rt::toint_d(_v29352); _v29352; });
    ({ bool _v29353 = false; this->f_S__3d_z = _v29353; _v29353; });
}
rt::Value C_S__3c_L::m_S__40__22_() {
    RT_FN("S__3c_L.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8534]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_1_21_G__id, true, true, C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__3c_L::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3c_L::m_S_8_5b_() {
    RT_FN("S__3c_L.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_7_21__21___id, g::SV.C_S_5_21_K__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__3c_L::m_S_9_21__3f_() {
    RT_FN("S__3c_L.S_9_21__3f_");
    return ({ bool _t29355 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29355 ? _t29355 : (bool)(({ bool _t29354 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t29354 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__3c__21_0__id))) : _t29354; })); });
    return false;
}
bool C_S__3c_L::g_S__20__21_3() {
    RT_FN("S__3c_L.S__20__21_3_get");
    return ({ bool _t29361 = ({ bool _t29358 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29358 ? (bool)(({ rt::Value _o29356 = C_S_8G::sm_S__21__21_H(g::SV.C_S_7_21__21___id); C_S__60_6* _p29357 = rt::as_ptr<C_S__60_6>(_o29356); _p29357 ? _p29357->f_S__3f__21_6 : rt::T(rt::dget(_o29356, NM_S__3f__21_6)); })) : _t29358; }); _t29361 ? (bool)(({ rt::Value _o29359 = C_S_8G::sm_S__21__21_H(g::SV.C_S_5_21_K__id); C_S__60_6* _p29360 = rt::as_ptr<C_S__60_6>(_o29359); _p29360 ? _p29360->f_S__3f__21_6 : rt::T(rt::dget(_o29359, NM_S__3f__21_6)); })) : _t29361; });
    return false;
}
bool C_S__3c_L::g_S_9_21__25_() {
    RT_FN("S__3c_L.S_9_21__25__get");
    return ({ bool _t29364 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29364 ? _t29364 : (bool)(({ bool _t29363 = ({ bool _t29362 = (!this->m_S_9_21_F()); _t29362 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29362; }); _t29363 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__3c__21_0__id)) : _t29363; })); });
    return false;
}
double C_S__3c_L::sm_S__2c__21_G() {
    RT_FN("S__3c_L.S__2c__21_G");
    return (20.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), 2.0));
    return 0.0;
}
C_S__3c_L* C_S__3c_L::alloc_() {
    C_S__3c_L* o = rt::make<C_S__3c_L>();
    return o;
}
rt::Value C_S__3c_L::mk_(rt::Value* a, int n) {
    C_S__3c_L* o = alloc_();
    o->C_S__3c_L::ctor_();
    return rt::VO(o);
}
bool C_S__3c_L::dget(int id, rt::Value& out) {
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
bool C_S__3c_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3c_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__3c_L::dmeth(int id) {
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
bool C_S__3c_L::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3c_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c_L__id)); return true;
    case NM_ids: out = g::SV.C_S__3c_L__ids; return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c_L__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c_L__ids = v; return true;
    default: return false;
    }
}
bool C_S__3c_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3c_M::ctor_() {
    RT_FN("S__3c_M.S__3c_M");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29365 = 283.0; this->f_S_6_21_Z = rt::touint_d(_v29365); _v29365; });
    ({ rt::Value _v29366 = rt::trv(rt::VS(g::LS[8536])); this->f_S_1i = rt::slot_string(_v29366); _v29366; });
    ({ double _v29367 = 5.0; this->f_S__22__21_U = rt::toint_d(_v29367); _v29367; });
    ({ double _v29368 = 3.0; this->f_S__21_G = rt::toint_d(_v29368); _v29368; });
    ({ double _v29369 = 80.0; this->f_S__25_w = rt::toint_d(_v29369); _v29369; });
}
rt::Value C_S__3c_M::m_S__40__22_() {
    RT_FN("S__3c_M.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8537]), C_S__26_c::sm_S_6_21_T(C_S__3c_M::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3c_M::m_S_8_21_s() {
    RT_FN("S__3c_M.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8538])));
    return rt::NUL;
}
rt::Value C_S__3c_M::m_S_8_5b_() {
    RT_FN("S__3c_M.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_0_23_(rt::toint_d(0.0), true), 9000.0, rt::trv(rt::VS(g::LS[8539])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3c_M::m_S__3e_I() {
    RT_FN("S__3c_M.S__3e_I");
    return ({ bool _t29372 = ({ bool _t29371 = ({ bool _t29370 = (!this->f_S__3c__21_7); _t29370 ? (bool)(this->g_S__2b__21_a()) : _t29370; }); _t29371 ? (bool)((!this->f_S__3f__21_6)) : _t29371; }); _t29372 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t29372; });
    return false;
}
bool C_S__3c_M::m_S_9_21__3f_() {
    RT_FN("S__3c_M.S_9_21__3f_");
    return ({ bool _t29374 = ({ bool _t29373 = (!this->f_S__3c__21_7); _t29373 ? (bool)(this->f_S__3f__21_6) : _t29373; }); _t29374 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t29374; });
    return false;
}
bool C_S__3c_M::g_S__20__21_3() {
    RT_FN("S__3c_M.S__20__21_3_get");
    return ({ bool _t29376 = ({ bool _t29375 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29375 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0))) : _t29375; }); _t29376 ? (bool)((C_S__26_c::sm_S_0_23_(rt::toint_d(0.0), true) >= 9000.0)) : _t29376; });
    return false;
}
bool C_S__3c_M::g_S_9_21__25_() {
    RT_FN("S__3c_M.S_9_21__25__get");
    return ({ bool _t29377 = (!this->m_S_9_21_F()); _t29377 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0))) : _t29377; });
    return false;
}
double C_S__3c_M::sm_S__26_s() {
    RT_FN("S__3c_M.S__26_s");
    return rt::m_pow((1.75 * C_S__26_c::sm_S_0_23_(rt::toint_d(0.0), C_S__26_c::dsm_S_0_23__1())), 0.8);
    return 0.0;
}
C_S__3c_M* C_S__3c_M::alloc_() {
    C_S__3c_M* o = rt::make<C_S__3c_M>();
    return o;
}
rt::Value C_S__3c_M::mk_(rt::Value* a, int n) {
    C_S__3c_M* o = alloc_();
    o->C_S__3c_M::ctor_();
    return rt::VO(o);
}
bool C_S__3c_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e_I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3c_M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3c_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__3e_I: out = rt::VB(m_S__3e_I()); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3c_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__3e_I: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3c_M::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3c_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c_M__id)); return true;
    case NM_ids: out = g::SV.C_S__3c_M__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c_M__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c_M__ids = v; return true;
    default: return false;
    }
}
bool C_S__3c_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3c_b::ctor_() {
    RT_FN("S__3c_b.S__3c_b");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29378 = 623.0; this->f_S_6_21_Z = rt::touint_d(_v29378); _v29378; });
    ({ rt::Value _v29379 = rt::trv(rt::VS(g::LS[8541])); this->f_S_1i = rt::slot_string(_v29379); _v29379; });
    ({ double _v29380 = 27.0; this->f_S__22__21_U = rt::toint_d(_v29380); _v29380; });
    ({ double _v29381 = 2.0; this->f_S__21_G = rt::toint_d(_v29381); _v29381; });
    ({ double _v29382 = 1375.0; this->f_S__25_w = rt::toint_d(_v29382); _v29382; });
}
rt::Value C_S__3c_b::m_S__40__22_() {
    RT_FN("S__3c_b.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8427]), C_S__26_c::sm_S_8_21_Z(C_S__3c_b::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3c_b::m_S_8_21_s() {
    RT_FN("S__3c_b.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8542])));
    return rt::NUL;
}
rt::Value C_S__3c_b::m_S_8_5b_() {
    RT_FN("S__3c_b.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 2.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 2.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 2.0))), 43200.0, rt::trv(rt::VS(g::LS[8543])), false, true));
    return rt::NUL;
}
bool C_S__3c_b::g_S__20__21_3() {
    RT_FN("S__3c_b.S__20__21_3_get");
    return ({ bool _t29383 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29383 ? (bool)(rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 2.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 2.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 2.0)), rt::V(43200.0))) : _t29383; });
    return false;
}
double C_S__3c_b::sm_S__2c__21_G() {
    RT_FN("S__3c_b.S__2c__21_G");
    return 50.0;
    return 0.0;
}
C_S__3c_b* C_S__3c_b::alloc_() {
    C_S__3c_b* o = rt::make<C_S__3c_b>();
    return o;
}
rt::Value C_S__3c_b::mk_(rt::Value* a, int n) {
    C_S__3c_b* o = alloc_();
    o->C_S__3c_b::ctor_();
    return rt::VO(o);
}
bool C_S__3c_b::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3c_b::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3c_b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3c_b::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3c_b::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3c_b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c_b__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c_b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c_b__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c_b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3e__21_L::ctor_() {
    RT_FN("S__3e__21_L.S__3e__21_L");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29384 = 628.0; this->f_S_6_21_Z = rt::touint_d(_v29384); _v29384; });
    ({ rt::Value _v29385 = rt::trv(rt::VS(g::LS[8544])); this->f_S_1i = rt::slot_string(_v29385); _v29385; });
    ({ double _v29386 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v29386); _v29386; });
    ({ double _v29387 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29387); _v29387; });
    ({ double _v29388 = 8.0; this->f_S__3b__21__23_ = rt::toint_d(_v29388); _v29388; });
    ({ double _v29389 = 27.0; this->f_S__22__21_U = rt::toint_d(_v29389); _v29389; });
    ({ double _v29390 = 0.0; this->f_S__21_G = rt::toint_d(_v29390); _v29390; });
    ({ double _v29391 = 12.0; this->f_S__5e__21_C = rt::toint_d(_v29391); _v29391; });
    ({ double _v29392 = 1500.0; this->f_S__25_w = rt::toint_d(_v29392); _v29392; });
    ({ bool _v29393 = false; this->f_S__3d_z = _v29393; _v29393; });
}
rt::Value C_S__3e__21_L::m_S__40__22_() {
    RT_FN("S__3e__21_L.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8545]), C_S__26_c::sm_S_8_21_Z(C_S__3e__21_L::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3e__21_L::m_S_8_21_s() {
    RT_FN("S__3e__21_L.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8546])));
    return rt::NUL;
}
rt::Value C_S__3e__21_L::m_S_8_5b_() {
    RT_FN("S__3e__21_L.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(C_S__26_c::sm_S__21__2d_(true, true), 500000.0, rt::trv(rt::VS(g::LS[8406])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S_5_27___id, g::SV.C_S__5d__40___id, false)));
    return rt::NUL;
}
bool C_S__3e__21_L::g_S__20__21_3() {
    RT_FN("S__3e__21_L.S__20__21_3_get");
    return ({ bool _t29402 = ({ bool _t29399 = ({ bool _t29396 = ({ bool _t29395 = ({ bool _t29394 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29394 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2_21_7__id)) : _t29394; }); _t29395 ? (bool)((C_S__26_c::sm_S__21__2d_(true, true) >= 500000.0)) : _t29395; }); _t29396 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0)) : _t29396; }); _t29399 ? (bool)(({ rt::Value _o29397 = C_S_8G::sm_S__21__21_H(g::SV.C_S_5_27___id); C_S__60_6* _p29398 = rt::as_ptr<C_S__60_6>(_o29397); _p29398 ? _p29398->f_S__3f__21_6 : rt::T(rt::dget(_o29397, NM_S__3f__21_6)); })) : _t29399; }); _t29402 ? (bool)(({ rt::Value _o29400 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5d__40___id); C_S__60_6* _p29401 = rt::as_ptr<C_S__60_6>(_o29400); _p29401 ? _p29401->f_S__3f__21_6 : rt::T(rt::dget(_o29400, NM_S__3f__21_6)); })) : _t29402; });
    return false;
}
bool C_S__3e__21_L::g_S_9_21__25_() {
    RT_FN("S__3e__21_L.S_9_21__25__get");
    return ({ bool _t29404 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29404 ? (bool)((({ bool _t29403 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0); _t29403 ? _t29403 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }))) : _t29404; });
    return false;
}
double C_S__3e__21_L::sm_S__2c__21_G() {
    RT_FN("S__3e__21_L.S__2c__21_G");
    return rt::m_floor((1.0 + (0.25 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), 1.25))));
    return 0.0;
}
C_S__3e__21_L* C_S__3e__21_L::alloc_() {
    C_S__3e__21_L* o = rt::make<C_S__3e__21_L>();
    return o;
}
rt::Value C_S__3e__21_L::mk_(rt::Value* a, int n) {
    C_S__3e__21_L* o = alloc_();
    o->C_S__3e__21_L::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_L::dget(int id, rt::Value& out) {
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
bool C_S__3e__21_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3e__21_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__3e__21_L::dmeth(int id) {
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
bool C_S__3e__21_L::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3e__21_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_L__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__21_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__21_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3e__21_R::ctor_() {
    RT_FN("S__3e__21_R.S__3e__21_R");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29405 = 242.0; this->f_S_6_21_Z = rt::touint_d(_v29405); _v29405; });
    ({ rt::Value _v29406 = rt::trv(rt::VS(g::LS[8547])); this->f_S_1i = rt::slot_string(_v29406); _v29406; });
    ({ double _v29407 = 6.0; this->f_S__22__21_U = rt::toint_d(_v29407); _v29407; });
    ({ double _v29408 = 4.0; this->f_S__21_G = rt::toint_d(_v29408); _v29408; });
    ({ double _v29409 = 105.0; this->f_S__25_w = rt::toint_d(_v29409); _v29409; });
}
rt::Value C_S__3e__21_R::m_S__40__22_() {
    RT_FN("S__3e__21_R.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8548]), C_S__26_c::sm_S_6_21_T(C_S__3e__21_R::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3e__21_R::m_S_8_21_s() {
    RT_FN("S__3e__21_R.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8549])));
    return rt::NUL;
}
rt::Value C_S__3e__21_R::m_S_8_5b_() {
    RT_FN("S__3e__21_R.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, true), 2750.0, C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3e__21_R::g_S__20__21_3() {
    RT_FN("S__3e__21_R.S__20__21_3_get");
    return ({ bool _t29410 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29410 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, true) >= 2750.0)) : _t29410; });
    return false;
}
double C_S__3e__21_R::sm_S__27__21_b() {
    RT_FN("S__3e__21_R.S__27__21_b");
    return (0.7 * rt::m_pow(rt::m_log((1.0 + (((g::SV.C_S__23__21__21___S__20__21_O / 2.0) + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2()))))), 3.0));
    return 0.0;
}
C_S__3e__21_R* C_S__3e__21_R::alloc_() {
    C_S__3e__21_R* o = rt::make<C_S__3e__21_R>();
    return o;
}
rt::Value C_S__3e__21_R::mk_(rt::Value* a, int n) {
    C_S__3e__21_R* o = alloc_();
    o->C_S__3e__21_R::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3e__21_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3e__21_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3e__21_R::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3e__21_R::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3e__21_R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_R__id)); return true;
    case NM_ids: out = g::SV.C_S__3e__21_R__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__21_R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_R__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3e__21_R__ids = v; return true;
    default: return false;
    }
}
bool C_S__3e__21_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3e__22_3::ctor_() {
    RT_FN("S__3e__22_3.S__3e__22_3");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29411 = 1055.0; this->f_S_6_21_Z = rt::touint_d(_v29411); _v29411; });
    ({ rt::Value _v29412 = rt::trv(rt::VS(g::LS[8551])); this->f_S_1i = rt::slot_string(_v29412); _v29412; });
    ({ double _v29413 = 30.0; this->f_S__22__21_U = rt::toint_d(_v29413); _v29413; });
    ({ double _v29414 = 0.0; this->f_S__21_G = rt::toint_d(_v29414); _v29414; });
    ({ double _v29415 = 5125.0; this->f_S__25_w = rt::toint_d(_v29415); _v29415; });
}
rt::Value C_S__3e__22_3::m_S__40__22_() {
    RT_FN("S__3e__22_3.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8552]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__3e__22_3__S__3f__22_3, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_6_21_T(C_S__3e__22_3::sm_S__26_s(), 4.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3e__22_3::m_S_8_5b_() {
    RT_FN("S__3e__22_3.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_3_22__26_(true, false, true), 1000000000.0, rt::trv(rt::VS(g::LS[1568])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3e__22_3::g_S__20__21_3() {
    RT_FN("S__3e__22_3.S__20__21_3_get");
    return ({ bool _t29417 = ({ bool _t29416 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29416 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t29416; }); _t29417 ? (bool)((C_S__26_c::sm_S_3_22__26_(true, false, true) >= 1000000000.0)) : _t29417; });
    return false;
}
double C_S__3e__22_3::sm_S__26_s() {
    RT_FN("S__3e__22_3.S__26_s");
    return (1.75 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_(true, C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()))), 1.75));
    return 0.0;
}
C_S__3e__22_3* C_S__3e__22_3::alloc_() {
    C_S__3e__22_3* o = rt::make<C_S__3e__22_3>();
    return o;
}
rt::Value C_S__3e__22_3::mk_(rt::Value* a, int n) {
    C_S__3e__22_3* o = alloc_();
    o->C_S__3e__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3e__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3e__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3e__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3e__22_3::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3e__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22_3__id)); return true;
    case NM_S__3f__22_3: out = rt::V(g::SV.C_S__3e__22_3__S__3f__22_3); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22_3__id = rt::touint(v); return true;
    case NM_S__3f__22_3: g::SV.C_S__3e__22_3__S__3f__22_3 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3e__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3e__22_9::ctor_() {
    RT_FN("S__3e__22_9.S__3e__22_9");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29418 = 1097.0; this->f_S_6_21_Z = rt::touint_d(_v29418); _v29418; });
    ({ rt::Value _v29419 = rt::trv(rt::VS(g::LS[8553])); this->f_S_1i = rt::slot_string(_v29419); _v29419; });
    ({ double _v29420 = 35.0; this->f_S__22__21_U = rt::toint_d(_v29420); _v29420; });
    ({ double _v29421 = 5.0; this->f_S__21_G = rt::toint_d(_v29421); _v29421; });
    ({ double _v29422 = 11125.0; this->f_S__25_w = rt::toint_d(_v29422); _v29422; });
}
rt::Value C_S__3e__22_9::m_S__40__22_() {
    RT_FN("S__3e__22_9.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6641]), C_S__26_c::sm_S_6_21_T(C_S__3e__22_9::sm_S__2b__2b_(), 5.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3e__22_9::m_S_8_5b_() {
    RT_FN("S__3e__22_9.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__3b__21__2b___id, true), 600.0, rt::trv(rt::VS(g::LS[8554])), false, true));
    return rt::NUL;
}
bool C_S__3e__22_9::g_S__20__21_3() {
    RT_FN("S__3e__22_9.S__20__21_3_get");
    return ({ bool _t29423 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29423 ? (bool)((C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__3b__21__2b___id, true) >= 600.0)) : _t29423; });
    return false;
}
double C_S__3e__22_9::sm_S__2b__2b_() {
    RT_FN("S__3e__22_9.S__2b__2b_");
    return (25.0 + (2.5 * rt::m_pow(C_S__26_c::sm_S__22__21_z(false, C_S__26_c::dsm_S__22__21_z_1()), 0.75)));
    return 0.0;
}
C_S__3e__22_9* C_S__3e__22_9::alloc_() {
    C_S__3e__22_9* o = rt::make<C_S__3e__22_9>();
    return o;
}
rt::Value C_S__3e__22_9::mk_(rt::Value* a, int n) {
    C_S__3e__22_9* o = alloc_();
    o->C_S__3e__22_9::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3e__22_9::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3e__22_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3e__22_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3e__22_9::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__3e__22_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22_9__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22_9__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__22_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__3e__22_G::ctor_() {
    RT_FN("S__3e__22_G.S__3e__22_G");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29424 = 1172.0; this->f_S_6_21_Z = rt::touint_d(_v29424); _v29424; });
    ({ rt::Value _v29425 = rt::trv(rt::VS(g::LS[8555])); this->f_S_1i = rt::slot_string(_v29425); _v29425; });
    ({ double _v29426 = 40.0; this->f_S__22__21_U = rt::toint_d(_v29426); _v29426; });
    ({ double _v29427 = 4.0; this->f_S__21_G = rt::toint_d(_v29427); _v29427; });
    ({ double _v29428 = 13125.0; this->f_S__25_w = rt::toint_d(_v29428); _v29428; });
}
rt::Value C_S__3e__22_G::m_S__40__22_() {
    RT_FN("S__3e__22_G.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8556]), C_S__26_c::sm_S_8_21_Z(C_S__3e__22_G::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3e__22_G::m_S_8_5b_() {
    RT_FN("S__3e__22_G.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(({ rt::Value _o29429 = C_S_8G::sm_S__23_N(g::SV.C_S__27__22__25___id); C_S_84* _p29430 = rt::as_ptr<C_S_84>(_o29429); _p29430 ? _p29430->g_S__3f_j() : rt::tonum(rt::dget(_o29429, NM_S__3f_j)); }), 7200.0, rt::trv(rt::VS(g::LS[8557])), false, true));
    return rt::NUL;
}
bool C_S__3e__22_G::g_S__20__21_3() {
    RT_FN("S__3e__22_G.S__20__21_3_get");
    return ({ bool _t29433 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29433 ? (bool)((({ rt::Value _o29431 = C_S_8G::sm_S__23_N(g::SV.C_S__27__22__25___id); C_S_84* _p29432 = rt::as_ptr<C_S_84>(_o29431); _p29432 ? _p29432->g_S__3f_j() : rt::tonum(rt::dget(_o29431, NM_S__3f_j)); }) >= 7200.0)) : _t29433; });
    return false;
}
double C_S__3e__22_G::sm_S__2c__21_G() {
    RT_FN("S__3e__22_G.S__2c__21_G");
    return (2.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_9_21_P(g::SV.C_S_2_3c___id, false, true, C_S__26_c::dsm_S_9_21_P_3()))), 2.0));
    return 0.0;
}
C_S__3e__22_G* C_S__3e__22_G::alloc_() {
    C_S__3e__22_G* o = rt::make<C_S__3e__22_G>();
    return o;
}
rt::Value C_S__3e__22_G::mk_(rt::Value* a, int n) {
    C_S__3e__22_G* o = alloc_();
    o->C_S__3e__22_G::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3e__22_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3e__22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3e__22_G::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3e__22_G::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3e__22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22_G__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3e__22_M::ctor_() {
    RT_FN("S__3e__22_M.S__3e__22_M");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29434 = 1082.0; this->f_S_6_21_Z = rt::touint_d(_v29434); _v29434; });
    ({ rt::Value _v29435 = rt::trv(rt::VS(g::LS[8558])); this->f_S_1i = rt::slot_string(_v29435); _v29435; });
    ({ double _v29436 = 35.0; this->f_S__22__21_U = rt::toint_d(_v29436); _v29436; });
    ({ double _v29437 = 3.0; this->f_S__21_G = rt::toint_d(_v29437); _v29437; });
    ({ double _v29438 = 11125.0; this->f_S__25_w = rt::toint_d(_v29438); _v29438; });
}
rt::Value C_S__3e__22_M::m_S__40__22_() {
    RT_FN("S__3e__22_M.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8559]), C_S__26_c::sm_S_6_21_T(C_S__3e__22_M::sm_S__27__21_b(), 5.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3e__22_M::m_S_6r() {
    RT_FN("S__3e__22_M.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o29439 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p29440 = rt::as_ptr<C_S_8G>(_o29439); _p29440 ? _p29440->m_S_17() : rt::dcallv(_o29439, NM_S_17); }));
    (void)(({ rt::Value _o29441 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p29442 = rt::as_ptr<C_S__20_g>(_o29441); _p29442 ? _p29442->m_S_69() : rt::dcallv(_o29441, NM_S_69); }));
    return rt::NUL;
}
rt::Value C_S__3e__22_M::m_S_8_5b_() {
    RT_FN("S__3e__22_M.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N((C_S__26_c::sm_S_0_23_(rt::toint_d(0.0), true) + C_S__26_c::sm_S_0_23_(rt::toint_d(3.0), true)), 20000.0, rt::trv(rt::VS(g::LS[8539])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3e__22_M::g_S__20__21_3() {
    RT_FN("S__3e__22_M.S__20__21_3_get");
    return ({ bool _t29443 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29443 ? (bool)(((C_S__26_c::sm_S_0_23_(rt::toint_d(0.0), true) + C_S__26_c::sm_S_0_23_(rt::toint_d(3.0), true)) >= 20000.0)) : _t29443; });
    return false;
}
double C_S__3e__22_M::sm_S__27__21_b() {
    RT_FN("S__3e__22_M.S__27__21_b");
    return (1.2 * rt::m_pow(C_S__23__21__21_::sm_S__40__21__3f_(), 0.8));
    return 0.0;
}
C_S__3e__22_M* C_S__3e__22_M::alloc_() {
    C_S__3e__22_M* o = rt::make<C_S__3e__22_M>();
    return o;
}
rt::Value C_S__3e__22_M::mk_(rt::Value* a, int n) {
    C_S__3e__22_M* o = alloc_();
    o->C_S__3e__22_M::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3e__22_M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3e__22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3e__22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3e__22_M::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3e__22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22_M__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3e__22_M__S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22_M__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3e__22_M__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3e__22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_8_21__26_::ctor_() {
    RT_FN("S_8_21__26_.S_8_21__26_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v29444 = 295.0; this->f_S_6_21_Z = rt::touint_d(_v29444); _v29444; });
    ({ rt::Value _v29445 = rt::VS(g::LS[1048]); this->f_S__3f__21__3d_ = rt::slot_string(_v29445); _v29445; });
    ({ double _v29446 = 1e+121; this->f_S__3e__3d_ = _v29446; _v29446; });
    ({ bool _v29447 = true; this->f_S__25__21__3e_ = _v29447; _v29447; });
    ({ bool _v29448 = true; this->f_S__3f_T = _v29448; _v29448; });
    ({ double _v29449 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v29449); _v29449; });
    ({ bool _v29450 = false; this->f_S_3e = _v29450; _v29450; });
}
rt::Value C_S_8_21__26_::m_S_6r() {
    RT_FN("S_8_21__26_.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (g::SV.C_S__3c__21__5e___S_0_21_1 = this->f_S__21_G);
    (void)(({ rt::Value _o29451 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p29452 = rt::as_ptr<C_S__20_g>(_o29451); _p29452 ? _p29452->m_S_1M(rt::toint_d(20.0)) : rt::dcallv(_o29451, NM_S_1M, rt::V(20.0)); }));
    return rt::NUL;
}
int32_t C_S_8_21__26_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_8_21__26_::dm_S_75_2() { return false; }
rt::Value C_S_8_21__26_::dm_S_75_3() { return rt::NUL; }
double C_S_8_21__26_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_8_21__26_.S_75");
    if ((((double)(l_param1)) == ((double)(this->f_S__5e__21_C)))) {
        return 1000000.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_8_21__26_::m_S__40__22_() {
    RT_FN("S_8_21__26_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(this->f_S_7_23_, rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[8560]), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, ((double)(this->f_S__21_G))), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__5e__21_C))), C_S__26_c::sm_S_6_21_T(100000.0, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, ((double)(this->f_S__21_G))))));
    return rt::NUL;
}
bool C_S_8_21__26_::g_S__2d_6() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_8_21__26_.S__2d_6_get");
    (l_A__loc1_ = rt::arr_lit({rt::V((double)(g::SV.C_S_1_21_N__id)), rt::V((double)(g::SV.C_S__3c__21_0__id)), rt::V((double)(g::SV.C_S__5d__21__60___id)), rt::V((double)(g::SV.C_S_8_5d___id)), rt::V((double)(g::SV.C_S__5b__21_9__id)), rt::V((double)(g::SV.C_S__2c__21__2b___id))}));
    return ({ bool _t29455 = ({ bool _t29453 = C_S_8G::sm_S_7d(rt::touint(rt::arr_at(l_A__loc1_, ((double)(this->f_S__5e__21_C))))); _t29453 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 16.0)) : _t29453; }); _t29455 ? (bool)((({ bool _t29454 = (((double)(C_S_8G::sg_S_8_21_H())) < 180.0); _t29454 ? _t29454 : (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)); }))) : _t29455; });
    return false;
}
bool C_S_8_21__26_::g_S__26_8() {
    RT_FN("S_8_21__26_.S__26_8_get");
    return false;
    return false;
}
C_S_8_21__26_* C_S_8_21__26_::alloc_() {
    C_S_8_21__26_* o = rt::make<C_S_8_21__26_>();
    return o;
}
rt::Value C_S_8_21__26_::mk_(rt::Value* a, int n) {
    C_S_8_21__26_* o = alloc_();
    o->C_S_8_21__26_::ctor_();
    return rt::VO(o);
}
bool C_S_8_21__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__21_G: out = rt::V((double)(f_S__21_G)); return true;
    case NM_S__5e__21_C: out = rt::V((double)(f_S__5e__21_C)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_21__26_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__21_G: f_S__21_G = rt::toint(v); return true;
    case NM_S__5e__21_C: f_S__5e__21_C = rt::toint(v); return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_21__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_8_21__26_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_8_21__26_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_8_21__26_::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    case NM_S__21_G: { rt::Value f = rt::V((double)(f_S__21_G)); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21_C: { rt::Value f = rt::V((double)(f_S__5e__21_C)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_21__26_::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    case NM_S__21_G: return false;
    case NM_S__5e__21_C: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_21__26_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_8_21__26___S_1_21_S); return true;
    default: return false;
    }
}
bool C_S_8_21__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_1_21_S: g::SV.C_S_8_21__26___S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_8_21__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__21_J::ctor_() {
    RT_FN("S__3f__21_J.S__3f__21_J");
    (void)((this->C_S_8_21__26_::ctor_(), rt::NUL));
    ({ double _v29456 = 292.0; this->f_S_6_21_Z = rt::touint_d(_v29456); _v29456; });
    ({ rt::Value _v29457 = rt::trv(rt::VS(g::LS[8561])); this->f_S_1i = rt::slot_string(_v29457); _v29457; });
    ({ rt::Value _v29458 = rt::VS(g::LS[8562]); this->f_S__5e__21__23_ = rt::slot_string(_v29458); _v29458; });
    ({ rt::Value _v29459 = rt::trv(rt::VS(g::LS[8563])); this->f_S_7_23_ = rt::slot_string(_v29459); _v29459; });
    ({ double _v29460 = 2.0; this->f_S__21_G = rt::toint_d(_v29460); _v29460; });
    ({ double _v29461 = 2.0; this->f_S__5e__21_C = rt::toint_d(_v29461); _v29461; });
}
C_S__3f__21_J* C_S__3f__21_J::alloc_() {
    C_S__3f__21_J* o = rt::make<C_S__3f__21_J>();
    return o;
}
rt::Value C_S__3f__21_J::mk_(rt::Value* a, int n) {
    C_S__3f__21_J* o = alloc_();
    o->C_S__3f__21_J::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_J::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dget(id, out);
}
bool C_S__3f__21_J::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dset(id, v);
}
bool C_S__3f__21_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dcall(id, a, n, out);
}
bool C_S__3f__21_J::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dmeth(id);
}
bool C_S__3f__21_J::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_J__id)); return true;
    case NM_ids: out = g::SV.C_S__3f__21_J__ids; return true;
    default: return false;
    }
}
bool C_S__3f__21_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_J__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f__21_J__ids = v; return true;
    default: return false;
    }
}
bool C_S__3f__21_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__21_b::ctor_() {
    RT_FN("S__3f__21_b.S__3f__21_b");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29462 = 533.0; this->f_S_6_21_Z = rt::touint_d(_v29462); _v29462; });
    ({ rt::Value _v29463 = rt::trv(rt::VS(g::LS[8565])); this->f_S_1i = rt::slot_string(_v29463); _v29463; });
    ({ double _v29464 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v29464); _v29464; });
    ({ double _v29465 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29465); _v29465; });
    ({ double _v29466 = 20.0; this->f_S__22__21_U = rt::toint_d(_v29466); _v29466; });
    ({ double _v29467 = 3.0; this->f_S__21_G = rt::toint_d(_v29467); _v29467; });
    ({ double _v29468 = 9.0; this->f_S__5e__21_C = rt::toint_d(_v29468); _v29468; });
    ({ double _v29469 = 510.0; this->f_S__25_w = rt::toint_d(_v29469); _v29469; });
}
rt::Value C_S__3f__21_b::m_S__40__22_() {
    RT_FN("S__3f__21_b.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8401]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[8227]), C_S__26_c::sm_S_8_21_Z(25.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, C_S__26_c::dsm_S__3e__21__26__1(), C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), rt::trv(rt::VS(g::LS[1722]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S__3f__21_b::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3f__21_b::m_S_8_21_s() {
    RT_FN("S__3f__21_b.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8566])));
    return rt::NUL;
}
bool C_S__3f__21_b::m_S_9_21__3f_() {
    RT_FN("S__3f__21_b.S_9_21__3f_");
    return ({ bool _t29471 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29471 ? _t29471 : (bool)(({ bool _t29470 = this->f_S__3f__21_6; _t29470 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_3_21_F__id))) : _t29470; })); });
    return false;
}
rt::Value C_S__3f__21_b::m_S_8_5b_() {
    RT_FN("S__3f__21_b.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, true), 5000.0, C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3f__21_b::g_S__20__21_3() {
    RT_FN("S__3f__21_b.S__20__21_3_get");
    return ({ bool _t29472 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29472 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, true) >= 5000.0)) : _t29472; });
    return false;
}
bool C_S__3f__21_b::g_S_9_21__25_() {
    RT_FN("S__3f__21_b.S_9_21__25__get");
    return ({ bool _t29475 = (({ bool _t29474 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29474 ? _t29474 : (bool)(({ bool _t29473 = (!this->m_S_9_21_F()); _t29473 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29473; })); })); _t29475 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_3_21_F__id)) : _t29475; });
    return false;
}
double C_S__3f__21_b::sm_S__26_s() {
    RT_FN("S__3f__21_b.S__26_s");
    return (25.0 * C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, C_S_8G::dsm_S__25_Z_1()));
    return 0.0;
}
C_S__3f__21_b* C_S__3f__21_b::alloc_() {
    C_S__3f__21_b* o = rt::make<C_S__3f__21_b>();
    return o;
}
rt::Value C_S__3f__21_b::mk_(rt::Value* a, int n) {
    C_S__3f__21_b* o = alloc_();
    o->C_S__3f__21_b::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_b::dget(int id, rt::Value& out) {
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
bool C_S__3f__21_b::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3f__21_b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__3f__21_b::dmeth(int id) {
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
bool C_S__3f__21_b::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3f__21_b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_b__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3f__21_b__S_1_21_S); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__21_b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_b__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3f__21_b__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3f__21_b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3f__21_j::ctor_() {
    RT_FN("S__3f__21_j.S__3f__21_j");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29476 = 714.0; this->f_S_6_21_Z = rt::touint_d(_v29476); _v29476; });
    ({ rt::Value _v29477 = rt::trv(rt::VS(g::LS[8567])); this->f_S_1i = rt::slot_string(_v29477); _v29477; });
    ({ double _v29478 = 29.0; this->f_S__22__21_U = rt::toint_d(_v29478); _v29478; });
    ({ double _v29479 = 2.0; this->f_S__21_G = rt::toint_d(_v29479); _v29479; });
    ({ double _v29480 = 3350.0; this->f_S__25_w = rt::toint_d(_v29480); _v29480; });
    ({ bool _v29481 = false; this->f_S__3d_z = _v29481; _v29481; });
}
rt::Value C_S__3f__21_j::m_S__40__22_() {
    RT_FN("S__3f__21_j.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8568]), C_S__26_c::sm_S_8_21_Z(C_S__3f__21_j::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__3f__21_j::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3f__21_j::m_S_8_21_s() {
    RT_FN("S__3f__21_j.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8569])));
    return rt::NUL;
}
rt::Value C_S__3f__21_j::m_S_8_5b_() {
    RT_FN("S__3f__21_j.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(C_S__23__21__21_::sm_S__2c_d(), (g::SV.C_S__3f__21_j__S_9_21_i * 100.0), rt::trv(rt::VS(g::LS[8570])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__5d__21_h__id, g::SV.C_S_6_21_j__id, false)));
    return rt::NUL;
}
bool C_S__3f__21_j::g_S__20__21_3() {
    RT_FN("S__3f__21_j.S__20__21_3_get");
    return ({ bool _t29489 = ({ bool _t29486 = ({ bool _t29483 = ({ bool _t29482 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29482 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_i__id)) : _t29482; }); _t29483 ? (bool)((C_S__23__21__21_::sm_S__2c_d() >= g::SV.C_S__3f__21_j__S_9_21_i)) : _t29483; }); _t29486 ? (bool)(({ rt::Value _o29484 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5d__21_h__id); C_S__60_6* _p29485 = rt::as_ptr<C_S__60_6>(_o29484); _p29485 ? _p29485->f_S__3f__21_6 : rt::T(rt::dget(_o29484, NM_S__3f__21_6)); })) : _t29486; }); _t29489 ? (bool)(({ rt::Value _o29487 = C_S_8G::sm_S__21__21_H(g::SV.C_S_6_21_j__id); C_S__60_6* _p29488 = rt::as_ptr<C_S__60_6>(_o29487); _p29488 ? _p29488->f_S__3f__21_6 : rt::T(rt::dget(_o29487, NM_S__3f__21_6)); })) : _t29489; });
    return false;
}
double C_S__3f__21_j::sm_S_5_21_B() {
    RT_FN("S__3f__21_j.S_5_21_B");
    return (2.5 * rt::m_pow(rt::m_log((1.0 + C_S__23__21__21_::sm_S__2c_d())), 2.5));
    return 0.0;
}
double C_S__3f__21_j::sm_S_9L() {
    RT_FN("S__3f__21_j.S_9L");
    return (0.2 * rt::m_pow(rt::m_log((1.0 + C_S__23__21__21_::sm_S__2c_d())), 2.0));
    return 0.0;
}
C_S__3f__21_j* C_S__3f__21_j::alloc_() {
    C_S__3f__21_j* o = rt::make<C_S__3f__21_j>();
    return o;
}
rt::Value C_S__3f__21_j::mk_(rt::Value* a, int n) {
    C_S__3f__21_j* o = alloc_();
    o->C_S__3f__21_j::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_j::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3f__21_j::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3f__21_j::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3f__21_j::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3f__21_j::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__3f__21_j::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_j__id)); return true;
    case NM_S_9_21_i: out = rt::V(g::SV.C_S__3f__21_j__S_9_21_i); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__21_j::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_j__id = rt::touint(v); return true;
    case NM_S_9_21_i: g::SV.C_S__3f__21_j__S_9_21_i = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3f__21_j::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__3f__22__3f_::ctor_() {
    RT_FN("S__3f__22__3f_.S__3f__22__3f_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29490 = 1078.0; this->f_S_6_21_Z = rt::touint_d(_v29490); _v29490; });
    ({ rt::Value _v29491 = rt::trv(rt::VS(g::LS[8571])); this->f_S_1i = rt::slot_string(_v29491); _v29491; });
    ({ double _v29492 = 37.0; this->f_S__22__21_U = rt::toint_d(_v29492); _v29492; });
    ({ double _v29493 = 2.0; this->f_S__21_G = rt::toint_d(_v29493); _v29493; });
    ({ double _v29494 = 11625.0; this->f_S__25_w = rt::toint_d(_v29494); _v29494; });
}
rt::Value C_S__3f__22__3f_::m_S__40__22_() {
    RT_FN("S__3f__22__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8572]), C_S__26_c::sm_S_6_21_T(C_S__3f__22__3f_::sm_S__26_s(), 5.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3f__22__3f_::m_S_8_5b_() {
    RT_FN("S__3f__22__3f_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 36.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 36.0))), 7200.0, rt::trv(rt::VS(g::LS[8573])), false, true));
    return rt::NUL;
}
bool C_S__3f__22__3f_::g_S__20__21_3() {
    RT_FN("S__3f__22__3f_.S__20__21_3_get");
    return ({ bool _t29495 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29495 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 36.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 36.0)), rt::V(7200.0))) : _t29495; });
    return false;
}
double C_S__3f__22__3f_::sm_S__26_s() {
    RT_FN("S__3f__22__3f_.S__26_s");
    return (50.0 + rt::m_pow(C_S__26_c::sm_S__26__21_y(true, C_S__26_c::dsm_S__26__21_y_1(), C_S__26_c::dsm_S__26__21_y_2()), 0.75));
    return 0.0;
}
C_S__3f__22__3f_* C_S__3f__22__3f_::alloc_() {
    C_S__3f__22__3f_* o = rt::make<C_S__3f__22__3f_>();
    return o;
}
rt::Value C_S__3f__22__3f_::mk_(rt::Value* a, int n) {
    C_S__3f__22__3f_* o = alloc_();
    o->C_S__3f__22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3f__22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3f__22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3f__22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3f__22__3f_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3f__22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22__3f___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3f__22_E::ctor_() {
    RT_FN("S__3f__22_E.S__3f__22_E");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29496 = 1160.0; this->f_S_6_21_Z = rt::touint_d(_v29496); _v29496; });
    ({ rt::Value _v29497 = rt::trv(rt::VS(g::LS[8574])); this->f_S_1i = rt::slot_string(_v29497); _v29497; });
    ({ double _v29498 = 39.0; this->f_S__22__21_U = rt::toint_d(_v29498); _v29498; });
    ({ double _v29499 = 3.0; this->f_S__21_G = rt::toint_d(_v29499); _v29499; });
    ({ double _v29500 = 12250.0; this->f_S__25_w = rt::toint_d(_v29500); _v29500; });
}
rt::Value C_S__3f__22_E::m_S__40__22_() {
    RT_FN("S__3f__22_E.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8575]), C_S__26_c::sm_S_8_21_Z(C_S__3f__22_E::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3f__22_E::m_S_8_5b_() {
    RT_FN("S__3f__22_E.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__22__22__20_(true, false, true), 1800.0, rt::trv(rt::VS(g::LS[8576])), false, true));
    return rt::NUL;
}
bool C_S__3f__22_E::g_S__20__21_3() {
    RT_FN("S__3f__22_E.S__20__21_3_get");
    return ({ bool _t29501 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29501 ? (bool)((C_S__26_c::sm_S__22__22__20_(true, false, true) >= 1800.0)) : _t29501; });
    return false;
}
double C_S__3f__22_E::sm_S_6_21_Y() {
    RT_FN("S__3f__22_E.S_6_21_Y");
    return (0.8 * rt::m_pow(C_S__26_c::sm_S__22__21_z(C_S__26_c::dsm_S__22__21_z_0(), C_S__26_c::dsm_S__22__21_z_1()), 0.8));
    return 0.0;
}
C_S__3f__22_E* C_S__3f__22_E::alloc_() {
    C_S__3f__22_E* o = rt::make<C_S__3f__22_E>();
    return o;
}
rt::Value C_S__3f__22_E::mk_(rt::Value* a, int n) {
    C_S__3f__22_E* o = alloc_();
    o->C_S__3f__22_E::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3f__22_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3f__22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3f__22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3f__22_E::smeth_(int id) {
    switch (id) {
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S__3f__22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22_E__id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S__3f__22_G::ctor_() {
    RT_FN("S__3f__22_G.S__3f__22_G");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29502 = 1182.0; this->f_S_6_21_Z = rt::touint_d(_v29502); _v29502; });
    ({ rt::Value _v29503 = rt::trv(rt::VS(g::LS[8577])); this->f_S_1i = rt::slot_string(_v29503); _v29503; });
    ({ double _v29504 = 40.0; this->f_S__22__21_U = rt::toint_d(_v29504); _v29504; });
    ({ double _v29505 = 0.0; this->f_S__21_G = rt::toint_d(_v29505); _v29505; });
    ({ double _v29506 = 13125.0; this->f_S__25_w = rt::toint_d(_v29506); _v29506; });
}
rt::Value C_S__3f__22_G::m_S__40__22_() {
    RT_FN("S__3f__22_G.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8578]), C_S__26_c::sm_S_8_21_Z(C_S__3f__22_G::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3f__22_G::m_S_8_5b_() {
    RT_FN("S__3f__22_G.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_3_22__26_(false, false, true), 1e+21, rt::trv(rt::VS(g::LS[8579])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__3f__22_G::g_S__20__21_3() {
    RT_FN("S__3f__22_G.S__20__21_3_get");
    return ({ bool _t29507 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29507 ? (bool)((C_S__26_c::sm_S_3_22__26_(false, false, true) >= 1e+21)) : _t29507; });
    return false;
}
double C_S__3f__22_G::sm_S_9L() {
    RT_FN("S__3f__22_G.S_9L");
    return rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_(true, C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()))), 2.0);
    return 0.0;
}
C_S__3f__22_G* C_S__3f__22_G::alloc_() {
    C_S__3f__22_G* o = rt::make<C_S__3f__22_G>();
    return o;
}
rt::Value C_S__3f__22_G::mk_(rt::Value* a, int n) {
    C_S__3f__22_G* o = alloc_();
    o->C_S__3f__22_G::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3f__22_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3f__22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3f__22_G::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3f__22_G::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__3f__22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22_G__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__3f_k::ctor_() {
    RT_FN("S__3f_k.S__3f_k");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29508 = 245.0; this->f_S_6_21_Z = rt::touint_d(_v29508); _v29508; });
    ({ rt::Value _v29509 = rt::trv(rt::VS(g::LS[8580])); this->f_S_1i = rt::slot_string(_v29509); _v29509; });
    ({ double _v29510 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v29510); _v29510; });
    ({ double _v29511 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29511); _v29511; });
    ({ double _v29512 = 0.0; this->f_S__22__21_U = rt::toint_d(_v29512); _v29512; });
    ({ double _v29513 = 4.0; this->f_S__21_G = rt::toint_d(_v29513); _v29513; });
    ({ double _v29514 = 4.0; this->f_S__5e__21_C = rt::toint_d(_v29514); _v29514; });
    ({ double _v29515 = 1.0; this->f_S__25_w = rt::toint_d(_v29515); _v29515; });
}
rt::Value C_S__3f_k::m_S__40__22_() {
    RT_FN("S__3f_k.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3480]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__40_y__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__3f_k::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__3f_k::m_S_9_21__3f_() {
    RT_FN("S__3f_k.S_9_21__3f_");
    return ({ bool _t29517 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29517 ? _t29517 : (bool)(({ bool _t29516 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t29516 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__5b__21_9__id))) : _t29516; })); });
    return false;
}
bool C_S__3f_k::g_S_9_21__25_() {
    RT_FN("S__3f_k.S_9_21__25__get");
    return ({ bool _t29520 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29520 ? _t29520 : (bool)(({ bool _t29519 = ({ bool _t29518 = (!this->m_S_9_21_F()); _t29518 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29518; }); _t29519 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__5b__21_9__id)) : _t29519; })); });
    return false;
}
double C_S__3f_k::sm_S__26_s() {
    RT_FN("S__3f_k.S__26_s");
    return (200.0 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.9));
    return 0.0;
}
C_S__3f_k* C_S__3f_k::alloc_() {
    C_S__3f_k* o = rt::make<C_S__3f_k>();
    return o;
}
rt::Value C_S__3f_k::mk_(rt::Value* a, int n) {
    C_S__3f_k* o = alloc_();
    o->C_S__3f_k::ctor_();
    return rt::VO(o);
}
bool C_S__3f_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__3f_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__3f_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__3f_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__3f_k::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3f_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f_k__id)); return true;
    case NM_ids: out = g::SV.C_S__3f_k__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f_k__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f_k__ids = v; return true;
    default: return false;
    }
}
bool C_S__3f_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__25_B::ctor_() {
    RT_FN("S__25_B.S__25_B");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29521 = 525.0; this->f_S_6_21_Z = rt::touint_d(_v29521); _v29521; });
    ({ rt::Value _v29522 = rt::trv(rt::VS(g::LS[8582])); this->f_S_1i = rt::slot_string(_v29522); _v29522; });
    ({ double _v29523 = 21.0; this->f_S__22__21_U = rt::toint_d(_v29523); _v29523; });
    ({ double _v29524 = 4.0; this->f_S__21_G = rt::toint_d(_v29524); _v29524; });
    ({ double _v29525 = 450.0; this->f_S__25_w = rt::toint_d(_v29525); _v29525; });
}
rt::Value C_S__25_B::m_S__40__22_() {
    RT_FN("S__25_B.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8583]), C_S__26_c::sm_S_6_21_T(C_S__25_B::sm_S__2b__2b_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__25_B::m_S_8_21_s() {
    RT_FN("S__25_B.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8584])));
    return rt::NUL;
}
rt::Value C_S__25_B::m_S_8_5b_() {
    RT_FN("S__25_B.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)), 2000.0, rt::trv(rt::VS(g::LS[8585])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__25_B::g_S__20__21_3() {
    RT_FN("S__25_B.S__20__21_3_get");
    return ({ bool _t29526 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29526 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0), rt::V(2000.0))) : _t29526; });
    return false;
}
double C_S__25_B::sm_S__2b__2b_() {
    RT_FN("S__25_B.S__2b__2b_");
    return (120.0 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.85));
    return 0.0;
}
C_S__25_B* C_S__25_B::alloc_() {
    C_S__25_B* o = rt::make<C_S__25_B>();
    return o;
}
rt::Value C_S__25_B::mk_(rt::Value* a, int n) {
    C_S__25_B* o = alloc_();
    o->C_S__25_B::ctor_();
    return rt::VO(o);
}
bool C_S__25_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__25_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__25_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__25_B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__25_B::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__25_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25_B__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__25_S::ctor_() {
    RT_FN("S__25_S.S__25_S");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29527 = 530.0; this->f_S_6_21_Z = rt::touint_d(_v29527); _v29527; });
    ({ rt::Value _v29528 = rt::trv(rt::VS(g::LS[8586])); this->f_S_1i = rt::slot_string(_v29528); _v29528; });
    ({ double _v29529 = 23.0; this->f_S__22__21_U = rt::toint_d(_v29529); _v29529; });
    ({ double _v29530 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v29530); _v29530; });
    ({ double _v29531 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29531); _v29531; });
    ({ double _v29532 = 2.0; this->f_S__21_G = rt::toint_d(_v29532); _v29532; });
    ({ double _v29533 = 10.0; this->f_S__5e__21_C = rt::toint_d(_v29533); _v29533; });
    ({ double _v29534 = 650.0; this->f_S__25_w = rt::toint_d(_v29534); _v29534; });
    ({ bool _v29535 = false; this->f_S__3d_z = _v29535; _v29535; });
}
rt::Value C_S__25_S::m_S__40__22_() {
    RT_FN("S__25_S.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8587]), C_S__26_c::sm_S_8_21_Z(C_S__25_S::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__25_S::m_S_8_5b_() {
    RT_FN("S__25_S.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__21_D__id, g::SV.C_S__2c__21_1__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__25_S::g_S__20__21_3() {
    RT_FN("S__25_S.S__20__21_3_get");
    return ({ bool _t29541 = ({ bool _t29538 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29538 ? (bool)(({ rt::Value _o29536 = C_S_8G::sm_S__21__21_H(g::SV.C_S__21_D__id); C_S__60_6* _p29537 = rt::as_ptr<C_S__60_6>(_o29536); _p29537 ? _p29537->f_S__3f__21_6 : rt::T(rt::dget(_o29536, NM_S__3f__21_6)); })) : _t29538; }); _t29541 ? (bool)(({ rt::Value _o29539 = C_S_8G::sm_S__21__21_H(g::SV.C_S__2c__21_1__id); C_S__60_6* _p29540 = rt::as_ptr<C_S__60_6>(_o29539); _p29540 ? _p29540->f_S__3f__21_6 : rt::T(rt::dget(_o29539, NM_S__3f__21_6)); })) : _t29541; });
    return false;
}
double C_S__25_S::sm_S_2_21_W() {
    RT_FN("S__25_S.S_2_21_W");
    return (1.5 * rt::m_pow(C_S__23__21__21_::sm_S__2c__21_E(), 0.85));
    return 0.0;
}
C_S__25_S* C_S__25_S::alloc_() {
    C_S__25_S* o = rt::make<C_S__25_S>();
    return o;
}
rt::Value C_S__25_S::mk_(rt::Value* a, int n) {
    C_S__25_S* o = alloc_();
    o->C_S__25_S::ctor_();
    return rt::VO(o);
}
bool C_S__25_S::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__25_S::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__25_S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__25_S::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__25_S::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S__25_S::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25_S__id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25_S::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25_S__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25_S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S__26__21__23_::ctor_() {
    RT_FN("S__26__21__23_.S__26__21__23_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29542 = 260.0; this->f_S_6_21_Z = rt::touint_d(_v29542); _v29542; });
    ({ rt::Value _v29543 = rt::trv(rt::VS(g::LS[8588])); this->f_S_1i = rt::slot_string(_v29543); _v29543; });
    ({ double _v29544 = 7.0; this->f_S__22__21_U = rt::toint_d(_v29544); _v29544; });
    ({ double _v29545 = 1.0; this->f_S__21_G = rt::toint_d(_v29545); _v29545; });
    ({ double _v29546 = 1.0; this->f_S__5e__21_C = rt::toint_d(_v29546); _v29546; });
    ({ double _v29547 = 135.0; this->f_S__25_w = rt::toint_d(_v29547); _v29547; });
}
rt::Value C_S__26__21__23_::m_S__40__22_() {
    RT_FN("S__26__21__23_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8589]), C_S__26_c::sm_S_6_21_T(C_S__26__21__23_::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__26__21__23_::m_S_8_21_s() {
    RT_FN("S__26__21__23_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8590])));
    return rt::NUL;
}
rt::Value C_S__26__21__23_::m_S_8_5b_() {
    RT_FN("S__26__21__23_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 134.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 134.0))), 100.0, rt::trv(rt::VS(g::LS[8591])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__26__21__23_::g_S__20__21_3() {
    RT_FN("S__26__21__23_.S__20__21_3_get");
    return ({ bool _t29548 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29548 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 134.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 134.0)), rt::V(100.0))) : _t29548; });
    return false;
}
double C_S__26__21__23_::sm_S__26_s() {
    RT_FN("S__26__21__23_.S__26_s");
    return (40.0 * rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.4));
    return 0.0;
}
C_S__26__21__23_* C_S__26__21__23_::alloc_() {
    C_S__26__21__23_* o = rt::make<C_S__26__21__23_>();
    return o;
}
rt::Value C_S__26__21__23_::mk_(rt::Value* a, int n) {
    C_S__26__21__23_* o = alloc_();
    o->C_S__26__21__23_::ctor_();
    return rt::VO(o);
}
bool C_S__26__21__23_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__26__21__23_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__21__23_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__26__21__23_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__26__21__23_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__26__21__23_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21__23___id)); return true;
    case NM_ids: out = g::SV.C_S__26__21__23___ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__21__23_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21__23___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__26__21__23___ids = v; return true;
    default: return false;
    }
}
bool C_S__26__21__23_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__26__21__3e_::ctor_() {
    RT_FN("S__26__21__3e_.S__26__21__3e_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29549 = 534.0; this->f_S_6_21_Z = rt::touint_d(_v29549); _v29549; });
    ({ rt::Value _v29550 = rt::trv(rt::VS(g::LS[8593])); this->f_S_1i = rt::slot_string(_v29550); _v29550; });
    ({ double _v29551 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v29551); _v29551; });
    ({ double _v29552 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29552); _v29552; });
    ({ double _v29553 = 3.0; this->f_S__3b__21__23_ = rt::toint_d(_v29553); _v29553; });
    ({ double _v29554 = 24.0; this->f_S__22__21_U = rt::toint_d(_v29554); _v29554; });
    ({ double _v29555 = 3.0; this->f_S__21_G = rt::toint_d(_v29555); _v29555; });
    ({ double _v29556 = 10.0; this->f_S__5e__21_C = rt::toint_d(_v29556); _v29556; });
    ({ double _v29557 = 700.0; this->f_S__25_w = rt::toint_d(_v29557); _v29557; });
    ({ bool _v29558 = false; this->f_S__3d_z = _v29558; _v29558; });
}
rt::Value C_S__26__21__3e_::m_S__40__22_() {
    RT_FN("S__26__21__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8594]), C_S__26_c::sm_S_6_21_T(C_S__26__21__3e_::sm_S_2_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__26__21__3e_::m_S_8_5b_() {
    RT_FN("S__26__21__3e_.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 10.0)), 250.0, rt::trv(rt::VS(g::LS[8370])), C_S__26__21__5f_::dm_S__3f__21_N_3(), C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__3c_L__id, g::SV.C_S__5d__21_H__id, false)));
    return rt::NUL;
}
bool C_S__26__21__3e_::g_S__20__21_3() {
    RT_FN("S__26__21__3e_.S__20__21_3_get");
    return ({ bool _t29566 = ({ bool _t29563 = ({ bool _t29560 = ({ bool _t29559 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29559 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 10.0), rt::V(250.0))) : _t29559; }); _t29560 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 3.0)) : _t29560; }); _t29563 ? (bool)(({ rt::Value _o29561 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3c_L__id); C_S__60_6* _p29562 = rt::as_ptr<C_S__60_6>(_o29561); _p29562 ? _p29562->f_S__3f__21_6 : rt::T(rt::dget(_o29561, NM_S__3f__21_6)); })) : _t29563; }); _t29566 ? (bool)(({ rt::Value _o29564 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5d__21_H__id); C_S__60_6* _p29565 = rt::as_ptr<C_S__60_6>(_o29564); _p29565 ? _p29565->f_S__3f__21_6 : rt::T(rt::dget(_o29564, NM_S__3f__21_6)); })) : _t29566; });
    return false;
}
bool C_S__26__21__3e_::g_S_9_21__25_() {
    RT_FN("S__26__21__3e_.S_9_21__25__get");
    return ({ bool _t29568 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29568 ? (bool)((({ bool _t29567 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 3.0); _t29567 ? _t29567 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }))) : _t29568; });
    return false;
}
double C_S__26__21__3e_::sm_S_2_21__40_() {
    RT_FN("S__26__21__3e_.S_2_21__40_");
    return (0.4 * rt::m_pow(C_S__26_c::sm_S_1_22_O(C_S__26_c::dsm_S_1_22_O_0()), 0.8));
    return 0.0;
}
C_S__26__21__3e_* C_S__26__21__3e_::alloc_() {
    C_S__26__21__3e_* o = rt::make<C_S__26__21__3e_>();
    return o;
}
rt::Value C_S__26__21__3e_::mk_(rt::Value* a, int n) {
    C_S__26__21__3e_* o = alloc_();
    o->C_S__26__21__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__26__21__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__26__21__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__21__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__26__21__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__26__21__3e_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S__26__21__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21__3e___id)); return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__21__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__21__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S__26__21_5::ctor_() {
    RT_FN("S__26__21_5.S__26__21_5");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29569 = 427.0; this->f_S_6_21_Z = rt::touint_d(_v29569); _v29569; });
    ({ rt::Value _v29570 = rt::trv(rt::VS(g::LS[8595])); this->f_S_1i = rt::slot_string(_v29570); _v29570; });
    ({ double _v29571 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v29571); _v29571; });
    ({ double _v29572 = 17.0; this->f_S__22__21_U = rt::toint_d(_v29572); _v29572; });
    ({ double _v29573 = 1.0; this->f_S__21_G = rt::toint_d(_v29573); _v29573; });
    ({ double _v29574 = 340.0; this->f_S__25_w = rt::toint_d(_v29574); _v29574; });
    ({ bool _v29575 = false; this->f_S__3d_z = _v29575; _v29575; });
}
rt::Value C_S__26__21_5::m_S__40__22_() {
    RT_FN("S__26__21_5.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8596]), C_S__26_c::sm_S_8_21_Z(C_S__26__21_5::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__26__21_5::m_S_8_5b_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__26__21_5.S_8_5b_");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S_6n__id));
    return rt::slot_string(rt::add(this->m_S__3f__21_N((({ rt::Value _o29576 = l_A__loc1_; C_S_84* _p29577 = rt::as_ptr<C_S_84>(_o29576); _p29577 ? _p29577->g_S_2_2d_() : rt::tonum(rt::dget(_o29576, NM_S_2_2d_)); }) + ({ rt::Value _o29578 = l_A__loc1_; C_S_84* _p29579 = rt::as_ptr<C_S_84>(_o29578); _p29579 ? _p29579->g_S_5_21_L() : rt::tonum(rt::dget(_o29578, NM_S_5_21_L)); })), 200.0, rt::trv(rt::VS(g::LS[8393]), ({ rt::Value _o29580 = l_A__loc1_; C_S_84* _p29581 = rt::as_ptr<C_S_84>(_o29580); _p29581 ? _p29581->f_S_1i : rt::dget(_o29580, NM_S_1i); })), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S_7z__id, g::SV.C_S_2x__id, false)));
    return rt::NUL;
}
bool C_S__26__21_5::g_S__20__21_3() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__26__21_5.S__20__21_3_get");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S_6n__id));
    return ({ bool _t29592 = ({ bool _t29587 = ({ bool _t29584 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29584 ? (bool)(({ rt::Value _o29582 = C_S_8G::sm_S__21__21_H(g::SV.C_S_7z__id); C_S__60_6* _p29583 = rt::as_ptr<C_S__60_6>(_o29582); _p29583 ? _p29583->f_S__3f__21_6 : rt::T(rt::dget(_o29582, NM_S__3f__21_6)); })) : _t29584; }); _t29587 ? (bool)(({ rt::Value _o29585 = C_S_8G::sm_S__21__21_H(g::SV.C_S_2x__id); C_S__60_6* _p29586 = rt::as_ptr<C_S__60_6>(_o29585); _p29586 ? _p29586->f_S__3f__21_6 : rt::T(rt::dget(_o29585, NM_S__3f__21_6)); })) : _t29587; }); _t29592 ? (bool)(((({ rt::Value _o29588 = l_A__loc1_; C_S_84* _p29589 = rt::as_ptr<C_S_84>(_o29588); _p29589 ? _p29589->g_S_2_2d_() : rt::tonum(rt::dget(_o29588, NM_S_2_2d_)); }) + ({ rt::Value _o29590 = l_A__loc1_; C_S_84* _p29591 = rt::as_ptr<C_S_84>(_o29590); _p29591 ? _p29591->g_S_5_21_L() : rt::tonum(rt::dget(_o29590, NM_S_5_21_L)); })) >= 200.0)) : _t29592; });
    return false;
}
double C_S__26__21_5::sm_S_6_21_Y() {
    RT_FN("S__26__21_5.S_6_21_Y");
    return (10.0 * C_S__26_c::sm_S__20__21__3b_(rt::toint_d(102.0)));
    return 0.0;
}
C_S__26__21_5* C_S__26__21_5::alloc_() {
    C_S__26__21_5* o = rt::make<C_S__26__21_5>();
    return o;
}
rt::Value C_S__26__21_5::mk_(rt::Value* a, int n) {
    C_S__26__21_5* o = alloc_();
    o->C_S__26__21_5::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__26__21_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__21_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__26__21_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__26__21_5::smeth_(int id) {
    switch (id) {
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S__26__21_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_5__id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__21_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__21_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S__26__21_G::ctor_() {
    RT_FN("S__26__21_G.S__26__21_G");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29593 = 527.0; this->f_S_6_21_Z = rt::touint_d(_v29593); _v29593; });
    ({ rt::Value _v29594 = rt::trv(rt::VS(g::LS[8597])); this->f_S_1i = rt::slot_string(_v29594); _v29594; });
    ({ double _v29595 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v29595); _v29595; });
    ({ double _v29596 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29596); _v29596; });
    ({ double _v29597 = 20.0; this->f_S__22__21_U = rt::toint_d(_v29597); _v29597; });
    ({ double _v29598 = 2.0; this->f_S__21_G = rt::toint_d(_v29598); _v29598; });
    ({ double _v29599 = 9.0; this->f_S__5e__21_C = rt::toint_d(_v29599); _v29599; });
    ({ double _v29600 = 525.0; this->f_S__25_w = rt::toint_d(_v29600); _v29600; });
}
rt::Value C_S__26__21_G::m_S__40__22_() {
    RT_FN("S__26__21_G.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8598]), C_S__26_c::sm_S_8_21_Z(C_S__26__21_G::sm_S__2b__22_K(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__26__21_G::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__26__21_G::m_S_8_21_s() {
    RT_FN("S__26__21_G.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8599])));
    return rt::NUL;
}
rt::Value C_S__26__21_G::m_S_8_5b_() {
    RT_FN("S__26__21_G.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(({ rt::Value _o29601 = C_S_8G::sm_S__23_N(g::SV.C_S_7_21_K__id); C_S_84* _p29602 = rt::as_ptr<C_S_84>(_o29601); _p29602 ? _p29602->g_S__3f_j() : rt::tonum(rt::dget(_o29601, NM_S__3f_j)); }), 3600.0, rt::trv(rt::VS(g::LS[8600])), false, true));
    return rt::NUL;
}
bool C_S__26__21_G::m_S_9_21__3f_() {
    RT_FN("S__26__21_G.S_9_21__3f_");
    return ({ bool _t29606 = (!this->C_S__26__21__5f_::m_S__3e_I()); _t29606 ? (bool)((({ bool _t29605 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29605 ? _t29605 : (bool)((!({ rt::Value _o29603 = C_S_8G::sm_S__23_N(g::SV.C_S_7I__id); C_S_84* _p29604 = rt::as_ptr<C_S_84>(_o29603); _p29604 ? _p29604->g_S__2d_6() : rt::T(rt::dget(_o29603, NM_S__2d_6)); }))); }))) : _t29606; });
    return false;
}
bool C_S__26__21_G::g_S__20__21_3() {
    RT_FN("S__26__21_G.S__20__21_3_get");
    return ({ bool _t29609 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29609 ? (bool)((({ rt::Value _o29607 = C_S_8G::sm_S__23_N(g::SV.C_S_7_21_K__id); C_S_84* _p29608 = rt::as_ptr<C_S_84>(_o29607); _p29608 ? _p29608->g_S__3f_j() : rt::tonum(rt::dget(_o29607, NM_S__3f_j)); }) >= 3600.0)) : _t29609; });
    return false;
}
bool C_S__26__21_G::g_S_9_21__25_() {
    RT_FN("S__26__21_G.S_9_21__25__get");
    return ({ bool _t29614 = ({ bool _t29612 = (!this->m_S_9_21_F()); _t29612 ? (bool)(({ rt::Value _o29610 = C_S_8G::sm_S__23_N(g::SV.C_S_7I__id); C_S_84* _p29611 = rt::as_ptr<C_S_84>(_o29610); _p29611 ? _p29611->g_S__2d_6() : rt::T(rt::dget(_o29610, NM_S__2d_6)); })) : _t29612; }); _t29614 ? (bool)((({ bool _t29613 = (((double)(g::SV.C_S_8G__S__23_3)) == ((double)(this->f_S__2d__21__5e_))); _t29613 ? _t29613 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }))) : _t29614; });
    return false;
}
double C_S__26__21_G::sm_S__2b__22_K() {
    RT_FN("S__26__21_G.S__2b__22_K");
    return 50.0;
    return 0.0;
}
double C_S__26__21_G::sm_S_6_21_Y() {
    RT_FN("S__26__21_G.S_6_21_Y");
    return (6.0 + (0.6 * rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S_7I__id, C_S__26_c::dsm_S_1_21__3b__1()), 0.6)));
    return 0.0;
}
C_S__26__21_G* C_S__26__21_G::alloc_() {
    C_S__26__21_G* o = rt::make<C_S__26__21_G>();
    return o;
}
rt::Value C_S__26__21_G::mk_(rt::Value* a, int n) {
    C_S__26__21_G* o = alloc_();
    o->C_S__26__21_G::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_G::dget(int id, rt::Value& out) {
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
bool C_S__26__21_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__21_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__26__21_G::dmeth(int id) {
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
bool C_S__26__21_G::smeth_(int id) {
    switch (id) {
    case NM_S__2b__22_K: return true;
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S__26__21_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_G__id)); return true;
    case NM_S__2b__22_K: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__21_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__21_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__22_K: out = rt::V(sm_S__2b__22_K()); return true;
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S__26__21_Y::ctor_() {
    RT_FN("S__26__21_Y.S__26__21_Y");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29615 = 261.0; this->f_S_6_21_Z = rt::touint_d(_v29615); _v29615; });
    ({ rt::Value _v29616 = rt::trv(rt::VS(g::LS[8601])); this->f_S_1i = rt::slot_string(_v29616); _v29616; });
    ({ double _v29617 = 6.0; this->f_S__22__21_U = rt::toint_d(_v29617); _v29617; });
    ({ double _v29618 = 1.0; this->f_S__21_G = rt::toint_d(_v29618); _v29618; });
    ({ double _v29619 = 120.0; this->f_S__25_w = rt::toint_d(_v29619); _v29619; });
}
rt::Value C_S__26__21_Y::m_S__40__22_() {
    RT_FN("S__26__21_Y.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8602]), C_S__26_c::sm_S_6_21_T(C_S__26__21_Y::sm_S_4_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__26__21_Y::m_S_8_21_s() {
    RT_FN("S__26__21_Y.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8603])));
    return rt::NUL;
}
rt::Value C_S__26__21_Y::m_S_8_5b_() {
    RT_FN("S__26__21_Y.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 4.0))), 100000.0, rt::trv(rt::VS(g::LS[8604])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__26__21_Y::g_S__20__21_3() {
    RT_FN("S__26__21_Y.S__20__21_3_get");
    return ({ bool _t29620 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29620 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 4.0)), rt::V(100000.0))) : _t29620; });
    return false;
}
double C_S__26__21_Y::sm_S_4_21__40_() {
    RT_FN("S__26__21_Y.S_4_21__40_");
    return (5.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sg_S__22__21_0())), 1.5));
    return 0.0;
}
C_S__26__21_Y* C_S__26__21_Y::alloc_() {
    C_S__26__21_Y* o = rt::make<C_S__26__21_Y>();
    return o;
}
rt::Value C_S__26__21_Y::mk_(rt::Value* a, int n) {
    C_S__26__21_Y* o = alloc_();
    o->C_S__26__21_Y::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_Y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__26__21_Y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__21_Y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__26__21_Y::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__26__21_Y::smeth_(int id) {
    switch (id) {
    case NM_S_4_21__40_: return true;
    default: return false;
    }
}
bool C_S__26__21_Y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_Y__id)); return true;
    case NM_ids: out = g::SV.C_S__26__21_Y__ids; return true;
    case NM_S_4_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__21_Y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_Y__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__26__21_Y__ids = v; return true;
    default: return false;
    }
}
bool C_S__26__21_Y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_21__40_: out = rt::V(sm_S_4_21__40_()); return true;
    default: return false;
    }
}
void C_S__26__21_h::ctor_() {
    RT_FN("S__26__21_h.S__26__21_h");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29621 = 719.0; this->f_S_6_21_Z = rt::touint_d(_v29621); _v29621; });
    ({ rt::Value _v29622 = rt::trv(rt::VS(g::LS[8606])); this->f_S_1i = rt::slot_string(_v29622); _v29622; });
    ({ double _v29623 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29623); _v29623; });
    ({ double _v29624 = 28.0; this->f_S__22__21_U = rt::toint_d(_v29624); _v29624; });
    ({ double _v29625 = 5.0; this->f_S__21_G = rt::toint_d(_v29625); _v29625; });
    ({ double _v29626 = 11.0; this->f_S__5e__21_C = rt::toint_d(_v29626); _v29626; });
    ({ double _v29627 = 3050.0; this->f_S__25_w = rt::toint_d(_v29627); _v29627; });
    ({ bool _v29628 = false; this->f_S__3d_z = _v29628; _v29628; });
}
rt::Value C_S__26__21_h::m_S__40__22_() {
    RT_FN("S__26__21_h.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8607]), C_S__26_c::sm_S_6_21_T(C_S__26__21_h::sm_S__26_s(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__26__21_h::m_S_8_21_s() {
    RT_FN("S__26__21_h.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8608])));
    return rt::NUL;
}
rt::Value C_S__26__21_h::m_S_8_5b_() {
    RT_FN("S__26__21_h.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(C_S__26_c::sm_S__21__2d_(true, true), g::SV.C_S__26__21_h__S__3c__21_Y, rt::trv(rt::VS(g::LS[8406])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__23__3e___id, g::SV.C_S__5d__40___id, false)));
    return rt::NUL;
}
bool C_S__26__21_h::g_S__20__21_3() {
    RT_FN("S__26__21_h.S__20__21_3_get");
    return ({ bool _t29636 = ({ bool _t29633 = ({ bool _t29630 = ({ bool _t29629 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29629 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_i__id)) : _t29629; }); _t29630 ? (bool)((C_S__26_c::sm_S__21__2d_(true, true) >= g::SV.C_S__26__21_h__S__3c__21_Y)) : _t29630; }); _t29633 ? (bool)(({ rt::Value _o29631 = C_S_8G::sm_S__21__21_H(g::SV.C_S__23__3e___id); C_S__60_6* _p29632 = rt::as_ptr<C_S__60_6>(_o29631); _p29632 ? _p29632->f_S__3f__21_6 : rt::T(rt::dget(_o29631, NM_S__3f__21_6)); })) : _t29633; }); _t29636 ? (bool)(({ rt::Value _o29634 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5d__40___id); C_S__60_6* _p29635 = rt::as_ptr<C_S__60_6>(_o29634); _p29635 ? _p29635->f_S__3f__21_6 : rt::T(rt::dget(_o29634, NM_S__3f__21_6)); })) : _t29636; });
    return false;
}
bool C_S__26__21_h::g_S_9_21__25_() {
    RT_FN("S__26__21_h.S_9_21__25__get");
    return ({ bool _t29637 = (!this->m_S_9_21_F()); _t29637 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == ((double)(this->f_S__2d__21__5e_)))) : _t29637; });
    return false;
}
double C_S__26__21_h::sm_S__26_s() {
    RT_FN("S__26__21_h.S__26_s");
    return (2.0 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.8));
    return 0.0;
}
C_S__26__21_h* C_S__26__21_h::alloc_() {
    C_S__26__21_h* o = rt::make<C_S__26__21_h>();
    return o;
}
rt::Value C_S__26__21_h::mk_(rt::Value* a, int n) {
    C_S__26__21_h* o = alloc_();
    o->C_S__26__21_h::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_h::dget(int id, rt::Value& out) {
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
bool C_S__26__21_h::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__21_h::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__26__21_h::dmeth(int id) {
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
bool C_S__26__21_h::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__26__21_h::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_h__id)); return true;
    case NM_S__3c__21_Y: out = rt::V(g::SV.C_S__26__21_h__S__3c__21_Y); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__21_h::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_h__id = rt::touint(v); return true;
    case NM_S__3c__21_Y: g::SV.C_S__26__21_h__S__3c__21_Y = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__26__21_h::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__26__21_i::ctor_() {
    RT_FN("S__26__21_i.S__26__21_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v29638 = 704.0; this->f_S_6_21_Z = rt::touint_d(_v29638); _v29638; });
    ({ rt::Value _v29639 = rt::trv(rt::VS(g::LS[8609])); this->f_S_1i = rt::slot_string(_v29639); _v29639; });
    ({ rt::Value _v29640 = rt::VS(g::LS[8610]); this->f_S__5e__21__23_ = rt::slot_string(_v29640); _v29640; });
    ({ double _v29641 = 1e+140; this->f_S__3c_R = _v29641; _v29641; });
    ({ bool _v29642 = true; this->f_S__25__21__3e_ = _v29642; _v29642; });
    ({ bool _v29643 = true; this->f_S__3f_T = _v29643; _v29643; });
    ({ double _v29644 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v29644); _v29644; });
    ({ bool _v29645 = false; this->f_S_3e = _v29645; _v29645; });
}
rt::Value C_S__26__21_i::m_S__40__22_() {
    RT_FN("S__26__21_i.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8611]), C_S__26_c::sm_S_6_21_T(C_S__26__21_i::sm_S__27__21_b(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
int32_t C_S__26__21_i::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__26__21_i::dm_S_75_2() { return false; }
rt::Value C_S__26__21_i::dm_S_75_3() { return rt::NUL; }
double C_S__26__21_i::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__26__21_i.S_75");
    if (C_S__26_c::sm_S__3e__25_(l_param1)) {
        return 1e+16;
    }
    return 0.0;
    return 0.0;
}
bool C_S__26__21_i::g_S__2d_6() {
    RT_FN("S__26__21_i.S__2d_6_get");
    return ({ bool _t29648 = (({ bool _t29647 = ({ bool _t29646 = C_S_8G::sm_S_7d(g::SV.C_S__3b__21_i__id); _t29646 ? _t29646 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__21__21_i__id)); }); _t29647 ? _t29647 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5e__21_j__id)); })); _t29648 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5e__21_i__id)) : _t29648; });
    return false;
}
bool C_S__26__21_i::g_S__26_8() {
    RT_FN("S__26__21_i.S__26_8_get");
    return false;
    return false;
}
double C_S__26__21_i::sm_S__27__21_b() {
    RT_FN("S__26__21_i.S__27__21_b");
    return 10000.0;
    return 0.0;
}
C_S__26__21_i* C_S__26__21_i::alloc_() {
    C_S__26__21_i* o = rt::make<C_S__26__21_i>();
    return o;
}
rt::Value C_S__26__21_i::mk_(rt::Value* a, int n) {
    C_S__26__21_i* o = alloc_();
    o->C_S__26__21_i::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__26__21_i::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__26__21_i::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__26__21_i::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__21_i::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__21_i::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__26__21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_i__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__26__22_4::ctor_() {
    RT_FN("S__26__22_4.S__26__22_4");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29649 = 1032.0; this->f_S_6_21_Z = rt::touint_d(_v29649); _v29649; });
    ({ rt::Value _v29650 = rt::trv(rt::VS(g::LS[8612])); this->f_S_1i = rt::slot_string(_v29650); _v29650; });
    ({ double _v29651 = 31.0; this->f_S__22__21_U = rt::toint_d(_v29651); _v29651; });
    ({ double _v29652 = 4.0; this->f_S__21_G = rt::toint_d(_v29652); _v29652; });
    ({ double _v29653 = 5375.0; this->f_S__25_w = rt::toint_d(_v29653); _v29653; });
    ({ double _v29654 = 4.0; this->f_S_9_21_m = rt::toint_d(_v29654); _v29654; });
}
rt::Value C_S__26__22_4::m_S__40__22_() {
    RT_FN("S__26__22_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8613]), C_S__26_c::sm_S_8_21_Z(C_S__26__22_4::sm_S__40_V(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__26__22_4::m_S__3e_I() {
    RT_FN("S__26__22_4.S__3e_I");
    return ({ bool _t29657 = ({ bool _t29656 = ({ bool _t29655 = (!this->f_S__3c__21_7); _t29655 ? (bool)(this->g_S__2b__21_a()) : _t29655; }); _t29656 ? (bool)((!this->f_S__3f__21_6)) : _t29656; }); _t29657 ? (bool)((!(((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m))))) : _t29657; });
    return false;
}
bool C_S__26__22_4::m_S__2b__60_() {
    RT_FN("S__26__22_4.S__2b__60_");
    return ({ bool _t29660 = ({ bool _t29659 = ({ bool _t29658 = (!this->f_S__3c__21_7); _t29658 ? (bool)(this->g_S__2b__21_a()) : _t29658; }); _t29659 ? (bool)((!this->f_S__3f__21_6)) : _t29659; }); _t29660 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)))) : _t29660; });
    return false;
}
bool C_S__26__22_4::m_S_9_21__3f_() {
    RT_FN("S__26__22_4.S_9_21__3f_");
    return ({ bool _t29662 = ({ bool _t29661 = (!this->f_S__3c__21_7); _t29661 ? (bool)(this->f_S__3f__21_6) : _t29661; }); _t29662 ? (bool)((!(((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m))))) : _t29662; });
    return false;
}
bool C_S__26__22_4::g_S_9_21__25_() {
    RT_FN("S__26__22_4.S_9_21__25__get");
    return ({ bool _t29663 = (!this->m_S_9_21_F()); _t29663 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)))) : _t29663; });
    return false;
}
bool C_S__26__22_4::g_S__20__21_3() {
    RT_FN("S__26__22_4.S__20__21_3_get");
    return ({ bool _t29664 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29664 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t29664; });
    return false;
}
double C_S__26__22_4::sm_S__40_V() {
    RT_FN("S__26__22_4.S__40_V");
    return rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__5d__21_s(rt::toint_d((-1.0)), false, true, C_S__26_c::dsm_S__5d__21_s_3()))), 1.8);
    return 0.0;
}
C_S__26__22_4* C_S__26__22_4::alloc_() {
    C_S__26__22_4* o = rt::make<C_S__26__22_4>();
    return o;
}
rt::Value C_S__26__22_4::mk_(rt::Value* a, int n) {
    C_S__26__22_4* o = alloc_();
    o->C_S__26__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_4::dget(int id, rt::Value& out) {
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
bool C_S__26__22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__26__22_4::dmeth(int id) {
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
bool C_S__26__22_4::smeth_(int id) {
    switch (id) {
    case NM_S__40_V: return true;
    default: return false;
    }
}
bool C_S__26__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_4__id)); return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    default: return false;
    }
}
void C_S__26__22_5::ctor_() {
    RT_FN("S__26__22_5.S__26__22_5");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29665 = 1046.0; this->f_S_6_21_Z = rt::touint_d(_v29665); _v29665; });
    ({ rt::Value _v29666 = rt::trv(rt::VS(g::LS[8614])); this->f_S_1i = rt::slot_string(_v29666); _v29666; });
    ({ double _v29667 = 33.0; this->f_S__22__21_U = rt::toint_d(_v29667); _v29667; });
    ({ double _v29668 = 3.0; this->f_S__21_G = rt::toint_d(_v29668); _v29668; });
    ({ double _v29669 = 5875.0; this->f_S__25_w = rt::toint_d(_v29669); _v29669; });
}
rt::Value C_S__26__22_5::m_S__40__22_() {
    RT_FN("S__26__22_5.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8615]), C_S__26_c::sm_S_8_21_Z(C_S__26__22_5::sm_S__23__21_Y(C_S__26__22_5::dsm_S__23__21_Y_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__26__22_5::m_S_8_5b_() {
    RT_FN("S__26__22_5.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__22__22__20_(true, false, true), 1800.0, rt::trv(rt::VS(g::LS[8616])), false, true));
    return rt::NUL;
}
bool C_S__26__22_5::g_S__20__21_3() {
    RT_FN("S__26__22_5.S__20__21_3_get");
    return ({ bool _t29671 = ({ bool _t29670 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29670 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t29670; }); _t29671 ? (bool)((C_S__26_c::sm_S__22__22__20_(true, false, true) >= 1800.0)) : _t29671; });
    return false;
}
bool C_S__26__22_5::dsm_S__23__21_Y_0() { return false; }
double C_S__26__22_5::sm_S__23__21_Y(bool p0) {
    bool l_param1 = p0;
    RT_FN("S__26__22_5.S__23__21_Y");
    return (0.4 * rt::m_pow(C_S__26_c::sm_S_4_21_r(true), 0.4));
    return 0.0;
}
C_S__26__22_5* C_S__26__22_5::alloc_() {
    C_S__26__22_5* o = rt::make<C_S__26__22_5>();
    return o;
}
rt::Value C_S__26__22_5::mk_(rt::Value* a, int n) {
    C_S__26__22_5* o = alloc_();
    o->C_S__26__22_5::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__26__22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__26__22_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__26__22_5::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__26__22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_5__id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y(rt::arg<bool>(a, n, 0, C_S__26__22_5::dsm_S__23__21_Y_0()))); return true;
    default: return false;
    }
}
void C_S__26__22_A::ctor_() {
    RT_FN("S__26__22_A.S__26__22_A");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29672 = 1075.0; this->f_S_6_21_Z = rt::touint_d(_v29672); _v29672; });
    ({ rt::Value _v29673 = rt::trv(rt::VS(g::LS[8617])); this->f_S_1i = rt::slot_string(_v29673); _v29673; });
    ({ double _v29674 = 35.0; this->f_S__22__21_U = rt::toint_d(_v29674); _v29674; });
    ({ double _v29675 = 1.0; this->f_S__21_G = rt::toint_d(_v29675); _v29675; });
    ({ double _v29676 = 11125.0; this->f_S__25_w = rt::toint_d(_v29676); _v29676; });
}
rt::Value C_S__26__22_A::m_S__40__22_() {
    RT_FN("S__26__22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8618])));
    return rt::NUL;
}
rt::Value C_S__26__22_A::m_S_8_5b_() {
    RT_FN("S__26__22_A.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true), 20000.0, rt::trv(rt::VS(g::LS[3959])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__26__22_A::g_S__20__21_3() {
    RT_FN("S__26__22_A.S__20__21_3_get");
    return ({ bool _t29677 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29677 ? (bool)((C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true) >= 20000.0)) : _t29677; });
    return false;
}
C_S__26__22_A* C_S__26__22_A::alloc_() {
    C_S__26__22_A* o = rt::make<C_S__26__22_A>();
    return o;
}
rt::Value C_S__26__22_A::mk_(rt::Value* a, int n) {
    C_S__26__22_A* o = alloc_();
    o->C_S__26__22_A::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__26__22_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__26__22_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__26__22_A::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_A__id)); return true;
    default: return false;
    }
}
bool C_S__26__22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__22_F::ctor_() {
    RT_FN("S__26__22_F.S__26__22_F");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29678 = 1157.0; this->f_S_6_21_Z = rt::touint_d(_v29678); _v29678; });
    ({ rt::Value _v29679 = rt::trv(rt::VS(g::LS[8619])); this->f_S_1i = rt::slot_string(_v29679); _v29679; });
    ({ double _v29680 = 38.0; this->f_S__22__21_U = rt::toint_d(_v29680); _v29680; });
    ({ double _v29681 = 1.0; this->f_S__21_G = rt::toint_d(_v29681); _v29681; });
    ({ double _v29682 = 11875.0; this->f_S__25_w = rt::toint_d(_v29682); _v29682; });
}
rt::Value C_S__26__22_F::m_S__40__22_() {
    RT_FN("S__26__22_F.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8620]), C_S__26_c::sm_S_8_21_Z(C_S__26__22_F::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__26__22_F::m_S_8_5b_() {
    RT_FN("S__26__22_F.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_3_22_J(C_S__26_c::dsm_S_3_22_J_0()), 100.0, rt::trv(rt::VS(g::LS[8621])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__26__22_F::g_S__20__21_3() {
    RT_FN("S__26__22_F.S__20__21_3_get");
    return ({ bool _t29683 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29683 ? (bool)((C_S__26_c::sm_S_3_22_J(C_S__26_c::dsm_S_3_22_J_0()) >= 100.0)) : _t29683; });
    return false;
}
double C_S__26__22_F::sm_S__2c__21_G() {
    RT_FN("S__26__22_F.S__2c__21_G");
    return (2.0 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__27__21__27___id, false, false, C_S__26_c::dsm_S_7i_3()), 0.8));
    return 0.0;
}
C_S__26__22_F* C_S__26__22_F::alloc_() {
    C_S__26__22_F* o = rt::make<C_S__26__22_F>();
    return o;
}
rt::Value C_S__26__22_F::mk_(rt::Value* a, int n) {
    C_S__26__22_F* o = alloc_();
    o->C_S__26__22_F::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__26__22_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__26__22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__26__22_F::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__26__22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_F__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__26__22_G::ctor_() {
    RT_FN("S__26__22_G.S__26__22_G");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29684 = 1180.0; this->f_S_6_21_Z = rt::touint_d(_v29684); _v29684; });
    ({ rt::Value _v29685 = rt::trv(rt::VS(g::LS[8622])); this->f_S_1i = rt::slot_string(_v29685); _v29685; });
    ({ double _v29686 = 10.0; this->f_S__22__21_U = rt::toint_d(_v29686); _v29686; });
    ({ double _v29687 = 6.0; this->f_S__21_G = rt::toint_d(_v29687); _v29687; });
    ({ double _v29688 = 13250.0; this->f_S__25_w = rt::toint_d(_v29688); _v29688; });
}
rt::Value C_S__26__22_G::m_S__40__22_() {
    RT_FN("S__26__22_G.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8623]), C_S__26_c::sm_S_6_21_T(C_S__26__22_G::sm_S__27__21_b(), 5.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__26__22_G::m_S_8_5b_() {
    RT_FN("S__26__22_G.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N((({ rt::Value _o29689 = C_S_8G::sm_S__23_N(g::SV.C_S__3b__21__2b___id); C_S_84* _p29690 = rt::as_ptr<C_S_84>(_o29689); _p29690 ? _p29690->g_S__3f_j() : rt::tonum(rt::dget(_o29689, NM_S__3f_j)); }) + ({ rt::Value _o29691 = C_S_8G::sm_S__23_N(g::SV.C_S__3b__21__2b___id); C_S_84* _p29692 = rt::as_ptr<C_S_84>(_o29691); _p29692 ? _p29692->g_S__3c_q() : rt::tonum(rt::dget(_o29691, NM_S__3c_q)); })), 10800.0, rt::trv(rt::VS(g::LS[8624])), false, true));
    return rt::NUL;
}
bool C_S__26__22_G::g_S__20__21_3() {
    RT_FN("S__26__22_G.S__20__21_3_get");
    return ({ bool _t29697 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29697 ? (bool)(((({ rt::Value _o29693 = C_S_8G::sm_S__23_N(g::SV.C_S__3b__21__2b___id); C_S_84* _p29694 = rt::as_ptr<C_S_84>(_o29693); _p29694 ? _p29694->g_S__3f_j() : rt::tonum(rt::dget(_o29693, NM_S__3f_j)); }) + ({ rt::Value _o29695 = C_S_8G::sm_S__23_N(g::SV.C_S__3b__21__2b___id); C_S_84* _p29696 = rt::as_ptr<C_S_84>(_o29695); _p29696 ? _p29696->g_S__3c_q() : rt::tonum(rt::dget(_o29695, NM_S__3c_q)); })) >= 10800.0)) : _t29697; });
    return false;
}
double C_S__26__22_G::sm_S__27__21_b() {
    RT_FN("S__26__22_G.S__27__21_b");
    return (1.2 * rt::m_pow(C_S__23__21__21_::sm_S__26__22_H(), 1.2));
    return 0.0;
}
C_S__26__22_G* C_S__26__22_G::alloc_() {
    C_S__26__22_G* o = rt::make<C_S__26__22_G>();
    return o;
}
rt::Value C_S__26__22_G::mk_(rt::Value* a, int n) {
    C_S__26__22_G* o = alloc_();
    o->C_S__26__22_G::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__26__22_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__26__22_G::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__26__22_G::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__26__22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_G__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__26__3c_::ctor_() {
    RT_FN("S__26__3c_.S__26__3c_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29698 = 274.0; this->f_S_6_21_Z = rt::touint_d(_v29698); _v29698; });
    ({ rt::Value _v29699 = rt::trv(rt::VS(g::LS[8625])); this->f_S_1i = rt::slot_string(_v29699); _v29699; });
    ({ double _v29700 = 9.0; this->f_S__22__21_U = rt::toint_d(_v29700); _v29700; });
    ({ double _v29701 = 2.0; this->f_S__21_G = rt::toint_d(_v29701); _v29701; });
    ({ double _v29702 = 200.0; this->f_S__25_w = rt::toint_d(_v29702); _v29702; });
    ({ bool _v29703 = false; this->f_S__3d_z = _v29703; _v29703; });
}
rt::Value C_S__26__3c_::m_S__40__22_() {
    RT_FN("S__26__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8626]), C_S__26_c::sm_S_8_21_Z(rt::m_abs(C_S__26__3c_::sm_S_0_21_T()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__26__3c_::sm_S__40_V(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__26__3c_::m_S_8_5b_() {
    RT_FN("S__26__3c_.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__3b_b__id, g::SV.C_S_0_3d___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__26__3c_::g_S__20__21_3() {
    RT_FN("S__26__3c_.S__20__21_3_get");
    return ({ bool _t29709 = ({ bool _t29706 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29706 ? (bool)(({ rt::Value _o29704 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3b_b__id); C_S__60_6* _p29705 = rt::as_ptr<C_S__60_6>(_o29704); _p29705 ? _p29705->f_S__3f__21_6 : rt::T(rt::dget(_o29704, NM_S__3f__21_6)); })) : _t29706; }); _t29709 ? (bool)(({ rt::Value _o29707 = C_S_8G::sm_S__21__21_H(g::SV.C_S_0_3d___id); C_S__60_6* _p29708 = rt::as_ptr<C_S__60_6>(_o29707); _p29708 ? _p29708->f_S__3f__21_6 : rt::T(rt::dget(_o29707, NM_S__3f__21_6)); })) : _t29709; });
    return false;
}
double C_S__26__3c_::sm_S__40_V() {
    RT_FN("S__26__3c_.S__40_V");
    return 20.0;
    return 0.0;
}
double C_S__26__3c_::sm_S_0_21_T() {
    RT_FN("S__26__3c_.S_0_21_T");
    return (-20.0);
    return 0.0;
}
C_S__26__3c_* C_S__26__3c_::alloc_() {
    C_S__26__3c_* o = rt::make<C_S__26__3c_>();
    return o;
}
rt::Value C_S__26__3c_::mk_(rt::Value* a, int n) {
    C_S__26__3c_* o = alloc_();
    o->C_S__26__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__26__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__26__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__26__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__26__3c_::smeth_(int id) {
    switch (id) {
    case NM_S__40_V: return true;
    case NM_S_0_21_T: return true;
    default: return false;
    }
}
bool C_S__26__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__3c___id)); return true;
    case NM_ids: out = g::SV.C_S__26__3c___ids; return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_0_21_T: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__3c___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__26__3c___ids = v; return true;
    default: return false;
    }
}
bool C_S__26__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    case NM_S_0_21_T: out = rt::V(sm_S_0_21_T()); return true;
    default: return false;
    }
}
void C_S__26_i::ctor_() {
    RT_FN("S__26_i.S__26_i");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29710 = 629.0; this->f_S_6_21_Z = rt::touint_d(_v29710); _v29710; });
    ({ rt::Value _v29711 = rt::trv(rt::VS(g::LS[8628])); this->f_S_1i = rt::slot_string(_v29711); _v29711; });
    ({ double _v29712 = 25.0; this->f_S__22__21_U = rt::toint_d(_v29712); _v29712; });
    ({ double _v29713 = 0.0; this->f_S__21_G = rt::toint_d(_v29713); _v29713; });
    ({ double _v29714 = 1275.0; this->f_S__25_w = rt::toint_d(_v29714); _v29714; });
}
rt::Value C_S__26_i::m_S__40__22_() {
    RT_FN("S__26_i.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8629])));
    return rt::NUL;
}
rt::Value C_S__26_i::m_S_8_21_s() {
    RT_FN("S__26_i.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8630])));
    return rt::NUL;
}
rt::Value C_S__26_i::m_S_8_5b_() {
    RT_FN("S__26_i.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0)), 500000.0, rt::trv(rt::VS(g::LS[8385])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__26_i::g_S__20__21_3() {
    RT_FN("S__26_i.S__20__21_3_get");
    return ({ bool _t29715 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29715 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0), rt::V(500000.0))) : _t29715; });
    return false;
}
C_S__26_i* C_S__26_i::alloc_() {
    C_S__26_i* o = rt::make<C_S__26_i>();
    return o;
}
rt::Value C_S__26_i::mk_(rt::Value* a, int n) {
    C_S__26_i* o = alloc_();
    o->C_S__26_i::ctor_();
    return rt::VO(o);
}
bool C_S__26_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__26_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__26_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__26_i::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__26_i::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26_i__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__26_i__S_1_21_S); return true;
    case NM_S_6_21_c: out = rt::V(g::SV.C_S__26_i__S_6_21_c); return true;
    default: return false;
    }
}
bool C_S__26_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26_i__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__26_i__S_1_21_S = rt::tonum(v); return true;
    case NM_S_6_21_c: g::SV.C_S__26_i__S_6_21_c = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__26_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__21_5::ctor_() {
    RT_FN("S__27__21_5.S__27__21_5");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29716 = 304.0; this->f_S_6_21_Z = rt::touint_d(_v29716); _v29716; });
    ({ rt::Value _v29717 = rt::trv(rt::VS(g::LS[8631])); this->f_S_1i = rt::slot_string(_v29717); _v29717; });
    ({ double _v29718 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v29718); _v29718; });
    ({ double _v29719 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29719); _v29719; });
    ({ double _v29720 = 7.0; this->f_S__22__21_U = rt::toint_d(_v29720); _v29720; });
    ({ double _v29721 = 0.0; this->f_S__21_G = rt::toint_d(_v29721); _v29721; });
    ({ double _v29722 = 0.0; this->f_S__5e__21_C = rt::toint_d(_v29722); _v29722; });
    ({ double _v29723 = 180.0; this->f_S__25_w = rt::toint_d(_v29723); _v29723; });
    ({ bool _v29724 = false; this->f_S__3d_z = _v29724; _v29724; });
}
rt::Value C_S__27__21_5::m_S__40__22_() {
    RT_FN("S__27__21_5.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6285]), C_S__26_c::sm_S_6_21_T(C_S__27__21_5::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__27__21_5::m_S_8_5b_() {
    RT_FN("S__27__21_5.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__20_n__id, g::SV.C_S__3c__21_E__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__27__21_5::g_S__20__21_3() {
    RT_FN("S__27__21_5.S__20__21_3_get");
    return ({ bool _t29730 = ({ bool _t29727 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29727 ? (bool)(({ rt::Value _o29725 = C_S_8G::sm_S__21__21_H(g::SV.C_S__20_n__id); C_S__60_6* _p29726 = rt::as_ptr<C_S__60_6>(_o29725); _p29726 ? _p29726->f_S__3f__21_6 : rt::T(rt::dget(_o29725, NM_S__3f__21_6)); })) : _t29727; }); _t29730 ? (bool)(({ rt::Value _o29728 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3c__21_E__id); C_S__60_6* _p29729 = rt::as_ptr<C_S__60_6>(_o29728); _p29729 ? _p29729->f_S__3f__21_6 : rt::T(rt::dget(_o29728, NM_S__3f__21_6)); })) : _t29730; });
    return false;
}
double C_S__27__21_5::sm_S__27__21_b() {
    RT_FN("S__27__21_5.S__27__21_b");
    return (50.0 + (3.0 * rt::m_pow((C_S__26_c::sm_S_57(C_S__26_c::dsm_S_57_0()) * 30.0), 0.7)));
    return 0.0;
}
C_S__27__21_5* C_S__27__21_5::alloc_() {
    C_S__27__21_5* o = rt::make<C_S__27__21_5>();
    return o;
}
rt::Value C_S__27__21_5::mk_(rt::Value* a, int n) {
    C_S__27__21_5* o = alloc_();
    o->C_S__27__21_5::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__27__21_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__27__21_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__27__21_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__27__21_5::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__27__21_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21_5__id)); return true;
    case NM_ids: out = g::SV.C_S__27__21_5__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__21_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21_5__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__27__21_5__ids = v; return true;
    default: return false;
    }
}
bool C_S__27__21_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__27__21_A::ctor_() {
    RT_FN("S__27__21_A.S__27__21_A");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29731 = 265.0; this->f_S_6_21_Z = rt::touint_d(_v29731); _v29731; });
    ({ rt::Value _v29732 = rt::trv(rt::VS(g::LS[8633])); this->f_S_1i = rt::slot_string(_v29732); _v29732; });
    ({ double _v29733 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v29733); _v29733; });
    ({ double _v29734 = 7.0; this->f_S__22__21_U = rt::toint_d(_v29734); _v29734; });
    ({ double _v29735 = 2.0; this->f_S__21_G = rt::toint_d(_v29735); _v29735; });
    ({ double _v29736 = 205.0; this->f_S__25_w = rt::toint_d(_v29736); _v29736; });
    ({ bool _v29737 = false; this->f_S__3d_z = _v29737; _v29737; });
}
rt::Value C_S__27__21_A::m_S__40__22_() {
    RT_FN("S__27__21_A.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[8634]), C_S__26_c::sm_S__23__21_R(C_S__27__21_A::sm_S_3_21_Z(), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[8635]), C_S__26_c::sm_S_8_21_Z(C_S__27__21_A::sm_S__3b__22_K(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
rt::Value C_S__27__21_A::m_S_8_21_s() {
    RT_FN("S__27__21_A.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8636])));
    return rt::NUL;
}
rt::Value C_S__27__21_A::m_S_8_5b_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__27__21_A.S_8_5b_");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S_7I__id));
    return rt::slot_string(rt::add(this->m_S__3f__21_N((({ rt::Value _o29738 = l_A__loc1_; C_S_84* _p29739 = rt::as_ptr<C_S_84>(_o29738); _p29739 ? _p29739->g_S_2_2d_() : rt::tonum(rt::dget(_o29738, NM_S_2_2d_)); }) + ({ rt::Value _o29740 = l_A__loc1_; C_S_84* _p29741 = rt::as_ptr<C_S_84>(_o29740); _p29741 ? _p29741->g_S_5_21_L() : rt::tonum(rt::dget(_o29740, NM_S_5_21_L)); })), 333.0, rt::trv(rt::VS(g::LS[8393]), ({ rt::Value _o29742 = l_A__loc1_; C_S_84* _p29743 = rt::as_ptr<C_S_84>(_o29742); _p29743 ? _p29743->f_S_1i : rt::dget(_o29742, NM_S_1i); })), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__22_v__id, g::SV.C_S_0_3d___id, false)));
    return rt::NUL;
}
bool C_S__27__21_A::m_S__3e_I() {
    RT_FN("S__27__21_A.S__3e_I");
    return ({ bool _t29746 = ({ bool _t29745 = ({ bool _t29744 = (!this->f_S__3c__21_7); _t29744 ? (bool)(this->g_S__2b__21_a()) : _t29744; }); _t29745 ? (bool)((!this->f_S__3f__21_6)) : _t29745; }); _t29746 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t29746; });
    return false;
}
bool C_S__27__21_A::m_S__2b__60_() {
    RT_FN("S__27__21_A.S__2b__60_");
    return ({ bool _t29749 = ({ bool _t29748 = ({ bool _t29747 = (!this->f_S__3c__21_7); _t29747 ? (bool)(this->g_S__2b__21_a()) : _t29747; }); _t29748 ? (bool)((!this->f_S__3f__21_6)) : _t29748; }); _t29749 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t29749; });
    return false;
}
bool C_S__27__21_A::m_S_9_21__3f_() {
    RT_FN("S__27__21_A.S_9_21__3f_");
    return ({ bool _t29751 = ({ bool _t29750 = (!this->f_S__3c__21_7); _t29750 ? (bool)(this->f_S__3f__21_6) : _t29750; }); _t29751 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y))))) : _t29751; });
    return false;
}
bool C_S__27__21_A::g_S__20__21_3() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__27__21_A.S__20__21_3_get");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(g::SV.C_S_7I__id));
    return ({ bool _t29762 = ({ bool _t29757 = ({ bool _t29754 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29754 ? (bool)(({ rt::Value _o29752 = C_S_8G::sm_S__21__21_H(g::SV.C_S__22_v__id); C_S__60_6* _p29753 = rt::as_ptr<C_S__60_6>(_o29752); _p29753 ? _p29753->f_S__3f__21_6 : rt::T(rt::dget(_o29752, NM_S__3f__21_6)); })) : _t29754; }); _t29757 ? (bool)(({ rt::Value _o29755 = C_S_8G::sm_S__21__21_H(g::SV.C_S_0_3d___id); C_S__60_6* _p29756 = rt::as_ptr<C_S__60_6>(_o29755); _p29756 ? _p29756->f_S__3f__21_6 : rt::T(rt::dget(_o29755, NM_S__3f__21_6)); })) : _t29757; }); _t29762 ? (bool)(((({ rt::Value _o29758 = l_A__loc1_; C_S_84* _p29759 = rt::as_ptr<C_S_84>(_o29758); _p29759 ? _p29759->g_S_2_2d_() : rt::tonum(rt::dget(_o29758, NM_S_2_2d_)); }) + ({ rt::Value _o29760 = l_A__loc1_; C_S_84* _p29761 = rt::as_ptr<C_S_84>(_o29760); _p29761 ? _p29761->g_S_5_21_L() : rt::tonum(rt::dget(_o29760, NM_S_5_21_L)); })) >= 333.0)) : _t29762; });
    return false;
}
bool C_S__27__21_A::g_S_9_21__25_() {
    RT_FN("S__27__21_A.S_9_21__25__get");
    return ({ bool _t29763 = (!this->m_S_9_21_F()); _t29763 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))) : _t29763; });
    return false;
}
double C_S__27__21_A::sm_S_3_21_Z() {
    RT_FN("S__27__21_A.S_3_21_Z");
    return (2.0 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7));
    return 0.0;
}
double C_S__27__21_A::sm_S__3b__22_K() {
    RT_FN("S__27__21_A.S__3b__22_K");
    return 10.0;
    return 0.0;
}
C_S__27__21_A* C_S__27__21_A::alloc_() {
    C_S__27__21_A* o = rt::make<C_S__27__21_A>();
    return o;
}
rt::Value C_S__27__21_A::mk_(rt::Value* a, int n) {
    C_S__27__21_A* o = alloc_();
    o->C_S__27__21_A::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_A::dget(int id, rt::Value& out) {
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
bool C_S__27__21_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__27__21_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__27__21_A::dmeth(int id) {
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
bool C_S__27__21_A::smeth_(int id) {
    switch (id) {
    case NM_S_3_21_Z: return true;
    case NM_S__3b__22_K: return true;
    default: return false;
    }
}
bool C_S__27__21_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21_A__id)); return true;
    case NM_ids: out = g::SV.C_S__27__21_A__ids; return true;
    case NM_S_3_21_Z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3b__22_K: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__21_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21_A__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__27__21_A__ids = v; return true;
    default: return false;
    }
}
bool C_S__27__21_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_3_21_Z: out = rt::V(sm_S_3_21_Z()); return true;
    case NM_S__3b__22_K: out = rt::V(sm_S__3b__22_K()); return true;
    default: return false;
    }
}
void C_S__27__22_3::ctor_() {
    RT_FN("S__27__22_3.S__27__22_3");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29764 = 1045.0; this->f_S_6_21_Z = rt::touint_d(_v29764); _v29764; });
    ({ rt::Value _v29765 = rt::trv(rt::VS(g::LS[8638])); this->f_S_1i = rt::slot_string(_v29765); _v29765; });
    ({ double _v29766 = 32.0; this->f_S__22__21_U = rt::toint_d(_v29766); _v29766; });
    ({ double _v29767 = 3.0; this->f_S__21_G = rt::toint_d(_v29767); _v29767; });
    ({ double _v29768 = 5625.0; this->f_S__25_w = rt::toint_d(_v29768); _v29768; });
}
rt::Value C_S__27__22_3::m_S__40__22_() {
    RT_FN("S__27__22_3.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8639]), C_S__26_c::sm_S_8_21_Z(C_S__27__22_3::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__27__22_3::m_S_8_5b_() {
    RT_FN("S__27__22_3.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sg_S__40_e(), 5e+150, rt::trv(rt::VS(g::LS[8640])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__27__22_3::g_S__20__21_3() {
    RT_FN("S__27__22_3.S__20__21_3_get");
    return ({ bool _t29770 = ({ bool _t29769 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29769 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t29769; }); _t29770 ? (bool)((C_S_8G::sg_S__40_e() >= 5e+150)) : _t29770; });
    return false;
}
double C_S__27__22_3::sm_S__2c__21_G() {
    RT_FN("S__27__22_3.S__2c__21_G");
    return rt::m_pow((0.5 * rt::m_log((1.0 + C_S__26_c::sg_S__40_e()))), 1.25);
    return 0.0;
}
C_S__27__22_3* C_S__27__22_3::alloc_() {
    C_S__27__22_3* o = rt::make<C_S__27__22_3>();
    return o;
}
rt::Value C_S__27__22_3::mk_(rt::Value* a, int n) {
    C_S__27__22_3* o = alloc_();
    o->C_S__27__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__27__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__27__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__27__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__27__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__27__22_3::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__27__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22_3__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22_3__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__27__22_G::ctor_() {
    RT_FN("S__27__22_G.S__27__22_G");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29771 = 1181.0; this->f_S_6_21_Z = rt::touint_d(_v29771); _v29771; });
    ({ rt::Value _v29772 = rt::trv(rt::VS(g::LS[8641])); this->f_S_1i = rt::slot_string(_v29772); _v29772; });
    ({ double _v29773 = 11.0; this->f_S__22__21_U = rt::toint_d(_v29773); _v29773; });
    ({ double _v29774 = 6.0; this->f_S__21_G = rt::toint_d(_v29774); _v29774; });
    ({ double _v29775 = 13750.0; this->f_S__25_w = rt::toint_d(_v29775); _v29775; });
}
rt::Value C_S__27__22_G::m_S__40__22_() {
    RT_FN("S__27__22_G.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8642]), C_S__26_c::sm_S_6_21_T(C_S__27__22_G::sm_S__2b__2b_(), 5.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__27__22_G::m_S_8_5b_() {
    RT_FN("S__27__22_G.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_M__id, true), 4000.0, C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_M__id, true, true, C_S__26_c::dsm_S__3e__21__26__3()), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__27__22_G::g_S__20__21_3() {
    RT_FN("S__27__22_G.S__20__21_3_get");
    return ({ bool _t29777 = ({ bool _t29776 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29776 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__21__21_p__id)) : _t29776; }); _t29777 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_M__id, true) >= 4000.0)) : _t29777; });
    return false;
}
double C_S__27__22_G::sm_S__2b__2b_() {
    RT_FN("S__27__22_G.S__2b__2b_");
    return (2.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__20__21_q(rt::toint_d(96.0), C_S__26_c::dsm_S__20__21_q_1(), C_S__26_c::dsm_S__20__21_q_2()))), 2.0));
    return 0.0;
}
C_S__27__22_G* C_S__27__22_G::alloc_() {
    C_S__27__22_G* o = rt::make<C_S__27__22_G>();
    return o;
}
rt::Value C_S__27__22_G::mk_(rt::Value* a, int n) {
    C_S__27__22_G* o = alloc_();
    o->C_S__27__22_G::ctor_();
    return rt::VO(o);
}
bool C_S__27__22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__27__22_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__27__22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__27__22_G::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__27__22_G::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__27__22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22_G__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__27__2c_::ctor_() {
    RT_FN("S__27__2c_.S__27__2c_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29778 = 244.0; this->f_S_6_21_Z = rt::touint_d(_v29778); _v29778; });
    ({ rt::Value _v29779 = rt::trv(rt::VS(g::LS[8643])); this->f_S_1i = rt::slot_string(_v29779); _v29779; });
    ({ double _v29780 = 12.0; this->f_S__22__21_U = rt::toint_d(_v29780); _v29780; });
    ({ double _v29781 = 4.0; this->f_S__21_G = rt::toint_d(_v29781); _v29781; });
    ({ double _v29782 = 250.0; this->f_S__25_w = rt::toint_d(_v29782); _v29782; });
    ({ bool _v29783 = false; this->f_S__3d_z = _v29783; _v29783; });
}
rt::Value C_S__27__2c_::m_S__40__22_() {
    RT_FN("S__27__2c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8644]), C_S__26_c::sm_S_8_21_Z(C_S__27__2c_::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__27__2c_::m_S_8_5b_() {
    RT_FN("S__27__2c_.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__60__21__3e___id, g::SV.C_S__40_6__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__27__2c_::g_S__20__21_3() {
    RT_FN("S__27__2c_.S__20__21_3_get");
    return ({ bool _t29789 = ({ bool _t29786 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29786 ? (bool)(({ rt::Value _o29784 = C_S_8G::sm_S__21__21_H(g::SV.C_S__60__21__3e___id); C_S__60_6* _p29785 = rt::as_ptr<C_S__60_6>(_o29784); _p29785 ? _p29785->f_S__3f__21_6 : rt::T(rt::dget(_o29784, NM_S__3f__21_6)); })) : _t29786; }); _t29789 ? (bool)(({ rt::Value _o29787 = C_S_8G::sm_S__21__21_H(g::SV.C_S__40_6__id); C_S__60_6* _p29788 = rt::as_ptr<C_S__60_6>(_o29787); _p29788 ? _p29788->f_S__3f__21_6 : rt::T(rt::dget(_o29787, NM_S__3f__21_6)); })) : _t29789; });
    return false;
}
double C_S__27__2c_::sm_S__5e_y() {
    RT_FN("S__27__2c_.S__5e_y");
    return rt::m_floor((rt::m_pow(((double)(C_S__26_c::sm_S__26__21__3c_(C_S__26_c::dsm_S__26__21__3c__0(), C_S__26_c::dsm_S__26__21__3c__1()))), 0.92) / 25.0));
    return 0.0;
}
C_S__27__2c_* C_S__27__2c_::alloc_() {
    C_S__27__2c_* o = rt::make<C_S__27__2c_>();
    return o;
}
rt::Value C_S__27__2c_::mk_(rt::Value* a, int n) {
    C_S__27__2c_* o = alloc_();
    o->C_S__27__2c_::ctor_();
    return rt::VO(o);
}
bool C_S__27__2c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__27__2c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__27__2c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__27__2c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__27__2c_::smeth_(int id) {
    switch (id) {
    case NM_S__5e_y: return true;
    default: return false;
    }
}
bool C_S__27__2c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__2c___id)); return true;
    case NM_ids: out = g::SV.C_S__27__2c___ids; return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__2c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__2c___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__27__2c___ids = v; return true;
    default: return false;
    }
}
bool C_S__27__2c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5e_y: out = rt::V(sm_S__5e_y()); return true;
    default: return false;
    }
}
void C_S__27_A::ctor_() {
    RT_FN("S__27_A.S__27_A");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29790 = 276.0; this->f_S_6_21_Z = rt::touint_d(_v29790); _v29790; });
    ({ rt::Value _v29791 = rt::trv(rt::VS(g::LS[8646])); this->f_S_1i = rt::slot_string(_v29791); _v29791; });
    ({ double _v29792 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v29792); _v29792; });
    ({ double _v29793 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29793); _v29793; });
    ({ double _v29794 = 10.0; this->f_S__22__21_U = rt::toint_d(_v29794); _v29794; });
    ({ double _v29795 = 2.0; this->f_S__21_G = rt::toint_d(_v29795); _v29795; });
    ({ double _v29796 = 0.0; this->f_S__5e__21_C = rt::toint_d(_v29796); _v29796; });
    ({ double _v29797 = 225.0; this->f_S__25_w = rt::toint_d(_v29797); _v29797; });
    ({ bool _v29798 = false; this->f_S__3d_z = _v29798; _v29798; });
}
rt::Value C_S__27_A::m_S__40__22_() {
    RT_FN("S__27_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8647]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__27_A::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__27_A::m_S_9_21__3f_() {
    RT_FN("S__27_A.S_9_21__3f_");
    return ({ bool _t29800 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29800 ? _t29800 : (bool)(({ bool _t29799 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t29799 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_1_21_N__id))) : _t29799; })); });
    return false;
}
rt::Value C_S__27_A::m_S_8_5b_() {
    RT_FN("S__27_A.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__20_I__id, g::SV.C_S__5d__21_2__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__27_A::g_S__20__21_3() {
    RT_FN("S__27_A.S__20__21_3_get");
    return ({ bool _t29806 = ({ bool _t29803 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29803 ? (bool)(({ rt::Value _o29801 = C_S_8G::sm_S__21__21_H(g::SV.C_S__20_I__id); C_S__60_6* _p29802 = rt::as_ptr<C_S__60_6>(_o29801); _p29802 ? _p29802->f_S__3f__21_6 : rt::T(rt::dget(_o29801, NM_S__3f__21_6)); })) : _t29803; }); _t29806 ? (bool)(({ rt::Value _o29804 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5d__21_2__id); C_S__60_6* _p29805 = rt::as_ptr<C_S__60_6>(_o29804); _p29805 ? _p29805->f_S__3f__21_6 : rt::T(rt::dget(_o29804, NM_S__3f__21_6)); })) : _t29806; });
    return false;
}
bool C_S__27_A::g_S_9_21__25_() {
    RT_FN("S__27_A.S_9_21__25__get");
    return ({ bool _t29809 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29809 ? _t29809 : (bool)(({ bool _t29808 = ({ bool _t29807 = (!this->m_S_9_21_F()); _t29807 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29807; }); _t29808 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_1_21_N__id)) : _t29808; })); });
    return false;
}
double C_S__27_A::sm_S__26_s() {
    RT_FN("S__27_A.S__26_s");
    return (2.5 * rt::m_pow(C_S__26_c::sm_S_2_21__26_(), 0.8));
    return 0.0;
}
C_S__27_A* C_S__27_A::alloc_() {
    C_S__27_A* o = rt::make<C_S__27_A>();
    return o;
}
rt::Value C_S__27_A::mk_(rt::Value* a, int n) {
    C_S__27_A* o = alloc_();
    o->C_S__27_A::ctor_();
    return rt::VO(o);
}
bool C_S__27_A::dget(int id, rt::Value& out) {
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
bool C_S__27_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__27_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__27_A::dmeth(int id) {
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
bool C_S__27_A::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__27_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27_A__id)); return true;
    case NM_ids: out = g::SV.C_S__27_A__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27_A__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__27_A__ids = v; return true;
    default: return false;
    }
}
bool C_S__27_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__2b__21_j::ctor_() {
    RT_FN("S__2b__21_j.S__2b__21_j");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29810 = 716.0; this->f_S_6_21_Z = rt::touint_d(_v29810); _v29810; });
    ({ rt::Value _v29811 = rt::trv(rt::VS(g::LS[8649])); this->f_S_1i = rt::slot_string(_v29811); _v29811; });
    ({ double _v29812 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v29812); _v29812; });
    ({ double _v29813 = 29.0; this->f_S__22__21_U = rt::toint_d(_v29813); _v29813; });
    ({ double _v29814 = 3.0; this->f_S__21_G = rt::toint_d(_v29814); _v29814; });
    ({ double _v29815 = 11.0; this->f_S__5e__21_C = rt::toint_d(_v29815); _v29815; });
    ({ double _v29816 = 3250.0; this->f_S__25_w = rt::toint_d(_v29816); _v29816; });
    ({ bool _v29817 = false; this->f_S__3d_z = _v29817; _v29817; });
}
rt::Value C_S__2b__21_j::m_S__40__22_() {
    RT_FN("S__2b__21_j.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8650]), C_S__26_c::sm_S_8_21_Z(C_S__2b__21_j::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2b__21_j::m_S_8_5b_() {
    RT_FN("S__2b__21_j.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__5d__40___id, g::SV.C_S__2d__21_h__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__2b__21_j::g_S__20__21_3() {
    RT_FN("S__2b__21_j.S__20__21_3_get");
    return ({ bool _t29823 = ({ bool _t29820 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29820 ? (bool)(({ rt::Value _o29818 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5d__40___id); C_S__60_6* _p29819 = rt::as_ptr<C_S__60_6>(_o29818); _p29819 ? _p29819->f_S__3f__21_6 : rt::T(rt::dget(_o29818, NM_S__3f__21_6)); })) : _t29820; }); _t29823 ? (bool)(({ rt::Value _o29821 = C_S_8G::sm_S__21__21_H(g::SV.C_S__2d__21_h__id); C_S__60_6* _p29822 = rt::as_ptr<C_S__60_6>(_o29821); _p29822 ? _p29822->f_S__3f__21_6 : rt::T(rt::dget(_o29821, NM_S__3f__21_6)); })) : _t29823; });
    return false;
}
double C_S__2b__21_j::sm_S_5_21_B() {
    RT_FN("S__2b__21_j.S_5_21_B");
    return (5.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2()))), 2.5));
    return 0.0;
}
C_S__2b__21_j* C_S__2b__21_j::alloc_() {
    C_S__2b__21_j* o = rt::make<C_S__2b__21_j>();
    return o;
}
rt::Value C_S__2b__21_j::mk_(rt::Value* a, int n) {
    C_S__2b__21_j* o = alloc_();
    o->C_S__2b__21_j::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_j::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2b__21_j::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2b__21_j::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2b__21_j::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2b__21_j::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    default: return false;
    }
}
bool C_S__2b__21_j::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_j__id)); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__21_j::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_j__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__21_j::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    default: return false;
    }
}
void C_S__2b__22_A::ctor_() {
    RT_FN("S__2b__22_A.S__2b__22_A");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29824 = 1073.0; this->f_S_6_21_Z = rt::touint_d(_v29824); _v29824; });
    ({ rt::Value _v29825 = rt::trv(rt::VS(g::LS[8651])); this->f_S_1i = rt::slot_string(_v29825); _v29825; });
    ({ double _v29826 = 34.0; this->f_S__22__21_U = rt::toint_d(_v29826); _v29826; });
    ({ double _v29827 = 4.0; this->f_S__21_G = rt::toint_d(_v29827); _v29827; });
    ({ double _v29828 = 10875.0; this->f_S__25_w = rt::toint_d(_v29828); _v29828; });
}
rt::Value C_S__2b__22_A::m_S__40__22_() {
    RT_FN("S__2b__22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8652]), C_S__26_c::sm_S_8_21_Z(C_S__2b__22_A::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__2b__22_A::sm_S__22__21__26_() {
    RT_FN("S__2b__22_A.S__22__21__26_");
    return (1.3 * rt::m_pow(C_S__26_c::sm_S__22__21_B(C_S__26_c::sm_S__3b__21_4(C_S__26_c::sm_S_7_22_B(C_S__26_c::sm_S_8_22_3(g::SV.C_S_8G__S__2c__21_Y), C_S__26_c::sm_S_8_22_3(g::SV.C_S_8G__S_9_21_m))), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7));
    return 0.0;
}
C_S__2b__22_A* C_S__2b__22_A::alloc_() {
    C_S__2b__22_A* o = rt::make<C_S__2b__22_A>();
    return o;
}
rt::Value C_S__2b__22_A::mk_(rt::Value* a, int n) {
    C_S__2b__22_A* o = alloc_();
    o->C_S__2b__22_A::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2b__22_A::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2b__22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2b__22_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2b__22_A::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__2b__22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22_A__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__2b__22_G::ctor_() {
    RT_FN("S__2b__22_G.S__2b__22_G");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29829 = 1174.0; this->f_S_6_21_Z = rt::touint_d(_v29829); _v29829; });
    ({ rt::Value _v29830 = rt::trv(rt::VS(g::LS[8653])); this->f_S_1i = rt::slot_string(_v29830); _v29830; });
    ({ double _v29831 = 41.0; this->f_S__22__21_U = rt::toint_d(_v29831); _v29831; });
    ({ double _v29832 = 1.0; this->f_S__21_G = rt::toint_d(_v29832); _v29832; });
    ({ double _v29833 = 13500.0; this->f_S__25_w = rt::toint_d(_v29833); _v29833; });
}
rt::Value C_S__2b__22_G::m_S__40__22_() {
    RT_FN("S__2b__22_G.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8654]), C_S__26_c::sm_S_6_21_T(C_S__2b__22_G::sm_S__26_s(), 5.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__2b__22_G::m_S_8_5b_() {
    RT_FN("S__2b__22_G.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__21__2d_(true, true), 1000000000000000.0, rt::trv(rt::VS(g::LS[8655])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__2b__22_G::g_S__20__21_3() {
    RT_FN("S__2b__22_G.S__20__21_3_get");
    return ({ bool _t29835 = ({ bool _t29834 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29834 ? (bool)(C_S__26_c::sm_S__5d_B(g::SV.C_S__60_O__id, true)) : _t29834; }); _t29835 ? (bool)((C_S__26_c::sm_S__21__2d_(true, true) >= 1000000000000000.0)) : _t29835; });
    return false;
}
double C_S__2b__22_G::sm_S__26_s() {
    RT_FN("S__2b__22_G.S__26_s");
    return (0.75 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.25));
    return 0.0;
}
C_S__2b__22_G* C_S__2b__22_G::alloc_() {
    C_S__2b__22_G* o = rt::make<C_S__2b__22_G>();
    return o;
}
rt::Value C_S__2b__22_G::mk_(rt::Value* a, int n) {
    C_S__2b__22_G* o = alloc_();
    o->C_S__2b__22_G::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2b__22_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2b__22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2b__22_G::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2b__22_G::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__2b__22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22_G__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__2b__25_::ctor_() {
    RT_FN("S__2b__25_.S__2b__25_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29836 = 439.0; this->f_S_6_21_Z = rt::touint_d(_v29836); _v29836; });
    ({ rt::Value _v29837 = rt::trv(rt::VS(g::LS[8656])); this->f_S_1i = rt::slot_string(_v29837); _v29837; });
    ({ double _v29838 = 15.0; this->f_S__22__21_U = rt::toint_d(_v29838); _v29838; });
    ({ double _v29839 = 2.0; this->f_S__21_G = rt::toint_d(_v29839); _v29839; });
    ({ double _v29840 = 270.0; this->f_S__25_w = rt::toint_d(_v29840); _v29840; });
}
rt::Value C_S__2b__25_::m_S__40__22_() {
    RT_FN("S__2b__25_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8657]), C_S__26_c::sm_S_8_21_Z(C_S__2b__25_::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__2b__25_::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2b__25_::m_S_8_21_s() {
    RT_FN("S__2b__25_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8658])));
    return rt::NUL;
}
rt::Value C_S__2b__25_::m_S_8_5b_() {
    RT_FN("S__2b__25_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(0.0, 1.0, rt::trv(rt::VS(g::LS[8659])), C_S__26__21__5f_::dm_S__3f__21_N_3(), C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__2b__25_::g_S__20__21_3() {
    RT_FN("S__2b__25_.S__20__21_3_get");
    return ({ bool _t29841 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29841 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b_7__id)) : _t29841; });
    return false;
}
double C_S__2b__25_::sm_S__60_z() {
    RT_FN("S__2b__25_.S__60_z");
    return (50.0 * rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 1.1));
    return 0.0;
}
double C_S__2b__25_::sm_S__3f__21__3c_() {
    RT_FN("S__2b__25_.S__3f__21__3c_");
    return rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 0.95);
    return 0.0;
}
C_S__2b__25_* C_S__2b__25_::alloc_() {
    C_S__2b__25_* o = rt::make<C_S__2b__25_>();
    return o;
}
rt::Value C_S__2b__25_::mk_(rt::Value* a, int n) {
    C_S__2b__25_* o = alloc_();
    o->C_S__2b__25_::ctor_();
    return rt::VO(o);
}
bool C_S__2b__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2b__25_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2b__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2b__25_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2b__25_::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__2b__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__25___id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__25___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__2b_v::ctor_() {
    RT_FN("S__2b_v.S__2b_v");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29842 = 258.0; this->f_S_6_21_Z = rt::touint_d(_v29842); _v29842; });
    ({ rt::Value _v29843 = rt::trv(rt::VS(g::LS[8660])); this->f_S_1i = rt::slot_string(_v29843); _v29843; });
    ({ double _v29844 = 12.0; this->f_S__22__21_U = rt::toint_d(_v29844); _v29844; });
    ({ double _v29845 = 1.0; this->f_S__21_G = rt::toint_d(_v29845); _v29845; });
    ({ double _v29846 = 250.0; this->f_S__25_w = rt::toint_d(_v29846); _v29846; });
    ({ bool _v29847 = false; this->f_S__3d_z = _v29847; _v29847; });
}
rt::Value C_S__2b_v::m_S__40__22_() {
    RT_FN("S__2b_v.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[8661]), C_S__26_c::sm_S_8_21_Z(C_S__2b_v::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[8450]), C_S__26_c::sm_S_8_21_Z(C_S__2b_v::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
rt::Value C_S__2b_v::m_S_8_5b_() {
    RT_FN("S__2b_v.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__5e_e__id, g::SV.C_S__22__3d___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__2b_v::g_S__20__21_3() {
    RT_FN("S__2b_v.S__20__21_3_get");
    return ({ bool _t29853 = ({ bool _t29850 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29850 ? (bool)(({ rt::Value _o29848 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5e_e__id); C_S__60_6* _p29849 = rt::as_ptr<C_S__60_6>(_o29848); _p29849 ? _p29849->f_S__3f__21_6 : rt::T(rt::dget(_o29848, NM_S__3f__21_6)); })) : _t29850; }); _t29853 ? (bool)(({ rt::Value _o29851 = C_S_8G::sm_S__21__21_H(g::SV.C_S__22__3d___id); C_S__60_6* _p29852 = rt::as_ptr<C_S__60_6>(_o29851); _p29852 ? _p29852->f_S__3f__21_6 : rt::T(rt::dget(_o29851, NM_S__3f__21_6)); })) : _t29853; });
    return false;
}
double C_S__2b_v::sm_S__2c_J() {
    RT_FN("S__2b_v.S__2c_J");
    return (9.0 * rt::m_pow(C_S__26_c::sm_S_3L(false, C_S__26_c::dsm_S_3L_1()), 0.9));
    return 0.0;
}
double C_S__2b_v::sm_S__23__21_Y() {
    RT_FN("S__2b_v.S__23__21_Y");
    return 50.0;
    return 0.0;
}
C_S__2b_v* C_S__2b_v::alloc_() {
    C_S__2b_v* o = rt::make<C_S__2b_v>();
    return o;
}
rt::Value C_S__2b_v::mk_(rt::Value* a, int n) {
    C_S__2b_v* o = alloc_();
    o->C_S__2b_v::ctor_();
    return rt::VO(o);
}
bool C_S__2b_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2b_v::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2b_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2b_v::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2b_v::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__2b_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b_v__id)); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b_v__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__2b_z::ctor_() {
    RT_FN("S__2b_z.S__2b_z");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29854 = 430.0; this->f_S_6_21_Z = rt::touint_d(_v29854); _v29854; });
    ({ rt::Value _v29855 = rt::trv(rt::VS(g::LS[8662])); this->f_S_1i = rt::slot_string(_v29855); _v29855; });
    ({ double _v29856 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v29856); _v29856; });
    ({ double _v29857 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29857); _v29857; });
    ({ double _v29858 = 18.0; this->f_S__22__21_U = rt::toint_d(_v29858); _v29858; });
    ({ double _v29859 = 1.0; this->f_S__21_G = rt::toint_d(_v29859); _v29859; });
    ({ double _v29860 = 6.0; this->f_S__5e__21_C = rt::toint_d(_v29860); _v29860; });
    ({ double _v29861 = 375.0; this->f_S__25_w = rt::toint_d(_v29861); _v29861; });
    ({ bool _v29862 = false; this->f_S__3d_z = _v29862; _v29862; });
}
rt::Value C_S__2b_z::m_S__40__22_() {
    RT_FN("S__2b_z.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8663])));
    return rt::NUL;
}
rt::Value C_S__2b_z::m_S_8_5b_() {
    RT_FN("S__2b_z.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__20_Y__id, g::SV.C_S__40_b__id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__2b_z::m_S_9_21__3f_() {
    RT_FN("S__2b_z.S_9_21__3f_");
    return ({ bool _t29866 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t29866 ? _t29866 : (bool)(({ bool _t29865 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t29865 ? (bool)((!({ rt::Value _o29863 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id); C_S_84* _p29864 = rt::as_ptr<C_S_84>(_o29863); _p29864 ? _p29864->g_S__2d_6() : rt::T(rt::dget(_o29863, NM_S__2d_6)); }))) : _t29865; })); });
    return false;
}
bool C_S__2b_z::g_S__20__21_3() {
    RT_FN("S__2b_z.S__20__21_3_get");
    return ({ bool _t29872 = ({ bool _t29869 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29869 ? (bool)(({ rt::Value _o29867 = C_S_8G::sm_S__21__21_H(g::SV.C_S__20_Y__id); C_S__60_6* _p29868 = rt::as_ptr<C_S__60_6>(_o29867); _p29868 ? _p29868->f_S__3f__21_6 : rt::T(rt::dget(_o29867, NM_S__3f__21_6)); })) : _t29869; }); _t29872 ? (bool)(({ rt::Value _o29870 = C_S_8G::sm_S__21__21_H(g::SV.C_S__40_b__id); C_S__60_6* _p29871 = rt::as_ptr<C_S__60_6>(_o29870); _p29871 ? _p29871->f_S__3f__21_6 : rt::T(rt::dget(_o29870, NM_S__3f__21_6)); })) : _t29872; });
    return false;
}
bool C_S__2b_z::g_S_9_21__25_() {
    RT_FN("S__2b_z.S_9_21__25__get");
    return ({ bool _t29877 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t29877 ? _t29877 : (bool)(({ bool _t29876 = ({ bool _t29873 = (!this->m_S_9_21_F()); _t29873 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t29873; }); _t29876 ? (bool)(({ rt::Value _o29874 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id); C_S_84* _p29875 = rt::as_ptr<C_S_84>(_o29874); _p29875 ? _p29875->g_S__2d_6() : rt::T(rt::dget(_o29874, NM_S__2d_6)); })) : _t29876; })); });
    return false;
}
C_S__2b_z* C_S__2b_z::alloc_() {
    C_S__2b_z* o = rt::make<C_S__2b_z>();
    return o;
}
rt::Value C_S__2b_z::mk_(rt::Value* a, int n) {
    C_S__2b_z* o = alloc_();
    o->C_S__2b_z::ctor_();
    return rt::VO(o);
}
bool C_S__2b_z::dget(int id, rt::Value& out) {
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
bool C_S__2b_z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2b_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__2b_z::dmeth(int id) {
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
bool C_S__2b_z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b_z__id)); return true;
    default: return false;
    }
}
bool C_S__2b_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b_z__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__21_1::ctor_() {
    RT_FN("S__2c__21_1.S__2c__21_1");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29878 = 537.0; this->f_S_6_21_Z = rt::touint_d(_v29878); _v29878; });
    ({ rt::Value _v29879 = rt::trv(rt::VS(g::LS[8664])); this->f_S_1i = rt::slot_string(_v29879); _v29879; });
    ({ double _v29880 = 22.0; this->f_S__22__21_U = rt::toint_d(_v29880); _v29880; });
    ({ double _v29881 = 0.0; this->f_S__21_G = rt::toint_d(_v29881); _v29881; });
    ({ double _v29882 = 475.0; this->f_S__25_w = rt::toint_d(_v29882); _v29882; });
}
rt::Value C_S__2c__21_1::m_S__40__22_() {
    RT_FN("S__2c__21_1.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8665]), C_S__26_c::sm_S_8_21_Z(C_S__2c__21_1::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__2c__21_1::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2c__21_1::m_S_8_21_s() {
    RT_FN("S__2c__21_1.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8666])));
    return rt::NUL;
}
rt::Value C_S__2c__21_1::m_S_8_5b_() {
    RT_FN("S__2c__21_1.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S_8G::sg_S__3b__21__20_())), 30.0, rt::trv(rt::VS(g::LS[8667])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__2c__21_1::g_S__20__21_3() {
    RT_FN("S__2c__21_1.S__20__21_3_get");
    return ({ bool _t29883 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29883 ? (bool)((((double)(C_S_8G::sg_S__3b__21__20_())) >= 30.0)) : _t29883; });
    return false;
}
double C_S__2c__21_1::sm_S__60_z() {
    RT_FN("S__2c__21_1.S__60_z");
    return (75.0 * rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 1.1));
    return 0.0;
}
double C_S__2c__21_1::sm_S_2_21_W() {
    RT_FN("S__2c__21_1.S_2_21_W");
    return (5.0 * rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 1.05));
    return 0.0;
}
C_S__2c__21_1* C_S__2c__21_1::alloc_() {
    C_S__2c__21_1* o = rt::make<C_S__2c__21_1>();
    return o;
}
rt::Value C_S__2c__21_1::mk_(rt::Value* a, int n) {
    C_S__2c__21_1* o = alloc_();
    o->C_S__2c__21_1::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2c__21_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2c__21_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2c__21_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2c__21_1::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S__2c__21_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21_1__id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__21_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21_1__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__21_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S__2c__21_M::ctor_() {
    RT_FN("S__2c__21_M.S__2c__21_M");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29884 = 297.0; this->f_S_6_21_Z = rt::touint_d(_v29884); _v29884; });
    ({ rt::Value _v29885 = rt::trv(rt::VS(g::LS[8668])); this->f_S_1i = rt::slot_string(_v29885); _v29885; });
    ({ double _v29886 = 12.0; this->f_S__22__21_U = rt::toint_d(_v29886); _v29886; });
    ({ double _v29887 = 0.0; this->f_S__21_G = rt::toint_d(_v29887); _v29887; });
    ({ double _v29888 = 250.0; this->f_S__25_w = rt::toint_d(_v29888); _v29888; });
    ({ bool _v29889 = false; this->f_S__3d_z = _v29889; _v29889; });
}
rt::Value C_S__2c__21_M::m_S__40__22_() {
    RT_FN("S__2c__21_M.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8669]), C_S__26_c::sm_S_6_21_T(C_S__2c__21_M::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__2c__21_M::m_S_8_5b_() {
    RT_FN("S__2c__21_M.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__27_A__id, g::SV.C_S__5e__5b___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__2c__21_M::g_S__20__21_3() {
    RT_FN("S__2c__21_M.S__20__21_3_get");
    return ({ bool _t29895 = ({ bool _t29892 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29892 ? (bool)(({ rt::Value _o29890 = C_S_8G::sm_S__21__21_H(g::SV.C_S__27_A__id); C_S__60_6* _p29891 = rt::as_ptr<C_S__60_6>(_o29890); _p29891 ? _p29891->f_S__3f__21_6 : rt::T(rt::dget(_o29890, NM_S__3f__21_6)); })) : _t29892; }); _t29895 ? (bool)(({ rt::Value _o29893 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5e__5b___id); C_S__60_6* _p29894 = rt::as_ptr<C_S__60_6>(_o29893); _p29894 ? _p29894->f_S__3f__21_6 : rt::T(rt::dget(_o29893, NM_S__3f__21_6)); })) : _t29895; });
    return false;
}
double C_S__2c__21_M::sm_S__26_s() {
    RT_FN("S__2c__21_M.S__26_s");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S_3_22__26_(true, C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()), 0.58));
    return 0.0;
}
C_S__2c__21_M* C_S__2c__21_M::alloc_() {
    C_S__2c__21_M* o = rt::make<C_S__2c__21_M>();
    return o;
}
rt::Value C_S__2c__21_M::mk_(rt::Value* a, int n) {
    C_S__2c__21_M* o = alloc_();
    o->C_S__2c__21_M::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2c__21_M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2c__21_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2c__21_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2c__21_M::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__2c__21_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21_M__id)); return true;
    case NM_ids: out = g::SV.C_S__2c__21_M__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__21_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21_M__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c__21_M__ids = v; return true;
    default: return false;
    }
}
bool C_S__2c__21_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__2c__21__5b_::ctor_() {
    RT_FN("S__2c__21__5b_.S__2c__21__5b_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29896 = 625.0; this->f_S_6_21_Z = rt::touint_d(_v29896); _v29896; });
    ({ rt::Value _v29897 = rt::trv(rt::VS(g::LS[8671])); this->f_S_1i = rt::slot_string(_v29897); _v29897; });
    ({ double _v29898 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v29898); _v29898; });
    ({ double _v29899 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29899); _v29899; });
    ({ double _v29900 = 25.0; this->f_S__22__21_U = rt::toint_d(_v29900); _v29900; });
    ({ double _v29901 = 3.0; this->f_S__21_G = rt::toint_d(_v29901); _v29901; });
    ({ double _v29902 = 12.0; this->f_S__5e__21_C = rt::toint_d(_v29902); _v29902; });
    ({ double _v29903 = 1225.0; this->f_S__25_w = rt::toint_d(_v29903); _v29903; });
}
rt::Value C_S__2c__21__5b_::m_S__40__22_() {
    RT_FN("S__2c__21__5b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1944]), rt::dcallv(rt::V(C_S__2c__21__5b_::sm_S__2c__21_G()), rt::N_toFixed, rt::V(1.0))));
    return rt::NUL;
}
rt::Value C_S__2c__21__5b_::m_S_8_21_s() {
    RT_FN("S__2c__21__5b_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8672])));
    return rt::NUL;
}
rt::Value C_S__2c__21__5b_::m_S_8_5b_() {
    RT_FN("S__2c__21__5b_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__40__21__5b_(true, false, true), 1000000000000.0, rt::trv(rt::VS(g::LS[3381])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__2c__21__5b_::g_S__20__21_3() {
    RT_FN("S__2c__21__5b_.S__20__21_3_get");
    return ({ bool _t29905 = ({ bool _t29904 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29904 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2_21_7__id)) : _t29904; }); _t29905 ? (bool)((C_S__26_c::sm_S__40__21__5b_(true, false, true) >= 1000000000000.0)) : _t29905; });
    return false;
}
double C_S__2c__21__5b_::sm_S__2c__21_G() {
    RT_FN("S__2c__21__5b_.S__2c__21_G");
    return 0.7;
    return 0.0;
}
C_S__2c__21__5b_* C_S__2c__21__5b_::alloc_() {
    C_S__2c__21__5b_* o = rt::make<C_S__2c__21__5b_>();
    return o;
}
rt::Value C_S__2c__21__5b_::mk_(rt::Value* a, int n) {
    C_S__2c__21__5b_* o = alloc_();
    o->C_S__2c__21__5b_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21__5b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2c__21__5b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2c__21__5b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2c__21__5b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2c__21__5b_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__2c__21__5b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21__5b___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__21__5b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21__5b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__21__5b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__2c__22_3::ctor_() {
    RT_FN("S__2c__22_3.S__2c__22_3");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29906 = 1052.0; this->f_S_6_21_Z = rt::touint_d(_v29906); _v29906; });
    ({ rt::Value _v29907 = rt::trv(rt::VS(g::LS[8673])); this->f_S_1i = rt::slot_string(_v29907); _v29907; });
    ({ double _v29908 = 31.0; this->f_S__22__21_U = rt::toint_d(_v29908); _v29908; });
    ({ double _v29909 = 0.0; this->f_S__21_G = rt::toint_d(_v29909); _v29909; });
    ({ double _v29910 = 5375.0; this->f_S__25_w = rt::toint_d(_v29910); _v29910; });
    ({ double _v29911 = 5.0; this->f_S_9_21_m = rt::toint_d(_v29911); _v29911; });
}
rt::Value C_S__2c__22_3::m_S__40__22_() {
    RT_FN("S__2c__22_3.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8674]), C_S__26_c::sm_S_8_21_Z(C_S__2c__22_3::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__2c__22_3::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2c__22_3::m_S__3e_I() {
    RT_FN("S__2c__22_3.S__3e_I");
    return ({ bool _t29914 = ({ bool _t29913 = ({ bool _t29912 = (!this->f_S__3c__21_7); _t29912 ? (bool)(this->g_S__2b__21_a()) : _t29912; }); _t29913 ? (bool)((!this->f_S__3f__21_6)) : _t29913; }); _t29914 ? (bool)((!(((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m))))) : _t29914; });
    return false;
}
bool C_S__2c__22_3::m_S__2b__60_() {
    RT_FN("S__2c__22_3.S__2b__60_");
    return ({ bool _t29917 = ({ bool _t29916 = ({ bool _t29915 = (!this->f_S__3c__21_7); _t29915 ? (bool)(this->g_S__2b__21_a()) : _t29915; }); _t29916 ? (bool)((!this->f_S__3f__21_6)) : _t29916; }); _t29917 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)))) : _t29917; });
    return false;
}
bool C_S__2c__22_3::m_S_9_21__3f_() {
    RT_FN("S__2c__22_3.S_9_21__3f_");
    return ({ bool _t29919 = ({ bool _t29918 = (!this->f_S__3c__21_7); _t29918 ? (bool)(this->f_S__3f__21_6) : _t29918; }); _t29919 ? (bool)((!(((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m))))) : _t29919; });
    return false;
}
bool C_S__2c__22_3::g_S_9_21__25_() {
    RT_FN("S__2c__22_3.S_9_21__25__get");
    return ({ bool _t29920 = (!this->m_S_9_21_F()); _t29920 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)))) : _t29920; });
    return false;
}
double C_S__2c__22_3::sm_S__60_z() {
    RT_FN("S__2c__22_3.S__60_z");
    return (1000.0 + (80.0 * rt::m_pow(C_S__26_c::sm_S__22__22__20_(true, C_S__26_c::dsm_S__22__22__20__1(), C_S__26_c::dsm_S__22__22__20__2()), 0.8)));
    return 0.0;
}
double C_S__2c__22_3::sm_S__3f__21__3c_() {
    RT_FN("S__2c__22_3.S__3f__21__3c_");
    return (5.5 + (0.55 * rt::m_pow(C_S__26_c::sm_S__22__22__20_(true, C_S__26_c::dsm_S__22__22__20__1(), C_S__26_c::dsm_S__22__22__20__2()), 0.55)));
    return 0.0;
}
C_S__2c__22_3* C_S__2c__22_3::alloc_() {
    C_S__2c__22_3* o = rt::make<C_S__2c__22_3>();
    return o;
}
rt::Value C_S__2c__22_3::mk_(rt::Value* a, int n) {
    C_S__2c__22_3* o = alloc_();
    o->C_S__2c__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e_I: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b__60_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2c__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2c__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e_I: out = rt::VB(m_S__3e_I()); return true;
    case NM_S__2b__60_: out = rt::VB(m_S__2b__60_()); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2c__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e_I: return true;
    case NM_S__2b__60_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2c__22_3::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__2c__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_3__id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22_3__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__2c__22_4::ctor_() {
    RT_FN("S__2c__22_4.S__2c__22_4");
    (void)((this->C_S__20__22_5::ctor_(), rt::NUL));
    ({ double _v29921 = 1028.0; this->f_S_6_21_Z = rt::touint_d(_v29921); _v29921; });
    ({ rt::Value _v29922 = rt::trv(rt::VS(g::LS[8675])); this->f_S_1i = rt::slot_string(_v29922); _v29922; });
    ({ rt::Value _v29923 = rt::VS(g::LS[8676]); this->f_S__5e__21__23_ = rt::slot_string(_v29923); _v29923; });
    ({ double _v29924 = 0.0; this->f_S__21_G = rt::toint_d(_v29924); _v29924; });
    ({ double _v29925 = 0.0; this->f_S__5e__21_C = rt::toint_d(_v29925); _v29925; });
    ({ double _v29926 = 1.0; this->f_S__26__22_L = rt::toint_d(_v29926); _v29926; });
    ({ double _v29927 = 5.0; this->f_S__27__22_L = rt::toint_d(_v29927); _v29927; });
}
bool C_S__2c__22_4::g_S__2d_6() {
    RT_FN("S__2c__22_4.S__2d_6_get");
    return ({ bool _t29928 = this->C_S__20__22_5::g_S__2d_6(); _t29928 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2_22_5__id)) : _t29928; });
    return false;
}
C_S__2c__22_4* C_S__2c__22_4::alloc_() {
    C_S__2c__22_4* o = rt::make<C_S__2c__22_4>();
    return o;
}
rt::Value C_S__2c__22_4::mk_(rt::Value* a, int n) {
    C_S__2c__22_4* o = alloc_();
    o->C_S__2c__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__20__22_5::dget(id, out);
}
bool C_S__2c__22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__20__22_5::dset(id, v);
}
bool C_S__2c__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__22_5::dcall(id, a, n, out);
}
bool C_S__2c__22_4::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__20__22_5::dmeth(id);
}
bool C_S__2c__22_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_4__id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__22_5::ctor_() {
    RT_FN("S__2c__22_5.S__2c__22_5");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29929 = 1059.0; this->f_S_6_21_Z = rt::touint_d(_v29929); _v29929; });
    ({ rt::Value _v29930 = rt::trv(rt::VS(g::LS[8677])); this->f_S_1i = rt::slot_string(_v29930); _v29930; });
    ({ double _v29931 = 30.0; this->f_S__22__21_U = rt::toint_d(_v29931); _v29931; });
    ({ double _v29932 = 5.0; this->f_S__21_G = rt::toint_d(_v29932); _v29932; });
    ({ double _v29933 = 5125.0; this->f_S__25_w = rt::toint_d(_v29933); _v29933; });
}
rt::Value C_S__2c__22_5::m_S__40__22_() {
    RT_FN("S__2c__22_5.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8678]), C_S__26_c::sm_S_6_21_T(C_S__2c__22_5::sm_S__26_s(), 4.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__2c__22_5::m_S_8_5b_() {
    RT_FN("S__2c__22_5.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_O__id, true), 50000.0, rt::trv(rt::VS(g::LS[3648])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__2c__22_5::g_S__20__21_3() {
    RT_FN("S__2c__22_5.S__20__21_3_get");
    return ({ bool _t29935 = ({ bool _t29934 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29934 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) : _t29934; }); _t29935 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_O__id, true) >= 50000.0)) : _t29935; });
    return false;
}
double C_S__2c__22_5::sm_S__26_s() {
    RT_FN("S__2c__22_5.S__26_s");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.25));
    return 0.0;
}
C_S__2c__22_5* C_S__2c__22_5::alloc_() {
    C_S__2c__22_5* o = rt::make<C_S__2c__22_5>();
    return o;
}
rt::Value C_S__2c__22_5::mk_(rt::Value* a, int n) {
    C_S__2c__22_5* o = alloc_();
    o->C_S__2c__22_5::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2c__22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2c__22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2c__22_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2c__22_5::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__2c__22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_5__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__2c_9::ctor_() {
    RT_FN("S__2c_9.S__2c_9");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29936 = 263.0; this->f_S_6_21_Z = rt::touint_d(_v29936); _v29936; });
    ({ rt::Value _v29937 = rt::trv(rt::VS(g::LS[8679])); this->f_S_1i = rt::slot_string(_v29937); _v29937; });
    ({ double _v29938 = 5.0; this->f_S__22__21_U = rt::toint_d(_v29938); _v29938; });
    ({ double _v29939 = 1.0; this->f_S__21_G = rt::toint_d(_v29939); _v29939; });
    ({ double _v29940 = 105.0; this->f_S__25_w = rt::toint_d(_v29940); _v29940; });
}
rt::Value C_S__2c_9::m_S__40__22_() {
    RT_FN("S__2c_9.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8680]), C_S__26_c::sm_S_8_21_Z(C_S__2c_9::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2c_9::m_S_8_21_s() {
    RT_FN("S__2c_9.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8681])));
    return rt::NUL;
}
rt::Value C_S__2c_9::m_S_8_5b_() {
    RT_FN("S__2c_9.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 4.0))), 25000.0, rt::trv(rt::VS(g::LS[8604])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__2c_9::g_S__20__21_3() {
    RT_FN("S__2c_9.S__20__21_3_get");
    return ({ bool _t29941 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29941 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 4.0)), rt::V(25000.0))) : _t29941; });
    return false;
}
double C_S__2c_9::sm_S__23__21_Y() {
    RT_FN("S__2c_9.S__23__21_Y");
    return (1.0 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.5));
    return 0.0;
}
C_S__2c_9* C_S__2c_9::alloc_() {
    C_S__2c_9* o = rt::make<C_S__2c_9>();
    return o;
}
rt::Value C_S__2c_9::mk_(rt::Value* a, int n) {
    C_S__2c_9* o = alloc_();
    o->C_S__2c_9::ctor_();
    return rt::VO(o);
}
bool C_S__2c_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2c_9::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2c_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2c_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2c_9::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__2c_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c_9__id)); return true;
    case NM_ids: out = g::SV.C_S__2c_9__ids; return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c_9__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c_9__ids = v; return true;
    default: return false;
    }
}
bool C_S__2c_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__2c_x::ctor_() {
    RT_FN("S__2c_x.S__2c_x");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29942 = 539.0; this->f_S_6_21_Z = rt::touint_d(_v29942); _v29942; });
    ({ rt::Value _v29943 = rt::trv(rt::VS(g::LS[8683])); this->f_S_1i = rt::slot_string(_v29943); _v29943; });
    ({ double _v29944 = 20.0; this->f_S__22__21_U = rt::toint_d(_v29944); _v29944; });
    ({ double _v29945 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v29945); _v29945; });
    ({ double _v29946 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29946); _v29946; });
    ({ double _v29947 = 0.0; this->f_S__21_G = rt::toint_d(_v29947); _v29947; });
    ({ double _v29948 = 10.0; this->f_S__5e__21_C = rt::toint_d(_v29948); _v29948; });
    ({ double _v29949 = 525.0; this->f_S__25_w = rt::toint_d(_v29949); _v29949; });
}
rt::Value C_S__2c_x::m_S__40__22_() {
    RT_FN("S__2c_x.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[8684]), C_S__26_c::sm_S_8_21_Z(C_S__2c_x::sm_S__26__22_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[8685]), C_S__26_c::sm_S_6_21_T(C_S__2c_x::sm_S__2b__2b_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))));
    return rt::NUL;
}
rt::Value C_S__2c_x::m_S_8_21_s() {
    RT_FN("S__2c_x.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8686])));
    return rt::NUL;
}
rt::Value C_S__2c_x::m_S_8_5b_() {
    RT_FN("S__2c_x.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(({ rt::Value _o29950 = C_S_8G::sm_S__23_N(g::SV.C_S__40_W__id); C_S_84* _p29951 = rt::as_ptr<C_S_84>(_o29950); _p29951 ? _p29951->g_S__3f_j() : rt::tonum(rt::dget(_o29950, NM_S__3f_j)); }), 3600.0, rt::trv(rt::VS(g::LS[8687])), false, true));
    return rt::NUL;
}
bool C_S__2c_x::g_S__20__21_3() {
    RT_FN("S__2c_x.S__20__21_3_get");
    return ({ bool _t29954 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29954 ? (bool)((({ rt::Value _o29952 = C_S_8G::sm_S__23_N(g::SV.C_S__40_W__id); C_S_84* _p29953 = rt::as_ptr<C_S_84>(_o29952); _p29953 ? _p29953->g_S__3f_j() : rt::tonum(rt::dget(_o29952, NM_S__3f_j)); }) >= 3600.0)) : _t29954; });
    return false;
}
double C_S__2c_x::sm_S__26__22_B() {
    RT_FN("S__2c_x.S__26__22_B");
    return (100.0 + (3.0 * rt::m_pow(C_S__26_c::sm_S_3L(false, C_S__26_c::dsm_S_3L_1()), 0.9)));
    return 0.0;
}
double C_S__2c_x::sm_S__2b__2b_() {
    RT_FN("S__2c_x.S__2b__2b_");
    return (1.2 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__40_W__id, false, false, C_S__26_c::dsm_S_7i_3()), 0.8));
    return 0.0;
}
C_S__2c_x* C_S__2c_x::alloc_() {
    C_S__2c_x* o = rt::make<C_S__2c_x>();
    return o;
}
rt::Value C_S__2c_x::mk_(rt::Value* a, int n) {
    C_S__2c_x* o = alloc_();
    o->C_S__2c_x::ctor_();
    return rt::VO(o);
}
bool C_S__2c_x::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2c_x::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2c_x::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2c_x::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2c_x::smeth_(int id) {
    switch (id) {
    case NM_S__26__22_B: return true;
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__2c_x::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c_x__id)); return true;
    case NM_S__26__22_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c_x::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c_x__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c_x::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26__22_B: out = rt::V(sm_S__26__22_B()); return true;
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__2d__21_K::ctor_() {
    RT_FN("S__2d__21_K.S__2d__21_K");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v29955 = 549.0; this->f_S_6_21_Z = rt::touint_d(_v29955); _v29955; });
    ({ rt::Value _v29956 = rt::trv(rt::VS(g::LS[8688])); this->f_S_1i = rt::slot_string(_v29956); _v29956; });
    ({ rt::Value _v29957 = rt::VS(g::LS[8689]); this->f_S__5e__21__23_ = rt::slot_string(_v29957); _v29957; });
    ({ double _v29958 = 1e+200; this->f_S__3e__3d_ = _v29958; _v29958; });
    ({ bool _v29959 = true; this->f_S__25__21__3e_ = _v29959; _v29959; });
    ({ bool _v29960 = true; this->f_S__3f_T = _v29960; _v29960; });
    ({ double _v29961 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v29961); _v29961; });
    ({ bool _v29962 = false; this->f_S_3e = _v29962; _v29962; });
}
rt::Value C_S__2d__21_K::m_S__40__22_() {
    RT_FN("S__2d__21_K.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8690])));
    return rt::NUL;
}
int32_t C_S__2d__21_K::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__2d__21_K::dm_S_75_2() { return false; }
rt::Value C_S__2d__21_K::dm_S_75_3() { return rt::NUL; }
double C_S__2d__21_K::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__2d__21_K.S_75");
    if (C_S__26_c::sm_S__3e__25_(l_param1)) {
        return 10000000.0;
    }
    return 0.0;
    return 0.0;
}
bool C_S__2d__21_K::g_S__2d_6() {
    RT_FN("S__2d__21_K.S__2d_6_get");
    return ({ bool _t29964 = (({ bool _t29963 = C_S_8G::sm_S_7d(g::SV.C_S_3_21_F__id); _t29963 ? _t29963 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__23_x__id)); })); _t29964 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__21_X__id)) : _t29964; });
    return false;
}
bool C_S__2d__21_K::g_S__26_8() {
    RT_FN("S__2d__21_K.S__26_8_get");
    return false;
    return false;
}
C_S__2d__21_K* C_S__2d__21_K::alloc_() {
    C_S__2d__21_K* o = rt::make<C_S__2d__21_K>();
    return o;
}
rt::Value C_S__2d__21_K::mk_(rt::Value* a, int n) {
    C_S__2d__21_K* o = alloc_();
    o->C_S__2d__21_K::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__21_K::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__21_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__2d__21_K::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__2d__21_K::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__2d__21_K::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__21_K::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__21_K::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__21_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_K__id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__21_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__21_S::ctor_() {
    RT_FN("S__2d__21_S.S__2d__21_S");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29965 = 521.0; this->f_S_6_21_Z = rt::touint_d(_v29965); _v29965; });
    ({ rt::Value _v29966 = rt::trv(rt::VS(g::LS[8691])); this->f_S_1i = rt::slot_string(_v29966); _v29966; });
    ({ double _v29967 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v29967); _v29967; });
    ({ double _v29968 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29968); _v29968; });
    ({ double _v29969 = 22.0; this->f_S__22__21_U = rt::toint_d(_v29969); _v29969; });
    ({ double _v29970 = 4.0; this->f_S__21_G = rt::toint_d(_v29970); _v29970; });
    ({ double _v29971 = 10.0; this->f_S__5e__21_C = rt::toint_d(_v29971); _v29971; });
    ({ double _v29972 = 575.0; this->f_S__25_w = rt::toint_d(_v29972); _v29972; });
}
rt::Value C_S__2d__21_S::m_S__40__22_() {
    RT_FN("S__2d__21_S.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8692]), C_S__26_c::sm_S_8_21_Z(C_S__2d__21_S::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2d__21_S::m_S_8_21_s() {
    RT_FN("S__2d__21_S.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8693])));
    return rt::NUL;
}
rt::Value C_S__2d__21_S::m_S_8_5b_() {
    RT_FN("S__2d__21_S.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__21__2d_(true, true), 10000.0, rt::trv(rt::VS(g::LS[8406])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__2d__21_S::g_S__20__21_3() {
    RT_FN("S__2d__21_S.S__20__21_3_get");
    return ({ bool _t29973 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29973 ? (bool)((C_S__26_c::sm_S__21__2d_(true, true) >= 10000.0)) : _t29973; });
    return false;
}
double C_S__2d__21_S::sm_S__3f__21__3c_() {
    RT_FN("S__2d__21_S.S__3f__21__3c_");
    return (4.5 * rt::m_pow(((double)(C_S__26_c::sm_S__26__21__3c_(C_S__26_c::dsm_S__26__21__3c__0(), C_S__26_c::dsm_S__26__21__3c__1()))), 0.45));
    return 0.0;
}
C_S__2d__21_S* C_S__2d__21_S::alloc_() {
    C_S__2d__21_S* o = rt::make<C_S__2d__21_S>();
    return o;
}
rt::Value C_S__2d__21_S::mk_(rt::Value* a, int n) {
    C_S__2d__21_S* o = alloc_();
    o->C_S__2d__21_S::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_S::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2d__21_S::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2d__21_S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2d__21_S::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2d__21_S::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__2d__21_S::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_S__id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_S::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_S__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__21_S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__2d__21_T::ctor_() {
    RT_FN("S__2d__21_T.S__2d__21_T");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29974 = 286.0; this->f_S_6_21_Z = rt::touint_d(_v29974); _v29974; });
    ({ rt::Value _v29975 = rt::trv(rt::VS(g::LS[8694])); this->f_S_1i = rt::slot_string(_v29975); _v29975; });
    ({ double _v29976 = 8.0; this->f_S__22__21_U = rt::toint_d(_v29976); _v29976; });
    ({ double _v29977 = 3.0; this->f_S__21_G = rt::toint_d(_v29977); _v29977; });
    ({ double _v29978 = 150.0; this->f_S__25_w = rt::toint_d(_v29978); _v29978; });
    ({ bool _v29979 = false; this->f_S__3d_z = _v29979; _v29979; });
}
rt::Value C_S__2d__21_T::m_S__40__22_() {
    RT_FN("S__2d__21_T.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8695]), C_S__26_c::sm_S_8_21_Z(C_S__2d__21_T::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2d__21_T::m_S_8_5b_() {
    RT_FN("S__2d__21_T.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S__22__25___id, g::SV.C_S_5_24___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S__2d__21_T::g_S__20__21_3() {
    RT_FN("S__2d__21_T.S__20__21_3_get");
    return ({ bool _t29985 = ({ bool _t29982 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29982 ? (bool)(({ rt::Value _o29980 = C_S_8G::sm_S__21__21_H(g::SV.C_S__22__25___id); C_S__60_6* _p29981 = rt::as_ptr<C_S__60_6>(_o29980); _p29981 ? _p29981->f_S__3f__21_6 : rt::T(rt::dget(_o29980, NM_S__3f__21_6)); })) : _t29982; }); _t29985 ? (bool)(({ rt::Value _o29983 = C_S_8G::sm_S__21__21_H(g::SV.C_S_5_24___id); C_S__60_6* _p29984 = rt::as_ptr<C_S__60_6>(_o29983); _p29984 ? _p29984->f_S__3f__21_6 : rt::T(rt::dget(_o29983, NM_S__3f__21_6)); })) : _t29985; });
    return false;
}
double C_S__2d__21_T::sm_S__5e_y() {
    RT_FN("S__2d__21_T.S__5e_y");
    return (2.5 * rt::m_floor(rt::m_pow(C_S__23__21__21_::sm_S__40__21__3f_(), 0.5)));
    return 0.0;
}
C_S__2d__21_T* C_S__2d__21_T::alloc_() {
    C_S__2d__21_T* o = rt::make<C_S__2d__21_T>();
    return o;
}
rt::Value C_S__2d__21_T::mk_(rt::Value* a, int n) {
    C_S__2d__21_T* o = alloc_();
    o->C_S__2d__21_T::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_T::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2d__21_T::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2d__21_T::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2d__21_T::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2d__21_T::smeth_(int id) {
    switch (id) {
    case NM_S__5e_y: return true;
    default: return false;
    }
}
bool C_S__2d__21_T::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_T__id)); return true;
    case NM_ids: out = g::SV.C_S__2d__21_T__ids; return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_T::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_T__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2d__21_T__ids = v; return true;
    default: return false;
    }
}
bool C_S__2d__21_T::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5e_y: out = rt::V(sm_S__5e_y()); return true;
    default: return false;
    }
}
void C_S__2d__21_h::ctor_() {
    RT_FN("S__2d__21_h.S__2d__21_h");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v29986 = 718.0; this->f_S_6_21_Z = rt::touint_d(_v29986); _v29986; });
    ({ rt::Value _v29987 = rt::trv(rt::VS(g::LS[8697])); this->f_S_1i = rt::slot_string(_v29987); _v29987; });
    ({ double _v29988 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v29988); _v29988; });
    ({ double _v29989 = 28.0; this->f_S__22__21_U = rt::toint_d(_v29989); _v29989; });
    ({ double _v29990 = 0.0; this->f_S__21_G = rt::toint_d(_v29990); _v29990; });
    ({ double _v29991 = 11.0; this->f_S__5e__21_C = rt::toint_d(_v29991); _v29991; });
    ({ double _v29992 = 2900.0; this->f_S__25_w = rt::toint_d(_v29992); _v29992; });
}
rt::Value C_S__2d__21_h::m_S_8_5b_() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S__2d__21_h.S_8_5b_");
    (l_A__loc1_ = rt::touint_d((C_S_8G::sm_S_7d(g::SV.C_S__3b__21_i__id) ? ((double)(g::SV.C_S__5d__2b___id)) : ((C_S_8G::sm_S_7d(g::SV.C_S__21__21_i__id) ? ((double)(g::SV.C_S_1_21_O__id)) : ((C_S_8G::sm_S_7d(g::SV.C_S__5e__21_j__id) ? ((double)(g::SV.C_S__26_S__id)) : 0.0)))))));
    return rt::slot_string(this->m_S__3f__21_N(((!(((double)(l_A__loc1_)) == 0.0)) ? C_S_8G::sm_S__25_Z(l_A__loc1_, true) : 0.0), g::SV.C_S__2d__21_h__S__5b__21_, ((!(((double)(l_A__loc1_)) == 0.0)) ? C_S__26_c::sm_S__3e__21__26_(l_A__loc1_, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()) : rt::trv(rt::VS(g::LS[8698]))), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
rt::Value C_S__2d__21_h::m_S__40__22_() {
    RT_FN("S__2d__21_h.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1852]), C_S__26_c::sm_S_6_21_T(C_S__2d__21_h::sm_S__26_s(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__2d__21_h::m_S_8_21_s() {
    RT_FN("S__2d__21_h.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8699])));
    return rt::NUL;
}
bool C_S__2d__21_h::g_S__20__21_3() {
    RT_FN("S__2d__21_h.S__20__21_3_get");
    return ({ bool _t29999 = ({ bool _t29993 = this->C_S__26__21__5f_::g_S__20__21_3(); _t29993 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_i__id)) : _t29993; }); _t29999 ? (bool)((({ bool _t29998 = ({ bool _t29996 = ({ bool _t29994 = C_S_8G::sm_S_7d(g::SV.C_S__3b__21_i__id); _t29994 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__5d__2b___id, true) >= g::SV.C_S__2d__21_h__S__5b__21_)) : _t29994; }); _t29996 ? _t29996 : (bool)(({ bool _t29995 = C_S_8G::sm_S_7d(g::SV.C_S__21__21_i__id); _t29995 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S_1_21_O__id, true) >= g::SV.C_S__2d__21_h__S__5b__21_)) : _t29995; })); }); _t29998 ? _t29998 : (bool)(({ bool _t29997 = C_S_8G::sm_S_7d(g::SV.C_S__5e__21_j__id); _t29997 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__26_S__id, true) >= g::SV.C_S__2d__21_h__S__5b__21_)) : _t29997; })); }))) : _t29999; });
    return false;
}
bool C_S__2d__21_h::g_S_9_21__25_() {
    RT_FN("S__2d__21_h.S_9_21__25__get");
    return ({ bool _t30000 = (!this->m_S_9_21_F()); _t30000 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == ((double)(this->f_S__2d__21__5e_)))) : _t30000; });
    return false;
}
double C_S__2d__21_h::sm_S__26_s() {
    RT_FN("S__2d__21_h.S__26_s");
    return (10.0 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 1.05));
    return 0.0;
}
C_S__2d__21_h* C_S__2d__21_h::alloc_() {
    C_S__2d__21_h* o = rt::make<C_S__2d__21_h>();
    return o;
}
rt::Value C_S__2d__21_h::mk_(rt::Value* a, int n) {
    C_S__2d__21_h* o = alloc_();
    o->C_S__2d__21_h::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_h::dget(int id, rt::Value& out) {
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
bool C_S__2d__21_h::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2d__21_h::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__2d__21_h::dmeth(int id) {
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
bool C_S__2d__21_h::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__2d__21_h::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_h__id)); return true;
    case NM_S__5b__21_: out = rt::V(g::SV.C_S__2d__21_h__S__5b__21_); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_h::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_h__id = rt::touint(v); return true;
    case NM_S__5b__21_: g::SV.C_S__2d__21_h__S__5b__21_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2d__21_h::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__2d__22__3e_::ctor_() {
    RT_FN("S__2d__22__3e_.S__2d__22__3e_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30001 = 1096.0; this->f_S_6_21_Z = rt::touint_d(_v30001); _v30001; });
    ({ rt::Value _v30002 = rt::trv(rt::VS(g::LS[8700])); this->f_S_1i = rt::slot_string(_v30002); _v30002; });
    ({ double _v30003 = 34.0; this->f_S__22__21_U = rt::toint_d(_v30003); _v30003; });
    ({ double _v30004 = 5.0; this->f_S__21_G = rt::toint_d(_v30004); _v30004; });
    ({ double _v30005 = 10875.0; this->f_S__25_w = rt::toint_d(_v30005); _v30005; });
}
rt::Value C_S__2d__22__3e_::m_S__40__22_() {
    RT_FN("S__2d__22__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8701]), C_S__26_c::sm_S_8_21_Z(C_S__2d__22__3e_::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__2d__22__3e_::sm_S_5_21_B() {
    RT_FN("S__2d__22__3e_.S_5_21_B");
    return (8.0 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.8));
    return 0.0;
}
C_S__2d__22__3e_* C_S__2d__22__3e_::alloc_() {
    C_S__2d__22__3e_* o = rt::make<C_S__2d__22__3e_>();
    return o;
}
rt::Value C_S__2d__22__3e_::mk_(rt::Value* a, int n) {
    C_S__2d__22__3e_* o = alloc_();
    o->C_S__2d__22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2d__22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2d__22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2d__22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2d__22__3e_::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    default: return false;
    }
}
bool C_S__2d__22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22__3e___id)); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    default: return false;
    }
}
void C_S__2d__22_4::ctor_() {
    RT_FN("S__2d__22_4.S__2d__22_4");
    (void)((this->C_S__20__22_5::ctor_(), rt::NUL));
    ({ double _v30006 = 1030.0; this->f_S_6_21_Z = rt::touint_d(_v30006); _v30006; });
    ({ rt::Value _v30007 = rt::trv(rt::VS(g::LS[8702])); this->f_S_1i = rt::slot_string(_v30007); _v30007; });
    ({ rt::Value _v30008 = rt::VS(g::LS[8703]); this->f_S__5e__21__23_ = rt::slot_string(_v30008); _v30008; });
    ({ double _v30009 = 5.0; this->f_S__21_G = rt::toint_d(_v30009); _v30009; });
    ({ double _v30010 = 5.0; this->f_S__5e__21_C = rt::toint_d(_v30010); _v30010; });
    ({ double _v30011 = 2.0; this->f_S__26__22_L = rt::toint_d(_v30011); _v30011; });
    ({ double _v30012 = 5.0; this->f_S__27__22_L = rt::toint_d(_v30012); _v30012; });
}
bool C_S__2d__22_4::g_S__2d_6() {
    RT_FN("S__2d__22_4.S__2d_6_get");
    return ({ bool _t30013 = this->C_S__20__22_5::g_S__2d_6(); _t30013 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9_22_5__id)) : _t30013; });
    return false;
}
C_S__2d__22_4* C_S__2d__22_4::alloc_() {
    C_S__2d__22_4* o = rt::make<C_S__2d__22_4>();
    return o;
}
rt::Value C_S__2d__22_4::mk_(rt::Value* a, int n) {
    C_S__2d__22_4* o = alloc_();
    o->C_S__2d__22_4::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__20__22_5::dget(id, out);
}
bool C_S__2d__22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__20__22_5::dset(id, v);
}
bool C_S__2d__22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__20__22_5::dcall(id, a, n, out);
}
bool C_S__2d__22_4::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__20__22_5::dmeth(id);
}
bool C_S__2d__22_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_4__id)); return true;
    default: return false;
    }
}
bool C_S__2d__22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__22__3d_::ctor_() {
    RT_FN("S__2d__22__3d_.S__2d__22__3d_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30014 = 1092.0; this->f_S_6_21_Z = rt::touint_d(_v30014); _v30014; });
    ({ rt::Value _v30015 = rt::trv(rt::VS(g::LS[8704])); this->f_S_1i = rt::slot_string(_v30015); _v30015; });
    ({ double _v30016 = 34.0; this->f_S__22__21_U = rt::toint_d(_v30016); _v30016; });
    ({ double _v30017 = 0.0; this->f_S__21_G = rt::toint_d(_v30017); _v30017; });
    ({ double _v30018 = 10875.0; this->f_S__25_w = rt::toint_d(_v30018); _v30018; });
}
rt::Value C_S__2d__22__3d_::m_S__40__22_() {
    RT_FN("S__2d__22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8705]), C_S__26_c::sm_S_8_21_Z(C_S__2d__22__3d_::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__2d__22__3d_::sm_S__60_z() {
    RT_FN("S__2d__22__3d_.S__60_z");
    return (15.0 * rt::m_pow(rt::m_log((1.0 + rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 133.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 133.0))))), 3.0));
    return 0.0;
}
C_S__2d__22__3d_* C_S__2d__22__3d_::alloc_() {
    C_S__2d__22__3d_* o = rt::make<C_S__2d__22__3d_>();
    return o;
}
rt::Value C_S__2d__22__3d_::mk_(rt::Value* a, int n) {
    C_S__2d__22__3d_* o = alloc_();
    o->C_S__2d__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2d__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2d__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2d__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2d__22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    default: return false;
    }
}
bool C_S__2d__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22__3d___id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    default: return false;
    }
}
void C_S__2d__22_F::ctor_() {
    RT_FN("S__2d__22_F.S__2d__22_F");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30019 = 1165.0; this->f_S_6_21_Z = rt::touint_d(_v30019); _v30019; });
    ({ rt::Value _v30020 = rt::trv(rt::VS(g::LS[8706])); this->f_S_1i = rt::slot_string(_v30020); _v30020; });
    ({ double _v30021 = 39.0; this->f_S__22__21_U = rt::toint_d(_v30021); _v30021; });
    ({ double _v30022 = 0.0; this->f_S__21_G = rt::toint_d(_v30022); _v30022; });
    ({ double _v30023 = 12250.0; this->f_S__25_w = rt::toint_d(_v30023); _v30023; });
}
rt::Value C_S__2d__22_F::m_S__40__22_() {
    RT_FN("S__2d__22_F.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8707]), C_S__26_c::sm_S_8_21_Z(C_S__2d__22_F::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2d__22_F::m_S_8_5b_() {
    RT_FN("S__2d__22_F.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 45.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 45.0))), 28800.0, rt::trv(rt::VS(g::LS[8708])), false, true));
    return rt::NUL;
}
bool C_S__2d__22_F::g_S__20__21_3() {
    RT_FN("S__2d__22_F.S__20__21_3_get");
    return ({ bool _t30024 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30024 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 45.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 45.0)), rt::V(28800.0))) : _t30024; });
    return false;
}
double C_S__2d__22_F::sm_S__2c__21_G() {
    RT_FN("S__2d__22_F.S__2c__21_G");
    return (20.0 + (0.4 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(54.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.4)));
    return 0.0;
}
C_S__2d__22_F* C_S__2d__22_F::alloc_() {
    C_S__2d__22_F* o = rt::make<C_S__2d__22_F>();
    return o;
}
rt::Value C_S__2d__22_F::mk_(rt::Value* a, int n) {
    C_S__2d__22_F* o = alloc_();
    o->C_S__2d__22_F::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2d__22_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2d__22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2d__22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2d__22_F::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__2d__22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_F__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__2d__27_::ctor_() {
    RT_FN("S__2d__27_.S__2d__27_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30025 = 315.0; this->f_S_6_21_Z = rt::touint_d(_v30025); _v30025; });
    ({ rt::Value _v30026 = rt::trv(rt::VS(g::LS[8709])); this->f_S_1i = rt::slot_string(_v30026); _v30026; });
    ({ double _v30027 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v30027); _v30027; });
    ({ double _v30028 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v30028); _v30028; });
    ({ double _v30029 = 1.0; this->f_S__22__21_U = rt::toint_d(_v30029); _v30029; });
    ({ double _v30030 = 5.0; this->f_S__21_G = rt::toint_d(_v30030); _v30030; });
    ({ double _v30031 = 1.0; this->f_S__5e__21_C = rt::toint_d(_v30031); _v30031; });
    ({ double _v30032 = 10.0; this->f_S__25_w = rt::toint_d(_v30032); _v30032; });
}
rt::Value C_S__2d__27_::m_S__40__22_() {
    RT_FN("S__2d__27_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8401]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[8227]), C_S__26_c::sm_S_8_21_Z(130.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_1_21_G__id, C_S__26_c::dsm_S__3e__21__26__1(), C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), rt::trv(rt::VS(g::LS[1722]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_1_21_G__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S__2d__27_::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__2d__27_::m_S_8_21_s() {
    RT_FN("S__2d__27_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8710])));
    return rt::NUL;
}
bool C_S__2d__27_::m_S_9_21__3f_() {
    RT_FN("S__2d__27_.S_9_21__3f_");
    return ({ bool _t30034 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t30034 ? _t30034 : (bool)(({ bool _t30033 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t30033 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__3c__21_0__id))) : _t30033; })); });
    return false;
}
rt::Value C_S__2d__27_::m_S_8_5b_() {
    RT_FN("S__2d__27_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sm_S__25_Z(g::SV.C_S_1_21_G__id, true), 2000.0, C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_1_21_G__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S__2d__27_::g_S__20__21_3() {
    RT_FN("S__2d__27_.S__20__21_3_get");
    return ({ bool _t30035 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30035 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S_1_21_G__id, true) >= 2000.0)) : _t30035; });
    return false;
}
bool C_S__2d__27_::g_S_9_21__25_() {
    RT_FN("S__2d__27_.S_9_21__25__get");
    return ({ bool _t30038 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t30038 ? _t30038 : (bool)(({ bool _t30037 = ({ bool _t30036 = (!this->m_S_9_21_F()); _t30036 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t30036; }); _t30037 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__3c__21_0__id)) : _t30037; })); });
    return false;
}
double C_S__2d__27_::sm_S__26_s() {
    RT_FN("S__2d__27_.S__26_s");
    return (130.0 * C_S_8G::sm_S__25_Z(g::SV.C_S_1_21_G__id, C_S_8G::dsm_S__25_Z_1()));
    return 0.0;
}
C_S__2d__27_* C_S__2d__27_::alloc_() {
    C_S__2d__27_* o = rt::make<C_S__2d__27_>();
    return o;
}
rt::Value C_S__2d__27_::mk_(rt::Value* a, int n) {
    C_S__2d__27_* o = alloc_();
    o->C_S__2d__27_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__27_::dget(int id, rt::Value& out) {
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
bool C_S__2d__27_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2d__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__2d__27_::dmeth(int id) {
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
bool C_S__2d__27_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__2d__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__27___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__2d__27___S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__2d__27___ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__27___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__2d__27___S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__2d__27___ids = v; return true;
    default: return false;
    }
}
bool C_S__2d__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__2d__40_::ctor_() {
    RT_FN("S__2d__40_.S__2d__40_");
    (void)((this->C_S_8_21__26_::ctor_(), rt::NUL));
    ({ double _v30039 = 296.0; this->f_S_6_21_Z = rt::touint_d(_v30039); _v30039; });
    ({ rt::Value _v30040 = rt::trv(rt::VS(g::LS[8712])); this->f_S_1i = rt::slot_string(_v30040); _v30040; });
    ({ rt::Value _v30041 = rt::VS(g::LS[8713]); this->f_S__5e__21__23_ = rt::slot_string(_v30041); _v30041; });
    ({ rt::Value _v30042 = rt::trv(rt::VS(g::LS[8714])); this->f_S_7_23_ = rt::slot_string(_v30042); _v30042; });
    ({ double _v30043 = 5.0; this->f_S__21_G = rt::toint_d(_v30043); _v30043; });
    ({ double _v30044 = 5.0; this->f_S__5e__21_C = rt::toint_d(_v30044); _v30044; });
}
C_S__2d__40_* C_S__2d__40_::alloc_() {
    C_S__2d__40_* o = rt::make<C_S__2d__40_>();
    return o;
}
rt::Value C_S__2d__40_::mk_(rt::Value* a, int n) {
    C_S__2d__40_* o = alloc_();
    o->C_S__2d__40_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__40_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dget(id, out);
}
bool C_S__2d__40_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dset(id, v);
}
bool C_S__2d__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dcall(id, a, n, out);
}
bool C_S__2d__40_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S_8_21__26_::dmeth(id);
}
bool C_S__2d__40_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__40___id)); return true;
    case NM_ids: out = g::SV.C_S__2d__40___ids; return true;
    default: return false;
    }
}
bool C_S__2d__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__40___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2d__40___ids = v; return true;
    default: return false;
    }
}
bool C_S__2d__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__5d_::ctor_() {
    RT_FN("S__2d__5d_.S__2d__5d_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30045 = 622.0; this->f_S_6_21_Z = rt::touint_d(_v30045); _v30045; });
    ({ rt::Value _v30046 = rt::trv(rt::VS(g::LS[8716])); this->f_S_1i = rt::slot_string(_v30046); _v30046; });
    ({ double _v30047 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v30047); _v30047; });
    ({ double _v30048 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v30048); _v30048; });
    ({ double _v30049 = 25.0; this->f_S__22__21_U = rt::toint_d(_v30049); _v30049; });
    ({ double _v30050 = 2.0; this->f_S__21_G = rt::toint_d(_v30050); _v30050; });
    ({ double _v30051 = 12.0; this->f_S__5e__21_C = rt::toint_d(_v30051); _v30051; });
    ({ double _v30052 = 1175.0; this->f_S__25_w = rt::toint_d(_v30052); _v30052; });
}
rt::Value C_S__2d__5d_::m_S__40__22_() {
    RT_FN("S__2d__5d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8717]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21__60___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S__2d__5d_::sm_S__26_s(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__2d__5d_::m_S_9_21__3f_() {
    RT_FN("S__2d__5d_.S_9_21__3f_");
    return ({ bool _t30054 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t30054 ? _t30054 : (bool)(({ bool _t30053 = this->f_S__3f__21_6; _t30053 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__25__21_O__id))) : _t30053; })); });
    return false;
}
bool C_S__2d__5d_::g_S__20__21_3() {
    RT_FN("S__2d__5d_.S__20__21_3_get");
    return ({ bool _t30055 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30055 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2_21_7__id)) : _t30055; });
    return false;
}
bool C_S__2d__5d_::g_S_9_21__25_() {
    RT_FN("S__2d__5d_.S_9_21__25__get");
    return ({ bool _t30058 = (({ bool _t30057 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t30057 ? _t30057 : (bool)(({ bool _t30056 = (!this->m_S_9_21_F()); _t30056 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t30056; })); })); _t30058 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__25__21_O__id)) : _t30058; });
    return false;
}
double C_S__2d__5d_::sm_S__26_s() {
    RT_FN("S__2d__5d_.S__26_s");
    return (1.6 * rt::m_pow(C_S__26_c::sm_S_0F(C_S__26_c::dsm_S_0F_0()), 0.6));
    return 0.0;
}
C_S__2d__5d_* C_S__2d__5d_::alloc_() {
    C_S__2d__5d_* o = rt::make<C_S__2d__5d_>();
    return o;
}
rt::Value C_S__2d__5d_::mk_(rt::Value* a, int n) {
    C_S__2d__5d_* o = alloc_();
    o->C_S__2d__5d_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__5d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21__3f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S__2d__5d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S__2d__5d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__3f_: out = rt::VB(m_S_9_21__3f_()); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S__2d__5d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__3f_: return true;
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S__2d__5d_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__2d__5d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__5d___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__5d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__5d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__5d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_0_21_Y::ctor_() {
    RT_FN("S_0_21_Y.S_0_21_Y");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30059 = 300.0; this->f_S_6_21_Z = rt::touint_d(_v30059); _v30059; });
    ({ rt::Value _v30060 = rt::trv(rt::VS(g::LS[8718])); this->f_S_1i = rt::slot_string(_v30060); _v30060; });
    ({ double _v30061 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v30061); _v30061; });
    ({ double _v30062 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v30062); _v30062; });
    ({ double _v30063 = 2.0; this->f_S__22__21_U = rt::toint_d(_v30063); _v30063; });
    ({ double _v30064 = 0.0; this->f_S__21_G = rt::toint_d(_v30064); _v30064; });
    ({ double _v30065 = 0.0; this->f_S__5e__21_C = rt::toint_d(_v30065); _v30065; });
    ({ double _v30066 = 50.0; this->f_S__25_w = rt::toint_d(_v30066); _v30066; });
}
rt::Value C_S_0_21_Y::m_S__40__22_() {
    RT_FN("S_0_21_Y.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8719]), C_S__26_c::sm_S_8_21_Z(C_S_0_21_Y::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_0_21_Y::sm_S__3e__21_n(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_0_21_Y::m_S_8_21_s() {
    RT_FN("S_0_21_Y.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8720])));
    return rt::NUL;
}
bool C_S_0_21_Y::m_S_9_21__3f_() {
    RT_FN("S_0_21_Y.S_9_21__3f_");
    return ({ bool _t30068 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t30068 ? _t30068 : (bool)(({ bool _t30067 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t30067 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S_8_5d___id))) : _t30067; })); });
    return false;
}
rt::Value C_S_0_21_Y::m_S_8_5b_() {
    RT_FN("S_0_21_Y.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()), 10000.0, rt::trv(rt::VS(g::LS[627])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S_0_21_Y::g_S__20__21_3() {
    RT_FN("S_0_21_Y.S__20__21_3_get");
    return ({ bool _t30069 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30069 ? (bool)((C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()) >= 10000.0)) : _t30069; });
    return false;
}
bool C_S_0_21_Y::g_S_9_21__25_() {
    RT_FN("S_0_21_Y.S_9_21__25__get");
    return ({ bool _t30072 = (!this->m_S_9_21_F()); _t30072 ? (bool)((({ bool _t30071 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 3.0); _t30071 ? _t30071 : (bool)(({ bool _t30070 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t30070 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_8_5d___id)) : _t30070; })); }))) : _t30072; });
    return false;
}
double C_S_0_21_Y::sm_S__2c__21_G() {
    RT_FN("S_0_21_Y.S__2c__21_G");
    return rt::m_floor(rt::m_pow((C_S_8G::sm_S__25_Z(g::SV.C_S__5b_X__id, C_S_8G::dsm_S__25_Z_1()) / 600.0), 0.9));
    return 0.0;
}
double C_S_0_21_Y::sm_S__3e__21_n() {
    RT_FN("S_0_21_Y.S__3e__21_n");
    return 150.0;
    return 0.0;
}
C_S_0_21_Y* C_S_0_21_Y::alloc_() {
    C_S_0_21_Y* o = rt::make<C_S_0_21_Y>();
    return o;
}
rt::Value C_S_0_21_Y::mk_(rt::Value* a, int n) {
    C_S_0_21_Y* o = alloc_();
    o->C_S_0_21_Y::ctor_();
    return rt::VO(o);
}
bool C_S_0_21_Y::dget(int id, rt::Value& out) {
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
bool C_S_0_21_Y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_0_21_Y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S_0_21_Y::dmeth(int id) {
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
bool C_S_0_21_Y::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    case NM_S__3e__21_n: return true;
    default: return false;
    }
}
bool C_S_0_21_Y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21_Y__id)); return true;
    case NM_ids: out = g::SV.C_S_0_21_Y__ids; return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3e__21_n: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_21_Y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21_Y__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_0_21_Y__ids = v; return true;
    default: return false;
    }
}
bool C_S_0_21_Y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S__3e__21_n: out = rt::V(sm_S__3e__21_n()); return true;
    default: return false;
    }
}
void C_S_0_24_::ctor_() {
    RT_FN("S_0_24_.S_0_24_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30073 = 270.0; this->f_S_6_21_Z = rt::touint_d(_v30073); _v30073; });
    ({ rt::Value _v30074 = rt::trv(rt::VS(g::LS[8722])); this->f_S_1i = rt::slot_string(_v30074); _v30074; });
    ({ double _v30075 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v30075); _v30075; });
    ({ double _v30076 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v30076); _v30076; });
    ({ double _v30077 = 1.0; this->f_S__22__21_U = rt::toint_d(_v30077); _v30077; });
    ({ double _v30078 = 2.0; this->f_S__21_G = rt::toint_d(_v30078); _v30078; });
    ({ double _v30079 = 5.0; this->f_S__5e__21_C = rt::toint_d(_v30079); _v30079; });
    ({ double _v30080 = 10.0; this->f_S__25_w = rt::toint_d(_v30080); _v30080; });
}
rt::Value C_S_0_24_::m_S__40__22_() {
    RT_FN("S_0_24_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8401]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[8227]), C_S__26_c::sm_S_8_21_Z(160.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5e__21_7__id, C_S__26_c::dsm_S__3e__21__26__1(), C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), rt::trv(rt::VS(g::LS[1722]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5e__21_7__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S_0_24_::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S_0_24_::m_S_8_21_s() {
    RT_FN("S_0_24_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8723])));
    return rt::NUL;
}
rt::Value C_S_0_24_::m_S_8_5b_() {
    RT_FN("S_0_24_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sm_S__25_Z(g::SV.C_S__5e__21_7__id, true), 2000.0, C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5e__21_7__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S_0_24_::m_S_9_21__3f_() {
    RT_FN("S_0_24_.S_9_21__3f_");
    return ({ bool _t30082 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t30082 ? _t30082 : (bool)(({ bool _t30081 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t30081 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__2c__21__2b___id))) : _t30081; })); });
    return false;
}
bool C_S_0_24_::g_S__20__21_3() {
    RT_FN("S_0_24_.S__20__21_3_get");
    return ({ bool _t30083 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30083 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__5e__21_7__id, true) >= 2000.0)) : _t30083; });
    return false;
}
bool C_S_0_24_::g_S_9_21__25_() {
    RT_FN("S_0_24_.S_9_21__25__get");
    return ({ bool _t30086 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t30086 ? _t30086 : (bool)(({ bool _t30085 = ({ bool _t30084 = (!this->m_S_9_21_F()); _t30084 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t30084; }); _t30085 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__2c__21__2b___id)) : _t30085; })); });
    return false;
}
double C_S_0_24_::sm_S__26_s() {
    RT_FN("S_0_24_.S__26_s");
    return (160.0 * C_S_8G::sm_S__25_Z(g::SV.C_S__5e__21_7__id, C_S_8G::dsm_S__25_Z_1()));
    return 0.0;
}
C_S_0_24_* C_S_0_24_::alloc_() {
    C_S_0_24_* o = rt::make<C_S_0_24_>();
    return o;
}
rt::Value C_S_0_24_::mk_(rt::Value* a, int n) {
    C_S_0_24_* o = alloc_();
    o->C_S_0_24_::ctor_();
    return rt::VO(o);
}
bool C_S_0_24_::dget(int id, rt::Value& out) {
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
bool C_S_0_24_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_0_24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S_0_24_::dmeth(int id) {
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
bool C_S_0_24_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_0_24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_24___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_0_24___S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S_0_24___ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_24___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_0_24___S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S_0_24___ids = v; return true;
    default: return false;
    }
}
bool C_S_0_24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_0_22_D::ctor_() {
    RT_FN("S_0_22_D.S_0_22_D");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30087 = 1081.0; this->f_S_6_21_Z = rt::touint_d(_v30087); _v30087; });
    ({ rt::Value _v30088 = rt::trv(rt::VS(g::LS[8725])); this->f_S_1i = rt::slot_string(_v30088); _v30088; });
    ({ double _v30089 = 35.0; this->f_S__22__21_U = rt::toint_d(_v30089); _v30089; });
    ({ double _v30090 = 2.0; this->f_S__21_G = rt::toint_d(_v30090); _v30090; });
    ({ double _v30091 = 11125.0; this->f_S__25_w = rt::toint_d(_v30091); _v30091; });
}
rt::Value C_S_0_22_D::m_S__40__22_() {
    RT_FN("S_0_22_D.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8726]), C_S__26_c::sm_S_8_21_Z(C_S_0_22_D::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_0_22_D::m_S_8_5b_() {
    RT_FN("S_0_22_D.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S_8G::sg_S__3b__21__20_())), 100.0, rt::trv(rt::VS(g::LS[8667])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S_0_22_D::g_S__20__21_3() {
    RT_FN("S_0_22_D.S__20__21_3_get");
    return ({ bool _t30092 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30092 ? (bool)((((double)(C_S_8G::sg_S__3b__21__20_())) >= 100.0)) : _t30092; });
    return false;
}
double C_S_0_22_D::sm_S__2c__21_G() {
    RT_FN("S_0_22_D.S__2c__21_G");
    return rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 0.7);
    return 0.0;
}
C_S_0_22_D* C_S_0_22_D::alloc_() {
    C_S_0_22_D* o = rt::make<C_S_0_22_D>();
    return o;
}
rt::Value C_S_0_22_D::mk_(rt::Value* a, int n) {
    C_S_0_22_D* o = alloc_();
    o->C_S_0_22_D::ctor_();
    return rt::VO(o);
}
bool C_S_0_22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S_0_22_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_0_22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S_0_22_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S_0_22_D::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_0_22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22_D__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22_D__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_0_22_F::ctor_() {
    RT_FN("S_0_22_F.S_0_22_F");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30093 = 1167.0; this->f_S_6_21_Z = rt::touint_d(_v30093); _v30093; });
    ({ rt::Value _v30094 = rt::trv(rt::VS(g::LS[8727])); this->f_S_1i = rt::slot_string(_v30094); _v30094; });
    ({ double _v30095 = 38.0; this->f_S__22__21_U = rt::toint_d(_v30095); _v30095; });
    ({ double _v30096 = 5.0; this->f_S__21_G = rt::toint_d(_v30096); _v30096; });
    ({ double _v30097 = 11875.0; this->f_S__25_w = rt::toint_d(_v30097); _v30097; });
}
rt::Value C_S_0_22_F::m_S__40__22_() {
    RT_FN("S_0_22_F.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8728]), C_S__26_c::sm_S_8_21_Z(C_S_0_22_F::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_0_22_F::m_S_8_5b_() {
    RT_FN("S_0_22_F.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__3d_L::sm_S__2c__21_G(), 5.0, rt::trv(rt::VS(g::LS[8729])), C_S__26__21__5f_::dm_S__3f__21_N_3(), C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S_0_22_F::g_S__20__21_3() {
    RT_FN("S_0_22_F.S__20__21_3_get");
    return ({ bool _t30098 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30098 ? (bool)((C_S__3d_L::sm_S__2c__21_G() >= 5.0)) : _t30098; });
    return false;
}
double C_S_0_22_F::sm_S__2c__21_G() {
    RT_FN("S_0_22_F.S__2c__21_G");
    return rt::m_pow(rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 156.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 156.0))), 0.9);
    return 0.0;
}
C_S_0_22_F* C_S_0_22_F::alloc_() {
    C_S_0_22_F* o = rt::make<C_S_0_22_F>();
    return o;
}
rt::Value C_S_0_22_F::mk_(rt::Value* a, int n) {
    C_S_0_22_F* o = alloc_();
    o->C_S_0_22_F::ctor_();
    return rt::VO(o);
}
bool C_S_0_22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S_0_22_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_0_22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S_0_22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S_0_22_F::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_0_22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22_F__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_0_22_G::ctor_() {
    RT_FN("S_0_22_G.S_0_22_G");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30099 = 1175.0; this->f_S_6_21_Z = rt::touint_d(_v30099); _v30099; });
    ({ rt::Value _v30100 = rt::trv(rt::VS(g::LS[8730])); this->f_S_1i = rt::slot_string(_v30100); _v30100; });
    ({ double _v30101 = 40.0; this->f_S__22__21_U = rt::toint_d(_v30101); _v30101; });
    ({ double _v30102 = 1.0; this->f_S__21_G = rt::toint_d(_v30102); _v30102; });
    ({ double _v30103 = 13125.0; this->f_S__25_w = rt::toint_d(_v30103); _v30103; });
}
rt::Value C_S_0_22_G::m_S__40__22_() {
    RT_FN("S_0_22_G.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8731]), C_S__26_c::sm_S_8_21_Z(C_S_0_22_G::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_0_22_G::m_S_8_5b_() {
    RT_FN("S_0_22_G.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S__26_c::sm_S__3f__26_(true))), 40.0, rt::trv(rt::VS(g::LS[8732])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S_0_22_G::g_S__20__21_3() {
    RT_FN("S_0_22_G.S__20__21_3_get");
    return ({ bool _t30105 = ({ bool _t30104 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30104 ? (bool)(C_S__26_c::sm_S__5b__21_s(g::SV.C_S__40__21_p__id)) : _t30104; }); _t30105 ? (bool)((((double)(C_S__26_c::sm_S__3f__26_(true))) >= 40.0)) : _t30105; });
    return false;
}
double C_S_0_22_G::sm_S__23__21_Y() {
    RT_FN("S_0_22_G.S__23__21_Y");
    return (9.0 * rt::m_pow(((double)(C_S__26_c::sm_S__3f__26_(C_S__26_c::dsm_S__3f__26__0()))), 0.9));
    return 0.0;
}
C_S_0_22_G* C_S_0_22_G::alloc_() {
    C_S_0_22_G* o = rt::make<C_S_0_22_G>();
    return o;
}
rt::Value C_S_0_22_G::mk_(rt::Value* a, int n) {
    C_S_0_22_G* o = alloc_();
    o->C_S_0_22_G::ctor_();
    return rt::VO(o);
}
bool C_S_0_22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S_0_22_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_0_22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S_0_22_G::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S_0_22_G::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S_0_22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22_G__id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S_08::ctor_() {
    RT_FN("S_08.S_08");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30106 = 440.0; this->f_S_6_21_Z = rt::touint_d(_v30106); _v30106; });
    ({ rt::Value _v30107 = rt::trv(rt::VS(g::LS[8733])); this->f_S_1i = rt::slot_string(_v30107); _v30107; });
    ({ double _v30108 = 17.0; this->f_S__22__21_U = rt::toint_d(_v30108); _v30108; });
    ({ double _v30109 = 3.0; this->f_S__21_G = rt::toint_d(_v30109); _v30109; });
    ({ double _v30110 = 330.0; this->f_S__25_w = rt::toint_d(_v30110); _v30110; });
    ({ bool _v30111 = false; this->f_S__3d_z = _v30111; _v30111; });
}
rt::Value C_S_08::m_S__40__22_() {
    RT_FN("S_08.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1909]), C_S__26_c::sm_S_6_21_T(C_S_08::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S_08::m_S_8_5b_() {
    RT_FN("S_08.S_8_5b_");
    return rt::slot_string(this->m_S__21_S(g::SV.C_S_6_21__20___id, g::SV.C_S_7_3f___id, C_S__26__21__5f_::dm_S__21_S_2()));
    return rt::NUL;
}
bool C_S_08::g_S__20__21_3() {
    RT_FN("S_08.S__20__21_3_get");
    return ({ bool _t30117 = ({ bool _t30114 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30114 ? (bool)(({ rt::Value _o30112 = C_S_8G::sm_S__21__21_H(g::SV.C_S_6_21__20___id); C_S__60_6* _p30113 = rt::as_ptr<C_S__60_6>(_o30112); _p30113 ? _p30113->f_S__3f__21_6 : rt::T(rt::dget(_o30112, NM_S__3f__21_6)); })) : _t30114; }); _t30117 ? (bool)(({ rt::Value _o30115 = C_S_8G::sm_S__21__21_H(g::SV.C_S_7_3f___id); C_S__60_6* _p30116 = rt::as_ptr<C_S__60_6>(_o30115); _p30116 ? _p30116->f_S__3f__21_6 : rt::T(rt::dget(_o30115, NM_S__3f__21_6)); })) : _t30117; });
    return false;
}
double C_S_08::sm_S__27__21_b() {
    RT_FN("S_08.S__27__21_b");
    return (50.0 * rt::m_pow(C_S__26_c::sm_S__5b__21_j(), 1.1));
    return 0.0;
}
C_S_08* C_S_08::alloc_() {
    C_S_08* o = rt::make<C_S_08>();
    return o;
}
rt::Value C_S_08::mk_(rt::Value* a, int n) {
    C_S_08* o = alloc_();
    o->C_S_08::ctor_();
    return rt::VO(o);
}
bool C_S_08::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S_08::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_08::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S_08::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S_08::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_08::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_08__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_08::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_08__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_08::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_0_3d_::ctor_() {
    RT_FN("S_0_3d_.S_0_3d_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30118 = 269.0; this->f_S_6_21_Z = rt::touint_d(_v30118); _v30118; });
    ({ rt::Value _v30119 = rt::trv(rt::VS(g::LS[8734])); this->f_S_1i = rt::slot_string(_v30119); _v30119; });
    ({ double _v30120 = 5.0; this->f_S__22__21_U = rt::toint_d(_v30120); _v30120; });
    ({ double _v30121 = 2.0; this->f_S__21_G = rt::toint_d(_v30121); _v30121; });
    ({ double _v30122 = 2.0; this->f_S__5e__21_C = rt::toint_d(_v30122); _v30122; });
    ({ double _v30123 = 135.0; this->f_S__25_w = rt::toint_d(_v30123); _v30123; });
}
rt::Value C_S_0_3d_::m_S__40__22_() {
    RT_FN("S_0_3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8735]), C_S__26_c::sm_S_8_21_Z(C_S_0_3d_::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_0_3d_::m_S_8_21_s() {
    RT_FN("S_0_3d_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8736])));
    return rt::NUL;
}
rt::Value C_S_0_3d_::m_S_8_5b_() {
    RT_FN("S_0_3d_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N((C_S__23__21__21_::sm_S_57() * 30.0), 4000.0, rt::trv(rt::VS(g::LS[8737])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S_0_3d_::g_S__20__21_3() {
    RT_FN("S_0_3d_.S__20__21_3_get");
    return ({ bool _t30124 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30124 ? (bool)(((C_S__23__21__21_::sm_S_57() * 30.0) >= 4000.0)) : _t30124; });
    return false;
}
double C_S_0_3d_::sm_S_2_21_W() {
    RT_FN("S_0_3d_.S_2_21_W");
    return (5.0 + (0.05 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sg_S__22__21_0())), 1.5)));
    return 0.0;
}
C_S_0_3d_* C_S_0_3d_::alloc_() {
    C_S_0_3d_* o = rt::make<C_S_0_3d_>();
    return o;
}
rt::Value C_S_0_3d_::mk_(rt::Value* a, int n) {
    C_S_0_3d_* o = alloc_();
    o->C_S_0_3d_::ctor_();
    return rt::VO(o);
}
bool C_S_0_3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S_0_3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_0_3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S_0_3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S_0_3d_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S_0_3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_3d___id)); return true;
    case NM_ids: out = g::SV.C_S_0_3d___ids; return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_3d___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_0_3d___ids = v; return true;
    default: return false;
    }
}
bool C_S_0_3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S_0M::ctor_() {
    RT_FN("S_0M.S_0M");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30125 = 633.0; this->f_S_6_21_Z = rt::touint_d(_v30125); _v30125; });
    ({ rt::Value _v30126 = rt::trv(rt::VS(g::LS[8739])); this->f_S_1i = rt::slot_string(_v30126); _v30126; });
    ({ double _v30127 = 26.0; this->f_S__22__21_U = rt::toint_d(_v30127); _v30127; });
    ({ double _v30128 = 5.0; this->f_S__21_G = rt::toint_d(_v30128); _v30128; });
    ({ double _v30129 = 1375.0; this->f_S__25_w = rt::toint_d(_v30129); _v30129; });
}
rt::Value C_S_0M::m_S__40__22_() {
    RT_FN("S_0M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[8740]), C_S__26_c::sm_S_8_21_Z(C_S_0M::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[8450]), C_S__26_c::sm_S_8_21_Z(C_S_0M::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
rt::Value C_S_0M::m_S_8_21_s() {
    RT_FN("S_0M.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8741])));
    return rt::NUL;
}
rt::Value C_S_0M::m_S_8_5b_() {
    RT_FN("S_0M.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 3.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 3.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 3.0))), 43200.0, rt::trv(rt::VS(g::LS[8531])), false, true));
    return rt::NUL;
}
bool C_S_0M::g_S__20__21_3() {
    RT_FN("S_0M.S__20__21_3_get");
    return ({ bool _t30130 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30130 ? (bool)(rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 3.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 3.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 3.0)), rt::V(43200.0))) : _t30130; });
    return false;
}
double C_S_0M::sm_S__2c_J() {
    RT_FN("S_0M.S__2c_J");
    return (40.0 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.4));
    return 0.0;
}
double C_S_0M::sm_S__23__21_Y() {
    RT_FN("S_0M.S__23__21_Y");
    return 160.0;
    return 0.0;
}
C_S_0M* C_S_0M::alloc_() {
    C_S_0M* o = rt::make<C_S_0M>();
    return o;
}
rt::Value C_S_0M::mk_(rt::Value* a, int n) {
    C_S_0M* o = alloc_();
    o->C_S_0M::ctor_();
    return rt::VO(o);
}
bool C_S_0M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S_0M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_0M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S_0M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S_0M::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S_0M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0M__id)); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S_1_21__21_::ctor_() {
    RT_FN("S_1_21__21_.S_1_21__21_");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30131 = 619.0; this->f_S_6_21_Z = rt::touint_d(_v30131); _v30131; });
    ({ rt::Value _v30132 = rt::trv(rt::VS(g::LS[8742])); this->f_S_1i = rt::slot_string(_v30132); _v30132; });
    ({ double _v30133 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v30133); _v30133; });
    ({ double _v30134 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v30134); _v30134; });
    ({ double _v30135 = 6.0; this->f_S__3b__21__23_ = rt::toint_d(_v30135); _v30135; });
    ({ double _v30136 = 27.0; this->f_S__22__21_U = rt::toint_d(_v30136); _v30136; });
    ({ double _v30137 = 1.0; this->f_S__21_G = rt::toint_d(_v30137); _v30137; });
    ({ double _v30138 = 12.0; this->f_S__5e__21_C = rt::toint_d(_v30138); _v30138; });
    ({ double _v30139 = 1500.0; this->f_S__25_w = rt::toint_d(_v30139); _v30139; });
    ({ bool _v30140 = false; this->f_S__3d_z = _v30140; _v30140; });
}
rt::Value C_S_1_21__21_::m_S__40__22_() {
    RT_FN("S_1_21__21_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8743]), C_S__26_c::sm_S_6_21_T(C_S_1_21__21_::sm_S__27__21_b(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S_1_21__21_::m_S_8_21_s() {
    RT_FN("S_1_21__21_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8744])));
    return rt::NUL;
}
rt::Value C_S_1_21__21_::m_S_8_5b_() {
    RT_FN("S_1_21__21_.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)), 4000.0, rt::trv(rt::VS(g::LS[8585])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__22__21_R__id, g::SV.C_S__3b_R__id, false)));
    return rt::NUL;
}
bool C_S_1_21__21_::g_S__20__21_3() {
    RT_FN("S_1_21__21_.S__20__21_3_get");
    return ({ bool _t30149 = ({ bool _t30146 = ({ bool _t30143 = ({ bool _t30142 = ({ bool _t30141 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30141 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2_21_7__id)) : _t30141; }); _t30142 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0), rt::V(4000.0))) : _t30142; }); _t30143 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0)) : _t30143; }); _t30146 ? (bool)(({ rt::Value _o30144 = C_S_8G::sm_S__21__21_H(g::SV.C_S__22__21_R__id); C_S__60_6* _p30145 = rt::as_ptr<C_S__60_6>(_o30144); _p30145 ? _p30145->f_S__3f__21_6 : rt::T(rt::dget(_o30144, NM_S__3f__21_6)); })) : _t30146; }); _t30149 ? (bool)(({ rt::Value _o30147 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3b_R__id); C_S__60_6* _p30148 = rt::as_ptr<C_S__60_6>(_o30147); _p30148 ? _p30148->f_S__3f__21_6 : rt::T(rt::dget(_o30147, NM_S__3f__21_6)); })) : _t30149; });
    return false;
}
bool C_S_1_21__21_::g_S_9_21__25_() {
    RT_FN("S_1_21__21_.S_9_21__25__get");
    return ({ bool _t30151 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t30151 ? (bool)((({ bool _t30150 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0); _t30150 ? _t30150 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }))) : _t30151; });
    return false;
}
double C_S_1_21__21_::sm_S__27__21_b() {
    RT_FN("S_1_21__21_.S__27__21_b");
    return (0.75 * rt::m_pow(((g::SV.C_S__23__21__21___S_2_21_P / 2.0) + ((double)(C_S__26_c::sm_S__2d__22__21_(rt::toint_d(0.0), C_S__26_c::dsm_S__2d__22__21__1(), C_S__26_c::dsm_S__2d__22__21__2(), C_S__26_c::dsm_S__2d__22__21__3())))), 0.75));
    return 0.0;
}
C_S_1_21__21_* C_S_1_21__21_::alloc_() {
    C_S_1_21__21_* o = rt::make<C_S_1_21__21_>();
    return o;
}
rt::Value C_S_1_21__21_::mk_(rt::Value* a, int n) {
    C_S_1_21__21_* o = alloc_();
    o->C_S_1_21__21_::ctor_();
    return rt::VO(o);
}
bool C_S_1_21__21_::dget(int id, rt::Value& out) {
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
bool C_S_1_21__21_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_1_21__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S_1_21__21_::dmeth(int id) {
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
bool C_S_1_21__21_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_1_21__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21__21___id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_21__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21__21___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_21__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_1_21_7::ctor_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_1_21_7.S_1_21_7");
    ({ int32_t _v30152 = l_param1; this->f_S__21_G = _v30152; _v30152; });
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ rt::Value _v30153 = rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, ((double)(this->f_S__21_G))); this->f_S_1i = rt::slot_string(_v30153); _v30153; });
    ({ rt::Value _v30154 = rt::add(rt::VS(g::LS[1337]), rt::arr_at(g::SV.C_S__2d_D__S__5e__2d_, ((double)(this->f_S__21_G)))); this->f_S__5e__21__23_ = rt::slot_string(_v30154); _v30154; });
    ({ rt::Value _v30155 = rt::add(rt::VS(g::LS[6991]), rt::arr_at(g::SV.C_S__2d_D__S__5e__2d_, ((double)(this->f_S__21_G)))); this->f_S__3e_E = rt::slot_string(_v30155); _v30155; });
    ({ bool _v30156 = false; this->f_S_3e = _v30156; _v30156; });
}
rt::Value C_S_1_21_7::m_S__5b__21_C() {
    RT_FN("S_1_21_7.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    (g::SV.C_S_1_21_7__S__60_7 = rt::arr_lit({rt::V((double)(g::SV.C_S_5y__id)), rt::V((double)(g::SV.C_S_9_21_6__id)), rt::V((double)(g::SV.C_S__3f__21_J__id)), rt::V((double)(g::SV.C_S_9k__id)), rt::V((double)(g::SV.C_S__40_U__id)), rt::V((double)(g::SV.C_S__2d__40___id)), rt::V((double)(g::SV.C_S_4_22_5__id))}));
    (g::SV.C_S_1_21_7__S_7_22_L = rt::arr_lit({rt::V((double)(g::SV.C_S__2c__22_4__id)), rt::V((double)(g::SV.C_S__3c__22_5__id)), rt::V((double)(g::SV.C_S_4_22_3__id)), rt::V((double)(g::SV.C_S__21__22_5__id)), rt::V((double)(g::SV.C_S_9_22_3__id)), rt::V((double)(g::SV.C_S__2d__22_4__id)), rt::V((double)(g::SV.C_S_4_22_5__id))}));
    return rt::NUL;
}
rt::Value C_S_1_21_7::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_1_21_7.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[8745]), rt::add(rt::add(rt::idx_get(g::SV.C_S__2d_D__S_45, rt::arr_at(g::SV.C_S_1_21_7__S__5e__21_C, ((double)(this->f_S__21_G)))), (((C_S_8G::sm_S_7d(g::SV.C_S__40_S__id) && (!rt::eq(rt::arr_at(g::SV.C_S_1_21_7__S__3b_M, ((double)(this->f_S__21_G))), rt::V((-1.0))))) ? rt::add(rt::VS(g::LS[1597]), rt::idx_get(g::SV.C_S__2d_D__S_45, rt::arr_at(g::SV.C_S_1_21_7__S__3b_M, ((double)(this->f_S__21_G))))) : rt::VS(g::LS[113])))), (((C_S_8G::sm_S_7d(g::SV.C_S__2d__21_K__id) && (!rt::eq(rt::arr_at(g::SV.C_S_1_21_7__S_4J, ((double)(this->f_S__21_G))), rt::V((-1.0))))) ? rt::add(rt::VS(g::LS[1597]), rt::idx_get(g::SV.C_S__2d_D__S_45, rt::arr_at(g::SV.C_S_1_21_7__S_4J, ((double)(this->f_S__21_G))))) : rt::VS(g::LS[113])))), C_S__26_c::sm_S_6_21_T(((((((double)(this->f_S__21_G)) == 6.0) ? 100.0 : 100000.0)) * ((1.0 + (0.01 * rt::m_pow(((double)(C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, C_S__26_c::dsm_S__26__21__3c__1()))), 0.7))))), ((((double)(this->f_S__21_G)) == 6.0) ? 4.0 : 1.0), C_S__26_c::dsm_S_6_21_T_2())))));
    if ((((double)(C_S_8G::sg_S__2c_P())) < 3.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[8746]), rt::dcallv(rt::V((double)(this->m_S__23__22__27_(this->f_S__3e_E))), rt::N_toString), rt::dcallv(rt::V((double)(C_S__23__21__21_::sm_S_0U(this->f_S__21_G))), rt::N_toString))))));
        if ((((double)(C_S_8G::sg_S__2c_P())) == 2.0)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[9]), rt::trv(rt::VS(g::LS[8747]))))));
        }
    }
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 3.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[8748]), C_S__26_c::sm_S_8_21_Z((C_S__23__21__21_::sm_S__2b__22_5(this->f_S__21_G) - C_S__26_c::sm_S_1_22__2c_(this->f_S__21_G)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S_1_22__2c_(this->f_S__21_G), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__23__21__21_::sm_S__2b__22_5(this->f_S__21_G), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
        if (C_S_8G::sm_S_7d(rt::touint(rt::arr_at(g::SV.C_S_1_21_7__S_7_22_L, ((double)(this->f_S__21_G)))))) {
            if ((!(((double)(this->f_S__21_G)) == 6.0))) {
                (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[8749]), C_S__26_c::sm_S_8_21_Z(C_S__20__22_5::sm_S__2b__22_L(C_S_8G::sm_S__21__21_H(rt::touint(rt::arr_at(g::SV.C_S_1_21_7__S_7_22_L, ((double)(this->f_S__21_G)))))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, ((double)(this->f_S__21_G))))))));
            } else {
                (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[8750]), C_S__26_c::sm_S_8_21_Z(C_S_4_22_5::sm_S__20__22_D(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
            }
        }
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
int32_t C_S_1_21_7::m_S__23__22__27_(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S_1_21_7.S__23__22__27_");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 2.0)) {
        return C_S_8G::sm_S__3f__21_2(l_param1);
    }
    (l_A__loc2_ = rt::toint_d(0.0));
    {
        std::vector<rt::Value> _lst30157;
        rt::each(C_S_8G::sm_S__21_x(l_param1), _lst30157);
        for (const rt::Value& _x30158 : _lst30157) {
            l_A__loc3_ = _x30158;
            if ((({ rt::Value _o30159 = l_A__loc3_; C_S__60_6* _p30160 = rt::as_ptr<C_S__60_6>(_o30159); _p30160 ? _p30160->f_S__3c__21_7 : rt::T(rt::dget(_o30159, NM_S__3c__21_7)); }) && ((((double)(({ rt::Value _o30161 = l_A__loc3_; C_S__60_6* _p30162 = rt::as_ptr<C_S__60_6>(_o30161); _p30162 ? _p30162->f_S__2d__21__5e_ : rt::toint(rt::dget(_o30161, NM_S__2d__21__5e_)); }))) == (-1.0)) || ((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == ((double)(({ rt::Value _o30163 = l_A__loc3_; C_S__60_6* _p30164 = rt::as_ptr<C_S__60_6>(_o30163); _p30164 ? _p30164->f_S__2d__21__5e_ : rt::toint(rt::dget(_o30163, NM_S__2d__21__5e_)); }))))) && (!(((double)(g::SV.C_S_8G__S__23_3)) == ((double)(({ rt::Value _o30165 = l_A__loc3_; C_S__60_6* _p30166 = rt::as_ptr<C_S__60_6>(_o30165); _p30166 ? _p30166->f_S__2d__21__5e_ : rt::toint(rt::dget(_o30165, NM_S__2d__21__5e_)); }))))))))) {
                (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
            }
        }
    }
    return l_A__loc2_;
    return 0;
}
int32_t C_S_1_21_7::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_1_21_7::dm_S_75_2() { return false; }
rt::Value C_S_1_21_7::dm_S_75_3() { return rt::NUL; }
double C_S_1_21_7::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    int32_t l_A__loc5_ = 0;
    RT_FN("S_1_21_7.S_75");
    (l_A__loc5_ = rt::toint_d(0.0));
    if ((({ bool _t30167 = (!(((double)(this->f_S__21_G)) == 6.0)); _t30167 ? (bool)(rt::eq(rt::V((double)(l_param1)), rt::arr_at(g::SV.C_S_1_21_7__S__5e__21_C, ((double)(this->f_S__21_G))))) : _t30167; }) || ((((double)(this->f_S__21_G)) == 6.0) && ((((double)(l_param1)) == 9.0) || (((double)(l_param1)) == 10.0))))) {
        (l_A__loc5_ = C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true));
        if ((((double)(l_A__loc5_)) >= 10000.0)) {
            return (rt::m_pow(10.0, (-30.0)) * rt::m_pow(1.033, (0.33 * ((double)(l_A__loc5_)))));
        }
        if (((((double)(l_A__loc5_)) >= 5000.0) && (((double)(l_A__loc5_)) < 10000.0))) {
            return rt::m_pow((((double)(l_A__loc5_)) + 1.0), 6.5);
        }
        return rt::m_pow((((double)(l_A__loc5_)) + 1.0), 3.0);
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_1_21_7::m_S_6r() {
    RT_FN("S_1_21_7.S_6r");
    ({ bool _v30168 = false; this->f_S__3c__21_7 = _v30168; _v30168; });
    ({ rt::Value _o30169 = g::SV.C_S_8G__S_5_21_V; rt::Value _i30170 = rt::V(13.0); rt::Value _v30171 = rt::V((rt::tonum(rt::idx_get(_o30169, _i30170)) - 1.0)); rt::idx_set(_o30169, _i30170, _v30171); _v30171; });
    ({ rt::Value _o30172 = g::SV.C_S_8G__S_5_21_V; rt::Value _i30173 = rt::V((double)(C_S__26_c::sm_S_3K(this->f_S__21_G))); rt::Value _v30174 = rt::add(rt::idx_get(_o30172, _i30173), rt::V(1.0)); rt::idx_set(_o30172, _i30173, _v30174); _v30174; });
    if ((!g::SV.C_S_1_21_7__S__27_Q)) {
        (void)(({ rt::Value _o30175 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p30176 = rt::as_ptr<C_S_8G>(_o30175); _p30176 ? _p30176->m_S__20_R() : rt::dcallv(_o30175, NM_S__20_R); }));
        (void)(({ rt::Value _o30177 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p30178 = rt::as_ptr<C_S_8G>(_o30177); _p30178 ? _p30178->m_S_4_21_S() : rt::dcallv(_o30177, NM_S_4_21_S); }));
    }
    return rt::NUL;
}
double C_S_1_21_7::g_S_9_21_U() {
    RT_FN("S_1_21_7.S_9_21_U_get");
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) {
        if ((((double)(C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true))) < 10000.0)) {
            return 0.0;
        }
        return rt::m_pow(1.44, (0.24 * ((((double)(C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true))) - 10000.0))));
    }
    if (((((double)(C_S_8G::sg_S__2c_P())) >= 2.0) && (((double)(C_S_8G::sg_S__2c_P())) < 4.0))) {
        if ((((double)(C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true))) < 10000.0)) {
            return 0.0;
        }
        return (1e+126 * rt::m_pow(1.75, (0.1 * ((((double)(C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true))) - 5000.0)))));
    }
    if ((((double)(C_S_8G::sg_S__2c_P())) == 1.0)) {
        if ((((double)(C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true))) <= 780.0)) {
            return 0.0;
        }
        return (1e+42 * rt::m_pow(1.147, (((double)(C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true))) - 780.0)));
    }
    return (1e+123 * rt::m_pow(1.5, ((double)(C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true)))));
    return 0.0;
}
bool C_S_1_21_7::g_S_9_21__25_() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S_1_21_7.S_9_21__25__get");
    (l_A__loc1_ = C_S__26_c::sm_S__26__21__3c_(this->f_S__21_G, true));
    return ({ bool _t30179 = C_S_8G::sm_S_7d(rt::touint(rt::arr_at(g::SV.C_S_1_21_7__S__60_7, ((double)(this->f_S__21_G))))); _t30179 ? (bool)((((double)(l_A__loc1_)) < C_S__40__22_J::sm_S_3_3e_(C_S__40__22_J::dsm_S_3_3e__0()))) : _t30179; });
    return false;
}
C_S_1_21_7* C_S_1_21_7::alloc_() {
    C_S_1_21_7* o = rt::make<C_S_1_21_7>();
    return o;
}
rt::Value C_S_1_21_7::mk_(rt::Value* a, int n) {
    C_S_1_21_7* o = alloc_();
    o->C_S_1_21_7::ctor_(rt::arg<int32_t>(a, n, 0, 0));
    return rt::VO(o);
}
bool C_S_1_21_7::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__21_G: out = rt::V((double)(f_S__21_G)); return true;
    case NM_S__3e_E: out = f_S__3e_E; return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__23__22__27_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_1_21_7::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__21_G: f_S__21_G = rt::toint(v); return true;
    case NM_S__3e_E: f_S__3e_E = rt::slot_string(v); return true;
    case NM_S_9_21_U: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_1_21_7::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__23__22__27_: out = rt::V((double)(m_S__23__22__27_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)))); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_1_21_7::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_1_21_7::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_1_21_7::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__21_G: { rt::Value f = rt::V((double)(f_S__21_G)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e_E: { rt::Value f = f_S__3e_E; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_1_21_7::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__40__22_: return true;
    case NM_S__23__22__27_: return true;
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S_9_21_U: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__21_G: return false;
    case NM_S__3e_E: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_1_21_7::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_7::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__60_7: out = g::SV.C_S_1_21_7__S__60_7; return true;
    case NM_S_7_22_L: out = g::SV.C_S_1_21_7__S_7_22_L; return true;
    case NM_S__27_Q: out = rt::VB(g::SV.C_S_1_21_7__S__27_Q); return true;
    case NM_S__5e__21_C: out = g::SV.C_S_1_21_7__S__5e__21_C; return true;
    case NM_S__3b_M: out = g::SV.C_S_1_21_7__S__3b_M; return true;
    case NM_S_4J: out = g::SV.C_S_1_21_7__S_4J; return true;
    default: return false;
    }
}
bool C_S_1_21_7::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__60_7: g::SV.C_S_1_21_7__S__60_7 = v; return true;
    case NM_S_7_22_L: g::SV.C_S_1_21_7__S_7_22_L = v; return true;
    case NM_S__27_Q: g::SV.C_S_1_21_7__S__27_Q = rt::T(v); return true;
    case NM_S__5e__21_C: g::SV.C_S_1_21_7__S__5e__21_C = v; return true;
    case NM_S__3b_M: g::SV.C_S_1_21_7__S__3b_M = v; return true;
    case NM_S_4J: g::SV.C_S_1_21_7__S_4J = v; return true;
    default: return false;
    }
}
bool C_S_1_21_7::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_21_W::ctor_() {
    RT_FN("S_1_21_W.S_1_21_W");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30180 = 320.0; this->f_S_6_21_Z = rt::touint_d(_v30180); _v30180; });
    ({ rt::Value _v30181 = rt::trv(rt::VS(g::LS[8751])); this->f_S_1i = rt::slot_string(_v30181); _v30181; });
    ({ double _v30182 = 5.0; this->f_S__22__21_U = rt::toint_d(_v30182); _v30182; });
    ({ double _v30183 = 5.0; this->f_S__21_G = rt::toint_d(_v30183); _v30183; });
    ({ double _v30184 = 5.0; this->f_S__5e__21_C = rt::toint_d(_v30184); _v30184; });
    ({ double _v30185 = 135.0; this->f_S__25_w = rt::toint_d(_v30185); _v30185; });
}
rt::Value C_S_1_21_W::m_S__40__22_() {
    RT_FN("S_1_21_W.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8752]), C_S__26_c::sm_S_8_21_Z(C_S_1_21_W::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_1_21_W::m_S_8_21_s() {
    RT_FN("S_1_21_W.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8753])));
    return rt::NUL;
}
rt::Value C_S_1_21_W::m_S_8_5b_() {
    RT_FN("S_1_21_W.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S_8G::sg_S_8t())), 580.0, rt::trv(rt::VS(g::LS[8754])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S_1_21_W::g_S__20__21_3() {
    RT_FN("S_1_21_W.S__20__21_3_get");
    return ({ bool _t30186 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30186 ? (bool)((((double)(C_S_8G::sg_S_8t())) >= 580.0)) : _t30186; });
    return false;
}
double C_S_1_21_W::sm_S__60_z() {
    RT_FN("S_1_21_W.S__60_z");
    return (1.3 * rt::m_pow(C_S__23__21__21_::sm_S__2c__21_E(), 1.1));
    return 0.0;
}
C_S_1_21_W* C_S_1_21_W::alloc_() {
    C_S_1_21_W* o = rt::make<C_S_1_21_W>();
    return o;
}
rt::Value C_S_1_21_W::mk_(rt::Value* a, int n) {
    C_S_1_21_W* o = alloc_();
    o->C_S_1_21_W::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_W::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S_1_21_W::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_1_21_W::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S_1_21_W::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S_1_21_W::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    default: return false;
    }
}
bool C_S_1_21_W::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_W__id)); return true;
    case NM_ids: out = g::SV.C_S_1_21_W__ids; return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_21_W::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_W__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_1_21_W__ids = v; return true;
    default: return false;
    }
}
bool C_S_1_21_W::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    default: return false;
    }
}
void C_S_1_21_a::ctor_() {
    RT_FN("S_1_21_a.S_1_21_a");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30187 = 524.0; this->f_S_6_21_Z = rt::touint_d(_v30187); _v30187; });
    ({ rt::Value _v30188 = rt::trv(rt::VS(g::LS[8756])); this->f_S_1i = rt::slot_string(_v30188); _v30188; });
    ({ double _v30189 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v30189); _v30189; });
    ({ double _v30190 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v30190); _v30190; });
    ({ double _v30191 = 20.0; this->f_S__22__21_U = rt::toint_d(_v30191); _v30191; });
    ({ double _v30192 = 4.0; this->f_S__21_G = rt::toint_d(_v30192); _v30192; });
    ({ double _v30193 = 10.0; this->f_S__5e__21_C = rt::toint_d(_v30193); _v30193; });
    ({ double _v30194 = 510.0; this->f_S__25_w = rt::toint_d(_v30194); _v30194; });
}
rt::Value C_S_1_21_a::m_S__40__22_() {
    RT_FN("S_1_21_a.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8401]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[8227]), C_S__26_c::sm_S_8_21_Z(120.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__2b__3f___id, C_S__26_c::dsm_S__3e__21__26__1(), C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), rt::trv(rt::VS(g::LS[1722]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__2b__3f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S_1_21_a::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S_1_21_a::m_S_8_21_s() {
    RT_FN("S_1_21_a.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8757])));
    return rt::NUL;
}
rt::Value C_S_1_21_a::m_S_8_5b_() {
    RT_FN("S_1_21_a.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sm_S__25_Z(g::SV.C_S__2b__3f___id, true), 4000.0, C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__2b__3f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), true, C_S__26__21__5f_::dm_S__3f__21_N_4()));
    return rt::NUL;
}
bool C_S_1_21_a::m_S_9_21__3f_() {
    RT_FN("S_1_21_a.S_9_21__3f_");
    return ({ bool _t30196 = this->C_S__26__21__5f_::m_S_9_21__3f_(); _t30196 ? _t30196 : (bool)(({ bool _t30195 = this->f_S__3f__21_6; _t30195 ? (bool)((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__23_x__id))) : _t30195; })); });
    return false;
}
bool C_S_1_21_a::g_S__20__21_3() {
    RT_FN("S_1_21_a.S__20__21_3_get");
    return ({ bool _t30197 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30197 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__2b__3f___id, true) >= 4000.0)) : _t30197; });
    return false;
}
bool C_S_1_21_a::g_S_9_21__25_() {
    RT_FN("S_1_21_a.S_9_21__25__get");
    return ({ bool _t30200 = (({ bool _t30199 = this->C_S__26__21__5f_::g_S_9_21__25_(); _t30199 ? _t30199 : (bool)(({ bool _t30198 = (!this->m_S_9_21_F()); _t30198 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t30198; })); })); _t30200 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__23_x__id)) : _t30200; });
    return false;
}
double C_S_1_21_a::sm_S__26_s() {
    RT_FN("S_1_21_a.S__26_s");
    return (120.0 * C_S_8G::sm_S__25_Z(g::SV.C_S__2b__3f___id, C_S_8G::dsm_S__25_Z_1()));
    return 0.0;
}
C_S_1_21_a* C_S_1_21_a::alloc_() {
    C_S_1_21_a* o = rt::make<C_S_1_21_a>();
    return o;
}
rt::Value C_S_1_21_a::mk_(rt::Value* a, int n) {
    C_S_1_21_a* o = alloc_();
    o->C_S_1_21_a::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_a::dget(int id, rt::Value& out) {
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
bool C_S_1_21_a::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_1_21_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S_1_21_a::dmeth(int id) {
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
bool C_S_1_21_a::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_1_21_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_a__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_1_21_a__S_1_21_S); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_21_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_a__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_1_21_a__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_1_21_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_1_21_j::ctor_() {
    RT_FN("S_1_21_j.S_1_21_j");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30201 = 715.0; this->f_S_6_21_Z = rt::touint_d(_v30201); _v30201; });
    ({ rt::Value _v30202 = rt::trv(rt::VS(g::LS[8758])); this->f_S_1i = rt::slot_string(_v30202); _v30202; });
    ({ double _v30203 = 28.0; this->f_S__22__21_U = rt::toint_d(_v30203); _v30203; });
    ({ double _v30204 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v30204); _v30204; });
    ({ double _v30205 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v30205); _v30205; });
    ({ double _v30206 = 3.0; this->f_S__21_G = rt::toint_d(_v30206); _v30206; });
    ({ double _v30207 = 3300.0; this->f_S__25_w = rt::toint_d(_v30207); _v30207; });
    ({ bool _v30208 = false; this->f_S__3d_z = _v30208; _v30208; });
}
rt::Value C_S_1_21_j::m_S__40__22_() {
    RT_FN("S_1_21_j.S__40__22_");
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 3.0)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[8759])));
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[8760])));
    return rt::NUL;
}
rt::Value C_S_1_21_j::m_S_8_21_s() {
    RT_FN("S_1_21_j.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8761])));
    return rt::NUL;
}
rt::Value C_S_1_21_j::m_S_8_5b_() {
    RT_FN("S_1_21_j.S_8_5b_");
    return rt::slot_string(rt::add(this->m_S__3f__21_N(C_S__26_c::sm_S__3d__60_(true), g::SV.C_S_1_21_j__S__3f__21_h, rt::trv(rt::VS(g::LS[8378])), true, C_S__26__21__5f_::dm_S__3f__21_N_4()), this->m_S__21_S(g::SV.C_S__2c__21__5b___id, g::SV.C_S_4_21_h__id, false)));
    return rt::NUL;
}
bool C_S_1_21_j::g_S__20__21_3() {
    RT_FN("S_1_21_j.S__20__21_3_get");
    return ({ bool _t30216 = ({ bool _t30213 = ({ bool _t30210 = ({ bool _t30209 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30209 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_i__id)) : _t30209; }); _t30210 ? (bool)((C_S__26_c::sm_S__3d__60_(true) >= g::SV.C_S_1_21_j__S__3f__21_h)) : _t30210; }); _t30213 ? (bool)(({ rt::Value _o30211 = C_S_8G::sm_S__21__21_H(g::SV.C_S__2c__21__5b___id); C_S__60_6* _p30212 = rt::as_ptr<C_S__60_6>(_o30211); _p30212 ? _p30212->f_S__3f__21_6 : rt::T(rt::dget(_o30211, NM_S__3f__21_6)); })) : _t30213; }); _t30216 ? (bool)(({ rt::Value _o30214 = C_S_8G::sm_S__21__21_H(g::SV.C_S_4_21_h__id); C_S__60_6* _p30215 = rt::as_ptr<C_S__60_6>(_o30214); _p30215 ? _p30215->f_S__3f__21_6 : rt::T(rt::dget(_o30214, NM_S__3f__21_6)); })) : _t30216; });
    return false;
}
C_S_1_21_j* C_S_1_21_j::alloc_() {
    C_S_1_21_j* o = rt::make<C_S_1_21_j>();
    return o;
}
rt::Value C_S_1_21_j::mk_(rt::Value* a, int n) {
    C_S_1_21_j* o = alloc_();
    o->C_S_1_21_j::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_j::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S_1_21_j::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_1_21_j::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S_1_21_j::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S_1_21_j::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_j::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_j__id)); return true;
    case NM_S__3f__21_h: out = rt::V(g::SV.C_S_1_21_j__S__3f__21_h); return true;
    default: return false;
    }
}
bool C_S_1_21_j::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_j__id = rt::touint(v); return true;
    case NM_S__3f__21_h: g::SV.C_S_1_21_j__S__3f__21_h = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_1_21_j::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_22_E::ctor_() {
    RT_FN("S_1_22_E.S_1_22_E");
    (void)((this->C_S__26__21__5f_::ctor_(), rt::NUL));
    ({ double _v30217 = 1155.0; this->f_S_6_21_Z = rt::touint_d(_v30217); _v30217; });
    ({ rt::Value _v30218 = rt::trv(rt::VS(g::LS[8762])); this->f_S_1i = rt::slot_string(_v30218); _v30218; });
    ({ double _v30219 = 38.0; this->f_S__22__21_U = rt::toint_d(_v30219); _v30219; });
    ({ double _v30220 = 4.0; this->f_S__21_G = rt::toint_d(_v30220); _v30220; });
    ({ double _v30221 = 11875.0; this->f_S__25_w = rt::toint_d(_v30221); _v30221; });
}
rt::Value C_S_1_22_E::m_S__40__22_() {
    RT_FN("S_1_22_E.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[8763]), C_S__26_c::sm_S_6_21_T(C_S_1_22_E::sm_S__26_s(), 5.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S_1_22_E::m_S_8_5b_() {
    RT_FN("S_1_22_E.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0)), 7200.0, rt::trv(rt::VS(g::LS[8764])), false, true));
    return rt::NUL;
}
bool C_S_1_22_E::g_S__20__21_3() {
    RT_FN("S_1_22_E.S__20__21_3_get");
    return ({ bool _t30223 = ({ bool _t30222 = this->C_S__26__21__5f_::g_S__20__21_3(); _t30222 ? (bool)(C_S__26_c::sm_S__5d_B(g::SV.C_S__3d__21__27___id, true)) : _t30222; }); _t30223 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(7200.0))) : _t30223; });
    return false;
}
double C_S_1_22_E::sm_S__26_s() {
    RT_FN("S_1_22_E.S__26_s");
    return (0.7 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S_8_3e___id, false, false, C_S__26_c::dsm_S_7i_3()), 0.7));
    return 0.0;
}
C_S_1_22_E* C_S_1_22_E::alloc_() {
    C_S_1_22_E* o = rt::make<C_S_1_22_E>();
    return o;
}
rt::Value C_S_1_22_E::mk_(rt::Value* a, int n) {
    C_S_1_22_E* o = alloc_();
    o->C_S_1_22_E::ctor_();
    return rt::VO(o);
}
bool C_S_1_22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(g_S__20__21_3()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__26__21__5f_::dget(id, out);
}
bool C_S_1_22_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dset(id, v);
}
bool C_S_1_22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__20__21_3: { rt::Value f = rt::VB(g_S__20__21_3()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__26__21__5f_::dcall(id, a, n, out);
}
bool C_S_1_22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__20__21_3: return false;
    default: break;
    }
    return C_S__26__21__5f_::dmeth(id);
}
bool C_S_1_22_E::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_1_22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22_E__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22_E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void static_init_16(std::vector<std::string>& errs) {
    try { (g::SV.C_S__3c_C__ids = rt::arr_lit({rt::VS(g::LS[8532])})); } catch (...) { errs.push_back(std::string("S__3c_C.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c_L__ids = rt::arr_lit({rt::VS(g::LS[8535])})); } catch (...) { errs.push_back(std::string("S__3c_L.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c_M__ids = rt::arr_lit({rt::VS(g::LS[8540])})); } catch (...) { errs.push_back(std::string("S__3c_M.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__21_R__ids = rt::arr_lit({rt::VS(g::LS[8550])})); } catch (...) { errs.push_back(std::string("S__3e__21_R.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__22_3__S__3f__22_3 = 3.0); } catch (...) { errs.push_back(std::string("S__3e__22_3.S__3f__22_3: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__22_M__S_1_21_S = 0.02); } catch (...) { errs.push_back(std::string("S__3e__22_M.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_8_21__26___S_1_21_S = 100000.0); } catch (...) { errs.push_back(std::string("S_8_21__26_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__21_J__ids = rt::arr_lit({rt::VS(g::LS[8564])})); } catch (...) { errs.push_back(std::string("S__3f__21_J.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__21_b__S_1_21_S = 25.0); } catch (...) { errs.push_back(std::string("S__3f__21_b.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__21_j__S_9_21_i = 1e+24); } catch (...) { errs.push_back(std::string("S__3f__21_j.S_9_21_i: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_k__ids = rt::arr_lit({rt::VS(g::LS[8581])})); } catch (...) { errs.push_back(std::string("S__3f_k.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__21__23___ids = rt::arr_lit({rt::VS(g::LS[8592])})); } catch (...) { errs.push_back(std::string("S__26__21__23_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__21_Y__ids = rt::arr_lit({rt::VS(g::LS[8605])})); } catch (...) { errs.push_back(std::string("S__26__21_Y.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__21_h__S__3c__21_Y = 100000000.0); } catch (...) { errs.push_back(std::string("S__26__21_h.S__3c__21_Y: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__3c___ids = rt::arr_lit({rt::VS(g::LS[8627])})); } catch (...) { errs.push_back(std::string("S__26__3c_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_i__S_1_21_S = 0.5); } catch (...) { errs.push_back(std::string("S__26_i.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_i__S_6_21_c = 0.1); } catch (...) { errs.push_back(std::string("S__26_i.S_6_21_c: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__21_5__ids = rt::arr_lit({rt::VS(g::LS[8632])})); } catch (...) { errs.push_back(std::string("S__27__21_5.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__21_A__ids = rt::arr_lit({rt::VS(g::LS[8637])})); } catch (...) { errs.push_back(std::string("S__27__21_A.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__2c___ids = rt::arr_lit({rt::VS(g::LS[8645])})); } catch (...) { errs.push_back(std::string("S__27__2c_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__27_A__ids = rt::arr_lit({rt::VS(g::LS[8648])})); } catch (...) { errs.push_back(std::string("S__27_A.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__21_M__ids = rt::arr_lit({rt::VS(g::LS[8670])})); } catch (...) { errs.push_back(std::string("S__2c__21_M.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c_9__ids = rt::arr_lit({rt::VS(g::LS[8682])})); } catch (...) { errs.push_back(std::string("S__2c_9.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_T__ids = rt::arr_lit({rt::VS(g::LS[8696])})); } catch (...) { errs.push_back(std::string("S__2d__21_T.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_h__S__5b__21_ = 11000.0); } catch (...) { errs.push_back(std::string("S__2d__21_h.S__5b__21_: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__27___S_1_21_S = 130.0); } catch (...) { errs.push_back(std::string("S__2d__27_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__27___ids = rt::arr_lit({rt::VS(g::LS[8711])})); } catch (...) { errs.push_back(std::string("S__2d__27_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__40___ids = rt::arr_lit({rt::VS(g::LS[8715])})); } catch (...) { errs.push_back(std::string("S__2d__40_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_21_Y__ids = rt::arr_lit({rt::VS(g::LS[8721])})); } catch (...) { errs.push_back(std::string("S_0_21_Y.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_24___S_1_21_S = 160.0); } catch (...) { errs.push_back(std::string("S_0_24_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_24___ids = rt::arr_lit({rt::VS(g::LS[8724])})); } catch (...) { errs.push_back(std::string("S_0_24_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_3d___ids = rt::arr_lit({rt::VS(g::LS[8738])})); } catch (...) { errs.push_back(std::string("S_0_3d_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_21_7__S__27_Q = false); } catch (...) { errs.push_back(std::string("S_1_21_7.S__27_Q: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_21_7__S__5e__21_C = rt::arr_lit({rt::V(0.0), rt::V(1.0), rt::V(2.0), rt::V(3.0), rt::V(4.0), rt::V(5.0), rt::V(11.0)})); } catch (...) { errs.push_back(std::string("S_1_21_7.S__5e__21_C: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_21_7__S__3b_M = rt::arr_lit({rt::V(8.0), rt::V(6.0), rt::V(8.0), rt::V(7.0), rt::V(7.0), rt::V(6.0), rt::V((-1.0))})); } catch (...) { errs.push_back(std::string("S_1_21_7.S__3b_M: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_21_7__S_4J = rt::arr_lit({rt::V(10.0), rt::V(9.0), rt::V(9.0), rt::V(9.0), rt::V(10.0), rt::V(10.0), rt::V((-1.0))})); } catch (...) { errs.push_back(std::string("S_1_21_7.S_4J: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_21_W__ids = rt::arr_lit({rt::VS(g::LS[8755])})); } catch (...) { errs.push_back(std::string("S_1_21_W.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_21_a__S_1_21_S = 120.0); } catch (...) { errs.push_back(std::string("S_1_21_a.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_21_j__S__3f__21_h = 45000.0); } catch (...) { errs.push_back(std::string("S_1_21_j.S__3f__21_h: ") + rt::exc_text()); }
}
}  // namespace g
