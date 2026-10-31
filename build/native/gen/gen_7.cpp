// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S_9_22_D::ctor_() {
    RT_FN("S_9_22_D.S_9_22_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10975 = 195.0; this->f_S_6_21_Z = rt::touint_d(_v10975); _v10975; });
    ({ rt::Value _v10976 = rt::trv(rt::VS(g::LS[3335])); this->f_S_1i = rt::slot_string(_v10976); _v10976; });
    ({ rt::Value _v10977 = rt::VS(g::LS[3336]); this->f_S__5e__21__23_ = rt::slot_string(_v10977); _v10977; });
    ({ double _v10978 = 500000000.0; this->f_S__3e__3d_ = _v10978; _v10978; });
    ({ double _v10979 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10979); _v10979; });
    ({ double _v10980 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10980); _v10980; });
    ({ double _v10981 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10981); _v10981; });
    ({ bool _v10982 = true; this->f_S__3c__60_ = _v10982; _v10982; });
    ({ double _v10983 = 2.0; this->f_S__21__22_E = rt::touint_d(_v10983); _v10983; });
}
rt::Value C_S_9_22_D::m_S__40__22_() {
    RT_FN("S_9_22_D.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3317]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S_9_22_D::sm_S__26_s(), 1.0, true)));
    return rt::NUL;
}
bool C_S_9_22_D::g_S__2d_6() {
    RT_FN("S_9_22_D.S__2d_6_get");
    return ({ bool _t10984 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 1.0); _t10984 ? _t10984 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5d__22__3f___id)); });
    return false;
}
double C_S_9_22_D::sm_S__26_s() {
    RT_FN("S_9_22_D.S__26_s");
    return (5.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), 2.5));
    return 0.0;
}
C_S_9_22_D* C_S_9_22_D::alloc_() {
    C_S_9_22_D* o = rt::make<C_S_9_22_D>();
    return o;
}
rt::Value C_S_9_22_D::mk_(rt::Value* a, int n) {
    C_S_9_22_D* o = alloc_();
    o->C_S_9_22_D::ctor_();
    return rt::VO(o);
}
bool C_S_9_22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_22_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_22_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_22_D::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_9_22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22_D__id)); return true;
    case NM_ids: out = g::SV.C_S_9_22_D__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_9_22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22_D__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_9_22_D__ids = v; return true;
    default: return false;
    }
}
bool C_S_9_22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3b__21_2::ctor_() {
    RT_FN("S__3b__21_2.S__3b__21_2");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v10985 = 197.0; this->f_S_6_21_Z = rt::touint_d(_v10985); _v10985; });
    ({ rt::Value _v10986 = rt::trv(rt::VS(g::LS[3338])); this->f_S_1i = rt::slot_string(_v10986); _v10986; });
    ({ rt::Value _v10987 = rt::VS(g::LS[3339]); this->f_S__5e__21__23_ = rt::slot_string(_v10987); _v10987; });
    ({ rt::Value _v10988 = rt::VS(g::LS[3281]); this->f_S__3f__21__3d_ = rt::slot_string(_v10988); _v10988; });
    ({ rt::Value _v10989 = rt::VS(g::LS[3281]); this->f_S__40_1 = rt::slot_string(_v10989); _v10989; });
    ({ rt::Value _v10990 = rt::trv(rt::VS(g::LS[3340])); this->f_S_7_23_ = rt::slot_string(_v10990); _v10990; });
    ({ double _v10991 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v10991); _v10991; });
    ({ double _v10992 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v10992); _v10992; });
    ({ double _v10993 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v10993); _v10993; });
    ({ bool _v10994 = false; this->f_S_3e = _v10994; _v10994; });
    ({ bool _v10995 = true; this->f_S__3c__60_ = _v10995; _v10995; });
}
int32_t C_S__3b__21_2::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__3b__21_2::dm_S_75_2() { return false; }
rt::Value C_S__3b__21_2::dm_S_75_3() { return rt::NUL; }
double C_S__3b__21_2::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__3b__21_2.S_75");
    if (((((double)(l_param1)) == 0.0) && ((C_S_8G::sg_S__22__21_0() > 0.0) || (((double)(C_S_8G::sg_S_8_21_H())) > 0.0)))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1000000000000.0 : 20.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__3b__21_2::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S__3b__21_2.S_6r");
    if ((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) {
        return rt::NUL;
    }
    (l_A__loc1_ = rt::toint_d(17.0));
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc1_))), rt::V(1.0))));
    ({ rt::Value _v10996 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V((double)(l_A__loc1_)), _v10996); });
    ({ rt::Value _v10999 = ({ rt::Value _v10998 = ({ rt::Value _v10997 = rt::V(0.0); rt::idx_set(g::SV.C_S_8G__S__3d_y, rt::V(100.0), _v10997); _v10997; }); rt::idx_set(g::SV.C_S_8G__S__3d_y, rt::V(99.0), _v10998); _v10998; }); rt::idx_set(g::SV.C_S_8G__S__3d_y, rt::V(38.0), _v10999); });
    (void)(({ rt::Value _o11000 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p11001 = rt::as_ptr<C_S_8G>(_o11000); _p11001 ? _p11001->m_S__27__26_(rt::toint_d(0.0)) : rt::dcallv(_o11000, NM_S__27__26_, rt::V(0.0)); }));
    return rt::NUL;
}
bool C_S__3b__21_2::g_S__2d_6() {
    RT_FN("S__3b__21_2.S__2d_6_get");
    return ({ bool _t11004 = ({ bool _t11002 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0); _t11002 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0))) : _t11002; }); _t11004 ? (bool)((({ bool _t11003 = (((double)(C_S_8G::sg_S__2c_P())) < 2.0); _t11003 ? _t11003 : (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)); }))) : _t11004; });
    return false;
}
C_S__3b__21_2* C_S__3b__21_2::alloc_() {
    C_S__3b__21_2* o = rt::make<C_S__3b__21_2>();
    return o;
}
rt::Value C_S__3b__21_2::mk_(rt::Value* a, int n) {
    C_S__3b__21_2* o = alloc_();
    o->C_S__3b__21_2::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b__21_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b__21_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__3b__21_2::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__3b__21_2::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__3b__21_2::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b__21_2::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b__21_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_2__id)); return true;
    case NM_ids: out = g::SV.C_S__3b__21_2__ids; return true;
    default: return false;
    }
}
bool C_S__3b__21_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_2__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3b__21_2__ids = v; return true;
    default: return false;
    }
}
bool C_S__3b__21_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__22_A::ctor_() {
    RT_FN("S__3d__22_A.S__3d__22_A");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v11005 = 202.0; this->f_S_6_21_Z = rt::touint_d(_v11005); _v11005; });
    ({ rt::Value _v11006 = rt::trv(rt::VS(g::LS[3342])); this->f_S_1i = rt::slot_string(_v11006); _v11006; });
    ({ rt::Value _v11007 = rt::VS(g::LS[3343]); this->f_S__5e__21__23_ = rt::slot_string(_v11007); _v11007; });
    ({ double _v11008 = 5000000000000.0; this->f_S__3e__3d_ = _v11008; _v11008; });
    ({ double _v11009 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v11009); _v11009; });
    ({ double _v11010 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v11010); _v11010; });
    ({ double _v11011 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v11011); _v11011; });
    ({ bool _v11012 = true; this->f_S__3c__60_ = _v11012; _v11012; });
    ({ double _v11013 = 5.0; this->f_S__21__22_E = rt::touint_d(_v11013); _v11013; });
}
rt::Value C_S__3d__22_A::m_S__40__22_() {
    RT_FN("S__3d__22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3344]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__3d__22_A::sm_S__3c_I(C_S__3d__22_A::dsm_S__3c_I_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(20.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3d__22_A::g_S__2d_6() {
    RT_FN("S__3d__22_A.S__2d_6_get");
    return ({ bool _t11014 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 2.0); _t11014 ? _t11014 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__60__22_D__id)); });
    return false;
}
double C_S__3d__22_A::sm_S__2c_J() {
    RT_FN("S__3d__22_A.S__2c_J");
    return 20.0;
    return 0.0;
}
bool C_S__3d__22_A::dsm_S__3c_I_0() { return false; }
double C_S__3d__22_A::sm_S__3c_I(bool p0) {
    bool l_param1 = p0;
    RT_FN("S__3d__22_A.S__3c_I");
    return (1.0 * (((C_S__23__21__21_::sm_S__26_Q(((int32_t)(g::SV.C_S_8_21_d__id)), l_param1) + C_S__23__21__21_::sm_S__26_Q(((int32_t)(g::SV.C_S_2_21__2b___id)), l_param1)) + C_S__23__21__21_::sm_S__26_Q(((int32_t)(g::SV.C_S__5b__21__5f___id)), l_param1))));
    return 0.0;
}
C_S__3d__22_A* C_S__3d__22_A::alloc_() {
    C_S__3d__22_A* o = rt::make<C_S__3d__22_A>();
    return o;
}
rt::Value C_S__3d__22_A::mk_(rt::Value* a, int n) {
    C_S__3d__22_A* o = alloc_();
    o->C_S__3d__22_A::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3d__22_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3d__22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3d__22_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3d__22_A::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    case NM_S__3c_I: return true;
    default: return false;
    }
}
bool C_S__3d__22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_A__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3d__22_A__S_1_21_S); return true;
    case NM_S_6_21_c: out = rt::V(g::SV.C_S__3d__22_A__S_6_21_c); return true;
    case NM_ids: out = g::SV.C_S__3d__22_A__ids; return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3c_I: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_A__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3d__22_A__S_1_21_S = rt::tonum(v); return true;
    case NM_S_6_21_c: g::SV.C_S__3d__22_A__S_6_21_c = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__3d__22_A__ids = v; return true;
    default: return false;
    }
}
bool C_S__3d__22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    case NM_S__3c_I: out = rt::V(sm_S__3c_I(rt::arg<bool>(a, n, 0, C_S__3d__22_A::dsm_S__3c_I_0()))); return true;
    default: return false;
    }
}
void C_S__3d__22_C::ctor_() {
    RT_FN("S__3d__22_C.S__3d__22_C");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v11015 = 203.0; this->f_S_6_21_Z = rt::touint_d(_v11015); _v11015; });
    ({ rt::Value _v11016 = rt::trv(rt::VS(g::LS[3346])); this->f_S_1i = rt::slot_string(_v11016); _v11016; });
    ({ rt::Value _v11017 = rt::VS(g::LS[3347]); this->f_S__5e__21__23_ = rt::slot_string(_v11017); _v11017; });
    ({ double _v11018 = 5000000000000000.0; this->f_S__3e__3d_ = _v11018; _v11018; });
    ({ double _v11019 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v11019); _v11019; });
    ({ double _v11020 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v11020); _v11020; });
    ({ double _v11021 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v11021); _v11021; });
    ({ bool _v11022 = true; this->f_S__3c__60_ = _v11022; _v11022; });
    ({ double _v11023 = 7.0; this->f_S__21__22_E = rt::touint_d(_v11023); _v11023; });
}
rt::Value C_S__3d__22_C::m_S__40__22_() {
    RT_FN("S__3d__22_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3348]), C_S__26_c::sm_S_8_21_Z(C_S__3d__22_C::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3d__22_C::g_S__2d_6() {
    RT_FN("S__3d__22_C.S__2d_6_get");
    return ({ bool _t11024 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 3.0); _t11024 ? _t11024 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_7_22_A__id)); });
    return false;
}
double C_S__3d__22_C::sm_S__5e_y() {
    RT_FN("S__3d__22_C.S__5e_y");
    return (0.35 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__27_K__id, C_S__26_c::dsm_S_7i_1(), C_S__26_c::dsm_S_7i_2(), C_S__26_c::dsm_S_7i_3()), 0.65));
    return 0.0;
}
C_S__3d__22_C* C_S__3d__22_C::alloc_() {
    C_S__3d__22_C* o = rt::make<C_S__3d__22_C>();
    return o;
}
rt::Value C_S__3d__22_C::mk_(rt::Value* a, int n) {
    C_S__3d__22_C* o = alloc_();
    o->C_S__3d__22_C::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3d__22_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3d__22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3d__22_C::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3d__22_C::smeth_(int id) {
    switch (id) {
    case NM_S__5e_y: return true;
    default: return false;
    }
}
bool C_S__3d__22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_C__id)); return true;
    case NM_ids: out = g::SV.C_S__3d__22_C__ids; return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_C__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3d__22_C__ids = v; return true;
    default: return false;
    }
}
bool C_S__3d__22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5e_y: out = rt::V(sm_S__5e_y()); return true;
    default: return false;
    }
}
void C_S__5d__22__3d_::ctor_() {
    RT_FN("S__5d__22__3d_.S__5d__22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v11025 = 207.0; this->f_S_6_21_Z = rt::touint_d(_v11025); _v11025; });
    ({ rt::Value _v11026 = rt::trv(rt::VS(g::LS[3351])); this->f_S_1i = rt::slot_string(_v11026); _v11026; });
    ({ rt::Value _v11027 = rt::VS(g::LS[3352]); this->f_S__5e__21__23_ = rt::slot_string(_v11027); _v11027; });
    ({ double _v11028 = 5000000000.0; this->f_S__3e__3d_ = _v11028; _v11028; });
    ({ double _v11029 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v11029); _v11029; });
    ({ double _v11030 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v11030); _v11030; });
    ({ double _v11031 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v11031); _v11031; });
    ({ bool _v11032 = true; this->f_S__3c__60_ = _v11032; _v11032; });
    ({ double _v11033 = 3.0; this->f_S__21__22_E = rt::touint_d(_v11033); _v11033; });
}
rt::Value C_S__5d__22__3d_::m_S__40__22_() {
    RT_FN("S__5d__22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3353]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__5d__22__3d_::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__5d__22__3d_::g_S__2d_6() {
    RT_FN("S__5d__22__3d_.S__2d_6_get");
    return ({ bool _t11034 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3281])))) >= 1.0); _t11034 ? _t11034 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__5d__22__3f___id)); });
    return false;
}
double C_S__5d__22__3d_::sm_S_2_21_W() {
    RT_FN("S__5d__22__3d_.S_2_21_W");
    return (3.0 * rt::m_pow(((C_S_8G::sm_S__25_Z(g::SV.C_S_8_21_d__id, C_S_8G::dsm_S__25_Z_1()) + C_S_8G::sm_S__25_Z(g::SV.C_S_2_21__2b___id, C_S_8G::dsm_S__25_Z_1())) + C_S_8G::sm_S__25_Z(g::SV.C_S__5b__21__5f___id, C_S_8G::dsm_S__25_Z_1())), 0.3));
    return 0.0;
}
C_S__5d__22__3d_* C_S__5d__22__3d_::alloc_() {
    C_S__5d__22__3d_* o = rt::make<C_S__5d__22__3d_>();
    return o;
}
rt::Value C_S__5d__22__3d_::mk_(rt::Value* a, int n) {
    C_S__5d__22__3d_* o = alloc_();
    o->C_S__5d__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5d__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5d__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5d__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5d__22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S__5d__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22__3d___id)); return true;
    case NM_ids: out = g::SV.C_S__5d__22__3d___ids; return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22__3d___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5d__22__3d___ids = v; return true;
    default: return false;
    }
}
bool C_S__5d__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S__22__21__3b_::ctor_() {
    RT_FN("S__22__21__3b_.S__22__21__3b_");
    (void)(rt::NUL);
    ({ rt::Value _v11035 = rt::VB(false); rt::dset(rt::VO(this), NM_touchable, _v11035); _v11035; });
    ({ rt::Value _v11036 = rt::VB(false); rt::dset(rt::VO(this), NM_visible, _v11036); _v11036; });
    ({ rt::Value _v11037 = rt::VB(false); rt::dset(rt::VO(this), NM_useSeparateBatch, _v11037); _v11037; });
}
rt::Value C_S__22__21__3b_::m_S__20_i(rt::Value p0, int32_t p1, int32_t p2, uint32_t p3, double p4, double p5) {
    rt::Value l_param1 = rt::slot_string(p0);
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    uint32_t l_param4 = p3;
    double l_param5 = p4;
    double l_param6 = p5;
    RT_FN("S__22__21__3b_.S__20_i");
    ({ rt::Value _v11038 = rt::V(1.0); rt::dset(rt::VO(this), NM_alpha, _v11038); _v11038; });
    ({ rt::Value _v11039 = l_param1; rt::dset(rt::VO(this), NM_text, _v11039); _v11039; });
    ({ rt::Value _v11040 = rt::idx_get(g::SV.C_S__3c__40___S__22_U, rt::V((double)(l_param4))); rt::dset(rt::VO(this), NM_textFormat, _v11040); _v11040; });
    ({ rt::Value _v11041 = rt::V((double)(l_param2)); rt::dset(rt::VO(this), NM_x, _v11041); _v11041; });
    ({ rt::Value _v11042 = rt::V((double)(l_param3)); rt::dset(rt::VO(this), NM_y, _v11042); _v11042; });
    ({ double _v11043 = l_param5; this->f_S__5e_Q = _v11043; _v11043; });
    ({ double _v11044 = l_param6; this->f_S__5d__21_J = _v11044; _v11044; });
    ({ rt::Value _v11045 = rt::VB(true); rt::dset(rt::VO(this), NM_visible, _v11045); _v11045; });
    ({ bool _v11046 = false; this->f_S__26__21_9 = _v11046; _v11046; });
    return rt::NUL;
}
C_S__22__21__3b_* C_S__22__21__3b_::alloc_() {
    C_S__22__21__3b_* o = rt::make<C_S__22__21__3b_>();
    return o;
}
rt::Value C_S__22__21__3b_::mk_(rt::Value* a, int n) {
    C_S__22__21__3b_* o = alloc_();
    o->C_S__22__21__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__22__21__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5e_Q: out = rt::V(f_S__5e_Q); return true;
    case NM_S__5d__21_J: out = rt::V(f_S__5d__21_J); return true;
    case NM_S__26__21_9: out = rt::VB(f_S__26__21_9); return true;
    case NM_S__20_i: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__22__21__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e_Q: f_S__5e_Q = rt::tonum(v); return true;
    case NM_S__5d__21_J: f_S__5d__21_J = rt::tonum(v); return true;
    case NM_S__26__21_9: f_S__26__21_9 = rt::T(v); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__22__21__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20_i: out = m_S__20_i(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0), rt::arg<uint32_t>(a, n, 3, 0u), rt::arg<double>(a, n, 4, NAN), rt::arg<double>(a, n, 5, NAN)); return true;
    case NM_S__5e_Q: { rt::Value f = rt::V(f_S__5e_Q); out = rt::call_value(f, a, n); return true; }
    case NM_S__5d__21_J: { rt::Value f = rt::V(f_S__5d__21_J); out = rt::call_value(f, a, n); return true; }
    case NM_S__26__21_9: { rt::Value f = rt::VB(f_S__26__21_9); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__22__21__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__20_i: return true;
    case NM_S__5e_Q: return false;
    case NM_S__5d__21_J: return false;
    case NM_S__26__21_9: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__22__21__3b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__21__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__21__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__21__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__3c_::ctor_() {
    RT_FN("S__22__3c_.S__22__3c_");
    ({ rt::Value _v11047 = rt::new_vectorv(rt::E_ANY); this->f_S__5e__21_4 = _v11047; _v11047; });
    ({ rt::Value _v11048 = rt::new_vectorv(rt::E_ANY); this->f_S__2c__21_D = _v11048; _v11048; });
    (void)(rt::NUL);
}
rt::Value C_S__22__3c_::dm_S__3c__21_D_0() { return rt::slot_string(rt::VS(g::LS[113])); }
rt::Value C_S__22__3c_::dm_S__3c__21_D_1() { return rt::slot_string(rt::VS(g::LS[113])); }
rt::Value C_S__22__3c_::dm_S__3c__21_D_2() { return rt::NUL; }
rt::Value C_S__22__3c_::dm_S__3c__21_D_3() { return rt::NUL; }
rt::Value C_S__22__3c_::dm_S__3c__21_D_4() { return rt::NUL; }
bool C_S__22__3c_::dm_S__3c__21_D_5() { return true; }
rt::Value C_S__22__3c_::dm_S__3c__21_D_6() { return rt::NUL; }
bool C_S__22__3c_::dm_S__3c__21_D_7() { return true; }
rt::Value C_S__22__3c_::dm_S__3c__21_D_8() { return rt::slot_string(rt::VS(g::LS[113])); }
rt::Value C_S__22__3c_::dm_S__3c__21_D_9() { return rt::NUL; }
bool C_S__22__3c_::dm_S__3c__21_D_10() { return false; }
rt::Value C_S__22__3c_::dm_S__3c__21_D_11() { return rt::slot_string(rt::VS(g::LS[113])); }
rt::Value C_S__22__3c_::dm_S__3c__21_D_12() { return rt::slot_string(rt::VS(g::LS[113])); }
rt::Value C_S__22__3c_::dm_S__3c__21_D_13() { return rt::slot_string(rt::VS(g::LS[113])); }
rt::Value C_S__22__3c_::dm_S__3c__21_D_14() { return rt::slot_string(rt::VS(g::LS[113])); }
rt::Value C_S__22__3c_::dm_S__3c__21_D_15() { return rt::slot_string(rt::VS(g::LS[113])); }
rt::Value C_S__22__3c_::m_S__3c__21_D(rt::Value p0, rt::Value p1, rt::Value p2, rt::Value p3, rt::Value p4, bool p5, rt::Value p6, bool p7, rt::Value p8, rt::Value p9, bool p10, rt::Value p11, rt::Value p12, rt::Value p13, rt::Value p14, rt::Value p15) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = p2;
    rt::Value l_param4 = p3;
    rt::Value l_param5 = p4;
    bool l_param6 = p5;
    rt::Value l_param7 = p6;
    bool l_param8 = p7;
    rt::Value l_param9 = rt::slot_string(p8);
    rt::Value l_param10 = p9;
    bool l_param11 = p10;
    rt::Value l_param12 = rt::slot_string(p11);
    rt::Value l_param13 = rt::slot_string(p12);
    rt::Value l_param14 = rt::slot_string(p13);
    rt::Value l_param15 = rt::slot_string(p14);
    rt::Value l_param16 = rt::slot_string(p15);
    rt::Value l_A__loc17_ = rt::NUL;
    rt::Value l_A__loc18_ = rt::NUL;
    rt::Value l_A__loc29_ = rt::NUL;
    rt::Value l_A__loc21_ = rt::NUL;
    rt::Value l_A__loc23_ = rt::NUL;
    int32_t l_A__loc24_ = 0;
    rt::Value l_A__loc19_ = rt::NUL;
    rt::Value l_A__loc28_ = rt::NUL;
    rt::Value l_A__loc25_ = rt::NUL;
    rt::Value l_A__loc27_ = rt::NUL;
    double l_A__loc20_ = NAN;
    double l_A__loc22_ = NAN;
    rt::Value l_A__loc26_ = rt::NUL;
    RT_FN("S__22__3c_.S__3c__21_D");
    (l_A__loc17_ = rt::NUL);
    (l_A__loc18_ = rt::NUL);
    (l_A__loc29_ = rt::NUL);
    (l_A__loc21_ = rt::NUL);
    (l_A__loc23_ = rt::NUL);
    (l_A__loc24_ = rt::toint_d(0.0));
    (l_A__loc19_ = rt::NUL);
    (l_A__loc28_ = rt::NUL);
    (l_A__loc25_ = rt::NUL);
    (l_A__loc27_ = rt::NUL);
    (l_A__loc20_ = NAN);
    (l_A__loc22_ = NAN);
    ({ rt::Value _v11049 = l_param7; this->f_S_6_3b_ = _v11049; _v11049; });
    ({ rt::Value _v11050 = l_param10; this->f_S_94 = _v11050; _v11050; });
    ({ bool _v11051 = l_param8; this->f_S__5e_j = _v11051; _v11051; });
    ({ bool _v11052 = l_param6; this->f_S__3b__21_d = _v11052; _v11052; });
    ({ rt::Value _v11053 = l_param9; this->f_S__5e__21__40_ = rt::slot_string(_v11053); _v11053; });
    ({ rt::Value _v11054 = l_param14; this->f_S__2b__22_O = rt::slot_string(_v11054); _v11054; });
    ({ bool _v11055 = l_param11; this->f_S__21_5 = _v11055; _v11055; });
    ({ rt::Value _v11056 = rt::V((((double)(g::SV.C_S__20_g__S_3_2c_)) - 50.0)); rt::dset(rt::VO(this), NM_maxWidth, _v11056); _v11056; });
    if (rt::T(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_isDesktop))) {
        ({ rt::Value _v11057 = rt::V(926.0); rt::dset(rt::VO(this), NM_maxWidth, _v11057); _v11057; });
    }
    ({ rt::Value _v11058 = rt::V((((double)(g::SV.C_S__20_g__S__26__3e_)) - 50.0)); rt::dset(rt::VO(this), NM_maxHeight, _v11058); _v11058; });
    ({ rt::Value _v11059 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_1P); this->f_S__3b_U = _v11059; _v11059; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__3b_U));
    if (this->f_S__3b__21_d) {
        ({ rt::Value _v11060 = rt::callv(rt::dget(rt::VO(this), NM_Button)); this->f_S__2b_k = _v11060; _v11060; });
        if (g::SV.C_S__20_g__S__22_g) {
            ({ rt::Value _v11061 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__20_X); rt::dset(this->f_S__2b_k, NM_defaultSkin, _v11061); _v11061; });
            ({ rt::Value _v11062 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__25_W); rt::dset(this->f_S__2b_k, NM_hoverSkin, _v11062); _v11062; });
            ({ rt::Value _v11063 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S_1_21__5e_); rt::dset(this->f_S__2b_k, NM_downSkin, _v11063); _v11063; });
        } else {
            ({ rt::Value _v11064 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__5e__21_P); rt::dset(this->f_S__2b_k, NM_defaultSkin, _v11064); _v11064; });
            ({ rt::Value _v11065 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__25__21_5); rt::dset(this->f_S__2b_k, NM_downSkin, _v11065); _v11065; });
        }
        ({ rt::Value _v11067 = ({ rt::Value _v11066 = rt::V((g::SV.C_S__20_g__S__22_g ? 31.0 : 55.0)); rt::dset(this->f_S__2b_k, NM_height, _v11066); _v11066; }); rt::dset(this->f_S__2b_k, NM_width, _v11067); _v11067; });
        ({ rt::Value _v11069 = ({ rt::Value _v11068 = rt::add(rt::dget(this->f_S__2b_k, NM_width), rt::V(15.0)); rt::dset(this->f_S__2b_k, NM_minTouchHeight, _v11068); _v11068; }); rt::dset(this->f_S__2b_k, NM_minTouchWidth, _v11069); _v11069; });
        (void)(rt::dcallv(this->f_S__2b_k, NM_addEventListener, rt::VS(g::LS[1322]), rt::VO(rt::new_bound(rt::VO(this), NM_S__3c_S))));
        (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__2b_k));
    }
    ({ rt::Value _v11070 = rt::callv(rt::dget(rt::VO(this), NM_LayoutGroup)); this->f_S_8_21_K = _v11070; _v11070; });
    ({ rt::Value _v11072 = ({ rt::Value _v11071 = rt::V(20.0); rt::dset(this->f_S_8_21_K, NM_y, _v11071); _v11071; }); rt::dset(this->f_S_8_21_K, NM_x, _v11072); _v11072; });
    (l_A__loc26_ = rt::callv(rt::dget(rt::VO(this), NM_VerticalLayout)));
    ({ rt::Value _v11073 = rt::VS(g::LS[1310]); rt::dset(l_A__loc26_, NM_horizontalAlign, _v11073); _v11073; });
    ({ rt::Value _v11074 = rt::V(20.0); rt::dset(l_A__loc26_, NM_gap, _v11074); _v11074; });
    ({ rt::Value _v11075 = l_A__loc26_; rt::dset(this->f_S_8_21_K, NM_layout, _v11075); _v11075; });
    if ((!rt::eq(l_param12, rt::VS(g::LS[113])))) {
        (l_A__loc17_ = rt::callv(rt::dget(rt::VO(this), NM_LayoutGroup)));
        (l_A__loc18_ = rt::callv(rt::dget(rt::VO(this), NM_HorizontalLayout)));
        ({ rt::Value _v11076 = rt::V(10.0); rt::dset(l_A__loc18_, NM_paddingLeft, _v11076); _v11076; });
        ({ rt::Value _v11077 = rt::V(10.0); rt::dset(l_A__loc18_, NM_paddingTop, _v11077); _v11077; });
        ({ rt::Value _v11078 = rt::VS(g::LS[3355]); rt::dset(l_A__loc18_, NM_verticalAlign, _v11078); _v11078; });
        ({ rt::Value _v11079 = rt::V(5.0); rt::dset(l_A__loc18_, NM_gap, _v11079); _v11079; });
        ({ rt::Value _v11080 = l_A__loc18_; rt::dset(l_A__loc17_, NM_layout, _v11080); _v11080; });
        ({ rt::Value _v11081 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, l_param12)); this->f_S_3_21__5d_ = _v11081; _v11081; });
        ({ rt::Value _v11083 = ({ rt::Value _v11082 = rt::V(100.0); rt::dset(this->f_S_3_21__5d_, NM_height, _v11082); _v11082; }); rt::dset(this->f_S_3_21__5d_, NM_width, _v11083); _v11083; });
        (void)(rt::dcallv(l_A__loc17_, NM_addChild, this->f_S_3_21__5d_));
        (void)(rt::dcallv(l_A__loc17_, NM_addChild, this->f_S_8_21_K));
        (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc17_));
    } else {
        (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_8_21_K));
    }
    if ((!rt::eq(l_param1, rt::VS(g::LS[113])))) {
        ({ rt::Value _v11084 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S__27__21__5e_ = _v11084; _v11084; });
        ({ rt::Value _v11085 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S__27__21__5e_, NM_textRendererProperties), NM_textAlign, _v11085); _v11085; });
        if (g::SV.C_S__20_g__S__22_g) {
            ({ rt::Value _v11086 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(54.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S__27__21__5e_, NM_textRendererProperties), NM_elementFormat, _v11086); _v11086; });
        } else {
            ({ rt::Value _v11087 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(30.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S__27__21__5e_, NM_textRendererProperties), NM_elementFormat, _v11087); _v11087; });
            (void)(C_S_99::sm_S__3d__21_7(this->f_S__27__21__5e_));
        }
        if ((g::SV.C_S__20_g__S__22_g && rt::T(rt::dcallv(l_param1, rt::N_indexOf, rt::VS(g::LS[3356]))))) {
            (l_param1 = rt::slot_string(rt::dcallv(rt::dcallv(l_param1, rt::N_split, rt::VS(g::LS[143])), rt::N_join, rt::VS(g::LS[9]))));
        }
        ({ rt::Value _v11088 = l_param1; rt::dset(this->f_S__27__21__5e_, NM_text, _v11088); _v11088; });
        (void)(rt::dcallv(this->f_S_8_21_K, NM_addChild, this->f_S__27__21__5e_));
        (void)(rt::dcallv(this->f_S__27__21__5e_, NM_validate));
    }
    if ((!rt::eq(l_param2, rt::VS(g::LS[113])))) {
        ({ rt::Value _v11089 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_Z = _v11089; _v11089; });
        if (g::SV.C_S__20_g__S__22_g) {
            ({ rt::Value _v11090 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V((this->f_S__21_5 ? 24.0 : 30.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v11090); _v11090; });
        } else {
            ({ rt::Value _v11091 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V((this->f_S__21_5 ? 30.0 : 36.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v11091); _v11091; });
        }
        ({ rt::Value _v11092 = rt::VB(true); rt::dset(this->f_S_9_21_Z, NM_wordWrap, _v11092); _v11092; });
        ({ rt::Value _v11093 = l_param2; rt::dset(this->f_S_9_21_Z, NM_text, _v11093); _v11093; });
        (void)(rt::dcallv(this->f_S_8_21_K, NM_addChild, this->f_S_9_21_Z));
        (void)(rt::dcallv(this->f_S_9_21_Z, NM_validate));
    }
    if ((!rt::eq(l_param5, rt::NUL))) {
        ({ rt::Value _v11094 = l_param5; this->f_S__3c_X = _v11094; _v11094; });
        (void)(rt::dcallv(this->f_S_8_21_K, NM_addChild, this->f_S__3c_X));
    }
    if ((!rt::eq(this->f_S__5e__21__40_, rt::VS(g::LS[113])))) {
        (l_A__loc29_ = this->m_S__5d__22_N(C_S__22__3c_::dm_S__5d__22_N_0()));
        ({ rt::Value _v11095 = l_param15; rt::dset(l_A__loc29_, NM_text, _v11095); _v11095; });
        (void)(rt::dcallv(l_A__loc29_, NM_setFocus));
        ({ rt::Value _v11096 = rt::callv(rt::dget(rt::VO(this), NM_Collator), rt::VS(g::LS[3357]), rt::VS(g::LS[3358])); this->f_S__2b__21_0 = _v11096; _v11096; });
        ({ rt::Value _v11097 = rt::VB(true); rt::dset(this->f_S__2b__21_0, NM_ignoreCase, _v11097); _v11097; });
        ({ rt::Value _v11098 = rt::VB(true); rt::dset(this->f_S__2b__21_0, NM_ignoreDiacritics, _v11098); _v11098; });
        ({ rt::Value _v11099 = rt::VB(true); rt::dset(this->f_S__2b__21_0, NM_ignoreSymbols, _v11099); _v11099; });
        (void)(rt::dcallv(l_A__loc29_, NM_addEventListener, rt::VS(g::LS[1326]), rt::VO(rt::new_bound(rt::VO(this), NM_S_3))));
        ({ rt::Value _v11100 = l_A__loc29_; this->f_S__3c_X = _v11100; _v11100; });
        (void)(rt::dcallv(this->f_S_8_21_K, NM_addChild, this->f_S__3c_X));
    }
    if ((!rt::eq(l_param13, rt::VS(g::LS[113])))) {
        ({ rt::Value _v11101 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S__2d__22_O = _v11101; _v11101; });
        if (g::SV.C_S__20_g__S__22_g) {
            ({ rt::Value _v11102 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V((this->f_S__21_5 ? 24.0 : 30.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S__2d__22_O, NM_textRendererProperties), NM_elementFormat, _v11102); _v11102; });
        } else {
            ({ rt::Value _v11103 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V((this->f_S__21_5 ? 30.0 : 36.0)), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S__2d__22_O, NM_textRendererProperties), NM_elementFormat, _v11103); _v11103; });
        }
        ({ rt::Value _v11104 = rt::VB(true); rt::dset(this->f_S__2d__22_O, NM_wordWrap, _v11104); _v11104; });
        ({ rt::Value _v11105 = l_param13; rt::dset(this->f_S__2d__22_O, NM_text, _v11105); _v11105; });
        (void)(rt::dcallv(this->f_S_8_21_K, NM_addChild, this->f_S__2d__22_O));
        (void)(rt::dcallv(this->f_S__2d__22_O, NM_validate));
    }
    if ((!rt::eq(this->f_S__2b__22_O, rt::VS(g::LS[113])))) {
        (l_A__loc21_ = this->m_S__5d__22_N(C_S__22__3c_::dm_S__5d__22_N_0()));
        ({ rt::Value _v11106 = l_param16; rt::dset(l_A__loc21_, NM_text, _v11106); _v11106; });
        (void)(rt::dcallv(l_A__loc21_, NM_addEventListener, rt::VS(g::LS[1326]), rt::VO(rt::new_bound(rt::VO(this), NM_S_3))));
        ({ rt::Value _v11107 = l_A__loc21_; this->f_S__21__22_O = _v11107; _v11107; });
        (void)(rt::dcallv(this->f_S_8_21_K, NM_addChild, l_A__loc21_));
    }
    if ((!rt::eq(l_param3, rt::NUL))) {
        ({ rt::Value _v11108 = rt::callv(rt::dget(rt::VO(this), NM_LayoutGroup)); this->f_S__20__21__5d_ = _v11108; _v11108; });
        (l_A__loc23_ = rt::callv(rt::dget(rt::VO(this), NM_HorizontalLayout)));
        ({ rt::Value _v11109 = rt::VS(g::LS[1310]); rt::dset(l_A__loc23_, NM_horizontalAlign, _v11109); _v11109; });
        ({ rt::Value _v11110 = rt::V(10.0); rt::dset(l_A__loc23_, NM_gap, _v11110); _v11110; });
        ({ rt::Value _v11111 = l_A__loc23_; rt::dset(this->f_S__20__21__5d_, NM_layout, _v11111); _v11111; });
        (void)(rt::dcallv(this->f_S_8_21_K, NM_addChild, this->f_S__20__21__5d_));
        (l_A__loc24_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc24_)) < rt::alen(l_param3))) {
            (l_A__loc19_ = rt::callv(rt::dget(rt::VO(this), NM_Button)));
            ({ rt::Value _v11112 = rt::VS(g::LS[1310]); rt::dset(rt::dget(l_A__loc19_, NM_defaultLabelProperties), NM_textAlign, _v11112); _v11112; });
            ({ rt::Value _v11113 = rt::VS(g::LS[1310]); rt::dset(rt::dget(l_A__loc19_, NM_disabledLabelProperties), NM_textAlign, _v11113); _v11113; });
            if (g::SV.C_S__20_g__S__22_g) {
                ({ rt::Value _v11114 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(27.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc19_, NM_defaultLabelProperties), NM_elementFormat, _v11114); _v11114; });
                ({ rt::Value _v11115 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(27.0), rt::V(9079434.0)); rt::dset(rt::dget(l_A__loc19_, NM_disabledLabelProperties), NM_elementFormat, _v11115); _v11115; });
            } else {
                ({ rt::Value _v11116 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(20.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc19_, NM_defaultLabelProperties), NM_elementFormat, _v11116); _v11116; });
                ({ rt::Value _v11117 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(20.0), rt::V(9079434.0)); rt::dset(rt::dget(l_A__loc19_, NM_disabledLabelProperties), NM_elementFormat, _v11117); _v11117; });
                (void)(C_S_99::sm_S_9_21_W(l_A__loc19_));
            }
            (l_A__loc28_ = rt::callv(rt::dget(rt::VO(this), NM_SmartDisplayObjectStateValueSelector)));
            ({ rt::Value _v11118 = g::SV.C_S_99__S__26_E; rt::dset(l_A__loc28_, NM_defaultValue, _v11118); _v11118; });
            (void)(rt::dcallv(l_A__loc28_, NM_setValueForState, g::SV.C_S_99__S__40__21__2d_, rt::VS(g::LS[3359]), rt::VB(false)));
            (void)(rt::dcallv(l_A__loc28_, NM_setValueForState, g::SV.C_S_99__S_5_21_4, rt::VS(g::LS[1434]), rt::VB(false)));
            (void)(rt::dcallv(l_A__loc28_, NM_setValueForState, g::SV.C_S_99__S_8x, rt::VS(g::LS[1282]), rt::VB(false)));
            ({ rt::Value _v11119 = rt::dict_lit({{rt::VS(g::LS[3263]), rt::V(50.0)}, {rt::VS(g::LS[1325]), rt::V(50.0)}}); rt::dset(l_A__loc28_, NM_displayObjectProperties, _v11119); _v11119; });
            ({ rt::Value _v11120 = rt::dget(l_A__loc28_, NM_updateValue); rt::dset(l_A__loc19_, NM_stateToSkinFunction, _v11120); _v11120; });
            ({ rt::Value _v11121 = rt::arr_at(l_param3, ((double)(l_A__loc24_))); rt::dset(l_A__loc19_, NM_label, _v11121); _v11121; });
            if (rt::eq(rt::dget(l_A__loc19_, NM_label), rt::trv(rt::VS(g::LS[3360])))) {
                (l_A__loc25_ = C_S_8G::sm_S__21__21_H(g::SV.C_S__22_b__id));
                ({ rt::Value _o11125 = l_A__loc19_; rt::Value _v11124 = rt::add(rt::dget(_o11125, NM_label), rt::add(rt::VS(g::LS[143]), C_S__26_c::sm_S_8_21_Z(({ rt::Value _o11122 = l_A__loc25_; C_S__60_6* _p11123 = rt::as_ptr<C_S__60_6>(_o11122); _p11123 ? _p11123->m_S_6U() : rt::tonum(rt::dcallv(_o11122, NM_S_6U)); }), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))); rt::dset(_o11125, NM_label, _v11124); _v11124; });
                (l_A__loc27_ = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[1383]))));
                ({ rt::Value _v11127 = ({ rt::Value _v11126 = rt::V(15.0); rt::dset(l_A__loc27_, NM_height, _v11126); _v11126; }); rt::dset(l_A__loc27_, NM_width, _v11127); _v11127; });
                (l_A__loc20_ = 77.0);
                if ((((double)(g::SV.C_Translation__locale)) == 1.0)) {
                    (l_A__loc20_ = 115.0);
                } else if ((((double)(g::SV.C_Translation__locale)) == 2.0)) {
                    (l_A__loc20_ = 90.0);
                } else if ((((double)(g::SV.C_Translation__locale)) == 3.0)) {
                    (l_A__loc20_ = 120.0);
                } else if ((((double)(g::SV.C_Translation__locale)) == 4.0)) {
                    (l_A__loc20_ = 105.0);
                } else if ((((double)(g::SV.C_Translation__locale)) == 5.0)) {
                    (l_A__loc20_ = 135.0);
                } else if ((((double)(g::SV.C_Translation__locale)) == 6.0)) {
                    (l_A__loc20_ = 97.0);
                }
                (l_A__loc22_ = 38.0);
                if ((((double)(g::SV.C_Translation__locale)) == 1.0)) {
                    (l_A__loc22_ = 51.0);
                } else if ((((double)(g::SV.C_Translation__locale)) == 2.0)) {
                    (l_A__loc22_ = 40.0);
                } else if ((((double)(g::SV.C_Translation__locale)) == 3.0)) {
                    (l_A__loc22_ = 54.0);
                } else if ((((double)(g::SV.C_Translation__locale)) == 4.0)) {
                    (l_A__loc22_ = 51.0);
                } else if ((((double)(g::SV.C_Translation__locale)) == 5.0)) {
                    (l_A__loc22_ = 70.0);
                }
                ({ rt::Value _v11128 = rt::V((g::SV.C_S__20_g__S__22_g ? l_A__loc22_ : l_A__loc20_)); rt::dset(l_A__loc27_, NM_x, _v11128); _v11128; });
                ({ rt::Value _v11129 = rt::V((g::SV.C_S__20_g__S__22_g ? 25.0 : 45.0)); rt::dset(l_A__loc27_, NM_y, _v11129); _v11129; });
                ({ rt::Value _v11130 = rt::VB(false); rt::dset(l_A__loc27_, NM_touchable, _v11130); _v11130; });
                ({ rt::Value _v11131 = rt::V(2.0); rt::dset(l_A__loc19_, NM_labelOffsetY, _v11131); _v11131; });
                (void)(rt::dcallv(l_A__loc19_, NM_addChild, l_A__loc27_));
            }
            ({ rt::Value _v11132 = rt::V(125.0); rt::dset(l_A__loc19_, NM_minWidth, _v11132); _v11132; });
            ({ rt::Value _v11133 = rt::V(35.0); rt::dset(l_A__loc19_, NM_minHeight, _v11133); _v11133; });
            if ((!g::SV.C_S__20_g__S__22_g)) {
                ({ rt::Value _v11134 = rt::V(7.0); rt::dset(l_A__loc19_, NM_padding, _v11134); _v11134; });
            } else {
                ({ rt::Value _v11136 = ({ rt::Value _v11135 = rt::V(7.0); rt::dset(l_A__loc19_, NM_paddingRight, _v11135); _v11135; }); rt::dset(l_A__loc19_, NM_paddingLeft, _v11136); _v11136; });
            }
            (void)(rt::dcallv(l_A__loc19_, NM_addEventListener, rt::VS(g::LS[1322]), rt::VO(rt::new_bound(rt::VO(this), NM_S__3b_S))));
            if ((({ bool _t11137 = (!rt::eq(this->f_S__5e__21__40_, rt::VS(g::LS[113]))); _t11137 ? (bool)((!rt::eq(this->f_S__5e__21__40_, rt::VS(g::LS[162])))) : _t11137; }) && (((double)(l_A__loc24_)) == 0.0))) {
                ({ rt::Value _v11138 = rt::VB(false); rt::dset(l_A__loc19_, NM_isEnabled, _v11138); _v11138; });
            }
            if ((((double)(l_A__loc24_)) == 3.0)) {
                (void)(rt::dcallv(this->f_S_8_21_K, NM_addChild, l_A__loc19_));
            } else {
                (void)(rt::dcallv(this->f_S__20__21__5d_, NM_addChild, l_A__loc19_));
            }
            (void)(rt::dcallv(this->f_S__5e__21_4, rt::N_push, l_A__loc19_));
            (void)(rt::dcallv(this->f_S__2c__21_D, rt::N_push, (rt::eq(rt::arr_at(l_param4, ((double)(l_A__loc24_))), rt::UNDEF) ? rt::NUL : rt::arr_at(l_param4, ((double)(l_A__loc24_))))));
            (l_A__loc24_ = rt::toint_d((((double)(l_A__loc24_)) + 1.0)));
        }
        (void)(rt::dcallv(this->f_S__20__21__5d_, NM_validate));
    }
    (void)(this->m_S__25__5f_());
    return rt::NUL;
}
int32_t C_S__22__3c_::dm_S__5d__22_N_0() { return rt::toint_d(60.0); }
rt::Value C_S__22__3c_::m_S__5d__22_N(int32_t p0) {
    int32_t l_param1 = p0;
    rt::Value l_A__loc3_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__temp_1 = rt::UNDEF;
    RT_FN("S__22__3c_.S__5d__22_N");
    (l_A__loc3_ = rt::callv(rt::dget(rt::VO(this), NM_TextInput)));
    (l_A__loc2_ = rt::callv(rt::dget(rt::VO(this), NM_SmartDisplayObjectStateValueSelector)));
    ({ rt::Value _v11139 = g::SV.C_S_99__S__26_E; rt::dset(l_A__loc2_, NM_defaultValue, _v11139); _v11139; });
    (void)(rt::dcallv(l_A__loc2_, NM_setValueForState, g::SV.C_S_99__S_8x, rt::VS(g::LS[3361])));
    ({ rt::Value _v11140 = rt::dict_lit({{rt::VS(g::LS[3263]), rt::V(264.0)}, {rt::VS(g::LS[1325]), rt::V((double)(l_param1))}}); rt::dset(l_A__loc2_, NM_displayObjectProperties, _v11140); _v11140; });
    ({ rt::Value _v11141 = rt::dget(l_A__loc2_, NM_updateValue); rt::dset(l_A__loc3_, NM_stateToSkinFunction, _v11141); _v11141; });
    ({ rt::Value _v11142 = rt::V(60.0); rt::dset(l_A__loc3_, NM_minWidth, _v11142); _v11142; });
    ({ rt::Value _v11143 = rt::V(88.0); rt::dset(l_A__loc3_, NM_minTouchWidth, _v11143); _v11143; });
    ({ rt::Value _v11144 = rt::V((double)(l_param1)); rt::dset(l_A__loc3_, NM_minHeight, _v11144); _v11144; });
    ({ rt::Value _v11145 = rt::V((((double)(l_param1)) + 22.0)); rt::dset(l_A__loc3_, NM_minTouchHeight, _v11145); _v11145; });
    ({ rt::Value _v11146 = rt::V(12.0); rt::dset(l_A__loc3_, NM_gap, _v11146); _v11146; });
    ({ rt::Value _v11147 = rt::V(12.0); rt::dset(l_A__loc3_, NM_paddingTop, _v11147); _v11147; });
    ({ rt::Value _v11148 = rt::V(10.0); rt::dset(l_A__loc3_, NM_paddingBottom, _v11148); _v11148; });
    (l_A__temp_1 = l_A__loc3_);
    ({ rt::Value _v11149 = rt::V(14.0); rt::dset(l_A__loc3_, NM_paddingRight, _v11149); _v11149; });
    ({ rt::Value _v11150 = rt::V(14.0); rt::dset(l_A__temp_1, NM_paddingLeft, _v11150); _v11150; });
    ({ rt::Value _v11151 = rt::V(24.0); rt::dset(rt::dget(l_A__loc3_, NM_textEditorProperties), NM_fontSize, _v11151); _v11151; });
    ({ rt::Value _v11152 = rt::V(16185078.0); rt::dset(rt::dget(l_A__loc3_, NM_textEditorProperties), NM_color, _v11152); _v11152; });
    ({ rt::Value _v11153 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(36.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc3_, NM_promptProperties), NM_elementFormat, _v11153); _v11153; });
    ({ rt::Value _v11154 = rt::V(300.0); rt::dset(l_A__loc3_, NM_width, _v11154); _v11154; });
    ({ rt::Value _v11155 = rt::V(20.0); rt::dset(l_A__loc3_, NM_paddingBottom, _v11155); _v11155; });
    ({ rt::Value _v11156 = rt::V((((double)(l_param1)) - 10.0)); rt::dset(l_A__loc3_, NM_height, _v11156); _v11156; });
    return l_A__loc3_;
    return rt::NUL;
}
rt::Value C_S__22__3c_::m_S__25__5f_() {
    RT_FN("S__22__3c_.S__25__5f_");
    ({ rt::Value _v11157 = rt::V((((double)(g::SV.C_S__20_g__S_3_2c_)) - 50.0)); rt::dset(rt::VO(this), NM_maxWidth, _v11157); _v11157; });
    if (rt::T(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_isDesktop))) {
        ({ rt::Value _v11158 = rt::V(926.0); rt::dset(rt::VO(this), NM_maxWidth, _v11158); _v11158; });
    }
    ({ rt::Value _v11159 = rt::V((((double)(g::SV.C_S__20_g__S__26__3e_)) - 50.0)); rt::dset(rt::VO(this), NM_maxHeight, _v11159); _v11159; });
    if ((!rt::eq(this->f_S_9_21_Z, rt::NUL))) {
        ({ rt::Value _v11160 = rt::V(NAN); rt::dset(this->f_S_9_21_Z, NM_width, _v11160); _v11160; });
        (void)(rt::dcallv(this->f_S_9_21_Z, NM_validate));
        ({ rt::Value _v11161 = rt::V(rt::m_min2(rt::tonum(rt::dget(this->f_S_9_21_Z, NM_width)), (rt::tonum(rt::dget(rt::VO(this), NM_maxWidth)) - 40.0))); rt::dset(this->f_S_9_21_Z, NM_width, _v11161); _v11161; });
        if ((!rt::eq(this->f_S__27__21__5e_, rt::NUL))) {
            ({ rt::Value _v11163 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_maxHeight)) - rt::tonum(rt::dget((({ rt::Value _t11162 = rt::dget(this->f_S_8_21_K, NM_layout); rt::is_stubtype(_t11162) ? _t11162 : rt::NUL; })), NM_gap))) - rt::tonum(rt::dget(this->f_S__27__21__5e_, NM_height))) - 80.0)); rt::dset(this->f_S_9_21_Z, NM_maxHeight, _v11163); _v11163; });
        } else if ((!rt::eq(this->f_S__3c_X, rt::NUL))) {
            ({ rt::Value _v11164 = rt::V((rt::tonum(rt::dget(this->f_S__3c_X, NM_width)) - 20.0)); rt::dset(this->f_S_9_21_Z, NM_width, _v11164); _v11164; });
        }
        (void)(rt::dcallv(this->f_S_9_21_Z, NM_validate));
    }
    ({ rt::Value _v11166 = ({ rt::Value _v11165 = rt::V(rt::m_min2(rt::tonum(rt::dget(rt::VO(this), NM_maxWidth)), (rt::m_maxv(((!rt::eq(this->f_S__27__21__5e_, rt::NUL)) ? rt::dget(this->f_S__27__21__5e_, NM_width) : rt::V(0.0)), ((!rt::eq(this->f_S_9_21_Z, rt::NUL)) ? rt::dget(this->f_S_9_21_Z, NM_width) : rt::V(0.0)), ((!rt::eq(this->f_S__20__21__5d_, rt::NUL)) ? rt::dget(this->f_S__20__21__5d_, NM_width) : rt::V(0.0)), ((!rt::eq(this->f_S__3c_X, rt::NUL)) ? rt::dget(this->f_S__3c_X, NM_width) : rt::V(0.0)), ((!rt::eq(this->f_S__21__22_O, rt::NUL)) ? rt::dget(this->f_S__21__22_O, NM_width) : rt::V(0.0))) + 40.0))); rt::dset(rt::VO(this), NM_width, _v11165); _v11165; }); rt::dset(this->f_S__3b_U, NM_width, _v11166); _v11166; });
    if ((!rt::eq(this->f_S_3_21__5d_, rt::NUL))) {
        ({ rt::Value _o11168 = this->f_S__3b_U; rt::Value _v11167 = rt::add(rt::dget(_o11168, NM_width), rt::add(rt::dget(this->f_S_3_21__5d_, NM_width), rt::V(10.0))); rt::dset(_o11168, NM_width, _v11167); _v11167; });
        ({ rt::Value _o11170 = rt::VO(this); rt::Value _v11169 = rt::add(rt::dget(_o11170, NM_width), rt::add(rt::dget(this->f_S_3_21__5d_, NM_width), rt::V(10.0))); rt::dset(_o11170, NM_width, _v11169); _v11169; });
    }
    if (this->f_S__21_5) {
        ({ rt::Value _v11171 = rt::V((rt::tonum(rt::dget(rt::VO(this), NM_width)) - 40.0)); rt::dset(this->f_S_9_21_Z, NM_width, _v11171); _v11171; });
    }
    (void)(rt::dcallv(this->f_S_8_21_K, NM_validate));
    ({ rt::Value _v11173 = ({ rt::Value _v11172 = rt::V(rt::m_min2(rt::tonum(rt::dget(rt::VO(this), NM_maxHeight)), rt::tonum(rt::add(rt::dget(this->f_S_8_21_K, NM_height), rt::V(40.0))))); rt::dset(rt::VO(this), NM_height, _v11172); _v11172; }); rt::dset(this->f_S__3b_U, NM_height, _v11173); _v11173; });
    if ((!rt::eq(this->f_S__2b_k, rt::NUL))) {
        ({ rt::Value _v11174 = rt::V((rt::tonum(rt::dget(rt::VO(this), NM_width)) - (rt::tonum(rt::dget(this->f_S__2b_k, NM_width)) / 2.0))); rt::dset(this->f_S__2b_k, NM_x, _v11174); _v11174; });
        ({ rt::Value _v11175 = rt::V((-((rt::tonum(rt::dget(this->f_S__2b_k, NM_height)) / 2.0)))); rt::dset(this->f_S__2b_k, NM_y, _v11175); _v11175; });
    }
    return rt::NUL;
}
rt::Value C_S__22__3c_::m_S__2b__21_R() {
    RT_FN("S__22__3c_.S__2b__21_R");
    return rt::NUL;
}
rt::Value C_S__22__3c_::m_S__21__21_G() {
    RT_FN("S__22__3c_.S__21__21_G");
    if ((rt::pybool(this->f_S__3c_X) && rt::is_stubtype(this->f_S__3c_X))) {
        (void)(rt::dcallv((({ rt::Value _t11176 = this->f_S__3c_X; rt::is_stubtype(_t11176) ? _t11176 : rt::NUL; })), NM_S__21__21_G));
    }
    if ((rt::pybool(this->f_S__21__22_O) && rt::is_stubtype(this->f_S__21__22_O))) {
        (void)(rt::dcallv((({ rt::Value _t11177 = this->f_S__21__22_O; rt::is_stubtype(_t11177) ? _t11177 : rt::NUL; })), NM_S__21__21_G));
    }
    return rt::NUL;
}
rt::Value C_S__22__3c_::m_S_8_21__5b_() {
    RT_FN("S__22__3c_.S_8_21__5b_");
    if ((rt::pybool(this->f_S__3c_X) && rt::is_stubtype(this->f_S__3c_X))) {
        (void)(rt::dcallv((({ rt::Value _t11178 = this->f_S__3c_X; rt::is_stubtype(_t11178) ? _t11178 : rt::NUL; })), NM_S_8_21__5b_));
    }
    if ((rt::pybool(this->f_S__21__22_O) && rt::is_stubtype(this->f_S__21__22_O))) {
        (void)(rt::dcallv((({ rt::Value _t11179 = this->f_S__21__22_O; rt::is_stubtype(_t11179) ? _t11179 : rt::NUL; })), NM_S_8_21__5b_));
    }
    return rt::NUL;
}
rt::Value C_S__22__3c_::m_S__21__21_c(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__22__3c_.S__21__21_c");
    if ((rt::pybool(this->f_S__3c_X) && rt::is_stubtype(this->f_S__3c_X))) {
        (void)(rt::dcallv((({ rt::Value _t11180 = this->f_S__3c_X; rt::is_stubtype(_t11180) ? _t11180 : rt::NUL; })), NM_S__21__21_c, rt::V((double)(l_param1)), rt::V((double)(l_param2))));
    }
    if ((rt::pybool(this->f_S__21__22_O) && rt::is_stubtype(this->f_S__21__22_O))) {
        (void)(rt::dcallv((({ rt::Value _t11181 = this->f_S__21__22_O; rt::is_stubtype(_t11181) ? _t11181 : rt::NUL; })), NM_S__21__21_c, rt::V((double)(l_param1)), rt::V((double)(l_param2))));
    }
    (void)(this->m_S__25__5f_());
    return rt::NUL;
}
rt::Value C_S__22__3c_::m_S__3b_S(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    int32_t l_A__loc4_ = 0;
    RT_FN("S__22__3c_.S__3b_S");
    (l_A__loc2_ = rt::NUL);
    (l_A__loc5_ = rt::NUL);
    (l_A__loc3_ = rt::NUL);
    (l_A__loc4_ = rt::toint(rt::dcallv(this->f_S__5e__21_4, rt::N_indexOf, ({ rt::Value _t11182 = rt::dget(l_param1, NM_target); rt::is_stubtype(_t11182) ? _t11182 : rt::NUL; }))));
    if ((({ bool _t11183 = (((double)(l_A__loc4_)) >= 0.0); _t11183 ? (bool)((((double)(l_A__loc4_)) < rt::alen(this->f_S__2c__21_D))) : _t11183; }) && (!rt::eq(rt::arr_at(this->f_S__2c__21_D, ((double)(l_A__loc4_))), rt::NUL)))) {
        if (rt::eq(this->f_S__2b__22_O, rt::VS(g::LS[162]))) {
            (l_A__loc2_ = ({ rt::Value _t11184 = this->f_S__3c_X; rt::is_stubtype(_t11184) ? _t11184 : rt::NUL; }));
            (l_A__loc5_ = ({ rt::Value _t11185 = this->f_S__21__22_O; rt::is_stubtype(_t11185) ? _t11185 : rt::NUL; }));
            (void)(rt::callv(rt::arr_at(this->f_S__2c__21_D, ((double)(l_A__loc4_))), C_S__26_c::sm_S__26__21__3f_(rt::dget(l_A__loc2_, NM_text)), C_S__26_c::sm_S__26__21__3f_(rt::dget(l_A__loc5_, NM_text))));
        } else if (rt::eq(this->f_S__5e__21__40_, rt::VS(g::LS[162]))) {
            (l_A__loc3_ = ({ rt::Value _t11186 = this->f_S__3c_X; rt::is_stubtype(_t11186) ? _t11186 : rt::NUL; }));
            (void)(rt::callv(rt::arr_at(this->f_S__2c__21_D, ((double)(l_A__loc4_))), C_S__26_c::sm_S__26__21__3f_(rt::dget(l_A__loc3_, NM_text))));
        } else {
            (void)(rt::callv(rt::arr_at(this->f_S__2c__21_D, ((double)(l_A__loc4_)))));
        }
    }
    (void)(this->m_S__3c_S(l_param1));
    return rt::NUL;
}
rt::Value C_S__22__3c_::m_S_3(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__22__3c_.S_3");
    (l_A__loc2_ = ({ rt::Value _t11187 = this->f_S__3c_X; rt::is_stubtype(_t11187) ? _t11187 : rt::NUL; }));
    if ((!rt::eq(this->f_S__5e__21__40_, rt::VS(g::LS[162])))) {
        ({ rt::Value _v11188 = rt::dcallv(this->f_S__2b__21_0, NM_equals, C_S__26_c::sm_S__26__21__3f_(rt::dget(l_A__loc2_, NM_text)), this->f_S__5e__21__40_); rt::dset(rt::arr_at(this->f_S__5e__21_4, 0.0), NM_isEnabled, _v11188); _v11188; });
    }
    return rt::NUL;
}
rt::Value C_S__22__3c_::m_S__3c_S(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__22__3c_.S__3c_S");
    if ((!rt::eq(this->f_S__3c_X, rt::NUL))) {
        (void)(rt::dcallv(this->f_S__3c_X, NM_removeFromParent, rt::VB(false)));
    }
    if ((!rt::eq(this->f_S__21__22_O, rt::NUL))) {
        (void)(rt::dcallv(this->f_S__21__22_O, NM_removeFromParent, rt::VB(false)));
    }
    if ((!rt::eq(this->f_S__2b_k, rt::NUL))) {
        (void)(rt::dcallv(this->f_S__2b_k, NM_removeEventListener, rt::VS(g::LS[1322]), rt::VO(rt::new_bound(rt::VO(this), NM_S__3c_S))));
    }
    if ((!rt::eq(this->f_S_6_3b_, rt::NUL))) {
        (void)(rt::callv(this->f_S_6_3b_, rt::VO(this)));
    }
    if ((!rt::eq(this->f_S_94, rt::NUL))) {
        (void)(rt::callv(this->f_S_94));
    }
    (void)(rt::dcallv(rt::VO(this), NM_removeFromParent, rt::VB(true)));
    return rt::NUL;
}
rt::Value C_S__22__3c_::m_S__40_i() {
    RT_FN("S__22__3c_.S__40_i");
    (void)(this->m_S__3c_S(rt::NUL));
    return rt::NUL;
}
rt::Value C_S__22__3c_::m_dispose() {
    RT_FN("S__22__3c_.dispose");
    if ((!this->f_S__5e_j)) {
        (void)(rt::dcallv(this->f_S_8_21_K, NM_removeChild, this->f_S__3c_X));
    }
    (void)(rt::dcallv(rt::VO(this), NM_dispose));
    return rt::NUL;
}
C_S__22__3c_* C_S__22__3c_::alloc_() {
    C_S__22__3c_* o = rt::make<C_S__22__3c_>();
    return o;
}
rt::Value C_S__22__3c_::mk_(rt::Value* a, int n) {
    C_S__22__3c_* o = alloc_();
    o->C_S__22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3b__21_d: out = rt::VB(f_S__3b__21_d); return true;
    case NM_S__5e__21__40_: out = f_S__5e__21__40_; return true;
    case NM_S__2b__22_O: out = f_S__2b__22_O; return true;
    case NM_S__3b_U: out = f_S__3b_U; return true;
    case NM_S__2b_k: out = f_S__2b_k; return true;
    case NM_S_8_21_K: out = f_S_8_21_K; return true;
    case NM_S__27__21__5e_: out = f_S__27__21__5e_; return true;
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S__2d__22_O: out = f_S__2d__22_O; return true;
    case NM_S__3c_X: out = f_S__3c_X; return true;
    case NM_S__21__22_O: out = f_S__21__22_O; return true;
    case NM_S__5e_j: out = rt::VB(f_S__5e_j); return true;
    case NM_S__20__21__5d_: out = f_S__20__21__5d_; return true;
    case NM_S__5e__21_4: out = f_S__5e__21_4; return true;
    case NM_S__2c__21_D: out = f_S__2c__21_D; return true;
    case NM_S__21_5: out = rt::VB(f_S__21_5); return true;
    case NM_S_3_21__5d_: out = f_S_3_21__5d_; return true;
    case NM_S__2b__21_0: out = f_S__2b__21_0; return true;
    case NM_S__5b_m: out = rt::V(f_S__5b_m); return true;
    case NM_S_6_3b_: out = f_S_6_3b_; return true;
    case NM_S_94: out = f_S_94; return true;
    case NM_S__3c__21_D: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5d__22_N: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__25__5f_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21__5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_c: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3b_S: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3c_S: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40_i: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_dispose: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3b__21_d: f_S__3b__21_d = rt::T(v); return true;
    case NM_S__5e__21__40_: f_S__5e__21__40_ = rt::slot_string(v); return true;
    case NM_S__2b__22_O: f_S__2b__22_O = rt::slot_string(v); return true;
    case NM_S__3b_U: f_S__3b_U = v; return true;
    case NM_S__2b_k: f_S__2b_k = v; return true;
    case NM_S_8_21_K: f_S_8_21_K = v; return true;
    case NM_S__27__21__5e_: f_S__27__21__5e_ = v; return true;
    case NM_S_9_21_Z: f_S_9_21_Z = v; return true;
    case NM_S__2d__22_O: f_S__2d__22_O = v; return true;
    case NM_S__3c_X: f_S__3c_X = v; return true;
    case NM_S__21__22_O: f_S__21__22_O = v; return true;
    case NM_S__5e_j: f_S__5e_j = rt::T(v); return true;
    case NM_S__20__21__5d_: f_S__20__21__5d_ = v; return true;
    case NM_S__5e__21_4: f_S__5e__21_4 = v; return true;
    case NM_S__2c__21_D: f_S__2c__21_D = v; return true;
    case NM_S__21_5: f_S__21_5 = rt::T(v); return true;
    case NM_S_3_21__5d_: f_S_3_21__5d_ = v; return true;
    case NM_S__2b__21_0: f_S__2b__21_0 = v; return true;
    case NM_S__5b_m: f_S__5b_m = rt::tonum(v); return true;
    case NM_S_6_3b_: f_S_6_3b_ = v; return true;
    case NM_S_94: f_S_94 = v; return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3c__21_D: out = m_S__3c__21_D(rt::arg<rt::Value>(a, n, 0, C_S__22__3c_::dm_S__3c__21_D_0()), rt::arg<rt::Value>(a, n, 1, C_S__22__3c_::dm_S__3c__21_D_1()), rt::arg<rt::Value>(a, n, 2, C_S__22__3c_::dm_S__3c__21_D_2()), rt::arg<rt::Value>(a, n, 3, C_S__22__3c_::dm_S__3c__21_D_3()), rt::arg<rt::Value>(a, n, 4, C_S__22__3c_::dm_S__3c__21_D_4()), rt::arg<bool>(a, n, 5, C_S__22__3c_::dm_S__3c__21_D_5()), rt::arg<rt::Value>(a, n, 6, C_S__22__3c_::dm_S__3c__21_D_6()), rt::arg<bool>(a, n, 7, C_S__22__3c_::dm_S__3c__21_D_7()), rt::arg<rt::Value>(a, n, 8, C_S__22__3c_::dm_S__3c__21_D_8()), rt::arg<rt::Value>(a, n, 9, C_S__22__3c_::dm_S__3c__21_D_9()), rt::arg<bool>(a, n, 10, C_S__22__3c_::dm_S__3c__21_D_10()), rt::arg<rt::Value>(a, n, 11, C_S__22__3c_::dm_S__3c__21_D_11()), rt::arg<rt::Value>(a, n, 12, C_S__22__3c_::dm_S__3c__21_D_12()), rt::arg<rt::Value>(a, n, 13, C_S__22__3c_::dm_S__3c__21_D_13()), rt::arg<rt::Value>(a, n, 14, C_S__22__3c_::dm_S__3c__21_D_14()), rt::arg<rt::Value>(a, n, 15, C_S__22__3c_::dm_S__3c__21_D_15())); return true;
    case NM_S__5d__22_N: out = m_S__5d__22_N(rt::arg<int32_t>(a, n, 0, C_S__22__3c_::dm_S__5d__22_N_0())); return true;
    case NM_S__25__5f_: out = m_S__25__5f_(); return true;
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_21__5b_: out = m_S_8_21__5b_(); return true;
    case NM_S__21__21_c: out = m_S__21__21_c(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)); return true;
    case NM_S__3b_S: out = m_S__3b_S(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S_3: out = m_S_3(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__3c_S: out = m_S__3c_S(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__40_i: out = m_S__40_i(); return true;
    case NM_dispose: out = m_dispose(); return true;
    case NM_S__3b__21_d: { rt::Value f = rt::VB(f_S__3b__21_d); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__40_: { rt::Value f = f_S__5e__21__40_; out = rt::call_value(f, a, n); return true; }
    case NM_S__2b__22_O: { rt::Value f = f_S__2b__22_O; out = rt::call_value(f, a, n); return true; }
    case NM_S__3b_U: { rt::Value f = f_S__3b_U; out = rt::call_value(f, a, n); return true; }
    case NM_S__2b_k: { rt::Value f = f_S__2b_k; out = rt::call_value(f, a, n); return true; }
    case NM_S_8_21_K: { rt::Value f = f_S_8_21_K; out = rt::call_value(f, a, n); return true; }
    case NM_S__27__21__5e_: { rt::Value f = f_S__27__21__5e_; out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S__2d__22_O: { rt::Value f = f_S__2d__22_O; out = rt::call_value(f, a, n); return true; }
    case NM_S__3c_X: { rt::Value f = f_S__3c_X; out = rt::call_value(f, a, n); return true; }
    case NM_S__21__22_O: { rt::Value f = f_S__21__22_O; out = rt::call_value(f, a, n); return true; }
    case NM_S__5e_j: { rt::Value f = rt::VB(f_S__5e_j); out = rt::call_value(f, a, n); return true; }
    case NM_S__20__21__5d_: { rt::Value f = f_S__20__21__5d_; out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21_4: { rt::Value f = f_S__5e__21_4; out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__21_D: { rt::Value f = f_S__2c__21_D; out = rt::call_value(f, a, n); return true; }
    case NM_S__21_5: { rt::Value f = rt::VB(f_S__21_5); out = rt::call_value(f, a, n); return true; }
    case NM_S_3_21__5d_: { rt::Value f = f_S_3_21__5d_; out = rt::call_value(f, a, n); return true; }
    case NM_S__2b__21_0: { rt::Value f = f_S__2b__21_0; out = rt::call_value(f, a, n); return true; }
    case NM_S__5b_m: { rt::Value f = rt::V(f_S__5b_m); out = rt::call_value(f, a, n); return true; }
    case NM_S_6_3b_: { rt::Value f = f_S_6_3b_; out = rt::call_value(f, a, n); return true; }
    case NM_S_94: { rt::Value f = f_S_94; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__3c__21_D: return true;
    case NM_S__5d__22_N: return true;
    case NM_S__25__5f_: return true;
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_21__5b_: return true;
    case NM_S__21__21_c: return true;
    case NM_S__3b_S: return true;
    case NM_S_3: return true;
    case NM_S__3c_S: return true;
    case NM_S__40_i: return true;
    case NM_dispose: return true;
    case NM_S__3b__21_d: return false;
    case NM_S__5e__21__40_: return false;
    case NM_S__2b__22_O: return false;
    case NM_S__3b_U: return false;
    case NM_S__2b_k: return false;
    case NM_S_8_21_K: return false;
    case NM_S__27__21__5e_: return false;
    case NM_S_9_21_Z: return false;
    case NM_S__2d__22_O: return false;
    case NM_S__3c_X: return false;
    case NM_S__21__22_O: return false;
    case NM_S__5e_j: return false;
    case NM_S__20__21__5d_: return false;
    case NM_S__5e__21_4: return false;
    case NM_S__2c__21_D: return false;
    case NM_S__21_5: return false;
    case NM_S_3_21__5d_: return false;
    case NM_S__2b__21_0: return false;
    case NM_S__5b_m: return false;
    case NM_S_6_3b_: return false;
    case NM_S_94: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__22__3c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_3b_::ctor_() {
    RT_FN("S_1_3b_.S_1_3b_");
    (void)(rt::NUL);
}
rt::Value C_S_1_3b_::m_S__2b__21_R() {
    RT_FN("S_1_3b_.S__2b__21_R");
    ({ rt::Value _v11189 = rt::V(300.0); rt::dset(rt::VO(this), NM_width, _v11189); _v11189; });
    return rt::NUL;
}
rt::Value C_S_1_3b_::m_S__21__21_G() {
    RT_FN("S_1_3b_.S__21__21_G");
    return rt::NUL;
}
rt::Value C_S_1_3b_::m_S_8_21__5b_() {
    RT_FN("S_1_3b_.S_8_21__5b_");
    return rt::NUL;
}
rt::Value C_S_1_3b_::m_S__21__21_c(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S_1_3b_.S__21__21_c");
    return rt::NUL;
}
bool C_S_1_3b_::dm_S__20_1_1() { return false; }
bool C_S_1_3b_::dm_S__20_1_2() { return false; }
rt::Value C_S_1_3b_::m_S__20_1(rt::Value p0, bool p1, bool p2) {
    rt::Value l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    RT_FN("S_1_3b_.S__20_1");
    return rt::NUL;
}
C_S_1_3b_* C_S_1_3b_::alloc_() {
    C_S_1_3b_* o = rt::make<C_S_1_3b_>();
    return o;
}
rt::Value C_S_1_3b_::mk_(rt::Value* a, int n) {
    C_S_1_3b_* o = alloc_();
    o->C_S_1_3b_::ctor_();
    return rt::VO(o);
}
bool C_S_1_3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__27__21__5e_: out = f_S__27__21__5e_; return true;
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21__5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_c: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S_1_3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__27__21__5e_: f_S__27__21__5e_ = rt::slot_string(v); return true;
    case NM_S_9_21_Z: f_S_9_21_Z = rt::slot_string(v); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S_1_3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_21__5b_: out = m_S_8_21__5b_(); return true;
    case NM_S__21__21_c: out = m_S__21__21_c(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)); return true;
    case NM_S__20_1: out = m_S__20_1(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, C_S_1_3b_::dm_S__20_1_1()), rt::arg<bool>(a, n, 2, C_S_1_3b_::dm_S__20_1_2())); return true;
    case NM_S__27__21__5e_: { rt::Value f = f_S__27__21__5e_; out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S_1_3b_::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_21__5b_: return true;
    case NM_S__21__21_c: return true;
    case NM_S__20_1: return true;
    case NM_S__27__21__5e_: return false;
    case NM_S_9_21_Z: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S_1_3b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_3b_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26_h::ctor_() {
    RT_FN("S__26_h.S__26_h");
    ({ rt::Value _v11190 = rt::new_vectorv(rt::E_ANY); this->f_S__3d__21__3b_ = _v11190; _v11190; });
    ({ rt::Value _v11191 = rt::new_vectorv(rt::E_INT); this->f_S__23__21__3e_ = _v11191; _v11191; });
    ({ rt::Value _v11192 = rt::new_vectorv(rt::E_INT); this->f_S__2c_6 = _v11192; _v11192; });
    ({ rt::Value _v11193 = rt::new_vectorv(rt::E_ANY); this->f_S__3e_j = _v11193; _v11193; });
    ({ rt::Value _v11194 = rt::new_vectorv(rt::E_ANY); this->f_S__20_l = _v11194; _v11194; });
    ({ rt::Value _v11195 = rt::new_vectorv(rt::E_ANY); this->f_S_8I = _v11195; _v11195; });
    ({ rt::Value _v11196 = rt::new_vectorv(rt::E_ANY); this->f_S_7 = _v11196; _v11196; });
    (void)((this->C_S_1_3b_::ctor_(), rt::NUL));
    (void)(this->m_S__2b__21_R());
}
rt::Value C_S__26_h::m_S__2b__21_R() {
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__26_h.S__2b__21_R");
    (l_A__loc2_ = rt::toint_d(0.0));
    ({ rt::Value _v11197 = rt::V((g::SV.C_S__20_g__S__22_g ? 590.0 : 560.0)); rt::dset(rt::VO(this), NM_width, _v11197); _v11197; });
    (l_A__loc1_ = rt::callv(rt::dget(rt::VO(this), NM_FlowLayout)));
    ({ rt::Value _v11198 = rt::VS(g::LS[3355]); rt::dset(l_A__loc1_, NM_rowVerticalAlign, _v11198); _v11198; });
    ({ rt::Value _v11199 = rt::V(2.0); rt::dset(l_A__loc1_, NM_verticalGap, _v11199); _v11199; });
    ({ rt::Value _v11200 = rt::V(0.0); rt::dset(l_A__loc1_, NM_horizontalGap, _v11200); _v11200; });
    ({ rt::Value _v11201 = l_A__loc1_; rt::dset(rt::VO(this), NM_layout, _v11201); _v11201; });
    (void)(rt::dcallv(this->f_S__3d__21__3b_, rt::N_push, C_S_8G::sm_S__21__21_H(g::SV.C_S__27__21_8__id)));
    (void)(rt::dcallv(this->f_S__3d__21__3b_, rt::N_push, C_S_8G::sm_S__21__21_H(g::SV.C_S__3d__21_Q__id)));
    (void)(rt::dcallv(this->f_S__3d__21__3b_, rt::N_push, C_S_8G::sm_S__21__21_H(g::SV.C_S__23_I__id)));
    (void)(rt::dcallv(this->f_S__3d__21__3b_, rt::N_push, C_S_8G::sm_S__21__21_H(g::SV.C_S__21__21_T__id)));
    (void)(rt::dcallv(this->f_S__3d__21__3b_, rt::N_push, C_S_8G::sm_S__21__21_H(g::SV.C_S_7_21__3e___id)));
    (void)(this->m_S_7j(rt::toint_d((-1.0))));
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) < rt::alen(this->f_S__3d__21__3b_))) {
        ({ rt::Value _v11202 = rt::V((-1.0)); rt::idx_set(this->f_S__23__21__3e_, rt::V((double)(l_A__loc2_)), _v11202); });
        ({ rt::Value _v11203 = rt::V((-1.0)); rt::idx_set(this->f_S__2c_6, rt::V((double)(l_A__loc2_)), _v11203); });
        (void)(this->m_S_7j(l_A__loc2_));
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    (void)(rt::dcallv(rt::VO(this), NM_addEventListener, rt::VS(g::LS[1278]), rt::VO(rt::new_bound(rt::VO(this), NM_onTouch))));
    return rt::NUL;
}
rt::Value C_S__26_h::m_S_7j(int32_t p0) {
    int32_t l_param1 = p0;
    double l_A__loc10_ = NAN;
    double l_A__loc8_ = NAN;
    double l_A__loc3_ = NAN;
    double l_A__loc13_ = NAN;
    rt::Value l_A__loc6_ = rt::NUL;
    double l_A__loc7_ = NAN;
    double l_A__loc9_ = NAN;
    double l_A__loc14_ = NAN;
    double l_A__loc2_ = NAN;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc12_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_A__loc11_ = rt::NUL;
    RT_FN("S__26_h.S_7j");
    (l_A__loc10_ = NAN);
    (l_A__loc8_ = NAN);
    (l_A__loc3_ = NAN);
    (l_A__loc13_ = NAN);
    (l_A__loc6_ = rt::NUL);
    (l_A__loc7_ = NAN);
    (l_A__loc9_ = NAN);
    (l_A__loc14_ = NAN);
    (l_A__loc2_ = NAN);
    (l_A__loc5_ = rt::NUL);
    (l_A__loc12_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
    if (g::SV.C_S__20_g__S__22_g) {
        (l_A__loc10_ = 35.0);
        if ((((double)(g::SV.C_Translation__locale)) == 5.0)) {
            (l_A__loc10_ = 28.0);
        }
        ({ rt::Value _v11204 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), ((((double)(l_param1)) == (-1.0)) ? g::SV.C_S_99__S__5e_z : g::SV.C_S_99__S_8_21_5), rt::V(l_A__loc10_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc12_, NM_textRendererProperties), NM_elementFormat, _v11204); _v11204; });
        ({ rt::Value _v11205 = rt::V(170.0); rt::dset(l_A__loc12_, NM_width, _v11205); _v11205; });
    } else {
        (l_A__loc8_ = 14.0);
        if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
            (l_A__loc8_ = 13.0);
        }
        ({ rt::Value _v11206 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc8_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc12_, NM_textRendererProperties), NM_elementFormat, _v11206); _v11206; });
        ({ rt::Value _v11207 = rt::V(170.0); rt::dset(l_A__loc12_, NM_width, _v11207); _v11207; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc12_));
    if ((((double)(l_param1)) == (-1.0))) {
        ({ rt::Value _v11208 = rt::trv(rt::VS(g::LS[3362])); rt::dset(l_A__loc12_, NM_text, _v11208); _v11208; });
    } else {
        {
            rt::Value _sw11209 = rt::V((double)(l_param1));
            int _c11210 = -1;
            if (_c11210 == -1 && rt::strict_eq(_sw11209, rt::V(0.0))) _c11210 = 0;
            if (_c11210 == -1 && rt::strict_eq(_sw11209, rt::V(1.0))) _c11210 = 1;
            if (_c11210 == -1 && rt::strict_eq(_sw11209, rt::V(2.0))) _c11210 = 2;
            if (_c11210 == -1 && rt::strict_eq(_sw11209, rt::V(3.0))) _c11210 = 3;
            if (_c11210 == -1 && rt::strict_eq(_sw11209, rt::V(4.0))) _c11210 = 4;
            if (_c11210 == -1) _c11210 = 5;
            switch (_c11210) {
            case 0: {
                ({ rt::Value _v11211 = rt::trv(rt::VS(g::LS[629])); rt::dset(l_A__loc12_, NM_text, _v11211); _v11211; });
                break;
            }
            case 1: {
                ({ rt::Value _v11212 = rt::trv(rt::VS(g::LS[3363])); rt::dset(l_A__loc12_, NM_text, _v11212); _v11212; });
                break;
            }
            case 2: {
                ({ rt::Value _v11213 = rt::trv(rt::VS(g::LS[627])); rt::dset(l_A__loc12_, NM_text, _v11213); _v11213; });
                break;
            }
            case 3: {
                ({ rt::Value _v11214 = rt::trv(rt::VS(g::LS[3364])); rt::dset(l_A__loc12_, NM_text, _v11214); _v11214; });
                break;
            }
            case 4: {
                ({ rt::Value _v11215 = rt::trv(rt::VS(g::LS[3365])); rt::dset(l_A__loc12_, NM_text, _v11215); _v11215; });
            }
            default: break;
            }
        }
        (void)(rt::dcallv(this->f_S__3e_j, rt::N_push, l_A__loc12_));
    }
    (l_A__loc4_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
    ({ rt::Value _v11216 = rt::V(2.0); rt::dset(l_A__loc4_, NM_y, _v11216); _v11216; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v11217 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), ((((double)(l_param1)) == (-1.0)) ? g::SV.C_S_99__S__5e_z : g::SV.C_S_99__S_8_21_5), rt::V(35.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc4_, NM_textRendererProperties), NM_elementFormat, _v11217); _v11217; });
        ({ rt::Value _v11218 = rt::V(110.0); rt::dset(l_A__loc4_, NM_width, _v11218); _v11218; });
    } else {
        (l_A__loc3_ = 20.0);
        if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
            (l_A__loc3_ = 16.0);
        }
        ({ rt::Value _v11219 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc3_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc4_, NM_textRendererProperties), NM_elementFormat, _v11219); _v11219; });
        ({ rt::Value _v11220 = rt::V(80.0); rt::dset(l_A__loc4_, NM_width, _v11220); _v11220; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc4_));
    if ((((double)(l_param1)) == (-1.0))) {
        ({ rt::Value _v11221 = rt::trv(rt::VS(g::LS[3366])); rt::dset(l_A__loc4_, NM_text, _v11221); _v11221; });
    } else {
        (void)(rt::dcallv(this->f_S__20_l, rt::N_push, l_A__loc4_));
    }
    (l_A__loc11_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v11222 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), ((((double)(l_param1)) == (-1.0)) ? g::SV.C_S_99__S__5e_z : g::SV.C_S_99__S_8_21_5), rt::V(35.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc11_, NM_textRendererProperties), NM_elementFormat, _v11222); _v11222; });
        ({ rt::Value _v11223 = rt::V(160.0); rt::dset(l_A__loc11_, NM_width, _v11223); _v11223; });
    } else {
        (l_A__loc13_ = 20.0);
        if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
            (l_A__loc13_ = 16.0);
        }
        ({ rt::Value _v11224 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc13_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc11_, NM_textRendererProperties), NM_elementFormat, _v11224); _v11224; });
        ({ rt::Value _v11225 = rt::V(160.0); rt::dset(l_A__loc11_, NM_width, _v11225); _v11225; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc11_));
    if ((((double)(l_param1)) == (-1.0))) {
        ({ rt::Value _v11226 = rt::trv(rt::VS(g::LS[3367])); rt::dset(l_A__loc11_, NM_text, _v11226); _v11226; });
    } else {
        (void)(rt::dcallv(this->f_S_8I, rt::N_push, l_A__loc11_));
    }
    if ((!(((double)(l_param1)) == (-1.0)))) {
        (l_A__loc6_ = rt::callv(rt::dget(rt::VO(this), NM_Button)));
        ({ rt::Value _v11227 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3e__21_W); rt::dset(l_A__loc6_, NM_defaultSkin, _v11227); _v11227; });
        ({ rt::Value _v11228 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_E); rt::dset(l_A__loc6_, NM_downSkin, _v11228); _v11228; });
        ({ rt::Value _v11229 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2c__24_); rt::dset(l_A__loc6_, NM_hoverSkin, _v11229); _v11229; });
        ({ rt::Value _v11230 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3e__21_); rt::dset(l_A__loc6_, NM_disabledSkin, _v11230); _v11230; });
        if (g::SV.C_S__20_g__S__22_g) {
            (l_A__loc7_ = 46.0);
            (l_A__loc7_ = (((((double)(l_param1)) == 5.0) && (((double)(g::SV.C_Translation__locale)) == 2.0)) ? 32.0 : 46.0));
            ({ rt::Value _v11231 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(l_A__loc7_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc6_, NM_defaultLabelProperties), NM_elementFormat, _v11231); _v11231; });
            ({ rt::Value _v11232 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(l_A__loc7_), rt::V(9079434.0)); rt::dset(rt::dget(l_A__loc6_, NM_disabledLabelProperties), NM_elementFormat, _v11232); _v11232; });
            ({ rt::Value _v11237 = ({ rt::Value _v11236 = ({ rt::Value _v11235 = ({ rt::Value _v11234 = ({ rt::Value _v11233 = rt::V(150.0); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_width, _v11233); _v11233; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_width, _v11234); _v11234; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_width, _v11235); _v11235; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_width, _v11236); _v11236; }); rt::dset(l_A__loc6_, NM_width, _v11237); _v11237; });
            ({ rt::Value _v11242 = ({ rt::Value _v11241 = ({ rt::Value _v11240 = ({ rt::Value _v11239 = ({ rt::Value _v11238 = rt::V(45.0); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_height, _v11238); _v11238; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_height, _v11239); _v11239; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_height, _v11240); _v11240; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_height, _v11241); _v11241; }); rt::dset(l_A__loc6_, NM_height, _v11242); _v11242; });
        } else {
            (l_A__loc9_ = 26.0);
            (l_A__loc14_ = 120.0);
            (l_A__loc2_ = 50.0);
            if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
                (l_A__loc9_ = ((((double)(l_param1)) == 5.0) ? (((((double)(g::SV.C_Translation__locale)) == 2.0) ? 14.0 : 22.0)) : 22.0));
                (l_A__loc14_ = 150.0);
                (l_A__loc2_ = 50.0);
            }
            ({ rt::Value _v11243 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc9_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc6_, NM_defaultLabelProperties), NM_elementFormat, _v11243); _v11243; });
            ({ rt::Value _v11244 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc9_), rt::V(9079434.0)); rt::dset(rt::dget(l_A__loc6_, NM_disabledLabelProperties), NM_elementFormat, _v11244); _v11244; });
            ({ rt::Value _v11249 = ({ rt::Value _v11248 = ({ rt::Value _v11247 = ({ rt::Value _v11246 = ({ rt::Value _v11245 = rt::V(l_A__loc14_); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_width, _v11245); _v11245; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_width, _v11246); _v11246; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_width, _v11247); _v11247; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_width, _v11248); _v11248; }); rt::dset(l_A__loc6_, NM_width, _v11249); _v11249; });
            ({ rt::Value _v11254 = ({ rt::Value _v11253 = ({ rt::Value _v11252 = ({ rt::Value _v11251 = ({ rt::Value _v11250 = rt::V(l_A__loc2_); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_height, _v11250); _v11250; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_height, _v11251); _v11251; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_height, _v11252); _v11252; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_height, _v11253); _v11253; }); rt::dset(l_A__loc6_, NM_height, _v11254); _v11254; });
            (void)(C_S_99::sm_S_9_21_W(l_A__loc6_));
        }
        ({ rt::Value _v11255 = rt::trv(rt::VS(g::LS[1317])); rt::dset(l_A__loc6_, NM_label, _v11255); _v11255; });
        ({ rt::Value _v11256 = rt::V(2.0); rt::dset(l_A__loc6_, NM_labelOffsetY, _v11256); _v11256; });
        ({ rt::Value _v11259 = rt::dcallv(rt::V((double)(({ rt::Value _o11257 = rt::arr_at(this->f_S__3d__21__3b_, ((double)(l_param1))); C_S__60_6* _p11258 = rt::as_ptr<C_S__60_6>(_o11257); _p11258 ? _p11258->f_id : rt::touint(rt::dget(_o11257, NM_id)); }))), rt::N_toString); rt::dset(l_A__loc6_, rt::N_name, _v11259); _v11259; });
        (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc6_));
        (void)(rt::dcallv(this->f_S_7, rt::N_push, l_A__loc6_));
    } else {
        (l_A__loc5_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
        ({ rt::Value _v11260 = rt::V((g::SV.C_S__20_g__S__22_g ? 50.0 : 120.0)); rt::dset(l_A__loc5_, NM_width, _v11260); _v11260; });
        ({ rt::Value _v11261 = rt::V((g::SV.C_S__20_g__S__22_g ? 25.0 : 50.0)); rt::dset(l_A__loc5_, NM_height, _v11261); _v11261; });
        (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc5_));
    }
    return rt::NUL;
}
rt::Value C_S__26_h::m_S__21__21_G() {
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc4_ = rt::UNDEF;
    double l_A__loc1_ = NAN;
    bool l_A__loc2_ = false;
    RT_FN("S__26_h.S__21__21_G");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::V(0.0));
    (l_A__loc1_ = NAN);
    (l_A__loc2_ = ({ bool _t11262 = (!rt::eq(rt::V((double)(this->f_S_7_21_b)), rt::arr_at(g::SV.C_S_8G__S_4P, 0.0))); _t11262 ? _t11262 : (bool)((!(this->f_S__20_z == (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)))))); }));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < rt::alen(this->f_S__3d__21__3b_))) {
        if ((!(((double)(({ rt::Value _o11263 = rt::arr_at(this->f_S__3d__21__3b_, ((double)(l_A__loc3_))); C_S__60_6* _p11264 = rt::as_ptr<C_S__60_6>(_o11263); _p11264 ? _p11264->f_id : rt::touint(rt::dget(_o11263, NM_id)); }))) == ((double)(g::SV.C_S_7_21__3f___id))))) {
            (l_A__loc4_ = rt::V((double)(this->m_S__2b_A(l_A__loc3_))));
            if ((!rt::eq(rt::arr_at(this->f_S__23__21__3e_, ((double)(l_A__loc3_))), l_A__loc4_))) {
                ({ rt::Value _v11265 = l_A__loc4_; rt::idx_set(this->f_S__23__21__3e_, rt::V((double)(l_A__loc3_)), _v11265); });
                ({ rt::Value _v11266 = this->m_S_9W(l_A__loc3_); rt::dset(rt::arr_at(this->f_S__20_l, ((double)(l_A__loc3_))), NM_text, _v11266); _v11266; });
            }
        }
        (l_A__loc1_ = ({ rt::Value _o11267 = rt::arr_at(this->f_S__3d__21__3b_, ((double)(l_A__loc3_))); C_S__60_6* _p11268 = rt::as_ptr<C_S__60_6>(_o11267); _p11268 ? _p11268->m_S__27_B(rt::toint_d(2.0)) : rt::tonum(rt::dcallv(_o11267, NM_S__27_B, rt::V(2.0))); }));
        if (((!rt::eq(rt::arr_at(this->f_S__2c_6, ((double)(l_A__loc3_))), rt::V(l_A__loc1_))) || l_A__loc2_)) {
            ({ rt::Value _v11269 = rt::arr_at(g::SV.C_S_8G__S_4P, 0.0); this->f_S_7_21_b = rt::toint(_v11269); _v11269; });
            ({ bool _v11270 = rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)); this->f_S__20_z = _v11270; _v11270; });
            ({ rt::Value _v11271 = rt::V(l_A__loc1_); rt::idx_set(this->f_S__2c_6, rt::V((double)(l_A__loc3_)), _v11271); });
            ({ rt::Value _v11272 = rt::tr_nv(rt::VS(g::LS[3368]), rt::VS(g::LS[3369]), rt::V(l_A__loc1_), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())); rt::dset(rt::arr_at(this->f_S_8I, ((double)(l_A__loc3_))), NM_text, _v11272); _v11272; });
        }
        ({ rt::Value _v11276 = rt::VB(({ bool _t11275 = rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 2.0), rt::arr_at(this->f_S__2c_6, ((double)(l_A__loc3_)))); _t11275 ? (bool)(({ rt::Value _o11273 = rt::arr_at(this->f_S__3d__21__3b_, ((double)(l_A__loc3_))); C_S__60_6* _p11274 = rt::as_ptr<C_S__60_6>(_o11273); _p11274 ? _p11274->g_S_9_21__25_() : rt::T(rt::dget(_o11273, NM_S_9_21__25_)); })) : _t11275; })); rt::dset(rt::arr_at(this->f_S_7, ((double)(l_A__loc3_))), NM_isEnabled, _v11276); _v11276; });
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    return rt::NUL;
}
uint32_t C_S__26_h::m_S__2b_A(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_h.S__2b_A");
    {
        rt::Value _sw11277 = rt::V((double)(l_param1));
        int _c11278 = -1;
        if (_c11278 == -1 && rt::strict_eq(_sw11277, rt::V(0.0))) _c11278 = 0;
        if (_c11278 == -1 && rt::strict_eq(_sw11277, rt::V(1.0))) _c11278 = 1;
        if (_c11278 == -1 && rt::strict_eq(_sw11277, rt::V(2.0))) _c11278 = 2;
        if (_c11278 == -1 && rt::strict_eq(_sw11277, rt::V(3.0))) _c11278 = 3;
        if (_c11278 == -1 && rt::strict_eq(_sw11277, rt::V(4.0))) _c11278 = 4;
        if (_c11278 == -1) _c11278 = 5;
        switch (_c11278) {
        case 0: {
            return rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(114.0)));
        }
        case 1: {
            return rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(115.0)));
        }
        case 2: {
            return rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(116.0)));
        }
        case 3: {
            return rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(117.0)));
        }
        case 4: {
            return rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(118.0)));
        }
        case 5: {
            return rt::touint_d(0.0);
        }
        default: break;
        }
    }
    return 0u;
}
rt::Value C_S__26_h::m_S_9W(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26_h.S_9W");
    {
        rt::Value _sw11279 = rt::V((double)(l_param1));
        int _c11280 = -1;
        if (_c11280 == -1 && rt::strict_eq(_sw11279, rt::V(0.0))) _c11280 = 0;
        if (_c11280 == -1 && rt::strict_eq(_sw11279, rt::V(1.0))) _c11280 = 1;
        if (_c11280 == -1 && rt::strict_eq(_sw11279, rt::V(2.0))) _c11280 = 2;
        if (_c11280 == -1 && rt::strict_eq(_sw11279, rt::V(3.0))) _c11280 = 3;
        if (_c11280 == -1 && rt::strict_eq(_sw11279, rt::V(4.0))) _c11280 = 4;
        if (_c11280 == -1) _c11280 = 5;
        switch (_c11280) {
        case 0: {
            return rt::slot_string(C_S__26_c::sm_S_8_21_Z(C_S__2d__21_Z::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()));
        }
        case 1: {
            return rt::slot_string(rt::dcallv(rt::V(C_S__2d__21_Z::sm_S_2_21_W()), rt::N_toFixed, rt::V(1.0)));
        }
        case 2: {
            return rt::slot_string(C_S__26_c::sm_S_8_21_Z(C_S__2d__21_Z::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()));
        }
        case 3: {
            return rt::slot_string(rt::dcallv(rt::V(C_S__2d__21_Z::sm_S__5e_y()), rt::N_toFixed, rt::V(2.0)));
        }
        case 4: {
            return rt::slot_string(rt::dcallv(rt::V(C_S__2d__21_Z::sm_S__40__21__3f_()), rt::N_toFixed, rt::V(2.0)));
        }
        case 5: {
            return rt::slot_string(rt::VS(g::LS[113]));
        }
        default: break;
        }
    }
    return rt::NUL;
}
bool C_S__26_h::dm_S__20_1_1() { return false; }
bool C_S__26_h::dm_S__20_1_2() { return false; }
rt::Value C_S__26_h::m_S__20_1(rt::Value p0, bool p1, bool p2) {
    rt::Value l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_A__loc4_ = rt::NUL;
    int32_t l_A__loc5_ = 0;
    rt::Value l_A__loc6_ = rt::NUL;
    RT_FN("S__26_h.S__20_1");
    (l_A__loc4_ = rt::NUL);
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc6_ = rt::NUL);
    (l_A__loc5_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc5_)) < rt::alen(this->f_S_7))) {
        (l_A__loc4_ = rt::arr_at(this->f_S_7, ((double)(l_A__loc5_))));
        (void)(rt::dcallv(l_A__loc4_, NM_getBounds, rt::dget(rt::VO(this), NM_stage), g::SV.C_S__26_h__S_5N));
        if (rt::T(rt::dcallv(g::SV.C_S__26_h__S_5N, NM_containsPoint, l_param1))) {
            (l_A__loc6_ = C_S_8G::sm_S__21__21_H(rt::touint(rt::dget(l_A__loc4_, rt::N_name))));
            if ((!rt::eq(l_A__loc6_, rt::NUL))) {
                ({ rt::Value _v11281 = l_A__loc6_; this->f_S__25__21_4 = _v11281; _v11281; });
                (void)(this->m_S__3b__23_());
            }
            break;
        }
        (l_A__loc5_ = rt::toint_d((((double)(l_A__loc5_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S__26_h::m_S__25_o() {
    RT_FN("S__26_h.S__25_o");
    ({ bool _v11282 = false; this->f_S__27__21_Y = _v11282; _v11282; });
    return rt::NUL;
}
rt::Value C_S__26_h::m_S__3b__23_() {
    RT_FN("S__26_h.S__3b__23_");
    if (({ rt::Value _o11283 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p11284 = rt::as_ptr<C_S_8G>(_o11283); _p11284 ? _p11284->m_S_6M(this->f_S__25__21_4, false, true) : rt::T(rt::dcallv(_o11283, NM_S_6M, this->f_S__25__21_4, rt::VB(false), rt::VB(true))); })) {
        (void)(this->m_S__21__21_G());
        if (rt::is_class(rt::dget(rt::VO(this), NM_parent), C_S_7_21_B::CI)) {
            (void)(({ rt::Value _o11286 = (({ rt::Value _t11285 = rt::dget(rt::VO(this), NM_parent); rt::is_class(_t11285, C_S_7_21_B::CI) ? _t11285 : rt::NUL; })); C_S_7_21_B* _p11287 = rt::as_ptr<C_S_7_21_B>(_o11286); _p11287 ? _p11287->m_S_2_21__2c_() : rt::dcallv(_o11286, NM_S_2_21__2c_); }));
        }
    }
    return rt::NUL;
}
rt::Value C_S__26_h::m_onTouch(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__26_h.onTouch");
    (l_A__loc2_ = rt::NUL);
    if ((!rt::T(rt::dget(rt::VO(this), NM_stage)))) {
        return rt::NUL;
    }
    if ((((double)(this->f_S__5d__21__25_)) >= 0.0)) {
        (l_A__loc2_ = rt::dcallv(l_param1, NM_getTouch, rt::VO(this), rt::NUL, rt::V((double)(this->f_S__5d__21__25_))));
        if ((!rt::T(l_A__loc2_))) {
            return rt::NUL;
        }
        if (rt::eq(rt::dget(l_A__loc2_, NM_phase), rt::VS(g::LS[1280]))) {
            (void)(rt::dcallv(l_A__loc2_, NM_getLocation, rt::dget(rt::VO(this), NM_stage), g::SV.C_S__26_h__S_6s));
            (void)(this->m_S__20_1(g::SV.C_S__26_h__S_6s, rt::T(rt::dget(l_param1, NM_ctrlKey)), rt::T(rt::dget(l_param1, NM_shiftKey))));
            ({ double _v11288 = (-1.0); this->f_S__5d__21__25_ = rt::toint_d(_v11288); _v11288; });
        }
        return rt::NUL;
    }
    (l_A__loc2_ = rt::dcallv(l_param1, NM_getTouch, rt::VO(this), rt::VS(g::LS[1281])));
    if (rt::T(l_A__loc2_)) {
        ({ rt::Value _v11289 = rt::dget(l_A__loc2_, NM_id); this->f_S__5d__21__25_ = rt::toint(_v11289); _v11289; });
        return rt::NUL;
    }
    (l_A__loc2_ = rt::dcallv(l_param1, NM_getTouch, rt::VO(this), rt::VS(g::LS[1282])));
    if (rt::T(l_A__loc2_)) {
        return rt::NUL;
    }
    return rt::NUL;
}
rt::Value C_S__26_h::m_S_8_21__5b_() {
    RT_FN("S__26_h.S_8_21__5b_");
    return rt::NUL;
}
rt::Value C_S__26_h::m_S__21__21_c(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__26_h.S__21__21_c");
    return rt::NUL;
}
C_S__26_h* C_S__26_h::alloc_() {
    C_S__26_h* o = rt::make<C_S__26_h>();
    return o;
}
rt::Value C_S__26_h::mk_(rt::Value* a, int n) {
    C_S__26_h* o = alloc_();
    o->C_S__26_h::ctor_();
    return rt::VO(o);
}
bool C_S__26_h::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3d__21__3b_: out = f_S__3d__21__3b_; return true;
    case NM_S__23__21__3e_: out = f_S__23__21__3e_; return true;
    case NM_S__2c_6: out = f_S__2c_6; return true;
    case NM_S__3e_j: out = f_S__3e_j; return true;
    case NM_S__20_l: out = f_S__20_l; return true;
    case NM_S_8I: out = f_S_8I; return true;
    case NM_S_7: out = f_S_7; return true;
    case NM_S_7_21_b: out = rt::V((double)(f_S_7_21_b)); return true;
    case NM_S__20_z: out = rt::VB(f_S__20_z); return true;
    case NM_S__25__21_4: out = f_S__25__21_4; return true;
    case NM_S__27__21_Y: out = rt::VB(f_S__27__21_Y); return true;
    case NM_S__5d__21__25_: out = rt::V((double)(f_S__5d__21__25_)); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7j: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b_A: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9W: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__25_o: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3b__23_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_onTouch: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21__5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_c: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_3b_::dget(id, out);
}
bool C_S__26_h::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3d__21__3b_: f_S__3d__21__3b_ = v; return true;
    case NM_S__23__21__3e_: f_S__23__21__3e_ = v; return true;
    case NM_S__2c_6: f_S__2c_6 = v; return true;
    case NM_S__3e_j: f_S__3e_j = v; return true;
    case NM_S__20_l: f_S__20_l = v; return true;
    case NM_S_8I: f_S_8I = v; return true;
    case NM_S_7: f_S_7 = v; return true;
    case NM_S_7_21_b: f_S_7_21_b = rt::toint(v); return true;
    case NM_S__20_z: f_S__20_z = rt::T(v); return true;
    case NM_S__25__21_4: f_S__25__21_4 = v; return true;
    case NM_S__27__21_Y: f_S__27__21_Y = rt::T(v); return true;
    case NM_S__5d__21__25_: f_S__5d__21__25_ = rt::toint(v); return true;
    default: break;
    }
    return C_S_1_3b_::dset(id, v);
}
bool C_S__26_h::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_7j: out = m_S_7j(rt::arg<int32_t>(a, n, 0, 0)); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__2b_A: out = rt::V((double)(m_S__2b_A(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S_9W: out = m_S_9W(rt::arg<int32_t>(a, n, 0, 0)); return true;
    case NM_S__20_1: out = m_S__20_1(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, C_S__26_h::dm_S__20_1_1()), rt::arg<bool>(a, n, 2, C_S__26_h::dm_S__20_1_2())); return true;
    case NM_S__25_o: out = m_S__25_o(); return true;
    case NM_S__3b__23_: out = m_S__3b__23_(); return true;
    case NM_onTouch: out = m_onTouch(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S_8_21__5b_: out = m_S_8_21__5b_(); return true;
    case NM_S__21__21_c: out = m_S__21__21_c(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)); return true;
    case NM_S__3d__21__3b_: { rt::Value f = f_S__3d__21__3b_; out = rt::call_value(f, a, n); return true; }
    case NM_S__23__21__3e_: { rt::Value f = f_S__23__21__3e_; out = rt::call_value(f, a, n); return true; }
    case NM_S__2c_6: { rt::Value f = f_S__2c_6; out = rt::call_value(f, a, n); return true; }
    case NM_S__3e_j: { rt::Value f = f_S__3e_j; out = rt::call_value(f, a, n); return true; }
    case NM_S__20_l: { rt::Value f = f_S__20_l; out = rt::call_value(f, a, n); return true; }
    case NM_S_8I: { rt::Value f = f_S_8I; out = rt::call_value(f, a, n); return true; }
    case NM_S_7: { rt::Value f = f_S_7; out = rt::call_value(f, a, n); return true; }
    case NM_S_7_21_b: { rt::Value f = rt::V((double)(f_S_7_21_b)); out = rt::call_value(f, a, n); return true; }
    case NM_S__20_z: { rt::Value f = rt::VB(f_S__20_z); out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21_4: { rt::Value f = f_S__25__21_4; out = rt::call_value(f, a, n); return true; }
    case NM_S__27__21_Y: { rt::Value f = rt::VB(f_S__27__21_Y); out = rt::call_value(f, a, n); return true; }
    case NM_S__5d__21__25_: { rt::Value f = rt::V((double)(f_S__5d__21__25_)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_1_3b_::dcall(id, a, n, out);
}
bool C_S__26_h::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_7j: return true;
    case NM_S__21__21_G: return true;
    case NM_S__2b_A: return true;
    case NM_S_9W: return true;
    case NM_S__20_1: return true;
    case NM_S__25_o: return true;
    case NM_S__3b__23_: return true;
    case NM_onTouch: return true;
    case NM_S_8_21__5b_: return true;
    case NM_S__21__21_c: return true;
    case NM_S__3d__21__3b_: return false;
    case NM_S__23__21__3e_: return false;
    case NM_S__2c_6: return false;
    case NM_S__3e_j: return false;
    case NM_S__20_l: return false;
    case NM_S_8I: return false;
    case NM_S_7: return false;
    case NM_S_7_21_b: return false;
    case NM_S__20_z: return false;
    case NM_S__25__21_4: return false;
    case NM_S__27__21_Y: return false;
    case NM_S__5d__21__25_: return false;
    default: break;
    }
    return C_S_1_3b_::dmeth(id);
}
bool C_S__26_h::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26_h::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5N: out = g::SV.C_S__26_h__S_5N; return true;
    case NM_S_6s: out = g::SV.C_S__26_h__S_6s; return true;
    default: return false;
    }
}
bool C_S__26_h::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_5N: g::SV.C_S__26_h__S_5N = v; return true;
    case NM_S_6s: g::SV.C_S__26_h__S_6s = v; return true;
    default: return false;
    }
}
bool C_S__26_h::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c_S::ctor_() {
    RT_FN("S__2c_S.S__2c_S");
    ({ rt::Value _v11290 = rt::new_vectorv(rt::E_ANY); this->f_S__3e__21__21_ = _v11290; _v11290; });
    ({ rt::Value _v11291 = rt::new_vectorv(rt::E_INT); this->f_S__23__21__3e_ = _v11291; _v11291; });
    ({ rt::Value _v11292 = rt::new_vectorv(rt::E_INT); this->f_S__2c_6 = _v11292; _v11292; });
    ({ rt::Value _v11293 = rt::new_vectorv(rt::E_ANY); this->f_S__3e_j = _v11293; _v11293; });
    ({ rt::Value _v11294 = rt::new_vectorv(rt::E_ANY); this->f_S__20_l = _v11294; _v11294; });
    ({ rt::Value _v11295 = rt::new_vectorv(rt::E_ANY); this->f_S_8I = _v11295; _v11295; });
    ({ rt::Value _v11296 = rt::new_vectorv(rt::E_ANY); this->f_S_7 = _v11296; _v11296; });
    (void)((this->C_S_1_3b_::ctor_(), rt::NUL));
    ({ rt::Value _v11297 = rt::trv(rt::VS(g::LS[3370])); this->f_S_9_21_Z = rt::slot_string(_v11297); _v11297; });
    (void)(this->m_S__2b__21_R());
}
rt::Value C_S__2c_S::m_S__2b__21_R() {
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__2c_S.S__2b__21_R");
    (l_A__loc2_ = rt::toint_d(0.0));
    ({ rt::Value _v11298 = rt::V((g::SV.C_S__20_g__S__22_g ? 600.0 : 560.0)); rt::dset(rt::VO(this), NM_width, _v11298); _v11298; });
    (l_A__loc1_ = rt::callv(rt::dget(rt::VO(this), NM_FlowLayout)));
    ({ rt::Value _v11299 = rt::VS(g::LS[3355]); rt::dset(l_A__loc1_, NM_rowVerticalAlign, _v11299); _v11299; });
    ({ rt::Value _v11300 = rt::V(2.0); rt::dset(l_A__loc1_, NM_verticalGap, _v11300); _v11300; });
    ({ rt::Value _v11301 = rt::V(0.0); rt::dset(l_A__loc1_, NM_horizontalGap, _v11301); _v11301; });
    ({ rt::Value _v11302 = l_A__loc1_; rt::dset(rt::VO(this), NM_layout, _v11302); _v11302; });
    (void)(rt::dcallv(this->f_S__3e__21__21_, rt::N_push, C_S_8G::sm_S__21__21_H(g::SV.C_S__3b__21_R__id)));
    (void)(rt::dcallv(this->f_S__3e__21__21_, rt::N_push, C_S_8G::sm_S__21__21_H(g::SV.C_S_2_21__24___id)));
    (void)(rt::dcallv(this->f_S__3e__21__21_, rt::N_push, C_S_8G::sm_S__21__21_H(g::SV.C_S_2U__id)));
    (void)(rt::dcallv(this->f_S__3e__21__21_, rt::N_push, C_S_8G::sm_S__21__21_H(g::SV.C_S__60_Y__id)));
    (void)(rt::dcallv(this->f_S__3e__21__21_, rt::N_push, C_S_8G::sm_S__21__21_H(g::SV.C_S_8_21_V__id)));
    (void)(rt::dcallv(this->f_S__3e__21__21_, rt::N_push, C_S_8G::sm_S__21__21_H(g::SV.C_S__2b_n__id)));
    (void)(this->m_S_7j(rt::toint_d((-1.0))));
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) < rt::alen(this->f_S__3e__21__21_))) {
        ({ rt::Value _v11303 = rt::V((-1.0)); rt::idx_set(this->f_S__23__21__3e_, rt::V((double)(l_A__loc2_)), _v11303); });
        ({ rt::Value _v11304 = rt::V((-1.0)); rt::idx_set(this->f_S__2c_6, rt::V((double)(l_A__loc2_)), _v11304); });
        (void)(this->m_S_7j(l_A__loc2_));
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    (void)(rt::dcallv(rt::VO(this), NM_addEventListener, rt::VS(g::LS[1278]), rt::VO(rt::new_bound(rt::VO(this), NM_onTouch))));
    return rt::NUL;
}
rt::Value C_S__2c_S::m_S_7j(int32_t p0) {
    int32_t l_param1 = p0;
    double l_A__loc10_ = NAN;
    double l_A__loc8_ = NAN;
    double l_A__loc3_ = NAN;
    double l_A__loc15_ = NAN;
    rt::Value l_A__loc6_ = rt::NUL;
    double l_A__loc7_ = NAN;
    double l_A__loc13_ = NAN;
    double l_A__loc12_ = NAN;
    double l_A__loc9_ = NAN;
    double l_A__loc16_ = NAN;
    double l_A__loc2_ = NAN;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc14_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_A__loc11_ = rt::NUL;
    RT_FN("S__2c_S.S_7j");
    (l_A__loc10_ = NAN);
    (l_A__loc8_ = NAN);
    (l_A__loc3_ = NAN);
    (l_A__loc15_ = NAN);
    (l_A__loc6_ = rt::NUL);
    (l_A__loc7_ = NAN);
    (l_A__loc13_ = NAN);
    (l_A__loc12_ = NAN);
    (l_A__loc9_ = NAN);
    (l_A__loc16_ = NAN);
    (l_A__loc2_ = NAN);
    (l_A__loc5_ = rt::NUL);
    (l_A__loc14_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
    if (g::SV.C_S__20_g__S__22_g) {
        (l_A__loc10_ = 35.0);
        if ((((double)(g::SV.C_Translation__locale)) == 5.0)) {
            (l_A__loc10_ = 28.0);
        }
        ({ rt::Value _v11305 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), ((((double)(l_param1)) == (-1.0)) ? g::SV.C_S_99__S__5e_z : g::SV.C_S_99__S_8_21_5), rt::V(l_A__loc10_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc14_, NM_textRendererProperties), NM_elementFormat, _v11305); _v11305; });
        ({ rt::Value _v11306 = rt::V(160.0); rt::dset(l_A__loc14_, NM_width, _v11306); _v11306; });
    } else {
        (l_A__loc8_ = 16.0);
        if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
            (l_A__loc8_ = 14.0);
        }
        ({ rt::Value _v11307 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc8_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc14_, NM_textRendererProperties), NM_elementFormat, _v11307); _v11307; });
        ({ rt::Value _v11308 = rt::V(170.0); rt::dset(l_A__loc14_, NM_width, _v11308); _v11308; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc14_));
    if ((((double)(l_param1)) == (-1.0))) {
        ({ rt::Value _v11309 = rt::trv(rt::VS(g::LS[3362])); rt::dset(l_A__loc14_, NM_text, _v11309); _v11309; });
    } else {
        {
            rt::Value _sw11310 = rt::V((double)(l_param1));
            int _c11311 = -1;
            if (_c11311 == -1 && rt::strict_eq(_sw11310, rt::V(0.0))) _c11311 = 0;
            if (_c11311 == -1 && rt::strict_eq(_sw11310, rt::V(1.0))) _c11311 = 1;
            if (_c11311 == -1 && rt::strict_eq(_sw11310, rt::V(2.0))) _c11311 = 2;
            if (_c11311 == -1 && rt::strict_eq(_sw11310, rt::V(3.0))) _c11311 = 3;
            if (_c11311 == -1 && rt::strict_eq(_sw11310, rt::V(4.0))) _c11311 = 4;
            if (_c11311 == -1 && rt::strict_eq(_sw11310, rt::V(5.0))) _c11311 = 5;
            if (_c11311 == -1) _c11311 = 6;
            switch (_c11311) {
            case 0: {
                ({ rt::Value _v11312 = rt::trv(rt::VS(g::LS[629])); rt::dset(l_A__loc14_, NM_text, _v11312); _v11312; });
                break;
            }
            case 1: {
                ({ rt::Value _v11313 = rt::trv(rt::VS(g::LS[3363])); rt::dset(l_A__loc14_, NM_text, _v11313); _v11313; });
                break;
            }
            case 2: {
                ({ rt::Value _v11314 = rt::trv(rt::VS(g::LS[627])); rt::dset(l_A__loc14_, NM_text, _v11314); _v11314; });
                break;
            }
            case 3: {
                ({ rt::Value _v11315 = rt::trv(rt::VS(g::LS[3364])); rt::dset(l_A__loc14_, NM_text, _v11315); _v11315; });
                break;
            }
            case 4: {
                ({ rt::Value _v11316 = rt::trv(rt::VS(g::LS[3371])); rt::dset(l_A__loc14_, NM_text, _v11316); _v11316; });
                break;
            }
            case 5: {
                ({ rt::Value _v11317 = rt::trv(rt::VS(g::LS[3372])); rt::dset(l_A__loc14_, NM_text, _v11317); _v11317; });
            }
            default: break;
            }
        }
        (void)(rt::dcallv(this->f_S__3e_j, rt::N_push, l_A__loc14_));
    }
    (l_A__loc4_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
    ({ rt::Value _v11318 = rt::V(2.0); rt::dset(l_A__loc4_, NM_y, _v11318); _v11318; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v11319 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), ((((double)(l_param1)) == (-1.0)) ? g::SV.C_S_99__S__5e_z : g::SV.C_S_99__S_8_21_5), rt::V(35.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc4_, NM_textRendererProperties), NM_elementFormat, _v11319); _v11319; });
        ({ rt::Value _v11320 = rt::V(180.0); rt::dset(l_A__loc4_, NM_width, _v11320); _v11320; });
    } else {
        (l_A__loc3_ = 20.0);
        if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
            (l_A__loc3_ = 18.0);
        }
        ({ rt::Value _v11321 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc3_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc4_, NM_textRendererProperties), NM_elementFormat, _v11321); _v11321; });
        ({ rt::Value _v11322 = rt::V(150.0); rt::dset(l_A__loc4_, NM_width, _v11322); _v11322; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc4_));
    if ((((double)(l_param1)) == (-1.0))) {
        ({ rt::Value _v11323 = rt::trv(rt::VS(g::LS[3366])); rt::dset(l_A__loc4_, NM_text, _v11323); _v11323; });
    } else {
        (void)(rt::dcallv(this->f_S__20_l, rt::N_push, l_A__loc4_));
    }
    (l_A__loc11_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v11324 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), ((((double)(l_param1)) == (-1.0)) ? g::SV.C_S_99__S__5e_z : g::SV.C_S_99__S_8_21_5), rt::V(35.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc11_, NM_textRendererProperties), NM_elementFormat, _v11324); _v11324; });
        ({ rt::Value _v11325 = rt::V(100.0); rt::dset(l_A__loc11_, NM_width, _v11325); _v11325; });
    } else {
        (l_A__loc15_ = 20.0);
        if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
            (l_A__loc15_ = 18.0);
        }
        ({ rt::Value _v11326 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc15_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc11_, NM_textRendererProperties), NM_elementFormat, _v11326); _v11326; });
        ({ rt::Value _v11327 = rt::V(90.0); rt::dset(l_A__loc11_, NM_width, _v11327); _v11327; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc11_));
    if ((((double)(l_param1)) == (-1.0))) {
        ({ rt::Value _v11328 = rt::trv(rt::VS(g::LS[3367])); rt::dset(l_A__loc11_, NM_text, _v11328); _v11328; });
    } else {
        (void)(rt::dcallv(this->f_S_8I, rt::N_push, l_A__loc11_));
    }
    if ((!(((double)(l_param1)) == (-1.0)))) {
        (l_A__loc6_ = rt::callv(rt::dget(rt::VO(this), NM_Button)));
        ({ rt::Value _v11329 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3e__21_W); rt::dset(l_A__loc6_, NM_defaultSkin, _v11329); _v11329; });
        ({ rt::Value _v11330 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_E); rt::dset(l_A__loc6_, NM_downSkin, _v11330); _v11330; });
        ({ rt::Value _v11331 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2c__24_); rt::dset(l_A__loc6_, NM_hoverSkin, _v11331); _v11331; });
        ({ rt::Value _v11332 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3e__21_); rt::dset(l_A__loc6_, NM_disabledSkin, _v11332); _v11332; });
        if (g::SV.C_S__20_g__S__22_g) {
            (l_A__loc7_ = 46.0);
            (l_A__loc13_ = 160.0);
            (l_A__loc12_ = 45.0);
            (l_A__loc7_ = (((((double)(l_param1)) == 5.0) && (((double)(g::SV.C_Translation__locale)) == 2.0)) ? 36.0 : 46.0));
            ({ rt::Value _v11333 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(l_A__loc7_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc6_, NM_defaultLabelProperties), NM_elementFormat, _v11333); _v11333; });
            ({ rt::Value _v11334 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(l_A__loc7_), rt::V(9079434.0)); rt::dset(rt::dget(l_A__loc6_, NM_disabledLabelProperties), NM_elementFormat, _v11334); _v11334; });
            ({ rt::Value _v11339 = ({ rt::Value _v11338 = ({ rt::Value _v11337 = ({ rt::Value _v11336 = ({ rt::Value _v11335 = rt::V(l_A__loc13_); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_width, _v11335); _v11335; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_width, _v11336); _v11336; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_width, _v11337); _v11337; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_width, _v11338); _v11338; }); rt::dset(l_A__loc6_, NM_width, _v11339); _v11339; });
            ({ rt::Value _v11344 = ({ rt::Value _v11343 = ({ rt::Value _v11342 = ({ rt::Value _v11341 = ({ rt::Value _v11340 = rt::V(l_A__loc12_); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_height, _v11340); _v11340; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_height, _v11341); _v11341; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_height, _v11342); _v11342; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_height, _v11343); _v11343; }); rt::dset(l_A__loc6_, NM_height, _v11344); _v11344; });
        } else {
            (l_A__loc9_ = 26.0);
            (l_A__loc16_ = 120.0);
            (l_A__loc2_ = 50.0);
            if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
                (l_A__loc9_ = (((((double)(l_param1)) == 5.0) && (((double)(g::SV.C_Translation__locale)) == 2.0)) ? 14.0 : 22.0));
                (l_A__loc16_ = 150.0);
                (l_A__loc2_ = 50.0);
            }
            ({ rt::Value _v11345 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc9_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc6_, NM_defaultLabelProperties), NM_elementFormat, _v11345); _v11345; });
            ({ rt::Value _v11346 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc9_), rt::V(9079434.0)); rt::dset(rt::dget(l_A__loc6_, NM_disabledLabelProperties), NM_elementFormat, _v11346); _v11346; });
            ({ rt::Value _v11351 = ({ rt::Value _v11350 = ({ rt::Value _v11349 = ({ rt::Value _v11348 = ({ rt::Value _v11347 = rt::V(l_A__loc16_); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_width, _v11347); _v11347; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_width, _v11348); _v11348; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_width, _v11349); _v11349; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_width, _v11350); _v11350; }); rt::dset(l_A__loc6_, NM_width, _v11351); _v11351; });
            ({ rt::Value _v11356 = ({ rt::Value _v11355 = ({ rt::Value _v11354 = ({ rt::Value _v11353 = ({ rt::Value _v11352 = rt::V(l_A__loc2_); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_height, _v11352); _v11352; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_height, _v11353); _v11353; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_height, _v11354); _v11354; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_height, _v11355); _v11355; }); rt::dset(l_A__loc6_, NM_height, _v11356); _v11356; });
            (void)(C_S_99::sm_S_9_21_W(l_A__loc6_));
        }
        ({ rt::Value _v11357 = ((((double)(l_param1)) == 5.0) ? rt::trv(rt::VS(g::LS[3373])) : rt::trv(rt::VS(g::LS[1317]))); rt::dset(l_A__loc6_, NM_label, _v11357); _v11357; });
        ({ rt::Value _v11358 = rt::V(2.0); rt::dset(l_A__loc6_, NM_labelOffsetY, _v11358); _v11358; });
        ({ rt::Value _v11361 = rt::dcallv(rt::V((double)(({ rt::Value _o11359 = rt::arr_at(this->f_S__3e__21__21_, ((double)(l_param1))); C_S__60_6* _p11360 = rt::as_ptr<C_S__60_6>(_o11359); _p11360 ? _p11360->f_id : rt::touint(rt::dget(_o11359, NM_id)); }))), rt::N_toString); rt::dset(l_A__loc6_, rt::N_name, _v11361); _v11361; });
        (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc6_));
        (void)(rt::dcallv(this->f_S_7, rt::N_push, l_A__loc6_));
    } else {
        (l_A__loc5_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
        ({ rt::Value _v11362 = rt::V((g::SV.C_S__20_g__S__22_g ? 50.0 : 120.0)); rt::dset(l_A__loc5_, NM_width, _v11362); _v11362; });
        ({ rt::Value _v11363 = rt::V((g::SV.C_S__20_g__S__22_g ? 25.0 : 50.0)); rt::dset(l_A__loc5_, NM_height, _v11363); _v11363; });
        (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc5_));
    }
    return rt::NUL;
}
rt::Value C_S__2c_S::m_S__21__21_G() {
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc4_ = rt::UNDEF;
    double l_A__loc1_ = NAN;
    bool l_A__loc2_ = false;
    RT_FN("S__2c_S.S__21__21_G");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::V(0.0));
    (l_A__loc1_ = NAN);
    (l_A__loc2_ = ({ bool _t11364 = (!rt::eq(rt::V((double)(this->f_S_7_21_b)), rt::arr_at(g::SV.C_S_8G__S_4P, 0.0))); _t11364 ? _t11364 : (bool)((!(this->f_S__20_z == (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)))))); }));
    (l_A__loc3_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc3_)) < rt::alen(this->f_S__3e__21__21_))) {
        if ((!(((double)(({ rt::Value _o11365 = rt::arr_at(this->f_S__3e__21__21_, ((double)(l_A__loc3_))); C_S__60_6* _p11366 = rt::as_ptr<C_S__60_6>(_o11365); _p11366 ? _p11366->f_id : rt::touint(rt::dget(_o11365, NM_id)); }))) == ((double)(g::SV.C_S__2b_n__id))))) {
            (l_A__loc4_ = rt::V((double)(this->m_S__2b_A(l_A__loc3_))));
            if ((!rt::eq(rt::arr_at(this->f_S__23__21__3e_, ((double)(l_A__loc3_))), l_A__loc4_))) {
                ({ rt::Value _v11367 = l_A__loc4_; rt::idx_set(this->f_S__23__21__3e_, rt::V((double)(l_A__loc3_)), _v11367); });
                ({ rt::Value _v11368 = this->m_S_9W(l_A__loc3_); rt::dset(rt::arr_at(this->f_S__20_l, ((double)(l_A__loc3_))), NM_text, _v11368); _v11368; });
            }
        }
        (l_A__loc1_ = ({ rt::Value _o11369 = rt::arr_at(this->f_S__3e__21__21_, ((double)(l_A__loc3_))); C_S__60_6* _p11370 = rt::as_ptr<C_S__60_6>(_o11369); _p11370 ? _p11370->m_S_6U() : rt::tonum(rt::dcallv(_o11369, NM_S_6U)); }));
        if (((!rt::eq(rt::arr_at(this->f_S__2c_6, ((double)(l_A__loc3_))), rt::V(l_A__loc1_))) || l_A__loc2_)) {
            ({ rt::Value _v11371 = rt::arr_at(g::SV.C_S_8G__S_4P, 0.0); this->f_S_7_21_b = rt::toint(_v11371); _v11371; });
            ({ bool _v11372 = rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)); this->f_S__20_z = _v11372; _v11372; });
            ({ rt::Value _v11373 = rt::V(l_A__loc1_); rt::idx_set(this->f_S__2c_6, rt::V((double)(l_A__loc3_)), _v11373); });
            if ((l_A__loc1_ <= 0.0)) {
                ({ rt::Value _v11374 = rt::VS(g::LS[113]); rt::dset(rt::arr_at(this->f_S_8I, ((double)(l_A__loc3_))), NM_text, _v11374); _v11374; });
            } else {
                ({ rt::Value _v11375 = rt::tr_nv(rt::VS(g::LS[3374]), rt::VS(g::LS[3374]), rt::V(l_A__loc1_), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())); rt::dset(rt::arr_at(this->f_S_8I, ((double)(l_A__loc3_))), NM_text, _v11375); _v11375; });
            }
        }
        ({ rt::Value _v11379 = rt::VB(({ bool _t11378 = rt::ge(rt::V(C_S_8G::sg_S__3c__21__27_()), rt::arr_at(this->f_S__2c_6, ((double)(l_A__loc3_)))); _t11378 ? (bool)(({ rt::Value _o11376 = rt::arr_at(this->f_S__3e__21__21_, ((double)(l_A__loc3_))); C_S__60_6* _p11377 = rt::as_ptr<C_S__60_6>(_o11376); _p11377 ? _p11377->g_S_9_21__25_() : rt::T(rt::dget(_o11376, NM_S_9_21__25_)); })) : _t11378; })); rt::dset(rt::arr_at(this->f_S_7, ((double)(l_A__loc3_))), NM_isEnabled, _v11379); _v11379; });
        (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
    }
    return rt::NUL;
}
uint32_t C_S__2c_S::m_S__2b_A(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__2c_S.S__2b_A");
    {
        rt::Value _sw11380 = rt::V((double)(l_param1));
        int _c11381 = -1;
        if (_c11381 == -1 && rt::strict_eq(_sw11380, rt::V(0.0))) _c11381 = 0;
        if (_c11381 == -1 && rt::strict_eq(_sw11380, rt::V(1.0))) _c11381 = 1;
        if (_c11381 == -1 && rt::strict_eq(_sw11380, rt::V(2.0))) _c11381 = 2;
        if (_c11381 == -1 && rt::strict_eq(_sw11380, rt::V(3.0))) _c11381 = 3;
        if (_c11381 == -1 && rt::strict_eq(_sw11380, rt::V(4.0))) _c11381 = 4;
        if (_c11381 == -1) _c11381 = 5;
        switch (_c11381) {
        case 0: {
            return rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(105.0)));
        }
        case 1: {
            return rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(106.0)));
        }
        case 2: {
            return rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(107.0)));
        }
        case 3: {
            return rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(108.0)));
        }
        case 4: {
            return rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(109.0)));
        }
        case 5: {
            return rt::touint_d(0.0);
        }
        default: break;
        }
    }
    return 0u;
}
rt::Value C_S__2c_S::m_S_9W(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__2c_S.S_9W");
    {
        rt::Value _sw11382 = rt::V((double)(l_param1));
        int _c11383 = -1;
        if (_c11383 == -1 && rt::strict_eq(_sw11382, rt::V(0.0))) _c11383 = 0;
        if (_c11383 == -1 && rt::strict_eq(_sw11382, rt::V(1.0))) _c11383 = 1;
        if (_c11383 == -1 && rt::strict_eq(_sw11382, rt::V(2.0))) _c11383 = 2;
        if (_c11383 == -1 && rt::strict_eq(_sw11382, rt::V(3.0))) _c11383 = 3;
        if (_c11383 == -1 && rt::strict_eq(_sw11382, rt::V(4.0))) _c11383 = 4;
        if (_c11383 == -1) _c11383 = 5;
        switch (_c11383) {
        case 0: {
            return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[158]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[194])), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[867])));
        }
        case 1: {
            return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[158]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[194])), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[867])));
        }
        case 2: {
            return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[158]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[194])), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[867])));
        }
        case 3: {
            return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[158]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[194])), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[867])));
        }
        case 4: {
            return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[158]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[194])), C_S__26_c::sm_S_8_21_Z(C_S__20__21_2::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[867])));
        }
        case 5: {
            return rt::slot_string(rt::VS(g::LS[113]));
        }
        default: break;
        }
    }
    return rt::NUL;
}
bool C_S__2c_S::dm_S__20_1_1() { return false; }
bool C_S__2c_S::dm_S__20_1_2() { return false; }
rt::Value C_S__2c_S::m_S__20_1(rt::Value p0, bool p1, bool p2) {
    rt::Value l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_A__loc4_ = rt::NUL;
    int32_t l_A__loc8_ = 0;
    rt::Value l_A__loc11_ = rt::NUL;
    double l_A__loc5_ = NAN;
    rt::Value l_A__loc9_ = rt::NUL;
    int32_t l_A__loc10_ = 0;
    rt::Value l_A__loc6_ = rt::UNDEF;
    double l_A__loc7_ = NAN;
    RT_FN("S__2c_S.S__20_1");
    (l_A__loc4_ = rt::NUL);
    (l_A__loc8_ = rt::toint_d(0.0));
    (l_A__loc11_ = rt::NUL);
    (l_A__loc5_ = NAN);
    (l_A__loc9_ = rt::NUL);
    (l_A__loc10_ = rt::toint_d(0.0));
    (l_A__loc6_ = rt::V(0.0));
    (l_A__loc7_ = NAN);
    (l_A__loc8_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc8_)) < rt::alen(this->f_S_7))) {
        (l_A__loc4_ = rt::arr_at(this->f_S_7, ((double)(l_A__loc8_))));
        (void)(rt::dcallv(l_A__loc4_, NM_getBounds, rt::dget(rt::VO(this), NM_stage), g::SV.C_S__2c_S__S_5N));
        if (rt::T(rt::dcallv(g::SV.C_S__2c_S__S_5N, NM_containsPoint, l_param1))) {
            (l_A__loc11_ = C_S_8G::sm_S__21__21_H(rt::touint(rt::dget(l_A__loc4_, rt::N_name))));
            if ((!rt::eq(l_A__loc11_, rt::NUL))) {
                if ((((double)(({ rt::Value _o11384 = l_A__loc11_; C_S__60_6* _p11385 = rt::as_ptr<C_S__60_6>(_o11384); _p11385 ? _p11385->f_id : rt::touint(rt::dget(_o11384, NM_id)); }))) == ((double)(g::SV.C_S__2b_n__id)))) {
                    if (({ rt::Value _o11386 = l_A__loc11_; C_S__60_6* _p11387 = rt::as_ptr<C_S__60_6>(_o11386); _p11387 ? _p11387->g_S_9_21__25_() : rt::T(rt::dget(_o11386, NM_S_9_21__25_)); })) {
                        if (this->f_S__27__21_Y) {
                            return rt::NUL;
                        }
                        ({ bool _v11388 = true; this->f_S__27__21_Y = _v11388; _v11388; });
                        (l_A__loc5_ = 0.0);
                        (l_A__loc9_ = rt::arr_lit({rt::V(107.0), rt::V(106.0), rt::V(105.0), rt::V(109.0), rt::V(108.0)}));
                        (l_A__loc10_ = rt::toint_d(0.0));
                        while ((((double)(l_A__loc10_)) < rt::alen(l_A__loc9_))) {
                            (l_A__loc5_ = (l_A__loc5_ + rt::m_floor(((0.5 * C_S__26_c::sm_S__20__21__3b_(rt::toint(rt::arr_at(l_A__loc9_, ((double)(l_A__loc10_)))))) * ((1.0 + C_S__26_c::sm_S__20__21__3b_(rt::toint(rt::arr_at(l_A__loc9_, ((double)(l_A__loc10_)))))))))));
                            (l_A__loc10_ = rt::toint_d((((double)(l_A__loc10_)) + 1.0)));
                        }
                        (l_A__loc6_ = rt::V((double)(rt::touint(rt::arr_at(this->f_S__2c_6, ((double)(l_A__loc8_)))))));
                        (void)(({ rt::Value _o11389 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11390 = rt::as_ptr<C_S__20_g>(_o11389); _p11390 ? _p11390->m_S__2d__25_(rt::trv(rt::VS(g::LS[3375])), rt::trv(rt::VS(g::LS[3376]), rt::tr_nv(rt::VS(g::LS[1211]), rt::VS(g::LS[1212]), l_A__loc6_, C_S__26_c::sm_S_8_21_Z(rt::tonum(l_A__loc6_), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), C_S__26_c::sm_S_8_21_Z(l_A__loc5_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__26__21_J))}), rt::NUL, true, true, rt::VS(g::LS[113]), rt::VO(rt::new_bound(rt::VO(this), NM_S__25_o)), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11389, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3375])), rt::trv(rt::VS(g::LS[3376]), rt::tr_nv(rt::VS(g::LS[1211]), rt::VS(g::LS[1212]), l_A__loc6_, C_S__26_c::sm_S_8_21_Z(rt::tonum(l_A__loc6_), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), C_S__26_c::sm_S_8_21_Z(l_A__loc5_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__26__21_J))}), rt::NUL, rt::VB(true), rt::VB(true), rt::VS(g::LS[113]), rt::VO(rt::new_bound(rt::VO(this), NM_S__25_o))); }));
                    }
                    break;
                }
                ({ rt::Value _v11391 = l_A__loc11_; this->f_S__25__21_4 = _v11391; _v11391; });
                if (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 16.0), rt::V(0.0))) {
                    if (this->f_S__27__21_Y) {
                        return rt::NUL;
                    }
                    ({ bool _v11392 = true; this->f_S__27__21_Y = _v11392; _v11392; });
                    (l_A__loc7_ = ({ rt::Value _o11393 = this->f_S__25__21_4; C_S__60_6* _p11394 = rt::as_ptr<C_S__60_6>(_o11393); _p11394 ? _p11394->m_S_6U() : rt::tonum(rt::dcallv(_o11393, NM_S_6U)); }));
                    (void)(({ rt::Value _o11397 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11398 = rt::as_ptr<C_S__20_g>(_o11397); _p11398 ? _p11398->m_S__2d__25_(rt::trv(rt::VS(g::LS[3379])), rt::trv(rt::VS(g::LS[3380]), ({ rt::Value _o11395 = this->f_S__25__21_4; C_S__60_6* _p11396 = rt::as_ptr<C_S__60_6>(_o11395); _p11396 ? _p11396->f_S_1i : rt::dget(_o11395, NM_S_1i); }), rt::tr_nv(rt::VS(g::LS[1211]), rt::VS(g::LS[1212]), rt::V(l_A__loc7_), C_S__26_c::sm_S_8_21_Z(l_A__loc7_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3b__23_))}), rt::NUL, true, true, rt::VS(g::LS[113]), rt::VO(rt::new_bound(rt::VO(this), NM_S__25_o)), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11397, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3379])), rt::trv(rt::VS(g::LS[3380]), ({ rt::Value _o11399 = this->f_S__25__21_4; C_S__60_6* _p11400 = rt::as_ptr<C_S__60_6>(_o11399); _p11400 ? _p11400->f_S_1i : rt::dget(_o11399, NM_S_1i); }), rt::tr_nv(rt::VS(g::LS[1211]), rt::VS(g::LS[1212]), rt::V(l_A__loc7_), C_S__26_c::sm_S_8_21_Z(l_A__loc7_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3b__23_))}), rt::NUL, rt::VB(true), rt::VB(true), rt::VS(g::LS[113]), rt::VO(rt::new_bound(rt::VO(this), NM_S__25_o))); }));
                    break;
                }
                (void)(this->m_S__3b__23_());
            }
            break;
        }
        (l_A__loc8_ = rt::toint_d((((double)(l_A__loc8_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S__2c_S::m_S__25_o() {
    RT_FN("S__2c_S.S__25_o");
    ({ bool _v11401 = false; this->f_S__27__21_Y = _v11401; _v11401; });
    return rt::NUL;
}
rt::Value C_S__2c_S::m_S__3b__23_() {
    RT_FN("S__2c_S.S__3b__23_");
    if (({ rt::Value _o11402 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p11403 = rt::as_ptr<C_S_8G>(_o11402); _p11403 ? _p11403->m_S_6M(this->f_S__25__21_4, false, true) : rt::T(rt::dcallv(_o11402, NM_S_6M, this->f_S__25__21_4, rt::VB(false), rt::VB(true))); })) {
        (void)(this->m_S__21__21_G());
        if (rt::is_class(rt::dget(rt::VO(this), NM_parent), C_S_7_21_B::CI)) {
            (void)(({ rt::Value _o11405 = (({ rt::Value _t11404 = rt::dget(rt::VO(this), NM_parent); rt::is_class(_t11404, C_S_7_21_B::CI) ? _t11404 : rt::NUL; })); C_S_7_21_B* _p11406 = rt::as_ptr<C_S_7_21_B>(_o11405); _p11406 ? _p11406->m_S_2_21__2c_() : rt::dcallv(_o11405, NM_S_2_21__2c_); }));
        }
    }
    return rt::NUL;
}
rt::Value C_S__2c_S::m_onTouch(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__2c_S.onTouch");
    (l_A__loc2_ = rt::NUL);
    if ((!rt::T(rt::dget(rt::VO(this), NM_stage)))) {
        return rt::NUL;
    }
    if ((((double)(this->f_S__5d__21__25_)) >= 0.0)) {
        (l_A__loc2_ = rt::dcallv(l_param1, NM_getTouch, rt::VO(this), rt::NUL, rt::V((double)(this->f_S__5d__21__25_))));
        if ((!rt::T(l_A__loc2_))) {
            return rt::NUL;
        }
        if (rt::eq(rt::dget(l_A__loc2_, NM_phase), rt::VS(g::LS[1280]))) {
            (void)(rt::dcallv(l_A__loc2_, NM_getLocation, rt::dget(rt::VO(this), NM_stage), g::SV.C_S__2c_S__S_6s));
            (void)(this->m_S__20_1(g::SV.C_S__2c_S__S_6s, rt::T(rt::dget(l_param1, NM_ctrlKey)), rt::T(rt::dget(l_param1, NM_shiftKey))));
            ({ double _v11407 = (-1.0); this->f_S__5d__21__25_ = rt::toint_d(_v11407); _v11407; });
        }
        return rt::NUL;
    }
    (l_A__loc2_ = rt::dcallv(l_param1, NM_getTouch, rt::VO(this), rt::VS(g::LS[1281])));
    if (rt::T(l_A__loc2_)) {
        ({ rt::Value _v11408 = rt::dget(l_A__loc2_, NM_id); this->f_S__5d__21__25_ = rt::toint(_v11408); _v11408; });
        return rt::NUL;
    }
    (l_A__loc2_ = rt::dcallv(l_param1, NM_getTouch, rt::VO(this), rt::VS(g::LS[1282])));
    if (rt::T(l_A__loc2_)) {
        return rt::NUL;
    }
    return rt::NUL;
}
rt::Value C_S__2c_S::m_S__26__21_J() {
    RT_FN("S__2c_S.S__26__21_J");
    if (({ rt::Value _o11409 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p11410 = rt::as_ptr<C_S_8G>(_o11409); _p11410 ? _p11410->m_S__26__21_J(C_S_8G::sm_S__21__21_H(g::SV.C_S__2b_n__id)) : rt::T(rt::dcallv(_o11409, NM_S__26__21_J, C_S_8G::sm_S__21__21_H(g::SV.C_S__2b_n__id))); })) {
        (void)(this->m_S__21__21_G());
        if (rt::is_class(rt::dget(rt::VO(this), NM_parent), C_S_7_21_B::CI)) {
            (void)(({ rt::Value _o11412 = (({ rt::Value _t11411 = rt::dget(rt::VO(this), NM_parent); rt::is_class(_t11411, C_S_7_21_B::CI) ? _t11411 : rt::NUL; })); C_S_7_21_B* _p11413 = rt::as_ptr<C_S_7_21_B>(_o11412); _p11413 ? _p11413->m_S_2_21__2c_() : rt::dcallv(_o11412, NM_S_2_21__2c_); }));
        }
    }
    return rt::NUL;
}
rt::Value C_S__2c_S::m_S_8_21__5b_() {
    RT_FN("S__2c_S.S_8_21__5b_");
    return rt::NUL;
}
rt::Value C_S__2c_S::m_S__21__21_c(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__2c_S.S__21__21_c");
    return rt::NUL;
}
C_S__2c_S* C_S__2c_S::alloc_() {
    C_S__2c_S* o = rt::make<C_S__2c_S>();
    return o;
}
rt::Value C_S__2c_S::mk_(rt::Value* a, int n) {
    C_S__2c_S* o = alloc_();
    o->C_S__2c_S::ctor_();
    return rt::VO(o);
}
bool C_S__2c_S::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21__21_: out = f_S__3e__21__21_; return true;
    case NM_S__23__21__3e_: out = f_S__23__21__3e_; return true;
    case NM_S__2c_6: out = f_S__2c_6; return true;
    case NM_S__3e_j: out = f_S__3e_j; return true;
    case NM_S__20_l: out = f_S__20_l; return true;
    case NM_S_8I: out = f_S_8I; return true;
    case NM_S_7: out = f_S_7; return true;
    case NM_S_7_21_b: out = rt::V((double)(f_S_7_21_b)); return true;
    case NM_S__20_z: out = rt::VB(f_S__20_z); return true;
    case NM_S__25__21_4: out = f_S__25__21_4; return true;
    case NM_S__27__21_Y: out = rt::VB(f_S__27__21_Y); return true;
    case NM_S__5d__21__25_: out = rt::V((double)(f_S__5d__21__25_)); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7j: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b_A: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9W: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__25_o: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3b__23_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_onTouch: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__26__21_J: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21__5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_c: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_3b_::dget(id, out);
}
bool C_S__2c_S::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3e__21__21_: f_S__3e__21__21_ = v; return true;
    case NM_S__23__21__3e_: f_S__23__21__3e_ = v; return true;
    case NM_S__2c_6: f_S__2c_6 = v; return true;
    case NM_S__3e_j: f_S__3e_j = v; return true;
    case NM_S__20_l: f_S__20_l = v; return true;
    case NM_S_8I: f_S_8I = v; return true;
    case NM_S_7: f_S_7 = v; return true;
    case NM_S_7_21_b: f_S_7_21_b = rt::toint(v); return true;
    case NM_S__20_z: f_S__20_z = rt::T(v); return true;
    case NM_S__25__21_4: f_S__25__21_4 = v; return true;
    case NM_S__27__21_Y: f_S__27__21_Y = rt::T(v); return true;
    case NM_S__5d__21__25_: f_S__5d__21__25_ = rt::toint(v); return true;
    default: break;
    }
    return C_S_1_3b_::dset(id, v);
}
bool C_S__2c_S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_7j: out = m_S_7j(rt::arg<int32_t>(a, n, 0, 0)); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__2b_A: out = rt::V((double)(m_S__2b_A(rt::arg<int32_t>(a, n, 0, 0)))); return true;
    case NM_S_9W: out = m_S_9W(rt::arg<int32_t>(a, n, 0, 0)); return true;
    case NM_S__20_1: out = m_S__20_1(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, C_S__2c_S::dm_S__20_1_1()), rt::arg<bool>(a, n, 2, C_S__2c_S::dm_S__20_1_2())); return true;
    case NM_S__25_o: out = m_S__25_o(); return true;
    case NM_S__3b__23_: out = m_S__3b__23_(); return true;
    case NM_onTouch: out = m_onTouch(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__26__21_J: out = m_S__26__21_J(); return true;
    case NM_S_8_21__5b_: out = m_S_8_21__5b_(); return true;
    case NM_S__21__21_c: out = m_S__21__21_c(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)); return true;
    case NM_S__3e__21__21_: { rt::Value f = f_S__3e__21__21_; out = rt::call_value(f, a, n); return true; }
    case NM_S__23__21__3e_: { rt::Value f = f_S__23__21__3e_; out = rt::call_value(f, a, n); return true; }
    case NM_S__2c_6: { rt::Value f = f_S__2c_6; out = rt::call_value(f, a, n); return true; }
    case NM_S__3e_j: { rt::Value f = f_S__3e_j; out = rt::call_value(f, a, n); return true; }
    case NM_S__20_l: { rt::Value f = f_S__20_l; out = rt::call_value(f, a, n); return true; }
    case NM_S_8I: { rt::Value f = f_S_8I; out = rt::call_value(f, a, n); return true; }
    case NM_S_7: { rt::Value f = f_S_7; out = rt::call_value(f, a, n); return true; }
    case NM_S_7_21_b: { rt::Value f = rt::V((double)(f_S_7_21_b)); out = rt::call_value(f, a, n); return true; }
    case NM_S__20_z: { rt::Value f = rt::VB(f_S__20_z); out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21_4: { rt::Value f = f_S__25__21_4; out = rt::call_value(f, a, n); return true; }
    case NM_S__27__21_Y: { rt::Value f = rt::VB(f_S__27__21_Y); out = rt::call_value(f, a, n); return true; }
    case NM_S__5d__21__25_: { rt::Value f = rt::V((double)(f_S__5d__21__25_)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_1_3b_::dcall(id, a, n, out);
}
bool C_S__2c_S::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_7j: return true;
    case NM_S__21__21_G: return true;
    case NM_S__2b_A: return true;
    case NM_S_9W: return true;
    case NM_S__20_1: return true;
    case NM_S__25_o: return true;
    case NM_S__3b__23_: return true;
    case NM_onTouch: return true;
    case NM_S__26__21_J: return true;
    case NM_S_8_21__5b_: return true;
    case NM_S__21__21_c: return true;
    case NM_S__3e__21__21_: return false;
    case NM_S__23__21__3e_: return false;
    case NM_S__2c_6: return false;
    case NM_S__3e_j: return false;
    case NM_S__20_l: return false;
    case NM_S_8I: return false;
    case NM_S_7: return false;
    case NM_S_7_21_b: return false;
    case NM_S__20_z: return false;
    case NM_S__25__21_4: return false;
    case NM_S__27__21_Y: return false;
    case NM_S__5d__21__25_: return false;
    default: break;
    }
    return C_S_1_3b_::dmeth(id);
}
bool C_S__2c_S::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c_S::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5N: out = g::SV.C_S__2c_S__S_5N; return true;
    case NM_S_6s: out = g::SV.C_S__2c_S__S_6s; return true;
    default: return false;
    }
}
bool C_S__2c_S::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_5N: g::SV.C_S__2c_S__S_5N = v; return true;
    case NM_S_6s: g::SV.C_S__2c_S__S_6s = v; return true;
    default: return false;
    }
}
bool C_S__2c_S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_02::ctor_() {
    RT_FN("S_02.S_02");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S_02::m_S__2b__21_R() {
    rt::Value l_A__loc1_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S_02.S__2b__21_R");
    (l_A__loc1_ = rt::NUL);
    (l_A__loc2_ = rt::NUL);
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    ({ rt::Value _v11414 = rt::callv(rt::dget(rt::VO(this), NM_LayoutGroup)); this->f_S__25__21_0 = _v11414; _v11414; });
    ({ rt::Value _v11415 = rt::V((-5.0)); rt::dset(this->f_S__25__21_0, NM_x, _v11415); _v11415; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v11416 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__5d_Z); rt::dset(this->f_S__25__21_0, NM_backgroundSkin, _v11416); _v11416; });
        (l_A__loc1_ = rt::callv(rt::dget(rt::VO(this), NM_TiledRowsLayout)));
        ({ rt::Value _v11417 = rt::V(2.0); rt::dset(l_A__loc1_, NM_paddingTop, _v11417); _v11417; });
        ({ rt::Value _v11418 = rt::V(10.0); rt::dset(l_A__loc1_, NM_horizontalGap, _v11418); _v11418; });
        ({ rt::Value _v11419 = rt::VB(false); rt::dset(l_A__loc1_, NM_useSquareTiles, _v11419); _v11419; });
        ({ rt::Value _v11420 = rt::V(3.0); rt::dset(l_A__loc1_, NM_requestedColumnCount, _v11420); _v11420; });
        ({ rt::Value _v11421 = rt::V(5.0); rt::dset(l_A__loc1_, NM_paddingLeft, _v11421); _v11421; });
        ({ rt::Value _v11422 = l_A__loc1_; rt::dset(this->f_S__25__21_0, NM_layout, _v11422); _v11422; });
    } else {
        (l_A__loc2_ = rt::callv(rt::dget(rt::VO(this), NM_VerticalLayout)));
        ({ rt::Value _v11423 = l_A__loc2_; rt::dset(this->f_S__25__21_0, NM_layout, _v11423); _v11423; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__25__21_0));
    (void)(this->m_S_4_3b_());
    return rt::NUL;
}
rt::Value C_S_02::m_S_4_3b_() {
    RT_FN("S_02.S_4_3b_");
    (void)(this->m_S_7j(({ C_S__3e_W* _n11424 = C_S__3e_W::alloc_(); _n11424->C_S__3e_W::ctor_(rt::toint_d(0.0)); rt::VO(_n11424); })));
    (void)(this->m_S_7j(({ C_S__3e_W* _n11425 = C_S__3e_W::alloc_(); _n11425->C_S__3e_W::ctor_(rt::toint_d(1.0)); rt::VO(_n11425); })));
    (void)(this->m_S_7j(({ C_S__3e_W* _n11426 = C_S__3e_W::alloc_(); _n11426->C_S__3e_W::ctor_(rt::toint_d(2.0)); rt::VO(_n11426); })));
    (void)(this->m_S_7j(({ C_S__3e_W* _n11427 = C_S__3e_W::alloc_(); _n11427->C_S__3e_W::ctor_(rt::toint_d(3.0)); rt::VO(_n11427); })));
    (void)(this->m_S_7j(({ C_S__3e_W* _n11428 = C_S__3e_W::alloc_(); _n11428->C_S__3e_W::ctor_(rt::toint_d(4.0)); rt::VO(_n11428); })));
    (void)(this->m_S_7j(({ C_S__3e_W* _n11429 = C_S__3e_W::alloc_(); _n11429->C_S__3e_W::ctor_(rt::toint_d(5.0)); rt::VO(_n11429); })));
    return rt::NUL;
}
rt::Value C_S_02::m_S_7j(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S_02.S_7j");
    (void)(({ rt::Value _o11430 = l_param1; C_S__3e_W* _p11431 = rt::as_ptr<C_S__3e_W>(_o11430); _p11431 ? _p11431->m_S__2b__21_R() : rt::dcallv(_o11430, NM_S__2b__21_R); }));
    (void)(rt::dcallv(this->f_S__25__21_0, NM_addChild, l_param1));
    return rt::NUL;
}
rt::Value C_S_02::m_S__21__21_G() {
    int32_t l_A__loc2_ = 0;
    bool l_A__loc1_ = false;
    RT_FN("S_02.S__21__21_G");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = C_S__26_c::sm_S__27__21__5f_());
    if ((l_A__loc1_ && rt::eq(rt::dget(this->f_S__25__21_0, NM_numChildren), rt::V(6.0)))) {
        (void)(this->m_S_7j(({ C_S__3e_W* _n11432 = C_S__3e_W::alloc_(); _n11432->C_S__3e_W::ctor_(rt::toint_d(9.0)); rt::VO(_n11432); })));
        (void)(this->m_S_7j(({ C_S__3e_W* _n11433 = C_S__3e_W::alloc_(); _n11433->C_S__3e_W::ctor_(rt::toint_d(10.0)); rt::VO(_n11433); })));
        if (g::SV.C_S__20_g__S__22_g) {
            ({ rt::Value _v11435 = rt::V(2.0); rt::dset((({ rt::Value _t11434 = rt::dget(this->f_S__25__21_0, NM_layout); rt::is_stubtype(_t11434) ? _t11434 : rt::NUL; })), NM_horizontalGap, _v11435); _v11435; });
            ({ rt::Value _v11437 = rt::V(4.0); rt::dset((({ rt::Value _t11436 = rt::dget(this->f_S__25__21_0, NM_layout); rt::is_stubtype(_t11436) ? _t11436 : rt::NUL; })), NM_requestedColumnCount, _v11437); _v11437; });
        }
    } else if (((!l_A__loc1_) && rt::eq(rt::dget(this->f_S__25__21_0, NM_numChildren), rt::V(8.0)))) {
        (void)(rt::dcallv(this->f_S__25__21_0, NM_removeChildAt, rt::V((rt::tonum(rt::dget(this->f_S__25__21_0, NM_numChildren)) - 1.0))));
        (void)(rt::dcallv(this->f_S__25__21_0, NM_removeChildAt, rt::V((rt::tonum(rt::dget(this->f_S__25__21_0, NM_numChildren)) - 1.0))));
        if (g::SV.C_S__20_g__S__22_g) {
            ({ rt::Value _v11439 = rt::V(10.0); rt::dset((({ rt::Value _t11438 = rt::dget(this->f_S__25__21_0, NM_layout); rt::is_stubtype(_t11438) ? _t11438 : rt::NUL; })), NM_horizontalGap, _v11439); _v11439; });
            ({ rt::Value _v11441 = rt::V(3.0); rt::dset((({ rt::Value _t11440 = rt::dget(this->f_S__25__21_0, NM_layout); rt::is_stubtype(_t11440) ? _t11440 : rt::NUL; })), NM_requestedColumnCount, _v11441); _v11441; });
        }
    }
    (l_A__loc2_ = rt::toint_d(0.0));
    while (rt::lt(rt::V((double)(l_A__loc2_)), rt::dget(this->f_S__25__21_0, NM_numChildren))) {
        (void)(rt::dcallv((({ rt::Value _t11442 = rt::dcallv(this->f_S__25__21_0, NM_getChildAt, rt::V((double)(l_A__loc2_))); rt::is_stubtype(_t11442) ? _t11442 : rt::NUL; })), NM_S__21__21_G));
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S_02::m_S__21__21_c(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S_02.S__21__21_c");
    (void)(this->C_S_6_2b_::m_S__21__21_c(l_param1, l_param2));
    ({ rt::Value _v11443 = rt::dget(rt::VO(this), NM_width); rt::dset(this->f_S__25__21_0, NM_width, _v11443); _v11443; });
    ({ rt::Value _v11444 = rt::dget(rt::VO(this), NM_height); rt::dset(this->f_S__25__21_0, NM_height, _v11444); _v11444; });
    return rt::NUL;
}
rt::Value C_S_02::m_S__5b_i() {
    RT_FN("S_02.S__5b_i");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3381])));
    return rt::NUL;
}
rt::Value C_S_02::m_S_9_21_0() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_02.S_9_21_0");
    (void)(({ rt::Value _o11445 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11446 = rt::as_ptr<C_S__20_g>(_o11445); _p11446 ? _p11446->m_S_4_60_(rt::toint_d(18.0)) : rt::dcallv(_o11445, NM_S_4_60_, rt::V(18.0)); }));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[3382]), (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[3383])) : rt::trv(rt::VS(g::LS[3384]))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[3385]), C_S__26_c::sm_S_8_21_Z(C_S__23__21__21_::sm_S_0F(C_S__23__21__21_::dsm_S_0F_0(), C_S__23__21__21_::dsm_S_0F_1()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[3386]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__40__21__5b_(true, false, true), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::slot_string(rt::add(l_A__loc1_, (rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[3387]), C_S__26_c::sm_S_8_21_Z(C_S__26_c::sm_S__40__21__5b_(false, false, true), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::NUL;
}
rt::Value C_S_02::m_S_7_21__23_() {
    RT_FN("S_02.S_7_21__23_");
    return rt::slot_string(rt::VS(g::LS[1316]));
    return rt::NUL;
}
uint32_t C_S_02::m_S__5b__26_() {
    RT_FN("S_02.S__5b__26_");
    return rt::touint_d(4.0);
    return 0u;
}
C_S_02* C_S_02::alloc_() {
    C_S_02* o = rt::make<C_S_02>();
    return o;
}
rt::Value C_S_02::mk_(rt::Value* a, int n) {
    C_S_02* o = alloc_();
    o->C_S_02::ctor_();
    return rt::VO(o);
}
bool C_S_02::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__25__21_0: out = f_S__25__21_0; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_4_3b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7j: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_c: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5b_i: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21_0: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7_21__23_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5b__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S_02::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__25__21_0: f_S__25__21_0 = v; return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S_02::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_4_3b_: out = m_S_4_3b_(); return true;
    case NM_S_7j: out = m_S_7j(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__21__21_c: out = m_S__21__21_c(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)); return true;
    case NM_S__5b_i: out = m_S__5b_i(); return true;
    case NM_S_9_21_0: out = m_S_9_21_0(); return true;
    case NM_S_7_21__23_: out = m_S_7_21__23_(); return true;
    case NM_S__5b__26_: out = rt::V((double)(m_S__5b__26_())); return true;
    case NM_S__25__21_0: { rt::Value f = f_S__25__21_0; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S_02::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_4_3b_: return true;
    case NM_S_7j: return true;
    case NM_S__21__21_G: return true;
    case NM_S__21__21_c: return true;
    case NM_S__5b_i: return true;
    case NM_S_9_21_0: return true;
    case NM_S_7_21__23_: return true;
    case NM_S__5b__26_: return true;
    case NM_S__25__21_0: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S_02::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_02::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_02::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_02::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_25_::ctor_() {
    RT_FN("S_2_25_.S_2_25_");
    (void)(rt::NUL);
}
rt::Value C_S_2_25_::m_S__2b__21_R() {
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_2_25_.S__2b__21_R");
    (l_A__loc2_ = rt::callv(rt::dget(rt::VO(this), NM_VerticalLayout)));
    ({ rt::Value _v11447 = rt::V(10.0); rt::dset(l_A__loc2_, NM_gap, _v11447); _v11447; });
    ({ rt::Value _v11448 = l_A__loc2_; rt::dset(rt::VO(this), NM_layout, _v11448); _v11448; });
    ({ rt::Value _v11449 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S__2b__21_W = _v11449; _v11449; });
    ({ rt::Value _v11450 = rt::VB(true); rt::dset(this->f_S__2b__21_W, NM_wordWrap, _v11450); _v11450; });
    ({ rt::Value _v11451 = rt::V(380.0); rt::dset(this->f_S__2b__21_W, NM_width, _v11451); _v11451; });
    ({ rt::Value _v11452 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(32.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S__2b__21_W, NM_textRendererProperties), NM_elementFormat, _v11452); _v11452; });
    ({ rt::Value _v11453 = rt::trv(rt::VS(g::LS[3388])); rt::dset(this->f_S__2b__21_W, NM_text, _v11453); _v11453; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__2b__21_W));
    ({ rt::Value _v11454 = rt::callv(rt::dget(rt::VO(this), NM_TextInput)); this->f_S__3b_l = _v11454; _v11454; });
    (void)(rt::dcallv(this->f_S__3b_l, NM_setFocus));
    (void)(({ rt::Value _o11455 = g::SV.C_S_99__S__3e__21_a; C_S_99* _p11456 = rt::as_ptr<C_S_99>(_o11455); _p11456 ? _p11456->m_S__3d__21__3c_(this->f_S__3b_l, rt::toint_d(360.0)) : rt::dcallv(_o11455, NM_S__3d__21__3c_, this->f_S__3b_l, rt::V(360.0)); }));
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__3b_l));
    ({ rt::Value _v11457 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_0S = _v11457; _v11457; });
    ({ rt::Value _v11458 = rt::VB(true); rt::dset(this->f_S_0S, NM_wordWrap, _v11458); _v11458; });
    ({ rt::Value _v11459 = rt::V(380.0); rt::dset(this->f_S_0S, NM_width, _v11459); _v11459; });
    ({ rt::Value _v11460 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(32.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_0S, NM_textRendererProperties), NM_elementFormat, _v11460); _v11460; });
    ({ rt::Value _v11461 = rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[3389]))); rt::dset(this->f_S_0S, NM_text, _v11461); _v11461; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_0S));
    ({ rt::Value _v11462 = rt::callv(rt::dget(rt::VO(this), NM_List)); this->f_S__5d__21_Z = _v11462; _v11462; });
    ({ rt::Value _v11463 = rt::VB(true); rt::dset(this->f_S__5d__21_Z, NM_isSelectable, _v11463); _v11463; });
    ({ rt::Value _v11464 = rt::V(380.0); rt::dset(this->f_S__5d__21_Z, NM_width, _v11464); _v11464; });
    ({ rt::Value _v11465 = rt::V(300.0); rt::dset(this->f_S__5d__21_Z, NM_height, _v11465); _v11465; });
    ({ rt::Value _v11466 = rt::VS(g::LS[3262]); rt::dset(this->f_S__5d__21_Z, NM_horizontalScrollPolicy, _v11466); _v11466; });
    ({ rt::Value _v11467 = rt::VS(g::LS[3265]); rt::dset(this->f_S__5d__21_Z, NM_verticalScrollPolicy, _v11467); _v11467; });
    ({ rt::Value _v11468 = rt::VS(g::LS[3266]); rt::dset(this->f_S__5d__21_Z, NM_scrollBarDisplayMode, _v11468); _v11468; });
    (l_A__loc1_ = rt::callv(rt::dget(rt::VO(this), NM_VerticalLayout)));
    ({ rt::Value _v11469 = rt::VB(true); rt::dset(l_A__loc1_, NM_useVirtualLayout, _v11469); _v11469; });
    ({ rt::Value _v11470 = rt::V(5.0); rt::dset(l_A__loc1_, NM_paddingLeft, _v11470); _v11470; });
    ({ rt::Value _v11471 = rt::V(0.0); rt::dset(l_A__loc1_, NM_gap, _v11471); _v11471; });
    ({ rt::Value _v11472 = l_A__loc1_; rt::dset(this->f_S__5d__21_Z, NM_layout, _v11472); _v11472; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v11473 = rt::VS(g::LS[3267]); rt::dset(this->f_S__5d__21_Z, NM_interactionMode, _v11473); _v11473; });
        ({ rt::Value _v11474 = rt::V(0.0); rt::dset(this->f_S__5d__21_Z, NM_verticalScrollStep, _v11474); _v11474; });
        ({ rt::Value _v11475 = rt::V(50.0); rt::dset(this->f_S__5d__21_Z, NM_verticalMouseWheelScrollStep, _v11475); _v11475; });
    }
    ({ rt::Value _v11476 = rt::dget(rt::VO(C_S__3d__21_4::CI.ref), NM_S__22__21_4); rt::dset(this->f_S__5d__21_Z, NM_verticalScrollBarFactory, _v11476); _v11476; });
    ({ rt::Value _v11477 = rt::VO(rt::new_bound(rt::VO(this), NM_S__3b_A)); rt::dset(this->f_S__5d__21_Z, NM_itemRendererFactory, _v11477); _v11477; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5d__21_Z));
    ({ rt::Value _v11478 = rt::add(rt::dget(this->f_S__5d__21_Z, NM_width), rt::V(20.0)); rt::dset(rt::VO(this), NM_width, _v11478); _v11478; });
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S__3b_A() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_2_25_.S__3b_A");
    (l_A__loc1_ = rt::callv(rt::dget(rt::VO(this), NM_DefaultListItemRenderer)));
    ({ rt::Value _v11479 = rt::V(38.0); rt::dset(l_A__loc1_, NM_height, _v11479); _v11479; });
    ({ rt::Value _v11480 = rt::V((rt::tonum(rt::dget(this->f_S__5d__21_Z, NM_width)) - 20.0)); rt::dset(l_A__loc1_, NM_width, _v11480); _v11480; });
    ({ rt::Value _v11481 = rt::VS(g::LS[1433]); rt::dset(l_A__loc1_, NM_horizontalAlign, _v11481); _v11481; });
    ({ rt::Value _v11482 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_6l); rt::dset(l_A__loc1_, NM_defaultSkin, _v11482); _v11482; });
    ({ rt::Value _v11483 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__20_w); rt::dset(l_A__loc1_, NM_defaultSelectedSkin, _v11483); _v11483; });
    ({ rt::Value _v11484 = rt::VS(g::LS[1375]); rt::dset(l_A__loc1_, NM_labelField, _v11484); _v11484; });
    ({ rt::Value _v11485 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(30.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc1_, NM_defaultLabelProperties), NM_elementFormat, _v11485); _v11485; });
    ({ rt::Value _v11486 = rt::V(INFINITY); rt::dset(l_A__loc1_, NM_accessoryGap, _v11486); _v11486; });
    ({ rt::Value _v11487 = rt::VS(g::LS[1481]); rt::dset(l_A__loc1_, NM_accessoryPosition, _v11487); _v11487; });
    ({ rt::Value _v11488 = rt::VO(rt::new_bound(rt::VO(this), NM_S__2d_j)); rt::dset(l_A__loc1_, NM_accessoryFunction, _v11488); _v11488; });
    return l_A__loc1_;
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S__2d_j(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc6_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S_2_25_.S__2d_j");
    (l_A__loc4_ = rt::NUL);
    (l_A__loc5_ = rt::callv(rt::dget(rt::VO(this), NM_Panel)));
    (l_A__loc6_ = rt::callv(rt::dget(rt::VO(this), NM_HorizontalLayout)));
    ({ rt::Value _v11489 = rt::V(10.0); rt::dset(l_A__loc6_, NM_gap, _v11489); _v11489; });
    ({ rt::Value _v11490 = l_A__loc6_; rt::dset(l_A__loc5_, NM_layout, _v11490); _v11490; });
    if ((rt::eq(rt::idx_get(l_param1, rt::VS(g::LS[1375])), rt::VS(g::LS[3390])) && rt::eq(rt::idx_get(l_param1, rt::VS(g::LS[3391])), rt::VS(g::LS[113])))) {
        (l_A__loc4_ = rt::callv(rt::dget(rt::VO(this), NM_Button)));
        ({ rt::Value _v11491 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__3f__22_N); rt::dset(l_A__loc4_, NM_defaultSkin, _v11491); _v11491; });
        ({ rt::Value _v11492 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__3d__22_N); rt::dset(l_A__loc4_, NM_hoverSkin, _v11492); _v11492; });
        ({ rt::Value _v11493 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__22__22_O); rt::dset(l_A__loc4_, NM_downSkin, _v11493); _v11493; });
        ({ rt::Value _v11495 = ({ rt::Value _v11494 = rt::V(31.0); rt::dset(l_A__loc4_, NM_height, _v11494); _v11494; }); rt::dset(l_A__loc4_, NM_width, _v11495); _v11495; });
        ({ rt::Value _v11497 = ({ rt::Value _v11496 = rt::add(rt::dget(l_A__loc4_, NM_width), rt::V(10.0)); rt::dset(l_A__loc4_, NM_minTouchHeight, _v11496); _v11496; }); rt::dset(l_A__loc4_, NM_minTouchWidth, _v11497); _v11497; });
        (void)(rt::dcallv(l_A__loc4_, NM_addEventListener, rt::VS(g::LS[1322]), rt::VO(rt::new_bound(rt::VO(this), NM_S__23__22_O))));
        (void)(rt::dcallv(l_A__loc5_, NM_addChild, l_A__loc4_));
        return l_A__loc5_;
    }
    (l_A__loc3_ = rt::callv(rt::dget(rt::VO(this), NM_Button)));
    ({ rt::Value _v11498 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__60__22__3d_); rt::dset(l_A__loc3_, NM_defaultSkin, _v11498); _v11498; });
    ({ rt::Value _v11499 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S_4_22__3e_); rt::dset(l_A__loc3_, NM_hoverSkin, _v11499); _v11499; });
    ({ rt::Value _v11500 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S_0_22__3c_); rt::dset(l_A__loc3_, NM_downSkin, _v11500); _v11500; });
    ({ rt::Value _v11502 = ({ rt::Value _v11501 = rt::V(31.0); rt::dset(l_A__loc3_, NM_height, _v11501); _v11501; }); rt::dset(l_A__loc3_, NM_width, _v11502); _v11502; });
    ({ rt::Value _v11504 = ({ rt::Value _v11503 = rt::add(rt::dget(l_A__loc3_, NM_width), rt::V(10.0)); rt::dset(l_A__loc3_, NM_minTouchHeight, _v11503); _v11503; }); rt::dset(l_A__loc3_, NM_minTouchWidth, _v11504); _v11504; });
    (void)(rt::dcallv(l_A__loc3_, NM_addEventListener, rt::VS(g::LS[1322]), rt::VO(rt::new_bound(rt::VO(this), NM_S__3b__22_C))));
    ({ rt::Value _v11505 = rt::add(rt::add(rt::idx_get(l_param1, rt::VS(g::LS[1375])), rt::VS(g::LS[3392])), rt::idx_get(l_param1, rt::VS(g::LS[3391]))); rt::dset(l_A__loc3_, rt::N_name, _v11505); _v11505; });
    (void)(rt::dcallv(l_A__loc5_, NM_addChild, l_A__loc3_));
    (l_A__loc2_ = rt::callv(rt::dget(rt::VO(this), NM_Button)));
    ({ rt::Value _v11506 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__20_X); rt::dset(l_A__loc2_, NM_defaultSkin, _v11506); _v11506; });
    ({ rt::Value _v11507 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S__25_W); rt::dset(l_A__loc2_, NM_hoverSkin, _v11507); _v11507; });
    ({ rt::Value _v11508 = rt::callv(rt::dget(rt::VO(this), NM_Image), g::SV.C_S_99__S_1_21__5e_); rt::dset(l_A__loc2_, NM_downSkin, _v11508); _v11508; });
    ({ rt::Value _v11510 = ({ rt::Value _v11509 = rt::V(31.0); rt::dset(l_A__loc2_, NM_height, _v11509); _v11509; }); rt::dset(l_A__loc2_, NM_width, _v11510); _v11510; });
    ({ rt::Value _v11512 = ({ rt::Value _v11511 = rt::add(rt::dget(l_A__loc2_, NM_width), rt::V(10.0)); rt::dset(l_A__loc2_, NM_minTouchHeight, _v11511); _v11511; }); rt::dset(l_A__loc2_, NM_minTouchWidth, _v11512); _v11512; });
    (void)(rt::dcallv(l_A__loc2_, NM_addEventListener, rt::VS(g::LS[1322]), rt::VO(rt::new_bound(rt::VO(this), NM_S_9j))));
    ({ rt::Value _v11513 = rt::idx_get(l_param1, rt::VS(g::LS[1375])); rt::dset(l_A__loc2_, rt::N_name, _v11513); _v11513; });
    (void)(rt::dcallv(l_A__loc5_, NM_addChild, l_A__loc2_));
    return l_A__loc5_;
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S__23__22_O(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S_2_25_.S__23__22_O");
    (void)(({ rt::Value _o11514 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11515 = rt::as_ptr<C_S__20_g>(_o11514); _p11515 ? _p11515->m_S__2d__25_(rt::trv(rt::VS(g::LS[3393])), rt::trv(rt::VS(g::LS[3394])), rt::arr_lit({rt::trv(rt::VS(g::LS[3395]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3c__22_N))}), rt::NUL, true, true, rt::VS(g::LS[162]), rt::NUL, false, rt::VS(g::LS[113]), rt::VS(g::LS[113]), rt::VS(g::LS[162]), rt::VS(g::LS[113]), this->m_S_1v()) : rt::dcallv(_o11514, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3393])), rt::trv(rt::VS(g::LS[3394])), rt::arr_lit({rt::trv(rt::VS(g::LS[3395]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3c__22_N))}), rt::NUL, rt::VB(true), rt::VB(true), rt::VS(g::LS[162]), rt::NUL, rt::VB(false), rt::VS(g::LS[113]), rt::VS(g::LS[113]), rt::VS(g::LS[162]), rt::VS(g::LS[113]), this->m_S_1v()); }));
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S__3c__22_N(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S_2_25_.S__3c__22_N");
    if (rt::eq(l_param1, rt::VS(g::LS[113]))) {
        (void)(({ rt::Value _o11516 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11517 = rt::as_ptr<C_S__20_g>(_o11516); _p11517 ? _p11517->m_S__2d__25_(rt::trv(rt::VS(g::LS[3393])), rt::trv(rt::VS(g::LS[3396])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11516, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3393])), rt::trv(rt::VS(g::LS[3396]))); }));
        return rt::NUL;
    }
    if (rt::eq(l_param2, rt::VS(g::LS[113]))) {
        (void)(({ rt::Value _o11518 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11519 = rt::as_ptr<C_S__20_g>(_o11518); _p11519 ? _p11519->m_S__2d__25_(rt::trv(rt::VS(g::LS[3393])), rt::trv(rt::VS(g::LS[3397])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11518, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3393])), rt::trv(rt::VS(g::LS[3397]))); }));
        return rt::NUL;
    }
    if ((!this->m_S__2c__22_O(l_param2))) {
        (void)(({ rt::Value _o11520 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11521 = rt::as_ptr<C_S__20_g>(_o11520); _p11521 ? _p11521->m_S__2d__25_(rt::trv(rt::VS(g::LS[3393])), rt::trv(rt::VS(g::LS[3398])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11520, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3393])), rt::trv(rt::VS(g::LS[3398]))); }));
        return rt::NUL;
    }
    (void)(this->m_S__40__22_N(l_param1, l_param2));
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S_9j(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S_2_25_.S_9j");
    ({ rt::Value _v11523 = rt::dget((({ rt::Value _t11522 = rt::dget(l_param1, NM_target); rt::is_stubtype(_t11522) ? _t11522 : rt::NUL; })), rt::N_name); this->f_S__23__21__2c_ = rt::slot_string(_v11523); _v11523; });
    (void)(({ rt::Value _o11524 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11525 = rt::as_ptr<C_S__20_g>(_o11524); _p11525 ? _p11525->m_S__2d__25_(rt::trv(rt::VS(g::LS[3399])), rt::trv(rt::VS(g::LS[3400]), this->f_S__23__21__2c_), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__22_x))}), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11524, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3399])), rt::trv(rt::VS(g::LS[3400]), this->f_S__23__21__2c_), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__22_x))})); }));
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S__22_x() {
    RT_FN("S_2_25_.S__22_x");
    (void)(this->m_S_7l(this->f_S__23__21__2c_));
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S__3b__22_C(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S_2_25_.S__3b__22_C");
    (l_A__loc2_ = rt::slot_string(rt::dget((({ rt::Value _t11526 = rt::dget(l_param1, NM_target); rt::is_stubtype(_t11526) ? _t11526 : rt::NUL; })), rt::N_name)));
    (l_A__loc3_ = rt::dcallv(l_A__loc2_, rt::N_split, rt::VS(g::LS[3392]), rt::V(2.0)));
    if ((rt::alen(l_A__loc3_) == 1.0)) {
        (void)(rt::dcallv(l_A__loc3_, rt::N_push, rt::VS(g::LS[113])));
    }
    ({ rt::Value _v11527 = rt::arr_at(l_A__loc3_, 0.0); this->f_S_0_22_O = rt::slot_string(_v11527); _v11527; });
    (void)(({ rt::Value _o11528 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11529 = rt::as_ptr<C_S__20_g>(_o11528); _p11529 ? _p11529->m_S__2d__25_(rt::trv(rt::VS(g::LS[3401])), rt::trv(rt::VS(g::LS[3402]), this->f_S_0_22_O), rt::arr_lit({rt::trv(rt::VS(g::LS[3403]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3e__22_N))}), rt::NUL, true, true, rt::VS(g::LS[162]), rt::NUL, false, rt::VS(g::LS[113]), rt::trv(rt::VS(g::LS[3404])), rt::VS(g::LS[162]), rt::arr_at(l_A__loc3_, 0.0), rt::arr_at(l_A__loc3_, 1.0)) : rt::dcallv(_o11528, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3401])), rt::trv(rt::VS(g::LS[3402]), this->f_S_0_22_O), rt::arr_lit({rt::trv(rt::VS(g::LS[3403]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3e__22_N))}), rt::NUL, rt::VB(true), rt::VB(true), rt::VS(g::LS[162]), rt::NUL, rt::VB(false), rt::VS(g::LS[113]), rt::trv(rt::VS(g::LS[3404])), rt::VS(g::LS[162]), rt::arr_at(l_A__loc3_, 0.0), rt::arr_at(l_A__loc3_, 1.0)); }));
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S__3e__22_N(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S_2_25_.S__3e__22_N");
    if (rt::eq(l_param1, rt::VS(g::LS[113]))) {
        (void)(({ rt::Value _o11530 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11531 = rt::as_ptr<C_S__20_g>(_o11530); _p11531 ? _p11531->m_S__2d__25_(rt::trv(rt::VS(g::LS[3401])), rt::trv(rt::VS(g::LS[3396])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11530, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3401])), rt::trv(rt::VS(g::LS[3396]))); }));
        return rt::NUL;
    }
    if (rt::eq(l_param2, rt::VS(g::LS[113]))) {
        (void)(({ rt::Value _o11532 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11533 = rt::as_ptr<C_S__20_g>(_o11532); _p11533 ? _p11533->m_S__2d__25_(rt::trv(rt::VS(g::LS[3401])), rt::trv(rt::VS(g::LS[3397])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11532, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3401])), rt::trv(rt::VS(g::LS[3397]))); }));
        return rt::NUL;
    }
    if ((!this->m_S__2c__22_O(l_param2))) {
        (void)(({ rt::Value _o11534 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11535 = rt::as_ptr<C_S__20_g>(_o11534); _p11535 ? _p11535->m_S__2d__25_(rt::trv(rt::VS(g::LS[3401])), rt::trv(rt::VS(g::LS[3398])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11534, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3401])), rt::trv(rt::VS(g::LS[3398]))); }));
        return rt::NUL;
    }
    (void)(this->m_S__5b__22_N(this->f_S_0_22_O, l_param1, l_param2));
    return rt::NUL;
}
bool C_S_2_25_::dm_S__20__21__2b__0() { return false; }
rt::Value C_S_2_25_::m_S__20__21__2b_(bool p0) {
    bool l_param1 = p0;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S_2_25_.S__20__21__2b_");
    (l_A__loc5_ = rt::slot_string(rt::NUL));
    ({ rt::Value _v11536 = rt::VS(g::LS[113]); rt::dset(this->f_S__3b_l, NM_text, _v11536); _v11536; });
    (l_A__loc2_ = rt::arr_lit({}));
    (l_A__loc4_ = rt::shared_object_get_local(nullptr, 0));
    if (rt::T(rt::dcallv(rt::dget(l_A__loc4_, rt::N_data), rt::N_hasOwnProperty, this->f_S__3f__21__3d_))) {
        {
            std::vector<rt::Value> _lst11537;
            rt::keys(rt::idx_get(rt::dget(l_A__loc4_, rt::N_data), this->f_S__3f__21__3d_), _lst11537);
            for (const rt::Value& _x11538 : _lst11537) {
                l_A__loc3_ = _x11538;
                (l_A__loc5_ = rt::slot_string(rt::idx_get(rt::idx_get(rt::idx_get(rt::dget(l_A__loc4_, rt::N_data), this->f_S__3f__21__3d_), l_A__loc3_), rt::VS(g::LS[3391]))));
                (void)(rt::dcallv(l_A__loc2_, rt::N_push, rt::dict_lit({{rt::VS(g::LS[1375]), l_A__loc3_}, {rt::VS(g::LS[3391]), l_A__loc5_}})));
            }
        }
    }
    if ((rt::alen(l_A__loc2_) > 0.0)) {
        (l_A__loc2_ = rt::dcallv(l_A__loc2_, rt::N_sortOn, rt::VS(g::LS[1375]), rt::V(1.0)));
    }
    (void)(rt::dcallv(l_A__loc2_, rt::N_push, rt::dict_lit({{rt::VS(g::LS[1375]), rt::VS(g::LS[3390])}, {rt::VS(g::LS[3391]), rt::VS(g::LS[113])}})));
    ({ rt::Value _v11542 = ({ rt::Value _v11541 = ({ rt::Value _v11540 = ({ rt::Value _v11539 = rt::VB((rt::alen(l_A__loc2_) > 0.0)); rt::dset(this->f_S__5d__21_Z, NM_includeInLayout, _v11539); _v11539; }); rt::dset(this->f_S__5d__21_Z, NM_visible, _v11540); _v11540; }); rt::dset(this->f_S_0S, NM_includeInLayout, _v11541); _v11541; }); rt::dset(this->f_S_0S, NM_visible, _v11542); _v11542; });
    ({ rt::Value _v11543 = rt::callv(rt::dget(rt::VO(this), NM_ListCollection), l_A__loc2_); rt::dset(this->f_S__5d__21_Z, NM_dataProvider, _v11543); _v11543; });
    if ((!l_param1)) {
        (void)(({ rt::Value _o11544 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11545 = rt::as_ptr<C_S__20_g>(_o11544); _p11545 ? _p11545->m_S__2d__25_(rt::trv(rt::VS(g::LS[3405])), rt::VS(g::LS[113]), rt::arr_lit({rt::trv(rt::VS(g::LS[3406]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S_81))}), rt::VO(this), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11544, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3405])), rt::VS(g::LS[113]), rt::arr_lit({rt::trv(rt::VS(g::LS[3406]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S_81))}), rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S_81() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_2_25_.S_81");
    (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S__26__21__3f_(rt::dget(this->f_S__3b_l, NM_text))));
    if ((!rt::eq(l_A__loc1_, rt::VS(g::LS[113])))) {
        (void)(this->m_S__5b_M(l_A__loc1_));
    } else if ((!rt::eq(rt::dget(this->f_S__5d__21_Z, NM_selectedIndex), rt::V((-1.0))))) {
        (void)(this->m_S__5b_M(rt::idx_get(rt::dget(this->f_S__5d__21_Z, NM_selectedItem), rt::VS(g::LS[3391]))));
    }
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S__5b_M(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("S_2_25_.S__5b_M");
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S__40__22_N(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_A__loc3_ = rt::NUL;
    rt::Value l_error = rt::UNDEF;
    RT_FN("S_2_25_.S__40__22_N");
    (l_A__loc3_ = rt::NUL);
    try {
        (l_A__loc3_ = rt::shared_object_get_local(nullptr, 0));
        ({ rt::Value _v11546 = rt::dict_lit({{rt::VS(g::LS[1375]), l_param1}, {rt::VS(g::LS[3391]), l_param2}}); rt::idx_set(rt::idx_get(rt::dget(l_A__loc3_, rt::N_data), this->f_S__3f__21__3d_), l_param1, _v11546); });
        (void)(rt::dcallv(l_A__loc3_, rt::N_flush));
        (void)(rt::dcallv(l_A__loc3_, rt::N_close));
    } catch (...) {
        l_error = rt::cur_exc();
    }
    (void)(this->m_S__20__21__2b_(true));
    (void)(({ rt::Value _o11548 = (({ rt::Value _t11547 = rt::dget(rt::dget(rt::VO(this), NM_parent), NM_parent); rt::is_class(_t11547, C_S__22__3c_::CI) ? _t11547 : rt::NUL; })); C_S__22__3c_* _p11549 = rt::as_ptr<C_S__22__3c_>(_o11548); _p11549 ? _p11549->m_S__21__21_c(g::SV.C_S__20_g__S_3_2c_, g::SV.C_S__20_g__S__26__3e_) : rt::dcallv(_o11548, NM_S__21__21_c, rt::V((double)(g::SV.C_S__20_g__S_3_2c_)), rt::V((double)(g::SV.C_S__20_g__S__26__3e_))); }));
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S_7l(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_error = rt::UNDEF;
    RT_FN("S_2_25_.S_7l");
    (l_A__loc2_ = rt::NUL);
    try {
        (l_A__loc2_ = rt::shared_object_get_local(nullptr, 0));
        if ((rt::pybool(rt::dcallv(rt::dget(l_A__loc2_, rt::N_data), rt::N_hasOwnProperty, this->f_S__3f__21__3d_)) && rt::T(rt::dcallv(rt::idx_get(rt::dget(l_A__loc2_, rt::N_data), this->f_S__3f__21__3d_), rt::N_hasOwnProperty, l_param1)))) {
            rt::delete_(rt::idx_get(rt::dget(l_A__loc2_, rt::N_data), this->f_S__3f__21__3d_), l_param1);
        }
        (void)(rt::dcallv(l_A__loc2_, rt::N_flush));
        (void)(rt::dcallv(l_A__loc2_, rt::N_close));
    } catch (...) {
        l_error = rt::cur_exc();
    }
    (void)(this->m_S__20__21__2b_(true));
    (void)(({ rt::Value _o11551 = (({ rt::Value _t11550 = rt::dget(rt::dget(rt::VO(this), NM_parent), NM_parent); rt::is_class(_t11550, C_S__22__3c_::CI) ? _t11550 : rt::NUL; })); C_S__22__3c_* _p11552 = rt::as_ptr<C_S__22__3c_>(_o11551); _p11552 ? _p11552->m_S__21__21_c(g::SV.C_S__20_g__S_3_2c_, g::SV.C_S__20_g__S__26__3e_) : rt::dcallv(_o11551, NM_S__21__21_c, rt::V((double)(g::SV.C_S__20_g__S_3_2c_)), rt::V((double)(g::SV.C_S__20_g__S__26__3e_))); }));
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S__5b__22_N(rt::Value p0, rt::Value p1, rt::Value p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_error = rt::UNDEF;
    RT_FN("S_2_25_.S__5b__22_N");
    (l_A__loc4_ = rt::NUL);
    try {
        (l_A__loc4_ = rt::shared_object_get_local(nullptr, 0));
        if ((!rt::eq(l_param2, l_param1))) {
            if ((rt::pybool(rt::dcallv(rt::dget(l_A__loc4_, rt::N_data), rt::N_hasOwnProperty, this->f_S__3f__21__3d_)) && rt::T(rt::dcallv(rt::idx_get(rt::dget(l_A__loc4_, rt::N_data), this->f_S__3f__21__3d_), rt::N_hasOwnProperty, l_param1)))) {
                ({ rt::Value _v11553 = rt::dict_lit({{rt::VS(g::LS[1375]), l_param2}, {rt::VS(g::LS[3391]), l_param3}}); rt::idx_set(rt::idx_get(rt::dget(l_A__loc4_, rt::N_data), this->f_S__3f__21__3d_), l_param2, _v11553); });
                rt::delete_(rt::idx_get(rt::dget(l_A__loc4_, rt::N_data), this->f_S__3f__21__3d_), l_param1);
            }
        } else {
            ({ rt::Value _v11554 = rt::dict_lit({{rt::VS(g::LS[1375]), l_param2}, {rt::VS(g::LS[3391]), l_param3}}); rt::idx_set(rt::idx_get(rt::dget(l_A__loc4_, rt::N_data), this->f_S__3f__21__3d_), l_param2, _v11554); });
        }
        (void)(rt::dcallv(l_A__loc4_, rt::N_flush));
        (void)(rt::dcallv(l_A__loc4_, rt::N_close));
    } catch (...) {
        l_error = rt::cur_exc();
    }
    (void)(this->m_S__20__21__2b_(true));
    (void)(({ rt::Value _o11556 = (({ rt::Value _t11555 = rt::dget(rt::dget(rt::VO(this), NM_parent), NM_parent); rt::is_class(_t11555, C_S__22__3c_::CI) ? _t11555 : rt::NUL; })); C_S__22__3c_* _p11557 = rt::as_ptr<C_S__22__3c_>(_o11556); _p11557 ? _p11557->m_S__21__21_c(g::SV.C_S__20_g__S_3_2c_, g::SV.C_S__20_g__S__26__3e_) : rt::dcallv(_o11556, NM_S__21__21_c, rt::V((double)(g::SV.C_S__20_g__S_3_2c_)), rt::V((double)(g::SV.C_S__20_g__S__26__3e_))); }));
    return rt::NUL;
}
rt::Value C_S_2_25_::m_S_1v() {
    RT_FN("S_2_25_.S_1v");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
bool C_S_2_25_::m_S__2c__22_O(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("S_2_25_.S__2c__22_O");
    return false;
    return false;
}
C_S_2_25_* C_S_2_25_::alloc_() {
    C_S_2_25_* o = rt::make<C_S_2_25_>();
    return o;
}
rt::Value C_S_2_25_::mk_(rt::Value* a, int n) {
    C_S_2_25_* o = alloc_();
    o->C_S_2_25_::ctor_();
    return rt::VO(o);
}
bool C_S_2_25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3d_: out = f_S__3f__21__3d_; return true;
    case NM_S_0_21__25_: out = f_S_0_21__25_; return true;
    case NM_S__2b__21_W: out = f_S__2b__21_W; return true;
    case NM_S_0S: out = f_S_0S; return true;
    case NM_S__3b_l: out = f_S__3b_l; return true;
    case NM_S__5d__21_Z: out = f_S__5d__21_Z; return true;
    case NM_S__23__21__2c_: out = f_S__23__21__2c_; return true;
    case NM_S_0_22_O: out = f_S_0_22_O; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3b_A: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2d_j: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__23__22_O: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3c__22_N: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9j: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__22_x: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3b__22_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__22_N: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_81: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5b_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_N: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7l: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5b__22_N: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1v: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2c__22_O: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S_2_25_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3f__21__3d_: f_S__3f__21__3d_ = rt::slot_string(v); return true;
    case NM_S_0_21__25_: f_S_0_21__25_ = rt::slot_string(v); return true;
    case NM_S__2b__21_W: f_S__2b__21_W = v; return true;
    case NM_S_0S: f_S_0S = v; return true;
    case NM_S__3b_l: f_S__3b_l = v; return true;
    case NM_S__5d__21_Z: f_S__5d__21_Z = v; return true;
    case NM_S__23__21__2c_: f_S__23__21__2c_ = rt::slot_string(v); return true;
    case NM_S_0_22_O: f_S_0_22_O = rt::slot_string(v); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S_2_25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__3b_A: out = m_S__3b_A(); return true;
    case NM_S__2d_j: out = m_S__2d_j(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__23__22_O: out = m_S__23__22_O(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__3c__22_N: out = m_S__3c__22_N(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF)); return true;
    case NM_S_9j: out = m_S_9j(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__22_x: out = m_S__22_x(); return true;
    case NM_S__3b__22_C: out = m_S__3b__22_C(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__3e__22_N: out = m_S__3e__22_N(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF)); return true;
    case NM_S__20__21__2b_: out = m_S__20__21__2b_(rt::arg<bool>(a, n, 0, C_S_2_25_::dm_S__20__21__2b__0())); return true;
    case NM_S_81: out = m_S_81(); return true;
    case NM_S__5b_M: out = m_S__5b_M(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__40__22_N: out = m_S__40__22_N(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF)); return true;
    case NM_S_7l: out = m_S_7l(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__5b__22_N: out = m_S__5b__22_N(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, rt::UNDEF)); return true;
    case NM_S_1v: out = m_S_1v(); return true;
    case NM_S__2c__22_O: out = rt::VB(m_S__2c__22_O(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    case NM_S__3f__21__3d_: { rt::Value f = f_S__3f__21__3d_; out = rt::call_value(f, a, n); return true; }
    case NM_S_0_21__25_: { rt::Value f = f_S_0_21__25_; out = rt::call_value(f, a, n); return true; }
    case NM_S__2b__21_W: { rt::Value f = f_S__2b__21_W; out = rt::call_value(f, a, n); return true; }
    case NM_S_0S: { rt::Value f = f_S_0S; out = rt::call_value(f, a, n); return true; }
    case NM_S__3b_l: { rt::Value f = f_S__3b_l; out = rt::call_value(f, a, n); return true; }
    case NM_S__5d__21_Z: { rt::Value f = f_S__5d__21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S__23__21__2c_: { rt::Value f = f_S__23__21__2c_; out = rt::call_value(f, a, n); return true; }
    case NM_S_0_22_O: { rt::Value f = f_S_0_22_O; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S_2_25_::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__3b_A: return true;
    case NM_S__2d_j: return true;
    case NM_S__23__22_O: return true;
    case NM_S__3c__22_N: return true;
    case NM_S_9j: return true;
    case NM_S__22_x: return true;
    case NM_S__3b__22_C: return true;
    case NM_S__3e__22_N: return true;
    case NM_S__20__21__2b_: return true;
    case NM_S_81: return true;
    case NM_S__5b_M: return true;
    case NM_S__40__22_N: return true;
    case NM_S_7l: return true;
    case NM_S__5b__22_N: return true;
    case NM_S_1v: return true;
    case NM_S__2c__22_O: return true;
    case NM_S__3f__21__3d_: return false;
    case NM_S_0_21__25_: return false;
    case NM_S__2b__21_W: return false;
    case NM_S_0S: return false;
    case NM_S__3b_l: return false;
    case NM_S__5d__21_Z: return false;
    case NM_S__23__21__2c_: return false;
    case NM_S_0_22_O: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S_2_25_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_25_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_25_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_21_1::ctor_() {
    RT_FN("S_7_21_1.S_7_21_1");
    ({ rt::Value _v11558 = rt::new_vectorv(rt::E_NUM, rt::V(16.0)); this->f_S__20__21__60_ = _v11558; _v11558; });
    ({ rt::Value _v11559 = rt::new_vectorv(rt::E_ANY); this->f_S__3e_j = _v11559; _v11559; });
    ({ rt::Value _v11560 = rt::new_vectorv(rt::E_ANY); this->f_S__20_l = _v11560; _v11560; });
    ({ rt::Value _v11561 = rt::new_vectorv(rt::E_NUM, rt::V(16.0)); this->f_S__2c_6 = _v11561; _v11561; });
    ({ rt::Value _v11562 = rt::new_vectorv(rt::E_ANY); this->f_S_8I = _v11562; _v11562; });
    ({ rt::Value _v11563 = rt::new_vectorv(rt::E_ANY); this->f_S_7 = _v11563; _v11563; });
    (void)((this->C_S_1_3b_::ctor_(), rt::NUL));
    ({ rt::Value _v11564 = rt::trv(rt::VS(g::LS[3407])); this->f_S_9_21_Z = rt::slot_string(_v11564); _v11564; });
    (void)(this->m_S__2b__21_R());
}
rt::Value C_S_7_21_1::m_S__2b__21_R() {
    int32_t l_A__loc5_ = 0;
    rt::Value l_A__loc6_ = rt::NUL;
    int32_t l_A__loc4_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S_7_21_1.S__2b__21_R");
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc6_ = rt::NUL);
    (l_A__loc4_ = rt::toint_d(0.0));
    ({ rt::Value _v11565 = rt::V((g::SV.C_S__20_g__S__22_g ? 590.0 : 560.0)); rt::dset(rt::VO(this), NM_width, _v11565); _v11565; });
    ({ rt::Value _v11567 = ({ C_S__3f_v* _n11566 = C_S__3f_v::alloc_(); _n11566->C_S__3f_v::ctor_(); rt::VO(_n11566); }); this->f_S__2c__21__2c_ = _v11567; _v11567; });
    (void)(({ rt::Value _o11568 = this->f_S__2c__21__2c_; C_S__3f_v* _p11569 = rt::as_ptr<C_S__3f_v>(_o11568); _p11569 ? _p11569->m_S__2b__21_R() : rt::dcallv(_o11568, NM_S__2b__21_R); }));
    (l_A__loc1_ = rt::callv(rt::dget(rt::VO(this), NM_FlowLayout)));
    ({ rt::Value _v11570 = rt::VS(g::LS[3355]); rt::dset(l_A__loc1_, NM_rowVerticalAlign, _v11570); _v11570; });
    ({ rt::Value _v11571 = rt::VS(g::LS[1433]); rt::dset(l_A__loc1_, NM_horizontalAlign, _v11571); _v11571; });
    ({ rt::Value _v11572 = rt::V(2.0); rt::dset(l_A__loc1_, NM_verticalGap, _v11572); _v11572; });
    ({ rt::Value _v11573 = rt::V(0.0); rt::dset(l_A__loc1_, NM_horizontalGap, _v11573); _v11573; });
    ({ rt::Value _v11574 = l_A__loc1_; rt::dset(rt::VO(this), NM_layout, _v11574); _v11574; });
    (l_A__loc5_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc5_)) < rt::alen(g::SV.C_S_8G__S__2d__21_4))) {
        (l_A__loc6_ = rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc5_))));
        if ((rt::is_class(l_A__loc6_, C_S__3b_E::CI) && (!(((double)(({ rt::Value _o11575 = l_A__loc6_; C_S__60_6* _p11576 = rt::as_ptr<C_S__60_6>(_o11575); _p11576 ? _p11576->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11575, NM_S__2d__21__5e_)); }))) == (-1.0))))) {
            ({ rt::Value _v11577 = l_A__loc6_; rt::idx_set(g::SV.C_S_7_21_1__S_2_21_6, rt::V((double)(({ rt::Value _o11578 = l_A__loc6_; C_S__60_6* _p11579 = rt::as_ptr<C_S__60_6>(_o11578); _p11579 ? _p11579->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11578, NM_S__2d__21__5e_)); }))), _v11577); });
        }
        (l_A__loc5_ = rt::toint_d((((double)(l_A__loc5_)) + 1.0)));
    }
    (void)(this->m_S_7j(rt::toint_d((-1.0))));
    (l_A__loc4_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc4_)) <= 15.0)) {
        ({ rt::Value _v11580 = rt::V((-1.0)); rt::idx_set(this->f_S__20__21__60_, rt::V((double)(l_A__loc4_)), _v11580); });
        if (C_S__26_c::sm_S__3e__25_(l_A__loc4_)) {
            (void)(this->m_S_7j(l_A__loc4_));
        }
        (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
    }
    (void)(rt::dcallv(rt::VO(this), NM_addEventListener, rt::VS(g::LS[1278]), rt::VO(rt::new_bound(rt::VO(this), NM_onTouch))));
    (l_A__loc3_ = rt::callv(rt::dget(rt::VO(this), NM_LayoutGroup)));
    (l_A__loc2_ = rt::callv(rt::dget(rt::VO(this), NM_HorizontalLayout)));
    ({ rt::Value _v11581 = rt::VS(g::LS[1310]); rt::dset(l_A__loc2_, NM_horizontalAlign, _v11581); _v11581; });
    ({ rt::Value _v11582 = l_A__loc2_; rt::dset(l_A__loc3_, NM_layout, _v11582); _v11582; });
    ({ rt::Value _v11583 = rt::dget(rt::VO(this), NM_width); rt::dset(l_A__loc3_, NM_width, _v11583); _v11583; });
    (void)(rt::dcallv(l_A__loc3_, NM_addChild, this->f_S__2c__21__2c_));
    (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc3_));
    return rt::NUL;
}
rt::Value C_S_7_21_1::m_S_7j(int32_t p0) {
    int32_t l_param1 = p0;
    double l_A__loc9_ = NAN;
    double l_A__loc7_ = NAN;
    double l_A__loc3_ = NAN;
    double l_A__loc12_ = NAN;
    rt::Value l_A__loc6_ = rt::NUL;
    double l_A__loc8_ = NAN;
    double l_A__loc13_ = NAN;
    double l_A__loc2_ = NAN;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc11_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_A__loc10_ = rt::NUL;
    RT_FN("S_7_21_1.S_7j");
    (l_A__loc9_ = NAN);
    (l_A__loc7_ = NAN);
    (l_A__loc3_ = NAN);
    (l_A__loc12_ = NAN);
    (l_A__loc6_ = rt::NUL);
    (l_A__loc8_ = NAN);
    (l_A__loc13_ = NAN);
    (l_A__loc2_ = NAN);
    (l_A__loc5_ = rt::NUL);
    (l_A__loc11_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
    if (g::SV.C_S__20_g__S__22_g) {
        (l_A__loc9_ = 35.0);
        if ((((double)(g::SV.C_Translation__locale)) == 5.0)) {
            (l_A__loc9_ = 28.0);
        }
        ({ rt::Value _v11584 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), ((((double)(l_param1)) == (-1.0)) ? g::SV.C_S_99__S__5e_z : g::SV.C_S_99__S_8_21_5), rt::V(l_A__loc9_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc11_, NM_textRendererProperties), NM_elementFormat, _v11584); _v11584; });
        ({ rt::Value _v11585 = rt::V(160.0); rt::dset(l_A__loc11_, NM_width, _v11585); _v11585; });
    } else {
        (l_A__loc7_ = 18.0);
        if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
            (l_A__loc7_ = 14.0);
        }
        ({ rt::Value _v11586 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc7_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc11_, NM_textRendererProperties), NM_elementFormat, _v11586); _v11586; });
        ({ rt::Value _v11587 = rt::V(190.0); rt::dset(l_A__loc11_, NM_width, _v11587); _v11587; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc11_));
    if ((((double)(l_param1)) == (-1.0))) {
        ({ rt::Value _v11588 = rt::trv(rt::VS(g::LS[3408])); rt::dset(l_A__loc11_, NM_text, _v11588); _v11588; });
    } else {
        (void)(rt::dcallv(this->f_S__3e_j, rt::N_push, l_A__loc11_));
    }
    (l_A__loc4_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
    ({ rt::Value _v11589 = rt::V(2.0); rt::dset(l_A__loc4_, NM_y, _v11589); _v11589; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v11590 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), ((((double)(l_param1)) == (-1.0)) ? g::SV.C_S_99__S__5e_z : g::SV.C_S_99__S_8_21_5), rt::V(35.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc4_, NM_textRendererProperties), NM_elementFormat, _v11590); _v11590; });
        ({ rt::Value _v11591 = rt::V(110.0); rt::dset(l_A__loc4_, NM_width, _v11591); _v11591; });
    } else {
        (l_A__loc3_ = 18.0);
        if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
            (l_A__loc3_ = 16.0);
        }
        ({ rt::Value _v11592 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc3_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc4_, NM_textRendererProperties), NM_elementFormat, _v11592); _v11592; });
        ({ rt::Value _v11593 = rt::V(90.0); rt::dset(l_A__loc4_, NM_width, _v11593); _v11593; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc4_));
    if ((((double)(l_param1)) == (-1.0))) {
        ({ rt::Value _v11594 = rt::trv(rt::VS(g::LS[3366])); rt::dset(l_A__loc4_, NM_text, _v11594); _v11594; });
    } else {
        (void)(rt::dcallv(this->f_S__20_l, rt::N_push, l_A__loc4_));
    }
    (l_A__loc10_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v11595 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), ((((double)(l_param1)) == (-1.0)) ? g::SV.C_S_99__S__5e_z : g::SV.C_S_99__S_8_21_5), rt::V(35.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc10_, NM_textRendererProperties), NM_elementFormat, _v11595); _v11595; });
        ({ rt::Value _v11596 = rt::V(170.0); rt::dset(l_A__loc10_, NM_width, _v11596); _v11596; });
    } else {
        (l_A__loc12_ = 16.0);
        if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
            (l_A__loc12_ = 14.0);
        }
        ({ rt::Value _v11597 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc12_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc10_, NM_textRendererProperties), NM_elementFormat, _v11597); _v11597; });
        ({ rt::Value _v11598 = rt::V(150.0); rt::dset(l_A__loc10_, NM_width, _v11598); _v11598; });
    }
    (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc10_));
    if ((((double)(l_param1)) == (-1.0))) {
        ({ rt::Value _v11599 = rt::trv(rt::VS(g::LS[3409])); rt::dset(l_A__loc10_, NM_text, _v11599); _v11599; });
    } else {
        (void)(rt::dcallv(this->f_S_8I, rt::N_push, l_A__loc10_));
    }
    if ((!(((double)(l_param1)) == (-1.0)))) {
        (l_A__loc6_ = rt::callv(rt::dget(rt::VO(this), NM_Button)));
        ({ rt::Value _v11600 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3e__21_W); rt::dset(l_A__loc6_, NM_defaultSkin, _v11600); _v11600; });
        ({ rt::Value _v11601 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_E); rt::dset(l_A__loc6_, NM_downSkin, _v11601); _v11601; });
        ({ rt::Value _v11602 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2c__24_); rt::dset(l_A__loc6_, NM_hoverSkin, _v11602); _v11602; });
        ({ rt::Value _v11603 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3e__21_); rt::dset(l_A__loc6_, NM_disabledSkin, _v11603); _v11603; });
        if (g::SV.C_S__20_g__S__22_g) {
            ({ rt::Value _v11604 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(46.0), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc6_, NM_defaultLabelProperties), NM_elementFormat, _v11604); _v11604; });
            ({ rt::Value _v11605 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V(46.0), rt::V(9079434.0)); rt::dset(rt::dget(l_A__loc6_, NM_disabledLabelProperties), NM_elementFormat, _v11605); _v11605; });
            ({ rt::Value _v11610 = ({ rt::Value _v11609 = ({ rt::Value _v11608 = ({ rt::Value _v11607 = ({ rt::Value _v11606 = rt::V(150.0); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_width, _v11606); _v11606; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_width, _v11607); _v11607; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_width, _v11608); _v11608; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_width, _v11609); _v11609; }); rt::dset(l_A__loc6_, NM_width, _v11610); _v11610; });
            ({ rt::Value _v11615 = ({ rt::Value _v11614 = ({ rt::Value _v11613 = ({ rt::Value _v11612 = ({ rt::Value _v11611 = rt::V(45.0); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_height, _v11611); _v11611; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_height, _v11612); _v11612; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_height, _v11613); _v11613; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_height, _v11614); _v11614; }); rt::dset(l_A__loc6_, NM_height, _v11615); _v11615; });
        } else {
            (l_A__loc8_ = 28.0);
            (l_A__loc13_ = 100.0);
            (l_A__loc2_ = 50.0);
            if ((!(((double)(g::SV.C_Translation__locale)) == 0.0))) {
                (l_A__loc8_ = 22.0);
                (l_A__loc13_ = 130.0);
                (l_A__loc2_ = 50.0);
            }
            ({ rt::Value _v11616 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc8_), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc6_, NM_defaultLabelProperties), NM_elementFormat, _v11616); _v11616; });
            ({ rt::Value _v11617 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V(l_A__loc8_), rt::V(9079434.0)); rt::dset(rt::dget(l_A__loc6_, NM_disabledLabelProperties), NM_elementFormat, _v11617); _v11617; });
            ({ rt::Value _v11622 = ({ rt::Value _v11621 = ({ rt::Value _v11620 = ({ rt::Value _v11619 = ({ rt::Value _v11618 = rt::V(l_A__loc13_); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_width, _v11618); _v11618; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_width, _v11619); _v11619; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_width, _v11620); _v11620; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_width, _v11621); _v11621; }); rt::dset(l_A__loc6_, NM_width, _v11622); _v11622; });
            ({ rt::Value _v11627 = ({ rt::Value _v11626 = ({ rt::Value _v11625 = ({ rt::Value _v11624 = ({ rt::Value _v11623 = rt::V(l_A__loc2_); rt::dset(rt::dget(l_A__loc6_, NM_disabledSkin), NM_height, _v11623); _v11623; }); rt::dset(rt::dget(l_A__loc6_, NM_hoverSkin), NM_height, _v11624); _v11624; }); rt::dset(rt::dget(l_A__loc6_, NM_downSkin), NM_height, _v11625); _v11625; }); rt::dset(rt::dget(l_A__loc6_, NM_defaultSkin), NM_height, _v11626); _v11626; }); rt::dset(l_A__loc6_, NM_height, _v11627); _v11627; });
            (void)(C_S_99::sm_S_9_21_W(l_A__loc6_));
        }
        ({ rt::Value _v11628 = rt::trv(rt::VS(g::LS[1317])); rt::dset(l_A__loc6_, NM_label, _v11628); _v11628; });
        ({ rt::Value _v11629 = rt::V(2.0); rt::dset(l_A__loc6_, NM_labelOffsetY, _v11629); _v11629; });
        ({ rt::Value _v11632 = rt::dcallv(rt::V((double)(({ rt::Value _o11630 = rt::arr_at(g::SV.C_S_7_21_1__S_2_21_6, ((double)(l_param1))); C_S__60_6* _p11631 = rt::as_ptr<C_S__60_6>(_o11630); _p11631 ? _p11631->f_id : rt::touint(rt::dget(_o11630, NM_id)); }))), rt::N_toString); rt::dset(l_A__loc6_, rt::N_name, _v11632); _v11632; });
        (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc6_));
        (void)(rt::dcallv(this->f_S_7, rt::N_push, l_A__loc6_));
    } else {
        (l_A__loc5_ = rt::callv(rt::dget(rt::VO(this), NM_Label)));
        ({ rt::Value _v11633 = rt::V((g::SV.C_S__20_g__S__22_g ? 50.0 : 80.0)); rt::dset(l_A__loc5_, NM_width, _v11633); _v11633; });
        ({ rt::Value _v11634 = rt::V((g::SV.C_S__20_g__S__22_g ? 25.0 : 50.0)); rt::dset(l_A__loc5_, NM_height, _v11634); _v11634; });
        (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc5_));
    }
    if (((((double)(l_param1)) == 10.0) || (((double)(l_param1)) == 9.0))) {
        ({ rt::Value _v11642 = ({ rt::Value _v11641 = ({ rt::Value _v11640 = ({ rt::Value _v11639 = ({ rt::Value _v11638 = ({ rt::Value _v11637 = ({ rt::Value _v11636 = ({ rt::Value _v11635 = rt::VB(false); rt::dset(l_A__loc6_, NM_includeInLayout, _v11635); _v11635; }); rt::dset(l_A__loc10_, NM_includeInLayout, _v11636); _v11636; }); rt::dset(l_A__loc4_, NM_includeInLayout, _v11637); _v11637; }); rt::dset(l_A__loc11_, NM_includeInLayout, _v11638); _v11638; }); rt::dset(l_A__loc6_, NM_visible, _v11639); _v11639; }); rt::dset(l_A__loc10_, NM_visible, _v11640); _v11640; }); rt::dset(l_A__loc4_, NM_visible, _v11641); _v11641; }); rt::dset(l_A__loc11_, NM_visible, _v11642); _v11642; });
    }
    return rt::NUL;
}
rt::Value C_S_7_21_1::m_S__21__21_G() {
    int32_t l_A__loc6_ = 0;
    int32_t l_A__loc5_ = 0;
    int32_t l_A__loc8_ = 0;
    rt::Value l_A__loc7_ = rt::NUL;
    double l_A__loc1_ = NAN;
    bool l_A__loc3_ = false;
    bool l_A__loc4_ = false;
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc9_ = 0;
    RT_FN("S_7_21_1.S__21__21_G");
    (l_A__loc6_ = rt::toint_d(0.0));
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc8_ = rt::toint_d(0.0));
    (l_A__loc7_ = rt::NUL);
    (l_A__loc1_ = NAN);
    (void)(({ rt::Value _o11643 = this->f_S__2c__21__2c_; C_S__3f_v* _p11644 = rt::as_ptr<C_S__3f_v>(_o11643); _p11644 ? _p11644->m_S__21__21_G() : rt::dcallv(_o11643, NM_S__21__21_G); }));
    (l_A__loc3_ = ({ bool _t11645 = (!rt::eq(rt::V((double)(this->f_S_7_21_b)), rt::arr_at(g::SV.C_S_8G__S_4P, 0.0))); _t11645 ? _t11645 : (bool)((!(this->f_S__20_z == (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)))))); }));
    (l_A__loc4_ = C_S__26_c::sm_S__27__21__5f_());
    if ((!(l_A__loc4_ == this->f_S__3b__3c_))) {
        ({ bool _v11646 = l_A__loc4_; this->f_S__3b__3c_ = _v11646; _v11646; });
        (l_A__loc6_ = rt::toint_d((rt::alen(this->f_S__3e_j) - 2.0)));
        while ((((double)(l_A__loc6_)) < rt::alen(this->f_S__3e_j))) {
            ({ rt::Value _v11654 = ({ rt::Value _v11653 = ({ rt::Value _v11652 = ({ rt::Value _v11651 = ({ rt::Value _v11650 = ({ rt::Value _v11649 = ({ rt::Value _v11648 = ({ rt::Value _v11647 = rt::VB(this->f_S__3b__3c_); rt::dset(rt::arr_at(this->f_S_7, ((double)(l_A__loc6_))), NM_includeInLayout, _v11647); _v11647; }); rt::dset(rt::arr_at(this->f_S_8I, ((double)(l_A__loc6_))), NM_includeInLayout, _v11648); _v11648; }); rt::dset(rt::arr_at(this->f_S__20_l, ((double)(l_A__loc6_))), NM_includeInLayout, _v11649); _v11649; }); rt::dset(rt::arr_at(this->f_S__3e_j, ((double)(l_A__loc6_))), NM_includeInLayout, _v11650); _v11650; }); rt::dset(rt::arr_at(this->f_S_7, ((double)(l_A__loc6_))), NM_visible, _v11651); _v11651; }); rt::dset(rt::arr_at(this->f_S_8I, ((double)(l_A__loc6_))), NM_visible, _v11652); _v11652; }); rt::dset(rt::arr_at(this->f_S__20_l, ((double)(l_A__loc6_))), NM_visible, _v11653); _v11653; }); rt::dset(rt::arr_at(this->f_S__3e_j, ((double)(l_A__loc6_))), NM_visible, _v11654); _v11654; });
            (l_A__loc6_ = rt::toint_d((((double)(l_A__loc6_)) + 1.0)));
        }
    }
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc9_ = rt::toint_d(C_S__23__21__21_::sm_S__2b__22_J()));
    (l_A__loc5_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc5_)) <= 15.0)) {
        if (C_S__26_c::sm_S__3e__25_(l_A__loc5_)) {
            if ((!((({ bool _t11655 = (((double)(l_A__loc5_)) == 10.0); _t11655 ? _t11655 : (bool)((((double)(l_A__loc5_)) == 9.0)); })) && (!this->f_S__3b__3c_)))) {
                if (((!rt::eq(rt::arr_at(this->f_S__20__21__60_, ((double)(l_A__loc5_))), rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, ((double)(l_A__loc5_))))) || (!(((double)(this->f_S__3c__3d_)) == ((double)(l_A__loc9_)))))) {
                    ({ rt::Value _v11656 = rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, ((double)(l_A__loc5_))); rt::idx_set(this->f_S__20__21__60_, rt::V((double)(l_A__loc5_)), _v11656); });
                    ({ rt::Value _v11657 = rt::add(rt::add(rt::add(rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(l_A__loc5_))), rt::VS(g::LS[194])), C_S__26_c::sm_S_8_21_Z(rt::tonum(rt::arr_at(this->f_S__20__21__60_, ((double)(l_A__loc5_)))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[931])); rt::dset(rt::arr_at(this->f_S__3e_j, ((double)(l_A__loc2_))), NM_text, _v11657); _v11657; });
                    ({ rt::Value _v11658 = rt::add(C_S__26_c::sm_S_8_21_Z(C_S__23__21__21_::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::VS(g::LS[1351])); rt::dset(rt::arr_at(this->f_S__20_l, ((double)(l_A__loc2_))), NM_text, _v11658); _v11658; });
                }
                (l_A__loc8_ = rt::toint_d(1.0));
                {
                    rt::Value _sw11659 = rt::V((double)(g::SV.C_S_8G__S__3e__21_K));
                    int _c11660 = -1;
                    if (_c11660 == -1 && rt::strict_eq(_sw11659, rt::V((double)(g::SV.C_S__3f_v__S__60__3b_)))) _c11660 = 0;
                    if (_c11660 == -1 && rt::strict_eq(_sw11659, rt::V((double)(g::SV.C_S__3f_v__S__3f_6)))) _c11660 = 1;
                    if (_c11660 == -1 && rt::strict_eq(_sw11659, rt::V((double)(g::SV.C_S__3f_v__S__5d__2c_)))) _c11660 = 2;
                    if (_c11660 == -1 && rt::strict_eq(_sw11659, rt::V((double)(g::SV.C_S__3f_v__S_9_22__2b_)))) _c11660 = 3;
                    if (_c11660 == -1 && rt::strict_eq(_sw11659, rt::V((double)(g::SV.C_S__3f_v__S__23__21_S)))) _c11660 = 4;
                    if (_c11660 == -1) _c11660 = 5;
                    switch (_c11660) {
                    case 0: {
                        (l_A__loc8_ = rt::toint_d(10.0));
                        break;
                    }
                    case 1: {
                        (l_A__loc8_ = rt::toint_d(100.0));
                        break;
                    }
                    case 2: {
                        (l_A__loc8_ = rt::toint_d(1000.0));
                        break;
                    }
                    case 3: {
                        (l_A__loc8_ = ((int32_t)(C_S__26_c::sm_S__2b__22__2b_(l_A__loc5_))));
                        break;
                    }
                    case 4: {
                        (l_A__loc8_ = rt::toint_d(10000.0));
                    }
                    default: break;
                    }
                }
                (l_A__loc7_ = rt::dict_lit({{rt::VS(g::LS[260]), rt::V(0.0)}}));
                (l_A__loc1_ = ({ rt::Value _o11661 = rt::arr_at(g::SV.C_S_7_21_1__S_2_21_6, ((double)(l_A__loc5_))); C_S__60_6* _p11662 = rt::as_ptr<C_S__60_6>(_o11661); _p11662 ? _p11662->m_S_75(l_A__loc5_, l_A__loc8_, (((double)(g::SV.C_S_8G__S__3e__21_K)) == ((double)(g::SV.C_S__3f_v__S__23__21_S))), l_A__loc7_) : rt::tonum(rt::dcallv(_o11661, NM_S_75, rt::V((double)(l_A__loc5_)), rt::V((double)(l_A__loc8_)), rt::VB((((double)(g::SV.C_S_8G__S__3e__21_K)) == ((double)(g::SV.C_S__3f_v__S__23__21_S)))), l_A__loc7_)); }));
                if (((!rt::eq(rt::arr_at(this->f_S__2c_6, ((double)(l_A__loc5_))), rt::V(l_A__loc1_))) || l_A__loc3_)) {
                    ({ rt::Value _v11663 = rt::arr_at(g::SV.C_S_8G__S_4P, 0.0); this->f_S_7_21_b = rt::toint(_v11663); _v11663; });
                    ({ bool _v11664 = rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 1.0), rt::V(1.0)); this->f_S__20_z = _v11664; _v11664; });
                    ({ rt::Value _v11665 = rt::V(l_A__loc1_); rt::idx_set(this->f_S__2c_6, rt::V((double)(l_A__loc5_)), _v11665); });
                    ({ rt::Value _v11666 = rt::add(rt::add(rt::add(C_S__26_c::sm_S_8_21_Z(rt::tonum(rt::idx_get(l_A__loc7_, rt::VS(g::LS[260]))), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::VS(g::LS[1482])), C_S__26_c::sm_S_8_21_Z(l_A__loc1_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[9])); rt::dset(rt::arr_at(this->f_S_8I, ((double)(l_A__loc2_))), NM_text, _v11666); _v11666; });
                }
                ({ rt::Value _v11667 = rt::VB(rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21_R, ((double)(l_A__loc5_))), rt::arr_at(this->f_S__2c_6, ((double)(l_A__loc5_))))); rt::dset(rt::arr_at(this->f_S_7, ((double)(l_A__loc2_))), NM_isEnabled, _v11667); _v11667; });
                (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
            }
        }
        (l_A__loc5_ = rt::toint_d((((double)(l_A__loc5_)) + 1.0)));
    }
    ({ int32_t _v11668 = l_A__loc9_; this->f_S__3c__3d_ = _v11668; _v11668; });
    return rt::NUL;
}
bool C_S_7_21_1::dm_S__20_1_1() { return false; }
bool C_S_7_21_1::dm_S__20_1_2() { return false; }
rt::Value C_S_7_21_1::m_S__20_1(rt::Value p0, bool p1, bool p2) {
    rt::Value l_param1 = p0;
    bool l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_A__loc4_ = rt::NUL;
    int32_t l_A__loc5_ = 0;
    bool l_A__loc6_ = false;
    RT_FN("S_7_21_1.S__20_1");
    (l_A__loc4_ = rt::NUL);
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc6_ = false);
    (l_A__loc5_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc5_)) < rt::alen(this->f_S_7))) {
        (l_A__loc4_ = rt::arr_at(this->f_S_7, ((double)(l_A__loc5_))));
        if (rt::T(rt::dget(l_A__loc4_, NM_isEnabled))) {
            (void)(rt::dcallv(l_A__loc4_, NM_getBounds, rt::dget(rt::VO(this), NM_stage), g::SV.C_S_7_21_1__S_5N));
            if (rt::T(rt::dcallv(g::SV.C_S_7_21_1__S_5N, NM_containsPoint, l_param1))) {
                ({ rt::Value _v11669 = C_S_8G::sm_S__21__21_H(rt::touint(rt::dget(l_A__loc4_, rt::N_name))); this->f_S__25__21_4 = _v11669; _v11669; });
                if ((!rt::eq(this->f_S__25__21_4, rt::NUL))) {
                    ({ bool _v11670 = l_param2; this->f_S__25__21__2d_ = _v11670; _v11670; });
                    ({ bool _v11671 = l_param3; this->f_S_4_21__22_ = _v11671; _v11671; });
                    if (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 17.0), rt::V(0.0))) {
                        (l_A__loc6_ = ({ bool _t11676 = (((double)(({ rt::Value _o11672 = this->f_S__25__21_4; C_S__60_6* _p11673 = rt::as_ptr<C_S__60_6>(_o11672); _p11673 ? _p11673->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11672, NM_S__2d__21__5e_)); }))) == ((double)(g::SV.C_S_8G__S__2d__21__5e_))); _t11676 ? _t11676 : (bool)((((double)(({ rt::Value _o11674 = this->f_S__25__21_4; C_S__60_6* _p11675 = rt::as_ptr<C_S__60_6>(_o11674); _p11675 ? _p11675->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11674, NM_S__2d__21__5e_)); }))) == ((double)(g::SV.C_S_8G__S__23_3)))); }));
                        if ((({ bool _t11677 = (!l_A__loc6_); _t11677 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0)) : _t11677; }) && ((((double)(({ rt::Value _o11678 = this->f_S__25__21_4; C_S__60_6* _p11679 = rt::as_ptr<C_S__60_6>(_o11678); _p11679 ? _p11679->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11678, NM_S__2d__21__5e_)); }))) == 2.0) || (((double)(({ rt::Value _o11680 = this->f_S__25__21_4; C_S__60_6* _p11681 = rt::as_ptr<C_S__60_6>(_o11680); _p11681 ? _p11681->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11680, NM_S__2d__21__5e_)); }))) == 3.0)))) {
                            (l_A__loc6_ = true);
                        }
                        if ((({ bool _t11682 = (!l_A__loc6_); _t11682 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 7.0)) : _t11682; }) && ((((double)(({ rt::Value _o11683 = this->f_S__25__21_4; C_S__60_6* _p11684 = rt::as_ptr<C_S__60_6>(_o11683); _p11684 ? _p11684->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11683, NM_S__2d__21__5e_)); }))) == 1.0) || (((double)(({ rt::Value _o11685 = this->f_S__25__21_4; C_S__60_6* _p11686 = rt::as_ptr<C_S__60_6>(_o11685); _p11686 ? _p11686->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11685, NM_S__2d__21__5e_)); }))) == 5.0)))) {
                            (l_A__loc6_ = true);
                        }
                        if ((({ bool _t11687 = (!l_A__loc6_); _t11687 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0)) : _t11687; }) && ((((double)(({ rt::Value _o11688 = this->f_S__25__21_4; C_S__60_6* _p11689 = rt::as_ptr<C_S__60_6>(_o11688); _p11689 ? _p11689->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11688, NM_S__2d__21__5e_)); }))) == 0.0) || (((double)(({ rt::Value _o11690 = this->f_S__25__21_4; C_S__60_6* _p11691 = rt::as_ptr<C_S__60_6>(_o11690); _p11691 ? _p11691->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11690, NM_S__2d__21__5e_)); }))) == 4.0)))) {
                            (l_A__loc6_ = true);
                        }
                        if (l_A__loc6_) {
                            if (this->f_S__27__21_Y) {
                                return rt::NUL;
                            }
                            ({ bool _v11692 = true; this->f_S__27__21_Y = _v11692; _v11692; });
                            (void)(({ rt::Value _o11693 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11694 = rt::as_ptr<C_S__20_g>(_o11693); _p11694 ? _p11694->m_S__2d__25_(rt::trv(rt::VS(g::LS[3410])), rt::trv(rt::VS(g::LS[3411])), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3b__23_))}), rt::NUL, true, true, rt::VS(g::LS[113]), rt::VO(rt::new_bound(rt::VO(this), NM_S__25_o)), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11693, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3410])), rt::trv(rt::VS(g::LS[3411])), rt::arr_lit({rt::trv(rt::VS(g::LS[3377])), rt::trv(rt::VS(g::LS[3378]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__3b__23_))}), rt::NUL, rt::VB(true), rt::VB(true), rt::VS(g::LS[113]), rt::VO(rt::new_bound(rt::VO(this), NM_S__25_o))); }));
                            break;
                        }
                        (void)(this->m_S__3b__23_());
                        break;
                    }
                    (void)(this->m_S__3b__23_());
                }
                break;
            }
        }
        (l_A__loc5_ = rt::toint_d((((double)(l_A__loc5_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S_7_21_1::m_S__25_o() {
    RT_FN("S_7_21_1.S__25_o");
    ({ bool _v11695 = false; this->f_S__27__21_Y = _v11695; _v11695; });
    return rt::NUL;
}
rt::Value C_S_7_21_1::m_S__3b__23_() {
    RT_FN("S_7_21_1.S__3b__23_");
    if (({ rt::Value _o11696 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p11697 = rt::as_ptr<C_S_8G>(_o11696); _p11697 ? _p11697->m_S__3b_T(this->f_S__25__21_4, this->f_S__25__21__2d_, this->f_S_4_21__22_) : rt::T(rt::dcallv(_o11696, NM_S__3b_T, this->f_S__25__21_4, rt::VB(this->f_S__25__21__2d_), rt::VB(this->f_S_4_21__22_))); })) {
        (void)(this->m_S__21__21_G());
        if (rt::is_class(rt::dget(rt::VO(this), NM_parent), C_S_7_21_B::CI)) {
            (void)(({ rt::Value _o11699 = (({ rt::Value _t11698 = rt::dget(rt::VO(this), NM_parent); rt::is_class(_t11698, C_S_7_21_B::CI) ? _t11698 : rt::NUL; })); C_S_7_21_B* _p11700 = rt::as_ptr<C_S_7_21_B>(_o11699); _p11700 ? _p11700->m_S_2_21__2c_() : rt::dcallv(_o11699, NM_S_2_21__2c_); }));
        }
    }
    return rt::NUL;
}
rt::Value C_S_7_21_1::m_onTouch(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S_7_21_1.onTouch");
    (l_A__loc2_ = rt::NUL);
    if ((!rt::T(rt::dget(rt::VO(this), NM_stage)))) {
        return rt::NUL;
    }
    if ((((double)(this->f_S__5d__21__25_)) >= 0.0)) {
        (l_A__loc2_ = rt::dcallv(l_param1, NM_getTouch, rt::VO(this), rt::NUL, rt::V((double)(this->f_S__5d__21__25_))));
        if ((!rt::T(l_A__loc2_))) {
            return rt::NUL;
        }
        if (rt::eq(rt::dget(l_A__loc2_, NM_phase), rt::VS(g::LS[1280]))) {
            (void)(rt::dcallv(l_A__loc2_, NM_getLocation, rt::dget(rt::VO(this), NM_stage), g::SV.C_S_7_21_1__S_6s));
            (void)(this->m_S__20_1(g::SV.C_S_7_21_1__S_6s, rt::T(rt::dget(l_param1, NM_ctrlKey)), rt::T(rt::dget(l_param1, NM_shiftKey))));
            ({ double _v11701 = (-1.0); this->f_S__5d__21__25_ = rt::toint_d(_v11701); _v11701; });
        }
        return rt::NUL;
    }
    (l_A__loc2_ = rt::dcallv(l_param1, NM_getTouch, rt::VO(this), rt::VS(g::LS[1281])));
    if (rt::T(l_A__loc2_)) {
        ({ rt::Value _v11702 = rt::dget(l_A__loc2_, NM_id); this->f_S__5d__21__25_ = rt::toint(_v11702); _v11702; });
        return rt::NUL;
    }
    (l_A__loc2_ = rt::dcallv(l_param1, NM_getTouch, rt::VO(this), rt::VS(g::LS[1282])));
    if (rt::T(l_A__loc2_)) {
        return rt::NUL;
    }
    return rt::NUL;
}
rt::Value C_S_7_21_1::m_S_8_21__5b_() {
    RT_FN("S_7_21_1.S_8_21__5b_");
    return rt::NUL;
}
rt::Value C_S_7_21_1::m_S__21__21_c(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S_7_21_1.S__21__21_c");
    return rt::NUL;
}
C_S_7_21_1* C_S_7_21_1::alloc_() {
    C_S_7_21_1* o = rt::make<C_S_7_21_1>();
    return o;
}
rt::Value C_S_7_21_1::mk_(rt::Value* a, int n) {
    C_S_7_21_1* o = alloc_();
    o->C_S_7_21_1::ctor_();
    return rt::VO(o);
}
bool C_S_7_21_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21__60_: out = f_S__20__21__60_; return true;
    case NM_S__3e_j: out = f_S__3e_j; return true;
    case NM_S__20_l: out = f_S__20_l; return true;
    case NM_S__2c_6: out = f_S__2c_6; return true;
    case NM_S_8I: out = f_S_8I; return true;
    case NM_S_7: out = f_S_7; return true;
    case NM_S__2c__21__2c_: out = f_S__2c__21__2c_; return true;
    case NM_S__3b__3c_: out = rt::VB(f_S__3b__3c_); return true;
    case NM_S__3c__3d_: out = rt::V((double)(f_S__3c__3d_)); return true;
    case NM_S_7_21_b: out = rt::V((double)(f_S_7_21_b)); return true;
    case NM_S__20_z: out = rt::VB(f_S__20_z); return true;
    case NM_S__25__21_4: out = f_S__25__21_4; return true;
    case NM_S__25__21__2d_: out = rt::VB(f_S__25__21__2d_); return true;
    case NM_S_4_21__22_: out = rt::VB(f_S_4_21__22_); return true;
    case NM_S__27__21_Y: out = rt::VB(f_S__27__21_Y); return true;
    case NM_S__5d__21__25_: out = rt::V((double)(f_S__5d__21__25_)); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7j: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__25_o: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3b__23_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_onTouch: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21__5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_c: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_1_3b_::dget(id, out);
}
bool C_S_7_21_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20__21__60_: f_S__20__21__60_ = v; return true;
    case NM_S__3e_j: f_S__3e_j = v; return true;
    case NM_S__20_l: f_S__20_l = v; return true;
    case NM_S__2c_6: f_S__2c_6 = v; return true;
    case NM_S_8I: f_S_8I = v; return true;
    case NM_S_7: f_S_7 = v; return true;
    case NM_S__2c__21__2c_: f_S__2c__21__2c_ = v; return true;
    case NM_S__3b__3c_: f_S__3b__3c_ = rt::T(v); return true;
    case NM_S__3c__3d_: f_S__3c__3d_ = rt::toint(v); return true;
    case NM_S_7_21_b: f_S_7_21_b = rt::toint(v); return true;
    case NM_S__20_z: f_S__20_z = rt::T(v); return true;
    case NM_S__25__21_4: f_S__25__21_4 = v; return true;
    case NM_S__25__21__2d_: f_S__25__21__2d_ = rt::T(v); return true;
    case NM_S_4_21__22_: f_S_4_21__22_ = rt::T(v); return true;
    case NM_S__27__21_Y: f_S__27__21_Y = rt::T(v); return true;
    case NM_S__5d__21__25_: f_S__5d__21__25_ = rt::toint(v); return true;
    default: break;
    }
    return C_S_1_3b_::dset(id, v);
}
bool C_S_7_21_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_7j: out = m_S_7j(rt::arg<int32_t>(a, n, 0, 0)); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__20_1: out = m_S__20_1(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, C_S_7_21_1::dm_S__20_1_1()), rt::arg<bool>(a, n, 2, C_S_7_21_1::dm_S__20_1_2())); return true;
    case NM_S__25_o: out = m_S__25_o(); return true;
    case NM_S__3b__23_: out = m_S__3b__23_(); return true;
    case NM_onTouch: out = m_onTouch(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S_8_21__5b_: out = m_S_8_21__5b_(); return true;
    case NM_S__21__21_c: out = m_S__21__21_c(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)); return true;
    case NM_S__20__21__60_: { rt::Value f = f_S__20__21__60_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3e_j: { rt::Value f = f_S__3e_j; out = rt::call_value(f, a, n); return true; }
    case NM_S__20_l: { rt::Value f = f_S__20_l; out = rt::call_value(f, a, n); return true; }
    case NM_S__2c_6: { rt::Value f = f_S__2c_6; out = rt::call_value(f, a, n); return true; }
    case NM_S_8I: { rt::Value f = f_S_8I; out = rt::call_value(f, a, n); return true; }
    case NM_S_7: { rt::Value f = f_S_7; out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__21__2c_: { rt::Value f = f_S__2c__21__2c_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3b__3c_: { rt::Value f = rt::VB(f_S__3b__3c_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3c__3d_: { rt::Value f = rt::V((double)(f_S__3c__3d_)); out = rt::call_value(f, a, n); return true; }
    case NM_S_7_21_b: { rt::Value f = rt::V((double)(f_S_7_21_b)); out = rt::call_value(f, a, n); return true; }
    case NM_S__20_z: { rt::Value f = rt::VB(f_S__20_z); out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21_4: { rt::Value f = f_S__25__21_4; out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21__2d_: { rt::Value f = rt::VB(f_S__25__21__2d_); out = rt::call_value(f, a, n); return true; }
    case NM_S_4_21__22_: { rt::Value f = rt::VB(f_S_4_21__22_); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__21_Y: { rt::Value f = rt::VB(f_S__27__21_Y); out = rt::call_value(f, a, n); return true; }
    case NM_S__5d__21__25_: { rt::Value f = rt::V((double)(f_S__5d__21__25_)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_1_3b_::dcall(id, a, n, out);
}
bool C_S_7_21_1::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S_7j: return true;
    case NM_S__21__21_G: return true;
    case NM_S__20_1: return true;
    case NM_S__25_o: return true;
    case NM_S__3b__23_: return true;
    case NM_onTouch: return true;
    case NM_S_8_21__5b_: return true;
    case NM_S__21__21_c: return true;
    case NM_S__20__21__60_: return false;
    case NM_S__3e_j: return false;
    case NM_S__20_l: return false;
    case NM_S__2c_6: return false;
    case NM_S_8I: return false;
    case NM_S_7: return false;
    case NM_S__2c__21__2c_: return false;
    case NM_S__3b__3c_: return false;
    case NM_S__3c__3d_: return false;
    case NM_S_7_21_b: return false;
    case NM_S__20_z: return false;
    case NM_S__25__21_4: return false;
    case NM_S__25__21__2d_: return false;
    case NM_S_4_21__22_: return false;
    case NM_S__27__21_Y: return false;
    case NM_S__5d__21__25_: return false;
    default: break;
    }
    return C_S_1_3b_::dmeth(id);
}
bool C_S_7_21_1::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_21_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_6: out = g::SV.C_S_7_21_1__S_2_21_6; return true;
    case NM_S_5N: out = g::SV.C_S_7_21_1__S_5N; return true;
    case NM_S_6s: out = g::SV.C_S_7_21_1__S_6s; return true;
    default: return false;
    }
}
bool C_S_7_21_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_2_21_6: g::SV.C_S_7_21_1__S_2_21_6 = v; return true;
    case NM_S_5N: g::SV.C_S_7_21_1__S_5N = v; return true;
    case NM_S_6s: g::SV.C_S_7_21_1__S_6s = v; return true;
    default: return false;
    }
}
bool C_S_7_21_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_21_L::ctor_() {
    RT_FN("S_8_21_L.S_8_21_L");
    (void)((this->C_S_6_2b_::ctor_(), rt::NUL));
}
rt::Value C_S_8_21_L::m_S__2b__21_R() {
    rt::Value l_A__temp_2 = rt::UNDEF;
    RT_FN("S_8_21_L.S__2b__21_R");
    (void)(this->C_S_6_2b_::m_S__2b__21_R());
    (void)(this->m_S__3d__22_(rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_1P), C_S_6_2b_::dm_S__3d__22__1(), C_S_6_2b_::dm_S__3d__22__2(), C_S_6_2b_::dm_S__3d__22__3(), C_S_6_2b_::dm_S__3d__22__4()));
    ({ rt::Value _v11703 = rt::callv(rt::dget(rt::VO(this), NM_Image), rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, rt::VS(g::LS[1318]))); this->f_S__5e__21__23_ = _v11703; _v11703; });
    ({ rt::Value _v11704 = rt::VB(false); rt::dset(this->f_S__5e__21__23_, NM_touchable, _v11704); _v11704; });
    (l_A__temp_2 = this->f_S__5e__21__23_);
    ({ rt::Value _v11705 = rt::V(50.0); rt::dset(this->f_S__5e__21__23_, NM_height, _v11705); _v11705; });
    ({ rt::Value _v11706 = rt::V(50.0); rt::dset(l_A__temp_2, NM_width, _v11706); _v11706; });
    ({ rt::Value _v11707 = rt::V(10.0); rt::dset(this->f_S__5e__21__23_, NM_x, _v11707); _v11707; });
    ({ rt::Value _v11708 = rt::V(5.0); rt::dset(this->f_S__5e__21__23_, NM_y, _v11708); _v11708; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__5e__21__23_));
    ({ rt::Value _v11709 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S_9_21_Z = _v11709; _v11709; });
    ({ rt::Value _v11710 = rt::VS(g::LS[1310]); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_textAlign, _v11710); _v11710; });
    ({ rt::Value _v11711 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(34.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S_9_21_Z, NM_textRendererProperties), NM_elementFormat, _v11711); _v11711; });
    ({ rt::Value _v11712 = rt::VB(false); rt::dset(this->f_S_9_21_Z, NM_touchable, _v11712); _v11712; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S_9_21_Z));
    ({ rt::Value _v11713 = rt::V(400.0); rt::dset(rt::VO(this), NM_width, _v11713); _v11713; });
    ({ rt::Value _v11714 = rt::V(60.0); rt::dset(rt::VO(this), NM_height, _v11714); _v11714; });
    ({ rt::Value _v11715 = rt::V(12.0); rt::dset(this->f_S_9_21_Z, NM_y, _v11715); _v11715; });
    ({ rt::Value _v11716 = rt::V((rt::tonum(rt::dget(rt::VO(this), NM_height)) - (rt::tonum(rt::dget(this->f_S_9_21_Z, NM_y)) * 2.0))); rt::dset(this->f_S_9_21_Z, NM_height, _v11716); _v11716; });
    (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    return rt::NUL;
}
rt::Value C_S_8_21_L::m_S__20_i(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S_8_21_L.S__20_i");
    (l_A__loc3_ = rt::NUL);
    ({ rt::Value _v11717 = l_param1; rt::dset(this->f_S_9_21_Z, NM_text, _v11717); _v11717; });
    if (rt::eq(l_param2, rt::VS(g::LS[113]))) {
        ({ rt::Value _v11718 = rt::VB(false); rt::dset(this->f_S__5e__21__23_, NM_visible, _v11718); _v11718; });
        ({ rt::Value _v11719 = rt::V(10.0); rt::dset(this->f_S_9_21_Z, NM_x, _v11719); _v11719; });
        ({ rt::Value _v11720 = rt::V((rt::tonum(rt::dget(rt::VO(this), NM_width)) - (rt::tonum(rt::dget(this->f_S_9_21_Z, NM_x)) * 2.0))); rt::dset(this->f_S_9_21_Z, NM_width, _v11720); _v11720; });
    } else {
        (l_A__loc3_ = rt::dcallv(g::SV.C_S_99__S__21__40_, NM_getTexture, l_param2));
        if ((!rt::eq(l_A__loc3_, rt::NUL))) {
            ({ rt::Value _v11721 = l_A__loc3_; rt::dset(this->f_S__5e__21__23_, NM_texture, _v11721); _v11721; });
        }
        ({ rt::Value _v11722 = rt::VB(true); rt::dset(this->f_S__5e__21__23_, NM_visible, _v11722); _v11722; });
        ({ rt::Value _v11723 = rt::V(65.0); rt::dset(this->f_S_9_21_Z, NM_x, _v11723); _v11723; });
        ({ rt::Value _v11724 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_width)) - rt::tonum(rt::dget(this->f_S_9_21_Z, NM_x))) - 10.0)); rt::dset(this->f_S_9_21_Z, NM_width, _v11724); _v11724; });
    }
    return rt::NUL;
}
bool C_S_8_21_L::dm_S_8_21_Q_0() { return false; }
bool C_S_8_21_L::dm_S_8_21_Q_1() { return false; }
rt::Value C_S_8_21_L::m_S_8_21_Q(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S_8_21_L.S_8_21_Q");
    if ((!rt::eq(this->f_S__60_8, rt::NUL))) {
        (void)(rt::callv(this->f_S__60_8));
    }
    return rt::NUL;
}
C_S_8_21_L* C_S_8_21_L::alloc_() {
    C_S_8_21_L* o = rt::make<C_S_8_21_L>();
    return o;
}
rt::Value C_S_8_21_L::mk_(rt::Value* a, int n) {
    C_S_8_21_L* o = alloc_();
    o->C_S_8_21_L::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S_9_21_Z: out = f_S_9_21_Z; return true;
    case NM_S__60_8: out = f_S__60_8; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20_i: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6_2b_::dget(id, out);
}
bool C_S_8_21_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21__23_: f_S__5e__21__23_ = v; return true;
    case NM_S_9_21_Z: f_S_9_21_Z = v; return true;
    case NM_S__60_8: f_S__60_8 = v; return true;
    default: break;
    }
    return C_S_6_2b_::dset(id, v);
}
bool C_S_8_21_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__20_i: out = m_S__20_i(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF)); return true;
    case NM_S_8_21_Q: out = m_S_8_21_Q(rt::arg<bool>(a, n, 0, C_S_8_21_L::dm_S_8_21_Q_0()), rt::arg<bool>(a, n, 1, C_S_8_21_L::dm_S_8_21_Q_1())); return true;
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_Z: { rt::Value f = f_S_9_21_Z; out = rt::call_value(f, a, n); return true; }
    case NM_S__60_8: { rt::Value f = f_S__60_8; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S_6_2b_::dcall(id, a, n, out);
}
bool C_S_8_21_L::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__20_i: return true;
    case NM_S_8_21_Q: return true;
    case NM_S__5e__21__23_: return false;
    case NM_S_9_21_Z: return false;
    case NM_S__60_8: return false;
    default: break;
    }
    return C_S_6_2b_::dmeth(id);
}
bool C_S_8_21_L::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21_L::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21_L::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__21_4::ctor_() {
    RT_FN("S__3d__21_4.S__3d__21_4");
    (void)(rt::NUL);
}
rt::Value C_S__3d__21_4::m_S__25_Q() {
    RT_FN("S__3d__21_4.S__25_Q");
    if ((!g::SV.C_S__20_g__S__22_g)) {
        ({ rt::Value _v11725 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3e_v); rt::dset(rt::VO(this), NM_backgroundSkin, _v11725); _v11725; });
    }
    ({ rt::Value _v11726 = rt::VS(g::LS[1379]); rt::dset(rt::VO(this), NM_headerField, _v11726); _v11726; });
    ({ rt::Value _v11727 = rt::VS(g::LS[3262]); rt::dset(rt::VO(this), NM_horizontalScrollPolicy, _v11727); _v11727; });
    ({ rt::Value _v11728 = rt::VS(g::LS[3265]); rt::dset(rt::VO(this), NM_verticalScrollPolicy, _v11728); _v11728; });
    ({ rt::Value _v11729 = rt::VS(g::LS[3266]); rt::dset(rt::VO(this), NM_scrollBarDisplayMode, _v11729); _v11729; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v11730 = rt::VS(g::LS[3267]); rt::dset(rt::VO(this), NM_interactionMode, _v11730); _v11730; });
        ({ rt::Value _v11731 = rt::V(0.0); rt::dset(rt::VO(this), NM_verticalScrollStep, _v11731); _v11731; });
        ({ rt::Value _v11732 = rt::V(50.0); rt::dset(rt::VO(this), NM_verticalMouseWheelScrollStep, _v11732); _v11732; });
    }
    ({ rt::Value _v11733 = rt::VO(rt::new_bound(rt::VO(this), NM_S_7n)); rt::dset(rt::VO(this), NM_headerRendererFactory, _v11733); _v11733; });
    ({ rt::Value _v11734 = rt::dget(rt::VO(C_S__3d__21_4::CI.ref), NM_S__22__21_4); rt::dset(rt::VO(this), NM_verticalScrollBarFactory, _v11734); _v11734; });
    return rt::NUL;
}
rt::Value C_S__3d__21_4::m_S__2b__21_R() {
    RT_FN("S__3d__21_4.S__2b__21_R");
    (void)(this->m_S__25_Q());
    if ((!g::SV.C_S__20_g__S__22_g)) {
        ({ double _v11736 = ({ double _v11735 = 88.0; this->f_S__26__21_2 = rt::toint_d(_v11735); _v11735; }); this->f_S__5d__21__23_ = rt::toint_d(_v11736); _v11736; });
        ({ rt::Value _v11737 = rt::V(4.0); rt::dset(rt::VO(this), NM_paddingBottom, _v11737); _v11737; });
    }
    (void)(this->m_S_1(C_S__3d__21_4::dm_S_1_0(), C_S__3d__21_4::dm_S_1_1()));
    return rt::NUL;
}
bool C_S__3d__21_4::dm_S_1_0() { return false; }
bool C_S__3d__21_4::dm_S_1_1() { return false; }
rt::Value C_S__3d__21_4::m_S_1(bool p0, bool p1) {
    bool l_param1 = p0;
    bool l_param2 = p1;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__3d__21_4.S_1");
    (l_A__loc3_ = rt::callv(rt::dget(rt::VO(this), NM_VerticalListLayout)));
    ({ rt::Value _v11738 = rt::V(0.0); rt::dset(l_A__loc3_, NM_gap, _v11738); _v11738; });
    if (g::SV.C_S__20_g__S__22_g) {
        ({ rt::Value _v11739 = rt::V(5.0); rt::dset(l_A__loc3_, NM_paddingLeft, _v11739); _v11739; });
    } else {
        ({ rt::Value _v11740 = rt::V(5.0); rt::dset(l_A__loc3_, NM_padding, _v11740); _v11740; });
    }
    if ((!g::SV.C_S__20_g__S__22_g)) {
        ({ rt::Value _v11741 = rt::dget(rt::VO(this), NM_width); this->f_S__2c__5d_ = rt::toint(_v11741); _v11741; });
        ({ double _v11742 = (l_param2 ? 3.0 : rt::m_floor((((double)(this->f_S__2c__5d_)) / ((((double)(this->f_S__5d__21__23_)) + (rt::tonum(rt::dget(l_A__loc3_, NM_gap)) * 2.0)))))); this->f_S__3b_j = rt::toint_d(_v11742); _v11742; });
        if (l_param1) {
            ({ double _v11744 = ({ double _v11743 = 150.0; this->f_S_5_21__60_ = rt::toint_d(_v11743); _v11743; }); this->f_S__2c__5d_ = rt::toint_d(_v11744); _v11744; });
            ({ double _v11746 = ({ double _v11745 = 75.0; this->f_S__26__21_2 = rt::toint_d(_v11745); _v11745; }); this->f_S__5d__21__23_ = rt::toint_d(_v11746); _v11746; });
        }
    }
    ({ rt::Value _v11747 = rt::V((double)(this->f_S__3b_j)); rt::dset(l_A__loc3_, NM_HORIZONTAL_ITEMS, _v11747); _v11747; });
    ({ rt::Value _v11748 = rt::V((double)(this->f_S__2c__5d_)); rt::dset(l_A__loc3_, NM_HEADER_WIDTH, _v11748); _v11748; });
    ({ rt::Value _v11749 = rt::V((double)(this->f_S_5_21__60_)); rt::dset(l_A__loc3_, NM_HEADER_HEIGHT, _v11749); _v11749; });
    ({ rt::Value _v11750 = rt::V((double)(this->f_S__5d__21__23_)); rt::dset(l_A__loc3_, NM_ITEM_WIDTH, _v11750); _v11750; });
    ({ rt::Value _v11751 = rt::V((double)(this->f_S__26__21_2)); rt::dset(l_A__loc3_, NM_ITEM_HEIGHT, _v11751); _v11751; });
    ({ rt::Value _v11752 = rt::VB(this->f_S_6_21_L); rt::dset(l_A__loc3_, NM_INLINE_HEADER, _v11752); _v11752; });
    if ((!this->f_S_6_21_L)) {
        ({ rt::Value _v11753 = rt::VB(true); rt::dset(l_A__loc3_, NM_stickyHeader, _v11753); _v11753; });
    }
    ({ rt::Value _v11754 = rt::VB(true); rt::dset(l_A__loc3_, NM_useVirtualLayout, _v11754); _v11754; });
    ({ rt::Value _v11755 = rt::VB(true); rt::dset(l_A__loc3_, NM_hasVariableItemDimensions, _v11755); _v11755; });
    ({ rt::Value _v11756 = l_A__loc3_; rt::dset(rt::VO(this), NM_layout, _v11756); _v11756; });
    return rt::NUL;
}
rt::Value C_S__3d__21_4::m_S__5d__21__24_() {
    RT_FN("S__3d__21_4.S__5d__21__24_");
    if (rt::T(rt::dget(rt::VO(this), NM_dataViewPort))) {
        (void)(rt::dcallv(rt::dget(rt::VO(this), NM_dataViewPort), NM_refreshInactiveRenderers, rt::VB(true)));
        (void)(rt::dcallv(rt::VO(this), NM_invalidate, rt::VS(g::LS[3412])));
    }
    return rt::NUL;
}
rt::Value C_S__3d__21_4::m_S__22_F() {
    RT_FN("S__3d__21_4.S__22_F");
    if (g::SV.C_S__20_g__S__22_g) {
        return ({ rt::Value _t11757 = rt::dcallv(rt::VO(this), NM_getChildAt, rt::V(0.0)); rt::is_stubtype(_t11757) ? _t11757 : rt::NUL; });
    }
    return ({ rt::Value _t11758 = rt::dcallv(rt::VO(this), NM_getChildAt, rt::V(1.0)); rt::is_stubtype(_t11758) ? _t11758 : rt::NUL; });
    return rt::NUL;
}
rt::Value C_S__3d__21_4::m_S_7n() {
    RT_FN("S__3d__21_4.S_7n");
    return ({ C_S_5X* _n11759 = C_S_5X::alloc_(); _n11759->C_S_5X::ctor_(); rt::VO(_n11759); });
    return rt::NUL;
}
int32_t C_S__3d__21_4::dm_S__5b__21_N_1() { return rt::toint_d((-1.0)); }
double C_S__3d__21_4::dm_S__5b__21_N_2() { return 0.0; }
rt::Value C_S__3d__21_4::m_S__5b__21_N(int32_t p0, int32_t p1, double p2) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    double l_param3 = p2;
    rt::Value l_e = rt::UNDEF;
    RT_FN("S__3d__21_4.S__5b__21_N");
    try {
        (void)(rt::dcallv(rt::VO(this), NM_scrollToDisplayIndex, rt::V((double)(l_param1)), rt::V((double)(l_param2)), rt::V(l_param3)));
        (void)(rt::dcallv(rt::VO(this), NM_handlePendingScroll));
        (void)(rt::dcallv(rt::VO(this), NM_validate));
    } catch (...) {
        l_e = rt::cur_exc();
    }
    return rt::NUL;
}
double C_S__3d__21_4::m_S__5e__21_M(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__3d__21_4.S__5e__21_M");
    return rt::tonum(rt::dget(rt::dcallv(rt::dget(rt::VO(this), NM_dataViewPort), NM_getScrollPositionForIndex, rt::V((double)(l_param1)), rt::V((-1.0))), NM_y));
    return 0.0;
}
rt::Value C_S__3d__21_4::m_S_6_21_F() {
    int32_t l_A__loc1_ = 0;
    rt::Value l_A__loc3_ = rt::NUL;
    bool l_A__loc2_ = false;
    RT_FN("S__3d__21_4.S_6_21_F");
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::NUL);
    (l_A__loc2_ = rt::T(rt::dget(rt::VO(this), NM__isScrolling)));
    ({ rt::Value _v11760 = rt::VB(true); rt::dset(rt::VO(this), NM__isScrolling, _v11760); _v11760; });
    (void)(rt::dcallv(rt::VO(this), NM_setSelectedLocation, rt::V((-1.0)), rt::V((-1.0))));
    (l_A__loc1_ = rt::toint_d(0.0));
    while (rt::lt(rt::V((double)(l_A__loc1_)), rt::dget(rt::dget(rt::VO(this), NM_dataViewPort), NM_numChildren))) {
        (l_A__loc3_ = rt::dcallv(rt::dget(rt::VO(this), NM_dataViewPort), NM_getChildAt, rt::V((double)(l_A__loc1_))));
        if ((rt::is_class(l_A__loc3_, C_S__3f__21__60_::CI) && ({ rt::Value _o11762 = (({ rt::Value _t11761 = l_A__loc3_; rt::is_class(_t11761, C_S__3f__21__60_::CI) ? _t11761 : rt::NUL; })); C_S__3f__21__60_* _p11763 = rt::as_ptr<C_S__3f__21__60_>(_o11762); _p11763 ? _p11763->g_isSelected() : rt::T(rt::dget(_o11762, NM_isSelected)); }))) {
            ({ bool _v11767 = false; rt::Value _o11765 = (({ rt::Value _t11764 = l_A__loc3_; rt::is_class(_t11764, C_S__3f__21__60_::CI) ? _t11764 : rt::NUL; })); C_S__3f__21__60_* _p11766 = rt::as_ptr<C_S__3f__21__60_>(_o11765); if (_p11766) _p11766->s_isSelected(_v11767); else rt::dset(_o11765, NM_isSelected, rt::VB(_v11767)); _v11767; });
        }
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    ({ rt::Value _v11768 = rt::VB(l_A__loc2_); rt::dset(rt::VO(this), NM__isScrolling, _v11768); _v11768; });
    return rt::NUL;
}
rt::Value C_S__3d__21_4::sm_S__22__21_4() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3d__21_4.S__22__21_4");
    (l_A__loc1_ = ({ C_S__5b__5b_* _n11769 = C_S__5b__5b_::alloc_(); _n11769->C_S__5b__5b_::ctor_(); rt::VO(_n11769); }));
    ({ rt::Value _v11770 = rt::VS(g::LS[312]); rt::dset(l_A__loc1_, NM_trackLayoutMode, _v11770); _v11770; });
    ({ rt::Value _v11774 = ({ rt::Value _v11771 = rt::new_stubinst(); rt::dset(rt::dget(l_A__loc1_, NM_minimumTrackProperties), NM_defaultSkin, _v11771); _v11771; }); rt::Value _o11772 = l_A__loc1_; C_S__5b__5b_* _p11773 = rt::as_ptr<C_S__5b__5b_>(_o11772); if (_p11773) _p11773->s_S_5_2d_(_v11774); else rt::dset(_o11772, NM_S_5_2d_, _v11774); _v11774; });
    ({ rt::Value _v11777 = rt::new_stubinst(); rt::Value _o11775 = l_A__loc1_; C_S__5b__5b_* _p11776 = rt::as_ptr<C_S__5b__5b_>(_o11775); if (_p11776) _p11776->s_S__27_d(_v11777); else rt::dset(_o11775, NM_S__27_d, _v11777); _v11777; });
    ({ rt::Value _v11778 = rt::new_stubinst(); rt::dset(rt::dget(l_A__loc1_, NM_thumbProperties), NM_defaultSkin, _v11778); _v11778; });
    return l_A__loc1_;
    return rt::NUL;
}
C_S__3d__21_4* C_S__3d__21_4::alloc_() {
    C_S__3d__21_4* o = rt::make<C_S__3d__21_4>();
    return o;
}
rt::Value C_S__3d__21_4::mk_(rt::Value* a, int n) {
    C_S__3d__21_4* o = alloc_();
    o->C_S__3d__21_4::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3b_j: out = rt::V((double)(f_S__3b_j)); return true;
    case NM_S__2c__5d_: out = rt::V((double)(f_S__2c__5d_)); return true;
    case NM_S_5_21__60_: out = rt::V((double)(f_S_5_21__60_)); return true;
    case NM_S__5d__21__23_: out = rt::V((double)(f_S__5d__21__23_)); return true;
    case NM_S__26__21_2: out = rt::V((double)(f_S__26__21_2)); return true;
    case NM_S_6_21_L: out = rt::VB(f_S_6_21_L); return true;
    case NM_S__25_Q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5d__21__24_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__22_F: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7n: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5b__21_N: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5e__21_M: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6_21_F: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__3d__21_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3b_j: f_S__3b_j = rt::toint(v); return true;
    case NM_S__2c__5d_: f_S__2c__5d_ = rt::toint(v); return true;
    case NM_S_5_21__60_: f_S_5_21__60_ = rt::toint(v); return true;
    case NM_S__5d__21__23_: f_S__5d__21__23_ = rt::toint(v); return true;
    case NM_S__26__21_2: f_S__26__21_2 = rt::toint(v); return true;
    case NM_S_6_21_L: f_S_6_21_L = rt::T(v); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__3d__21_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__25_Q: out = m_S__25_Q(); return true;
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S_1: out = m_S_1(rt::arg<bool>(a, n, 0, C_S__3d__21_4::dm_S_1_0()), rt::arg<bool>(a, n, 1, C_S__3d__21_4::dm_S_1_1())); return true;
    case NM_S__5d__21__24_: out = m_S__5d__21__24_(); return true;
    case NM_S__22_F: out = m_S__22_F(); return true;
    case NM_S_7n: out = m_S_7n(); return true;
    case NM_S__5b__21_N: out = m_S__5b__21_N(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__3d__21_4::dm_S__5b__21_N_1()), rt::arg<double>(a, n, 2, C_S__3d__21_4::dm_S__5b__21_N_2())); return true;
    case NM_S__5e__21_M: out = rt::V(m_S__5e__21_M(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6_21_F: out = m_S_6_21_F(); return true;
    case NM_S__3b_j: { rt::Value f = rt::V((double)(f_S__3b_j)); out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__5d_: { rt::Value f = rt::V((double)(f_S__2c__5d_)); out = rt::call_value(f, a, n); return true; }
    case NM_S_5_21__60_: { rt::Value f = rt::V((double)(f_S_5_21__60_)); out = rt::call_value(f, a, n); return true; }
    case NM_S__5d__21__23_: { rt::Value f = rt::V((double)(f_S__5d__21__23_)); out = rt::call_value(f, a, n); return true; }
    case NM_S__26__21_2: { rt::Value f = rt::V((double)(f_S__26__21_2)); out = rt::call_value(f, a, n); return true; }
    case NM_S_6_21_L: { rt::Value f = rt::VB(f_S_6_21_L); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__3d__21_4::dmeth(int id) {
    switch (id) {
    case NM_S__25_Q: return true;
    case NM_S__2b__21_R: return true;
    case NM_S_1: return true;
    case NM_S__5d__21__24_: return true;
    case NM_S__22_F: return true;
    case NM_S_7n: return true;
    case NM_S__5b__21_N: return true;
    case NM_S__5e__21_M: return true;
    case NM_S_6_21_F: return true;
    case NM_S__3b_j: return false;
    case NM_S__2c__5d_: return false;
    case NM_S_5_21__60_: return false;
    case NM_S__5d__21__23_: return false;
    case NM_S__26__21_2: return false;
    case NM_S_6_21_L: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__3d__21_4::smeth_(int id) {
    switch (id) {
    case NM_S__22__21_4: return true;
    default: return false;
    }
}
bool C_S__3d__21_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__22__21_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__21_4::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__21_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21_4: out = sm_S__22__21_4(); return true;
    default: return false;
    }
}
void C_S__3d__21_a::ctor_() {
    RT_FN("S__3d__21_a.S__3d__21_a");
    (void)(rt::NUL);
}
rt::Value C_S__3d__21_a::m_layoutChildren() {
    double l_A__loc1_ = NAN;
    RT_FN("S__3d__21_a.layoutChildren");
    (l_A__loc1_ = NAN);
    if (rt::T(rt::dget(rt::VO(this), NM_currentBackground))) {
        ({ rt::Value _v11779 = rt::dget(rt::VO(this), NM_actualWidth); rt::dset(rt::dget(rt::VO(this), NM_currentBackground), NM_width, _v11779); _v11779; });
        ({ rt::Value _v11780 = rt::dget(rt::VO(this), NM_actualHeight); rt::dset(rt::dget(rt::VO(this), NM_currentBackground), NM_height, _v11780); _v11780; });
    }
    if (rt::strict_eq(rt::dget(rt::VO(this), NM__minimum), rt::dget(rt::VO(this), NM__maximum))) {
        (l_A__loc1_ = 1.0);
    } else {
        (l_A__loc1_ = (((rt::tonum(rt::dget(rt::VO(this), NM__value)) - rt::tonum(rt::dget(rt::VO(this), NM__minimum)))) / ((rt::tonum(rt::dget(rt::VO(this), NM__maximum)) - rt::tonum(rt::dget(rt::VO(this), NM__minimum))))));
        if ((l_A__loc1_ < 0.0)) {
            (l_A__loc1_ = 0.0);
        } else if ((l_A__loc1_ > 1.0)) {
            (l_A__loc1_ = 1.0);
        }
    }
    if (rt::eq(rt::dget(rt::VO(this), NM__direction), rt::VS(g::LS[1479]))) {
        ({ rt::Value _v11781 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_actualWidth)) - rt::tonum(rt::dget(rt::VO(this), NM__paddingLeft))) - rt::tonum(rt::dget(rt::VO(this), NM__paddingRight)))); rt::dset(rt::dget(rt::VO(this), NM_currentFill), NM_width, _v11781); _v11781; });
        ({ rt::Value _v11782 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_actualHeight)) - rt::tonum(rt::dget(rt::VO(this), NM__paddingTop))) - rt::tonum(rt::dget(rt::VO(this), NM__paddingBottom)))); rt::dset(rt::dget(rt::VO(this), NM_currentFill), NM_height, _v11782); _v11782; });
        ({ rt::Value _v11783 = rt::dget(rt::VO(this), NM__paddingLeft); rt::dset(rt::dget(rt::VO(this), NM_currentFill), NM_x, _v11783); _v11783; });
        ({ rt::Value _v11784 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_actualHeight)) - rt::tonum(rt::dget(rt::VO(this), NM__paddingBottom))) - rt::tonum(rt::dget(rt::dget(rt::VO(this), NM_currentFill), NM_height)))); rt::dset(rt::dget(rt::VO(this), NM_currentFill), NM_y, _v11784); _v11784; });
        ({ rt::Value _v11785 = rt::V(0.0); rt::dset(g::SV.C_S__3d__21_a__S_5N, NM_x, _v11785); _v11785; });
        ({ rt::Value _v11786 = rt::V(rt::m_round(rt::tonum(rt::add(rt::dget(rt::VO(this), NM__originalFillHeight), rt::V((((1.0 - l_A__loc1_)) * ((((rt::tonum(rt::dget(rt::VO(this), NM_actualHeight)) - rt::tonum(rt::dget(rt::VO(this), NM__paddingBottom))) - rt::tonum(rt::dget(rt::VO(this), NM__paddingTop))) - rt::tonum(rt::dget(rt::VO(this), NM__originalFillHeight)))))))))); rt::dset(g::SV.C_S__3d__21_a__S_5N, NM_y, _v11786); _v11786; });
        ({ rt::Value _v11787 = rt::dget(rt::dget(rt::VO(this), NM_currentFill), NM_width); rt::dset(g::SV.C_S__3d__21_a__S_5N, NM_width, _v11787); _v11787; });
        ({ rt::Value _v11788 = rt::dget(rt::dget(rt::VO(this), NM_currentFill), NM_height); rt::dset(g::SV.C_S__3d__21_a__S_5N, NM_height, _v11788); _v11788; });
        ({ rt::Value _v11790 = g::SV.C_S__3d__21_a__S_5N; rt::dset((({ rt::Value _t11789 = rt::dget(rt::VO(this), NM_currentFill); rt::is_stubtype(_t11789) ? _t11789 : rt::NUL; })), NM_clipRect, _v11790); _v11790; });
    } else {
        ({ rt::Value _v11791 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_actualWidth)) - rt::tonum(rt::dget(rt::VO(this), NM__paddingLeft))) - rt::tonum(rt::dget(rt::VO(this), NM__paddingRight)))); rt::dset(rt::dget(rt::VO(this), NM_currentFill), NM_width, _v11791); _v11791; });
        ({ rt::Value _v11792 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_actualHeight)) - rt::tonum(rt::dget(rt::VO(this), NM__paddingTop))) - rt::tonum(rt::dget(rt::VO(this), NM__paddingBottom)))); rt::dset(rt::dget(rt::VO(this), NM_currentFill), NM_height, _v11792); _v11792; });
        ({ rt::Value _v11793 = rt::dget(rt::VO(this), NM__paddingLeft); rt::dset(rt::dget(rt::VO(this), NM_currentFill), NM_x, _v11793); _v11793; });
        ({ rt::Value _v11794 = rt::dget(rt::VO(this), NM__paddingTop); rt::dset(rt::dget(rt::VO(this), NM_currentFill), NM_y, _v11794); _v11794; });
        ({ rt::Value _v11795 = rt::V(0.0); rt::dset(g::SV.C_S__3d__21_a__S_5N, NM_x, _v11795); _v11795; });
        ({ rt::Value _v11796 = rt::V(0.0); rt::dset(g::SV.C_S__3d__21_a__S_5N, NM_y, _v11796); _v11796; });
        ({ rt::Value _v11797 = rt::V(rt::m_round(rt::tonum(rt::add(rt::dget(rt::VO(this), NM__originalFillWidth), rt::V((l_A__loc1_ * ((((rt::tonum(rt::dget(rt::VO(this), NM_actualWidth)) - rt::tonum(rt::dget(rt::VO(this), NM__paddingLeft))) - rt::tonum(rt::dget(rt::VO(this), NM__paddingRight))) - rt::tonum(rt::dget(rt::VO(this), NM__originalFillWidth)))))))))); rt::dset(g::SV.C_S__3d__21_a__S_5N, NM_width, _v11797); _v11797; });
        ({ rt::Value _v11798 = rt::dget(rt::dget(rt::VO(this), NM_currentFill), NM_height); rt::dset(g::SV.C_S__3d__21_a__S_5N, NM_height, _v11798); _v11798; });
        ({ rt::Value _v11800 = g::SV.C_S__3d__21_a__S_5N; rt::dset((({ rt::Value _t11799 = rt::dget(rt::VO(this), NM_currentFill); rt::is_stubtype(_t11799) ? _t11799 : rt::NUL; })), NM_clipRect, _v11800); _v11800; });
    }
    return rt::NUL;
}
C_S__3d__21_a* C_S__3d__21_a::alloc_() {
    C_S__3d__21_a* o = rt::make<C_S__3d__21_a>();
    return o;
}
rt::Value C_S__3d__21_a::mk_(rt::Value* a, int n) {
    C_S__3d__21_a* o = alloc_();
    o->C_S__3d__21_a::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_layoutChildren: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__3d__21_a::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__3d__21_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_layoutChildren: out = m_layoutChildren(); return true;
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__3d__21_a::dmeth(int id) {
    switch (id) {
    case NM_layoutChildren: return true;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__3d__21_a::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__21_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5N: out = g::SV.C_S__3d__21_a__S_5N; return true;
    default: return false;
    }
}
bool C_S__3d__21_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_5N: g::SV.C_S__3d__21_a__S_5N = v; return true;
    default: return false;
    }
}
bool C_S__3d__21_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d_t::ctor_() {
    RT_FN("S__3d_t.S__3d_t");
    (void)(rt::NUL);
}
rt::Value C_S__3d_t::m_S__2b__21_R() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3d_t.S__2b__21_R");
    ({ rt::Value _v11801 = rt::V(300.0); rt::dset(rt::VO(this), NM_width, _v11801); _v11801; });
    (l_A__loc1_ = rt::callv(rt::dget(rt::VO(this), NM_VerticalLayout)));
    ({ rt::Value _v11802 = rt::V(10.0); rt::dset(l_A__loc1_, NM_gap, _v11802); _v11802; });
    ({ rt::Value _v11803 = l_A__loc1_; rt::dset(rt::VO(this), NM_layout, _v11803); _v11803; });
    ({ rt::Value _v11804 = rt::callv(rt::dget(rt::VO(this), NM_Label)); this->f_S__2b__21_W = _v11804; _v11804; });
    ({ rt::Value _v11805 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S_8_21_5, rt::V(32.0), rt::V(16185078.0)); rt::dset(rt::dget(this->f_S__2b__21_W, NM_textRendererProperties), NM_elementFormat, _v11805); _v11805; });
    ({ rt::Value _v11806 = rt::trv(rt::VS(g::LS[3413])); rt::dset(this->f_S__2b__21_W, NM_text, _v11806); _v11806; });
    ({ rt::Value _v11807 = rt::V((rt::tonum(rt::dget(rt::VO(this), NM_width)) - 10.0)); rt::dset(this->f_S__2b__21_W, NM_width, _v11807); _v11807; });
    ({ rt::Value _v11808 = rt::VB(true); rt::dset(this->f_S__2b__21_W, NM_wordWrap, _v11808); _v11808; });
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__2b__21_W));
    ({ rt::Value _v11809 = rt::callv(rt::dget(rt::VO(this), NM_TextInput)); this->f_S__3b_l = _v11809; _v11809; });
    (void)(rt::dcallv(this->f_S__3b_l, NM_setFocus));
    (void)(({ rt::Value _o11810 = g::SV.C_S_99__S__3e__21_a; C_S_99* _p11811 = rt::as_ptr<C_S_99>(_o11810); _p11811 ? _p11811->m_S__3d__21__3c_(this->f_S__3b_l, C_S_99::dm_S__3d__21__3c__1()) : rt::dcallv(_o11810, NM_S__3d__21__3c_, this->f_S__3b_l); }));
    (void)(rt::dcallv(rt::VO(this), NM_addChild, this->f_S__3b_l));
    return rt::NUL;
}
rt::Value C_S__3d_t::m_S__20__21__2b_() {
    rt::Value l_e = rt::UNDEF;
    RT_FN("S__3d_t.S__20__21__2b_");
    ({ rt::Value _v11812 = rt::VS(g::LS[113]); rt::dset(this->f_S__3b_l, NM_text, _v11812); _v11812; });
    ({ rt::Value _v11813 = this->m_S_1v(); this->f_S_0_21__25_ = rt::slot_string(_v11813); _v11813; });
    try {
        (void)(rt::dcallv(rt::dget(rt::dget(rt::VO(this), NM_Clipboard), NM_generalClipboard), rt::N_clear));
        (void)(rt::dcallv(rt::dget(rt::dget(rt::VO(this), NM_Clipboard), NM_generalClipboard), NM_setData, rt::VS(g::LS[3414]), this->f_S_0_21__25_, rt::VB(false)));
    } catch (...) {
        l_e = rt::cur_exc();
    }
    (void)(({ rt::Value _o11814 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11815 = rt::as_ptr<C_S__20_g>(_o11814); _p11815 ? _p11815->m_S__2d__25_(rt::trv(rt::VS(g::LS[3415])), rt::VS(g::LS[113]), rt::arr_lit({rt::trv(rt::VS(g::LS[3416]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__5d__21_1))}), rt::VO(this), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o11814, NM_S__2d__25_, rt::trv(rt::VS(g::LS[3415])), rt::VS(g::LS[113]), rt::arr_lit({rt::trv(rt::VS(g::LS[3416]))}), rt::arr_lit({rt::VO(rt::new_bound(rt::VO(this), NM_S__5d__21_1))}), rt::VO(this)); }));
    return rt::NUL;
}
rt::Value C_S__3d_t::m_S_1v() {
    RT_FN("S__3d_t.S_1v");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
rt::Value C_S__3d_t::m_S__5d__21_1() {
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc1_ = rt::NUL;
    rt::Value l_error = rt::UNDEF;
    RT_FN("S__3d_t.S__5d__21_1");
    (l_A__loc2_ = rt::NUL);
    (l_A__loc1_ = rt::slot_string(C_S__26_c::sm_S__26__21__3f_(rt::dget(this->f_S__3b_l, NM_text))));
    if ((!rt::eq(l_A__loc1_, rt::VS(g::LS[113])))) {
        try {
            (l_A__loc2_ = rt::shared_object_get_local(nullptr, 0));
            if ((!rt::T(rt::dcallv(rt::dget(l_A__loc2_, rt::N_data), rt::N_hasOwnProperty, this->f_S__3f__21__3d_)))) {
                ({ rt::Value _v11816 = rt::dict_lit({}); rt::idx_set(rt::dget(l_A__loc2_, rt::N_data), this->f_S__3f__21__3d_, _v11816); });
            }
            ({ rt::Value _v11817 = rt::dict_lit({{rt::VS(g::LS[3391]), this->f_S_0_21__25_}, {rt::VS(g::LS[3417]), rt::V((double)(C_S__26_c::sm_S__22_E()))}}); rt::idx_set(rt::idx_get(rt::dget(l_A__loc2_, rt::N_data), this->f_S__3f__21__3d_), l_A__loc1_, _v11817); });
            (void)(rt::dcallv(l_A__loc2_, rt::N_flush));
            (void)(rt::dcallv(l_A__loc2_, rt::N_close));
            (l_A__loc2_ = rt::NUL);
        } catch (...) {
            l_error = rt::cur_exc();
        }
    }
    return rt::NUL;
}
C_S__3d_t* C_S__3d_t::alloc_() {
    C_S__3d_t* o = rt::make<C_S__3d_t>();
    return o;
}
rt::Value C_S__3d_t::mk_(rt::Value* a, int n) {
    C_S__3d_t* o = alloc_();
    o->C_S__3d_t::ctor_();
    return rt::VO(o);
}
bool C_S__3d_t::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3d_: out = f_S__3f__21__3d_; return true;
    case NM_S_0_21__25_: out = f_S_0_21__25_; return true;
    case NM_S__2b__21_W: out = f_S__2b__21_W; return true;
    case NM_S__3b_l: out = f_S__3b_l; return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1v: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5d__21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__3d_t::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3f__21__3d_: f_S__3f__21__3d_ = rt::slot_string(v); return true;
    case NM_S_0_21__25_: f_S_0_21__25_ = rt::slot_string(v); return true;
    case NM_S__2b__21_W: f_S__2b__21_W = v; return true;
    case NM_S__3b_l: f_S__3b_l = v; return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__3d_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__20__21__2b_: out = m_S__20__21__2b_(); return true;
    case NM_S_1v: out = m_S_1v(); return true;
    case NM_S__5d__21_1: out = m_S__5d__21_1(); return true;
    case NM_S__3f__21__3d_: { rt::Value f = f_S__3f__21__3d_; out = rt::call_value(f, a, n); return true; }
    case NM_S_0_21__25_: { rt::Value f = f_S_0_21__25_; out = rt::call_value(f, a, n); return true; }
    case NM_S__2b__21_W: { rt::Value f = f_S__2b__21_W; out = rt::call_value(f, a, n); return true; }
    case NM_S__3b_l: { rt::Value f = f_S__3b_l; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__3d_t::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__20__21__2b_: return true;
    case NM_S_1v: return true;
    case NM_S__5d__21_1: return true;
    case NM_S__3f__21__3d_: return false;
    case NM_S_0_21__25_: return false;
    case NM_S__2b__21_W: return false;
    case NM_S__3b_l: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__3d_t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d_t::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d_t::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b_0::ctor_() {
    RT_FN("S__5b_0.S__5b_0");
    ({ rt::Value _v11818 = rt::new_vectorv(rt::E_ANY); this->f_S__5e__21_4 = _v11818; _v11818; });
    (void)(rt::NUL);
}
rt::Value C_S__5b_0::m_S__2b__21_R() {
    int32_t l_A__loc4_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc3_ = 0;
    RT_FN("S__5b_0.S__2b__21_R");
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::NUL);
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::toint_d(0.0));
    ({ rt::Value _v11819 = rt::V((double)(this->f_S__21__21_b)); rt::dset(rt::VO(this), NM_height, _v11819); _v11819; });
    (l_A__loc4_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc4_)) < 3.0)) {
        (l_A__loc1_ = rt::callv(rt::dget(rt::VO(this), NM_Button)));
        ({ rt::Value _v11820 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3e__21_W); rt::dset(l_A__loc1_, NM_defaultSkin, _v11820); _v11820; });
        ({ rt::Value _v11821 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S_5_21_E); rt::dset(l_A__loc1_, NM_downSkin, _v11821); _v11821; });
        ({ rt::Value _v11822 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__2c__24_); rt::dset(l_A__loc1_, NM_hoverSkin, _v11822); _v11822; });
        ({ rt::Value _v11823 = rt::callv(rt::dget(rt::VO(this), NM_Scale9Image), g::SV.C_S_99__S__3e__21_); rt::dset(l_A__loc1_, NM_disabledSkin, _v11823); _v11823; });
        ({ rt::Value _v11824 = rt::V(2.0); rt::dset(l_A__loc1_, NM_y, _v11824); _v11824; });
        (l_A__loc2_ = rt::toint_d((g::SV.C_S__20_g__S__22_g ? (((({ bool _t11826 = ({ bool _t11825 = (((double)(g::SV.C_Translation__locale)) == 1.0); _t11825 ? _t11825 : (bool)((((double)(g::SV.C_Translation__locale)) == 2.0)); }); _t11826 ? _t11826 : (bool)((((double)(g::SV.C_Translation__locale)) == 3.0)); }) || (((double)(g::SV.C_Translation__locale)) == 4.0)) ? 30.0 : 30.0)) : (((({ bool _t11829 = ({ bool _t11828 = ({ bool _t11827 = (((double)(g::SV.C_Translation__locale)) == 1.0); _t11827 ? _t11827 : (bool)((((double)(g::SV.C_Translation__locale)) == 2.0)); }); _t11828 ? _t11828 : (bool)((((double)(g::SV.C_Translation__locale)) == 3.0)); }); _t11829 ? _t11829 : (bool)((((double)(g::SV.C_Translation__locale)) == 4.0)); }) || (((double)(g::SV.C_Translation__locale)) == 6.0)) ? 18.0 : 18.0)))));
        (l_A__loc3_ = rt::toint_d((g::SV.C_S__20_g__S__22_g ? 30.0 : 18.0)));
        if ((((double)(l_A__loc4_)) == 0.0)) {
            ({ rt::Value _v11830 = rt::dcallv(rt::trv(rt::VS(g::LS[3418])), rt::N_replace, rt::VS(g::LS[9]), rt::VS(g::LS[113])); rt::dset(l_A__loc1_, NM_label, _v11830); _v11830; });
            (void)(rt::dcallv(l_A__loc1_, NM_addEventListener, rt::VS(g::LS[1322]), rt::VO(rt::new_bound(rt::VO(this), NM_S__60__2b_))));
        } else if ((((double)(l_A__loc4_)) == 1.0)) {
            ({ rt::Value _v11831 = rt::trv(rt::VS(g::LS[3419])); rt::dset(l_A__loc1_, NM_label, _v11831); _v11831; });
            (l_A__loc2_ = l_A__loc3_);
            (void)(rt::dcallv(l_A__loc1_, NM_addEventListener, rt::VS(g::LS[1322]), rt::VO(rt::new_bound(rt::VO(this), NM_S__2b_i))));
        } else {
            ({ rt::Value _v11832 = rt::trv(rt::VS(g::LS[3420])); rt::dset(l_A__loc1_, NM_label, _v11832); _v11832; });
            (l_A__loc2_ = l_A__loc3_);
            (void)(rt::dcallv(l_A__loc1_, NM_addEventListener, rt::VS(g::LS[1322]), rt::VO(rt::new_bound(rt::VO(this), NM_S__2c__5b_))));
        }
        if (g::SV.C_S__20_g__S__22_g) {
            ({ rt::Value _v11833 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__5e_z, rt::V((double)(l_A__loc2_)), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc1_, NM_defaultLabelProperties), NM_elementFormat, _v11833); _v11833; });
            ({ rt::Value _v11838 = ({ rt::Value _v11837 = ({ rt::Value _v11836 = ({ rt::Value _v11835 = ({ rt::Value _v11834 = rt::V(130.0); rt::dset(rt::dget(l_A__loc1_, NM_disabledSkin), NM_width, _v11834); _v11834; }); rt::dset(rt::dget(l_A__loc1_, NM_hoverSkin), NM_width, _v11835); _v11835; }); rt::dset(rt::dget(l_A__loc1_, NM_downSkin), NM_width, _v11836); _v11836; }); rt::dset(rt::dget(l_A__loc1_, NM_defaultSkin), NM_width, _v11837); _v11837; }); rt::dset(l_A__loc1_, NM_width, _v11838); _v11838; });
            ({ rt::Value _v11843 = ({ rt::Value _v11842 = ({ rt::Value _v11841 = ({ rt::Value _v11840 = ({ rt::Value _v11839 = rt::V(25.0); rt::dset(rt::dget(l_A__loc1_, NM_disabledSkin), NM_height, _v11839); _v11839; }); rt::dset(rt::dget(l_A__loc1_, NM_hoverSkin), NM_height, _v11840); _v11840; }); rt::dset(rt::dget(l_A__loc1_, NM_downSkin), NM_height, _v11841); _v11841; }); rt::dset(rt::dget(l_A__loc1_, NM_defaultSkin), NM_height, _v11842); _v11842; }); rt::dset(l_A__loc1_, NM_height, _v11843); _v11843; });
            ({ rt::Value _v11844 = rt::V(2.0); rt::dset(l_A__loc1_, NM_labelOffsetY, _v11844); _v11844; });
        } else {
            ({ rt::Value _v11845 = rt::callv(rt::dget(rt::VO(this), NM_ElementFormat), g::SV.C_S_99__S__2c_K, rt::V((double)(l_A__loc2_)), rt::V(16185078.0)); rt::dset(rt::dget(l_A__loc1_, NM_defaultLabelProperties), NM_elementFormat, _v11845); _v11845; });
            ({ rt::Value _v11850 = ({ rt::Value _v11849 = ({ rt::Value _v11848 = ({ rt::Value _v11847 = ({ rt::Value _v11846 = rt::V(150.0); rt::dset(rt::dget(l_A__loc1_, NM_disabledSkin), NM_width, _v11846); _v11846; }); rt::dset(rt::dget(l_A__loc1_, NM_hoverSkin), NM_width, _v11847); _v11847; }); rt::dset(rt::dget(l_A__loc1_, NM_downSkin), NM_width, _v11848); _v11848; }); rt::dset(rt::dget(l_A__loc1_, NM_defaultSkin), NM_width, _v11849); _v11849; }); rt::dset(l_A__loc1_, NM_width, _v11850); _v11850; });
            ({ rt::Value _v11855 = ({ rt::Value _v11854 = ({ rt::Value _v11853 = ({ rt::Value _v11852 = ({ rt::Value _v11851 = rt::V(28.0); rt::dset(rt::dget(l_A__loc1_, NM_disabledSkin), NM_height, _v11851); _v11851; }); rt::dset(rt::dget(l_A__loc1_, NM_hoverSkin), NM_height, _v11852); _v11852; }); rt::dset(rt::dget(l_A__loc1_, NM_downSkin), NM_height, _v11853); _v11853; }); rt::dset(rt::dget(l_A__loc1_, NM_defaultSkin), NM_height, _v11854); _v11854; }); rt::dset(l_A__loc1_, NM_height, _v11855); _v11855; });
            ({ rt::Value _v11856 = rt::V(1.0); rt::dset(l_A__loc1_, NM_labelOffsetY, _v11856); _v11856; });
            (void)(C_S_99::sm_S_9_21_W(l_A__loc1_));
        }
        ({ rt::Value _v11857 = rt::VB((((double)(l_A__loc4_)) == 0.0)); rt::dset(l_A__loc1_, NM_visible, _v11857); _v11857; });
        (void)(rt::dcallv(rt::VO(this), NM_addChild, l_A__loc1_));
        (void)(rt::dcallv(this->f_S__5e__21_4, rt::N_push, l_A__loc1_));
        (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
    }
    (g::SV.C_S__5b_0__S__60__3e_ = ({ C_S__22__21_2* _n11858 = C_S__22__21_2::alloc_(); _n11858->C_S__22__21_2::ctor_(); rt::VO(_n11858); }));
    (void)(({ rt::Value _o11859 = g::SV.C_S__5b_0__S__60__3e_; C_S__22__21_2* _p11860 = rt::as_ptr<C_S__22__21_2>(_o11859); _p11860 ? _p11860->m_S__2b__21_R() : rt::dcallv(_o11859, NM_S__2b__21_R); }));
    (g::SV.C_S__5b_0__S__3f__21__20_ = ({ C_S__22__3f_* _n11861 = C_S__22__3f_::alloc_(); _n11861->C_S__22__3f_::ctor_(); rt::VO(_n11861); }));
    (void)(({ rt::Value _o11862 = g::SV.C_S__5b_0__S__3f__21__20_; C_S__22__3f_* _p11863 = rt::as_ptr<C_S__22__3f_>(_o11862); _p11863 ? _p11863->m_S__2b__21_R() : rt::dcallv(_o11862, NM_S__2b__21_R); }));
    return rt::NUL;
}
rt::Value C_S__5b_0::m_S__21__21_G() {
    bool l_A__loc1_ = false;
    RT_FN("S__5b_0.S__21__21_G");
    (l_A__loc1_ = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0));
    if ((!(l_A__loc1_ == this->f_S__27__40_))) {
        ({ bool _v11864 = l_A__loc1_; this->f_S__27__40_ = _v11864; _v11864; });
        ({ rt::Value _v11866 = ({ rt::Value _v11865 = rt::VB(this->f_S__27__40_); rt::dset(rt::arr_at(this->f_S__5e__21_4, 2.0), NM_visible, _v11865); _v11865; }); rt::dset(rt::arr_at(this->f_S__5e__21_4, 1.0), NM_visible, _v11866); _v11866; });
        (void)(this->m_S__21__21_c(rt::toint_d((-1.0)), rt::toint_d((-1.0))));
    }
    return rt::NUL;
}
rt::Value C_S__5b_0::m_S_8_21__5b_() {
    RT_FN("S__5b_0.S_8_21__5b_");
    return rt::NUL;
}
rt::Value C_S__5b_0::m_S__21__21_c(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("S__5b_0.S__21__21_c");
    if ((!this->f_S__27__40_)) {
        ({ rt::Value _v11867 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_width)) / 2.0) - (rt::tonum(rt::dget(rt::arr_at(this->f_S__5e__21_4, 0.0), NM_width)) / 2.0))); rt::dset(rt::arr_at(this->f_S__5e__21_4, 0.0), NM_x, _v11867); _v11867; });
    } else {
        ({ rt::Value _v11868 = rt::V(((((rt::tonum(rt::dget(rt::VO(this), NM_width)) / 2.0) - (rt::tonum(rt::dget(rt::arr_at(this->f_S__5e__21_4, 1.0), NM_width)) / 2.0)) - rt::tonum(rt::dget(rt::arr_at(this->f_S__5e__21_4, 0.0), NM_width))) - 10.0)); rt::dset(rt::arr_at(this->f_S__5e__21_4, 0.0), NM_x, _v11868); _v11868; });
        ({ rt::Value _v11869 = rt::V(((rt::tonum(rt::dget(rt::VO(this), NM_width)) / 2.0) - (rt::tonum(rt::dget(rt::arr_at(this->f_S__5e__21_4, 1.0), NM_width)) / 2.0))); rt::dset(rt::arr_at(this->f_S__5e__21_4, 1.0), NM_x, _v11869); _v11869; });
        ({ rt::Value _v11870 = rt::V((((rt::tonum(rt::dget(rt::VO(this), NM_width)) / 2.0) + (rt::tonum(rt::dget(rt::arr_at(this->f_S__5e__21_4, 1.0), NM_width)) / 2.0)) + 10.0)); rt::dset(rt::arr_at(this->f_S__5e__21_4, 2.0), NM_x, _v11870); _v11870; });
    }
    return rt::NUL;
}
rt::Value C_S__5b_0::m_S__60__2b_(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc8_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    uint32_t l_A__loc7_ = 0u;
    uint32_t l_A__loc4_ = 0u;
    int32_t l_A__loc5_ = 0;
    int32_t l_A__loc6_ = 0;
    RT_FN("S__5b_0.S__60__2b_");
    (l_A__loc8_ = rt::NUL);
    (l_A__loc2_ = rt::NUL);
    (l_A__loc3_ = rt::slot_string(rt::VS(g::LS[3421])));
    (l_A__loc7_ = rt::touint_d(0.0));
    (l_A__loc4_ = rt::touint_d(0.0));
    (l_A__loc5_ = g::SV.C_S_8G__S__3e__21_K);
    (g::SV.C_S_8G__S__3e__21_K = g::SV.C_S__3f_v__S__23__21_S);
    (l_A__loc6_ = rt::toint_d(0.0));
    (l_A__loc6_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc6_)) < rt::alen(g::SV.C_S_8G__S__2d__21_4))) {
        (l_A__loc8_ = rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc6_))));
        if ((!(({ bool _t11902 = (!({ rt::Value _o11871 = l_A__loc8_; C_S__60_6* _p11872 = rt::as_ptr<C_S__60_6>(_o11871); _p11872 ? _p11872->f_S__3c__21_7 : rt::T(rt::dget(_o11871, NM_S__3c__21_7)); })); _t11902 ? (bool)((({ bool _t11901 = ({ bool _t11898 = ({ bool _t11895 = ({ bool _t11892 = ({ bool _t11889 = ({ bool _t11886 = ({ bool _t11883 = ({ bool _t11880 = ({ bool _t11877 = (((double)(({ rt::Value _o11873 = l_A__loc8_; C_S__60_6* _p11874 = rt::as_ptr<C_S__60_6>(_o11873); _p11874 ? _p11874->f_id : rt::touint(rt::dget(_o11873, NM_id)); }))) == ((double)(g::SV.C_S__40__22_J__id))); _t11877 ? _t11877 : (bool)((((double)(({ rt::Value _o11875 = l_A__loc8_; C_S__60_6* _p11876 = rt::as_ptr<C_S__60_6>(_o11875); _p11876 ? _p11876->f_id : rt::touint(rt::dget(_o11875, NM_id)); }))) == ((double)(g::SV.C_S_7_22_9__id)))); }); _t11880 ? _t11880 : (bool)((((double)(({ rt::Value _o11878 = l_A__loc8_; C_S__60_6* _p11879 = rt::as_ptr<C_S__60_6>(_o11878); _p11879 ? _p11879->f_id : rt::touint(rt::dget(_o11878, NM_id)); }))) == ((double)(g::SV.C_S__3f__22_J__id)))); }); _t11883 ? _t11883 : (bool)((((double)(({ rt::Value _o11881 = l_A__loc8_; C_S__60_6* _p11882 = rt::as_ptr<C_S__60_6>(_o11881); _p11882 ? _p11882->f_id : rt::touint(rt::dget(_o11881, NM_id)); }))) == ((double)(g::SV.C_S__5b__22_J__id)))); }); _t11886 ? _t11886 : (bool)((((double)(({ rt::Value _o11884 = l_A__loc8_; C_S__60_6* _p11885 = rt::as_ptr<C_S__60_6>(_o11884); _p11885 ? _p11885->f_id : rt::touint(rt::dget(_o11884, NM_id)); }))) == ((double)(g::SV.C_S__5d__22_L__id)))); }); _t11889 ? _t11889 : (bool)((((double)(({ rt::Value _o11887 = l_A__loc8_; C_S__60_6* _p11888 = rt::as_ptr<C_S__60_6>(_o11887); _p11888 ? _p11888->f_id : rt::touint(rt::dget(_o11887, NM_id)); }))) == ((double)(g::SV.C_S_5_22__2d___id)))); }); _t11892 ? _t11892 : (bool)((((double)(({ rt::Value _o11890 = l_A__loc8_; C_S__60_6* _p11891 = rt::as_ptr<C_S__60_6>(_o11890); _p11891 ? _p11891->f_id : rt::touint(rt::dget(_o11890, NM_id)); }))) == ((double)(g::SV.C_S__20__21_2__id)))); }); _t11895 ? _t11895 : (bool)((((double)(({ rt::Value _o11893 = l_A__loc8_; C_S__60_6* _p11894 = rt::as_ptr<C_S__60_6>(_o11893); _p11894 ? _p11894->f_id : rt::touint(rt::dget(_o11893, NM_id)); }))) == ((double)(g::SV.C_S_5_26___id)))); }); _t11898 ? _t11898 : (bool)(({ rt::Value _o11896 = l_A__loc8_; C_S__60_6* _p11897 = rt::as_ptr<C_S__60_6>(_o11896); _p11897 ? _p11897->f_S_7_22_0 : rt::T(rt::dget(_o11896, NM_S_7_22_0)); })); }); _t11901 ? _t11901 : (bool)(rt::eq(({ rt::Value _o11899 = l_A__loc8_; C_S__60_6* _p11900 = rt::as_ptr<C_S__60_6>(_o11899); _p11900 ? _p11900->f_S__3f__21__3d_ : rt::dget(_o11899, NM_S__3f__21__3d_); }), rt::VS(g::LS[1275]))); }))) : _t11902; }) && (!rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 29.0), rt::V(1.0)))))) {
            if ((!(({ bool _t11907 = ({ rt::Value _o11903 = l_A__loc8_; C_S__60_6* _p11904 = rt::as_ptr<C_S__60_6>(_o11903); _p11904 ? _p11904->f_S__3c__21_7 : rt::T(rt::dget(_o11903, NM_S__3c__21_7)); }); _t11907 ? _t11907 : (bool)((!({ rt::Value _o11905 = l_A__loc8_; C_S__60_6* _p11906 = rt::as_ptr<C_S__60_6>(_o11905); _p11906 ? _p11906->f_S_3e : rt::T(rt::dget(_o11905, NM_S_3e)); }))); }) || (((double)(({ rt::Value _o11908 = l_A__loc8_; C_S__60_6* _p11909 = rt::as_ptr<C_S__60_6>(_o11908); _p11909 ? _p11909->f_S__2c__21_B : rt::toint(rt::dget(_o11908, NM_S__2c__21_B)); }))) == (-1.0))))) {
                if ((!((!rt::eq(({ rt::Value _o11910 = l_A__loc8_; C_S__60_6* _p11911 = rt::as_ptr<C_S__60_6>(_o11910); _p11911 ? _p11911->f_S__40_1 : rt::dget(_o11910, NM_S__40_1); }), rt::VS(g::LS[113]))) && rt::eq(({ rt::Value _o11912 = l_A__loc8_; C_S__60_6* _p11913 = rt::as_ptr<C_S__60_6>(_o11912); _p11913 ? _p11913->f_S__40_1 : rt::dget(_o11912, NM_S__40_1); }), l_A__loc3_)))) {
                    if ((!({ rt::Value _o11914 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p11915 = rt::as_ptr<C_S_8G>(_o11914); _p11915 ? _p11915->m_S_6M(l_A__loc8_, true, C_S_8G::dm_S_6M_2()) : rt::T(rt::dcallv(_o11914, NM_S_6M, l_A__loc8_, rt::VB(true))); }))) {
                        (l_A__loc3_ = rt::slot_string(({ rt::Value _o11916 = l_A__loc8_; C_S__60_6* _p11917 = rt::as_ptr<C_S__60_6>(_o11916); _p11917 ? _p11917->f_S__40_1 : rt::dget(_o11916, NM_S__40_1); })));
                    } else {
                        (l_A__loc7_ = rt::touint_d((((double)(l_A__loc7_)) + 1.0)));
                    }
                }
            }
        }
        (l_A__loc6_ = rt::toint_d((((double)(l_A__loc6_)) + 1.0)));
    }
    if ((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) {
        (l_A__loc6_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc6_)) < rt::alen(g::SV.C_S_8G__S__2d__21_4))) {
            (l_A__loc2_ = rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc6_))));
            if ((({ bool _t11920 = rt::is_class(l_A__loc2_, C_S__3b_E::CI); _t11920 ? (bool)((!(((double)(({ rt::Value _o11918 = l_A__loc2_; C_S__60_6* _p11919 = rt::as_ptr<C_S__60_6>(_o11918); _p11919 ? _p11919->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11918, NM_S__2d__21__5e_)); }))) == (-1.0)))) : _t11920; }) && rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 21.0), rt::V(1.0)))) {
                if ((!((({ bool _t11925 = (((double)(({ rt::Value _o11921 = l_A__loc2_; C_S__60_6* _p11922 = rt::as_ptr<C_S__60_6>(_o11921); _p11922 ? _p11922->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11921, NM_S__2d__21__5e_)); }))) == 10.0); _t11925 ? _t11925 : (bool)((((double)(({ rt::Value _o11923 = l_A__loc2_; C_S__60_6* _p11924 = rt::as_ptr<C_S__60_6>(_o11923); _p11924 ? _p11924->f_S__2d__21__5e_ : rt::toint(rt::dget(_o11923, NM_S__2d__21__5e_)); }))) == 9.0)); })) && (!C_S__26_c::sm_S__27__21__5f_())))) {
                    if (({ rt::Value _o11926 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p11927 = rt::as_ptr<C_S_8G>(_o11926); _p11927 ? _p11927->m_S__3b_T(l_A__loc2_, true, true) : rt::T(rt::dcallv(_o11926, NM_S__3b_T, l_A__loc2_, rt::VB(true), rt::VB(true))); })) {
                        (l_A__loc4_ = rt::touint_d((((double)(l_A__loc4_)) + ((double)(({ rt::Value _o11928 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p11929 = rt::as_ptr<C_S_8G>(_o11928); _p11929 ? _p11929->f_S__60__40_ : rt::toint(rt::dget(_o11928, NM_S__60__40_)); }))))));
                    }
                }
            }
            (l_A__loc6_ = rt::toint_d((((double)(l_A__loc6_)) + 1.0)));
        }
    }
    (g::SV.C_S_8G__S__3e__21_K = l_A__loc5_);
    (void)(({ rt::Value _o11930 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p11931 = rt::as_ptr<C_S_8G>(_o11930); _p11931 ? _p11931->m_S__20_R() : rt::dcallv(_o11930, NM_S__20_R); }));
    (void)(({ rt::Value _o11935 = (({ rt::Value _t11934 = ({ rt::Value _o11932 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11933 = rt::as_ptr<C_S__20_g>(_o11932); _p11933 ? _p11933->m_S__2b__21__2c_(rt::touint_d(8.0)) : rt::dcallv(_o11932, NM_S__2b__21__2c_, rt::V(8.0)); }); rt::is_class(_t11934, C_S__3e_F::CI) ? _t11934 : rt::NUL; })); C_S__3e_F* _p11936 = rt::as_ptr<C_S__3e_F>(_o11935); _p11936 ? _p11936->m_S_3H() : rt::dcallv(_o11935, NM_S_3H); }));
    (void)(({ rt::Value _o11937 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11938 = rt::as_ptr<C_S__20_g>(_o11937); _p11938 ? _p11938->m_S__21__21_G(C_S__20_g::dm_S__21__21_G_0()) : rt::dcallv(_o11937, NM_S__21__21_G); }));
    if (((((double)(l_A__loc7_)) > 0.0) && (((double)(l_A__loc4_)) > 0.0))) {
        (void)(({ rt::Value _o11939 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11940 = rt::as_ptr<C_S__20_g>(_o11939); _p11940 ? _p11940->m_S_3_21__2b_(rt::tr_nv(rt::VS(g::LS[3422]), rt::VS(g::LS[3423]), rt::V((double)(l_A__loc7_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc7_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::tr_nv(rt::VS(g::LS[3424]), rt::VS(g::LS[3425]), rt::V((double)(l_A__loc4_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc4_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), C_S__20_g::dm_S_3_21__2b__1()) : rt::dcallv(_o11939, NM_S_3_21__2b_, rt::tr_nv(rt::VS(g::LS[3422]), rt::VS(g::LS[3423]), rt::V((double)(l_A__loc7_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc7_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::tr_nv(rt::VS(g::LS[3424]), rt::VS(g::LS[3425]), rt::V((double)(l_A__loc4_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc4_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))); }));
    } else if ((((double)(l_A__loc7_)) > 0.0)) {
        (void)(({ rt::Value _o11941 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11942 = rt::as_ptr<C_S__20_g>(_o11941); _p11942 ? _p11942->m_S_3_21__2b_(rt::tr_nv(rt::VS(g::LS[3426]), rt::VS(g::LS[3427]), rt::V((double)(l_A__loc7_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc7_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), C_S__20_g::dm_S_3_21__2b__1()) : rt::dcallv(_o11941, NM_S_3_21__2b_, rt::tr_nv(rt::VS(g::LS[3426]), rt::VS(g::LS[3427]), rt::V((double)(l_A__loc7_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc7_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))); }));
    } else if ((((double)(l_A__loc4_)) > 0.0)) {
        (void)(({ rt::Value _o11943 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11944 = rt::as_ptr<C_S__20_g>(_o11943); _p11944 ? _p11944->m_S_3_21__2b_(rt::tr_nv(rt::VS(g::LS[3428]), rt::VS(g::LS[3429]), rt::V((double)(l_A__loc4_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc4_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), C_S__20_g::dm_S_3_21__2b__1()) : rt::dcallv(_o11943, NM_S_3_21__2b_, rt::tr_nv(rt::VS(g::LS[3428]), rt::VS(g::LS[3429]), rt::V((double)(l_A__loc4_)), C_S__26_c::sm_S_8_21_Z(((double)(l_A__loc4_)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))); }));
    } else if (rt::eq(rt::arr_at(g::SV.C_S_8G__S_4P, 21.0), rt::V(1.0))) {
        (void)(({ rt::Value _o11945 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11946 = rt::as_ptr<C_S__20_g>(_o11945); _p11946 ? _p11946->m_S_3_21__2b_(rt::tr_nv(rt::VS(g::LS[3422]), rt::VS(g::LS[3423]), rt::V(0.0), rt::VS(g::LS[151]), rt::tr_nv(rt::VS(g::LS[3424]), rt::VS(g::LS[3425]), rt::V(0.0), rt::VS(g::LS[151]))), C_S__20_g::dm_S_3_21__2b__1()) : rt::dcallv(_o11945, NM_S_3_21__2b_, rt::tr_nv(rt::VS(g::LS[3422]), rt::VS(g::LS[3423]), rt::V(0.0), rt::VS(g::LS[151]), rt::tr_nv(rt::VS(g::LS[3424]), rt::VS(g::LS[3425]), rt::V(0.0), rt::VS(g::LS[151])))); }));
    } else {
        (void)(({ rt::Value _o11947 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p11948 = rt::as_ptr<C_S__20_g>(_o11947); _p11948 ? _p11948->m_S_3_21__2b_(rt::tr_nv(rt::VS(g::LS[3426]), rt::VS(g::LS[3427]), rt::V(0.0), rt::VS(g::LS[151])), C_S__20_g::dm_S_3_21__2b__1()) : rt::dcallv(_o11947, NM_S_3_21__2b_, rt::tr_nv(rt::VS(g::LS[3426]), rt::VS(g::LS[3427]), rt::V(0.0), rt::VS(g::LS[151]))); }));
    }
    return rt::NUL;
}
rt::Value C_S__5b_0::m_S__2b_i(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__5b_0.S__2b_i");
    if ((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) {
        return rt::NUL;
    }
    (void)(({ rt::Value _o11949 = g::SV.C_S__5b_0__S__3f__21__20_; C_S__22__3f_* _p11950 = rt::as_ptr<C_S__22__3f_>(_o11949); _p11950 ? _p11950->m_S__20__21__2b_(C_S_2_25_::dm_S__20__21__2b__0()) : rt::dcallv(_o11949, NM_S__20__21__2b_); }));
    return rt::NUL;
}
rt::Value C_S__5b_0::m_S__2c__5b_(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__5b_0.S__2c__5b_");
    if ((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) {
        return rt::NUL;
    }
    (void)(({ rt::Value _o11951 = g::SV.C_S__5b_0__S__60__3e_; C_S__22__21_2* _p11952 = rt::as_ptr<C_S__22__21_2>(_o11951); _p11952 ? _p11952->m_S__20__21__2b_() : rt::dcallv(_o11951, NM_S__20__21__2b_); }));
    return rt::NUL;
}
C_S__5b_0* C_S__5b_0::alloc_() {
    C_S__5b_0* o = rt::make<C_S__5b_0>();
    return o;
}
rt::Value C_S__5b_0::mk_(rt::Value* a, int n) {
    C_S__5b_0* o = alloc_();
    o->C_S__5b_0::ctor_();
    return rt::VO(o);
}
bool C_S__5b_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5e__21_4: out = f_S__5e__21_4; return true;
    case NM_S__21__21_b: out = rt::V((double)(f_S__21__21_b)); return true;
    case NM_S__27__40_: out = rt::VB(f_S__27__40_); return true;
    case NM_S__2b__21_R: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21__5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_c: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__60__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b_i: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2c__5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__5b_0::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5e__21_4: f_S__5e__21_4 = v; return true;
    case NM_S__21__21_b: f_S__21__21_b = rt::toint(v); return true;
    case NM_S__27__40_: f_S__27__40_ = rt::T(v); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__5b_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_R: out = m_S__2b__21_R(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_21__5b_: out = m_S_8_21__5b_(); return true;
    case NM_S__21__21_c: out = m_S__21__21_c(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)); return true;
    case NM_S__60__2b_: out = m_S__60__2b_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__2b_i: out = m_S__2b_i(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__2c__5b_: out = m_S__2c__5b_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_S__5e__21_4: { rt::Value f = f_S__5e__21_4; out = rt::call_value(f, a, n); return true; }
    case NM_S__21__21_b: { rt::Value f = rt::V((double)(f_S__21__21_b)); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__40_: { rt::Value f = rt::VB(f_S__27__40_); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__5b_0::dmeth(int id) {
    switch (id) {
    case NM_S__2b__21_R: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_21__5b_: return true;
    case NM_S__21__21_c: return true;
    case NM_S__60__2b_: return true;
    case NM_S__2b_i: return true;
    case NM_S__2c__5b_: return true;
    case NM_S__5e__21_4: return false;
    case NM_S__21__21_b: return false;
    case NM_S__27__40_: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__5b_0::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S__60__3e_: out = g::SV.C_S__5b_0__S__60__3e_; return true;
    case NM_S__3f__21__20_: out = g::SV.C_S__5b_0__S__3f__21__20_; return true;
    default: return false;
    }
}
bool C_S__5b_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S__60__3e_: g::SV.C_S__5b_0__S__60__3e_ = v; return true;
    case NM_S__3f__21__20_: g::SV.C_S__5b_0__S__3f__21__20_ = v; return true;
    default: return false;
    }
}
bool C_S__5b_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__5b_::ctor_() {
    RT_FN("S__5b__5b_.S__5b__5b_");
    (void)(rt::NUL);
}
rt::Value C_S__5b__5b_::m_layoutTrackWithSingle() {
    double l_A__loc1_ = NAN;
    bool l_A__loc2_ = false;
    RT_FN("S__5b__5b_.layoutTrackWithSingle");
    (l_A__loc1_ = (rt::tonum(rt::dget(rt::VO(this), NM__maximum)) - rt::tonum(rt::dget(rt::VO(this), NM__minimum))));
    (l_A__loc2_ = ({ bool _t11953 = (l_A__loc1_ > 0.0); _t11953 ? (bool)((l_A__loc1_ < INFINITY)) : _t11953; }));
    ({ rt::Value _v11954 = (l_A__loc2_ ? this->f_S_1_2b_ : this->f_S_9_26_); rt::dset(rt::dget(rt::VO(this), NM_minimumTrack), NM_defaultSkin, _v11954); _v11954; });
    (void)(rt::dcallv(rt::VO(this), NM_layoutTrackWithSingle));
    return rt::NUL;
}
rt::Value C_S__5b__5b_::s_S__27_d(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__5b__5b_.S__27_d_set");
    ({ rt::Value _v11955 = l_param1; this->f_S_9_26_ = _v11955; _v11955; });
    return rt::NUL;
}
rt::Value C_S__5b__5b_::s_S_5_2d_(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("S__5b__5b_.S_5_2d__set");
    ({ rt::Value _v11956 = l_param1; this->f_S_1_2b_ = _v11956; _v11956; });
    return rt::NUL;
}
C_S__5b__5b_* C_S__5b__5b_::alloc_() {
    C_S__5b__5b_* o = rt::make<C_S__5b__5b_>();
    return o;
}
rt::Value C_S__5b__5b_::mk_(rt::Value* a, int n) {
    C_S__5b__5b_* o = alloc_();
    o->C_S__5b__5b_::ctor_();
    return rt::VO(o);
}
bool C_S__5b__5b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_26_: out = f_S_9_26_; return true;
    case NM_S_1_2b_: out = f_S_1_2b_; return true;
    case NM_layoutTrackWithSingle: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__5b__5b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_26_: f_S_9_26_ = v; return true;
    case NM_S_1_2b_: f_S_1_2b_ = v; return true;
    case NM_S__27_d: s_S__27_d(v); return true;
    case NM_S_5_2d_: s_S_5_2d_(v); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__5b__5b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_layoutTrackWithSingle: out = m_layoutTrackWithSingle(); return true;
    case NM_S_9_26_: { rt::Value f = f_S_9_26_; out = rt::call_value(f, a, n); return true; }
    case NM_S_1_2b_: { rt::Value f = f_S_1_2b_; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__5b__5b_::dmeth(int id) {
    switch (id) {
    case NM_layoutTrackWithSingle: return true;
    case NM_S__27_d: return false;
    case NM_S_5_2d_: return false;
    case NM_S_9_26_: return false;
    case NM_S_1_2b_: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__5b__5b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__5b_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__5b_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__5b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__21_V::ctor_() {
    RT_FN("S__25__21_V.S__25__21_V");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v11957 = 186.0; this->f_S_6_21_Z = rt::touint_d(_v11957); _v11957; });
    ({ rt::Value _v11958 = rt::trv(rt::VS(g::LS[3430])); this->f_S_1i = rt::slot_string(_v11958); _v11958; });
    ({ rt::Value _v11959 = rt::VS(g::LS[3431]); this->f_S__5e__21__23_ = rt::slot_string(_v11959); _v11959; });
    ({ rt::Value _v11960 = rt::VS(g::LS[3432]); this->f_S__3f__21__3d_ = rt::slot_string(_v11960); _v11960; });
    ({ rt::Value _v11961 = rt::VS(g::LS[3432]); this->f_S__40_1 = rt::slot_string(_v11961); _v11961; });
    ({ rt::Value _v11962 = rt::trv(rt::VS(g::LS[3433])); this->f_S_7_23_ = rt::slot_string(_v11962); _v11962; });
    ({ double _v11963 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v11963); _v11963; });
    ({ double _v11964 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v11964); _v11964; });
    ({ double _v11965 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v11965); _v11965; });
    ({ bool _v11966 = true; this->f_S__3c__60_ = _v11966; _v11966; });
}
int32_t C_S__25__21_V::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__25__21_V::dm_S_75_2() { return false; }
rt::Value C_S__25__21_V::dm_S_75_3() { return rt::NUL; }
double C_S__25__21_V::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__25__21_V.S_75");
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 4.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+27 : 4000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__25__21_V::g_S__2d_6() {
    RT_FN("S__25__21_V.S__2d_6_get");
    return ({ bool _t11967 = this->C_S__60_6::g_S__2d_6(); _t11967 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0)) : _t11967; });
    return false;
}
C_S__25__21_V* C_S__25__21_V::alloc_() {
    C_S__25__21_V* o = rt::make<C_S__25__21_V>();
    return o;
}
rt::Value C_S__25__21_V::mk_(rt::Value* a, int n) {
    C_S__25__21_V* o = alloc_();
    o->C_S__25__21_V::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_V::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__21_V::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__21_V::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__25__21_V::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__25__21_V::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__25__21_V::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__21_V::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__21_V::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21_V::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_V__id)); return true;
    case NM_ids: out = g::SV.C_S__25__21_V__ids; return true;
    default: return false;
    }
}
bool C_S__25__21_V::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_V__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__25__21_V__ids = v; return true;
    default: return false;
    }
}
bool C_S__25__21_V::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__22__3b_::ctor_() {
    RT_FN("S__25__22__3b_.S__25__22__3b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v11968 = 180.0; this->f_S_6_21_Z = rt::touint_d(_v11968); _v11968; });
    ({ rt::Value _v11969 = rt::trv(rt::VS(g::LS[3435])); this->f_S_1i = rt::slot_string(_v11969); _v11969; });
    ({ rt::Value _v11970 = rt::VS(g::LS[3436]); this->f_S__5e__21__23_ = rt::slot_string(_v11970); _v11970; });
    ({ double _v11971 = 5e+29; this->f_S__3e__3d_ = _v11971; _v11971; });
    ({ double _v11972 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v11972); _v11972; });
    ({ double _v11973 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v11973); _v11973; });
    ({ double _v11974 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v11974); _v11974; });
    ({ bool _v11975 = true; this->f_S__3c__60_ = _v11975; _v11975; });
    ({ double _v11976 = 8.0; this->f_S__21__22_E = rt::touint_d(_v11976); _v11976; });
}
rt::Value C_S__25__22__3b_::m_S__40__22_() {
    RT_FN("S__25__22__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3437]), C_S__26_c::sm_S_6_21_T(C_S__25__22__3b_::sm_S_2_21__40_(), 1.0, true)));
    return rt::NUL;
}
bool C_S__25__22__3b_::g_S__2d_6() {
    RT_FN("S__25__22__3b_.S__2d_6_get");
    return ({ bool _t11977 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 3.0); _t11977 ? _t11977 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3e__22__3e___id)); });
    return false;
}
double C_S__25__22__3b_::sm_S_2_21__40_() {
    RT_FN("S__25__22__3b_.S_2_21__40_");
    return (20.0 * rt::m_pow(((double)(C_S__26_c::sm_S__3f__26_(C_S__26_c::dsm_S__3f__26__0()))), 0.8));
    return 0.0;
}
C_S__25__22__3b_* C_S__25__22__3b_::alloc_() {
    C_S__25__22__3b_* o = rt::make<C_S__25__22__3b_>();
    return o;
}
rt::Value C_S__25__22__3b_::mk_(rt::Value* a, int n) {
    C_S__25__22__3b_* o = alloc_();
    o->C_S__25__22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__25__22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__22__3b_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S__25__22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22__3b___id)); return true;
    case NM_ids: out = g::SV.C_S__25__22__3b___ids; return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22__3b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__25__22__3b___ids = v; return true;
    default: return false;
    }
}
bool C_S__25__22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S__22__21__40_::ctor_() {
    RT_FN("S__22__21__40_.S__22__21__40_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v11978 = 187.0; this->f_S_6_21_Z = rt::touint_d(_v11978); _v11978; });
    ({ rt::Value _v11979 = rt::trv(rt::VS(g::LS[3439])); this->f_S_1i = rt::slot_string(_v11979); _v11979; });
    ({ rt::Value _v11980 = rt::VS(g::LS[3440]); this->f_S__5e__21__23_ = rt::slot_string(_v11980); _v11980; });
    ({ double _v11981 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v11981); _v11981; });
    ({ double _v11982 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v11982); _v11982; });
    ({ double _v11983 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v11983); _v11983; });
}
int32_t C_S__22__21__40_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__22__21__40_::dm_S_75_2() { return false; }
rt::Value C_S__22__21__40_::dm_S_75_3() { return rt::NUL; }
double C_S__22__21__40_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S__22__21__40_.S_75");
    (l_A__loc5_ = NAN);
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 4.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+30 : 15000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__22__21__40_::m_S__40__22_() {
    RT_FN("S__22__21__40_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3441]), ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? C_S__26_c::sm_S_6_21_T(C_S__22__21__40_::sm_S__27__21_b(), 1.0, true) : C_S__26_c::sm_S__25__22__3e_(C_S__22__21__40_::sm_S__27__21_b(), 1.0, rt::touint_d(0.0), rt::touint_d(5.0)))));
    return rt::NUL;
}
bool C_S__22__21__40_::g_S__2d_6() {
    RT_FN("S__22__21__40_.S__2d_6_get");
    return ({ bool _t11984 = C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[3442]))); _t11984 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t11984; });
    return false;
}
double C_S__22__21__40_::sm_S__27__21_b() {
    RT_FN("S__22__21__40_.S__27__21_b");
    return (0.25 * rt::m_pow(rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 12.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 12.0))), 0.75));
    return 0.0;
}
C_S__22__21__40_* C_S__22__21__40_::alloc_() {
    C_S__22__21__40_* o = rt::make<C_S__22__21__40_>();
    return o;
}
rt::Value C_S__22__21__40_::mk_(rt::Value* a, int n) {
    C_S__22__21__40_* o = alloc_();
    o->C_S__22__21__40_::ctor_();
    return rt::VO(o);
}
bool C_S__22__21__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22__21__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22__21__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__22__21__40_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__22__21__40_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__22__21__40_::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22__21__40_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22__21__40_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__22__21__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21__40___id)); return true;
    case NM_ids: out = g::SV.C_S__22__21__40___ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__21__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21__40___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__22__21__40___ids = v; return true;
    default: return false;
    }
}
bool C_S__22__21__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__22__22__3e_::ctor_() {
    RT_FN("S__22__22__3e_.S__22__22__3e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v11985 = 192.0; this->f_S_6_21_Z = rt::touint_d(_v11985); _v11985; });
    ({ rt::Value _v11986 = rt::trv(rt::VS(g::LS[3444])); this->f_S_1i = rt::slot_string(_v11986); _v11986; });
    ({ rt::Value _v11987 = rt::VS(g::LS[3445]); this->f_S__5e__21__23_ = rt::slot_string(_v11987); _v11987; });
    ({ double _v11988 = 5e+26; this->f_S__3e__3d_ = _v11988; _v11988; });
    ({ double _v11989 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v11989); _v11989; });
    ({ double _v11990 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v11990); _v11990; });
    ({ double _v11991 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v11991); _v11991; });
    ({ bool _v11992 = true; this->f_S__3c__60_ = _v11992; _v11992; });
    ({ double _v11993 = 6.0; this->f_S__21__22_E = rt::touint_d(_v11993); _v11993; });
}
rt::Value C_S__22__22__3e_::m_S__40__22_() {
    RT_FN("S__22__22__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3446]), C_S__26_c::sm_S_6_21_T(C_S__22__22__3e_::sm_S__27__21_b(), 1.0, true)));
    return rt::NUL;
}
bool C_S__22__22__3e_::g_S__2d_6() {
    RT_FN("S__22__22__3e_.S__2d_6_get");
    return ({ bool _t11994 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 2.0); _t11994 ? _t11994 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_5_22_A__id)); });
    return false;
}
double C_S__22__22__3e_::sm_S__27__21_b() {
    RT_FN("S__22__22__3e_.S__27__21_b");
    return (2.0 * rt::m_pow(rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 12.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 12.0))), 0.75));
    return 0.0;
}
C_S__22__22__3e_* C_S__22__22__3e_::alloc_() {
    C_S__22__22__3e_* o = rt::make<C_S__22__22__3e_>();
    return o;
}
rt::Value C_S__22__22__3e_::mk_(rt::Value* a, int n) {
    C_S__22__22__3e_* o = alloc_();
    o->C_S__22__22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__22__22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22__22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22__22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22__22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22__22__3e_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__22__22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__22__3e___id)); return true;
    case NM_ids: out = g::SV.C_S__22__22__3e___ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__22__3e___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__22__22__3e___ids = v; return true;
    default: return false;
    }
}
bool C_S__22__22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3e__22__3b_::ctor_() {
    RT_FN("S__3e__22__3b_.S__3e__22__3b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v11995 = 814.0; this->f_S_6_21_Z = rt::touint_d(_v11995); _v11995; });
    ({ rt::Value _v11996 = rt::trv(rt::VS(g::LS[3448])); this->f_S_1i = rt::slot_string(_v11996); _v11996; });
    ({ rt::Value _v11997 = rt::VS(g::LS[3449]); this->f_S__5e__21__23_ = rt::slot_string(_v11997); _v11997; });
    ({ double _v11998 = 1e+90; this->f_S__23__21_m = _v11998; _v11998; });
    ({ double _v11999 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v11999); _v11999; });
    ({ double _v12000 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12000); _v12000; });
    ({ double _v12001 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12001); _v12001; });
    ({ bool _v12002 = true; this->f_S__21__21_n = _v12002; _v12002; });
    ({ double _v12003 = 12.0; this->f_S__21__22_E = rt::touint_d(_v12003); _v12003; });
}
rt::Value C_S__3e__22__3b_::m_S__40__22_() {
    RT_FN("S__3e__22__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3450]), C_S__26_c::sm_S_6_21_T(C_S__3e__22__3b_::sm_S__26_s(), 3.0, true)));
    return rt::NUL;
}
bool C_S__3e__22__3b_::g_S__2d_6() {
    RT_FN("S__3e__22__3b_.S__2d_6_get");
    return ({ bool _t12005 = ({ bool _t12004 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 4.0); _t12004 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__21__21_p__id)) : _t12004; }); _t12005 ? _t12005 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_4_22__40___id)); });
    return false;
}
bool C_S__3e__22__3b_::g_S_9_21__25_() {
    RT_FN("S__3e__22__3b_.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S__3e__22__3b_::sm_S__26_s() {
    RT_FN("S__3e__22__3b_.S__26_s");
    return (2.25 * rt::m_pow(rt::m_log((1.0 + rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 133.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 133.0))))), 2.25));
    return 0.0;
}
C_S__3e__22__3b_* C_S__3e__22__3b_::alloc_() {
    C_S__3e__22__3b_* o = rt::make<C_S__3e__22__3b_>();
    return o;
}
rt::Value C_S__3e__22__3b_::mk_(rt::Value* a, int n) {
    C_S__3e__22__3b_* o = alloc_();
    o->C_S__3e__22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e__22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e__22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e__22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e__22__3b_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3e__22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22__3b___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22__3b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3f__22_D::ctor_() {
    RT_FN("S__3f__22_D.S__3f__22_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12006 = 188.0; this->f_S_6_21_Z = rt::touint_d(_v12006); _v12006; });
    ({ rt::Value _v12007 = rt::trv(rt::VS(g::LS[3451])); this->f_S_1i = rt::slot_string(_v12007); _v12007; });
    ({ rt::Value _v12008 = rt::VS(g::LS[3452]); this->f_S__5e__21__23_ = rt::slot_string(_v12008); _v12008; });
    ({ double _v12009 = 5e+24; this->f_S__3e__3d_ = _v12009; _v12009; });
    ({ double _v12010 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12010); _v12010; });
    ({ double _v12011 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12011); _v12011; });
    ({ double _v12012 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12012); _v12012; });
    ({ bool _v12013 = true; this->f_S__3c__60_ = _v12013; _v12013; });
    ({ double _v12014 = 4.0; this->f_S__21__22_E = rt::touint_d(_v12014); _v12014; });
}
rt::Value C_S__3f__22_D::m_S__40__22_() {
    RT_FN("S__3f__22_D.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3453]), C_S__26_c::sm_S_6_21_T(C_S__3f__22_D::sm_S__26_s(), 1.0, true)));
    return rt::NUL;
}
bool C_S__3f__22_D::g_S__2d_6() {
    RT_FN("S__3f__22_D.S__2d_6_get");
    return ({ bool _t12015 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 2.0); _t12015 ? _t12015 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_5_22_A__id)); });
    return false;
}
double C_S__3f__22_D::sm_S__26_s() {
    RT_FN("S__3f__22_D.S__26_s");
    return (0.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sg_S__40_e())), 1.7));
    return 0.0;
}
C_S__3f__22_D* C_S__3f__22_D::alloc_() {
    C_S__3f__22_D* o = rt::make<C_S__3f__22_D>();
    return o;
}
rt::Value C_S__3f__22_D::mk_(rt::Value* a, int n) {
    C_S__3f__22_D* o = alloc_();
    o->C_S__3f__22_D::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__22_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__22_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__22_D::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3f__22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22_D__id)); return true;
    case NM_ids: out = g::SV.C_S__3f__22_D__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22_D__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f__22_D__ids = v; return true;
    default: return false;
    }
}
bool C_S__3f__22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__27__21_o::ctor_() {
    RT_FN("S__27__21_o.S__27__21_o");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12016 = 776.0; this->f_S_6_21_Z = rt::touint_d(_v12016); _v12016; });
    ({ rt::Value _v12017 = rt::trv(rt::VS(g::LS[3455])); this->f_S_1i = rt::slot_string(_v12017); _v12017; });
    ({ rt::Value _v12018 = rt::VS(g::LS[3456]); this->f_S__5e__21__23_ = rt::slot_string(_v12018); _v12018; });
    ({ rt::Value _v12019 = rt::VS(g::LS[3432]); this->f_S__3f__21__3d_ = rt::slot_string(_v12019); _v12019; });
    ({ rt::Value _v12020 = rt::VS(g::LS[3432]); this->f_S__40_1 = rt::slot_string(_v12020); _v12020; });
    ({ double _v12021 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12021); _v12021; });
    ({ double _v12022 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12022); _v12022; });
    ({ double _v12023 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12023); _v12023; });
    ({ bool _v12024 = true; this->f_S__21__21_n = _v12024; _v12024; });
    ({ bool _v12025 = true; this->f_S_4W = _v12025; _v12025; });
}
rt::Value C_S__27__21_o::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__27__21_o.S__40__22_");
    (l_A__loc1_ = rt::slot_string(((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0) ? rt::add(rt::trv(rt::VS(g::LS[3433])), rt::VS(g::LS[8])) : rt::VS(g::LS[113]))));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 105.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[3457])))));
        if (((((double)(g::SV.C_S__27__21_o__S__3e__23_)) >= 0.0) && (((double)(g::SV.C_S__27__21_o__S__3e__23_)) <= 15.0))) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[3458]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(g::SV.C_S__27__21_o__S__3e__23_))), C_S__26_c::sm_S_8_21_Z(C_S__27__21_o::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
        }
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
int32_t C_S__27__21_o::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__27__21_o::dm_S_75_2() { return false; }
rt::Value C_S__27__21_o::dm_S_75_3() { return rt::NUL; }
double C_S__27__21_o::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__27__21_o.S_75");
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 4.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+33 : 1e+18);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__27__21_o::m_S_5z(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S__27__21_o.S_5z");
    (void)(this->C_S__60_6::m_S_5z(l_param1));
    if ((((double)(C_S_8G::sg_S_8_21_H())) >= 105.0)) {
        (void)(C_S__27__21_o::sm_S__2c__21_s(l_param1));
    }
    return rt::NUL;
}
uint32_t C_S__27__21_o::dm_S__22__21_t_0() { return rt::touint_d(1.0); }
rt::Value C_S__27__21_o::m_S__22__21_t(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S__27__21_o.S__22__21_t");
    (g::SV.C_S__27__21_o__S__3e__23_ = ((int32_t)(({ rt::Value _o12027 = this->f_S_9_21__27_; C_S_7_21__20_* _p12028 = rt::as_ptr<C_S_7_21__20_>(_o12027); _p12028 ? _p12028->m_S__5d_Q(0.0, ((({ bool _t12026 = C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_z__id); _t12026 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__60__21_z__id)) : _t12026; }) && C_S_8G::sm_S__3c_P(g::SV.C_S__27__21_z__id)) ? 15.0 : 12.0)) : rt::touint(rt::dcallv(_o12027, NM_S__5d_Q, rt::V(0.0), rt::V(((({ bool _t12029 = C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_z__id); _t12029 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__60__21_z__id)) : _t12029; }) && C_S_8G::sm_S__3c_P(g::SV.C_S__27__21_z__id)) ? 15.0 : 12.0)))); }))));
    return rt::NUL;
}
rt::Value C_S__27__21_o::m_S_6r() {
    RT_FN("S__27__21_o.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (g::SV.C_S__27__21_o__S__3d__21__25_ = rt::touint_d(0.0));
    (g::SV.C_S__27__21_o__S__3e__23_ = rt::toint_d((-1.0)));
    (void)(this->m_S__22__21_t(rt::touint_d(1.0)));
    return rt::NUL;
}
rt::Value C_S__27__21_o::m_S__3d_u() {
    RT_FN("S__27__21_o.S__3d_u");
    (void)(this->C_S__60_6::m_S__3d_u());
    (g::SV.C_S__27__21_o__S__3d__21__25_ = rt::touint_d(0.0));
    (g::SV.C_S__27__21_o__S__3e__23_ = rt::toint_d((-1.0)));
    return rt::NUL;
}
bool C_S__27__21_o::g_S__2d_6() {
    RT_FN("S__27__21_o.S__2d_6_get");
    return ({ bool _t12032 = ({ bool _t12031 = ({ bool _t12030 = this->C_S__60_6::g_S__2d_6(); _t12030 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0)) : _t12030; }); _t12031 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t12031; }); _t12032 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__21__21_p__id)) : _t12032; });
    return false;
}
double C_S__27__21_o::sm_S_9L() {
    RT_FN("S__27__21_o.S_9L");
    return (40.0 + (0.4 * rt::m_pow(C_S__26_c::sm_S__22__21_B(C_S__26_c::sm_S__3b__21_4(g::SV.C_S__27__21_o__S__3e__23_), true, C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.4)));
    return 0.0;
}
rt::Value C_S__27__21_o::sm_S__2c__21_s(uint32_t p0) {
    uint32_t l_param1 = p0;
    rt::Value l_A__loc2_ = rt::UNDEF;
    RT_FN("S__27__21_o.S__2c__21_s");
    (l_A__loc2_ = rt::V(0.0));
    (g::SV.C_S__27__21_o__S__3d__21__25_ = rt::touint_d((((double)(g::SV.C_S__27__21_o__S__3d__21__25_)) + ((double)(l_param1)))));
    if ((((double)(g::SV.C_S__27__21_o__S__3d__21__25_)) >= 5400.0)) {
        (l_A__loc2_ = rt::V((double)(rt::touint_d(rt::m_floor((((double)(g::SV.C_S__27__21_o__S__3d__21__25_)) / 5400.0))))));
        (g::SV.C_S__27__21_o__S__3d__21__25_ = rt::touint_d((((double)(g::SV.C_S__27__21_o__S__3d__21__25_)) - (rt::tonum(l_A__loc2_) * 5400.0))));
        (void)(({ rt::Value _o12034 = (({ rt::Value _t12033 = C_S_8G::sm_S__21__21_H(g::SV.C_S__27__21_o__id); rt::is_class(_t12033, C_S__27__21_o::CI) ? _t12033 : rt::NUL; })); C_S__27__21_o* _p12035 = rt::as_ptr<C_S__27__21_o>(_o12034); _p12035 ? _p12035->m_S__22__21_t(rt::touint(l_A__loc2_)) : rt::dcallv(_o12034, NM_S__22__21_t, l_A__loc2_); }));
    }
    return rt::NUL;
}
C_S__27__21_o* C_S__27__21_o::alloc_() {
    C_S__27__21_o* o = rt::make<C_S__27__21_o>();
    return o;
}
rt::Value C_S__27__21_o::mk_(rt::Value* a, int n) {
    C_S__27__21_o* o = alloc_();
    o->C_S__27__21_o::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_o::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_5z: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__22__21_t: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d_u: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__21_o::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__21_o::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__27__21_o::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__27__21_o::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__27__21_o::dm_S_75_3()))); return true;
    case NM_S_5z: out = m_S_5z(rt::arg<uint32_t>(a, n, 0, 0u)); return true;
    case NM_S__22__21_t: out = m_S__22__21_t(rt::arg<uint32_t>(a, n, 0, C_S__27__21_o::dm_S__22__21_t_0())); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__3d_u: out = m_S__3d_u(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__21_o::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S_5z: return true;
    case NM_S__22__21_t: return true;
    case NM_S_6r: return true;
    case NM_S__3d_u: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__21_o::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    case NM_S__2c__21_s: return true;
    default: return false;
    }
}
bool C_S__27__21_o::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21_o__id)); return true;
    case NM_S__3d__21__25_: out = rt::V((double)(g::SV.C_S__27__21_o__S__3d__21__25_)); return true;
    case NM_S__40__21_B: out = rt::V((double)(g::SV.C_S__27__21_o__S__40__21_B)); return true;
    case NM_S__3e__23_: out = rt::V((double)(g::SV.C_S__27__21_o__S__3e__23_)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__21_o::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21_o__id = rt::touint(v); return true;
    case NM_S__3d__21__25_: g::SV.C_S__27__21_o__S__3d__21__25_ = rt::touint(v); return true;
    case NM_S__40__21_B: g::SV.C_S__27__21_o__S__40__21_B = rt::touint(v); return true;
    case NM_S__3e__23_: g::SV.C_S__27__21_o__S__3e__23_ = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S__27__21_o::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    case NM_S__2c__21_s: out = sm_S__2c__21_s(rt::arg<uint32_t>(a, n, 0, 0u)); return true;
    default: return false;
    }
}
void C_S__27__21_w::ctor_() {
    RT_FN("S__27__21_w.S__27__21_w");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12036 = 868.0; this->f_S_6_21_Z = rt::touint_d(_v12036); _v12036; });
    ({ rt::Value _v12037 = rt::trv(rt::VS(g::LS[3459])); this->f_S_1i = rt::slot_string(_v12037); _v12037; });
    ({ rt::Value _v12038 = rt::VS(g::LS[3460]); this->f_S__5e__21__23_ = rt::slot_string(_v12038); _v12038; });
    ({ double _v12039 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12039); _v12039; });
    ({ double _v12040 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12040); _v12040; });
    ({ double _v12041 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12041); _v12041; });
    ({ double _v12042 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12042); _v12042; });
    ({ bool _v12043 = true; this->f_S__25__21__3e_ = _v12043; _v12043; });
}
int32_t C_S__27__21_w::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__27__21_w::dm_S_75_2() { return false; }
rt::Value C_S__27__21_w::dm_S_75_3() { return rt::NUL; }
double C_S__27__21_w::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S__27__21_w.S_75");
    (l_A__loc5_ = NAN);
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 4.0))) {
        return 1e+24;
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__27__21_w::m_S__40__22_() {
    RT_FN("S__27__21_w.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::trv(rt::VS(g::LS[3461]), C_S__26_c::sm_S_8_21_Z(C_S__27__21_w::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[1798]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[1799]))));
    return rt::NUL;
}
bool C_S__27__21_w::g_S__2d_6() {
    RT_FN("S__27__21_w.S__2d_6_get");
    return ({ bool _t12047 = C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[3462]))); _t12047 ? (bool)((({ bool _t12046 = this->f_S__3f__21_6; _t12046 ? _t12046 : (bool)((({ rt::Value _o12044 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id); C_S_84* _p12045 = rt::as_ptr<C_S_84>(_o12044); _p12045 ? _p12045->g_S__3f_j() : rt::tonum(rt::dget(_o12044, NM_S__3f_j)); }) >= 3600.0)); }))) : _t12047; });
    return false;
}
double C_S__27__21_w::sm_S_5_21_B() {
    RT_FN("S__27__21_w.S_5_21_B");
    return (((2.25 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.8)) * C_S__26_c::sm_S__40__22__27_(g::SV.C_S__2d_H__id, rt::toint_d(8.0))) * ((1.0 + (0.01 * C_S_1_21_v::sm_S__2c__21_G(((int32_t)(g::SV.C_S__27__21_w__id)))))));
    return 0.0;
}
C_S__27__21_w* C_S__27__21_w::alloc_() {
    C_S__27__21_w* o = rt::make<C_S__27__21_w>();
    return o;
}
rt::Value C_S__27__21_w::mk_(rt::Value* a, int n) {
    C_S__27__21_w* o = alloc_();
    o->C_S__27__21_w::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_w::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__21_w::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__21_w::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__27__21_w::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__27__21_w::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__27__21_w::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__21_w::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__21_w::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    default: return false;
    }
}
bool C_S__27__21_w::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21_w__id)); return true;
    case NM_S_0_22_K: out = rt::V(g::SV.C_S__27__21_w__S_0_22_K); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__21_w::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21_w__id = rt::touint(v); return true;
    case NM_S_0_22_K: g::SV.C_S__27__21_w__S_0_22_K = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__27__21_w::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    default: return false;
    }
}
void C_S__27__22__40_::ctor_() {
    RT_FN("S__27__22__40_.S__27__22__40_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12048 = 815.0; this->f_S_6_21_Z = rt::touint_d(_v12048); _v12048; });
    ({ rt::Value _v12049 = rt::trv(rt::VS(g::LS[3463])); this->f_S_1i = rt::slot_string(_v12049); _v12049; });
    ({ rt::Value _v12050 = rt::VS(g::LS[3464]); this->f_S__5e__21__23_ = rt::slot_string(_v12050); _v12050; });
    ({ double _v12051 = 1e+75; this->f_S__23__21_m = _v12051; _v12051; });
    ({ double _v12052 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12052); _v12052; });
    ({ double _v12053 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12053); _v12053; });
    ({ double _v12054 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12054); _v12054; });
    ({ bool _v12055 = true; this->f_S__21__21_n = _v12055; _v12055; });
    ({ double _v12056 = 11.0; this->f_S__21__22_E = rt::touint_d(_v12056); _v12056; });
}
rt::Value C_S__27__22__40_::m_S__40__22_() {
    RT_FN("S__27__22__40_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[3465]), C_S__26_c::sm_S_6_21_T(C_S__27__22__40_::sm_S__26_s(), 3.0, true)), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[3466]), C_S__26_c::sm_S_8_21_Z(C_S__27__22__40_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
bool C_S__27__22__40_::g_S__2d_6() {
    RT_FN("S__27__22__40_.S__2d_6_get");
    return ({ bool _t12058 = ({ bool _t12057 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 4.0); _t12057 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__21__21_p__id)) : _t12057; }); _t12058 ? _t12058 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_4_22__40___id)); });
    return false;
}
bool C_S__27__22__40_::g_S_9_21__25_() {
    RT_FN("S__27__22__40_.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S__27__22__40_::sm_S__26_s() {
    RT_FN("S__27__22__40_.S__26_s");
    return (0.7 * rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__25__21_J__id, C_S__26_c::dsm_S_1_21__3b__1()), 0.7));
    return 0.0;
}
double C_S__27__22__40_::sm_S__2c__21_G() {
    RT_FN("S__27__22__40_.S__2c__21_G");
    return 100.0;
    return 0.0;
}
C_S__27__22__40_* C_S__27__22__40_::alloc_() {
    C_S__27__22__40_* o = rt::make<C_S__27__22__40_>();
    return o;
}
rt::Value C_S__27__22__40_::mk_(rt::Value* a, int n) {
    C_S__27__22__40_* o = alloc_();
    o->C_S__27__22__40_::ctor_();
    return rt::VO(o);
}
bool C_S__27__22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__22__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__22__40_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__27__22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22__40___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22__40___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__2c__22__3f_::ctor_() {
    RT_FN("S__2c__22__3f_.S__2c__22__3f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12059 = 181.0; this->f_S_6_21_Z = rt::touint_d(_v12059); _v12059; });
    ({ rt::Value _v12060 = rt::trv(rt::VS(g::LS[3467])); this->f_S_1i = rt::slot_string(_v12060); _v12060; });
    ({ rt::Value _v12061 = rt::VS(g::LS[3468]); this->f_S__5e__21__23_ = rt::slot_string(_v12061); _v12061; });
    ({ double _v12062 = 5e+22; this->f_S__3e__3d_ = _v12062; _v12062; });
    ({ double _v12063 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12063); _v12063; });
    ({ double _v12064 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12064); _v12064; });
    ({ double _v12065 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12065); _v12065; });
    ({ bool _v12066 = true; this->f_S__3c__60_ = _v12066; _v12066; });
    ({ double _v12067 = 3.0; this->f_S__21__22_E = rt::touint_d(_v12067); _v12067; });
}
rt::Value C_S__2c__22__3f_::m_S__40__22_() {
    RT_FN("S__2c__22__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3469]), C_S__26_c::sm_S_8_21_Z(C_S__2c__22__3f_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2c__22__3f_::g_S__2d_6() {
    RT_FN("S__2c__22__3f_.S__2d_6_get");
    return ({ bool _t12068 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 1.0); _t12068 ? _t12068 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_1_22_C__id)); });
    return false;
}
double C_S__2c__22__3f_::sm_S_9L() {
    RT_FN("S__2c__22__3f_.S_9L");
    return (((C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__2d_q__id) ? 1.0 : 0.6)) * rt::m_pow(rt::m_max2(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 39.0))), (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__2d_q__id) ? 0.7 : 0.6)));
    return 0.0;
}
C_S__2c__22__3f_* C_S__2c__22__3f_::alloc_() {
    C_S__2c__22__3f_* o = rt::make<C_S__2c__22__3f_>();
    return o;
}
rt::Value C_S__2c__22__3f_::mk_(rt::Value* a, int n) {
    C_S__2c__22__3f_* o = alloc_();
    o->C_S__2c__22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__22__3f_::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__2c__22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22__3f___id)); return true;
    case NM_ids: out = g::SV.C_S__2c__22__3f___ids; return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22__3f___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c__22__3f___ids = v; return true;
    default: return false;
    }
}
bool C_S__2c__22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__2c__3d_::ctor_() {
    RT_FN("S__2c__3d_.S__2c__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12069 = 185.0; this->f_S_6_21_Z = rt::touint_d(_v12069); _v12069; });
    ({ rt::Value _v12070 = rt::trv(rt::VS(g::LS[3471])); this->f_S_1i = rt::slot_string(_v12070); _v12070; });
    ({ rt::Value _v12071 = rt::VS(g::LS[3472]); this->f_S__5e__21__23_ = rt::slot_string(_v12071); _v12071; });
    ({ rt::Value _v12072 = rt::VS(g::LS[3432]); this->f_S__3f__21__3d_ = rt::slot_string(_v12072); _v12072; });
    ({ rt::Value _v12073 = rt::VS(g::LS[3432]); this->f_S__40_1 = rt::slot_string(_v12073); _v12073; });
    ({ rt::Value _v12074 = rt::trv(rt::VS(g::LS[3433])); this->f_S_7_23_ = rt::slot_string(_v12074); _v12074; });
    ({ double _v12075 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12075); _v12075; });
    ({ double _v12076 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12076); _v12076; });
    ({ double _v12077 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12077); _v12077; });
    ({ bool _v12078 = true; this->f_S__3c__60_ = _v12078; _v12078; });
}
int32_t C_S__2c__3d_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__2c__3d_::dm_S_75_2() { return false; }
rt::Value C_S__2c__3d_::dm_S_75_3() { return rt::NUL; }
double C_S__2c__3d_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__2c__3d_.S_75");
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 4.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+21 : 1000.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__2c__3d_::g_S__2d_6() {
    RT_FN("S__2c__3d_.S__2d_6_get");
    return ({ bool _t12079 = this->C_S__60_6::g_S__2d_6(); _t12079 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0)) : _t12079; });
    return false;
}
C_S__2c__3d_* C_S__2c__3d_::alloc_() {
    C_S__2c__3d_* o = rt::make<C_S__2c__3d_>();
    return o;
}
rt::Value C_S__2c__3d_::mk_(rt::Value* a, int n) {
    C_S__2c__3d_* o = alloc_();
    o->C_S__2c__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__2c__3d_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__2c__3d_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__2c__3d_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__3d_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__3d___id)); return true;
    case NM_ids: out = g::SV.C_S__2c__3d___ids; return true;
    default: return false;
    }
}
bool C_S__2c__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__3d___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c__3d___ids = v; return true;
    default: return false;
    }
}
bool C_S__2c__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_22__3c_::ctor_() {
    RT_FN("S_1_22__3c_.S_1_22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12080 = 190.0; this->f_S_6_21_Z = rt::touint_d(_v12080); _v12080; });
    ({ rt::Value _v12081 = rt::trv(rt::VS(g::LS[3474])); this->f_S_1i = rt::slot_string(_v12081); _v12081; });
    ({ rt::Value _v12082 = rt::VS(g::LS[3475]); this->f_S__5e__21__23_ = rt::slot_string(_v12082); _v12082; });
    ({ double _v12083 = 5e+28; this->f_S__3e__3d_ = _v12083; _v12083; });
    ({ double _v12084 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12084); _v12084; });
    ({ double _v12085 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12085); _v12085; });
    ({ double _v12086 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12086); _v12086; });
    ({ bool _v12087 = true; this->f_S__3c__60_ = _v12087; _v12087; });
    ({ double _v12088 = 7.0; this->f_S__21__22_E = rt::touint_d(_v12088); _v12088; });
}
rt::Value C_S_1_22__3c_::m_S__40__22_() {
    RT_FN("S_1_22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3476]), C_S__26_c::sm_S_8_21_Z(C_S_1_22__3c_::sm_S_2_21_W(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_1_22__3c_::g_S__2d_6() {
    RT_FN("S_1_22__3c_.S__2d_6_get");
    return ({ bool _t12089 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 3.0); _t12089 ? _t12089 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3e__22__3e___id)); });
    return false;
}
double C_S_1_22__3c_::sm_S_2_21_W() {
    RT_FN("S_1_22__3c_.S_2_21_W");
    return (3.0 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.4));
    return 0.0;
}
C_S_1_22__3c_* C_S_1_22__3c_::alloc_() {
    C_S_1_22__3c_* o = rt::make<C_S_1_22__3c_>();
    return o;
}
rt::Value C_S_1_22__3c_::mk_(rt::Value* a, int n) {
    C_S_1_22__3c_* o = alloc_();
    o->C_S_1_22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S_1_22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_1_22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_1_22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_1_22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_1_22__3c_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21_W: return true;
    default: return false;
    }
}
bool C_S_1_22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22__3c___id)); return true;
    case NM_ids: out = g::SV.C_S_1_22__3c___ids; return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22__3c___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_1_22__3c___ids = v; return true;
    default: return false;
    }
}
bool C_S_1_22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    default: return false;
    }
}
void C_S_2_22__3b_::ctor_() {
    RT_FN("S_2_22__3b_.S_2_22__3b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12090 = 193.0; this->f_S_6_21_Z = rt::touint_d(_v12090); _v12090; });
    ({ rt::Value _v12091 = rt::trv(rt::VS(g::LS[3478])); this->f_S_1i = rt::slot_string(_v12091); _v12091; });
    ({ rt::Value _v12092 = rt::VS(g::LS[3479]); this->f_S__5e__21__23_ = rt::slot_string(_v12092); _v12092; });
    ({ double _v12093 = 5e+20; this->f_S__3e__3d_ = _v12093; _v12093; });
    ({ double _v12094 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12094); _v12094; });
    ({ double _v12095 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12095); _v12095; });
    ({ double _v12096 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12096); _v12096; });
    ({ bool _v12097 = true; this->f_S__3c__60_ = _v12097; _v12097; });
    ({ double _v12098 = 1.0; this->f_S__21__22_E = rt::touint_d(_v12098); _v12098; });
}
rt::Value C_S_2_22__3b_::m_S__40__22_() {
    RT_FN("S_2_22__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3480]), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o12099 = C_S_8G::sm_S__2d_e(rt::toint_d(8.0)); C_S__60__21__3b_* _p12100 = rt::as_ptr<C_S__60__21__3b_>(_o12099); _p12100 ? _p12100->f_id : rt::touint(rt::dget(_o12099, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_6_21_T(C_S_2_22__3b_::sm_S__26_s(), 1.0, true)));
    return rt::NUL;
}
bool C_S_2_22__3b_::g_S__2d_6() {
    RT_FN("S_2_22__3b_.S__2d_6_get");
    return ({ bool _t12101 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 1.0); _t12101 ? _t12101 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_1_22_C__id)); });
    return false;
}
double C_S_2_22__3b_::sm_S__26_s() {
    RT_FN("S_2_22__3b_.S__26_s");
    return (50.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), 3.0));
    return 0.0;
}
C_S_2_22__3b_* C_S_2_22__3b_::alloc_() {
    C_S_2_22__3b_* o = rt::make<C_S_2_22__3b_>();
    return o;
}
rt::Value C_S_2_22__3b_::mk_(rt::Value* a, int n) {
    C_S_2_22__3b_* o = alloc_();
    o->C_S_2_22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S_2_22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2_22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2_22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2_22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2_22__3b_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_2_22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22__3b___id)); return true;
    case NM_ids: out = g::SV.C_S_2_22__3b___ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22__3b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_2_22__3b___ids = v; return true;
    default: return false;
    }
}
bool C_S_2_22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_8_22__3e_::ctor_() {
    RT_FN("S_8_22__3e_.S_8_22__3e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12102 = 786.0; this->f_S_6_21_Z = rt::touint_d(_v12102); _v12102; });
    ({ rt::Value _v12103 = rt::trv(rt::VS(g::LS[3482])); this->f_S_1i = rt::slot_string(_v12103); _v12103; });
    ({ rt::Value _v12104 = rt::VS(g::LS[3483]); this->f_S__5e__21__23_ = rt::slot_string(_v12104); _v12104; });
    ({ double _v12105 = 1e+60; this->f_S__23__21_m = _v12105; _v12105; });
    ({ double _v12106 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12106); _v12106; });
    ({ double _v12107 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12107); _v12107; });
    ({ double _v12108 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12108); _v12108; });
    ({ bool _v12109 = true; this->f_S__21__21_n = _v12109; _v12109; });
    ({ double _v12110 = 10.0; this->f_S__21__22_E = rt::touint_d(_v12110); _v12110; });
}
rt::Value C_S_8_22__3e_::m_S__40__22_() {
    RT_FN("S_8_22__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3484]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_M__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S_8_22__3e_::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__23__21_R((900.0 - rt::mod(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0)), 900.0)), C_S__26_c::dsm_S__23__21_R_1(), C_S__26_c::dsm_S__23__21_R_2())));
    return rt::NUL;
}
bool C_S_8_22__3e_::g_S__2d_6() {
    RT_FN("S_8_22__3e_.S__2d_6_get");
    return ({ bool _t12112 = ({ bool _t12111 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 4.0); _t12111 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S__21__21_p__id)) : _t12111; }); _t12112 ? _t12112 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_4_22__40___id)); });
    return false;
}
bool C_S_8_22__3e_::g_S_9_21__25_() {
    RT_FN("S_8_22__3e_.S_9_21__25__get");
    return (((double)(C_S_8G::sg_S__2c_P())) >= 2.0);
    return false;
}
double C_S_8_22__3e_::sm_S__23__21_Y() {
    RT_FN("S_8_22__3e_.S__23__21_Y");
    return ((rt::mod(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0)), 900.0) / 60.0) * rt::m_pow(C_S_8G::sm_S__5e__22_C(g::SV.C_S__3e__21_M__id, rt::toint_d(0.0), C_S_8G::dsm_S__5e__22_C_2()), 0.6));
    return 0.0;
}
C_S_8_22__3e_* C_S_8_22__3e_::alloc_() {
    C_S_8_22__3e_* o = rt::make<C_S_8_22__3e_>();
    return o;
}
rt::Value C_S_8_22__3e_::mk_(rt::Value* a, int n) {
    C_S_8_22__3e_* o = alloc_();
    o->C_S_8_22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S_8_22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_22__3e_::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S_8_22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22__3e___id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S_9_22_9::ctor_() {
    RT_FN("S_9_22_9.S_9_22_9");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12113 = 182.0; this->f_S_6_21_Z = rt::touint_d(_v12113); _v12113; });
    ({ rt::Value _v12114 = rt::trv(rt::VS(g::LS[3485])); this->f_S_1i = rt::slot_string(_v12114); _v12114; });
    ({ rt::Value _v12115 = rt::VS(g::LS[3486]); this->f_S__5e__21__23_ = rt::slot_string(_v12115); _v12115; });
    ({ double _v12116 = 5e+21; this->f_S__3e__3d_ = _v12116; _v12116; });
    ({ double _v12117 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12117); _v12117; });
    ({ double _v12118 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12118); _v12118; });
    ({ double _v12119 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12119); _v12119; });
    ({ bool _v12120 = true; this->f_S__3c__60_ = _v12120; _v12120; });
    ({ double _v12121 = 2.0; this->f_S__21__22_E = rt::touint_d(_v12121); _v12121; });
}
rt::Value C_S_9_22_9::m_S__40__22_() {
    RT_FN("S_9_22_9.S__40__22_");
    if (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__2d_q__id)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[3487]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2X__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S_9_22_9::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[3488]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2X__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S_9_22_9::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_9_22_9::g_S__2d_6() {
    RT_FN("S_9_22_9.S__2d_6_get");
    return ({ bool _t12122 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 1.0); _t12122 ? _t12122 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_1_22_C__id)); });
    return false;
}
double C_S_9_22_9::sm_S__2c_J() {
    RT_FN("S_9_22_9.S__2c_J");
    return (12.0 + (3.0 * rt::m_pow(C_S_8G::sm_S_3_22__3b_(g::SV.C_S_2X__id, C_S_8G::dsm_S_3_22__3b__1()), (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__2d_q__id) ? 0.65 : 0.6))));
    return 0.0;
}
C_S_9_22_9* C_S_9_22_9::alloc_() {
    C_S_9_22_9* o = rt::make<C_S_9_22_9>();
    return o;
}
rt::Value C_S_9_22_9::mk_(rt::Value* a, int n) {
    C_S_9_22_9* o = alloc_();
    o->C_S_9_22_9::ctor_();
    return rt::VO(o);
}
bool C_S_9_22_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_22_9::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_22_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_22_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_22_9::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    default: return false;
    }
}
bool C_S_9_22_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22_9__id)); return true;
    case NM_ids: out = g::SV.C_S_9_22_9__ids; return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_9_22_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22_9__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_9_22_9__ids = v; return true;
    default: return false;
    }
}
bool C_S_9_22_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    default: return false;
    }
}
void C_S__3d_J::ctor_() {
    RT_FN("S__3d_J.S__3d_J");
    (void)((this->C_S__3e_p::ctor_(), rt::NUL));
    ({ double _v12123 = 183.0; this->f_S_6_21_Z = rt::touint_d(_v12123); _v12123; });
    ({ rt::Value _v12124 = rt::trv(rt::VS(g::LS[3490])); this->f_S_1i = rt::slot_string(_v12124); _v12124; });
    ({ rt::Value _v12125 = rt::VS(g::LS[3491]); this->f_S__5e__21__23_ = rt::slot_string(_v12125); _v12125; });
    ({ double _v12126 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12126); _v12126; });
    ({ double _v12127 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12127); _v12127; });
    ({ double _v12128 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12128); _v12128; });
}
rt::Value C_S__3d_J::m_S__3e__21_d() {
    RT_FN("S__3d_J.S__3e__21_d");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[3492]), C_S__26_c::sm_S_8_21_Z(C_S__3d_J::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[3493]), C_S__26_c::sm_S_8_21_Z(C_S__3d_J::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
double C_S__3d_J::sm_S__60_z() {
    RT_FN("S__3d_J.S__60_z");
    return (0.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_((!C_S_8G::sm_S_7d(g::SV.C_S__60__21_4__id)), C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()))), 4.0));
    return 0.0;
}
double C_S__3d_J::sm_S__2c__21_G() {
    RT_FN("S__3d_J.S__2c__21_G");
    return (20.0 * rt::m_pow((rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))) / rt::m_log((rt::mod(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 10.0) + 2.0))), 2.0));
    return 0.0;
}
C_S__3d_J* C_S__3d_J::alloc_() {
    C_S__3d_J* o = rt::make<C_S__3d_J>();
    return o;
}
rt::Value C_S__3d_J::mk_(rt::Value* a, int n) {
    C_S__3d_J* o = alloc_();
    o->C_S__3d_J::ctor_();
    return rt::VO(o);
}
bool C_S__3d_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e_p::dget(id, out);
}
bool C_S__3d_J::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e_p::dset(id, v);
}
bool C_S__3d_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = m_S__3e__21_d(); return true;
    default: break;
    }
    return C_S__3e_p::dcall(id, a, n, out);
}
bool C_S__3d_J::dmeth(int id) {
    switch (id) {
    case NM_S__3e__21_d: return true;
    default: break;
    }
    return C_S__3e_p::dmeth(id);
}
bool C_S__3d_J::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3d_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d_J__id)); return true;
    case NM_ids: out = g::SV.C_S__3d_J__ids; return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d_J__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3d_J__ids = v; return true;
    default: return false;
    }
}
bool C_S__3d_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5b__22__3e_::ctor_() {
    RT_FN("S__5b__22__3e_.S__5b__22__3e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12129 = 189.0; this->f_S_6_21_Z = rt::touint_d(_v12129); _v12129; });
    ({ rt::Value _v12130 = rt::trv(rt::VS(g::LS[3495])); this->f_S_1i = rt::slot_string(_v12130); _v12130; });
    ({ rt::Value _v12131 = rt::VS(g::LS[3496]); this->f_S__5e__21__23_ = rt::slot_string(_v12131); _v12131; });
    ({ double _v12132 = 5e+30; this->f_S__3e__3d_ = _v12132; _v12132; });
    ({ double _v12133 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12133); _v12133; });
    ({ double _v12134 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12134); _v12134; });
    ({ double _v12135 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12135); _v12135; });
    ({ bool _v12136 = true; this->f_S__3c__60_ = _v12136; _v12136; });
    ({ double _v12137 = 9.0; this->f_S__21__22_E = rt::touint_d(_v12137); _v12137; });
}
rt::Value C_S__5b__22__3e_::m_S__40__22_() {
    RT_FN("S__5b__22__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3497]), C_S__26_c::sm_S_6_21_T(C_S__5b__22__3e_::sm_S__27__21_b(), (C_S__26_c::sm_S__25__22__2d_(g::SV.C_S__2d_q__id) ? 2.0 : 1.0), true)));
    return rt::NUL;
}
bool C_S__5b__22__3e_::g_S__2d_6() {
    RT_FN("S__5b__22__3e_.S__2d_6_get");
    return ({ bool _t12138 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 3.0); _t12138 ? _t12138 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3e__22__3e___id)); });
    return false;
}
double C_S__5b__22__3e_::sm_S__27__21_b() {
    RT_FN("S__5b__22__3e_.S__27__21_b");
    return rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(58.0), true, false, true, C_S__26_c::dsm_S__22__21_B_4()), 0.5);
    return 0.0;
}
C_S__5b__22__3e_* C_S__5b__22__3e_::alloc_() {
    C_S__5b__22__3e_* o = rt::make<C_S__5b__22__3e_>();
    return o;
}
rt::Value C_S__5b__22__3e_::mk_(rt::Value* a, int n) {
    C_S__5b__22__3e_* o = alloc_();
    o->C_S__5b__22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5b__22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5b__22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5b__22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5b__22__3e_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__5b__22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22__3e___id)); return true;
    case NM_ids: out = g::SV.C_S__5b__22__3e___ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22__3e___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5b__22__3e___ids = v; return true;
    default: return false;
    }
}
bool C_S__5b__22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__5d_a::ctor_() {
    RT_FN("S__5d_a.S__5d_a");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12139 = 184.0; this->f_S_6_21_Z = rt::touint_d(_v12139); _v12139; });
    ({ rt::Value _v12140 = rt::trv(rt::VS(g::LS[3499])); this->f_S_1i = rt::slot_string(_v12140); _v12140; });
    ({ rt::Value _v12141 = rt::VS(g::LS[3500]); this->f_S__5e__21__23_ = rt::slot_string(_v12141); _v12141; });
    ({ rt::Value _v12142 = rt::VS(g::LS[3432]); this->f_S__3f__21__3d_ = rt::slot_string(_v12142); _v12142; });
    ({ rt::Value _v12143 = rt::VS(g::LS[3432]); this->f_S__40_1 = rt::slot_string(_v12143); _v12143; });
    ({ rt::Value _v12144 = rt::trv(rt::VS(g::LS[3501])); this->f_S_7_23_ = rt::slot_string(_v12144); _v12144; });
    ({ double _v12145 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12145); _v12145; });
    ({ double _v12146 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12146); _v12146; });
    ({ double _v12147 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12147); _v12147; });
    ({ bool _v12148 = false; this->f_S_3e = _v12148; _v12148; });
    ({ bool _v12149 = true; this->f_S__3c__60_ = _v12149; _v12149; });
}
int32_t C_S__5d_a::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__5d_a::dm_S_75_2() { return false; }
rt::Value C_S__5d_a::dm_S_75_3() { return rt::NUL; }
double C_S__5d_a::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__5d_a.S_75");
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 4.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1000000000000.0 : 250.0);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__5d_a::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S__5d_a.S_6r");
    if ((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) {
        return rt::NUL;
    }
    (l_A__loc1_ = rt::toint_d(34.0));
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, ((double)(l_A__loc1_))), rt::V(1.0))));
    ({ rt::Value _v12150 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V((double)(l_A__loc1_)), _v12150); });
    ({ rt::Value _o12151 = g::SV.C_S_8G__S__3d_y; rt::Value _i12152 = rt::V(38.0); rt::Value _v12153 = rt::add(rt::idx_get(_o12151, _i12152), rt::V(1.0)); rt::idx_set(_o12151, _i12152, _v12153); _v12153; });
    ({ rt::Value _v12155 = ({ rt::Value _v12154 = rt::V(0.0); rt::idx_set(g::SV.C_S_8G__S__3d_y, rt::V(100.0), _v12154); _v12154; }); rt::idx_set(g::SV.C_S_8G__S__3d_y, rt::V(99.0), _v12155); });
    (void)(({ rt::Value _o12156 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p12157 = rt::as_ptr<C_S_8G>(_o12156); _p12157 ? _p12157->m_S__27__26_(rt::toint_d(8.0)) : rt::dcallv(_o12156, NM_S__27__26_, rt::V(8.0)); }));
    return rt::NUL;
}
bool C_S__5d_a::g_S__2d_6() {
    RT_FN("S__5d_a.S__2d_6_get");
    return ({ bool _t12161 = ({ bool _t12159 = ({ bool _t12158 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0); _t12158 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0))) : _t12158; }); _t12159 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id)) : _t12159; }); _t12161 ? (bool)((({ bool _t12160 = (((double)(C_S_8G::sg_S__2c_P())) < 2.0); _t12160 ? _t12160 : (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)); }))) : _t12161; });
    return false;
}
C_S__5d_a* C_S__5d_a::alloc_() {
    C_S__5d_a* o = rt::make<C_S__5d_a>();
    return o;
}
rt::Value C_S__5d_a::mk_(rt::Value* a, int n) {
    C_S__5d_a* o = alloc_();
    o->C_S__5d_a::ctor_();
    return rt::VO(o);
}
bool C_S__5d_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5d_a::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5d_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__5d_a::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__5d_a::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__5d_a::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5d_a::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5d_a::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d_a__id)); return true;
    case NM_ids: out = g::SV.C_S__5d_a__ids; return true;
    default: return false;
    }
}
bool C_S__5d_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d_a__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5d_a__ids = v; return true;
    default: return false;
    }
}
bool C_S__5d_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__22_B::ctor_() {
    RT_FN("S__60__22_B.S__60__22_B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12162 = 191.0; this->f_S_6_21_Z = rt::touint_d(_v12162); _v12162; });
    ({ rt::Value _v12163 = rt::trv(rt::VS(g::LS[3503])); this->f_S_1i = rt::slot_string(_v12163); _v12163; });
    ({ rt::Value _v12164 = rt::VS(g::LS[3504]); this->f_S__5e__21__23_ = rt::slot_string(_v12164); _v12164; });
    ({ double _v12165 = 5e+25; this->f_S__3e__3d_ = _v12165; _v12165; });
    ({ double _v12166 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v12166); _v12166; });
    ({ double _v12167 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12167); _v12167; });
    ({ double _v12168 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12168); _v12168; });
    ({ bool _v12169 = true; this->f_S__3c__60_ = _v12169; _v12169; });
    ({ double _v12170 = 5.0; this->f_S__21__22_E = rt::touint_d(_v12170); _v12170; });
}
rt::Value C_S__60__22_B::m_S__40__22_() {
    RT_FN("S__60__22_B.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3505]), C_S__26_c::sm_S_8_21_Z(C_S__60__22_B::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__60__22_B::g_S__2d_6() {
    RT_FN("S__60__22_B.S__2d_6_get");
    return ({ bool _t12171 = (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3432])))) >= 2.0); _t12171 ? _t12171 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_5_22_A__id)); });
    return false;
}
double C_S__60__22_B::sm_S_5_21_B() {
    RT_FN("S__60__22_B.S_5_21_B");
    return rt::m_pow(C_S__26_c::sm_S_0_23_(C_S__26_c::dsm_S_0_23__0(), C_S__26_c::dsm_S_0_23__1()), 0.6);
    return 0.0;
}
C_S__60__22_B* C_S__60__22_B::alloc_() {
    C_S__60__22_B* o = rt::make<C_S__60__22_B>();
    return o;
}
rt::Value C_S__60__22_B::mk_(rt::Value* a, int n) {
    C_S__60__22_B* o = alloc_();
    o->C_S__60__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__60__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__60__22_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__60__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__60__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__60__22_B::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    default: return false;
    }
}
bool C_S__60__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22_B__id)); return true;
    case NM_ids: out = g::SV.C_S__60__22_B__ids; return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__60__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22_B__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__60__22_B__ids = v; return true;
    default: return false;
    }
}
bool C_S__60__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    default: return false;
    }
}
void C_S_8_21__3e_::ctor_() {
    RT_FN("S_8_21__3e_.S_8_21__3e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12172 = 178.0; this->f_S_6_21_Z = rt::touint_d(_v12172); _v12172; });
    ({ rt::Value _v12173 = rt::trv(rt::VS(g::LS[3507])); this->f_S_1i = rt::slot_string(_v12173); _v12173; });
    ({ rt::Value _v12174 = rt::VS(g::LS[3508]); this->f_S__5e__21__23_ = rt::slot_string(_v12174); _v12174; });
    ({ rt::Value _v12175 = rt::trv(rt::VS(g::LS[3509])); this->f_S_7_23_ = rt::slot_string(_v12175); _v12175; });
    ({ double _v12176 = 25000.0; this->f_S__3e__3d_ = _v12176; _v12176; });
    ({ double _v12177 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12177); _v12177; });
    ({ bool _v12178 = false; this->f_S_3e = _v12178; _v12178; });
}
rt::Value C_S_8_21__3e_::m_S_6r() {
    RT_FN("S_8_21__3e_.S_6r");
    (void)(({ rt::Value _o12179 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p12180 = rt::as_ptr<C_S_8G>(_o12179); _p12180 ? _p12180->m_S_0_21__5f_(rt::toint_d(2.0)) : rt::dcallv(_o12179, NM_S_0_21__5f_, rt::V(2.0)); }));
    return rt::NUL;
}
bool C_S_8_21__3e_::g_S__2d_6() {
    RT_FN("S_8_21__3e_.S__2d_6_get");
    return (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0);
    return false;
}
C_S_8_21__3e_* C_S_8_21__3e_::alloc_() {
    C_S_8_21__3e_* o = rt::make<C_S_8_21__3e_>();
    return o;
}
rt::Value C_S_8_21__3e_::mk_(rt::Value* a, int n) {
    C_S_8_21__3e_* o = alloc_();
    o->C_S_8_21__3e_::ctor_();
    return rt::VO(o);
}
bool C_S_8_21__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_21__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_21__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_21__3e_::dmeth(int id) {
    switch (id) {
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_21__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21__3e___id)); return true;
    case NM_ids: out = g::SV.C_S_8_21__3e___ids; return true;
    default: return false;
    }
}
bool C_S_8_21__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21__3e___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_8_21__3e___ids = v; return true;
    default: return false;
    }
}
bool C_S_8_21__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d_B::ctor_(rt::Value p0, double p1, double p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_param2 = p1;
    double l_param3 = p2;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("S__3d_B.S__3d_B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12181 = 179.0; this->f_S_6_21_Z = rt::touint_d(_v12181); _v12181; });
    ({ rt::Value _v12182 = l_param1; this->f_S_1i = rt::slot_string(_v12182); _v12182; });
    ({ rt::Value _v12183 = rt::VS(g::LS[1256]); this->f_S__3f__21__3d_ = rt::slot_string(_v12183); _v12183; });
    ({ rt::Value _v12184 = rt::VS(g::LS[3511]); this->f_S__40_1 = rt::slot_string(_v12184); _v12184; });
    ({ double _v12185 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v12185); _v12185; });
    ({ int32_t _v12186 = rt::toint(this->m_S__2b__21__21_(C_S__60_6::dm_S__2b__21__21__0())); this->f_S__22__21_U = _v12186; _v12186; });
    ({ double _v12189 = ({ double _v12188 = ({ double _v12187 = 1.0; this->f_S__22__21_p = _v12187; _v12187; }); this->f_S__2b__21__20_ = _v12188; _v12188; }); this->f_S__3e__23_ = _v12189; _v12189; });
    {
        std::vector<rt::Value> _lst12190;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst12190);
        for (const rt::Value& _x12191 : _lst12190) {
            l_A__loc4_ = _x12191;
            if (rt::eq(({ rt::Value _o12192 = l_A__loc4_; C_S__60_6* _p12193 = rt::as_ptr<C_S__60_6>(_o12192); _p12193 ? _p12193->f_S__40_1 : rt::dget(_o12192, NM_S__40_1); }), this->f_S__40_1)) {
                if ((((double)(({ rt::Value _o12194 = l_A__loc4_; C_S__60_6* _p12195 = rt::as_ptr<C_S__60_6>(_o12194); _p12195 ? _p12195->f_S__22__21_U : rt::toint(rt::dget(_o12194, NM_S__22__21_U)); }))) < 4.0)) {
                    ({ double _v12196 = (this->f_S__3e__23_ * 2.0); this->f_S__3e__23_ = _v12196; _v12196; });
                } else if ((((double)(({ rt::Value _o12197 = l_A__loc4_; C_S__60_6* _p12198 = rt::as_ptr<C_S__60_6>(_o12197); _p12198 ? _p12198->f_S__22__21_U : rt::toint(rt::dget(_o12197, NM_S__22__21_U)); }))) < 5.0)) {
                    ({ double _v12199 = (this->f_S__2b__21__20_ * 2.0); this->f_S__2b__21__20_ = _v12199; _v12199; });
                } else {
                    ({ double _v12200 = (this->f_S__22__21_p * 2.0); this->f_S__22__21_p = _v12200; _v12200; });
                }
            }
        }
    }
    if ((((double)(this->f_S__22__21_U)) < 4.0)) {
        ({ double _v12201 = (this->f_S__3e__23_ * 2.0); this->f_S__3e__23_ = _v12201; _v12201; });
    } else if ((((double)(this->f_S__22__21_U)) < 5.0)) {
        ({ double _v12202 = (this->f_S__2b__21__20_ * 2.0); this->f_S__2b__21__20_ = _v12202; _v12202; });
    } else {
        ({ double _v12203 = (this->f_S__22__21_p * 2.0); this->f_S__22__21_p = _v12203; _v12203; });
    }
    ({ rt::Value _v12204 = rt::add(rt::VS(g::LS[3512]), rt::dcallv(rt::V((double)(this->f_S__22__21_U)), rt::N_toString)); this->f_S__5e__21__23_ = rt::slot_string(_v12204); _v12204; });
    ({ double _v12205 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v12205); _v12205; });
    ({ double _v12206 = l_param2; this->f_S__5e__21__5d_ = _v12206; _v12206; });
    if ((((double)(this->f_S__22__21_U)) < 4.0)) {
        ({ double _v12207 = l_param3; this->f_S__3e__3d_ = _v12207; _v12207; });
    } else if ((((double)(this->f_S__22__21_U)) < 5.0)) {
        ({ double _v12208 = l_param3; this->f_S__3c_R = _v12208; _v12208; });
    } else {
        ({ double _v12209 = l_param3; this->f_S__23__21_m = _v12209; _v12209; });
    }
    ({ bool _v12210 = true; this->f_S__2b__21_9 = _v12210; _v12210; });
}
rt::Value C_S__3d_B::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3d_B.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    if ((rt::eq(rt::VB((!rt::T(rt::arr_at(g::SV.C_S_8G__S_4P, 23.0)))), rt::V(0.0)) && this->f_S__3c__21_7)) {
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
    return rt::slot_string(rt::trv(rt::VS(g::LS[3513]), l_A__loc1_));
    return rt::NUL;
}
rt::Value C_S__3d_B::m_S__3e__21__2d_() {
    RT_FN("S__3d_B.S__3e__21__2d_");
    return rt::slot_string(rt::add(rt::VS(g::LS[3514]), this->m_S__2b__21__21_(true)));
    return rt::NUL;
}
bool C_S__3d_B::g_S__2d_6() {
    RT_FN("S__3d_B.S__2d_6_get");
    return ({ bool _t12215 = ({ bool _t12211 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t12211 ? (bool)((C_S__26_c::sm_S_0_23_(rt::toint_d(2.0), true) >= this->f_S__5e__21__5d_)) : _t12211; }); _t12215 ? (bool)((({ bool _t12214 = ({ bool _t12213 = (((double)(this->f_S__22__21_U)) < 4.0); _t12213 ? _t12213 : (bool)(({ bool _t12212 = (((double)(this->f_S__22__21_U)) < 5.0); _t12212 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 1.0)) : _t12212; })); }); _t12214 ? _t12214 : (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)); }))) : _t12215; });
    return false;
}
C_S__3d_B* C_S__3d_B::alloc_() {
    C_S__3d_B* o = rt::make<C_S__3d_B>();
    return o;
}
rt::Value C_S__3d_B::mk_(rt::Value* a, int n) {
    C_S__3d_B* o = alloc_();
    o->C_S__3d_B::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<double>(a, n, 1, NAN), rt::arg<double>(a, n, 2, NAN));
    return rt::VO(o);
}
bool C_S__3d_B::dget(int id, rt::Value& out) {
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
bool C_S__3d_B::dset(int id, rt::Value v) {
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
bool C_S__3d_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__3d_B::dmeth(int id) {
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
bool C_S__3d_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d_B::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d_B::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21_y::ctor_() {
    RT_FN("S__20__21_y.S__20__21_y");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12216 = 891.0; this->f_S_6_21_Z = rt::touint_d(_v12216); _v12216; });
    ({ rt::Value _v12217 = rt::trv(rt::VS(g::LS[3515])); this->f_S_1i = rt::slot_string(_v12217); _v12217; });
    ({ rt::Value _v12218 = rt::VS(g::LS[3516]); this->f_S__5e__21__23_ = rt::slot_string(_v12218); _v12218; });
    ({ rt::Value _v12219 = rt::VS(g::LS[3517]); this->f_S__3f__21__3d_ = rt::slot_string(_v12219); _v12219; });
    ({ rt::Value _v12220 = rt::VS(g::LS[3517]); this->f_S__40_1 = rt::slot_string(_v12220); _v12220; });
    ({ rt::Value _v12221 = rt::trv(rt::VS(g::LS[3518])); this->f_S_7_23_ = rt::slot_string(_v12221); _v12221; });
    ({ double _v12222 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12222); _v12222; });
    ({ double _v12223 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12223); _v12223; });
    ({ double _v12224 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12224); _v12224; });
    ({ bool _v12225 = false; this->f_S_3e = _v12225; _v12225; });
    ({ bool _v12226 = true; this->f_S__3c__60_ = _v12226; _v12226; });
}
int32_t C_S__20__21_y::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__20__21_y::dm_S_75_2() { return false; }
rt::Value C_S__20__21_y::dm_S_75_3() { return rt::NUL; }
double C_S__20__21_y::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__20__21_y.S_75");
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 5.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+51 : 1e+27);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__20__21_y::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__20__21_y.S_6r");
    if ((!(((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0)))) {
        return rt::NUL;
    }
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 137.0), rt::V(1.0))));
    ({ rt::Value _v12227 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(137.0), _v12227); });
    (void)(({ rt::Value _o12228 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p12229 = rt::as_ptr<C_S_8G>(_o12228); _p12229 ? _p12229->m_S__3d__22__20_(rt::toint_d(14.0)) : rt::dcallv(_o12228, NM_S__3d__22__20_, rt::V(14.0)); }));
    return rt::NUL;
}
bool C_S__20__21_y::g_S__2d_6() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__20__21_y.S__2d_6_get");
    (l_A__loc1_ = rt::arr_lit({rt::V((double)(g::SV.C_S_3_21_m__id)), rt::V((double)(g::SV.C_S__3d__21_m__id)), rt::V((double)(g::SV.C_S_2_21_l__id)), rt::V((double)(g::SV.C_S_2_21_m__id)), rt::V((double)(g::SV.C_S__5d__21_n__id)), rt::V((double)(g::SV.C_S__27__21_l__id)), rt::V((double)(g::SV.C_S__2c__21_n__id)), rt::V((double)(g::SV.C_S_2_21_o__id)), rt::V((double)(g::SV.C_S__27__21_o__id)), rt::V((double)(g::SV.C_S_3_21_u__id)), rt::V((double)(g::SV.C_S__22__21_u__id)), rt::V(0.0), rt::V((double)(g::SV.C_S__60__21_u__id))}));
    return ({ bool _t12243 = ({ bool _t12242 = ({ bool _t12241 = ({ bool _t12240 = ({ bool _t12239 = ({ bool _t12238 = ({ bool _t12237 = ({ bool _t12236 = ({ bool _t12235 = ({ bool _t12234 = ({ bool _t12233 = (({ bool _t12231 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t12231 ? _t12231 : (bool)(({ bool _t12230 = (((double)(C_S_8G::sg_S_8_21_H())) >= 255.0); _t12230 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__22__22_I__id)) : _t12230; })); })); _t12233 ? (bool)((({ bool _t12232 = (((double)(C_S_8G::sg_S__2c_P())) < 3.0); _t12232 ? _t12232 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 172.0)); }))) : _t12233; }); _t12234 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)))) : _t12234; }); _t12235 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) : _t12235; }); _t12236 ? (bool)((!(((double)(g::SV.C_S_8G__S__23_3)) == (-1.0)))) : _t12236; }); _t12237 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0))) : _t12237; }); _t12238 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) : _t12238; }); _t12239 ? (bool)(C_S_8G::sm_S_7d(rt::touint(rt::arr_at(l_A__loc1_, ((double)(g::SV.C_S_8G__S__2d__21__5e_)))))) : _t12239; }); _t12240 ? (bool)(C_S_8G::sm_S_7d(rt::touint(rt::arr_at(l_A__loc1_, ((double)(g::SV.C_S_8G__S__23_3)))))) : _t12240; }); _t12241 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t12241; }); _t12242 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t12242; }); _t12243 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__60__21_z__id)) : _t12243; });
    return false;
}
C_S__20__21_y* C_S__20__21_y::alloc_() {
    C_S__20__21_y* o = rt::make<C_S__20__21_y>();
    return o;
}
rt::Value C_S__20__21_y::mk_(rt::Value* a, int n) {
    C_S__20__21_y* o = alloc_();
    o->C_S__20__21_y::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__21_y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__21_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__20__21_y::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__20__21_y::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__20__21_y::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__21_y::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__21_y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_y__id)); return true;
    default: return false;
    }
}
bool C_S__20__21_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__21_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21_z::ctor_() {
    RT_FN("S__20__21_z.S__20__21_z");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12244 = 893.0; this->f_S_6_21_Z = rt::touint_d(_v12244); _v12244; });
    ({ rt::Value _v12245 = rt::trv(rt::VS(g::LS[3519])); this->f_S_1i = rt::slot_string(_v12245); _v12245; });
    ({ rt::Value _v12246 = rt::VS(g::LS[3520]); this->f_S__5e__21__23_ = rt::slot_string(_v12246); _v12246; });
    ({ rt::Value _v12247 = rt::VS(g::LS[3517]); this->f_S__3f__21__3d_ = rt::slot_string(_v12247); _v12247; });
    ({ rt::Value _v12248 = rt::VS(g::LS[3517]); this->f_S__40_1 = rt::slot_string(_v12248); _v12248; });
    ({ rt::Value _v12249 = rt::trv(rt::VS(g::LS[3521])); this->f_S_7_23_ = rt::slot_string(_v12249); _v12249; });
    ({ double _v12250 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12250); _v12250; });
    ({ double _v12251 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12251); _v12251; });
    ({ double _v12252 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12252); _v12252; });
    ({ bool _v12253 = true; this->f_S__3c__60_ = _v12253; _v12253; });
}
int32_t C_S__20__21_z::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__20__21_z::dm_S_75_2() { return false; }
rt::Value C_S__20__21_z::dm_S_75_3() { return rt::NUL; }
double C_S__20__21_z::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__20__21_z.S_75");
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 5.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+63 : 1e+33);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__20__21_z::g_S__2d_6() {
    RT_FN("S__20__21_z.S__2d_6_get");
    return ({ bool _t12254 = this->C_S__60_6::g_S__2d_6(); _t12254 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == 14.0)) : _t12254; });
    return false;
}
C_S__20__21_z* C_S__20__21_z::alloc_() {
    C_S__20__21_z* o = rt::make<C_S__20__21_z>();
    return o;
}
rt::Value C_S__20__21_z::mk_(rt::Value* a, int n) {
    C_S__20__21_z* o = alloc_();
    o->C_S__20__21_z::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__21_z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__21_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__20__21_z::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__20__21_z::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__20__21_z::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__21_z::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__21_z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_z__id)); return true;
    default: return false;
    }
}
bool C_S__20__21_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_z__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__21_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__22__40_::ctor_() {
    RT_FN("S__20__22__40_.S__20__22__40_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12255 = 905.0; this->f_S_6_21_Z = rt::touint_d(_v12255); _v12255; });
    ({ rt::Value _v12256 = rt::trv(rt::VS(g::LS[3522])); this->f_S_1i = rt::slot_string(_v12256); _v12256; });
    ({ rt::Value _v12257 = rt::VS(g::LS[3523]); this->f_S__5e__21__23_ = rt::slot_string(_v12257); _v12257; });
    ({ double _v12258 = 1e+183; this->f_S__23__21_m = _v12258; _v12258; });
    ({ double _v12259 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12259); _v12259; });
    ({ double _v12260 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12260); _v12260; });
    ({ double _v12261 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12261); _v12261; });
    ({ bool _v12262 = true; this->f_S__21__21_n = _v12262; _v12262; });
    ({ double _v12263 = 10.0; this->f_S__21__22_E = rt::touint_d(_v12263); _v12263; });
}
rt::Value C_S__20__22__40_::m_S__40__22_() {
    RT_FN("S__20__22__40_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3524]), C_S__26_c::sm_S_6_21_T(C_S__20__22__40_::sm_S__27__21_b(), 3.0, true)));
    return rt::NUL;
}
bool C_S__20__22__40_::g_S__2d_6() {
    RT_FN("S__20__22__40_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 4.0);
    return false;
}
double C_S__20__22__40_::sm_S__27__21_b() {
    RT_FN("S__20__22__40_.S__27__21_b");
    return (0.3 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__21__22__21___id, false, false, C_S__26_c::dsm_S_7i_3()), 0.7));
    return 0.0;
}
C_S__20__22__40_* C_S__20__22__40_::alloc_() {
    C_S__20__22__40_* o = rt::make<C_S__20__22__40_>();
    return o;
}
rt::Value C_S__20__22__40_::mk_(rt::Value* a, int n) {
    C_S__20__22__40_* o = alloc_();
    o->C_S__20__22__40_::ctor_();
    return rt::VO(o);
}
bool C_S__20__22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__22__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__22__40_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__20__22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22__40___id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22__40___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__22__22__26_::ctor_() {
    RT_FN("S__22__22__26_.S__22__22__26_");
    (void)((this->C_S__3e_p::ctor_(), rt::NUL));
    ({ double _v12264 = 940.0; this->f_S_6_21_Z = rt::touint_d(_v12264); _v12264; });
    ({ rt::Value _v12265 = rt::trv(rt::VS(g::LS[3525])); this->f_S_1i = rt::slot_string(_v12265); _v12265; });
    ({ rt::Value _v12266 = rt::VS(g::LS[3526]); this->f_S__5e__21__23_ = rt::slot_string(_v12266); _v12266; });
    ({ double _v12267 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12267); _v12267; });
    ({ double _v12268 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12268); _v12268; });
    ({ double _v12269 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12269); _v12269; });
}
rt::Value C_S__22__22__26_::m_S__3e__21_d() {
    RT_FN("S__22__22__26_.S__3e__21_d");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3527]), C_S__26_c::sm_S_8_21_Z(500000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__22__22__26_* C_S__22__22__26_::alloc_() {
    C_S__22__22__26_* o = rt::make<C_S__22__22__26_>();
    return o;
}
rt::Value C_S__22__22__26_::mk_(rt::Value* a, int n) {
    C_S__22__22__26_* o = alloc_();
    o->C_S__22__22__26_::ctor_();
    return rt::VO(o);
}
bool C_S__22__22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e_p::dget(id, out);
}
bool C_S__22__22__26_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e_p::dset(id, v);
}
bool C_S__22__22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = m_S__3e__21_d(); return true;
    default: break;
    }
    return C_S__3e_p::dcall(id, a, n, out);
}
bool C_S__22__22__26_::dmeth(int id) {
    switch (id) {
    case NM_S__3e__21_d: return true;
    default: break;
    }
    return C_S__3e_p::dmeth(id);
}
bool C_S__22__22__26_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__22__26___id)); return true;
    default: return false;
    }
}
bool C_S__22__22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__22__26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__22__3d_::ctor_() {
    RT_FN("S__22__22__3d_.S__22__22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12270 = 896.0; this->f_S_6_21_Z = rt::touint_d(_v12270); _v12270; });
    ({ rt::Value _v12271 = rt::trv(rt::VS(g::LS[3528])); this->f_S_1i = rt::slot_string(_v12271); _v12271; });
    ({ rt::Value _v12272 = rt::VS(g::LS[3529]); this->f_S__5e__21__23_ = rt::slot_string(_v12272); _v12272; });
    ({ double _v12273 = 1e+155; this->f_S__23__21_m = _v12273; _v12273; });
    ({ double _v12274 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12274); _v12274; });
    ({ double _v12275 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12275); _v12275; });
    ({ double _v12276 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12276); _v12276; });
    ({ bool _v12277 = true; this->f_S__3c__60_ = _v12277; _v12277; });
    ({ double _v12278 = 2.0; this->f_S__21__22_E = rt::touint_d(_v12278); _v12278; });
}
rt::Value C_S__22__22__3d_::m_S__40__22_() {
    RT_FN("S__22__22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3530]), C_S__26_c::sm_S_8_21_Z(C_S__22__22__3d_::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__22__22__3d_::g_S__2d_6() {
    RT_FN("S__22__22__3d_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 1.0);
    return false;
}
double C_S__22__22__3d_::sm_S__23__21_Y() {
    RT_FN("S__22__22__3d_.S__23__21_Y");
    return (0.2 * rt::m_pow((0.5 * rt::m_log((1.0 + rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 148.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 148.0)))))), 2.0));
    return 0.0;
}
C_S__22__22__3d_* C_S__22__22__3d_::alloc_() {
    C_S__22__22__3d_* o = rt::make<C_S__22__22__3d_>();
    return o;
}
rt::Value C_S__22__22__3d_::mk_(rt::Value* a, int n) {
    C_S__22__22__3d_* o = alloc_();
    o->C_S__22__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__22__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22__22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__22__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__22__3d___id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__3c__22__40_::ctor_() {
    RT_FN("S__3c__22__40_.S__3c__22__40_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12279 = 897.0; this->f_S_6_21_Z = rt::touint_d(_v12279); _v12279; });
    ({ rt::Value _v12280 = rt::trv(rt::VS(g::LS[3531])); this->f_S_1i = rt::slot_string(_v12280); _v12280; });
    ({ rt::Value _v12281 = rt::VS(g::LS[3532]); this->f_S__5e__21__23_ = rt::slot_string(_v12281); _v12281; });
    ({ double _v12282 = 1e+163; this->f_S__23__21_m = _v12282; _v12282; });
    ({ double _v12283 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12283); _v12283; });
    ({ double _v12284 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12284); _v12284; });
    ({ double _v12285 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12285); _v12285; });
    ({ bool _v12286 = true; this->f_S__3c__60_ = _v12286; _v12286; });
    ({ double _v12287 = 4.0; this->f_S__21__22_E = rt::touint_d(_v12287); _v12287; });
}
rt::Value C_S__3c__22__40_::m_S__40__22_() {
    RT_FN("S__3c__22__40_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3533]), C_S__26_c::sm_S_6_21_T(C_S__3c__22__40_::sm_S__26_s(), 3.0, true)));
    return rt::NUL;
}
bool C_S__3c__22__40_::g_S__2d_6() {
    RT_FN("S__3c__22__40_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 2.0);
    return false;
}
double C_S__3c__22__40_::sm_S__26_s() {
    RT_FN("S__3c__22__40_.S__26_s");
    return (0.325 * rt::m_pow(C_S__26_c::sm_S_3_22__26_(true, C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()), 0.325));
    return 0.0;
}
C_S__3c__22__40_* C_S__3c__22__40_::alloc_() {
    C_S__3c__22__40_* o = rt::make<C_S__3c__22__40_>();
    return o;
}
rt::Value C_S__3c__22__40_::mk_(rt::Value* a, int n) {
    C_S__3c__22__40_* o = alloc_();
    o->C_S__3c__22__40_::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__22__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__22__40_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3c__22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22__40___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22__40___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3f__22__3b_::ctor_() {
    RT_FN("S__3f__22__3b_.S__3f__22__3b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12288 = 899.0; this->f_S_6_21_Z = rt::touint_d(_v12288); _v12288; });
    ({ rt::Value _v12289 = rt::trv(rt::VS(g::LS[3534])); this->f_S_1i = rt::slot_string(_v12289); _v12289; });
    ({ rt::Value _v12290 = rt::VS(g::LS[3535]); this->f_S__5e__21__23_ = rt::slot_string(_v12290); _v12290; });
    ({ double _v12291 = 1e+167; this->f_S__23__21_m = _v12291; _v12291; });
    ({ double _v12292 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12292); _v12292; });
    ({ double _v12293 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12293); _v12293; });
    ({ double _v12294 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12294); _v12294; });
    ({ bool _v12295 = true; this->f_S__3c__60_ = _v12295; _v12295; });
    ({ double _v12296 = 6.0; this->f_S__21__22_E = rt::touint_d(_v12296); _v12296; });
}
rt::Value C_S__3f__22__3b_::m_S__40__22_() {
    RT_FN("S__3f__22__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3536]), C_S__26_c::sm_S_8_21_Z(C_S__3f__22__3b_::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3f__22__3b_::g_S__2d_6() {
    RT_FN("S__3f__22__3b_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 2.0);
    return false;
}
double C_S__3f__22__3b_::sm_S_6_21_Y() {
    RT_FN("S__3f__22__3b_.S_6_21_Y");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S__22__21_z(false, C_S__26_c::dsm_S__22__21_z_1()), 0.5));
    return 0.0;
}
C_S__3f__22__3b_* C_S__3f__22__3b_::alloc_() {
    C_S__3f__22__3b_* o = rt::make<C_S__3f__22__3b_>();
    return o;
}
rt::Value C_S__3f__22__3b_::mk_(rt::Value* a, int n) {
    C_S__3f__22__3b_* o = alloc_();
    o->C_S__3f__22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__22__3b_::smeth_(int id) {
    switch (id) {
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S__3f__22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22__3b___id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22__3b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S__2d__22__3f_::ctor_() {
    RT_FN("S__2d__22__3f_.S__2d__22__3f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12297 = 904.0; this->f_S_6_21_Z = rt::touint_d(_v12297); _v12297; });
    ({ rt::Value _v12298 = rt::trv(rt::VS(g::LS[3537])); this->f_S_1i = rt::slot_string(_v12298); _v12298; });
    ({ rt::Value _v12299 = rt::VS(g::LS[3538]); this->f_S__5e__21__23_ = rt::slot_string(_v12299); _v12299; });
    ({ double _v12300 = 1e+153; this->f_S__23__21_m = _v12300; _v12300; });
    ({ double _v12301 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12301); _v12301; });
    ({ double _v12302 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12302); _v12302; });
    ({ double _v12303 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12303); _v12303; });
    ({ bool _v12304 = true; this->f_S__3c__60_ = _v12304; _v12304; });
    ({ double _v12305 = 1.0; this->f_S__21__22_E = rt::touint_d(_v12305); _v12305; });
}
rt::Value C_S__2d__22__3f_::m_S__40__22_() {
    RT_FN("S__2d__22__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3539]), C_S__26_c::sm_S_6_21_T(C_S__2d__22__3f_::sm_S__27__21_b(), 3.0, true)));
    return rt::NUL;
}
bool C_S__2d__22__3f_::g_S__2d_6() {
    RT_FN("S__2d__22__3f_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 1.0);
    return false;
}
double C_S__2d__22__3f_::sm_S__27__21_b() {
    RT_FN("S__2d__22__3f_.S__27__21_b");
    return (25.0 * rt::m_pow(rt::m_log(((1.0 + (((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == (-1.0))) ? C_S__26_c::sm_S__5d__21_s(g::SV.C_S_8G__S__2c__21_Y, false, true, C_S__26_c::dsm_S__5d__21_s_3()) : 0.0))) + (((!(((double)(g::SV.C_S_8G__S_9_21_m)) == (-1.0))) ? C_S__26_c::sm_S__5d__21_s(g::SV.C_S_8G__S_9_21_m, false, true, C_S__26_c::dsm_S__5d__21_s_3()) : 0.0)))), 2.5));
    return 0.0;
}
C_S__2d__22__3f_* C_S__2d__22__3f_::alloc_() {
    C_S__2d__22__3f_* o = rt::make<C_S__2d__22__3f_>();
    return o;
}
rt::Value C_S__2d__22__3f_::mk_(rt::Value* a, int n) {
    C_S__2d__22__3f_* o = alloc_();
    o->C_S__2d__22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__22__3f_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__2d__22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22__3f___id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_2_21_x::ctor_() {
    RT_FN("S_2_21_x.S_2_21_x");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12306 = 929.0; this->f_S_6_21_Z = rt::touint_d(_v12306); _v12306; });
    ({ rt::Value _v12307 = rt::trv(rt::VS(g::LS[3540])); this->f_S_1i = rt::slot_string(_v12307); _v12307; });
    ({ rt::Value _v12308 = rt::VS(g::LS[572]); this->f_S__5e__21__23_ = rt::slot_string(_v12308); _v12308; });
    ({ double _v12309 = 1e+147; this->f_S__23__21_m = _v12309; _v12309; });
    ({ double _v12310 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12310); _v12310; });
    ({ double _v12311 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12311); _v12311; });
    ({ double _v12312 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12312); _v12312; });
    ({ bool _v12313 = false; this->f_S_3e = _v12313; _v12313; });
}
rt::Value C_S_2_21_x::m_S__40__22_() {
    RT_FN("S_2_21_x.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3541]), C_S__26_c::sm_S_8_21_Z(3.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_2_21_x::m_S_6r() {
    RT_FN("S_2_21_x.S_6r");
    (void)(({ rt::Value _o12314 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p12315 = rt::as_ptr<C_S__20_g>(_o12314); _p12315 ? _p12315->m_S__26__2b_(rt::toint_d(954.0), rt::toint_d(0.0)) : rt::dcallv(_o12314, NM_S__26__2b_, rt::V(954.0), rt::V(0.0)); }));
    (void)(({ rt::Value _o12316 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p12317 = rt::as_ptr<C_S_8G>(_o12316); _p12317 ? _p12317->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__60__21_z__id)) : rt::dcallv(_o12316, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__60__21_z__id)); }));
    return rt::NUL;
}
bool C_S_2_21_x::g_S__2d_6() {
    RT_FN("S_2_21_x.S__2d_6_get");
    return ({ bool _t12320 = ({ bool _t12319 = ({ bool _t12318 = (!C_S_8G::sm_S__3c_P(g::SV.C_S__60__21_z__id)); _t12318 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_7_21_y__id)) : _t12318; }); _t12319 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_6_21_y__id)) : _t12319; }); _t12320 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2b__21_z__id)) : _t12320; });
    return false;
}
bool C_S_2_21_x::g_S_9_21__25_() {
    RT_FN("S_2_21_x.S_9_21__25__get");
    return (C_S__26_c::sm_S_7i(g::SV.C_S__25__21_n__id, false, false, true) >= 10800.0);
    return false;
}
C_S_2_21_x* C_S_2_21_x::alloc_() {
    C_S_2_21_x* o = rt::make<C_S_2_21_x>();
    return o;
}
rt::Value C_S_2_21_x::mk_(rt::Value* a, int n) {
    C_S_2_21_x* o = alloc_();
    o->C_S_2_21_x::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_x::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2_21_x::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2_21_x::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2_21_x::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2_21_x::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_x::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_x__id)); return true;
    case NM_S_13: out = rt::V(g::SV.C_S_2_21_x__S_13); return true;
    default: return false;
    }
}
bool C_S_2_21_x::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_x__id = rt::touint(v); return true;
    case NM_S_13: g::SV.C_S_2_21_x__S_13 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_2_21_x::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_22__20_::ctor_() {
    RT_FN("S_4_22__20_.S_4_22__20_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12321 = 923.0; this->f_S_6_21_Z = rt::touint_d(_v12321); _v12321; });
    ({ rt::Value _v12322 = rt::trv(rt::VS(g::LS[3542])); this->f_S_1i = rt::slot_string(_v12322); _v12322; });
    ({ rt::Value _v12323 = rt::VS(g::LS[3543]); this->f_S__5e__21__23_ = rt::slot_string(_v12323); _v12323; });
    ({ double _v12324 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12324); _v12324; });
    ({ double _v12325 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12325); _v12325; });
    ({ double _v12326 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12326); _v12326; });
}
rt::Value C_S_4_22__20_::m_S__40__22_() {
    RT_FN("S_4_22__20_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3544]), C_S__26_c::sm_S_6_21_T(C_S_4_22__20_::sm_S__26_s(), 3.0, true)));
    return rt::NUL;
}
int32_t C_S_4_22__20_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_4_22__20_::dm_S_75_2() { return false; }
rt::Value C_S_4_22__20_::dm_S_75_3() { return rt::NUL; }
double C_S_4_22__20_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S_4_22__20_.S_75");
    (l_A__loc5_ = NAN);
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 5.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+48 : 1e+36);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S_4_22__20_::g_S__2d_6() {
    RT_FN("S_4_22__20_.S__2d_6_get");
    return ({ bool _t12327 = C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[3545]))); _t12327 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t12327; });
    return false;
}
double C_S_4_22__20_::sm_S__26_s() {
    RT_FN("S_4_22__20_.S__26_s");
    return (30.0 + (0.3 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__21__22__21___id, false, false, C_S__26_c::dsm_S_7i_3()), 0.65)));
    return 0.0;
}
C_S_4_22__20_* C_S_4_22__20_::alloc_() {
    C_S_4_22__20_* o = rt::make<C_S_4_22__20_>();
    return o;
}
rt::Value C_S_4_22__20_::mk_(rt::Value* a, int n) {
    C_S_4_22__20_* o = alloc_();
    o->C_S_4_22__20_::ctor_();
    return rt::VO(o);
}
bool C_S_4_22__20_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_22__20_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_22__20_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_4_22__20_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_4_22__20_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_4_22__20_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_22__20_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_22__20_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_4_22__20_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22__20___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22__20_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22__20___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22__20_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_4_22_9::ctor_() {
    RT_FN("S_4_22_9.S_4_22_9");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12328 = 901.0; this->f_S_6_21_Z = rt::touint_d(_v12328); _v12328; });
    ({ rt::Value _v12329 = rt::trv(rt::VS(g::LS[3546])); this->f_S_1i = rt::slot_string(_v12329); _v12329; });
    ({ rt::Value _v12330 = rt::VS(g::LS[3547]); this->f_S__5e__21__23_ = rt::slot_string(_v12330); _v12330; });
    ({ double _v12331 = 1e+175; this->f_S__23__21_m = _v12331; _v12331; });
    ({ double _v12332 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12332); _v12332; });
    ({ double _v12333 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12333); _v12333; });
    ({ double _v12334 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12334); _v12334; });
    ({ bool _v12335 = true; this->f_S__3c__60_ = _v12335; _v12335; });
    ({ double _v12336 = 8.0; this->f_S__21__22_E = rt::touint_d(_v12336); _v12336; });
}
rt::Value C_S_4_22_9::m_S__40__22_() {
    RT_FN("S_4_22_9.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3548]), C_S__26_c::sm_S_6_21_T(C_S_4_22_9::sm_S__26_s(), 3.0, true), C_S__26_c::sm_S_6_21_T(C_S_4_22_9::sm_S_89(), 3.0, true)));
    return rt::NUL;
}
bool C_S_4_22_9::g_S__2d_6() {
    RT_FN("S_4_22_9.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 3.0);
    return false;
}
double C_S_4_22_9::sm_S__26_s() {
    RT_FN("S_4_22_9.S__26_s");
    return rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), 2.0);
    return 0.0;
}
double C_S_4_22_9::sm_S_89() {
    RT_FN("S_4_22_9.S_89");
    return rt::m_pow(C_S__26_c::sm_S__21__21_8(), 0.6);
    return 0.0;
}
C_S_4_22_9* C_S_4_22_9::alloc_() {
    C_S_4_22_9* o = rt::make<C_S_4_22_9>();
    return o;
}
rt::Value C_S_4_22_9::mk_(rt::Value* a, int n) {
    C_S_4_22_9* o = alloc_();
    o->C_S_4_22_9::ctor_();
    return rt::VO(o);
}
bool C_S_4_22_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_22_9::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_22_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_22_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_22_9::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    case NM_S_89: return true;
    default: return false;
    }
}
bool C_S_4_22_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22_9__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_89: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22_9__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    case NM_S_89: out = rt::V(sm_S_89()); return true;
    default: return false;
    }
}
void C_S_6_22__3e_::ctor_() {
    RT_FN("S_6_22__3e_.S_6_22__3e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12337 = 890.0; this->f_S_6_21_Z = rt::touint_d(_v12337); _v12337; });
    ({ rt::Value _v12338 = rt::trv(rt::VS(g::LS[3549])); this->f_S_1i = rt::slot_string(_v12338); _v12338; });
    ({ rt::Value _v12339 = rt::VS(g::LS[3550]); this->f_S__5e__21__23_ = rt::slot_string(_v12339); _v12339; });
    ({ double _v12340 = 1e+187; this->f_S__23__21_m = _v12340; _v12340; });
    ({ double _v12341 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12341); _v12341; });
    ({ double _v12342 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12342); _v12342; });
    ({ double _v12343 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12343); _v12343; });
    ({ bool _v12344 = true; this->f_S__21__21_n = _v12344; _v12344; });
    ({ double _v12345 = 12.0; this->f_S__21__22_E = rt::touint_d(_v12345); _v12345; });
}
rt::Value C_S_6_22__3e_::m_S__40__22_() {
    RT_FN("S_6_22__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3551]), C_S__26_c::sm_S_8_21_Z(C_S_6_22__3e_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_6_22__3e_::g_S__2d_6() {
    RT_FN("S_6_22__3e_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 4.0);
    return false;
}
double C_S_6_22__3e_::sm_S__2c__21_G() {
    RT_FN("S_6_22__3e_.S__2c__21_G");
    return rt::m_floor((5.0 * rt::m_pow(C_S__23__21__21_::sm_S__2c__21_E(), 0.5)));
    return 0.0;
}
C_S_6_22__3e_* C_S_6_22__3e_::alloc_() {
    C_S_6_22__3e_* o = rt::make<C_S_6_22__3e_>();
    return o;
}
rt::Value C_S_6_22__3e_::mk_(rt::Value* a, int n) {
    C_S_6_22__3e_* o = alloc_();
    o->C_S_6_22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S_6_22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_22__3e_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_6_22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22__3e___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_6_22_B::ctor_() {
    RT_FN("S_6_22_B.S_6_22_B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12346 = 900.0; this->f_S_6_21_Z = rt::touint_d(_v12346); _v12346; });
    ({ rt::Value _v12347 = rt::trv(rt::VS(g::LS[3552])); this->f_S_1i = rt::slot_string(_v12347); _v12347; });
    ({ rt::Value _v12348 = rt::VS(g::LS[3553]); this->f_S__5e__21__23_ = rt::slot_string(_v12348); _v12348; });
    ({ double _v12349 = 1e+173; this->f_S__23__21_m = _v12349; _v12349; });
    ({ double _v12350 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12350); _v12350; });
    ({ double _v12351 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12351); _v12351; });
    ({ double _v12352 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12352); _v12352; });
    ({ bool _v12353 = true; this->f_S__3c__60_ = _v12353; _v12353; });
    ({ double _v12354 = 7.0; this->f_S__21__22_E = rt::touint_d(_v12354); _v12354; });
}
rt::Value C_S_6_22_B::m_S__40__22_() {
    RT_FN("S_6_22_B.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[760]), C_S__26_c::sm_S_6_21_T(C_S_6_22_B::sm_S__27__21_b(), 3.0, true)));
    return rt::NUL;
}
bool C_S_6_22_B::g_S__2d_6() {
    RT_FN("S_6_22_B.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 3.0);
    return false;
}
double C_S_6_22_B::sm_S__27__21_b() {
    RT_FN("S_6_22_B.S__27__21_b");
    return (1.5 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), 1.5));
    return 0.0;
}
C_S_6_22_B* C_S_6_22_B::alloc_() {
    C_S_6_22_B* o = rt::make<C_S_6_22_B>();
    return o;
}
rt::Value C_S_6_22_B::mk_(rt::Value* a, int n) {
    C_S_6_22_B* o = alloc_();
    o->C_S_6_22_B::ctor_();
    return rt::VO(o);
}
bool C_S_6_22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_22_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_22_B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_22_B::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_6_22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22_B__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_7_22__3f_::ctor_() {
    RT_FN("S_7_22__3f_.S_7_22__3f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12355 = 898.0; this->f_S_6_21_Z = rt::touint_d(_v12355); _v12355; });
    ({ rt::Value _v12356 = rt::trv(rt::VS(g::LS[3554])); this->f_S_1i = rt::slot_string(_v12356); _v12356; });
    ({ rt::Value _v12357 = rt::VS(g::LS[3555]); this->f_S__5e__21__23_ = rt::slot_string(_v12357); _v12357; });
    ({ double _v12358 = 1e+165; this->f_S__23__21_m = _v12358; _v12358; });
    ({ double _v12359 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12359); _v12359; });
    ({ double _v12360 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12360); _v12360; });
    ({ double _v12361 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12361); _v12361; });
    ({ bool _v12362 = true; this->f_S__3c__60_ = _v12362; _v12362; });
    ({ double _v12363 = 5.0; this->f_S__21__22_E = rt::touint_d(_v12363); _v12363; });
}
rt::Value C_S_7_22__3f_::m_S__40__22_() {
    RT_FN("S_7_22__3f_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[3556]), C_S__26_c::sm_S_8_21_Z(C_S_7_22__3f_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[3557]), C_S__26_c::sm_S_8_21_Z(C_S_7_22__3f_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
bool C_S_7_22__3f_::g_S__2d_6() {
    RT_FN("S_7_22__3f_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 2.0);
    return false;
}
double C_S_7_22__3f_::sm_S_9L() {
    RT_FN("S_7_22__3f_.S_9L");
    return (0.4 * rt::m_pow(C_S__26_c::sm_S_3L(false, C_S__26_c::dsm_S_3L_1()), 0.6));
    return 0.0;
}
double C_S_7_22__3f_::sm_S__2c__21_G() {
    RT_FN("S_7_22__3f_.S__2c__21_G");
    return (0.2 * rt::m_pow(C_S__26_c::sm_S_3L(false, C_S__26_c::dsm_S_3L_1()), 0.6));
    return 0.0;
}
C_S_7_22__3f_* C_S_7_22__3f_::alloc_() {
    C_S_7_22__3f_* o = rt::make<C_S_7_22__3f_>();
    return o;
}
rt::Value C_S_7_22__3f_::mk_(rt::Value* a, int n) {
    C_S_7_22__3f_* o = alloc_();
    o->C_S_7_22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S_7_22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7_22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7_22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7_22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7_22__3f_::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_7_22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22__3f___id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_8_22__3f_::ctor_() {
    RT_FN("S_8_22__3f_.S_8_22__3f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12364 = 902.0; this->f_S_6_21_Z = rt::touint_d(_v12364); _v12364; });
    ({ rt::Value _v12365 = rt::trv(rt::VS(g::LS[3558])); this->f_S_1i = rt::slot_string(_v12365); _v12365; });
    ({ rt::Value _v12366 = rt::VS(g::LS[3559]); this->f_S__5e__21__23_ = rt::slot_string(_v12366); _v12366; });
    ({ double _v12367 = 1e+177; this->f_S__23__21_m = _v12367; _v12367; });
    ({ double _v12368 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12368); _v12368; });
    ({ double _v12369 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12369); _v12369; });
    ({ double _v12370 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12370); _v12370; });
    ({ bool _v12371 = true; this->f_S__3c__60_ = _v12371; _v12371; });
    ({ double _v12372 = 9.0; this->f_S__21__22_E = rt::touint_d(_v12372); _v12372; });
}
rt::Value C_S_8_22__3f_::m_S__40__22_() {
    RT_FN("S_8_22__3f_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3560]), C_S__26_c::sm_S_8_21_Z(C_S_8_22__3f_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_8_22__3f_::g_S__2d_6() {
    RT_FN("S_8_22__3f_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 3.0);
    return false;
}
double C_S_8_22__3f_::sm_S_9L() {
    RT_FN("S_8_22__3f_.S_9L");
    return (1.8 * rt::m_pow((0.5 * rt::m_log((1.0 + rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 145.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 145.0)))))), 1.8));
    return 0.0;
}
C_S_8_22__3f_* C_S_8_22__3f_::alloc_() {
    C_S_8_22__3f_* o = rt::make<C_S_8_22__3f_>();
    return o;
}
rt::Value C_S_8_22__3f_::mk_(rt::Value* a, int n) {
    C_S_8_22__3f_* o = alloc_();
    o->C_S_8_22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S_8_22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_22__3f_::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S_8_22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22__3f___id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S_9_22__21_::ctor_() {
    RT_FN("S_9_22__21_.S_9_22__21_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12373 = 892.0; this->f_S_6_21_Z = rt::touint_d(_v12373); _v12373; });
    ({ rt::Value _v12374 = rt::trv(rt::VS(g::LS[3561])); this->f_S_1i = rt::slot_string(_v12374); _v12374; });
    ({ rt::Value _v12375 = rt::VS(g::LS[3562]); this->f_S__5e__21__23_ = rt::slot_string(_v12375); _v12375; });
    ({ rt::Value _v12376 = rt::VS(g::LS[3517]); this->f_S__3f__21__3d_ = rt::slot_string(_v12376); _v12376; });
    ({ rt::Value _v12377 = rt::VS(g::LS[3517]); this->f_S__40_1 = rt::slot_string(_v12377); _v12377; });
    ({ rt::Value _v12378 = rt::trv(rt::VS(g::LS[3521])); this->f_S_7_23_ = rt::slot_string(_v12378); _v12378; });
    ({ double _v12379 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12379); _v12379; });
    ({ double _v12380 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12380); _v12380; });
    ({ double _v12381 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12381); _v12381; });
    ({ bool _v12382 = true; this->f_S__3c__60_ = _v12382; _v12382; });
}
int32_t C_S_9_22__21_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_9_22__21_::dm_S_75_2() { return false; }
rt::Value C_S_9_22__21_::dm_S_75_3() { return rt::NUL; }
double C_S_9_22__21_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_9_22__21_.S_75");
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 5.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+57 : 1e+30);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S_9_22__21_::g_S__2d_6() {
    RT_FN("S_9_22__21_.S__2d_6_get");
    return ({ bool _t12383 = this->C_S__60_6::g_S__2d_6(); _t12383 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == 14.0)) : _t12383; });
    return false;
}
C_S_9_22__21_* C_S_9_22__21_::alloc_() {
    C_S_9_22__21_* o = rt::make<C_S_9_22__21_>();
    return o;
}
rt::Value C_S_9_22__21_::mk_(rt::Value* a, int n) {
    C_S_9_22__21_* o = alloc_();
    o->C_S_9_22__21_::ctor_();
    return rt::VO(o);
}
bool C_S_9_22__21_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_22__21_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_22__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_9_22__21_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_9_22__21_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_9_22__21_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_22__21_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_22__21_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22__21___id)); return true;
    default: return false;
    }
}
bool C_S_9_22__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22__21___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_22__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__21_z::ctor_() {
    RT_FN("S__3b__21_z.S__3b__21_z");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12384 = 894.0; this->f_S_6_21_Z = rt::touint_d(_v12384); _v12384; });
    ({ rt::Value _v12385 = rt::trv(rt::VS(g::LS[3563])); this->f_S_1i = rt::slot_string(_v12385); _v12385; });
    ({ rt::Value _v12386 = rt::VS(g::LS[3564]); this->f_S__5e__21__23_ = rt::slot_string(_v12386); _v12386; });
    ({ rt::Value _v12387 = rt::VS(g::LS[3517]); this->f_S__3f__21__3d_ = rt::slot_string(_v12387); _v12387; });
    ({ rt::Value _v12388 = rt::VS(g::LS[3517]); this->f_S__40_1 = rt::slot_string(_v12388); _v12388; });
    ({ double _v12389 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12389); _v12389; });
    ({ double _v12390 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12390); _v12390; });
    ({ double _v12391 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12391); _v12391; });
    ({ bool _v12392 = true; this->f_S__21__21_n = _v12392; _v12392; });
}
int32_t C_S__3b__21_z::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__3b__21_z::dm_S_75_2() { return false; }
rt::Value C_S__3b__21_z::dm_S_75_3() { return rt::NUL; }
double C_S__3b__21_z::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__3b__21_z.S_75");
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 5.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+69 : 1e+39);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__3b__21_z::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3b__21_z.S__40__22_");
    (l_A__loc1_ = rt::slot_string(((((double)(g::SV.C_S_8G__S__2d__21_x)) == 14.0) ? rt::add(rt::trv(rt::VS(g::LS[3521])), rt::VS(g::LS[8])) : rt::VS(g::LS[113]))));
    return rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[3565]))));
    return rt::NUL;
}
bool C_S__3b__21_z::g_S__2d_6() {
    RT_FN("S__3b__21_z.S__2d_6_get");
    return ({ bool _t12395 = ({ bool _t12394 = ({ bool _t12393 = this->C_S__60_6::g_S__2d_6(); _t12393 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == 14.0)) : _t12393; }); _t12394 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 130.0)) : _t12394; }); _t12395 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_5_22__27___id)) : _t12395; });
    return false;
}
bool C_S__3b__21_z::g_S__22_h() {
    RT_FN("S__3b__21_z.S__22_h_get");
    return (((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)));
    return false;
}
C_S__3b__21_z* C_S__3b__21_z::alloc_() {
    C_S__3b__21_z* o = rt::make<C_S__3b__21_z>();
    return o;
}
rt::Value C_S__3b__21_z::mk_(rt::Value* a, int n) {
    C_S__3b__21_z* o = alloc_();
    o->C_S__3b__21_z::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__22_h: out = rt::VB(g_S__22_h()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b__21_z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__22_h: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b__21_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__3b__21_z::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__3b__21_z::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__3b__21_z::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__22_h: { rt::Value f = rt::VB(g_S__22_h()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b__21_z::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__22_h: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b__21_z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_z__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3b__21_z__S_1_21_S); return true;
    default: return false;
    }
}
bool C_S__3b__21_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_z__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3b__21_z__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3b__21_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__22_B::ctor_() {
    RT_FN("S__5b__22_B.S__5b__22_B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12396 = 903.0; this->f_S_6_21_Z = rt::touint_d(_v12396); _v12396; });
    ({ rt::Value _v12397 = rt::trv(rt::VS(g::LS[3566])); this->f_S_1i = rt::slot_string(_v12397); _v12397; });
    ({ rt::Value _v12398 = rt::VS(g::LS[3567]); this->f_S__5e__21__23_ = rt::slot_string(_v12398); _v12398; });
    ({ double _v12399 = 1e+157; this->f_S__23__21_m = _v12399; _v12399; });
    ({ double _v12400 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12400); _v12400; });
    ({ double _v12401 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12401); _v12401; });
    ({ double _v12402 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12402); _v12402; });
    ({ bool _v12403 = true; this->f_S__3c__60_ = _v12403; _v12403; });
    ({ double _v12404 = 3.0; this->f_S__21__22_E = rt::touint_d(_v12404); _v12404; });
}
rt::Value C_S__5b__22_B::m_S__40__22_() {
    RT_FN("S__5b__22_B.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3568]), C_S__26_c::sm_S_8_21_Z(C_S__5b__22_B::sm_S__22__21_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__5b__22_B::g_S__2d_6() {
    RT_FN("S__5b__22_B.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 1.0);
    return false;
}
double C_S__5b__22_B::sm_S__22__21_y() {
    int32_t l_A__loc1_ = 0;
    rt::Value l_A__loc3_ = rt::NUL;
    double l_A__loc2_ = NAN;
    RT_FN("S__5b__22_B.S__22__21_y");
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::NUL);
    (l_A__loc2_ = 0.0);
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) < rt::alen(g::SV.C_S_8G__S__2d__21_4))) {
        (l_A__loc3_ = rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc1_))));
        if ((rt::is_class(l_A__loc3_, C_S__26__21__5f_::CI) && ({ rt::Value _o12405 = l_A__loc3_; C_S__60_6* _p12406 = rt::as_ptr<C_S__60_6>(_o12405); _p12406 ? _p12406->f_S__3c__21_7 : rt::T(rt::dget(_o12405, NM_S__3c__21_7)); }))) {
            (l_A__loc2_ = (l_A__loc2_ + C_S__26_c::sm_S_1_21_n(((double)(({ rt::Value _o12408 = (({ rt::Value _t12407 = l_A__loc3_; rt::is_class(_t12407, C_S__26__21__5f_::CI) ? _t12407 : rt::NUL; })); C_S__26__21__5f_* _p12409 = rt::as_ptr<C_S__26__21__5f_>(_o12408); _p12409 ? _p12409->f_S__25_w : rt::toint(rt::dget(_o12408, NM_S__25_w)); }))))));
        }
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    return rt::m_pow(l_A__loc2_, 1.15);
    return 0.0;
}
C_S__5b__22_B* C_S__5b__22_B::alloc_() {
    C_S__5b__22_B* o = rt::make<C_S__5b__22_B>();
    return o;
}
rt::Value C_S__5b__22_B::mk_(rt::Value* a, int n) {
    C_S__5b__22_B* o = alloc_();
    o->C_S__5b__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5b__22_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5b__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5b__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5b__22_B::smeth_(int id) {
    switch (id) {
    case NM_S__22__21_y: return true;
    default: return false;
    }
}
bool C_S__5b__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22_B__id)); return true;
    case NM_S__22__21_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21_y: out = rt::V(sm_S__22__21_y()); return true;
    default: return false;
    }
}
void C_S__5d__22_A::ctor_() {
    RT_FN("S__5d__22_A.S__5d__22_A");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12410 = 895.0; this->f_S_6_21_Z = rt::touint_d(_v12410); _v12410; });
    ({ rt::Value _v12411 = rt::trv(rt::VS(g::LS[3569])); this->f_S_1i = rt::slot_string(_v12411); _v12411; });
    ({ rt::Value _v12412 = rt::VS(g::LS[3570]); this->f_S__5e__21__23_ = rt::slot_string(_v12412); _v12412; });
    ({ double _v12413 = 1e+185; this->f_S__23__21_m = _v12413; _v12413; });
    ({ double _v12414 = 5.0; this->f_S_9_21_m = rt::toint_d(_v12414); _v12414; });
    ({ double _v12415 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12415); _v12415; });
    ({ double _v12416 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12416); _v12416; });
    ({ bool _v12417 = true; this->f_S__21__21_n = _v12417; _v12417; });
    ({ double _v12418 = 11.0; this->f_S__21__22_E = rt::touint_d(_v12418); _v12418; });
}
rt::Value C_S__5d__22_A::m_S__40__22_() {
    RT_FN("S__5d__22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3571]), C_S__26_c::sm_S_8_21_Z(C_S__5d__22_A::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__5d__22_A::g_S__2d_6() {
    RT_FN("S__5d__22_A.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3517])))) >= 4.0);
    return false;
}
double C_S__5d__22_A::sm_S__22__21__26_() {
    RT_FN("S__5d__22_A.S__22__21__26_");
    return (0.4 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.8));
    return 0.0;
}
C_S__5d__22_A* C_S__5d__22_A::alloc_() {
    C_S__5d__22_A* o = rt::make<C_S__5d__22_A>();
    return o;
}
rt::Value C_S__5d__22_A::mk_(rt::Value* a, int n) {
    C_S__5d__22_A* o = alloc_();
    o->C_S__5d__22_A::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5d__22_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5d__22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5d__22_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5d__22_A::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__5d__22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22_A__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__25__22__21_::ctor_() {
    RT_FN("S__25__22__21_.S__25__22__21_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12419 = 878.0; this->f_S_6_21_Z = rt::touint_d(_v12419); _v12419; });
    ({ rt::Value _v12420 = rt::trv(rt::VS(g::LS[3572])); this->f_S_1i = rt::slot_string(_v12420); _v12420; });
    ({ rt::Value _v12421 = rt::VS(g::LS[3573]); this->f_S__5e__21__23_ = rt::slot_string(_v12421); _v12421; });
    ({ rt::Value _v12422 = rt::VS(g::LS[3574]); this->f_S__3f__21__3d_ = rt::slot_string(_v12422); _v12422; });
    ({ rt::Value _v12423 = rt::VS(g::LS[3574]); this->f_S__40_1 = rt::slot_string(_v12423); _v12423; });
    ({ rt::Value _v12424 = rt::trv(rt::VS(g::LS[3575])); this->f_S_7_23_ = rt::slot_string(_v12424); _v12424; });
    ({ double _v12425 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12425); _v12425; });
    ({ double _v12426 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12426); _v12426; });
    ({ double _v12427 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12427); _v12427; });
    ({ bool _v12428 = true; this->f_S__3c__60_ = _v12428; _v12428; });
}
int32_t C_S__25__22__21_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__25__22__21_::dm_S_75_2() { return false; }
rt::Value C_S__25__22__21_::dm_S_75_3() { return rt::NUL; }
double C_S__25__22__21_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__25__22__21_.S_75");
    if (((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 4.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+57 : 1e+30);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__25__22__21_::g_S__2d_6() {
    RT_FN("S__25__22__21_.S__2d_6_get");
    return ({ bool _t12429 = this->C_S__60_6::g_S__2d_6(); _t12429 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == 13.0)) : _t12429; });
    return false;
}
C_S__25__22__21_* C_S__25__22__21_::alloc_() {
    C_S__25__22__21_* o = rt::make<C_S__25__22__21_>();
    return o;
}
rt::Value C_S__25__22__21_::mk_(rt::Value* a, int n) {
    C_S__25__22__21_* o = alloc_();
    o->C_S__25__22__21_::ctor_();
    return rt::VO(o);
}
bool C_S__25__22__21_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__22__21_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__22__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__25__22__21_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__25__22__21_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__25__22__21_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__22__21_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__22__21_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__22__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22__21___id)); return true;
    default: return false;
    }
}
bool C_S__25__22__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22__21___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__22__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__22_B::ctor_() {
    RT_FN("S__25__22_B.S__25__22_B");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12430 = 887.0; this->f_S_6_21_Z = rt::touint_d(_v12430); _v12430; });
    ({ rt::Value _v12431 = rt::trv(rt::VS(g::LS[3576])); this->f_S_1i = rt::slot_string(_v12431); _v12431; });
    ({ rt::Value _v12432 = rt::VS(g::LS[3577]); this->f_S__5e__21__23_ = rt::slot_string(_v12432); _v12432; });
    ({ double _v12433 = 1e+153; this->f_S__23__21_m = _v12433; _v12433; });
    ({ double _v12434 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12434); _v12434; });
    ({ double _v12435 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12435); _v12435; });
    ({ double _v12436 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12436); _v12436; });
    ({ bool _v12437 = true; this->f_S__3c__60_ = _v12437; _v12437; });
    ({ double _v12438 = 1.0; this->f_S__21__22_E = rt::touint_d(_v12438); _v12438; });
}
rt::Value C_S__25__22_B::m_S__40__22_() {
    RT_FN("S__25__22_B.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3578]), C_S__26_c::sm_S_6_21_T(C_S__25__22_B::sm_S__27__21_b(), 3.0, true)));
    return rt::NUL;
}
bool C_S__25__22_B::g_S__2d_6() {
    RT_FN("S__25__22_B.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 1.0);
    return false;
}
double C_S__25__22_B::sm_S__27__21_b() {
    RT_FN("S__25__22_B.S__27__21_b");
    return (0.9 * rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 147.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 147.0))));
    return 0.0;
}
C_S__25__22_B* C_S__25__22_B::alloc_() {
    C_S__25__22_B* o = rt::make<C_S__25__22_B>();
    return o;
}
rt::Value C_S__25__22_B::mk_(rt::Value* a, int n) {
    C_S__25__22_B* o = alloc_();
    o->C_S__25__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__25__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__22_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__22_B::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__25__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22_B__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3e__22__40_::ctor_() {
    RT_FN("S__3e__22__40_.S__3e__22__40_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12439 = 874.0; this->f_S_6_21_Z = rt::touint_d(_v12439); _v12439; });
    ({ rt::Value _v12440 = rt::trv(rt::VS(g::LS[3579])); this->f_S_1i = rt::slot_string(_v12440); _v12440; });
    ({ rt::Value _v12441 = rt::VS(g::LS[3580]); this->f_S__5e__21__23_ = rt::slot_string(_v12441); _v12441; });
    ({ double _v12442 = 1e+167; this->f_S__23__21_m = _v12442; _v12442; });
    ({ double _v12443 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12443); _v12443; });
    ({ double _v12444 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12444); _v12444; });
    ({ double _v12445 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12445); _v12445; });
    ({ bool _v12446 = true; this->f_S__3c__60_ = _v12446; _v12446; });
    ({ double _v12447 = 6.0; this->f_S__21__22_E = rt::touint_d(_v12447); _v12447; });
}
rt::Value C_S__3e__22__40_::m_S__40__22_() {
    RT_FN("S__3e__22__40_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3581]), C_S__26_c::sm_S_6_21_T(C_S__3e__22__40_::sm_S__2b__2b_(), 3.0, true)));
    return rt::NUL;
}
bool C_S__3e__22__40_::g_S__2d_6() {
    RT_FN("S__3e__22__40_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 2.0);
    return false;
}
double C_S__3e__22__40_::sm_S__2b__2b_() {
    RT_FN("S__3e__22__40_.S__2b__2b_");
    return ((30.0 + (0.75 * rt::m_pow(C_S__26_c::sm_S__21__21_8(), 0.75))) + (4.0 * rt::m_pow(rt::tonum(rt::add(rt::add(rt::add(rt::add(rt::V(1.0), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 104.0)), rt::arr_at(g::SV.C_S_8G__S__3d_y, 104.0)), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 135.0)), rt::arr_at(g::SV.C_S_8G__S__3d_y, 135.0))), 4.0)));
    return 0.0;
}
C_S__3e__22__40_* C_S__3e__22__40_::alloc_() {
    C_S__3e__22__40_* o = rt::make<C_S__3e__22__40_>();
    return o;
}
rt::Value C_S__3e__22__40_::mk_(rt::Value* a, int n) {
    C_S__3e__22__40_* o = alloc_();
    o->C_S__3e__22__40_::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e__22__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e__22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e__22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e__22__40_::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__3e__22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22__40___id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22__40___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__26__22_D::ctor_() {
    RT_FN("S__26__22_D.S__26__22_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12448 = 882.0; this->f_S_6_21_Z = rt::touint_d(_v12448); _v12448; });
    ({ rt::Value _v12449 = rt::trv(rt::VS(g::LS[3582])); this->f_S_1i = rt::slot_string(_v12449); _v12449; });
    ({ rt::Value _v12450 = rt::VS(g::LS[3583]); this->f_S__5e__21__23_ = rt::slot_string(_v12450); _v12450; });
    ({ double _v12451 = 1e+163; this->f_S__23__21_m = _v12451; _v12451; });
    ({ double _v12452 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12452); _v12452; });
    ({ double _v12453 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12453); _v12453; });
    ({ double _v12454 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12454); _v12454; });
    ({ bool _v12455 = true; this->f_S__3c__60_ = _v12455; _v12455; });
    ({ double _v12456 = 4.0; this->f_S__21__22_E = rt::touint_d(_v12456); _v12456; });
}
rt::Value C_S__26__22_D::m_S__40__22_() {
    RT_FN("S__26__22_D.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3584]), C_S__26_c::sm_S_8_21_Z(C_S__26__22_D::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__26__22_D::g_S__2d_6() {
    RT_FN("S__26__22_D.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 2.0);
    return false;
}
double C_S__26__22_D::sm_S__22__21__26_() {
    RT_FN("S__26__22_D.S__22__21__26_");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.5));
    return 0.0;
}
C_S__26__22_D* C_S__26__22_D::alloc_() {
    C_S__26__22_D* o = rt::make<C_S__26__22_D>();
    return o;
}
rt::Value C_S__26__22_D::mk_(rt::Value* a, int n) {
    C_S__26__22_D* o = alloc_();
    o->C_S__26__22_D::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__22_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__22_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__22_D::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__26__22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_D__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_D__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__27__22__21_::ctor_() {
    RT_FN("S__27__22__21_.S__27__22__21_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12457 = 879.0; this->f_S_6_21_Z = rt::touint_d(_v12457); _v12457; });
    ({ rt::Value _v12458 = rt::trv(rt::VS(g::LS[3585])); this->f_S_1i = rt::slot_string(_v12458); _v12458; });
    ({ rt::Value _v12459 = rt::VS(g::LS[3586]); this->f_S__5e__21__23_ = rt::slot_string(_v12459); _v12459; });
    ({ rt::Value _v12460 = rt::VS(g::LS[3574]); this->f_S__3f__21__3d_ = rt::slot_string(_v12460); _v12460; });
    ({ rt::Value _v12461 = rt::VS(g::LS[3574]); this->f_S__40_1 = rt::slot_string(_v12461); _v12461; });
    ({ rt::Value _v12462 = rt::trv(rt::VS(g::LS[3575])); this->f_S_7_23_ = rt::slot_string(_v12462); _v12462; });
    ({ double _v12463 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12463); _v12463; });
    ({ double _v12464 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12464); _v12464; });
    ({ double _v12465 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12465); _v12465; });
    ({ bool _v12466 = true; this->f_S__3c__60_ = _v12466; _v12466; });
}
int32_t C_S__27__22__21_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__27__22__21_::dm_S_75_2() { return false; }
rt::Value C_S__27__22__21_::dm_S_75_3() { return rt::NUL; }
double C_S__27__22__21_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__27__22__21_.S_75");
    if (((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 4.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+63 : 1e+33);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__27__22__21_::g_S__2d_6() {
    RT_FN("S__27__22__21_.S__2d_6_get");
    return ({ bool _t12467 = this->C_S__60_6::g_S__2d_6(); _t12467 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == 13.0)) : _t12467; });
    return false;
}
C_S__27__22__21_* C_S__27__22__21_::alloc_() {
    C_S__27__22__21_* o = rt::make<C_S__27__22__21_>();
    return o;
}
rt::Value C_S__27__22__21_::mk_(rt::Value* a, int n) {
    C_S__27__22__21_* o = alloc_();
    o->C_S__27__22__21_::ctor_();
    return rt::VO(o);
}
bool C_S__27__22__21_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__22__21_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__22__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__27__22__21_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__27__22__21_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__27__22__21_::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__22__21_::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__22__21_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27__22__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22__21___id)); return true;
    default: return false;
    }
}
bool C_S__27__22__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22__21___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__22__3d_::ctor_() {
    RT_FN("S__2b__22__3d_.S__2b__22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12468 = 881.0; this->f_S_6_21_Z = rt::touint_d(_v12468); _v12468; });
    ({ rt::Value _v12469 = rt::trv(rt::VS(g::LS[3587])); this->f_S_1i = rt::slot_string(_v12469); _v12469; });
    ({ rt::Value _v12470 = rt::VS(g::LS[3588]); this->f_S__5e__21__23_ = rt::slot_string(_v12470); _v12470; });
    ({ double _v12471 = 1e+165; this->f_S__23__21_m = _v12471; _v12471; });
    ({ double _v12472 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12472); _v12472; });
    ({ double _v12473 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12473); _v12473; });
    ({ double _v12474 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12474); _v12474; });
    ({ bool _v12475 = true; this->f_S__3c__60_ = _v12475; _v12475; });
    ({ double _v12476 = 5.0; this->f_S__21__22_E = rt::touint_d(_v12476); _v12476; });
}
rt::Value C_S__2b__22__3d_::m_S__40__22_() {
    RT_FN("S__2b__22__3d_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[3589]), C_S__26_c::sm_S_8_21_Z(C_S__2b__22__3d_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[3590]), C_S__26_c::sm_S_8_21_Z(C_S__2b__22__3d_::sm_S__40_L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
bool C_S__2b__22__3d_::g_S__2d_6() {
    RT_FN("S__2b__22__3d_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 2.0);
    return false;
}
double C_S__2b__22__3d_::sm_S_9L() {
    RT_FN("S__2b__22__3d_.S_9L");
    return C_S__26_c::sm_S__25__21_6(false, true);
    return 0.0;
}
double C_S__2b__22__3d_::sm_S__40_L() {
    RT_FN("S__2b__22__3d_.S__40_L");
    return (1.15 * rt::m_pow(C_S__26_c::sm_S__25__21_6(false, true), 1.15));
    return 0.0;
}
C_S__2b__22__3d_* C_S__2b__22__3d_::alloc_() {
    C_S__2b__22__3d_* o = rt::make<C_S__2b__22__3d_>();
    return o;
}
rt::Value C_S__2b__22__3d_::mk_(rt::Value* a, int n) {
    C_S__2b__22__3d_* o = alloc_();
    o->C_S__2b__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b__22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    case NM_S__40_L: return true;
    default: return false;
    }
}
bool C_S__2b__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22__3d___id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40_L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    case NM_S__40_L: out = rt::V(sm_S__40_L()); return true;
    default: return false;
    }
}
void C_S_2_22__24_::ctor_() {
    RT_FN("S_2_22__24_.S_2_22__24_");
    (void)((this->C_S__3e_p::ctor_(), rt::NUL));
    ({ double _v12477 = 939.0; this->f_S_6_21_Z = rt::touint_d(_v12477); _v12477; });
    ({ rt::Value _v12478 = rt::trv(rt::VS(g::LS[3591])); this->f_S_1i = rt::slot_string(_v12478); _v12478; });
    ({ rt::Value _v12479 = rt::VS(g::LS[3592]); this->f_S__5e__21__23_ = rt::slot_string(_v12479); _v12479; });
    ({ double _v12480 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12480); _v12480; });
    ({ double _v12481 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12481); _v12481; });
    ({ double _v12482 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12482); _v12482; });
}
rt::Value C_S_2_22__24_::m_S__3e__21_d() {
    RT_FN("S_2_22__24_.S__3e__21_d");
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 3.0)) {
        return rt::slot_string(rt::trv(rt::VS(g::LS[3593]), C_S__26_c::sm_S_8_21_Z(C_S_2_22__24_::sm_S_6_22__24_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[3594]), C_S__26_c::sm_S_8_21_Z(C_S_2_22__24_::sm_S__2b__22_3(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_2_22__24_::sm_S_6_22__24_() {
    RT_FN("S_2_22__24_.S_6_22__24_");
    return rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()))), 3.0);
    return 0.0;
}
double C_S_2_22__24_::sm_S__2b__22_3() {
    RT_FN("S_2_22__24_.S__2b__22_3");
    return (1.0 + rt::m_max2(0.0, rt::m_floor((((rt::m_pow((1.0 + ((((8.0 * C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4())) / 60.0) / 60.0) / 36.0)), 0.5) - 1.0)) / 2.0))));
    return 0.0;
}
C_S_2_22__24_* C_S_2_22__24_::alloc_() {
    C_S_2_22__24_* o = rt::make<C_S_2_22__24_>();
    return o;
}
rt::Value C_S_2_22__24_::mk_(rt::Value* a, int n) {
    C_S_2_22__24_* o = alloc_();
    o->C_S_2_22__24_::ctor_();
    return rt::VO(o);
}
bool C_S_2_22__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3e_p::dget(id, out);
}
bool C_S_2_22__24_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3e_p::dset(id, v);
}
bool C_S_2_22__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3e__21_d: out = m_S__3e__21_d(); return true;
    default: break;
    }
    return C_S__3e_p::dcall(id, a, n, out);
}
bool C_S_2_22__24_::dmeth(int id) {
    switch (id) {
    case NM_S__3e__21_d: return true;
    default: break;
    }
    return C_S__3e_p::dmeth(id);
}
bool C_S_2_22__24_::smeth_(int id) {
    switch (id) {
    case NM_S_6_22__24_: return true;
    case NM_S__2b__22_3: return true;
    default: return false;
    }
}
bool C_S_2_22__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22__24___id)); return true;
    case NM_S_6_22__24_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__22_3: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_22__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_22__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_22__24_: out = rt::V(sm_S_6_22__24_()); return true;
    case NM_S__2b__22_3: out = rt::V(sm_S__2b__22_3()); return true;
    default: return false;
    }
}
void C_S_3_21_y::ctor_() {
    RT_FN("S_3_21_y.S_3_21_y");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12483 = 928.0; this->f_S_6_21_Z = rt::touint_d(_v12483); _v12483; });
    ({ rt::Value _v12484 = rt::trv(rt::VS(g::LS[3595])); this->f_S_1i = rt::slot_string(_v12484); _v12484; });
    ({ rt::Value _v12485 = rt::VS(g::LS[558]); this->f_S__5e__21__23_ = rt::slot_string(_v12485); _v12485; });
    ({ double _v12486 = 1e+147; this->f_S__23__21_m = _v12486; _v12486; });
    ({ double _v12487 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12487); _v12487; });
    ({ double _v12488 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12488); _v12488; });
    ({ double _v12489 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12489); _v12489; });
    ({ bool _v12490 = false; this->f_S_3e = _v12490; _v12490; });
}
rt::Value C_S_3_21_y::m_S__40__22_() {
    RT_FN("S_3_21_y.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3596]), C_S__26_c::sm_S_8_21_Z(3.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_3_21_y::m_S_6r() {
    RT_FN("S_3_21_y.S_6r");
    (void)(({ rt::Value _o12491 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p12492 = rt::as_ptr<C_S__20_g>(_o12491); _p12492 ? _p12492->m_S__26__2b_(rt::toint_d(953.0), rt::toint_d(0.0)) : rt::dcallv(_o12491, NM_S__26__2b_, rt::V(953.0), rt::V(0.0)); }));
    (void)(({ rt::Value _o12493 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p12494 = rt::as_ptr<C_S_8G>(_o12493); _p12494 ? _p12494->m_S_3_21__20_(C_S_8G::sm_S__3d_Y(g::SV.C_S__3e__21_z__id)) : rt::dcallv(_o12493, NM_S_3_21__20_, C_S_8G::sm_S__3d_Y(g::SV.C_S__3e__21_z__id)); }));
    return rt::NUL;
}
bool C_S_3_21_y::g_S__2d_6() {
    RT_FN("S_3_21_y.S__2d_6_get");
    return ({ bool _t12497 = ({ bool _t12496 = ({ bool _t12495 = (!C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_z__id)); _t12495 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5e__21_x__id)) : _t12495; }); _t12496 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_3_22__20___id)) : _t12496; }); _t12497 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__25__21_z__id)) : _t12497; });
    return false;
}
bool C_S_3_21_y::g_S_9_21__25_() {
    RT_FN("S_3_21_y.S_9_21__25__get");
    return (C_S__26_c::sm_S_7i(g::SV.C_S_9_21_n__id, false, false, true) >= 10800.0);
    return false;
}
C_S_3_21_y* C_S_3_21_y::alloc_() {
    C_S_3_21_y* o = rt::make<C_S_3_21_y>();
    return o;
}
rt::Value C_S_3_21_y::mk_(rt::Value* a, int n) {
    C_S_3_21_y* o = alloc_();
    o->C_S_3_21_y::ctor_();
    return rt::VO(o);
}
bool C_S_3_21_y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_3_21_y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_3_21_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_3_21_y::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_3_21_y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_21_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_21_y__id)); return true;
    case NM_S_13: out = rt::V(g::SV.C_S_3_21_y__S_13); return true;
    default: return false;
    }
}
bool C_S_3_21_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_21_y__id = rt::touint(v); return true;
    case NM_S_13: g::SV.C_S_3_21_y__S_13 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_3_21_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_22_D::ctor_() {
    RT_FN("S_3_22_D.S_3_22_D");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12498 = 884.0; this->f_S_6_21_Z = rt::touint_d(_v12498); _v12498; });
    ({ rt::Value _v12499 = rt::trv(rt::VS(g::LS[3597])); this->f_S_1i = rt::slot_string(_v12499); _v12499; });
    ({ rt::Value _v12500 = rt::VS(g::LS[3598]); this->f_S__5e__21__23_ = rt::slot_string(_v12500); _v12500; });
    ({ double _v12501 = 1e+187; this->f_S__23__21_m = _v12501; _v12501; });
    ({ double _v12502 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12502); _v12502; });
    ({ double _v12503 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12503); _v12503; });
    ({ double _v12504 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12504); _v12504; });
    ({ bool _v12505 = true; this->f_S__21__21_n = _v12505; _v12505; });
    ({ double _v12506 = 12.0; this->f_S__21__22_E = rt::touint_d(_v12506); _v12506; });
}
rt::Value C_S_3_22_D::m_S__40__22_() {
    RT_FN("S_3_22_D.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3536]), C_S__26_c::sm_S_8_21_Z(C_S_3_22_D::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_3_22_D::g_S__2d_6() {
    RT_FN("S_3_22_D.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 4.0);
    return false;
}
double C_S_3_22_D::sm_S_6_21_Y() {
    RT_FN("S_3_22_D.S_6_21_Y");
    return (0.15 * rt::m_pow(C_S__26_c::sm_S__22__21_z(false, C_S__26_c::dsm_S__22__21_z_1()), 0.7));
    return 0.0;
}
C_S_3_22_D* C_S_3_22_D::alloc_() {
    C_S_3_22_D* o = rt::make<C_S_3_22_D>();
    return o;
}
rt::Value C_S_3_22_D::mk_(rt::Value* a, int n) {
    C_S_3_22_D* o = alloc_();
    o->C_S_3_22_D::ctor_();
    return rt::VO(o);
}
bool C_S_3_22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_3_22_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_3_22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_3_22_D::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_3_22_D::smeth_(int id) {
    switch (id) {
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S_3_22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_22_D__id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_3_22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_22_D__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S_6_21_z::ctor_() {
    RT_FN("S_6_21_z.S_6_21_z");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12507 = 880.0; this->f_S_6_21_Z = rt::touint_d(_v12507); _v12507; });
    ({ rt::Value _v12508 = rt::trv(rt::VS(g::LS[3599])); this->f_S_1i = rt::slot_string(_v12508); _v12508; });
    ({ rt::Value _v12509 = rt::VS(g::LS[3600]); this->f_S__5e__21__23_ = rt::slot_string(_v12509); _v12509; });
    ({ rt::Value _v12510 = rt::VS(g::LS[3574]); this->f_S__3f__21__3d_ = rt::slot_string(_v12510); _v12510; });
    ({ rt::Value _v12511 = rt::VS(g::LS[3574]); this->f_S__40_1 = rt::slot_string(_v12511); _v12511; });
    ({ double _v12512 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12512); _v12512; });
    ({ double _v12513 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12513); _v12513; });
    ({ double _v12514 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12514); _v12514; });
    ({ bool _v12515 = true; this->f_S__21__21_n = _v12515; _v12515; });
}
int32_t C_S_6_21_z::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_6_21_z::dm_S_75_2() { return false; }
rt::Value C_S_6_21_z::dm_S_75_3() { return rt::NUL; }
double C_S_6_21_z::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_6_21_z.S_75");
    if (((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 4.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+69 : 1e+39);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S_6_21_z::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_6_21_z.S__40__22_");
    (l_A__loc1_ = rt::slot_string(((((double)(g::SV.C_S_8G__S__23_3)) == 13.0) ? rt::add(rt::trv(rt::VS(g::LS[3575])), rt::VS(g::LS[8])) : rt::VS(g::LS[113]))));
    return rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[3601]))));
    return rt::NUL;
}
bool C_S_6_21_z::g_S__2d_6() {
    RT_FN("S_6_21_z.S__2d_6_get");
    return ({ bool _t12518 = ({ bool _t12517 = ({ bool _t12516 = this->C_S__60_6::g_S__2d_6(); _t12516 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == 13.0)) : _t12516; }); _t12517 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 130.0)) : _t12517; }); _t12518 ? (bool)(C_S__26_c::sm_S__60__21_i(g::SV.C_S_6_22__27___id)) : _t12518; });
    return false;
}
bool C_S_6_21_z::g_S__22_h() {
    RT_FN("S_6_21_z.S__22_h_get");
    return (((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)));
    return false;
}
C_S_6_21_z* C_S_6_21_z::alloc_() {
    C_S_6_21_z* o = rt::make<C_S_6_21_z>();
    return o;
}
rt::Value C_S_6_21_z::mk_(rt::Value* a, int n) {
    C_S_6_21_z* o = alloc_();
    o->C_S_6_21_z::ctor_();
    return rt::VO(o);
}
bool C_S_6_21_z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__22_h: out = rt::VB(g_S__22_h()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_21_z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__22_h: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_21_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_6_21_z::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_6_21_z::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_6_21_z::dm_S_75_3()))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__22_h: { rt::Value f = rt::VB(g_S__22_h()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_21_z::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__22_h: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_21_z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_21_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21_z__id)); return true;
    default: return false;
    }
}
bool C_S_6_21_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21_z__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_21_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_22__40_::ctor_() {
    RT_FN("S_8_22__40_.S_8_22__40_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12519 = 875.0; this->f_S_6_21_Z = rt::touint_d(_v12519); _v12519; });
    ({ rt::Value _v12520 = rt::trv(rt::VS(g::LS[3602])); this->f_S_1i = rt::slot_string(_v12520); _v12520; });
    ({ rt::Value _v12521 = rt::VS(g::LS[3603]); this->f_S__5e__21__23_ = rt::slot_string(_v12521); _v12521; });
    ({ double _v12522 = 1e+185; this->f_S__23__21_m = _v12522; _v12522; });
    ({ double _v12523 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12523); _v12523; });
    ({ double _v12524 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12524); _v12524; });
    ({ double _v12525 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12525); _v12525; });
    ({ bool _v12526 = true; this->f_S__21__21_n = _v12526; _v12526; });
    ({ double _v12527 = 11.0; this->f_S__21__22_E = rt::touint_d(_v12527); _v12527; });
}
rt::Value C_S_8_22__40_::m_S__40__22_() {
    RT_FN("S_8_22__40_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3604])));
    return rt::NUL;
}
rt::Value C_S_8_22__40_::m_S_6r() {
    RT_FN("S_8_22__40_.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    if (({ rt::Value _o12528 = C_S_8G::sm_S__23_N(g::SV.C_S__27_K__id); C_S_84* _p12529 = rt::as_ptr<C_S_84>(_o12528); _p12529 ? _p12529->g_S__2d_6() : rt::T(rt::dget(_o12528, NM_S__2d_6)); })) {
        ({ uint32_t _v12532 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__27_K__id); rt::Value _o12530 = C_S_8G::sm_S__23_N(g::SV.C_S__27_K__id); C_S_84* _p12531 = rt::as_ptr<C_S_84>(_o12530); if (_p12531) _p12531->f_S_6_21_A = ((int32_t)(_v12532)); else rt::dset(_o12530, NM_S_6_21_A, rt::V((double)(_v12532))); _v12532; });
    }
    if (({ rt::Value _o12533 = C_S_8G::sm_S__23_N(g::SV.C_S__27__21__27___id); C_S_84* _p12534 = rt::as_ptr<C_S_84>(_o12533); _p12534 ? _p12534->g_S__2d_6() : rt::T(rt::dget(_o12533, NM_S__2d_6)); })) {
        ({ uint32_t _v12537 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__27__21__27___id); rt::Value _o12535 = C_S_8G::sm_S__23_N(g::SV.C_S__27__21__27___id); C_S_84* _p12536 = rt::as_ptr<C_S_84>(_o12535); if (_p12536) _p12536->f_S_6_21_A = ((int32_t)(_v12537)); else rt::dset(_o12535, NM_S_6_21_A, rt::V((double)(_v12537))); _v12537; });
    }
    if (({ rt::Value _o12538 = C_S_8G::sm_S__23_N(g::SV.C_S_6_21_V__id); C_S_84* _p12539 = rt::as_ptr<C_S_84>(_o12538); _p12539 ? _p12539->g_S__2d_6() : rt::T(rt::dget(_o12538, NM_S__2d_6)); })) {
        ({ uint32_t _v12542 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_6_21_V__id); rt::Value _o12540 = C_S_8G::sm_S__23_N(g::SV.C_S_6_21_V__id); C_S_84* _p12541 = rt::as_ptr<C_S_84>(_o12540); if (_p12541) _p12541->f_S_6_21_A = ((int32_t)(_v12542)); else rt::dset(_o12540, NM_S_6_21_A, rt::V((double)(_v12542))); _v12542; });
    }
    if (({ rt::Value _o12543 = C_S_8G::sm_S__23_N(g::SV.C_S_2_21_E__id); C_S_84* _p12544 = rt::as_ptr<C_S_84>(_o12543); _p12544 ? _p12544->g_S__2d_6() : rt::T(rt::dget(_o12543, NM_S__2d_6)); })) {
        ({ uint32_t _v12547 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_2_21_E__id); rt::Value _o12545 = C_S_8G::sm_S__23_N(g::SV.C_S_2_21_E__id); C_S_84* _p12546 = rt::as_ptr<C_S_84>(_o12545); if (_p12546) _p12546->f_S_6_21_A = ((int32_t)(_v12547)); else rt::dset(_o12545, NM_S_6_21_A, rt::V((double)(_v12547))); _v12547; });
    }
    if (({ rt::Value _o12548 = C_S_8G::sm_S__23_N(g::SV.C_S__20__21_5__id); C_S_84* _p12549 = rt::as_ptr<C_S_84>(_o12548); _p12549 ? _p12549->g_S__2d_6() : rt::T(rt::dget(_o12548, NM_S__2d_6)); })) {
        ({ uint32_t _v12552 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__20__21_5__id); rt::Value _o12550 = C_S_8G::sm_S__23_N(g::SV.C_S__20__21_5__id); C_S_84* _p12551 = rt::as_ptr<C_S_84>(_o12550); if (_p12551) _p12551->f_S_6_21_A = ((int32_t)(_v12552)); else rt::dset(_o12550, NM_S_6_21_A, rt::V((double)(_v12552))); _v12552; });
    }
    if (({ rt::Value _o12553 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p12554 = rt::as_ptr<C_S_84>(_o12553); _p12554 ? _p12554->g_S__2d_6() : rt::T(rt::dget(_o12553, NM_S__2d_6)); })) {
        ({ uint32_t _v12557 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_8_3e___id); rt::Value _o12555 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p12556 = rt::as_ptr<C_S_84>(_o12555); if (_p12556) _p12556->f_S_6_21_A = ((int32_t)(_v12557)); else rt::dset(_o12555, NM_S_6_21_A, rt::V((double)(_v12557))); _v12557; });
    }
    if (({ rt::Value _o12558 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id); C_S_84* _p12559 = rt::as_ptr<C_S_84>(_o12558); _p12559 ? _p12559->g_S__2d_6() : rt::T(rt::dget(_o12558, NM_S__2d_6)); })) {
        ({ uint32_t _v12562 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__5e_x__id); rt::Value _o12560 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id); C_S_84* _p12561 = rt::as_ptr<C_S_84>(_o12560); if (_p12561) _p12561->f_S_6_21_A = ((int32_t)(_v12562)); else rt::dset(_o12560, NM_S_6_21_A, rt::V((double)(_v12562))); _v12562; });
    }
    if (({ rt::Value _o12563 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p12564 = rt::as_ptr<C_S_84>(_o12563); _p12564 ? _p12564->g_S__2d_6() : rt::T(rt::dget(_o12563, NM_S__2d_6)); })) {
        ({ uint32_t _v12567 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__21_C__id); rt::Value _o12565 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p12566 = rt::as_ptr<C_S_84>(_o12565); if (_p12566) _p12566->f_S_6_21_A = ((int32_t)(_v12567)); else rt::dset(_o12565, NM_S_6_21_A, rt::V((double)(_v12567))); _v12567; });
    }
    if (({ rt::Value _o12568 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id); C_S_84* _p12569 = rt::as_ptr<C_S_84>(_o12568); _p12569 ? _p12569->g_S__2d_6() : rt::T(rt::dget(_o12568, NM_S__2d_6)); })) {
        ({ uint32_t _v12572 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__25__21_J__id); rt::Value _o12570 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id); C_S_84* _p12571 = rt::as_ptr<C_S_84>(_o12570); if (_p12571) _p12571->f_S_6_21_A = ((int32_t)(_v12572)); else rt::dset(_o12570, NM_S_6_21_A, rt::V((double)(_v12572))); _v12572; });
    }
    if (({ rt::Value _o12573 = C_S_8G::sm_S__23_N(g::SV.C_S_7_21_K__id); C_S_84* _p12574 = rt::as_ptr<C_S_84>(_o12573); _p12574 ? _p12574->g_S__2d_6() : rt::T(rt::dget(_o12573, NM_S__2d_6)); })) {
        ({ uint32_t _v12577 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_7_21_K__id); rt::Value _o12575 = C_S_8G::sm_S__23_N(g::SV.C_S_7_21_K__id); C_S_84* _p12576 = rt::as_ptr<C_S_84>(_o12575); if (_p12576) _p12576->f_S_6_21_A = ((int32_t)(_v12577)); else rt::dset(_o12575, NM_S_6_21_A, rt::V((double)(_v12577))); _v12577; });
    }
    if (({ rt::Value _o12578 = C_S_8G::sm_S__23_N(g::SV.C_S__40_W__id); C_S_84* _p12579 = rt::as_ptr<C_S_84>(_o12578); _p12579 ? _p12579->g_S__2d_6() : rt::T(rt::dget(_o12578, NM_S__2d_6)); })) {
        ({ uint32_t _v12582 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__40_W__id); rt::Value _o12580 = C_S_8G::sm_S__23_N(g::SV.C_S__40_W__id); C_S_84* _p12581 = rt::as_ptr<C_S_84>(_o12580); if (_p12581) _p12581->f_S_6_21_A = ((int32_t)(_v12582)); else rt::dset(_o12580, NM_S_6_21_A, rt::V((double)(_v12582))); _v12582; });
    }
    if (({ rt::Value _o12583 = C_S_8G::sm_S__23_N(g::SV.C_S_5_21_3__id); C_S_84* _p12584 = rt::as_ptr<C_S_84>(_o12583); _p12584 ? _p12584->g_S__2d_6() : rt::T(rt::dget(_o12583, NM_S__2d_6)); })) {
        ({ uint32_t _v12587 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_5_21_3__id); rt::Value _o12585 = C_S_8G::sm_S__23_N(g::SV.C_S_5_21_3__id); C_S_84* _p12586 = rt::as_ptr<C_S_84>(_o12585); if (_p12586) _p12586->f_S_6_21_A = ((int32_t)(_v12587)); else rt::dset(_o12585, NM_S_6_21_A, rt::V((double)(_v12587))); _v12587; });
    }
    if (({ rt::Value _o12588 = C_S_8G::sm_S__23_N(g::SV.C_S_2_22__21___id); C_S_84* _p12589 = rt::as_ptr<C_S_84>(_o12588); _p12589 ? _p12589->g_S__2d_6() : rt::T(rt::dget(_o12588, NM_S__2d_6)); })) {
        ({ uint32_t _v12592 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_2_22__21___id); rt::Value _o12590 = C_S_8G::sm_S__23_N(g::SV.C_S_2_22__21___id); C_S_84* _p12591 = rt::as_ptr<C_S_84>(_o12590); if (_p12591) _p12591->f_S_6_21_A = ((int32_t)(_v12592)); else rt::dset(_o12590, NM_S_6_21_A, rt::V((double)(_v12592))); _v12592; });
    }
    if (({ rt::Value _o12593 = C_S_8G::sm_S__23_N(g::SV.C_S_7_22__20___id); C_S_84* _p12594 = rt::as_ptr<C_S_84>(_o12593); _p12594 ? _p12594->g_S__2d_6() : rt::T(rt::dget(_o12593, NM_S__2d_6)); })) {
        ({ uint32_t _v12597 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_7_22__20___id); rt::Value _o12595 = C_S_8G::sm_S__23_N(g::SV.C_S_7_22__20___id); C_S_84* _p12596 = rt::as_ptr<C_S_84>(_o12595); if (_p12596) _p12596->f_S_6_21_A = ((int32_t)(_v12597)); else rt::dset(_o12595, NM_S_6_21_A, rt::V((double)(_v12597))); _v12597; });
    }
    if (({ rt::Value _o12598 = C_S_8G::sm_S__23_N(g::SV.C_S__21__22__21___id); C_S_84* _p12599 = rt::as_ptr<C_S_84>(_o12598); _p12599 ? _p12599->g_S__2d_6() : rt::T(rt::dget(_o12598, NM_S__2d_6)); })) {
        ({ uint32_t _v12602 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__21__22__21___id); rt::Value _o12600 = C_S_8G::sm_S__23_N(g::SV.C_S__21__22__21___id); C_S_84* _p12601 = rt::as_ptr<C_S_84>(_o12600); if (_p12601) _p12601->f_S_6_21_A = ((int32_t)(_v12602)); else rt::dset(_o12600, NM_S_6_21_A, rt::V((double)(_v12602))); _v12602; });
    }
    return rt::NUL;
}
bool C_S_8_22__40_::g_S__2d_6() {
    RT_FN("S_8_22__40_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 4.0);
    return false;
}
C_S_8_22__40_* C_S_8_22__40_::alloc_() {
    C_S_8_22__40_* o = rt::make<C_S_8_22__40_>();
    return o;
}
rt::Value C_S_8_22__40_::mk_(rt::Value* a, int n) {
    C_S_8_22__40_* o = alloc_();
    o->C_S_8_22__40_::ctor_();
    return rt::VO(o);
}
bool C_S_8_22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_22__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_22__40_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22__40___id)); return true;
    default: return false;
    }
}
bool C_S_8_22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22__40___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_22_A::ctor_() {
    RT_FN("S_8_22_A.S_8_22_A");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12603 = 876.0; this->f_S_6_21_Z = rt::touint_d(_v12603); _v12603; });
    ({ rt::Value _v12604 = rt::trv(rt::VS(g::LS[3605])); this->f_S_1i = rt::slot_string(_v12604); _v12604; });
    ({ rt::Value _v12605 = rt::VS(g::LS[3606]); this->f_S__5e__21__23_ = rt::slot_string(_v12605); _v12605; });
    ({ double _v12606 = 1e+177; this->f_S__23__21_m = _v12606; _v12606; });
    ({ double _v12607 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12607); _v12607; });
    ({ double _v12608 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12608); _v12608; });
    ({ double _v12609 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12609); _v12609; });
    ({ bool _v12610 = true; this->f_S__3c__60_ = _v12610; _v12610; });
    ({ double _v12611 = 9.0; this->f_S__21__22_E = rt::touint_d(_v12611); _v12611; });
}
rt::Value C_S_8_22_A::m_S__40__22_() {
    RT_FN("S_8_22_A.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1890]), C_S__26_c::sm_S_6_21_T(C_S_8_22_A::sm_S__27__21_b(), 3.0, true)));
    return rt::NUL;
}
bool C_S_8_22_A::g_S__2d_6() {
    RT_FN("S_8_22_A.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 3.0);
    return false;
}
double C_S_8_22_A::sm_S__27__21_b() {
    RT_FN("S_8_22_A.S__27__21_b");
    return (2.5 * rt::m_pow((0.5 * rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_(C_S__26_c::dsm_S_3_22__26__0(), C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2())))), 2.5));
    return 0.0;
}
C_S_8_22_A* C_S_8_22_A::alloc_() {
    C_S_8_22_A* o = rt::make<C_S_8_22_A>();
    return o;
}
rt::Value C_S_8_22_A::mk_(rt::Value* a, int n) {
    C_S_8_22_A* o = alloc_();
    o->C_S_8_22_A::ctor_();
    return rt::VO(o);
}
bool C_S_8_22_A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_22_A::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_22_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_22_A::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_22_A::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_8_22_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22_A__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_22_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22_A__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_22_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3b__22__3c_::ctor_() {
    RT_FN("S__3b__22__3c_.S__3b__22__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12612 = 889.0; this->f_S_6_21_Z = rt::touint_d(_v12612); _v12612; });
    ({ rt::Value _v12613 = rt::trv(rt::VS(g::LS[3607])); this->f_S_1i = rt::slot_string(_v12613); _v12613; });
    ({ rt::Value _v12614 = rt::VS(g::LS[3608]); this->f_S__5e__21__23_ = rt::slot_string(_v12614); _v12614; });
    ({ double _v12615 = 1e+173; this->f_S__23__21_m = _v12615; _v12615; });
    ({ double _v12616 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12616); _v12616; });
    ({ double _v12617 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12617); _v12617; });
    ({ double _v12618 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12618); _v12618; });
    ({ bool _v12619 = true; this->f_S__3c__60_ = _v12619; _v12619; });
    ({ double _v12620 = 7.0; this->f_S__21__22_E = rt::touint_d(_v12620); _v12620; });
}
rt::Value C_S__3b__22__3c_::m_S__40__22_() {
    RT_FN("S__3b__22__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3609])));
    return rt::NUL;
}
bool C_S__3b__22__3c_::g_S__2d_6() {
    RT_FN("S__3b__22__3c_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 3.0);
    return false;
}
C_S__3b__22__3c_* C_S__3b__22__3c_::alloc_() {
    C_S__3b__22__3c_* o = rt::make<C_S__3b__22__3c_>();
    return o;
}
rt::Value C_S__3b__22__3c_::mk_(rt::Value* a, int n) {
    C_S__3b__22__3c_* o = alloc_();
    o->C_S__3b__22__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b__22__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b__22__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b__22__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b__22__3c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__22__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22__3c___id)); return true;
    default: return false;
    }
}
bool C_S__3b__22__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__21_z::ctor_() {
    RT_FN("S__40__21_z.S__40__21_z");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12621 = 877.0; this->f_S_6_21_Z = rt::touint_d(_v12621); _v12621; });
    ({ rt::Value _v12622 = rt::trv(rt::VS(g::LS[3610])); this->f_S_1i = rt::slot_string(_v12622); _v12622; });
    ({ rt::Value _v12623 = rt::VS(g::LS[3611]); this->f_S__5e__21__23_ = rt::slot_string(_v12623); _v12623; });
    ({ rt::Value _v12624 = rt::VS(g::LS[3574]); this->f_S__3f__21__3d_ = rt::slot_string(_v12624); _v12624; });
    ({ rt::Value _v12625 = rt::VS(g::LS[3574]); this->f_S__40_1 = rt::slot_string(_v12625); _v12625; });
    ({ rt::Value _v12626 = rt::trv(rt::VS(g::LS[3612])); this->f_S_7_23_ = rt::slot_string(_v12626); _v12626; });
    ({ double _v12627 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12627); _v12627; });
    ({ double _v12628 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12628); _v12628; });
    ({ double _v12629 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12629); _v12629; });
    ({ bool _v12630 = false; this->f_S_3e = _v12630; _v12630; });
    ({ bool _v12631 = true; this->f_S__3c__60_ = _v12631; _v12631; });
}
int32_t C_S__40__21_z::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__40__21_z::dm_S_75_2() { return false; }
rt::Value C_S__40__21_z::dm_S_75_3() { return rt::NUL; }
double C_S__40__21_z::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__40__21_z.S_75");
    if (((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 4.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+51 : 1e+27);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
rt::Value C_S__40__21_z::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__40__21_z.S_6r");
    if ((!(((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0)))) {
        return rt::NUL;
    }
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 136.0), rt::V(1.0))));
    ({ rt::Value _v12632 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(136.0), _v12632); });
    (void)(({ rt::Value _o12633 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p12634 = rt::as_ptr<C_S_8G>(_o12633); _p12634 ? _p12634->m_S__3d__22__20_(rt::toint_d(13.0)) : rt::dcallv(_o12633, NM_S__3d__22__20_, rt::V(13.0)); }));
    return rt::NUL;
}
bool C_S__40__21_z::g_S__2d_6() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__40__21_z.S__2d_6_get");
    (l_A__loc1_ = rt::arr_lit({rt::V((double)(g::SV.C_S_3_21_m__id)), rt::V((double)(g::SV.C_S__3d__21_m__id)), rt::V((double)(g::SV.C_S_2_21_l__id)), rt::V((double)(g::SV.C_S_2_21_m__id)), rt::V((double)(g::SV.C_S__5d__21_n__id)), rt::V((double)(g::SV.C_S__27__21_l__id)), rt::V((double)(g::SV.C_S__2c__21_n__id)), rt::V((double)(g::SV.C_S_2_21_o__id)), rt::V((double)(g::SV.C_S__27__21_o__id)), rt::V((double)(g::SV.C_S_3_21_u__id)), rt::V((double)(g::SV.C_S__22__21_u__id)), rt::V(0.0), rt::V((double)(g::SV.C_S__60__21_u__id))}));
    return ({ bool _t12648 = ({ bool _t12647 = ({ bool _t12646 = ({ bool _t12645 = ({ bool _t12644 = ({ bool _t12643 = ({ bool _t12642 = ({ bool _t12641 = ({ bool _t12640 = ({ bool _t12639 = ({ bool _t12638 = (({ bool _t12636 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t12636 ? _t12636 : (bool)(({ bool _t12635 = (((double)(C_S_8G::sg_S_8_21_H())) >= 255.0); _t12635 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__22__22_I__id)) : _t12635; })); })); _t12638 ? (bool)((({ bool _t12637 = (((double)(C_S_8G::sg_S__2c_P())) < 3.0); _t12637 ? _t12637 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 172.0)); }))) : _t12638; }); _t12639 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == ((double)(this->f_S_9_21_m)))) : _t12639; }); _t12640 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) : _t12640; }); _t12641 ? (bool)((!(((double)(g::SV.C_S_8G__S__23_3)) == (-1.0)))) : _t12641; }); _t12642 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == (-1.0))) : _t12642; }); _t12643 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) : _t12643; }); _t12644 ? (bool)(C_S_8G::sm_S_7d(rt::touint(rt::arr_at(l_A__loc1_, ((double)(g::SV.C_S_8G__S__2d__21__5e_)))))) : _t12644; }); _t12645 ? (bool)(C_S_8G::sm_S_7d(rt::touint(rt::arr_at(l_A__loc1_, ((double)(g::SV.C_S_8G__S__23_3)))))) : _t12645; }); _t12646 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t12646; }); _t12647 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t12647; }); _t12648 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_z__id)) : _t12648; });
    return false;
}
C_S__40__21_z* C_S__40__21_z::alloc_() {
    C_S__40__21_z* o = rt::make<C_S__40__21_z>();
    return o;
}
rt::Value C_S__40__21_z::mk_(rt::Value* a, int n) {
    C_S__40__21_z* o = alloc_();
    o->C_S__40__21_z::ctor_();
    return rt::VO(o);
}
bool C_S__40__21_z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__40__21_z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__40__21_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__40__21_z::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__40__21_z::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__40__21_z::dm_S_75_3()))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__40__21_z::dmeth(int id) {
    switch (id) {
    case NM_S_75: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__40__21_z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21_z__id)); return true;
    default: return false;
    }
}
bool C_S__40__21_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21_z__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__21_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__22__3d_::ctor_() {
    RT_FN("S__40__22__3d_.S__40__22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12649 = 886.0; this->f_S_6_21_Z = rt::touint_d(_v12649); _v12649; });
    ({ rt::Value _v12650 = rt::trv(rt::VS(g::LS[3613])); this->f_S_1i = rt::slot_string(_v12650); _v12650; });
    ({ rt::Value _v12651 = rt::VS(g::LS[3614]); this->f_S__5e__21__23_ = rt::slot_string(_v12651); _v12651; });
    ({ double _v12652 = 1e+183; this->f_S__23__21_m = _v12652; _v12652; });
    ({ double _v12653 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12653); _v12653; });
    ({ double _v12654 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12654); _v12654; });
    ({ double _v12655 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12655); _v12655; });
    ({ bool _v12656 = true; this->f_S__21__21_n = _v12656; _v12656; });
    ({ double _v12657 = 10.0; this->f_S__21__22_E = rt::touint_d(_v12657); _v12657; });
}
rt::Value C_S__40__22__3d_::m_S__40__22_() {
    RT_FN("S__40__22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3615]), C_S__26_c::sm_S_8_21_Z(C_S__40__22__3d_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__40__22__3d_::g_S__2d_6() {
    RT_FN("S__40__22__3d_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 4.0);
    return false;
}
double C_S__40__22__3d_::sm_S__2c__21_G() {
    RT_FN("S__40__22__3d_.S__2c__21_G");
    return 200.0;
    return 0.0;
}
C_S__40__22__3d_* C_S__40__22__3d_::alloc_() {
    C_S__40__22__3d_* o = rt::make<C_S__40__22__3d_>();
    return o;
}
rt::Value C_S__40__22__3d_::mk_(rt::Value* a, int n) {
    C_S__40__22__3d_* o = alloc_();
    o->C_S__40__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__40__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__40__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__40__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__40__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__40__22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__40__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22__3d___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__40__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5b__21_y::ctor_() {
    RT_FN("S__5b__21_y.S__5b__21_y");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12658 = 922.0; this->f_S_6_21_Z = rt::touint_d(_v12658); _v12658; });
    ({ rt::Value _v12659 = rt::trv(rt::VS(g::LS[3616])); this->f_S_1i = rt::slot_string(_v12659); _v12659; });
    ({ rt::Value _v12660 = rt::VS(g::LS[3617]); this->f_S__5e__21__23_ = rt::slot_string(_v12660); _v12660; });
    ({ double _v12661 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12661); _v12661; });
    ({ double _v12662 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12662); _v12662; });
    ({ double _v12663 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12663); _v12663; });
}
rt::Value C_S__5b__21_y::m_S__40__22_() {
    RT_FN("S__5b__21_y.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3618]), C_S__26_c::sm_S_8_21_Z(C_S__5b__21_y::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
int32_t C_S__5b__21_y::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__5b__21_y::dm_S_75_2() { return false; }
rt::Value C_S__5b__21_y::dm_S_75_3() { return rt::NUL; }
double C_S__5b__21_y::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    double l_A__loc5_ = NAN;
    RT_FN("S__5b__21_y.S_75");
    (l_A__loc5_ = NAN);
    if (((((double)(l_param1)) == 2.0) || (((double)(l_param1)) == 4.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 1e+48 : 1e+36);
    }
    return this->C_S__60_6::m_S_75(l_param1, C_S__60_6::dm_S_75_1(), C_S__60_6::dm_S_75_2(), C_S__60_6::dm_S_75_3());
    return 0.0;
}
bool C_S__5b__21_y::g_S__2d_6() {
    RT_FN("S__5b__21_y.S__2d_6_get");
    return ({ bool _t12664 = C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[3619]))); _t12664 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t12664; });
    return false;
}
double C_S__5b__21_y::sm_S__2c__21_G() {
    RT_FN("S__5b__21_y.S__2c__21_G");
    return 10.0;
    return 0.0;
}
C_S__5b__21_y* C_S__5b__21_y::alloc_() {
    C_S__5b__21_y* o = rt::make<C_S__5b__21_y>();
    return o;
}
rt::Value C_S__5b__21_y::mk_(rt::Value* a, int n) {
    C_S__5b__21_y* o = alloc_();
    o->C_S__5b__21_y::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5b__21_y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5b__21_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__5b__21_y::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__5b__21_y::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__5b__21_y::dm_S_75_3()))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5b__21_y::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_75: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5b__21_y::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__5b__21_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21_y__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__21_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21_y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5b__22_C::ctor_() {
    RT_FN("S__5b__22_C.S__5b__22_C");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12665 = 883.0; this->f_S_6_21_Z = rt::touint_d(_v12665); _v12665; });
    ({ rt::Value _v12666 = rt::trv(rt::VS(g::LS[3620])); this->f_S_1i = rt::slot_string(_v12666); _v12666; });
    ({ rt::Value _v12667 = rt::VS(g::LS[3621]); this->f_S__5e__21__23_ = rt::slot_string(_v12667); _v12667; });
    ({ double _v12668 = 1e+157; this->f_S__23__21_m = _v12668; _v12668; });
    ({ double _v12669 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12669); _v12669; });
    ({ double _v12670 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12670); _v12670; });
    ({ double _v12671 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12671); _v12671; });
    ({ bool _v12672 = true; this->f_S__3c__60_ = _v12672; _v12672; });
    ({ double _v12673 = 3.0; this->f_S__21__22_E = rt::touint_d(_v12673); _v12673; });
}
rt::Value C_S__5b__22_C::m_S__40__22_() {
    RT_FN("S__5b__22_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3622]), C_S__26_c::sm_S_8_21_Z(C_S__5b__22_C::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__5b__22_C::g_S__2d_6() {
    RT_FN("S__5b__22_C.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 1.0);
    return false;
}
double C_S__5b__22_C::sm_S__40__21__3f_() {
    RT_FN("S__5b__22_C.S__40__21__3f_");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S__3e__21_h(C_S__26_c::dsm_S__3e__21_h_0(), C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 0.5));
    return 0.0;
}
C_S__5b__22_C* C_S__5b__22_C::alloc_() {
    C_S__5b__22_C* o = rt::make<C_S__5b__22_C>();
    return o;
}
rt::Value C_S__5b__22_C::mk_(rt::Value* a, int n) {
    C_S__5b__22_C* o = alloc_();
    o->C_S__5b__22_C::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5b__22_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5b__22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5b__22_C::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5b__22_C::smeth_(int id) {
    switch (id) {
    case NM_S__40__21__3f_: return true;
    default: return false;
    }
}
bool C_S__5b__22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22_C__id)); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5b__22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22_C__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    default: return false;
    }
}
void C_S__5d__22__3e_::ctor_() {
    RT_FN("S__5d__22__3e_.S__5d__22__3e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12674 = 888.0; this->f_S_6_21_Z = rt::touint_d(_v12674); _v12674; });
    ({ rt::Value _v12675 = rt::trv(rt::VS(g::LS[3623])); this->f_S_1i = rt::slot_string(_v12675); _v12675; });
    ({ rt::Value _v12676 = rt::VS(g::LS[3624]); this->f_S__5e__21__23_ = rt::slot_string(_v12676); _v12676; });
    ({ double _v12677 = 1e+175; this->f_S__23__21_m = _v12677; _v12677; });
    ({ double _v12678 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12678); _v12678; });
    ({ double _v12679 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12679); _v12679; });
    ({ double _v12680 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12680); _v12680; });
    ({ bool _v12681 = true; this->f_S__3c__60_ = _v12681; _v12681; });
    ({ double _v12682 = 8.0; this->f_S__21__22_E = rt::touint_d(_v12682); _v12682; });
}
rt::Value C_S__5d__22__3e_::m_S__40__22_() {
    RT_FN("S__5d__22__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3625]), C_S__26_c::sm_S_8_21_Z(C_S__5d__22__3e_::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__5d__22__3e_::g_S__2d_6() {
    RT_FN("S__5d__22__3e_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 3.0);
    return false;
}
double C_S__5d__22__3e_::sm_S__23__21_Y() {
    RT_FN("S__5d__22__3e_.S__23__21_Y");
    return (100.0 + (0.8 * rt::m_pow(C_S__26_c::sm_S__22__22__20_(true, C_S__26_c::dsm_S__22__22__20__1(), C_S__26_c::dsm_S__22__22__20__2()), 0.8)));
    return 0.0;
}
C_S__5d__22__3e_* C_S__5d__22__3e_::alloc_() {
    C_S__5d__22__3e_* o = rt::make<C_S__5d__22__3e_>();
    return o;
}
rt::Value C_S__5d__22__3e_::mk_(rt::Value* a, int n) {
    C_S__5d__22__3e_* o = alloc_();
    o->C_S__5d__22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5d__22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5d__22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5d__22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5d__22__3e_::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__5d__22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22__3e___id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5d__22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__5e__22__3d_::ctor_() {
    RT_FN("S__5e__22__3d_.S__5e__22__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v12683 = 885.0; this->f_S_6_21_Z = rt::touint_d(_v12683); _v12683; });
    ({ rt::Value _v12684 = rt::trv(rt::VS(g::LS[3626])); this->f_S_1i = rt::slot_string(_v12684); _v12684; });
    ({ rt::Value _v12685 = rt::VS(g::LS[3627]); this->f_S__5e__21__23_ = rt::slot_string(_v12685); _v12685; });
    ({ double _v12686 = 1e+155; this->f_S__23__21_m = _v12686; _v12686; });
    ({ double _v12687 = 4.0; this->f_S_9_21_m = rt::toint_d(_v12687); _v12687; });
    ({ double _v12688 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v12688); _v12688; });
    ({ double _v12689 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v12689); _v12689; });
    ({ bool _v12690 = true; this->f_S__3c__60_ = _v12690; _v12690; });
    ({ double _v12691 = 2.0; this->f_S__21__22_E = rt::touint_d(_v12691); _v12691; });
}
rt::Value C_S__5e__22__3d_::m_S__40__22_() {
    RT_FN("S__5e__22__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3628]), C_S__26_c::sm_S_8_21_Z(C_S__5e__22__3d_::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__5e__22__3d_::g_S__2d_6() {
    RT_FN("S__5e__22__3d_.S__2d_6_get");
    return (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[3574])))) >= 1.0);
    return false;
}
double C_S__5e__22__3d_::sm_S__3f__21__3c_() {
    RT_FN("S__5e__22__3d_.S__3f__21__3c_");
    return (0.25 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(48.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.5));
    return 0.0;
}
C_S__5e__22__3d_* C_S__5e__22__3d_::alloc_() {
    C_S__5e__22__3d_* o = rt::make<C_S__5e__22__3d_>();
    return o;
}
rt::Value C_S__5e__22__3d_::mk_(rt::Value* a, int n) {
    C_S__5e__22__3d_* o = alloc_();
    o->C_S__5e__22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5e__22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5e__22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5e__22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5e__22__3d_::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__5e__22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22__3d___id)); return true;
    case NM_S__3b__22__2b_: out = rt::V(g::SV.C_S__5e__22__3d___S__3b__22__2b_); return true;
    case NM_S__3b__22__2c_: out = rt::V(g::SV.C_S__5e__22__3d___S__3b__22__2c_); return true;
    case NM_S_3_21_3: out = rt::V(g::SV.C_S__5e__22__3d___S_3_21_3); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22__3d___id = rt::touint(v); return true;
    case NM_S__3b__22__2b_: g::SV.C_S__5e__22__3d___S__3b__22__2b_ = rt::tonum(v); return true;
    case NM_S__3b__22__2c_: g::SV.C_S__5e__22__3d___S__3b__22__2c_ = rt::tonum(v); return true;
    case NM_S_3_21_3: g::SV.C_S__5e__22__3d___S_3_21_3 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__5e__22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__60__21__3b_::ctor_() {
    RT_FN("S__60__21__3b_.S__60__21__3b_");
    ({ rt::Value _v12692 = rt::arr_lit({}); this->f_S__27_T = _v12692; _v12692; });
    ({ rt::Value _v12693 = rt::arr_lit({}); this->f_S__2d__21__26_ = _v12693; _v12693; });
    ({ rt::Value _v12694 = rt::arr_lit({}); this->f_S_9_3b_ = _v12694; _v12694; });
    ({ rt::Value _v12696 = ({ C_S__3d__21_L* _n12695 = C_S__3d__21_L::alloc_(); _n12695->C_S__3d__21_L::ctor_(rt::touint_d(0.0), rt::toint_d(25.0), rt::toint_d(1.0)); rt::VO(_n12695); }); this->f_S_6_5d_ = _v12696; _v12696; });
    ({ rt::Value _v12698 = ({ C_S__3b_m* _n12697 = C_S__3b_m::alloc_(); _n12697->C_S__3b_m::ctor_(C_S__3b_m::dctor_0()); rt::VO(_n12697); }); this->f_S__2c_1 = _v12698; _v12698; });
    (void)(rt::NUL);
}
rt::Value C_S__60__21__3b_::m_S__5b__21_C() {
    RT_FN("S__60__21__3b_.S__5b__21_C");
    return rt::NUL;
}
rt::Value C_S__60__21__3b_::m_S__21__21_G() {
    RT_FN("S__60__21__3b_.S__21__21_G");
    return rt::NUL;
}
rt::Value C_S__60__21__3b_::m_S__5d__21__2c_(rt::Value p0, bool p1) {
    rt::Value l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("S__60__21__3b_.S__5d__21__2c_");
    if ((((double)(({ rt::Value _o12699 = l_param1; C_S_84* _p12700 = rt::as_ptr<C_S_84>(_o12699); _p12700 ? _p12700->f_id : rt::touint(rt::dget(_o12699, NM_id)); }))) == ((double)(g::SV.C_S__3b__21__2b___id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(0.0), l_param2));
    } else if (((((double)(({ rt::Value _o12701 = l_param1; C_S_84* _p12702 = rt::as_ptr<C_S_84>(_o12701); _p12702 ? _p12702->f_id : rt::touint(rt::dget(_o12701, NM_id)); }))) == ((double)(g::SV.C_S__60_T__id))) && (({ bool _t12703 = (((double)(this->f_S__2c__21_Y)) == 2.0); _t12703 ? _t12703 : (bool)(C_S__26_c::sm_S_9_22_0()); }) || (C_S__26_c::sm_S__5d_B(g::SV.C_S__3d__21__27___id, C_S__26_c::dsm_S__5d_B_1()) && (!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)))))) {
        (void)(this->m_S__23__21_(rt::touint_d(6.0), l_param2));
    } else if ((((double)(({ rt::Value _o12704 = l_param1; C_S_84* _p12705 = rt::as_ptr<C_S_84>(_o12704); _p12705 ? _p12705->f_id : rt::touint(rt::dget(_o12704, NM_id)); }))) == ((double)(g::SV.C_S__27__21__27___id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(3.0), l_param2));
    } else if ((((double)(({ rt::Value _o12706 = l_param1; C_S_84* _p12707 = rt::as_ptr<C_S_84>(_o12706); _p12707 ? _p12707->f_id : rt::touint(rt::dget(_o12706, NM_id)); }))) == ((double)(g::SV.C_S_6_21_V__id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(4.0), l_param2));
    } else if ((((double)(({ rt::Value _o12708 = l_param1; C_S_84* _p12709 = rt::as_ptr<C_S_84>(_o12708); _p12709 ? _p12709->f_id : rt::touint(rt::dget(_o12708, NM_id)); }))) == ((double)(g::SV.C_S_2_21_E__id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(7.0), l_param2));
    } else if ((((double)(({ rt::Value _o12710 = l_param1; C_S_84* _p12711 = rt::as_ptr<C_S_84>(_o12710); _p12711 ? _p12711->f_id : rt::touint(rt::dget(_o12710, NM_id)); }))) == ((double)(g::SV.C_S__25__21_J__id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(14.0), l_param2));
    } else if ((((double)(({ rt::Value _o12712 = l_param1; C_S_84* _p12713 = rt::as_ptr<C_S_84>(_o12712); _p12713 ? _p12713->f_id : rt::touint(rt::dget(_o12712, NM_id)); }))) == ((double)(g::SV.C_S__40_W__id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(10.0), l_param2));
    } else if ((((double)(({ rt::Value _o12714 = l_param1; C_S_84* _p12715 = rt::as_ptr<C_S_84>(_o12714); _p12715 ? _p12715->f_id : rt::touint(rt::dget(_o12714, NM_id)); }))) == ((double)(g::SV.C_S__25__2c___id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(15.0), l_param2));
    } else if ((((double)(({ rt::Value _o12716 = l_param1; C_S_84* _p12717 = rt::as_ptr<C_S_84>(_o12716); _p12717 ? _p12717->f_id : rt::touint(rt::dget(_o12716, NM_id)); }))) == ((double)(g::SV.C_S_5_21_3__id)))) {
        if ((!(((double)(this->m_S__27__3c_())) == (-1.0)))) {
            (void)(this->m_S__23__21_(rt::touint_d(20.0), ({ bool _t12723 = l_param2; _t12723 ? (bool)((({ bool _t12722 = ({ rt::Value _o12718 = g::SV.C_S_8G__S_1_21_V; C_S__3b_m* _p12719 = rt::as_ptr<C_S__3b_m>(_o12718); _p12719 ? _p12719->m_S__27_W(rt::touint_d(0.0)) : rt::T(rt::dcallv(_o12718, NM_S__27_W, rt::V(0.0))); }); _t12722 ? _t12722 : (bool)(({ rt::Value _o12720 = g::SV.C_S_8G__S_1_21_V; C_S__3b_m* _p12721 = rt::as_ptr<C_S__3b_m>(_o12720); _p12721 ? _p12721->m_S__27_W(rt::touint_d(6.0)) : rt::T(rt::dcallv(_o12720, NM_S__27_W, rt::V(6.0))); })); }))) : _t12723; })));
        }
        (void)(this->m_S__23__21_(rt::touint_d(22.0), ({ bool _t12729 = l_param2; _t12729 ? (bool)((({ bool _t12728 = ({ rt::Value _o12724 = g::SV.C_S_8G__S_1_21_V; C_S__3b_m* _p12725 = rt::as_ptr<C_S__3b_m>(_o12724); _p12725 ? _p12725->m_S__27_W(rt::touint_d(4.0)) : rt::T(rt::dcallv(_o12724, NM_S__27_W, rt::V(4.0))); }); _t12728 ? _t12728 : (bool)(({ rt::Value _o12726 = g::SV.C_S_8G__S_1_21_V; C_S__3b_m* _p12727 = rt::as_ptr<C_S__3b_m>(_o12726); _p12727 ? _p12727->m_S__27_W(rt::touint_d(10.0)) : rt::T(rt::dcallv(_o12726, NM_S__27_W, rt::V(10.0))); })); }))) : _t12729; })));
        (void)(this->m_S__23__21_(rt::touint_d(21.0), ({ bool _t12735 = l_param2; _t12735 ? (bool)((({ bool _t12734 = ({ rt::Value _o12730 = g::SV.C_S_8G__S_1_21_V; C_S__3b_m* _p12731 = rt::as_ptr<C_S__3b_m>(_o12730); _p12731 ? _p12731->m_S__27_W(rt::touint_d(1.0)) : rt::T(rt::dcallv(_o12730, NM_S__27_W, rt::V(1.0))); }); _t12734 ? _t12734 : (bool)(({ rt::Value _o12732 = g::SV.C_S_8G__S_1_21_V; C_S__3b_m* _p12733 = rt::as_ptr<C_S__3b_m>(_o12732); _p12733 ? _p12733->m_S__27_W(rt::touint_d(7.0)) : rt::T(rt::dcallv(_o12732, NM_S__27_W, rt::V(7.0))); })); }))) : _t12735; })));
    } else if (((((double)(({ rt::Value _o12736 = l_param1; C_S_84* _p12737 = rt::as_ptr<C_S_84>(_o12736); _p12737 ? _p12737->f_id : rt::touint(rt::dget(_o12736, NM_id)); }))) == ((double)(g::SV.C_S__5e_x__id))) && ((((double)(this->f_S__2c__21_Y)) == 0.0) || (((double)(g::SV.C_S_8G__S__2c__21_Y)) == ((double)(this->f_S__2c__21_Y)))))) {
        (void)(this->m_S__23__21_(rt::touint_d(12.0), ({ bool _t12738 = l_param2; _t12738 ? (bool)((((double)(g::SV.C_S__23__21__21___S__40__23_)) == ((double)(this->f_S__60_r)))) : _t12738; })));
        if ((C_S_8G::sm_S_7d(g::SV.C_S__2b__21_q__id) && (!(((double)(this->m_S__27__3c_())) == (-1.0))))) {
            (void)(this->m_S__23__21_(rt::touint_d(12.0), l_param2));
        }
    } else if (((((double)(({ rt::Value _o12739 = l_param1; C_S_84* _p12740 = rt::as_ptr<C_S_84>(_o12739); _p12740 ? _p12740->f_id : rt::touint(rt::dget(_o12739, NM_id)); }))) == ((double)(g::SV.C_S__21_C__id))) && (!l_param2))) {
        (void)(this->m_S__23__21_(rt::touint_d(15.0), l_param2));
    } else if ((((double)(({ rt::Value _o12741 = l_param1; C_S_84* _p12742 = rt::as_ptr<C_S_84>(_o12741); _p12742 ? _p12742->f_id : rt::touint(rt::dget(_o12741, NM_id)); }))) == ((double)(g::SV.C_S_5j__id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(18.0), l_param2));
    } else if ((((double)(({ rt::Value _o12743 = l_param1; C_S_84* _p12744 = rt::as_ptr<C_S_84>(_o12743); _p12744 ? _p12744->f_id : rt::touint(rt::dget(_o12743, NM_id)); }))) == ((double)(g::SV.C_S__23_9__id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(19.0), l_param2));
    } else if (((((double)(({ rt::Value _o12745 = l_param1; C_S_84* _p12746 = rt::as_ptr<C_S_84>(_o12745); _p12746 ? _p12746->f_id : rt::touint(rt::dget(_o12745, NM_id)); }))) == ((double)(g::SV.C_S_2_3c___id))) && C_S_8G::sm_S_7d(g::SV.C_S__3d__21_i__id))) {
        (void)(this->m_S__23__21_(rt::touint_d(23.0), l_param2));
    } else if (((((double)(({ rt::Value _o12747 = l_param1; C_S_84* _p12748 = rt::as_ptr<C_S_84>(_o12747); _p12748 ? _p12748->f_id : rt::touint(rt::dget(_o12747, NM_id)); }))) == ((double)(g::SV.C_S_9_21_n__id))) && (!(((double)(this->m_S__27__3c_())) == (-1.0))))) {
        (void)(this->m_S__23__21_(rt::touint_d(24.0), l_param2));
    } else if ((((double)(({ rt::Value _o12749 = l_param1; C_S_84* _p12750 = rt::as_ptr<C_S_84>(_o12749); _p12750 ? _p12750->f_id : rt::touint(rt::dget(_o12749, NM_id)); }))) == ((double)(g::SV.C_S__27__21_n__id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(25.0), l_param2));
    } else if ((({ bool _t12753 = (((double)(({ rt::Value _o12751 = l_param1; C_S_84* _p12752 = rt::as_ptr<C_S_84>(_o12751); _p12752 ? _p12752->f_id : rt::touint(rt::dget(_o12751, NM_id)); }))) == ((double)(g::SV.C_S_8_3e___id))); _t12753 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_1_21_r__id)) : _t12753; }) && (((double)(this->m_S__27__3c_())) == (-1.0)))) {
        (void)(this->m_S__23__21_(rt::touint_d(9.0), l_param2));
    } else if ((((double)(({ rt::Value _o12754 = l_param1; C_S_84* _p12755 = rt::as_ptr<C_S_84>(_o12754); _p12755 ? _p12755->f_id : rt::touint(rt::dget(_o12754, NM_id)); }))) == ((double)(g::SV.C_S__21__22__21___id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(29.0), ({ bool _t12758 = l_param2; _t12758 ? (bool)(({ rt::Value _o12756 = g::SV.C_S__21__22__21___S__25__22__20_; C_S__3b_m* _p12757 = rt::as_ptr<C_S__3b_m>(_o12756); _p12757 ? _p12757->m_S__27_W(g::SV.C_S__21__22__21___S__23__22__20_) : rt::T(rt::dcallv(_o12756, NM_S__27_W, rt::V((double)(g::SV.C_S__21__22__21___S__23__22__20_)))); })) : _t12758; })));
    } else if ((((double)(({ rt::Value _o12759 = l_param1; C_S_84* _p12760 = rt::as_ptr<C_S_84>(_o12759); _p12760 ? _p12760->f_id : rt::touint(rt::dget(_o12759, NM_id)); }))) == ((double)(g::SV.C_S__60__25___id)))) {
        (void)(this->m_S__23__21_(rt::touint_d(27.0), l_param2));
    }
    return rt::NUL;
}
rt::Value C_S__60__21__3b_::m_S__23__21_(uint32_t p0, bool p1) {
    uint32_t l_param1 = p0;
    bool l_param2 = p1;
    bool l_A__loc3_ = false;
    RT_FN("S__60__21__3b_.S__23__21_");
    (l_A__loc3_ = ({ rt::Value _o12761 = this->f_S__2c_1; C_S__3b_m* _p12762 = rt::as_ptr<C_S__3b_m>(_o12761); _p12762 ? _p12762->m_S__27_W(l_param1) : rt::T(rt::dcallv(_o12761, NM_S__27_W, rt::V((double)(l_param1)))); }));
    if ((l_A__loc3_ == l_param2)) {
        return rt::NUL;
    }
    (void)(({ rt::Value _o12763 = this->f_S__2c_1; C_S__3b_m* _p12764 = rt::as_ptr<C_S__3b_m>(_o12763); _p12764 ? _p12764->m_S_4_21__3e_(l_param1, l_param2) : rt::dcallv(_o12763, NM_S_4_21__3e_, rt::V((double)(l_param1)), rt::VB(l_param2)); }));
    if (l_param2) {
        ({ double _v12765 = (((double)(this->f_S_1_21_c)) + 1.0); this->f_S_1_21_c = rt::touint_d(_v12765); _v12765; });
    } else {
        ({ double _v12766 = (((double)(this->f_S_1_21_c)) - 1.0); this->f_S_1_21_c = rt::touint_d(_v12766); _v12766; });
    }
    return rt::NUL;
}
int32_t C_S__60__21__3b_::dm_S__60__21_X_0() { return rt::toint_d(1.0); }
double C_S__60__21__3b_::m_S__60__21_X(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__60__21__3b_.S__60__21_X");
    return C_S__23__21__21_::sm_S__26__21_d(rt::VO(this), l_param1, C_S__23__21__21_::dsm_S__26__21_d_2(), C_S__23__21__21_::dsm_S__26__21_d_3(), C_S__23__21__21_::dsm_S__26__21_d_4());
    return 0.0;
}
int32_t C_S__60__21__3b_::m_S__27__3c_() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S__60__21__3b_.S__27__3c_");
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) < rt::alen(this->f_S_9_3b_))) {
        if (C_S__26_c::sm_S__60__21_i(rt::touint(rt::arr_at(this->f_S_9_3b_, ((double)(l_A__loc1_)))))) {
            return l_A__loc1_;
        }
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    return rt::toint_d((-1.0));
    return 0;
}
uint32_t C_S__60__21__3b_::g_S__21_a() {
    RT_FN("S__60__21__3b_.S__21_a_get");
    return ({ rt::Value _o12767 = this->f_S_6_5d_; C_S__3d__21_L* _p12768 = rt::as_ptr<C_S__3d__21_L>(_o12767); _p12768 ? _p12768->g_S_8_21__2b_() : rt::touint(rt::dget(_o12767, NM_S_8_21__2b_)); });
    return 0u;
}
bool C_S__60__21__3b_::g_S__2d_6() {
    RT_FN("S__60__21__3b_.S__2d_6_get");
    return ({ bool _t12769 = (((double)(this->f_S__2c__21_Y)) == 0.0); _t12769 ? _t12769 : (bool)((((double)(this->f_S__2c__21_Y)) == ((double)(g::SV.C_S_8G__S__2c__21_Y)))); });
    return false;
}
double C_S__60__21__3b_::g_S_9_21_U() {
    RT_FN("S__60__21__3b_.S_9_21_U_get");
    return C_S__23__21__21_::sm_S__26__21_d(rt::VO(this), C_S__23__21__21_::dsm_S__26__21_d_1(), C_S__23__21__21_::dsm_S__26__21_d_2(), C_S__23__21__21_::dsm_S__26__21_d_3(), C_S__23__21__21_::dsm_S__26__21_d_4());
    return 0.0;
}
rt::Value C_S__60__21__3b_::s_S__21_a(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S__60__21__3b_.S__21_a_set");
    ({ uint32_t _v12772 = l_param1; rt::Value _o12770 = this->f_S_6_5d_; C_S__3d__21_L* _p12771 = rt::as_ptr<C_S__3d__21_L>(_o12770); if (_p12771) _p12771->s_S_8_21__2b_(_v12772); else rt::dset(_o12770, NM_S_8_21__2b_, rt::V((double)(_v12772))); _v12772; });
    return rt::NUL;
}
C_S__60__21__3b_* C_S__60__21__3b_::alloc_() {
    C_S__60__21__3b_* o = rt::make<C_S__60__21__3b_>();
    return o;
}
rt::Value C_S__60__21__3b_::mk_(rt::Value* a, int n) {
    C_S__60__21__3b_* o = alloc_();
    o->C_S__60__21__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__60__21__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21_a: out = rt::V((double)(g_S__21_a())); return true;
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_id: out = rt::V((double)(f_id)); return true;
    case NM_ids: out = f_ids; return true;
    case NM_S_6_21_Z: out = rt::V((double)(f_S_6_21_Z)); return true;
    case NM_S__5b__21__21_: out = rt::V((double)(f_S__5b__21__21_)); return true;
    case NM_S_1i: out = f_S_1i; return true;
    case NM_S__2d_v: out = f_S__2d_v; return true;
    case NM_S_3y: out = f_S_3y; return true;
    case NM_S_1_21__2b_: out = f_S_1_21__2b_; return true;
    case NM_S__20_r: out = f_S__20_r; return true;
    case NM_S_2Z: out = rt::V(f_S_2Z); return true;
    case NM_S_8_21_: out = rt::V(f_S_8_21_); return true;
    case NM_S__3b__21_1: out = rt::V(f_S__3b__21_1); return true;
    case NM_S__5b__5d_: out = rt::V(f_S__5b__5d_); return true;
    case NM_S_9_22_B: out = rt::V(f_S_9_22_B); return true;
    case NM_S__25__22_D: out = rt::V(f_S__25__22_D); return true;
    case NM_S__3b__22_D: out = rt::V(f_S__3b__22_D); return true;
    case NM_S__27__22__3c_: out = rt::V(f_S__27__22__3c_); return true;
    case NM_S_5_22_D: out = rt::V(f_S_5_22_D); return true;
    case NM_S__3c__22_D: out = rt::V(f_S__3c__22_D); return true;
    case NM_S__60_r: out = rt::V((double)(f_S__60_r)); return true;
    case NM_S__3e__3d_: out = rt::V(f_S__3e__3d_); return true;
    case NM_S__2c__27_: out = rt::V(f_S__2c__27_); return true;
    case NM_S__20_4: out = rt::V(f_S__20_4); return true;
    case NM_S_0_21_c: out = rt::V(f_S_0_21_c); return true;
    case NM_S__2c__21_Y: out = rt::V((double)(f_S__2c__21_Y)); return true;
    case NM_S__27_T: out = f_S__27_T; return true;
    case NM_S__2d__21__26_: out = f_S__2d__21__26_; return true;
    case NM_S_9_3b_: out = f_S_9_3b_; return true;
    case NM_S__3e_h: out = rt::V(f_S__3e_h); return true;
    case NM_S__25__40_: out = f_S__25__40_; return true;
    case NM_S__3c__21_t: out = f_S__3c__21_t; return true;
    case NM_S_6_26_: out = f_S_6_26_; return true;
    case NM_S__2d__21_u: out = f_S__2d__21_u; return true;
    case NM_S__3f__22__27_: out = f_S__3f__22__27_; return true;
    case NM_S__3d__22__27_: out = f_S__3d__22__27_; return true;
    case NM_S_6_5d_: out = f_S_6_5d_; return true;
    case NM_S__2c_1: out = f_S__2c_1; return true;
    case NM_S_1_21_c: out = rt::V((double)(f_S_1_21_c)); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5d__21__2c_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__23__21_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__60__21_X: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27__3c_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__60__21__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_id: f_id = rt::touint(v); return true;
    case NM_ids: f_ids = rt::slot_string(v); return true;
    case NM_S_6_21_Z: f_S_6_21_Z = rt::touint(v); return true;
    case NM_S__5b__21__21_: f_S__5b__21__21_ = rt::toint(v); return true;
    case NM_S_1i: f_S_1i = rt::slot_string(v); return true;
    case NM_S__2d_v: f_S__2d_v = rt::slot_string(v); return true;
    case NM_S_3y: f_S_3y = rt::slot_string(v); return true;
    case NM_S_1_21__2b_: f_S_1_21__2b_ = rt::slot_string(v); return true;
    case NM_S__20_r: f_S__20_r = rt::slot_string(v); return true;
    case NM_S_2Z: f_S_2Z = rt::tonum(v); return true;
    case NM_S_8_21_: f_S_8_21_ = rt::tonum(v); return true;
    case NM_S__3b__21_1: f_S__3b__21_1 = rt::tonum(v); return true;
    case NM_S__5b__5d_: f_S__5b__5d_ = rt::tonum(v); return true;
    case NM_S_9_22_B: f_S_9_22_B = rt::tonum(v); return true;
    case NM_S__25__22_D: f_S__25__22_D = rt::tonum(v); return true;
    case NM_S__3b__22_D: f_S__3b__22_D = rt::tonum(v); return true;
    case NM_S__27__22__3c_: f_S__27__22__3c_ = rt::tonum(v); return true;
    case NM_S_5_22_D: f_S_5_22_D = rt::tonum(v); return true;
    case NM_S__3c__22_D: f_S__3c__22_D = rt::tonum(v); return true;
    case NM_S__60_r: f_S__60_r = rt::toint(v); return true;
    case NM_S__3e__3d_: f_S__3e__3d_ = rt::tonum(v); return true;
    case NM_S__2c__27_: f_S__2c__27_ = rt::tonum(v); return true;
    case NM_S__20_4: f_S__20_4 = rt::tonum(v); return true;
    case NM_S_0_21_c: f_S_0_21_c = rt::tonum(v); return true;
    case NM_S__2c__21_Y: f_S__2c__21_Y = rt::toint(v); return true;
    case NM_S__27_T: f_S__27_T = v; return true;
    case NM_S__2d__21__26_: f_S__2d__21__26_ = v; return true;
    case NM_S_9_3b_: f_S_9_3b_ = v; return true;
    case NM_S__3e_h: f_S__3e_h = rt::tonum(v); return true;
    case NM_S__25__40_: f_S__25__40_ = v; return true;
    case NM_S__3c__21_t: f_S__3c__21_t = v; return true;
    case NM_S_6_26_: f_S_6_26_ = v; return true;
    case NM_S__2d__21_u: f_S__2d__21_u = v; return true;
    case NM_S__3f__22__27_: f_S__3f__22__27_ = v; return true;
    case NM_S__3d__22__27_: f_S__3d__22__27_ = v; return true;
    case NM_S_6_5d_: f_S_6_5d_ = v; return true;
    case NM_S__2c_1: f_S__2c_1 = v; return true;
    case NM_S_1_21_c: f_S_1_21_c = rt::touint(v); return true;
    case NM_S__21_a: s_S__21_a(rt::touint(v)); return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__60__21__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__21__2c_: out = m_S__5d__21__2c_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, false)); return true;
    case NM_S__23__21_: out = m_S__23__21_(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<bool>(a, n, 1, false)); return true;
    case NM_S__60__21_X: out = rt::V(m_S__60__21_X(rt::arg<int32_t>(a, n, 0, C_S__60__21__3b_::dm_S__60__21_X_0()))); return true;
    case NM_S__27__3c_: out = rt::V((double)(m_S__27__3c_())); return true;
    case NM_S__21_a: { rt::Value f = rt::V((double)(g_S__21_a())); out = rt::call_value(f, a, n); return true; }
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    case NM_id: { rt::Value f = rt::V((double)(f_id)); out = rt::call_value(f, a, n); return true; }
    case NM_ids: { rt::Value f = f_ids; out = rt::call_value(f, a, n); return true; }
    case NM_S_6_21_Z: { rt::Value f = rt::V((double)(f_S_6_21_Z)); out = rt::call_value(f, a, n); return true; }
    case NM_S__5b__21__21_: { rt::Value f = rt::V((double)(f_S__5b__21__21_)); out = rt::call_value(f, a, n); return true; }
    case NM_S_1i: { rt::Value f = f_S_1i; out = rt::call_value(f, a, n); return true; }
    case NM_S__2d_v: { rt::Value f = f_S__2d_v; out = rt::call_value(f, a, n); return true; }
    case NM_S_3y: { rt::Value f = f_S_3y; out = rt::call_value(f, a, n); return true; }
    case NM_S_1_21__2b_: { rt::Value f = f_S_1_21__2b_; out = rt::call_value(f, a, n); return true; }
    case NM_S__20_r: { rt::Value f = f_S__20_r; out = rt::call_value(f, a, n); return true; }
    case NM_S_2Z: { rt::Value f = rt::V(f_S_2Z); out = rt::call_value(f, a, n); return true; }
    case NM_S_8_21_: { rt::Value f = rt::V(f_S_8_21_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3b__21_1: { rt::Value f = rt::V(f_S__3b__21_1); out = rt::call_value(f, a, n); return true; }
    case NM_S__5b__5d_: { rt::Value f = rt::V(f_S__5b__5d_); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_22_B: { rt::Value f = rt::V(f_S_9_22_B); out = rt::call_value(f, a, n); return true; }
    case NM_S__25__22_D: { rt::Value f = rt::V(f_S__25__22_D); out = rt::call_value(f, a, n); return true; }
    case NM_S__3b__22_D: { rt::Value f = rt::V(f_S__3b__22_D); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22__3c_: { rt::Value f = rt::V(f_S__27__22__3c_); out = rt::call_value(f, a, n); return true; }
    case NM_S_5_22_D: { rt::Value f = rt::V(f_S_5_22_D); out = rt::call_value(f, a, n); return true; }
    case NM_S__3c__22_D: { rt::Value f = rt::V(f_S__3c__22_D); out = rt::call_value(f, a, n); return true; }
    case NM_S__60_r: { rt::Value f = rt::V((double)(f_S__60_r)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__3d_: { rt::Value f = rt::V(f_S__3e__3d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__27_: { rt::Value f = rt::V(f_S__2c__27_); out = rt::call_value(f, a, n); return true; }
    case NM_S__20_4: { rt::Value f = rt::V(f_S__20_4); out = rt::call_value(f, a, n); return true; }
    case NM_S_0_21_c: { rt::Value f = rt::V(f_S_0_21_c); out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__21_Y: { rt::Value f = rt::V((double)(f_S__2c__21_Y)); out = rt::call_value(f, a, n); return true; }
    case NM_S__27_T: { rt::Value f = f_S__27_T; out = rt::call_value(f, a, n); return true; }
    case NM_S__2d__21__26_: { rt::Value f = f_S__2d__21__26_; out = rt::call_value(f, a, n); return true; }
    case NM_S_9_3b_: { rt::Value f = f_S_9_3b_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3e_h: { rt::Value f = rt::V(f_S__3e_h); out = rt::call_value(f, a, n); return true; }
    case NM_S__25__40_: { rt::Value f = f_S__25__40_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3c__21_t: { rt::Value f = f_S__3c__21_t; out = rt::call_value(f, a, n); return true; }
    case NM_S_6_26_: { rt::Value f = f_S_6_26_; out = rt::call_value(f, a, n); return true; }
    case NM_S__2d__21_u: { rt::Value f = f_S__2d__21_u; out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__22__27_: { rt::Value f = f_S__3f__22__27_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3d__22__27_: { rt::Value f = f_S__3d__22__27_; out = rt::call_value(f, a, n); return true; }
    case NM_S_6_5d_: { rt::Value f = f_S_6_5d_; out = rt::call_value(f, a, n); return true; }
    case NM_S__2c_1: { rt::Value f = f_S__2c_1; out = rt::call_value(f, a, n); return true; }
    case NM_S_1_21_c: { rt::Value f = rt::V((double)(f_S_1_21_c)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__60__21__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__21__2c_: return true;
    case NM_S__23__21_: return true;
    case NM_S__60__21_X: return true;
    case NM_S__27__3c_: return true;
    case NM_S__21_a: return false;
    case NM_S__2d_6: return false;
    case NM_S_9_21_U: return false;
    case NM_id: return false;
    case NM_ids: return false;
    case NM_S_6_21_Z: return false;
    case NM_S__5b__21__21_: return false;
    case NM_S_1i: return false;
    case NM_S__2d_v: return false;
    case NM_S_3y: return false;
    case NM_S_1_21__2b_: return false;
    case NM_S__20_r: return false;
    case NM_S_2Z: return false;
    case NM_S_8_21_: return false;
    case NM_S__3b__21_1: return false;
    case NM_S__5b__5d_: return false;
    case NM_S_9_22_B: return false;
    case NM_S__25__22_D: return false;
    case NM_S__3b__22_D: return false;
    case NM_S__27__22__3c_: return false;
    case NM_S_5_22_D: return false;
    case NM_S__3c__22_D: return false;
    case NM_S__60_r: return false;
    case NM_S__3e__3d_: return false;
    case NM_S__2c__27_: return false;
    case NM_S__20_4: return false;
    case NM_S_0_21_c: return false;
    case NM_S__2c__21_Y: return false;
    case NM_S__27_T: return false;
    case NM_S__2d__21__26_: return false;
    case NM_S_9_3b_: return false;
    case NM_S__3e_h: return false;
    case NM_S__25__40_: return false;
    case NM_S__3c__21_t: return false;
    case NM_S_6_26_: return false;
    case NM_S__2d__21_u: return false;
    case NM_S__3f__22__27_: return false;
    case NM_S__3d__22__27_: return false;
    case NM_S_6_5d_: return false;
    case NM_S__2c_1: return false;
    case NM_S_1_21_c: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__60__21__3b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__21__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__21__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__21__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void static_init_7(std::vector<std::string>& errs) {
    try { (g::SV.C_S_9_22_D__ids = rt::arr_lit({rt::VS(g::LS[3337])})); } catch (...) { errs.push_back(std::string("S_9_22_D.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__21_2__ids = rt::arr_lit({rt::VS(g::LS[3341])})); } catch (...) { errs.push_back(std::string("S__3b__21_2.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__22_A__S_1_21_S = 100.0); } catch (...) { errs.push_back(std::string("S__3d__22_A.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__22_A__S_6_21_c = 20.0); } catch (...) { errs.push_back(std::string("S__3d__22_A.S_6_21_c: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__22_A__ids = rt::arr_lit({rt::VS(g::LS[3345])})); } catch (...) { errs.push_back(std::string("S__3d__22_A.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__22_C__ids = rt::arr_lit({rt::VS(g::LS[3349]), rt::VS(g::LS[3350])})); } catch (...) { errs.push_back(std::string("S__3d__22_C.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d__22__3d___ids = rt::arr_lit({rt::VS(g::LS[3354])})); } catch (...) { errs.push_back(std::string("S__5d__22__3d_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_h__S_5N = rt::new_stubinst()); } catch (...) { errs.push_back(std::string("S__26_h.S_5N: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_h__S_6s = rt::new_stubinst()); } catch (...) { errs.push_back(std::string("S__26_h.S_6s: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c_S__S_5N = rt::new_stubinst()); } catch (...) { errs.push_back(std::string("S__2c_S.S_5N: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c_S__S_6s = rt::new_stubinst()); } catch (...) { errs.push_back(std::string("S__2c_S.S_6s: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_21_1__S_2_21_6 = rt::new_vectorv(rt::E_ANY, rt::V(16.0))); } catch (...) { errs.push_back(std::string("S_7_21_1.S_2_21_6: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_21_1__S_5N = rt::new_stubinst()); } catch (...) { errs.push_back(std::string("S_7_21_1.S_5N: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_21_1__S_6s = rt::new_stubinst()); } catch (...) { errs.push_back(std::string("S_7_21_1.S_6s: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__21_a__S_5N = rt::new_stubinst()); } catch (...) { errs.push_back(std::string("S__3d__21_a.S_5N: ") + rt::exc_text()); }
    try { (g::SV.C_S__5b_0__S__60__3e_ = rt::NUL); } catch (...) { errs.push_back(std::string("S__5b_0.S__60__3e_: ") + rt::exc_text()); }
    try { (g::SV.C_S__5b_0__S__3f__21__20_ = rt::NUL); } catch (...) { errs.push_back(std::string("S__5b_0.S__3f__21__20_: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__21_V__ids = rt::arr_lit({rt::VS(g::LS[3434])})); } catch (...) { errs.push_back(std::string("S__25__21_V.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__22__3b___ids = rt::arr_lit({rt::VS(g::LS[3438])})); } catch (...) { errs.push_back(std::string("S__25__22__3b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__22__21__40___ids = rt::arr_lit({rt::VS(g::LS[3443])})); } catch (...) { errs.push_back(std::string("S__22__21__40_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__22__22__3e___ids = rt::arr_lit({rt::VS(g::LS[3447])})); } catch (...) { errs.push_back(std::string("S__22__22__3e_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__22_D__ids = rt::arr_lit({rt::VS(g::LS[3454])})); } catch (...) { errs.push_back(std::string("S__3f__22_D.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__21_o__S__3d__21__25_ = rt::touint_d(0.0)); } catch (...) { errs.push_back(std::string("S__27__21_o.S__3d__21__25_: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__21_o__S__40__21_B = rt::touint_d(5400.0)); } catch (...) { errs.push_back(std::string("S__27__21_o.S__40__21_B: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__21_o__S__3e__23_ = rt::toint_d((-1.0))); } catch (...) { errs.push_back(std::string("S__27__21_o.S__3e__23_: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__21_w__S_0_22_K = 1.0); } catch (...) { errs.push_back(std::string("S__27__21_w.S_0_22_K: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__22__3f___ids = rt::arr_lit({rt::VS(g::LS[3470])})); } catch (...) { errs.push_back(std::string("S__2c__22__3f_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__3d___ids = rt::arr_lit({rt::VS(g::LS[3473])})); } catch (...) { errs.push_back(std::string("S__2c__3d_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_22__3c___ids = rt::arr_lit({rt::VS(g::LS[3477])})); } catch (...) { errs.push_back(std::string("S_1_22__3c_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_22__3b___ids = rt::arr_lit({rt::VS(g::LS[3481])})); } catch (...) { errs.push_back(std::string("S_2_22__3b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_22_9__ids = rt::arr_lit({rt::VS(g::LS[3489])})); } catch (...) { errs.push_back(std::string("S_9_22_9.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d_J__ids = rt::arr_lit({rt::VS(g::LS[3494])})); } catch (...) { errs.push_back(std::string("S__3d_J.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5b__22__3e___ids = rt::arr_lit({rt::VS(g::LS[3498])})); } catch (...) { errs.push_back(std::string("S__5b__22__3e_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d_a__ids = rt::arr_lit({rt::VS(g::LS[3502])})); } catch (...) { errs.push_back(std::string("S__5d_a.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__22_B__ids = rt::arr_lit({rt::VS(g::LS[3506])})); } catch (...) { errs.push_back(std::string("S__60__22_B.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_8_21__3e___ids = rt::arr_lit({rt::VS(g::LS[3510])})); } catch (...) { errs.push_back(std::string("S_8_21__3e_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_x__S_13 = 3.0); } catch (...) { errs.push_back(std::string("S_2_21_x.S_13: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__21_z__S_1_21_S = 1.1); } catch (...) { errs.push_back(std::string("S__3b__21_z.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_3_21_y__S_13 = 3.0); } catch (...) { errs.push_back(std::string("S_3_21_y.S_13: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__22__3d___S__3b__22__2b_ = 1.3); } catch (...) { errs.push_back(std::string("S__5e__22__3d_.S__3b__22__2b_: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__22__3d___S__3b__22__2c_ = 1.25); } catch (...) { errs.push_back(std::string("S__5e__22__3d_.S__3b__22__2c_: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__22__3d___S_3_21_3 = 1.0); } catch (...) { errs.push_back(std::string("S__5e__22__3d_.S_3_21_3: ") + rt::exc_text()); }
}
}  // namespace g
