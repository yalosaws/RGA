// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S__22__21_k::ctor_() {
    RT_FN("S__22__21_k.S__22__21_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20818 = 745.0; this->f_S_6_21_Z = rt::touint_d(_v20818); _v20818; });
    ({ rt::Value _v20819 = rt::trv(rt::VS(g::LS[6155])); this->f_S_1i = rt::slot_string(_v20819); _v20819; });
    ({ rt::Value _v20820 = rt::VS(g::LS[6156]); this->f_S__5e__21__23_ = rt::slot_string(_v20820); _v20820; });
    ({ double _v20821 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20821); _v20821; });
}
rt::Value C_S__22__21_k::m_S__40__22_() {
    RT_FN("S__22__21_k.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6157]), C_S__26_c::sm_S_6_21_T(C_S__22__21_k::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S__22__21_k::g_S__2d_6() {
    RT_FN("S__22__21_k.S__2d_6_get");
    return (((double)(C_PlayFab::sg_season())) == 9.0);
    return false;
}
bool C_S__22__21_k::g_S__26_8() {
    RT_FN("S__22__21_k.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 9.0);
    return false;
}
double C_S__22__21_k::sm_S__27__21_b() {
    RT_FN("S__22__21_k.S__27__21_b");
    return ((((double)(C_PlayFab::sg_season())) == 9.0) ? rt::m_min2((((0.0 + (1.0 * ((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(65.0)) / 20.0)))) + ((-0.005) * rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(65.0)) / 20.0), 2.0))) + (0.00045 * rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(65.0)) / 20.0), 3.0))), 100000.0) : 0.0);
    return 0.0;
}
C_S__22__21_k* C_S__22__21_k::alloc_() {
    C_S__22__21_k* o = rt::make<C_S__22__21_k>();
    return o;
}
rt::Value C_S__22__21_k::mk_(rt::Value* a, int n) {
    C_S__22__21_k* o = alloc_();
    o->C_S__22__21_k::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22__21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22__21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22__21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22__21_k::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__22__21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_k__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__22__22_1::ctor_() {
    RT_FN("S__22__22_1.S__22__22_1");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20822 = 1015.0; this->f_S_6_21_Z = rt::touint_d(_v20822); _v20822; });
    ({ rt::Value _v20823 = rt::trv(rt::VS(g::LS[6159])); this->f_S_1i = rt::slot_string(_v20823); _v20823; });
    ({ rt::Value _v20824 = rt::VS(g::LS[6160]); this->f_S__5e__21__23_ = rt::slot_string(_v20824); _v20824; });
    ({ rt::Value _v20825 = rt::VS(g::LS[6105]); this->f_S__3f__21__3d_ = rt::slot_string(_v20825); _v20825; });
    ({ double _v20826 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20826); _v20826; });
}
rt::Value C_S__22__22_1::m_S__40__22_() {
    RT_FN("S__22__22_1.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5314]), C_S__26_c::sm_S_8_21_Z(C_S__22__22_1::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__22__22_1::g_S__2d_6() {
    RT_FN("S__22__22_1.S__2d_6_get");
    return ({ bool _t20829 = rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 28.0), rt::V(15.0)); _t20829 ? (bool)(({ rt::Value _o20827 = C_S_8G::sm_S__21__21_H(g::SV.C_S__27__22_1__id); C_S__60_6* _p20828 = rt::as_ptr<C_S__60_6>(_o20827); _p20828 ? _p20828->g_S__2d_6() : rt::T(rt::dget(_o20827, NM_S__2d_6)); })) : _t20829; });
    return false;
}
bool C_S__22__22_1::g_S__26_8() {
    RT_FN("S__22__22_1.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
double C_S__22__22_1::sm_S__22__21__26_() {
    RT_FN("S__22__22_1.S__22__21__26_");
    return ((((double)(C_PlayFab::sg_season())) == 11.0) ? 50.0 : 0.0);
    return 0.0;
}
C_S__22__22_1* C_S__22__22_1::alloc_() {
    C_S__22__22_1* o = rt::make<C_S__22__22_1>();
    return o;
}
rt::Value C_S__22__22_1::mk_(rt::Value* a, int n) {
    C_S__22__22_1* o = alloc_();
    o->C_S__22__22_1::ctor_();
    return rt::VO(o);
}
bool C_S__22__22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22__22_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22__22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22__22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22__22_1::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__22__22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__22_1__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__22_1__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__22__27_::ctor_() {
    RT_FN("S__22__27_.S__22__27_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20830 = 560.0; this->f_S_6_21_Z = rt::touint_d(_v20830); _v20830; });
    ({ rt::Value _v20831 = rt::trv(rt::VS(g::LS[6161])); this->f_S_1i = rt::slot_string(_v20831); _v20831; });
    ({ rt::Value _v20832 = rt::VS(g::LS[6162]); this->f_S__5e__21__23_ = rt::slot_string(_v20832); _v20832; });
    ({ bool _v20833 = true; this->f_S__25__21__3e_ = _v20833; _v20833; });
    ({ bool _v20834 = true; this->f_S__3f_T = _v20834; _v20834; });
    ({ double _v20835 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20835); _v20835; });
}
rt::Value C_S__22__27_::m_S__40__22_() {
    RT_FN("S__22__27_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6163]), C_S__26_c::sm_S_8_21_Z(C_S__22__27_::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S__22__27_::g_S__2d_6() {
    RT_FN("S__22__27_.S__2d_6_get");
    return ({ bool _t20836 = (((double)(C_PlayFab::sg_season())) == 4.0); _t20836 ? (bool)(this->f_S__3f__21_6) : _t20836; });
    return false;
}
bool C_S__22__27_::g_S__26_8() {
    RT_FN("S__22__27_.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 4.0);
    return false;
}
double C_S__22__27_::sm_S__60_z() {
    RT_FN("S__22__27_.S__60_z");
    return ((((double)(C_PlayFab::sg_season())) == 4.0) ? 500.0 : 0.0);
    return 0.0;
}
C_S__22__27_* C_S__22__27_::alloc_() {
    C_S__22__27_* o = rt::make<C_S__22__27_>();
    return o;
}
rt::Value C_S__22__27_::mk_(rt::Value* a, int n) {
    C_S__22__27_* o = alloc_();
    o->C_S__22__27_::ctor_();
    return rt::VO(o);
}
bool C_S__22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22__27_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22__27_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22__27_::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    default: return false;
    }
}
bool C_S__22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__27___id)); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__27___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    default: return false;
    }
}
void C_S__3c__21_k::ctor_() {
    RT_FN("S__3c__21_k.S__3c__21_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20837 = 740.0; this->f_S_6_21_Z = rt::touint_d(_v20837); _v20837; });
    ({ rt::Value _v20838 = rt::trv(rt::VS(g::LS[6164])); this->f_S_1i = rt::slot_string(_v20838); _v20838; });
    ({ rt::Value _v20839 = rt::VS(g::LS[6165]); this->f_S__5e__21__23_ = rt::slot_string(_v20839); _v20839; });
    ({ double _v20840 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v20840); _v20840; });
    ({ double _v20841 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20841); _v20841; });
    ({ bool _v20842 = false; this->f_S_3e = _v20842; _v20842; });
    ({ bool _v20843 = false; this->f_S__40_X = _v20843; _v20843; });
}
rt::Value C_S__3c__21_k::m_S__40__22_() {
    RT_FN("S__3c__21_k.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6166])));
    return rt::NUL;
}
bool C_S__3c__21_k::g_S__2d_6() {
    RT_FN("S__3c__21_k.S__2d_6_get");
    return ({ bool _t20845 = ({ bool _t20844 = (((double)(C_PlayFab::sg_season())) == 9.0); _t20844 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t20844; }); _t20845 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__25__21_k__id))) : _t20845; });
    return false;
}
bool C_S__3c__21_k::g_S__26_8() {
    RT_FN("S__3c__21_k.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 9.0);
    return false;
}
C_S__3c__21_k* C_S__3c__21_k::alloc_() {
    C_S__3c__21_k* o = rt::make<C_S__3c__21_k>();
    return o;
}
rt::Value C_S__3c__21_k::mk_(rt::Value* a, int n) {
    C_S__3c__21_k* o = alloc_();
    o->C_S__3c__21_k::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__21_k::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_k__id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__21_p::ctor_() {
    RT_FN("S__3c__21_p.S__3c__21_p");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20846 = 792.0; this->f_S_6_21_Z = rt::touint_d(_v20846); _v20846; });
    ({ rt::Value _v20847 = rt::trv(rt::VS(g::LS[6167])); this->f_S_1i = rt::slot_string(_v20847); _v20847; });
    ({ rt::Value _v20848 = rt::VS(g::LS[6168]); this->f_S__5e__21__23_ = rt::slot_string(_v20848); _v20848; });
    ({ bool _v20849 = false; this->f_S_3e = _v20849; _v20849; });
    ({ bool _v20850 = true; this->f_S__3f_T = _v20850; _v20850; });
    ({ double _v20851 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20851); _v20851; });
}
double C_S__3c__21_p::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__3c__21_p.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 0.0))) {
        return 10000.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__3c__21_p::m_S__40__22_() {
    RT_FN("S__3c__21_p.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6169])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S__3c__21_p::g_S__2d_6() {
    RT_FN("S__3c__21_p.S__2d_6_get");
    return ({ bool _t20853 = ({ bool _t20852 = (((double)(C_PlayFab::sg_season())) == 2.0); _t20852 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t20852; }); _t20853 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3d__21_p__id)) : _t20853; });
    return false;
}
bool C_S__3c__21_p::g_S__26_8() {
    RT_FN("S__3c__21_p.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 2.0);
    return false;
}
C_S__3c__21_p* C_S__3c__21_p::alloc_() {
    C_S__3c__21_p* o = rt::make<C_S__3c__21_p>();
    return o;
}
rt::Value C_S__3c__21_p::mk_(rt::Value* a, int n) {
    C_S__3c__21_p* o = alloc_();
    o->C_S__3c__21_p::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__21_p::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__21_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__21_p::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__21_p::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_p__id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_p__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__22__27_::ctor_() {
    RT_FN("S__3c__22__27_.S__3c__22__27_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20854 = 978.0; this->f_S_6_21_Z = rt::touint_d(_v20854); _v20854; });
    ({ rt::Value _v20855 = rt::trv(rt::VS(g::LS[6170])); this->f_S_1i = rt::slot_string(_v20855); _v20855; });
    ({ rt::Value _v20856 = rt::VS(g::LS[6171]); this->f_S__5e__21__23_ = rt::slot_string(_v20856); _v20856; });
    ({ double _v20857 = 1.0; this->f_S__3e__3d_ = _v20857; _v20857; });
    ({ double _v20858 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20858); _v20858; });
}
rt::Value C_S__3c__22__27_::m_S__40__22_() {
    RT_FN("S__3c__22__27_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6172]), C_S__26_c::sm_S_8_21_Z(C_S__3c__22__27_::sm_S__26_s(C_S__3c__22__27_::dsm_S__26_s_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__3c__22__27_::g_S__2d_6() {
    RT_FN("S__3c__22__27_.S__2d_6_get");
    return ({ bool _t20859 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20859 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3e__22__27___id)) : _t20859; });
    return false;
}
bool C_S__3c__22__27_::g_S__26_8() {
    RT_FN("S__3c__22__27_.S__26_8_get");
    return ({ bool _t20860 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20860 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3e__22__27___id)) : _t20860; });
    return false;
}
bool C_S__3c__22__27_::dsm_S__26_s_0() { return false; }
double C_S__3c__22__27_::sm_S__26_s(bool p0) {
    bool l_param1 = p0;
    RT_FN("S__3c__22__27_.S__26_s");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? (25.0 + (0.5 * rt::m_pow(C_S__26_c::sm_S__26__21_y(true, C_S__26_c::dsm_S__26__21_y_1(), C_S__26_c::dsm_S__26__21_y_2()), 0.5))) : 0.0);
    return 0.0;
}
C_S__3c__22__27_* C_S__3c__22__27_::alloc_() {
    C_S__3c__22__27_* o = rt::make<C_S__3c__22__27_>();
    return o;
}
rt::Value C_S__3c__22__27_::mk_(rt::Value* a, int n) {
    C_S__3c__22__27_* o = alloc_();
    o->C_S__3c__22__27_::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__22__27_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__22__27_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__22__27_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3c__22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22__27___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22__27___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s(rt::arg<bool>(a, n, 0, C_S__3c__22__27_::dsm_S__26_s_0()))); return true;
    default: return false;
    }
}
void C_S__3c__22_M::ctor_() {
    RT_FN("S__3c__22_M.S__3c__22_M");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20861 = 1217.0; this->f_S_6_21_Z = rt::touint_d(_v20861); _v20861; });
    ({ rt::Value _v20862 = rt::trv(rt::VS(g::LS[6173])); this->f_S_1i = rt::slot_string(_v20862); _v20862; });
    ({ rt::Value _v20863 = rt::VS(g::LS[6174]); this->f_S__5e__21__23_ = rt::slot_string(_v20863); _v20863; });
    ({ double _v20864 = 1.0; this->f_S__3e__3d_ = _v20864; _v20864; });
    ({ double _v20865 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20865); _v20865; });
}
rt::Value C_S__3c__22_M::m_S__40__22_() {
    RT_FN("S__3c__22_M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6175]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S__3c__22_M::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__3c__22_M::g_S__2d_6() {
    RT_FN("S__3c__22_M.S__2d_6_get");
    return ({ bool _t20866 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20866 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3d__22_M__id)) : _t20866; });
    return false;
}
bool C_S__3c__22_M::g_S__26_8() {
    RT_FN("S__3c__22_M.S__26_8_get");
    return ({ bool _t20867 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20867 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3d__22_M__id)) : _t20867; });
    return false;
}
double C_S__3c__22_M::sm_S__26_s() {
    RT_FN("S__3c__22_M.S__26_s");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 25.0 : 0.0);
    return 0.0;
}
C_S__3c__22_M* C_S__3c__22_M::alloc_() {
    C_S__3c__22_M* o = rt::make<C_S__3c__22_M>();
    return o;
}
rt::Value C_S__3c__22_M::mk_(rt::Value* a, int n) {
    C_S__3c__22_M* o = alloc_();
    o->C_S__3c__22_M::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__22_M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__22_M::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3c__22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22_M__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3c__22_Q::ctor_() {
    RT_FN("S__3c__22_Q.S__3c__22_Q");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20868 = 1255.0; this->f_S_6_21_Z = rt::touint_d(_v20868); _v20868; });
    ({ rt::Value _v20869 = rt::trv(rt::VS(g::LS[6176])); this->f_S_1i = rt::slot_string(_v20869); _v20869; });
    ({ rt::Value _v20870 = rt::VS(g::LS[6177]); this->f_S__5e__21__23_ = rt::slot_string(_v20870); _v20870; });
    ({ double _v20871 = 1.0; this->f_S__3e__3d_ = _v20871; _v20871; });
    ({ double _v20872 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20872); _v20872; });
}
rt::Value C_S__3c__22_Q::m_S__40__22_() {
    RT_FN("S__3c__22_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6178]), C_S__26_c::sm_S_8_21_Z(C_S__3c__22_Q::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__3c__22_Q::g_S__2d_6() {
    RT_FN("S__3c__22_Q.S__2d_6_get");
    return ({ bool _t20873 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20873 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9_22_Q__id)) : _t20873; });
    return false;
}
bool C_S__3c__22_Q::g_S__26_8() {
    RT_FN("S__3c__22_Q.S__26_8_get");
    return ({ bool _t20874 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20874 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9_22_Q__id)) : _t20874; });
    return false;
}
double C_S__3c__22_Q::sm_S_9L() {
    RT_FN("S__3c__22_Q.S_9L");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 10.0 : 0.0);
    return 0.0;
}
C_S__3c__22_Q* C_S__3c__22_Q::alloc_() {
    C_S__3c__22_Q* o = rt::make<C_S__3c__22_Q>();
    return o;
}
rt::Value C_S__3c__22_Q::mk_(rt::Value* a, int n) {
    C_S__3c__22_Q* o = alloc_();
    o->C_S__3c__22_Q::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__22_Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__22_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__22_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__22_Q::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__3c__22_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22_Q__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__22_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22_Q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__3c__2b_::ctor_() {
    RT_FN("S__3c__2b_.S__3c__2b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20875 = 593.0; this->f_S_6_21_Z = rt::touint_d(_v20875); _v20875; });
    ({ rt::Value _v20876 = rt::trv(rt::VS(g::LS[6179])); this->f_S_1i = rt::slot_string(_v20876); _v20876; });
    ({ rt::Value _v20877 = rt::VS(g::LS[6180]); this->f_S__5e__21__23_ = rt::slot_string(_v20877); _v20877; });
    ({ rt::Value _v20878 = rt::VS(g::LS[5818]); this->f_S__3f__21__3d_ = rt::slot_string(_v20878); _v20878; });
    ({ double _v20879 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20879); _v20879; });
    ({ bool _v20880 = false; this->f_S_3e = _v20880; _v20880; });
    ({ bool _v20881 = true; this->f_S_0_21_d = _v20881; _v20881; });
}
double C_S__3c__2b_::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__3c__2b_.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 9.0))) {
        return 1300.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__3c__2b_::m_S__40__22_() {
    RT_FN("S__3c__2b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6181]), C_S__26_c::sm_S_6_21_T(C_S__3c__2b_::sm_S_2_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__3c__2b_::g_S__2d_6() {
    RT_FN("S__3c__2b_.S__2d_6_get");
    return C_S_8G::sm_S_7d(g::SV.C_S__23_P__id);
    return false;
}
double C_S__3c__2b_::sm_S_2_21__40_() {
    RT_FN("S__3c__2b_.S_2_21__40_");
    return (((((double)(C_PlayFab::sg_season())) == 6.0) && C_S_8G::sm_S_7d(g::SV.C_S__23_P__id)) ? rt::m_pow(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(127.0)), 1.03) : 0.0);
    return 0.0;
}
C_S__3c__2b_* C_S__3c__2b_::alloc_() {
    C_S__3c__2b_* o = rt::make<C_S__3c__2b_>();
    return o;
}
rt::Value C_S__3c__2b_::mk_(rt::Value* a, int n) {
    C_S__3c__2b_* o = alloc_();
    o->C_S__3c__2b_::ctor_();
    return rt::VO(o);
}
bool C_S__3c__2b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__2b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__2b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__2b_::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__2b_::smeth_(int id) {
    switch (id) {
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S__3c__2b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__2b___id)); return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__2b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__2b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__2b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S__3e__22_0::ctor_() {
    RT_FN("S__3e__22_0.S__3e__22_0");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20882 = 1006.0; this->f_S_6_21_Z = rt::touint_d(_v20882); _v20882; });
    ({ rt::Value _v20883 = rt::trv(rt::VS(g::LS[6182])); this->f_S_1i = rt::slot_string(_v20883); _v20883; });
    ({ rt::Value _v20884 = rt::VS(g::LS[6183]); this->f_S__5e__21__23_ = rt::slot_string(_v20884); _v20884; });
    ({ double _v20885 = 1.0; this->f_S__3e__3d_ = _v20885; _v20885; });
    ({ double _v20886 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20886); _v20886; });
}
rt::Value C_S__3e__22_0::m_S__40__22_() {
    RT_FN("S__3e__22_0.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6184]), C_S__26_c::sm_S_8_21_Z(C_S__3e__22_0::sm_S__23__21_Y(C_S__3e__22_0::dsm_S__23__21_Y_0()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__3e__22_0::g_S__2d_6() {
    RT_FN("S__3e__22_0.S__2d_6_get");
    return ({ bool _t20887 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20887 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5d__22_0__id)) : _t20887; });
    return false;
}
bool C_S__3e__22_0::g_S__26_8() {
    RT_FN("S__3e__22_0.S__26_8_get");
    return ({ bool _t20888 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20888 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5d__22_0__id)) : _t20888; });
    return false;
}
bool C_S__3e__22_0::dsm_S__23__21_Y_0() { return false; }
double C_S__3e__22_0::sm_S__23__21_Y(bool p0) {
    bool l_param1 = p0;
    RT_FN("S__3e__22_0.S__23__21_Y");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? (0.5 * rt::m_pow((0.5 * rt::m_log((1.0 + C_S__26_c::sm_S__3e__21_h(false, true, C_S__26_c::dsm_S__3e__21_h_2())))), 2.5)) : 0.0);
    return 0.0;
}
C_S__3e__22_0* C_S__3e__22_0::alloc_() {
    C_S__3e__22_0* o = rt::make<C_S__3e__22_0>();
    return o;
}
rt::Value C_S__3e__22_0::mk_(rt::Value* a, int n) {
    C_S__3e__22_0* o = alloc_();
    o->C_S__3e__22_0::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e__22_0::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e__22_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e__22_0::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e__22_0::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__3e__22_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22_0__id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22_0__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__22_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y(rt::arg<bool>(a, n, 0, C_S__3e__22_0::dsm_S__23__21_Y_0()))); return true;
    default: return false;
    }
}
void C_S__3e_x::ctor_() {
    RT_FN("S__3e_x.S__3e_x");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20889 = 592.0; this->f_S_6_21_Z = rt::touint_d(_v20889); _v20889; });
    ({ rt::Value _v20890 = rt::trv(rt::VS(g::LS[6185])); this->f_S_1i = rt::slot_string(_v20890); _v20890; });
    ({ rt::Value _v20891 = rt::VS(g::LS[6186]); this->f_S__5e__21__23_ = rt::slot_string(_v20891); _v20891; });
    ({ rt::Value _v20892 = rt::VS(g::LS[5818]); this->f_S__3f__21__3d_ = rt::slot_string(_v20892); _v20892; });
    ({ double _v20893 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20893); _v20893; });
    ({ bool _v20894 = false; this->f_S_3e = _v20894; _v20894; });
    ({ bool _v20895 = true; this->f_S_0_21_d = _v20895; _v20895; });
}
double C_S__3e_x::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__3e_x.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 9.0))) {
        return 800.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__3e_x::m_S__40__22_() {
    RT_FN("S__3e_x.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6187]), C_S__26_c::sm_S_6_21_T(C_S__3e_x::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__3e_x::g_S__2d_6() {
    RT_FN("S__3e_x.S__2d_6_get");
    return C_S_8G::sm_S_7d(g::SV.C_S__23_P__id);
    return false;
}
double C_S__3e_x::sm_S__27__21_b() {
    RT_FN("S__3e_x.S__27__21_b");
    return (((((double)(C_PlayFab::sg_season())) == 6.0) && C_S_8G::sm_S_7d(g::SV.C_S__23_P__id)) ? rt::m_floor((20.0 * rt::m_pow(((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(129.0)) / 60.0) / 60.0), 0.75))) : 0.0);
    return 0.0;
}
C_S__3e_x* C_S__3e_x::alloc_() {
    C_S__3e_x* o = rt::make<C_S__3e_x>();
    return o;
}
rt::Value C_S__3e_x::mk_(rt::Value* a, int n) {
    C_S__3e_x* o = alloc_();
    o->C_S__3e_x::ctor_();
    return rt::VO(o);
}
bool C_S__3e_x::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e_x::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e_x::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e_x::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e_x::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3e_x::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e_x__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e_x::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e_x__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e_x::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3f__21__3f_::ctor_() {
    RT_FN("S__3f__21__3f_.S__3f__21__3f_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20896 = 554.0; this->f_S_6_21_Z = rt::touint_d(_v20896); _v20896; });
    ({ rt::Value _v20897 = rt::trv(rt::VS(g::LS[6188])); this->f_S_1i = rt::slot_string(_v20897); _v20897; });
    ({ rt::Value _v20898 = rt::VS(g::LS[6189]); this->f_S__5e__21__23_ = rt::slot_string(_v20898); _v20898; });
    ({ bool _v20899 = true; this->f_S__3f_T = _v20899; _v20899; });
    ({ double _v20900 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20900); _v20900; });
}
rt::Value C_S__3f__21__3f_::m_S__40__22_() {
    RT_FN("S__3f__21__3f_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6190]), C_S__26_c::sm_S_6_21_T(C_S__3f__21__3f_::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S__3f__21__3f_::g_S__2d_6() {
    RT_FN("S__3f__21__3f_.S__2d_6_get");
    return (((double)(C_PlayFab::sg_season())) == 4.0);
    return false;
}
bool C_S__3f__21__3f_::g_S__26_8() {
    RT_FN("S__3f__21__3f_.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 4.0);
    return false;
}
double C_S__3f__21__3f_::sm_S__27__21_b() {
    RT_FN("S__3f__21__3f_.S__27__21_b");
    return ((((double)(C_PlayFab::sg_season())) == 4.0) ? rt::m_min2((((0.0 + (3.0 * C_S__26_c::sm_S__20__21__3b_(rt::toint_d(124.0)))) + ((-0.03) * rt::m_pow(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(124.0)), 2.0))) + (0.0002 * rt::m_pow(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(124.0)), 3.0))), 100000.0) : 0.0);
    return 0.0;
}
C_S__3f__21__3f_* C_S__3f__21__3f_::alloc_() {
    C_S__3f__21__3f_* o = rt::make<C_S__3f__21__3f_>();
    return o;
}
rt::Value C_S__3f__21__3f_::mk_(rt::Value* a, int n) {
    C_S__3f__21__3f_* o = alloc_();
    o->C_S__3f__21__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__21__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__21__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__21__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__21__3f_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3f__21__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21__3f___id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__21__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__21__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3f__22_F::ctor_() {
    RT_FN("S__3f__22_F.S__3f__22_F");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20901 = 1169.0; this->f_S_6_21_Z = rt::touint_d(_v20901); _v20901; });
    ({ rt::Value _v20902 = rt::trv(rt::VS(g::LS[6191])); this->f_S_1i = rt::slot_string(_v20902); _v20902; });
    ({ rt::Value _v20903 = rt::VS(g::LS[6192]); this->f_S__5e__21__23_ = rt::slot_string(_v20903); _v20903; });
    ({ double _v20904 = 1.0; this->f_S__3e__3d_ = _v20904; _v20904; });
    ({ double _v20905 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20905); _v20905; });
}
rt::Value C_S__3f__22_F::m_S__40__22_() {
    RT_FN("S__3f__22_F.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6193]), C_S__26_c::sm_S_8_21_Z(C_S__3f__22_F::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__3f__22_F::g_S__2d_6() {
    RT_FN("S__3f__22_F.S__2d_6_get");
    return ({ bool _t20906 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20906 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__40__22_F__id)) : _t20906; });
    return false;
}
bool C_S__3f__22_F::g_S__26_8() {
    RT_FN("S__3f__22_F.S__26_8_get");
    return ({ bool _t20907 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20907 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__40__22_F__id)) : _t20907; });
    return false;
}
double C_S__3f__22_F::sm_S_6_21_Y() {
    RT_FN("S__3f__22_F.S_6_21_Y");
    return 10.0;
    return 0.0;
}
C_S__3f__22_F* C_S__3f__22_F::alloc_() {
    C_S__3f__22_F* o = rt::make<C_S__3f__22_F>();
    return o;
}
rt::Value C_S__3f__22_F::mk_(rt::Value* a, int n) {
    C_S__3f__22_F* o = alloc_();
    o->C_S__3f__22_F::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__22_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__22_F::smeth_(int id) {
    switch (id) {
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S__3f__22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22_F__id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S__25_I::ctor_() {
    RT_FN("S__25_I.S__25_I");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ rt::Value _v20908 = rt::trv(rt::VS(g::LS[6194])); this->f_S_1i = rt::slot_string(_v20908); _v20908; });
    ({ rt::Value _v20909 = rt::VS(g::LS[6195]); this->f_S__5e__21__23_ = rt::slot_string(_v20909); _v20909; });
    ({ bool _v20910 = true; this->f_S__25__21__2c_ = _v20910; _v20910; });
    ({ bool _v20911 = false; this->f_S_3e = _v20911; _v20911; });
    ({ bool _v20912 = false; this->f_S__40_X = _v20912; _v20912; });
    ({ double _v20913 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20913); _v20913; });
}
rt::Value C_S__25_I::m_S__40__22_() {
    RT_FN("S__25_I.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6196]), C_S__26_c::sm_S_8_21_Z(this->m_S__27_B(rt::toint_d(4.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__25_I::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__25_I.S__27_B");
    if ((((double)(l_param1)) == 4.0)) {
        return 3000.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__25_I::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__25_I.S_6r");
    ({ bool _v20914 = false; this->f_S__3c__21_7 = _v20914; _v20914; });
    (l_A__loc2_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)) - 1.0));
    ({ rt::Value _v20915 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(13.0), _v20915); });
    if ((((double)(C_S__26_c::sm_S__5e__21_L())) >= 8.0)) {
        return rt::NUL;
    }
    (void)(C_S__26_c::sm_S__5b__21_I(1.0, false, true));
    return rt::NUL;
}
bool C_S__25_I::g_S__2d_6() {
    RT_FN("S__25_I.S__2d_6_get");
    return ({ bool _t20916 = (((double)(C_PlayFab::sg_season())) == 4.0); _t20916 ? (bool)((((double)(C_S__26_c::sm_S__5e__21_L())) < 8.0)) : _t20916; });
    return false;
}
C_S__25_I* C_S__25_I::alloc_() {
    C_S__25_I* o = rt::make<C_S__25_I>();
    return o;
}
rt::Value C_S__25_I::mk_(rt::Value* a, int n) {
    C_S__25_I* o = alloc_();
    o->C_S__25_I::ctor_();
    return rt::VO(o);
}
bool C_S__25_I::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25_I::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25_I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25_I::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25_I::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25_I::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25_I__id)); return true;
    default: return false;
    }
}
bool C_S__25_I::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25_I__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25_I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25_f::ctor_() {
    RT_FN("S__25_f.S__25_f");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20917 = 559.0; this->f_S_6_21_Z = rt::touint_d(_v20917); _v20917; });
    ({ rt::Value _v20918 = rt::trv(rt::VS(g::LS[6197])); this->f_S_1i = rt::slot_string(_v20918); _v20918; });
    ({ rt::Value _v20919 = rt::VS(g::LS[6198]); this->f_S__5e__21__23_ = rt::slot_string(_v20919); _v20919; });
    ({ bool _v20920 = true; this->f_S__25__21__3e_ = _v20920; _v20920; });
    ({ bool _v20921 = true; this->f_S__3f_T = _v20921; _v20921; });
    ({ double _v20922 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20922); _v20922; });
}
rt::Value C_S__25_f::m_S__40__22_() {
    RT_FN("S__25_f.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[367]), C_S__26_c::sm_S_6_21_T(C_S__25_f::sm_S__2b__2b_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S__25_f::g_S__2d_6() {
    RT_FN("S__25_f.S__2d_6_get");
    return ({ bool _t20923 = (((double)(C_PlayFab::sg_season())) == 4.0); _t20923 ? (bool)(this->f_S__3f__21_6) : _t20923; });
    return false;
}
bool C_S__25_f::g_S__26_8() {
    RT_FN("S__25_f.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 4.0);
    return false;
}
double C_S__25_f::sm_S__2b__2b_() {
    RT_FN("S__25_f.S__2b__2b_");
    return ((((double)(C_PlayFab::sg_season())) == 4.0) ? 500.0 : 0.0);
    return 0.0;
}
C_S__25_f* C_S__25_f::alloc_() {
    C_S__25_f* o = rt::make<C_S__25_f>();
    return o;
}
rt::Value C_S__25_f::mk_(rt::Value* a, int n) {
    C_S__25_f* o = alloc_();
    o->C_S__25_f::ctor_();
    return rt::VO(o);
}
bool C_S__25_f::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25_f::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25_f::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25_f::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25_f::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__25_f::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25_f__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25_f::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25_f__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25_f::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__26__21_j::ctor_() {
    RT_FN("S__26__21_j.S__26__21_j");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20924 = 724.0; this->f_S_6_21_Z = rt::touint_d(_v20924); _v20924; });
    ({ rt::Value _v20925 = rt::trv(rt::VS(g::LS[6199])); this->f_S_1i = rt::slot_string(_v20925); _v20925; });
    ({ rt::Value _v20926 = rt::VS(g::LS[6200]); this->f_S__5e__21__23_ = rt::slot_string(_v20926); _v20926; });
    ({ rt::Value _v20927 = rt::VS(g::LS[5814]); this->f_S__3f__21__3d_ = rt::slot_string(_v20927); _v20927; });
    ({ double _v20928 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20928); _v20928; });
    ({ bool _v20929 = false; this->f_S_3e = _v20929; _v20929; });
    ({ bool _v20930 = true; this->f_S_0_21_d = _v20930; _v20930; });
}
double C_S__26__21_j::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__26__21_j.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 19.0))) {
        return 400.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__26__21_j::m_S__40__22_() {
    RT_FN("S__26__21_j.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6201]), C_S__26_c::sm_S_8_21_Z(C_S__26__21_j::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__26__21_j::g_S__2d_6() {
    RT_FN("S__26__21_j.S__2d_6_get");
    return C_S_8G::sm_S_7d(g::SV.C_S_2_21_i__id);
    return false;
}
double C_S__26__21_j::sm_S_5_21_B() {
    RT_FN("S__26__21_j.S_5_21_B");
    return (((((double)(C_PlayFab::sg_season())) == 8.0) && C_S_8G::sm_S_7d(g::SV.C_S_2_21_i__id)) ? (0.25 * ((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(86.0)) / 60.0) / 60.0) * ((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(86.0)) / 60.0) / 60.0) + 1.0))))) : 0.0);
    return 0.0;
}
C_S__26__21_j* C_S__26__21_j::alloc_() {
    C_S__26__21_j* o = rt::make<C_S__26__21_j>();
    return o;
}
rt::Value C_S__26__21_j::mk_(rt::Value* a, int n) {
    C_S__26__21_j* o = alloc_();
    o->C_S__26__21_j::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_j::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__21_j::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__21_j::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__21_j::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__21_j::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    default: return false;
    }
}
bool C_S__26__21_j::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_j__id)); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__21_j::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_j__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__21_j::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    default: return false;
    }
}
void C_S__26__22_2::ctor_() {
    RT_FN("S__26__22_2.S__26__22_2");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20931 = 1013.0; this->f_S_6_21_Z = rt::touint_d(_v20931); _v20931; });
    ({ rt::Value _v20932 = rt::trv(rt::VS(g::LS[6202])); this->f_S_1i = rt::slot_string(_v20932); _v20932; });
    ({ rt::Value _v20933 = rt::VS(g::LS[6203]); this->f_S__5e__21__23_ = rt::slot_string(_v20933); _v20933; });
    ({ rt::Value _v20934 = rt::VS(g::LS[6105]); this->f_S__3f__21__3d_ = rt::slot_string(_v20934); _v20934; });
    ({ double _v20935 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20935); _v20935; });
}
rt::Value C_S__26__22_2::m_S__40__22_() {
    RT_FN("S__26__22_2.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6204]), C_S__26_c::sm_S_8_21_Z(C_S__26__22_2::sm_S__5e_y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__26__22_2::g_S__2d_6() {
    RT_FN("S__26__22_2.S__2d_6_get");
    return ({ bool _t20938 = rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 28.0), rt::V(5.0)); _t20938 ? (bool)(({ rt::Value _o20936 = C_S_8G::sm_S__21__21_H(g::SV.C_S__27__22_1__id); C_S__60_6* _p20937 = rt::as_ptr<C_S__60_6>(_o20936); _p20937 ? _p20937->g_S__2d_6() : rt::T(rt::dget(_o20936, NM_S__2d_6)); })) : _t20938; });
    return false;
}
bool C_S__26__22_2::g_S__26_8() {
    RT_FN("S__26__22_2.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
double C_S__26__22_2::sm_S__5e_y() {
    RT_FN("S__26__22_2.S__5e_y");
    return ((((double)(C_PlayFab::sg_season())) == 11.0) ? 18.0 : 0.0);
    return 0.0;
}
C_S__26__22_2* C_S__26__22_2::alloc_() {
    C_S__26__22_2* o = rt::make<C_S__26__22_2>();
    return o;
}
rt::Value C_S__26__22_2::mk_(rt::Value* a, int n) {
    C_S__26__22_2* o = alloc_();
    o->C_S__26__22_2::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__22_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__22_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__22_2::smeth_(int id) {
    switch (id) {
    case NM_S__5e_y: return true;
    default: return false;
    }
}
bool C_S__26__22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_2__id)); return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5e_y: out = rt::V(sm_S__5e_y()); return true;
    default: return false;
    }
}
void C_S__26__22_Q::ctor_() {
    RT_FN("S__26__22_Q.S__26__22_Q");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20939 = 1251.0; this->f_S_6_21_Z = rt::touint_d(_v20939); _v20939; });
    ({ rt::Value _v20940 = rt::trv(rt::VS(g::LS[6205])); this->f_S_1i = rt::slot_string(_v20940); _v20940; });
    ({ rt::Value _v20941 = rt::VS(g::LS[6206]); this->f_S__5e__21__23_ = rt::slot_string(_v20941); _v20941; });
    ({ double _v20942 = 1.0; this->f_S__3e__3d_ = _v20942; _v20942; });
    ({ double _v20943 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20943); _v20943; });
}
rt::Value C_S__26__22_Q::m_S__40__22_() {
    RT_FN("S__26__22_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[559]), C_S__26_c::sm_S_8_21_Z(C_S__26__22_Q::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__26__22_Q::g_S__2d_6() {
    RT_FN("S__26__22_Q.S__2d_6_get");
    return ({ bool _t20944 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20944 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__25__22_Q__id)) : _t20944; });
    return false;
}
bool C_S__26__22_Q::g_S__26_8() {
    RT_FN("S__26__22_Q.S__26_8_get");
    return ({ bool _t20945 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20945 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__25__22_Q__id)) : _t20945; });
    return false;
}
double C_S__26__22_Q::sm_S__23__21_Y() {
    RT_FN("S__26__22_Q.S__23__21_Y");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 15.0 : 0.0);
    return 0.0;
}
C_S__26__22_Q* C_S__26__22_Q::alloc_() {
    C_S__26__22_Q* o = rt::make<C_S__26__22_Q>();
    return o;
}
rt::Value C_S__26__22_Q::mk_(rt::Value* a, int n) {
    C_S__26__22_Q* o = alloc_();
    o->C_S__26__22_Q::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__22_Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__22_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__22_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__22_Q::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__26__22_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_Q__id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__22_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_Q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__27__21_8::ctor_() {
    RT_FN("S__27__21_8.S__27__21_8");
    (void)((this->C_S__25__21__3d_::ctor_(), rt::NUL));
    ({ rt::Value _v20946 = rt::trv(rt::VS(g::LS[6207])); this->f_S_1i = rt::slot_string(_v20946); _v20946; });
    ({ rt::Value _v20947 = rt::VS(g::LS[6208]); this->f_S__5e__21__23_ = rt::slot_string(_v20947); _v20947; });
}
rt::Value C_S__27__21_8::m_S__40__22_() {
    RT_FN("S__27__21_8.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5425]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__2d__21_Z::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5360]))));
    return rt::NUL;
}
double C_S__27__21_8::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__27__21_8.S__27_B");
    if ((((double)(l_param1)) == 2.0)) {
        return (((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(114.0)) + 1.0)) * 100.0);
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__27__21_8::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__27__21_8.S_6r");
    if ((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(114.0)) >= 500.0)) {
        return rt::NUL;
    }
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 114.0), rt::V(1.0))));
    ({ rt::Value _v20948 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(114.0), _v20948); });
    (void)(this->C_S__25__21__3d_::m_S_6r());
    return rt::NUL;
}
bool C_S__27__21_8::g_S_9_21__25_() {
    RT_FN("S__27__21_8.S_9_21__25__get");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(114.0)) < 500.0);
    return false;
}
C_S__27__21_8* C_S__27__21_8::alloc_() {
    C_S__27__21_8* o = rt::make<C_S__27__21_8>();
    return o;
}
rt::Value C_S__27__21_8::mk_(rt::Value* a, int n) {
    C_S__27__21_8* o = alloc_();
    o->C_S__27__21_8::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__25__21__3d_::dget(id, out);
}
bool C_S__27__21_8::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__25__21__3d_::dset(id, v);
}
bool C_S__27__21_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__25__21__3d_::dcall(id, a, n, out);
}
bool C_S__27__21_8::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__25__21__3d_::dmeth(id);
}
bool C_S__27__21_8::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27__21_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21_8__id)); return true;
    default: return false;
    }
}
bool C_S__27__21_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21_8__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__21_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__22_1::ctor_() {
    RT_FN("S__27__22_1.S__27__22_1");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20949 = 1016.0; this->f_S_6_21_Z = rt::touint_d(_v20949); _v20949; });
    ({ rt::Value _v20950 = rt::trv(rt::VS(g::LS[6209])); this->f_S_1i = rt::slot_string(_v20950); _v20950; });
    ({ rt::Value _v20951 = rt::VS(g::LS[6210]); this->f_S__5e__21__23_ = rt::slot_string(_v20951); _v20951; });
    ({ double _v20952 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20952); _v20952; });
    ({ bool _v20953 = false; this->f_S_3e = _v20953; _v20953; });
    ({ bool _v20954 = false; this->f_S__40_X = _v20954; _v20954; });
}
rt::Value C_S__27__22_1::m_S__40__22_() {
    RT_FN("S__27__22_1.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6211]), C_S__26_c::sm_S_8_21_Z(C_S__27__22_1::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6212]))));
    return rt::NUL;
}
double C_S__27__22_1::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__27__22_1.S__27_B");
    if ((((double)(l_param1)) == 24.0)) {
        return rt::m_floor(rt::m_pow(((13.0 * rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 28.0))) + 1.0), 1.15));
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__27__22_1::m_S_6r() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S__27__22_1.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    ({ bool _v20955 = false; this->f_S__3c__21_7 = _v20955; _v20955; });
    ({ rt::Value _o20956 = g::SV.C_S_8G__S_5_21_V; rt::Value _i20957 = rt::V(13.0); rt::Value _v20958 = rt::V((rt::tonum(rt::idx_get(_o20956, _i20957)) - 1.0)); rt::idx_set(_o20956, _i20957, _v20958); _v20958; });
    ({ rt::Value _o20959 = g::SV.C_S_8G__S_6_21__2d_; rt::Value _i20960 = rt::V(28.0); rt::Value _v20961 = rt::add(rt::idx_get(_o20959, _i20960), rt::V(1.0)); rt::idx_set(_o20959, _i20960, _v20961); _v20961; });
    (l_A__loc1_ = rt::touint(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 28.0)));
    if ((({ bool _t20962 = (((double)(l_A__loc1_)) == 5.0); _t20962 ? _t20962 : (bool)((((double)(l_A__loc1_)) == 10.0)); }) || (((double)(l_A__loc1_)) == 15.0))) {
        (void)(({ rt::Value _o20963 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p20964 = rt::as_ptr<C_S__20_g>(_o20963); _p20964 ? _p20964->m_S__2d__25_(rt::trv(rt::VS(g::LS[6213])), rt::trv(rt::VS(g::LS[6214])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o20963, NM_S__2d__25_, rt::trv(rt::VS(g::LS[6213])), rt::trv(rt::VS(g::LS[6214]))); }));
    }
    return rt::NUL;
}
bool C_S__27__22_1::g_S__2d_6() {
    RT_FN("S__27__22_1.S__2d_6_get");
    return ({ bool _t20967 = ({ bool _t20966 = ({ bool _t20965 = (((double)(C_PlayFab::sg_season())) == 11.0); _t20965 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_3_22_2__id)) : _t20965; }); _t20966 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__2b__22_1__id))) : _t20966; }); _t20967 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S_7_22_1__id))) : _t20967; });
    return false;
}
double C_S__27__22_1::sm_S_9L() {
    RT_FN("S__27__22_1.S_9L");
    return rt::tonum(((((double)(C_PlayFab::sg_season())) == 11.0) ? rt::add(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 28.0), rt::V((10.0 * rt::m_pow(1.1, rt::tonum(rt::add(rt::V(10.0), rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 28.0))))))) : rt::V(0.0)));
    return 0.0;
}
C_S__27__22_1* C_S__27__22_1::alloc_() {
    C_S__27__22_1* o = rt::make<C_S__27__22_1>();
    return o;
}
rt::Value C_S__27__22_1::mk_(rt::Value* a, int n) {
    C_S__27__22_1* o = alloc_();
    o->C_S__27__22_1::ctor_();
    return rt::VO(o);
}
bool C_S__27__22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__22_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__22_1::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__27__22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22_1__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22_1__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__27__22_E::ctor_() {
    RT_FN("S__27__22_E.S__27__22_E");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20968 = 1137.0; this->f_S_6_21_Z = rt::touint_d(_v20968); _v20968; });
    ({ rt::Value _v20969 = rt::trv(rt::VS(g::LS[6215])); this->f_S_1i = rt::slot_string(_v20969); _v20969; });
    ({ rt::Value _v20970 = rt::VS(g::LS[6216]); this->f_S__5e__21__23_ = rt::slot_string(_v20970); _v20970; });
    ({ double _v20971 = 1.0; this->f_S__3e__3d_ = _v20971; _v20971; });
    ({ double _v20972 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20972); _v20972; });
}
rt::Value C_S__27__22_E::m_S__40__22_() {
    RT_FN("S__27__22_E.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[367]), C_S__26_c::sm_S_8_21_Z(C_S__27__22_E::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__27__22_E::g_S__2d_6() {
    RT_FN("S__27__22_E.S__2d_6_get");
    return ({ bool _t20973 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20973 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2b__22_E__id)) : _t20973; });
    return false;
}
bool C_S__27__22_E::g_S__26_8() {
    RT_FN("S__27__22_E.S__26_8_get");
    return ({ bool _t20974 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20974 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2b__22_E__id)) : _t20974; });
    return false;
}
double C_S__27__22_E::sm_S__2b__2b_() {
    RT_FN("S__27__22_E.S__2b__2b_");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? g::SV.C_S__27__22_E__S_1_21_S : 0.0);
    return 0.0;
}
C_S__27__22_E* C_S__27__22_E::alloc_() {
    C_S__27__22_E* o = rt::make<C_S__27__22_E>();
    return o;
}
rt::Value C_S__27__22_E::mk_(rt::Value* a, int n) {
    C_S__27__22_E* o = alloc_();
    o->C_S__27__22_E::ctor_();
    return rt::VO(o);
}
bool C_S__27__22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__22_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__22_E::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__27__22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22_E__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__27__22_E__S_1_21_S); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22_E__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__27__22_E__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__27__22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__27__22_N::ctor_() {
    RT_FN("S__27__22_N.S__27__22_N");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20975 = 1222.0; this->f_S_6_21_Z = rt::touint_d(_v20975); _v20975; });
    ({ rt::Value _v20976 = rt::trv(rt::VS(g::LS[6217])); this->f_S_1i = rt::slot_string(_v20976); _v20976; });
    ({ rt::Value _v20977 = rt::VS(g::LS[6218]); this->f_S__5e__21__23_ = rt::slot_string(_v20977); _v20977; });
    ({ double _v20978 = 1.0; this->f_S__3e__3d_ = _v20978; _v20978; });
    ({ double _v20979 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v20979); _v20979; });
}
rt::Value C_S__27__22_N::m_S__40__22_() {
    RT_FN("S__27__22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6219]), C_S__26_c::sm_S_8_21_Z(C_S__27__22_N::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__27__22_N::g_S__2d_6() {
    RT_FN("S__27__22_N.S__2d_6_get");
    return ({ bool _t20980 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20980 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2b__22_N__id)) : _t20980; });
    return false;
}
bool C_S__27__22_N::g_S__26_8() {
    RT_FN("S__27__22_N.S__26_8_get");
    return ({ bool _t20981 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t20981 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2b__22_N__id)) : _t20981; });
    return false;
}
double C_S__27__22_N::sm_S__26_s() {
    RT_FN("S__27__22_N.S__26_s");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 50.0 : 0.0);
    return 0.0;
}
C_S__27__22_N* C_S__27__22_N::alloc_() {
    C_S__27__22_N* o = rt::make<C_S__27__22_N>();
    return o;
}
rt::Value C_S__27__22_N::mk_(rt::Value* a, int n) {
    C_S__27__22_N* o = alloc_();
    o->C_S__27__22_N::ctor_();
    return rt::VO(o);
}
bool C_S__27__22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__22_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__22_N::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__27__22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22_N__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22_N__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__2b__21_i::ctor_() {
    RT_FN("S__2b__21_i.S__2b__21_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20982 = 726.0; this->f_S_6_21_Z = rt::touint_d(_v20982); _v20982; });
    ({ rt::Value _v20983 = rt::trv(rt::VS(g::LS[6220])); this->f_S_1i = rt::slot_string(_v20983); _v20983; });
    ({ rt::Value _v20984 = rt::VS(g::LS[6221]); this->f_S__5e__21__23_ = rt::slot_string(_v20984); _v20984; });
    ({ rt::Value _v20985 = rt::VS(g::LS[5814]); this->f_S__3f__21__3d_ = rt::slot_string(_v20985); _v20985; });
    ({ double _v20986 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20986); _v20986; });
    ({ bool _v20987 = false; this->f_S_3e = _v20987; _v20987; });
    ({ bool _v20988 = true; this->f_S_0_21_d = _v20988; _v20988; });
}
double C_S__2b__21_i::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__2b__21_i.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 19.0))) {
        return 1000.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__2b__21_i::m_S__40__22_() {
    RT_FN("S__2b__21_i.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6222]), C_S__26_c::sm_S_6_21_T(C_S__2b__21_i::sm_S_4_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__2b__21_i::g_S__2d_6() {
    RT_FN("S__2b__21_i.S__2d_6_get");
    return C_S_8G::sm_S_7d(g::SV.C_S_2_21_i__id);
    return false;
}
double C_S__2b__21_i::sm_S_4_21__40_() {
    RT_FN("S__2b__21_i.S_4_21__40_");
    return (((((double)(C_PlayFab::sg_season())) == 8.0) && C_S_8G::sm_S_7d(g::SV.C_S_2_21_i__id)) ? rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.85) : 0.0);
    return 0.0;
}
C_S__2b__21_i* C_S__2b__21_i::alloc_() {
    C_S__2b__21_i* o = rt::make<C_S__2b__21_i>();
    return o;
}
rt::Value C_S__2b__21_i::mk_(rt::Value* a, int n) {
    C_S__2b__21_i* o = alloc_();
    o->C_S__2b__21_i::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b__21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b__21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b__21_i::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b__21_i::smeth_(int id) {
    switch (id) {
    case NM_S_4_21__40_: return true;
    default: return false;
    }
}
bool C_S__2b__21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_i__id)); return true;
    case NM_S_4_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_21__40_: out = rt::V(sm_S_4_21__40_()); return true;
    default: return false;
    }
}
void C_S__2b__21_k::ctor_() {
    RT_FN("S__2b__21_k.S__2b__21_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20989 = 738.0; this->f_S_6_21_Z = rt::touint_d(_v20989); _v20989; });
    ({ rt::Value _v20990 = rt::trv(rt::VS(g::LS[6223])); this->f_S_1i = rt::slot_string(_v20990); _v20990; });
    ({ rt::Value _v20991 = rt::VS(g::LS[6224]); this->f_S__5e__21__23_ = rt::slot_string(_v20991); _v20991; });
    ({ rt::Value _v20992 = rt::VS(g::LS[6225]); this->f_S__3f__21__3d_ = rt::slot_string(_v20992); _v20992; });
    ({ double _v20993 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v20993); _v20993; });
}
rt::Value C_S__2b__21_k::m_S__40__22_() {
    RT_FN("S__2b__21_k.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6226]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__2b__21_k__S_1_21_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2b__21_k::g_S__2d_6() {
    RT_FN("S__2b__21_k.S__2d_6_get");
    return ({ bool _t20996 = (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(88.0)) >= 100.0); _t20996 ? (bool)(({ rt::Value _o20994 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3b__21_k__id); C_S__60_6* _p20995 = rt::as_ptr<C_S__60_6>(_o20994); _p20995 ? _p20995->g_S__2d_6() : rt::T(rt::dget(_o20994, NM_S__2d_6)); })) : _t20996; });
    return false;
}
bool C_S__2b__21_k::g_S__26_8() {
    RT_FN("S__2b__21_k.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 9.0);
    return false;
}
C_S__2b__21_k* C_S__2b__21_k::alloc_() {
    C_S__2b__21_k* o = rt::make<C_S__2b__21_k>();
    return o;
}
rt::Value C_S__2b__21_k::mk_(rt::Value* a, int n) {
    C_S__2b__21_k* o = alloc_();
    o->C_S__2b__21_k::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b__21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b__21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b__21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b__21_k::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_k__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__2b__21_k__S_1_21_S); return true;
    default: return false;
    }
}
bool C_S__2b__21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_k__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__2b__21_k__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2b__21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__22_1::ctor_() {
    RT_FN("S__2b__22_1.S__2b__22_1");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v20997 = 1007.0; this->f_S_6_21_Z = rt::touint_d(_v20997); _v20997; });
    ({ rt::Value _v20998 = rt::trv(rt::VS(g::LS[6227])); this->f_S_1i = rt::slot_string(_v20998); _v20998; });
    ({ rt::Value _v20999 = rt::VS(g::LS[6228]); this->f_S__5e__21__23_ = rt::slot_string(_v20999); _v20999; });
    ({ double _v21000 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21000); _v21000; });
    ({ bool _v21001 = false; this->f_S_3e = _v21001; _v21001; });
    ({ bool _v21002 = false; this->f_S__40_X = _v21002; _v21002; });
}
rt::Value C_S__2b__22_1::m_S__40__22_() {
    RT_FN("S__2b__22_1.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6229])));
    return rt::NUL;
}
bool C_S__2b__22_1::g_S__2d_6() {
    RT_FN("S__2b__22_1.S__2d_6_get");
    return ({ bool _t21004 = ({ bool _t21003 = (((double)(C_PlayFab::sg_season())) == 11.0); _t21003 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S_3_22_2__id))) : _t21003; }); _t21004 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S_7_22_1__id))) : _t21004; });
    return false;
}
bool C_S__2b__22_1::g_S__26_8() {
    RT_FN("S__2b__22_1.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
C_S__2b__22_1* C_S__2b__22_1::alloc_() {
    C_S__2b__22_1* o = rt::make<C_S__2b__22_1>();
    return o;
}
rt::Value C_S__2b__22_1::mk_(rt::Value* a, int n) {
    C_S__2b__22_1* o = alloc_();
    o->C_S__2b__22_1::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b__22_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b__22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b__22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b__22_1::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22_1__id)); return true;
    default: return false;
    }
}
bool C_S__2b__22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22_1__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__5e_::ctor_() {
    RT_FN("S__2b__5e_.S__2b__5e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21005 = 418.0; this->f_S_6_21_Z = rt::touint_d(_v21005); _v21005; });
    ({ rt::Value _v21006 = rt::trv(rt::VS(g::LS[3964])); this->f_S_1i = rt::slot_string(_v21006); _v21006; });
    ({ rt::Value _v21007 = rt::VS(g::LS[6230]); this->f_S__5e__21__23_ = rt::slot_string(_v21007); _v21007; });
    ({ double _v21008 = 1.0; this->f_S__3e__3d_ = _v21008; _v21008; });
    ({ double _v21009 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21009); _v21009; });
}
rt::Value C_S__2b__5e_::m_S__40__22_() {
    RT_FN("S__2b__5e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6231]), C_S__26_c::sm_S_8_21_Z(25.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2b__5e_::g_S__2d_6() {
    RT_FN("S__2b__5e_.S__2d_6_get");
    return ({ bool _t21012 = ({ bool _t21011 = C_S_8G::sm_S__3c_P(g::SV.C_S_50__id); _t21011 ? (bool)((({ bool _t21010 = (((double)(C_PlayFab::sg_season())) == 1.0); _t21010 ? _t21010 : (bool)((((double)(C_PlayFab::sg_season())) == 10.0)); }))) : _t21011; }); _t21012 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 0.0), rt::V(this->f_S__3e__3d_))) : _t21012; });
    return false;
}
bool C_S__2b__5e_::g_S__26_8() {
    RT_FN("S__2b__5e_.S__26_8_get");
    return ({ bool _t21013 = (((double)(C_PlayFab::sg_season())) == 1.0); _t21013 ? _t21013 : (bool)((((double)(C_PlayFab::sg_season())) == 10.0)); });
    return false;
}
double C_S__2b__5e_::sm_S__27__21_b() {
    RT_FN("S__2b__5e_.S__27__21_b");
    return (((((double)(C_PlayFab::sg_season())) == 1.0) || (((double)(C_PlayFab::sg_season())) == 10.0)) ? 25.0 : 0.0);
    return 0.0;
}
C_S__2b__5e_* C_S__2b__5e_::alloc_() {
    C_S__2b__5e_* o = rt::make<C_S__2b__5e_>();
    return o;
}
rt::Value C_S__2b__5e_::mk_(rt::Value* a, int n) {
    C_S__2b__5e_* o = alloc_();
    o->C_S__2b__5e_::ctor_();
    return rt::VO(o);
}
bool C_S__2b__5e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b__5e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b__5e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b__5e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b__5e_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__2b__5e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__5e___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__2b__5e___S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__5e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__5e___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__2b__5e___S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2b__5e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__2c__22_1::ctor_() {
    RT_FN("S__2c__22_1.S__2c__22_1");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21014 = 1020.0; this->f_S_6_21_Z = rt::touint_d(_v21014); _v21014; });
    ({ rt::Value _v21015 = rt::trv(rt::VS(g::LS[6232])); this->f_S_1i = rt::slot_string(_v21015); _v21015; });
    ({ rt::Value _v21016 = rt::VS(g::LS[6233]); this->f_S__5e__21__23_ = rt::slot_string(_v21016); _v21016; });
    ({ rt::Value _v21017 = rt::VS(g::LS[6105]); this->f_S__3f__21__3d_ = rt::slot_string(_v21017); _v21017; });
    ({ double _v21018 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21018); _v21018; });
}
rt::Value C_S__2c__22_1::m_S__40__22_() {
    RT_FN("S__2c__22_1.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6234]), C_S__26_c::sm_S_8_21_Z(C_S__2c__22_1::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2c__22_1::g_S__2d_6() {
    RT_FN("S__2c__22_1.S__2d_6_get");
    return ({ bool _t21021 = rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 27.0), rt::V(15.0)); _t21021 ? (bool)(({ rt::Value _o21019 = C_S_8G::sm_S__21__21_H(g::SV.C_S_2_22_2__id); C_S__60_6* _p21020 = rt::as_ptr<C_S__60_6>(_o21019); _p21020 ? _p21020->g_S__2d_6() : rt::T(rt::dget(_o21019, NM_S__2d_6)); })) : _t21021; });
    return false;
}
bool C_S__2c__22_1::g_S__26_8() {
    RT_FN("S__2c__22_1.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
double C_S__2c__22_1::sm_S__3f__21__3c_() {
    RT_FN("S__2c__22_1.S__3f__21__3c_");
    return ((((double)(C_PlayFab::sg_season())) == 11.0) ? 25.0 : 0.0);
    return 0.0;
}
C_S__2c__22_1* C_S__2c__22_1::alloc_() {
    C_S__2c__22_1* o = rt::make<C_S__2c__22_1>();
    return o;
}
rt::Value C_S__2c__22_1::mk_(rt::Value* a, int n) {
    C_S__2c__22_1* o = alloc_();
    o->C_S__2c__22_1::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__22_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__22_1::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__2c__22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22_1__id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22_1__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__2d__21_Z::ctor_() {
    RT_FN("S__2d__21_Z.S__2d__21_Z");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ rt::Value _v21022 = rt::trv(rt::VS(g::LS[6235])); this->f_S_1i = rt::slot_string(_v21022); _v21022; });
    ({ rt::Value _v21023 = rt::VS(g::LS[6236]); this->f_S__5e__21__23_ = rt::slot_string(_v21023); _v21023; });
    ({ double _v21024 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21024); _v21024; });
    ({ bool _v21025 = false; this->f_S_3e = _v21025; _v21025; });
    ({ bool _v21026 = false; this->f_S__40_X = _v21026; _v21026; });
}
rt::Value C_S__2d__21_Z::m_S__40__22_() {
    RT_FN("S__2d__21_Z.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6237])));
    return rt::NUL;
}
rt::Value C_S__2d__21_Z::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__2d__21_Z.S_6r");
    ({ bool _v21027 = false; this->f_S__3c__21_7 = _v21027; _v21027; });
    (l_A__loc2_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)) - 1.0));
    ({ rt::Value _v21028 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(13.0), _v21028); });
    return rt::NUL;
}
bool C_S__2d__21_Z::g_S__2d_6() {
    RT_FN("S__2d__21_Z.S__2d_6_get");
    return (((double)(C_PlayFab::sg_season())) == 3.0);
    return false;
}
double C_S__2d__21_Z::sm_S__60_z() {
    RT_FN("S__2d__21_Z.S__60_z");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(116.0)) * 25.0);
    return 0.0;
}
double C_S__2d__21_Z::sm_S_2_21_W() {
    RT_FN("S__2d__21_Z.S_2_21_W");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(115.0)) * 0.5);
    return 0.0;
}
double C_S__2d__21_Z::sm_S_5_21_B() {
    RT_FN("S__2d__21_Z.S_5_21_B");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(114.0)) * 1.0);
    return 0.0;
}
double C_S__2d__21_Z::sm_S__40__21__3f_() {
    RT_FN("S__2d__21_Z.S__40__21__3f_");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(118.0)) * 1.5);
    return 0.0;
}
double C_S__2d__21_Z::sm_S__5e_y() {
    RT_FN("S__2d__21_Z.S__5e_y");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(117.0)) * 0.5);
    return 0.0;
}
C_S__2d__21_Z* C_S__2d__21_Z::alloc_() {
    C_S__2d__21_Z* o = rt::make<C_S__2d__21_Z>();
    return o;
}
rt::Value C_S__2d__21_Z::mk_(rt::Value* a, int n) {
    C_S__2d__21_Z* o = alloc_();
    o->C_S__2d__21_Z::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_Z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__21_Z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__21_Z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__21_Z::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__21_Z::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    case NM_S_2_21_W: return true;
    case NM_S_5_21_B: return true;
    case NM_S__40__21__3f_: return true;
    case NM_S__5e_y: return true;
    default: return false;
    }
}
bool C_S__2d__21_Z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_Z__id)); return true;
    case NM_S__60_5: out = rt::V(g::SV.C_S__2d__21_Z__S__60_5); return true;
    case NM_S_5_21__5d_: out = rt::V(g::SV.C_S__2d__21_Z__S_5_21__5d_); return true;
    case NM_S__26__21_U: out = rt::V(g::SV.C_S__2d__21_Z__S__26__21_U); return true;
    case NM_S__5d_l: out = rt::V(g::SV.C_S__2d__21_Z__S__5d_l); return true;
    case NM_S__60_t: out = rt::V(g::SV.C_S__2d__21_Z__S__60_t); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_2_21_W: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5e_y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_Z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_Z__id = rt::touint(v); return true;
    case NM_S__60_5: g::SV.C_S__2d__21_Z__S__60_5 = rt::tonum(v); return true;
    case NM_S_5_21__5d_: g::SV.C_S__2d__21_Z__S_5_21__5d_ = rt::tonum(v); return true;
    case NM_S__26__21_U: g::SV.C_S__2d__21_Z__S__26__21_U = rt::tonum(v); return true;
    case NM_S__5d_l: g::SV.C_S__2d__21_Z__S__5d_l = rt::tonum(v); return true;
    case NM_S__60_t: g::SV.C_S__2d__21_Z__S__60_t = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2d__21_Z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    case NM_S_2_21_W: out = rt::V(sm_S_2_21_W()); return true;
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    case NM_S__5e_y: out = rt::V(sm_S__5e_y()); return true;
    default: return false;
    }
}
void C_S__2d__21_k::ctor_() {
    RT_FN("S__2d__21_k.S__2d__21_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21029 = 744.0; this->f_S_6_21_Z = rt::touint_d(_v21029); _v21029; });
    ({ rt::Value _v21030 = rt::trv(rt::VS(g::LS[6238])); this->f_S_1i = rt::slot_string(_v21030); _v21030; });
    ({ rt::Value _v21031 = rt::VS(g::LS[6239]); this->f_S__5e__21__23_ = rt::slot_string(_v21031); _v21031; });
    ({ rt::Value _v21032 = rt::VS(g::LS[6240]); this->f_S__3f__21__3d_ = rt::slot_string(_v21032); _v21032; });
    ({ double _v21033 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21033); _v21033; });
}
rt::Value C_S__2d__21_k::m_S__40__22_() {
    RT_FN("S__2d__21_k.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6241]), C_S__26_c::sm_S_6_21_T(C_S__2d__21_k::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__2d__21_k::g_S__2d_6() {
    RT_FN("S__2d__21_k.S__2d_6_get");
    return ({ bool _t21036 = (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(89.0)) >= 100.0); _t21036 ? (bool)(({ rt::Value _o21034 = C_S_8G::sm_S__21__21_H(g::SV.C_S_7_21_k__id); C_S__60_6* _p21035 = rt::as_ptr<C_S__60_6>(_o21034); _p21035 ? _p21035->g_S__2d_6() : rt::T(rt::dget(_o21034, NM_S__2d_6)); })) : _t21036; });
    return false;
}
bool C_S__2d__21_k::g_S__26_8() {
    RT_FN("S__2d__21_k.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 9.0);
    return false;
}
double C_S__2d__21_k::sm_S__27__21_b() {
    RT_FN("S__2d__21_k.S__27__21_b");
    return ((((double)(C_PlayFab::sg_season())) == 9.0) ? (0.01 * rt::m_pow(((g::SV.C_S__23__21__21___S_2_21_P / 2.0) + C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4())), 0.7)) : 0.0);
    return 0.0;
}
C_S__2d__21_k* C_S__2d__21_k::alloc_() {
    C_S__2d__21_k* o = rt::make<C_S__2d__21_k>();
    return o;
}
rt::Value C_S__2d__21_k::mk_(rt::Value* a, int n) {
    C_S__2d__21_k* o = alloc_();
    o->C_S__2d__21_k::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__21_k::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__2d__21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_k__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__2d__22_E::ctor_() {
    RT_FN("S__2d__22_E.S__2d__22_E");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21037 = 1138.0; this->f_S_6_21_Z = rt::touint_d(_v21037); _v21037; });
    ({ rt::Value _v21038 = rt::trv(rt::VS(g::LS[6242])); this->f_S_1i = rt::slot_string(_v21038); _v21038; });
    ({ rt::Value _v21039 = rt::VS(g::LS[6243]); this->f_S__5e__21__23_ = rt::slot_string(_v21039); _v21039; });
    ({ double _v21040 = 1.0; this->f_S__3e__3d_ = _v21040; _v21040; });
    ({ double _v21041 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21041); _v21041; });
}
rt::Value C_S__2d__22_E::m_S__40__22_() {
    RT_FN("S__2d__22_E.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6178]), C_S__26_c::sm_S_8_21_Z(C_S__2d__22_E::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__2d__22_E::g_S__2d_6() {
    RT_FN("S__2d__22_E.S__2d_6_get");
    return ({ bool _t21042 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21042 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__22_E__id)) : _t21042; });
    return false;
}
bool C_S__2d__22_E::g_S__26_8() {
    RT_FN("S__2d__22_E.S__26_8_get");
    return ({ bool _t21043 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21043 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__22_E__id)) : _t21043; });
    return false;
}
double C_S__2d__22_E::sm_S_9L() {
    RT_FN("S__2d__22_E.S_9L");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? g::SV.C_S__2d__22_E__S_1_21_S : 0.0);
    return 0.0;
}
C_S__2d__22_E* C_S__2d__22_E::alloc_() {
    C_S__2d__22_E* o = rt::make<C_S__2d__22_E>();
    return o;
}
rt::Value C_S__2d__22_E::mk_(rt::Value* a, int n) {
    C_S__2d__22_E* o = alloc_();
    o->C_S__2d__22_E::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__22_E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__22_E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__22_E::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__22_E::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__2d__22_E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_E__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__2d__22_E__S_1_21_S); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__22_E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_E__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__2d__22_E__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__2d__22_L::ctor_() {
    RT_FN("S__2d__22_L.S__2d__22_L");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21044 = 1210.0; this->f_S_6_21_Z = rt::touint_d(_v21044); _v21044; });
    ({ rt::Value _v21045 = rt::trv(rt::VS(g::LS[6244])); this->f_S_1i = rt::slot_string(_v21045); _v21045; });
    ({ rt::Value _v21046 = rt::VS(g::LS[6245]); this->f_S__5e__21__23_ = rt::slot_string(_v21046); _v21046; });
    ({ double _v21047 = 1.0; this->f_S__3e__3d_ = _v21047; _v21047; });
    ({ double _v21048 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21048); _v21048; });
}
rt::Value C_S__2d__22_L::m_S__40__22_() {
    RT_FN("S__2d__22_L.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6246]), C_S__26_c::sm_S_8_21_Z(C_S__2d__22_L::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__2d__22_L::g_S__2d_6() {
    RT_FN("S__2d__22_L.S__2d_6_get");
    return ({ bool _t21049 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21049 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_0_22_L__id)) : _t21049; });
    return false;
}
bool C_S__2d__22_L::g_S__26_8() {
    RT_FN("S__2d__22_L.S__26_8_get");
    return ({ bool _t21050 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21050 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_0_22_L__id)) : _t21050; });
    return false;
}
double C_S__2d__22_L::sm_S__2c__21_G() {
    RT_FN("S__2d__22_L.S__2c__21_G");
    return 10.0;
    return 0.0;
}
C_S__2d__22_L* C_S__2d__22_L::alloc_() {
    C_S__2d__22_L* o = rt::make<C_S__2d__22_L>();
    return o;
}
rt::Value C_S__2d__22_L::mk_(rt::Value* a, int n) {
    C_S__2d__22_L* o = alloc_();
    o->C_S__2d__22_L::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__22_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__22_L::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__22_L::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__2d__22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_L__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__2d__22_N::ctor_() {
    RT_FN("S__2d__22_N.S__2d__22_N");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21051 = 1223.0; this->f_S_6_21_Z = rt::touint_d(_v21051); _v21051; });
    ({ rt::Value _v21052 = rt::trv(rt::VS(g::LS[6247])); this->f_S_1i = rt::slot_string(_v21052); _v21052; });
    ({ rt::Value _v21053 = rt::VS(g::LS[6248]); this->f_S__5e__21__23_ = rt::slot_string(_v21053); _v21053; });
    ({ double _v21054 = 1.0; this->f_S__3e__3d_ = _v21054; _v21054; });
    ({ double _v21055 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21055); _v21055; });
}
rt::Value C_S__2d__22_N::m_S__40__22_() {
    RT_FN("S__2d__22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[367]), C_S__26_c::sm_S_8_21_Z(C_S__2d__22_N::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__2d__22_N::g_S__2d_6() {
    RT_FN("S__2d__22_N.S__2d_6_get");
    return ({ bool _t21056 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21056 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__22_N__id)) : _t21056; });
    return false;
}
bool C_S__2d__22_N::g_S__26_8() {
    RT_FN("S__2d__22_N.S__26_8_get");
    return ({ bool _t21057 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21057 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__22_N__id)) : _t21057; });
    return false;
}
double C_S__2d__22_N::sm_S__2b__2b_() {
    RT_FN("S__2d__22_N.S__2b__2b_");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 100.0 : 0.0);
    return 0.0;
}
C_S__2d__22_N* C_S__2d__22_N::alloc_() {
    C_S__2d__22_N* o = rt::make<C_S__2d__22_N>();
    return o;
}
rt::Value C_S__2d__22_N::mk_(rt::Value* a, int n) {
    C_S__2d__22_N* o = alloc_();
    o->C_S__2d__22_N::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__22_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__22_N::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__2d__22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_N__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_N__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__2d__22_Q::ctor_() {
    RT_FN("S__2d__22_Q.S__2d__22_Q");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21058 = 1252.0; this->f_S_6_21_Z = rt::touint_d(_v21058); _v21058; });
    ({ rt::Value _v21059 = rt::trv(rt::VS(g::LS[6249])); this->f_S_1i = rt::slot_string(_v21059); _v21059; });
    ({ rt::Value _v21060 = rt::VS(g::LS[6250]); this->f_S__5e__21__23_ = rt::slot_string(_v21060); _v21060; });
    ({ double _v21061 = 1.0; this->f_S__3e__3d_ = _v21061; _v21061; });
    ({ double _v21062 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21062); _v21062; });
}
rt::Value C_S__2d__22_Q::m_S__40__22_() {
    RT_FN("S__2d__22_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6251]), C_S__26_c::sm_S_8_21_Z(C_S__2d__22_Q::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__2d__22_Q::g_S__2d_6() {
    RT_FN("S__2d__22_Q.S__2d_6_get");
    return ({ bool _t21063 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21063 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_0_22_Q__id)) : _t21063; });
    return false;
}
bool C_S__2d__22_Q::g_S__26_8() {
    RT_FN("S__2d__22_Q.S__26_8_get");
    return ({ bool _t21064 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21064 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_0_22_Q__id)) : _t21064; });
    return false;
}
double C_S__2d__22_Q::sm_S__26_s() {
    RT_FN("S__2d__22_Q.S__26_s");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 50.0 : 0.0);
    return 0.0;
}
C_S__2d__22_Q* C_S__2d__22_Q::alloc_() {
    C_S__2d__22_Q* o = rt::make<C_S__2d__22_Q>();
    return o;
}
rt::Value C_S__2d__22_Q::mk_(rt::Value* a, int n) {
    C_S__2d__22_Q* o = alloc_();
    o->C_S__2d__22_Q::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__22_Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__22_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__22_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__22_Q::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__2d__22_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_Q__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__22_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_Q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__2d_L::ctor_() {
    RT_FN("S__2d_L.S__2d_L");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ rt::Value _v21065 = rt::trv(rt::VS(g::LS[6252])); this->f_S_1i = rt::slot_string(_v21065); _v21065; });
    ({ rt::Value _v21066 = rt::VS(g::LS[6253]); this->f_S__5e__21__23_ = rt::slot_string(_v21066); _v21066; });
    ({ bool _v21067 = true; this->f_S__25__21__2c_ = _v21067; _v21067; });
    ({ bool _v21068 = false; this->f_S_3e = _v21068; _v21068; });
    ({ bool _v21069 = false; this->f_S__40_X = _v21069; _v21069; });
    ({ double _v21070 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21070); _v21070; });
}
rt::Value C_S__2d_L::m_S__40__22_() {
    RT_FN("S__2d_L.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6254]), C_S__26_c::sm_S_8_21_Z(this->m_S__27_B(rt::toint_d(4.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__2d_L::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__2d_L.S__27_B");
    if ((((double)(l_param1)) == 4.0)) {
        return 125.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__2d_L::m_S_6r() {
    int32_t l_A__loc1_ = 0;
    double l_A__loc2_ = NAN;
    RT_FN("S__2d_L.S_6r");
    (l_A__loc1_ = rt::toint_d(5.0));
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, ((double)(l_A__loc1_))), rt::V(1.0))));
    ({ rt::Value _v21071 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_6_21__2d_, rt::V((double)(l_A__loc1_)), _v21071); });
    ({ rt::Value _o21072 = g::SV.C_S_8G__S_5_21_V; rt::Value _i21073 = rt::V(124.0); rt::Value _v21074 = rt::add(rt::idx_get(_o21072, _i21073), rt::V(1.0)); rt::idx_set(_o21072, _i21073, _v21074); _v21074; });
    ({ bool _v21075 = false; this->f_S__3c__21_7 = _v21075; _v21075; });
    ({ rt::Value _o21076 = g::SV.C_S_8G__S_5_21_V; rt::Value _i21077 = rt::V(13.0); rt::Value _v21078 = rt::V((rt::tonum(rt::idx_get(_o21076, _i21077)) - 1.0)); rt::idx_set(_o21076, _i21077, _v21078); _v21078; });
    return rt::NUL;
}
bool C_S__2d_L::g_S__2d_6() {
    RT_FN("S__2d_L.S__2d_6_get");
    return (((double)(C_PlayFab::sg_season())) == 4.0);
    return false;
}
C_S__2d_L* C_S__2d_L::alloc_() {
    C_S__2d_L* o = rt::make<C_S__2d_L>();
    return o;
}
rt::Value C_S__2d_L::mk_(rt::Value* a, int n) {
    C_S__2d_L* o = alloc_();
    o->C_S__2d_L::ctor_();
    return rt::VO(o);
}
bool C_S__2d_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d_L::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d_L::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d_L__id)); return true;
    default: return false;
    }
}
bool C_S__2d_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_21_j::ctor_() {
    RT_FN("S_0_21_j.S_0_21_j");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21079 = 730.0; this->f_S_6_21_Z = rt::touint_d(_v21079); _v21079; });
    ({ rt::Value _v21080 = rt::trv(rt::VS(g::LS[6255])); this->f_S_1i = rt::slot_string(_v21080); _v21080; });
    ({ rt::Value _v21081 = rt::VS(g::LS[6256]); this->f_S__5e__21__23_ = rt::slot_string(_v21081); _v21081; });
    ({ rt::Value _v21082 = rt::VS(g::LS[5806]); this->f_S__3f__21__3d_ = rt::slot_string(_v21082); _v21082; });
    ({ double _v21083 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21083); _v21083; });
    ({ bool _v21084 = false; this->f_S_3e = _v21084; _v21084; });
    ({ bool _v21085 = true; this->f_S_0_21_d = _v21085; _v21085; });
}
double C_S_0_21_j::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_0_21_j.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 18.0))) {
        return 750.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_0_21_j::m_S__40__22_() {
    RT_FN("S_0_21_j.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6257]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_0_21_j__S_1_21_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_0_21_j__S__3b_n, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_0_21_j::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_0_21_j::g_S__2d_6() {
    RT_FN("S_0_21_j.S__2d_6_get");
    return C_S_8G::sm_S_7d(g::SV.C_S__5d__21_j__id);
    return false;
}
double C_S_0_21_j::sm_S__60_z() {
    RT_FN("S_0_21_j.S__60_z");
    return (((((double)(C_PlayFab::sg_season())) == 8.0) && C_S_8G::sm_S_7d(g::SV.C_S__5d__21_j__id)) ? (g::SV.C_S_0_21_j__S_1_21_S * rt::m_floor((C_S__26_c::sm_S_0_23_(C_S__26_c::dsm_S_0_23__0(), C_S__26_c::dsm_S_0_23__1()) / g::SV.C_S_0_21_j__S__3b_n))) : 0.0);
    return 0.0;
}
C_S_0_21_j* C_S_0_21_j::alloc_() {
    C_S_0_21_j* o = rt::make<C_S_0_21_j>();
    return o;
}
rt::Value C_S_0_21_j::mk_(rt::Value* a, int n) {
    C_S_0_21_j* o = alloc_();
    o->C_S_0_21_j::ctor_();
    return rt::VO(o);
}
bool C_S_0_21_j::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0_21_j::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0_21_j::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0_21_j::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0_21_j::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    default: return false;
    }
}
bool C_S_0_21_j::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21_j__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_0_21_j__S_1_21_S); return true;
    case NM_S__3b_n: out = rt::V(g::SV.C_S_0_21_j__S__3b_n); return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_21_j::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21_j__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_0_21_j__S_1_21_S = rt::tonum(v); return true;
    case NM_S__3b_n: g::SV.C_S_0_21_j__S__3b_n = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_0_21_j::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    default: return false;
    }
}
void C_S_1_21_T::ctor_() {
    RT_FN("S_1_21_T.S_1_21_T");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21086 = 562.0; this->f_S_6_21_Z = rt::touint_d(_v21086); _v21086; });
    ({ rt::Value _v21087 = rt::trv(rt::VS(g::LS[6258])); this->f_S_1i = rt::slot_string(_v21087); _v21087; });
    ({ rt::Value _v21088 = rt::VS(g::LS[6259]); this->f_S__5e__21__23_ = rt::slot_string(_v21088); _v21088; });
    ({ bool _v21089 = true; this->f_S__25__21__3e_ = _v21089; _v21089; });
    ({ bool _v21090 = true; this->f_S__3f_T = _v21090; _v21090; });
    ({ double _v21091 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21091); _v21091; });
}
rt::Value C_S_1_21_T::m_S__40__22_() {
    RT_FN("S_1_21_T.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6260]), C_S__26_c::sm_S_8_21_Z(C_S_1_21_T::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S_1_21_T::g_S__2d_6() {
    RT_FN("S_1_21_T.S__2d_6_get");
    return ({ bool _t21092 = (((double)(C_PlayFab::sg_season())) == 4.0); _t21092 ? (bool)(this->f_S__3f__21_6) : _t21092; });
    return false;
}
bool C_S_1_21_T::g_S__26_8() {
    RT_FN("S_1_21_T.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 4.0);
    return false;
}
double C_S_1_21_T::sm_S__2c_J() {
    RT_FN("S_1_21_T.S__2c_J");
    return ((((double)(C_PlayFab::sg_season())) == 4.0) ? 25.0 : 0.0);
    return 0.0;
}
C_S_1_21_T* C_S_1_21_T::alloc_() {
    C_S_1_21_T* o = rt::make<C_S_1_21_T>();
    return o;
}
rt::Value C_S_1_21_T::mk_(rt::Value* a, int n) {
    C_S_1_21_T* o = alloc_();
    o->C_S_1_21_T::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_T::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_1_21_T::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_1_21_T::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_1_21_T::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_1_21_T::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    default: return false;
    }
}
bool C_S_1_21_T::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_T__id)); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_21_T::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_T__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_21_T::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    default: return false;
    }
}
void C_S_1_21_k::ctor_() {
    RT_FN("S_1_21_k.S_1_21_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21093 = 736.0; this->f_S_6_21_Z = rt::touint_d(_v21093); _v21093; });
    ({ rt::Value _v21094 = rt::trv(rt::VS(g::LS[6261])); this->f_S_1i = rt::slot_string(_v21094); _v21094; });
    ({ rt::Value _v21095 = rt::VS(g::LS[6262]); this->f_S__5e__21__23_ = rt::slot_string(_v21095); _v21095; });
    ({ rt::Value _v21096 = rt::VS(g::LS[6225]); this->f_S__3f__21__3d_ = rt::slot_string(_v21096); _v21096; });
    ({ double _v21097 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21097); _v21097; });
}
rt::Value C_S_1_21_k::m_S__40__22_() {
    RT_FN("S_1_21_k.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6263]), C_S__26_c::sm_S_8_21_Z(((double)(C_S_1_21_k::sm_S_6_22_4())), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_1_21_k::g_S__2d_6() {
    RT_FN("S_1_21_k.S__2d_6_get");
    return ({ bool _t21100 = (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(88.0)) >= 25.0); _t21100 ? (bool)(({ rt::Value _o21098 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3b__21_k__id); C_S__60_6* _p21099 = rt::as_ptr<C_S__60_6>(_o21098); _p21099 ? _p21099->g_S__2d_6() : rt::T(rt::dget(_o21098, NM_S__2d_6)); })) : _t21100; });
    return false;
}
bool C_S_1_21_k::g_S__26_8() {
    RT_FN("S_1_21_k.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 9.0);
    return false;
}
uint32_t C_S_1_21_k::sm_S_6_22_4() {
    RT_FN("S_1_21_k.S_6_22_4");
    return C_S__26_c::sm_S__3b__22__24_(rt::m_ceil((0.6 * rt::m_pow(rt::m_log((1.0 + ((double)(C_S__26_c::sm_S__3f__26_(C_S__26_c::dsm_S__3f__26__0()))))), 4.0))));
    return 0u;
}
C_S_1_21_k* C_S_1_21_k::alloc_() {
    C_S_1_21_k* o = rt::make<C_S_1_21_k>();
    return o;
}
rt::Value C_S_1_21_k::mk_(rt::Value* a, int n) {
    C_S_1_21_k* o = alloc_();
    o->C_S_1_21_k::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_1_21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_1_21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_1_21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_1_21_k::smeth_(int id) {
    switch (id) {
    case NM_S_6_22_4: return true;
    default: return false;
    }
}
bool C_S_1_21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_k__id)); return true;
    case NM_S_6_22_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_22_4: out = rt::V((double)(sm_S_6_22_4())); return true;
    default: return false;
    }
}
void C_S_1_22_K::ctor_() {
    RT_FN("S_1_22_K.S_1_22_K");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21101 = 1208.0; this->f_S_6_21_Z = rt::touint_d(_v21101); _v21101; });
    ({ rt::Value _v21102 = rt::trv(rt::VS(g::LS[6264])); this->f_S_1i = rt::slot_string(_v21102); _v21102; });
    ({ rt::Value _v21103 = rt::VS(g::LS[6265]); this->f_S__5e__21__23_ = rt::slot_string(_v21103); _v21103; });
    ({ double _v21104 = 1.0; this->f_S__3e__3d_ = _v21104; _v21104; });
    ({ double _v21105 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21105); _v21105; });
}
rt::Value C_S_1_22_K::m_S__40__22_() {
    RT_FN("S_1_22_K.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6234]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_1_22_K__S_1_21_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_1_22_K::g_S__2d_6() {
    RT_FN("S_1_22_K.S__2d_6_get");
    return ({ bool _t21106 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21106 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2_22_K__id)) : _t21106; });
    return false;
}
bool C_S_1_22_K::g_S__26_8() {
    RT_FN("S_1_22_K.S__26_8_get");
    return ({ bool _t21107 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21107 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2_22_K__id)) : _t21107; });
    return false;
}
double C_S_1_22_K::sm_S__3f__21__3c_() {
    RT_FN("S_1_22_K.S__3f__21__3c_");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? g::SV.C_S_1_22_K__S_1_21_S : 0.0);
    return 0.0;
}
C_S_1_22_K* C_S_1_22_K::alloc_() {
    C_S_1_22_K* o = rt::make<C_S_1_22_K>();
    return o;
}
rt::Value C_S_1_22_K::mk_(rt::Value* a, int n) {
    C_S_1_22_K* o = alloc_();
    o->C_S_1_22_K::ctor_();
    return rt::VO(o);
}
bool C_S_1_22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_1_22_K::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_1_22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_1_22_K::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_1_22_K::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S_1_22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22_K__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_1_22_K__S_1_21_S); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22_K__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_1_22_K__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_1_22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S_2_21_i::ctor_() {
    RT_FN("S_2_21_i.S_2_21_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21108 = 723.0; this->f_S_6_21_Z = rt::touint_d(_v21108); _v21108; });
    ({ rt::Value _v21109 = rt::trv(rt::VS(g::LS[6266])); this->f_S_1i = rt::slot_string(_v21109); _v21109; });
    ({ rt::Value _v21110 = rt::VS(g::LS[6267]); this->f_S__5e__21__23_ = rt::slot_string(_v21110); _v21110; });
    ({ rt::Value _v21111 = rt::VS(g::LS[6268]); this->f_S__3f__21__3d_ = rt::slot_string(_v21111); _v21111; });
    ({ rt::Value _v21112 = rt::trv(rt::VS(g::LS[6269])); this->f_S_7_23_ = rt::slot_string(_v21112); _v21112; });
    ({ double _v21113 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21113); _v21113; });
    ({ bool _v21114 = false; this->f_S_3e = _v21114; _v21114; });
    ({ bool _v21115 = true; this->f_S_0_21_d = _v21115; _v21115; });
}
double C_S_2_21_i::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_2_21_i.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 19.0))) {
        return 200.0;
    }
    return 0.0;
    return 0.0;
}
bool C_S_2_21_i::g_S__2d_6() {
    RT_FN("S_2_21_i.S__2d_6_get");
    return ({ bool _t21118 = ({ bool _t21117 = (((double)(C_PlayFab::sg_season())) == 8.0); _t21117 ? (bool)((({ bool _t21116 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0); _t21116 ? _t21116 : (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)); }))) : _t21117; }); _t21118 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__5d__21_j__id))) : _t21118; });
    return false;
}
C_S_2_21_i* C_S_2_21_i::alloc_() {
    C_S_2_21_i* o = rt::make<C_S_2_21_i>();
    return o;
}
rt::Value C_S_2_21_i::mk_(rt::Value* a, int n) {
    C_S_2_21_i* o = alloc_();
    o->C_S_2_21_i::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2_21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2_21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2_21_i::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2_21_i::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_i__id)); return true;
    default: return false;
    }
}
bool C_S_2_21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_22__26_::ctor_() {
    RT_FN("S_2_22__26_.S_2_22__26_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21119 = 977.0; this->f_S_6_21_Z = rt::touint_d(_v21119); _v21119; });
    ({ rt::Value _v21120 = rt::trv(rt::VS(g::LS[6270])); this->f_S_1i = rt::slot_string(_v21120); _v21120; });
    ({ rt::Value _v21121 = rt::VS(g::LS[6271]); this->f_S__5e__21__23_ = rt::slot_string(_v21121); _v21121; });
    ({ double _v21122 = 1.0; this->f_S__3e__3d_ = _v21122; _v21122; });
    ({ double _v21123 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21123); _v21123; });
}
rt::Value C_S_2_22__26_::m_S__40__22_() {
    RT_FN("S_2_22__26_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::trv(rt::VS(g::LS[6272]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_2_22__26___S_1_21_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_2_22__26_::sm_S_4_21__40_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6273]))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_2_22__26_::g_S__2d_6() {
    RT_FN("S_2_22__26_.S__2d_6_get");
    return ({ bool _t21124 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21124 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3c__22__26___id)) : _t21124; });
    return false;
}
bool C_S_2_22__26_::g_S__26_8() {
    RT_FN("S_2_22__26_.S__26_8_get");
    return ({ bool _t21125 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21125 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3c__22__26___id)) : _t21125; });
    return false;
}
double C_S_2_22__26_::sm_S_4_21__40_() {
    RT_FN("S_2_22__26_.S_4_21__40_");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? g::SV.C_S_2_22__26___S_1_21_S : 0.0);
    return 0.0;
}
uint32_t C_S_2_22__26_::sm_S_6_22_4() {
    RT_FN("S_2_22__26_.S_6_22_4");
    return C_S__26_c::sm_S__3b__22__24_(1.0);
    return 0u;
}
C_S_2_22__26_* C_S_2_22__26_::alloc_() {
    C_S_2_22__26_* o = rt::make<C_S_2_22__26_>();
    return o;
}
rt::Value C_S_2_22__26_::mk_(rt::Value* a, int n) {
    C_S_2_22__26_* o = alloc_();
    o->C_S_2_22__26_::ctor_();
    return rt::VO(o);
}
bool C_S_2_22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2_22__26_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2_22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2_22__26_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2_22__26_::smeth_(int id) {
    switch (id) {
    case NM_S_4_21__40_: return true;
    case NM_S_6_22_4: return true;
    default: return false;
    }
}
bool C_S_2_22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22__26___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_2_22__26___S_1_21_S); return true;
    case NM_S_4_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_22_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22__26___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_2_22__26___S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_2_22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_21__40_: out = rt::V(sm_S_4_21__40_()); return true;
    case NM_S_6_22_4: out = rt::V((double)(sm_S_6_22_4())); return true;
    default: return false;
    }
}
void C_S_2_22_2::ctor_() {
    RT_FN("S_2_22_2.S_2_22_2");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21126 = 1021.0; this->f_S_6_21_Z = rt::touint_d(_v21126); _v21126; });
    ({ rt::Value _v21127 = rt::trv(rt::VS(g::LS[6274])); this->f_S_1i = rt::slot_string(_v21127); _v21127; });
    ({ rt::Value _v21128 = rt::VS(g::LS[6275]); this->f_S__5e__21__23_ = rt::slot_string(_v21128); _v21128; });
    ({ double _v21129 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21129); _v21129; });
    ({ bool _v21130 = false; this->f_S_3e = _v21130; _v21130; });
    ({ bool _v21131 = false; this->f_S__40_X = _v21131; _v21131; });
}
rt::Value C_S_2_22_2::m_S__40__22_() {
    RT_FN("S_2_22_2.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6276]), C_S__26_c::sm_S_8_21_Z(C_S_2_22_2::sm_S__27__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6212]))));
    return rt::NUL;
}
double C_S_2_22_2::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_2_22_2.S__27_B");
    if ((((double)(l_param1)) == 23.0)) {
        return rt::m_floor(rt::m_pow(((13.0 * rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 27.0))) + 1.0), 1.15));
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_2_22_2::m_S_6r() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S_2_22_2.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    ({ bool _v21132 = false; this->f_S__3c__21_7 = _v21132; _v21132; });
    ({ rt::Value _o21133 = g::SV.C_S_8G__S_5_21_V; rt::Value _i21134 = rt::V(13.0); rt::Value _v21135 = rt::V((rt::tonum(rt::idx_get(_o21133, _i21134)) - 1.0)); rt::idx_set(_o21133, _i21134, _v21135); _v21135; });
    ({ rt::Value _o21136 = g::SV.C_S_8G__S_6_21__2d_; rt::Value _i21137 = rt::V(27.0); rt::Value _v21138 = rt::add(rt::idx_get(_o21136, _i21137), rt::V(1.0)); rt::idx_set(_o21136, _i21137, _v21138); _v21138; });
    (l_A__loc1_ = rt::touint(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 27.0)));
    if ((({ bool _t21139 = (((double)(l_A__loc1_)) == 5.0); _t21139 ? _t21139 : (bool)((((double)(l_A__loc1_)) == 10.0)); }) || (((double)(l_A__loc1_)) == 15.0))) {
        (void)(({ rt::Value _o21140 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p21141 = rt::as_ptr<C_S__20_g>(_o21140); _p21141 ? _p21141->m_S__2d__25_(rt::trv(rt::VS(g::LS[6213])), rt::trv(rt::VS(g::LS[6214])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o21140, NM_S__2d__25_, rt::trv(rt::VS(g::LS[6213])), rt::trv(rt::VS(g::LS[6214]))); }));
    }
    return rt::NUL;
}
bool C_S_2_22_2::g_S__2d_6() {
    RT_FN("S_2_22_2.S__2d_6_get");
    return ({ bool _t21144 = ({ bool _t21143 = ({ bool _t21142 = (((double)(C_PlayFab::sg_season())) == 11.0); _t21142 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_7_22_1__id)) : _t21142; }); _t21143 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__2b__22_1__id))) : _t21143; }); _t21144 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S_3_22_2__id))) : _t21144; });
    return false;
}
double C_S_2_22_2::sm_S__27__21_b() {
    RT_FN("S_2_22_2.S__27__21_b");
    return rt::tonum(((((double)(C_PlayFab::sg_season())) == 11.0) ? rt::add(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 27.0), rt::V((10.0 * rt::m_pow(1.1, rt::tonum(rt::add(rt::V(10.0), rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 27.0))))))) : rt::V(0.0)));
    return 0.0;
}
C_S_2_22_2* C_S_2_22_2::alloc_() {
    C_S_2_22_2* o = rt::make<C_S_2_22_2>();
    return o;
}
rt::Value C_S_2_22_2::mk_(rt::Value* a, int n) {
    C_S_2_22_2* o = alloc_();
    o->C_S_2_22_2::ctor_();
    return rt::VO(o);
}
bool C_S_2_22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2_22_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2_22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2_22_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2_22_2::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_2_22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22_2__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_2_22_O::ctor_() {
    RT_FN("S_2_22_O.S_2_22_O");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21145 = 1246.0; this->f_S_6_21_Z = rt::touint_d(_v21145); _v21145; });
    ({ rt::Value _v21146 = rt::trv(rt::VS(g::LS[6277])); this->f_S_1i = rt::slot_string(_v21146); _v21146; });
    ({ rt::Value _v21147 = rt::VS(g::LS[6278]); this->f_S__5e__21__23_ = rt::slot_string(_v21147); _v21147; });
    ({ double _v21148 = 1.0; this->f_S__3e__3d_ = _v21148; _v21148; });
    ({ double _v21149 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21149); _v21149; });
}
rt::Value C_S_2_22_O::m_S__40__22_() {
    RT_FN("S_2_22_O.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6279]), C_S__26_c::sm_S_8_21_Z(C_S_2_22_O::sm_S__26__22_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_2_22_O::g_S__2d_6() {
    RT_FN("S_2_22_O.S__2d_6_get");
    return ({ bool _t21150 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21150 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_4_22_O__id)) : _t21150; });
    return false;
}
bool C_S_2_22_O::g_S__26_8() {
    RT_FN("S_2_22_O.S__26_8_get");
    return ({ bool _t21151 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21151 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_4_22_O__id)) : _t21151; });
    return false;
}
double C_S_2_22_O::sm_S__26__22_B() {
    RT_FN("S_2_22_O.S__26__22_B");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 25.0 : 0.0);
    return 0.0;
}
C_S_2_22_O* C_S_2_22_O::alloc_() {
    C_S_2_22_O* o = rt::make<C_S_2_22_O>();
    return o;
}
rt::Value C_S_2_22_O::mk_(rt::Value* a, int n) {
    C_S_2_22_O* o = alloc_();
    o->C_S_2_22_O::ctor_();
    return rt::VO(o);
}
bool C_S_2_22_O::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2_22_O::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2_22_O::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2_22_O::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2_22_O::smeth_(int id) {
    switch (id) {
    case NM_S__26__22_B: return true;
    default: return false;
    }
}
bool C_S_2_22_O::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22_O__id)); return true;
    case NM_S__26__22_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_22_O::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22_O__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_22_O::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26__22_B: out = rt::V(sm_S__26__22_B()); return true;
    default: return false;
    }
}
void C_S_2_22_Q::ctor_() {
    RT_FN("S_2_22_Q.S_2_22_Q");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21152 = 1253.0; this->f_S_6_21_Z = rt::touint_d(_v21152); _v21152; });
    ({ rt::Value _v21153 = rt::trv(rt::VS(g::LS[6280])); this->f_S_1i = rt::slot_string(_v21153); _v21153; });
    ({ rt::Value _v21154 = rt::VS(g::LS[6281]); this->f_S__5e__21__23_ = rt::slot_string(_v21154); _v21154; });
    ({ double _v21155 = 1.0; this->f_S__3e__3d_ = _v21155; _v21155; });
    ({ double _v21156 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21156); _v21156; });
}
rt::Value C_S_2_22_Q::m_S__40__22_() {
    RT_FN("S_2_22_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6282]), C_S__26_c::sm_S_8_21_Z(C_S_2_22_Q::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_2_22_Q::g_S__2d_6() {
    RT_FN("S_2_22_Q.S__2d_6_get");
    return ({ bool _t21159 = ({ bool _t21157 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21157 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_1_22_Q__id)) : _t21157; }); _t21159 ? (bool)((({ bool _t21158 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0); _t21158 ? _t21158 : (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)); }))) : _t21159; });
    return false;
}
bool C_S_2_22_Q::g_S__26_8() {
    RT_FN("S_2_22_Q.S__26_8_get");
    return ({ bool _t21162 = ({ bool _t21160 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21160 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_1_22_Q__id)) : _t21160; }); _t21162 ? (bool)((({ bool _t21161 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0); _t21161 ? _t21161 : (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)); }))) : _t21162; });
    return false;
}
double C_S_2_22_Q::sm_S_9L() {
    RT_FN("S_2_22_Q.S_9L");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 25.0 : 0.0);
    return 0.0;
}
C_S_2_22_Q* C_S_2_22_Q::alloc_() {
    C_S_2_22_Q* o = rt::make<C_S_2_22_Q>();
    return o;
}
rt::Value C_S_2_22_Q::mk_(rt::Value* a, int n) {
    C_S_2_22_Q* o = alloc_();
    o->C_S_2_22_Q::ctor_();
    return rt::VO(o);
}
bool C_S_2_22_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_2_22_Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_2_22_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_2_22_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_2_22_Q::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S_2_22_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22_Q__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_22_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22_Q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_22_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S_3_21_i::ctor_() {
    RT_FN("S_3_21_i.S_3_21_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21163 = 731.0; this->f_S_6_21_Z = rt::touint_d(_v21163); _v21163; });
    ({ rt::Value _v21164 = rt::trv(rt::VS(g::LS[6283])); this->f_S_1i = rt::slot_string(_v21164); _v21164; });
    ({ rt::Value _v21165 = rt::VS(g::LS[6284]); this->f_S__5e__21__23_ = rt::slot_string(_v21165); _v21165; });
    ({ rt::Value _v21166 = rt::VS(g::LS[5806]); this->f_S__3f__21__3d_ = rt::slot_string(_v21166); _v21166; });
    ({ double _v21167 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21167); _v21167; });
    ({ bool _v21168 = false; this->f_S_3e = _v21168; _v21168; });
    ({ bool _v21169 = true; this->f_S_0_21_d = _v21169; _v21169; });
}
double C_S_3_21_i::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_3_21_i.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 18.0))) {
        return 1000.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_3_21_i::m_S__40__22_() {
    RT_FN("S_3_21_i.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6285]), C_S__26_c::sm_S_6_21_T(C_S_3_21_i::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S_3_21_i::g_S__2d_6() {
    RT_FN("S_3_21_i.S__2d_6_get");
    return C_S_8G::sm_S_7d(g::SV.C_S__5d__21_j__id);
    return false;
}
double C_S_3_21_i::sm_S__27__21_b() {
    RT_FN("S_3_21_i.S__27__21_b");
    return (((((double)(C_PlayFab::sg_season())) == 8.0) && C_S_8G::sm_S_7d(g::SV.C_S__5d__21_j__id)) ? (0.2 * rt::m_pow((C_S__26_c::sm_S_57(C_S__26_c::dsm_S_57_0()) * 30.0), 0.85)) : 0.0);
    return 0.0;
}
C_S_3_21_i* C_S_3_21_i::alloc_() {
    C_S_3_21_i* o = rt::make<C_S_3_21_i>();
    return o;
}
rt::Value C_S_3_21_i::mk_(rt::Value* a, int n) {
    C_S_3_21_i* o = alloc_();
    o->C_S_3_21_i::ctor_();
    return rt::VO(o);
}
bool C_S_3_21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_3_21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_3_21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_3_21_i::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_3_21_i::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_3_21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_21_i__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_3_21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_3_22_1::ctor_() {
    RT_FN("S_3_22_1.S_3_22_1");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21170 = 1010.0; this->f_S_6_21_Z = rt::touint_d(_v21170); _v21170; });
    ({ rt::Value _v21171 = rt::trv(rt::VS(g::LS[6286])); this->f_S_1i = rt::slot_string(_v21171); _v21171; });
    ({ rt::Value _v21172 = rt::VS(g::LS[6287]); this->f_S__5e__21__23_ = rt::slot_string(_v21172); _v21172; });
    ({ rt::Value _v21173 = rt::VS(g::LS[6105]); this->f_S__3f__21__3d_ = rt::slot_string(_v21173); _v21173; });
    ({ double _v21174 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21174); _v21174; });
}
rt::Value C_S_3_22_1::m_S__40__22_() {
    RT_FN("S_3_22_1.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6288]), C_S__26_c::sm_S_8_21_Z(C_S_3_22_1::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_3_22_1::g_S__2d_6() {
    RT_FN("S_3_22_1.S__2d_6_get");
    return ({ bool _t21177 = rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 29.0), rt::V(15.0)); _t21177 ? (bool)(({ rt::Value _o21175 = C_S_8G::sm_S__21__21_H(g::SV.C_S__5b__22_1__id); C_S__60_6* _p21176 = rt::as_ptr<C_S__60_6>(_o21175); _p21176 ? _p21176->g_S__2d_6() : rt::T(rt::dget(_o21175, NM_S__2d_6)); })) : _t21177; });
    return false;
}
bool C_S_3_22_1::g_S__26_8() {
    RT_FN("S_3_22_1.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
double C_S_3_22_1::sm_S__40__21__3f_() {
    RT_FN("S_3_22_1.S__40__21__3f_");
    return ((((double)(C_PlayFab::sg_season())) == 11.0) ? 20.0 : 0.0);
    return 0.0;
}
C_S_3_22_1* C_S_3_22_1::alloc_() {
    C_S_3_22_1* o = rt::make<C_S_3_22_1>();
    return o;
}
rt::Value C_S_3_22_1::mk_(rt::Value* a, int n) {
    C_S_3_22_1* o = alloc_();
    o->C_S_3_22_1::ctor_();
    return rt::VO(o);
}
bool C_S_3_22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_3_22_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_3_22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_3_22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_3_22_1::smeth_(int id) {
    switch (id) {
    case NM_S__40__21__3f_: return true;
    default: return false;
    }
}
bool C_S_3_22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_22_1__id)); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_3_22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_22_1__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    default: return false;
    }
}
void C_S_3_22_2::ctor_() {
    RT_FN("S_3_22_2.S_3_22_2");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21178 = 1012.0; this->f_S_6_21_Z = rt::touint_d(_v21178); _v21178; });
    ({ rt::Value _v21179 = rt::trv(rt::VS(g::LS[6209])); this->f_S_1i = rt::slot_string(_v21179); _v21179; });
    ({ rt::Value _v21180 = rt::VS(g::LS[6210]); this->f_S__5e__21__23_ = rt::slot_string(_v21180); _v21180; });
    ({ double _v21181 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21181); _v21181; });
    ({ bool _v21182 = false; this->f_S_3e = _v21182; _v21182; });
    ({ bool _v21183 = false; this->f_S__40_X = _v21183; _v21183; });
}
rt::Value C_S_3_22_2::m_S__40__22_() {
    RT_FN("S_3_22_2.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6289])));
    return rt::NUL;
}
bool C_S_3_22_2::g_S__2d_6() {
    RT_FN("S_3_22_2.S__2d_6_get");
    return ({ bool _t21185 = ({ bool _t21184 = (((double)(C_PlayFab::sg_season())) == 11.0); _t21184 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S_7_22_1__id))) : _t21184; }); _t21185 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__2b__22_1__id))) : _t21185; });
    return false;
}
bool C_S_3_22_2::g_S__26_8() {
    RT_FN("S_3_22_2.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
C_S_3_22_2* C_S_3_22_2::alloc_() {
    C_S_3_22_2* o = rt::make<C_S_3_22_2>();
    return o;
}
rt::Value C_S_3_22_2::mk_(rt::Value* a, int n) {
    C_S_3_22_2* o = alloc_();
    o->C_S_3_22_2::ctor_();
    return rt::VO(o);
}
bool C_S_3_22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_3_22_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_3_22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_3_22_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_3_22_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_22_2__id)); return true;
    default: return false;
    }
}
bool C_S_3_22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_22_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_21_k::ctor_() {
    RT_FN("S_4_21_k.S_4_21_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21186 = 737.0; this->f_S_6_21_Z = rt::touint_d(_v21186); _v21186; });
    ({ rt::Value _v21187 = rt::trv(rt::VS(g::LS[6290])); this->f_S_1i = rt::slot_string(_v21187); _v21187; });
    ({ rt::Value _v21188 = rt::VS(g::LS[6291]); this->f_S__5e__21__23_ = rt::slot_string(_v21188); _v21188; });
    ({ rt::Value _v21189 = rt::VS(g::LS[6225]); this->f_S__3f__21__3d_ = rt::slot_string(_v21189); _v21189; });
    ({ double _v21190 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21190); _v21190; });
}
rt::Value C_S_4_21_k::m_S__40__22_() {
    RT_FN("S_4_21_k.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6292]), C_S__26_c::sm_S_6_21_T(C_S_4_21_k::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S_4_21_k::g_S__2d_6() {
    RT_FN("S_4_21_k.S__2d_6_get");
    return ({ bool _t21193 = (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(88.0)) >= 50.0); _t21193 ? (bool)(({ rt::Value _o21191 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3b__21_k__id); C_S__60_6* _p21192 = rt::as_ptr<C_S__60_6>(_o21191); _p21192 ? _p21192->g_S__2d_6() : rt::T(rt::dget(_o21191, NM_S__2d_6)); })) : _t21193; });
    return false;
}
bool C_S_4_21_k::g_S__26_8() {
    RT_FN("S_4_21_k.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 9.0);
    return false;
}
double C_S_4_21_k::sm_S__26_s() {
    RT_FN("S_4_21_k.S__26_s");
    return ((((double)(C_PlayFab::sg_season())) == 9.0) ? rt::m_pow((0.5 * rt::m_log((1.0 + C_S__26_c::sm_S__3e__21_h(C_S__26_c::dsm_S__3e__21_h_0(), C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2())))), 3.5) : 0.0);
    return 0.0;
}
C_S_4_21_k* C_S_4_21_k::alloc_() {
    C_S_4_21_k* o = rt::make<C_S_4_21_k>();
    return o;
}
rt::Value C_S_4_21_k::mk_(rt::Value* a, int n) {
    C_S_4_21_k* o = alloc_();
    o->C_S_4_21_k::ctor_();
    return rt::VO(o);
}
bool C_S_4_21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_21_k::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_4_21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_21_k__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_4_22_H::ctor_() {
    RT_FN("S_4_22_H.S_4_22_H");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21194 = 1199.0; this->f_S_6_21_Z = rt::touint_d(_v21194); _v21194; });
    ({ rt::Value _v21195 = rt::trv(rt::VS(g::LS[6293])); this->f_S_1i = rt::slot_string(_v21195); _v21195; });
    ({ rt::Value _v21196 = rt::VS(g::LS[6294]); this->f_S__5e__21__23_ = rt::slot_string(_v21196); _v21196; });
    ({ double _v21197 = 1.0; this->f_S__3e__3d_ = _v21197; _v21197; });
    ({ double _v21198 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21198); _v21198; });
}
rt::Value C_S_4_22_H::m_S__40__22_() {
    RT_FN("S_4_22_H.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[489]), C_S__26_c::sm_S_8_21_Z(C_S_4_22_H::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_4_22_H::g_S__2d_6() {
    RT_FN("S_4_22_H.S__2d_6_get");
    return ({ bool _t21199 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21199 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_22_H__id)) : _t21199; });
    return false;
}
bool C_S_4_22_H::g_S__26_8() {
    RT_FN("S_4_22_H.S__26_8_get");
    return ({ bool _t21200 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21200 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_22_H__id)) : _t21200; });
    return false;
}
double C_S_4_22_H::sm_S__22__21__26_() {
    RT_FN("S_4_22_H.S__22__21__26_");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 20.0 : 0.0);
    return 0.0;
}
C_S_4_22_H* C_S_4_22_H::alloc_() {
    C_S_4_22_H* o = rt::make<C_S_4_22_H>();
    return o;
}
rt::Value C_S_4_22_H::mk_(rt::Value* a, int n) {
    C_S_4_22_H* o = alloc_();
    o->C_S_4_22_H::ctor_();
    return rt::VO(o);
}
bool C_S_4_22_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_22_H::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_22_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_22_H::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_22_H::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S_4_22_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22_H__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22_H__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S_4_22_K::ctor_() {
    RT_FN("S_4_22_K.S_4_22_K");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21201 = 1209.0; this->f_S_6_21_Z = rt::touint_d(_v21201); _v21201; });
    ({ rt::Value _v21202 = rt::trv(rt::VS(g::LS[6295])); this->f_S_1i = rt::slot_string(_v21202); _v21202; });
    ({ rt::Value _v21203 = rt::VS(g::LS[6296]); this->f_S__5e__21__23_ = rt::slot_string(_v21203); _v21203; });
    ({ double _v21204 = 1.0; this->f_S__3e__3d_ = _v21204; _v21204; });
    ({ double _v21205 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21205); _v21205; });
}
rt::Value C_S_4_22_K::m_S__40__22_() {
    RT_FN("S_4_22_K.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6297])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_4_22_K::g_S__2d_6() {
    RT_FN("S_4_22_K.S__2d_6_get");
    return ({ bool _t21206 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21206 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_3_22_K__id)) : _t21206; });
    return false;
}
bool C_S_4_22_K::g_S__26_8() {
    RT_FN("S_4_22_K.S__26_8_get");
    return ({ bool _t21207 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21207 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_3_22_K__id)) : _t21207; });
    return false;
}
uint32_t C_S_4_22_K::sm_S_6_22_4() {
    RT_FN("S_4_22_K.S_6_22_4");
    return rt::touint_d(((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? ((double)(C_S__26_c::sm_S__3b__22__24_(2.0))) : 0.0));
    return 0u;
}
C_S_4_22_K* C_S_4_22_K::alloc_() {
    C_S_4_22_K* o = rt::make<C_S_4_22_K>();
    return o;
}
rt::Value C_S_4_22_K::mk_(rt::Value* a, int n) {
    C_S_4_22_K* o = alloc_();
    o->C_S_4_22_K::ctor_();
    return rt::VO(o);
}
bool C_S_4_22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_22_K::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_22_K::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_22_K::smeth_(int id) {
    switch (id) {
    case NM_S_6_22_4: return true;
    default: return false;
    }
}
bool C_S_4_22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22_K__id)); return true;
    case NM_S_6_22_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_22_4: out = rt::V((double)(sm_S_6_22_4())); return true;
    default: return false;
    }
}
void C_S_4_22_L::ctor_() {
    RT_FN("S_4_22_L.S_4_22_L");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21208 = 1211.0; this->f_S_6_21_Z = rt::touint_d(_v21208); _v21208; });
    ({ rt::Value _v21209 = rt::trv(rt::VS(g::LS[6298])); this->f_S_1i = rt::slot_string(_v21209); _v21209; });
    ({ rt::Value _v21210 = rt::VS(g::LS[6299]); this->f_S__5e__21__23_ = rt::slot_string(_v21210); _v21210; });
    ({ double _v21211 = 1.0; this->f_S__3e__3d_ = _v21211; _v21211; });
    ({ double _v21212 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21212); _v21212; });
}
rt::Value C_S_4_22_L::m_S__40__22_() {
    RT_FN("S_4_22_L.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6300]), C_S__26_c::sm_S_8_21_Z(C_S_4_22_L::sm_S__40_V(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_4_22_L::g_S__2d_6() {
    RT_FN("S_4_22_L.S__2d_6_get");
    return ({ bool _t21213 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21213 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_22_L__id)) : _t21213; });
    return false;
}
bool C_S_4_22_L::g_S__26_8() {
    RT_FN("S_4_22_L.S__26_8_get");
    return ({ bool _t21214 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21214 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_22_L__id)) : _t21214; });
    return false;
}
double C_S_4_22_L::sm_S__40_V() {
    RT_FN("S_4_22_L.S__40_V");
    return 10.0;
    return 0.0;
}
C_S_4_22_L* C_S_4_22_L::alloc_() {
    C_S_4_22_L* o = rt::make<C_S_4_22_L>();
    return o;
}
rt::Value C_S_4_22_L::mk_(rt::Value* a, int n) {
    C_S_4_22_L* o = alloc_();
    o->C_S_4_22_L::ctor_();
    return rt::VO(o);
}
bool C_S_4_22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_22_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_22_L::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_22_L::smeth_(int id) {
    switch (id) {
    case NM_S__40_V: return true;
    default: return false;
    }
}
bool C_S_4_22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22_L__id)); return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    default: return false;
    }
}
void C_S_4_22_M::ctor_() {
    RT_FN("S_4_22_M.S_4_22_M");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21215 = 1214.0; this->f_S_6_21_Z = rt::touint_d(_v21215); _v21215; });
    ({ rt::Value _v21216 = rt::trv(rt::VS(g::LS[6301])); this->f_S_1i = rt::slot_string(_v21216); _v21216; });
    ({ rt::Value _v21217 = rt::VS(g::LS[6302]); this->f_S__5e__21__23_ = rt::slot_string(_v21217); _v21217; });
    ({ double _v21218 = 1.0; this->f_S__3e__3d_ = _v21218; _v21218; });
    ({ double _v21219 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21219); _v21219; });
}
rt::Value C_S_4_22_M::m_S__40__22_() {
    RT_FN("S_4_22_M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6178]), C_S__26_c::sm_S_8_21_Z(C_S_4_22_M::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_4_22_M::g_S__2d_6() {
    RT_FN("S_4_22_M.S__2d_6_get");
    return ({ bool _t21220 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21220 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_22_M__id)) : _t21220; });
    return false;
}
bool C_S_4_22_M::g_S__26_8() {
    RT_FN("S_4_22_M.S__26_8_get");
    return ({ bool _t21221 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21221 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_22_M__id)) : _t21221; });
    return false;
}
double C_S_4_22_M::sm_S_9L() {
    RT_FN("S_4_22_M.S_9L");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 10.0 : 0.0);
    return 0.0;
}
C_S_4_22_M* C_S_4_22_M::alloc_() {
    C_S_4_22_M* o = rt::make<C_S_4_22_M>();
    return o;
}
rt::Value C_S_4_22_M::mk_(rt::Value* a, int n) {
    C_S_4_22_M* o = alloc_();
    o->C_S_4_22_M::ctor_();
    return rt::VO(o);
}
bool C_S_4_22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_22_M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_22_M::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S_4_22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22_M__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S_4_22_N::ctor_() {
    RT_FN("S_4_22_N.S_4_22_N");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21222 = 1244.0; this->f_S_6_21_Z = rt::touint_d(_v21222); _v21222; });
    ({ rt::Value _v21223 = rt::trv(rt::VS(g::LS[6303])); this->f_S_1i = rt::slot_string(_v21223); _v21223; });
    ({ rt::Value _v21224 = rt::VS(g::LS[6304]); this->f_S__5e__21__23_ = rt::slot_string(_v21224); _v21224; });
    ({ double _v21225 = 1.0; this->f_S__3e__3d_ = _v21225; _v21225; });
    ({ double _v21226 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21226); _v21226; });
}
rt::Value C_S_4_22_N::m_S__40__22_() {
    RT_FN("S_4_22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6178]), C_S__26_c::sm_S_8_21_Z(C_S_4_22_N::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_4_22_N::g_S__2d_6() {
    RT_FN("S_4_22_N.S__2d_6_get");
    return ({ bool _t21227 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21227 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_1_22_N__id)) : _t21227; });
    return false;
}
bool C_S_4_22_N::g_S__26_8() {
    RT_FN("S_4_22_N.S__26_8_get");
    return ({ bool _t21228 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21228 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_1_22_N__id)) : _t21228; });
    return false;
}
double C_S_4_22_N::sm_S_9L() {
    RT_FN("S_4_22_N.S_9L");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 10.0 : 0.0);
    return 0.0;
}
C_S_4_22_N* C_S_4_22_N::alloc_() {
    C_S_4_22_N* o = rt::make<C_S_4_22_N>();
    return o;
}
rt::Value C_S_4_22_N::mk_(rt::Value* a, int n) {
    C_S_4_22_N* o = alloc_();
    o->C_S_4_22_N::ctor_();
    return rt::VO(o);
}
bool C_S_4_22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4_22_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4_22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4_22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4_22_N::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S_4_22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22_N__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22_N__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S_4H::ctor_() {
    RT_FN("S_4H.S_4H");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21229 = 555.0; this->f_S_6_21_Z = rt::touint_d(_v21229); _v21229; });
    ({ rt::Value _v21230 = rt::trv(rt::VS(g::LS[6305])); this->f_S_1i = rt::slot_string(_v21230); _v21230; });
    ({ rt::Value _v21231 = rt::VS(g::LS[6306]); this->f_S__5e__21__23_ = rt::slot_string(_v21231); _v21231; });
    ({ bool _v21232 = true; this->f_S__25__21__3e_ = _v21232; _v21232; });
    ({ bool _v21233 = true; this->f_S__3f_T = _v21233; _v21233; });
    ({ double _v21234 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21234); _v21234; });
}
rt::Value C_S_4H::m_S__40__22_() {
    RT_FN("S_4H.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[380]), C_S__26_c::sm_S_6_21_T(C_S_4H::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S_4H::g_S__2d_6() {
    RT_FN("S_4H.S__2d_6_get");
    return ({ bool _t21235 = (((double)(C_PlayFab::sg_season())) == 4.0); _t21235 ? (bool)(this->f_S__3f__21_6) : _t21235; });
    return false;
}
bool C_S_4H::g_S__26_8() {
    RT_FN("S_4H.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 4.0);
    return false;
}
double C_S_4H::sm_S__27__21_b() {
    RT_FN("S_4H.S__27__21_b");
    return ((((double)(C_PlayFab::sg_season())) == 4.0) ? 100.0 : 0.0);
    return 0.0;
}
C_S_4H* C_S_4H::alloc_() {
    C_S_4H* o = rt::make<C_S_4H>();
    return o;
}
rt::Value C_S_4H::mk_(rt::Value* a, int n) {
    C_S_4H* o = alloc_();
    o->C_S_4H::ctor_();
    return rt::VO(o);
}
bool C_S_4H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4H::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4H::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4H::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_4H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4H__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4H__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_4M::ctor_() {
    RT_FN("S_4M.S_4M");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ rt::Value _v21236 = rt::trv(rt::VS(g::LS[6194])); this->f_S_1i = rt::slot_string(_v21236); _v21236; });
    ({ rt::Value _v21237 = rt::VS(g::LS[6307]); this->f_S__5e__21__23_ = rt::slot_string(_v21237); _v21237; });
    ({ bool _v21238 = true; this->f_S__25__21__2c_ = _v21238; _v21238; });
    ({ bool _v21239 = false; this->f_S_3e = _v21239; _v21239; });
    ({ bool _v21240 = false; this->f_S__40_X = _v21240; _v21240; });
    ({ double _v21241 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21241); _v21241; });
}
rt::Value C_S_4M::m_S__40__22_() {
    RT_FN("S_4M.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6308]), C_S__26_c::sm_S_8_21_Z(this->m_S__27_B(rt::toint_d(5.0)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_4M::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_4M.S__27_B");
    if ((((double)(l_param1)) == 5.0)) {
        return 100.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_4M::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S_4M.S_6r");
    ({ bool _v21242 = false; this->f_S__3c__21_7 = _v21242; _v21242; });
    (l_A__loc2_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)) - 1.0));
    ({ rt::Value _v21243 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(13.0), _v21243); });
    if ((((double)(C_S__26_c::sm_S__5e__21_L())) >= 8.0)) {
        return rt::NUL;
    }
    (void)(C_S__26_c::sm_S__5b__21_I(1.0, false, true));
    return rt::NUL;
}
bool C_S_4M::g_S__2d_6() {
    RT_FN("S_4M.S__2d_6_get");
    return ({ bool _t21244 = (((double)(C_PlayFab::sg_season())) == 4.0); _t21244 ? (bool)((((double)(C_S__26_c::sm_S__5e__21_L())) < 8.0)) : _t21244; });
    return false;
}
C_S_4M* C_S_4M::alloc_() {
    C_S_4M* o = rt::make<C_S_4M>();
    return o;
}
rt::Value C_S_4M::mk_(rt::Value* a, int n) {
    C_S_4M* o = alloc_();
    o->C_S_4M::ctor_();
    return rt::VO(o);
}
bool C_S_4M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_4M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_4M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_4M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_4M::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4M__id)); return true;
    default: return false;
    }
}
bool C_S_4M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_21_a::ctor_() {
    RT_FN("S_5_21_a.S_5_21_a");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21245 = 594.0; this->f_S_6_21_Z = rt::touint_d(_v21245); _v21245; });
    ({ rt::Value _v21246 = rt::trv(rt::VS(g::LS[6309])); this->f_S_1i = rt::slot_string(_v21246); _v21246; });
    ({ rt::Value _v21247 = rt::VS(g::LS[6310]); this->f_S__5e__21__23_ = rt::slot_string(_v21247); _v21247; });
    ({ rt::Value _v21248 = rt::VS(g::LS[5818]); this->f_S__3f__21__3d_ = rt::slot_string(_v21248); _v21248; });
    ({ double _v21249 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21249); _v21249; });
    ({ bool _v21250 = false; this->f_S_3e = _v21250; _v21250; });
    ({ bool _v21251 = true; this->f_S_0_21_d = _v21251; _v21251; });
}
double C_S_5_21_a::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_5_21_a.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 9.0))) {
        return 2000.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_5_21_a::m_S__40__22_() {
    RT_FN("S_5_21_a.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6311]), C_S__26_c::sm_S_8_21_Z(C_S_5_21_a::sm_S__40_V(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_5_21_a::g_S__2d_6() {
    RT_FN("S_5_21_a.S__2d_6_get");
    return C_S_8G::sm_S_7d(g::SV.C_S__23_P__id);
    return false;
}
double C_S_5_21_a::sm_S__40_V() {
    RT_FN("S_5_21_a.S__40_V");
    return (((((double)(C_PlayFab::sg_season())) == 6.0) && C_S_8G::sm_S_7d(g::SV.C_S__23_P__id)) ? 100.0 : 0.0);
    return 0.0;
}
C_S_5_21_a* C_S_5_21_a::alloc_() {
    C_S_5_21_a* o = rt::make<C_S_5_21_a>();
    return o;
}
rt::Value C_S_5_21_a::mk_(rt::Value* a, int n) {
    C_S_5_21_a* o = alloc_();
    o->C_S_5_21_a::ctor_();
    return rt::VO(o);
}
bool C_S_5_21_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_21_a::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_21_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_21_a::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_21_a::smeth_(int id) {
    switch (id) {
    case NM_S__40_V: return true;
    default: return false;
    }
}
bool C_S_5_21_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_21_a__id)); return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_21_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_21_a__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_21_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    default: return false;
    }
}
void C_S_5_21_i::ctor_() {
    RT_FN("S_5_21_i.S_5_21_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21252 = 725.0; this->f_S_6_21_Z = rt::touint_d(_v21252); _v21252; });
    ({ rt::Value _v21253 = rt::trv(rt::VS(g::LS[6312])); this->f_S_1i = rt::slot_string(_v21253); _v21253; });
    ({ rt::Value _v21254 = rt::VS(g::LS[6313]); this->f_S__5e__21__23_ = rt::slot_string(_v21254); _v21254; });
    ({ rt::Value _v21255 = rt::VS(g::LS[5814]); this->f_S__3f__21__3d_ = rt::slot_string(_v21255); _v21255; });
    ({ double _v21256 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21256); _v21256; });
    ({ bool _v21257 = false; this->f_S_3e = _v21257; _v21257; });
    ({ bool _v21258 = true; this->f_S_0_21_d = _v21258; _v21258; });
}
double C_S_5_21_i::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_5_21_i.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 19.0))) {
        return 750.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_5_21_i::m_S__40__22_() {
    RT_FN("S_5_21_i.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6314]), C_S__26_c::sm_S_6_21_T(C_S_5_21_i::sm_S_2_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S_5_21_i::g_S__2d_6() {
    RT_FN("S_5_21_i.S__2d_6_get");
    return C_S_8G::sm_S_7d(g::SV.C_S_2_21_i__id);
    return false;
}
double C_S_5_21_i::sm_S_2_21__40_() {
    RT_FN("S_5_21_i.S_2_21__40_");
    return (((((double)(C_PlayFab::sg_season())) == 8.0) && C_S_8G::sm_S_7d(g::SV.C_S_2_21_i__id)) ? rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(3.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7) : 0.0);
    return 0.0;
}
C_S_5_21_i* C_S_5_21_i::alloc_() {
    C_S_5_21_i* o = rt::make<C_S_5_21_i>();
    return o;
}
rt::Value C_S_5_21_i::mk_(rt::Value* a, int n) {
    C_S_5_21_i* o = alloc_();
    o->C_S_5_21_i::ctor_();
    return rt::VO(o);
}
bool C_S_5_21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_21_i::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_21_i::smeth_(int id) {
    switch (id) {
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S_5_21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_21_i__id)); return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S_5_21_k::ctor_() {
    RT_FN("S_5_21_k.S_5_21_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21259 = 742.0; this->f_S_6_21_Z = rt::touint_d(_v21259); _v21259; });
    ({ rt::Value _v21260 = rt::trv(rt::VS(g::LS[6315])); this->f_S_1i = rt::slot_string(_v21260); _v21260; });
    ({ rt::Value _v21261 = rt::VS(g::LS[6316]); this->f_S__5e__21__23_ = rt::slot_string(_v21261); _v21261; });
    ({ rt::Value _v21262 = rt::VS(g::LS[6240]); this->f_S__3f__21__3d_ = rt::slot_string(_v21262); _v21262; });
    ({ double _v21263 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21263); _v21263; });
}
rt::Value C_S_5_21_k::m_S__40__22_() {
    RT_FN("S_5_21_k.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6317]), C_S__26_c::sm_S_8_21_Z(C_S_5_21_k::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S_5_21_k::g_S__2d_6() {
    RT_FN("S_5_21_k.S__2d_6_get");
    return ({ bool _t21266 = (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(89.0)) >= 25.0); _t21266 ? (bool)(({ rt::Value _o21264 = C_S_8G::sm_S__21__21_H(g::SV.C_S_7_21_k__id); C_S__60_6* _p21265 = rt::as_ptr<C_S__60_6>(_o21264); _p21265 ? _p21265->g_S__2d_6() : rt::T(rt::dget(_o21264, NM_S__2d_6)); })) : _t21266; });
    return false;
}
bool C_S_5_21_k::g_S__26_8() {
    RT_FN("S_5_21_k.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 9.0);
    return false;
}
double C_S_5_21_k::sm_S__2c__21_G() {
    RT_FN("S_5_21_k.S__2c__21_G");
    return ((((double)(C_PlayFab::sg_season())) == 9.0) ? (24.0 + (12.0 * rt::m_log((1.0 + C_S__26_c::sm_S__5d__21_s(rt::toint_d(2.0), C_S__26_c::dsm_S__5d__21_s_1(), C_S__26_c::dsm_S__5d__21_s_2(), C_S__26_c::dsm_S__5d__21_s_3()))))) : 0.0);
    return 0.0;
}
C_S_5_21_k* C_S_5_21_k::alloc_() {
    C_S_5_21_k* o = rt::make<C_S_5_21_k>();
    return o;
}
rt::Value C_S_5_21_k::mk_(rt::Value* a, int n) {
    C_S_5_21_k* o = alloc_();
    o->C_S_5_21_k::ctor_();
    return rt::VO(o);
}
bool C_S_5_21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_21_k::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_5_21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_21_k__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_5_22_1::ctor_() {
    RT_FN("S_5_22_1.S_5_22_1");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21267 = 1022.0; this->f_S_6_21_Z = rt::touint_d(_v21267); _v21267; });
    ({ rt::Value _v21268 = rt::trv(rt::VS(g::LS[6318])); this->f_S_1i = rt::slot_string(_v21268); _v21268; });
    ({ rt::Value _v21269 = rt::VS(g::LS[6319]); this->f_S__5e__21__23_ = rt::slot_string(_v21269); _v21269; });
    ({ bool _v21270 = true; this->f_S__3f_T = _v21270; _v21270; });
    ({ double _v21271 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21271); _v21271; });
}
rt::Value C_S_5_22_1::m_S__40__22_() {
    RT_FN("S_5_22_1.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6320]), C_S__26_c::sm_S_6_21_T(C_S_5_22_1::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S_5_22_1::g_S__2d_6() {
    RT_FN("S_5_22_1.S__2d_6_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
bool C_S_5_22_1::g_S__26_8() {
    RT_FN("S_5_22_1.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
double C_S_5_22_1::sm_S__27__21_b() {
    RT_FN("S_5_22_1.S__27__21_b");
    return ((((double)(C_PlayFab::sg_season())) == 11.0) ? (((1.0 + ((0.0034999999999999996 * (((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(150.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(151.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(152.0))))) / 3.0))) * rt::m_pow(((((1.0 + rt::m_min2((((0.0 + (1.6 * ((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(150.0)) / 25.0)))) + ((-0.002) * rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(150.0)) / 25.0), 2.0))) + (2.4e-05 * rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(150.0)) / 25.0), 3.0))), 12500.0))) * ((1.0 + rt::m_min2((((0.0 + (1.6 * ((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(151.0)) / 25.0)))) + ((-0.002) * rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(151.0)) / 25.0), 2.0))) + (2.4e-05 * rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(151.0)) / 25.0), 3.0))), 12500.0)))) * ((1.0 + rt::m_min2((((0.0 + (1.6 * ((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(152.0)) / 25.0)))) + ((-0.002) * rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(152.0)) / 25.0), 2.0))) + (2.4e-05 * rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(152.0)) / 25.0), 3.0))), 12500.0)))), 0.4)) : 0.0);
    return 0.0;
}
C_S_5_22_1* C_S_5_22_1::alloc_() {
    C_S_5_22_1* o = rt::make<C_S_5_22_1>();
    return o;
}
rt::Value C_S_5_22_1::mk_(rt::Value* a, int n) {
    C_S_5_22_1* o = alloc_();
    o->C_S_5_22_1::ctor_();
    return rt::VO(o);
}
bool C_S_5_22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_22_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_22_1::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_5_22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22_1__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22_1__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_5_22_O::ctor_() {
    RT_FN("S_5_22_O.S_5_22_O");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21272 = 1247.0; this->f_S_6_21_Z = rt::touint_d(_v21272); _v21272; });
    ({ rt::Value _v21273 = rt::trv(rt::VS(g::LS[6321])); this->f_S_1i = rt::slot_string(_v21273); _v21273; });
    ({ rt::Value _v21274 = rt::VS(g::LS[6322]); this->f_S__5e__21__23_ = rt::slot_string(_v21274); _v21274; });
    ({ double _v21275 = 1.0; this->f_S__3e__3d_ = _v21275; _v21275; });
    ({ double _v21276 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21276); _v21276; });
}
rt::Value C_S_5_22_O::m_S__40__22_() {
    RT_FN("S_5_22_O.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[492]), C_S__26_c::sm_S_8_21_Z(C_S_5_22_O::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_5_22_O::g_S__2d_6() {
    RT_FN("S_5_22_O.S__2d_6_get");
    return ({ bool _t21277 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21277 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_7_22_O__id)) : _t21277; });
    return false;
}
bool C_S_5_22_O::g_S__26_8() {
    RT_FN("S_5_22_O.S__26_8_get");
    return ({ bool _t21278 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21278 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_7_22_O__id)) : _t21278; });
    return false;
}
double C_S_5_22_O::sm_S__3f__21__3c_() {
    RT_FN("S_5_22_O.S__3f__21__3c_");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 10.0 : 0.0);
    return 0.0;
}
C_S_5_22_O* C_S_5_22_O::alloc_() {
    C_S_5_22_O* o = rt::make<C_S_5_22_O>();
    return o;
}
rt::Value C_S_5_22_O::mk_(rt::Value* a, int n) {
    C_S_5_22_O* o = alloc_();
    o->C_S_5_22_O::ctor_();
    return rt::VO(o);
}
bool C_S_5_22_O::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_5_22_O::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_5_22_O::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_5_22_O::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_5_22_O::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S_5_22_O::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22_O__id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_22_O::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22_O__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_22_O::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S_6_22_Q::ctor_() {
    RT_FN("S_6_22_Q.S_6_22_Q");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21279 = 1254.0; this->f_S_6_21_Z = rt::touint_d(_v21279); _v21279; });
    ({ rt::Value _v21280 = rt::trv(rt::VS(g::LS[6323])); this->f_S_1i = rt::slot_string(_v21280); _v21280; });
    ({ rt::Value _v21281 = rt::VS(g::LS[6324]); this->f_S__5e__21__23_ = rt::slot_string(_v21281); _v21281; });
    ({ double _v21282 = 1.0; this->f_S__3e__3d_ = _v21282; _v21282; });
    ({ double _v21283 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21283); _v21283; });
}
rt::Value C_S_6_22_Q::m_S__40__22_() {
    RT_FN("S_6_22_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6325]), C_S__26_c::sm_S_8_21_Z(C_S_6_22_Q::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_6_22_Q::g_S__2d_6() {
    RT_FN("S_6_22_Q.S__2d_6_get");
    return ({ bool _t21284 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21284 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_22_Q__id)) : _t21284; });
    return false;
}
bool C_S_6_22_Q::g_S__26_8() {
    RT_FN("S_6_22_Q.S__26_8_get");
    return ({ bool _t21285 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21285 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_22_Q__id)) : _t21285; });
    return false;
}
double C_S_6_22_Q::sm_S__2b__2b_() {
    RT_FN("S_6_22_Q.S__2b__2b_");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 100.0 : 0.0);
    return 0.0;
}
C_S_6_22_Q* C_S_6_22_Q::alloc_() {
    C_S_6_22_Q* o = rt::make<C_S_6_22_Q>();
    return o;
}
rt::Value C_S_6_22_Q::mk_(rt::Value* a, int n) {
    C_S_6_22_Q* o = alloc_();
    o->C_S_6_22_Q::ctor_();
    return rt::VO(o);
}
bool C_S_6_22_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_6_22_Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_6_22_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_6_22_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_6_22_Q::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S_6_22_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22_Q__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_22_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22_Q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_22_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S_7_21__24_::ctor_() {
    RT_FN("S_7_21__24_.S_7_21__24_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21286 = 557.0; this->f_S_6_21_Z = rt::touint_d(_v21286); _v21286; });
    ({ rt::Value _v21287 = rt::trv(rt::VS(g::LS[6326])); this->f_S_1i = rt::slot_string(_v21287); _v21287; });
    ({ rt::Value _v21288 = rt::VS(g::LS[6327]); this->f_S__5e__21__23_ = rt::slot_string(_v21288); _v21288; });
    ({ bool _v21289 = true; this->f_S__25__21__3e_ = _v21289; _v21289; });
    ({ bool _v21290 = true; this->f_S__3f_T = _v21290; _v21290; });
    ({ double _v21291 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21291); _v21291; });
}
rt::Value C_S_7_21__24_::m_S__40__22_() {
    RT_FN("S_7_21__24_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5314]), C_S__26_c::sm_S_8_21_Z(C_S_7_21__24_::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S_7_21__24_::g_S__2d_6() {
    RT_FN("S_7_21__24_.S__2d_6_get");
    return ({ bool _t21292 = (((double)(C_PlayFab::sg_season())) == 4.0); _t21292 ? (bool)(this->f_S__3f__21_6) : _t21292; });
    return false;
}
bool C_S_7_21__24_::g_S__26_8() {
    RT_FN("S_7_21__24_.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 4.0);
    return false;
}
double C_S_7_21__24_::sm_S__22__21__26_() {
    RT_FN("S_7_21__24_.S__22__21__26_");
    return ((((double)(C_PlayFab::sg_season())) == 4.0) ? 10.0 : 0.0);
    return 0.0;
}
C_S_7_21__24_* C_S_7_21__24_::alloc_() {
    C_S_7_21__24_* o = rt::make<C_S_7_21__24_>();
    return o;
}
rt::Value C_S_7_21__24_::mk_(rt::Value* a, int n) {
    C_S_7_21__24_* o = alloc_();
    o->C_S_7_21__24_::ctor_();
    return rt::VO(o);
}
bool C_S_7_21__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7_21__24_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7_21__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7_21__24_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7_21__24_::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S_7_21__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21__24___id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_21__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_21__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S_7_21__3e_::ctor_() {
    RT_FN("S_7_21__3e_.S_7_21__3e_");
    (void)((this->C_S__25__21__3d_::ctor_(), rt::NUL));
    ({ rt::Value _v21293 = rt::trv(rt::VS(g::LS[6328])); this->f_S_1i = rt::slot_string(_v21293); _v21293; });
    ({ rt::Value _v21294 = rt::VS(g::LS[6329]); this->f_S__5e__21__23_ = rt::slot_string(_v21294); _v21294; });
}
rt::Value C_S_7_21__3e_::m_S__40__22_() {
    RT_FN("S_7_21__3e_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5413]), rt::dcallv(rt::V(1.5), rt::N_toFixed, rt::V(1.0)), rt::dcallv(rt::V(C_S__2d__21_Z::sm_S__40__21__3f_()), rt::N_toFixed, rt::V(2.0))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5360]))));
    return rt::NUL;
}
double C_S_7_21__3e_::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_7_21__3e_.S__27_B");
    if ((((double)(l_param1)) == 2.0)) {
        return (((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(118.0)) + 1.0)) * 100.0);
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_7_21__3e_::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S_7_21__3e_.S_6r");
    if ((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(118.0)) >= 500.0)) {
        return rt::NUL;
    }
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 118.0), rt::V(1.0))));
    ({ rt::Value _v21295 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(118.0), _v21295); });
    (void)(this->C_S__25__21__3d_::m_S_6r());
    return rt::NUL;
}
bool C_S_7_21__3e_::g_S_9_21__25_() {
    RT_FN("S_7_21__3e_.S_9_21__25__get");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(118.0)) < 500.0);
    return false;
}
C_S_7_21__3e_* C_S_7_21__3e_::alloc_() {
    C_S_7_21__3e_* o = rt::make<C_S_7_21__3e_>();
    return o;
}
rt::Value C_S_7_21__3e_::mk_(rt::Value* a, int n) {
    C_S_7_21__3e_* o = alloc_();
    o->C_S_7_21__3e_::ctor_();
    return rt::VO(o);
}
bool C_S_7_21__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__25__21__3d_::dget(id, out);
}
bool C_S_7_21__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__25__21__3d_::dset(id, v);
}
bool C_S_7_21__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__25__21__3d_::dcall(id, a, n, out);
}
bool C_S_7_21__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__25__21__3d_::dmeth(id);
}
bool C_S_7_21__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_21__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21__3e___id)); return true;
    default: return false;
    }
}
bool C_S_7_21__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_21__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_21_k::ctor_() {
    RT_FN("S_7_21_k.S_7_21_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21296 = 741.0; this->f_S_6_21_Z = rt::touint_d(_v21296); _v21296; });
    ({ rt::Value _v21297 = rt::trv(rt::VS(g::LS[6164])); this->f_S_1i = rt::slot_string(_v21297); _v21297; });
    ({ rt::Value _v21298 = rt::VS(g::LS[6165]); this->f_S__5e__21__23_ = rt::slot_string(_v21298); _v21298; });
    ({ double _v21299 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v21299); _v21299; });
    ({ double _v21300 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21300); _v21300; });
    ({ bool _v21301 = false; this->f_S_3e = _v21301; _v21301; });
    ({ bool _v21302 = false; this->f_S__40_X = _v21302; _v21302; });
}
rt::Value C_S_7_21_k::m_S__40__22_() {
    RT_FN("S_7_21_k.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6330]), C_S__26_c::sm_S_8_21_Z(C_S_7_21_k::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6212]))));
    return rt::NUL;
}
double C_S_7_21_k::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_7_21_k.S__27_B");
    if ((((double)(l_param1)) == 21.0)) {
        return rt::m_floor(rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(89.0)) + 1.0), 0.85));
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_7_21_k::m_S_6r() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S_7_21_k.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    ({ bool _v21303 = false; this->f_S__3c__21_7 = _v21303; _v21303; });
    ({ rt::Value _o21304 = g::SV.C_S_8G__S_5_21_V; rt::Value _i21305 = rt::V(13.0); rt::Value _v21306 = rt::V((rt::tonum(rt::idx_get(_o21304, _i21305)) - 1.0)); rt::idx_set(_o21304, _i21305, _v21306); _v21306; });
    ({ rt::Value _o21307 = g::SV.C_S_8G__S_5_21_V; rt::Value _i21308 = rt::V(89.0); rt::Value _v21309 = rt::add(rt::idx_get(_o21307, _i21308), rt::V(1.0)); rt::idx_set(_o21307, _i21308, _v21309); _v21309; });
    (l_A__loc1_ = rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(89.0))));
    if ((({ bool _t21310 = (((double)(l_A__loc1_)) == 25.0); _t21310 ? _t21310 : (bool)((((double)(l_A__loc1_)) == 50.0)); }) || (((double)(l_A__loc1_)) == 100.0))) {
        (void)(({ rt::Value _o21311 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p21312 = rt::as_ptr<C_S__20_g>(_o21311); _p21312 ? _p21312->m_S__2d__25_(rt::trv(rt::VS(g::LS[6331])), rt::trv(rt::VS(g::LS[6332])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o21311, NM_S__2d__25_, rt::trv(rt::VS(g::LS[6331])), rt::trv(rt::VS(g::LS[6332]))); }));
    }
    return rt::NUL;
}
bool C_S_7_21_k::g_S__2d_6() {
    RT_FN("S_7_21_k.S__2d_6_get");
    return ({ bool _t21316 = (((double)(C_PlayFab::sg_season())) == 9.0); _t21316 ? (bool)((({ bool _t21315 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0); _t21315 ? _t21315 : (bool)(({ bool _t21314 = ({ bool _t21313 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0); _t21313 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3c__21_k__id)) : _t21313; }); _t21314 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__25__21_k__id))) : _t21314; })); }))) : _t21316; });
    return false;
}
double C_S_7_21_k::sm_S_9L() {
    RT_FN("S_7_21_k.S_9L");
    return ((((double)(C_PlayFab::sg_season())) == 9.0) ? C_S__26_c::sm_S__20__21__3b_(rt::toint_d(89.0)) : 0.0);
    return 0.0;
}
C_S_7_21_k* C_S_7_21_k::alloc_() {
    C_S_7_21_k* o = rt::make<C_S_7_21_k>();
    return o;
}
rt::Value C_S_7_21_k::mk_(rt::Value* a, int n) {
    C_S_7_21_k* o = alloc_();
    o->C_S_7_21_k::ctor_();
    return rt::VO(o);
}
bool C_S_7_21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7_21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7_21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7_21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7_21_k::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S_7_21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21_k__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S_7_22_1::ctor_() {
    RT_FN("S_7_22_1.S_7_22_1");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21317 = 1017.0; this->f_S_6_21_Z = rt::touint_d(_v21317); _v21317; });
    ({ rt::Value _v21318 = rt::trv(rt::VS(g::LS[6274])); this->f_S_1i = rt::slot_string(_v21318); _v21318; });
    ({ rt::Value _v21319 = rt::VS(g::LS[6275]); this->f_S__5e__21__23_ = rt::slot_string(_v21319); _v21319; });
    ({ double _v21320 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21320); _v21320; });
    ({ bool _v21321 = false; this->f_S_3e = _v21321; _v21321; });
    ({ bool _v21322 = false; this->f_S__40_X = _v21322; _v21322; });
}
rt::Value C_S_7_22_1::m_S__40__22_() {
    RT_FN("S_7_22_1.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6333])));
    return rt::NUL;
}
bool C_S_7_22_1::g_S__2d_6() {
    RT_FN("S_7_22_1.S__2d_6_get");
    return ({ bool _t21324 = ({ bool _t21323 = (((double)(C_PlayFab::sg_season())) == 11.0); _t21323 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S_3_22_2__id))) : _t21323; }); _t21324 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__2b__22_1__id))) : _t21324; });
    return false;
}
bool C_S_7_22_1::g_S__26_8() {
    RT_FN("S_7_22_1.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 11.0);
    return false;
}
C_S_7_22_1* C_S_7_22_1::alloc_() {
    C_S_7_22_1* o = rt::make<C_S_7_22_1>();
    return o;
}
rt::Value C_S_7_22_1::mk_(rt::Value* a, int n) {
    C_S_7_22_1* o = alloc_();
    o->C_S_7_22_1::ctor_();
    return rt::VO(o);
}
bool C_S_7_22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7_22_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7_22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7_22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7_22_1::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22_1__id)); return true;
    default: return false;
    }
}
bool C_S_7_22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22_1__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_22_M::ctor_() {
    RT_FN("S_7_22_M.S_7_22_M");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21325 = 1215.0; this->f_S_6_21_Z = rt::touint_d(_v21325); _v21325; });
    ({ rt::Value _v21326 = rt::trv(rt::VS(g::LS[6334])); this->f_S_1i = rt::slot_string(_v21326); _v21326; });
    ({ rt::Value _v21327 = rt::VS(g::LS[6335]); this->f_S__5e__21__23_ = rt::slot_string(_v21327); _v21327; });
    ({ double _v21328 = 1.0; this->f_S__3e__3d_ = _v21328; _v21328; });
    ({ double _v21329 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21329); _v21329; });
}
rt::Value C_S_7_22_M::m_S__40__22_() {
    RT_FN("S_7_22_M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6336]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S_7_22_M::sm_S__2b__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_7_22_M::g_S__2d_6() {
    RT_FN("S_7_22_M.S__2d_6_get");
    return ({ bool _t21330 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21330 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_6_22_M__id)) : _t21330; });
    return false;
}
bool C_S_7_22_M::g_S__26_8() {
    RT_FN("S_7_22_M.S__26_8_get");
    return ({ bool _t21331 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21331 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_6_22_M__id)) : _t21331; });
    return false;
}
double C_S_7_22_M::sm_S__2b__21_b() {
    RT_FN("S_7_22_M.S__2b__21_b");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 14.0 : 0.0);
    return 0.0;
}
C_S_7_22_M* C_S_7_22_M::alloc_() {
    C_S_7_22_M* o = rt::make<C_S_7_22_M>();
    return o;
}
rt::Value C_S_7_22_M::mk_(rt::Value* a, int n) {
    C_S_7_22_M* o = alloc_();
    o->C_S_7_22_M::ctor_();
    return rt::VO(o);
}
bool C_S_7_22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7_22_M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7_22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7_22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7_22_M::smeth_(int id) {
    switch (id) {
    case NM_S__2b__21_b: return true;
    default: return false;
    }
}
bool C_S_7_22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22_M__id)); return true;
    case NM_S__2b__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__21_b: out = rt::V(sm_S__2b__21_b()); return true;
    default: return false;
    }
}
void C_S_7_3e_::ctor_() {
    RT_FN("S_7_3e_.S_7_3e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21332 = 586.0; this->f_S_6_21_Z = rt::touint_d(_v21332); _v21332; });
    ({ rt::Value _v21333 = rt::trv(rt::VS(g::LS[6337])); this->f_S_1i = rt::slot_string(_v21333); _v21333; });
    ({ rt::Value _v21334 = rt::VS(g::LS[6338]); this->f_S__5e__21__23_ = rt::slot_string(_v21334); _v21334; });
    ({ bool _v21335 = true; this->f_S__3f_T = _v21335; _v21335; });
    ({ double _v21336 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21336); _v21336; });
}
rt::Value C_S_7_3e_::m_S__40__22_() {
    RT_FN("S_7_3e_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6339]), C_S__26_c::sm_S_6_21_T(C_S_7_3e_::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S_7_3e_::g_S__2d_6() {
    RT_FN("S_7_3e_.S__2d_6_get");
    return (((double)(C_PlayFab::sg_season())) == 6.0);
    return false;
}
bool C_S_7_3e_::g_S__26_8() {
    RT_FN("S_7_3e_.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 6.0);
    return false;
}
double C_S_7_3e_::sm_S__27__21_b() {
    RT_FN("S_7_3e_.S__27__21_b");
    return ((((double)(C_PlayFab::sg_season())) == 6.0) ? rt::m_min2((((0.0 + (1.0 * ((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(127.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(126.0)))) / 27.0)))) + ((-0.02) * rt::m_pow((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(127.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(126.0)))) / 27.0), 2.0))) + (0.0002 * rt::m_pow((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(127.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(126.0)))) / 27.0), 3.0))), 100000.0) : 0.0);
    return 0.0;
}
C_S_7_3e_* C_S_7_3e_::alloc_() {
    C_S_7_3e_* o = rt::make<C_S_7_3e_>();
    return o;
}
rt::Value C_S_7_3e_::mk_(rt::Value* a, int n) {
    C_S_7_3e_* o = alloc_();
    o->C_S_7_3e_::ctor_();
    return rt::VO(o);
}
bool C_S_7_3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_7_3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_7_3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_7_3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_7_3e_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_7_3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_3e___id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_8_21_i::ctor_() {
    RT_FN("S_8_21_i.S_8_21_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21337 = 727.0; this->f_S_6_21_Z = rt::touint_d(_v21337); _v21337; });
    ({ rt::Value _v21338 = rt::trv(rt::VS(g::LS[6340])); this->f_S_1i = rt::slot_string(_v21338); _v21338; });
    ({ rt::Value _v21339 = rt::VS(g::LS[6341]); this->f_S__5e__21__23_ = rt::slot_string(_v21339); _v21339; });
    ({ bool _v21340 = true; this->f_S__3f_T = _v21340; _v21340; });
    ({ double _v21341 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21341); _v21341; });
}
rt::Value C_S_8_21_i::m_S__40__22_() {
    RT_FN("S_8_21_i.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6342]), C_S__26_c::sm_S_6_21_T(C_S_8_21_i::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S_8_21_i::g_S__2d_6() {
    RT_FN("S_8_21_i.S__2d_6_get");
    return (((double)(C_PlayFab::sg_season())) == 8.0);
    return false;
}
bool C_S_8_21_i::g_S__26_8() {
    RT_FN("S_8_21_i.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 8.0);
    return false;
}
double C_S_8_21_i::sm_S__27__21_b() {
    RT_FN("S_8_21_i.S__27__21_b");
    return ((((double)(C_PlayFab::sg_season())) == 8.0) ? rt::m_min2((((0.0 + (1.0 * ((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(131.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(132.0)))) / 20.0)))) + ((-0.005) * rt::m_pow((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(131.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(132.0)))) / 20.0), 2.0))) + (0.00045 * rt::m_pow((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(131.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(132.0)))) / 20.0), 3.0))), 100000.0) : 0.0);
    return 0.0;
}
C_S_8_21_i* C_S_8_21_i::alloc_() {
    C_S_8_21_i* o = rt::make<C_S_8_21_i>();
    return o;
}
rt::Value C_S_8_21_i::mk_(rt::Value* a, int n) {
    C_S_8_21_i* o = alloc_();
    o->C_S_8_21_i::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_21_i::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_21_i::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_8_21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21_i__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_8_21_k::ctor_() {
    RT_FN("S_8_21_k.S_8_21_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21342 = 743.0; this->f_S_6_21_Z = rt::touint_d(_v21342); _v21342; });
    ({ rt::Value _v21343 = rt::trv(rt::VS(g::LS[6343])); this->f_S_1i = rt::slot_string(_v21343); _v21343; });
    ({ rt::Value _v21344 = rt::VS(g::LS[6344]); this->f_S__5e__21__23_ = rt::slot_string(_v21344); _v21344; });
    ({ rt::Value _v21345 = rt::VS(g::LS[6240]); this->f_S__3f__21__3d_ = rt::slot_string(_v21345); _v21345; });
    ({ double _v21346 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21346); _v21346; });
}
rt::Value C_S_8_21_k::m_S__40__22_() {
    RT_FN("S_8_21_k.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6345]), C_S__26_c::sm_S_6_21_T(C_S_8_21_k::sm_S__26_s(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S_8_21_k::g_S__2d_6() {
    RT_FN("S_8_21_k.S__2d_6_get");
    return ({ bool _t21349 = (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(89.0)) >= 50.0); _t21349 ? (bool)(({ rt::Value _o21347 = C_S_8G::sm_S__21__21_H(g::SV.C_S_7_21_k__id); C_S__60_6* _p21348 = rt::as_ptr<C_S__60_6>(_o21347); _p21348 ? _p21348->g_S__2d_6() : rt::T(rt::dget(_o21347, NM_S__2d_6)); })) : _t21349; });
    return false;
}
bool C_S_8_21_k::g_S__26_8() {
    RT_FN("S_8_21_k.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 9.0);
    return false;
}
double C_S_8_21_k::sm_S__26_s() {
    RT_FN("S_8_21_k.S__26_s");
    return ((((double)(C_PlayFab::sg_season())) == 9.0) ? (150.0 * rt::m_pow(C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()), 0.25)) : 0.0);
    return 0.0;
}
C_S_8_21_k* C_S_8_21_k::alloc_() {
    C_S_8_21_k* o = rt::make<C_S_8_21_k>();
    return o;
}
rt::Value C_S_8_21_k::mk_(rt::Value* a, int n) {
    C_S_8_21_k* o = alloc_();
    o->C_S_8_21_k::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_21_k::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_8_21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21_k__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_8_22_L::ctor_() {
    RT_FN("S_8_22_L.S_8_22_L");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21350 = 1212.0; this->f_S_6_21_Z = rt::touint_d(_v21350); _v21350; });
    ({ rt::Value _v21351 = rt::trv(rt::VS(g::LS[6346])); this->f_S_1i = rt::slot_string(_v21351); _v21351; });
    ({ rt::Value _v21352 = rt::VS(g::LS[6347]); this->f_S__5e__21__23_ = rt::slot_string(_v21352); _v21352; });
    ({ double _v21353 = 1.0; this->f_S__3e__3d_ = _v21353; _v21353; });
    ({ double _v21354 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21354); _v21354; });
}
rt::Value C_S_8_22_L::m_S__40__22_() {
    RT_FN("S_8_22_L.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[603]), C_S__26_c::sm_S_8_21_Z(C_S_8_22_L::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_8_22_L::g_S__2d_6() {
    RT_FN("S_8_22_L.S__2d_6_get");
    return ({ bool _t21355 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21355 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9_22_L__id)) : _t21355; });
    return false;
}
bool C_S_8_22_L::g_S__26_8() {
    RT_FN("S_8_22_L.S__26_8_get");
    return ({ bool _t21356 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21356 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9_22_L__id)) : _t21356; });
    return false;
}
double C_S_8_22_L::sm_S__2c_J() {
    RT_FN("S_8_22_L.S__2c_J");
    return 25.0;
    return 0.0;
}
C_S_8_22_L* C_S_8_22_L::alloc_() {
    C_S_8_22_L* o = rt::make<C_S_8_22_L>();
    return o;
}
rt::Value C_S_8_22_L::mk_(rt::Value* a, int n) {
    C_S_8_22_L* o = alloc_();
    o->C_S_8_22_L::ctor_();
    return rt::VO(o);
}
bool C_S_8_22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_8_22_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_8_22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_8_22_L::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_8_22_L::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    default: return false;
    }
}
bool C_S_8_22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22_L__id)); return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    default: return false;
    }
}
void C_S_9_22_4::ctor_() {
    RT_FN("S_9_22_4.S_9_22_4");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21357 = 1062.0; this->f_S_6_21_Z = rt::touint_d(_v21357); _v21357; });
    ({ rt::Value _v21358 = rt::trv(rt::VS(g::LS[6348])); this->f_S_1i = rt::slot_string(_v21358); _v21358; });
    ({ rt::Value _v21359 = rt::VS(g::LS[6349]); this->f_S__5e__21__23_ = rt::slot_string(_v21359); _v21359; });
    ({ double _v21360 = 1.0; this->f_S__3e__3d_ = _v21360; _v21360; });
    ({ double _v21361 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21361); _v21361; });
    ({ bool _v21362 = true; this->f_S_4W = _v21362; _v21362; });
    ({ bool _v21363 = true; this->f_data = _v21363; _v21363; });
}
rt::Value C_S_9_22_4::m_S__40__22_() {
    RT_FN("S_9_22_4.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6350]), rt::dcallv(rt::V(0.01), rt::N_toFixed, rt::V(2.0))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_9_22_4::g_S__2d_6() {
    RT_FN("S_9_22_4.S__2d_6_get");
    return ({ bool _t21364 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21364 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__27__22_4__id)) : _t21364; });
    return false;
}
bool C_S_9_22_4::g_S__26_8() {
    RT_FN("S_9_22_4.S__26_8_get");
    return ({ bool _t21365 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21365 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__27__22_4__id)) : _t21365; });
    return false;
}
C_S_9_22_4* C_S_9_22_4::alloc_() {
    C_S_9_22_4* o = rt::make<C_S_9_22_4>();
    return o;
}
rt::Value C_S_9_22_4::mk_(rt::Value* a, int n) {
    C_S_9_22_4* o = alloc_();
    o->C_S_9_22_4::ctor_();
    return rt::VO(o);
}
bool C_S_9_22_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_22_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_22_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_22_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_22_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22_4__id)); return true;
    case NM_S_0_22__2b_: out = rt::V(g::SV.C_S_9_22_4__S_0_22__2b_); return true;
    default: return false;
    }
}
bool C_S_9_22_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22_4__id = rt::touint(v); return true;
    case NM_S_0_22__2b_: g::SV.C_S_9_22_4__S_0_22__2b_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_9_22_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_22_M::ctor_() {
    RT_FN("S_9_22_M.S_9_22_M");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21366 = 1216.0; this->f_S_6_21_Z = rt::touint_d(_v21366); _v21366; });
    ({ rt::Value _v21367 = rt::trv(rt::VS(g::LS[6351])); this->f_S_1i = rt::slot_string(_v21367); _v21367; });
    ({ rt::Value _v21368 = rt::VS(g::LS[6352]); this->f_S__5e__21__23_ = rt::slot_string(_v21368); _v21368; });
    ({ double _v21369 = 1.0; this->f_S__3e__3d_ = _v21369; _v21369; });
    ({ double _v21370 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21370); _v21370; });
}
rt::Value C_S_9_22_M::m_S__40__22_() {
    RT_FN("S_9_22_M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6353]), C_S__26_c::sm_S_8_21_Z(C_S_9_22_M::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_9_22_M::g_S__2d_6() {
    RT_FN("S_9_22_M.S__2d_6_get");
    return ({ bool _t21371 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21371 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3b__22_M__id)) : _t21371; });
    return false;
}
bool C_S_9_22_M::g_S__26_8() {
    RT_FN("S_9_22_M.S__26_8_get");
    return ({ bool _t21372 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21372 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3b__22_M__id)) : _t21372; });
    return false;
}
double C_S_9_22_M::sm_S__2c__21_G() {
    RT_FN("S_9_22_M.S__2c__21_G");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 10.0 : 0.0);
    return 0.0;
}
C_S_9_22_M* C_S_9_22_M::alloc_() {
    C_S_9_22_M* o = rt::make<C_S_9_22_M>();
    return o;
}
rt::Value C_S_9_22_M::mk_(rt::Value* a, int n) {
    C_S_9_22_M* o = alloc_();
    o->C_S_9_22_M::ctor_();
    return rt::VO(o);
}
bool C_S_9_22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_22_M::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_22_M::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_9_22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22_M__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_9_22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_9_22_N::ctor_() {
    RT_FN("S_9_22_N.S_9_22_N");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21373 = 1245.0; this->f_S_6_21_Z = rt::touint_d(_v21373); _v21373; });
    ({ rt::Value _v21374 = rt::trv(rt::VS(g::LS[6354])); this->f_S_1i = rt::slot_string(_v21374); _v21374; });
    ({ rt::Value _v21375 = rt::VS(g::LS[6355]); this->f_S__5e__21__23_ = rt::slot_string(_v21375); _v21375; });
    ({ double _v21376 = 1.0; this->f_S__3e__3d_ = _v21376; _v21376; });
    ({ double _v21377 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21377); _v21377; });
}
rt::Value C_S_9_22_N::m_S__40__22_() {
    RT_FN("S_9_22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5426]), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o21378 = C_S_8G::sm_S__2d_e(rt::toint_d(10.0)); C_S__60__21__3b_* _p21379 = rt::as_ptr<C_S__60__21__3b_>(_o21378); _p21379 ? _p21379->f_id : rt::touint(rt::dget(_o21378, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S_9_22_N::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S_9_22_N::g_S__2d_6() {
    RT_FN("S_9_22_N.S__2d_6_get");
    return ({ bool _t21381 = ({ bool _t21380 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21380 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0))) : _t21380; }); _t21381 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_7_22_N__id)) : _t21381; });
    return false;
}
bool C_S_9_22_N::g_S__26_8() {
    RT_FN("S_9_22_N.S__26_8_get");
    return ({ bool _t21383 = ({ bool _t21382 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21382 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0))) : _t21382; }); _t21383 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_7_22_N__id)) : _t21383; });
    return false;
}
double C_S_9_22_N::sm_S__26_s() {
    RT_FN("S_9_22_N.S__26_s");
    return ((!(((double)(C_PlayFab::sg_season())) == 0.0)) ? 25.0 : 0.0);
    return 0.0;
}
C_S_9_22_N* C_S_9_22_N::alloc_() {
    C_S_9_22_N* o = rt::make<C_S_9_22_N>();
    return o;
}
rt::Value C_S_9_22_N::mk_(rt::Value* a, int n) {
    C_S_9_22_N* o = alloc_();
    o->C_S_9_22_N::ctor_();
    return rt::VO(o);
}
bool C_S_9_22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_22_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_22_N::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_9_22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22_N__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_9_22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22_N__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_9_2c_::ctor_() {
    RT_FN("S_9_2c_.S_9_2c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21384 = 588.0; this->f_S_6_21_Z = rt::touint_d(_v21384); _v21384; });
    ({ rt::Value _v21385 = rt::trv(rt::VS(g::LS[6356])); this->f_S_1i = rt::slot_string(_v21385); _v21385; });
    ({ rt::Value _v21386 = rt::VS(g::LS[6357]); this->f_S__5e__21__23_ = rt::slot_string(_v21386); _v21386; });
    ({ rt::Value _v21387 = rt::VS(g::LS[5843]); this->f_S__3f__21__3d_ = rt::slot_string(_v21387); _v21387; });
    ({ double _v21388 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21388); _v21388; });
    ({ bool _v21389 = false; this->f_S_3e = _v21389; _v21389; });
    ({ bool _v21390 = true; this->f_S_0_21_d = _v21390; _v21390; });
}
double C_S_9_2c_::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S_9_2c_.S__27_B");
    if (((!this->f_S__3f__21_6) && (((double)(l_param1)) == 8.0))) {
        return 800.0;
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_9_2c_::m_S__40__22_() {
    RT_FN("S_9_2c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6358]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_9_2c___S_3_21_3, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_6_21_T(C_S_9_2c_::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S_9_2c_::g_S__2d_6() {
    RT_FN("S_9_2c_.S__2d_6_get");
    return C_S_8G::sm_S_7d(g::SV.C_S__23__21_5__id);
    return false;
}
double C_S_9_2c_::sm_S__27__21_b() {
    RT_FN("S_9_2c_.S__27__21_b");
    return ((({ bool _t21391 = (g::SV.C_S__23__21__21___S__2d_M > 0.0); _t21391 ? (bool)((((double)(C_PlayFab::sg_season())) == 6.0)) : _t21391; }) && C_S_8G::sm_S_7d(g::SV.C_S__23__21_5__id)) ? g::SV.C_S__23__21__21___S__2d_o : 0.0);
    return 0.0;
}
C_S_9_2c_* C_S_9_2c_::alloc_() {
    C_S_9_2c_* o = rt::make<C_S_9_2c_>();
    return o;
}
rt::Value C_S_9_2c_::mk_(rt::Value* a, int n) {
    C_S_9_2c_* o = alloc_();
    o->C_S_9_2c_::ctor_();
    return rt::VO(o);
}
bool C_S_9_2c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_9_2c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_9_2c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_9_2c_::dmeth(int id) {
    switch (id) {
    case NM_S__27_B: return true;
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_9_2c_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_9_2c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_2c___id)); return true;
    case NM_S_3_21_3: out = rt::V(g::SV.C_S_9_2c___S_3_21_3); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_9_2c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_2c___id = rt::touint(v); return true;
    case NM_S_3_21_3: g::SV.C_S_9_2c___S_3_21_3 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_9_2c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3b__21_k::ctor_() {
    RT_FN("S__3b__21_k.S__3b__21_k");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21392 = 735.0; this->f_S_6_21_Z = rt::touint_d(_v21392); _v21392; });
    ({ rt::Value _v21393 = rt::trv(rt::VS(g::LS[6359])); this->f_S_1i = rt::slot_string(_v21393); _v21393; });
    ({ rt::Value _v21394 = rt::VS(g::LS[6144]); this->f_S__5e__21__23_ = rt::slot_string(_v21394); _v21394; });
    ({ double _v21395 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v21395); _v21395; });
    ({ double _v21396 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v21396); _v21396; });
    ({ bool _v21397 = false; this->f_S_3e = _v21397; _v21397; });
    ({ bool _v21398 = false; this->f_S__40_X = _v21398; _v21398; });
}
rt::Value C_S__3b__21_k::m_S__40__22_() {
    RT_FN("S__3b__21_k.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6360]), C_S__26_c::sm_S_8_21_Z(C_S__3b__21_k::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6212]))));
    return rt::NUL;
}
double C_S__3b__21_k::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__3b__21_k.S__27_B");
    if ((((double)(l_param1)) == 21.0)) {
        return rt::m_floor(rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(88.0)) + 1.0), 0.85));
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__3b__21_k::m_S_6r() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S__3b__21_k.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    ({ bool _v21399 = false; this->f_S__3c__21_7 = _v21399; _v21399; });
    ({ rt::Value _o21400 = g::SV.C_S_8G__S_5_21_V; rt::Value _i21401 = rt::V(13.0); rt::Value _v21402 = rt::V((rt::tonum(rt::idx_get(_o21400, _i21401)) - 1.0)); rt::idx_set(_o21400, _i21401, _v21402); _v21402; });
    ({ rt::Value _o21403 = g::SV.C_S_8G__S_5_21_V; rt::Value _i21404 = rt::V(88.0); rt::Value _v21405 = rt::add(rt::idx_get(_o21403, _i21404), rt::V(1.0)); rt::idx_set(_o21403, _i21404, _v21405); _v21405; });
    (l_A__loc1_ = rt::touint_d(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(88.0))));
    if ((({ bool _t21406 = (((double)(l_A__loc1_)) == 25.0); _t21406 ? _t21406 : (bool)((((double)(l_A__loc1_)) == 50.0)); }) || (((double)(l_A__loc1_)) == 100.0))) {
        (void)(({ rt::Value _o21407 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p21408 = rt::as_ptr<C_S__20_g>(_o21407); _p21408 ? _p21408->m_S__2d__25_(rt::trv(rt::VS(g::LS[6331])), rt::trv(rt::VS(g::LS[6332])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o21407, NM_S__2d__25_, rt::trv(rt::VS(g::LS[6331])), rt::trv(rt::VS(g::LS[6332]))); }));
    }
    return rt::NUL;
}
bool C_S__3b__21_k::g_S__2d_6() {
    RT_FN("S__3b__21_k.S__2d_6_get");
    return ({ bool _t21412 = (((double)(C_PlayFab::sg_season())) == 9.0); _t21412 ? (bool)((({ bool _t21411 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0); _t21411 ? _t21411 : (bool)(({ bool _t21410 = ({ bool _t21409 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0); _t21409 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__25__21_k__id)) : _t21409; }); _t21410 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__3c__21_k__id))) : _t21410; })); }))) : _t21412; });
    return false;
}
double C_S__3b__21_k::sm_S__3f__21__3c_() {
    RT_FN("S__3b__21_k.S__3f__21__3c_");
    return ((((double)(C_PlayFab::sg_season())) == 9.0) ? C_S__26_c::sm_S__20__21__3b_(rt::toint_d(88.0)) : 0.0);
    return 0.0;
}
double C_S__3b__21_k::sm_S__22__21__26_() {
    RT_FN("S__3b__21_k.S__22__21__26_");
    return ((((double)(C_PlayFab::sg_season())) == 9.0) ? C_S__26_c::sm_S__20__21__3b_(rt::toint_d(88.0)) : 0.0);
    return 0.0;
}
C_S__3b__21_k* C_S__3b__21_k::alloc_() {
    C_S__3b__21_k* o = rt::make<C_S__3b__21_k>();
    return o;
}
rt::Value C_S__3b__21_k::mk_(rt::Value* a, int n) {
    C_S__3b__21_k* o = alloc_();
    o->C_S__3b__21_k::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b__21_k::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b__21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b__21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b__21_k::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__3b__21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_k__id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__3b__21_p::ctor_() {
    RT_FN("S__3b__21_p.S__3b__21_p");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21413 = 791.0; this->f_S_6_21_Z = rt::touint_d(_v21413); _v21413; });
    ({ rt::Value _v21414 = rt::trv(rt::VS(g::LS[3973])); this->f_S_1i = rt::slot_string(_v21414); _v21414; });
    ({ rt::Value _v21415 = rt::VS(g::LS[6361]); this->f_S__5e__21__23_ = rt::slot_string(_v21415); _v21415; });
    ({ double _v21416 = 1.0; this->f_S__3e__3d_ = _v21416; _v21416; });
    ({ double _v21417 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21417); _v21417; });
}
rt::Value C_S__3b__21_p::m_S__40__22_() {
    RT_FN("S__3b__21_p.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[6362]), C_S__26_c::sm_S_8_21_Z(C_S__3b__21_p::sm_S__27__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3b__21_p::g_S__2d_6() {
    RT_FN("S__3b__21_p.S__2d_6_get");
    return ({ bool _t21419 = ({ bool _t21418 = C_S_8G::sm_S__3c_P(g::SV.C_S_9_21_p__id); _t21418 ? (bool)((((double)(C_PlayFab::sg_season())) == 10.0)) : _t21418; }); _t21419 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 0.0), rt::V(this->f_S__3e__3d_))) : _t21419; });
    return false;
}
bool C_S__3b__21_p::g_S__26_8() {
    RT_FN("S__3b__21_p.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 10.0);
    return false;
}
double C_S__3b__21_p::sm_S__27__21_b() {
    RT_FN("S__3b__21_p.S__27__21_b");
    return ((((double)(C_PlayFab::sg_season())) == 10.0) ? rt::m_pow(C_S__26_c::sm_S__20__21__3b_(rt::toint_d(102.0)), 1.15) : 0.0);
    return 0.0;
}
C_S__3b__21_p* C_S__3b__21_p::alloc_() {
    C_S__3b__21_p* o = rt::make<C_S__3b__21_p>();
    return o;
}
rt::Value C_S__3b__21_p::mk_(rt::Value* a, int n) {
    C_S__3b__21_p* o = alloc_();
    o->C_S__3b__21_p::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b__21_p::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b__21_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b__21_p::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b__21_p::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3b__21_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_p__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b__21_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_p__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__21_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3b__22_2::ctor_() {
    RT_FN("S__3b__22_2.S__3b__22_2");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21420 = 1023.0; this->f_S_6_21_Z = rt::touint_d(_v21420); _v21420; });
    ({ rt::Value _v21421 = rt::trv(rt::VS(g::LS[1576])); this->f_S_1i = rt::slot_string(_v21421); _v21421; });
    ({ rt::Value _v21422 = rt::VS(g::LS[1393]); this->f_S__5e__21__23_ = rt::slot_string(_v21422); _v21422; });
    ({ double _v21423 = 1.0; this->f_S__3e__3d_ = _v21423; _v21423; });
    ({ double _v21424 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21424); _v21424; });
}
rt::Value C_S__3b__22_2::m_S__40__22_() {
    RT_FN("S__3b__22_2.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6363])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6109]))));
    return rt::NUL;
}
bool C_S__3b__22_2::g_S__2d_6() {
    RT_FN("S__3b__22_2.S__2d_6_get");
    return ({ bool _t21425 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21425 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3e__22_2__id)) : _t21425; });
    return false;
}
bool C_S__3b__22_2::g_S__26_8() {
    RT_FN("S__3b__22_2.S__26_8_get");
    return ({ bool _t21426 = (!(((double)(C_PlayFab::sg_season())) == 0.0)); _t21426 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3e__22_2__id)) : _t21426; });
    return false;
}
C_S__3b__22_2* C_S__3b__22_2::alloc_() {
    C_S__3b__22_2* o = rt::make<C_S__3b__22_2>();
    return o;
}
rt::Value C_S__3b__22_2::mk_(rt::Value* a, int n) {
    C_S__3b__22_2* o = alloc_();
    o->C_S__3b__22_2::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3b__22_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3b__22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3b__22_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3b__22_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22_2__id)); return true;
    default: return false;
    }
}
bool C_S__3b__22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__21__2c_::ctor_() {
    RT_FN("S__3d__21__2c_.S__3d__21__2c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21427 = 483.0; this->f_S_6_21_Z = rt::touint_d(_v21427); _v21427; });
    ({ rt::Value _v21428 = rt::trv(rt::VS(g::LS[6364])); this->f_S_1i = rt::slot_string(_v21428); _v21428; });
    ({ rt::Value _v21429 = rt::VS(g::LS[6365]); this->f_S__5e__21__23_ = rt::slot_string(_v21429); _v21429; });
    ({ bool _v21430 = true; this->f_S__3f_T = _v21430; _v21430; });
    ({ double _v21431 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21431); _v21431; });
}
rt::Value C_S__3d__21__2c_::m_S__40__22_() {
    RT_FN("S__3d__21__2c_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[6366]), C_S__26_c::sm_S_6_21_T(C_S__3d__21__2c_::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S__3d__21__2c_::g_S__2d_6() {
    RT_FN("S__3d__21__2c_.S__2d_6_get");
    return (((double)(C_PlayFab::sg_season())) == 2.0);
    return false;
}
bool C_S__3d__21__2c_::g_S__26_8() {
    RT_FN("S__3d__21__2c_.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 2.0);
    return false;
}
double C_S__3d__21__2c_::sm_S__27__21_b() {
    RT_FN("S__3d__21__2c_.S__27__21_b");
    return ((((double)(C_PlayFab::sg_season())) == 2.0) ? rt::m_pow(rt::m_min2((((0.0 + (0.8 * ((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(110.0)) / 35.0)))) + ((-0.006) * rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(110.0)) / 35.0), 2.0))) + (4e-05 * rt::m_pow((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(110.0)) / 35.0), 3.0))), 100000.0), (C_S_8G::sm_S_7d(g::SV.C_S__3d__21_p__id) ? ((C_S_8G::sm_S_7d(g::SV.C_S__3c__21_p__id) ? (((double)(C_S_8G::sg_S__2c_P())) * 5.0) : (((double)(C_S_8G::sg_S__2c_P())) * 2.5))) : 1.0)) : 0.0);
    return 0.0;
}
C_S__3d__21__2c_* C_S__3d__21__2c_::alloc_() {
    C_S__3d__21__2c_* o = rt::make<C_S__3d__21__2c_>();
    return o;
}
rt::Value C_S__3d__21__2c_::mk_(rt::Value* a, int n) {
    C_S__3d__21__2c_* o = alloc_();
    o->C_S__3d__21__2c_::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21__2c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3d__21__2c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3d__21__2c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3d__21__2c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3d__21__2c_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3d__21__2c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__21__2c___id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__21__2c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__21__2c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__21__2c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3d__21_H::ctor_() {
    RT_FN("S__3d__21_H.S__3d__21_H");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v21432 = 561.0; this->f_S_6_21_Z = rt::touint_d(_v21432); _v21432; });
    ({ rt::Value _v21433 = rt::trv(rt::VS(g::LS[6367])); this->f_S_1i = rt::slot_string(_v21433); _v21433; });
    ({ rt::Value _v21434 = rt::VS(g::LS[6368]); this->f_S__5e__21__23_ = rt::slot_string(_v21434); _v21434; });
    ({ bool _v21435 = true; this->f_S__25__21__3e_ = _v21435; _v21435; });
    ({ bool _v21436 = true; this->f_S__3f_T = _v21436; _v21436; });
    ({ double _v21437 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v21437); _v21437; });
}
rt::Value C_S__3d__21_H::m_S__40__22_() {
    RT_FN("S__3d__21_H.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[419]), C_S__26_c::sm_S_6_21_T(C_S__3d__21_H::sm_S_4_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[6158]))));
    return rt::NUL;
}
bool C_S__3d__21_H::g_S__2d_6() {
    RT_FN("S__3d__21_H.S__2d_6_get");
    return ({ bool _t21438 = (((double)(C_PlayFab::sg_season())) == 4.0); _t21438 ? (bool)(this->f_S__3f__21_6) : _t21438; });
    return false;
}
bool C_S__3d__21_H::g_S__26_8() {
    RT_FN("S__3d__21_H.S__26_8_get");
    return (((double)(C_PlayFab::sg_season())) == 4.0);
    return false;
}
double C_S__3d__21_H::sm_S_4_21__40_() {
    RT_FN("S__3d__21_H.S_4_21__40_");
    return ((((double)(C_PlayFab::sg_season())) == 4.0) ? 100.0 : 0.0);
    return 0.0;
}
C_S__3d__21_H* C_S__3d__21_H::alloc_() {
    C_S__3d__21_H* o = rt::make<C_S__3d__21_H>();
    return o;
}
rt::Value C_S__3d__21_H::mk_(rt::Value* a, int n) {
    C_S__3d__21_H* o = alloc_();
    o->C_S__3d__21_H::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3d__21_H::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3d__21_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3d__21_H::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    case NM_S__26_8: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3d__21_H::smeth_(int id) {
    switch (id) {
    case NM_S_4_21__40_: return true;
    default: return false;
    }
}
bool C_S__3d__21_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__21_H__id)); return true;
    case NM_S_4_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__21_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__21_H__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__21_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_21__40_: out = rt::V(sm_S_4_21__40_()); return true;
    default: return false;
    }
}
void C_S__3d__21_Q::ctor_() {
    RT_FN("S__3d__21_Q.S__3d__21_Q");
    (void)((this->C_S__25__21__3d_::ctor_(), rt::NUL));
    ({ rt::Value _v21439 = rt::trv(rt::VS(g::LS[6369])); this->f_S_1i = rt::slot_string(_v21439); _v21439; });
    ({ rt::Value _v21440 = rt::VS(g::LS[6370]); this->f_S__5e__21__23_ = rt::slot_string(_v21440); _v21440; });
}
rt::Value C_S__3d__21_Q::m_S__40__22_() {
    RT_FN("S__3d__21_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5359]), rt::dcallv(rt::V(0.5), rt::N_toFixed, rt::V(1.0)), rt::dcallv(rt::V(C_S__2d__21_Z::sm_S_2_21_W()), rt::N_toFixed, rt::V(1.0))), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5360]))));
    return rt::NUL;
}
double C_S__3d__21_Q::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__3d__21_Q.S__27_B");
    if ((((double)(l_param1)) == 2.0)) {
        return (((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(115.0)) + 1.0)) * 100.0);
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__3d__21_Q::m_S_6r() {
    double l_A__loc2_ = NAN;
    RT_FN("S__3d__21_Q.S_6r");
    if ((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(115.0)) >= 500.0)) {
        return rt::NUL;
    }
    (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 115.0), rt::V(1.0))));
    ({ rt::Value _v21441 = rt::V(l_A__loc2_); rt::idx_set(g::SV.C_S_8G__S_5_21_V, rt::V(115.0), _v21441); });
    (void)(this->C_S__25__21__3d_::m_S_6r());
    return rt::NUL;
}
bool C_S__3d__21_Q::g_S_9_21__25_() {
    RT_FN("S__3d__21_Q.S_9_21__25__get");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(115.0)) < 500.0);
    return false;
}
C_S__3d__21_Q* C_S__3d__21_Q::alloc_() {
    C_S__3d__21_Q* o = rt::make<C_S__3d__21_Q>();
    return o;
}
rt::Value C_S__3d__21_Q::mk_(rt::Value* a, int n) {
    C_S__3d__21_Q* o = alloc_();
    o->C_S__3d__21_Q::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__25__21__3d_::dget(id, out);
}
bool C_S__3d__21_Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__25__21__3d_::dset(id, v);
}
bool C_S__3d__21_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__25__21__3d_::dcall(id, a, n, out);
}
bool C_S__3d__21_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__27_B: return true;
    case NM_S_6r: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__25__21__3d_::dmeth(id);
}
bool C_S__3d__21_Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__21_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__21_Q__id)); return true;
    default: return false;
    }
}
bool C_S__3d__21_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__21_Q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__21_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void static_init_12(std::vector<std::string>& errs) {
    try { (g::SV.C_S__27__22_E__S_1_21_S = 100.0); } catch (...) { errs.push_back(std::string("S__27__22_E.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__2b__21_k__S_1_21_S = 1000.0); } catch (...) { errs.push_back(std::string("S__2b__21_k.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__2b__5e___S_1_21_S = 25.0); } catch (...) { errs.push_back(std::string("S__2b__5e_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_Z__S__60_5 = 25.0); } catch (...) { errs.push_back(std::string("S__2d__21_Z.S__60_5: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_Z__S_5_21__5d_ = 0.5); } catch (...) { errs.push_back(std::string("S__2d__21_Z.S_5_21__5d_: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_Z__S__26__21_U = 1.0); } catch (...) { errs.push_back(std::string("S__2d__21_Z.S__26__21_U: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_Z__S__5d_l = 1.5); } catch (...) { errs.push_back(std::string("S__2d__21_Z.S__5d_l: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_Z__S__60_t = 0.5); } catch (...) { errs.push_back(std::string("S__2d__21_Z.S__60_t: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__22_E__S_1_21_S = 10.0); } catch (...) { errs.push_back(std::string("S__2d__22_E.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_21_j__S_1_21_S = 1.0); } catch (...) { errs.push_back(std::string("S_0_21_j.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_21_j__S__3b_n = 10.0); } catch (...) { errs.push_back(std::string("S_0_21_j.S__3b_n: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_22_K__S_1_21_S = 10.0); } catch (...) { errs.push_back(std::string("S_1_22_K.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_22__26___S_1_21_S = 100.0); } catch (...) { errs.push_back(std::string("S_2_22__26_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_22_4__S_0_22__2b_ = 0.01); } catch (...) { errs.push_back(std::string("S_9_22_4.S_0_22__2b_: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_2c___S_3_21_3 = 10.0); } catch (...) { errs.push_back(std::string("S_9_2c_.S_3_21_3: ") + rt::exc_text()); }
}
}  // namespace g
