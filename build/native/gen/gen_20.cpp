// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S_4K::ctor_() {
    RT_FN("S_4K.S_4K");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32606 = 165.0; this->f_S_6_21_Z = rt::touint_d(_v32606); _v32606; });
    ({ rt::Value _v32607 = rt::trv(rt::VS(g::LS[5821])); this->f_S_1i = rt::slot_string(_v32607); _v32607; });
    ({ rt::Value _v32608 = rt::VS(g::LS[7696]); this->f_S__5e__21__23_ = rt::slot_string(_v32608); _v32608; });
    ({ double _v32609 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32609); _v32609; });
}
rt::Value C_S_4K::m_S__40__22_() {
    RT_FN("S_4K.S__40__22_");
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[5822]), rt::VS(g::LS[5823]), rt::V(21000.0), C_S__26_c::sm_S_8_21_Z(21000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_4K::m_S__21__21_G() {
    RT_FN("S_4K.S__21__21_G");
    if ((({ bool _t32610 = (!this->f_S_4_21_K); _t32610 ? (bool)((((double)(C_PlayFab::sg_season())) == 2.0)) : _t32610; }) && (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(110.0)) >= 21000.0))) {
        (void)(({ rt::Value _o32611 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32612 = rt::as_ptr<C_S_8G>(_o32611); _p32612 ? _p32612->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32611, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_4K* C_S_4K::alloc_() {
    C_S_4K* o = rt::make<C_S_4K>();
    return o;
}
rt::Value C_S_4K::mk_(rt::Value* a, int n) {
    C_S_4K* o = alloc_();
    o->C_S_4K::ctor_();
    return rt::VO(o);
}
bool C_S_4K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_4K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_4K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_4K::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_4K::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4K__id)); return true;
    case NM_S__26__5b_: out = rt::V(g::SV.C_S_4K__S__26__5b_); return true;
    default: return false;
    }
}
bool C_S_4K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4K__id = rt::touint(v); return true;
    case NM_S__26__5b_: g::SV.C_S_4K__S__26__5b_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_4K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4f::ctor_() {
    RT_FN("S_4f.S_4f");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32613 = 223.0; this->f_S_6_21_Z = rt::touint_d(_v32613); _v32613; });
    ({ rt::Value _v32614 = rt::trv(rt::VS(g::LS[9389])); this->f_S_1i = rt::slot_string(_v32614); _v32614; });
    ({ rt::Value _v32615 = rt::trv(rt::VS(g::LS[9390])); this->f_S_7_23_ = rt::slot_string(_v32615); _v32615; });
    ({ rt::Value _v32616 = rt::VS(g::LS[9391]); this->f_S__5e__21__23_ = rt::slot_string(_v32616); _v32616; });
    ({ double _v32617 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32617); _v32617; });
}
C_S_4f* C_S_4f::alloc_() {
    C_S_4f* o = rt::make<C_S_4f>();
    return o;
}
rt::Value C_S_4f::mk_(rt::Value* a, int n) {
    C_S_4f* o = alloc_();
    o->C_S_4f::ctor_();
    return rt::VO(o);
}
bool C_S_4f::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_4f::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_4f::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_4f::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_4f::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4f::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4f__id)); return true;
    default: return false;
    }
}
bool C_S_4f::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4f__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4f::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_21_j::ctor_() {
    RT_FN("S_5_21_j.S_5_21_j");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32618 = 244.0; this->f_S_6_21_Z = rt::touint_d(_v32618); _v32618; });
    ({ rt::Value _v32619 = rt::trv(rt::VS(g::LS[9392])); this->f_S_1i = rt::slot_string(_v32619); _v32619; });
    ({ rt::Value _v32620 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9393])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))); this->f_S_7_23_ = rt::slot_string(_v32620); _v32620; });
    ({ rt::Value _v32621 = rt::VS(g::LS[9394]); this->f_S__5e__21__23_ = rt::slot_string(_v32621); _v32621; });
    ({ double _v32622 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32622); _v32622; });
}
C_S_5_21_j* C_S_5_21_j::alloc_() {
    C_S_5_21_j* o = rt::make<C_S_5_21_j>();
    return o;
}
rt::Value C_S_5_21_j::mk_(rt::Value* a, int n) {
    C_S_5_21_j* o = alloc_();
    o->C_S_5_21_j::ctor_();
    return rt::VO(o);
}
bool C_S_5_21_j::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_5_21_j::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_5_21_j::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_5_21_j::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_5_21_j::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_21_j::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_21_j__id)); return true;
    default: return false;
    }
}
bool C_S_5_21_j::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_21_j__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_21_j::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_22_H::ctor_() {
    RT_FN("S_5_22_H.S_5_22_H");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32623 = 383.0; this->f_S_6_21_Z = rt::touint_d(_v32623); _v32623; });
    ({ rt::Value _v32624 = rt::trv(rt::VS(g::LS[6293])); this->f_S_1i = rt::slot_string(_v32624); _v32624; });
    ({ rt::Value _v32625 = rt::VS(g::LS[6294]); this->f_S__5e__21__23_ = rt::slot_string(_v32625); _v32625; });
    ({ double _v32626 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32626); _v32626; });
}
rt::Value C_S_5_22_H::m_S__40__22_() {
    RT_FN("S_5_22_H.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9395]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(50.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
C_S_5_22_H* C_S_5_22_H::alloc_() {
    C_S_5_22_H* o = rt::make<C_S_5_22_H>();
    return o;
}
rt::Value C_S_5_22_H::mk_(rt::Value* a, int n) {
    C_S_5_22_H* o = alloc_();
    o->C_S_5_22_H::ctor_();
    return rt::VO(o);
}
bool C_S_5_22_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_5_22_H::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_5_22_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_5_22_H::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_5_22_H::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_22_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22_H__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_5_22_H__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S_5_22_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22_H__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_5_22_H__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_5_22_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_22_L::ctor_() {
    RT_FN("S_5_22_L.S_5_22_L");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32627 = 398.0; this->f_S_6_21_Z = rt::touint_d(_v32627); _v32627; });
    ({ rt::Value _v32628 = rt::trv(rt::VS(g::LS[6298])); this->f_S_1i = rt::slot_string(_v32628); _v32628; });
    ({ rt::Value _v32629 = rt::VS(g::LS[6299]); this->f_S__5e__21__23_ = rt::slot_string(_v32629); _v32629; });
    ({ double _v32630 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32630); _v32630; });
}
rt::Value C_S_5_22_L::m_S__40__22_() {
    RT_FN("S_5_22_L.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9396]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_5_22_L* C_S_5_22_L::alloc_() {
    C_S_5_22_L* o = rt::make<C_S_5_22_L>();
    return o;
}
rt::Value C_S_5_22_L::mk_(rt::Value* a, int n) {
    C_S_5_22_L* o = alloc_();
    o->C_S_5_22_L::ctor_();
    return rt::VO(o);
}
bool C_S_5_22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_5_22_L::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_5_22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_5_22_L::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_5_22_L::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22_L__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_5_22_L__S__5e__21_s); return true;
    case NM_S_6_22_L: out = rt::V(g::SV.C_S_5_22_L__S_6_22_L); return true;
    default: return false;
    }
}
bool C_S_5_22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22_L__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_5_22_L__S__5e__21_s = rt::tonum(v); return true;
    case NM_S_6_22_L: g::SV.C_S_5_22_L__S_6_22_L = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_5_22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_22_M::ctor_() {
    RT_FN("S_5_22_M.S_5_22_M");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32631 = 401.0; this->f_S_6_21_Z = rt::touint_d(_v32631); _v32631; });
    ({ rt::Value _v32632 = rt::trv(rt::VS(g::LS[6301])); this->f_S_1i = rt::slot_string(_v32632); _v32632; });
    ({ rt::Value _v32633 = rt::VS(g::LS[6302]); this->f_S__5e__21__23_ = rt::slot_string(_v32633); _v32633; });
    ({ double _v32634 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32634); _v32634; });
}
rt::Value C_S_5_22_M::m_S__40__22_() {
    RT_FN("S_5_22_M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9397]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(100000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_5_22_M* C_S_5_22_M::alloc_() {
    C_S_5_22_M* o = rt::make<C_S_5_22_M>();
    return o;
}
rt::Value C_S_5_22_M::mk_(rt::Value* a, int n) {
    C_S_5_22_M* o = alloc_();
    o->C_S_5_22_M::ctor_();
    return rt::VO(o);
}
bool C_S_5_22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_5_22_M::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_5_22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_5_22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_5_22_M::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22_M__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_5_22_M__S__5e__21_s); return true;
    case NM_S__3c__21_Y: out = rt::V(g::SV.C_S_5_22_M__S__3c__21_Y); return true;
    default: return false;
    }
}
bool C_S_5_22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22_M__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_5_22_M__S__5e__21_s = rt::tonum(v); return true;
    case NM_S__3c__21_Y: g::SV.C_S_5_22_M__S__3c__21_Y = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_5_22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_22_Q::ctor_() {
    RT_FN("S_5_22_Q.S_5_22_Q");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32635 = 422.0; this->f_S_6_21_Z = rt::touint_d(_v32635); _v32635; });
    ({ rt::Value _v32636 = rt::trv(rt::VS(g::LS[6323])); this->f_S_1i = rt::slot_string(_v32636); _v32636; });
    ({ rt::Value _v32637 = rt::VS(g::LS[6324]); this->f_S__5e__21__23_ = rt::slot_string(_v32637); _v32637; });
    ({ double _v32638 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32638); _v32638; });
}
rt::Value C_S_5_22_Q::m_S__40__22_() {
    RT_FN("S_5_22_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9398]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(9.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_5_22_Q* C_S_5_22_Q::alloc_() {
    C_S_5_22_Q* o = rt::make<C_S_5_22_Q>();
    return o;
}
rt::Value C_S_5_22_Q::mk_(rt::Value* a, int n) {
    C_S_5_22_Q* o = alloc_();
    o->C_S_5_22_Q::ctor_();
    return rt::VO(o);
}
bool C_S_5_22_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_5_22_Q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_5_22_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_5_22_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_5_22_Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_22_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22_Q__id)); return true;
    case NM_S_7_22_Q: out = rt::V(g::SV.C_S_5_22_Q__S_7_22_Q); return true;
    case NM_S_8_22_Q: out = rt::V(g::SV.C_S_5_22_Q__S_8_22_Q); return true;
    default: return false;
    }
}
bool C_S_5_22_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22_Q__id = rt::touint(v); return true;
    case NM_S_7_22_Q: g::SV.C_S_5_22_Q__S_7_22_Q = rt::tonum(v); return true;
    case NM_S_8_22_Q: g::SV.C_S_5_22_Q__S_8_22_Q = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_5_22_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_50::ctor_() {
    RT_FN("S_50.S_50");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32639 = 115.0; this->f_S_6_21_Z = rt::touint_d(_v32639); _v32639; });
    ({ rt::Value _v32640 = rt::trv(rt::VS(g::LS[3964])); this->f_S_1i = rt::slot_string(_v32640); _v32640; });
    ({ rt::Value _v32641 = rt::trv(rt::VS(g::LS[9399])); this->f_S_7_23_ = rt::slot_string(_v32641); _v32641; });
    ({ rt::Value _v32642 = rt::VS(g::LS[6230]); this->f_S__5e__21__23_ = rt::slot_string(_v32642); _v32642; });
    ({ double _v32643 = 1.0; this->f_S__27__21_H = rt::touint_d(_v32643); _v32643; });
}
rt::Value C_S_50::m_S__21__21_G() {
    RT_FN("S_50.S__21__21_G");
    if (((!this->f_S_4_21_K) && ((((double)(C_PlayFab::sg_season())) == 1.0) || (((double)(C_PlayFab::sg_season())) == 10.0)))) {
        (void)(({ rt::Value _o32644 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32645 = rt::as_ptr<C_S_8G>(_o32644); _p32645 ? _p32645->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32644, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_50* C_S_50::alloc_() {
    C_S_50* o = rt::make<C_S_50>();
    return o;
}
rt::Value C_S_50::mk_(rt::Value* a, int n) {
    C_S_50* o = alloc_();
    o->C_S_50::ctor_();
    return rt::VO(o);
}
bool C_S_50::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_50::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_50::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_50::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_50::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_50::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_50__id)); return true;
    default: return false;
    }
}
bool C_S_50::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_50__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_50::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_22_2::ctor_() {
    RT_FN("S_6_22_2.S_6_22_2");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32646 = 334.0; this->f_S_6_21_Z = rt::touint_d(_v32646); _v32646; });
    ({ rt::Value _v32647 = rt::trv(rt::VS(g::LS[9400])); this->f_S_1i = rt::slot_string(_v32647); _v32647; });
    ({ rt::Value _v32648 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9401]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))); this->f_S_7_23_ = rt::slot_string(_v32648); _v32648; });
    ({ rt::Value _v32649 = rt::VS(g::LS[9402]); this->f_S__5e__21__23_ = rt::slot_string(_v32649); _v32649; });
    ({ double _v32650 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32650); _v32650; });
}
C_S_6_22_2* C_S_6_22_2::alloc_() {
    C_S_6_22_2* o = rt::make<C_S_6_22_2>();
    return o;
}
rt::Value C_S_6_22_2::mk_(rt::Value* a, int n) {
    C_S_6_22_2* o = alloc_();
    o->C_S_6_22_2::ctor_();
    return rt::VO(o);
}
bool C_S_6_22_2::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_6_22_2::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_6_22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_6_22_2::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_6_22_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22_2__id)); return true;
    default: return false;
    }
}
bool C_S_6_22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_22_M::ctor_() {
    RT_FN("S_6_22_M.S_6_22_M");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32651 = 402.0; this->f_S_6_21_Z = rt::touint_d(_v32651); _v32651; });
    ({ rt::Value _v32652 = rt::trv(rt::VS(g::LS[6334])); this->f_S_1i = rt::slot_string(_v32652); _v32652; });
    ({ rt::Value _v32653 = rt::VS(g::LS[6335]); this->f_S__5e__21__23_ = rt::slot_string(_v32653); _v32653; });
    ({ double _v32654 = 3.0; this->f_S__27__21_H = rt::touint_d(_v32654); _v32654; });
}
rt::Value C_S_6_22_M::m_S__40__22_() {
    RT_FN("S_6_22_M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9403]), C_S__26_c::sm_S_8_21_Z(C_S_6_22_M::sm_S__2d__22__2d_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
double C_S_6_22_M::sm_S__2d__22__2d_() {
    RT_FN("S_6_22_M.S__2d__22__2d_");
    return (((((double)(C_S_8G::sg_S__2c_P())) < 1.0) || (((double)(C_S_8G::sg_S__2c_P())) > 3.0)) ? 4000.0 : (25000.0 * ((double)(C_S_8G::sg_S__2c_P()))));
    return 0.0;
}
C_S_6_22_M* C_S_6_22_M::alloc_() {
    C_S_6_22_M* o = rt::make<C_S_6_22_M>();
    return o;
}
rt::Value C_S_6_22_M::mk_(rt::Value* a, int n) {
    C_S_6_22_M* o = alloc_();
    o->C_S_6_22_M::ctor_();
    return rt::VO(o);
}
bool C_S_6_22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_6_22_M::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_6_22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_6_22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_6_22_M::smeth_(int id) {
    switch (id) {
    case NM_S__2d__22__2d_: return true;
    default: return false;
    }
}
bool C_S_6_22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22_M__id)); return true;
    case NM_S__2d__22__2d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_6_22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d__22__2d_: out = rt::V(sm_S__2d__22__2d_()); return true;
    default: return false;
    }
}
void C_S_6_5f_::ctor_() {
    RT_FN("S_6_5f_.S_6_5f_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32655 = 164.0; this->f_S_6_21_Z = rt::touint_d(_v32655); _v32655; });
    ({ rt::Value _v32656 = rt::trv(rt::VS(g::LS[9404])); this->f_S_1i = rt::slot_string(_v32656); _v32656; });
    ({ rt::Value _v32657 = rt::trv(rt::VS(g::LS[9405])); this->f_S_7_23_ = rt::slot_string(_v32657); _v32657; });
    ({ rt::Value _v32658 = rt::VS(g::LS[9406]); this->f_S__5e__21__23_ = rt::slot_string(_v32658); _v32658; });
    ({ double _v32659 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32659); _v32659; });
}
rt::Value C_S_6_5f_::m_S__21__21_G() {
    RT_FN("S_6_5f_.S__21__21_G");
    if ((({ bool _t32661 = ({ bool _t32660 = (!this->f_S_4_21_K); _t32660 ? (bool)((((double)(C_PlayFab::sg_season())) == 2.0)) : _t32660; }); _t32661 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 1.0)) : _t32661; }) && (C_S__26_c::sm_S__21__2d_(false, true) >= 50.0))) {
        (void)(({ rt::Value _o32662 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32663 = rt::as_ptr<C_S_8G>(_o32662); _p32663 ? _p32663->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32662, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_6_5f_* C_S_6_5f_::alloc_() {
    C_S_6_5f_* o = rt::make<C_S_6_5f_>();
    return o;
}
rt::Value C_S_6_5f_::mk_(rt::Value* a, int n) {
    C_S_6_5f_* o = alloc_();
    o->C_S_6_5f_::ctor_();
    return rt::VO(o);
}
bool C_S_6_5f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_6_5f_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_6_5f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_6_5f_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_6_5f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_5f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_5f___id)); return true;
    default: return false;
    }
}
bool C_S_6_5f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_5f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_5f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6p::ctor_() {
    RT_FN("S_6p.S_6p");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32664 = 191.0; this->f_S_6_21_Z = rt::touint_d(_v32664); _v32664; });
    ({ rt::Value _v32665 = rt::trv(rt::VS(g::LS[9407])); this->f_S_1i = rt::slot_string(_v32665); _v32665; });
    ({ rt::Value _v32666 = rt::VS(g::LS[7705]); this->f_S__5e__21__23_ = rt::slot_string(_v32666); _v32666; });
    ({ double _v32667 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32667); _v32667; });
}
rt::Value C_S_6p::m_S__40__22_() {
    RT_FN("S_6p.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::tr_nv(rt::VS(g::LS[9408]), rt::VS(g::LS[9409]), rt::V(7000.0), C_S__26_c::sm_S_8_21_Z(7000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S_6p::m_S__21__21_G() {
    RT_FN("S_6p.S__21__21_G");
    if ((({ bool _t32668 = (!this->f_S_4_21_K); _t32668 ? (bool)((((double)(C_PlayFab::sg_season())) == 4.0)) : _t32668; }) && (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(123.0)) >= 7000.0))) {
        (void)(({ rt::Value _o32669 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32670 = rt::as_ptr<C_S_8G>(_o32669); _p32670 ? _p32670->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32669, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_6p* C_S_6p::alloc_() {
    C_S_6p* o = rt::make<C_S_6p>();
    return o;
}
rt::Value C_S_6p::mk_(rt::Value* a, int n) {
    C_S_6p* o = alloc_();
    o->C_S_6p::ctor_();
    return rt::VO(o);
}
bool C_S_6p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_6p::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_6p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_6p::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_6p::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6p__id)); return true;
    case NM_S_8o: out = rt::V(g::SV.C_S_6p__S_8o); return true;
    default: return false;
    }
}
bool C_S_6p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6p__id = rt::touint(v); return true;
    case NM_S_8o: g::SV.C_S_6p__S_8o = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_6p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_22_N::ctor_() {
    RT_FN("S_7_22_N.S_7_22_N");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32671 = 413.0; this->f_S_6_21_Z = rt::touint_d(_v32671); _v32671; });
    ({ rt::Value _v32672 = rt::trv(rt::VS(g::LS[6354])); this->f_S_1i = rt::slot_string(_v32672); _v32672; });
    ({ rt::Value _v32673 = rt::VS(g::LS[6355]); this->f_S__5e__21__23_ = rt::slot_string(_v32673); _v32673; });
    ({ double _v32674 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32674); _v32674; });
}
rt::Value C_S_7_22_N::m_S__40__22_() {
    RT_FN("S_7_22_N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9410]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_7_22_N* C_S_7_22_N::alloc_() {
    C_S_7_22_N* o = rt::make<C_S_7_22_N>();
    return o;
}
rt::Value C_S_7_22_N::mk_(rt::Value* a, int n) {
    C_S_7_22_N* o = alloc_();
    o->C_S_7_22_N::ctor_();
    return rt::VO(o);
}
bool C_S_7_22_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_7_22_N::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_7_22_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_7_22_N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_7_22_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22_N__id)); return true;
    case NM_S_6_22_N: out = rt::V(g::SV.C_S_7_22_N__S_6_22_N); return true;
    case NM_S_8_22_N: out = rt::V(g::SV.C_S_7_22_N__S_8_22_N); return true;
    default: return false;
    }
}
bool C_S_7_22_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22_N__id = rt::touint(v); return true;
    case NM_S_6_22_N: g::SV.C_S_7_22_N__S_6_22_N = rt::tonum(v); return true;
    case NM_S_8_22_N: g::SV.C_S_7_22_N__S_8_22_N = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_7_22_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_22_O::ctor_() {
    RT_FN("S_7_22_O.S_7_22_O");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32675 = 415.0; this->f_S_6_21_Z = rt::touint_d(_v32675); _v32675; });
    ({ rt::Value _v32676 = rt::trv(rt::VS(g::LS[6321])); this->f_S_1i = rt::slot_string(_v32676); _v32676; });
    ({ rt::Value _v32677 = rt::VS(g::LS[6322]); this->f_S__5e__21__23_ = rt::slot_string(_v32677); _v32677; });
    ({ double _v32678 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32678); _v32678; });
}
rt::Value C_S_7_22_O::m_S__40__22_() {
    RT_FN("S_7_22_O.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9411]), C_S__26_c::sm_S_8_21_Z(5.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_7_22_O* C_S_7_22_O::alloc_() {
    C_S_7_22_O* o = rt::make<C_S_7_22_O>();
    return o;
}
rt::Value C_S_7_22_O::mk_(rt::Value* a, int n) {
    C_S_7_22_O* o = alloc_();
    o->C_S_7_22_O::ctor_();
    return rt::VO(o);
}
bool C_S_7_22_O::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_7_22_O::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_7_22_O::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_7_22_O::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_7_22_O::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22_O::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22_O__id)); return true;
    case NM_S_6_22_O: out = rt::V(g::SV.C_S_7_22_O__S_6_22_O); return true;
    default: return false;
    }
}
bool C_S_7_22_O::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22_O__id = rt::touint(v); return true;
    case NM_S_6_22_O: g::SV.C_S_7_22_O__S_6_22_O = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_7_22_O::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_21_q::ctor_() {
    RT_FN("S_8_21_q.S_8_21_q");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32679 = 272.0; this->f_S_6_21_Z = rt::touint_d(_v32679); _v32679; });
    ({ rt::Value _v32680 = rt::trv(rt::VS(g::LS[9412])); this->f_S_1i = rt::slot_string(_v32680); _v32680; });
    ({ rt::Value _v32681 = rt::VS(g::LS[9413]); this->f_S__5e__21__23_ = rt::slot_string(_v32681); _v32681; });
    ({ double _v32682 = 3.0; this->f_S__27__21_H = rt::touint_d(_v32682); _v32682; });
}
rt::Value C_S_8_21_q::m_S__40__22_() {
    RT_FN("S_8_21_q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9414]), C_S__26_c::sm_S_8_21_Z(50.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9415]))));
    return rt::NUL;
}
rt::Value C_S_8_21_q::m_S__21__21_G() {
    RT_FN("S_8_21_q.S__21__21_G");
    if ((({ bool _t32683 = (!this->f_S_4_21_K); _t32683 ? (bool)((((double)(C_PlayFab::sg_season())) == 3.0)) : _t32683; }) && (C_S__2d__21_Z::sm_S_5_21_B() >= 50.0))) {
        (void)(({ rt::Value _o32684 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32685 = rt::as_ptr<C_S_8G>(_o32684); _p32685 ? _p32685->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32684, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_8_21_q* C_S_8_21_q::alloc_() {
    C_S_8_21_q* o = rt::make<C_S_8_21_q>();
    return o;
}
rt::Value C_S_8_21_q::mk_(rt::Value* a, int n) {
    C_S_8_21_q* o = alloc_();
    o->C_S_8_21_q::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_8_21_q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_8_21_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_8_21_q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_8_21_q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21_q__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_8_21_q__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S_8_21_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21_q__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_8_21_q__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_8_21_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_22_J::ctor_() {
    RT_FN("S_8_22_J.S_8_22_J");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32686 = 391.0; this->f_S_6_21_Z = rt::touint_d(_v32686); _v32686; });
    ({ rt::Value _v32687 = rt::trv(rt::VS(g::LS[9416])); this->f_S_1i = rt::slot_string(_v32687); _v32687; });
    ({ rt::Value _v32688 = rt::VS(g::LS[9417]); this->f_S__5e__21__23_ = rt::slot_string(_v32688); _v32688; });
    ({ double _v32689 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32689); _v32689; });
}
rt::Value C_S_8_22_J::m_S__40__22_() {
    RT_FN("S_8_22_J.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9418]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9287]))));
    return rt::NUL;
}
C_S_8_22_J* C_S_8_22_J::alloc_() {
    C_S_8_22_J* o = rt::make<C_S_8_22_J>();
    return o;
}
rt::Value C_S_8_22_J::mk_(rt::Value* a, int n) {
    C_S_8_22_J* o = alloc_();
    o->C_S_8_22_J::ctor_();
    return rt::VO(o);
}
bool C_S_8_22_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_8_22_J::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_8_22_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_8_22_J::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_8_22_J::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_22_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22_J__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_8_22_J__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S_8_22_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22_J__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_8_22_J__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_8_22_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_21__2c_::ctor_() {
    RT_FN("S_9_21__2c_.S_9_21__2c_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32690 = 207.0; this->f_S_6_21_Z = rt::touint_d(_v32690); _v32690; });
    ({ rt::Value _v32691 = rt::trv(rt::VS(g::LS[9419])); this->f_S_1i = rt::slot_string(_v32691); _v32691; });
    ({ rt::Value _v32692 = rt::VS(g::LS[6140]); this->f_S__5e__21__23_ = rt::slot_string(_v32692); _v32692; });
    ({ double _v32693 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32693); _v32693; });
}
rt::Value C_S_9_21__2c_::m_S__40__22_() {
    RT_FN("S_9_21__2c_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9420])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S_9_21__2c_::m_S__21__21_G() {
    RT_FN("S_9_21__2c_.S__21__21_G");
    if ((({ bool _t32697 = ({ bool _t32696 = ({ bool _t32695 = ({ bool _t32694 = (!this->f_S_4_21_K); _t32694 ? (bool)((((double)(C_PlayFab::sg_season())) == 6.0)) : _t32694; }); _t32695 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__23_P__id)) : _t32695; }); _t32696 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3e_x__id)) : _t32696; }); _t32697 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__3c__2b___id)) : _t32697; }) && C_S_8G::sm_S_7d(g::SV.C_S_5_21_a__id))) {
        (void)(({ rt::Value _o32698 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32699 = rt::as_ptr<C_S_8G>(_o32698); _p32699 ? _p32699->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32698, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_9_21__2c_* C_S_9_21__2c_::alloc_() {
    C_S_9_21__2c_* o = rt::make<C_S_9_21__2c_>();
    return o;
}
rt::Value C_S_9_21__2c_::mk_(rt::Value* a, int n) {
    C_S_9_21__2c_* o = alloc_();
    o->C_S_9_21__2c_::ctor_();
    return rt::VO(o);
}
bool C_S_9_21__2c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_9_21__2c_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_9_21__2c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_9_21__2c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_9_21__2c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21__2c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21__2c___id)); return true;
    default: return false;
    }
}
bool C_S_9_21__2c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21__2c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_21__2c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_21_p::ctor_() {
    RT_FN("S_9_21_p.S_9_21_p");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32700 = 271.0; this->f_S_6_21_Z = rt::touint_d(_v32700); _v32700; });
    ({ rt::Value _v32701 = rt::trv(rt::VS(g::LS[3973])); this->f_S_1i = rt::slot_string(_v32701); _v32701; });
    ({ rt::Value _v32702 = rt::trv(rt::VS(g::LS[9421])); this->f_S_7_23_ = rt::slot_string(_v32702); _v32702; });
    ({ rt::Value _v32703 = rt::VS(g::LS[6361]); this->f_S__5e__21__23_ = rt::slot_string(_v32703); _v32703; });
    ({ double _v32704 = 10.0; this->f_S__27__21_H = rt::touint_d(_v32704); _v32704; });
}
rt::Value C_S_9_21_p::m_S__21__21_G() {
    RT_FN("S_9_21_p.S__21__21_G");
    if (((!this->f_S_4_21_K) && (((double)(C_PlayFab::sg_season())) == 10.0))) {
        (void)(({ rt::Value _o32705 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32706 = rt::as_ptr<C_S_8G>(_o32705); _p32706 ? _p32706->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32705, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_9_21_p* C_S_9_21_p::alloc_() {
    C_S_9_21_p* o = rt::make<C_S_9_21_p>();
    return o;
}
rt::Value C_S_9_21_p::mk_(rt::Value* a, int n) {
    C_S_9_21_p* o = alloc_();
    o->C_S_9_21_p::ctor_();
    return rt::VO(o);
}
bool C_S_9_21_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_9_21_p::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_9_21_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_9_21_p::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_9_21_p::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21_p__id)); return true;
    default: return false;
    }
}
bool C_S_9_21_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21_p__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_21_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_22__3d_::ctor_() {
    RT_FN("S_9_22__3d_.S_9_22__3d_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32707 = 374.0; this->f_S_6_21_Z = rt::touint_d(_v32707); _v32707; });
    ({ rt::Value _v32708 = rt::trv(rt::VS(g::LS[9422])); this->f_S_1i = rt::slot_string(_v32708); _v32708; });
    ({ rt::Value _v32709 = rt::VS(g::LS[9423]); this->f_S__5e__21__23_ = rt::slot_string(_v32709); _v32709; });
    ({ double _v32710 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32710); _v32710; });
}
rt::Value C_S_9_22__3d_::m_S__40__22_() {
    RT_FN("S_9_22__3d_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9424]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9324]))));
    return rt::NUL;
}
C_S_9_22__3d_* C_S_9_22__3d_::alloc_() {
    C_S_9_22__3d_* o = rt::make<C_S_9_22__3d_>();
    return o;
}
rt::Value C_S_9_22__3d_::mk_(rt::Value* a, int n) {
    C_S_9_22__3d_* o = alloc_();
    o->C_S_9_22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S_9_22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_9_22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_9_22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_9_22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_9_22__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22__3d___id)); return true;
    default: return false;
    }
}
bool C_S_9_22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_22_L::ctor_() {
    RT_FN("S_9_22_L.S_9_22_L");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32711 = 399.0; this->f_S_6_21_Z = rt::touint_d(_v32711); _v32711; });
    ({ rt::Value _v32712 = rt::trv(rt::VS(g::LS[6346])); this->f_S_1i = rt::slot_string(_v32712); _v32712; });
    ({ rt::Value _v32713 = rt::VS(g::LS[6347]); this->f_S__5e__21__23_ = rt::slot_string(_v32713); _v32713; });
    ({ double _v32714 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32714); _v32714; });
}
rt::Value C_S_9_22_L::m_S__40__22_() {
    RT_FN("S_9_22_L.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9425]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(30.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_9_22_L* C_S_9_22_L::alloc_() {
    C_S_9_22_L* o = rt::make<C_S_9_22_L>();
    return o;
}
rt::Value C_S_9_22_L::mk_(rt::Value* a, int n) {
    C_S_9_22_L* o = alloc_();
    o->C_S_9_22_L::ctor_();
    return rt::VO(o);
}
bool C_S_9_22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_9_22_L::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_9_22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_9_22_L::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_9_22_L::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22_L__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_9_22_L__S__5e__21_s); return true;
    case NM_S__27__22__26_: out = rt::V(g::SV.C_S_9_22_L__S__27__22__26_); return true;
    default: return false;
    }
}
bool C_S_9_22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22_L__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_9_22_L__S__5e__21_s = rt::tonum(v); return true;
    case NM_S__27__22__26_: g::SV.C_S_9_22_L__S__27__22__26_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_9_22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_22_Q::ctor_() {
    RT_FN("S_9_22_Q.S_9_22_Q");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32715 = 423.0; this->f_S_6_21_Z = rt::touint_d(_v32715); _v32715; });
    ({ rt::Value _v32716 = rt::trv(rt::VS(g::LS[6176])); this->f_S_1i = rt::slot_string(_v32716); _v32716; });
    ({ rt::Value _v32717 = rt::VS(g::LS[6177]); this->f_S__5e__21__23_ = rt::slot_string(_v32717); _v32717; });
    ({ double _v32718 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32718); _v32718; });
}
rt::Value C_S_9_22_Q::m_S__40__22_() {
    RT_FN("S_9_22_Q.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9426]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(4.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S_9_22_Q* C_S_9_22_Q::alloc_() {
    C_S_9_22_Q* o = rt::make<C_S_9_22_Q>();
    return o;
}
rt::Value C_S_9_22_Q::mk_(rt::Value* a, int n) {
    C_S_9_22_Q* o = alloc_();
    o->C_S_9_22_Q::ctor_();
    return rt::VO(o);
}
bool C_S_9_22_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S_9_22_Q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S_9_22_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S_9_22_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S_9_22_Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22_Q__id)); return true;
    case NM_S__3b__22_Q: out = rt::V((double)(g::SV.C_S_9_22_Q__S__3b__22_Q)); return true;
    default: return false;
    }
}
bool C_S_9_22_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22_Q__id = rt::touint(v); return true;
    case NM_S__3b__22_Q: g::SV.C_S_9_22_Q__S__3b__22_Q = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S_9_22_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__22_7::ctor_() {
    RT_FN("S__3b__22_7.S__3b__22_7");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32719 = 355.0; this->f_S_6_21_Z = rt::touint_d(_v32719); _v32719; });
    ({ rt::Value _v32720 = rt::trv(rt::VS(g::LS[9427])); this->f_S_1i = rt::slot_string(_v32720); _v32720; });
    ({ rt::Value _v32721 = rt::VS(g::LS[9428]); this->f_S__5e__21__23_ = rt::slot_string(_v32721); _v32721; });
    ({ double _v32722 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32722); _v32722; });
}
rt::Value C_S__3b__22_7::m_S__40__22_() {
    RT_FN("S__3b__22_7.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9429]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9324]))));
    return rt::NUL;
}
C_S__3b__22_7* C_S__3b__22_7::alloc_() {
    C_S__3b__22_7* o = rt::make<C_S__3b__22_7>();
    return o;
}
rt::Value C_S__3b__22_7::mk_(rt::Value* a, int n) {
    C_S__3b__22_7* o = alloc_();
    o->C_S__3b__22_7::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22_7::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3b__22_7::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3b__22_7::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3b__22_7::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3b__22_7::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__22_7::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22_7__id)); return true;
    default: return false;
    }
}
bool C_S__3b__22_7::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22_7__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22_7::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__22_I::ctor_() {
    RT_FN("S__3b__22_I.S__3b__22_I");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32723 = 388.0; this->f_S_6_21_Z = rt::touint_d(_v32723); _v32723; });
    ({ rt::Value _v32724 = rt::trv(rt::VS(g::LS[9430])); this->f_S_1i = rt::slot_string(_v32724); _v32724; });
    ({ rt::Value _v32725 = rt::VS(g::LS[9431]); this->f_S__5e__21__23_ = rt::slot_string(_v32725); _v32725; });
    ({ double _v32726 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32726); _v32726; });
}
rt::Value C_S__3b__22_I::m_S__40__22_() {
    RT_FN("S__3b__22_I.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9432]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(1000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9287]))));
    return rt::NUL;
}
C_S__3b__22_I* C_S__3b__22_I::alloc_() {
    C_S__3b__22_I* o = rt::make<C_S__3b__22_I>();
    return o;
}
rt::Value C_S__3b__22_I::mk_(rt::Value* a, int n) {
    C_S__3b__22_I* o = alloc_();
    o->C_S__3b__22_I::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22_I::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3b__22_I::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3b__22_I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3b__22_I::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3b__22_I::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__22_I::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22_I__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__3b__22_I__S__5e__21_s); return true;
    case NM_S__5d__21__3e_: out = rt::V(g::SV.C_S__3b__22_I__S__5d__21__3e_); return true;
    default: return false;
    }
}
bool C_S__3b__22_I::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22_I__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__3b__22_I__S__5e__21_s = rt::tonum(v); return true;
    case NM_S__5d__21__3e_: g::SV.C_S__3b__22_I__S__5d__21__3e_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3b__22_I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__22_M::ctor_() {
    RT_FN("S__3b__22_M.S__3b__22_M");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32727 = 403.0; this->f_S_6_21_Z = rt::touint_d(_v32727); _v32727; });
    ({ rt::Value _v32728 = rt::trv(rt::VS(g::LS[6351])); this->f_S_1i = rt::slot_string(_v32728); _v32728; });
    ({ rt::Value _v32729 = rt::VS(g::LS[6352]); this->f_S__5e__21__23_ = rt::slot_string(_v32729); _v32729; });
    ({ double _v32730 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32730); _v32730; });
}
rt::Value C_S__3b__22_M::m_S__40__22_() {
    RT_FN("S__3b__22_M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9433])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__3b__22_M* C_S__3b__22_M::alloc_() {
    C_S__3b__22_M* o = rt::make<C_S__3b__22_M>();
    return o;
}
rt::Value C_S__3b__22_M::mk_(rt::Value* a, int n) {
    C_S__3b__22_M* o = alloc_();
    o->C_S__3b__22_M::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3b__22_M::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3b__22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3b__22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3b__22_M::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22_M__id)); return true;
    default: return false;
    }
}
bool C_S__3b__22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__22_1::ctor_() {
    RT_FN("S__3d__22_1.S__3d__22_1");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32731 = 341.0; this->f_S_6_21_Z = rt::touint_d(_v32731); _v32731; });
    ({ rt::Value _v32732 = rt::trv(rt::VS(g::LS[9434])); this->f_S_1i = rt::slot_string(_v32732); _v32732; });
    ({ rt::Value _v32733 = rt::VS(g::LS[6210]); this->f_S__5e__21__23_ = rt::slot_string(_v32733); _v32733; });
    ({ double _v32734 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32734); _v32734; });
}
rt::Value C_S__3d__22_1::m_S__40__22_() {
    RT_FN("S__3d__22_1.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5812]), C_S__26_c::sm_S_8_21_Z(15.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S__3d__22_1::m_S__21__21_G() {
    RT_FN("S__3d__22_1.S__21__21_G");
    if ((({ bool _t32735 = (!this->f_S_4_21_K); _t32735 ? (bool)((((double)(C_PlayFab::sg_season())) == 11.0)) : _t32735; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 28.0), rt::V(15.0)))) {
        (void)(({ rt::Value _o32736 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32737 = rt::as_ptr<C_S_8G>(_o32736); _p32737 ? _p32737->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32736, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__3d__22_1* C_S__3d__22_1::alloc_() {
    C_S__3d__22_1* o = rt::make<C_S__3d__22_1>();
    return o;
}
rt::Value C_S__3d__22_1::mk_(rt::Value* a, int n) {
    C_S__3d__22_1* o = alloc_();
    o->C_S__3d__22_1::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3d__22_1::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3d__22_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3d__22_1::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3d__22_1::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__22_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_1__id)); return true;
    case NM_S__25__22_1: out = rt::V(g::SV.C_S__3d__22_1__S__25__22_1); return true;
    default: return false;
    }
}
bool C_S__3d__22_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_1__id = rt::touint(v); return true;
    case NM_S__25__22_1: g::SV.C_S__3d__22_1__S__25__22_1 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3d__22_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__22_J::ctor_() {
    RT_FN("S__3d__22_J.S__3d__22_J");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32738 = 392.0; this->f_S_6_21_Z = rt::touint_d(_v32738); _v32738; });
    ({ rt::Value _v32739 = rt::trv(rt::VS(g::LS[9435])); this->f_S_1i = rt::slot_string(_v32739); _v32739; });
    ({ rt::Value _v32740 = rt::VS(g::LS[9436]); this->f_S__5e__21__23_ = rt::slot_string(_v32740); _v32740; });
    ({ double _v32741 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32741); _v32741; });
}
rt::Value C_S__3d__22_J::m_S__40__22_() {
    RT_FN("S__3d__22_J.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9437]), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9287]))));
    return rt::NUL;
}
C_S__3d__22_J* C_S__3d__22_J::alloc_() {
    C_S__3d__22_J* o = rt::make<C_S__3d__22_J>();
    return o;
}
rt::Value C_S__3d__22_J::mk_(rt::Value* a, int n) {
    C_S__3d__22_J* o = alloc_();
    o->C_S__3d__22_J::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3d__22_J::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3d__22_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3d__22_J::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3d__22_J::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__22_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_J__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__3d__22_J__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__3d__22_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_J__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__3d__22_J__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3d__22_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__22_M::ctor_() {
    RT_FN("S__3d__22_M.S__3d__22_M");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32742 = 404.0; this->f_S_6_21_Z = rt::touint_d(_v32742); _v32742; });
    ({ rt::Value _v32743 = rt::trv(rt::VS(g::LS[6173])); this->f_S_1i = rt::slot_string(_v32743); _v32743; });
    ({ rt::Value _v32744 = rt::VS(g::LS[6174]); this->f_S__5e__21__23_ = rt::slot_string(_v32744); _v32744; });
    ({ double _v32745 = 8.0; this->f_S__27__21_H = rt::touint_d(_v32745); _v32745; });
}
rt::Value C_S__3d__22_M::m_S__40__22_() {
    RT_FN("S__3d__22_M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9438])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__3d__22_M* C_S__3d__22_M::alloc_() {
    C_S__3d__22_M* o = rt::make<C_S__3d__22_M>();
    return o;
}
rt::Value C_S__3d__22_M::mk_(rt::Value* a, int n) {
    C_S__3d__22_M* o = alloc_();
    o->C_S__3d__22_M::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__3d__22_M::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__3d__22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__3d__22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__3d__22_M::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_M__id)); return true;
    default: return false;
    }
}
bool C_S__3d__22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__21_w::ctor_() {
    RT_FN("S__40__21_w.S__40__21_w");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32746 = 299.0; this->f_S_6_21_Z = rt::touint_d(_v32746); _v32746; });
    ({ rt::Value _v32747 = rt::trv(rt::VS(g::LS[9439])); this->f_S_1i = rt::slot_string(_v32747); _v32747; });
    ({ rt::Value _v32748 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9440])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))); this->f_S_7_23_ = rt::slot_string(_v32748); _v32748; });
    ({ rt::Value _v32749 = rt::VS(g::LS[9441]); this->f_S__5e__21__23_ = rt::slot_string(_v32749); _v32749; });
    ({ double _v32750 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32750); _v32750; });
}
C_S__40__21_w* C_S__40__21_w::alloc_() {
    C_S__40__21_w* o = rt::make<C_S__40__21_w>();
    return o;
}
rt::Value C_S__40__21_w::mk_(rt::Value* a, int n) {
    C_S__40__21_w* o = alloc_();
    o->C_S__40__21_w::ctor_();
    return rt::VO(o);
}
bool C_S__40__21_w::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__40__21_w::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__40__21_w::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__40__21_w::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__40__21_w::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21_w::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21_w__id)); return true;
    default: return false;
    }
}
bool C_S__40__21_w::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21_w__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__21_w::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__22_8::ctor_() {
    RT_FN("S__40__22_8.S__40__22_8");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32751 = 357.0; this->f_S_6_21_Z = rt::touint_d(_v32751); _v32751; });
    ({ rt::Value _v32752 = rt::trv(rt::VS(g::LS[9442])); this->f_S_1i = rt::slot_string(_v32752); _v32752; });
    ({ rt::Value _v32753 = rt::VS(g::LS[9443]); this->f_S__5e__21__23_ = rt::slot_string(_v32753); _v32753; });
    ({ double _v32754 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32754); _v32754; });
}
rt::Value C_S__40__22_8::m_S__40__22_() {
    RT_FN("S__40__22_8.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9444]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__40__22_8__S__3d__22_8, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9324]))));
    return rt::NUL;
}
C_S__40__22_8* C_S__40__22_8::alloc_() {
    C_S__40__22_8* o = rt::make<C_S__40__22_8>();
    return o;
}
rt::Value C_S__40__22_8::mk_(rt::Value* a, int n) {
    C_S__40__22_8* o = alloc_();
    o->C_S__40__22_8::ctor_();
    return rt::VO(o);
}
bool C_S__40__22_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__40__22_8::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__40__22_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__40__22_8::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__40__22_8::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__22_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22_8__id)); return true;
    case NM_S__3d__22_8: out = rt::V(g::SV.C_S__40__22_8__S__3d__22_8); return true;
    default: return false;
    }
}
bool C_S__40__22_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22_8__id = rt::touint(v); return true;
    case NM_S__3d__22_8: g::SV.C_S__40__22_8__S__3d__22_8 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__40__22_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__22_F::ctor_() {
    RT_FN("S__40__22_F.S__40__22_F");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32755 = 379.0; this->f_S_6_21_Z = rt::touint_d(_v32755); _v32755; });
    ({ rt::Value _v32756 = rt::trv(rt::VS(g::LS[6191])); this->f_S_1i = rt::slot_string(_v32756); _v32756; });
    ({ rt::Value _v32757 = rt::VS(g::LS[6192]); this->f_S__5e__21__23_ = rt::slot_string(_v32757); _v32757; });
    ({ double _v32758 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32758); _v32758; });
}
rt::Value C_S__40__22_F::m_S__40__22_() {
    RT_FN("S__40__22_F.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9445]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
C_S__40__22_F* C_S__40__22_F::alloc_() {
    C_S__40__22_F* o = rt::make<C_S__40__22_F>();
    return o;
}
rt::Value C_S__40__22_F::mk_(rt::Value* a, int n) {
    C_S__40__22_F* o = alloc_();
    o->C_S__40__22_F::ctor_();
    return rt::VO(o);
}
bool C_S__40__22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__40__22_F::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__40__22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__40__22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__40__22_F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22_F__id)); return true;
    default: return false;
    }
}
bool C_S__40__22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__22_O::ctor_() {
    RT_FN("S__40__22_O.S__40__22_O");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32759 = 417.0; this->f_S_6_21_Z = rt::touint_d(_v32759); _v32759; });
    ({ rt::Value _v32760 = rt::trv(rt::VS(g::LS[6397])); this->f_S_1i = rt::slot_string(_v32760); _v32760; });
    ({ rt::Value _v32761 = rt::VS(g::LS[6398]); this->f_S__5e__21__23_ = rt::slot_string(_v32761); _v32761; });
    ({ double _v32762 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32762); _v32762; });
}
rt::Value C_S__40__22_O::m_S__40__22_() {
    RT_FN("S__40__22_O.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9446]), C_S__26_c::sm_S_8_21_Z(1000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_7A__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(50.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__40__22_O* C_S__40__22_O::alloc_() {
    C_S__40__22_O* o = rt::make<C_S__40__22_O>();
    return o;
}
rt::Value C_S__40__22_O::mk_(rt::Value* a, int n) {
    C_S__40__22_O* o = alloc_();
    o->C_S__40__22_O::ctor_();
    return rt::VO(o);
}
bool C_S__40__22_O::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__40__22_O::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__40__22_O::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__40__22_O::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__40__22_O::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__22_O::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22_O__id)); return true;
    case NM_S__5b__21_: out = rt::V(g::SV.C_S__40__22_O__S__5b__21_); return true;
    case NM_S__5b__22_O: out = rt::V(g::SV.C_S__40__22_O__S__5b__22_O); return true;
    default: return false;
    }
}
bool C_S__40__22_O::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22_O__id = rt::touint(v); return true;
    case NM_S__5b__21_: g::SV.C_S__40__22_O__S__5b__21_ = rt::tonum(v); return true;
    case NM_S__5b__22_O: g::SV.C_S__40__22_O__S__5b__22_O = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__40__22_O::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__21__2d_::ctor_() {
    RT_FN("S__5b__21__2d_.S__5b__21__2d_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32763 = 163.0; this->f_S_6_21_Z = rt::touint_d(_v32763); _v32763; });
    ({ rt::Value _v32764 = rt::trv(rt::VS(g::LS[9447])); this->f_S_1i = rt::slot_string(_v32764); _v32764; });
    ({ rt::Value _v32765 = rt::VS(g::LS[8146]); this->f_S__5e__21__23_ = rt::slot_string(_v32765); _v32765; });
    ({ double _v32766 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32766); _v32766; });
}
rt::Value C_S__5b__21__2d_::m_S__40__22_() {
    RT_FN("S__5b__21__2d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9448])));
    return rt::NUL;
}
rt::Value C_S__5b__21__2d_::m_S__21__21_G() {
    RT_FN("S__5b__21__2d_.S__21__21_G");
    if ((({ bool _t32767 = (!this->f_S_4_21_K); _t32767 ? (bool)((((double)(C_PlayFab::sg_season())) == 2.0)) : _t32767; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 17.0), rt::V(13.0)))) {
        (void)(({ rt::Value _o32768 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32769 = rt::as_ptr<C_S_8G>(_o32768); _p32769 ? _p32769->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32768, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__5b__21__2d_* C_S__5b__21__2d_::alloc_() {
    C_S__5b__21__2d_* o = rt::make<C_S__5b__21__2d_>();
    return o;
}
rt::Value C_S__5b__21__2d_::mk_(rt::Value* a, int n) {
    C_S__5b__21__2d_* o = alloc_();
    o->C_S__5b__21__2d_::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21__2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5b__21__2d_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5b__21__2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5b__21__2d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5b__21__2d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21__2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21__2d___id)); return true;
    default: return false;
    }
}
bool C_S__5b__21__2d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21__2d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21__2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__21_k::ctor_() {
    RT_FN("S__5b__21_k.S__5b__21_k");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32770 = 251.0; this->f_S_6_21_Z = rt::touint_d(_v32770); _v32770; });
    ({ rt::Value _v32771 = rt::trv(rt::VS(g::LS[9449])); this->f_S_1i = rt::slot_string(_v32771); _v32771; });
    ({ rt::Value _v32772 = rt::VS(g::LS[6144]); this->f_S__5e__21__23_ = rt::slot_string(_v32772); _v32772; });
    ({ double _v32773 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32773); _v32773; });
}
rt::Value C_S__5b__21_k::m_S__40__22_() {
    RT_FN("S__5b__21_k.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5827]), rt::VS(g::LS[1349])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))));
    return rt::NUL;
}
rt::Value C_S__5b__21_k::m_S__21__21_G() {
    RT_FN("S__5b__21_k.S__21__21_G");
    if ((({ bool _t32774 = (!this->f_S_4_21_K); _t32774 ? (bool)((((double)(C_PlayFab::sg_season())) == 9.0)) : _t32774; }) && (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(88.0)) >= 100.0))) {
        (void)(({ rt::Value _o32775 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32776 = rt::as_ptr<C_S_8G>(_o32775); _p32776 ? _p32776->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32775, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__5b__21_k* C_S__5b__21_k::alloc_() {
    C_S__5b__21_k* o = rt::make<C_S__5b__21_k>();
    return o;
}
rt::Value C_S__5b__21_k::mk_(rt::Value* a, int n) {
    C_S__5b__21_k* o = alloc_();
    o->C_S__5b__21_k::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5b__21_k::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5b__21_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5b__21_k::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5b__21_k::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21_k__id)); return true;
    default: return false;
    }
}
bool C_S__5b__21_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21_k__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__22_P::ctor_() {
    RT_FN("S__5b__22_P.S__5b__22_P");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32777 = 418.0; this->f_S_6_21_Z = rt::touint_d(_v32777); _v32777; });
    ({ rt::Value _v32778 = rt::trv(rt::VS(g::LS[6409])); this->f_S_1i = rt::slot_string(_v32778); _v32778; });
    ({ rt::Value _v32779 = rt::VS(g::LS[6410]); this->f_S__5e__21__23_ = rt::slot_string(_v32779); _v32779; });
    ({ double _v32780 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32780); _v32780; });
}
rt::Value C_S__5b__22_P::m_S__40__22_() {
    RT_FN("S__5b__22_P.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9450]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__23__3f_(g::SV.C_S_8_21_M__id, 720.0, true, C_S__26_c::dsm_S__23__3f__3())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__5b__22_P* C_S__5b__22_P::alloc_() {
    C_S__5b__22_P* o = rt::make<C_S__5b__22_P>();
    return o;
}
rt::Value C_S__5b__22_P::mk_(rt::Value* a, int n) {
    C_S__5b__22_P* o = alloc_();
    o->C_S__5b__22_P::ctor_();
    return rt::VO(o);
}
bool C_S__5b__22_P::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5b__22_P::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5b__22_P::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5b__22_P::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5b__22_P::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__22_P::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__22_P__id)); return true;
    case NM_S__5b__21_: out = rt::V(g::SV.C_S__5b__22_P__S__5b__21_); return true;
    default: return false;
    }
}
bool C_S__5b__22_P::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__22_P__id = rt::touint(v); return true;
    case NM_S__5b__21_: g::SV.C_S__5b__22_P__S__5b__21_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__5b__22_P::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b_b::ctor_() {
    RT_FN("S__5b_b.S__5b_b");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32781 = 174.0; this->f_S_6_21_Z = rt::touint_d(_v32781); _v32781; });
    ({ rt::Value _v32782 = rt::trv(rt::VS(g::LS[9451])); this->f_S_1i = rt::slot_string(_v32782); _v32782; });
    ({ rt::Value _v32783 = rt::VS(g::LS[7700]); this->f_S__5e__21__23_ = rt::slot_string(_v32783); _v32783; });
    ({ double _v32784 = 3.0; this->f_S__27__21_H = rt::touint_d(_v32784); _v32784; });
}
rt::Value C_S__5b_b::m_S__40__22_() {
    RT_FN("S__5b_b.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9452])));
    return rt::NUL;
}
rt::Value C_S__5b_b::m_S__21__21_G() {
    RT_FN("S__5b_b.S__21__21_G");
    if ((({ bool _t32785 = (!this->f_S_4_21_K); _t32785 ? (bool)((((double)(C_PlayFab::sg_season())) == 3.0)) : _t32785; }) && (((((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(114.0)) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(115.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(116.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(117.0))) + C_S__26_c::sm_S__20__21__3b_(rt::toint_d(118.0))) >= 250.0))) {
        (void)(({ rt::Value _o32786 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32787 = rt::as_ptr<C_S_8G>(_o32786); _p32787 ? _p32787->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32786, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__5b_b* C_S__5b_b::alloc_() {
    C_S__5b_b* o = rt::make<C_S__5b_b>();
    return o;
}
rt::Value C_S__5b_b::mk_(rt::Value* a, int n) {
    C_S__5b_b* o = alloc_();
    o->C_S__5b_b::ctor_();
    return rt::VO(o);
}
bool C_S__5b_b::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5b_b::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5b_b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5b_b::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5b_b::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b_b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b_b__id)); return true;
    default: return false;
    }
}
bool C_S__5b_b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b_b__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b_b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__21__5d_::ctor_() {
    RT_FN("S__5d__21__5d_.S__5d__21__5d_");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32788 = 192.0; this->f_S_6_21_Z = rt::touint_d(_v32788); _v32788; });
    ({ rt::Value _v32789 = rt::trv(rt::VS(g::LS[9453])); this->f_S_1i = rt::slot_string(_v32789); _v32789; });
    ({ rt::Value _v32790 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9454])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9281]))); this->f_S_7_23_ = rt::slot_string(_v32790); _v32790; });
    ({ rt::Value _v32791 = rt::VS(g::LS[9455]); this->f_S__5e__21__23_ = rt::slot_string(_v32791); _v32791; });
    ({ double _v32792 = 4.0; this->f_S__27__21_H = rt::touint_d(_v32792); _v32792; });
}
C_S__5d__21__5d_* C_S__5d__21__5d_::alloc_() {
    C_S__5d__21__5d_* o = rt::make<C_S__5d__21__5d_>();
    return o;
}
rt::Value C_S__5d__21__5d_::mk_(rt::Value* a, int n) {
    C_S__5d__21__5d_* o = alloc_();
    o->C_S__5d__21__5d_::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21__5d_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5d__21__5d_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5d__21__5d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5d__21__5d_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5d__21__5d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__21__5d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21__5d___id)); return true;
    default: return false;
    }
}
bool C_S__5d__21__5d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21__5d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__21__5d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__22_0::ctor_() {
    RT_FN("S__5d__22_0.S__5d__22_0");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32793 = 333.0; this->f_S_6_21_Z = rt::touint_d(_v32793); _v32793; });
    ({ rt::Value _v32794 = rt::trv(rt::VS(g::LS[6182])); this->f_S_1i = rt::slot_string(_v32794); _v32794; });
    ({ rt::Value _v32795 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9456])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))); this->f_S_7_23_ = rt::slot_string(_v32795); _v32795; });
    ({ rt::Value _v32796 = rt::VS(g::LS[6183]); this->f_S__5e__21__23_ = rt::slot_string(_v32796); _v32796; });
    ({ double _v32797 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32797); _v32797; });
}
C_S__5d__22_0* C_S__5d__22_0::alloc_() {
    C_S__5d__22_0* o = rt::make<C_S__5d__22_0>();
    return o;
}
rt::Value C_S__5d__22_0::mk_(rt::Value* a, int n) {
    C_S__5d__22_0* o = alloc_();
    o->C_S__5d__22_0::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22_0::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5d__22_0::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5d__22_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5d__22_0::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5d__22_0::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__22_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22_0__id)); return true;
    default: return false;
    }
}
bool C_S__5d__22_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22_0__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__22_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__22_5::ctor_() {
    RT_FN("S__5d__22_5.S__5d__22_5");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32798 = 354.0; this->f_S_6_21_Z = rt::touint_d(_v32798); _v32798; });
    ({ rt::Value _v32799 = rt::trv(rt::VS(g::LS[9457])); this->f_S_1i = rt::slot_string(_v32799); _v32799; });
    ({ rt::Value _v32800 = rt::VS(g::LS[9458]); this->f_S__5e__21__23_ = rt::slot_string(_v32800); _v32800; });
    ({ double _v32801 = 3.0; this->f_S__27__21_H = rt::touint_d(_v32801); _v32801; });
}
rt::Value C_S__5d__22_5::m_S__40__22_() {
    RT_FN("S__5d__22_5.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9459]), C_S__26_c::sm_S_8_21_Z(1000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9324]))));
    return rt::NUL;
}
rt::Value C_S__5d__22_5::m_S__21__21_G() {
    RT_FN("S__5d__22_5.S__21__21_G");
    if ((({ bool _t32802 = (!this->f_S_4_21_K); _t32802 ? (bool)((((double)(C_PlayFab::sg_season())) == 3.0)) : _t32802; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 30.0), rt::V(1000.0)))) {
        (void)(({ rt::Value _o32803 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32804 = rt::as_ptr<C_S_8G>(_o32803); _p32804 ? _p32804->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32803, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__5d__22_5* C_S__5d__22_5::alloc_() {
    C_S__5d__22_5* o = rt::make<C_S__5d__22_5>();
    return o;
}
rt::Value C_S__5d__22_5::mk_(rt::Value* a, int n) {
    C_S__5d__22_5* o = alloc_();
    o->C_S__5d__22_5::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5d__22_5::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5d__22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5d__22_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5d__22_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22_5__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__5d__22_5__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__5d__22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22_5__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__5d__22_5__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__5d__22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__22_F::ctor_() {
    RT_FN("S__5d__22_F.S__5d__22_F");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32805 = 380.0; this->f_S_6_21_Z = rt::touint_d(_v32805); _v32805; });
    ({ rt::Value _v32806 = rt::trv(rt::VS(g::LS[6388])); this->f_S_1i = rt::slot_string(_v32806); _v32806; });
    ({ rt::Value _v32807 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9460])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))); this->f_S_7_23_ = rt::slot_string(_v32807); _v32807; });
    ({ rt::Value _v32808 = rt::VS(g::LS[6389]); this->f_S__5e__21__23_ = rt::slot_string(_v32808); _v32808; });
    ({ double _v32809 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32809); _v32809; });
}
C_S__5d__22_F* C_S__5d__22_F::alloc_() {
    C_S__5d__22_F* o = rt::make<C_S__5d__22_F>();
    return o;
}
rt::Value C_S__5d__22_F::mk_(rt::Value* a, int n) {
    C_S__5d__22_F* o = alloc_();
    o->C_S__5d__22_F::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22_F::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5d__22_F::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5d__22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5d__22_F::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5d__22_F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22_F__id)); return true;
    default: return false;
    }
}
bool C_S__5d__22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__22_M::ctor_() {
    RT_FN("S__5d__22_M.S__5d__22_M");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32810 = 405.0; this->f_S_6_21_Z = rt::touint_d(_v32810); _v32810; });
    ({ rt::Value _v32811 = rt::trv(rt::VS(g::LS[6390])); this->f_S_1i = rt::slot_string(_v32811); _v32811; });
    ({ rt::Value _v32812 = rt::VS(g::LS[6391]); this->f_S__5e__21__23_ = rt::slot_string(_v32812); _v32812; });
    ({ double _v32813 = 9.0; this->f_S__27__21_H = rt::touint_d(_v32813); _v32813; });
}
rt::Value C_S__5d__22_M::m_S__40__22_() {
    RT_FN("S__5d__22_M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9461])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__5d__22_M* C_S__5d__22_M::alloc_() {
    C_S__5d__22_M* o = rt::make<C_S__5d__22_M>();
    return o;
}
rt::Value C_S__5d__22_M::mk_(rt::Value* a, int n) {
    C_S__5d__22_M* o = alloc_();
    o->C_S__5d__22_M::ctor_();
    return rt::VO(o);
}
bool C_S__5d__22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5d__22_M::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5d__22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5d__22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5d__22_M::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__22_M__id)); return true;
    default: return false;
    }
}
bool C_S__5d__22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__22_H::ctor_() {
    RT_FN("S__5e__22_H.S__5e__22_H");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32814 = 385.0; this->f_S_6_21_Z = rt::touint_d(_v32814); _v32814; });
    ({ rt::Value _v32815 = rt::trv(rt::VS(g::LS[9462])); this->f_S_1i = rt::slot_string(_v32815); _v32815; });
    ({ rt::Value _v32816 = rt::VS(g::LS[9463]); this->f_S__5e__21__23_ = rt::slot_string(_v32816); _v32816; });
    ({ double _v32817 = 3.0; this->f_S__27__21_H = rt::touint_d(_v32817); _v32817; });
}
rt::Value C_S__5e__22_H::m_S__40__22_() {
    RT_FN("S__5e__22_H.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9464]), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9287]))));
    return rt::NUL;
}
rt::Value C_S__5e__22_H::m_S__21__21_G() {
    RT_FN("S__5e__22_H.S__21__21_G");
    if ((({ bool _t32818 = (!this->f_S_4_21_K); _t32818 ? (bool)((((double)(C_PlayFab::sg_season())) == 3.0)) : _t32818; }) && (({ rt::Value _o32819 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p32820 = rt::as_ptr<C_S_84>(_o32819); _p32820 ? _p32820->g_S__3f_j() : rt::tonum(rt::dget(_o32819, NM_S__3f_j)); }) >= 7200.0))) {
        (void)(({ rt::Value _o32821 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32822 = rt::as_ptr<C_S_8G>(_o32821); _p32822 ? _p32822->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32821, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__5e__22_H* C_S__5e__22_H::alloc_() {
    C_S__5e__22_H* o = rt::make<C_S__5e__22_H>();
    return o;
}
rt::Value C_S__5e__22_H::mk_(rt::Value* a, int n) {
    C_S__5e__22_H* o = alloc_();
    o->C_S__5e__22_H::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5e__22_H::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5e__22_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5e__22_H::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5e__22_H::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__22_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22_H__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__5e__22_H__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__5e__22_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22_H__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__5e__22_H__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__5e__22_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__22_M::ctor_() {
    RT_FN("S__5e__22_M.S__5e__22_M");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32823 = 406.0; this->f_S_6_21_Z = rt::touint_d(_v32823); _v32823; });
    ({ rt::Value _v32824 = rt::trv(rt::VS(g::LS[6416])); this->f_S_1i = rt::slot_string(_v32824); _v32824; });
    ({ rt::Value _v32825 = rt::VS(g::LS[6417]); this->f_S__5e__21__23_ = rt::slot_string(_v32825); _v32825; });
    ({ double _v32826 = 6.0; this->f_S__27__21_H = rt::touint_d(_v32826); _v32826; });
}
rt::Value C_S__5e__22_M::m_S__40__22_() {
    RT_FN("S__5e__22_M.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9465])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__5e__22_M* C_S__5e__22_M::alloc_() {
    C_S__5e__22_M* o = rt::make<C_S__5e__22_M>();
    return o;
}
rt::Value C_S__5e__22_M::mk_(rt::Value* a, int n) {
    C_S__5e__22_M* o = alloc_();
    o->C_S__5e__22_M::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5e__22_M::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5e__22_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5e__22_M::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5e__22_M::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__22_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22_M__id)); return true;
    default: return false;
    }
}
bool C_S__5e__22_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__22_V::ctor_() {
    RT_FN("S__5e__22_V.S__5e__22_V");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32827 = 425.0; this->f_S_6_21_Z = rt::touint_d(_v32827); _v32827; });
    ({ rt::Value _v32828 = rt::trv(rt::VS(g::LS[6399])); this->f_S_1i = rt::slot_string(_v32828); _v32828; });
    ({ rt::Value _v32829 = rt::VS(g::LS[6400]); this->f_S__5e__21__23_ = rt::slot_string(_v32829); _v32829; });
    ({ double _v32830 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32830); _v32830; });
}
rt::Value C_S__5e__22_V::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5e__22_V.S__40__22_");
    (l_A__loc1_ = C_S_8G::sm_S_9_3d_(g::SV.C_S_8_21_d__id));
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9466]), C_S__26_c::sm_S_8_21_Z(3000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_Translation::sm__mn(rt::arr_at(({ rt::Value _o32831 = l_A__loc1_; C_S__60__21__3b_* _p32832 = rt::as_ptr<C_S__60__21__3b_>(_o32831); _p32832 ? _p32832->f_S__27_T : rt::dget(_o32831, NM_S__27_T); }), 1.0), rt::arr_at(({ rt::Value _o32833 = l_A__loc1_; C_S__60__21__3b_* _p32834 = rt::as_ptr<C_S__60__21__3b_>(_o32833); _p32834 ? _p32834->f_S__2d__21__26_ : rt::dget(_o32833, NM_S__2d__21__26_); }), 1.0), 2.0, rt::arr_lit({})), C_S__26_c::sm_S_8_21_Z(5.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
double C_S__5e__22_V::sm_S__40__22_V() {
    rt::Value l_A__loc1_ = rt::NUL;
    int32_t l_A__loc2_ = 0;
    RT_FN("S__5e__22_V.S__40__22_V");
    if ((!C_S__26_c::sm_S__60__21_i(g::SV.C_S__3e__21_u__id))) {
        return 0.0;
    }
    (l_A__loc1_ = C_S_8G::sm_S_9_3d_(g::SV.C_S_8_21_d__id));
    if (rt::eq(l_A__loc1_, rt::NUL)) {
        return 0.0;
    }
    (l_A__loc2_ = ({ rt::Value _o32835 = l_A__loc1_; C_S__60__21__3b_* _p32836 = rt::as_ptr<C_S__60__21__3b_>(_o32835); _p32836 ? _p32836->m_S__27__3c_() : rt::toint(rt::dcallv(_o32835, NM_S__27__3c_)); }));
    return (((!(((double)(l_A__loc2_)) == (-1.0))) && rt::eq(rt::arr_at(({ rt::Value _o32837 = l_A__loc1_; C_S__60__21__3b_* _p32838 = rt::as_ptr<C_S__60__21__3b_>(_o32837); _p32838 ? _p32838->f_S_9_3b_ : rt::dget(_o32837, NM_S_9_3b_); }), ((double)(l_A__loc2_))), rt::V((double)(g::SV.C_S__3e__21_u__id)))) ? C_S_8G::sm_S__25_Z(({ rt::Value _o32839 = l_A__loc1_; C_S__60__21__3b_* _p32840 = rt::as_ptr<C_S__60__21__3b_>(_o32839); _p32840 ? _p32840->f_id : rt::touint(rt::dget(_o32839, NM_id)); }), true) : 0.0);
    return 0.0;
}
int32_t C_S__5e__22_V::sm_S__60__22_V() {
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc1_ = 0;
    RT_FN("S__5e__22_V.S__60__22_V");
    (l_A__loc2_ = rt::toint_d(0.0));
    if ((!C_S_8G::sm_S__3c__21_B(g::SV.C_S_5_21_3__id))) {
        return rt::toint_d(0.0);
    }
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) < 6.0)) {
        if ((({ rt::Value _o32841 = g::SV.C_S_8G__S_1_21_V; C_S__3b_m* _p32842 = rt::as_ptr<C_S__3b_m>(_o32841); _p32842 ? _p32842->m_S__27_W(((uint32_t)(l_A__loc2_))) : rt::T(rt::dcallv(_o32841, NM_S__27_W, rt::V((double)(l_A__loc2_)))); }) || ({ rt::Value _o32843 = g::SV.C_S_8G__S_1_21_V; C_S__3b_m* _p32844 = rt::as_ptr<C_S__3b_m>(_o32843); _p32844 ? _p32844->m_S__27_W(rt::touint_d((6.0 + ((double)(l_A__loc2_))))) : rt::T(rt::dcallv(_o32843, NM_S__27_W, rt::V((6.0 + ((double)(l_A__loc2_)))))); }))) {
            (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return l_A__loc1_;
    return 0;
}
C_S__5e__22_V* C_S__5e__22_V::alloc_() {
    C_S__5e__22_V* o = rt::make<C_S__5e__22_V>();
    return o;
}
rt::Value C_S__5e__22_V::mk_(rt::Value* a, int n) {
    C_S__5e__22_V* o = alloc_();
    o->C_S__5e__22_V::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22_V::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5e__22_V::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5e__22_V::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5e__22_V::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5e__22_V::smeth_(int id) {
    switch (id) {
    case NM_S__40__22_V: return true;
    case NM_S__60__22_V: return true;
    default: return false;
    }
}
bool C_S__5e__22_V::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22_V__id)); return true;
    case NM_S__5b__22_V: out = rt::V(g::SV.C_S__5e__22_V__S__5b__22_V); return true;
    case NM_S__3f__22_V: out = rt::V((double)(g::SV.C_S__5e__22_V__S__3f__22_V)); return true;
    case NM_S__40__22_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__60__22_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__5e__22_V::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22_V__id = rt::touint(v); return true;
    case NM_S__5b__22_V: g::SV.C_S__5e__22_V__S__5b__22_V = rt::tonum(v); return true;
    case NM_S__3f__22_V: g::SV.C_S__5e__22_V__S__3f__22_V = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22_V::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_V: out = rt::V(sm_S__40__22_V()); return true;
    case NM_S__60__22_V: out = rt::V((double)(sm_S__60__22_V())); return true;
    default: return false;
    }
}
void C_S__5e_v::ctor_() {
    RT_FN("S__5e_v.S__5e_v");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32845 = 219.0; this->f_S_6_21_Z = rt::touint_d(_v32845); _v32845; });
    ({ rt::Value _v32846 = rt::trv(rt::VS(g::LS[9467])); this->f_S_1i = rt::slot_string(_v32846); _v32846; });
    ({ rt::Value _v32847 = rt::trv(rt::VS(g::LS[9468])); this->f_S_7_23_ = rt::slot_string(_v32847); _v32847; });
    ({ rt::Value _v32848 = rt::VS(g::LS[9469]); this->f_S__5e__21__23_ = rt::slot_string(_v32848); _v32848; });
    ({ double _v32849 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32849); _v32849; });
}
C_S__5e_v* C_S__5e_v::alloc_() {
    C_S__5e_v* o = rt::make<C_S__5e_v>();
    return o;
}
rt::Value C_S__5e_v::mk_(rt::Value* a, int n) {
    C_S__5e_v* o = alloc_();
    o->C_S__5e_v::ctor_();
    return rt::VO(o);
}
bool C_S__5e_v::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__5e_v::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__5e_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__5e_v::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__5e_v::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e_v__id)); return true;
    default: return false;
    }
}
bool C_S__5e_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e_v__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__22_F::ctor_() {
    RT_FN("S__60__22_F.S__60__22_F");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32850 = 381.0; this->f_S_6_21_Z = rt::touint_d(_v32850); _v32850; });
    ({ rt::Value _v32851 = rt::trv(rt::VS(g::LS[6406])); this->f_S_1i = rt::slot_string(_v32851); _v32851; });
    ({ rt::Value _v32852 = rt::VS(g::LS[6407]); this->f_S__5e__21__23_ = rt::slot_string(_v32852); _v32852; });
    ({ double _v32853 = 11.0; this->f_S__27__21_H = rt::touint_d(_v32853); _v32853; });
}
rt::Value C_S__60__22_F::m_S__40__22_() {
    RT_FN("S__60__22_F.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9470]), C_S__26_c::sm_S_8_21_Z(((double)(g::SV.C_S__60__22_F__S__5e__21_s)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9297]))));
    return rt::NUL;
}
rt::Value C_S__60__22_F::m_S__21__21_G() {
    rt::Value l_A__loc1_ = rt::UNDEF;
    uint32_t l_A__loc2_ = 0u;
    RT_FN("S__60__22_F.S__21__21_G");
    (l_A__loc1_ = rt::V(0.0));
    (l_A__loc2_ = rt::touint_d(0.0));
    (l_A__loc1_ = rt::V((double)(rt::touint_d(0.0))));
    while (rt::le(l_A__loc1_, rt::V(15.0))) {
        if (({ rt::Value _o32854 = g::SV.C_S_8G__S__20__22_G; C_S__3b_m* _p32855 = rt::as_ptr<C_S__3b_m>(_o32854); _p32855 ? _p32855->m_S__27_W(rt::touint(l_A__loc1_)) : rt::T(rt::dcallv(_o32854, NM_S__27_W, l_A__loc1_)); })) {
            (l_A__loc2_ = rt::touint_d((((double)(l_A__loc2_)) + 1.0)));
        }
        if ((((double)(l_A__loc2_)) == ((double)(g::SV.C_S__60__22_F__S__5e__21_s)))) {
            break;
        }
        (l_A__loc1_ = rt::add(l_A__loc1_, rt::V(1.0)));
    }
    if ((({ bool _t32856 = (!this->f_S_4_21_K); _t32856 ? (bool)((((double)(C_PlayFab::sg_season())) == 11.0)) : _t32856; }) && (((double)(l_A__loc2_)) == ((double)(g::SV.C_S__60__22_F__S__5e__21_s))))) {
        (void)(({ rt::Value _o32857 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32858 = rt::as_ptr<C_S_8G>(_o32857); _p32858 ? _p32858->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32857, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__60__22_F* C_S__60__22_F::alloc_() {
    C_S__60__22_F* o = rt::make<C_S__60__22_F>();
    return o;
}
rt::Value C_S__60__22_F::mk_(rt::Value* a, int n) {
    C_S__60__22_F* o = alloc_();
    o->C_S__60__22_F::ctor_();
    return rt::VO(o);
}
bool C_S__60__22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__60__22_F::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__60__22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__60__22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__60__22_F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22_F__id)); return true;
    case NM_S__5e__21_s: out = rt::V((double)(g::SV.C_S__60__22_F__S__5e__21_s)); return true;
    default: return false;
    }
}
bool C_S__60__22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22_F__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__60__22_F__S__5e__21_s = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__22_J::ctor_() {
    RT_FN("S__60__22_J.S__60__22_J");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32859 = 393.0; this->f_S_6_21_Z = rt::touint_d(_v32859); _v32859; });
    ({ rt::Value _v32860 = rt::trv(rt::VS(g::LS[9471])); this->f_S_1i = rt::slot_string(_v32860); _v32860; });
    ({ rt::Value _v32861 = rt::VS(g::LS[9472]); this->f_S__5e__21__23_ = rt::slot_string(_v32861); _v32861; });
    ({ double _v32862 = 2.0; this->f_S__27__21_H = rt::touint_d(_v32862); _v32862; });
}
rt::Value C_S__60__22_J::m_S__40__22_() {
    RT_FN("S__60__22_J.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9473]), C_S__26_c::sm_S_8_21_Z(720.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9287]))));
    return rt::NUL;
}
C_S__60__22_J* C_S__60__22_J::alloc_() {
    C_S__60__22_J* o = rt::make<C_S__60__22_J>();
    return o;
}
rt::Value C_S__60__22_J::mk_(rt::Value* a, int n) {
    C_S__60__22_J* o = alloc_();
    o->C_S__60__22_J::ctor_();
    return rt::VO(o);
}
bool C_S__60__22_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__60__22_J::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__60__22_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__60__22_J::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__60__22_J::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__22_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22_J__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__60__22_J__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__60__22_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22_J__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__60__22_J__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__60__22_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__22_L::ctor_() {
    RT_FN("S__60__22_L.S__60__22_L");
    (void)((this->C_S__3c__21_V::ctor_(), rt::NUL));
    ({ double _v32863 = 400.0; this->f_S_6_21_Z = rt::touint_d(_v32863); _v32863; });
    ({ rt::Value _v32864 = rt::trv(rt::VS(g::LS[6118])); this->f_S_1i = rt::slot_string(_v32864); _v32864; });
    ({ rt::Value _v32865 = rt::VS(g::LS[6119]); this->f_S__5e__21__23_ = rt::slot_string(_v32865); _v32865; });
    ({ double _v32866 = 7.0; this->f_S__27__21_H = rt::touint_d(_v32866); _v32866; });
}
rt::Value C_S__60__22_L::m_S__40__22_() {
    RT_FN("S__60__22_L.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[9474]), C_S__26_c::sm_S_8_21_Z(1000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(50.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9283]))));
    return rt::NUL;
}
C_S__60__22_L* C_S__60__22_L::alloc_() {
    C_S__60__22_L* o = rt::make<C_S__60__22_L>();
    return o;
}
rt::Value C_S__60__22_L::mk_(rt::Value* a, int n) {
    C_S__60__22_L* o = alloc_();
    o->C_S__60__22_L::ctor_();
    return rt::VO(o);
}
bool C_S__60__22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3c__21_V::dget(id, out);
}
bool C_S__60__22_L::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3c__21_V::dset(id, v);
}
bool C_S__60__22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__3c__21_V::dcall(id, a, n, out);
}
bool C_S__60__22_L::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__3c__21_V::dmeth(id);
}
bool C_S__60__22_L::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__22_L__id)); return true;
    case NM_S__5d__21__3e_: out = rt::V(g::SV.C_S__60__22_L__S__5d__21__3e_); return true;
    case NM_S__20__22_M: out = rt::V(g::SV.C_S__60__22_L__S__20__22_M); return true;
    default: return false;
    }
}
bool C_S__60__22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__22_L__id = rt::touint(v); return true;
    case NM_S__5d__21__3e_: g::SV.C_S__60__22_L__S__5d__21__3e_ = rt::tonum(v); return true;
    case NM_S__20__22_M: g::SV.C_S__60__22_L__S__20__22_M = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__60__22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__2b_::ctor_() {
    RT_FN("S__2d__2b_.S__2d__2b_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ bool _v32867 = true; this->f_S__40__21_R = _v32867; _v32867; });
}
rt::Value C_S__2d__2b_::m_S__26_b() {
    double l_A__loc1_ = NAN;
    RT_FN("S__2d__2b_.S__26_b");
    (l_A__loc1_ = NAN);
    if (((!this->f_S_4_21_K) && this->m_S__20__21_3())) {
        (l_A__loc1_ = this->g_S_5_22__2c_());
        if (((l_A__loc1_ >= 100.0) || (({ rt::Value _o32868 = g::SV.C_S__2d__2b___S_9_21__27_; C_S_7_21__20_* _p32869 = rt::as_ptr<C_S_7_21__20_>(_o32868); _p32869 ? _p32869->m_S__3b__21__2c_(0.0, 100.0) : rt::tonum(rt::dcallv(_o32868, NM_S__3b__21__2c_, rt::V(0.0), rt::V(100.0))); }) <= l_A__loc1_))) {
            (void)(this->m_S__21__22__2b_());
        }
    }
    return rt::NUL;
}
rt::Value C_S__2d__2b_::m_S__21__22__2b_() {
    RT_FN("S__2d__2b_.S__21__22__2b_");
    (void)(({ rt::Value _o32870 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p32871 = rt::as_ptr<C_S_8G>(_o32870); _p32871 ? _p32871->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o32870, NM_S_3_21__20_, rt::VO(this)); }));
    return rt::NUL;
}
bool C_S__2d__2b_::m_S__20__21_3() {
    RT_FN("S__2d__2b_.S__20__21_3");
    return false;
    return false;
}
double C_S__2d__2b_::g_S_5_22__2c_() {
    RT_FN("S__2d__2b_.S_5_22__2c__get");
    return 100.0;
    return 0.0;
}
bool C_S__2d__2b_::g_S__2d_6() {
    RT_FN("S__2d__2b_.S__2d_6_get");
    return ({ bool _t32872 = (!this->f_S_4_21_3); _t32872 ? _t32872 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_4a__id)); });
    return false;
}
bool C_S__2d__2b_::g_S__5d__3b_() {
    RT_FN("S__2d__2b_.S__5d__3b__get");
    return true;
    return false;
}
bool C_S__2d__2b_::g_S__3f__21_a() {
    RT_FN("S__2d__2b_.S__3f__21_a_get");
    return true;
    return false;
}
bool C_S__2d__2b_::g_S__27__22_Q() {
    RT_FN("S__2d__2b_.S__27__22_Q_get");
    return false;
    return false;
}
C_S__2d__2b_* C_S__2d__2b_::alloc_() {
    C_S__2d__2b_* o = rt::make<C_S__2d__2b_>();
    return o;
}
rt::Value C_S__2d__2b_::mk_(rt::Value* a, int n) {
    C_S__2d__2b_* o = alloc_();
    o->C_S__2d__2b_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__2b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S_4_21_3: out = rt::VB(f_S_4_21_3); return true;
    case NM_S__3f__22_M: out = rt::V(f_S__3f__22_M); return true;
    case NM_S__26_b: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2d__2b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_4_21_3: f_S_4_21_3 = rt::T(v); return true;
    case NM_S__3f__22_M: f_S__3f__22_M = rt::tonum(v); return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__2d_6: return false;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2d__2b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_b: out = m_S__26_b(); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    case NM_S_4_21_3: { rt::Value f = rt::VB(f_S_4_21_3); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__22_M: { rt::Value f = rt::V(f_S__3f__22_M); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2d__2b_::dmeth(int id) {
    switch (id) {
    case NM_S__26_b: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S__20__21_3: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__2d_6: return false;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    case NM_S__27__22_Q: return false;
    case NM_S_4_21_3: return false;
    case NM_S__3f__22_M: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2d__2b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__2b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__27_: out = g::SV.C_S__2d__2b___S_9_21__27_; return true;
    default: return false;
    }
}
bool C_S__2d__2b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__27_: g::SV.C_S__2d__2b___S_9_21__27_ = v; return true;
    default: return false;
    }
}
bool C_S__2d__2b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21_8::ctor_() {
    RT_FN("S__20__21_8.S__20__21_8");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32874 = 150.0; this->f_S_6_21_Z = rt::touint_d(_v32874); _v32874; });
    ({ rt::Value _v32875 = rt::trv(rt::VS(g::LS[9475])); this->f_S_1i = rt::slot_string(_v32875); _v32875; });
    ({ rt::Value _v32876 = rt::trv(rt::VS(g::LS[9476])); this->f_S_7_23_ = rt::slot_string(_v32876); _v32876; });
    ({ rt::Value _v32877 = rt::VS(g::LS[9477]); this->f_S__5e__21__23_ = rt::slot_string(_v32877); _v32877; });
    ({ bool _v32878 = true; this->f_S_4_21_3 = _v32878; _v32878; });
}
bool C_S__20__21_8::m_S__20__21_3() {
    RT_FN("S__20__21_8.S__20__21_3");
    return ({ bool _t32880 = this->g_S__2d_6(); _t32880 ? (bool)((({ bool _t32879 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0); _t32879 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t32879; }))) : _t32880; });
    return false;
}
rt::Value C_S__20__21_8::m_S_8_21_s() {
    RT_FN("S__20__21_8.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9478])));
    return rt::NUL;
}
double C_S__20__21_8::g_S_5_22__2c_() {
    RT_FN("S__20__21_8.S_5_22__2c__get");
    return (C_S__26_c::sm_S__21__2d_(false, true) / 500.0);
    return 0.0;
}
C_S__20__21_8* C_S__20__21_8::alloc_() {
    C_S__20__21_8* o = rt::make<C_S__20__21_8>();
    return o;
}
rt::Value C_S__20__21_8::mk_(rt::Value* a, int n) {
    C_S__20__21_8* o = alloc_();
    o->C_S__20__21_8::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__20__21_8::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__20__21_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__20__21_8::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__20__21_8::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__21_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_8__id)); return true;
    default: return false;
    }
}
bool C_S__20__21_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_8__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__21_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__22__2d_::ctor_() {
    RT_FN("S__20__22__2d_.S__20__22__2d_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32881 = 331.0; this->f_S_6_21_Z = rt::touint_d(_v32881); _v32881; });
    ({ rt::Value _v32882 = rt::trv(rt::VS(g::LS[9479])); this->f_S_1i = rt::slot_string(_v32882); _v32882; });
    ({ rt::Value _v32883 = rt::trv(rt::VS(g::LS[9480])); this->f_S_7_23_ = rt::slot_string(_v32883); _v32883; });
    ({ rt::Value _v32884 = rt::VS(g::LS[9481]); this->f_S__5e__21__23_ = rt::slot_string(_v32884); _v32884; });
}
bool C_S__20__22__2d_::m_S__20__21_3() {
    RT_FN("S__20__22__2d_.S__20__21_3");
    return ({ bool _t32886 = ({ bool _t32885 = this->g_S__2d_6(); _t32885 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t32885; }); _t32886 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 170.0)) : _t32886; });
    return false;
}
rt::Value C_S__20__22__2d_::m_S_8_21_s() {
    RT_FN("S__20__22__2d_.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 170.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9482])));
    return rt::NUL;
}
double C_S__20__22__2d_::g_S_5_22__2c_() {
    RT_FN("S__20__22__2d_.S_5_22__2c__get");
    return (rt::tonum((rt::add(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 104.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 104.0)), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 135.0)), rt::arr_at(g::SV.C_S_8G__S__3d_y, 135.0)))) / 1000.0);
    return 0.0;
}
C_S__20__22__2d_* C_S__20__22__2d_::alloc_() {
    C_S__20__22__2d_* o = rt::make<C_S__20__22__2d_>();
    return o;
}
rt::Value C_S__20__22__2d_::mk_(rt::Value* a, int n) {
    C_S__20__22__2d_* o = alloc_();
    o->C_S__20__22__2d_::ctor_();
    return rt::VO(o);
}
bool C_S__20__22__2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__20__22__2d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__20__22__2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__20__22__2d_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__20__22__2d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__22__2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__22__2d___id)); return true;
    default: return false;
    }
}
bool C_S__20__22__2d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__22__2d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__22__2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__5b_::ctor_() {
    RT_FN("S__20__5b_.S__20__5b_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32887 = 155.0; this->f_S_6_21_Z = rt::touint_d(_v32887); _v32887; });
    ({ rt::Value _v32888 = rt::trv(rt::VS(g::LS[9483])); this->f_S_1i = rt::slot_string(_v32888); _v32888; });
    ({ rt::Value _v32889 = rt::trv(rt::VS(g::LS[9484])); this->f_S_7_23_ = rt::slot_string(_v32889); _v32889; });
    ({ rt::Value _v32890 = rt::VS(g::LS[9485]); this->f_S__5e__21__23_ = rt::slot_string(_v32890); _v32890; });
    ({ bool _v32891 = true; this->f_S_4_21_3 = _v32891; _v32891; });
}
bool C_S__20__5b_::m_S__20__21_3() {
    RT_FN("S__20__5b_.S__20__21_3");
    return ({ bool _t32894 = ({ bool _t32893 = this->g_S__2d_6(); _t32893 ? (bool)((({ bool _t32892 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0); _t32892 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t32892; }))) : _t32893; }); _t32894 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(7200.0))) : _t32894; });
    return false;
}
rt::Value C_S__20__5b_::m_S_8_21_s() {
    RT_FN("S__20__5b_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9486])));
    return rt::NUL;
}
double C_S__20__5b_::g_S_5_22__2c_() {
    RT_FN("S__20__5b_.S_5_22__2c__get");
    return (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0)) / 180000.0);
    return 0.0;
}
C_S__20__5b_* C_S__20__5b_::alloc_() {
    C_S__20__5b_* o = rt::make<C_S__20__5b_>();
    return o;
}
rt::Value C_S__20__5b_::mk_(rt::Value* a, int n) {
    C_S__20__5b_* o = alloc_();
    o->C_S__20__5b_::ctor_();
    return rt::VO(o);
}
bool C_S__20__5b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__20__5b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__20__5b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__20__5b_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__20__5b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__5b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__5b___id)); return true;
    default: return false;
    }
}
bool C_S__20__5b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__5b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__5b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__5d_::ctor_() {
    RT_FN("S__20__5d_.S__20__5d_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32895 = 130.0; this->f_S_6_21_Z = rt::touint_d(_v32895); _v32895; });
    ({ rt::Value _v32896 = rt::trv(rt::VS(g::LS[9487])); this->f_S_1i = rt::slot_string(_v32896); _v32896; });
    ({ rt::Value _v32897 = rt::trv(rt::VS(g::LS[9488])); this->f_S_7_23_ = rt::slot_string(_v32897); _v32897; });
    ({ rt::Value _v32898 = rt::VS(g::LS[9489]); this->f_S__5e__21__23_ = rt::slot_string(_v32898); _v32898; });
    ({ bool _v32899 = true; this->f_S_4_21_3 = _v32899; _v32899; });
}
bool C_S__20__5d_::m_S__20__21_3() {
    RT_FN("S__20__5d_.S__20__21_3");
    return ({ bool _t32901 = ({ bool _t32900 = this->g_S__2d_6(); _t32900 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)) : _t32900; }); _t32901 ? (bool)(rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 3.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 3.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 3.0)), rt::V(86400.0))) : _t32901; });
    return false;
}
rt::Value C_S__20__5d_::m_S_8_21_s() {
    RT_FN("S__20__5d_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9490])));
    return rt::NUL;
}
double C_S__20__5d_::g_S_5_22__2c_() {
    RT_FN("S__20__5d_.S_5_22__2c__get");
    return (rt::tonum((rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 3.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 3.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 3.0)))) / 4320000.0);
    return 0.0;
}
C_S__20__5d_* C_S__20__5d_::alloc_() {
    C_S__20__5d_* o = rt::make<C_S__20__5d_>();
    return o;
}
rt::Value C_S__20__5d_::mk_(rt::Value* a, int n) {
    C_S__20__5d_* o = alloc_();
    o->C_S__20__5d_::ctor_();
    return rt::VO(o);
}
bool C_S__20__5d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__20__5d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__20__5d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__20__5d_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__20__5d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__5d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__5d___id)); return true;
    default: return false;
    }
}
bool C_S__20__5d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__5d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__5d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__60_::ctor_() {
    RT_FN("S__20__60_.S__20__60_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32902 = 160.0; this->f_S_6_21_Z = rt::touint_d(_v32902); _v32902; });
    ({ rt::Value _v32903 = rt::trv(rt::VS(g::LS[9491])); this->f_S_1i = rt::slot_string(_v32903); _v32903; });
    ({ rt::Value _v32904 = rt::trv(rt::VS(g::LS[9492])); this->f_S_7_23_ = rt::slot_string(_v32904); _v32904; });
    ({ rt::Value _v32905 = rt::VS(g::LS[8357]); this->f_S__5e__21__23_ = rt::slot_string(_v32905); _v32905; });
    ({ double _v32906 = 2000.0; this->f_S__3f__22_M = _v32906; _v32906; });
}
bool C_S__20__60_::m_S__20__21_3() {
    RT_FN("S__20__60_.S__20__21_3");
    return ({ bool _t32910 = ({ bool _t32909 = this->g_S__2d_6(); _t32909 ? (bool)((({ bool _t32908 = ({ bool _t32907 = C_S_8G::sm_S_7d(g::SV.C_S__3f_y__id); _t32907 ? _t32907 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_0N__id)); }); _t32908 ? _t32908 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S__27__21_S__id)); }))) : _t32909; }); _t32910 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t32910; });
    return false;
}
double C_S__20__60_::g_S_5_22__2c_() {
    RT_FN("S__20__60_.S_5_22__2c__get");
    return 0.2;
    return 0.0;
}
bool C_S__20__60_::g_S__27__22_Q() {
    RT_FN("S__20__60_.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 24.0);
    return false;
}
C_S__20__60_* C_S__20__60_::alloc_() {
    C_S__20__60_* o = rt::make<C_S__20__60_>();
    return o;
}
rt::Value C_S__20__60_::mk_(rt::Value* a, int n) {
    C_S__20__60_* o = alloc_();
    o->C_S__20__60_::ctor_();
    return rt::VO(o);
}
bool C_S__20__60_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__20__60_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__20__60_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__20__60_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__20__60_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20__60_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__60___id)); return true;
    default: return false;
    }
}
bool C_S__20__60_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__60___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__60_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__21_o::ctor_() {
    RT_FN("S__21__21_o.S__21__21_o");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32911 = 256.0; this->f_S_6_21_Z = rt::touint_d(_v32911); _v32911; });
    ({ rt::Value _v32912 = rt::trv(rt::VS(g::LS[8361])); this->f_S_1i = rt::slot_string(_v32912); _v32912; });
    ({ rt::Value _v32913 = rt::trv(rt::VS(g::LS[9493])); this->f_S_7_23_ = rt::slot_string(_v32913); _v32913; });
    ({ rt::Value _v32914 = rt::VS(g::LS[8362]); this->f_S__5e__21__23_ = rt::slot_string(_v32914); _v32914; });
    ({ bool _v32915 = true; this->f_S_4_21_3 = _v32915; _v32915; });
}
bool C_S__21__21_o::m_S__20__21_3() {
    RT_FN("S__21__21_o.S__20__21_3");
    return ({ bool _t32916 = this->g_S__2d_6(); _t32916 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t32916; });
    return false;
}
rt::Value C_S__21__21_o::m_S_8_21_s() {
    RT_FN("S__21__21_o.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9494])));
    return rt::NUL;
}
double C_S__21__21_o::g_S_5_22__2c_() {
    RT_FN("S__21__21_o.S_5_22__2c__get");
    return 10.0;
    return 0.0;
}
C_S__21__21_o* C_S__21__21_o::alloc_() {
    C_S__21__21_o* o = rt::make<C_S__21__21_o>();
    return o;
}
rt::Value C_S__21__21_o::mk_(rt::Value* a, int n) {
    C_S__21__21_o* o = alloc_();
    o->C_S__21__21_o::ctor_();
    return rt::VO(o);
}
bool C_S__21__21_o::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__21__21_o::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__21__21_o::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__21__21_o::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__21__21_o::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__21_o::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21_o__id)); return true;
    default: return false;
    }
}
bool C_S__21__21_o::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21_o__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__21_o::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__22_B::ctor_() {
    RT_FN("S__21__22_B.S__21__22_B");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32917 = 368.0; this->f_S_6_21_Z = rt::touint_d(_v32917); _v32917; });
    ({ rt::Value _v32918 = rt::trv(rt::VS(g::LS[9495])); this->f_S_1i = rt::slot_string(_v32918); _v32918; });
    ({ rt::Value _v32919 = rt::trv(rt::VS(g::LS[9496])); this->f_S_7_23_ = rt::slot_string(_v32919); _v32919; });
    ({ rt::Value _v32920 = rt::VS(g::LS[9497]); this->f_S__5e__21__23_ = rt::slot_string(_v32920); _v32920; });
    ({ bool _v32921 = true; this->f_S_4_21_3 = _v32921; _v32921; });
    ({ double _v32922 = 10000.0; this->f_S__3f__22_M = _v32922; _v32922; });
}
bool C_S__21__22_B::m_S__20__21_3() {
    RT_FN("S__21__22_B.S__20__21_3");
    return ({ bool _t32926 = ({ bool _t32925 = ({ bool _t32924 = ({ bool _t32923 = this->g_S__2d_6(); _t32923 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)) : _t32923; }); _t32924 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t32924; }); _t32925 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 235.0)) : _t32925; }); _t32926 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t32926; });
    return false;
}
rt::Value C_S__21__22_B::m_S__21__22__2b_() {
    RT_FN("S__21__22_B.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o32927 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p32928 = rt::as_ptr<C_S__20_g>(_o32927); _p32928 ? _p32928->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 10.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o32927, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 10.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S__21__22_B::m_S_8_21_s() {
    RT_FN("S__21__22_B.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9500])));
    return rt::NUL;
}
double C_S__21__22_B::g_S_5_22__2c_() {
    RT_FN("S__21__22_B.S_5_22__2c__get");
    return (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)) / 10000.0);
    return 0.0;
}
C_S__21__22_B* C_S__21__22_B::alloc_() {
    C_S__21__22_B* o = rt::make<C_S__21__22_B>();
    return o;
}
rt::Value C_S__21__22_B::mk_(rt::Value* a, int n) {
    C_S__21__22_B* o = alloc_();
    o->C_S__21__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__21__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__21__22_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__21__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__21__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__21__22_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22_B__id)); return true;
    default: return false;
    }
}
bool C_S__21__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__22_C::ctor_() {
    RT_FN("S__21__22_C.S__21__22_C");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32929 = 362.0; this->f_S_6_21_Z = rt::touint_d(_v32929); _v32929; });
    ({ rt::Value _v32930 = rt::trv(rt::VS(g::LS[9501])); this->f_S_1i = rt::slot_string(_v32930); _v32930; });
    ({ rt::Value _v32931 = rt::trv(rt::VS(g::LS[9502])); this->f_S_7_23_ = rt::slot_string(_v32931); _v32931; });
    ({ rt::Value _v32932 = rt::VS(g::LS[9503]); this->f_S__5e__21__23_ = rt::slot_string(_v32932); _v32932; });
    ({ bool _v32933 = true; this->f_S_4_21_3 = _v32933; _v32933; });
    ({ double _v32934 = 10000.0; this->f_S__3f__22_M = _v32934; _v32934; });
}
bool C_S__21__22_C::m_S__20__21_3() {
    RT_FN("S__21__22_C.S__20__21_3");
    return ({ bool _t32938 = ({ bool _t32937 = ({ bool _t32936 = ({ bool _t32935 = this->g_S__2d_6(); _t32935 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 12.0)) : _t32935; }); _t32936 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t32936; }); _t32937 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 235.0)) : _t32937; }); _t32938 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t32938; });
    return false;
}
rt::Value C_S__21__22_C::m_S__21__22__2b_() {
    RT_FN("S__21__22_C.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o32939 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p32940 = rt::as_ptr<C_S__20_g>(_o32939); _p32940 ? _p32940->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 12.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o32939, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 12.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S__21__22_C::m_S_8_21_s() {
    RT_FN("S__21__22_C.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9504])));
    return rt::NUL;
}
double C_S__21__22_C::g_S_5_22__2c_() {
    RT_FN("S__21__22_C.S_5_22__2c__get");
    return ((0.5 * rt::m_log((1.0 + rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 96.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 96.0)))))) / 10000.0);
    return 0.0;
}
C_S__21__22_C* C_S__21__22_C::alloc_() {
    C_S__21__22_C* o = rt::make<C_S__21__22_C>();
    return o;
}
rt::Value C_S__21__22_C::mk_(rt::Value* a, int n) {
    C_S__21__22_C* o = alloc_();
    o->C_S__21__22_C::ctor_();
    return rt::VO(o);
}
bool C_S__21__22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__21__22_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__21__22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__21__22_C::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__21__22_C::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__22_C__id)); return true;
    default: return false;
    }
}
bool C_S__21__22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__22_C__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21__22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21_X::ctor_() {
    RT_FN("S__21_X.S__21_X");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32941 = 184.0; this->f_S_6_21_Z = rt::touint_d(_v32941); _v32941; });
    ({ rt::Value _v32942 = rt::trv(rt::VS(g::LS[9505])); this->f_S_1i = rt::slot_string(_v32942); _v32942; });
    ({ rt::Value _v32943 = rt::trv(rt::VS(g::LS[9506])); this->f_S_7_23_ = rt::slot_string(_v32943); _v32943; });
    ({ rt::Value _v32944 = rt::VS(g::LS[9507]); this->f_S__5e__21__23_ = rt::slot_string(_v32944); _v32944; });
    ({ double _v32945 = 2750.0; this->f_S__3f__22_M = _v32945; _v32945; });
}
rt::Value C_S__21_X::m_S__21__22__2b_() {
    RT_FN("S__21_X.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o32946 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p32947 = rt::as_ptr<C_S__20_g>(_o32946); _p32947 ? _p32947->m_S__26__2b_(rt::toint_d(929.0), rt::toint_d(0.0)) : rt::dcallv(_o32946, NM_S__26__2b_, rt::V(929.0), rt::V(0.0)); }));
    return rt::NUL;
}
bool C_S__21_X::m_S__20__21_3() {
    RT_FN("S__21_X.S__20__21_3");
    return ({ bool _t32949 = ({ bool _t32948 = this->g_S__2d_6(); _t32948 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 32.0)) : _t32948; }); _t32949 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t32949; });
    return false;
}
bool C_S__21_X::g_S__27__22_Q() {
    RT_FN("S__21_X.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 32.0);
    return false;
}
C_S__21_X* C_S__21_X::alloc_() {
    C_S__21_X* o = rt::make<C_S__21_X>();
    return o;
}
rt::Value C_S__21_X::mk_(rt::Value* a, int n) {
    C_S__21_X* o = alloc_();
    o->C_S__21_X::ctor_();
    return rt::VO(o);
}
bool C_S__21_X::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__21_X::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__21_X::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__21_X::dmeth(int id) {
    switch (id) {
    case NM_S__21__22__2b_: return true;
    case NM_S__20__21_3: return true;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__21_X::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21_X::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21_X__id)); return true;
    default: return false;
    }
}
bool C_S__21_X::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21_X__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21_X::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__21_o::ctor_() {
    RT_FN("S__23__21_o.S__23__21_o");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32950 = 268.0; this->f_S_6_21_Z = rt::touint_d(_v32950); _v32950; });
    ({ rt::Value _v32951 = rt::trv(rt::VS(g::LS[9508])); this->f_S_1i = rt::slot_string(_v32951); _v32951; });
    ({ rt::Value _v32952 = rt::add(rt::add(rt::trv(rt::VS(g::LS[9509])), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9510]))); this->f_S_7_23_ = rt::slot_string(_v32952); _v32952; });
    ({ rt::Value _v32953 = rt::VS(g::LS[9511]); this->f_S__5e__21__23_ = rt::slot_string(_v32953); _v32953; });
    ({ bool _v32954 = true; this->f_S_4_21_3 = _v32954; _v32954; });
}
bool C_S__23__21_o::m_S__20__21_3() {
    RT_FN("S__23__21_o.S__20__21_3");
    return ({ bool _t32956 = ({ bool _t32955 = this->g_S__2d_6(); _t32955 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 85.0)) : _t32955; }); _t32956 ? (bool)(C_S_8G::sm_S__27__22_(g::SV.C_S_0_21_5__id)) : _t32956; });
    return false;
}
rt::Value C_S__23__21_o::m_S_8_21_s() {
    RT_FN("S__23__21_o.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9512])));
    return rt::NUL;
}
rt::Value C_S__23__21_o::m_S__21__22__2b_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__23__21_o.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    {
        std::vector<rt::Value> _lst32957;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst32957);
        for (const rt::Value& _x32958 : _lst32957) {
            l_A__loc1_ = _x32958;
            if (rt::is_class(l_A__loc1_, C_S__5d__3c_::CI)) {
                (void)(({ rt::Value _o32959 = l_A__loc1_; C_S__60_6* _p32960 = rt::as_ptr<C_S__60_6>(_o32959); _p32960 ? _p32960->m_S__25__21__3c_() : rt::dcallv(_o32959, NM_S__25__21__3c_); }));
            }
        }
    }
    return rt::NUL;
}
double C_S__23__21_o::g_S_5_22__2c_() {
    RT_FN("S__23__21_o.S_5_22__2c__get");
    return (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0)) / 1000000.0);
    return 0.0;
}
C_S__23__21_o* C_S__23__21_o::alloc_() {
    C_S__23__21_o* o = rt::make<C_S__23__21_o>();
    return o;
}
rt::Value C_S__23__21_o::mk_(rt::Value* a, int n) {
    C_S__23__21_o* o = alloc_();
    o->C_S__23__21_o::ctor_();
    return rt::VO(o);
}
bool C_S__23__21_o::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__23__21_o::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__23__21_o::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__23__21_o::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__23__21_o::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21_o::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21_o__id)); return true;
    default: return false;
    }
}
bool C_S__23__21_o::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21_o__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__21_o::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__21_q::ctor_() {
    RT_FN("S__23__21_q.S__23__21_q");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32961 = 277.0; this->f_S_6_21_Z = rt::touint_d(_v32961); _v32961; });
    ({ rt::Value _v32962 = rt::trv(rt::VS(g::LS[9513])); this->f_S_1i = rt::slot_string(_v32962); _v32962; });
    ({ rt::Value _v32963 = rt::trv(rt::VS(g::LS[9514])); this->f_S_7_23_ = rt::slot_string(_v32963); _v32963; });
    ({ rt::Value _v32964 = rt::VS(g::LS[9515]); this->f_S__5e__21__23_ = rt::slot_string(_v32964); _v32964; });
    ({ bool _v32965 = true; this->f_S_4_21_3 = _v32965; _v32965; });
    ({ double _v32966 = 2000.0; this->f_S__3f__22_M = _v32966; _v32966; });
}
bool C_S__23__21_q::m_S__20__21_3() {
    RT_FN("S__23__21_q.S__20__21_3");
    return ({ bool _t32971 = ({ bool _t32970 = ({ bool _t32969 = ({ bool _t32968 = ({ bool _t32967 = this->g_S__2d_6(); _t32967 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 2.0)) : _t32967; }); _t32968 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t32968; }); _t32969 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t32969; }); _t32970 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__27__2d___id)) : _t32970; }); _t32971 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3c__27___id)) : _t32971; });
    return false;
}
rt::Value C_S__23__21_q::m_S__21__22__2b_() {
    RT_FN("S__23__21_q.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o32972 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p32973 = rt::as_ptr<C_S__20_g>(_o32972); _p32973 ? _p32973->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o32972, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S__23__21_q::m_S_8_21_s() {
    RT_FN("S__23__21_q.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9516])));
    return rt::NUL;
}
double C_S__23__21_q::g_S_5_22__2c_() {
    RT_FN("S__23__21_q.S_5_22__2c__get");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(52.0)) / 2592000.0);
    return 0.0;
}
C_S__23__21_q* C_S__23__21_q::alloc_() {
    C_S__23__21_q* o = rt::make<C_S__23__21_q>();
    return o;
}
rt::Value C_S__23__21_q::mk_(rt::Value* a, int n) {
    C_S__23__21_q* o = alloc_();
    o->C_S__23__21_q::ctor_();
    return rt::VO(o);
}
bool C_S__23__21_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__23__21_q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__23__21_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__23__21_q::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__23__21_q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21_q__id)); return true;
    default: return false;
    }
}
bool C_S__23__21_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21_q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__21_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__22_3::ctor_() {
    RT_FN("S__23__22_3.S__23__22_3");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32974 = 344.0; this->f_S_6_21_Z = rt::touint_d(_v32974); _v32974; });
    ({ rt::Value _v32975 = rt::trv(rt::VS(g::LS[9517])); this->f_S_1i = rt::slot_string(_v32975); _v32975; });
    ({ rt::Value _v32976 = rt::trv(rt::VS(g::LS[9518])); this->f_S_7_23_ = rt::slot_string(_v32976); _v32976; });
    ({ rt::Value _v32977 = rt::VS(g::LS[9519]); this->f_S__5e__21__23_ = rt::slot_string(_v32977); _v32977; });
}
bool C_S__23__22_3::m_S__20__21_3() {
    RT_FN("S__23__22_3.S__20__21_3");
    return ({ bool _t32978 = this->g_S__2d_6(); _t32978 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 180.0)) : _t32978; });
    return false;
}
rt::Value C_S__23__22_3::m_S_8_21_s() {
    RT_FN("S__23__22_3.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 180.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9520])));
    return rt::NUL;
}
double C_S__23__22_3::g_S_5_22__2c_() {
    RT_FN("S__23__22_3.S_5_22__2c__get");
    return (rt::m_pow((2.0 * C_S__26_c::sm_S_1_22__2c_(C_S__26_c::dsm_S_1_22__2c__0())), 2.0) / 1000000000.0);
    return 0.0;
}
C_S__23__22_3* C_S__23__22_3::alloc_() {
    C_S__23__22_3* o = rt::make<C_S__23__22_3>();
    return o;
}
rt::Value C_S__23__22_3::mk_(rt::Value* a, int n) {
    C_S__23__22_3* o = alloc_();
    o->C_S__23__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__23__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__23__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__23__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__23__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__23__22_3::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__22_3__id)); return true;
    case NM_S_3_22_L: out = rt::V(g::SV.C_S__23__22_3__S_3_22_L); return true;
    default: return false;
    }
}
bool C_S__23__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__22_3__id = rt::touint(v); return true;
    case NM_S_3_22_L: g::SV.C_S__23__22_3__S_3_22_L = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__23__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23_C::ctor_() {
    RT_FN("S__23_C.S__23_C");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32979 = 124.0; this->f_S_6_21_Z = rt::touint_d(_v32979); _v32979; });
    ({ rt::Value _v32980 = rt::trv(rt::VS(g::LS[9521])); this->f_S_1i = rt::slot_string(_v32980); _v32980; });
    ({ rt::Value _v32981 = rt::trv(rt::VS(g::LS[9522])); this->f_S_7_23_ = rt::slot_string(_v32981); _v32981; });
    ({ rt::Value _v32982 = rt::VS(g::LS[9523]); this->f_S__5e__21__23_ = rt::slot_string(_v32982); _v32982; });
    ({ double _v32983 = 20.0; this->f_S__3f__22_M = _v32983; _v32983; });
}
bool C_S__23_C::m_S__20__21_3() {
    RT_FN("S__23_C.S__20__21_3");
    return (C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M);
    return false;
}
C_S__23_C* C_S__23_C::alloc_() {
    C_S__23_C* o = rt::make<C_S__23_C>();
    return o;
}
rt::Value C_S__23_C::mk_(rt::Value* a, int n) {
    C_S__23_C* o = alloc_();
    o->C_S__23_C::ctor_();
    return rt::VO(o);
}
bool C_S__23_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__23_C::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__23_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__23_C::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__23_C::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23_C__id)); return true;
    default: return false;
    }
}
bool C_S__23_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23_C__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__21_z::ctor_() {
    RT_FN("S__25__21_z.S__25__21_z");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32984 = 307.0; this->f_S_6_21_Z = rt::touint_d(_v32984); _v32984; });
    ({ rt::Value _v32985 = rt::trv(rt::VS(g::LS[9524])); this->f_S_1i = rt::slot_string(_v32985); _v32985; });
    ({ rt::Value _v32986 = rt::trv(rt::VS(g::LS[9525])); this->f_S_7_23_ = rt::slot_string(_v32986); _v32986; });
    ({ rt::Value _v32987 = rt::VS(g::LS[9526]); this->f_S__5e__21__23_ = rt::slot_string(_v32987); _v32987; });
    ({ double _v32988 = 5000.0; this->f_S__3f__22_M = _v32988; _v32988; });
}
bool C_S__25__21_z::m_S__20__21_3() {
    RT_FN("S__25__21_z.S__20__21_3");
    return ({ bool _t32993 = ({ bool _t32992 = ({ bool _t32991 = ({ bool _t32990 = ({ bool _t32989 = this->g_S__2d_6(); _t32989 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t32989; }); _t32990 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t32990; }); _t32991 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)) : _t32991; }); _t32992 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t32992; }); _t32993 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)) : _t32993; });
    return false;
}
rt::Value C_S__25__21_z::m_S_8_21_s() {
    RT_FN("S__25__21_z.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 125.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9527])));
    return rt::NUL;
}
double C_S__25__21_z::g_S_5_22__2c_() {
    RT_FN("S__25__21_z.S_5_22__2c__get");
    return (rt::m_pow(rt::m_log((1.0 + C_S__23__21__21_::sm_S__2c_d())), 3.0) / 500000.0);
    return 0.0;
}
bool C_S__25__21_z::g_S__27__22_Q() {
    RT_FN("S__25__21_z.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 125.0);
    return false;
}
C_S__25__21_z* C_S__25__21_z::alloc_() {
    C_S__25__21_z* o = rt::make<C_S__25__21_z>();
    return o;
}
rt::Value C_S__25__21_z::mk_(rt::Value* a, int n) {
    C_S__25__21_z* o = alloc_();
    o->C_S__25__21_z::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__25__21_z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__25__21_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__25__21_z::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__25__21_z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_z__id)); return true;
    default: return false;
    }
}
bool C_S__25__21_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_z__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__21_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__22__40_::ctor_() {
    RT_FN("S__25__22__40_.S__25__22__40_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v32994 = 361.0; this->f_S_6_21_Z = rt::touint_d(_v32994); _v32994; });
    ({ rt::Value _v32995 = rt::trv(rt::VS(g::LS[9528])); this->f_S_1i = rt::slot_string(_v32995); _v32995; });
    ({ rt::Value _v32996 = rt::trv(rt::VS(g::LS[9529])); this->f_S_7_23_ = rt::slot_string(_v32996); _v32996; });
    ({ rt::Value _v32997 = rt::VS(g::LS[9530]); this->f_S__5e__21__23_ = rt::slot_string(_v32997); _v32997; });
    ({ bool _v32998 = true; this->f_S_4_21_3 = _v32998; _v32998; });
    ({ double _v32999 = 10000.0; this->f_S__3f__22_M = _v32999; _v32999; });
}
bool C_S__25__22__40_::m_S__20__21_3() {
    RT_FN("S__25__22__40_.S__20__21_3");
    return ({ bool _t33003 = ({ bool _t33002 = ({ bool _t33001 = ({ bool _t33000 = this->g_S__2d_6(); _t33000 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 9.0)) : _t33000; }); _t33001 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t33001; }); _t33002 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 235.0)) : _t33002; }); _t33003 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33003; });
    return false;
}
rt::Value C_S__25__22__40_::m_S__21__22__2b_() {
    RT_FN("S__25__22__40_.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33004 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33005 = rt::as_ptr<C_S__20_g>(_o33004); _p33005 ? _p33005->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 9.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o33004, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 9.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S__25__22__40_::m_S_8_21_s() {
    RT_FN("S__25__22__40_.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9531])));
    return rt::NUL;
}
double C_S__25__22__40_::g_S_5_22__2c_() {
    RT_FN("S__25__22__40_.S_5_22__2c__get");
    return ((0.5 * rt::m_log((1.0 + C_S__26_c::sm_S__3e__21_h(false, false, true)))) / 10000.0);
    return 0.0;
}
C_S__25__22__40_* C_S__25__22__40_::alloc_() {
    C_S__25__22__40_* o = rt::make<C_S__25__22__40_>();
    return o;
}
rt::Value C_S__25__22__40_::mk_(rt::Value* a, int n) {
    C_S__25__22__40_* o = alloc_();
    o->C_S__25__22__40_::ctor_();
    return rt::VO(o);
}
bool C_S__25__22__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__25__22__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__25__22__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__25__22__40_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__25__22__40_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__22__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__22__40___id)); return true;
    default: return false;
    }
}
bool C_S__25__22__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__22__40___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__22__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__21__2b_::ctor_() {
    RT_FN("S__22__21__2b_.S__22__21__2b_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33006 = 161.0; this->f_S_6_21_Z = rt::touint_d(_v33006); _v33006; });
    ({ rt::Value _v33007 = rt::trv(rt::VS(g::LS[9532])); this->f_S_1i = rt::slot_string(_v33007); _v33007; });
    ({ rt::Value _v33008 = rt::trv(rt::VS(g::LS[9533])); this->f_S_7_23_ = rt::slot_string(_v33008); _v33008; });
    ({ rt::Value _v33009 = rt::VS(g::LS[9534]); this->f_S__5e__21__23_ = rt::slot_string(_v33009); _v33009; });
    ({ double _v33010 = 1500.0; this->f_S__3f__22_M = _v33010; _v33010; });
}
rt::Value C_S__22__21__2b_::m_S__21__22__2b_() {
    RT_FN("S__22__21__2b_.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33011 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33012 = rt::as_ptr<C_S__20_g>(_o33011); _p33012 ? _p33012->m_S__26__2b_(rt::toint_d(928.0), rt::toint_d(0.0)) : rt::dcallv(_o33011, NM_S__26__2b_, rt::V(928.0), rt::V(0.0)); }));
    return rt::NUL;
}
bool C_S__22__21__2b_::m_S__20__21_3() {
    RT_FN("S__22__21__2b_.S__20__21_3");
    return ({ bool _t33013 = (C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M); _t33013 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 24.0)) : _t33013; });
    return false;
}
bool C_S__22__21__2b_::g_S__27__22_Q() {
    RT_FN("S__22__21__2b_.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 24.0);
    return false;
}
C_S__22__21__2b_* C_S__22__21__2b_::alloc_() {
    C_S__22__21__2b_* o = rt::make<C_S__22__21__2b_>();
    return o;
}
rt::Value C_S__22__21__2b_::mk_(rt::Value* a, int n) {
    C_S__22__21__2b_* o = alloc_();
    o->C_S__22__21__2b_::ctor_();
    return rt::VO(o);
}
bool C_S__22__21__2b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__22__21__2b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__22__21__2b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__22__21__2b_::dmeth(int id) {
    switch (id) {
    case NM_S__21__22__2b_: return true;
    case NM_S__20__21_3: return true;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__22__21__2b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__21__2b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21__2b___id)); return true;
    default: return false;
    }
}
bool C_S__22__21__2b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21__2b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21__2b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__21_5::ctor_() {
    RT_FN("S__22__21_5.S__22__21_5");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33014 = 156.0; this->f_S_6_21_Z = rt::touint_d(_v33014); _v33014; });
    ({ rt::Value _v33015 = rt::trv(rt::VS(g::LS[9535])); this->f_S_1i = rt::slot_string(_v33015); _v33015; });
    ({ rt::Value _v33016 = rt::trv(rt::VS(g::LS[9536])); this->f_S_7_23_ = rt::slot_string(_v33016); _v33016; });
    ({ rt::Value _v33017 = rt::VS(g::LS[9537]); this->f_S__5e__21__23_ = rt::slot_string(_v33017); _v33017; });
    ({ bool _v33018 = true; this->f_S_4_21_3 = _v33018; _v33018; });
}
bool C_S__22__21_5::m_S__20__21_3() {
    RT_FN("S__22__21_5.S__20__21_3");
    return ({ bool _t33020 = this->g_S__2d_6(); _t33020 ? (bool)((({ bool _t33019 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0); _t33019 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33019; }))) : _t33020; });
    return false;
}
rt::Value C_S__22__21_5::m_S_8_21_s() {
    RT_FN("S__22__21_5.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9538])));
    return rt::NUL;
}
double C_S__22__21_5::g_S_5_22__2c_() {
    RT_FN("S__22__21_5.S_5_22__2c__get");
    return (({ rt::Value _o33021 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id); C_S_84* _p33022 = rt::as_ptr<C_S_84>(_o33021); _p33022 ? _p33022->g_S_2_2d_() : rt::tonum(rt::dget(_o33021, NM_S_2_2d_)); }) / 400.0);
    return 0.0;
}
C_S__22__21_5* C_S__22__21_5::alloc_() {
    C_S__22__21_5* o = rt::make<C_S__22__21_5>();
    return o;
}
rt::Value C_S__22__21_5::mk_(rt::Value* a, int n) {
    C_S__22__21_5* o = alloc_();
    o->C_S__22__21_5::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__22__21_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__22__21_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__22__21_5::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__22__21_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__21_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_5__id)); return true;
    default: return false;
    }
}
bool C_S__22__21_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__21_s::ctor_() {
    RT_FN("S__22__21_s.S__22__21_s");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33023 = 275.0; this->f_S_6_21_Z = rt::touint_d(_v33023); _v33023; });
    ({ rt::Value _v33024 = rt::trv(rt::VS(g::LS[9539])); this->f_S_1i = rt::slot_string(_v33024); _v33024; });
    ({ rt::Value _v33025 = rt::trv(rt::VS(g::LS[9540])); this->f_S_7_23_ = rt::slot_string(_v33025); _v33025; });
    ({ rt::Value _v33026 = rt::VS(g::LS[9541]); this->f_S__5e__21__23_ = rt::slot_string(_v33026); _v33026; });
    ({ bool _v33027 = true; this->f_S_4_21_3 = _v33027; _v33027; });
    ({ double _v33028 = 2000.0; this->f_S__3f__22_M = _v33028; _v33028; });
}
bool C_S__22__21_s::m_S__20__21_3() {
    RT_FN("S__22__21_s.S__20__21_3");
    return ({ bool _t33033 = ({ bool _t33032 = ({ bool _t33031 = ({ bool _t33030 = ({ bool _t33029 = this->g_S__2d_6(); _t33029 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 5.0)) : _t33029; }); _t33030 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33030; }); _t33031 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33031; }); _t33032 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_21__3e___id)) : _t33032; }); _t33033 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_S__id)) : _t33033; });
    return false;
}
rt::Value C_S__22__21_s::m_S__21__22__2b_() {
    RT_FN("S__22__21_s.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33034 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33035 = rt::as_ptr<C_S__20_g>(_o33034); _p33035 ? _p33035->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33034, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S__22__21_s::m_S_8_21_s() {
    RT_FN("S__22__21_s.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9542])));
    return rt::NUL;
}
double C_S__22__21_s::g_S_5_22__2c_() {
    RT_FN("S__22__21_s.S_5_22__2c__get");
    return ((C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21_O__id, true) * 0.5) / 100000.0);
    return 0.0;
}
C_S__22__21_s* C_S__22__21_s::alloc_() {
    C_S__22__21_s* o = rt::make<C_S__22__21_s>();
    return o;
}
rt::Value C_S__22__21_s::mk_(rt::Value* a, int n) {
    C_S__22__21_s* o = alloc_();
    o->C_S__22__21_s::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__22__21_s::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__22__21_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__22__21_s::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__22__21_s::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__21_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_s__id)); return true;
    default: return false;
    }
}
bool C_S__22__21_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__22_I::ctor_() {
    RT_FN("S__22__22_I.S__22__22_I");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33036 = 386.0; this->f_S_6_21_Z = rt::touint_d(_v33036); _v33036; });
    ({ rt::Value _v33037 = rt::trv(rt::VS(g::LS[9543])); this->f_S_1i = rt::slot_string(_v33037); _v33037; });
    ({ rt::Value _v33038 = rt::trv(rt::VS(g::LS[9544])); this->f_S_7_23_ = rt::slot_string(_v33038); _v33038; });
    ({ rt::Value _v33039 = rt::VS(g::LS[9545]); this->f_S__5e__21__23_ = rt::slot_string(_v33039); _v33039; });
    ({ double _v33040 = 50000.0; this->f_S__3f__22_M = _v33040; _v33040; });
}
bool C_S__22__22_I::m_S__20__21_3() {
    RT_FN("S__22__22_I.S__20__21_3");
    return ({ bool _t33044 = ({ bool _t33043 = ({ bool _t33042 = ({ bool _t33041 = this->g_S__2d_6(); _t33041 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t33041; }); _t33042 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 255.0)) : _t33042; }); _t33043 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33043; }); _t33044 ? (bool)((((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[718])))) >= 4.0)) : _t33044; });
    return false;
}
rt::Value C_S__22__22_I::m_S_8_21_s() {
    RT_FN("S__22__22_I.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 255.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9546])));
    return rt::NUL;
}
double C_S__22__22_I::g_S_5_22__2c_() {
    RT_FN("S__22__22_I.S_5_22__2c__get");
    return (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0)) / 1000000.0);
    return 0.0;
}
bool C_S__22__22_I::g_S__27__22_Q() {
    RT_FN("S__22__22_I.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 255.0);
    return false;
}
C_S__22__22_I* C_S__22__22_I::alloc_() {
    C_S__22__22_I* o = rt::make<C_S__22__22_I>();
    return o;
}
rt::Value C_S__22__22_I::mk_(rt::Value* a, int n) {
    C_S__22__22_I* o = alloc_();
    o->C_S__22__22_I::ctor_();
    return rt::VO(o);
}
bool C_S__22__22_I::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__22__22_I::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__22__22_I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__22__22_I::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__22__22_I::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__22_I::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__22_I__id)); return true;
    default: return false;
    }
}
bool C_S__22__22_I::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__22_I__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__22_I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22_2::ctor_() {
    RT_FN("S__22_2.S__22_2");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33045 = 178.0; this->f_S_6_21_Z = rt::touint_d(_v33045); _v33045; });
    ({ rt::Value _v33046 = rt::trv(rt::VS(g::LS[8309])); this->f_S_1i = rt::slot_string(_v33046); _v33046; });
    ({ rt::Value _v33047 = rt::trv(rt::VS(g::LS[9547])); this->f_S_7_23_ = rt::slot_string(_v33047); _v33047; });
    ({ rt::Value _v33048 = rt::VS(g::LS[8310]); this->f_S__5e__21__23_ = rt::slot_string(_v33048); _v33048; });
    ({ bool _v33049 = true; this->f_S_4_21_3 = _v33049; _v33049; });
}
bool C_S__22_2::m_S__20__21_3() {
    RT_FN("S__22_2.S__20__21_3");
    return ({ bool _t33052 = ({ bool _t33051 = ({ bool _t33050 = this->g_S__2d_6(); _t33050 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 12.0)) : _t33050; }); _t33051 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t33051; }); _t33052 ? (bool)((C_S__23__21__21_::sm_S__5e__21__26_() >= 11.0)) : _t33052; });
    return false;
}
rt::Value C_S__22_2::m_S_8_21_s() {
    RT_FN("S__22_2.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9548])));
    return rt::NUL;
}
double C_S__22_2::g_S_5_22__2c_() {
    RT_FN("S__22_2.S_5_22__2c__get");
    return 10.0;
    return 0.0;
}
C_S__22_2* C_S__22_2::alloc_() {
    C_S__22_2* o = rt::make<C_S__22_2>();
    return o;
}
rt::Value C_S__22_2::mk_(rt::Value* a, int n) {
    C_S__22_2* o = alloc_();
    o->C_S__22_2::ctor_();
    return rt::VO(o);
}
bool C_S__22_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__22_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__22_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__22_2::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__22_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_2__id)); return true;
    default: return false;
    }
}
bool C_S__22_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22_3::ctor_() {
    RT_FN("S__22_3.S__22_3");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33053 = 229.0; this->f_S_6_21_Z = rt::touint_d(_v33053); _v33053; });
    ({ rt::Value _v33054 = rt::trv(rt::VS(g::LS[9549])); this->f_S_1i = rt::slot_string(_v33054); _v33054; });
    ({ rt::Value _v33055 = rt::trv(rt::VS(g::LS[9550])); this->f_S_7_23_ = rt::slot_string(_v33055); _v33055; });
    ({ rt::Value _v33056 = rt::VS(g::LS[9551]); this->f_S__5e__21__23_ = rt::slot_string(_v33056); _v33056; });
    ({ bool _v33057 = true; this->f_S_4_21_3 = _v33057; _v33057; });
}
bool C_S__22_3::m_S__20__21_3() {
    RT_FN("S__22_3.S__20__21_3");
    return ({ bool _t33059 = ({ bool _t33058 = this->g_S__2d_6(); _t33058 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 50.0)) : _t33058; }); _t33059 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 12.0)) : _t33059; });
    return false;
}
rt::Value C_S__22_3::m_S_8_21_s() {
    RT_FN("S__22_3.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9552])));
    return rt::NUL;
}
double C_S__22_3::g_S_5_22__2c_() {
    RT_FN("S__22_3.S_5_22__2c__get");
    return (C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21__60___id, C_S_8G::dsm_S__25_Z_1()) / 400000.0);
    return 0.0;
}
C_S__22_3* C_S__22_3::alloc_() {
    C_S__22_3* o = rt::make<C_S__22_3>();
    return o;
}
rt::Value C_S__22_3::mk_(rt::Value* a, int n) {
    C_S__22_3* o = alloc_();
    o->C_S__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__22_3::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_3__id)); return true;
    default: return false;
    }
}
bool C_S__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_3__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22_7::ctor_() {
    RT_FN("S__22_7.S__22_7");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33060 = 187.0; this->f_S_6_21_Z = rt::touint_d(_v33060); _v33060; });
    ({ rt::Value _v33061 = rt::trv(rt::VS(g::LS[8363])); this->f_S_1i = rt::slot_string(_v33061); _v33061; });
    ({ rt::Value _v33062 = rt::trv(rt::VS(g::LS[9553])); this->f_S_7_23_ = rt::slot_string(_v33062); _v33062; });
    ({ rt::Value _v33063 = rt::VS(g::LS[8364]); this->f_S__5e__21__23_ = rt::slot_string(_v33063); _v33063; });
    ({ bool _v33064 = true; this->f_S_4_21_3 = _v33064; _v33064; });
}
bool C_S__22_7::m_S__20__21_3() {
    RT_FN("S__22_7.S__20__21_3");
    return ({ bool _t33066 = ({ bool _t33065 = this->g_S__2d_6(); _t33065 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)) : _t33065; }); _t33066 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 16.0)) : _t33066; });
    return false;
}
rt::Value C_S__22_7::m_S_8_21_s() {
    RT_FN("S__22_7.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9554])));
    return rt::NUL;
}
double C_S__22_7::g_S_5_22__2c_() {
    RT_FN("S__22_7.S_5_22__2c__get");
    return (C_S_8G::sm_S__25_Z(g::SV.C_S__5b_X__id, true) / 10000.0);
    return 0.0;
}
C_S__22_7* C_S__22_7::alloc_() {
    C_S__22_7* o = rt::make<C_S__22_7>();
    return o;
}
rt::Value C_S__22_7::mk_(rt::Value* a, int n) {
    C_S__22_7* o = alloc_();
    o->C_S__22_7::ctor_();
    return rt::VO(o);
}
bool C_S__22_7::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__22_7::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__22_7::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__22_7::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__22_7::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22_7::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_7__id)); return true;
    default: return false;
    }
}
bool C_S__22_7::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_7__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22_7::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22_R::ctor_() {
    RT_FN("S__22_R.S__22_R");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33067 = 127.0; this->f_S_6_21_Z = rt::touint_d(_v33067); _v33067; });
    ({ rt::Value _v33068 = rt::trv(rt::VS(g::LS[9555])); this->f_S_1i = rt::slot_string(_v33068); _v33068; });
    ({ rt::Value _v33069 = rt::trv(rt::VS(g::LS[9556])); this->f_S_7_23_ = rt::slot_string(_v33069); _v33069; });
    ({ rt::Value _v33070 = rt::VS(g::LS[9557]); this->f_S__5e__21__23_ = rt::slot_string(_v33070); _v33070; });
    ({ double _v33071 = 10.0; this->f_S__3f__22_M = _v33071; _v33071; });
}
bool C_S__22_R::m_S__20__21_3() {
    RT_FN("S__22_R.S__20__21_3");
    return (C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M);
    return false;
}
C_S__22_R* C_S__22_R::alloc_() {
    C_S__22_R* o = rt::make<C_S__22_R>();
    return o;
}
rt::Value C_S__22_R::mk_(rt::Value* a, int n) {
    C_S__22_R* o = alloc_();
    o->C_S__22_R::ctor_();
    return rt::VO(o);
}
bool C_S__22_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__22_R::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__22_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__22_R::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__22_R::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22_R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_R__id)); return true;
    default: return false;
    }
}
bool C_S__22_R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_R__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__21_N::ctor_() {
    RT_FN("S__3c__21_N.S__3c__21_N");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33072 = 144.0; this->f_S_6_21_Z = rt::touint_d(_v33072); _v33072; });
    ({ rt::Value _v33073 = rt::trv(rt::VS(g::LS[9558])); this->f_S_1i = rt::slot_string(_v33073); _v33073; });
    ({ rt::Value _v33074 = rt::trv(rt::VS(g::LS[9559])); this->f_S_7_23_ = rt::slot_string(_v33074); _v33074; });
    ({ rt::Value _v33075 = rt::VS(g::LS[9560]); this->f_S__5e__21__23_ = rt::slot_string(_v33075); _v33075; });
    ({ bool _v33076 = true; this->f_S_4_21_3 = _v33076; _v33076; });
}
bool C_S__3c__21_N::m_S__20__21_3() {
    RT_FN("S__3c__21_N.S__20__21_3");
    return ({ bool _t33078 = this->g_S__2d_6(); _t33078 ? (bool)((({ bool _t33077 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 1.0); _t33077 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33077; }))) : _t33078; });
    return false;
}
rt::Value C_S__3c__21_N::m_S_8_21_s() {
    RT_FN("S__3c__21_N.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9561])));
    return rt::NUL;
}
double C_S__3c__21_N::g_S_5_22__2c_() {
    RT_FN("S__3c__21_N.S_5_22__2c__get");
    return (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0)) / 3000000.0);
    return 0.0;
}
C_S__3c__21_N* C_S__3c__21_N::alloc_() {
    C_S__3c__21_N* o = rt::make<C_S__3c__21_N>();
    return o;
}
rt::Value C_S__3c__21_N::mk_(rt::Value* a, int n) {
    C_S__3c__21_N* o = alloc_();
    o->C_S__3c__21_N::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3c__21_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3c__21_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3c__21_N::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3c__21_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_N__id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_N__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__21_j::ctor_() {
    RT_FN("S__3c__21_j.S__3c__21_j");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33079 = 242.0; this->f_S_6_21_Z = rt::touint_d(_v33079); _v33079; });
    ({ rt::Value _v33080 = rt::trv(rt::VS(g::LS[8359])); this->f_S_1i = rt::slot_string(_v33080); _v33080; });
    ({ rt::Value _v33081 = rt::trv(rt::VS(g::LS[9562])); this->f_S_7_23_ = rt::slot_string(_v33081); _v33081; });
    ({ rt::Value _v33082 = rt::VS(g::LS[8360]); this->f_S__5e__21__23_ = rt::slot_string(_v33082); _v33082; });
    ({ bool _v33083 = true; this->f_S_4_21_3 = _v33083; _v33083; });
}
bool C_S__3c__21_j::m_S__20__21_3() {
    rt::Value l_A__loc3_ = rt::NUL;
    int32_t l_A__loc4_ = 0;
    int32_t l_A__loc1_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__3c__21_j.S__20__21_3");
    (l_A__loc3_ = rt::NUL);
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::toint_d(0.0));
    if ((({ bool _t33085 = ({ bool _t33084 = this->g_S__2d_6(); _t33084 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 75.0)) : _t33084; }); _t33085 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t33085; }) && C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_i__id))) {
        (l_A__loc3_ = rt::arr_lit({}));
        (l_A__loc4_ = rt::toint_d(0.0));
        (l_A__loc1_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc1_)) <= 12.0)) {
            (void)(rt::dcallv(l_A__loc3_, rt::N_push, rt::VB(false)));
            (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
        }
        {
            std::vector<rt::Value> _lst33086;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst33086);
            for (const rt::Value& _x33087 : _lst33086) {
                l_A__loc2_ = _x33087;
                if ((({ bool _t33095 = ({ bool _t33092 = ({ rt::Value _o33088 = l_A__loc2_; C_S__60_6* _p33089 = rt::as_ptr<C_S__60_6>(_o33088); _p33089 ? _p33089->f_S__3c__21_7 : rt::T(rt::dget(_o33088, NM_S__3c__21_7)); }); _t33092 ? (bool)((!(((double)(({ rt::Value _o33090 = l_A__loc2_; C_S__60_6* _p33091 = rt::as_ptr<C_S__60_6>(_o33090); _p33091 ? _p33091->f_S__2d__21__5e_ : rt::toint(rt::dget(_o33090, NM_S__2d__21__5e_)); }))) == 11.0))) : _t33092; }); _t33095 ? (bool)(({ rt::Value _o33093 = l_A__loc2_; C_S__60_6* _p33094 = rt::as_ptr<C_S__60_6>(_o33093); _p33094 ? _p33094->f_S__3c__60_ : rt::T(rt::dget(_o33093, NM_S__3c__60_)); })) : _t33095; }) && (!rt::T(rt::arr_at(l_A__loc3_, ((double)(({ rt::Value _o33096 = l_A__loc2_; C_S__60_6* _p33097 = rt::as_ptr<C_S__60_6>(_o33096); _p33097 ? _p33097->f_S__2d__21__5e_ : rt::toint(rt::dget(_o33096, NM_S__2d__21__5e_)); })))))))) {
                    ({ rt::Value _v33098 = rt::VB(true); rt::idx_set(l_A__loc3_, rt::V((double)(({ rt::Value _o33099 = l_A__loc2_; C_S__60_6* _p33100 = rt::as_ptr<C_S__60_6>(_o33099); _p33100 ? _p33100->f_S__2d__21__5e_ : rt::toint(rt::dget(_o33099, NM_S__2d__21__5e_)); }))), _v33098); });
                    (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
                }
            }
        }
        if ((((double)(l_A__loc4_)) >= 12.0)) {
            return true;
        }
    }
    return false;
    return false;
}
rt::Value C_S__3c__21_j::m_S_8_21_s() {
    RT_FN("S__3c__21_j.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9563])));
    return rt::NUL;
}
double C_S__3c__21_j::g_S_5_22__2c_() {
    RT_FN("S__3c__21_j.S_5_22__2c__get");
    return 5.0;
    return 0.0;
}
C_S__3c__21_j* C_S__3c__21_j::alloc_() {
    C_S__3c__21_j* o = rt::make<C_S__3c__21_j>();
    return o;
}
rt::Value C_S__3c__21_j::mk_(rt::Value* a, int n) {
    C_S__3c__21_j* o = alloc_();
    o->C_S__3c__21_j::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_j::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3c__21_j::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3c__21_j::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3c__21_j::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3c__21_j::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_j::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_j__id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_j::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_j__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_j::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__22__3b_::ctor_() {
    RT_FN("S__3c__22__3b_.S__3c__22__3b_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33101 = 372.0; this->f_S_6_21_Z = rt::touint_d(_v33101); _v33101; });
    ({ rt::Value _v33102 = rt::trv(rt::VS(g::LS[9564])); this->f_S_1i = rt::slot_string(_v33102); _v33102; });
    ({ rt::Value _v33103 = rt::trv(rt::VS(g::LS[9565])); this->f_S_7_23_ = rt::slot_string(_v33103); _v33103; });
    ({ rt::Value _v33104 = rt::VS(g::LS[9566]); this->f_S__5e__21__23_ = rt::slot_string(_v33104); _v33104; });
    ({ bool _v33105 = true; this->f_S_4_21_3 = _v33105; _v33105; });
    ({ double _v33106 = 10000.0; this->f_S__3f__22_M = _v33106; _v33106; });
}
bool C_S__3c__22__3b_::m_S__20__21_3() {
    RT_FN("S__3c__22__3b_.S__20__21_3");
    return ({ bool _t33110 = ({ bool _t33109 = ({ bool _t33108 = ({ bool _t33107 = this->g_S__2d_6(); _t33107 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 5.0)) : _t33107; }); _t33108 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t33108; }); _t33109 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 225.0)) : _t33109; }); _t33110 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33110; });
    return false;
}
rt::Value C_S__3c__22__3b_::m_S__21__22__2b_() {
    RT_FN("S__3c__22__3b_.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33111 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33112 = rt::as_ptr<C_S__20_g>(_o33111); _p33112 ? _p33112->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 5.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o33111, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 5.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S__3c__22__3b_::m_S_8_21_s() {
    RT_FN("S__3c__22__3b_.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9567])));
    return rt::NUL;
}
double C_S__3c__22__3b_::g_S_5_22__2c_() {
    RT_FN("S__3c__22__3b_.S_5_22__2c__get");
    return (C_S__26_c::sm_S__5d__21_s(rt::toint_d(2.0), false, true, true) / 100000.0);
    return 0.0;
}
C_S__3c__22__3b_* C_S__3c__22__3b_::alloc_() {
    C_S__3c__22__3b_* o = rt::make<C_S__3c__22__3b_>();
    return o;
}
rt::Value C_S__3c__22__3b_::mk_(rt::Value* a, int n) {
    C_S__3c__22__3b_* o = alloc_();
    o->C_S__3c__22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3c__22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3c__22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3c__22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3c__22__3b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22__3b___id)); return true;
    default: return false;
    }
}
bool C_S__3c__22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22__3b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__27_::ctor_() {
    RT_FN("S__3c__27_.S__3c__27_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33113 = 135.0; this->f_S_6_21_Z = rt::touint_d(_v33113); _v33113; });
    ({ rt::Value _v33114 = rt::trv(rt::VS(g::LS[9568])); this->f_S_1i = rt::slot_string(_v33114); _v33114; });
    ({ rt::Value _v33115 = rt::trv(rt::VS(g::LS[9569])); this->f_S_7_23_ = rt::slot_string(_v33115); _v33115; });
    ({ rt::Value _v33116 = rt::VS(g::LS[9570]); this->f_S__5e__21__23_ = rt::slot_string(_v33116); _v33116; });
    ({ bool _v33117 = true; this->f_S_4_21_3 = _v33117; _v33117; });
}
bool C_S__3c__27_::m_S__20__21_3() {
    RT_FN("S__3c__27_.S__20__21_3");
    return ({ bool _t33120 = ({ bool _t33119 = this->g_S__2d_6(); _t33119 ? (bool)((({ bool _t33118 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 2.0); _t33118 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33118; }))) : _t33119; }); _t33120 ? (bool)((C_S__26_c::sm_S__22__21_B(rt::toint_d(52.0), true, false, false, true) >= 14400.0)) : _t33120; });
    return false;
}
rt::Value C_S__3c__27_::m_S_8_21_s() {
    RT_FN("S__3c__27_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9571])));
    return rt::NUL;
}
double C_S__3c__27_::g_S_5_22__2c_() {
    RT_FN("S__3c__27_.S_5_22__2c__get");
    return (C_S__26_c::sm_S__22__21_B(rt::toint_d(52.0), true, false, false, true) / 86400.0);
    return 0.0;
}
C_S__3c__27_* C_S__3c__27_::alloc_() {
    C_S__3c__27_* o = rt::make<C_S__3c__27_>();
    return o;
}
rt::Value C_S__3c__27_::mk_(rt::Value* a, int n) {
    C_S__3c__27_* o = alloc_();
    o->C_S__3c__27_::ctor_();
    return rt::VO(o);
}
bool C_S__3c__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3c__27_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3c__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3c__27_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3c__27_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__27___id)); return true;
    default: return false;
    }
}
bool C_S__3c__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__27___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c_m::ctor_() {
    RT_FN("S__3c_m.S__3c_m");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33121 = 230.0; this->f_S_6_21_Z = rt::touint_d(_v33121); _v33121; });
    ({ rt::Value _v33122 = rt::trv(rt::VS(g::LS[9572])); this->f_S_1i = rt::slot_string(_v33122); _v33122; });
    ({ rt::Value _v33123 = rt::trv(rt::VS(g::LS[9573])); this->f_S_7_23_ = rt::slot_string(_v33123); _v33123; });
    ({ rt::Value _v33124 = rt::VS(g::LS[9574]); this->f_S__5e__21__23_ = rt::slot_string(_v33124); _v33124; });
    ({ bool _v33125 = true; this->f_S_4_21_3 = _v33125; _v33125; });
}
bool C_S__3c_m::m_S__20__21_3() {
    RT_FN("S__3c_m.S__20__21_3");
    return ({ bool _t33130 = ({ bool _t33127 = ({ bool _t33126 = this->g_S__2d_6(); _t33126 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 50.0)) : _t33126; }); _t33127 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 12.0)) : _t33127; }); _t33130 ? (bool)((((double)(({ rt::Value _o33128 = C_S_8G::sm_S__23_N(g::SV.C_S_5_21_3__id); C_S_84* _p33129 = rt::as_ptr<C_S_84>(_o33128); _p33129 ? _p33129->g_S__60_r() : rt::touint(rt::dget(_o33128, NM_S__60_r)); }))) >= 4.0)) : _t33130; });
    return false;
}
rt::Value C_S__3c_m::m_S_8_21_s() {
    RT_FN("S__3c_m.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9575])));
    return rt::NUL;
}
double C_S__3c_m::g_S_5_22__2c_() {
    RT_FN("S__3c_m.S_5_22__2c__get");
    return (({ rt::Value _o33131 = C_S_8G::sm_S__23_N(g::SV.C_S_5_21_3__id); C_S_84* _p33132 = rt::as_ptr<C_S_84>(_o33131); _p33132 ? _p33132->g_S_2_2d_() : rt::tonum(rt::dget(_o33131, NM_S_2_2d_)); }) / 200000.0);
    return 0.0;
}
C_S__3c_m* C_S__3c_m::alloc_() {
    C_S__3c_m* o = rt::make<C_S__3c_m>();
    return o;
}
rt::Value C_S__3c_m::mk_(rt::Value* a, int n) {
    C_S__3c_m* o = alloc_();
    o->C_S__3c_m::ctor_();
    return rt::VO(o);
}
bool C_S__3c_m::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3c_m::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3c_m::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3c_m::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3c_m::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c_m::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c_m__id)); return true;
    default: return false;
    }
}
bool C_S__3c_m::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c_m__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c_m::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__21_s::ctor_() {
    RT_FN("S__3e__21_s.S__3e__21_s");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33133 = 284.0; this->f_S_6_21_Z = rt::touint_d(_v33133); _v33133; });
    ({ rt::Value _v33134 = rt::trv(rt::VS(g::LS[8312])); this->f_S_1i = rt::slot_string(_v33134); _v33134; });
    ({ rt::Value _v33135 = rt::trv(rt::VS(g::LS[9576])); this->f_S_7_23_ = rt::slot_string(_v33135); _v33135; });
    ({ rt::Value _v33136 = rt::VS(g::LS[8313]); this->f_S__5e__21__23_ = rt::slot_string(_v33136); _v33136; });
    ({ bool _v33137 = true; this->f_S_4_21_3 = _v33137; _v33137; });
}
bool C_S__3e__21_s::m_S__20__21_3() {
    RT_FN("S__3e__21_s.S__20__21_3");
    return ({ bool _t33138 = this->g_S__2d_6(); _t33138 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33138; });
    return false;
}
rt::Value C_S__3e__21_s::m_S_8_21_s() {
    RT_FN("S__3e__21_s.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9577])));
    return rt::NUL;
}
double C_S__3e__21_s::g_S_5_22__2c_() {
    RT_FN("S__3e__21_s.S_5_22__2c__get");
    return ((2.0 * rt::m_pow(rt::m_log((1.0 + C_S__23__21__21_::sm_S_0F(C_S__23__21__21_::dsm_S_0F_0(), C_S__23__21__21_::dsm_S_0F_1()))), 1.5)) / 10000.0);
    return 0.0;
}
C_S__3e__21_s* C_S__3e__21_s::alloc_() {
    C_S__3e__21_s* o = rt::make<C_S__3e__21_s>();
    return o;
}
rt::Value C_S__3e__21_s::mk_(rt::Value* a, int n) {
    C_S__3e__21_s* o = alloc_();
    o->C_S__3e__21_s::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3e__21_s::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3e__21_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3e__21_s::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3e__21_s::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__21_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_s__id)); return true;
    default: return false;
    }
}
bool C_S__3e__21_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__21_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__22__3f_::ctor_() {
    RT_FN("S__3e__22__3f_.S__3e__22__3f_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33139 = 366.0; this->f_S_6_21_Z = rt::touint_d(_v33139); _v33139; });
    ({ rt::Value _v33140 = rt::trv(rt::VS(g::LS[9578])); this->f_S_1i = rt::slot_string(_v33140); _v33140; });
    ({ rt::Value _v33141 = rt::trv(rt::VS(g::LS[9579])); this->f_S_7_23_ = rt::slot_string(_v33141); _v33141; });
    ({ rt::Value _v33142 = rt::VS(g::LS[9580]); this->f_S__5e__21__23_ = rt::slot_string(_v33142); _v33142; });
    ({ bool _v33143 = true; this->f_S_4_21_3 = _v33143; _v33143; });
    ({ double _v33144 = 10000.0; this->f_S__3f__22_M = _v33144; _v33144; });
}
bool C_S__3e__22__3f_::m_S__20__21_3() {
    RT_FN("S__3e__22__3f_.S__20__21_3");
    return ({ bool _t33148 = ({ bool _t33147 = ({ bool _t33146 = ({ bool _t33145 = this->g_S__2d_6(); _t33145 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 3.0)) : _t33145; }); _t33146 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t33146; }); _t33147 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 225.0)) : _t33147; }); _t33148 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33148; });
    return false;
}
rt::Value C_S__3e__22__3f_::m_S__21__22__2b_() {
    RT_FN("S__3e__22__3f_.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33149 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33150 = rt::as_ptr<C_S__20_g>(_o33149); _p33150 ? _p33150->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 3.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o33149, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 3.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S__3e__22__3f_::m_S_8_21_s() {
    RT_FN("S__3e__22__3f_.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9581])));
    return rt::NUL;
}
double C_S__3e__22__3f_::g_S_5_22__2c_() {
    RT_FN("S__3e__22__3f_.S_5_22__2c__get");
    return (rt::m_log((1.0 + C_S__26_c::sm_S_9_21_P(g::SV.C_S_2_3c___id, false, true, true))) / 8000.0);
    return 0.0;
}
C_S__3e__22__3f_* C_S__3e__22__3f_::alloc_() {
    C_S__3e__22__3f_* o = rt::make<C_S__3e__22__3f_>();
    return o;
}
rt::Value C_S__3e__22__3f_::mk_(rt::Value* a, int n) {
    C_S__3e__22__3f_* o = alloc_();
    o->C_S__3e__22__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3e__22__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3e__22__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3e__22__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3e__22__3f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__22__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22__3f___id)); return true;
    default: return false;
    }
}
bool C_S__3e__22__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__22__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e_a::ctor_() {
    RT_FN("S__3e_a.S__3e_a");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33151 = 185.0; this->f_S_6_21_Z = rt::touint_d(_v33151); _v33151; });
    ({ rt::Value _v33152 = rt::trv(rt::VS(g::LS[9582])); this->f_S_1i = rt::slot_string(_v33152); _v33152; });
    ({ rt::Value _v33153 = rt::trv(rt::VS(g::LS[9583])); this->f_S_7_23_ = rt::slot_string(_v33153); _v33153; });
    ({ rt::Value _v33154 = rt::VS(g::LS[8351]); this->f_S__5e__21__23_ = rt::slot_string(_v33154); _v33154; });
    ({ double _v33155 = 3000.0; this->f_S__3f__22_M = _v33155; _v33155; });
}
bool C_S__3e_a::m_S__20__21_3() {
    RT_FN("S__3e_a.S__20__21_3");
    return ({ bool _t33158 = ({ bool _t33157 = ({ bool _t33156 = this->g_S__2d_6(); _t33156 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33156; }); _t33157 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)) : _t33157; }); _t33158 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__23_x__id)) : _t33158; });
    return false;
}
double C_S__3e_a::g_S_5_22__2c_() {
    RT_FN("S__3e_a.S_5_22__2c__get");
    return 0.5;
    return 0.0;
}
bool C_S__3e_a::g_S__27__22_Q() {
    RT_FN("S__3e_a.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 32.0);
    return false;
}
C_S__3e_a* C_S__3e_a::alloc_() {
    C_S__3e_a* o = rt::make<C_S__3e_a>();
    return o;
}
rt::Value C_S__3e_a::mk_(rt::Value* a, int n) {
    C_S__3e_a* o = alloc_();
    o->C_S__3e_a::ctor_();
    return rt::VO(o);
}
bool C_S__3e_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3e_a::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3e_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3e_a::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3e_a::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e_a__id)); return true;
    default: return false;
    }
}
bool C_S__3e_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e_a__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void static_init_20(std::vector<std::string>& errs) {
    try { (g::SV.C_S_4K__S__26__5b_ = 21000.0); } catch (...) { errs.push_back(std::string("S_4K.S__26__5b_: ") + rt::exc_text()); }
    try { (g::SV.C_S_5_22_H__S__5e__21_s = 50.0); } catch (...) { errs.push_back(std::string("S_5_22_H.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_5_22_L__S__5e__21_s = 720.0); } catch (...) { errs.push_back(std::string("S_5_22_L.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_5_22_L__S_6_22_L = 2.0); } catch (...) { errs.push_back(std::string("S_5_22_L.S_6_22_L: ") + rt::exc_text()); }
    try { (g::SV.C_S_5_22_M__S__5e__21_s = 720.0); } catch (...) { errs.push_back(std::string("S_5_22_M.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_5_22_M__S__3c__21_Y = 100000.0); } catch (...) { errs.push_back(std::string("S_5_22_M.S__3c__21_Y: ") + rt::exc_text()); }
    try { (g::SV.C_S_5_22_Q__S_7_22_Q = 9.0); } catch (...) { errs.push_back(std::string("S_5_22_Q.S_7_22_Q: ") + rt::exc_text()); }
    try { (g::SV.C_S_5_22_Q__S_8_22_Q = 100.0); } catch (...) { errs.push_back(std::string("S_5_22_Q.S_8_22_Q: ") + rt::exc_text()); }
    try { (g::SV.C_S_6p__S_8o = 7000.0); } catch (...) { errs.push_back(std::string("S_6p.S_8o: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_22_N__S_6_22_N = 2.0); } catch (...) { errs.push_back(std::string("S_7_22_N.S_6_22_N: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_22_N__S_8_22_N = 2.0); } catch (...) { errs.push_back(std::string("S_7_22_N.S_8_22_N: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_22_O__S_6_22_O = 5.0); } catch (...) { errs.push_back(std::string("S_7_22_O.S_6_22_O: ") + rt::exc_text()); }
    try { (g::SV.C_S_8_21_q__S__5e__21_s = 50.0); } catch (...) { errs.push_back(std::string("S_8_21_q.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_8_22_J__S__5e__21_s = 720.0); } catch (...) { errs.push_back(std::string("S_8_22_J.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_22_L__S__5e__21_s = 720.0); } catch (...) { errs.push_back(std::string("S_9_22_L.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_22_L__S__27__22__26_ = 30.0); } catch (...) { errs.push_back(std::string("S_9_22_L.S__27__22__26_: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_22_Q__S__3b__22_Q = rt::toint_d(4.0)); } catch (...) { errs.push_back(std::string("S_9_22_Q.S__3b__22_Q: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__22_I__S__5e__21_s = 720.0); } catch (...) { errs.push_back(std::string("S__3b__22_I.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__22_I__S__5d__21__3e_ = 1000.0); } catch (...) { errs.push_back(std::string("S__3b__22_I.S__5d__21__3e_: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__22_1__S__25__22_1 = 15.0); } catch (...) { errs.push_back(std::string("S__3d__22_1.S__25__22_1: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__22_J__S__5e__21_s = 2.0); } catch (...) { errs.push_back(std::string("S__3d__22_J.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_8__S__3d__22_8 = 70.0); } catch (...) { errs.push_back(std::string("S__40__22_8.S__3d__22_8: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_O__S__5b__21_ = 1000.0); } catch (...) { errs.push_back(std::string("S__40__22_O.S__5b__21_: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22_O__S__5b__22_O = 50.0); } catch (...) { errs.push_back(std::string("S__40__22_O.S__5b__22_O: ") + rt::exc_text()); }
    try { (g::SV.C_S__5b__22_P__S__5b__21_ = 720.0); } catch (...) { errs.push_back(std::string("S__5b__22_P.S__5b__21_: ") + rt::exc_text()); }
    try { (g::SV.C_S__5d__22_5__S__5e__21_s = 1000.0); } catch (...) { errs.push_back(std::string("S__5d__22_5.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__22_H__S__5e__21_s = 2.0); } catch (...) { errs.push_back(std::string("S__5e__22_H.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__22_V__S__5b__22_V = 3000.0); } catch (...) { errs.push_back(std::string("S__5e__22_V.S__5b__22_V: ") + rt::exc_text()); }
    try { (g::SV.C_S__5e__22_V__S__3f__22_V = rt::toint_d(5.0)); } catch (...) { errs.push_back(std::string("S__5e__22_V.S__3f__22_V: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__22_F__S__5e__21_s = rt::touint_d(6.0)); } catch (...) { errs.push_back(std::string("S__60__22_F.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__22_J__S__5e__21_s = 720.0); } catch (...) { errs.push_back(std::string("S__60__22_J.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__22_L__S__5d__21__3e_ = 1000.0); } catch (...) { errs.push_back(std::string("S__60__22_L.S__5d__21__3e_: ") + rt::exc_text()); }
    try { (g::SV.C_S__60__22_L__S__20__22_M = 50.0); } catch (...) { errs.push_back(std::string("S__60__22_L.S__20__22_M: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__2b___S_9_21__27_ = ({ C_S_7_21__20_* _n32873 = C_S_7_21__20_::alloc_(); _n32873->C_S_7_21__20_::ctor_(); rt::VO(_n32873); })); } catch (...) { errs.push_back(std::string("S__2d__2b_.S_9_21__27_: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__22_3__S_3_22_L = 180.0); } catch (...) { errs.push_back(std::string("S__23__22_3.S_3_22_L: ") + rt::exc_text()); }
}
}  // namespace g
