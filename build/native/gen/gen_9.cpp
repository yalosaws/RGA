// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S_6_21_s::ctor_() {
    RT_FN("S_6_21_s.S_6_21_s");
    (void)((this->C_S__3e__21_q::ctor_(), rt::NUL));
    ({ double _v17392 = 833.0; this->f_S_6_21_Z = rt::touint_d(_v17392); _v17392; });
    ({ rt::Value _v17393 = rt::trv(rt::VS(g::LS[5155])); this->f_S_1i = rt::slot_string(_v17393); _v17393; });
    ({ rt::Value _v17394 = rt::VS(g::LS[5156]); this->f_S__5e__21__23_ = rt::slot_string(_v17394); _v17394; });
    ({ double _v17395 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v17395); _v17395; });
    ({ double _v17396 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v17396); _v17396; });
    ({ double _v17397 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17397); _v17397; });
}
rt::Value C_S_6_21_s::m_S__5b__21_C() {
    RT_FN("S_6_21_s.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ uint32_t _v17398 = g::SV.C_S__3b__21__3f___id; this->f_S__2b__21_s = _v17398; _v17398; });
    ({ uint32_t _v17399 = g::SV.C_S__5d_w__id; this->f_S__21__21_s = _v17399; _v17399; });
    ({ uint32_t _v17400 = g::SV.C_S__3b__21_r__id; this->f_S__20__21_r = _v17400; _v17400; });
    return rt::NUL;
}
rt::Value C_S_6_21_s::m_S__3d__21_s() {
    RT_FN("S_6_21_s.S__3d__21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5157]), C_S__26_c::sm_S_8_21_Z(C_S_6_21_s::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_6_21_s::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_6_21_s::m_S_8_22_M() {
    RT_FN("S_6_21_s.S_8_22_M");
    if (C_S_8G::sm_S__3c_P(g::SV.C_S__3e__22__3f___id)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[5158]), C_S__26_c::sm_S_8_21_Z(C_S_6_21_s::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
double C_S_6_21_s::sm_S__2c_J() {
    RT_FN("S_6_21_s.S__2c_J");
    return C_S__26_c::sm_S_6_22__26_((70.0 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7)), rt::toint_d(3.0));
    return 0.0;
}
double C_S_6_21_s::sm_S__23__21_Y() {
    RT_FN("S_6_21_s.S__23__21_Y");
    return C_S__26_c::sm_S_6_22__26_((0.6 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.6)), rt::toint_d(3.0));
    return 0.0;
}
double C_S_6_21_s::sm_S__2c__21_G() {
    RT_FN("S_6_21_s.S__2c__21_G");
    return rt::m_floor(C_S__26_c::sm_S_6_22__26_((1.0 + (0.25 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()))), 1.5))), rt::toint_d(3.0)));
    return 0.0;
}
C_S_6_21_s* C_S_6_21_s::alloc_() {
    C_S_6_21_s* o = rt::make<C_S_6_21_s>();
    return o;
}
rt::Value C_S_6_21_s::mk_(rt::Value* a, int n) {
    C_S_6_21_s* o = alloc_();
    o->C_S_6_21_s::ctor_();
    return rt::VO(o);
}
bool C_S_6_21_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_22_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e__21_q::dget(id, out);
}
bool C_S_6_21_s::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e__21_q::dset(id, v);
}
bool C_S_6_21_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__3d__21_s: out = m_S__3d__21_s(); return true;
    case NM_S_8_22_M: out = m_S_8_22_M(); return true;
    default: break;
    }
    return C_S__3e__21_q::dcall(id, a, n, out);
}
bool C_S_6_21_s::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__3d__21_s: return true;
    case NM_S_8_22_M: return true;
    default: break;
    }
    return C_S__3e__21_q::dmeth(id);
}
bool C_S_6_21_s::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    case NM_S__23__21_Y: return true;
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_6_21_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21_s__id)); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_21_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_21_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_6_22__2b_::ctor_() {
    RT_FN("S_6_22__2b_.S_6_22__2b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17401 = 1001.0; this->f_S_6_21_Z = rt::touint_d(_v17401); _v17401; });
    ({ rt::Value _v17402 = rt::trv(rt::VS(g::LS[5159])); this->f_S_1i = rt::slot_string(_v17402); _v17402; });
    ({ rt::Value _v17403 = rt::VS(g::LS[5149]); this->f_S__5e__21__23_ = rt::slot_string(_v17403); _v17403; });
    ({ rt::Value _v17404 = rt::trv(rt::VS(g::LS[5160])); this->f_S_7_23_ = rt::slot_string(_v17404); _v17404; });
    ({ double _v17405 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17405); _v17405; });
    ({ bool _v17406 = false; this->f_S_3e = _v17406; _v17406; });
}
rt::Value C_S_6_22__2b_::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S_6_22__2b_.S_6r");
    ({ bool _v17407 = false; this->f_S__3c__21_7 = _v17407; _v17407; });
    (l_A__loc2_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)) - 1.0));
    ({ rt::Value _v17408 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(13.0), _v17408); });
    return rt::NUL;
}
bool C_S_6_22__2b_::g_S__2d_6() {
    int32_t l_A__loc2_ = 0;
    bool l_A__loc1_ = false;
    RT_FN("S_6_22__2b_.S__2d_6_get");
    (l_A__loc2_ = rt::toint_d(0.0));
    if ((({ bool _t17410 = ({ bool _t17409 = (((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0)); _t17409 ? _t17409 : (bool)((((double)(C_S_8G::sg_S__2c_P())) < 2.0)); }); _t17410 ? _t17410 : (bool)((!(((double)(g::SV.C_S__23__21__21___S_1_22_0)) == (-1.0)))); }) || (!C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__5d__22__2d___id)))) {
        return false;
    }
    (l_A__loc1_ = false);
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) < rt::alen(g::SV.C_S_8G__S__2d__21_4))) {
        if ((rt::is_class(rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc2_))), C_S__3e__21_q::CI) && ({ rt::Value _o17411 = rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc2_))); C_S__60_6* _p17412 = rt::as_ptr<C_S__60_6>(_o17411); _p17412 ? _p17412->g_S_9_21__25_() : rt::T(rt::dget(_o17411, NM_S_9_21__25_)); }))) {
            (l_A__loc1_ = true);
            break;
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return l_A__loc1_;
    return false;
}
bool C_S_6_22__2b_::g_S__26_8() {
    RT_FN("S_6_22__2b_.S__26_8_get");
    return false;
    return false;
}
C_S_6_22__2b_* C_S_6_22__2b_::alloc_() {
    C_S_6_22__2b_* o = rt::make<C_S_6_22__2b_>();
    return o;
}
rt::Value C_S_6_22__2b_::mk_(rt::Value* a, int n) {
    C_S_6_22__2b_* o = alloc_();
    o->C_S_6_22__2b_::ctor_();
    return rt::VO(o);
}
bool C_S_6_22__2b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_22__2b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_22__2b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_22__2b_::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_22__2b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_22__2b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22__2b___id)); return true;
    default: return false;
    }
}
bool C_S_6_22__2b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22__2b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_22__2b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_22_0::ctor_() {
    RT_FN("S_6_22_0.S_6_22_0");
    (void)((this->C_S__3e__21_q::ctor_(), rt::NUL));
    ({ double _v17413 = 834.0; this->f_S_6_21_Z = rt::touint_d(_v17413); _v17413; });
    ({ rt::Value _v17414 = rt::trv(rt::VS(g::LS[5161])); this->f_S_1i = rt::slot_string(_v17414); _v17414; });
    ({ rt::Value _v17415 = rt::VS(g::LS[5162]); this->f_S__5e__21__23_ = rt::slot_string(_v17415); _v17415; });
    ({ double _v17416 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v17416); _v17416; });
    ({ double _v17417 = 11.0; this->f_S__2d__21__5e_ = rt::toint_d(_v17417); _v17417; });
    ({ double _v17418 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17418); _v17418; });
}
rt::Value C_S_6_22_0::m_S__5b__21_C() {
    RT_FN("S_6_22_0.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ uint32_t _v17419 = g::SV.C_S__25_i__id; this->f_S__2b__21_s = _v17419; _v17419; });
    ({ uint32_t _v17420 = g::SV.C_S_8_21__60___id; this->f_S__21__21_s = _v17420; _v17420; });
    ({ uint32_t _v17421 = g::SV.C_S_0_22_0__id; this->f_S__20__21_r = _v17421; _v17421; });
    return rt::NUL;
}
rt::Value C_S_6_22_0::m_S__3d__21_s() {
    RT_FN("S_6_22_0.S__3d__21_s");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5163])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[3615]), C_S__26_c::sm_S_8_21_Z(C_S_6_22_0::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
double C_S_6_22_0::sm_S__2c__21_G() {
    RT_FN("S_6_22_0.S__2c__21_G");
    return C_S__26_c::sm_S_6_22__26_(25.0, rt::toint_d(11.0));
    return 0.0;
}
C_S_6_22_0* C_S_6_22_0::alloc_() {
    C_S_6_22_0* o = rt::make<C_S_6_22_0>();
    return o;
}
rt::Value C_S_6_22_0::mk_(rt::Value* a, int n) {
    C_S_6_22_0* o = alloc_();
    o->C_S_6_22_0::ctor_();
    return rt::VO(o);
}
bool C_S_6_22_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e__21_q::dget(id, out);
}
bool C_S_6_22_0::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e__21_q::dset(id, v);
}
bool C_S_6_22_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__3d__21_s: out = m_S__3d__21_s(); return true;
    default: break;
    }
    return C_S__3e__21_q::dcall(id, a, n, out);
}
bool C_S_6_22_0::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__3d__21_s: return true;
    default: break;
    }
    return C_S__3e__21_q::dmeth(id);
}
bool C_S_6_22_0::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_6_22_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22_0__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_22_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22_0__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_22_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_7_21_q::ctor_() {
    RT_FN("S_7_21_q.S_7_21_q");
    (void)((this->C_S__3e__21_q::ctor_(), rt::NUL));
    ({ double _v17422 = 838.0; this->f_S_6_21_Z = rt::touint_d(_v17422); _v17422; });
    ({ rt::Value _v17423 = rt::trv(rt::VS(g::LS[5164])); this->f_S_1i = rt::slot_string(_v17423); _v17423; });
    ({ rt::Value _v17424 = rt::VS(g::LS[5165]); this->f_S__5e__21__23_ = rt::slot_string(_v17424); _v17424; });
    ({ double _v17425 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v17425); _v17425; });
    ({ double _v17426 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v17426); _v17426; });
    ({ double _v17427 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17427); _v17427; });
}
rt::Value C_S_7_21_q::m_S__5b__21_C() {
    RT_FN("S_7_21_q.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ uint32_t _v17428 = g::SV.C_S__20__21_8__id; this->f_S__2b__21_s = _v17428; _v17428; });
    ({ uint32_t _v17429 = g::SV.C_S_9l__id; this->f_S__21__21_s = _v17429; _v17429; });
    ({ uint32_t _v17430 = g::SV.C_S__26__21_q__id; this->f_S__20__21_r = _v17430; _v17430; });
    return rt::NUL;
}
rt::Value C_S_7_21_q::m_S__3d__21_s() {
    RT_FN("S_7_21_q.S__3d__21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5166]), C_S__26_c::sm_S_8_21_Z(C_S_7_21_q::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_7_21_q::m_S_8_22_M() {
    RT_FN("S_7_21_q.S_8_22_M");
    if (C_S_8G::sm_S__3c_P(g::SV.C_S__3f__22_B__id)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[5167]), C_S__26_c::sm_S_8_21_Z(C_S_7_21_q::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
double C_S_7_21_q::sm_S__60_z() {
    RT_FN("S_7_21_q.S__60_z");
    return C_S__26_c::sm_S_6_22__26_((7500.0 + (7.5 * rt::m_pow(rt::m_log((1.0 + C_S__23__21__21_::sm_S__2c_d())), 3.75))), rt::toint_d(4.0));
    return 0.0;
}
double C_S_7_21_q::sm_S_6_21_Y() {
    RT_FN("S_7_21_q.S_6_21_Y");
    return C_S__26_c::sm_S_6_22__26_(rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, C_S__26_c::dsm_S__40__21__5b__1(), C_S__26_c::dsm_S__40__21__5b__2()))), 2.0), rt::toint_d(4.0));
    return 0.0;
}
C_S_7_21_q* C_S_7_21_q::alloc_() {
    C_S_7_21_q* o = rt::make<C_S_7_21_q>();
    return o;
}
rt::Value C_S_7_21_q::mk_(rt::Value* a, int n) {
    C_S_7_21_q* o = alloc_();
    o->C_S_7_21_q::ctor_();
    return rt::VO(o);
}
bool C_S_7_21_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_22_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e__21_q::dget(id, out);
}
bool C_S_7_21_q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e__21_q::dset(id, v);
}
bool C_S_7_21_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__3d__21_s: out = m_S__3d__21_s(); return true;
    case NM_S_8_22_M: out = m_S_8_22_M(); return true;
    default: break;
    }
    return C_S__3e__21_q::dcall(id, a, n, out);
}
bool C_S_7_21_q::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__3d__21_s: return true;
    case NM_S_8_22_M: return true;
    default: break;
    }
    return C_S__3e__21_q::dmeth(id);
}
bool C_S_7_21_q::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S_7_21_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21_q__id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_21_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21_q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_21_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S_7_21_t::ctor_() {
    RT_FN("S_7_21_t.S_7_21_t");
    (void)((this->C_S__3e__21_q::ctor_(), rt::NUL));
    ({ double _v17431 = 827.0; this->f_S_6_21_Z = rt::touint_d(_v17431); _v17431; });
    ({ rt::Value _v17432 = rt::trv(rt::VS(g::LS[5168])); this->f_S_1i = rt::slot_string(_v17432); _v17432; });
    ({ rt::Value _v17433 = rt::VS(g::LS[5169]); this->f_S__5e__21__23_ = rt::slot_string(_v17433); _v17433; });
    ({ double _v17434 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v17434); _v17434; });
    ({ double _v17435 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v17435); _v17435; });
    ({ double _v17436 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17436); _v17436; });
}
rt::Value C_S_7_21_t::m_S__5b__21_C() {
    RT_FN("S_7_21_t.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ uint32_t _v17437 = g::SV.C_S_9_21_8__id; this->f_S__2b__21_s = _v17437; _v17437; });
    ({ uint32_t _v17438 = g::SV.C_S__20__5d___id; this->f_S__21__21_s = _v17438; _v17438; });
    ({ uint32_t _v17439 = g::SV.C_S__60__21_t__id; this->f_S__20__21_r = _v17439; _v17439; });
    return rt::NUL;
}
rt::Value C_S_7_21_t::m_S__3d__21_s() {
    RT_FN("S_7_21_t.S__3d__21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5170]), C_S__26_c::sm_S_8_21_Z(C_S_7_21_t::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_7_21_t::m_S_8_22_M() {
    RT_FN("S_7_21_t.S_8_22_M");
    if (C_S_8G::sm_S__3c_P(g::SV.C_S__21__22_B__id)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[5171]), rt::dcallv(rt::V(C_S_7_21_t::sm_S__40__21__5f_()), rt::N_toFixed, rt::V(1.0))));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
double C_S_7_21_t::sm_S__2c__21_G() {
    RT_FN("S_7_21_t.S__2c__21_G");
    return C_S__26_c::sm_S_6_22__26_((6.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__22__21_B(rt::toint_d(3.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()))), 1.6)), rt::toint_d(10.0));
    return 0.0;
}
double C_S_7_21_t::sm_S__40__21__5f_() {
    RT_FN("S_7_21_t.S__40__21__5f_");
    return 0.7;
    return 0.0;
}
C_S_7_21_t* C_S_7_21_t::alloc_() {
    C_S_7_21_t* o = rt::make<C_S_7_21_t>();
    return o;
}
rt::Value C_S_7_21_t::mk_(rt::Value* a, int n) {
    C_S_7_21_t* o = alloc_();
    o->C_S_7_21_t::ctor_();
    return rt::VO(o);
}
bool C_S_7_21_t::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_22_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e__21_q::dget(id, out);
}
bool C_S_7_21_t::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e__21_q::dset(id, v);
}
bool C_S_7_21_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__3d__21_s: out = m_S__3d__21_s(); return true;
    case NM_S_8_22_M: out = m_S_8_22_M(); return true;
    default: break;
    }
    return C_S__3e__21_q::dcall(id, a, n, out);
}
bool C_S_7_21_t::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__3d__21_s: return true;
    case NM_S_8_22_M: return true;
    default: break;
    }
    return C_S__3e__21_q::dmeth(id);
}
bool C_S_7_21_t::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    case NM_S__40__21__5f_: return true;
    default: return false;
    }
}
bool C_S_7_21_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21_t__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__21__5f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_21_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21_t__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_21_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S__40__21__5f_: out = rt::V(sm_S__40__21__5f_()); return true;
    default: return false;
    }
}
void C_S_8_21_r::ctor_() {
    RT_FN("S_8_21_r.S_8_21_r");
    (void)((this->C_S__3e__21_q::ctor_(), rt::NUL));
    ({ double _v17440 = 837.0; this->f_S_6_21_Z = rt::touint_d(_v17440); _v17440; });
    ({ rt::Value _v17441 = rt::trv(rt::VS(g::LS[5172])); this->f_S_1i = rt::slot_string(_v17441); _v17441; });
    ({ rt::Value _v17442 = rt::VS(g::LS[5173]); this->f_S__5e__21__23_ = rt::slot_string(_v17442); _v17442; });
    ({ double _v17443 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v17443); _v17443; });
    ({ double _v17444 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v17444); _v17444; });
    ({ double _v17445 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17445); _v17445; });
}
rt::Value C_S_8_21_r::m_S__5b__21_C() {
    RT_FN("S_8_21_r.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ uint32_t _v17446 = g::SV.C_S__40__3d___id; this->f_S__2b__21_s = _v17446; _v17446; });
    ({ uint32_t _v17447 = g::SV.C_S__20__5b___id; this->f_S__21__21_s = _v17447; _v17447; });
    ({ uint32_t _v17448 = g::SV.C_S__3f__21_s__id; this->f_S__20__21_r = _v17448; _v17448; });
    return rt::NUL;
}
rt::Value C_S_8_21_r::m_S__3d__21_s() {
    RT_FN("S_8_21_r.S__3d__21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5174]), C_S__26_c::sm_S_8_21_Z(C_S_8_21_r::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_8_21_r::sm_S_1_3d_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_8_21_r::m_S_8_22_M() {
    RT_FN("S_8_21_r.S_8_22_M");
    if (C_S_8G::sm_S__3c_P(g::SV.C_S_1_22__3d___id)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[5175]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_8_21_r__S__26__22__3d_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_6_21_T(C_S_8_21_r::sm_S__27__21_b(), 5.0, C_S__26_c::dsm_S_6_21_T_2())));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
double C_S_8_21_r::sm_S__40__21__3f_() {
    RT_FN("S_8_21_r.S__40__21__3f_");
    return C_S__26_c::sm_S_6_22__26_((3.0 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7)), rt::toint_d(6.0));
    return 0.0;
}
double C_S_8_21_r::sm_S_1_3d_() {
    RT_FN("S_8_21_r.S_1_3d_");
    return C_S__26_c::sm_S_6_22__26_((0.6 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.6)), rt::toint_d(6.0));
    return 0.0;
}
double C_S_8_21_r::sm_S__27__21_b() {
    RT_FN("S_8_21_r.S__27__21_b");
    return C_S__26_c::sm_S_6_22__26_(rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__5e_x__id, false, false, C_S__26_c::dsm_S_7i_3()), 0.7), rt::toint_d(6.0));
    return 0.0;
}
C_S_8_21_r* C_S_8_21_r::alloc_() {
    C_S_8_21_r* o = rt::make<C_S_8_21_r>();
    return o;
}
rt::Value C_S_8_21_r::mk_(rt::Value* a, int n) {
    C_S_8_21_r* o = alloc_();
    o->C_S_8_21_r::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_22_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e__21_q::dget(id, out);
}
bool C_S_8_21_r::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e__21_q::dset(id, v);
}
bool C_S_8_21_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__3d__21_s: out = m_S__3d__21_s(); return true;
    case NM_S_8_22_M: out = m_S_8_22_M(); return true;
    default: break;
    }
    return C_S__3e__21_q::dcall(id, a, n, out);
}
bool C_S_8_21_r::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__3d__21_s: return true;
    case NM_S_8_22_M: return true;
    default: break;
    }
    return C_S__3e__21_q::dmeth(id);
}
bool C_S_8_21_r::smeth_(int id) {
    switch (id) {
    case NM_S__40__21__3f_: return true;
    case NM_S_1_3d_: return true;
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_8_21_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21_r__id)); return true;
    case NM_S__26__22__3d_: out = rt::V(g::SV.C_S_8_21_r__S__26__22__3d_); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_3d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_21_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21_r__id = rt::touint(v); return true;
    case NM_S__26__22__3d_: g::SV.C_S_8_21_r__S__26__22__3d_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_8_21_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    case NM_S_1_3d_: out = rt::V(sm_S_1_3d_()); return true;
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3d__21_t::ctor_() {
    RT_FN("S__3d__21_t.S__3d__21_t");
    (void)((this->C_S__3e__21_q::ctor_(), rt::NUL));
    ({ double _v17449 = 826.0; this->f_S_6_21_Z = rt::touint_d(_v17449); _v17449; });
    ({ rt::Value _v17450 = rt::trv(rt::VS(g::LS[5176])); this->f_S_1i = rt::slot_string(_v17450); _v17450; });
    ({ rt::Value _v17451 = rt::VS(g::LS[5177]); this->f_S__5e__21__23_ = rt::slot_string(_v17451); _v17451; });
    ({ double _v17452 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v17452); _v17452; });
    ({ double _v17453 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v17453); _v17453; });
    ({ double _v17454 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17454); _v17454; });
}
rt::Value C_S__3d__21_t::m_S__5b__21_C() {
    RT_FN("S__3d__21_t.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ uint32_t _v17455 = g::SV.C_S__22_3__id; this->f_S__2b__21_s = _v17455; _v17455; });
    ({ uint32_t _v17456 = g::SV.C_S__3c_m__id; this->f_S__21__21_s = _v17456; _v17456; });
    ({ uint32_t _v17457 = g::SV.C_S__40__21_t__id; this->f_S__20__21_r = _v17457; _v17457; });
    return rt::NUL;
}
rt::Value C_S__3d__21_t::m_S__3d__21_s() {
    RT_FN("S__3d__21_t.S__3d__21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5178])));
    return rt::NUL;
}
rt::Value C_S__3d__21_t::m_S_8_22_M() {
    RT_FN("S__3d__21_t.S_8_22_M");
    if (C_S_8G::sm_S__3c_P(g::SV.C_S__21__22_C__id)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[5179]), C_S__26_c::sm_S_8_21_Z(((double)(g::SV.C_S__3d__21_t__S__26__22__3f_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
rt::Value C_S__3d__21_t::m_S_6r() {
    RT_FN("S__3d__21_t.S_6r");
    (void)(this->C_S__3e__21_q::m_S_6r());
    if (C_S_8G::sm_S__3c_P(g::SV.C_S__21__22_C__id)) {
        if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0)) {
            ({ uint32_t _v17460 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_7I__id); rt::Value _o17458 = C_S_8G::sm_S__23_N(g::SV.C_S_7I__id); C_S_84* _p17459 = rt::as_ptr<C_S_84>(_o17458); if (_p17459) _p17459->f_S_6_21_A = ((int32_t)(_v17460)); else rt::dset(_o17458, NM_S_6_21_A, rt::V((double)(_v17460))); _v17460; });
        }
        if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)) {
            ({ uint32_t _v17463 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__60_T__id); rt::Value _o17461 = C_S_8G::sm_S__23_N(g::SV.C_S__60_T__id); C_S_84* _p17462 = rt::as_ptr<C_S_84>(_o17461); if (_p17462) _p17462->f_S_6_21_A = ((int32_t)(_v17463)); else rt::dset(_o17461, NM_S_6_21_A, rt::V((double)(_v17463))); _v17463; });
        }
        if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) {
            ({ uint32_t _v17466 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_6n__id); rt::Value _o17464 = C_S_8G::sm_S__23_N(g::SV.C_S_6n__id); C_S_84* _p17465 = rt::as_ptr<C_S_84>(_o17464); if (_p17465) _p17465->f_S_6_21_A = ((int32_t)(_v17466)); else rt::dset(_o17464, NM_S_6_21_A, rt::V((double)(_v17466))); _v17466; });
        }
        if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)) {
            ({ uint32_t _v17469 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_9_21_n__id); rt::Value _o17467 = C_S_8G::sm_S__23_N(g::SV.C_S_9_21_n__id); C_S_84* _p17468 = rt::as_ptr<C_S_84>(_o17467); if (_p17468) _p17468->f_S_6_21_A = ((int32_t)(_v17469)); else rt::dset(_o17467, NM_S_6_21_A, rt::V((double)(_v17469))); _v17469; });
        }
        if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) {
            ({ uint32_t _v17472 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__25__21_n__id); rt::Value _o17470 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_n__id); C_S_84* _p17471 = rt::as_ptr<C_S_84>(_o17470); if (_p17471) _p17471->f_S_6_21_A = ((int32_t)(_v17472)); else rt::dset(_o17470, NM_S_6_21_A, rt::V((double)(_v17472))); _v17472; });
        }
        if ((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) {
            ({ uint32_t _v17475 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__27__21_n__id); rt::Value _o17473 = C_S_8G::sm_S__23_N(g::SV.C_S__27__21_n__id); C_S_84* _p17474 = rt::as_ptr<C_S_84>(_o17473); if (_p17474) _p17474->f_S_6_21_A = ((int32_t)(_v17475)); else rt::dset(_o17473, NM_S_6_21_A, rt::V((double)(_v17475))); _v17475; });
        }
    }
    return rt::NUL;
}
double C_S__3d__21_t::sm_S__2c__21_G() {
    RT_FN("S__3d__21_t.S__2c__21_G");
    return C_S__26_c::sm_S_6_22__26_((0.25 * rt::m_pow((C_S__26_c::sm_S__21__21_8() * rt::tonum((rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 135.0), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 104.0)), rt::V(1.0))))), 0.5)), rt::toint_d(12.0));
    return 0.0;
}
C_S__3d__21_t* C_S__3d__21_t::alloc_() {
    C_S__3d__21_t* o = rt::make<C_S__3d__21_t>();
    return o;
}
rt::Value C_S__3d__21_t::mk_(rt::Value* a, int n) {
    C_S__3d__21_t* o = alloc_();
    o->C_S__3d__21_t::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21_t::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_22_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e__21_q::dget(id, out);
}
bool C_S__3d__21_t::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e__21_q::dset(id, v);
}
bool C_S__3d__21_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__3d__21_s: out = m_S__3d__21_s(); return true;
    case NM_S_8_22_M: out = m_S_8_22_M(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    default: break;
    }
    return C_S__3e__21_q::dcall(id, a, n, out);
}
bool C_S__3d__21_t::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__3d__21_s: return true;
    case NM_S_8_22_M: return true;
    case NM_S_6r: return true;
    default: break;
    }
    return C_S__3e__21_q::dmeth(id);
}
bool C_S__3d__21_t::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3d__21_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__21_t__id)); return true;
    case NM_S__26__22__3f_: out = rt::V((double)(g::SV.C_S__3d__21_t__S__26__22__3f_)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3d__21_t__S_1_21_S); return true;
    case NM_S_6_21_c: out = rt::V(g::SV.C_S__3d__21_t__S_6_21_c); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__21_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__21_t__id = rt::touint(v); return true;
    case NM_S__26__22__3f_: g::SV.C_S__3d__21_t__S__26__22__3f_ = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3d__21_t__S_1_21_S = rt::tonum(v); return true;
    case NM_S_6_21_c: g::SV.C_S__3d__21_t__S_6_21_c = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3d__21_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__40__21_p::ctor_() {
    RT_FN("S__40__21_p.S__40__21_p");
    (void)((this->C_S__3e__21_q::ctor_(), rt::NUL));
    ({ double _v17476 = 830.0; this->f_S_6_21_Z = rt::touint_d(_v17476); _v17476; });
    ({ rt::Value _v17477 = rt::trv(rt::VS(g::LS[5180])); this->f_S_1i = rt::slot_string(_v17477); _v17477; });
    ({ rt::Value _v17478 = rt::VS(g::LS[5181]); this->f_S__5e__21__23_ = rt::slot_string(_v17478); _v17478; });
    ({ double _v17479 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v17479); _v17479; });
    ({ double _v17480 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v17480); _v17480; });
    ({ double _v17481 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17481); _v17481; });
}
rt::Value C_S__40__21_p::m_S__5b__21_C() {
    RT_FN("S__40__21_p.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ uint32_t _v17482 = g::SV.C_S__40_s__id; this->f_S__2b__21_s = _v17482; _v17482; });
    ({ uint32_t _v17483 = g::SV.C_S__3c__21_N__id; this->f_S__21__21_s = _v17483; _v17483; });
    ({ uint32_t _v17484 = g::SV.C_S_5_21_s__id; this->f_S__20__21_r = _v17484; _v17484; });
    return rt::NUL;
}
rt::Value C_S__40__21_p::m_S__3d__21_s() {
    RT_FN("S__40__21_p.S__3d__21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5182]), C_S__26_c::sm_S_8_21_Z(((double)(C_S__40__21_p::sm_S_6_22_4())), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__40__21_p::m_S_8_22_M() {
    RT_FN("S__40__21_p.S_8_22_M");
    if (C_S_8G::sm_S__3c_P(g::SV.C_S_7_22_D__id)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[5183]), C_S__26_c::sm_S_8_21_Z(C_S__40__21_p::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
uint32_t C_S__40__21_p::sm_S_6_22_4() {
    double l_A__loc1_ = NAN;
    RT_FN("S__40__21_p.S_6_22_4");
    (l_A__loc1_ = C_S__26_c::sm_S_6_22__26_(10.0, rt::toint_d(1.0)));
    return C_S__26_c::sm_S__3b__22__24_(rt::m_floor(l_A__loc1_));
    return 0u;
}
double C_S__40__21_p::sm_S__2c__21_G() {
    RT_FN("S__40__21_p.S__2c__21_G");
    return C_S__26_c::sm_S_6_22__26_((rt::m_pow(rt::m_log(rt::tonum(rt::add(rt::V(1.0), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 63.0)))), 2.5) + rt::m_pow(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 63.0)), 0.25)), rt::toint_d(1.0));
    return 0.0;
}
C_S__40__21_p* C_S__40__21_p::alloc_() {
    C_S__40__21_p* o = rt::make<C_S__40__21_p>();
    return o;
}
rt::Value C_S__40__21_p::mk_(rt::Value* a, int n) {
    C_S__40__21_p* o = alloc_();
    o->C_S__40__21_p::ctor_();
    return rt::VO(o);
}
bool C_S__40__21_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_22_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e__21_q::dget(id, out);
}
bool C_S__40__21_p::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e__21_q::dset(id, v);
}
bool C_S__40__21_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__3d__21_s: out = m_S__3d__21_s(); return true;
    case NM_S_8_22_M: out = m_S_8_22_M(); return true;
    default: break;
    }
    return C_S__3e__21_q::dcall(id, a, n, out);
}
bool C_S__40__21_p::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__3d__21_s: return true;
    case NM_S_8_22_M: return true;
    default: break;
    }
    return C_S__3e__21_q::dmeth(id);
}
bool C_S__40__21_p::smeth_(int id) {
    switch (id) {
    case NM_S_6_22_4: return true;
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__40__21_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21_p__id)); return true;
    case NM_S_6_22_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40__21_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21_p__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__21_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_22_4: out = rt::V((double)(sm_S_6_22_4())); return true;
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5b__21_r::ctor_() {
    RT_FN("S__5b__21_r.S__5b__21_r");
    (void)((this->C_S__3e__21_q::ctor_(), rt::NUL));
    ({ double _v17485 = 825.0; this->f_S_6_21_Z = rt::touint_d(_v17485); _v17485; });
    ({ rt::Value _v17486 = rt::trv(rt::VS(g::LS[5184])); this->f_S_1i = rt::slot_string(_v17486); _v17486; });
    ({ rt::Value _v17487 = rt::VS(g::LS[5185]); this->f_S__5e__21__23_ = rt::slot_string(_v17487); _v17487; });
    ({ double _v17488 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v17488); _v17488; });
    ({ double _v17489 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v17489); _v17489; });
    ({ double _v17490 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17490); _v17490; });
}
rt::Value C_S__5b__21_r::m_S__5b__21_C() {
    RT_FN("S__5b__21_r.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ uint32_t _v17491 = g::SV.C_S_5_21__3e___id; this->f_S__2b__21_s = _v17491; _v17491; });
    ({ uint32_t _v17492 = g::SV.C_S__5b__21_S__id; this->f_S__21__21_s = _v17492; _v17492; });
    ({ uint32_t _v17493 = g::SV.C_S__22__21_s__id; this->f_S__20__21_r = _v17493; _v17493; });
    return rt::NUL;
}
rt::Value C_S__5b__21_r::m_S__3d__21_s() {
    RT_FN("S__5b__21_r.S__3d__21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5186]), C_S__26_c::sm_S_8_21_Z(C_S__5b__21_r::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5b__21_r::m_S_8_22_M() {
    RT_FN("S__5b__21_r.S_8_22_M");
    if (C_S_8G::sm_S__3c_P(g::SV.C_S__3c__22__3b___id)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[5187]), C_S__26_c::sm_S_8_21_Z(C_S__5b__21_r::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
double C_S__5b__21_r::sm_S__2c__21_G() {
    RT_FN("S__5b__21_r.S__2c__21_G");
    return ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0) ? 0.0 : C_S__26_c::sm_S_6_22__26_(rt::m_pow(((C_S_8G::sm_S__25_Z(({ rt::Value _o17494 = C_S_8G::sm_S__2d_e(rt::toint_d(9.0)); C_S__60__21__3b_* _p17495 = rt::as_ptr<C_S__60__21__3b_>(_o17494); _p17495 ? _p17495->f_id : rt::touint(rt::dget(_o17494, NM_id)); }), C_S_8G::dsm_S__25_Z_1()) + C_S_8G::sm_S__25_Z(({ rt::Value _o17496 = C_S_8G::sm_S__2d_e(rt::toint_d(10.0)); C_S__60__21__3b_* _p17497 = rt::as_ptr<C_S__60__21__3b_>(_o17496); _p17497 ? _p17497->f_id : rt::touint(rt::dget(_o17496, NM_id)); }), C_S_8G::dsm_S__25_Z_1())) + C_S_8G::sm_S__25_Z(({ rt::Value _o17498 = C_S_8G::sm_S__2d_e(rt::toint_d(11.0)); C_S__60__21__3b_* _p17499 = rt::as_ptr<C_S__60__21__3b_>(_o17498); _p17499 ? _p17499->f_id : rt::touint(rt::dget(_o17498, NM_id)); }), C_S_8G::dsm_S__25_Z_1())), 0.5), rt::toint_d(5.0)));
    return 0.0;
}
double C_S__5b__21_r::sm_S__5e_y() {
    RT_FN("S__5b__21_r.S__5e_y");
    return C_S__26_c::sm_S_6_22__26_((2.25 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__5d__21_s(rt::toint_d(2.0), C_S__26_c::dsm_S__5d__21_s_1(), C_S__26_c::dsm_S__5d__21_s_2(), C_S__26_c::dsm_S__5d__21_s_3()))), 2.25)), rt::toint_d(5.0));
    return 0.0;
}
C_S__5b__21_r* C_S__5b__21_r::alloc_() {
    C_S__5b__21_r* o = rt::make<C_S__5b__21_r>();
    return o;
}
rt::Value C_S__5b__21_r::mk_(rt::Value* a, int n) {
    C_S__5b__21_r* o = alloc_();
    o->C_S__5b__21_r::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_22_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e__21_q::dget(id, out);
}
bool C_S__5b__21_r::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e__21_q::dset(id, v);
}
bool C_S__5b__21_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__3d__21_s: out = m_S__3d__21_s(); return true;
    case NM_S_8_22_M: out = m_S_8_22_M(); return true;
    default: break;
    }
    return C_S__3e__21_q::dcall(id, a, n, out);
}
bool C_S__5b__21_r::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__3d__21_s: return true;
    case NM_S_8_22_M: return true;
    default: break;
    }
    return C_S__3e__21_q::dmeth(id);
}
bool C_S__5b__21_r::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    case NM_S__5e_y: return true;
    default: return false;
    }
}
bool C_S__5b__21_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21_r__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__21_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21_r__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S__5e_y: out = rt::V(sm_S__5e_y()); return true;
    default: return false;
    }
}
void C_S__5e__21_q::ctor_() {
    RT_FN("S__5e__21_q.S__5e__21_q");
    (void)((this->C_S__3e__21_q::ctor_(), rt::NUL));
    ({ double _v17500 = 824.0; this->f_S_6_21_Z = rt::touint_d(_v17500); _v17500; });
    ({ rt::Value _v17501 = rt::trv(rt::VS(g::LS[5188])); this->f_S_1i = rt::slot_string(_v17501); _v17501; });
    ({ rt::Value _v17502 = rt::VS(g::LS[5189]); this->f_S__5e__21__23_ = rt::slot_string(_v17502); _v17502; });
    ({ double _v17503 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v17503); _v17503; });
    ({ double _v17504 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v17504); _v17504; });
    ({ double _v17505 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17505); _v17505; });
}
rt::Value C_S__5e__21_q::m_S__5b__21_C() {
    RT_FN("S__5e__21_q.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ uint32_t _v17506 = g::SV.C_S__27__2d___id; this->f_S__2b__21_s = _v17506; _v17506; });
    ({ uint32_t _v17507 = g::SV.C_S__3c__27___id; this->f_S__21__21_s = _v17507; _v17507; });
    ({ uint32_t _v17508 = g::SV.C_S__23__21_q__id; this->f_S__20__21_r = _v17508; _v17508; });
    return rt::NUL;
}
rt::Value C_S__5e__21_q::m_S__3d__21_s() {
    RT_FN("S__5e__21_q.S__3d__21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5190]), C_S__26_c::sm_S_8_21_Z(C_S__5e__21_q::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__5e__21_q::m_S_8_22_M() {
    RT_FN("S__5e__21_q.S_8_22_M");
    if (C_S_8G::sm_S__3c_P(g::SV.C_S_7_22__3d___id)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[5191]), C_S__26_c::sm_S_8_21_Z(C_S__5e__21_q::sm_S__40_V(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
double C_S__5e__21_q::sm_S_2_21_W() {
    RT_FN("S__5e__21_q.S_2_21_W");
    return C_S__26_c::sm_S_6_22__26_((3.5 * rt::m_pow(rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 40.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 40.0))), 0.35)), rt::toint_d(2.0));
    return 0.0;
}
double C_S__5e__21_q::sm_S__40_V() {
    RT_FN("S__5e__21_q.S__40_V");
    return C_S__26_c::sm_S_6_22__26_(rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.5), rt::toint_d(2.0));
    return 0.0;
}
C_S__5e__21_q* C_S__5e__21_q::alloc_() {
    C_S__5e__21_q* o = rt::make<C_S__5e__21_q>();
    return o;
}
rt::Value C_S__5e__21_q::mk_(rt::Value* a, int n) {
    C_S__5e__21_q* o = alloc_();
    o->C_S__5e__21_q::ctor_();
    return rt::VO(o);
}
bool C_S__5e__21_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_22_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e__21_q::dget(id, out);
}
bool C_S__5e__21_q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e__21_q::dset(id, v);
}
bool C_S__5e__21_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__3d__21_s: out = m_S__3d__21_s(); return true;
    case NM_S_8_22_M: out = m_S_8_22_M(); return true;
    default: break;
    }
    return C_S__3e__21_q::dcall(id, a, n, out);
}
bool C_S__5e__21_q::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__3d__21_s: return true;
    case NM_S_8_22_M: return true;
    default: break;
    }
    return C_S__3e__21_q::dmeth(id);
}
bool C_S__5e__21_q::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    case NM_S__40_V: return true;
    default: return false;
    }
}
bool C_S__5e__21_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__21_q__id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__21_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__21_q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__21_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    default: return false;
    }
}
void C_S__60__21_r::ctor_() {
    RT_FN("S__60__21_r.S__60__21_r");
    (void)((this->C_S__3e__21_q::ctor_(), rt::NUL));
    ({ double _v17509 = 832.0; this->f_S_6_21_Z = rt::touint_d(_v17509); _v17509; });
    ({ rt::Value _v17510 = rt::trv(rt::VS(g::LS[5192])); this->f_S_1i = rt::slot_string(_v17510); _v17510; });
    ({ rt::Value _v17511 = rt::VS(g::LS[5193]); this->f_S__5e__21__23_ = rt::slot_string(_v17511); _v17511; });
    ({ double _v17512 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v17512); _v17512; });
    ({ double _v17513 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v17513); _v17513; });
    ({ double _v17514 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17514); _v17514; });
}
rt::Value C_S__60__21_r::m_S__5b__21_C() {
    RT_FN("S__60__21_r.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ uint32_t _v17515 = g::SV.C_S__26__21_Q__id; this->f_S__2b__21_s = _v17515; _v17515; });
    ({ uint32_t _v17516 = g::SV.C_S__5e_t__id; this->f_S__21__21_s = _v17516; _v17516; });
    ({ uint32_t _v17517 = g::SV.C_S_1_21_s__id; this->f_S__20__21_r = _v17517; _v17517; });
    return rt::NUL;
}
rt::Value C_S__60__21_r::m_S__3d__21_s() {
    RT_FN("S__60__21_r.S__3d__21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5194]), C_S__26_c::sm_S_8_21_Z(C_S__60__21_r::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__60__21_r::m_S_8_22_M() {
    RT_FN("S__60__21_r.S_8_22_M");
    if (C_S_8G::sm_S__3c_P(g::SV.C_S__2b__22_C__id)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[5195]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__60__21_r::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
double C_S__60__21_r::sm_S__2c__21_G() {
    RT_FN("S__60__21_r.S__2c__21_G");
    return C_S__26_c::sm_S_6_22__26_((2.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__22__21_B(rt::toint_d(50.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()))), 1.5)), rt::toint_d(0.0));
    return 0.0;
}
double C_S__60__21_r::sm_S__3f__21__3c_() {
    RT_FN("S__60__21_r.S__3f__21__3c_");
    return C_S__26_c::sm_S_6_22__26_(rt::m_pow(C_S__26_c::sm_S_0_23_(rt::toint_d(1.0), C_S__26_c::dsm_S_0_23__1()), 0.5), rt::toint_d(0.0));
    return 0.0;
}
C_S__60__21_r* C_S__60__21_r::alloc_() {
    C_S__60__21_r* o = rt::make<C_S__60__21_r>();
    return o;
}
rt::Value C_S__60__21_r::mk_(rt::Value* a, int n) {
    C_S__60__21_r* o = alloc_();
    o->C_S__60__21_r::ctor_();
    return rt::VO(o);
}
bool C_S__60__21_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_22_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e__21_q::dget(id, out);
}
bool C_S__60__21_r::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e__21_q::dset(id, v);
}
bool C_S__60__21_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__3d__21_s: out = m_S__3d__21_s(); return true;
    case NM_S_8_22_M: out = m_S_8_22_M(); return true;
    default: break;
    }
    return C_S__3e__21_q::dcall(id, a, n, out);
}
bool C_S__60__21_r::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__3d__21_s: return true;
    case NM_S_8_22_M: return true;
    default: break;
    }
    return C_S__3e__21_q::dmeth(id);
}
bool C_S__60__21_r::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__60__21_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21_r__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__21_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21_r__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__21_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__20__21_2::ctor_() {
    RT_FN("S__20__21_2.S__20__21_2");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17518 = 480.0; this->f_S_6_21_Z = rt::touint_d(_v17518); _v17518; });
    ({ rt::Value _v17519 = rt::trv(rt::VS(g::LS[5196])); this->f_S_1i = rt::slot_string(_v17519); _v17519; });
    ({ rt::Value _v17520 = rt::VS(g::LS[5197]); this->f_S__5e__21__23_ = rt::slot_string(_v17520); _v17520; });
    ({ rt::Value _v17521 = rt::VS(g::LS[1275]); this->f_S__40_1 = rt::slot_string(_v17521); _v17521; });
    ({ double _v17522 = 0.0; this->f_S__3e__3d_ = _v17522; _v17522; });
    ({ double _v17523 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v17523); _v17523; });
    ({ bool _v17524 = true; this->f_S_3e = _v17524; _v17524; });
}
rt::Value C_S__20__21_2::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__20__21_2.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[5198]))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5199]), C_S__26_c::sm_S_8_21_Z(C_S__23__21__21_::sm_S__22_0(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5200]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5201]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5202]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5203]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::slot_string(rt::add(l_A__loc1_, (rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5204]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S_1_3d_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::NUL;
}
bool C_S__20__21_2::g_S__2d_6() {
    RT_FN("S__20__21_2.S__2d_6_get");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(102.0)) >= 1.0);
    return false;
}
double C_S__20__21_2::sm_S__60_z() {
    RT_FN("S__20__21_2.S__60_z");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(107.0)) * 100.0);
    return 0.0;
}
double C_S__20__21_2::sm_S__3f__21__3c_() {
    RT_FN("S__20__21_2.S__3f__21__3c_");
    return ((0.01 * C_S__26_c::sm_S__20__21__3b_(rt::toint_d(107.0))) * 100.0);
    return 0.0;
}
double C_S__20__21_2::sm_S_2_21_W() {
    RT_FN("S__20__21_2.S_2_21_W");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(106.0)) * 1.0);
    return 0.0;
}
double C_S__20__21_2::sm_S__22__21__26_() {
    RT_FN("S__20__21_2.S__22__21__26_");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(106.0)) * 1.0);
    return 0.0;
}
double C_S__20__21_2::sm_S_5_21_B() {
    RT_FN("S__20__21_2.S_5_21_B");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(105.0)) * 1.0);
    return 0.0;
}
double C_S__20__21_2::sm_S_9L() {
    RT_FN("S__20__21_2.S_9L");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(105.0)) * 1.0);
    return 0.0;
}
double C_S__20__21_2::sm_S__40__21__3f_() {
    RT_FN("S__20__21_2.S__40__21__3f_");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(109.0)) * 2.0);
    return 0.0;
}
double C_S__20__21_2::sm_S_1_3d_() {
    RT_FN("S__20__21_2.S_1_3d_");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(109.0)) * 2.0);
    return 0.0;
}
double C_S__20__21_2::sm_S__5e_y() {
    RT_FN("S__20__21_2.S__5e_y");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(108.0)) * 1.0);
    return 0.0;
}
double C_S__20__21_2::sm_S_6_21_Y() {
    RT_FN("S__20__21_2.S_6_21_Y");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(108.0)) * 1.0);
    return 0.0;
}
C_S__20__21_2* C_S__20__21_2::alloc_() {
    C_S__20__21_2* o = rt::make<C_S__20__21_2>();
    return o;
}
rt::Value C_S__20__21_2::mk_(rt::Value* a, int n) {
    C_S__20__21_2* o = alloc_();
    o->C_S__20__21_2::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__21_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__21_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__21_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__21_2::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    case NM_S__3f__21__3c_: return true;
    case NM_S_2_21_W: return true;
    case NM_S__22__21__26_: return true;
    case NM_S_5_21_B: return true;
    case NM_S_9L: return true;
    case NM_S__40__21__3f_: return true;
    case NM_S_1_3d_: return true;
    case NM_S__5e_y: return true;
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S__20__21_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_2__id)); return true;
    case NM_S__60_5: out = rt::V(g::SV.C_S__20__21_2__S__60_5); return true;
    case NM_S_5_21__5d_: out = rt::V(g::SV.C_S__20__21_2__S_5_21__5d_); return true;
    case NM_S__26__21_U: out = rt::V(g::SV.C_S__20__21_2__S__26__21_U); return true;
    case NM_S__5d_l: out = rt::V(g::SV.C_S__20__21_2__S__5d_l); return true;
    case NM_S__60_t: out = rt::V(g::SV.C_S__20__21_2__S__60_t); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_3d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__21_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_2__id = rt::touint(v); return true;
    case NM_S__60_5: g::SV.C_S__20__21_2__S__60_5 = rt::tonum(v); return true;
    case NM_S_5_21__5d_: g::SV.C_S__20__21_2__S_5_21__5d_ = rt::tonum(v); return true;
    case NM_S__26__21_U: g::SV.C_S__20__21_2__S__26__21_U = rt::tonum(v); return true;
    case NM_S__5d_l: g::SV.C_S__20__21_2__S__5d_l = rt::tonum(v); return true;
    case NM_S__60_t: g::SV.C_S__20__21_2__S__60_t = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__20__21_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    case NM_S_1_3d_: out = rt::V(sm_S_1_3d_()); return true;
    case NM_S__5e_y: out = rt::V(sm_S__5e_y()); return true;
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S__21__21__25_::ctor_(rt::Value p0, double p1, double p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_param2 = p1;
    double l_param3 = p2;
    RT_FN("S__21__21__25_.S__21__21__25_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17525 = 17.0; this->f_S_6_21_Z = rt::touint_d(_v17525); _v17525; });
    ({ rt::Value _v17526 = l_param1; this->f_S_1i = rt::slot_string(_v17526); _v17526; });
    ({ double _v17527 = l_param2; this->f_S__5e__21__5d_ = _v17527; _v17527; });
    ({ rt::Value _v17528 = rt::VS(g::LS[1269]); this->f_S__3f__21__3d_ = rt::slot_string(_v17528); _v17528; });
    ({ rt::Value _v17529 = rt::VS(g::LS[5205]); this->f_S__40_1 = rt::slot_string(_v17529); _v17529; });
    ({ double _v17530 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v17530); _v17530; });
    ({ int32_t _v17531 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v17531; _v17531; });
    ({ rt::Value _v17532 = rt::add(rt::VS(g::LS[5206]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v17532); _v17532; });
    ({ double _v17533 = l_param3; this->f_S__3e__3d_ = _v17533; _v17533; });
    ({ bool _v17534 = true; this->f_S__2b__21_9 = _v17534; _v17534; });
}
rt::Value C_S__21__21__25_::m_S__40__22_() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S__21__21__25_.S__40__22_");
    (l_A__loc1_ = rt::toint_d(((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? ((double)(this->f_S__22__21_U)) : 1.0)));
    return rt::slot_string(rt::trv(rt::VS(g::LS[5207]), rt::dcallv(rt::V((double)(l_A__loc1_)), rt::N_toString)));
    return rt::NUL;
}
rt::Value C_S__21__21__25_::m_S__3e__21__2d_() {
    RT_FN("S__21__21__25_.S__3e__21__2d_");
    return rt::slot_string(rt::add(rt::VS(g::LS[5208]), this->m_S__2b__21__21_(true)));
    return rt::NUL;
}
bool C_S__21__21__25_::g_S__2d_6() {
    RT_FN("S__21__21__25_.S__2d_6_get");
    return ({ bool _t17535 = this->C_S__60_6::g_S__2d_6(); _t17535 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 0.0), rt::V(this->f_S__5e__21__5d_))) : _t17535; });
    return false;
}
C_S__21__21__25_* C_S__21__21__25_::alloc_() {
    C_S__21__21__25_* o = rt::make<C_S__21__21__25_>();
    return o;
}
rt::Value C_S__21__21__25_::mk_(rt::Value* a, int n) {
    C_S__21__21__25_* o = alloc_();
    o->C_S__21__21__25_::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN));
    return rt::VO(o);
}
bool C_S__21__21__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__21__21__25_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__21__21__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__21__21__25_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__2d_6: return false;
    case NM_S__5e__21__5d_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__21__21__25_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21__25_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21_I::ctor_(rt::Value p0, double p1, double p2, double p3, double p4) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_param2 = p1;
    double l_param3 = p2;
    double l_param4 = p3;
    double l_param5 = p4;
    rt::Value l_A__loc6_ = rt::NUL;
    RT_FN("S__21_I.S__21_I");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17536 = 15.0; this->f_S_6_21_Z = rt::touint_d(_v17536); _v17536; });
    ({ rt::Value _v17537 = l_param1; this->f_S_1i = rt::slot_string(_v17537); _v17537; });
    ({ rt::Value _v17539 = ({ rt::Value _v17538 = rt::VS(g::LS[5209]); this->f_S__40_1 = rt::slot_string(_v17538); _v17538; }); this->f_S__3f__21__3d_ = rt::slot_string(_v17539); _v17539; });
    ({ double _v17540 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v17540); _v17540; });
    ({ int32_t _v17541 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v17541; _v17541; });
    ({ rt::Value _v17542 = rt::add(rt::VS(g::LS[5210]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v17542); _v17542; });
    ({ double _v17543 = l_param2; this->f_S__5e__21__5d_ = _v17543; _v17543; });
    ({ double _v17545 = ({ double _v17544 = l_param3; this->f_S_8_21__3c_ = _v17544; _v17544; }); this->f_S__3e__23_ = _v17545; _v17545; });
    ({ double _v17547 = ({ double _v17546 = l_param4; this->f_S__3f_n = _v17546; _v17546; }); this->f_S__5b__21_W = _v17547; _v17547; });
    {
        std::vector<rt::Value> _lst17548;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst17548);
        for (const rt::Value& _x17549 : _lst17548) {
            l_A__loc6_ = _x17549;
            if (rt::eq(({ rt::Value _o17550 = l_A__loc6_; C_S__60_6* _p17551 = rt::as_ptr<C_S__60_6>(_o17550); _p17551 ? _p17551->f_S__40_1 : rt::dget(_o17550, NM_S__40_1); }), this->f_S__40_1)) {
                ({ double _v17555 = (this->f_S_8_21__3c_ + ({ rt::Value _o17553 = (({ rt::Value _t17552 = l_A__loc6_; rt::is_class(_t17552, C_S__21_I::CI) ? _t17552 : rt::NUL; })); C_S__21_I* _p17554 = rt::as_ptr<C_S__21_I>(_o17553); _p17554 ? _p17554->f_S__3e__23_ : rt::tonum(rt::dget(_o17553, NM_S__3e__23_)); })); this->f_S_8_21__3c_ = _v17555; _v17555; });
                ({ double _v17559 = (this->f_S__3f_n + ({ rt::Value _o17557 = (({ rt::Value _t17556 = l_A__loc6_; rt::is_class(_t17556, C_S__21_I::CI) ? _t17556 : rt::NUL; })); C_S__21_I* _p17558 = rt::as_ptr<C_S__21_I>(_o17557); _p17558 ? _p17558->f_S__5b__21_W : rt::tonum(rt::dget(_o17557, NM_S__5b__21_W)); })); this->f_S__3f_n = _v17559; _v17559; });
            }
        }
    }
    ({ double _v17560 = l_param5; this->f_S__3e__3d_ = _v17560; _v17560; });
    ({ bool _v17561 = true; this->f_S__2b__21_9 = _v17561; _v17561; });
}
rt::Value C_S__21_I::m_S__5b__21_C() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S__21_I.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    (l_A__loc1_ = rt::toint_d(0.0));
    if ((((double)(this->f_S__22__21_U)) >= 3.0)) {
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    if ((((double)(this->f_S__22__21_U)) >= 5.0)) {
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    if ((((double)(this->f_S__22__21_U)) >= 7.0)) {
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    ({ double _v17562 = (((((double)(g::SV.C_S__26__21_0__id)) + ((double)(this->f_S__22__21_U))) + ((double)(l_A__loc1_))) - 1.0); this->f_S__60__21_5 = rt::touint_d(_v17562); _v17562; });
    return rt::NUL;
}
rt::Value C_S__21_I::m_S__40__22_() {
    double l_A__loc1_ = NAN;
    double l_A__loc3_ = NAN;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__21_I.S__40__22_");
    (l_A__loc1_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? this->f_S_8_21__3c_ : this->f_S__3e__23_));
    (l_A__loc3_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? this->f_S__3f_n : this->f_S__5b__21_W));
    (l_A__loc2_ = rt::slot_string(rt::trv(rt::VS(g::LS[5211]), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    if ((l_A__loc3_ > 0.0)) {
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5212]), C_S__26_c::sm_S_8_21_Z(l_A__loc3_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    return rt::slot_string(l_A__loc2_);
    return rt::NUL;
}
rt::Value C_S__21_I::m_S__3e__21__2d_() {
    RT_FN("S__21_I.S__3e__21__2d_");
    return rt::slot_string(rt::add(rt::VS(g::LS[5213]), this->m_S__2b__21__21_(true)));
    return rt::NUL;
}
bool C_S__21_I::g_S__2d_6() {
    RT_FN("S__21_I.S__2d_6_get");
    return ({ bool _t17564 = ({ bool _t17563 = this->C_S__60_6::g_S__2d_6(); _t17563 ? (bool)(C_S_8G::sm_S__3c_P(this->f_S__60__21_5)) : _t17563; }); _t17564 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t17564; });
    return false;
}
C_S__21_I* C_S__21_I::alloc_() {
    C_S__21_I* o = rt::make<C_S__21_I>();
    return o;
}
rt::Value C_S__21_I::mk_(rt::Value* a, int n) {
    C_S__21_I* o = alloc_();
    o->C_S__21_I::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN), rt::arg<double>(a, n, 3, NAN), rt::arg<double>(a, n, 4, NAN));
    return rt::VO(o);
}
bool C_S__21_I::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__3e__23_: out = rt::V(f_S__3e__23_); return true;
    case NM_S__5b__21_W: out = rt::V(f_S__5b__21_W); return true;
    case NM_S_8_21__3c_: out = rt::V(f_S_8_21__3c_); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S__3f_n: out = rt::V(f_S__3f_n); return true;
    case NM_S__60__21_5: out = rt::V((double)(f_S__60__21_5)); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__21_I::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3e__23_: f_S__3e__23_ = rt::tonum(v); return true;
    case NM_S__5b__21_W: f_S__5b__21_W = rt::tonum(v); return true;
    case NM_S_8_21__3c_: f_S_8_21__3c_ = rt::tonum(v); return true;
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S__3f_n: f_S__3f_n = rt::tonum(v); return true;
    case NM_S__60__21_5: f_S__60__21_5 = rt::touint(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__21_I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__23_: { rt::Value f = rt::V(f_S__3e__23_); out = rt::call_value(f, a, n); return true; }
    case NM_S__5b__21_W: { rt::Value f = rt::V(f_S__5b__21_W); out = rt::call_value(f, a, n); return true; }
    case NM_S_8_21__3c_: { rt::Value f = rt::V(f_S_8_21__3c_); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f_n: { rt::Value f = rt::V(f_S__3f_n); out = rt::call_value(f, a, n); return true; }
    case NM_S__60__21_5: { rt::Value f = rt::V((double)(f_S__60__21_5)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__21_I::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__40__22_: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__2d_6: return false;
    case NM_S__3e__23_: return false;
    case NM_S__5b__21_W: return false;
    case NM_S_8_21__3c_: return false;
    case NM_S__5e__21__5d_: return false;
    case NM_S__3f_n: return false;
    case NM_S__60__21_5: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__21_I::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21_I::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21_I::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21_I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__60_::ctor_() {
    RT_FN("S__21__60_.S__21__60_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17565 = 18.0; this->f_S_6_21_Z = rt::touint_d(_v17565); _v17565; });
    ({ rt::Value _v17566 = rt::trv(rt::VS(g::LS[909])); this->f_S_1i = rt::slot_string(_v17566); _v17566; });
    ({ rt::Value _v17567 = rt::VS(g::LS[910]); this->f_S__5e__21__23_ = rt::slot_string(_v17567); _v17567; });
    ({ rt::Value _v17568 = rt::VS(g::LS[4961]); this->f_S__40_1 = rt::slot_string(_v17568); _v17568; });
    ({ double _v17569 = 5e+47; this->f_S__3e__3d_ = _v17569; _v17569; });
    ({ bool _v17570 = true; this->f_S_7_21_9 = _v17570; _v17570; });
    ({ double _v17571 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v17571); _v17571; });
}
rt::Value C_S__21__60_::m_S__40__22_() {
    RT_FN("S__21__60_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5214]), (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[5215])) : rt::trv(rt::VS(g::LS[5216]))), (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[5217])) : rt::trv(rt::VS(g::LS[5218]))), (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[5219])) : rt::trv(rt::VS(g::LS[5220])))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5221]), rt::dcallv(rt::V((2.0)), rt::N_toString))));
    return rt::NUL;
}
rt::Value C_S__21__60_::m_S_6r() {
    RT_FN("S__21__60_.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (g::SV.C_S_8G__S__20__21__5b_ = true);
    return rt::NUL;
}
bool C_S__21__60_::g_S__2d_6() {
    RT_FN("S__21__60_.S__2d_6_get");
    return ({ bool _t17573 = this->C_S__60_6::g_S__2d_6(); _t17573 ? (bool)((({ bool _t17572 = C_S_8G::sm_S__3c_P(g::SV.C_S__25__21_b__id); _t17572 ? _t17572 : (bool)((C_S__26_c::sm_S_3_22__26_(false, false, true) >= 20000000.0)); }))) : _t17573; });
    return false;
}
C_S__21__60_* C_S__21__60_::alloc_() {
    C_S__21__60_* o = rt::make<C_S__21__60_>();
    return o;
}
rt::Value C_S__21__60_::mk_(rt::Value* a, int n) {
    C_S__21__60_* o = alloc_();
    o->C_S__21__60_::ctor_();
    return rt::VO(o);
}
bool C_S__21__60_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__21__60_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__21__60_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__21__60_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__21__60_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__60_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__60___id)); return true;
    case NM_S_2_40_: out = rt::V(g::SV.C_S__21__60___S_2_40_); return true;
    case NM_ids: out = g::SV.C_S__21__60___ids; return true;
    default: return false;
    }
}
bool C_S__21__60_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__60___id = rt::touint(v); return true;
    case NM_S_2_40_: g::SV.C_S__21__60___S_2_40_ = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__21__60___ids = v; return true;
    default: return false;
    }
}
bool C_S__21__60_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__21_9::ctor_(rt::Value p0, rt::Value p1, double p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    double l_param3 = p2;
    RT_FN("S__23__21_9.S__23__21_9");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17574 = 481.0; this->f_S_6_21_Z = rt::touint_d(_v17574); _v17574; });
    ({ rt::Value _v17575 = l_param1; this->f_S_1i = rt::slot_string(_v17575); _v17575; });
    ({ rt::Value _v17576 = rt::VS(g::LS[1241]); this->f_S__3f__21__3d_ = rt::slot_string(_v17576); _v17576; });
    ({ rt::Value _v17577 = rt::VS(g::LS[1241]); this->f_S__40_1 = rt::slot_string(_v17577); _v17577; });
    ({ int32_t _v17578 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v17578; _v17578; });
    ({ rt::Value _v17579 = rt::add(rt::VS(g::LS[1241]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v17579); _v17579; });
    ({ rt::Value _v17580 = l_param2; this->f_S__5e__21__5d_ = rt::slot_string(_v17580); _v17580; });
    ({ double _v17581 = l_param3; this->f_S__3e__3d_ = _v17581; _v17581; });
    ({ bool _v17582 = true; this->f_S__2b__21_9 = _v17582; _v17582; });
    ({ double _v17583 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v17583); _v17583; });
}
rt::Value C_S__23__21_9::m_S__40__22_() {
    double l_A__loc3_ = NAN;
    double l_A__loc4_ = NAN;
    double l_A__loc1_ = NAN;
    double l_A__loc2_ = NAN;
    RT_FN("S__23__21_9.S__40__22_");
    (l_A__loc3_ = 0.0);
    (l_A__loc4_ = C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()));
    if (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0))) {
        (l_A__loc3_ = ((g::SV.C_S__23__21_9__S_1_21_S * ((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1241]))))) * l_A__loc4_));
    }
    (l_A__loc1_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? (g::SV.C_S__23__21_9__S_1_21_S * ((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1241]))))) : g::SV.C_S__23__21_9__S_1_21_S));
    (l_A__loc2_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? l_A__loc3_ : (l_A__loc4_ * g::SV.C_S__23__21_9__S_1_21_S)));
    return rt::slot_string(rt::trv(rt::VS(g::LS[5223]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[5224]), ((l_A__loc1_ < 1000000.0) ? rt::dcallv(rt::V(l_A__loc1_), rt::N_toFixed, rt::V(2.0)) : C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::trv(rt::VS(g::LS[5225])), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(l_A__loc2_, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__23__21_9::g_S__2d_6() {
    RT_FN("S__23__21_9.S__2d_6_get");
    return ({ bool _t17585 = ({ bool _t17584 = this->C_S__60_6::g_S__2d_6(); _t17584 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t17584; }); _t17585 ? (bool)(C_S_8G::sm_S__2c__23_(this->f_S__5e__21__5d_)) : _t17585; });
    return false;
}
C_S__23__21_9* C_S__23__21_9::alloc_() {
    C_S__23__21_9* o = rt::make<C_S__23__21_9>();
    return o;
}
rt::Value C_S__23__21_9::mk_(rt::Value* a, int n) {
    C_S__23__21_9* o = alloc_();
    o->C_S__23__21_9::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<double>(a, n, 2, NAN));
    return rt::VO(o);
}
bool C_S__23__21_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5e__21__5d_: out = f_S__5e__21__5d_; return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__21_9::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::slot_string(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__21_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = f_S__5e__21__5d_; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__21_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__5e__21__5d_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__21_9::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__23__21_9__S_1_21_S); return true;
    default: return false;
    }
}
bool C_S__23__21_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_1_21_S: g::SV.C_S__23__21_9__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__23__21_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__2b_::ctor_() {
    RT_FN("S__23__2b_.S__23__2b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17586 = 35.0; this->f_S_6_21_Z = rt::touint_d(_v17586); _v17586; });
    ({ rt::Value _v17587 = rt::trv(rt::VS(g::LS[1143])); this->f_S_1i = rt::slot_string(_v17587); _v17587; });
    ({ rt::Value _v17588 = rt::VS(g::LS[1144]); this->f_S__5e__21__23_ = rt::slot_string(_v17588); _v17588; });
    ({ rt::Value _v17589 = rt::VS(g::LS[4961]); this->f_S__40_1 = rt::slot_string(_v17589); _v17589; });
    ({ double _v17590 = 4e+38; this->f_S__3e__3d_ = _v17590; _v17590; });
    ({ bool _v17591 = true; this->f_S_7_21_9 = _v17591; _v17591; });
    ({ double _v17592 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v17592); _v17592; });
}
rt::Value C_S__23__2b_::m_S__40__22_() {
    RT_FN("S__23__2b_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5226])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5221]), rt::dcallv(rt::V((1.0)), rt::N_toString))));
    return rt::NUL;
}
rt::Value C_S__23__2b_::m_S_6r() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__23__2b_.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    {
        std::vector<rt::Value> _lst17593;
        rt::each(g::SV.C_S_8G__S_0_21_A, _lst17593);
        for (const rt::Value& _x17594 : _lst17593) {
            l_A__loc1_ = _x17594;
            ({ bool _v17597 = false; rt::Value _o17595 = l_A__loc1_; C_S_84* _p17596 = rt::as_ptr<C_S_84>(_o17595); if (_p17596) _p17596->f_S_3A = _v17597; else rt::dset(_o17595, NM_S_3A, rt::VB(_v17597)); _v17597; });
        }
    }
    return rt::NUL;
}
bool C_S__23__2b_::g_S__2d_6() {
    RT_FN("S__23__2b_.S__2d_6_get");
    return ({ bool _t17599 = this->C_S__60_6::g_S__2d_6(); _t17599 ? (bool)((({ bool _t17598 = C_S_8G::sm_S__3c_P(g::SV.C_S_8_21__20___id); _t17598 ? _t17598 : (bool)((C_S__26_c::sm_S_3_22__26_(false, false, true) >= 12000000.0)); }))) : _t17599; });
    return false;
}
C_S__23__2b_* C_S__23__2b_::alloc_() {
    C_S__23__2b_* o = rt::make<C_S__23__2b_>();
    return o;
}
rt::Value C_S__23__2b_::mk_(rt::Value* a, int n) {
    C_S__23__2b_* o = alloc_();
    o->C_S__23__2b_::ctor_();
    return rt::VO(o);
}
bool C_S__23__2b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__2b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__2b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__2b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__2b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__2b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__2b___id)); return true;
    case NM_S_2_40_: out = rt::V(g::SV.C_S__23__2b___S_2_40_); return true;
    case NM_ids: out = g::SV.C_S__23__2b___ids; return true;
    default: return false;
    }
}
bool C_S__23__2b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__2b___id = rt::touint(v); return true;
    case NM_S_2_40_: g::SV.C_S__23__2b___S_2_40_ = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__23__2b___ids = v; return true;
    default: return false;
    }
}
bool C_S__23__2b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23_g::ctor_() {
    RT_FN("S__23_g.S__23_g");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17600 = 12.0; this->f_S_6_21_Z = rt::touint_d(_v17600); _v17600; });
    ({ rt::Value _v17601 = rt::trv(rt::VS(g::LS[1158])); this->f_S_1i = rt::slot_string(_v17601); _v17601; });
    ({ rt::Value _v17602 = rt::VS(g::LS[1159]); this->f_S__5e__21__23_ = rt::slot_string(_v17602); _v17602; });
    ({ rt::Value _v17603 = rt::VS(g::LS[4961]); this->f_S__40_1 = rt::slot_string(_v17603); _v17603; });
    ({ double _v17604 = 100000000000.0; this->f_S__3e__3d_ = _v17604; _v17604; });
    ({ bool _v17605 = true; this->f_S_7_21_9 = _v17605; _v17605; });
    ({ double _v17606 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v17606); _v17606; });
}
rt::Value C_S__23_g::m_S__40__22_() {
    RT_FN("S__23_g.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5228]), (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[5229])) : rt::VS(g::LS[113]))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5230]), rt::dcallv(rt::V((10.0)), rt::N_toString))));
    return rt::NUL;
}
bool C_S__23_g::g_S__2d_6() {
    RT_FN("S__23_g.S__2d_6_get");
    return ({ bool _t17608 = this->C_S__60_6::g_S__2d_6(); _t17608 ? (bool)((({ bool _t17607 = C_S_8G::sm_S__3c_P(g::SV.C_S_9_21_N__id); _t17607 ? _t17607 : (bool)((C_S__26_c::sm_S_3_22__26_(false, false, true) >= 50000.0)); }))) : _t17608; });
    return false;
}
C_S__23_g* C_S__23_g::alloc_() {
    C_S__23_g* o = rt::make<C_S__23_g>();
    return o;
}
rt::Value C_S__23_g::mk_(rt::Value* a, int n) {
    C_S__23_g* o = alloc_();
    o->C_S__23_g::ctor_();
    return rt::VO(o);
}
bool C_S__23_g::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23_g::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23_g::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23_g::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23_g::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23_g::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23_g__id)); return true;
    case NM_S__27_D: out = rt::V(g::SV.C_S__23_g__S__27_D); return true;
    case NM_ids: out = g::SV.C_S__23_g__ids; return true;
    default: return false;
    }
}
bool C_S__23_g::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23_g__id = rt::touint(v); return true;
    case NM_S__27_D: g::SV.C_S__23_g__S__27_D = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__23_g__ids = v; return true;
    default: return false;
    }
}
bool C_S__23_g::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__21_l::ctor_() {
    RT_FN("S__25__21_l.S__25__21_l");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17609 = 747.0; this->f_S_6_21_Z = rt::touint_d(_v17609); _v17609; });
    ({ rt::Value _v17610 = rt::trv(rt::VS(g::LS[5232])); this->f_S_1i = rt::slot_string(_v17610); _v17610; });
    ({ rt::Value _v17611 = rt::VS(g::LS[5233]); this->f_S__5e__21__23_ = rt::slot_string(_v17611); _v17611; });
    ({ rt::Value _v17612 = rt::trv(rt::VS(g::LS[5234])); this->f_S_7_23_ = rt::slot_string(_v17612); _v17612; });
    ({ rt::Value _v17613 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5235])))); this->f_S_7_23_ = rt::slot_string(_v17613); _v17613; });
    ({ rt::Value _v17614 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5236])))); this->f_S_7_23_ = rt::slot_string(_v17614); _v17614; });
    ({ rt::Value _v17615 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5237])))); this->f_S_7_23_ = rt::slot_string(_v17615); _v17615; });
    ({ rt::Value _v17616 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5238])))); this->f_S_7_23_ = rt::slot_string(_v17616); _v17616; });
    ({ double _v17617 = 1000000000000000.0; this->f_S__23__21_m = _v17617; _v17617; });
    ({ double _v17618 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17618); _v17618; });
    ({ bool _v17619 = false; this->f_S_3e = _v17619; _v17619; });
}
rt::Value C_S__25__21_l::m_S_6r() {
    RT_FN("S__25__21_l.S_6r");
    (void)(({ rt::Value _o17620 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p17621 = rt::as_ptr<C_S_8G>(_o17620); _p17621 ? _p17621->m_S_1_21_l(rt::toint_d(6.0)) : rt::dcallv(_o17620, NM_S_1_21_l, rt::V(6.0)); }));
    return rt::NUL;
}
bool C_S__25__21_l::g_S__2d_6() {
    RT_FN("S__25__21_l.S__2d_6_get");
    return ({ bool _t17623 = ({ bool _t17622 = (((double)(C_S_8G::sg_S__2c_P())) >= 2.0); _t17622 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0))) : _t17622; }); _t17623 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 0.0)) : _t17623; });
    return false;
}
C_S__25__21_l* C_S__25__21_l::alloc_() {
    C_S__25__21_l* o = rt::make<C_S__25__21_l>();
    return o;
}
rt::Value C_S__25__21_l::mk_(rt::Value* a, int n) {
    C_S__25__21_l* o = alloc_();
    o->C_S__25__21_l::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_l::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__21_l::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__21_l::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__21_l::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__21_l::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21_l::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_l__id)); return true;
    default: return false;
    }
}
bool C_S__25__21_l::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_l__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__21_l::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__21__2d_::ctor_(int32_t p0, rt::Value p1, rt::Value p2, int32_t p3) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = p1;
    rt::Value l_param3 = rt::slot_string(p2);
    int32_t l_param4 = p3;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S__22__21__2d_.S__22__21__2d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ int32_t _v17625 = ({ int32_t _v17624 = l_param1; this->f_S__22__21_U = _v17624; _v17624; }); this->f_S__60_r = _v17625; _v17625; });
    ({ int32_t _v17628 = ({ rt::Value _o17626 = l_param2; C_S__60__21__3b_* _p17627 = rt::as_ptr<C_S__60__21__3b_>(_o17626); _p17627 ? _p17627->f_S__2c__21_Y : rt::toint(rt::dget(_o17626, NM_S__2c__21_Y)); }); this->f_S__2c__21_Y = _v17628; _v17628; });
    ({ rt::Value _v17629 = l_param2; this->f_S__25__3c_ = _v17629; _v17629; });
    ({ rt::Value _v17630 = l_param3; this->f_S_1i = rt::slot_string(_v17630); _v17630; });
    ({ int32_t _v17631 = l_param4; this->f_S_9q = ((double)(_v17631)); _v17631; });
    ({ rt::Value _v17634 = rt::add(({ rt::Value _o17632 = this->f_S__25__3c_; C_S__60__21__3b_* _p17633 = rt::as_ptr<C_S__60__21__3b_>(_o17632); _p17633 ? _p17633->f_S__20_r : rt::dget(_o17632, NM_S__20_r); }), rt::VS(g::LS[1445])); this->f_S__3f__21__3d_ = rt::slot_string(_v17634); _v17634; });
    ({ rt::Value _v17637 = rt::add(rt::add(({ rt::Value _o17635 = this->f_S__25__3c_; C_S__60__21__3b_* _p17636 = rt::as_ptr<C_S__60__21__3b_>(_o17635); _p17636 ? _p17636->f_S__20_r : rt::dget(_o17635, NM_S__20_r); }), rt::VS(g::LS[724])), rt::dcallv(rt::V((double)(this->f_S__60_r)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v17637); _v17637; });
    ({ rt::Value _v17640 = rt::add(({ rt::Value _o17638 = this->f_S__25__3c_; C_S__60__21__3b_* _p17639 = rt::as_ptr<C_S__60__21__3b_>(_o17638); _p17639 ? _p17639->f_S__20_r : rt::dget(_o17638, NM_S__20_r); }), rt::VS(g::LS[1445])); this->f_S__40_1 = rt::slot_string(_v17640); _v17640; });
    ({ double _v17641 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v17641); _v17641; });
    ({ double _v17644 = ({ double _v17643 = ({ double _v17642 = 1.0; this->f_S__60__21_o = _v17642; _v17642; }); this->f_S_0_21__23_ = _v17643; _v17643; }); this->f_S__3d_A = _v17644; _v17644; });
    {
        std::vector<rt::Value> _lst17645;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst17645);
        for (const rt::Value& _x17646 : _lst17645) {
            l_A__loc5_ = _x17646;
            if (rt::eq(({ rt::Value _o17647 = l_A__loc5_; C_S__60_6* _p17648 = rt::as_ptr<C_S__60_6>(_o17647); _p17648 ? _p17648->f_S__40_1 : rt::dget(_o17647, NM_S__40_1); }), this->f_S__40_1)) {
                if ((((double)(({ rt::Value _o17649 = l_A__loc5_; C_S__60_6* _p17650 = rt::as_ptr<C_S__60_6>(_o17649); _p17650 ? _p17650->f_S__22__21_U : rt::toint(rt::dget(_o17649, NM_S__22__21_U)); }))) <= 19.0)) {
                    ({ double _v17654 = (this->f_S__3d_A * ((({ rt::Value _o17652 = (({ rt::Value _t17651 = l_A__loc5_; rt::is_class(_t17651, C_S__22__21__2d_::CI) ? _t17651 : rt::NUL; })); C_S__22__21__2d_* _p17653 = rt::as_ptr<C_S__22__21__2d_>(_o17652); _p17653 ? _p17653->f_S_9q : rt::tonum(rt::dget(_o17652, NM_S_9q)); }) / 100.0) + 1.0)); this->f_S__3d_A = _v17654; _v17654; });
                } else if ((((double)(this->f_S__22__21_U)) <= 22.0)) {
                    ({ double _v17658 = (this->f_S_0_21__23_ * ((({ rt::Value _o17656 = (({ rt::Value _t17655 = l_A__loc5_; rt::is_class(_t17655, C_S__22__21__2d_::CI) ? _t17655 : rt::NUL; })); C_S__22__21__2d_* _p17657 = rt::as_ptr<C_S__22__21__2d_>(_o17656); _p17657 ? _p17657->f_S_9q : rt::tonum(rt::dget(_o17656, NM_S_9q)); }) / 100.0) + 1.0)); this->f_S_0_21__23_ = _v17658; _v17658; });
                } else {
                    ({ double _v17662 = (this->f_S__60__21_o * ((({ rt::Value _o17660 = (({ rt::Value _t17659 = l_A__loc5_; rt::is_class(_t17659, C_S__22__21__2d_::CI) ? _t17659 : rt::NUL; })); C_S__22__21__2d_* _p17661 = rt::as_ptr<C_S__22__21__2d_>(_o17660); _p17661 ? _p17661->f_S_9q : rt::tonum(rt::dget(_o17660, NM_S_9q)); }) / 100.0) + 1.0)); this->f_S__60__21_o = _v17662; _v17662; });
                }
            }
        }
    }
    if ((((double)(this->f_S__22__21_U)) <= 19.0)) {
        ({ double _v17663 = (this->f_S__3d_A * ((this->f_S_9q / 100.0) + 1.0)); this->f_S__3d_A = _v17663; _v17663; });
    } else if ((((double)(this->f_S__22__21_U)) <= 22.0)) {
        ({ double _v17664 = (this->f_S_0_21__23_ * ((this->f_S_9q / 100.0) + 1.0)); this->f_S_0_21__23_ = _v17664; _v17664; });
    } else {
        ({ double _v17665 = (this->f_S__60__21_o * ((this->f_S_9q / 100.0) + 1.0)); this->f_S__60__21_o = _v17665; _v17665; });
    }
    ({ double _v17670 = ((rt::m_round((({ rt::Value _o17666 = this->f_S__25__3c_; C_S__60__21__3b_* _p17667 = rt::as_ptr<C_S__60__21__3b_>(_o17666); _p17667 ? _p17667->f_S__3e__3d_ : rt::tonum(rt::dget(_o17666, NM_S__3e__3d_)); }) * rt::m_pow(({ rt::Value _o17668 = this->f_S__25__3c_; C_S__60__21__3b_* _p17669 = rt::as_ptr<C_S__60__21__3b_>(_o17668); _p17669 ? _p17669->f_S__2c__27_ : rt::tonum(rt::dget(_o17668, NM_S__2c__27_)); }), rt::tonum(rt::arr_at(g::SV.C_S__22__21__2d___S__26_Z, (((double)(this->f_S__60_r)) - 1.0)))))) * 10.0) * ((double)(this->f_S__60_r))); this->f_S__3e__3d_ = _v17670; _v17670; });
    ({ bool _v17671 = true; this->f_S__2b__21_9 = _v17671; _v17671; });
}
rt::Value C_S__22__21__2d_::m_S__5b__21_C() {
    RT_FN("S__22__21__2d_.S__5b__21_C");
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ double _v17674 = (((500000.0 + (((double)(this->f_S__2c__21_Y)) * 20000.0)) + (((double)(({ rt::Value _o17672 = this->f_S__25__3c_; C_S__60__21__3b_* _p17673 = rt::as_ptr<C_S__60__21__3b_>(_o17672); _p17673 ? _p17673->f_S__60_r : rt::toint(rt::dget(_o17672, NM_S__60_r)); }))) * 1000.0)) + ((double)(this->f_S__22__21_U))); this->f_S_6_21_Z = rt::touint_d(_v17674); _v17674; });
    return rt::NUL;
}
rt::Value C_S__22__21__2d_::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__22__21__2d_.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    if ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7)) {
        if ((((double)(this->f_S__22__21_U)) <= 19.0)) {
            (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_6_21_T((((this->f_S__3d_A - 1.0)) * 100.0), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
        } else if ((((double)(this->f_S__22__21_U)) <= 22.0)) {
            (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_8_21_Z(((((C_S__23__21__21_::sm_S__23__25_(this->f_S__3d_A, 1.0) * C_S__23__21__21_::sm_S__23__25_(this->f_S_0_21__23_, 2.0)) - 1.0)) * 100.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
        } else {
            (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_8_21_Z((((((C_S__23__21__21_::sm_S__23__25_(this->f_S__3d_A, 1.0) * C_S__23__21__21_::sm_S__23__25_(this->f_S_0_21__23_, 2.0)) * C_S__23__21__21_::sm_S__23__25_(this->f_S__60__21_o, 3.0)) - 1.0)) * 100.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
        }
    } else if ((((double)(this->f_S__22__21_U)) <= 19.0)) {
        (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_6_21_T(this->f_S_9q, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    } else if ((((double)(this->f_S__22__21_U)) <= 22.0)) {
        (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_6_21_T(this->f_S_9q, 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    } else {
        (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S_6_21_T(this->f_S_9q, 3.0, C_S__26_c::dsm_S_6_21_T_2())));
    }
    (l_A__loc2_ = rt::slot_string(rt::trv(rt::VS(g::LS[5239]), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o17675 = this->f_S__25__3c_; C_S__60__21__3b_* _p17676 = rt::as_ptr<C_S__60__21__3b_>(_o17675); _p17676 ? _p17676->f_id : rt::touint(rt::dget(_o17675, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), l_A__loc1_)));
    if ((((double)(this->f_S__22__21_U)) <= 2.0)) {
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5240]))))));
    }
    return rt::slot_string(l_A__loc2_);
    return rt::NUL;
}
rt::Value C_S__22__21__2d_::m_S__3e__21__2d_() {
    RT_FN("S__22__21__2d_.S__3e__21__2d_");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::VS(g::LS[5241]), ({ rt::Value _o17677 = this->f_S__25__3c_; C_S__60__21__3b_* _p17678 = rt::as_ptr<C_S__60__21__3b_>(_o17677); _p17678 ? _p17678->f_S__20_r : rt::dget(_o17677, NM_S__20_r); })), rt::VS(g::LS[5242])), rt::dcallv(rt::V((double)(this->f_S__60_r)), rt::N_toString)));
    return rt::NUL;
}
double C_S__22__21__2d_::g_S_9_21_U() {
    RT_FN("S__22__21__2d_.S_9_21_U_get");
    if (((((double)(({ rt::Value _o17679 = this->f_S__25__3c_; C_S__60__21__3b_* _p17680 = rt::as_ptr<C_S__60__21__3b_>(_o17679); _p17680 ? _p17680->f_id : rt::touint(rt::dget(_o17679, NM_id)); }))) == ((double)(g::SV.C_S_8_21_d__id))) && (((double)(this->f_S__22__21_U)) == 1.0))) {
        return 0.0;
    }
    if (((((double)(C_S_8G::sg_S__2c_P())) >= 3.0) && (((double)(this->f_S__22__21_U)) <= 23.0))) {
        return 0.0;
    }
    if (((((double)(C_S_8G::sg_S__2c_P())) >= 2.0) && (((double)(this->f_S__22__21_U)) <= 22.0))) {
        return 0.0;
    }
    if (((((double)(C_S_8G::sg_S__2c_P())) >= 1.0) && (((double)(this->f_S__22__21_U)) > 19.0))) {
        return ((rt::m_round((({ rt::Value _o17681 = this->f_S__25__3c_; C_S__60__21__3b_* _p17682 = rt::as_ptr<C_S__60__21__3b_>(_o17681); _p17682 ? _p17682->f_S__3e__3d_ : rt::tonum(rt::dget(_o17681, NM_S__3e__3d_)); }) * rt::m_pow((1.0 + (((({ rt::Value _o17683 = this->f_S__25__3c_; C_S__60__21__3b_* _p17684 = rt::as_ptr<C_S__60__21__3b_>(_o17683); _p17684 ? _p17684->f_S__2c__27_ : rt::tonum(rt::dget(_o17683, NM_S__2c__27_)); }) - 1.0)) / ((((double)(C_S_8G::sg_S__2c_P())) * 5.0)))), rt::tonum(rt::arr_at(g::SV.C_S__22__21__2d___S__26_Z, (((double)(this->f_S__60_r)) - 1.0)))))) * 10.0) * ((double)(this->f_S__60_r)));
    }
    return ((((double)(C_S_8G::sg_S__2c_P())) >= 1.0) ? 0.0 : this->f_S__3e__3d_);
    return 0.0;
}
bool C_S__22__21__2d_::g_S__2d_6() {
    RT_FN("S__22__21__2d_.S__2d_6_get");
    return ({ bool _t17694 = ({ bool _t17690 = ({ bool _t17685 = this->C_S__60_6::g_S__2d_6(); _t17685 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 3.0)) : _t17685; }); _t17690 ? (bool)(rt::ge(rt::V((double)(({ rt::Value _o17688 = C_S_8G::sm_S_9_3d_(({ rt::Value _o17686 = this->f_S__25__3c_; C_S__60__21__3b_* _p17687 = rt::as_ptr<C_S__60__21__3b_>(_o17686); _p17687 ? _p17687->f_id : rt::touint(rt::dget(_o17686, NM_id)); })); C_S__60__21__3b_* _p17689 = rt::as_ptr<C_S__60__21__3b_>(_o17688); _p17689 ? _p17689->g_S__21_a() : rt::touint(rt::dget(_o17688, NM_S__21_a)); }))), rt::arr_at(g::SV.C_S__22__21__2d___S__26_Z, (((double)(this->f_S__60_r)) - 1.0)))) : _t17690; }); _t17694 ? (bool)((({ bool _t17693 = ({ bool _t17692 = (((double)(this->f_S__22__21_U)) <= 19.0); _t17692 ? _t17692 : (bool)(({ bool _t17691 = (((double)(this->f_S__22__21_U)) <= 22.0); _t17691 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 1.0)) : _t17691; })); }); _t17693 ? _t17693 : (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)); }))) : _t17694; });
    return false;
}
C_S__22__21__2d_* C_S__22__21__2d_::alloc_() {
    C_S__22__21__2d_* o = rt::make<C_S__22__21__2d_>();
    return o;
}
rt::Value C_S__22__21__2d_::mk_(rt::Value* a, int n) {
    C_S__22__21__2d_* o = alloc_();
    o->C_S__22__21__2d_::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, rt::UNDEF), rt::arg<int32_t>(a, n, 3, 0));
    return rt::VO(o);
}
bool C_S__22__21__2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__60_r: out = rt::V((double)(f_S__60_r)); return true;
    case NM_S__25__3c_: out = f_S__25__3c_; return true;
    case NM_S__3d_A: out = rt::V(f_S__3d_A); return true;
    case NM_S_0_21__23_: out = rt::V(f_S_0_21__23_); return true;
    case NM_S__60__21_o: out = rt::V(f_S__60__21_o); return true;
    case NM_S_9q: out = rt::V(f_S_9q); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22__21__2d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__60_r: f_S__60_r = rt::toint(v); return true;
    case NM_S__25__3c_: f_S__25__3c_ = v; return true;
    case NM_S__3d_A: f_S__3d_A = rt::tonum(v); return true;
    case NM_S_0_21__23_: f_S_0_21__23_ = rt::tonum(v); return true;
    case NM_S__60__21_o: f_S__60__21_o = rt::tonum(v); return true;
    case NM_S_9q: f_S_9q = rt::tonum(v); return true;
    case NM_S_9_21_U: return false;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22__21__2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__60_r: { rt::Value f = rt::V((double)(f_S__60_r)); out = rt::call_value(f, a, n); return true; }
    case NM_S__25__3c_: { rt::Value f = f_S__25__3c_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3d_A: { rt::Value f = rt::V(f_S__3d_A); out = rt::call_value(f, a, n); return true; }
    case NM_S_0_21__23_: { rt::Value f = rt::V(f_S_0_21__23_); out = rt::call_value(f, a, n); return true; }
    case NM_S__60__21_o: { rt::Value f = rt::V(f_S__60__21_o); out = rt::call_value(f, a, n); return true; }
    case NM_S_9q: { rt::Value f = rt::V(f_S_9q); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22__21__2d_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__40__22_: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S_9_21_U: return false;
    case NM_S__2d_6: return false;
    case NM_S__60_r: return false;
    case NM_S__25__3c_: return false;
    case NM_S__3d_A: return false;
    case NM_S_0_21__23_: return false;
    case NM_S__60__21_o: return false;
    case NM_S_9q: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22__21__2d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__21__2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__26_Z: out = g::SV.C_S__22__21__2d___S__26_Z; return true;
    default: return false;
    }
}
bool C_S__22__21__2d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__26_Z: g::SV.C_S__22__21__2d___S__26_Z = v; return true;
    default: return false;
    }
}
bool C_S__22__21__2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__21_n::ctor_() {
    RT_FN("S__3c__21_n.S__3c__21_n");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17695 = 749.0; this->f_S_6_21_Z = rt::touint_d(_v17695); _v17695; });
    ({ rt::Value _v17696 = rt::trv(rt::VS(g::LS[5243])); this->f_S_1i = rt::slot_string(_v17696); _v17696; });
    ({ rt::Value _v17697 = rt::VS(g::LS[5244]); this->f_S__5e__21__23_ = rt::slot_string(_v17697); _v17697; });
    ({ rt::Value _v17698 = rt::trv(rt::VS(g::LS[5245])); this->f_S_7_23_ = rt::slot_string(_v17698); _v17698; });
    ({ rt::Value _v17699 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5235])))); this->f_S_7_23_ = rt::slot_string(_v17699); _v17699; });
    ({ rt::Value _v17700 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5246])))); this->f_S_7_23_ = rt::slot_string(_v17700); _v17700; });
    ({ rt::Value _v17701 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5247])))); this->f_S_7_23_ = rt::slot_string(_v17701); _v17701; });
    ({ rt::Value _v17702 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5248])))); this->f_S_7_23_ = rt::slot_string(_v17702); _v17702; });
    ({ double _v17703 = 1000000000000000.0; this->f_S__23__21_m = _v17703; _v17703; });
    ({ double _v17704 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v17704); _v17704; });
    ({ bool _v17705 = false; this->f_S_3e = _v17705; _v17705; });
}
rt::Value C_S__3c__21_n::m_S_6r() {
    RT_FN("S__3c__21_n.S_6r");
    (void)(({ rt::Value _o17706 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p17707 = rt::as_ptr<C_S_8G>(_o17706); _p17707 ? _p17707->m_S_1_21_l(rt::toint_d(4.0)) : rt::dcallv(_o17706, NM_S_1_21_l, rt::V(4.0)); }));
    return rt::NUL;
}
bool C_S__3c__21_n::g_S__2d_6() {
    RT_FN("S__3c__21_n.S__2d_6_get");
    return ({ bool _t17709 = ({ bool _t17708 = (((double)(C_S_8G::sg_S__2c_P())) >= 2.0); _t17708 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0))) : _t17708; }); _t17709 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 0.0)) : _t17709; });
    return false;
}
C_S__3c__21_n* C_S__3c__21_n::alloc_() {
    C_S__3c__21_n* o = rt::make<C_S__3c__21_n>();
    return o;
}
rt::Value C_S__3c__21_n::mk_(rt::Value* a, int n) {
    C_S__3c__21_n* o = alloc_();
    o->C_S__3c__21_n::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_n::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__21_n::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__21_n::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__21_n::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__21_n::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_n::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_n__id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_n::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_n__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_n::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__26_::ctor_() {
    RT_FN("S__3c__26_.S__3c__26_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17710 = 8.0; this->f_S_6_21_Z = rt::touint_d(_v17710); _v17710; });
    ({ rt::Value _v17711 = rt::trv(rt::VS(g::LS[5249])); this->f_S_1i = rt::slot_string(_v17711); _v17711; });
    ({ rt::Value _v17712 = rt::VS(g::LS[5250]); this->f_S__5e__21__23_ = rt::slot_string(_v17712); _v17712; });
    ({ rt::Value _v17713 = rt::trv(rt::VS(g::LS[5251])); this->f_S_7_23_ = rt::slot_string(_v17713); _v17713; });
    ({ double _v17714 = 5e+49; this->f_S__3e__3d_ = _v17714; _v17714; });
    ({ double _v17715 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v17715); _v17715; });
    ({ bool _v17716 = false; this->f_S_3e = _v17716; _v17716; });
}
rt::Value C_S__3c__26_::m_S_6r() {
    RT_FN("S__3c__26_.S_6r");
    (void)(({ rt::Value _o17717 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p17718 = rt::as_ptr<C_S_8G>(_o17717); _p17718 ? _p17718->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S_2J__id)) : rt::dcallv(_o17717, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S_2J__id)); }));
    (void)(({ rt::Value _o17719 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p17720 = rt::as_ptr<C_S__20_g>(_o17719); _p17720 ? _p17720->m_S__26__2b_(rt::toint_d(905.0), rt::toint_d(0.0)) : rt::dcallv(_o17719, NM_S__26__2b_, rt::V(905.0), rt::V(0.0)); }));
    return rt::NUL;
}
bool C_S__3c__26_::g_S__2d_6() {
    RT_FN("S__3c__26_.S__2d_6_get");
    return ({ bool _t17722 = ({ bool _t17721 = this->C_S__60_6::g_S__2d_6(); _t17721 ? (bool)((!C_S_8G::sm_S__3c_P(g::SV.C_S_2J__id))) : _t17721; }); _t17722 ? (bool)((C_S_8G::sg_S_1_21_5() >= 200.0)) : _t17722; });
    return false;
}
C_S__3c__26_* C_S__3c__26_::alloc_() {
    C_S__3c__26_* o = rt::make<C_S__3c__26_>();
    return o;
}
rt::Value C_S__3c__26_::mk_(rt::Value* a, int n) {
    C_S__3c__26_* o = alloc_();
    o->C_S__3c__26_::ctor_();
    return rt::VO(o);
}
bool C_S__3c__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__26_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__26_::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__26_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__26___id)); return true;
    case NM_ids: out = g::SV.C_S__3c__26___ids; return true;
    default: return false;
    }
}
bool C_S__3c__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__26___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c__26___ids = v; return true;
    default: return false;
    }
}
bool C_S__3c__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c_V::ctor_(rt::Value p0, double p1, double p2, double p3) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_param2 = p1;
    double l_param3 = p2;
    double l_param4 = p3;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S__3c_V.S__3c_V");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17723 = 479.0; this->f_S_6_21_Z = rt::touint_d(_v17723); _v17723; });
    ({ rt::Value _v17724 = l_param1; this->f_S_1i = rt::slot_string(_v17724); _v17724; });
    ({ rt::Value _v17725 = rt::VS(g::LS[1270]); this->f_S__3f__21__3d_ = rt::slot_string(_v17725); _v17725; });
    ({ rt::Value _v17726 = rt::VS(g::LS[1270]); this->f_S__40_1 = rt::slot_string(_v17726); _v17726; });
    ({ double _v17727 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v17727); _v17727; });
    ({ int32_t _v17728 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v17728; _v17728; });
    ({ rt::Value _v17729 = rt::add(rt::VS(g::LS[1270]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v17729); _v17729; });
    ({ double _v17730 = l_param2; this->f_S__5e__21__5d_ = _v17730; _v17730; });
    ({ double _v17731 = l_param3; this->f_S__3e__23_ = _v17731; _v17731; });
    {
        std::vector<rt::Value> _lst17732;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst17732);
        for (const rt::Value& _x17733 : _lst17732) {
            l_A__loc5_ = _x17733;
            if (rt::eq(({ rt::Value _o17734 = l_A__loc5_; C_S__60_6* _p17735 = rt::as_ptr<C_S__60_6>(_o17734); _p17735 ? _p17735->f_S__40_1 : rt::dget(_o17734, NM_S__40_1); }), this->f_S__40_1)) {
                ({ double _v17739 = (this->f_S__3d_A * ((({ rt::Value _o17737 = (({ rt::Value _t17736 = l_A__loc5_; rt::is_class(_t17736, C_S__3c_V::CI) ? _t17736 : rt::NUL; })); C_S__3c_V* _p17738 = rt::as_ptr<C_S__3c_V>(_o17737); _p17738 ? _p17738->f_S__3e__23_ : rt::tonum(rt::dget(_o17737, NM_S__3e__23_)); }) / 100.0) + 1.0)); this->f_S__3d_A = _v17739; _v17739; });
            }
        }
    }
    ({ double _v17740 = (this->f_S__3d_A * ((this->f_S__3e__23_ / 100.0) + 1.0)); this->f_S__3d_A = _v17740; _v17740; });
    ({ double _v17741 = l_param4; this->f_S__3e__3d_ = _v17741; _v17741; });
    ({ bool _v17742 = true; this->f_S__2b__21_9 = _v17742; _v17742; });
}
rt::Value C_S__3c_V::m_S__40__22_() {
    double l_A__loc1_ = NAN;
    RT_FN("S__3c_V.S__40__22_");
    (l_A__loc1_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? (((this->f_S__3d_A - 1.0)) * 100.0) : this->f_S__3e__23_));
    return rt::slot_string(rt::trv(rt::VS(g::LS[367]), C_S__26_c::sm_S_6_21_T(l_A__loc1_, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__3c_V::g_S__2d_6() {
    RT_FN("S__3c_V.S__2d_6_get");
    return ({ bool _t17743 = this->C_S__60_6::g_S__2d_6(); _t17743 ? (bool)(rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 45.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 45.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 45.0)), rt::V(this->f_S__5e__21__5d_))) : _t17743; });
    return false;
}
C_S__3c_V* C_S__3c_V::alloc_() {
    C_S__3c_V* o = rt::make<C_S__3c_V>();
    return o;
}
rt::Value C_S__3c_V::mk_(rt::Value* a, int n) {
    C_S__3c_V* o = alloc_();
    o->C_S__3c_V::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN), rt::arg<double>(a, n, 3, NAN));
    return rt::VO(o);
}
bool C_S__3c_V::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S__3d_A: out = rt::V(f_S__3d_A); return true;
    case NM_S__3e__23_: out = rt::V(f_S__3e__23_); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c_V::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S__3d_A: f_S__3d_A = rt::tonum(v); return true;
    case NM_S__3e__23_: f_S__3e__23_ = rt::tonum(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c_V::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3d_A: { rt::Value f = rt::V(f_S__3d_A); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__23_: { rt::Value f = rt::V(f_S__3e__23_); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c_V::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__5e__21__5d_: return false;
    case NM_S__3d_A: return false;
    case NM_S__3e__23_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c_V::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c_V::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c_V::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c_V::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__22_J::ctor_() {
    RT_FN("S__3f__22_J.S__3f__22_J");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17744 = 1205.0; this->f_S_6_21_Z = rt::touint_d(_v17744); _v17744; });
    ({ rt::Value _v17745 = rt::trv(rt::VS(g::LS[5253])); this->f_S_1i = rt::slot_string(_v17745); _v17745; });
    ({ rt::Value _v17746 = rt::VS(g::LS[5254]); this->f_S__5e__21__23_ = rt::slot_string(_v17746); _v17746; });
    ({ rt::Value _v17747 = rt::VS(g::LS[5254]); this->f_S__40_1 = rt::slot_string(_v17747); _v17747; });
    ({ double _v17748 = 1.0; this->f_S__3e__3d_ = _v17748; _v17748; });
    ({ double _v17749 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v17749); _v17749; });
    ({ bool _v17750 = true; this->f_S_3e = _v17750; _v17750; });
}
rt::Value C_S__3f__22_J::m_S_1_21_P() {
    RT_FN("S__3f__22_J.S_1_21_P");
    return rt::slot_string(rt::add(rt::add(rt::add(this->f_S_1i, rt::VS(g::LS[5255])), C_S__26_c::sm_S_8_21_Z(rt::m_min2(159.0, ((double)(C_S_8G::sg_S_8_21_H()))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[931])));
    return rt::NUL;
}
rt::Value C_S__3f__22_J::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3f__22_J.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::NUL));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[5256]))));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 101.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5257]), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__3f__22_J::sm_S__22__21__26_(C_S__3f__22_J::dsm_S__22__21__26__0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 107.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5258]))))));
        if ((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[194]), rt::trv(rt::VS(g::LS[5259]), C_S__26_c::sm_S_6_21_T(C_S__3f__22_J::sm_S_0_21_q(g::SV.C_S_8G__S__2d__21__5e_, C_S__3f__22_J::dsm_S_0_21_q_1()), 3.0, C_S__26_c::dsm_S_6_21_T_2()))), (((!(((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) ? rt::add(rt::VS(g::LS[9]), rt::trv(rt::VS(g::LS[5260]), C_S__26_c::sm_S_6_21_T(C_S__3f__22_J::sm_S_0_21_q(g::SV.C_S_8G__S__23_3, C_S__3f__22_J::dsm_S_0_21_q_1()), 3.0, C_S__26_c::dsm_S_6_21_T_2()))) : rt::VS(g::LS[113])))), (((!(((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0))) ? rt::add(rt::VS(g::LS[9]), rt::trv(rt::VS(g::LS[5261]), C_S__26_c::sm_S_6_21_T(C_S__3f__22_J::sm_S_0_21_q(g::SV.C_S_8G__S__2d__21_x, C_S__3f__22_J::dsm_S_0_21_q_1()), 3.0, C_S__26_c::dsm_S_6_21_T_2()))) : rt::VS(g::LS[113])))), rt::VS(g::LS[931])))));
        }
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 115.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5262]), C_S__26_c::sm_S_8_21_Z(C_S__3f__22_J::sm_S__2d__21_r(rt::toint_d(1.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 120.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[645]), C_S__26_c::sm_S_6_21_T(C_S__3f__22_J::sm_S__3f__22_9(C_S__3f__22_J::dsm_S__3f__22_9_0()), 3.0, C_S__26_c::dsm_S_6_21_T_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 150.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5263]), C_S__26_c::sm_S_8_21_Z((C_S__3f__22_J::sm_S__40__21__5f_(C_S__3f__22_J::dsm_S__40__21__5f__0()) + 1.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
bool C_S__3f__22_J::g_S__2d_6() {
    RT_FN("S__3f__22_J.S__2d_6_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) >= 100.0);
    return false;
}
int32_t C_S__3f__22_J::dsm_S__22__21__26__0() { return rt::toint_d(0.0); }
double C_S__3f__22_J::sm_S__22__21__26_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__3f__22_J.S__22__21__26_");
    return (2.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(2.0)));
    return 0.0;
}
int32_t C_S__3f__22_J::dsm_S_0_21_q_1() { return rt::toint_d(0.0); }
double C_S__3f__22_J::sm_S_0_21_q(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__3f__22_J.S_0_21_q");
    return (50.0 + (0.15 * rt::m_pow(rt::m_max2(0.0, (C_S__26_c::sm_S__3e__21_y(false, false, false, false, C_S__26_c::dsm_S__3e__21_y_4()) - C_S__26_c::sm_S__22__21_B(C_S__26_c::sm_S__3b__21_4(l_param1), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()))), 0.85)));
    return 0.0;
}
int32_t C_S__3f__22_J::dsm_S__2d__21_r_0() { return rt::toint_d(0.0); }
double C_S__3f__22_J::sm_S__2d__21_r(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__3f__22_J.S__2d__21_r");
    return (1.2 * rt::m_pow(C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(2.0)), 1.05));
    return 0.0;
}
int32_t C_S__3f__22_J::dsm_S__3f__22_9_0() { return rt::toint_d(0.0); }
double C_S__3f__22_J::sm_S__3f__22_9(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__3f__22_J.S__3f__22_9");
    return (25.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(2.0)));
    return 0.0;
}
int32_t C_S__3f__22_J::dsm_S__40__21__5f__0() { return rt::toint_d(0.0); }
double C_S__3f__22_J::sm_S__40__21__5f_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__3f__22_J.S__40__21__5f_");
    return (C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(2.0)) - 1.0);
    return 0.0;
}
C_S__3f__22_J* C_S__3f__22_J::alloc_() {
    C_S__3f__22_J* o = rt::make<C_S__3f__22_J>();
    return o;
}
rt::Value C_S__3f__22_J::mk_(rt::Value* a, int n) {
    C_S__3f__22_J* o = alloc_();
    o->C_S__3f__22_J::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_1_21_P: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__22_J::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__22_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_1_21_P: out = m_S_1_21_P(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__22_J::dmeth(int id) {
    switch (id) {
    case NM_S_1_21_P: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__22_J::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    case NM_S_0_21_q: return true;
    case NM_S__2d__21_r: return true;
    case NM_S__3f__22_9: return true;
    case NM_S__40__21__5f_: return true;
    default: return false;
    }
}
bool C_S__3f__22_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22_J__id)); return true;
    case NM_S__22__21_m: out = rt::V(g::SV.C_S__3f__22_J__S__22__21_m); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_0_21_q: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2d__21_r: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__22_9: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__21__5f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__22_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22_J__id = rt::touint(v); return true;
    case NM_S__22__21_m: g::SV.C_S__3f__22_J__S__22__21_m = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3f__22_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_(rt::arg<int32_t>(a, n, 0, C_S__3f__22_J::dsm_S__22__21__26__0()))); return true;
    case NM_S_0_21_q: out = rt::V(sm_S_0_21_q(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__3f__22_J::dsm_S_0_21_q_1()))); return true;
    case NM_S__2d__21_r: out = rt::V(sm_S__2d__21_r(rt::arg<int32_t>(a, n, 0, C_S__3f__22_J::dsm_S__2d__21_r_0()))); return true;
    case NM_S__3f__22_9: out = rt::V(sm_S__3f__22_9(rt::arg<int32_t>(a, n, 0, C_S__3f__22_J::dsm_S__3f__22_9_0()))); return true;
    case NM_S__40__21__5f_: out = rt::V(sm_S__40__21__5f_(rt::arg<int32_t>(a, n, 0, C_S__3f__22_J::dsm_S__40__21__5f__0()))); return true;
    default: return false;
    }
}
void C_S__3f_3::ctor_(rt::Value p0, double p1, double p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_param2 = p1;
    double l_param3 = p2;
    RT_FN("S__3f_3.S__3f_3");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17751 = 16.0; this->f_S_6_21_Z = rt::touint_d(_v17751); _v17751; });
    ({ rt::Value _v17752 = l_param1; this->f_S_1i = rt::slot_string(_v17752); _v17752; });
    ({ rt::Value _v17753 = rt::VS(g::LS[1240]); this->f_S__3f__21__3d_ = rt::slot_string(_v17753); _v17753; });
    ({ rt::Value _v17754 = rt::VS(g::LS[5264]); this->f_S__40_1 = rt::slot_string(_v17754); _v17754; });
    ({ double _v17755 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v17755); _v17755; });
    ({ int32_t _v17756 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v17756; _v17756; });
    ({ double _v17757 = (((rt::m_pow(1.25, ((double)(this->f_S__22__21_U))) - 1.0)) * 100.0); this->f_S__3e__23_ = _v17757; _v17757; });
    ({ rt::Value _v17758 = rt::add(rt::VS(g::LS[5265]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v17758); _v17758; });
    ({ double _v17759 = l_param2; this->f_S__5e__21__5d_ = _v17759; _v17759; });
    ({ double _v17760 = l_param3; this->f_S__3e__3d_ = _v17760; _v17760; });
    ({ bool _v17761 = true; this->f_S__2b__21_9 = _v17761; _v17761; });
}
rt::Value C_S__3f_3::m_S__40__22_() {
    double l_A__loc1_ = NAN;
    RT_FN("S__3f_3.S__40__22_");
    (l_A__loc1_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? this->f_S__3e__23_ : 25.0));
    return rt::slot_string(rt::trv(rt::VS(g::LS[5266]), C_S__26_c::sm_S_6_21_T(l_A__loc1_, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()), C_S__26_c::sm_S_6_21_T(l_A__loc1_, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__3f_3::m_S__3e__21__2d_() {
    RT_FN("S__3f_3.S__3e__21__2d_");
    return rt::slot_string(rt::add(rt::VS(g::LS[5267]), this->m_S__2b__21__21_(true)));
    return rt::NUL;
}
bool C_S__3f_3::g_S__2d_6() {
    RT_FN("S__3f_3.S__2d_6_get");
    return ({ bool _t17763 = ({ bool _t17762 = this->C_S__60_6::g_S__2d_6(); _t17762 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 5.0), rt::V(this->f_S__5e__21__5d_))) : _t17762; }); _t17763 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t17763; });
    return false;
}
C_S__3f_3* C_S__3f_3::alloc_() {
    C_S__3f_3* o = rt::make<C_S__3f_3>();
    return o;
}
rt::Value C_S__3f_3::mk_(rt::Value* a, int n) {
    C_S__3f_3* o = alloc_();
    o->C_S__3f_3::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN));
    return rt::VO(o);
}
bool C_S__3f_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S__3e__23_: out = rt::V(f_S__3e__23_); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S__3e__23_: f_S__3e__23_ = rt::tonum(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__23_: { rt::Value f = rt::V(f_S__3e__23_); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__2d_6: return false;
    case NM_S__5e__21__5d_: return false;
    case NM_S__3e__23_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f_3::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f_3::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f_3::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__25_p::dctor_4() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__25_p::ctor_(uint32_t p0, uint32_t p1, double p2, double p3, rt::Value p4) {
    uint32_t l_param1 = p0;
    uint32_t l_param2 = p1;
    double l_param3 = p2;
    double l_param4 = p3;
    rt::Value l_param5 = rt::slot_string(p4);
    rt::Value l_A__loc6_ = rt::NUL;
    RT_FN("S__25_p.S__25_p");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17764 = 581.0; this->f_S_6_21_Z = rt::touint_d(_v17764); _v17764; });
    ({ uint32_t _v17765 = l_param1; this->f_S__60_g = _v17765; _v17765; });
    ({ bool _v17768 = ({ bool _t17767 = ({ bool _t17766 = (((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_2_22__21___id))); _t17766 ? _t17766 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__21__22__21___id)))); }); _t17767 ? _t17767 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7_22__20___id)))); }); this->f_S__3b__21_v = _v17768; _v17768; });
    ({ bool _v17771 = ({ bool _t17770 = ({ bool _t17769 = (((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__21_n__id))); _t17769 ? _t17769 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_9_21_n__id)))); }); _t17770 ? _t17770 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27__21_n__id)))); }); this->f_S__60__22__2c_ = _v17771; _v17771; });
    ({ uint32_t _v17772 = l_param2; this->f_S__60_r = _v17772; _v17772; });
    ({ double _v17773 = l_param3; this->f_S_1_27_ = _v17773; _v17773; });
    ({ double _v17774 = l_param4; this->f_S__2d_t = _v17774; _v17774; });
    ({ rt::Value _v17775 = l_param5; this->f_S_2_21_w = rt::slot_string(_v17775); _v17775; });
    (l_A__loc6_ = C_S_8G::sm_S__23_N(this->f_S__60_g));
    ({ rt::Value _v17778 = rt::add(rt::add(({ rt::Value _o17776 = l_A__loc6_; C_S_84* _p17777 = rt::as_ptr<C_S_84>(_o17776); _p17777 ? _p17777->f_S_1i : rt::dget(_o17776, NM_S_1i); }), rt::VS(g::LS[9])), rt::dcallv(rt::V(((((double)(this->f_S__60_r)) + 1.0))), rt::N_toString)); this->f_S_1i = rt::slot_string(_v17778); _v17778; });
    ({ rt::Value _v17781 = rt::add(rt::add(({ rt::Value _o17779 = l_A__loc6_; C_S_84* _p17780 = rt::as_ptr<C_S_84>(_o17779); _p17780 ? _p17780->f_S__20_r : rt::dget(_o17779, NM_S__20_r); }), rt::VS(g::LS[5268])), rt::dcallv(rt::V(((((double)(this->f_S__60_r)) + 1.0))), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v17781); _v17781; });
    ({ rt::Value _v17785 = ({ rt::Value _v17784 = rt::add(({ rt::Value _o17782 = l_A__loc6_; C_S_84* _p17783 = rt::as_ptr<C_S_84>(_o17782); _p17783 ? _p17783->f_S__20_r : rt::dget(_o17782, NM_S__20_r); }), rt::VS(g::LS[1271])); this->f_S__40_1 = rt::slot_string(_v17784); _v17784; }); this->f_S__3f__21__3d_ = rt::slot_string(_v17785); _v17785; });
    ({ int32_t _v17786 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v17786; _v17786; });
    ({ double _v17787 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v17787); _v17787; });
    ({ bool _v17788 = true; this->f_S__2b__21_9 = _v17788; _v17788; });
    ({ bool _v17789 = true; this->f_S_0_21_d = _v17789; _v17789; });
}
rt::Value C_S__25_p::m_S__5b__21_C() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S__25_p.S__5b__21_C");
    (l_A__loc1_ = rt::toint_d(0.0));
    (void)(this->C_S__60_6::m_S__5b__21_C());
    ({ double _v17792 = ((400000.0 + (((double)(({ rt::Value _o17790 = C_S_8G::sm_S__23_N(this->f_S__60_g); C_S_84* _p17791 = rt::as_ptr<C_S_84>(_o17790); _p17791 ? _p17791->f_S_6_21_Z : rt::touint(rt::dget(_o17790, NM_S_6_21_Z)); }))) * 100.0)) + ((double)(this->f_S__60_r))); this->f_S_6_21_Z = rt::touint_d(_v17792); _v17792; });
    (void)(rt::dcallv(g::SV.C_S__25_p__S__3c__21_O, rt::N_push, rt::V(1.0)));
    (void)(rt::dcallv(g::SV.C_S__25_p__S__20__21_o, rt::N_push, rt::V(0.2)));
    (l_A__loc1_ = rt::toint_d(1.0));
    while ((((double)(l_A__loc1_)) <= 98.0)) {
        (void)(rt::dcallv(g::SV.C_S__25_p__S__3c__21_O, rt::N_push, rt::V((((double)(l_A__loc1_)) + 1.0))));
        (void)(rt::dcallv(g::SV.C_S__25_p__S__20__21_o, rt::N_push, rt::V((((((double)(l_A__loc1_)) + 1.0)) / 5.0))));
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S__25_p::m_S__40__22_() {
    double l_A__loc7_ = NAN;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    double l_A__loc4_ = NAN;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc1_ = rt::NUL;
    rt::Value l_A__loc6_ = rt::NUL;
    RT_FN("S__25_p.S__40__22_");
    (l_A__loc7_ = NAN);
    (l_A__loc2_ = rt::slot_string(rt::NUL));
    (l_A__loc3_ = rt::slot_string(rt::NUL));
    (l_A__loc4_ = NAN);
    (l_A__loc5_ = C_S_8G::sm_S__23_N(this->f_S__60_g));
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    if ((!this->f_S__3f__21_6)) {
        if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_5_21_3__id)))) {
            (l_A__loc7_ = C_S_5_21_3::sm_S__21__22_J(this->f_S__60_r));
            if ((l_A__loc7_ > 0.0)) {
                (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::trv(rt::VS(g::LS[5269]), C_S__26_c::sm_S_8_21_Z(l_A__loc7_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])))));
            }
        } else {
            (l_A__loc2_ = rt::slot_string(C_S__26_c::sm_S__23__21_R((3600.0 * ((double)(this->f_S__60_r))), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2())));
            (l_A__loc3_ = rt::slot_string(rt::VS(g::LS[113])));
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__3b__21__2b___id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5270]), C_S__26_c::sm_S_8_21_Z(C_S__3b__21__2b_::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7I__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5271]), C_S__26_c::sm_S_8_21_Z(C_S_7I::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27_K__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5272]), C_S__26_c::sm_S_8_21_Z(C_S__27_K::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27__21__27___id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[797]), C_S__26_c::sm_S_8_21_Z(C_S__27__21__27_::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_6_21_V__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5273]), C_S__26_c::sm_S_8_21_Z(C_S_6_21_V::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7_21_K__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5274]), C_S__26_c::sm_S_8_21_Z(C_S_7_21_K::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__60_T__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5275]), C_S__26_c::sm_S__23__21_R(C_S__60_T::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_2_21_E__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5276]), C_S__26_c::sm_S_8_21_Z(C_S_2_21_E::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__20__21_5__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5277]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_5::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_8_3e___id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5278]), C_S__26_c::sm_S_8_21_Z(C_S_8_3e_::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__40_W__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5279]), C_S__26_c::sm_S_8_21_Z(C_S__40_W::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_6n__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5280]), C_S__26_c::sm_S_8_21_Z(C_S_6n::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__5e_x__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5281]), C_S__26_c::sm_S_8_21_Z(C_S__5e_x::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__21_C__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5282]), C_S__26_c::sm_S_8_21_Z(C_S__21_C::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__21_J__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5283]), C_S__26_c::sm_S__23__21_R((C_S__25__21_J::sm_S__21__22_J(this->f_S__60_r) / 30.0), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__2c___id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[945]), C_S__26_c::sm_S_8_21_Z(C_S__25__2c_::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_9_21_n__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5284]), C_S__26_c::sm_S__23__21_R(C_S_9_21_n::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27__21_n__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5285]), C_S__26_c::sm_S_8_21_Z(C_S__27__21_n::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__21_n__id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5286]), C_S__26_c::sm_S_8_21_Z(C_S__25__21_n::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_2_22__21___id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5287]), C_S__26_c::sm_S__23__21_R((C_S_2_22__21_::sm_S__21__22_J(this->f_S__60_r) / 30.0), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7_22__20___id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[797]), C_S__26_c::sm_S_8_21_Z(C_S_7_22__20_::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__21__22__21___id)))) {
                (l_A__loc3_ = rt::slot_string(rt::trv(rt::VS(g::LS[5282]), C_S__26_c::sm_S_8_21_Z(C_S__21__22__21_::sm_S__21__22_J(this->f_S__60_r), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
            }
            if ((!rt::eq(l_A__loc3_, rt::VS(g::LS[113])))) {
                (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::trv(rt::VS(g::LS[5288]), l_A__loc2_, C_S__26_c::sm_S_1_2c_(this->f_S__60_g), l_A__loc3_), rt::VS(g::LS[8])))));
            }
        }
    }
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::tr_nv(rt::VS(g::LS[5289]), rt::VS(g::LS[5290]), rt::V((double)(this->f_S__60_r)), rt::dcallv(rt::V((double)(this->f_S__60_r)), rt::N_toString), ({ rt::Value _o17793 = l_A__loc5_; C_S_84* _p17794 = rt::as_ptr<C_S_84>(_o17793); _p17794 ? _p17794->f_S_1i : rt::dget(_o17793, NM_S_1i); })))));
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27__21_n__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5291]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__60_T__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5292]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__21_J__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5293]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__3b__21__2b___id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5294]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__40_W__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5295]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7_21_K__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5296]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27_K__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5297]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_6n__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5298]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_2_21_E__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5299]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_6_21_V__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5300]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__21_C__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5301]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_8_3e___id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5302]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7I__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5303]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7_22__20___id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5304]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__5e_x__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5305]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21__60___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__21__22__21___id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5306]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__21_n__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5307]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27__21__27___id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5308]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__20__21_5__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5309]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_2_22__21___id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5310]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__2c___id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5311]))))));
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_9_21_n__id)))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5312]))))));
    }
    if ((!(((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_5_21_3__id))))) {
        (l_A__loc4_ = (((C_S__23__21__21_::sm_S__23__25_(((C_S__25_p::sm_S__2b__2b_(((double)(this->f_S__60_r))) / 100.0) + 1.0), (((double)(this->f_S__60_r)) + 1.0)) - 1.0)) * 100.0));
        if ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7)) {
            (l_A__loc4_ = 1.0);
            {
                std::vector<rt::Value> _lst17795;
                rt::each(g::SV.C_S_8G__S__2d__21_4, _lst17795);
                for (const rt::Value& _x17796 : _lst17795) {
                    l_A__loc6_ = _x17796;
                    if (rt::eq(({ rt::Value _o17797 = l_A__loc6_; C_S__60_6* _p17798 = rt::as_ptr<C_S__60_6>(_o17797); _p17798 ? _p17798->f_S__40_1 : rt::dget(_o17797, NM_S__40_1); }), this->f_S__40_1)) {
                        (l_A__loc4_ = (l_A__loc4_ * C_S__23__21__21_::sm_S__23__25_(((C_S__25_p::sm_S__2b__2b_(((double)(({ rt::Value _o17800 = (({ rt::Value _t17799 = l_A__loc6_; rt::is_class(_t17799, C_S__25_p::CI) ? _t17799 : rt::NUL; })); C_S__25_p* _p17801 = rt::as_ptr<C_S__25_p>(_o17800); _p17801 ? _p17801->f_S__60_r : rt::touint(rt::dget(_o17800, NM_S__60_r)); })))) / 100.0) + 1.0), (((double)(({ rt::Value _o17803 = (({ rt::Value _t17802 = l_A__loc6_; rt::is_class(_t17802, C_S__25_p::CI) ? _t17802 : rt::NUL; })); C_S__25_p* _p17804 = rt::as_ptr<C_S__25_p>(_o17803); _p17804 ? _p17804->f_S__60_r : rt::touint(rt::dget(_o17803, NM_S__60_r)); }))) + 1.0))));
                        if (rt::eq(l_A__loc6_, rt::VO(this))) {
                            break;
                        }
                    }
                }
            }
            (l_A__loc4_ = (((l_A__loc4_ - 1.0)) * 100.0));
        }
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5313]), C_S__26_c::sm_S_8_21_Z(l_A__loc4_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__25_p::m_S_6r() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__25_p.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (l_A__loc1_ = C_S_8G::sm_S__23_N(this->f_S__60_g));
    if ((!rt::eq(l_A__loc1_, rt::NUL))) {
        ({ uint32_t _v17809 = C_S__23__21__21_::sm_S_8_21_6(({ rt::Value _o17805 = l_A__loc1_; C_S_84* _p17806 = rt::as_ptr<C_S_84>(_o17805); _p17806 ? _p17806->f_id : rt::touint(rt::dget(_o17805, NM_id)); })); rt::Value _o17807 = l_A__loc1_; C_S_84* _p17808 = rt::as_ptr<C_S_84>(_o17807); if (_p17808) _p17808->f_S_6_21_A = ((int32_t)(_v17809)); else rt::dset(_o17807, NM_S_6_21_A, rt::V((double)(_v17809))); _v17809; });
    }
    return rt::NUL;
}
rt::Value C_S__25_p::m_S__3d__21__26_() {
    RT_FN("S__25_p.S__3d__21__26_");
    (void)(this->C_S__60_6::m_S__3d__21__26_());
    if (((((double)(this->f_S__60_r)) == 1.0) && (!C_S__3c__21__5e_::sm_S__60__21_E(rt::toint_d(30.0))))) {
        (g::SV.C_S__3c__21__5e___S_0_21_1 = ((int32_t)(this->f_S__60_g)));
        (void)(({ rt::Value _o17810 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p17811 = rt::as_ptr<C_S__20_g>(_o17810); _p17811 ? _p17811->m_S_1M(rt::toint_d(35.0)) : rt::dcallv(_o17810, NM_S_1M, rt::V(35.0)); }));
    }
    return rt::NUL;
}
int32_t C_S__25_p::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__25_p::dm_S_75_2() { return false; }
rt::Value C_S__25_p::dm_S_75_3() { return rt::NUL; }
double C_S__25_p::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    bool l_A__loc7_ = false;
    double l_A__loc5_ = NAN;
    rt::Value l_A__loc6_ = rt::NUL;
    RT_FN("S__25_p.S_75");
    (l_A__loc7_ = false);
    (l_A__loc5_ = this->f_S__2d_t);
    (l_A__loc6_ = C_S_8G::sm_S__23_N(this->f_S__60_g));
    if (((!(((double)(({ rt::Value _o17812 = l_A__loc6_; C_S_84* _p17813 = rt::as_ptr<C_S_84>(_o17812); _p17813 ? _p17813->f_S__2c__21_Y : rt::toint(rt::dget(_o17812, NM_S__2c__21_Y)); }))) == 0.0)) && (!(((double)(({ rt::Value _o17814 = l_A__loc6_; C_S_84* _p17815 = rt::as_ptr<C_S_84>(_o17814); _p17815 ? _p17815->f_S__2d__21__5e_ : rt::toint(rt::dget(_o17814, NM_S__2d__21__5e_)); }))) == (-1.0))))) {
        (l_A__loc7_ = ({ bool _t17823 = ({ bool _t17822 = ({ bool _t17821 = ({ bool _t17820 = (!(((double)(({ rt::Value _o17816 = l_A__loc6_; C_S_84* _p17817 = rt::as_ptr<C_S_84>(_o17816); _p17817 ? _p17817->f_S__2c__21_Y : rt::toint(rt::dget(_o17816, NM_S__2c__21_Y)); }))) == 3.0)); _t17820 ? (bool)((((double)(l_param1)) == ((double)(({ rt::Value _o17818 = l_A__loc6_; C_S_84* _p17819 = rt::as_ptr<C_S_84>(_o17818); _p17819 ? _p17819->f_S__2d__21__5e_ : rt::toint(rt::dget(_o17818, NM_S__2d__21__5e_)); }))))) : _t17820; }); _t17821 ? (bool)((!(((double)(l_param1)) == 13.0))) : _t17821; }); _t17822 ? (bool)((!(((double)(l_param1)) == 15.0))) : _t17822; }); _t17823 ? (bool)((!(((double)(l_param1)) == 14.0))) : _t17823; }));
        if ((({ bool _t17826 = (!l_A__loc7_); _t17826 ? (bool)((((double)(({ rt::Value _o17824 = l_A__loc6_; C_S_84* _p17825 = rt::as_ptr<C_S_84>(_o17824); _p17825 ? _p17825->f_S__2d__21__5e_ : rt::toint(rt::dget(_o17824, NM_S__2d__21__5e_)); }))) == 6.0)) : _t17826; }) && ((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 3.0)))) {
            (l_A__loc7_ = true);
        }
        if ((({ bool _t17829 = (!l_A__loc7_); _t17829 ? (bool)((((double)(({ rt::Value _o17827 = l_A__loc6_; C_S_84* _p17828 = rt::as_ptr<C_S_84>(_o17827); _p17828 ? _p17828->f_S__2d__21__5e_ : rt::toint(rt::dget(_o17827, NM_S__2d__21__5e_)); }))) == 7.0)) : _t17829; }) && ((((double)(l_param1)) == 1.0) || (((double)(l_param1)) == 5.0)))) {
            (l_A__loc7_ = true);
        }
        if ((({ bool _t17832 = (!l_A__loc7_); _t17832 ? (bool)((((double)(({ rt::Value _o17830 = l_A__loc6_; C_S_84* _p17831 = rt::as_ptr<C_S_84>(_o17830); _p17831 ? _p17831->f_S__2d__21__5e_ : rt::toint(rt::dget(_o17830, NM_S__2d__21__5e_)); }))) == 8.0)) : _t17832; }) && ((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 4.0)))) {
            (l_A__loc7_ = true);
        }
        if ((({ bool _t17835 = (!l_A__loc7_); _t17835 ? (bool)((((double)(({ rt::Value _o17833 = l_A__loc6_; C_S_84* _p17834 = rt::as_ptr<C_S_84>(_o17833); _p17834 ? _p17834->f_S__2d__21__5e_ : rt::toint(rt::dget(_o17833, NM_S__2d__21__5e_)); }))) == 12.0)) : _t17835; }) && ((((double)(l_param1)) == 9.0) || (((double)(l_param1)) == 10.0)))) {
            (l_A__loc7_ = true);
        }
        if ((({ bool _t17838 = (!l_A__loc7_); _t17838 ? (bool)((((double)(({ rt::Value _o17836 = l_A__loc6_; C_S_84* _p17837 = rt::as_ptr<C_S_84>(_o17836); _p17837 ? _p17837->f_S__2d__21__5e_ : rt::toint(rt::dget(_o17836, NM_S__2d__21__5e_)); }))) == 13.0)) : _t17838; }) && ((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 4.0)))) {
            (l_A__loc7_ = true);
        }
        if ((({ bool _t17841 = (!l_A__loc7_); _t17841 ? (bool)((((double)(({ rt::Value _o17839 = l_A__loc6_; C_S_84* _p17840 = rt::as_ptr<C_S_84>(_o17839); _p17840 ? _p17840->f_S__2d__21__5e_ : rt::toint(rt::dget(_o17839, NM_S__2d__21__5e_)); }))) == 15.0)) : _t17841; }) && ((((double)(l_param1)) == 1.0) || (((double)(l_param1)) == 3.0)))) {
            (l_A__loc7_ = true);
        }
        if ((({ bool _t17844 = (!l_A__loc7_); _t17844 ? (bool)((((double)(({ rt::Value _o17842 = l_A__loc6_; C_S_84* _p17843 = rt::as_ptr<C_S_84>(_o17842); _p17843 ? _p17843->f_S__2d__21__5e_ : rt::toint(rt::dget(_o17842, NM_S__2d__21__5e_)); }))) == 14.0)) : _t17844; }) && ((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 5.0)))) {
            (l_A__loc7_ = true);
        }
        if (l_A__loc7_) {
            return l_A__loc5_;
        }
    } else {
        if (((((double)(({ rt::Value _o17845 = l_A__loc6_; C_S_84* _p17846 = rt::as_ptr<C_S_84>(_o17845); _p17846 ? _p17846->f_S__2c__21_Y : rt::toint(rt::dget(_o17845, NM_S__2c__21_Y)); }))) == 1.0) && (({ bool _t17848 = ({ bool _t17847 = (((double)(l_param1)) == 2.0); _t17847 ? _t17847 : (bool)((((double)(l_param1)) == 1.0)); }); _t17848 ? _t17848 : (bool)((((double)(l_param1)) == 0.0)); }) || (((double)(l_param1)) == 9.0)))) {
            return l_A__loc5_;
        }
        if (((((double)(({ rt::Value _o17849 = l_A__loc6_; C_S_84* _p17850 = rt::as_ptr<C_S_84>(_o17849); _p17850 ? _p17850->f_S__2c__21_Y : rt::toint(rt::dget(_o17849, NM_S__2c__21_Y)); }))) == 2.0) && (({ bool _t17852 = ({ bool _t17851 = (((double)(l_param1)) == 3.0); _t17851 ? _t17851 : (bool)((((double)(l_param1)) == 5.0)); }); _t17852 ? _t17852 : (bool)((((double)(l_param1)) == 4.0)); }) || (((double)(l_param1)) == 10.0)))) {
            return l_A__loc5_;
        }
        if (((({ bool _t17855 = (((double)(({ rt::Value _o17853 = l_A__loc6_; C_S_84* _p17854 = rt::as_ptr<C_S_84>(_o17853); _p17854 ? _p17854->f_S__2c__21_Y : rt::toint(rt::dget(_o17853, NM_S__2c__21_Y)); }))) == 3.0); _t17855 ? _t17855 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__2c___id)))); })) && C_S__26_c::sm_S__3e__25_(l_param1))) {
            return l_A__loc5_;
        }
        if (((((double)(({ rt::Value _o17856 = l_A__loc6_; C_S_84* _p17857 = rt::as_ptr<C_S_84>(_o17856); _p17857 ? _p17857->f_S__2c__21_Y : rt::toint(rt::dget(_o17856, NM_S__2c__21_Y)); }))) == 6.0) && (({ bool _t17859 = ({ bool _t17858 = (((double)(l_param1)) == 1.0); _t17858 ? _t17858 : (bool)((((double)(l_param1)) == 3.0)); }); _t17859 ? _t17859 : (bool)((((double)(l_param1)) == 9.0)); }) || (((double)(l_param1)) == 10.0)))) {
            return l_A__loc5_;
        }
        if (((((double)(({ rt::Value _o17860 = l_A__loc6_; C_S_84* _p17861 = rt::as_ptr<C_S_84>(_o17860); _p17861 ? _p17861->f_S__2c__21_Y : rt::toint(rt::dget(_o17860, NM_S__2c__21_Y)); }))) == 4.0) && (({ bool _t17863 = ({ bool _t17862 = (((double)(l_param1)) == 2.0); _t17862 ? _t17862 : (bool)((((double)(l_param1)) == 4.0)); }); _t17863 ? _t17863 : (bool)((((double)(l_param1)) == 9.0)); }) || (((double)(l_param1)) == 10.0)))) {
            return l_A__loc5_;
        }
        if (((((double)(({ rt::Value _o17864 = l_A__loc6_; C_S_84* _p17865 = rt::as_ptr<C_S_84>(_o17864); _p17865 ? _p17865->f_S__2c__21_Y : rt::toint(rt::dget(_o17864, NM_S__2c__21_Y)); }))) == 5.0) && (({ bool _t17867 = ({ bool _t17866 = (((double)(l_param1)) == 0.0); _t17866 ? _t17866 : (bool)((((double)(l_param1)) == 5.0)); }); _t17867 ? _t17867 : (bool)((((double)(l_param1)) == 9.0)); }) || (((double)(l_param1)) == 10.0)))) {
            return l_A__loc5_;
        }
    }
    return 0.0;
    return 0.0;
}
bool C_S__25_p::g_S__2d_6() {
    rt::Value l_A__loc1_ = rt::NUL;
    bool l_A__loc2_ = false;
    RT_FN("S__25_p.S__2d_6_get");
    (l_A__loc1_ = C_S_8G::sm_S__23_N(this->f_S__60_g));
    (l_A__loc2_ = ({ rt::Value _o17868 = l_A__loc1_; C_S_84* _p17869 = rt::as_ptr<C_S_84>(_o17868); _p17869 ? _p17869->g_S__2d_6() : rt::T(rt::dget(_o17868, NM_S__2d_6)); }));
    if ((this->f_S__3f__21_6 && l_A__loc2_)) {
        return true;
    }
    if ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_5_21_3__id)))) {
        if ((((double)(C_S_8G::sg_S_8_21_H())) < C_S_5_21_3::sm_S__21__22_J(this->f_S__60_r))) {
            return false;
        }
    } else if ((((double)(C_S_8G::sg_S__2c_P())) < ((double)(this->f_S__60_r)))) {
        return false;
    }
    if (((({ bool _t17870 = (((double)(C_S_8G::sg_S_8_21_H())) < 42.0); _t17870 ? _t17870 : (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__22__5b___id))); })) && ((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__3b__21__2b___id))) || (((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__2c___id)))))) {
        return false;
    }
    if (((({ bool _t17871 = (((double)(C_S_8G::sg_S_8_21_H())) < 44.0); _t17871 ? _t17871 : (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__40__21__20___id))); })) && (({ bool _t17874 = ({ bool _t17873 = ({ bool _t17872 = (((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__60_T__id))); _t17872 ? _t17872 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_2_21_E__id)))); }); _t17873 ? _t17873 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__20__21_5__id)))); }); _t17874 ? _t17874 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_8_3e___id)))); }) || (((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__40_W__id)))))) {
        return false;
    }
    if (((({ bool _t17875 = (((double)(C_S_8G::sg_S_8_21_H())) < 46.0); _t17875 ? _t17875 : (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__3c_G__id))); })) && (({ bool _t17878 = ({ bool _t17877 = ({ bool _t17876 = (((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7I__id))); _t17876 ? _t17876 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27_K__id)))); }); _t17877 ? _t17877 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27__21__27___id)))); }); _t17878 ? _t17878 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_6_21_V__id)))); }) || (((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7_21_K__id)))))) {
        return false;
    }
    if (((({ bool _t17879 = (((double)(C_S_8G::sg_S_8_21_H())) < 48.0); _t17879 ? _t17879 : (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__5e__27___id))); })) && (({ bool _t17881 = ({ bool _t17880 = (((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_6n__id))); _t17880 ? _t17880 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__5e_x__id)))); }); _t17881 ? _t17881 : (bool)((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__21_C__id)))); }) || (((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__21_J__id)))))) {
        return false;
    }
    if ((!this->f_S__3b__21_v)) {
        return l_A__loc2_;
    }
    return ({ bool _t17882 = l_A__loc2_; _t17882 ? (bool)(C_S_8G::sm_S__2c__23_(this->f_S_2_21_w)) : _t17882; });
    return false;
}
bool C_S__25_p::g_S_9_21__25_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__25_p.S_9_21__25__get");
    (l_A__loc1_ = rt::NUL);
    if (this->f_S__3f__21_6) {
        return this->g_S__2d_6();
    }
    (l_A__loc1_ = C_S_8G::sm_S__23_N(this->f_S__60_g));
    if (((!(((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_5_21_3__id)))) && ((({ rt::Value _o17883 = l_A__loc1_; C_S_84* _p17884 = rt::as_ptr<C_S_84>(_o17883); _p17884 ? _p17884->g_S__3f_j() : rt::tonum(rt::dget(_o17883, NM_S__3f_j)); }) + ({ rt::Value _o17885 = l_A__loc1_; C_S_84* _p17886 = rt::as_ptr<C_S_84>(_o17885); _p17886 ? _p17886->g_S__3c_q() : rt::tonum(rt::dget(_o17885, NM_S__3c_q)); })) < (3600.0 * ((double)(this->f_S__60_r)))))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7I__id))) && (C_S__26_c::sm_S__3e__21_h(false, false, true) < C_S_7I::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27_K__id))) && (C_S__23__21__21_::sm_S__21__2d_() < C_S__27_K::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27__21__27___id))) && (C_S__26_c::sm_S__40__21__5b_(true, false, true) < C_S__27__21__27_::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_6_21_V__id))) && ((C_S__26_c::sm_S_57(false) * 30.0) < C_S_6_21_V::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7_21_K__id))) && (C_S_8G::sg_S_1_21_5() < C_S_7_21_K::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__3b__21__2b___id))) && (C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true) < C_S__3b__21__2b_::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__60_T__id))) && (C_S__26_c::sm_S__27__22_I(rt::toint_d(2.0), false, true) < C_S__60_T::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_2_21_E__id))) && (({ rt::Value _o17887 = C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id); C_S_84* _p17888 = rt::as_ptr<C_S_84>(_o17887); _p17888 ? _p17888->g_S_2_2d_() : rt::tonum(rt::dget(_o17887, NM_S_2_2d_)); }) < C_S_2_21_E::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__20__21_5__id))) && ((C_S__23__21__21_::sm_S__2c_d() * 100.0) < C_S__20__21_5::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_8_3e___id))) && (rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(300.0)) || (({ rt::Value _o17889 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p17890 = rt::as_ptr<C_S_84>(_o17889); _p17890 ? _p17890->g_S_2_2d_() : rt::tonum(rt::dget(_o17889, NM_S_2_2d_)); }) < C_S_8_3e_::sm_S__21__22_J(this->f_S__60_r))))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__40_W__id))) && (C_S__26_c::sm_S__27_n() < C_S__40_W::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_6n__id))) && (C_S_8G::sg_S__22__21_0() < C_S_6n::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__5e_x__id))) && (C_S__23__21__21_::sm_S__40__21__3f_() < C_S__5e_x::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__21_C__id))) && (C_S__23__21__21_::sm_S_2_21__26_(false) < C_S__21_C::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__21_J__id))) && (({ rt::Value _o17891 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id); C_S_84* _p17892 = rt::as_ptr<C_S_84>(_o17891); _p17892 ? _p17892->g_S__3e_() : rt::tonum(rt::dget(_o17891, NM_S__3e_)); }) < C_S__25__21_J::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__2c___id))) && (((double)(C_S_8G::sg_S_8_21_H())) < C_S__25__2c_::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_9_21_n__id))) && rt::lt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(C_S_9_21_n::sm_S__21__22_J(this->f_S__60_r))))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__27__21_n__id))) && (C_S__26_c::sm_S__60__21_D(true) < C_S__27__21_n::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__25__21_n__id))) && (((double)(C_S__26_c::sm_S__3f__26_(true))) < C_S__25__21_n::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_2_22__21___id))) && (({ rt::Value _o17893 = C_S_8G::sm_S__23_N(g::SV.C_S_2_22__21___id); C_S_84* _p17894 = rt::as_ptr<C_S_84>(_o17893); _p17894 ? _p17894->g_S__3e_() : rt::tonum(rt::dget(_o17893, NM_S__3e_)); }) < C_S_2_22__21_::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_7_22__20___id))) && (C_S__26_c::sm_S__40__21__5b_(true, false, true) < C_S_7_22__20_::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    if (((((double)(this->f_S__60_g)) == ((double)(g::SV.C_S__21__22__21___id))) && (C_S__23__21__21_::sm_S_2_21__26_(false) < C_S__21__22__21_::sm_S__21__22_J(this->f_S__60_r)))) {
        return false;
    }
    return true;
    return false;
}
double C_S__25_p::g_S_9_21_U() {
    RT_FN("S__25_p.S_9_21_U_get");
    if ((({ bool _t17895 = (((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_5_21_3__id))); _t17895 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) > 1.0)) : _t17895; }) || ((!(((double)(this->f_S__60_g)) == ((double)(g::SV.C_S_5_21_3__id)))) && (((double)(C_S_8G::sg_S__2c_P())) > ((double)(this->f_S__60_r)))))) {
        return 0.0;
    }
    return this->f_S_1_27_;
    return 0.0;
}
double C_S__25_p::sm_S__2b__2b_(double p0) {
    double l_param1 = p0;
    RT_FN("S__25_p.S__2b__2b_");
    return (1.0 * rt::m_pow((rt::m_pow(C_S__26_c::sm_S_2_21__26_(), (2.0 * ((1.0 / rt::m_max2(3.0, ((double)(C_S_8G::sg_S__2c_P()))))))) + rt::m_pow((C_S__26_c::sm_S_57(C_S__26_c::dsm_S_57_0()) * 30.0), (2.0 * ((1.0 / rt::m_max2(3.0, ((double)(C_S_8G::sg_S__2c_P())))))))), 0.4));
    return 0.0;
}
C_S__25_p* C_S__25_p::alloc_() {
    C_S__25_p* o = rt::make<C_S__25_p>();
    return o;
}
rt::Value C_S__25_p::mk_(rt::Value* a, int n) {
    C_S__25_p* o = alloc_();
    o->C_S__25_p::ctor_(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<uint32_t>(a, n, 1, 0u), rt::arg<double>(a, n, 2, NAN), rt::arg<double>(a, n, 3, NAN), rt::arg<rt::Value>(a, n, 4, C_S__25_p::dctor_4()));
    return rt::VO(o);
}
bool C_S__25_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_S__60_r: out = rt::V((double)(f_S__60_r)); return true;
    case NM_S__60_g: out = rt::V((double)(f_S__60_g)); return true;
    case NM_S__3b__21_v: out = rt::VB(f_S__3b__21_v); return true;
    case NM_S__60__22__2c_: out = rt::VB(f_S__60__22__2c_); return true;
    case NM_S_2_21_w: out = f_S_2_21_w; return true;
    case NM_S_1_27_: out = rt::V(f_S_1_27_); return true;
    case NM_S__2d_t: out = rt::V(f_S__2d_t); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25_p::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__60_r: f_S__60_r = rt::touint(v); return true;
    case NM_S__60_g: f_S__60_g = rt::touint(v); return true;
    case NM_S__3b__21_v: f_S__3b__21_v = rt::T(v); return true;
    case NM_S__60__22__2c_: f_S__60__22__2c_ = rt::T(v); return true;
    case NM_S_2_21_w: f_S_2_21_w = rt::slot_string(v); return true;
    case NM_S_1_27_: f_S_1_27_ = rt::tonum(v); return true;
    case NM_S__2d_t: f_S__2d_t = rt::tonum(v); return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__3d__21__26_: out = m_S__3d__21__26_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__25_p::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__25_p::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__25_p::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    case NM_S__60_r: { rt::Value f = rt::V((double)(f_S__60_r)); out = rt::call_value(f, a, n); return true; }
    case NM_S__60_g: { rt::Value f = rt::V((double)(f_S__60_g)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3b__21_v: { rt::Value f = rt::VB(f_S__3b__21_v); out = rt::call_value(f, a, n); return true; }
    case NM_S__60__22__2c_: { rt::Value f = rt::VB(f_S__60__22__2c_); out = rt::call_value(f, a, n); return true; }
    case NM_S_2_21_w: { rt::Value f = f_S_2_21_w; out = rt::call_value(f, a, n); return true; }
    case NM_S_1_27_: { rt::Value f = rt::V(f_S_1_27_); out = rt::call_value(f, a, n); return true; }
    case NM_S__2d_t: { rt::Value f = rt::V(f_S__2d_t); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25_p::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__3d__21__26_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S_9_21_U: return false;
    case NM_S__60_r: return false;
    case NM_S__60_g: return false;
    case NM_S__3b__21_v: return false;
    case NM_S__60__22__2c_: return false;
    case NM_S_2_21_w: return false;
    case NM_S_1_27_: return false;
    case NM_S__2d_t: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25_p::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__25_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25_p__id)); return true;
    case NM_S__3c__21_O: out = g::SV.C_S__25_p__S__3c__21_O; return true;
    case NM_S__20__21_o: out = g::SV.C_S__25_p__S__20__21_o; return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25_p__id = rt::touint(v); return true;
    case NM_S__3c__21_O: g::SV.C_S__25_p__S__3c__21_O = v; return true;
    case NM_S__20__21_o: g::SV.C_S__25_p__S__20__21_o = v; return true;
    default: return false;
    }
}
bool C_S__25_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_(rt::arg<double>(a, n, 0, NAN))); return true;
    default: return false;
    }
}
void C_S__27_k::ctor_() {
    RT_FN("S__27_k.S__27_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17896 = 29.0; this->f_S_6_21_Z = rt::touint_d(_v17896); _v17896; });
    ({ rt::Value _v17897 = rt::trv(rt::VS(g::LS[1025])); this->f_S_1i = rt::slot_string(_v17897); _v17897; });
    ({ rt::Value _v17898 = rt::VS(g::LS[1026]); this->f_S__5e__21__23_ = rt::slot_string(_v17898); _v17898; });
    ({ rt::Value _v17899 = rt::VS(g::LS[4961]); this->f_S__40_1 = rt::slot_string(_v17899); _v17899; });
    ({ double _v17900 = 3e+29; this->f_S__3e__3d_ = _v17900; _v17900; });
    ({ bool _v17901 = true; this->f_S_7_21_9 = _v17901; _v17901; });
    ({ double _v17902 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v17902); _v17902; });
}
rt::Value C_S__27_k::m_S__40__22_() {
    RT_FN("S__27_k.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5314]), C_S__26_c::sm_S_8_21_Z(C_S__27_k::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5315]), rt::dcallv(rt::V((35.0)), rt::N_toString))));
    return rt::NUL;
}
bool C_S__27_k::g_S__2d_6() {
    RT_FN("S__27_k.S__2d_6_get");
    return ({ bool _t17904 = this->C_S__60_6::g_S__2d_6(); _t17904 ? (bool)((({ bool _t17903 = C_S_8G::sm_S__3c_P(g::SV.C_S__27__21__20___id); _t17903 ? _t17903 : (bool)((C_S__26_c::sm_S_3_22__26_(false, false, true) >= 6000000.0)); }))) : _t17904; });
    return false;
}
double C_S__27_k::sm_S__22__21__26_() {
    RT_FN("S__27_k.S__22__21__26_");
    return 10.0;
    return 0.0;
}
C_S__27_k* C_S__27_k::alloc_() {
    C_S__27_k* o = rt::make<C_S__27_k>();
    return o;
}
rt::Value C_S__27_k::mk_(rt::Value* a, int n) {
    C_S__27_k* o = alloc_();
    o->C_S__27_k::ctor_();
    return rt::VO(o);
}
bool C_S__27_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27_k::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__27_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27_k__id)); return true;
    case NM_S__27_D: out = rt::V(g::SV.C_S__27_k__S__27_D); return true;
    case NM_ids: out = g::SV.C_S__27_k__ids; return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27_k__id = rt::touint(v); return true;
    case NM_S__27_D: g::SV.C_S__27_k__S__27_D = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__27_k__ids = v; return true;
    default: return false;
    }
}
bool C_S__27_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__2b__21_::ctor_(int32_t p0, rt::Value p1, double p2, int32_t p3, double p4, double p5) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    double l_param3 = p2;
    int32_t l_param4 = p3;
    double l_param5 = p4;
    double l_param6 = p5;
    rt::Value l_A__loc7_ = rt::NUL;
    RT_FN("S__2b__21_.S__2b__21_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17905 = 24.0; this->f_S_6_21_Z = rt::touint_d(_v17905); _v17905; });
    ({ rt::Value _v17906 = l_param2; this->f_S_1i = rt::slot_string(_v17906); _v17906; });
    ({ int32_t _v17907 = l_param4; this->f_S__5e__3c_ = _v17907; _v17907; });
    ({ double _v17908 = l_param5; this->f_S__23_i = _v17908; _v17908; });
    ({ int32_t _v17910 = ({ int32_t _v17909 = l_param1; this->f_S_8_21__40_ = _v17909; _v17909; }); this->f_S__22__21_U = _v17910; _v17910; });
    ({ rt::Value _v17911 = rt::add(rt::VS(g::LS[5317]), rt::dcallv(rt::V((double)(l_param4)), rt::N_toString)); this->f_S__3f__21__3d_ = rt::slot_string(_v17911); _v17911; });
    ({ rt::Value _v17912 = rt::add(rt::VS(g::LS[5318]), rt::dcallv(rt::V((double)(l_param1)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v17912); _v17912; });
    ({ rt::Value _v17913 = rt::VS(g::LS[5317]); this->f_S__40_1 = rt::slot_string(_v17913); _v17913; });
    ({ double _v17914 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v17914); _v17914; });
    {
        std::vector<rt::Value> _lst17915;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst17915);
        for (const rt::Value& _x17916 : _lst17915) {
            l_A__loc7_ = _x17916;
            if (rt::eq(({ rt::Value _o17917 = l_A__loc7_; C_S__60_6* _p17918 = rt::as_ptr<C_S__60_6>(_o17917); _p17918 ? _p17918->f_S__40_1 : rt::dget(_o17917, NM_S__40_1); }), this->f_S__40_1)) {
                if ((((double)(({ rt::Value _o17919 = l_A__loc7_; C_S__60_6* _p17920 = rt::as_ptr<C_S__60_6>(_o17919); _p17920 ? _p17920->f_S__22__21_U : rt::toint(rt::dget(_o17919, NM_S__22__21_U)); }))) <= 19.0)) {
                    ({ double _v17924 = (this->f_S__3d_A * ((((double)(({ rt::Value _o17922 = (({ rt::Value _t17921 = l_A__loc7_; rt::is_class(_t17921, C_S__2b__21_::CI) ? _t17921 : rt::NUL; })); C_S__2b__21_* _p17923 = rt::as_ptr<C_S__2b__21_>(_o17922); _p17923 ? _p17923->f_S__5e__3c_ : rt::toint(rt::dget(_o17922, NM_S__5e__3c_)); }))) / 100.0) + 1.0)); this->f_S__3d_A = _v17924; _v17924; });
                } else if ((((double)(({ rt::Value _o17925 = l_A__loc7_; C_S__60_6* _p17926 = rt::as_ptr<C_S__60_6>(_o17925); _p17926 ? _p17926->f_S__22__21_U : rt::toint(rt::dget(_o17925, NM_S__22__21_U)); }))) <= 22.0)) {
                    ({ double _v17930 = (this->f_S_0_21__23_ * ((((double)(({ rt::Value _o17928 = (({ rt::Value _t17927 = l_A__loc7_; rt::is_class(_t17927, C_S__2b__21_::CI) ? _t17927 : rt::NUL; })); C_S__2b__21_* _p17929 = rt::as_ptr<C_S__2b__21_>(_o17928); _p17929 ? _p17929->f_S__5e__3c_ : rt::toint(rt::dget(_o17928, NM_S__5e__3c_)); }))) / 100.0) + 1.0)); this->f_S_0_21__23_ = _v17930; _v17930; });
                } else {
                    ({ double _v17934 = (this->f_S__60__21_o * ((((double)(({ rt::Value _o17932 = (({ rt::Value _t17931 = l_A__loc7_; rt::is_class(_t17931, C_S__2b__21_::CI) ? _t17931 : rt::NUL; })); C_S__2b__21_* _p17933 = rt::as_ptr<C_S__2b__21_>(_o17932); _p17933 ? _p17933->f_S__5e__3c_ : rt::toint(rt::dget(_o17932, NM_S__5e__3c_)); }))) / 100.0) + 1.0)); this->f_S__60__21_o = _v17934; _v17934; });
                }
            }
        }
    }
    if ((((double)(this->f_S__22__21_U)) <= 19.0)) {
        ({ double _v17935 = (this->f_S__3d_A * ((((double)(this->f_S__5e__3c_)) / 100.0) + 1.0)); this->f_S__3d_A = _v17935; _v17935; });
    } else if ((((double)(this->f_S__22__21_U)) <= 22.0)) {
        ({ double _v17936 = (this->f_S_0_21__23_ * ((((double)(this->f_S__5e__3c_)) / 100.0) + 1.0)); this->f_S_0_21__23_ = _v17936; _v17936; });
    } else {
        ({ double _v17937 = (this->f_S__60__21_o * ((((double)(this->f_S__5e__3c_)) / 100.0) + 1.0)); this->f_S__60__21_o = _v17937; _v17937; });
    }
    ({ double _v17938 = l_param3; this->f_S__5e__21__5d_ = _v17938; _v17938; });
    ({ double _v17939 = l_param6; this->f_S__3e__3d_ = _v17939; _v17939; });
    if ((((double)(this->f_S__22__21_U)) > 22.0)) {
        ({ double _v17940 = this->f_S__3e__3d_; this->f_S__23__21_m = _v17940; _v17940; });
    } else if ((((double)(this->f_S__22__21_U)) > 19.0)) {
        ({ double _v17941 = this->f_S__3e__3d_; this->f_S__3c_R = _v17941; _v17941; });
    }
    ({ bool _v17942 = true; this->f_S__2b__21_9 = _v17942; _v17942; });
}
rt::Value C_S__2b__21_::m_S__40__22_() {
    double l_A__loc1_ = NAN;
    double l_A__loc5_ = NAN;
    double l_A__loc8_ = NAN;
    double l_A__loc6_ = NAN;
    rt::Value l_A__loc7_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    double l_A__loc3_ = NAN;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__2b__21_.S__40__22_");
    (l_A__loc1_ = 1.0);
    (l_A__loc5_ = 1.0);
    (l_A__loc8_ = 1.0);
    (l_A__loc6_ = C_S__23__21__21_::sm_S__2c__21_E());
    if (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0))) {
        {
            std::vector<rt::Value> _lst17943;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst17943);
            for (const rt::Value& _x17944 : _lst17943) {
                l_A__loc7_ = _x17944;
                if ((rt::eq(({ rt::Value _o17945 = l_A__loc7_; C_S__60_6* _p17946 = rt::as_ptr<C_S__60_6>(_o17945); _p17946 ? _p17946->f_S__40_1 : rt::dget(_o17945, NM_S__40_1); }), this->f_S__40_1) && (((double)(({ rt::Value _o17948 = (({ rt::Value _t17947 = l_A__loc7_; rt::is_class(_t17947, C_S__2b__21_::CI) ? _t17947 : rt::NUL; })); C_S__2b__21_* _p17949 = rt::as_ptr<C_S__2b__21_>(_o17948); _p17949 ? _p17949->f_S_8_21__40_ : rt::toint(rt::dget(_o17948, NM_S_8_21__40_)); }))) <= ((double)(this->f_S_8_21__40_))))) {
                    if ((((double)(({ rt::Value _o17950 = l_A__loc7_; C_S__60_6* _p17951 = rt::as_ptr<C_S__60_6>(_o17950); _p17951 ? _p17951->f_S__22__21_U : rt::toint(rt::dget(_o17950, NM_S__22__21_U)); }))) <= 19.0)) {
                        (l_A__loc1_ = (l_A__loc1_ * (((({ rt::Value _o17953 = (({ rt::Value _t17952 = l_A__loc7_; rt::is_class(_t17952, C_S__2b__21_::CI) ? _t17952 : rt::NUL; })); C_S__2b__21_* _p17954 = rt::as_ptr<C_S__2b__21_>(_o17953); _p17954 ? _p17954->f_S__23_i : rt::tonum(rt::dget(_o17953, NM_S__23_i)); }) * l_A__loc6_) / 100.0) + 1.0)));
                    } else if ((((double)(({ rt::Value _o17955 = l_A__loc7_; C_S__60_6* _p17956 = rt::as_ptr<C_S__60_6>(_o17955); _p17956 ? _p17956->f_S__22__21_U : rt::toint(rt::dget(_o17955, NM_S__22__21_U)); }))) <= 22.0)) {
                        (l_A__loc5_ = (l_A__loc5_ * (((({ rt::Value _o17958 = (({ rt::Value _t17957 = l_A__loc7_; rt::is_class(_t17957, C_S__2b__21_::CI) ? _t17957 : rt::NUL; })); C_S__2b__21_* _p17959 = rt::as_ptr<C_S__2b__21_>(_o17958); _p17959 ? _p17959->f_S__23_i : rt::tonum(rt::dget(_o17958, NM_S__23_i)); }) * l_A__loc6_) / 100.0) + 1.0)));
                    } else {
                        (l_A__loc8_ = (l_A__loc8_ * (((({ rt::Value _o17961 = (({ rt::Value _t17960 = l_A__loc7_; rt::is_class(_t17960, C_S__2b__21_::CI) ? _t17960 : rt::NUL; })); C_S__2b__21_* _p17962 = rt::as_ptr<C_S__2b__21_>(_o17961); _p17962 ? _p17962->f_S__23_i : rt::tonum(rt::dget(_o17961, NM_S__23_i)); }) * l_A__loc6_) / 100.0) + 1.0)));
                    }
                }
            }
        }
    }
    (l_A__loc4_ = rt::slot_string(rt::VS(g::LS[113])));
    if ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7)) {
        if ((((double)(this->f_S__22__21_U)) <= 19.0)) {
            (l_A__loc4_ = rt::slot_string(C_S__26_c::sm_S_6_21_T((((this->f_S__3d_A - 1.0)) * 100.0), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
        } else if ((((double)(this->f_S__22__21_U)) <= 22.0)) {
            (l_A__loc4_ = rt::slot_string(C_S__26_c::sm_S_8_21_Z(((((C_S__23__21__21_::sm_S__23__25_(this->f_S__3d_A, C_S__23__21__21_::dsm_S__23__25__1()) * C_S__23__21__21_::sm_S__23__25_(this->f_S_0_21__23_, 2.0)) - 1.0)) * 100.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
        } else {
            (l_A__loc4_ = rt::slot_string(C_S__26_c::sm_S_8_21_Z((((((C_S__23__21__21_::sm_S__23__25_(this->f_S__3d_A, C_S__23__21__21_::dsm_S__23__25__1()) * C_S__23__21__21_::sm_S__23__25_(this->f_S_0_21__23_, 2.0)) * C_S__23__21__21_::sm_S__23__25_(this->f_S__60__21_o, 3.0)) - 1.0)) * 100.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
        }
    } else if ((((double)(this->f_S__22__21_U)) <= 19.0)) {
        (l_A__loc4_ = rt::slot_string(C_S__26_c::sm_S_6_21_T(((double)(this->f_S__5e__3c_)), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    } else if ((((double)(this->f_S__22__21_U)) <= 22.0)) {
        (l_A__loc4_ = rt::slot_string(C_S__26_c::sm_S_6_21_T(((double)(this->f_S__5e__3c_)), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    } else {
        (l_A__loc4_ = rt::slot_string(C_S__26_c::sm_S_6_21_T(((double)(this->f_S__5e__3c_)), 3.0, C_S__26_c::dsm_S_6_21_T_2())));
    }
    (l_A__loc3_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? ((((l_A__loc1_ - 1.0)) * 100.0) / l_A__loc6_) : this->f_S__23_i));
    (l_A__loc2_ = rt::slot_string(rt::VS(g::LS[113])));
    if ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7)) {
        if ((((double)(this->f_S__22__21_U)) <= 19.0)) {
            (l_A__loc2_ = rt::slot_string(C_S__26_c::sm_S_6_21_T((((l_A__loc1_ - 1.0)) * 100.0), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
        } else if ((((double)(this->f_S__22__21_U)) <= 22.0)) {
            (l_A__loc2_ = rt::slot_string(C_S__26_c::sm_S_8_21_Z(((((C_S__23__21__21_::sm_S__23__25_(l_A__loc1_, C_S__23__21__21_::dsm_S__23__25__1()) * C_S__23__21__21_::sm_S__23__25_(l_A__loc5_, 2.0)) - 1.0)) * 100.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
        } else {
            (l_A__loc2_ = rt::slot_string(C_S__26_c::sm_S_8_21_Z((((((C_S__23__21__21_::sm_S__23__25_(l_A__loc1_, C_S__23__21__21_::dsm_S__23__25__1()) * C_S__23__21__21_::sm_S__23__25_(l_A__loc5_, 2.0)) * C_S__23__21__21_::sm_S__23__25_(l_A__loc8_, 3.0)) - 1.0)) * 100.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
        }
    } else if ((((double)(this->f_S__22__21_U)) <= 19.0)) {
        (l_A__loc2_ = rt::slot_string(C_S__26_c::sm_S_6_21_T((this->f_S__23_i * l_A__loc6_), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    } else if ((((double)(this->f_S__22__21_U)) <= 22.0)) {
        (l_A__loc2_ = rt::slot_string(C_S__26_c::sm_S_6_21_T((this->f_S__23_i * l_A__loc6_), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    } else {
        (l_A__loc2_ = rt::slot_string(C_S__26_c::sm_S_6_21_T((this->f_S__23_i * l_A__loc6_), 3.0, C_S__26_c::dsm_S_6_21_T_2())));
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[5319]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), l_A__loc4_, C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[5320]), ((l_A__loc3_ < 1000000.0) ? rt::dcallv(rt::V(l_A__loc3_), rt::N_toFixed, rt::V(2.0)) : C_S__26_c::sm_S_8_21_Z(l_A__loc3_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::trv(rt::VS(g::LS[394])), C_S__26_c::dsm_S__20__21_C_2()), l_A__loc2_));
    return rt::NUL;
}
rt::Value C_S__2b__21_::m_S__3e__21__2d_() {
    RT_FN("S__2b__21_.S__3e__21__2d_");
    return rt::slot_string(rt::add(rt::VS(g::LS[5321]), this->m_S_9_21_X(this->f_S__22__21_U)));
    return rt::NUL;
}
bool C_S__2b__21_::g_S__2d_6() {
    RT_FN("S__2b__21_.S__2d_6_get");
    return ({ bool _t17970 = ({ bool _t17966 = ({ bool _t17963 = this->C_S__60_6::g_S__2d_6(); _t17963 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 3.0)) : _t17963; }); _t17966 ? (bool)((((double)(({ rt::Value _o17964 = C_S_8G::sm_S_9_3d_(g::SV.C_S__3e__21_O__id); C_S__60__21__3b_* _p17965 = rt::as_ptr<C_S__60__21__3b_>(_o17964); _p17965 ? _p17965->g_S__21_a() : rt::touint(rt::dget(_o17964, NM_S__21_a)); }))) >= this->f_S__5e__21__5d_)) : _t17966; }); _t17970 ? (bool)((({ bool _t17969 = ({ bool _t17968 = (((double)(this->f_S__22__21_U)) <= 19.0); _t17968 ? _t17968 : (bool)(({ bool _t17967 = (((double)(this->f_S__22__21_U)) <= 22.0); _t17967 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 1.0)) : _t17967; })); }); _t17969 ? _t17969 : (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)); }))) : _t17970; });
    return false;
}
C_S__2b__21_* C_S__2b__21_::alloc_() {
    C_S__2b__21_* o = rt::make<C_S__2b__21_>();
    return o;
}
rt::Value C_S__2b__21_::mk_(rt::Value* a, int n) {
    C_S__2b__21_* o = alloc_();
    o->C_S__2b__21_::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<double>(a, n, 2, NAN), rt::arg<int32_t>(a, n, 3, 0), rt::arg<double>(a, n, 4, NAN), rt::arg<double>(a, n, 5, NAN));
    return rt::VO(o);
}
bool C_S__2b__21_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S__3e__23_: out = rt::V(f_S__3e__23_); return true;
    case NM_S__3d_A: out = rt::V(f_S__3d_A); return true;
    case NM_S_0_21__23_: out = rt::V(f_S_0_21__23_); return true;
    case NM_S__60__21_o: out = rt::V(f_S__60__21_o); return true;
    case NM_S_8_21__40_: out = rt::V((double)(f_S_8_21__40_)); return true;
    case NM_S__5e__3c_: out = rt::V((double)(f_S__5e__3c_)); return true;
    case NM_S__23_i: out = rt::V(f_S__23_i); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b__21_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S__3e__23_: f_S__3e__23_ = rt::tonum(v); return true;
    case NM_S__3d_A: f_S__3d_A = rt::tonum(v); return true;
    case NM_S_0_21__23_: f_S_0_21__23_ = rt::tonum(v); return true;
    case NM_S__60__21_o: f_S__60__21_o = rt::tonum(v); return true;
    case NM_S_8_21__40_: f_S_8_21__40_ = rt::toint(v); return true;
    case NM_S__5e__3c_: f_S__5e__3c_ = rt::toint(v); return true;
    case NM_S__23_i: f_S__23_i = rt::tonum(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__23_: { rt::Value f = rt::V(f_S__3e__23_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3d_A: { rt::Value f = rt::V(f_S__3d_A); out = rt::call_value(f, a, n); return true; }
    case NM_S_0_21__23_: { rt::Value f = rt::V(f_S_0_21__23_); out = rt::call_value(f, a, n); return true; }
    case NM_S__60__21_o: { rt::Value f = rt::V(f_S__60__21_o); out = rt::call_value(f, a, n); return true; }
    case NM_S_8_21__40_: { rt::Value f = rt::V((double)(f_S_8_21__40_)); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__3c_: { rt::Value f = rt::V((double)(f_S__5e__3c_)); out = rt::call_value(f, a, n); return true; }
    case NM_S__23_i: { rt::Value f = rt::V(f_S__23_i); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b__21_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__2d_6: return false;
    case NM_S__5e__21__5d_: return false;
    case NM_S__3e__23_: return false;
    case NM_S__3d_A: return false;
    case NM_S_0_21__23_: return false;
    case NM_S__60__21_o: return false;
    case NM_S_8_21__40_: return false;
    case NM_S__5e__3c_: return false;
    case NM_S__23_i: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b__21_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b_n::ctor_() {
    RT_FN("S__2b_n.S__2b_n");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17971 = 553.0; this->f_S_6_21_Z = rt::touint_d(_v17971); _v17971; });
    ({ rt::Value _v17972 = rt::trv(rt::VS(g::LS[3375])); this->f_S_1i = rt::slot_string(_v17972); _v17972; });
    ({ rt::Value _v17973 = rt::VS(g::LS[5322]); this->f_S__5e__21__23_ = rt::slot_string(_v17973); _v17973; });
    ({ double _v17974 = 0.0; this->f_S__3e__3d_ = _v17974; _v17974; });
    ({ bool _v17975 = true; this->f_data = _v17975; _v17975; });
    ({ bool _v17976 = false; this->f_S_3e = _v17976; _v17976; });
}
rt::Value C_S__2b_n::m_S__40__22_() {
    int32_t l_A__loc3_ = 0;
    double l_A__loc1_ = NAN;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__2b_n.S__40__22_");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc1_ = 0.0);
    (l_A__loc2_ = rt::arr_lit({rt::V(107.0), rt::V(106.0), rt::V(105.0), rt::V(109.0), rt::V(108.0)}));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < rt::alen(l_A__loc2_))) {
        (l_A__loc1_ = (l_A__loc1_ + rt::m_floor(((0.5 * C_S__26_c::sm_S__20__21__3b_(rt::toint(rt::arr_at(l_A__loc2_, ((double)(l_A__loc3_)))))) * ((1.0 + C_S__26_c::sm_S__20__21__3b_(rt::toint(rt::arr_at(l_A__loc2_, ((double)(l_A__loc3_)))))))))));
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[5323]), rt::VS(g::LS[5324]), rt::V(l_A__loc1_), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2b_n::g_S_9_21__25_() {
    RT_FN("S__2b_n.S_9_21__25__get");
    return (((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(107.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(106.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(105.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(109.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(108.0))) > 0.0);
    return false;
}
C_S__2b_n* C_S__2b_n::alloc_() {
    C_S__2b_n* o = rt::make<C_S__2b_n>();
    return o;
}
rt::Value C_S__2b_n::mk_(rt::Value* a, int n) {
    C_S__2b_n* o = alloc_();
    o->C_S__2b_n::ctor_();
    return rt::VO(o);
}
bool C_S__2b_n::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b_n::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b_n::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b_n::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b_n::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b_n::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b_n__id)); return true;
    default: return false;
    }
}
bool C_S__2b_n::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b_n__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b_n::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__22_K::ctor_() {
    RT_FN("S__2c__22_K.S__2c__22_K");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17977 = 1203.0; this->f_S_6_21_Z = rt::touint_d(_v17977); _v17977; });
    ({ rt::Value _v17978 = rt::trv(rt::VS(g::LS[5325])); this->f_S_1i = rt::slot_string(_v17978); _v17978; });
    ({ rt::Value _v17979 = rt::VS(g::LS[5326]); this->f_S__5e__21__23_ = rt::slot_string(_v17979); _v17979; });
    ({ double _v17980 = 1e+50; this->f_S__3c_R = _v17980; _v17980; });
    ({ double _v17981 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v17981); _v17981; });
}
rt::Value C_S__2c__22_K::m_S__40__22_() {
    RT_FN("S__2c__22_K.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5327]), C_S__26_c::sm_S_8_21_Z(C_S__2c__22_K::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2c__22_K::g_S__2d_6() {
    RT_FN("S__2c__22_K.S__2d_6_get");
    return ({ bool _t17982 = (((double)(C_S_8G::sg_S__2c_P())) > 0.0); _t17982 ? (bool)(((((double)(C_S_8G::sm_S_0_21__2c_(rt::VS(g::LS[1073])))) + 1.0) > ((double)(C_S_8G::sg_S__2c_P())))) : _t17982; });
    return false;
}
double C_S__2c__22_K::sm_S__3f__21__3c_() {
    RT_FN("S__2c__22_K.S__3f__21__3c_");
    return ((2.0 * ((double)(C_S__26_c::sm_S__3f__26_(C_S__26_c::dsm_S__3f__26__0())))) * rt::m_max2(0.0, ((((double)(C_S_8G::sm_S_0_21__2c_(rt::VS(g::LS[1073])))) + 1.0) - ((double)(C_S_8G::sg_S__2c_P())))));
    return 0.0;
}
C_S__2c__22_K* C_S__2c__22_K::alloc_() {
    C_S__2c__22_K* o = rt::make<C_S__2c__22_K>();
    return o;
}
rt::Value C_S__2c__22_K::mk_(rt::Value* a, int n) {
    C_S__2c__22_K* o = alloc_();
    o->C_S__2c__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__22_K::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__22_K::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__22_K::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__2c__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_K__id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__2d__21_X::ctor_() {
    RT_FN("S__2d__21_X.S__2d__21_X");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17983 = 34.0; this->f_S_6_21_Z = rt::touint_d(_v17983); _v17983; });
    ({ rt::Value _v17984 = rt::trv(rt::VS(g::LS[938])); this->f_S_1i = rt::slot_string(_v17984); _v17984; });
    ({ rt::Value _v17985 = rt::VS(g::LS[939]); this->f_S__5e__21__23_ = rt::slot_string(_v17985); _v17985; });
    ({ rt::Value _v17986 = rt::VS(g::LS[4961]); this->f_S__40_1 = rt::slot_string(_v17986); _v17986; });
    ({ double _v17987 = 6e+56; this->f_S__3e__3d_ = _v17987; _v17987; });
    ({ bool _v17988 = true; this->f_S_7_21_9 = _v17988; _v17988; });
    ({ double _v17989 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v17989); _v17989; });
}
rt::Value C_S__2d__21_X::m_S__40__22_() {
    RT_FN("S__2d__21_X.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5328]), (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[5329])) : rt::VS(g::LS[113])), (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[5330])) : rt::VS(g::LS[113]))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5331]), rt::dcallv(rt::V((10.0)), rt::N_toString), rt::dcallv(rt::V((2.0)), rt::N_toString))));
    return rt::NUL;
}
bool C_S__2d__21_X::g_S__2d_6() {
    RT_FN("S__2d__21_X.S__2d_6_get");
    return ({ bool _t17991 = this->C_S__60_6::g_S__2d_6(); _t17991 ? (bool)((({ bool _t17990 = C_S_8G::sm_S__3c_P(g::SV.C_S__3c__21_a__id); _t17990 ? _t17990 : (bool)((C_S__26_c::sm_S_3_22__26_(false, false, true) >= 30000000.0)); }))) : _t17991; });
    return false;
}
C_S__2d__21_X* C_S__2d__21_X::alloc_() {
    C_S__2d__21_X* o = rt::make<C_S__2d__21_X>();
    return o;
}
rt::Value C_S__2d__21_X::mk_(rt::Value* a, int n) {
    C_S__2d__21_X* o = alloc_();
    o->C_S__2d__21_X::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_X::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__21_X::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__21_X::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__21_X::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__21_X::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__21_X::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_X__id)); return true;
    case NM_S__27_D: out = rt::V(g::SV.C_S__2d__21_X__S__27_D); return true;
    case NM_S_2_40_: out = rt::V(g::SV.C_S__2d__21_X__S_2_40_); return true;
    case NM_ids: out = g::SV.C_S__2d__21_X__ids; return true;
    default: return false;
    }
}
bool C_S__2d__21_X::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_X__id = rt::touint(v); return true;
    case NM_S__27_D: g::SV.C_S__2d__21_X__S__27_D = rt::tonum(v); return true;
    case NM_S_2_40_: g::SV.C_S__2d__21_X__S_2_40_ = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__2d__21_X__ids = v; return true;
    default: return false;
    }
}
bool C_S__2d__21_X::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__21_m::ctor_() {
    RT_FN("S__2d__21_m.S__2d__21_m");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v17992 = 748.0; this->f_S_6_21_Z = rt::touint_d(_v17992); _v17992; });
    ({ rt::Value _v17993 = rt::trv(rt::VS(g::LS[5333])); this->f_S_1i = rt::slot_string(_v17993); _v17993; });
    ({ rt::Value _v17994 = rt::VS(g::LS[5334]); this->f_S__5e__21__23_ = rt::slot_string(_v17994); _v17994; });
    ({ rt::Value _v17995 = rt::trv(rt::VS(g::LS[5335])); this->f_S_7_23_ = rt::slot_string(_v17995); _v17995; });
    ({ rt::Value _v17996 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5235])))); this->f_S_7_23_ = rt::slot_string(_v17996); _v17996; });
    ({ rt::Value _v17997 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5336])))); this->f_S_7_23_ = rt::slot_string(_v17997); _v17997; });
    ({ rt::Value _v17998 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5337])))); this->f_S_7_23_ = rt::slot_string(_v17998); _v17998; });
    ({ rt::Value _v17999 = rt::add(this->f_S_7_23_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5338])))); this->f_S_7_23_ = rt::slot_string(_v17999); _v17999; });
    ({ double _v18000 = 1000000000000000.0; this->f_S__23__21_m = _v18000; _v18000; });
    ({ double _v18001 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v18001); _v18001; });
    ({ bool _v18002 = false; this->f_S_3e = _v18002; _v18002; });
}
rt::Value C_S__2d__21_m::m_S_6r() {
    RT_FN("S__2d__21_m.S_6r");
    (void)(({ rt::Value _o18003 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p18004 = rt::as_ptr<C_S_8G>(_o18003); _p18004 ? _p18004->m_S_1_21_l(rt::toint_d(5.0)) : rt::dcallv(_o18003, NM_S_1_21_l, rt::V(5.0)); }));
    return rt::NUL;
}
bool C_S__2d__21_m::g_S__2d_6() {
    RT_FN("S__2d__21_m.S__2d_6_get");
    return ({ bool _t18006 = ({ bool _t18005 = (((double)(C_S_8G::sg_S__2c_P())) >= 2.0); _t18005 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0))) : _t18005; }); _t18006 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 0.0)) : _t18006; });
    return false;
}
C_S__2d__21_m* C_S__2d__21_m::alloc_() {
    C_S__2d__21_m* o = rt::make<C_S__2d__21_m>();
    return o;
}
rt::Value C_S__2d__21_m::mk_(rt::Value* a, int n) {
    C_S__2d__21_m* o = alloc_();
    o->C_S__2d__21_m::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_m::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__21_m::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__21_m::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__21_m::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__21_m::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__21_m::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_m__id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_m::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_m__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__21_m::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d_r::ctor_() {
    RT_FN("S__2d_r.S__2d_r");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18007 = 2.0; this->f_S_6_21_Z = rt::touint_d(_v18007); _v18007; });
    ({ rt::Value _v18008 = rt::trv(rt::VS(g::LS[4940])); this->f_S_1i = rt::slot_string(_v18008); _v18008; });
    ({ rt::Value _v18009 = rt::VS(g::LS[5339]); this->f_S__5e__21__23_ = rt::slot_string(_v18009); _v18009; });
    ({ rt::Value _v18010 = rt::trv(rt::VS(g::LS[5340])); this->f_S_7_23_ = rt::slot_string(_v18010); _v18010; });
    ({ double _v18011 = 1e+29; this->f_S__3e__3d_ = _v18011; _v18011; });
    ({ double _v18012 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18012); _v18012; });
    ({ bool _v18013 = false; this->f_S_3e = _v18013; _v18013; });
}
rt::Value C_S__2d_r::m_S_6r() {
    RT_FN("S__2d_r.S_6r");
    (void)(({ rt::Value _o18014 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p18015 = rt::as_ptr<C_S_8G>(_o18014); _p18015 ? _p18015->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__60_H__id)) : rt::dcallv(_o18014, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__60_H__id)); }));
    (void)(({ rt::Value _o18016 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p18017 = rt::as_ptr<C_S__20_g>(_o18016); _p18017 ? _p18017->m_S_1M(rt::toint_d(10.0)) : rt::dcallv(_o18016, NM_S_1M, rt::V(10.0)); }));
    return rt::NUL;
}
bool C_S__2d_r::g_S__2d_6() {
    RT_FN("S__2d_r.S__2d_6_get");
    return ({ bool _t18019 = ({ bool _t18018 = this->C_S__60_6::g_S__2d_6(); _t18018 ? (bool)((C_S_8G::sg_S__22__21_0() >= 1000000000.0)) : _t18018; }); _t18019 ? (bool)((!C_S_8G::sm_S__3c_P(g::SV.C_S__60_H__id))) : _t18019; });
    return false;
}
bool C_S__2d_r::g_S__26_8() {
    RT_FN("S__2d_r.S__26_8_get");
    return false;
    return false;
}
C_S__2d_r* C_S__2d_r::alloc_() {
    C_S__2d_r* o = rt::make<C_S__2d_r>();
    return o;
}
rt::Value C_S__2d_r::mk_(rt::Value* a, int n) {
    C_S__2d_r* o = alloc_();
    o->C_S__2d_r::ctor_();
    return rt::VO(o);
}
bool C_S__2d_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d_r::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d_r::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d_r::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d_r__id)); return true;
    case NM_ids: out = g::SV.C_S__2d_r__ids; return true;
    default: return false;
    }
}
bool C_S__2d_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d_r__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2d_r__ids = v; return true;
    default: return false;
    }
}
bool C_S__2d_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_21_P::ctor_() {
    RT_FN("S_0_21_P.S_0_21_P");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18020 = 25.0; this->f_S_6_21_Z = rt::touint_d(_v18020); _v18020; });
    ({ rt::Value _v18021 = rt::trv(rt::VS(g::LS[884])); this->f_S_1i = rt::slot_string(_v18021); _v18021; });
    ({ rt::Value _v18022 = rt::VS(g::LS[885]); this->f_S__5e__21__23_ = rt::slot_string(_v18022); _v18022; });
    ({ rt::Value _v18023 = rt::VS(g::LS[4961]); this->f_S__40_1 = rt::slot_string(_v18023); _v18023; });
    ({ double _v18024 = 2e+20; this->f_S__3e__3d_ = _v18024; _v18024; });
    ({ bool _v18025 = true; this->f_S_7_21_9 = _v18025; _v18025; });
    ({ double _v18026 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v18026); _v18026; });
}
rt::Value C_S_0_21_P::m_S__40__22_() {
    RT_FN("S_0_21_P.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5314]), C_S__26_c::sm_S_8_21_Z(C_S_0_21_P::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5342]), rt::dcallv(rt::V((15.0)), rt::N_toString))));
    return rt::NUL;
}
bool C_S_0_21_P::g_S__2d_6() {
    RT_FN("S_0_21_P.S__2d_6_get");
    return ({ bool _t18028 = this->C_S__60_6::g_S__2d_6(); _t18028 ? (bool)((({ bool _t18027 = C_S_8G::sm_S__3c_P(g::SV.C_S__20_p__id); _t18027 ? _t18027 : (bool)((C_S__26_c::sm_S_3_22__26_(false, false, true) >= 2000000.0)); }))) : _t18028; });
    return false;
}
double C_S_0_21_P::sm_S__22__21__26_() {
    RT_FN("S_0_21_P.S__22__21__26_");
    return 5.0;
    return 0.0;
}
C_S_0_21_P* C_S_0_21_P::alloc_() {
    C_S_0_21_P* o = rt::make<C_S_0_21_P>();
    return o;
}
rt::Value C_S_0_21_P::mk_(rt::Value* a, int n) {
    C_S_0_21_P* o = alloc_();
    o->C_S_0_21_P::ctor_();
    return rt::VO(o);
}
bool C_S_0_21_P::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0_21_P::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0_21_P::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0_21_P::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0_21_P::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S_0_21_P::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21_P__id)); return true;
    case NM_S__27_D: out = rt::V(g::SV.C_S_0_21_P__S__27_D); return true;
    case NM_ids: out = g::SV.C_S_0_21_P__ids; return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_21_P::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21_P__id = rt::touint(v); return true;
    case NM_S__27_D: g::SV.C_S_0_21_P__S__27_D = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S_0_21_P__ids = v; return true;
    default: return false;
    }
}
bool C_S_0_21_P::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S_0f::ctor_() {
    RT_FN("S_0f.S_0f");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18029 = 3.0; this->f_S_6_21_Z = rt::touint_d(_v18029); _v18029; });
    ({ rt::Value _v18030 = rt::trv(rt::VS(g::LS[5344])); this->f_S_1i = rt::slot_string(_v18030); _v18030; });
    ({ rt::Value _v18031 = rt::VS(g::LS[5345]); this->f_S__5e__21__23_ = rt::slot_string(_v18031); _v18031; });
    ({ double _v18032 = 1e+46; this->f_S__3e__3d_ = _v18032; _v18032; });
    ({ double _v18033 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v18033); _v18033; });
    ({ bool _v18034 = false; this->f_S_3e = _v18034; _v18034; });
}
rt::Value C_S_0f::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_0f.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[5346]))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5347]))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5348]))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5349]), C_S__26_c::sm_S_8_21_Z(325.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5350]), C_S__26_c::sm_S_8_21_Z(650.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::slot_string(rt::add(l_A__loc1_, (rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5351]), C_S__26_c::sm_S_8_21_Z(7500.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::NUL;
}
int32_t C_S_0f::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_0f::dm_S_75_2() { return false; }
rt::Value C_S_0f::dm_S_75_3() { return rt::NUL; }
double C_S_0f::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_0f.S_75");
    if ((({ bool _t18035 = (((double)(l_param1)) == 3.0); _t18035 ? _t18035 : (bool)((((double)(l_param1)) == 4.0)); }) || (((double)(l_param1)) == 5.0))) {
        return 10000.0;
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S_0f::m_S_6r() {
    RT_FN("S_0f.S_6r");
    (void)(({ rt::Value _o18036 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p18037 = rt::as_ptr<C_S__20_g>(_o18036); _p18037 ? _p18037->m_S__26__2b_(rt::toint_d(907.0), rt::toint_d(0.0)) : rt::dcallv(_o18036, NM_S__26__2b_, rt::V(907.0), rt::V(0.0)); }));
    (void)(({ rt::Value _o18038 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p18039 = rt::as_ptr<C_S_8G>(_o18038); _p18039 ? _p18039->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__21_Q__id)) : rt::dcallv(_o18038, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__21_Q__id)); }));
    return rt::NUL;
}
bool C_S_0f::g_S__2d_6() {
    RT_FN("S_0f.S__2d_6_get");
    if ((({ bool _t18040 = this->C_S__60_6::g_S__2d_6(); _t18040 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2J__id)) : _t18040; }) && (!C_S_8G::sm_S__3c_P(g::SV.C_S__21_Q__id)))) {
        return true;
    }
    return false;
    return false;
}
bool C_S_0f::g_S_9_21__25_() {
    RT_FN("S_0f.S_9_21__25__get");
    return ({ bool _t18043 = ({ bool _t18042 = ({ bool _t18041 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0); _t18041 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__2b__3f___id, true) >= 650.0)) : _t18041; }); _t18042 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 15.0)), rt::V(7500.0))) : _t18042; }); _t18043 ? (bool)((((double)(C_S_8G::sg_S_8t())) >= 325.0)) : _t18043; });
    return false;
}
C_S_0f* C_S_0f::alloc_() {
    C_S_0f* o = rt::make<C_S_0f>();
    return o;
}
rt::Value C_S_0f::mk_(rt::Value* a, int n) {
    C_S_0f* o = alloc_();
    o->C_S_0f::ctor_();
    return rt::VO(o);
}
bool C_S_0f::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0f::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0f::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_0f::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_0f::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_0f::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0f::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0f::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0f::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0f__id)); return true;
    case NM_S_4_21_D: out = rt::V(g::SV.C_S_0f__S_4_21_D); return true;
    case NM_S_3_21__27_: out = rt::V(g::SV.C_S_0f__S_3_21__27_); return true;
    case NM_S_7m: out = rt::V(g::SV.C_S_0f__S_7m); return true;
    case NM_ids: out = g::SV.C_S_0f__ids; return true;
    default: return false;
    }
}
bool C_S_0f::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0f__id = rt::touint(v); return true;
    case NM_S_4_21_D: g::SV.C_S_0f__S_4_21_D = rt::tonum(v); return true;
    case NM_S_3_21__27_: g::SV.C_S_0f__S_3_21__27_ = rt::tonum(v); return true;
    case NM_S_7m: g::SV.C_S_0f__S_7m = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S_0f__ids = v; return true;
    default: return false;
    }
}
bool C_S_0f::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_21_R::ctor_(rt::Value p0, double p1, double p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_param2 = p1;
    double l_param3 = p2;
    RT_FN("S_1_21_R.S_1_21_R");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18044 = 31.0; this->f_S_6_21_Z = rt::touint_d(_v18044); _v18044; });
    ({ rt::Value _v18045 = l_param1; this->f_S_1i = rt::slot_string(_v18045); _v18045; });
    ({ rt::Value _v18046 = rt::VS(g::LS[1253]); this->f_S__3f__21__3d_ = rt::slot_string(_v18046); _v18046; });
    ({ rt::Value _v18047 = rt::VS(g::LS[5353]); this->f_S__40_1 = rt::slot_string(_v18047); _v18047; });
    ({ double _v18048 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v18048); _v18048; });
    ({ int32_t _v18049 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v18049; _v18049; });
    ({ double _v18050 = (((rt::m_pow(2.0, ((double)(this->f_S__22__21_U))) - 1.0)) * 100.0); this->f_S__3e__23_ = _v18050; _v18050; });
    ({ rt::Value _v18051 = rt::add(rt::VS(g::LS[5354]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v18051); _v18051; });
    ({ double _v18052 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v18052); _v18052; });
    ({ double _v18053 = l_param2; this->f_S__5e__21__5d_ = _v18053; _v18053; });
    ({ double _v18054 = l_param3; this->f_S__3e__3d_ = _v18054; _v18054; });
    ({ bool _v18055 = true; this->f_S__2b__21_9 = _v18055; _v18055; });
}
rt::Value C_S_1_21_R::m_S__40__22_() {
    double l_A__loc1_ = NAN;
    RT_FN("S_1_21_R.S__40__22_");
    (l_A__loc1_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? this->f_S__3e__23_ : 100.0));
    return rt::slot_string(rt::trv(rt::VS(g::LS[5355]), C_S__26_c::sm_S_6_21_T(l_A__loc1_, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S_1_21_R::m_S__3e__21__2d_() {
    RT_FN("S_1_21_R.S__3e__21__2d_");
    return rt::slot_string(rt::add(rt::VS(g::LS[5356]), this->m_S__2b__21__21_(true)));
    return rt::NUL;
}
bool C_S_1_21_R::g_S__2d_6() {
    RT_FN("S_1_21_R.S__2d_6_get");
    return ({ bool _t18056 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t18056 ? (bool)(((C_S__26_c::sm_S_0_23_(rt::toint_d(0.0), true) + C_S__26_c::sm_S_0_23_(rt::toint_d(3.0), true)) >= this->f_S__5e__21__5d_)) : _t18056; });
    return false;
}
C_S_1_21_R* C_S_1_21_R::alloc_() {
    C_S_1_21_R* o = rt::make<C_S_1_21_R>();
    return o;
}
rt::Value C_S_1_21_R::mk_(rt::Value* a, int n) {
    C_S_1_21_R* o = alloc_();
    o->C_S_1_21_R::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN));
    return rt::VO(o);
}
bool C_S_1_21_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S__3e__23_: out = rt::V(f_S__3e__23_); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_1_21_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S__3e__23_: f_S__3e__23_ = rt::tonum(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_1_21_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__23_: { rt::Value f = rt::V(f_S__3e__23_); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_1_21_R::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__2d_6: return false;
    case NM_S__5e__21__5d_: return false;
    case NM_S__3e__23_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_1_21_R::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_R::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_R::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_21__24_::ctor_() {
    RT_FN("S_2_21__24_.S_2_21__24_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ rt::Value _v18057 = rt::trv(rt::VS(g::LS[5357])); this->f_S_1i = rt::slot_string(_v18057); _v18057; });
    ({ rt::Value _v18058 = rt::VS(g::LS[5358]); this->f_S__5e__21__23_ = rt::slot_string(_v18058); _v18058; });
    ({ bool _v18059 = true; this->f_S__25__21__2c_ = _v18059; _v18059; });
}
rt::Value C_S_2_21__24_::m_S__40__22_() {
    RT_FN("S_2_21__24_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5359]), rt::dcallv(rt::V((1.0)), rt::N_toFixed, rt::V(1.0)), rt::dcallv(rt::V(C_S__20__21_2::sm_S_2_21_W()), rt::N_toFixed, rt::V(1.0))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5360]))));
    return rt::NUL;
}
double C_S_2_21__24_::m_S_6U() {
    RT_FN("S_2_21__24_.S_6U");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(106.0)) + 1.0);
    return 0.0;
}
rt::Value C_S_2_21__24_::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S_2_21__24_.S_6r");
    (l_A__loc1_ = rt::toint_d(106.0));
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc1_))), rt::V(1.0))));
    ({ rt::Value _v18060 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V((double)(l_A__loc1_)), _v18060); });
    ({ bool _v18061 = false; this->f_S__3c__21_7 = _v18061; _v18061; });
    ({ rt::Value _o18062 = g::SV.C_S_8G__S_5_21_V; rt::Value _i18063 = rt::V(13.0); rt::Value _v18064 = rt::V((rt::tonum(rt::idx_get(_o18062, _i18063)) - 1.0)); rt::idx_set(_o18062, _i18063, _v18064); _v18064; });
    return rt::NUL;
}
bool C_S_2_21__24_::g_S__2d_6() {
    RT_FN("S_2_21__24_.S__2d_6_get");
    return false;
    return false;
}
C_S_2_21__24_* C_S_2_21__24_::alloc_() {
    C_S_2_21__24_* o = rt::make<C_S_2_21__24_>();
    return o;
}
rt::Value C_S_2_21__24_::mk_(rt::Value* a, int n) {
    C_S_2_21__24_* o = alloc_();
    o->C_S_2_21__24_::ctor_();
    return rt::VO(o);
}
bool C_S_2_21__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6U: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2_21__24_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2_21__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6U: out = rt::V(m_S_6U()); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2_21__24_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6U: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2_21__24_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21__24___id)); return true;
    default: return false;
    }
}
bool C_S_2_21__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_21__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2U::ctor_() {
    RT_FN("S_2U.S_2U");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ rt::Value _v18065 = rt::trv(rt::VS(g::LS[5361])); this->f_S_1i = rt::slot_string(_v18065); _v18065; });
    ({ rt::Value _v18066 = rt::VS(g::LS[5362]); this->f_S__5e__21__23_ = rt::slot_string(_v18066); _v18066; });
    ({ bool _v18067 = true; this->f_S__25__21__2c_ = _v18067; _v18067; });
}
rt::Value C_S_2U::m_S__40__22_() {
    RT_FN("S_2U.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5363]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5360]))));
    return rt::NUL;
}
double C_S_2U::m_S_6U() {
    RT_FN("S_2U.S_6U");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(107.0)) + 1.0);
    return 0.0;
}
rt::Value C_S_2U::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S_2U.S_6r");
    (l_A__loc1_ = rt::toint_d(107.0));
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc1_))), rt::V(1.0))));
    ({ rt::Value _v18068 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V((double)(l_A__loc1_)), _v18068); });
    ({ bool _v18069 = false; this->f_S__3c__21_7 = _v18069; _v18069; });
    ({ rt::Value _o18070 = g::SV.C_S_8G__S_5_21_V; rt::Value _i18071 = rt::V(13.0); rt::Value _v18072 = rt::V((rt::tonum(rt::idx_get(_o18070, _i18071)) - 1.0)); rt::idx_set(_o18070, _i18071, _v18072); _v18072; });
    return rt::NUL;
}
bool C_S_2U::g_S__2d_6() {
    RT_FN("S_2U.S__2d_6_get");
    return false;
    return false;
}
C_S_2U* C_S_2U::alloc_() {
    C_S_2U* o = rt::make<C_S_2U>();
    return o;
}
rt::Value C_S_2U::mk_(rt::Value* a, int n) {
    C_S_2U* o = alloc_();
    o->C_S_2U::ctor_();
    return rt::VO(o);
}
bool C_S_2U::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6U: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2U::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2U::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6U: out = rt::V(m_S_6U()); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2U::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6U: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2U::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2U::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2U__id)); return true;
    default: return false;
    }
}
bool C_S_2U::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2U__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2U::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3o::ctor_() {
    RT_FN("S_3o.S_3o");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18073 = 38.0; this->f_S_6_21_Z = rt::touint_d(_v18073); _v18073; });
    ({ rt::Value _v18074 = rt::trv(rt::VS(g::LS[5364])); this->f_S_1i = rt::slot_string(_v18074); _v18074; });
    ({ rt::Value _v18075 = rt::VS(g::LS[5365]); this->f_S__5e__21__23_ = rt::slot_string(_v18075); _v18075; });
    ({ rt::Value _v18076 = rt::trv(rt::VS(g::LS[5366])); this->f_S_7_23_ = rt::slot_string(_v18076); _v18076; });
    ({ double _v18077 = 1e+45; this->f_S__3e__3d_ = _v18077; _v18077; });
    ({ double _v18078 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18078); _v18078; });
}
bool C_S_3o::g_S__2d_6() {
    RT_FN("S_3o.S__2d_6_get");
    return ({ bool _t18080 = (((double)(C_S_8G::sg_S_8_21_H())) < 3.0); _t18080 ? (bool)((({ bool _t18079 = C_S_8G::sm_S__3c_P(g::SV.C_S__5d_m__id); _t18079 ? _t18079 : (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__21_Q__id)); }))) : _t18080; });
    return false;
}
C_S_3o* C_S_3o::alloc_() {
    C_S_3o* o = rt::make<C_S_3o>();
    return o;
}
rt::Value C_S_3o::mk_(rt::Value* a, int n) {
    C_S_3o* o = alloc_();
    o->C_S_3o::ctor_();
    return rt::VO(o);
}
bool C_S_3o::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_3o::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_3o::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_3o::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_3o::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3o::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3o__id)); return true;
    case NM_ids: out = g::SV.C_S_3o__ids; return true;
    default: return false;
    }
}
bool C_S_3o::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3o__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_3o__ids = v; return true;
    default: return false;
    }
}
bool C_S_3o::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_21_U::ctor_(rt::Value p0, double p1, double p2, double p3) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_param2 = p1;
    double l_param3 = p2;
    double l_param4 = p3;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S_4_21_U.S_4_21_U");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18081 = 478.0; this->f_S_6_21_Z = rt::touint_d(_v18081); _v18081; });
    ({ rt::Value _v18082 = l_param1; this->f_S_1i = rt::slot_string(_v18082); _v18082; });
    ({ rt::Value _v18083 = rt::VS(g::LS[1274]); this->f_S__3f__21__3d_ = rt::slot_string(_v18083); _v18083; });
    ({ rt::Value _v18084 = rt::VS(g::LS[1274]); this->f_S__40_1 = rt::slot_string(_v18084); _v18084; });
    ({ double _v18085 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18085); _v18085; });
    ({ int32_t _v18086 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v18086; _v18086; });
    ({ rt::Value _v18087 = rt::add(rt::VS(g::LS[1274]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v18087); _v18087; });
    ({ double _v18088 = l_param2; this->f_S__5e__21__5d_ = _v18088; _v18088; });
    ({ double _v18089 = l_param3; this->f_S__3e__23_ = _v18089; _v18089; });
    ({ double _v18090 = 2.0; this->f_S__3d_A = rt::toint_d(_v18090); _v18090; });
    {
        std::vector<rt::Value> _lst18091;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst18091);
        for (const rt::Value& _x18092 : _lst18091) {
            l_A__loc5_ = _x18092;
            if (rt::is_class(l_A__loc5_, C_S_4_21_U::CI)) {
                ({ double _v18096 = (((double)(this->f_S__3d_A)) + ({ rt::Value _o18094 = (({ rt::Value _t18093 = l_A__loc5_; rt::is_class(_t18093, C_S_4_21_U::CI) ? _t18093 : rt::NUL; })); C_S_4_21_U* _p18095 = rt::as_ptr<C_S_4_21_U>(_o18094); _p18095 ? _p18095->f_S__3e__23_ : rt::tonum(rt::dget(_o18094, NM_S__3e__23_)); })); this->f_S__3d_A = rt::toint_d(_v18096); _v18096; });
            }
        }
    }
    ({ double _v18097 = (((double)(this->f_S__3d_A)) + this->f_S__3e__23_); this->f_S__3d_A = rt::toint_d(_v18097); _v18097; });
    ({ double _v18098 = l_param4; this->f_S__3e__3d_ = _v18098; _v18098; });
    ({ bool _v18099 = true; this->f_S__2b__21_9 = _v18099; _v18099; });
}
rt::Value C_S_4_21_U::m_S__40__22_() {
    RT_FN("S_4_21_U.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5368]), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S__3d_A)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_4_21_U::g_S__2d_6() {
    RT_FN("S_4_21_U.S__2d_6_get");
    return ({ bool _t18102 = ({ bool _t18101 = ({ bool _t18100 = this->C_S__60_6::g_S__2d_6(); _t18100 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t18100; }); _t18101 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_5_26___id)) : _t18101; }); _t18102 ? (bool)((C_S_8G::sg_S__22__21_0() >= this->f_S__5e__21__5d_)) : _t18102; });
    return false;
}
C_S_4_21_U* C_S_4_21_U::alloc_() {
    C_S_4_21_U* o = rt::make<C_S_4_21_U>();
    return o;
}
rt::Value C_S_4_21_U::mk_(rt::Value* a, int n) {
    C_S_4_21_U* o = alloc_();
    o->C_S_4_21_U::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN), rt::arg<double>(a, n, 3, NAN));
    return rt::VO(o);
}
bool C_S_4_21_U::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S__3d_A: out = rt::V((double)(f_S__3d_A)); return true;
    case NM_S__3e__23_: out = rt::V(f_S__3e__23_); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_21_U::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S__3d_A: f_S__3d_A = rt::toint(v); return true;
    case NM_S__3e__23_: f_S__3e__23_ = rt::tonum(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_21_U::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3d_A: { rt::Value f = rt::V((double)(f_S__3d_A)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__23_: { rt::Value f = rt::V(f_S__3e__23_); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_21_U::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__5e__21__5d_: return false;
    case NM_S__3d_A: return false;
    case NM_S__3e__23_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_21_U::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_21_U::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_21_U::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_21_U::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_21_J::ctor_() {
    RT_FN("S_5_21_J.S_5_21_J");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18103 = 476.0; this->f_S_6_21_Z = rt::touint_d(_v18103); _v18103; });
    ({ rt::Value _v18104 = rt::trv(rt::VS(g::LS[1127])); this->f_S_1i = rt::slot_string(_v18104); _v18104; });
    ({ rt::Value _v18105 = rt::VS(g::LS[1128]); this->f_S__5e__21__23_ = rt::slot_string(_v18105); _v18105; });
    ({ rt::Value _v18106 = rt::VS(g::LS[4961]); this->f_S__40_1 = rt::slot_string(_v18106); _v18106; });
    ({ double _v18107 = 7e+65; this->f_S__3e__3d_ = _v18107; _v18107; });
    ({ bool _v18108 = true; this->f_S_7_21_9 = _v18108; _v18108; });
    ({ double _v18109 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v18109); _v18109; });
}
rt::Value C_S_5_21_J::m_S__40__22_() {
    RT_FN("S_5_21_J.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5369]), (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[5370])) : rt::VS(g::LS[113]))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5331]), rt::dcallv(rt::V((10.0)), rt::N_toString), rt::dcallv(rt::V((2.0)), rt::N_toString))));
    return rt::NUL;
}
bool C_S_5_21_J::g_S__2d_6() {
    RT_FN("S_5_21_J.S__2d_6_get");
    return ({ bool _t18111 = this->C_S__60_6::g_S__2d_6(); _t18111 ? (bool)((({ bool _t18110 = C_S_8G::sm_S__3c_P(g::SV.C_S_4_5e___id); _t18110 ? _t18110 : (bool)((C_S__26_c::sm_S_3_22__26_(false, false, true) >= 50000000.0)); }))) : _t18111; });
    return false;
}
C_S_5_21_J* C_S_5_21_J::alloc_() {
    C_S_5_21_J* o = rt::make<C_S_5_21_J>();
    return o;
}
rt::Value C_S_5_21_J::mk_(rt::Value* a, int n) {
    C_S_5_21_J* o = alloc_();
    o->C_S_5_21_J::ctor_();
    return rt::VO(o);
}
bool C_S_5_21_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_21_J::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_21_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_21_J::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_21_J::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_21_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_21_J__id)); return true;
    case NM_S__27_D: out = rt::V(g::SV.C_S_5_21_J__S__27_D); return true;
    case NM_S_2_40_: out = rt::V(g::SV.C_S_5_21_J__S_2_40_); return true;
    default: return false;
    }
}
bool C_S_5_21_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_21_J__id = rt::touint(v); return true;
    case NM_S__27_D: g::SV.C_S_5_21_J__S__27_D = rt::tonum(v); return true;
    case NM_S_2_40_: g::SV.C_S_5_21_J__S_2_40_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_5_21_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_22__2d_::ctor_() {
    RT_FN("S_5_22__2d_.S_5_22__2d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18112 = 1004.0; this->f_S_6_21_Z = rt::touint_d(_v18112); _v18112; });
    ({ rt::Value _v18113 = rt::trv(rt::VS(g::LS[5371])); this->f_S_1i = rt::slot_string(_v18113); _v18113; });
    ({ rt::Value _v18114 = rt::VS(g::LS[5372]); this->f_S__5e__21__23_ = rt::slot_string(_v18114); _v18114; });
    ({ double _v18115 = 1.0; this->f_S__3e__3d_ = _v18115; _v18115; });
    ({ double _v18116 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18116); _v18116; });
    ({ bool _v18117 = true; this->f_S_3e = _v18117; _v18117; });
}
rt::Value C_S_5_22__2d_::m_S__40__22_() {
    RT_FN("S_5_22__2d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5373])));
    return rt::NUL;
}
rt::Value C_S_5_22__2d_::m_S_6r() {
    RT_FN("S_5_22__2d_.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__20__22_8__id) && (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0))) {
        ({ uint32_t _v18120 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__3b__21__2b___id); rt::Value _o18118 = C_S_8G::sm_S__23_N(g::SV.C_S__3b__21__2b___id); C_S_84* _p18119 = rt::as_ptr<C_S_84>(_o18118); if (_p18119) _p18119->f_S_6_21_A = ((int32_t)(_v18120)); else rt::dset(_o18118, NM_S_6_21_A, rt::V((double)(_v18120))); _v18120; });
    }
    if ((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__5e__22__2d___id) && (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0))) {
        ({ uint32_t _v18123 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_9_21_n__id); rt::Value _o18121 = C_S_8G::sm_S__23_N(g::SV.C_S_9_21_n__id); C_S_84* _p18122 = rt::as_ptr<C_S_84>(_o18121); if (_p18122) _p18122->f_S_6_21_A = ((int32_t)(_v18123)); else rt::dset(_o18121, NM_S_6_21_A, rt::V((double)(_v18123))); _v18123; });
    }
    return rt::NUL;
}
bool C_S_5_22__2d_::g_S__2d_6() {
    RT_FN("S_5_22__2d_.S__2d_6_get");
    return ({ bool _t18128 = ({ bool _t18127 = ({ bool _t18126 = ({ bool _t18125 = ({ bool _t18124 = (((double)(C_S_8G::sm_S__27__21_M(rt::VS(g::LS[5374])))) > 0.0); _t18124 ? _t18124 : (bool)((((double)(C_S_8G::sm_S__27__21_M(rt::VS(g::LS[5375])))) > 0.0)); }); _t18125 ? _t18125 : (bool)((((double)(C_S_8G::sm_S__27__21_M(rt::VS(g::LS[5376])))) > 0.0)); }); _t18126 ? _t18126 : (bool)((((double)(C_S_8G::sm_S__27__21_M(rt::VS(g::LS[5377])))) > 0.0)); }); _t18127 ? _t18127 : (bool)((((double)(C_S_8G::sm_S__27__21_M(rt::VS(g::LS[5378])))) > 0.0)); }); _t18128 ? _t18128 : (bool)((((double)(C_S_8G::sm_S__27__21_M(rt::VS(g::LS[5379])))) > 0.0)); });
    return false;
}
C_S_5_22__2d_* C_S_5_22__2d_::alloc_() {
    C_S_5_22__2d_* o = rt::make<C_S_5_22__2d_>();
    return o;
}
rt::Value C_S_5_22__2d_::mk_(rt::Value* a, int n) {
    C_S_5_22__2d_* o = alloc_();
    o->C_S_5_22__2d_::ctor_();
    return rt::VO(o);
}
bool C_S_5_22__2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_22__2d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_22__2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_22__2d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_22__2d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_22__2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22__2d___id)); return true;
    default: return false;
    }
}
bool C_S_5_22__2d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22__2d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_22__2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_26_::ctor_() {
    RT_FN("S_5_26_.S_5_26_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18129 = 20.0; this->f_S_6_21_Z = rt::touint_d(_v18129); _v18129; });
    ({ rt::Value _v18130 = rt::trv(rt::VS(g::LS[5380])); this->f_S_1i = rt::slot_string(_v18130); _v18130; });
    ({ rt::Value _v18131 = rt::VS(g::LS[5381]); this->f_S__5e__21__23_ = rt::slot_string(_v18131); _v18131; });
    ({ double _v18132 = 1.0; this->f_S__3e__3d_ = _v18132; _v18132; });
    ({ double _v18133 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18133); _v18133; });
    ({ bool _v18134 = true; this->f_S_3e = _v18134; _v18134; });
}
rt::Value C_S_5_26_::m_S__40__22_() {
    RT_FN("S_5_26_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5382]), C_S__26_c::sm_S_8_21_Z(C_S__23__21__21_::sm_S_6_21_Y(C_S__23__21__21_::dsm_S_6_21_Y_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_5_26_::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_5_26_::g_S__2d_6() {
    RT_FN("S_5_26_.S__2d_6_get");
    return (C_S_8G::sg_S__22__21_0() > 0.0);
    return false;
}
double C_S_5_26_::sm_S__2c_J() {
    RT_FN("S_5_26_.S__2c_J");
    return rt::m_floor(((C_S__23__21__21_::sm_S__5b__24_() * 0.5) * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sg_S__22__21_0())), 0.9)));
    return 0.0;
}
C_S_5_26_* C_S_5_26_::alloc_() {
    C_S_5_26_* o = rt::make<C_S_5_26_>();
    return o;
}
rt::Value C_S_5_26_::mk_(rt::Value* a, int n) {
    C_S_5_26_* o = alloc_();
    o->C_S_5_26_::ctor_();
    return rt::VO(o);
}
bool C_S_5_26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_26_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_26_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_26_::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    default: return false;
    }
}
bool C_S_5_26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_26___id)); return true;
    case NM_ids: out = g::SV.C_S_5_26___ids; return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_26___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_5_26___ids = v; return true;
    default: return false;
    }
}
bool C_S_5_26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    default: return false;
    }
}
void C_S_5Z::ctor_() {
    RT_FN("S_5Z.S_5Z");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18135 = 6.0; this->f_S_6_21_Z = rt::touint_d(_v18135); _v18135; });
    ({ rt::Value _v18136 = rt::trv(rt::VS(g::LS[5384])); this->f_S_1i = rt::slot_string(_v18136); _v18136; });
    ({ rt::Value _v18137 = rt::VS(g::LS[5385]); this->f_S__5e__21__23_ = rt::slot_string(_v18137); _v18137; });
    ({ rt::Value _v18138 = rt::trv(rt::VS(g::LS[5386])); this->f_S_7_23_ = rt::slot_string(_v18138); _v18138; });
    ({ double _v18139 = 1e+30; this->f_S__3e__3d_ = _v18139; _v18139; });
    ({ double _v18140 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18140); _v18140; });
    ({ bool _v18141 = false; this->f_S_3e = _v18141; _v18141; });
}
int32_t C_S_5Z::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_5Z::dm_S_75_2() { return false; }
rt::Value C_S_5Z::dm_S_75_3() { return rt::NUL; }
double C_S_5Z::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_5Z.S_75");
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 4.0))) {
        return 25000.0;
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S_5Z::m_S_6r() {
    RT_FN("S_5Z.S_6r");
    (void)(({ rt::Value _o18142 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p18143 = rt::as_ptr<C_S__20_g>(_o18142); _p18143 ? _p18143->m_S__26__2b_(rt::toint_d(904.0), rt::toint_d(0.0)) : rt::dcallv(_o18142, NM_S__26__2b_, rt::V(904.0), rt::V(0.0)); }));
    (void)(({ rt::Value _o18144 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p18145 = rt::as_ptr<C_S_8G>(_o18144); _p18145 ? _p18145->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S_9N__id)) : rt::dcallv(_o18144, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S_9N__id)); }));
    return rt::NUL;
}
bool C_S_5Z::g_S__2d_6() {
    RT_FN("S_5Z.S__2d_6_get");
    return ({ bool _t18148 = ({ bool _t18147 = ({ bool _t18146 = this->C_S__60_6::g_S__2d_6(); _t18146 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9_21__5d___id)) : _t18146; }); _t18147 ? (bool)(rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 1.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 1.0)), rt::V(129600.0))) : _t18147; }); _t18148 ? (bool)((!C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id))) : _t18148; });
    return false;
}
C_S_5Z* C_S_5Z::alloc_() {
    C_S_5Z* o = rt::make<C_S_5Z>();
    return o;
}
rt::Value C_S_5Z::mk_(rt::Value* a, int n) {
    C_S_5Z* o = alloc_();
    o->C_S_5Z::ctor_();
    return rt::VO(o);
}
bool C_S_5Z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5Z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5Z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_5Z::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_5Z::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_5Z::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5Z::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5Z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5Z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5Z__id)); return true;
    case NM_ids: out = g::SV.C_S_5Z__ids; return true;
    default: return false;
    }
}
bool C_S_5Z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5Z__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_5Z__ids = v; return true;
    default: return false;
    }
}
bool C_S_5Z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_21_i::ctor_() {
    RT_FN("S_6_21_i.S_6_21_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18149 = 732.0; this->f_S_6_21_Z = rt::touint_d(_v18149); _v18149; });
    ({ rt::Value _v18150 = rt::trv(rt::VS(g::LS[5388])); this->f_S_1i = rt::slot_string(_v18150); _v18150; });
    ({ rt::Value _v18151 = rt::VS(g::LS[5389]); this->f_S__5e__21__23_ = rt::slot_string(_v18151); _v18151; });
    ({ rt::Value _v18152 = rt::trv(rt::VS(g::LS[5390])); this->f_S_7_23_ = rt::slot_string(_v18152); _v18152; });
    ({ double _v18153 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v18153); _v18153; });
    ({ bool _v18154 = false; this->f_S_3e = _v18154; _v18154; });
}
rt::Value C_S_6_21_i::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S_6_21_i.S_6r");
    ({ bool _v18155 = false; this->f_S__3c__21_7 = _v18155; _v18155; });
    (l_A__loc2_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)) - 1.0));
    ({ rt::Value _v18156 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(13.0), _v18156); });
    return rt::NUL;
}
bool C_S_6_21_i::g_S__2d_6() {
    RT_FN("S_6_21_i.S__2d_6_get");
    return ({ bool _t18157 = (((double)(g::SV.C_S__23__21__21___S_3_21_j)) == (-1.0)); _t18157 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_4_21_h__id)) : _t18157; });
    return false;
}
bool C_S_6_21_i::g_S__26_8() {
    RT_FN("S_6_21_i.S__26_8_get");
    return false;
    return false;
}
C_S_6_21_i* C_S_6_21_i::alloc_() {
    C_S_6_21_i* o = rt::make<C_S_6_21_i>();
    return o;
}
rt::Value C_S_6_21_i::mk_(rt::Value* a, int n) {
    C_S_6_21_i* o = alloc_();
    o->C_S_6_21_i::ctor_();
    return rt::VO(o);
}
bool C_S_6_21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_21_i::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_21_i::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21_i__id)); return true;
    default: return false;
    }
}
bool C_S_6_21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_22__2d_::ctor_() {
    RT_FN("S_6_22__2d_.S_6_22__2d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18158 = 1002.0; this->f_S_6_21_Z = rt::touint_d(_v18158); _v18158; });
    ({ rt::Value _v18159 = rt::trv(rt::VS(g::LS[1069])); this->f_S_1i = rt::slot_string(_v18159); _v18159; });
    ({ rt::Value _v18160 = rt::VS(g::LS[1070]); this->f_S__5e__21__23_ = rt::slot_string(_v18160); _v18160; });
    ({ rt::Value _v18161 = rt::VS(g::LS[4961]); this->f_S__40_1 = rt::slot_string(_v18161); _v18161; });
    ({ double _v18162 = 3.2e+33; this->f_S__3c_R = _v18162; _v18162; });
    ({ bool _v18163 = true; this->f_S_7_21_9 = _v18163; _v18163; });
    ({ double _v18164 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v18164); _v18164; });
}
rt::Value C_S_6_22__2d_::m_S__40__22_() {
    RT_FN("S_6_22__2d_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5391])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5392]), rt::dcallv(rt::V((10.0)), rt::N_toString), C_S__26_c::sm_S_8_21_Z(C_S_6_22__2d_::sm_S__3e__21_n(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
bool C_S_6_22__2d_::g_S__2d_6() {
    RT_FN("S_6_22__2d_.S__2d_6_get");
    return ({ bool _t18167 = ({ bool _t18165 = this->C_S__60_6::g_S__2d_6(); _t18165 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 1.0)) : _t18165; }); _t18167 ? (bool)((({ bool _t18166 = C_S_8G::sm_S__3c_P(g::SV.C_S_0h__id); _t18166 ? _t18166 : (bool)((C_S__26_c::sm_S_3_22__26_(false, false, true) >= 150000000.0)); }))) : _t18167; });
    return false;
}
double C_S_6_22__2d_::sm_S__3e__21_n() {
    RT_FN("S_6_22__2d_.S__3e__21_n");
    return (500.0 * rt::m_log((1.0 + (C_S__26_c::sm_S_57(true) * 30.0))));
    return 0.0;
}
C_S_6_22__2d_* C_S_6_22__2d_::alloc_() {
    C_S_6_22__2d_* o = rt::make<C_S_6_22__2d_>();
    return o;
}
rt::Value C_S_6_22__2d_::mk_(rt::Value* a, int n) {
    C_S_6_22__2d_* o = alloc_();
    o->C_S_6_22__2d_::ctor_();
    return rt::VO(o);
}
bool C_S_6_22__2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_22__2d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_22__2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_22__2d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_22__2d_::smeth_(int id) {
    switch (id) {
    case NM_S__3e__21_n: return true;
    default: return false;
    }
}
bool C_S_6_22__2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22__2d___id)); return true;
    case NM_S__27_D: out = rt::V(g::SV.C_S_6_22__2d___S__27_D); return true;
    case NM_S__3e__21_n: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_22__2d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22__2d___id = rt::touint(v); return true;
    case NM_S__27_D: g::SV.C_S_6_22__2d___S__27_D = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_6_22__2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_n: out = rt::V(sm_S__3e__21_n()); return true;
    default: return false;
    }
}
void C_S_7_21__3f_::ctor_() {
    RT_FN("S_7_21__3f_.S_7_21__3f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18168 = 648.0; this->f_S_6_21_Z = rt::touint_d(_v18168); _v18168; });
    ({ rt::Value _v18169 = rt::trv(rt::VS(g::LS[5393])); this->f_S_1i = rt::slot_string(_v18169); _v18169; });
    ({ rt::Value _v18170 = rt::VS(g::LS[5394]); this->f_S__5e__21__23_ = rt::slot_string(_v18170); _v18170; });
    ({ double _v18171 = 0.0; this->f_S__3e__3d_ = _v18171; _v18171; });
    ({ bool _v18172 = true; this->f_data = _v18172; _v18172; });
}
rt::Value C_S_7_21__3f_::m_S__40__22_() {
    RT_FN("S_7_21__3f_.S__40__22_");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
bool C_S_7_21__3f_::g_S_9_21__25_() {
    RT_FN("S_7_21__3f_.S_9_21__25__get");
    return (((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(116.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(115.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(114.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(118.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(117.0))) > 0.0);
    return false;
}
C_S_7_21__3f_* C_S_7_21__3f_::alloc_() {
    C_S_7_21__3f_* o = rt::make<C_S_7_21__3f_>();
    return o;
}
rt::Value C_S_7_21__3f_::mk_(rt::Value* a, int n) {
    C_S_7_21__3f_* o = alloc_();
    o->C_S_7_21__3f_::ctor_();
    return rt::VO(o);
}
bool C_S_7_21__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7_21__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7_21__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7_21__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7_21__3f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_21__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21__3f___id)); return true;
    default: return false;
    }
}
bool C_S_7_21__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_21__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_22_9::ctor_() {
    RT_FN("S_7_22_9.S_7_22_9");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18173 = 1204.0; this->f_S_6_21_Z = rt::touint_d(_v18173); _v18173; });
    ({ rt::Value _v18174 = rt::trv(rt::VS(g::LS[5395])); this->f_S_1i = rt::slot_string(_v18174); _v18174; });
    ({ rt::Value _v18175 = rt::VS(g::LS[5254]); this->f_S__5e__21__23_ = rt::slot_string(_v18175); _v18175; });
    ({ rt::Value _v18176 = rt::VS(g::LS[5254]); this->f_S__40_1 = rt::slot_string(_v18176); _v18176; });
    ({ double _v18177 = 1.0; this->f_S__3e__3d_ = _v18177; _v18177; });
    ({ double _v18178 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18178); _v18178; });
    ({ bool _v18179 = true; this->f_S_3e = _v18179; _v18179; });
}
rt::Value C_S_7_22_9::m_S_1_21_P() {
    RT_FN("S_7_22_9.S_1_21_P");
    return rt::slot_string(rt::add(rt::add(rt::add(this->f_S_1i, rt::VS(g::LS[5396])), C_S__26_c::sm_S_8_21_Z(rt::m_min2(99.0, ((double)(C_S_8G::sg_S_8_21_H()))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[931])));
    return rt::NUL;
}
rt::Value C_S_7_22_9::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_7_22_9.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::NUL));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[5256]))));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 43.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5397]), C_S__26_c::sm_S_8_21_Z(C_S_7_22_9::sm_S__5d_e(C_S_7_22_9::dsm_S__5d_e_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 46.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[645]), C_S__26_c::sm_S_6_21_T(C_S_7_22_9::sm_S__5d__22__2b_(C_S_7_22_9::dsm_S__5d__22__2b__0()), 2.0, C_S__26_c::dsm_S_6_21_T_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 50.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5398]), C_S__26_c::sm_S_8_21_Z(C_S_7_22_9::sm_S__23__21_Y(C_S_7_22_9::dsm_S__23__21_Y_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 58.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5399]), C_S__26_c::sm_S_8_21_Z(C_S_7_22_9::sm_S_5_22_0(C_S_7_22_9::dsm_S_5_22_0_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 70.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5400]), C_S__26_c::sm_S_8_21_Z(C_S_7_22_9::sm_S_6_22_4(C_S_7_22_9::dsm_S_6_22_4_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 75.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5401]))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 80.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5402]), C_S__26_c::sm_S_8_21_Z(4.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_7_22_9::sm_S_5_21_B(C_S_7_22_9::dsm_S_5_21_B_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) >= 90.0) && (((double)(C_S_8G::sg_S__2c_P())) < 2.0))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5403]))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
bool C_S_7_22_9::g_S__2d_6() {
    RT_FN("S_7_22_9.S__2d_6_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) >= 43.0);
    return false;
}
int32_t C_S_7_22_9::dsm_S__5d_e_0() { return rt::toint_d(0.0); }
double C_S_7_22_9::sm_S__5d_e(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_7_22_9.S__5d_e");
    return (70.0 * rt::m_pow(C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(1.0)), 1.25));
    return 0.0;
}
int32_t C_S_7_22_9::dsm_S__23__21_Y_0() { return rt::toint_d(0.0); }
double C_S_7_22_9::sm_S__23__21_Y(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_7_22_9.S__23__21_Y");
    return (1.5 * rt::m_pow(C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(1.0)), 0.95));
    return 0.0;
}
int32_t C_S_7_22_9::dsm_S__5d__22__2b__0() { return rt::toint_d(0.0); }
double C_S_7_22_9::sm_S__5d__22__2b_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_7_22_9.S__5d__22__2b_");
    return (10.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(1.0)));
    return 0.0;
}
int32_t C_S_7_22_9::dsm_S_5_22_0_0() { return rt::toint_d(0.0); }
double C_S_7_22_9::sm_S_5_22_0(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_7_22_9.S_5_22_0");
    return (1.2 * rt::m_pow(C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(1.0)), 1.05));
    return 0.0;
}
int32_t C_S_7_22_9::dsm_S_6_22_4_0() { return rt::toint_d(0.0); }
double C_S_7_22_9::sm_S_6_22_4(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_7_22_9.S_6_22_4");
    return ((double)(C_S__26_c::sm_S__3b__22__24_(rt::m_pow(C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(1.0)), 0.5))));
    return 0.0;
}
int32_t C_S_7_22_9::dsm_S_5_21_B_0() { return rt::toint_d(0.0); }
double C_S_7_22_9::sm_S_5_21_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_7_22_9.S_5_21_B");
    return (4.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(1.0)));
    return 0.0;
}
C_S_7_22_9* C_S_7_22_9::alloc_() {
    C_S_7_22_9* o = rt::make<C_S_7_22_9>();
    return o;
}
rt::Value C_S_7_22_9::mk_(rt::Value* a, int n) {
    C_S_7_22_9* o = alloc_();
    o->C_S_7_22_9::ctor_();
    return rt::VO(o);
}
bool C_S_7_22_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_1_21_P: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7_22_9::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7_22_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_1_21_P: out = m_S_1_21_P(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7_22_9::dmeth(int id) {
    switch (id) {
    case NM_S_1_21_P: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7_22_9::smeth_(int id) {
    switch (id) {
    case NM_S__5d_e: return true;
    case NM_S__23__21_Y: return true;
    case NM_S__5d__22__2b_: return true;
    case NM_S_5_22_0: return true;
    case NM_S_6_22_4: return true;
    case NM_S_5_21_B: return true;
    default: return false;
    }
}
bool C_S_7_22_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22_9__id)); return true;
    case NM_S__3e_B: out = rt::V(g::SV.C_S_7_22_9__S__3e_B); return true;
    case NM_S__5e__21_n: out = rt::V(g::SV.C_S_7_22_9__S__5e__21_n); return true;
    case NM_S__5d_e: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5d__22__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_22_0: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_22_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_22_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22_9__id = rt::touint(v); return true;
    case NM_S__3e_B: g::SV.C_S_7_22_9__S__3e_B = rt::tonum(v); return true;
    case NM_S__5e__21_n: g::SV.C_S_7_22_9__S__5e__21_n = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_7_22_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5d_e: out = rt::V(sm_S__5d_e(rt::arg<int32_t>(a, n, 0, C_S_7_22_9::dsm_S__5d_e_0()))); return true;
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y(rt::arg<int32_t>(a, n, 0, C_S_7_22_9::dsm_S__23__21_Y_0()))); return true;
    case NM_S__5d__22__2b_: out = rt::V(sm_S__5d__22__2b_(rt::arg<int32_t>(a, n, 0, C_S_7_22_9::dsm_S__5d__22__2b__0()))); return true;
    case NM_S_5_22_0: out = rt::V(sm_S_5_22_0(rt::arg<int32_t>(a, n, 0, C_S_7_22_9::dsm_S_5_22_0_0()))); return true;
    case NM_S_6_22_4: out = rt::V(sm_S_6_22_4(rt::arg<int32_t>(a, n, 0, C_S_7_22_9::dsm_S_6_22_4_0()))); return true;
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B(rt::arg<int32_t>(a, n, 0, C_S_7_22_9::dsm_S_5_21_B_0()))); return true;
    default: return false;
    }
}
void C_S_7U::ctor_(int32_t p0, rt::Value p1, double p2, int32_t p3, double p4, double p5) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    double l_param3 = p2;
    int32_t l_param4 = p3;
    double l_param5 = p4;
    double l_param6 = p5;
    rt::Value l_A__loc7_ = rt::NUL;
    RT_FN("S_7U.S_7U");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18180 = 23.0; this->f_S_6_21_Z = rt::touint_d(_v18180); _v18180; });
    ({ rt::Value _v18181 = l_param2; this->f_S_1i = rt::slot_string(_v18181); _v18181; });
    ({ int32_t _v18182 = l_param4; this->f_S__5e__3c_ = ((double)(_v18182)); _v18182; });
    ({ double _v18183 = l_param5; this->f_S__23_i = _v18183; _v18183; });
    ({ int32_t _v18185 = ({ int32_t _v18184 = l_param1; this->f_S_8_21__40_ = _v18184; _v18184; }); this->f_S__22__21_U = _v18185; _v18185; });
    ({ rt::Value _v18186 = rt::add(rt::VS(g::LS[5404]), rt::dcallv(rt::V(l_param5), rt::N_toString)); this->f_S__3f__21__3d_ = rt::slot_string(_v18186); _v18186; });
    ({ rt::Value _v18187 = rt::add(rt::VS(g::LS[5405]), rt::dcallv(rt::V((double)(l_param1)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v18187); _v18187; });
    ({ rt::Value _v18188 = rt::VS(g::LS[5404]); this->f_S__40_1 = rt::slot_string(_v18188); _v18188; });
    ({ double _v18189 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v18189); _v18189; });
    {
        std::vector<rt::Value> _lst18190;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst18190);
        for (const rt::Value& _x18191 : _lst18190) {
            l_A__loc7_ = _x18191;
            if (rt::eq(({ rt::Value _o18192 = l_A__loc7_; C_S__60_6* _p18193 = rt::as_ptr<C_S__60_6>(_o18192); _p18193 ? _p18193->f_S__40_1 : rt::dget(_o18192, NM_S__40_1); }), this->f_S__40_1)) {
                ({ double _v18197 = (((double)(this->f_S__3d_A)) + ({ rt::Value _o18195 = (({ rt::Value _t18194 = l_A__loc7_; rt::is_class(_t18194, C_S_7U::CI) ? _t18194 : rt::NUL; })); C_S_7U* _p18196 = rt::as_ptr<C_S_7U>(_o18195); _p18196 ? _p18196->f_S__5e__3c_ : rt::tonum(rt::dget(_o18195, NM_S__5e__3c_)); })); this->f_S__3d_A = rt::toint_d(_v18197); _v18197; });
            }
        }
    }
    ({ double _v18198 = (((double)(this->f_S__3d_A)) + this->f_S__5e__3c_); this->f_S__3d_A = rt::toint_d(_v18198); _v18198; });
    ({ double _v18199 = l_param3; this->f_S__5e__21__5d_ = _v18199; _v18199; });
    ({ double _v18200 = l_param6; this->f_S__3e__3d_ = _v18200; _v18200; });
    ({ bool _v18201 = true; this->f_S__2b__21_9 = _v18201; _v18201; });
}
rt::Value C_S_7U::m_S__40__22_() {
    double l_A__loc5_ = NAN;
    double l_A__loc4_ = NAN;
    rt::Value l_A__loc6_ = rt::NUL;
    double l_A__loc3_ = NAN;
    double l_A__loc2_ = NAN;
    double l_A__loc1_ = NAN;
    RT_FN("S_7U.S__40__22_");
    (l_A__loc5_ = 0.0);
    (l_A__loc4_ = (C_S__26_c::sm_S_0_23_(C_S__26_c::dsm_S_0_23__0(), C_S__26_c::dsm_S_0_23__1()) - C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_O__id, C_S_8G::dsm_S__25_Z_1())));
    if (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0))) {
        {
            std::vector<rt::Value> _lst18202;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst18202);
            for (const rt::Value& _x18203 : _lst18202) {
                l_A__loc6_ = _x18203;
                if ((rt::eq(({ rt::Value _o18204 = l_A__loc6_; C_S__60_6* _p18205 = rt::as_ptr<C_S__60_6>(_o18204); _p18205 ? _p18205->f_S__40_1 : rt::dget(_o18204, NM_S__40_1); }), this->f_S__40_1) && (((double)(({ rt::Value _o18207 = (({ rt::Value _t18206 = l_A__loc6_; rt::is_class(_t18206, C_S_7U::CI) ? _t18206 : rt::NUL; })); C_S_7U* _p18208 = rt::as_ptr<C_S_7U>(_o18207); _p18208 ? _p18208->f_S_8_21__40_ : rt::toint(rt::dget(_o18207, NM_S_8_21__40_)); }))) <= ((double)(this->f_S_8_21__40_))))) {
                    (l_A__loc5_ = (l_A__loc5_ + ({ rt::Value _o18210 = (({ rt::Value _t18209 = l_A__loc6_; rt::is_class(_t18209, C_S_7U::CI) ? _t18209 : rt::NUL; })); C_S_7U* _p18211 = rt::as_ptr<C_S_7U>(_o18210); _p18211 ? _p18211->f_S__23_i : rt::tonum(rt::dget(_o18210, NM_S__23_i)); })));
                }
            }
        }
    }
    (l_A__loc3_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? ((double)(this->f_S__3d_A)) : this->f_S__5e__3c_));
    (l_A__loc2_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? l_A__loc5_ : this->f_S__23_i));
    (l_A__loc1_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? (l_A__loc5_ * l_A__loc4_) : (this->f_S__23_i * l_A__loc4_)));
    return rt::slot_string(rt::trv(rt::VS(g::LS[5406]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(l_A__loc3_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[5407]), C_S__26_c::sm_S_8_21_Z(l_A__loc2_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::trv(rt::VS(g::LS[5408])), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(l_A__loc1_, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S_7U::m_S__3e__21__2d_() {
    RT_FN("S_7U.S__3e__21__2d_");
    return rt::slot_string(rt::add(rt::VS(g::LS[5409]), this->m_S_9_21_X(this->f_S__22__21_U)));
    return rt::NUL;
}
bool C_S_7U::g_S__2d_6() {
    RT_FN("S_7U.S__2d_6_get");
    return ({ bool _t18213 = ({ bool _t18212 = this->C_S__60_6::g_S__2d_6(); _t18212 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 3.0)) : _t18212; }); _t18213 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_O__id, true) >= this->f_S__5e__21__5d_)) : _t18213; });
    return false;
}
C_S_7U* C_S_7U::alloc_() {
    C_S_7U* o = rt::make<C_S_7U>();
    return o;
}
rt::Value C_S_7U::mk_(rt::Value* a, int n) {
    C_S_7U* o = alloc_();
    o->C_S_7U::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<double>(a, n, 2, NAN), rt::arg<int32_t>(a, n, 3, 0), rt::arg<double>(a, n, 4, NAN), rt::arg<double>(a, n, 5, NAN));
    return rt::VO(o);
}
bool C_S_7U::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S__3e__23_: out = rt::V(f_S__3e__23_); return true;
    case NM_S__3d_A: out = rt::V((double)(f_S__3d_A)); return true;
    case NM_S_8_21__40_: out = rt::V((double)(f_S_8_21__40_)); return true;
    case NM_S__5e__3c_: out = rt::V(f_S__5e__3c_); return true;
    case NM_S__23_i: out = rt::V(f_S__23_i); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7U::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S__3e__23_: f_S__3e__23_ = rt::tonum(v); return true;
    case NM_S__3d_A: f_S__3d_A = rt::toint(v); return true;
    case NM_S_8_21__40_: f_S_8_21__40_ = rt::toint(v); return true;
    case NM_S__5e__3c_: f_S__5e__3c_ = rt::tonum(v); return true;
    case NM_S__23_i: f_S__23_i = rt::tonum(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7U::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__23_: { rt::Value f = rt::V(f_S__3e__23_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3d_A: { rt::Value f = rt::V((double)(f_S__3d_A)); out = rt::call_value(f, a, n); return true; }
    case NM_S_8_21__40_: { rt::Value f = rt::V((double)(f_S_8_21__40_)); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__3c_: { rt::Value f = rt::V(f_S__5e__3c_); out = rt::call_value(f, a, n); return true; }
    case NM_S__23_i: { rt::Value f = rt::V(f_S__23_i); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7U::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__2d_6: return false;
    case NM_S__5e__21__5d_: return false;
    case NM_S__3e__23_: return false;
    case NM_S__3d_A: return false;
    case NM_S_8_21__40_: return false;
    case NM_S__5e__3c_: return false;
    case NM_S__23_i: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7U::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7U::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7U::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7U::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7t::ctor_(rt::Value p0, double p1, double p2, double p3) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_param2 = p1;
    double l_param3 = p2;
    double l_param4 = p3;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S_7t.S_7t");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18214 = 473.0; this->f_S_6_21_Z = rt::touint_d(_v18214); _v18214; });
    ({ rt::Value _v18215 = l_param1; this->f_S_1i = rt::slot_string(_v18215); _v18215; });
    ({ rt::Value _v18216 = rt::VS(g::LS[1275]); this->f_S__3f__21__3d_ = rt::slot_string(_v18216); _v18216; });
    ({ rt::Value _v18217 = rt::VS(g::LS[1275]); this->f_S__40_1 = rt::slot_string(_v18217); _v18217; });
    ({ int32_t _v18218 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v18218; _v18218; });
    ({ rt::Value _v18219 = rt::add(rt::VS(g::LS[1275]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v18219); _v18219; });
    ({ double _v18220 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18220); _v18220; });
    ({ double _v18221 = l_param2; this->f_S__5e__21__5d_ = _v18221; _v18221; });
    ({ double _v18222 = l_param3; this->f_S__3e__23_ = _v18222; _v18222; });
    ({ double _v18223 = 100.0; this->f_S__3d_A = rt::toint_d(_v18223); _v18223; });
    {
        std::vector<rt::Value> _lst18224;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst18224);
        for (const rt::Value& _x18225 : _lst18224) {
            l_A__loc5_ = _x18225;
            if (rt::is_class(l_A__loc5_, C_S_7t::CI)) {
                ({ double _v18229 = (((double)(this->f_S__3d_A)) + ({ rt::Value _o18227 = (({ rt::Value _t18226 = l_A__loc5_; rt::is_class(_t18226, C_S_7t::CI) ? _t18226 : rt::NUL; })); C_S_7t* _p18228 = rt::as_ptr<C_S_7t>(_o18227); _p18228 ? _p18228->f_S__3e__23_ : rt::tonum(rt::dget(_o18227, NM_S__3e__23_)); })); this->f_S__3d_A = rt::toint_d(_v18229); _v18229; });
            }
        }
    }
    ({ double _v18230 = (((double)(this->f_S__3d_A)) + this->f_S__3e__23_); this->f_S__3d_A = rt::toint_d(_v18230); _v18230; });
    ({ double _v18231 = l_param4; this->f_S__3e__3d_ = _v18231; _v18231; });
    ({ bool _v18232 = true; this->f_S__2b__21_9 = _v18232; _v18232; });
}
rt::Value C_S_7t::m_S__40__22_() {
    RT_FN("S_7t.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5410]), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S__3d_A)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_7t::g_S__2d_6() {
    RT_FN("S_7t.S__2d_6_get");
    return ({ bool _t18233 = this->C_S__60_6::g_S__2d_6(); _t18233 ? (bool)((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(102.0)) >= this->f_S__5e__21__5d_)) : _t18233; });
    return false;
}
C_S_7t* C_S_7t::alloc_() {
    C_S_7t* o = rt::make<C_S_7t>();
    return o;
}
rt::Value C_S_7t::mk_(rt::Value* a, int n) {
    C_S_7t* o = alloc_();
    o->C_S_7t::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN), rt::arg<double>(a, n, 3, NAN));
    return rt::VO(o);
}
bool C_S_7t::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S__3d_A: out = rt::V((double)(f_S__3d_A)); return true;
    case NM_S__3e__23_: out = rt::V(f_S__3e__23_); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7t::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S__3d_A: f_S__3d_A = rt::toint(v); return true;
    case NM_S__3e__23_: f_S__3e__23_ = rt::tonum(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3d_A: { rt::Value f = rt::V((double)(f_S__3d_A)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__23_: { rt::Value f = rt::V(f_S__3e__23_); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7t::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__5e__21__5d_: return false;
    case NM_S__3d_A: return false;
    case NM_S__3e__23_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7t::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7t::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_21_V::ctor_() {
    RT_FN("S_8_21_V.S_8_21_V");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ rt::Value _v18234 = rt::trv(rt::VS(g::LS[5411])); this->f_S_1i = rt::slot_string(_v18234); _v18234; });
    ({ rt::Value _v18235 = rt::VS(g::LS[5412]); this->f_S__5e__21__23_ = rt::slot_string(_v18235); _v18235; });
    ({ bool _v18236 = true; this->f_S__25__21__2c_ = _v18236; _v18236; });
}
rt::Value C_S_8_21_V::m_S__40__22_() {
    RT_FN("S_8_21_V.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5413]), rt::dcallv(rt::V((2.0)), rt::N_toFixed, rt::V(1.0)), rt::dcallv(rt::V(C_S__20__21_2::sm_S__40__21__3f_()), rt::N_toFixed, rt::V(2.0))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5360]))));
    return rt::NUL;
}
double C_S_8_21_V::m_S_6U() {
    RT_FN("S_8_21_V.S_6U");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(109.0)) + 1.0);
    return 0.0;
}
rt::Value C_S_8_21_V::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S_8_21_V.S_6r");
    (l_A__loc1_ = rt::toint_d(109.0));
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc1_))), rt::V(1.0))));
    ({ rt::Value _v18237 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V((double)(l_A__loc1_)), _v18237); });
    ({ bool _v18238 = false; this->f_S__3c__21_7 = _v18238; _v18238; });
    ({ rt::Value _o18239 = g::SV.C_S_8G__S_5_21_V; rt::Value _i18240 = rt::V(13.0); rt::Value _v18241 = rt::V((rt::tonum(rt::idx_get(_o18239, _i18240)) - 1.0)); rt::idx_set(_o18239, _i18240, _v18241); _v18241; });
    return rt::NUL;
}
bool C_S_8_21_V::g_S__2d_6() {
    RT_FN("S_8_21_V.S__2d_6_get");
    return false;
    return false;
}
C_S_8_21_V* C_S_8_21_V::alloc_() {
    C_S_8_21_V* o = rt::make<C_S_8_21_V>();
    return o;
}
rt::Value C_S_8_21_V::mk_(rt::Value* a, int n) {
    C_S_8_21_V* o = alloc_();
    o->C_S_8_21_V::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_V::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6U: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_21_V::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_21_V::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6U: out = rt::V(m_S_6U()); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_21_V::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6U: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_21_V::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21_V::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21_V__id)); return true;
    default: return false;
    }
}
bool C_S_8_21_V::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21_V__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_21_V::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_21_S::ctor_() {
    RT_FN("S_9_21_S.S_9_21_S");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18242 = 5.0; this->f_S_6_21_Z = rt::touint_d(_v18242); _v18242; });
    ({ rt::Value _v18243 = rt::trv(rt::VS(g::LS[5414])); this->f_S_1i = rt::slot_string(_v18243); _v18243; });
    ({ rt::Value _v18244 = rt::VS(g::LS[5415]); this->f_S__5e__21__23_ = rt::slot_string(_v18244); _v18244; });
    ({ double _v18245 = 1e+46; this->f_S__3e__3d_ = _v18245; _v18245; });
    ({ double _v18246 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v18246); _v18246; });
    ({ bool _v18247 = false; this->f_S_3e = _v18247; _v18247; });
}
rt::Value C_S_9_21_S::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_9_21_S.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[5416]))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5347]))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5417]))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5418]), C_S__26_c::sm_S_8_21_Z(7000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5419]), C_S__26_c::sm_S_8_21_Z(800.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::slot_string(rt::add(l_A__loc1_, (rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5420]), C_S__26_c::sm_S_8_21_Z(10000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::NUL;
}
int32_t C_S_9_21_S::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_9_21_S::dm_S_75_2() { return false; }
rt::Value C_S_9_21_S::dm_S_75_3() { return rt::NUL; }
double C_S_9_21_S::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_9_21_S.S_75");
    if ((({ bool _t18248 = (((double)(l_param1)) == 0.0); _t18248 ? _t18248 : (bool)((((double)(l_param1)) == 1.0)); }) || (((double)(l_param1)) == 2.0))) {
        return 10000.0;
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S_9_21_S::m_S_6r() {
    RT_FN("S_9_21_S.S_6r");
    (void)(({ rt::Value _o18249 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p18250 = rt::as_ptr<C_S__20_g>(_o18249); _p18250 ? _p18250->m_S__26__2b_(rt::toint_d(906.0), rt::toint_d(0.0)) : rt::dcallv(_o18249, NM_S__26__2b_, rt::V(906.0), rt::V(0.0)); }));
    (void)(({ rt::Value _o18251 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p18252 = rt::as_ptr<C_S_8G>(_o18251); _p18252 ? _p18252->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__5d_m__id)) : rt::dcallv(_o18251, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__5d_m__id)); }));
    return rt::NUL;
}
bool C_S_9_21_S::g_S__2d_6() {
    RT_FN("S_9_21_S.S__2d_6_get");
    if ((({ bool _t18253 = this->C_S__60_6::g_S__2d_6(); _t18253 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2J__id)) : _t18253; }) && (!C_S_8G::sm_S__3c_P(g::SV.C_S__5d_m__id)))) {
        return true;
    }
    return false;
    return false;
}
bool C_S_9_21_S::g_S_9_21__25_() {
    RT_FN("S_9_21_S.S_9_21__25__get");
    return ({ bool _t18256 = ({ bool _t18255 = ({ bool _t18254 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0); _t18254 ? (bool)((C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true) >= 7000.0)) : _t18254; }); _t18255 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S_2_21__2b___id, true) >= 800.0)) : _t18255; }); _t18256 ? (bool)(rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 4.0)), rt::V(10000.0))) : _t18256; });
    return false;
}
C_S_9_21_S* C_S_9_21_S::alloc_() {
    C_S_9_21_S* o = rt::make<C_S_9_21_S>();
    return o;
}
rt::Value C_S_9_21_S::mk_(rt::Value* a, int n) {
    C_S_9_21_S* o = alloc_();
    o->C_S_9_21_S::ctor_();
    return rt::VO(o);
}
bool C_S_9_21_S::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_21_S::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_21_S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_9_21_S::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_9_21_S::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_9_21_S::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_21_S::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_21_S::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21_S::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21_S__id)); return true;
    case NM_S_9x: out = rt::V(g::SV.C_S_9_21_S__S_9x); return true;
    case NM_S__25__21__5d_: out = rt::V(g::SV.C_S_9_21_S__S__25__21__5d_); return true;
    case NM_S__27__21_I: out = rt::V(g::SV.C_S_9_21_S__S__27__21_I); return true;
    case NM_ids: out = g::SV.C_S_9_21_S__ids; return true;
    default: return false;
    }
}
bool C_S_9_21_S::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21_S__id = rt::touint(v); return true;
    case NM_S_9x: g::SV.C_S_9_21_S__S_9x = rt::tonum(v); return true;
    case NM_S__25__21__5d_: g::SV.C_S_9_21_S__S__25__21__5d_ = rt::tonum(v); return true;
    case NM_S__27__21_I: g::SV.C_S_9_21_S__S__27__21_I = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S_9_21_S__ids = v; return true;
    default: return false;
    }
}
bool C_S_9_21_S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_2d_::ctor_() {
    RT_FN("S_9_2d_.S_9_2d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18257 = 582.0; this->f_S_6_21_Z = rt::touint_d(_v18257); _v18257; });
    ({ rt::Value _v18258 = rt::trv(rt::VS(g::LS[1118])); this->f_S_1i = rt::slot_string(_v18258); _v18258; });
    ({ rt::Value _v18259 = rt::VS(g::LS[1119]); this->f_S__5e__21__23_ = rt::slot_string(_v18259); _v18259; });
    ({ double _v18260 = 1e+50; this->f_S__3c_R = _v18260; _v18260; });
    ({ bool _v18261 = true; this->f_S_7_21_9 = _v18261; _v18261; });
    ({ double _v18262 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v18262); _v18262; });
}
rt::Value C_S_9_2d_::m_S__40__22_() {
    RT_FN("S_9_2d_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5422])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5392]), rt::dcallv(rt::V((10.0)), rt::N_toString), C_S__26_c::sm_S_8_21_Z(C_S_9_2d_::sm_S__3e__21_n(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
bool C_S_9_2d_::g_S__2d_6() {
    RT_FN("S_9_2d_.S__2d_6_get");
    return ({ bool _t18266 = ({ bool _t18265 = ({ bool _t18264 = ({ bool _t18263 = this->C_S__60_6::g_S__2d_6(); _t18263 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 1.0)) : _t18263; }); _t18264 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 42.0)) : _t18264; }); _t18265 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__22__5b___id)) : _t18265; }); _t18266 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_5_21_J__id)) : _t18266; });
    return false;
}
double C_S_9_2d_::sm_S__3e__21_n() {
    RT_FN("S_9_2d_.S__3e__21_n");
    return (500.0 * rt::m_log((1.0 + (C_S__26_c::sm_S_57(true) * 30.0))));
    return 0.0;
}
C_S_9_2d_* C_S_9_2d_::alloc_() {
    C_S_9_2d_* o = rt::make<C_S_9_2d_>();
    return o;
}
rt::Value C_S_9_2d_::mk_(rt::Value* a, int n) {
    C_S_9_2d_* o = alloc_();
    o->C_S_9_2d_::ctor_();
    return rt::VO(o);
}
bool C_S_9_2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_2d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_2d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_2d_::smeth_(int id) {
    switch (id) {
    case NM_S__3e__21_n: return true;
    default: return false;
    }
}
bool C_S_9_2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_2d___id)); return true;
    case NM_S__27_D: out = rt::V(g::SV.C_S_9_2d___S__27_D); return true;
    case NM_S__3e__21_n: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_9_2d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_2d___id = rt::touint(v); return true;
    case NM_S__27_D: g::SV.C_S_9_2d___S__27_D = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_9_2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_n: out = rt::V(sm_S__3e__21_n()); return true;
    default: return false;
    }
}
void C_S__3b__21_R::ctor_() {
    RT_FN("S__3b__21_R.S__3b__21_R");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ rt::Value _v18267 = rt::trv(rt::VS(g::LS[5423])); this->f_S_1i = rt::slot_string(_v18267); _v18267; });
    ({ rt::Value _v18268 = rt::VS(g::LS[5424]); this->f_S__5e__21__23_ = rt::slot_string(_v18268); _v18268; });
    ({ bool _v18269 = true; this->f_S__25__21__2c_ = _v18269; _v18269; });
}
rt::Value C_S__3b__21_R::m_S__40__22_() {
    RT_FN("S__3b__21_R.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5425]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5360]))));
    return rt::NUL;
}
double C_S__3b__21_R::m_S_6U() {
    RT_FN("S__3b__21_R.S_6U");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(105.0)) + 1.0);
    return 0.0;
}
rt::Value C_S__3b__21_R::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S__3b__21_R.S_6r");
    (l_A__loc1_ = rt::toint_d(105.0));
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc1_))), rt::V(1.0))));
    ({ rt::Value _v18270 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V((double)(l_A__loc1_)), _v18270); });
    ({ bool _v18271 = false; this->f_S__3c__21_7 = _v18271; _v18271; });
    ({ rt::Value _o18272 = g::SV.C_S_8G__S_5_21_V; rt::Value _i18273 = rt::V(13.0); rt::Value _v18274 = rt::V((rt::tonum(rt::idx_get(_o18272, _i18273)) - 1.0)); rt::idx_set(_o18272, _i18273, _v18274); _v18274; });
    return rt::NUL;
}
bool C_S__3b__21_R::g_S__2d_6() {
    RT_FN("S__3b__21_R.S__2d_6_get");
    return false;
    return false;
}
C_S__3b__21_R* C_S__3b__21_R::alloc_() {
    C_S__3b__21_R* o = rt::make<C_S__3b__21_R>();
    return o;
}
rt::Value C_S__3b__21_R::mk_(rt::Value* a, int n) {
    C_S__3b__21_R* o = alloc_();
    o->C_S__3b__21_R::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6U: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b__21_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b__21_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6U: out = rt::V(m_S_6U()); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b__21_R::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6U: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b__21_R::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21_R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_R__id)); return true;
    default: return false;
    }
}
bool C_S__3b__21_R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_R__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__21_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b_B::ctor_(rt::Value p0, double p1, double p2, double p3) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_param2 = p1;
    double l_param3 = p2;
    double l_param4 = p3;
    rt::Value l_A__loc5_ = rt::NUL;
    RT_FN("S__3b_B.S__3b_B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18275 = 482.0; this->f_S_6_21_Z = rt::touint_d(_v18275); _v18275; });
    ({ rt::Value _v18276 = l_param1; this->f_S_1i = rt::slot_string(_v18276); _v18276; });
    ({ rt::Value _v18277 = rt::VS(g::LS[1252]); this->f_S__3f__21__3d_ = rt::slot_string(_v18277); _v18277; });
    ({ rt::Value _v18278 = rt::VS(g::LS[1252]); this->f_S__40_1 = rt::slot_string(_v18278); _v18278; });
    ({ double _v18279 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v18279); _v18279; });
    ({ int32_t _v18280 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v18280; _v18280; });
    ({ rt::Value _v18281 = rt::add(rt::VS(g::LS[1252]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v18281); _v18281; });
    ({ double _v18282 = l_param2; this->f_S__5e__21__5d_ = _v18282; _v18282; });
    ({ double _v18283 = l_param3; this->f_S__3e__23_ = _v18283; _v18283; });
    {
        std::vector<rt::Value> _lst18284;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst18284);
        for (const rt::Value& _x18285 : _lst18284) {
            l_A__loc5_ = _x18285;
            if (rt::eq(({ rt::Value _o18286 = l_A__loc5_; C_S__60_6* _p18287 = rt::as_ptr<C_S__60_6>(_o18286); _p18287 ? _p18287->f_S__40_1 : rt::dget(_o18286, NM_S__40_1); }), this->f_S__40_1)) {
                ({ double _v18291 = (this->f_S__3d_A * ((({ rt::Value _o18289 = (({ rt::Value _t18288 = l_A__loc5_; rt::is_class(_t18288, C_S__3b_B::CI) ? _t18288 : rt::NUL; })); C_S__3b_B* _p18290 = rt::as_ptr<C_S__3b_B>(_o18289); _p18290 ? _p18290->f_S__3e__23_ : rt::tonum(rt::dget(_o18289, NM_S__3e__23_)); }) / 100.0) + 1.0)); this->f_S__3d_A = _v18291; _v18291; });
            }
        }
    }
    ({ double _v18292 = (this->f_S__3d_A * ((this->f_S__3e__23_ / 100.0) + 1.0)); this->f_S__3d_A = _v18292; _v18292; });
    ({ double _v18293 = l_param4; this->f_S__3e__3d_ = _v18293; _v18293; });
    ({ bool _v18294 = true; this->f_S__2b__21_9 = _v18294; _v18294; });
}
rt::Value C_S__3b_B::m_S__40__22_() {
    double l_A__loc1_ = NAN;
    RT_FN("S__3b_B.S__40__22_");
    (l_A__loc1_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? (((this->f_S__3d_A - 1.0)) * 100.0) : this->f_S__3e__23_));
    return rt::slot_string(rt::trv(rt::VS(g::LS[5426]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(l_A__loc1_, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__3b_B::g_S__2d_6() {
    RT_FN("S__3b_B.S__2d_6_get");
    return ({ bool _t18296 = ({ bool _t18295 = this->C_S__60_6::g_S__2d_6(); _t18295 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 3.0)) : _t18295; }); _t18296 ? (bool)((((double)(C_S_8G::sg_S_8t())) >= this->f_S__5e__21__5d_)) : _t18296; });
    return false;
}
C_S__3b_B* C_S__3b_B::alloc_() {
    C_S__3b_B* o = rt::make<C_S__3b_B>();
    return o;
}
rt::Value C_S__3b_B::mk_(rt::Value* a, int n) {
    C_S__3b_B* o = alloc_();
    o->C_S__3b_B::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN), rt::arg<double>(a, n, 3, NAN));
    return rt::VO(o);
}
bool C_S__3b_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S__3d_A: out = rt::V(f_S__3d_A); return true;
    case NM_S__3e__23_: out = rt::V(f_S__3e__23_); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S__3d_A: f_S__3d_A = rt::tonum(v); return true;
    case NM_S__3e__23_: f_S__3e__23_ = rt::tonum(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3d_A: { rt::Value f = rt::V(f_S__3d_A); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__23_: { rt::Value f = rt::V(f_S__3e__23_); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b_B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__5e__21__5d_: return false;
    case NM_S__3d_A: return false;
    case NM_S__3e__23_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_B::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_B::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d_G::ctor_() {
    RT_FN("S__3d_G.S__3d_G");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18297 = 33.0; this->f_S_6_21_Z = rt::touint_d(_v18297); _v18297; });
    ({ rt::Value _v18298 = rt::trv(rt::VS(g::LS[5427])); this->f_S_1i = rt::slot_string(_v18298); _v18298; });
    ({ rt::Value _v18299 = rt::VS(g::LS[5428]); this->f_S__5e__21__23_ = rt::slot_string(_v18299); _v18299; });
    ({ rt::Value _v18300 = rt::VS(g::LS[1254]); this->f_S__3f__21__3d_ = rt::slot_string(_v18300); _v18300; });
    ({ double _v18301 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v18301); _v18301; });
    ({ double _v18302 = 1e+21; this->f_S__3e__3d_ = _v18302; _v18302; });
    ({ double _v18303 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v18303); _v18303; });
}
rt::Value C_S__3d_G::m_S__40__22_() {
    RT_FN("S__3d_G.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5355]), C_S__26_c::sm_S_6_21_T(100.0, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__3d_G::g_S__2d_6() {
    RT_FN("S__3d_G.S__2d_6_get");
    return ({ bool _t18304 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t18304 ? (bool)((rt::m_floor((((((((((rt::tonum(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 1.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 1.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 2.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 2.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S__40_w, 2.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 3.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 3.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S__40_w, 3.0)))) / 60.0) / 60.0)) >= 24.0)) : _t18304; });
    return false;
}
C_S__3d_G* C_S__3d_G::alloc_() {
    C_S__3d_G* o = rt::make<C_S__3d_G>();
    return o;
}
rt::Value C_S__3d_G::mk_(rt::Value* a, int n) {
    C_S__3d_G* o = alloc_();
    o->C_S__3d_G::ctor_();
    return rt::VO(o);
}
bool C_S__3d_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3d_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3d_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3d_G::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3d_G::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d_G__id)); return true;
    case NM_ids: out = g::SV.C_S__3d_G__ids; return true;
    default: return false;
    }
}
bool C_S__3d_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d_G__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3d_G__ids = v; return true;
    default: return false;
    }
}
bool C_S__3d_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__22_J::ctor_() {
    RT_FN("S__40__22_J.S__40__22_J");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18305 = 36.0; this->f_S_6_21_Z = rt::touint_d(_v18305); _v18305; });
    ({ rt::Value _v18306 = rt::trv(rt::VS(g::LS[5430])); this->f_S_1i = rt::slot_string(_v18306); _v18306; });
    ({ rt::Value _v18307 = rt::VS(g::LS[5254]); this->f_S__5e__21__23_ = rt::slot_string(_v18307); _v18307; });
    ({ rt::Value _v18308 = rt::VS(g::LS[5254]); this->f_S__40_1 = rt::slot_string(_v18308); _v18308; });
    ({ double _v18309 = 1.0; this->f_S__3e__3d_ = _v18309; _v18309; });
    ({ double _v18310 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18310); _v18310; });
    ({ bool _v18311 = true; this->f_S_3e = _v18311; _v18311; });
}
rt::Value C_S__40__22_J::m_S_1_21_P() {
    RT_FN("S__40__22_J.S_1_21_P");
    return rt::slot_string(rt::add(rt::add(rt::add(this->f_S_1i, rt::VS(g::LS[5431])), C_S__26_c::sm_S_8_21_Z(rt::m_min2(39.0, ((double)(C_S_8G::sg_S_8_21_H()))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[931])));
    return rt::NUL;
}
rt::Value C_S__40__22_J::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__40__22_J.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::NUL));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[5256]))));
    if ((C_S__26_c::sm_S_9X() && (((double)(C_S_8G::sg_S__2c_P())) < 2.0))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5432]), C_S__26_c::sm_S_8_21_Z(C_S__40__22_J::sm_S_3_3e_(C_S__40__22_J::dsm_S_3_3e__0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) >= 1.0) && (((double)(C_S_8G::sg_S_8_21_H())) < 10.0))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[380]), C_S__26_c::sm_S_6_21_T(C_S__40__22_J::sm_S__27__22__2c_(C_S__40__22_J::dsm_S__27__22__2c__0()), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))))));
    }
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[367]), C_S__26_c::sm_S_6_21_T(C_S__40__22_J::sm_S__2b__2b_(C_S__40__22_J::dsm_S__2b__2b__0()), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[603]), C_S__26_c::sm_S_8_21_Z(C_S__40__22_J::sm_S__2c_J(C_S__40__22_J::dsm_S__2c_J_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[532]), C_S__26_c::sm_S_8_21_Z(C_S__40__22_J::sm_S_2_21_W(C_S__40__22_J::dsm_S_2_21_W_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 2.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5433]), rt::dcallv(rt::V(0.2), rt::N_toFixed, rt::V(1.0)), rt::dcallv(rt::V(C_S__40__22_J::sm_S__5e_y(C_S__40__22_J::dsm_S__5e_y_0())), rt::N_toFixed, rt::V(1.0)))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 5.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5434]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[5435]), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::trv(rt::VS(g::LS[5436])), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S_6_21_T(C_S__40__22_J::sm_S_2_21__40_(C_S__40__22_J::dsm_S_2_21__40__0()), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 10.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5437]), C_S__26_c::sm_S__40__22_A(C_S__40__22_J::sm_S__27__22__2c_(C_S__40__22_J::dsm_S__27__22__2c__0()), C_S__40__22_J::sm_S_3h(C_S__40__22_J::dsm_S_3h_0()), C_S__26_c::dsm_S__40__22_A_2(), C_S__26_c::dsm_S__40__22_A_3()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 12.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5438]), C_S__26_c::sm_S_8_21_Z(35.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__40__22_J::sm_S__60_z(C_S__40__22_J::dsm_S__60_z_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 20.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5439]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[5435]), rt::dcallv(rt::V(0.01), rt::N_toFixed, rt::V(2.0))), rt::trv(rt::VS(g::LS[5440])), C_S__26_c::dsm_S__20__21_C_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 25.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5441]), rt::dcallv(rt::V(0.5), rt::N_toFixed, rt::V(1.0)), C_S__26_c::sm_S_8_21_Z(C_S__40__22_J::sm_S__40__21__3f_(C_S__40__22_J::dsm_S__40__21__3f__0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
bool C_S__40__22_J::g_S__2d_6() {
    RT_FN("S__40__22_J.S__2d_6_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) > 0.0);
    return false;
}
int32_t C_S__40__22_J::dsm_S_3_3e__0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S_3_3e_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S_3_3e_");
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) {
        return rt::m_min2(14000.0, (5000.0 + ((((((double)(C_S_8G::sg_S_8_21_H())) + ((double)(l_param1))) - 174.0)) * 125.0)));
    }
    if (C_S_8G::sm_S__3c_P(g::SV.C_S__23__22_3__id)) {
        return rt::m_min2(7000.0, (5000.0 + ((((((double)(C_S_8G::sg_S_8_21_H())) + ((double)(l_param1))) - 174.0)) * 125.0)));
    }
    return rt::m_min2(5000.0, rt::m_floor((((((double)(C_S_8G::sg_S_8_21_H())) + ((double)(l_param1)))) * (((((((double)(C_S_8G::sg_S_8_21_H())) + ((double)(l_param1))) + 1.0)) / 2.0)))));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S__2c__21_G_0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S__2c__21_G(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S__2c__21_G");
    return (0.01 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, C_S__40__22_J::dsm_S__2c__22__24__1()));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S__27__22__2c__0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S__27__22__2c_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S__27__22__2c_");
    return (50.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, C_S__40__22_J::dsm_S__2c__22__24__1()));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S_3h_0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S_3h(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S_3h");
    return (rt::m_pow(C_S__40__22_J::sm_S__2c__22__24_(l_param1, C_S__40__22_J::dsm_S__2c__22__24__1()), 1.75) * rt::m_pow(((C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()) / 60.0) / 60.0), 0.65));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S__60_z_0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S__60_z(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S__60_z");
    return (35.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, C_S__40__22_J::dsm_S__2c__22__24__1()));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S_2_21_W_0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S_2_21_W(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S_2_21_W");
    return (2.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, C_S__40__22_J::dsm_S__2c__22__24__1()));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S_5_21_B_0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S_5_21_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S_5_21_B");
    return (1.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, C_S__40__22_J::dsm_S__2c__22__24__1()));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S_2_21__40__0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S_2_21__40_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S_2_21__40_");
    return (2.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, C_S__40__22_J::dsm_S__2c__22__24__1()));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S__2b__2b__0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S__2b__2b_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S__2b__2b_");
    return (500.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, C_S__40__22_J::dsm_S__2c__22__24__1()));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S__40__21__3f__0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S__40__21__3f_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S__40__21__3f_");
    return (0.5 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, C_S__40__22_J::dsm_S__2c__22__24__1()));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S__2c_J_0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S__2c_J(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S__2c_J");
    return (10.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, C_S__40__22_J::dsm_S__2c__22__24__1()));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S__5e_y_0() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S__5e_y(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__40__22_J.S__5e_y");
    return (0.2 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, C_S__40__22_J::dsm_S__2c__22__24__1()));
    return 0.0;
}
int32_t C_S__40__22_J::dsm_S__2c__22__24__0() { return rt::toint_d(0.0); }
int32_t C_S__40__22_J::dsm_S__2c__22__24__1() { return rt::toint_d(0.0); }
double C_S__40__22_J::sm_S__2c__22__24_(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    double l_A__loc4_ = NAN;
    double l_A__loc3_ = NAN;
    RT_FN("S__40__22_J.S__2c__22__24_");
    (l_A__loc4_ = (((double)(C_S_8G::sg_S_8_21_H())) + ((double)(l_param1))));
    if ((((double)(l_param2)) == 1.0)) {
        (l_A__loc4_ = (l_A__loc4_ - 39.0));
    } else if ((((double)(l_param2)) == 2.0)) {
        (l_A__loc4_ = (l_A__loc4_ - 99.0));
    } else if ((((double)(l_param2)) == 3.0)) {
        (l_A__loc4_ = (l_A__loc4_ - 159.0));
    } else if ((((double)(l_param2)) == 4.0)) {
        (l_A__loc4_ = (l_A__loc4_ - 219.0));
    }
    (l_A__loc3_ = C_S__23__21__21_::sm_S__27__22__3d_(l_A__loc4_));
    if (C_S_8G::sm_S_7d(g::SV.C_S__27__22__24___id)) {
        (l_A__loc3_ = (l_A__loc3_ * (1.0 + (0.01 * C_S__27__22__24_::sm_S__2c__21_G()))));
    }
    return l_A__loc3_;
    return 0.0;
}
C_S__40__22_J* C_S__40__22_J::alloc_() {
    C_S__40__22_J* o = rt::make<C_S__40__22_J>();
    return o;
}
rt::Value C_S__40__22_J::mk_(rt::Value* a, int n) {
    C_S__40__22_J* o = alloc_();
    o->C_S__40__22_J::ctor_();
    return rt::VO(o);
}
bool C_S__40__22_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_1_21_P: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__40__22_J::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__40__22_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_1_21_P: out = m_S_1_21_P(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__40__22_J::dmeth(int id) {
    switch (id) {
    case NM_S_1_21_P: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__40__22_J::smeth_(int id) {
    switch (id) {
    case NM_S_3_3e_: return true;
    case NM_S__2c__21_G: return true;
    case NM_S__27__22__2c_: return true;
    case NM_S_3h: return true;
    case NM_S__60_z: return true;
    case NM_S_2_21_W: return true;
    case NM_S_5_21_B: return true;
    case NM_S_2_21__40_: return true;
    case NM_S__2b__2b_: return true;
    case NM_S__40__21__3f_: return true;
    case NM_S__2c_J: return true;
    case NM_S__5e_y: return true;
    case NM_S__2c__22__24_: return true;
    default: return false;
    }
}
bool C_S__40__22_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22_J__id)); return true;
    case NM_S_7_21__22_: out = rt::V(g::SV.C_S__40__22_J__S_7_21__22_); return true;
    case NM_S__60_5: out = rt::V(g::SV.C_S__40__22_J__S__60_5); return true;
    case NM_S__3b__21_6: out = rt::V(g::SV.C_S__40__22_J__S__3b__21_6); return true;
    case NM_S__3f__21_Y: out = rt::V(g::SV.C_S__40__22_J__S__3f__21_Y); return true;
    case NM_S_4V: out = rt::V(g::SV.C_S__40__22_J__S_4V); return true;
    case NM_S__60_t: out = rt::V(g::SV.C_S__40__22_J__S__60_t); return true;
    case NM_ids: out = g::SV.C_S__40__22_J__ids; return true;
    case NM_S_3_3e_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__22__2c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_3h: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__22__24_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40__22_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22_J__id = rt::touint(v); return true;
    case NM_S_7_21__22_: g::SV.C_S__40__22_J__S_7_21__22_ = rt::tonum(v); return true;
    case NM_S__60_5: g::SV.C_S__40__22_J__S__60_5 = rt::tonum(v); return true;
    case NM_S__3b__21_6: g::SV.C_S__40__22_J__S__3b__21_6 = rt::tonum(v); return true;
    case NM_S__3f__21_Y: g::SV.C_S__40__22_J__S__3f__21_Y = rt::tonum(v); return true;
    case NM_S_4V: g::SV.C_S__40__22_J__S_4V = rt::tonum(v); return true;
    case NM_S__60_t: g::SV.C_S__40__22_J__S__60_t = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__40__22_J__ids = v; return true;
    default: return false;
    }
}
bool C_S__40__22_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_3_3e_: out = rt::V(sm_S_3_3e_(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S_3_3e__0()))); return true;
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S__2c__21_G_0()))); return true;
    case NM_S__27__22__2c_: out = rt::V(sm_S__27__22__2c_(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S__27__22__2c__0()))); return true;
    case NM_S_3h: out = rt::V(sm_S_3h(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S_3h_0()))); return true;
    case NM_S__60_z: out = rt::V(sm_S__60_z(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S__60_z_0()))); return true;
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S_2_21_W_0()))); return true;
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S_5_21_B_0()))); return true;
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S_2_21__40__0()))); return true;
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S__2b__2b__0()))); return true;
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S__40__21__3f__0()))); return true;
    case NM_S__2c_J: out = rt::V(sm_S__2c_J(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S__2c_J_0()))); return true;
    case NM_S__5e_y: out = rt::V(sm_S__5e_y(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S__5e_y_0()))); return true;
    case NM_S__2c__22__24_: out = rt::V(sm_S__2c__22__24_(rt::arg<int32_t>(a, n, 0, C_S__40__22_J::dsm_S__2c__22__24__0()), rt::arg<int32_t>(a, n, 1, C_S__40__22_J::dsm_S__2c__22__24__1()))); return true;
    default: return false;
    }
}
void C_S__5b__22_J::ctor_() {
    RT_FN("S__5b__22_J.S__5b__22_J");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18312 = 1206.0; this->f_S_6_21_Z = rt::touint_d(_v18312); _v18312; });
    ({ rt::Value _v18313 = rt::trv(rt::VS(g::LS[5443])); this->f_S_1i = rt::slot_string(_v18313); _v18313; });
    ({ rt::Value _v18314 = rt::VS(g::LS[5254]); this->f_S__5e__21__23_ = rt::slot_string(_v18314); _v18314; });
    ({ rt::Value _v18315 = rt::VS(g::LS[5254]); this->f_S__40_1 = rt::slot_string(_v18315); _v18315; });
    ({ double _v18316 = 1.0; this->f_S__3e__3d_ = _v18316; _v18316; });
    ({ double _v18317 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18317); _v18317; });
    ({ bool _v18318 = true; this->f_S_3e = _v18318; _v18318; });
}
rt::Value C_S__5b__22_J::m_S_1_21_P() {
    RT_FN("S__5b__22_J.S_1_21_P");
    return rt::slot_string(rt::add(rt::add(rt::add(this->f_S_1i, rt::VS(g::LS[5444])), C_S__26_c::sm_S_8_21_Z(rt::m_min2(219.0, ((double)(C_S_8G::sg_S_8_21_H()))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[931])));
    return rt::NUL;
}
rt::Value C_S__5b__22_J::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5b__22_J.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::NUL));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[5256]))));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 170.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5445]), C_S__26_c::sm_S_8_21_Z(C_S__5b__22_J::sm_S_6_22__24_(C_S__5b__22_J::dsm_S_6_22__24__0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 200.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[645]), C_S__26_c::sm_S_6_21_T(C_S__5b__22_J::sm_S_6_22__40_(C_S__5b__22_J::dsm_S_6_22__40__0()), 4.0, C_S__26_c::dsm_S_6_21_T_2()))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
bool C_S__5b__22_J::g_S__2d_6() {
    RT_FN("S__5b__22_J.S__2d_6_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) >= 170.0);
    return false;
}
int32_t C_S__5b__22_J::dsm_S_6_22__24__0() { return rt::toint_d(0.0); }
double C_S__5b__22_J::sm_S_6_22__24_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__5b__22_J.S_6_22__24_");
    return ((150.0 * ((double)(C_S_8G::sg_S__2c_P()))) + (3.5 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(3.0))));
    return 0.0;
}
int32_t C_S__5b__22_J::dsm_S_6_22__40__0() { return rt::toint_d(0.0); }
double C_S__5b__22_J::sm_S_6_22__40_(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__5b__22_J.S_6_22__40_");
    return (150.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(3.0)));
    return 0.0;
}
C_S__5b__22_J* C_S__5b__22_J::alloc_() {
    C_S__5b__22_J* o = rt::make<C_S__5b__22_J>();
    return o;
}
rt::Value C_S__5b__22_J::mk_(rt::Value* a, int n) {
    C_S__5b__22_J* o = alloc_();
    o->C_S__5b__22_J::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_1_21_P: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5b__22_J::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5b__22_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_1_21_P: out = m_S_1_21_P(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5b__22_J::dmeth(int id) {
    switch (id) {
    case NM_S_1_21_P: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5b__22_J::smeth_(int id) {
    switch (id) {
    case NM_S_6_22__24_: return true;
    case NM_S_6_22__40_: return true;
    default: return false;
    }
}
bool C_S__5b__22_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22_J__id)); return true;
    case NM_S_6_22__24_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_22__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__22_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22_J__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__22_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_22__24_: out = rt::V(sm_S_6_22__24_(rt::arg<int32_t>(a, n, 0, C_S__5b__22_J::dsm_S_6_22__24__0()))); return true;
    case NM_S_6_22__40_: out = rt::V(sm_S_6_22__40_(rt::arg<int32_t>(a, n, 0, C_S__5b__22_J::dsm_S_6_22__40__0()))); return true;
    default: return false;
    }
}
int32_t C_S__5b__22_::dctor_5() { return rt::toint_d(0.0); }
void C_S__5b__22_::ctor_(int32_t p0, rt::Value p1, double p2, double p3, double p4, int32_t p5) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    double l_param3 = p2;
    double l_param4 = p3;
    double l_param5 = p4;
    int32_t l_param6 = p5;
    rt::Value l_A__loc7_ = rt::NUL;
    RT_FN("S__5b__22_.S__5b__22_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18319 = 28.0; this->f_S_6_21_Z = rt::touint_d(_v18319); _v18319; });
    ({ rt::Value _v18320 = l_param2; this->f_S_1i = rt::slot_string(_v18320); _v18320; });
    if ((l_param4 == 1000.0)) {
        ({ rt::Value _v18321 = rt::VS(g::LS[5446]); this->f_S__3f__21__3d_ = rt::slot_string(_v18321); _v18321; });
    } else if ((l_param4 == 250.0)) {
        ({ rt::Value _v18322 = rt::VS(g::LS[1262]); this->f_S__3f__21__3d_ = rt::slot_string(_v18322); _v18322; });
    } else {
        ({ rt::Value _v18323 = rt::VS(g::LS[1261]); this->f_S__3f__21__3d_ = rt::slot_string(_v18323); _v18323; });
    }
    ({ rt::Value _v18324 = rt::VS(g::LS[5447]); this->f_S__40_1 = rt::slot_string(_v18324); _v18324; });
    ({ int32_t _v18325 = l_param1; this->f_S__22__21_U = _v18325; _v18325; });
    ({ rt::Value _v18326 = rt::add(rt::VS(g::LS[5448]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v18326); _v18326; });
    ({ double _v18327 = l_param3; this->f_S__5e__21__5d_ = _v18327; _v18327; });
    ({ int32_t _v18328 = l_param6; this->f_S__5b_2 = _v18328; _v18328; });
    if ((((double)(this->f_S__5b_2)) == 0.0)) {
        ({ double _v18329 = l_param5; this->f_S__3e__3d_ = _v18329; _v18329; });
    } else if ((((double)(this->f_S__5b_2)) == 1.0)) {
        ({ double _v18330 = l_param5; this->f_S__3c_R = _v18330; _v18330; });
    } else {
        ({ double _v18331 = l_param5; this->f_S__23__21_m = _v18331; _v18331; });
    }
    ({ double _v18333 = ({ double _v18332 = l_param4; this->f_S_8_21__3c_ = _v18332; _v18332; }); this->f_S__3e__23_ = _v18333; _v18333; });
    {
        std::vector<rt::Value> _lst18334;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst18334);
        for (const rt::Value& _x18335 : _lst18334) {
            l_A__loc7_ = _x18335;
            if (rt::eq(({ rt::Value _o18336 = l_A__loc7_; C_S__60_6* _p18337 = rt::as_ptr<C_S__60_6>(_o18336); _p18337 ? _p18337->f_S__40_1 : rt::dget(_o18336, NM_S__40_1); }), this->f_S__40_1)) {
                ({ double _v18341 = (this->f_S_8_21__3c_ + ({ rt::Value _o18339 = (({ rt::Value _t18338 = l_A__loc7_; rt::is_class(_t18338, C_S__5b__22_::CI) ? _t18338 : rt::NUL; })); C_S__5b__22_* _p18340 = rt::as_ptr<C_S__5b__22_>(_o18339); _p18340 ? _p18340->f_S__3e__23_ : rt::tonum(rt::dget(_o18339, NM_S__3e__23_)); })); this->f_S_8_21__3c_ = _v18341; _v18341; });
            }
        }
    }
    ({ bool _v18342 = true; this->f_S__2b__21_9 = _v18342; _v18342; });
    ({ double _v18343 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v18343); _v18343; });
}
rt::Value C_S__5b__22_::m_S__40__22_() {
    double l_A__loc1_ = NAN;
    RT_FN("S__5b__22_.S__40__22_");
    (l_A__loc1_ = ((rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0), rt::V(0.0)) && this->f_S__3c__21_7) ? this->f_S_8_21__3c_ : this->f_S__3e__23_));
    return rt::slot_string(rt::trv(rt::VS(g::LS[532]), rt::dcallv(rt::V(l_A__loc1_), rt::N_toFixed, rt::V(2.0))));
    return rt::NUL;
}
rt::Value C_S__5b__22_::m_S__3e__21__2d_() {
    RT_FN("S__5b__22_.S__3e__21__2d_");
    return rt::slot_string(rt::add(rt::VS(g::LS[5449]), this->m_S__2b__21__21_(true)));
    return rt::NUL;
}
bool C_S__5b__22_::g_S__2d_6() {
    RT_FN("S__5b__22_.S__2d_6_get");
    return ({ bool _t18346 = ({ bool _t18344 = this->C_S__60_6::g_S__2d_6(); _t18344 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= ((double)(this->f_S__5b_2)))) : _t18344; }); _t18346 ? (bool)((({ bool _t18345 = (C_S__26_c::sm_S_3_22__26_(false, false, true) >= this->f_S__5e__21__5d_); _t18345 ? _t18345 : (bool)(C_S_8G::sm_S__2c__23_(this->f_S_1i)); }))) : _t18346; });
    return false;
}
C_S__5b__22_* C_S__5b__22_::alloc_() {
    C_S__5b__22_* o = rt::make<C_S__5b__22_>();
    return o;
}
rt::Value C_S__5b__22_::mk_(rt::Value* a, int n) {
    C_S__5b__22_* o = alloc_();
    o->C_S__5b__22_::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<double>(a, n, 2, NAN), rt::arg<double>(a, n, 3, NAN), rt::arg<double>(a, n, 4, NAN), rt::arg<int32_t>(a, n, 5, C_S__5b__22_::dctor_5()));
    return rt::VO(o);
}
bool C_S__5b__22_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__3e__23_: out = rt::V(f_S__3e__23_); return true;
    case NM_S__5e__21__5d_: out = rt::V(f_S__5e__21__5d_); return true;
    case NM_S_8_21__3c_: out = rt::V(f_S_8_21__3c_); return true;
    case NM_S__5b_2: out = rt::V((double)(f_S__5b_2)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5b__22_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3e__23_: f_S__3e__23_ = rt::tonum(v); return true;
    case NM_S__5e__21__5d_: f_S__5e__21__5d_ = rt::tonum(v); return true;
    case NM_S_8_21__3c_: f_S_8_21__3c_ = rt::tonum(v); return true;
    case NM_S__5b_2: f_S__5b_2 = rt::toint(v); return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5b__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__23_: { rt::Value f = rt::V(f_S__3e__23_); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__5d_: { rt::Value f = rt::V(f_S__5e__21__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S_8_21__3c_: { rt::Value f = rt::V(f_S_8_21__3c_); out = rt::call_value(f, a, n); return true; }
    case NM_S__5b_2: { rt::Value f = rt::V((double)(f_S__5b_2)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5b__22_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__2d_6: return false;
    case NM_S__3e__23_: return false;
    case NM_S__5e__21__5d_: return false;
    case NM_S_8_21__3c_: return false;
    case NM_S__5b_2: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5b__22_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__22_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b_9::ctor_() {
    RT_FN("S__5b_9.S__5b_9");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18347 = 467.0; this->f_S_6_21_Z = rt::touint_d(_v18347); _v18347; });
    ({ rt::Value _v18348 = rt::trv(rt::VS(g::LS[4941])); this->f_S_1i = rt::slot_string(_v18348); _v18348; });
    ({ rt::Value _v18349 = rt::VS(g::LS[5450]); this->f_S__5e__21__23_ = rt::slot_string(_v18349); _v18349; });
    ({ double _v18350 = 1e+27; this->f_S__3e__3d_ = _v18350; _v18350; });
    ({ bool _v18351 = true; this->f_S_4W = _v18351; _v18351; });
    ({ bool _v18352 = true; this->f_data = _v18352; _v18352; });
    ({ bool _v18353 = false; this->f_S_3e = _v18353; _v18353; });
}
rt::Value C_S__5b_9::m_S__40__22_() {
    RT_FN("S__5b_9.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5451])));
    return rt::NUL;
}
double C_S__5b_9::g_S_9_21_U() {
    RT_FN("S__5b_9.S_9_21_U_get");
    return C_S__23__21__21_::sm_S__23__21__3f_(C_S__23__21__21_::dsm_S__23__21__3f__0(), C_S__23__21__21_::dsm_S__23__21__3f__1(), C_S__23__21__21_::dsm_S__23__21__3f__2());
    return 0.0;
}
C_S__5b_9* C_S__5b_9::alloc_() {
    C_S__5b_9* o = rt::make<C_S__5b_9>();
    return o;
}
rt::Value C_S__5b_9::mk_(rt::Value* a, int n) {
    C_S__5b_9* o = alloc_();
    o->C_S__5b_9::ctor_();
    return rt::VO(o);
}
bool C_S__5b_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5b_9::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21_U: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5b_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5b_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5b_9::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b_9__id)); return true;
    default: return false;
    }
}
bool C_S__5b_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b_9__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__21__2d_::ctor_() {
    RT_FN("S__5d__21__2d_.S__5d__21__2d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18354 = 13.0; this->f_S_6_21_Z = rt::touint_d(_v18354); _v18354; });
    ({ rt::Value _v18355 = rt::trv(rt::VS(g::LS[4945])); this->f_S_1i = rt::slot_string(_v18355); _v18355; });
    ({ rt::Value _v18356 = rt::VS(g::LS[5389]); this->f_S__5e__21__23_ = rt::slot_string(_v18356); _v18356; });
    ({ rt::Value _v18357 = rt::trv(rt::VS(g::LS[5452])); this->f_S_7_23_ = rt::slot_string(_v18357); _v18357; });
    ({ double _v18358 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v18358); _v18358; });
    ({ bool _v18359 = false; this->f_S_3e = _v18359; _v18359; });
}
rt::Value C_S__5d__21__2d_::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__5d__21__2d_.S_6r");
    ({ bool _v18360 = false; this->f_S__3c__21_7 = _v18360; _v18360; });
    (l_A__loc2_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)) - 1.0));
    ({ rt::Value _v18361 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(13.0), _v18361); });
    return rt::NUL;
}
bool C_S__5d__21__2d_::g_S__2d_6() {
    RT_FN("S__5d__21__2d_.S__2d_6_get");
    if ((!(((double)(g::SV.C_S__23__21__21___S__60_Q)) == (-1.0)))) {
        return false;
    }
    return (((double)(C_S_8G::sg_S_8_21_H())) >= 7.0);
    return false;
}
bool C_S__5d__21__2d_::g_S__26_8() {
    RT_FN("S__5d__21__2d_.S__26_8_get");
    return false;
    return false;
}
C_S__5d__21__2d_* C_S__5d__21__2d_::alloc_() {
    C_S__5d__21__2d_* o = rt::make<C_S__5d__21__2d_>();
    return o;
}
rt::Value C_S__5d__21__2d_::mk_(rt::Value* a, int n) {
    C_S__5d__21__2d_* o = alloc_();
    o->C_S__5d__21__2d_::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21__2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5d__21__2d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5d__21__2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5d__21__2d_::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5d__21__2d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__21__2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21__2d___id)); return true;
    case NM_ids: out = g::SV.C_S__5d__21__2d___ids; return true;
    default: return false;
    }
}
bool C_S__5d__21__2d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21__2d___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5d__21__2d___ids = v; return true;
    default: return false;
    }
}
bool C_S__5d__21__2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__22_L::ctor_() {
    RT_FN("S__5d__22_L.S__5d__22_L");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18362 = 1243.0; this->f_S_6_21_Z = rt::touint_d(_v18362); _v18362; });
    ({ rt::Value _v18363 = rt::trv(rt::VS(g::LS[5454])); this->f_S_1i = rt::slot_string(_v18363); _v18363; });
    ({ rt::Value _v18364 = rt::VS(g::LS[5254]); this->f_S__5e__21__23_ = rt::slot_string(_v18364); _v18364; });
    ({ rt::Value _v18365 = rt::VS(g::LS[5254]); this->f_S__40_1 = rt::slot_string(_v18365); _v18365; });
    ({ double _v18366 = 1.0; this->f_S__3e__3d_ = _v18366; _v18366; });
    ({ double _v18367 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18367); _v18367; });
    ({ bool _v18368 = true; this->f_S_3e = _v18368; _v18368; });
}
rt::Value C_S__5d__22_L::m_S_1_21_P() {
    RT_FN("S__5d__22_L.S_1_21_P");
    return rt::slot_string(rt::add(rt::add(rt::add(this->f_S_1i, rt::VS(g::LS[5455])), C_S__26_c::sm_S_8_21_Z(rt::m_min2(279.0, ((double)(C_S_8G::sg_S_8_21_H()))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[931])));
    return rt::NUL;
}
rt::Value C_S__5d__22_L::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5d__22_L.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::NUL));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[5256]))));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 220.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5456]), C_S__26_c::sm_S_8_21_Z(C_S__5d__22_L::sm_S_2_22_M(C_S__5d__22_L::dsm_S_2_22_M_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__5d__22_L::sm_S_1_22_M(C_S__5d__22_L::dsm_S_1_22_M_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
bool C_S__5d__22_L::g_S__2d_6() {
    RT_FN("S__5d__22_L.S__2d_6_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) >= 220.0);
    return false;
}
int32_t C_S__5d__22_L::dsm_S_1_22_M_0() { return rt::toint_d(0.0); }
double C_S__5d__22_L::sm_S_1_22_M(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__5d__22_L.S_1_22_M");
    return (500.0 * rt::m_pow(C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(4.0)), 0.5));
    return 0.0;
}
int32_t C_S__5d__22_L::dsm_S_2_22_M_0() { return rt::toint_d(0.0); }
double C_S__5d__22_L::sm_S_2_22_M(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__5d__22_L.S_2_22_M");
    return (500.0 * rt::m_pow(C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(4.0)), 0.5));
    return 0.0;
}
int32_t C_S__5d__22_L::dsm_S__3d__22_F_0() { return rt::toint_d(0.0); }
double C_S__5d__22_L::sm_S__3d__22_F(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__5d__22_L.S__3d__22_F");
    return (10.0 * C_S__40__22_J::sm_S__2c__22__24_(l_param1, rt::toint_d(4.0)));
    return 0.0;
}
C_S__5d__22_L* C_S__5d__22_L::alloc_() {
    C_S__5d__22_L* o = rt::make<C_S__5d__22_L>();
    return o;
}
rt::Value C_S__5d__22_L::mk_(rt::Value* a, int n) {
    C_S__5d__22_L* o = alloc_();
    o->C_S__5d__22_L::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_1_21_P: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5d__22_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5d__22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_1_21_P: out = m_S_1_21_P(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5d__22_L::dmeth(int id) {
    switch (id) {
    case NM_S_1_21_P: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5d__22_L::smeth_(int id) {
    switch (id) {
    case NM_S_1_22_M: return true;
    case NM_S_2_22_M: return true;
    case NM_S__3d__22_F: return true;
    default: return false;
    }
}
bool C_S__5d__22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22_L__id)); return true;
    case NM_S_1_22_M: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_22_M: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3d__22_F: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_1_22_M: out = rt::V(sm_S_1_22_M(rt::arg<int32_t>(a, n, 0, C_S__5d__22_L::dsm_S_1_22_M_0()))); return true;
    case NM_S_2_22_M: out = rt::V(sm_S_2_22_M(rt::arg<int32_t>(a, n, 0, C_S__5d__22_L::dsm_S_2_22_M_0()))); return true;
    case NM_S__3d__22_F: out = rt::V(sm_S__3d__22_F(rt::arg<int32_t>(a, n, 0, C_S__5d__22_L::dsm_S__3d__22_F_0()))); return true;
    default: return false;
    }
}
void C_S__5e__21_3::ctor_() {
    RT_FN("S__5e__21_3.S__5e__21_3");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18369 = 32.0; this->f_S_6_21_Z = rt::touint_d(_v18369); _v18369; });
    ({ rt::Value _v18370 = rt::trv(rt::VS(g::LS[5457])); this->f_S_1i = rt::slot_string(_v18370); _v18370; });
    ({ rt::Value _v18371 = rt::VS(g::LS[5458]); this->f_S__5e__21__23_ = rt::slot_string(_v18371); _v18371; });
    ({ rt::Value _v18372 = rt::VS(g::LS[1254]); this->f_S__3f__21__3d_ = rt::slot_string(_v18372); _v18372; });
    ({ double _v18373 = 0.0; this->f_S__2c__21_Y = rt::toint_d(_v18373); _v18373; });
    ({ double _v18374 = 500000000000000.0; this->f_S__3e__3d_ = _v18374; _v18374; });
    ({ double _v18375 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v18375); _v18375; });
}
rt::Value C_S__5e__21_3::m_S__40__22_() {
    RT_FN("S__5e__21_3.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5355]), C_S__26_c::sm_S_6_21_T(100.0, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__5e__21_3::g_S__2d_6() {
    RT_FN("S__5e__21_3.S__2d_6_get");
    return ({ bool _t18376 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t18376 ? (bool)((rt::m_floor(((rt::tonum((rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 1.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 1.0)))) / 60.0) / 60.0)) >= 7.0)) : _t18376; });
    return false;
}
C_S__5e__21_3* C_S__5e__21_3::alloc_() {
    C_S__5e__21_3* o = rt::make<C_S__5e__21_3>();
    return o;
}
rt::Value C_S__5e__21_3::mk_(rt::Value* a, int n) {
    C_S__5e__21_3* o = alloc_();
    o->C_S__5e__21_3::ctor_();
    return rt::VO(o);
}
bool C_S__5e__21_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5e__21_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5e__21_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5e__21_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5e__21_3::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__21_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__21_3__id)); return true;
    case NM_ids: out = g::SV.C_S__5e__21_3__ids; return true;
    default: return false;
    }
}
bool C_S__5e__21_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__21_3__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5e__21_3__ids = v; return true;
    default: return false;
    }
}
bool C_S__5e__21_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e_D::ctor_() {
    RT_FN("S__5e_D.S__5e_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18377 = 7.0; this->f_S_6_21_Z = rt::touint_d(_v18377); _v18377; });
    ({ rt::Value _v18378 = rt::trv(rt::VS(g::LS[5460])); this->f_S_1i = rt::slot_string(_v18378); _v18378; });
    ({ rt::Value _v18379 = rt::VS(g::LS[5461]); this->f_S__5e__21__23_ = rt::slot_string(_v18379); _v18379; });
    ({ rt::Value _v18380 = rt::trv(rt::VS(g::LS[5462])); this->f_S_7_23_ = rt::slot_string(_v18380); _v18380; });
    ({ double _v18381 = 1e+30; this->f_S__3e__3d_ = _v18381; _v18381; });
    ({ double _v18382 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18382); _v18382; });
    ({ bool _v18383 = false; this->f_S_3e = _v18383; _v18383; });
}
int32_t C_S__5e_D::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__5e_D::dm_S_75_2() { return false; }
rt::Value C_S__5e_D::dm_S_75_3() { return rt::NUL; }
double C_S__5e_D::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__5e_D.S_75");
    if (((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 3.0))) {
        return 25000.0;
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__5e_D::m_S_6r() {
    RT_FN("S__5e_D.S_6r");
    (void)(({ rt::Value _o18384 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p18385 = rt::as_ptr<C_S__20_g>(_o18384); _p18385 ? _p18385->m_S__26__2b_(rt::toint_d(902.0), rt::toint_d(0.0)) : rt::dcallv(_o18384, NM_S__26__2b_, rt::V(902.0), rt::V(0.0)); }));
    (void)(({ rt::Value _o18386 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p18387 = rt::as_ptr<C_S_8G>(_o18386); _p18387 ? _p18387->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S_3N__id)) : rt::dcallv(_o18386, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S_3N__id)); }));
    return rt::NUL;
}
bool C_S__5e_D::g_S__2d_6() {
    RT_FN("S__5e_D.S__2d_6_get");
    return ({ bool _t18390 = ({ bool _t18389 = ({ bool _t18388 = this->C_S__60_6::g_S__2d_6(); _t18388 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23_C__id)) : _t18388; }); _t18389 ? (bool)((C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_O__id, true) >= 300.0)) : _t18389; }); _t18390 ? (bool)((!C_S_8G::sm_S__3c_P(g::SV.C_S_3N__id))) : _t18390; });
    return false;
}
C_S__5e_D* C_S__5e_D::alloc_() {
    C_S__5e_D* o = rt::make<C_S__5e_D>();
    return o;
}
rt::Value C_S__5e_D::mk_(rt::Value* a, int n) {
    C_S__5e_D* o = alloc_();
    o->C_S__5e_D::ctor_();
    return rt::VO(o);
}
bool C_S__5e_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5e_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5e_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__5e_D::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__5e_D::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__5e_D::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5e_D::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5e_D::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e_D__id)); return true;
    case NM_ids: out = g::SV.C_S__5e_D__ids; return true;
    default: return false;
    }
}
bool C_S__5e_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e_D__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5e_D__ids = v; return true;
    default: return false;
    }
}
bool C_S__5e_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e_g::ctor_() {
    RT_FN("S__5e_g.S__5e_g");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ rt::Value _v18391 = rt::trv(rt::VS(g::LS[5464])); this->f_S_1i = rt::slot_string(_v18391); _v18391; });
    ({ rt::Value _v18392 = rt::VS(g::LS[3927]); this->f_S__5e__21__23_ = rt::slot_string(_v18392); _v18392; });
    ({ double _v18393 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18393); _v18393; });
    ({ bool _v18394 = false; this->f_S_3e = _v18394; _v18394; });
    ({ bool _v18395 = false; this->f_S__40_X = _v18395; _v18395; });
}
rt::Value C_S__5e_g::m_S__40__22_() {
    RT_FN("S__5e_g.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5465])));
    return rt::NUL;
}
rt::Value C_S__5e_g::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__5e_g.S_6r");
    ({ bool _v18396 = false; this->f_S__3c__21_7 = _v18396; _v18396; });
    (l_A__loc2_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)) - 1.0));
    ({ rt::Value _v18397 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(13.0), _v18397); });
    return rt::NUL;
}
bool C_S__5e_g::g_S__2d_6() {
    RT_FN("S__5e_g.S__2d_6_get");
    return C_S_8G::sm_S__3f__21_L(rt::trv(rt::VS(g::LS[5196])));
    return false;
}
C_S__5e_g* C_S__5e_g::alloc_() {
    C_S__5e_g* o = rt::make<C_S__5e_g>();
    return o;
}
rt::Value C_S__5e_g::mk_(rt::Value* a, int n) {
    C_S__5e_g* o = alloc_();
    o->C_S__5e_g::ctor_();
    return rt::VO(o);
}
bool C_S__5e_g::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5e_g::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5e_g::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5e_g::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5e_g::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e_g::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e_g__id)); return true;
    default: return false;
    }
}
bool C_S__5e_g::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e_g__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e_g::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e_i::ctor_() {
    RT_FN("S__5e_i.S__5e_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18398 = 4.0; this->f_S_6_21_Z = rt::touint_d(_v18398); _v18398; });
    ({ rt::Value _v18399 = rt::trv(rt::VS(g::LS[5466])); this->f_S_1i = rt::slot_string(_v18399); _v18399; });
    ({ rt::Value _v18400 = rt::VS(g::LS[5467]); this->f_S__5e__21__23_ = rt::slot_string(_v18400); _v18400; });
    ({ rt::Value _v18401 = rt::trv(rt::VS(g::LS[5468])); this->f_S_7_23_ = rt::slot_string(_v18401); _v18401; });
    ({ double _v18402 = 1e+30; this->f_S__3e__3d_ = _v18402; _v18402; });
    ({ double _v18403 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v18403); _v18403; });
    ({ bool _v18404 = false; this->f_S_3e = _v18404; _v18404; });
}
int32_t C_S__5e_i::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__5e_i::dm_S_75_2() { return false; }
rt::Value C_S__5e_i::dm_S_75_3() { return rt::NUL; }
double C_S__5e_i::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__5e_i.S_75");
    if (((((double)(l_param1)) == 1.0) || (((double)(l_param1)) == 5.0))) {
        return 25000.0;
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__5e_i::m_S_6r() {
    RT_FN("S__5e_i.S_6r");
    (void)(({ rt::Value _o18405 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p18406 = rt::as_ptr<C_S__20_g>(_o18405); _p18406 ? _p18406->m_S__26__2b_(rt::toint_d(903.0), rt::toint_d(0.0)) : rt::dcallv(_o18405, NM_S__26__2b_, rt::V(903.0), rt::V(0.0)); }));
    (void)(({ rt::Value _o18407 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p18408 = rt::as_ptr<C_S_8G>(_o18407); _p18408 ? _p18408->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__2c__21__3b___id)) : rt::dcallv(_o18407, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__2c__21__3b___id)); }));
    return rt::NUL;
}
bool C_S__5e_i::g_S__2d_6() {
    RT_FN("S__5e_i.S__2d_6_get");
    return ({ bool _t18411 = ({ bool _t18410 = ({ bool _t18409 = this->C_S__60_6::g_S__2d_6(); _t18409 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__40__21__3c___id)) : _t18409; }); _t18410 ? (bool)((!C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21__3b___id))) : _t18410; }); _t18411 ? (bool)((C_S__26_c::sm_S__40__21__5b_(true, false, true) >= 1000000.0)) : _t18411; });
    return false;
}
C_S__5e_i* C_S__5e_i::alloc_() {
    C_S__5e_i* o = rt::make<C_S__5e_i>();
    return o;
}
rt::Value C_S__5e_i::mk_(rt::Value* a, int n) {
    C_S__5e_i* o = alloc_();
    o->C_S__5e_i::ctor_();
    return rt::VO(o);
}
bool C_S__5e_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5e_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5e_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__5e_i::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__5e_i::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__5e_i::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5e_i::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5e_i::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e_i__id)); return true;
    case NM_ids: out = g::SV.C_S__5e_i__ids; return true;
    default: return false;
    }
}
bool C_S__5e_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e_i__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5e_i__ids = v; return true;
    default: return false;
    }
}
bool C_S__5e_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60_J::ctor_() {
    RT_FN("S__60_J.S__60_J");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18412 = 468.0; this->f_S_6_21_Z = rt::touint_d(_v18412); _v18412; });
    ({ rt::Value _v18413 = rt::trv(rt::VS(g::LS[5470])); this->f_S_1i = rt::slot_string(_v18413); _v18413; });
    ({ rt::Value _v18414 = rt::VS(g::LS[5471]); this->f_S__5e__21__23_ = rt::slot_string(_v18414); _v18414; });
    ({ double _v18415 = 0.0; this->f_S__3e__3d_ = _v18415; _v18415; });
    ({ bool _v18416 = true; this->f_data = _v18416; _v18416; });
    ({ bool _v18417 = false; this->f_S_3e = _v18417; _v18417; });
}
rt::Value C_S__60_J::m_S__40__22_() {
    RT_FN("S__60_J.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5472])));
    return rt::NUL;
}
double C_S__60_J::m_S_6U() {
    RT_FN("S__60_J.S_6U");
    return (1.0 + rt::m_floor((C_S_8G::sg_S_1_21_5() / 3000.0)));
    return 0.0;
}
bool C_S__60_J::g_S_9_21__25_() {
    RT_FN("S__60_J.S_9_21__25__get");
    return (C_S_8G::sg_S_1_21_5() > 0.0);
    return false;
}
double C_S__60_J::g_S_9_21_U() {
    double l_A__loc3_ = NAN;
    double l_A__loc2_ = NAN;
    double l_A__loc1_ = NAN;
    RT_FN("S__60_J.S_9_21_U_get");
    (l_A__loc3_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 135.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 135.0))));
    (l_A__loc2_ = (C_S_8G::sm_S_7d(g::SV.C_S_0_22__26___id) ? C_S_0_22__26_::sm_S__2c__21_G() : 0.0));
    (l_A__loc1_ = ((((1e+27 * rt::m_pow(100.0, ((((double)(C_S_8G::sg_S_8_21_H())) - 40.0) - (60.0 * ((((double)(C_S_8G::sg_S__2c_P())) - 1.0)))))) * (((1e+27 * rt::m_pow(100.0, ((((double)(C_S_8G::sg_S_8_21_H())) - 40.0) - (60.0 * ((((double)(C_S_8G::sg_S__2c_P())) - 1.0)))))) + 1.0))) / 2.0) * ((1000000000000.0 * rt::m_pow(10.0, (((-12.0) + (3.0 * l_A__loc3_)) - l_A__loc2_))))));
    return rt::m_max2(0.0, rt::m_round(l_A__loc1_));
    return 0.0;
}
C_S__60_J* C_S__60_J::alloc_() {
    C_S__60_J* o = rt::make<C_S__60_J>();
    return o;
}
rt::Value C_S__60_J::mk_(rt::Value* a, int n) {
    C_S__60_J* o = alloc_();
    o->C_S__60_J::ctor_();
    return rt::VO(o);
}
bool C_S__60_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6U: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__60_J::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__60_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6U: out = rt::V(m_S_6U()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__60_J::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6U: return true;
    case NM_S_9_21__25_: return false;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__60_J::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60_J__id)); return true;
    default: return false;
    }
}
bool C_S__60_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60_J__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60_Y::ctor_() {
    RT_FN("S__60_Y.S__60_Y");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ rt::Value _v18418 = rt::trv(rt::VS(g::LS[5473])); this->f_S_1i = rt::slot_string(_v18418); _v18418; });
    ({ rt::Value _v18419 = rt::VS(g::LS[5474]); this->f_S__5e__21__23_ = rt::slot_string(_v18419); _v18419; });
    ({ bool _v18420 = true; this->f_S__25__21__2c_ = _v18420; _v18420; });
}
rt::Value C_S__60_Y::m_S__40__22_() {
    RT_FN("S__60_Y.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5475]), rt::dcallv(rt::V((1.0)), rt::N_toFixed, rt::V(1.0)), rt::dcallv(rt::V(C_S__20__21_2::sm_S__5e_y()), rt::N_toFixed, rt::V(1.0))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5360]))));
    return rt::NUL;
}
double C_S__60_Y::m_S_6U() {
    RT_FN("S__60_Y.S_6U");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(108.0)) + 1.0);
    return 0.0;
}
rt::Value C_S__60_Y::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S__60_Y.S_6r");
    (l_A__loc1_ = rt::toint_d(108.0));
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc1_))), rt::V(1.0))));
    ({ rt::Value _v18421 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V((double)(l_A__loc1_)), _v18421); });
    ({ bool _v18422 = false; this->f_S__3c__21_7 = _v18422; _v18422; });
    ({ rt::Value _o18423 = g::SV.C_S_8G__S_5_21_V; rt::Value _i18424 = rt::V(13.0); rt::Value _v18425 = rt::V((rt::tonum(rt::idx_get(_o18423, _i18424)) - 1.0)); rt::idx_set(_o18423, _i18424, _v18425); _v18425; });
    return rt::NUL;
}
bool C_S__60_Y::g_S__2d_6() {
    RT_FN("S__60_Y.S__2d_6_get");
    return false;
    return false;
}
C_S__60_Y* C_S__60_Y::alloc_() {
    C_S__60_Y* o = rt::make<C_S__60_Y>();
    return o;
}
rt::Value C_S__60_Y::mk_(rt::Value* a, int n) {
    C_S__60_Y* o = alloc_();
    o->C_S__60_Y::ctor_();
    return rt::VO(o);
}
bool C_S__60_Y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6U: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__60_Y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__60_Y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6U: out = rt::V(m_S_6U()); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__60_Y::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6U: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__60_Y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60_Y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60_Y__id)); return true;
    default: return false;
    }
}
bool C_S__60_Y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60_Y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60_Y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b_x::ctor_() {
    RT_FN("S__3b_x.S__3b_x");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18426 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v18426); _v18426; });
    ({ bool _v18427 = true; this->f_S_3e = _v18427; _v18427; });
    ({ bool _v18428 = true; this->f_S__25__21__3e_ = _v18428; _v18428; });
}
rt::Value C_S__3b_x::m_S_8_21_1() {
    RT_FN("S__3b_x.S_8_21_1");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
bool C_S__3b_x::m_S_7G() {
    RT_FN("S__3b_x.S_7G");
    return true;
    return false;
}
rt::Value C_S__3b_x::m_S_9T() {
    RT_FN("S__3b_x.S_9T");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
rt::Value C_S__3b_x::m_S__40__22_() {
    RT_FN("S__3b_x.S__40__22_");
    return rt::slot_string((this->f_S__3f__21_6 ? this->m_S_8_21_1() : this->m_S_9T()));
    return rt::NUL;
}
rt::Value C_S__3b_x::m_S_6r() {
    RT_FN("S__3b_x.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    return rt::NUL;
}
rt::Value C_S__3b_x::m_S__3d__21__26_() {
    RT_FN("S__3b_x.S__3d__21__26_");
    (void)(this->C_S__60_6::m_S__3d__21__26_());
    if ((!rt::eq(this->m_S_9T(), rt::VS(g::LS[113])))) {
        (void)(({ rt::Value _o18429 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p18430 = rt::as_ptr<C_S__20_g>(_o18429); _p18430 ? _p18430->m_S__2d__25_(rt::trv(rt::VS(g::LS[5476])), rt::trv(rt::VS(g::LS[5477]), this->f_S_1i), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o18429, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5476])), rt::trv(rt::VS(g::LS[5477]), this->f_S_1i)); }));
    }
    return rt::NUL;
}
bool C_S__3b_x::g_S__2d_6() {
    RT_FN("S__3b_x.S__2d_6_get");
    if ((!this->f_S__3f__21_6)) {
        return ({ bool _t18432 = ({ bool _t18431 = (((double)(C_S_8G::sg_S_8_21_H())) >= ((double)(this->f_S_3_21_r))); _t18431 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(this->f_S_0_21_N))), rt::V((double)(this->f_S__5e__21__25_)))) : _t18431; }); _t18432 ? (bool)(this->m_S_7G()) : _t18432; });
    }
    return ({ bool _t18434 = ({ bool _t18433 = (((double)(C_S_8G::sg_S_8_21_H())) >= ((double)(this->f_S_3_21_r))); _t18433 ? (bool)((((double)(g::SV.C_S__23__21__21___S_3_22_)) == ((double)(this->f_S__2d__21__5e_)))) : _t18433; }); _t18434 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(this->f_S_0_21_N))), rt::V((double)(this->f_S__5e__21__25_)))) : _t18434; });
    return false;
}
bool C_S__3b_x::g_S_9_21__25_() {
    RT_FN("S__3b_x.S_9_21__25__get");
    return ({ bool _t18437 = ({ bool _t18436 = ({ bool _t18435 = (((double)(C_S_8G::sg_S_8_21_H())) >= ((double)(this->f_S_3_21_r))); _t18435 ? (bool)((((double)(g::SV.C_S__23__21__21___S_3_22_)) == ((double)(this->f_S__2d__21__5e_)))) : _t18435; }); _t18436 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(this->f_S_0_21_N))), rt::V((double)(this->f_S__5e__21__25_)))) : _t18436; }); _t18437 ? (bool)(this->f_S__3f__21_6) : _t18437; });
    return false;
}
double C_S__3b_x::g_S_9_21_U() {
    RT_FN("S__3b_x.S_9_21_U_get");
    return 0.0;
    return 0.0;
}
C_S__3b_x* C_S__3b_x::alloc_() {
    C_S__3b_x* o = rt::make<C_S__3b_x>();
    return o;
}
rt::Value C_S__3b_x::mk_(rt::Value* a, int n) {
    C_S__3b_x* o = alloc_();
    o->C_S__3b_x::ctor_();
    return rt::VO(o);
}
bool C_S__3b_x::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_S_3_21_r: out = rt::V((double)(f_S_3_21_r)); return true;
    case NM_S_0_21_N: out = rt::V((double)(f_S_0_21_N)); return true;
    case NM_S__5e__21__25_: out = rt::V((double)(f_S__5e__21__25_)); return true;
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b_x::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_3_21_r: f_S_3_21_r = rt::touint(v); return true;
    case NM_S_0_21_N: f_S_0_21_N = rt::toint(v); return true;
    case NM_S__5e__21__25_: f_S__5e__21__25_ = rt::toint(v); return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b_x::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__3d__21__26_: out = m_S__3d__21__26_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    case NM_S_3_21_r: { rt::Value f = rt::V((double)(f_S_3_21_r)); out = rt::call_value(f, a, n); return true; }
    case NM_S_0_21_N: { rt::Value f = rt::V((double)(f_S_0_21_N)); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__25_: { rt::Value f = rt::V((double)(f_S__5e__21__25_)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b_x::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__3d__21__26_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S_9_21_U: return false;
    case NM_S_3_21_r: return false;
    case NM_S_0_21_N: return false;
    case NM_S__5e__21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b_x::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_x::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_x::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_x::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__22__25_::ctor_() {
    RT_FN("S__20__22__25_.S__20__22__25_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18438 = 969.0; this->f_S_6_21_Z = rt::touint_d(_v18438); _v18438; });
    ({ rt::Value _v18439 = rt::trv(rt::VS(g::LS[5478])); this->f_S_1i = rt::slot_string(_v18439); _v18439; });
    ({ rt::Value _v18440 = rt::VS(g::LS[5479]); this->f_S__5e__21__23_ = rt::slot_string(_v18440); _v18440; });
    ({ double _v18441 = 6.0; this->f_S_9_21_m = rt::toint_d(_v18441); _v18441; });
    ({ double _v18442 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18442); _v18442; });
    ({ double _v18443 = 14.0; this->f_S_0_21_N = rt::toint_d(_v18443); _v18443; });
    ({ double _v18444 = 25.0; this->f_S__5e__21__25_ = rt::toint_d(_v18444); _v18444; });
    ({ double _v18445 = 130.0; this->f_S_3_21_r = rt::touint_d(_v18445); _v18445; });
}
rt::Value C_S__20__22__25_::m_S_8_21_1() {
    RT_FN("S__20__22__25_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S__20__22__25_::m_S_7G() {
    RT_FN("S__20__22__25_.S_7G");
    return ({ bool _t18446 = (C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true) >= 300000.0); _t18446 ? (bool)(rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(45.0))) : _t18446; });
    return false;
}
rt::Value C_S__20__22__25_::m_S_9T() {
    RT_FN("S__20__22__25_.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5481]), C_S__26_c::sm_S_8_21_Z(300000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(45.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__20__22__25_* C_S__20__22__25_::alloc_() {
    C_S__20__22__25_* o = rt::make<C_S__20__22__25_>();
    return o;
}
rt::Value C_S__20__22__25_::mk_(rt::Value* a, int n) {
    C_S__20__22__25_* o = alloc_();
    o->C_S__20__22__25_::ctor_();
    return rt::VO(o);
}
bool C_S__20__22__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__20__22__25_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__20__22__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__20__22__25_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__20__22__25_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__22__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22__25___id)); return true;
    case NM_S_9x: out = rt::V(g::SV.C_S__20__22__25___S_9x); return true;
    case NM_S__27__22__26_: out = rt::V(g::SV.C_S__20__22__25___S__27__22__26_); return true;
    default: return false;
    }
}
bool C_S__20__22__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22__25___id = rt::touint(v); return true;
    case NM_S_9x: g::SV.C_S__20__22__25___S_9x = rt::tonum(v); return true;
    case NM_S__27__22__26_: g::SV.C_S__20__22__25___S__27__22__26_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__20__22__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__22__26_::ctor_() {
    RT_FN("S__20__22__26_.S__20__22__26_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18447 = 960.0; this->f_S_6_21_Z = rt::touint_d(_v18447); _v18447; });
    ({ rt::Value _v18448 = rt::trv(rt::VS(g::LS[5482])); this->f_S_1i = rt::slot_string(_v18448); _v18448; });
    ({ rt::Value _v18449 = rt::VS(g::LS[5483]); this->f_S__5e__21__23_ = rt::slot_string(_v18449); _v18449; });
    ({ double _v18450 = 4.0; this->f_S_9_21_m = rt::toint_d(_v18450); _v18450; });
    ({ double _v18451 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18451); _v18451; });
    ({ double _v18452 = 12.0; this->f_S_0_21_N = rt::toint_d(_v18452); _v18452; });
    ({ double _v18453 = 60.0; this->f_S__5e__21__25_ = rt::toint_d(_v18453); _v18453; });
    ({ double _v18454 = 179.0; this->f_S_3_21_r = rt::touint_d(_v18454); _v18454; });
}
rt::Value C_S__20__22__26_::m_S_8_21_1() {
    RT_FN("S__20__22__26_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5484]), C_S__26_c::sm_S_8_21_Z(C_S__20__22__26_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__20__22__26_::sm_S__2c__21_G() {
    RT_FN("S__20__22__26_.S__2c__21_G");
    return 100.0;
    return 0.0;
}
C_S__20__22__26_* C_S__20__22__26_::alloc_() {
    C_S__20__22__26_* o = rt::make<C_S__20__22__26_>();
    return o;
}
rt::Value C_S__20__22__26_::mk_(rt::Value* a, int n) {
    C_S__20__22__26_* o = alloc_();
    o->C_S__20__22__26_::ctor_();
    return rt::VO(o);
}
bool C_S__20__22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__20__22__26_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__20__22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__20__22__26_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__20__22__26_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__20__22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22__26___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22__26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_6P::ctor_() {
    RT_FN("S_6P.S_6P");
    ({ rt::Value _v18455 = rt::new_vectorv(rt::E_ANY); this->f_S_7_21_2 = _v18455; _v18455; });
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v18456 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v18456); _v18456; });
    ({ bool _v18457 = false; this->f_S_3e = _v18457; _v18457; });
    ({ bool _v18458 = false; this->f_S__40_X = _v18458; _v18458; });
}
rt::Value C_S_6P::m_S__5b__21_C() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S_6P.S__5b__21_C");
    (l_A__loc1_ = rt::toint_d(0.0));
    (void)(this->C_S__60_6::m_S__5b__21_C());
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) < rt::alen(g::SV.C_S_8G__S__2d__21_4))) {
        if ((rt::is_class(rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc1_))), C_S__3b_x::CI) && (((double)(({ rt::Value _o18459 = rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc1_))); C_S__60_6* _p18460 = rt::as_ptr<C_S__60_6>(_o18459); _p18460 ? _p18460->f_S__2d__21__5e_ : rt::toint(rt::dget(_o18459, NM_S__2d__21__5e_)); }))) == ((double)(this->f_S__2d__21__5e_))))) {
            (void)(rt::dcallv(this->f_S_7_21_2, rt::N_push, ({ rt::Value _t18461 = rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc1_))); rt::is_class(_t18461, C_S__3b_x::CI) ? _t18461 : rt::NUL; })));
        }
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S_6P::m_S_1_21_6() {
    RT_FN("S_6P.S_1_21_6");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
rt::Value C_S_6P::m_S__40__22_() {
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc3_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_6P.S__40__22_");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::NUL);
    (l_A__loc4_ = rt::slot_string(rt::NUL));
    (l_A__loc1_ = rt::slot_string(this->m_S_1_21_6()));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::VS(g::LS[143]))));
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) < rt::alen(this->f_S_7_21_2))) {
        (l_A__loc3_ = rt::arr_at(this->f_S_7_21_2, ((double)(l_A__loc2_))));
        (l_A__loc4_ = rt::slot_string(({ rt::Value _o18462 = l_A__loc3_; C_S__3b_x* _p18463 = rt::as_ptr<C_S__3b_x>(_o18462); _p18463 ? _p18463->m_S_9T() : rt::dcallv(_o18462, NM_S_9T); })));
        if ((!rt::eq(l_A__loc4_, rt::VS(g::LS[113])))) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5485]), C_S__26_c::sm_S_8_21_Z((((double)(l_A__loc2_)) + 1.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(((double)(({ rt::Value _o18464 = l_A__loc3_; C_S__3b_x* _p18465 = rt::as_ptr<C_S__3b_x>(_o18464); _p18465 ? _p18465->f_S_3_21_r : rt::touint(rt::dget(_o18464, NM_S_3_21_r)); }))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(((double)(({ rt::Value _o18466 = l_A__loc3_; C_S__3b_x* _p18467 = rt::as_ptr<C_S__3b_x>(_o18466); _p18467 ? _p18467->f_S__5e__21__25_ : rt::toint(rt::dget(_o18466, NM_S__5e__21__25_)); }))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), l_A__loc4_)))));
        } else {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5486]), C_S__26_c::sm_S_8_21_Z((((double)(l_A__loc2_)) + 1.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(((double)(({ rt::Value _o18468 = l_A__loc3_; C_S__3b_x* _p18469 = rt::as_ptr<C_S__3b_x>(_o18468); _p18469 ? _p18469->f_S_3_21_r : rt::touint(rt::dget(_o18468, NM_S_3_21_r)); }))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(((double)(({ rt::Value _o18470 = l_A__loc3_; C_S__3b_x* _p18471 = rt::as_ptr<C_S__3b_x>(_o18470); _p18471 ? _p18471->f_S__5e__21__25_ : rt::toint(rt::dget(_o18470, NM_S__5e__21__25_)); }))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
int32_t C_S_6P::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_6P::dm_S_75_2() { return false; }
rt::Value C_S_6P::dm_S_75_3() { return rt::NUL; }
double C_S_6P::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc6_ = NAN;
    double l_A__loc8_ = NAN;
    double l_A__loc7_ = NAN;
    double l_A__loc5_ = NAN;
    RT_FN("S_6P.S_75");
    (l_A__loc6_ = NAN);
    (l_A__loc8_ = NAN);
    (l_A__loc7_ = NAN);
    if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) {
        return 0.0;
    }
    (l_A__loc5_ = 0.0);
    if ((((double)(l_param1)) == ((double)(this->f_S__2d__21__5e_)))) {
        (l_A__loc6_ = rt::tonum(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(this->f_S_0_21_N)))));
        (l_A__loc8_ = 100000000000000.0);
        (l_A__loc7_ = 0.2);
        if ((((double)(C_S_8G::sg_S__2c_P())) == 2.0)) {
            (l_A__loc8_ = 5000.0);
            (l_A__loc7_ = 1.0);
        } else if ((((double)(C_S_8G::sg_S__2c_P())) == 3.0)) {
            (l_A__loc7_ = 0.45);
        } else if ((((double)(C_S_8G::sg_S__2c_P())) == 4.0)) {
            (l_A__loc8_ = 1e+20);
            (l_A__loc7_ = 0.3);
        }
        (l_A__loc5_ = rt::m_pow((l_A__loc8_ * rt::m_pow(10.0, (l_A__loc6_ / ((double)(C_S_8G::sg_S__2c_P()))))), (1.0 + ((((l_A__loc7_ + (1.0 / ((2.0 * ((double)(C_S_8G::sg_S__2c_P())))))) - ((C_S_8G::sm_S_7d(g::SV.C_S__3f__21_q__id) ? C_S__3f__21_q::sm_S__2c__2b_() : 0.0)))) * rt::m_floor((l_A__loc6_ / 25.0))))));
        if ((C_S_8G::sm_S_7d(g::SV.C_S_51__id) && rt::lt(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(this->f_S_0_21_N))), rt::V(C_S__26_c::sm_S__2c_T(C_S__26_c::dsm_S__2c_T_0()))))) {
            (l_A__loc5_ = rt::m_pow(l_A__loc5_, C_S_51::sm_S__2c__2b_()));
        }
    }
    return l_A__loc5_;
    return 0.0;
}
rt::Value C_S_6P::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    int32_t l_A__loc5_ = 0;
    double l_A__loc4_ = NAN;
    RT_FN("S_6P.S_6r");
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::NUL);
    (l_A__loc3_ = rt::slot_string(rt::NUL));
    (void)(this->C_S__60_6::m_S_6r());
    ({ bool _v18472 = false; this->f_S__3c__21_7 = _v18472; _v18472; });
    ({ rt::Value _o18473 = g::SV.C_S_8G__S_5_21_V; rt::Value _i18474 = rt::V(13.0); rt::Value _v18475 = rt::V((rt::tonum(rt::idx_get(_o18473, _i18474)) - 1.0)); rt::idx_set(_o18473, _i18474, _v18475); _v18475; });
    if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) {
        (g::SV.C_S__23__21__21___S_3_22_ = this->f_S__2d__21__5e_);
    } else if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == ((double)(this->f_S__2d__21__5e_)))) {
        (l_A__loc5_ = this->f_S_0_21_N);
        (l_A__loc4_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(l_A__loc5_))), rt::V(1.0))));
        ({ rt::Value _v18476 = rt::V(l_A__loc4_); rt::idx_set(g::SV.C_S_8G__S_1_21__23_, rt::V((double)(l_A__loc5_)), _v18476); });
        (g::SV.C_S__23__21__21___S__40__21_r = rt::toint_d(0.0));
        (l_A__loc1_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc1_)) < rt::alen(this->f_S_7_21_2))) {
            (l_A__loc2_ = rt::arr_at(this->f_S_7_21_2, ((double)(l_A__loc1_))));
            if (((((double)(C_S_8G::sg_S_8_21_H())) >= ((double)(({ rt::Value _o18477 = l_A__loc2_; C_S__3b_x* _p18478 = rt::as_ptr<C_S__3b_x>(_o18477); _p18478 ? _p18478->f_S_3_21_r : rt::touint(rt::dget(_o18477, NM_S_3_21_r)); })))) && rt::eq(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(this->f_S_0_21_N))), rt::V((double)(({ rt::Value _o18479 = l_A__loc2_; C_S__3b_x* _p18480 = rt::as_ptr<C_S__3b_x>(_o18479); _p18480 ? _p18480->f_S__5e__21__25_ : rt::toint(rt::dget(_o18479, NM_S__5e__21__25_)); })))))) {
                (l_A__loc3_ = rt::slot_string(({ rt::Value _o18481 = l_A__loc2_; C_S__3b_x* _p18482 = rt::as_ptr<C_S__3b_x>(_o18481); _p18482 ? _p18482->m_S_9T() : rt::dcallv(_o18481, NM_S_9T); })));
                if ((!rt::eq(l_A__loc3_, rt::VS(g::LS[113])))) {
                    (void)(({ rt::Value _o18483 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p18484 = rt::as_ptr<C_S__20_g>(_o18483); _p18484 ? _p18484->m_S__2d__25_(rt::trv(rt::VS(g::LS[5487])), rt::trv(rt::VS(g::LS[5488])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o18483, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5487])), rt::trv(rt::VS(g::LS[5488]))); }));
                } else {
                    (void)(({ rt::Value _o18485 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p18486 = rt::as_ptr<C_S__20_g>(_o18485); _p18486 ? _p18486->m_S__2d__25_(rt::trv(rt::VS(g::LS[5476])), rt::trv(rt::VS(g::LS[5489])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o18485, NM_S__2d__25_, rt::trv(rt::VS(g::LS[5476])), rt::trv(rt::VS(g::LS[5489]))); }));
                }
            }
            (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
        }
    }
    return rt::NUL;
}
bool C_S_6P::g_S__2d_6() {
    RT_FN("S_6P.S__2d_6_get");
    return ({ bool _t18487 = (((double)(g::SV.C_S__23__21__21___S_3_22_)) == ((double)(this->f_S__2d__21__5e_))); _t18487 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 60.0)) : _t18487; });
    return false;
}
bool C_S_6P::g_S_9_21__25_() {
    bool l_A__loc2_ = false;
    bool l_A__loc1_ = false;
    RT_FN("S_6P.S_9_21__25__get");
    if ((rt::ge(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(this->f_S_0_21_N))), rt::V((((double)(C_S_8G::sg_S__2c_P())) * 25.0))) && (!g::SV.C_S__3d_E__S__3b__21_N))) {
        return false;
    }
    (l_A__loc2_ = rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, ((double)(this->f_S__2d__21__5e_))), rt::V(400.0)));
    if ((({ bool _t18488 = (((double)(this->f_S__2d__21__5e_)) == 6.0); _t18488 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 2.0), rt::V(400.0))) : _t18488; }) && rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 3.0), rt::V(400.0)))) {
        (l_A__loc2_ = true);
    } else if ((({ bool _t18489 = (((double)(this->f_S__2d__21__5e_)) == 7.0); _t18489 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 1.0), rt::V(400.0))) : _t18489; }) && rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 5.0), rt::V(400.0)))) {
        (l_A__loc2_ = true);
    } else if ((({ bool _t18490 = (((double)(this->f_S__2d__21__5e_)) == 8.0); _t18490 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 0.0), rt::V(400.0))) : _t18490; }) && rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 4.0), rt::V(400.0)))) {
        (l_A__loc2_ = true);
    } else if ((((double)(this->f_S__2d__21__5e_)) == 9.0)) {
        (l_A__loc2_ = ({ bool _t18494 = (({ bool _t18493 = ({ bool _t18492 = ({ bool _t18491 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0); _t18491 ? _t18491 : (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)); }); _t18492 ? _t18492 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }); _t18493 ? _t18493 : (bool)(C_S__26_c::sm_S__5b__21_s(g::SV.C_S_6_22_0__id)); })); _t18494 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 9.0), rt::V(400.0))) : _t18494; }));
    } else if ((((double)(this->f_S__2d__21__5e_)) == 10.0)) {
        (l_A__loc2_ = ({ bool _t18498 = (({ bool _t18497 = ({ bool _t18496 = ({ bool _t18495 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0); _t18495 ? _t18495 : (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)); }); _t18496 ? _t18496 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }); _t18497 ? _t18497 : (bool)(C_S__26_c::sm_S__5b__21_s(g::SV.C_S_6_22_0__id)); })); _t18498 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 10.0), rt::V(400.0))) : _t18498; }));
    } else if ((((double)(this->f_S__2d__21__5e_)) == 12.0)) {
        (l_A__loc2_ = ({ bool _t18503 = ({ bool _t18502 = (({ bool _t18501 = ({ bool _t18500 = ({ bool _t18499 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0); _t18499 ? _t18499 : (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)); }); _t18500 ? _t18500 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }); _t18501 ? _t18501 : (bool)(C_S__26_c::sm_S__5b__21_s(g::SV.C_S_6_22_0__id)); })); _t18502 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 9.0), rt::V(400.0))) : _t18502; }); _t18503 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 10.0), rt::V(400.0))) : _t18503; }));
    } else if ((((double)(this->f_S__2d__21__5e_)) == 13.0)) {
        (l_A__loc2_ = ({ bool _t18510 = ({ bool _t18509 = ({ bool _t18508 = ({ bool _t18507 = (({ bool _t18506 = ({ bool _t18505 = ({ bool _t18504 = (((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0); _t18504 ? _t18504 : (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)); }); _t18505 ? _t18505 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }); _t18506 ? _t18506 : (bool)(C_S__26_c::sm_S__5b__21_s(g::SV.C_S_6_22_0__id)); })); _t18507 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t18507; }); _t18508 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t18508; }); _t18509 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 2.0), rt::V(400.0))) : _t18509; }); _t18510 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 4.0), rt::V(400.0))) : _t18510; }));
    } else if ((((double)(this->f_S__2d__21__5e_)) == 14.0)) {
        (l_A__loc2_ = ({ bool _t18517 = ({ bool _t18516 = ({ bool _t18515 = ({ bool _t18514 = (({ bool _t18513 = ({ bool _t18512 = ({ bool _t18511 = (((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0); _t18511 ? _t18511 : (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)); }); _t18512 ? _t18512 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }); _t18513 ? _t18513 : (bool)(C_S__26_c::sm_S__5b__21_s(g::SV.C_S_6_22_0__id)); })); _t18514 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t18514; }); _t18515 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t18515; }); _t18516 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 0.0), rt::V(400.0))) : _t18516; }); _t18517 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 5.0), rt::V(400.0))) : _t18517; }));
    } else if ((((double)(this->f_S__2d__21__5e_)) == 15.0)) {
        (l_A__loc2_ = ({ bool _t18524 = ({ bool _t18523 = ({ bool _t18522 = ({ bool _t18521 = (({ bool _t18520 = ({ bool _t18519 = ({ bool _t18518 = (((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0); _t18518 ? _t18518 : (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)); }); _t18519 ? _t18519 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)); }); _t18520 ? _t18520 : (bool)(C_S__26_c::sm_S__5b__21_s(g::SV.C_S_6_22_0__id)); })); _t18521 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t18521; }); _t18522 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t18522; }); _t18523 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 1.0), rt::V(400.0))) : _t18523; }); _t18524 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, 3.0), rt::V(400.0))) : _t18524; }));
    }
    (l_A__loc1_ = ({ bool _t18526 = C_S_8G::sm_S_7d(this->f_S_6_21_p); _t18526 ? _t18526 : (bool)(({ bool _t18525 = C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__27__22_8__id); _t18525 ? (bool)(C_S__27__22_8::sm_S__2d__22_K(this->f_S__2d__21__5e_)) : _t18525; })); }));
    return ({ bool _t18531 = ({ bool _t18530 = l_A__loc2_; _t18530 ? (bool)((({ bool _t18529 = ({ bool _t18528 = ({ bool _t18527 = (!(((double)(this->f_S__2d__21__5e_)) == ((double)(g::SV.C_S_8G__S__2d__21__5e_)))); _t18527 ? (bool)((!(((double)(this->f_S__2d__21__5e_)) == ((double)(g::SV.C_S_8G__S__23_3))))) : _t18527; }); _t18528 ? (bool)((!(((double)(this->f_S__2d__21__5e_)) == ((double)(g::SV.C_S_8G__S__2d__21_x))))) : _t18528; }); _t18529 ? _t18529 : (bool)(C_S__26_c::sm_S__5b__21_s(g::SV.C_S_6_22_0__id)); }))) : _t18530; }); _t18531 ? (bool)(l_A__loc1_) : _t18531; });
    return false;
}
double C_S_6P::g_S_9_21_U() {
    RT_FN("S_6P.S_9_21_U_get");
    return 0.0;
    return 0.0;
}
C_S_6P* C_S_6P::alloc_() {
    C_S_6P* o = rt::make<C_S_6P>();
    return o;
}
rt::Value C_S_6P::mk_(rt::Value* a, int n) {
    C_S_6P* o = alloc_();
    o->C_S_6P::ctor_();
    return rt::VO(o);
}
bool C_S_6P::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_S_0_21_N: out = rt::V((double)(f_S_0_21_N)); return true;
    case NM_S_7_21_2: out = f_S_7_21_2; return true;
    case NM_S_6_21_p: out = rt::V((double)(f_S_6_21_p)); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6P::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_0_21_N: f_S_0_21_N = rt::toint(v); return true;
    case NM_S_7_21_2: f_S_7_21_2 = v; return true;
    case NM_S_6_21_p: f_S_6_21_p = rt::touint(v); return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6P::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_6P::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_6P::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_6P::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    case NM_S_0_21_N: { rt::Value f = rt::V((double)(f_S_0_21_N)); out = rt::call_value(f, a, n); return true; }
    case NM_S_7_21_2: { rt::Value f = f_S_7_21_2; out = rt::call_value(f, a, n); return true; }
    case NM_S_6_21_p: { rt::Value f = rt::V((double)(f_S_6_21_p)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6P::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_1_21_6: return true;
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S_9_21_U: return false;
    case NM_S_0_21_N: return false;
    case NM_S_7_21_2: return false;
    case NM_S_6_21_p: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6P::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6P::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6P::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6P::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__22__27_::ctor_() {
    RT_FN("S__20__22__27_.S__20__22__27_");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v18532 = 955.0; this->f_S_6_21_Z = rt::touint_d(_v18532); _v18532; });
    ({ rt::Value _v18533 = rt::trv(rt::VS(g::LS[5490])); this->f_S_1i = rt::slot_string(_v18533); _v18533; });
    ({ rt::Value _v18534 = rt::VS(g::LS[5491]); this->f_S__5e__21__23_ = rt::slot_string(_v18534); _v18534; });
    ({ double _v18535 = 4.0; this->f_S_9_21_m = rt::toint_d(_v18535); _v18535; });
    ({ double _v18536 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18536); _v18536; });
    ({ double _v18537 = 12.0; this->f_S_0_21_N = rt::toint_d(_v18537); _v18537; });
}
rt::Value C_S__20__22__27_::m_S__5b__21_C() {
    RT_FN("S__20__22__27_.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v18538 = g::SV.C_S_2_22__24___id; this->f_S_6_21_p = _v18538; _v18538; });
    return rt::NUL;
}
int32_t C_S__20__22__27_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__20__22__27_::dm_S_75_2() { return false; }
rt::Value C_S__20__22__27_::dm_S_75_3() { return rt::NUL; }
double C_S__20__22__27_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__20__22__27_.S_75");
    if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) {
        return 0.0;
    }
    if (C_S__26_c::sm_S_4_21_(this->f_S__2d__21__5e_, l_param1)) {
        return this->C_S_6P::m_S_75(this->f_S__2d__21__5e_, C_S_6P::dm_S_75_1(), C_S_6P::dm_S_75_2(), C_S_6P::dm_S_75_3());
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__20__22__27_::m_S_1_21_6() {
    RT_FN("S__20__22__27_.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5492]), rt::dcallv(rt::V(g::SV.C_S__20__22__27___S_1_21_S), rt::N_toString), C_S__26_c::sm_S_8_21_Z(C_S__20__22__27_::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__20__22__27_::sm_S__3f__21__3c_() {
    RT_FN("S__20__22__27_.S__3f__21__3c_");
    return (g::SV.C_S__20__22__27___S_1_21_S * C_S__26_c::sm_S__27__22__2d_(rt::toint_d(12.0), g::SV.C_S__20__22__27___id));
    return 0.0;
}
C_S__20__22__27_* C_S__20__22__27_::alloc_() {
    C_S__20__22__27_* o = rt::make<C_S__20__22__27_>();
    return o;
}
rt::Value C_S__20__22__27_::mk_(rt::Value* a, int n) {
    C_S__20__22__27_* o = alloc_();
    o->C_S__20__22__27_::ctor_();
    return rt::VO(o);
}
bool C_S__20__22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S__20__22__27_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S__20__22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__20__22__27_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__20__22__27_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__20__22__27_::dm_S_75_3()))); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S__20__22__27_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_75: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S__20__22__27_::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__20__22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22__27___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__20__22__27___S_1_21_S); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22__27___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__20__22__27___S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__20__22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__20__22_L::ctor_() {
    RT_FN("S__20__22_L.S__20__22_L");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18539 = 1238.0; this->f_S_6_21_Z = rt::touint_d(_v18539); _v18539; });
    ({ rt::Value _v18540 = rt::trv(rt::VS(g::LS[5493])); this->f_S_1i = rt::slot_string(_v18540); _v18540; });
    ({ rt::Value _v18541 = rt::VS(g::LS[5494]); this->f_S__5e__21__23_ = rt::slot_string(_v18541); _v18541; });
    ({ double _v18542 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18542); _v18542; });
    ({ double _v18543 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18543); _v18543; });
    ({ double _v18544 = 3.0; this->f_S_0_21_N = rt::toint_d(_v18544); _v18544; });
    ({ double _v18545 = 67.0; this->f_S__5e__21__25_ = rt::toint_d(_v18545); _v18545; });
    ({ double _v18546 = 198.0; this->f_S_3_21_r = rt::touint_d(_v18546); _v18546; });
}
rt::Value C_S__20__22_L::m_S_8_21_1() {
    RT_FN("S__20__22_L.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5495]), C_S__26_c::sm_S_8_21_Z(C_S__20__22_L::sm_S_6_22__24_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__20__22_L::sm_S_6_22__24_() {
    RT_FN("S__20__22_L.S_6_22__24_");
    return rt::m_min2(3000.0, (4.0 * rt::m_pow(C_S_2_3c_::sm_S__2c__21_G(30.0), 0.5)));
    return 0.0;
}
C_S__20__22_L* C_S__20__22_L::alloc_() {
    C_S__20__22_L* o = rt::make<C_S__20__22_L>();
    return o;
}
rt::Value C_S__20__22_L::mk_(rt::Value* a, int n) {
    C_S__20__22_L* o = alloc_();
    o->C_S__20__22_L::ctor_();
    return rt::VO(o);
}
bool C_S__20__22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__20__22_L::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__20__22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__20__22_L::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__20__22_L::smeth_(int id) {
    switch (id) {
    case NM_S_6_22__24_: return true;
    default: return false;
    }
}
bool C_S__20__22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22_L__id)); return true;
    case NM_S_6_22__24_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_22__24_: out = rt::V(sm_S_6_22__24_()); return true;
    default: return false;
    }
}
void C_S__20_s::ctor_() {
    RT_FN("S__20_s.S__20_s");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18547 = 652.0; this->f_S_6_21_Z = rt::touint_d(_v18547); _v18547; });
    ({ rt::Value _v18548 = rt::trv(rt::VS(g::LS[5496])); this->f_S_1i = rt::slot_string(_v18548); _v18548; });
    ({ rt::Value _v18549 = rt::VS(g::LS[5497]); this->f_S__5e__21__23_ = rt::slot_string(_v18549); _v18549; });
    ({ double _v18550 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18550); _v18550; });
    ({ double _v18551 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18551); _v18551; });
    ({ double _v18552 = 2.0; this->f_S_0_21_N = rt::toint_d(_v18552); _v18552; });
    ({ double _v18553 = 29.0; this->f_S__5e__21__25_ = rt::toint_d(_v18553); _v18553; });
    ({ double _v18554 = 112.0; this->f_S_3_21_r = rt::touint_d(_v18554); _v18554; });
}
rt::Value C_S__20_s::m_S_8_21_1() {
    RT_FN("S__20_s.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5498])));
    return rt::NUL;
}
C_S__20_s* C_S__20_s::alloc_() {
    C_S__20_s* o = rt::make<C_S__20_s>();
    return o;
}
rt::Value C_S__20_s::mk_(rt::Value* a, int n) {
    C_S__20_s* o = alloc_();
    o->C_S__20_s::ctor_();
    return rt::VO(o);
}
bool C_S__20_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__20_s::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__20_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__20_s::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__20_s::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20_s__id)); return true;
    default: return false;
    }
}
bool C_S__20_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__21__5e_::ctor_() {
    RT_FN("S__21__21__5e_.S__21__21__5e_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18555 = 668.0; this->f_S_6_21_Z = rt::touint_d(_v18555); _v18555; });
    ({ rt::Value _v18556 = rt::trv(rt::VS(g::LS[5499])); this->f_S_1i = rt::slot_string(_v18556); _v18556; });
    ({ rt::Value _v18557 = rt::VS(g::LS[5500]); this->f_S__5e__21__23_ = rt::slot_string(_v18557); _v18557; });
    ({ double _v18558 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18558); _v18558; });
    ({ double _v18559 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18559); _v18559; });
    ({ double _v18560 = 9.0; this->f_S_0_21_N = rt::toint_d(_v18560); _v18560; });
    ({ double _v18561 = 15.0; this->f_S__5e__21__25_ = rt::toint_d(_v18561); _v18561; });
    ({ double _v18562 = 75.0; this->f_S_3_21_r = rt::touint_d(_v18562); _v18562; });
}
rt::Value C_S__21__21__5e_::m_S_8_21_1() {
    RT_FN("S__21__21__5e_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S__21__21__5e_::m_S_7G() {
    RT_FN("S__21__21__5e_.S_7G");
    return (C_S_8G::sg_S_1_21_5() >= g::SV.C_S__21__21__5e___S__22__21_M);
    return false;
}
rt::Value C_S__21__21__5e_::m_S_9T() {
    RT_FN("S__21__21__5e_.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5501]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__21__21__5e___S__22__21_M, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__21__21__5e_* C_S__21__21__5e_::alloc_() {
    C_S__21__21__5e_* o = rt::make<C_S__21__21__5e_>();
    return o;
}
rt::Value C_S__21__21__5e_::mk_(rt::Value* a, int n) {
    C_S__21__21__5e_* o = alloc_();
    o->C_S__21__21__5e_::ctor_();
    return rt::VO(o);
}
bool C_S__21__21__5e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__21__21__5e_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__21__21__5e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__21__21__5e_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__21__21__5e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21__5e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21__5e___id)); return true;
    case NM_S__22__21_M: out = rt::V(g::SV.C_S__21__21__5e___S__22__21_M); return true;
    default: return false;
    }
}
bool C_S__21__21__5e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21__5e___id = rt::touint(v); return true;
    case NM_S__22__21_M: g::SV.C_S__21__21__5e___S__22__21_M = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__21__21__5e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__22__25_::ctor_() {
    RT_FN("S__21__22__25_.S__21__22__25_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18563 = 950.0; this->f_S_6_21_Z = rt::touint_d(_v18563); _v18563; });
    ({ rt::Value _v18564 = rt::trv(rt::VS(g::LS[5502])); this->f_S_1i = rt::slot_string(_v18564); _v18564; });
    ({ rt::Value _v18565 = rt::VS(g::LS[5503]); this->f_S__5e__21__23_ = rt::slot_string(_v18565); _v18565; });
    ({ double _v18566 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18566); _v18566; });
    ({ double _v18567 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18567); _v18567; });
    ({ double _v18568 = 3.0; this->f_S_0_21_N = rt::toint_d(_v18568); _v18568; });
    ({ double _v18569 = 57.0; this->f_S__5e__21__25_ = rt::toint_d(_v18569); _v18569; });
    ({ double _v18570 = 172.0; this->f_S_3_21_r = rt::touint_d(_v18570); _v18570; });
}
rt::Value C_S__21__22__25_::m_S_8_21_1() {
    RT_FN("S__21__22__25_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5504]), C_S__26_c::sm_S_8_21_Z(C_S__21__22__25_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__21__22__25_::sm_S__2c__21_G() {
    RT_FN("S__21__22__25_.S__2c__21_G");
    return 100.0;
    return 0.0;
}
C_S__21__22__25_* C_S__21__22__25_::alloc_() {
    C_S__21__22__25_* o = rt::make<C_S__21__22__25_>();
    return o;
}
rt::Value C_S__21__22__25_::mk_(rt::Value* a, int n) {
    C_S__21__22__25_* o = alloc_();
    o->C_S__21__22__25_::ctor_();
    return rt::VO(o);
}
bool C_S__21__22__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__21__22__25_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__21__22__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__21__22__25_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__21__22__25_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__21__22__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22__25___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__22__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22__25___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__22__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__21__22__27_::ctor_() {
    RT_FN("S__21__22__27_.S__21__22__27_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18571 = 962.0; this->f_S_6_21_Z = rt::touint_d(_v18571); _v18571; });
    ({ rt::Value _v18572 = rt::trv(rt::VS(g::LS[5505])); this->f_S_1i = rt::slot_string(_v18572); _v18572; });
    ({ rt::Value _v18573 = rt::VS(g::LS[5506]); this->f_S__5e__21__23_ = rt::slot_string(_v18573); _v18573; });
    ({ double _v18574 = 5.0; this->f_S_9_21_m = rt::toint_d(_v18574); _v18574; });
    ({ double _v18575 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18575); _v18575; });
    ({ double _v18576 = 13.0; this->f_S_0_21_N = rt::toint_d(_v18576); _v18576; });
    ({ double _v18577 = 10.0; this->f_S__5e__21__25_ = rt::toint_d(_v18577); _v18577; });
    ({ double _v18578 = 130.0; this->f_S_3_21_r = rt::touint_d(_v18578); _v18578; });
}
rt::Value C_S__21__22__27_::m_S_8_21_1() {
    RT_FN("S__21__22__27_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5507]), C_S__26_c::sm_S_8_21_Z(C_S__21__22__27_::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__21__22__27_::sm_S__3f__21__3c_() {
    RT_FN("S__21__22__27_.S__3f__21__3c_");
    return (0.7 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__27__22__25___id, false, false, C_S__26_c::dsm_S_7i_3()), 0.7));
    return 0.0;
}
C_S__21__22__27_* C_S__21__22__27_::alloc_() {
    C_S__21__22__27_* o = rt::make<C_S__21__22__27_>();
    return o;
}
rt::Value C_S__21__22__27_::mk_(rt::Value* a, int n) {
    C_S__21__22__27_* o = alloc_();
    o->C_S__21__22__27_::ctor_();
    return rt::VO(o);
}
bool C_S__21__22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__21__22__27_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__21__22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__21__22__27_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__21__22__27_::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__21__22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22__27___id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22__27___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__21__22_L::ctor_() {
    RT_FN("S__21__22_L.S__21__22_L");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18579 = 1237.0; this->f_S_6_21_Z = rt::touint_d(_v18579); _v18579; });
    ({ rt::Value _v18580 = rt::trv(rt::VS(g::LS[5508])); this->f_S_1i = rt::slot_string(_v18580); _v18580; });
    ({ rt::Value _v18581 = rt::VS(g::LS[5509]); this->f_S__5e__21__23_ = rt::slot_string(_v18581); _v18581; });
    ({ double _v18582 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18582); _v18582; });
    ({ double _v18583 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18583); _v18583; });
    ({ double _v18584 = 0.0; this->f_S_0_21_N = rt::toint_d(_v18584); _v18584; });
    ({ double _v18585 = 72.0; this->f_S__5e__21__25_ = rt::toint_d(_v18585); _v18585; });
    ({ double _v18586 = 208.0; this->f_S_3_21_r = rt::touint_d(_v18586); _v18586; });
}
rt::Value C_S__21__22_L::m_S_8_21_1() {
    RT_FN("S__21__22_L.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5510]), C_S__26_c::sm_S_8_21_Z(C_S__21__22_L::sm_S__40_V(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__21__22_L::sm_S__40_V() {
    RT_FN("S__21__22_L.S__40_V");
    return (1.25 * rt::m_pow(rt::m_log((1.0 + (C_S__26_c::sm_S_57(C_S__26_c::dsm_S_57_0()) * 30.0))), 1.25));
    return 0.0;
}
C_S__21__22_L* C_S__21__22_L::alloc_() {
    C_S__21__22_L* o = rt::make<C_S__21__22_L>();
    return o;
}
rt::Value C_S__21__22_L::mk_(rt::Value* a, int n) {
    C_S__21__22_L* o = alloc_();
    o->C_S__21__22_L::ctor_();
    return rt::VO(o);
}
bool C_S__21__22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__21__22_L::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__21__22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__21__22_L::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__21__22_L::smeth_(int id) {
    switch (id) {
    case NM_S__40_V: return true;
    default: return false;
    }
}
bool C_S__21__22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22_L__id)); return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    default: return false;
    }
}
void static_init_9(std::vector<std::string>& errs) {
    try { (g::SV.C_S_8_21_r__S__26__22__3d_ = 20.0); } catch (...) { errs.push_back(std::string("S_8_21_r.S__26__22__3d_: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__21_t__S__26__22__3f_ = rt::touint_d(1.0)); } catch (...) { errs.push_back(std::string("S__3d__21_t.S__26__22__3f_: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__21_t__S_1_21_S = 0.2); } catch (...) { errs.push_back(std::string("S__3d__21_t.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__21_t__S_6_21_c = 0.1); } catch (...) { errs.push_back(std::string("S__3d__21_t.S_6_21_c: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__21_2__S__60_5 = 100.0); } catch (...) { errs.push_back(std::string("S__20__21_2.S__60_5: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__21_2__S_5_21__5d_ = 1.0); } catch (...) { errs.push_back(std::string("S__20__21_2.S_5_21__5d_: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__21_2__S__26__21_U = 1.0); } catch (...) { errs.push_back(std::string("S__20__21_2.S__26__21_U: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__21_2__S__5d_l = 2.0); } catch (...) { errs.push_back(std::string("S__20__21_2.S__5d_l: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__21_2__S__60_t = 1.0); } catch (...) { errs.push_back(std::string("S__20__21_2.S__60_t: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__60___S_2_40_ = 2.0); } catch (...) { errs.push_back(std::string("S__21__60_.S_2_40_: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__60___ids = rt::arr_lit({rt::VS(g::LS[5222])})); } catch (...) { errs.push_back(std::string("S__21__60_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__21_9__S_1_21_S = 5.0); } catch (...) { errs.push_back(std::string("S__23__21_9.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__2b___S_2_40_ = 1.0); } catch (...) { errs.push_back(std::string("S__23__2b_.S_2_40_: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__2b___ids = rt::arr_lit({rt::VS(g::LS[5227])})); } catch (...) { errs.push_back(std::string("S__23__2b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__23_g__S__27_D = 10.0); } catch (...) { errs.push_back(std::string("S__23_g.S__27_D: ") + rt::exc_text()); }
    try { (g::SV.C_S__23_g__ids = rt::arr_lit({rt::VS(g::LS[5231])})); } catch (...) { errs.push_back(std::string("S__23_g.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__22__21__2d___S__26_Z = rt::arr_lit({rt::V(5.0), rt::V(25.0), rt::V(75.0), rt::V(150.0), rt::V(200.0), rt::V(300.0), rt::V(400.0), rt::V(500.0), rt::V(600.0), rt::V(700.0), rt::V(800.0), rt::V(900.0), rt::V(1000.0), rt::V(1100.0), rt::V(1250.0), rt::V(1500.0), rt::V(1750.0), rt::V(2000.0), rt::V(2500.0), rt::V(3500.0), rt::V(4000.0), rt::V(10000.0), rt::V(18000.0)})); } catch (...) { errs.push_back(std::string("S__22__21__2d_.S__26_Z: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c__26___ids = rt::arr_lit({rt::VS(g::LS[5252])})); } catch (...) { errs.push_back(std::string("S__3c__26_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__22_J__S__22__21_m = 2.0); } catch (...) { errs.push_back(std::string("S__3f__22_J.S__22__21_m: ") + rt::exc_text()); }
    try { (g::SV.C_S__25_p__S__3c__21_O = rt::new_vectorv(rt::E_NUM)); } catch (...) { errs.push_back(std::string("S__25_p.S__3c__21_O: ") + rt::exc_text()); }
    try { (g::SV.C_S__25_p__S__20__21_o = rt::new_vectorv(rt::E_NUM)); } catch (...) { errs.push_back(std::string("S__25_p.S__20__21_o: ") + rt::exc_text()); }
    try { (g::SV.C_S__27_k__S__27_D = 35.0); } catch (...) { errs.push_back(std::string("S__27_k.S__27_D: ") + rt::exc_text()); }
    try { (g::SV.C_S__27_k__ids = rt::arr_lit({rt::VS(g::LS[5316])})); } catch (...) { errs.push_back(std::string("S__27_k.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_X__S__27_D = 10.0); } catch (...) { errs.push_back(std::string("S__2d__21_X.S__27_D: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_X__S_2_40_ = 2.0); } catch (...) { errs.push_back(std::string("S__2d__21_X.S_2_40_: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_X__ids = rt::arr_lit({rt::VS(g::LS[5332])})); } catch (...) { errs.push_back(std::string("S__2d__21_X.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d_r__ids = rt::arr_lit({rt::VS(g::LS[5341])})); } catch (...) { errs.push_back(std::string("S__2d_r.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_21_P__S__27_D = 15.0); } catch (...) { errs.push_back(std::string("S_0_21_P.S__27_D: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_21_P__ids = rt::arr_lit({rt::VS(g::LS[5343])})); } catch (...) { errs.push_back(std::string("S_0_21_P.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_0f__S_4_21_D = 325.0); } catch (...) { errs.push_back(std::string("S_0f.S_4_21_D: ") + rt::exc_text()); }
    try { (g::SV.C_S_0f__S_3_21__27_ = 650.0); } catch (...) { errs.push_back(std::string("S_0f.S_3_21__27_: ") + rt::exc_text()); }
    try { (g::SV.C_S_0f__S_7m = 7500.0); } catch (...) { errs.push_back(std::string("S_0f.S_7m: ") + rt::exc_text()); }
    try { (g::SV.C_S_0f__ids = rt::arr_lit({rt::VS(g::LS[5352])})); } catch (...) { errs.push_back(std::string("S_0f.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_3o__ids = rt::arr_lit({rt::VS(g::LS[5367])})); } catch (...) { errs.push_back(std::string("S_3o.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_5_21_J__S__27_D = 10.0); } catch (...) { errs.push_back(std::string("S_5_21_J.S__27_D: ") + rt::exc_text()); }
    try { (g::SV.C_S_5_21_J__S_2_40_ = 2.0); } catch (...) { errs.push_back(std::string("S_5_21_J.S_2_40_: ") + rt::exc_text()); }
    try { (g::SV.C_S_5_26___ids = rt::arr_lit({rt::VS(g::LS[5383])})); } catch (...) { errs.push_back(std::string("S_5_26_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_5Z__ids = rt::arr_lit({rt::VS(g::LS[5387])})); } catch (...) { errs.push_back(std::string("S_5Z.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_6_22__2d___S__27_D = 10.0); } catch (...) { errs.push_back(std::string("S_6_22__2d_.S__27_D: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_22_9__S__3e_B = 70.0); } catch (...) { errs.push_back(std::string("S_7_22_9.S__3e_B: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_22_9__S__5e__21_n = 4.0); } catch (...) { errs.push_back(std::string("S_7_22_9.S__5e__21_n: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_21_S__S_9x = 7000.0); } catch (...) { errs.push_back(std::string("S_9_21_S.S_9x: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_21_S__S__25__21__5d_ = 800.0); } catch (...) { errs.push_back(std::string("S_9_21_S.S__25__21__5d_: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_21_S__S__27__21_I = 10000.0); } catch (...) { errs.push_back(std::string("S_9_21_S.S__27__21_I: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_21_S__ids = rt::arr_lit({rt::VS(g::LS[5421])})); } catch (...) { errs.push_back(std::string("S_9_21_S.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_2d___S__27_D = 10.0); } catch (...) { errs.push_back(std::string("S_9_2d_.S__27_D: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d_G__ids = rt::arr_lit({rt::VS(g::LS[5429])})); } catch (...) { errs.push_back(std::string("S__3d_G.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_J__S_7_21__22_ = 0.01); } catch (...) { errs.push_back(std::string("S__40__22_J.S_7_21__22_: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_J__S__60_5 = 35.0); } catch (...) { errs.push_back(std::string("S__40__22_J.S__60_5: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_J__S__3b__21_6 = 1.0); } catch (...) { errs.push_back(std::string("S__40__22_J.S__3b__21_6: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_J__S__3f__21_Y = 2.0); } catch (...) { errs.push_back(std::string("S__40__22_J.S__3f__21_Y: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_J__S_4V = 0.5); } catch (...) { errs.push_back(std::string("S__40__22_J.S_4V: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_J__S__60_t = 0.2); } catch (...) { errs.push_back(std::string("S__40__22_J.S__60_t: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_J__ids = rt::arr_lit({rt::VS(g::LS[5442])})); } catch (...) { errs.push_back(std::string("S__40__22_J.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d__21__2d___ids = rt::arr_lit({rt::VS(g::LS[5453])})); } catch (...) { errs.push_back(std::string("S__5d__21__2d_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__21_3__ids = rt::arr_lit({rt::VS(g::LS[5459])})); } catch (...) { errs.push_back(std::string("S__5e__21_3.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e_D__ids = rt::arr_lit({rt::VS(g::LS[5463])})); } catch (...) { errs.push_back(std::string("S__5e_D.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e_i__ids = rt::arr_lit({rt::VS(g::LS[5469])})); } catch (...) { errs.push_back(std::string("S__5e_i.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__22__25___S_9x = 300000.0); } catch (...) { errs.push_back(std::string("S__20__22__25_.S_9x: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__22__25___S__27__22__26_ = 45.0); } catch (...) { errs.push_back(std::string("S__20__22__25_.S__27__22__26_: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__22__27___S_1_21_S = 15.0); } catch (...) { errs.push_back(std::string("S__20__22__27_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__21__5e___S__22__21_M = 8000.0); } catch (...) { errs.push_back(std::string("S__21__21__5e_.S__22__21_M: ") + rt::exc_text()); }
}
}  // namespace g
