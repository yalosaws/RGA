// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S__21__5b_::ctor_() {
    RT_FN("S__21__5b_.S__21__5b_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18587 = 660.0; this->f_S_6_21_Z = rt::touint_d(_v18587); _v18587; });
    ({ rt::Value _v18588 = rt::trv(rt::VS(g::LS[5511])); this->f_S_1i = rt::slot_string(_v18588); _v18588; });
    ({ rt::Value _v18589 = rt::VS(g::LS[5512]); this->f_S__5e__21__23_ = rt::slot_string(_v18589); _v18589; });
    ({ double _v18590 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18590); _v18590; });
    ({ double _v18591 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18591); _v18591; });
    ({ double _v18592 = 10.0; this->f_S_0_21_N = rt::toint_d(_v18592); _v18592; });
    ({ double _v18593 = 19.0; this->f_S__5e__21__25_ = rt::toint_d(_v18593); _v18593; });
    ({ double _v18594 = 79.0; this->f_S_3_21_r = rt::touint_d(_v18594); _v18594; });
}
rt::Value C_S__21__5b_::m_S_8_21_1() {
    RT_FN("S__21__5b_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S__21__5b_::m_S_7G() {
    RT_FN("S__21__5b_.S_7G");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(45.0)) >= (((g::SV.C_S__21__5b___S_13 * 24.0) * 60.0) * 60.0));
    return false;
}
rt::Value C_S__21__5b_::m_S_9T() {
    RT_FN("S__21__5b_.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5513]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__21__5b___S_13, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__21__5b_* C_S__21__5b_::alloc_() {
    C_S__21__5b_* o = rt::make<C_S__21__5b_>();
    return o;
}
rt::Value C_S__21__5b_::mk_(rt::Value* a, int n) {
    C_S__21__5b_* o = alloc_();
    o->C_S__21__5b_::ctor_();
    return rt::VO(o);
}
bool C_S__21__5b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__21__5b_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__21__5b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__21__5b_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__21__5b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21__5b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__5b___id)); return true;
    case NM_S_13: out = rt::V(g::SV.C_S__21__5b___S_13); return true;
    default: return false;
    }
}
bool C_S__21__5b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__5b___id = rt::touint(v); return true;
    case NM_S_13: g::SV.C_S__21__5b___S_13 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__21__5b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21_g::ctor_() {
    RT_FN("S__21_g.S__21_g");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18595 = 696.0; this->f_S_6_21_Z = rt::touint_d(_v18595); _v18595; });
    ({ rt::Value _v18596 = rt::trv(rt::VS(g::LS[5514])); this->f_S_1i = rt::slot_string(_v18596); _v18596; });
    ({ rt::Value _v18597 = rt::VS(g::LS[5515]); this->f_S__5e__21__23_ = rt::slot_string(_v18597); _v18597; });
    ({ double _v18598 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18598); _v18598; });
    ({ double _v18599 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18599); _v18599; });
    ({ double _v18600 = 11.0; this->f_S_0_21_N = rt::toint_d(_v18600); _v18600; });
    ({ double _v18601 = 21.0; this->f_S__5e__21__25_ = rt::toint_d(_v18601); _v18601; });
    ({ double _v18602 = 81.0; this->f_S_3_21_r = rt::touint_d(_v18602); _v18602; });
}
rt::Value C_S__21_g::m_S_8_21_1() {
    RT_FN("S__21_g.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S__21_g::m_S_7G() {
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    int32_t l_A__loc3_ = 0;
    RT_FN("S__21_g.S_7G");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::NUL);
    if (rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V((g::SV.C_S__21_g__S__3b__21__25_ * 60.0)))) {
        return false;
    }
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) < rt::alen(g::SV.C_S_8G__S_0_21_A))) {
        (l_A__loc1_ = rt::arr_at(g::SV.C_S_8G__S_0_21_A, ((double)(l_A__loc2_))));
        if ((({ rt::Value _o18603 = l_A__loc1_; C_S_84* _p18604 = rt::as_ptr<C_S_84>(_o18603); _p18604 ? _p18604->f_S_23 : rt::T(rt::dget(_o18603, NM_S_23)); }) && (((double)(({ rt::Value _o18605 = l_A__loc1_; C_S_84* _p18606 = rt::as_ptr<C_S_84>(_o18605); _p18606 ? _p18606->g_S__60_r() : rt::touint(rt::dget(_o18605, NM_S__60_r)); }))) >= 1.0))) {
            (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    if ((((double)(l_A__loc3_)) >= g::SV.C_S__21_g__S_7_21_)) {
        return true;
    }
    return false;
    return false;
}
rt::Value C_S__21_g::m_S_9T() {
    RT_FN("S__21_g.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5516]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__21_g__S_7_21_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__21_g__S__3b__21__25_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__21_g* C_S__21_g::alloc_() {
    C_S__21_g* o = rt::make<C_S__21_g>();
    return o;
}
rt::Value C_S__21_g::mk_(rt::Value* a, int n) {
    C_S__21_g* o = alloc_();
    o->C_S__21_g::ctor_();
    return rt::VO(o);
}
bool C_S__21_g::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__21_g::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__21_g::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__21_g::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__21_g::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21_g::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21_g__id)); return true;
    case NM_S_7_21_: out = rt::V(g::SV.C_S__21_g__S_7_21_); return true;
    case NM_S__3b__21__25_: out = rt::V(g::SV.C_S__21_g__S__3b__21__25_); return true;
    default: return false;
    }
}
bool C_S__21_g::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21_g__id = rt::touint(v); return true;
    case NM_S_7_21_: g::SV.C_S__21_g__S_7_21_ = rt::tonum(v); return true;
    case NM_S__3b__21__25_: g::SV.C_S__21_g__S__3b__21__25_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__21_g::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21_y::ctor_() {
    RT_FN("S__21_y.S__21_y");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18607 = 677.0; this->f_S_6_21_Z = rt::touint_d(_v18607); _v18607; });
    ({ rt::Value _v18608 = rt::trv(rt::VS(g::LS[5517])); this->f_S_1i = rt::slot_string(_v18608); _v18608; });
    ({ rt::Value _v18609 = rt::VS(g::LS[5518]); this->f_S__5e__21__23_ = rt::slot_string(_v18609); _v18609; });
    ({ double _v18610 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18610); _v18610; });
    ({ double _v18611 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18611); _v18611; });
    ({ double _v18612 = 8.0; this->f_S_0_21_N = rt::toint_d(_v18612); _v18612; });
    ({ double _v18613 = 30.0; this->f_S__5e__21__25_ = rt::toint_d(_v18613); _v18613; });
    ({ double _v18614 = 114.0; this->f_S_3_21_r = rt::touint_d(_v18614); _v18614; });
}
rt::Value C_S__21_y::m_S_8_21_1() {
    RT_FN("S__21_y.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5519]), C_S__26_c::sm_S_8_21_Z(C_S__21_y::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__21_y::sm_S__3f__21__3c_() {
    RT_FN("S__21_y.S__3f__21__3c_");
    return (3.5 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.5));
    return 0.0;
}
C_S__21_y* C_S__21_y::alloc_() {
    C_S__21_y* o = rt::make<C_S__21_y>();
    return o;
}
rt::Value C_S__21_y::mk_(rt::Value* a, int n) {
    C_S__21_y* o = alloc_();
    o->C_S__21_y::ctor_();
    return rt::VO(o);
}
bool C_S__21_y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__21_y::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__21_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__21_y::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__21_y::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__21_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21_y__id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21_y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__21_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__23__22__26_::ctor_() {
    RT_FN("S__23__22__26_.S__23__22__26_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18615 = 948.0; this->f_S_6_21_Z = rt::touint_d(_v18615); _v18615; });
    ({ rt::Value _v18616 = rt::trv(rt::VS(g::LS[5520])); this->f_S_1i = rt::slot_string(_v18616); _v18616; });
    ({ rt::Value _v18617 = rt::VS(g::LS[5521]); this->f_S__5e__21__23_ = rt::slot_string(_v18617); _v18617; });
    ({ double _v18618 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18618); _v18618; });
    ({ double _v18619 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18619); _v18619; });
    ({ double _v18620 = 8.0; this->f_S_0_21_N = rt::toint_d(_v18620); _v18620; });
    ({ double _v18621 = 61.0; this->f_S__5e__21__25_ = rt::toint_d(_v18621); _v18621; });
    ({ double _v18622 = 180.0; this->f_S_3_21_r = rt::touint_d(_v18622); _v18622; });
}
rt::Value C_S__23__22__26_::m_S_8_21_1() {
    RT_FN("S__23__22__26_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5522]), C_S__26_c::sm_S_8_21_Z(C_S__23__22__26_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__23__22__26_::sm_S__2c__21_G() {
    RT_FN("S__23__22__26_.S__2c__21_G");
    return 100.0;
    return 0.0;
}
C_S__23__22__26_* C_S__23__22__26_::alloc_() {
    C_S__23__22__26_* o = rt::make<C_S__23__22__26_>();
    return o;
}
rt::Value C_S__23__22__26_::mk_(rt::Value* a, int n) {
    C_S__23__22__26_* o = alloc_();
    o->C_S__23__22__26_::ctor_();
    return rt::VO(o);
}
bool C_S__23__22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__23__22__26_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__23__22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__23__22__26_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__23__22__26_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__23__22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__22__26___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__22__26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__23_k::ctor_() {
    RT_FN("S__23_k.S__23_k");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18623 = 650.0; this->f_S_6_21_Z = rt::touint_d(_v18623); _v18623; });
    ({ rt::Value _v18624 = rt::trv(rt::VS(g::LS[5523])); this->f_S_1i = rt::slot_string(_v18624); _v18624; });
    ({ rt::Value _v18625 = rt::VS(g::LS[5524]); this->f_S__5e__21__23_ = rt::slot_string(_v18625); _v18625; });
    ({ double _v18626 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18626); _v18626; });
    ({ double _v18627 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18627); _v18627; });
    ({ double _v18628 = 2.0; this->f_S_0_21_N = rt::toint_d(_v18628); _v18628; });
    ({ double _v18629 = 8.0; this->f_S__5e__21__25_ = rt::toint_d(_v18629); _v18629; });
    ({ double _v18630 = 68.0; this->f_S_3_21_r = rt::touint_d(_v18630); _v18630; });
}
rt::Value C_S__23_k::m_S_8_21_1() {
    RT_FN("S__23_k.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5525]), C_S__26_c::sm_S_8_21_Z(C_S__23_k::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__23_k::sm_S__2c__21_G() {
    RT_FN("S__23_k.S__2c__21_G");
    return 200.0;
    return 0.0;
}
C_S__23_k* C_S__23_k::alloc_() {
    C_S__23_k* o = rt::make<C_S__23_k>();
    return o;
}
rt::Value C_S__23_k::mk_(rt::Value* a, int n) {
    C_S__23_k* o = alloc_();
    o->C_S__23_k::ctor_();
    return rt::VO(o);
}
bool C_S__23_k::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__23_k::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__23_k::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__23_k::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__23_k::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__23_k::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23_k__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__23_k__S_1_21_S); return true;
    case NM_S_6_21_c: out = rt::V(g::SV.C_S__23_k__S_6_21_c); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23_k::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23_k__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__23_k__S_1_21_S = rt::tonum(v); return true;
    case NM_S_6_21_c: g::SV.C_S__23_k__S_6_21_c = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__23_k::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__25__21_2::ctor_() {
    RT_FN("S__25__21_2.S__25__21_2");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v18631 = 654.0; this->f_S_6_21_Z = rt::touint_d(_v18631); _v18631; });
    ({ rt::Value _v18632 = rt::trv(rt::VS(g::LS[5526])); this->f_S_1i = rt::slot_string(_v18632); _v18632; });
    ({ rt::Value _v18633 = rt::VS(g::LS[5527]); this->f_S__5e__21__23_ = rt::slot_string(_v18633); _v18633; });
    ({ double _v18634 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18634); _v18634; });
    ({ double _v18635 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18635); _v18635; });
    ({ double _v18636 = 9.0; this->f_S_0_21_N = rt::toint_d(_v18636); _v18636; });
}
rt::Value C_S__25__21_2::m_S__5b__21_C() {
    RT_FN("S__25__21_2.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v18637 = g::SV.C_S__60_O__id; this->f_S_6_21_p = _v18637; _v18637; });
    return rt::NUL;
}
rt::Value C_S__25__21_2::m_S_1_21_6() {
    RT_FN("S__25__21_2.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5528]), C_S__26_c::sm_S_8_21_Z(C_S__25__21_2::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__25__21_2::sm_S__23__21_Y() {
    RT_FN("S__25__21_2.S__23__21_Y");
    return (10.0 + (0.75 * rt::m_pow(C_S__26_c::sm_S__27__22__2d_(rt::toint_d(9.0), g::SV.C_S__25__21_2__id), 1.5)));
    return 0.0;
}
C_S__25__21_2* C_S__25__21_2::alloc_() {
    C_S__25__21_2* o = rt::make<C_S__25__21_2>();
    return o;
}
rt::Value C_S__25__21_2::mk_(rt::Value* a, int n) {
    C_S__25__21_2* o = alloc_();
    o->C_S__25__21_2::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S__25__21_2::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S__25__21_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S__25__21_2::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S__25__21_2::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__25__21_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_2__id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__21_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__21_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__25__21_q::ctor_() {
    RT_FN("S__25__21_q.S__25__21_q");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18638 = 805.0; this->f_S_6_21_Z = rt::touint_d(_v18638); _v18638; });
    ({ rt::Value _v18639 = rt::trv(rt::VS(g::LS[5529])); this->f_S_1i = rt::slot_string(_v18639); _v18639; });
    ({ rt::Value _v18640 = rt::VS(g::LS[5530]); this->f_S__5e__21__23_ = rt::slot_string(_v18640); _v18640; });
    ({ double _v18641 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18641); _v18641; });
    ({ double _v18642 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18642); _v18642; });
    ({ double _v18643 = 4.0; this->f_S_0_21_N = rt::toint_d(_v18643); _v18643; });
    ({ double _v18644 = 46.0; this->f_S__5e__21__25_ = rt::toint_d(_v18644); _v18644; });
    ({ double _v18645 = 146.0; this->f_S_3_21_r = rt::touint_d(_v18645); _v18645; });
}
rt::Value C_S__25__21_q::m_S_8_21_1() {
    RT_FN("S__25__21_q.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5531]), C_S__26_c::sm_S_8_21_Z(C_S__25__21_q::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__25__21_q::sm_S__2b__2b_() {
    RT_FN("S__25__21_q.S__2b__2b_");
    return (15.0 + (1.5 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__20__21_5__id, false, false, C_S__26_c::dsm_S_7i_3()), 0.5)));
    return 0.0;
}
C_S__25__21_q* C_S__25__21_q::alloc_() {
    C_S__25__21_q* o = rt::make<C_S__25__21_q>();
    return o;
}
rt::Value C_S__25__21_q::mk_(rt::Value* a, int n) {
    C_S__25__21_q* o = alloc_();
    o->C_S__25__21_q::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__25__21_q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__25__21_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__25__21_q::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__25__21_q::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__25__21_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_q__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__21_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__21_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__22_9::ctor_() {
    RT_FN("S__22_9.S__22_9");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v18646 = 666.0; this->f_S_6_21_Z = rt::touint_d(_v18646); _v18646; });
    ({ rt::Value _v18647 = rt::trv(rt::VS(g::LS[5532])); this->f_S_1i = rt::slot_string(_v18647); _v18647; });
    ({ rt::Value _v18648 = rt::VS(g::LS[5533]); this->f_S__5e__21__23_ = rt::slot_string(_v18648); _v18648; });
    ({ double _v18649 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18649); _v18649; });
    ({ double _v18650 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18650); _v18650; });
    ({ double _v18651 = 5.0; this->f_S_0_21_N = rt::toint_d(_v18651); _v18651; });
}
rt::Value C_S__22_9::m_S__5b__21_C() {
    RT_FN("S__22_9.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v18652 = g::SV.C_S__3d__21__27___id; this->f_S_6_21_p = _v18652; _v18652; });
    return rt::NUL;
}
rt::Value C_S__22_9::m_S_1_21_6() {
    RT_FN("S__22_9.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5534]), C_S__26_c::sm_S_8_21_Z(C_S__22_9::sm_S__27__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__22_9::sm_S__27__21_b() {
    RT_FN("S__22_9.S__27__21_b");
    return (100.0 * rt::m_pow(C_S__26_c::sm_S__27__22__2d_(rt::toint_d(5.0), g::SV.C_S__22_9__id), 2.0));
    return 0.0;
}
C_S__22_9* C_S__22_9::alloc_() {
    C_S__22_9* o = rt::make<C_S__22_9>();
    return o;
}
rt::Value C_S__22_9::mk_(rt::Value* a, int n) {
    C_S__22_9* o = alloc_();
    o->C_S__22_9::ctor_();
    return rt::VO(o);
}
bool C_S__22_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S__22_9::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S__22_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S__22_9::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S__22_9::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__22_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_9__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_9__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3c__21_r::ctor_() {
    RT_FN("S__3c__21_r.S__3c__21_r");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18653 = 799.0; this->f_S_6_21_Z = rt::touint_d(_v18653); _v18653; });
    ({ rt::Value _v18654 = rt::trv(rt::VS(g::LS[5535])); this->f_S_1i = rt::slot_string(_v18654); _v18654; });
    ({ rt::Value _v18655 = rt::VS(g::LS[5536]); this->f_S__5e__21__23_ = rt::slot_string(_v18655); _v18655; });
    ({ double _v18656 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18656); _v18656; });
    ({ double _v18657 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18657); _v18657; });
    ({ double _v18658 = 9.0; this->f_S_0_21_N = rt::toint_d(_v18658); _v18658; });
    ({ double _v18659 = 43.0; this->f_S__5e__21__25_ = rt::toint_d(_v18659); _v18659; });
    ({ double _v18660 = 140.0; this->f_S_3_21_r = rt::touint_d(_v18660); _v18660; });
}
rt::Value C_S__3c__21_r::m_S_8_21_1() {
    RT_FN("S__3c__21_r.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5537]), C_S__26_c::sm_S_8_21_Z(C_S__3c__21_r::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3c__21_r::sm_S__22__21__26_() {
    RT_FN("S__3c__21_r.S__22__21__26_");
    return (1.5 * rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S_7_21_K__id, C_S__26_c::dsm_S_1_21__3b__1()), 0.5));
    return 0.0;
}
C_S__3c__21_r* C_S__3c__21_r::alloc_() {
    C_S__3c__21_r* o = rt::make<C_S__3c__21_r>();
    return o;
}
rt::Value C_S__3c__21_r::mk_(rt::Value* a, int n) {
    C_S__3c__21_r* o = alloc_();
    o->C_S__3c__21_r::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3c__21_r::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3c__21_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3c__21_r::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3c__21_r::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__3c__21_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_r__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_r__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__3c__22__25_::ctor_() {
    RT_FN("S__3c__22__25_.S__3c__22__25_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18661 = 956.0; this->f_S_6_21_Z = rt::touint_d(_v18661); _v18661; });
    ({ rt::Value _v18662 = rt::trv(rt::VS(g::LS[5538])); this->f_S_1i = rt::slot_string(_v18662); _v18662; });
    ({ rt::Value _v18663 = rt::VS(g::LS[5539]); this->f_S__5e__21__23_ = rt::slot_string(_v18663); _v18663; });
    ({ double _v18664 = 4.0; this->f_S_9_21_m = rt::toint_d(_v18664); _v18664; });
    ({ double _v18665 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18665); _v18665; });
    ({ double _v18666 = 12.0; this->f_S_0_21_N = rt::toint_d(_v18666); _v18666; });
    ({ double _v18667 = 10.0; this->f_S__5e__21__25_ = rt::toint_d(_v18667); _v18667; });
    ({ double _v18668 = 130.0; this->f_S_3_21_r = rt::touint_d(_v18668); _v18668; });
}
rt::Value C_S__3c__22__25_::m_S_8_21_1() {
    RT_FN("S__3c__22__25_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5540]), C_S__26_c::sm_S_8_21_Z(C_S__3c__22__25_::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3c__22__25_::sm_S__26_s() {
    RT_FN("S__3c__22__25_.S__26_s");
    return (0.3 * rt::m_pow(C_S__26_c::sm_S_2_21__26_(), 0.7));
    return 0.0;
}
C_S__3c__22__25_* C_S__3c__22__25_::alloc_() {
    C_S__3c__22__25_* o = rt::make<C_S__3c__22__25_>();
    return o;
}
rt::Value C_S__3c__22__25_::mk_(rt::Value* a, int n) {
    C_S__3c__22__25_* o = alloc_();
    o->C_S__3c__22__25_::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3c__22__25_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3c__22__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3c__22__25_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3c__22__25_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__3c__22__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22__25___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__22__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22__25___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__3c__22_K::ctor_() {
    RT_FN("S__3c__22_K.S__3c__22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18669 = 1233.0; this->f_S_6_21_Z = rt::touint_d(_v18669); _v18669; });
    ({ rt::Value _v18670 = rt::trv(rt::VS(g::LS[5541])); this->f_S_1i = rt::slot_string(_v18670); _v18670; });
    ({ rt::Value _v18671 = rt::VS(g::LS[5542]); this->f_S__5e__21__23_ = rt::slot_string(_v18671); _v18671; });
    ({ double _v18672 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18672); _v18672; });
    ({ double _v18673 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18673); _v18673; });
    ({ double _v18674 = 7.0; this->f_S_0_21_N = rt::toint_d(_v18674); _v18674; });
    ({ double _v18675 = 65.0; this->f_S__5e__21__25_ = rt::toint_d(_v18675); _v18675; });
    ({ double _v18676 = 194.0; this->f_S_3_21_r = rt::touint_d(_v18676); _v18676; });
}
rt::Value C_S__3c__22_K::m_S_8_21_1() {
    RT_FN("S__3c__22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5543]), C_S__26_c::sm_S_8_21_Z(C_S__3c__22_K::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3c__22_K::sm_S__2c__21_G() {
    RT_FN("S__3c__22_K.S__2c__21_G");
    return rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_(true, C_S__26_c::dsm_S_3_22__26__1(), C_S__26_c::dsm_S_3_22__26__2()))), 1.5);
    return 0.0;
}
C_S__3c__22_K* C_S__3c__22_K::alloc_() {
    C_S__3c__22_K* o = rt::make<C_S__3c__22_K>();
    return o;
}
rt::Value C_S__3c__22_K::mk_(rt::Value* a, int n) {
    C_S__3c__22_K* o = alloc_();
    o->C_S__3c__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3c__22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3c__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3c__22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3c__22_K::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3c__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22_K__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3e__21_T::ctor_() {
    RT_FN("S__3e__21_T.S__3e__21_T");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18677 = 664.0; this->f_S_6_21_Z = rt::touint_d(_v18677); _v18677; });
    ({ rt::Value _v18678 = rt::trv(rt::VS(g::LS[5544])); this->f_S_1i = rt::slot_string(_v18678); _v18678; });
    ({ rt::Value _v18679 = rt::VS(g::LS[5545]); this->f_S__5e__21__23_ = rt::slot_string(_v18679); _v18679; });
    ({ double _v18680 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18680); _v18680; });
    ({ double _v18681 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18681); _v18681; });
    ({ double _v18682 = 7.0; this->f_S_0_21_N = rt::toint_d(_v18682); _v18682; });
    ({ double _v18683 = 20.0; this->f_S__5e__21__25_ = rt::toint_d(_v18683); _v18683; });
    ({ double _v18684 = 80.0; this->f_S_3_21_r = rt::touint_d(_v18684); _v18684; });
}
rt::Value C_S__3e__21_T::m_S_8_21_1() {
    RT_FN("S__3e__21_T.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S__3e__21_T::m_S_7G() {
    RT_FN("S__3e__21_T.S_7G");
    return ((C_S__23__21__21_::sm_S_57() * 30.0) >= (2.0 * C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0())));
    return false;
}
rt::Value C_S__3e__21_T::m_S_9T() {
    RT_FN("S__3e__21_T.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5546])));
    return rt::NUL;
}
C_S__3e__21_T* C_S__3e__21_T::alloc_() {
    C_S__3e__21_T* o = rt::make<C_S__3e__21_T>();
    return o;
}
rt::Value C_S__3e__21_T::mk_(rt::Value* a, int n) {
    C_S__3e__21_T* o = alloc_();
    o->C_S__3e__21_T::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_T::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3e__21_T::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3e__21_T::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3e__21_T::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3e__21_T::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__21_T::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_T__id)); return true;
    default: return false;
    }
}
bool C_S__3e__21_T::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_T__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__21_T::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__22__24_::ctor_() {
    RT_FN("S__3e__22__24_.S__3e__22__24_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18685 = 945.0; this->f_S_6_21_Z = rt::touint_d(_v18685); _v18685; });
    ({ rt::Value _v18686 = rt::trv(rt::VS(g::LS[5547])); this->f_S_1i = rt::slot_string(_v18686); _v18686; });
    ({ rt::Value _v18687 = rt::VS(g::LS[5548]); this->f_S__5e__21__23_ = rt::slot_string(_v18687); _v18687; });
    ({ double _v18688 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18688); _v18688; });
    ({ double _v18689 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18689); _v18689; });
    ({ double _v18690 = 7.0; this->f_S_0_21_N = rt::toint_d(_v18690); _v18690; });
    ({ double _v18691 = 53.0; this->f_S__5e__21__25_ = rt::toint_d(_v18691); _v18691; });
    ({ double _v18692 = 164.0; this->f_S_3_21_r = rt::touint_d(_v18692); _v18692; });
}
rt::Value C_S__3e__22__24_::m_S_8_21_1() {
    RT_FN("S__3e__22__24_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5549]), C_S__26_c::sm_S_8_21_Z(C_S__3e__22__24_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3e__22__24_::sm_S__2c__21_G() {
    RT_FN("S__3e__22__24_.S__2c__21_G");
    return 1000.0;
    return 0.0;
}
C_S__3e__22__24_* C_S__3e__22__24_::alloc_() {
    C_S__3e__22__24_* o = rt::make<C_S__3e__22__24_>();
    return o;
}
rt::Value C_S__3e__22__24_::mk_(rt::Value* a, int n) {
    C_S__3e__22__24_* o = alloc_();
    o->C_S__3e__22__24_::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3e__22__24_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3e__22__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3e__22__24_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3e__22__24_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3e__22__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22__24___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__22__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3e__22__25_::ctor_() {
    RT_FN("S__3e__22__25_.S__3e__22__25_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18693 = 971.0; this->f_S_6_21_Z = rt::touint_d(_v18693); _v18693; });
    ({ rt::Value _v18694 = rt::trv(rt::VS(g::LS[5550])); this->f_S_1i = rt::slot_string(_v18694); _v18694; });
    ({ rt::Value _v18695 = rt::VS(g::LS[5551]); this->f_S__5e__21__23_ = rt::slot_string(_v18695); _v18695; });
    ({ double _v18696 = 6.0; this->f_S_9_21_m = rt::toint_d(_v18696); _v18696; });
    ({ double _v18697 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18697); _v18697; });
    ({ double _v18698 = 14.0; this->f_S_0_21_N = rt::toint_d(_v18698); _v18698; });
    ({ double _v18699 = 50.0; this->f_S__5e__21__25_ = rt::toint_d(_v18699); _v18699; });
    ({ double _v18700 = 155.0; this->f_S_3_21_r = rt::touint_d(_v18700); _v18700; });
}
rt::Value C_S__3e__22__25_::m_S_8_21_1() {
    RT_FN("S__3e__22__25_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5552]), rt::dcallv(rt::V(g::SV.C_S__3e__22__25___S_1_21_S), rt::N_toString), C_S__26_c::sm_S_8_21_Z(C_S__3e__22__25_::sm_S__27__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3e__22__25_::sm_S__27__21_b() {
    RT_FN("S__3e__22__25_.S__27__21_b");
    return (C_S_8G::sm_S__3c__21_B(g::SV.C_S_7_22__20___id) ? (rt::m_floor((((double)(({ rt::Value _o18701 = C_S_8G::sm_S__23_N(g::SV.C_S_7_22__20___id); C_S_84* _p18702 = rt::as_ptr<C_S_84>(_o18701); _p18702 ? _p18702->f_S__27__21_X : rt::toint(rt::dget(_o18701, NM_S__27__21_X)); }))) / 30.0)) * g::SV.C_S__3e__22__25___S_1_21_S) : 0.0);
    return 0.0;
}
C_S__3e__22__25_* C_S__3e__22__25_::alloc_() {
    C_S__3e__22__25_* o = rt::make<C_S__3e__22__25_>();
    return o;
}
rt::Value C_S__3e__22__25_::mk_(rt::Value* a, int n) {
    C_S__3e__22__25_* o = alloc_();
    o->C_S__3e__22__25_::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3e__22__25_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3e__22__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3e__22__25_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3e__22__25_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3e__22__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22__25___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3e__22__25___S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22__25___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3e__22__25___S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3e__22__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3e__22__26_::ctor_() {
    RT_FN("S__3e__22__26_.S__3e__22__26_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18703 = 943.0; this->f_S_6_21_Z = rt::touint_d(_v18703); _v18703; });
    ({ rt::Value _v18704 = rt::trv(rt::VS(g::LS[5553])); this->f_S_1i = rt::slot_string(_v18704); _v18704; });
    ({ rt::Value _v18705 = rt::VS(g::LS[5554]); this->f_S__5e__21__23_ = rt::slot_string(_v18705); _v18705; });
    ({ double _v18706 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18706); _v18706; });
    ({ double _v18707 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18707); _v18707; });
    ({ double _v18708 = 11.0; this->f_S_0_21_N = rt::toint_d(_v18708); _v18708; });
    ({ double _v18709 = 60.0; this->f_S__5e__21__25_ = rt::toint_d(_v18709); _v18709; });
    ({ double _v18710 = 178.0; this->f_S_3_21_r = rt::touint_d(_v18710); _v18710; });
}
rt::Value C_S__3e__22__26_::m_S_8_21_1() {
    RT_FN("S__3e__22__26_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3615]), C_S__26_c::sm_S_8_21_Z(C_S__3e__22__26_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3e__22__26_::sm_S__2c__21_G() {
    RT_FN("S__3e__22__26_.S__2c__21_G");
    return 100.0;
    return 0.0;
}
C_S__3e__22__26_* C_S__3e__22__26_::alloc_() {
    C_S__3e__22__26_* o = rt::make<C_S__3e__22__26_>();
    return o;
}
rt::Value C_S__3e__22__26_::mk_(rt::Value* a, int n) {
    C_S__3e__22__26_* o = alloc_();
    o->C_S__3e__22__26_::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3e__22__26_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3e__22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3e__22__26_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3e__22__26_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3e__22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22__26___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22__26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3e__22_K::ctor_() {
    RT_FN("S__3e__22_K.S__3e__22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18711 = 1231.0; this->f_S_6_21_Z = rt::touint_d(_v18711); _v18711; });
    ({ rt::Value _v18712 = rt::trv(rt::VS(g::LS[5555])); this->f_S_1i = rt::slot_string(_v18712); _v18712; });
    ({ rt::Value _v18713 = rt::VS(g::LS[5556]); this->f_S__5e__21__23_ = rt::slot_string(_v18713); _v18713; });
    ({ double _v18714 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18714); _v18714; });
    ({ double _v18715 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18715); _v18715; });
    ({ double _v18716 = 11.0; this->f_S_0_21_N = rt::toint_d(_v18716); _v18716; });
    ({ double _v18717 = 71.0; this->f_S__5e__21__25_ = rt::toint_d(_v18717); _v18717; });
    ({ double _v18718 = 206.0; this->f_S_3_21_r = rt::touint_d(_v18718); _v18718; });
}
rt::Value C_S__3e__22_K::m_S_8_21_1() {
    RT_FN("S__3e__22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5557]), C_S__26_c::sm_S_8_21_Z(C_S__3e__22_K::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3e__22_K::sm_S_9L() {
    RT_FN("S__3e__22_K.S_9L");
    return (0.3 * rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S_5_21_3__id, C_S__26_c::dsm_S_1_21__3b__1()), 0.6));
    return 0.0;
}
C_S__3e__22_K* C_S__3e__22_K::alloc_() {
    C_S__3e__22_K* o = rt::make<C_S__3e__22_K>();
    return o;
}
rt::Value C_S__3e__22_K::mk_(rt::Value* a, int n) {
    C_S__3e__22_K* o = alloc_();
    o->C_S__3e__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3e__22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3e__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3e__22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3e__22_K::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__3e__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22_K__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__3f__21_c::ctor_() {
    RT_FN("S__3f__21_c.S__3f__21_c");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18719 = 697.0; this->f_S_6_21_Z = rt::touint_d(_v18719); _v18719; });
    ({ rt::Value _v18720 = rt::trv(rt::VS(g::LS[5558])); this->f_S_1i = rt::slot_string(_v18720); _v18720; });
    ({ rt::Value _v18721 = rt::VS(g::LS[5559]); this->f_S__5e__21__23_ = rt::slot_string(_v18721); _v18721; });
    ({ double _v18722 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18722); _v18722; });
    ({ double _v18723 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18723); _v18723; });
    ({ double _v18724 = 11.0; this->f_S_0_21_N = rt::toint_d(_v18724); _v18724; });
    ({ double _v18725 = 31.0; this->f_S__5e__21__25_ = rt::toint_d(_v18725); _v18725; });
    ({ double _v18726 = 116.0; this->f_S_3_21_r = rt::touint_d(_v18726); _v18726; });
}
rt::Value C_S__3f__21_c::m_S_8_21_1() {
    RT_FN("S__3f__21_c.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5560]), C_S__26_c::sm_S_8_21_Z(C_S__3f__21_c::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3f__21_c::sm_S__2c__21_G() {
    RT_FN("S__3f__21_c.S__2c__21_G");
    return (1.5 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.25));
    return 0.0;
}
C_S__3f__21_c* C_S__3f__21_c::alloc_() {
    C_S__3f__21_c* o = rt::make<C_S__3f__21_c>();
    return o;
}
rt::Value C_S__3f__21_c::mk_(rt::Value* a, int n) {
    C_S__3f__21_c* o = alloc_();
    o->C_S__3f__21_c::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_c::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3f__21_c::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3f__21_c::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3f__21_c::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3f__21_c::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3f__21_c::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_c__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__21_c::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_c__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__21_c::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3f__21_r::ctor_() {
    RT_FN("S__3f__21_r.S__3f__21_r");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18727 = 794.0; this->f_S_6_21_Z = rt::touint_d(_v18727); _v18727; });
    ({ rt::Value _v18728 = rt::trv(rt::VS(g::LS[5561])); this->f_S_1i = rt::slot_string(_v18728); _v18728; });
    ({ rt::Value _v18729 = rt::VS(g::LS[5562]); this->f_S__5e__21__23_ = rt::slot_string(_v18729); _v18729; });
    ({ double _v18730 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18730); _v18730; });
    ({ double _v18731 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18731); _v18731; });
    ({ double _v18732 = 2.0; this->f_S_0_21_N = rt::toint_d(_v18732); _v18732; });
    ({ double _v18733 = 48.0; this->f_S__5e__21__25_ = rt::toint_d(_v18733); _v18733; });
    ({ double _v18734 = 150.0; this->f_S_3_21_r = rt::touint_d(_v18734); _v18734; });
}
rt::Value C_S__3f__21_r::m_S_8_21_1() {
    RT_FN("S__3f__21_r.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5563]), C_S__26_c::sm_S_8_21_Z(C_S__3f__21_r::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3f__21_r::sm_S__3f__21__3c_() {
    RT_FN("S__3f__21_r.S__3f__21__3c_");
    return (1.5 * rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S_6_21_V__id, C_S__26_c::dsm_S_1_21__3b__1()), 0.5));
    return 0.0;
}
C_S__3f__21_r* C_S__3f__21_r::alloc_() {
    C_S__3f__21_r* o = rt::make<C_S__3f__21_r>();
    return o;
}
rt::Value C_S__3f__21_r::mk_(rt::Value* a, int n) {
    C_S__3f__21_r* o = alloc_();
    o->C_S__3f__21_r::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3f__21_r::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3f__21_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3f__21_r::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3f__21_r::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__3f__21_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_r__id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__21_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_r__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__21_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__3f__22__25_::ctor_() {
    RT_FN("S__3f__22__25_.S__3f__22__25_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18735 = 963.0; this->f_S_6_21_Z = rt::touint_d(_v18735); _v18735; });
    ({ rt::Value _v18736 = rt::trv(rt::VS(g::LS[5564])); this->f_S_1i = rt::slot_string(_v18736); _v18736; });
    ({ rt::Value _v18737 = rt::VS(g::LS[5565]); this->f_S__5e__21__23_ = rt::slot_string(_v18737); _v18737; });
    ({ double _v18738 = 5.0; this->f_S_9_21_m = rt::toint_d(_v18738); _v18738; });
    ({ double _v18739 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18739); _v18739; });
    ({ double _v18740 = 13.0; this->f_S_0_21_N = rt::toint_d(_v18740); _v18740; });
    ({ double _v18741 = 25.0; this->f_S__5e__21__25_ = rt::toint_d(_v18741); _v18741; });
    ({ double _v18742 = 130.0; this->f_S_3_21_r = rt::touint_d(_v18742); _v18742; });
}
rt::Value C_S__3f__22__25_::m_S_8_21_1() {
    RT_FN("S__3f__22__25_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S__3f__22__25_::m_S_7G() {
    RT_FN("S__3f__22__25_.S_7G");
    return ({ bool _t18743 = (C_S__23__21__21_::sm_S__21__2d_() >= 1000000000.0); _t18743 ? (bool)(rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(45.0))) : _t18743; });
    return false;
}
rt::Value C_S__3f__22__25_::m_S_9T() {
    RT_FN("S__3f__22__25_.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5566]), C_S__26_c::sm_S_8_21_Z(1000000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(45.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__3f__22__25_* C_S__3f__22__25_::alloc_() {
    C_S__3f__22__25_* o = rt::make<C_S__3f__22__25_>();
    return o;
}
rt::Value C_S__3f__22__25_::mk_(rt::Value* a, int n) {
    C_S__3f__22__25_* o = alloc_();
    o->C_S__3f__22__25_::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3f__22__25_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3f__22__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3f__22__25_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3f__22__25_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__22__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22__25___id)); return true;
    case NM_S__3c__21_Y: out = rt::V(g::SV.C_S__3f__22__25___S__3c__21_Y); return true;
    case NM_S__27__22__26_: out = rt::V(g::SV.C_S__3f__22__25___S__27__22__26_); return true;
    default: return false;
    }
}
bool C_S__3f__22__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22__25___id = rt::touint(v); return true;
    case NM_S__3c__21_Y: g::SV.C_S__3f__22__25___S__3c__21_Y = rt::tonum(v); return true;
    case NM_S__27__22__26_: g::SV.C_S__3f__22__25___S__27__22__26_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3f__22__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__22_K::ctor_() {
    RT_FN("S__3f__22_K.S__3f__22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18744 = 1241.0; this->f_S_6_21_Z = rt::touint_d(_v18744); _v18744; });
    ({ rt::Value _v18745 = rt::trv(rt::VS(g::LS[5567])); this->f_S_1i = rt::slot_string(_v18745); _v18745; });
    ({ rt::Value _v18746 = rt::VS(g::LS[5568]); this->f_S__5e__21__23_ = rt::slot_string(_v18746); _v18746; });
    ({ double _v18747 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18747); _v18747; });
    ({ double _v18748 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18748); _v18748; });
    ({ double _v18749 = 4.0; this->f_S_0_21_N = rt::toint_d(_v18749); _v18749; });
    ({ double _v18750 = 69.0; this->f_S__5e__21__25_ = rt::toint_d(_v18750); _v18750; });
    ({ double _v18751 = 202.0; this->f_S_3_21_r = rt::touint_d(_v18751); _v18751; });
}
rt::Value C_S__3f__22_K::m_S_8_21_1() {
    RT_FN("S__3f__22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5569]), C_S__26_c::sm_S_8_21_Z(C_S__3f__22_K::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3f__22_K::sm_S__2b__2b_() {
    RT_FN("S__3f__22_K.S__2b__2b_");
    return (2.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()))), 2.0));
    return 0.0;
}
C_S__3f__22_K* C_S__3f__22_K::alloc_() {
    C_S__3f__22_K* o = rt::make<C_S__3f__22_K>();
    return o;
}
rt::Value C_S__3f__22_K::mk_(rt::Value* a, int n) {
    C_S__3f__22_K* o = alloc_();
    o->C_S__3f__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3f__22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3f__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3f__22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3f__22_K::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__3f__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22_K__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__3f_B::ctor_() {
    RT_FN("S__3f_B.S__3f_B");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18752 = 681.0; this->f_S_6_21_Z = rt::touint_d(_v18752); _v18752; });
    ({ rt::Value _v18753 = rt::trv(rt::VS(g::LS[5570])); this->f_S_1i = rt::slot_string(_v18753); _v18753; });
    ({ rt::Value _v18754 = rt::VS(g::LS[5571]); this->f_S__5e__21__23_ = rt::slot_string(_v18754); _v18754; });
    ({ double _v18755 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18755); _v18755; });
    ({ double _v18756 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18756); _v18756; });
    ({ double _v18757 = 0.0; this->f_S_0_21_N = rt::toint_d(_v18757); _v18757; });
    ({ double _v18758 = 28.0; this->f_S__5e__21__25_ = rt::toint_d(_v18758); _v18758; });
    ({ double _v18759 = 110.0; this->f_S_3_21_r = rt::touint_d(_v18759); _v18759; });
}
rt::Value C_S__3f_B::m_S_8_21_1() {
    RT_FN("S__3f_B.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5572]), C_S__26_c::sm_S_8_21_Z(C_S__3f_B::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3f_B::sm_S_9L() {
    RT_FN("S__3f_B.S_9L");
    return (0.3 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.6));
    return 0.0;
}
C_S__3f_B* C_S__3f_B::alloc_() {
    C_S__3f_B* o = rt::make<C_S__3f_B>();
    return o;
}
rt::Value C_S__3f_B::mk_(rt::Value* a, int n) {
    C_S__3f_B* o = alloc_();
    o->C_S__3f_B::ctor_();
    return rt::VO(o);
}
bool C_S__3f_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3f_B::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3f_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3f_B::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3f_B::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__3f_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f_B__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__25_M::ctor_() {
    RT_FN("S__25_M.S__25_M");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18760 = 693.0; this->f_S_6_21_Z = rt::touint_d(_v18760); _v18760; });
    ({ rt::Value _v18761 = rt::trv(rt::VS(g::LS[5573])); this->f_S_1i = rt::slot_string(_v18761); _v18761; });
    ({ rt::Value _v18762 = rt::VS(g::LS[5574]); this->f_S__5e__21__23_ = rt::slot_string(_v18762); _v18762; });
    ({ double _v18763 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18763); _v18763; });
    ({ double _v18764 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18764); _v18764; });
    ({ double _v18765 = 4.0; this->f_S_0_21_N = rt::toint_d(_v18765); _v18765; });
    ({ double _v18766 = 27.0; this->f_S__5e__21__25_ = rt::toint_d(_v18766); _v18766; });
    ({ double _v18767 = 108.0; this->f_S_3_21_r = rt::touint_d(_v18767); _v18767; });
}
rt::Value C_S__25_M::m_S_8_21_1() {
    RT_FN("S__25_M.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5575]), C_S__26_c::sm_S_8_21_Z(C_S__25_M::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__25_M::sm_S__3f__21__3c_() {
    RT_FN("S__25_M.S__3f__21__3c_");
    return (0.3 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.7));
    return 0.0;
}
C_S__25_M* C_S__25_M::alloc_() {
    C_S__25_M* o = rt::make<C_S__25_M>();
    return o;
}
rt::Value C_S__25_M::mk_(rt::Value* a, int n) {
    C_S__25_M* o = alloc_();
    o->C_S__25_M::ctor_();
    return rt::VO(o);
}
bool C_S__25_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__25_M::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__25_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__25_M::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__25_M::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__25_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25_M__id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__26__22__26_::ctor_() {
    RT_FN("S__26__22__26_.S__26__22__26_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18768 = 965.0; this->f_S_6_21_Z = rt::touint_d(_v18768); _v18768; });
    ({ rt::Value _v18769 = rt::trv(rt::VS(g::LS[5576])); this->f_S_1i = rt::slot_string(_v18769); _v18769; });
    ({ rt::Value _v18770 = rt::VS(g::LS[5577]); this->f_S__5e__21__23_ = rt::slot_string(_v18770); _v18770; });
    ({ double _v18771 = 5.0; this->f_S_9_21_m = rt::toint_d(_v18771); _v18771; });
    ({ double _v18772 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18772); _v18772; });
    ({ double _v18773 = 13.0; this->f_S_0_21_N = rt::toint_d(_v18773); _v18773; });
    ({ double _v18774 = 49.0; this->f_S__5e__21__25_ = rt::toint_d(_v18774); _v18774; });
    ({ double _v18775 = 153.0; this->f_S_3_21_r = rt::touint_d(_v18775); _v18775; });
}
rt::Value C_S__26__22__26_::m_S_8_21_1() {
    RT_FN("S__26__22__26_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5578])));
    return rt::NUL;
}
C_S__26__22__26_* C_S__26__22__26_::alloc_() {
    C_S__26__22__26_* o = rt::make<C_S__26__22__26_>();
    return o;
}
rt::Value C_S__26__22__26_::mk_(rt::Value* a, int n) {
    C_S__26__22__26_* o = alloc_();
    o->C_S__26__22__26_::ctor_();
    return rt::VO(o);
}
bool C_S__26__22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__26__22__26_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__26__22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__26__22__26_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__26__22__26_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22__26___id)); return true;
    default: return false;
    }
}
bool C_S__26__22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22__26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26_0::ctor_() {
    RT_FN("S__26_0.S__26_0");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18776 = 671.0; this->f_S_6_21_Z = rt::touint_d(_v18776); _v18776; });
    ({ rt::Value _v18777 = rt::trv(rt::VS(g::LS[5579])); this->f_S_1i = rt::slot_string(_v18777); _v18777; });
    ({ rt::Value _v18778 = rt::VS(g::LS[5580]); this->f_S__5e__21__23_ = rt::slot_string(_v18778); _v18778; });
    ({ double _v18779 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18779); _v18779; });
    ({ double _v18780 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18780); _v18780; });
    ({ double _v18781 = 1.0; this->f_S_0_21_N = rt::toint_d(_v18781); _v18781; });
    ({ double _v18782 = 2.0; this->f_S__5e__21__25_ = rt::toint_d(_v18782); _v18782; });
    ({ double _v18783 = 62.0; this->f_S_3_21_r = rt::touint_d(_v18783); _v18783; });
}
rt::Value C_S__26_0::m_S_8_21_1() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__26_0.S_8_21_1");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[5581]), C_S__26_c::sm_S_8_21_Z(C_S__26_0::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::slot_string(rt::add(l_A__loc1_, (rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[5582]))), rt::VS(g::LS[143])), ({ rt::Value _o18784 = C_S_8G::sm_S__21__21_H(g::SV.C_S__60__22__3c___id); C_S__60_6* _p18785 = rt::as_ptr<C_S__60_6>(_o18784); _p18785 ? _p18785->m_S__40__22_() : rt::dcallv(_o18784, NM_S__40__22_); })))));
    return rt::NUL;
}
double C_S__26_0::sm_S__26_s() {
    RT_FN("S__26_0.S__26_s");
    return (30.0 + (3.0 * rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 134.0))));
    return 0.0;
}
C_S__26_0* C_S__26_0::alloc_() {
    C_S__26_0* o = rt::make<C_S__26_0>();
    return o;
}
rt::Value C_S__26_0::mk_(rt::Value* a, int n) {
    C_S__26_0* o = alloc_();
    o->C_S__26_0::ctor_();
    return rt::VO(o);
}
bool C_S__26_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__26_0::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__26_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__26_0::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__26_0::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__26_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26_0__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26_0__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__27__21_q::ctor_() {
    RT_FN("S__27__21_q.S__27__21_q");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18786 = 801.0; this->f_S_6_21_Z = rt::touint_d(_v18786); _v18786; });
    ({ rt::Value _v18787 = rt::trv(rt::VS(g::LS[5583])); this->f_S_1i = rt::slot_string(_v18787); _v18787; });
    ({ rt::Value _v18788 = rt::VS(g::LS[5584]); this->f_S__5e__21__23_ = rt::slot_string(_v18788); _v18788; });
    ({ double _v18789 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18789); _v18789; });
    ({ double _v18790 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18790); _v18790; });
    ({ double _v18791 = 8.0; this->f_S_0_21_N = rt::toint_d(_v18791); _v18791; });
    ({ double _v18792 = 49.0; this->f_S__5e__21__25_ = rt::toint_d(_v18792); _v18792; });
    ({ double _v18793 = 152.0; this->f_S_3_21_r = rt::touint_d(_v18793); _v18793; });
}
rt::Value C_S__27__21_q::m_S_8_21_1() {
    RT_FN("S__27__21_q.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5585]), C_S__26_c::sm_S_8_21_Z(C_S__27__21_q::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__27__21_q::sm_S_6_21_Y() {
    RT_FN("S__27__21_q.S_6_21_Y");
    return (1.5 * rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__25__21_J__id, C_S__26_c::dsm_S_1_21__3b__1()), 0.5));
    return 0.0;
}
C_S__27__21_q* C_S__27__21_q::alloc_() {
    C_S__27__21_q* o = rt::make<C_S__27__21_q>();
    return o;
}
rt::Value C_S__27__21_q::mk_(rt::Value* a, int n) {
    C_S__27__21_q* o = alloc_();
    o->C_S__27__21_q::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__27__21_q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__27__21_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__27__21_q::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__27__21_q::smeth_(int id) {
    switch (id) {
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S__27__21_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21_q__id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__21_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21_q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__21_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S__27__21_r::ctor_() {
    RT_FN("S__27__21_r.S__27__21_r");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18794 = 802.0; this->f_S_6_21_Z = rt::touint_d(_v18794); _v18794; });
    ({ rt::Value _v18795 = rt::trv(rt::VS(g::LS[5586])); this->f_S_1i = rt::slot_string(_v18795); _v18795; });
    ({ rt::Value _v18796 = rt::VS(g::LS[5587]); this->f_S__5e__21__23_ = rt::slot_string(_v18796); _v18796; });
    ({ double _v18797 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18797); _v18797; });
    ({ double _v18798 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18798); _v18798; });
    ({ double _v18799 = 0.0; this->f_S_0_21_N = rt::toint_d(_v18799); _v18799; });
    ({ double _v18800 = 44.0; this->f_S__5e__21__25_ = rt::toint_d(_v18800); _v18800; });
    ({ double _v18801 = 142.0; this->f_S_3_21_r = rt::touint_d(_v18801); _v18801; });
}
rt::Value C_S__27__21_r::m_S_8_21_1() {
    RT_FN("S__27__21_r.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5588]), C_S__26_c::sm_S_8_21_Z(C_S__27__21_r::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__27__21_r::sm_S_9L() {
    RT_FN("S__27__21_r.S_9L");
    return (1.5 * rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__27_K__id, C_S__26_c::dsm_S_1_21__3b__1()), 0.5));
    return 0.0;
}
C_S__27__21_r* C_S__27__21_r::alloc_() {
    C_S__27__21_r* o = rt::make<C_S__27__21_r>();
    return o;
}
rt::Value C_S__27__21_r::mk_(rt::Value* a, int n) {
    C_S__27__21_r* o = alloc_();
    o->C_S__27__21_r::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__27__21_r::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__27__21_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__27__21_r::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__27__21_r::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__27__21_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21_r__id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__21_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21_r__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__21_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__27__22__24_::ctor_() {
    RT_FN("S__27__22__24_.S__27__22__24_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18802 = 952.0; this->f_S_6_21_Z = rt::touint_d(_v18802); _v18802; });
    ({ rt::Value _v18803 = rt::trv(rt::VS(g::LS[5589])); this->f_S_1i = rt::slot_string(_v18803); _v18803; });
    ({ rt::Value _v18804 = rt::VS(g::LS[5590]); this->f_S__5e__21__23_ = rt::slot_string(_v18804); _v18804; });
    ({ double _v18805 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18805); _v18805; });
    ({ double _v18806 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18806); _v18806; });
    ({ double _v18807 = 4.0; this->f_S_0_21_N = rt::toint_d(_v18807); _v18807; });
    ({ double _v18808 = 62.0; this->f_S__5e__21__25_ = rt::toint_d(_v18808); _v18808; });
    ({ double _v18809 = 182.0; this->f_S_3_21_r = rt::touint_d(_v18809); _v18809; });
}
rt::Value C_S__27__22__24_::m_S_8_21_1() {
    RT_FN("S__27__22__24_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5591]), C_S__26_c::sm_S_8_21_Z(C_S__27__22__24_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__27__22__24_::sm_S__2c__21_G() {
    RT_FN("S__27__22__24_.S__2c__21_G");
    return 100.0;
    return 0.0;
}
C_S__27__22__24_* C_S__27__22__24_::alloc_() {
    C_S__27__22__24_* o = rt::make<C_S__27__22__24_>();
    return o;
}
rt::Value C_S__27__22__24_::mk_(rt::Value* a, int n) {
    C_S__27__22__24_* o = alloc_();
    o->C_S__27__22__24_::ctor_();
    return rt::VO(o);
}
bool C_S__27__22__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__27__22__24_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__27__22__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__27__22__24_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__27__22__24_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__27__22__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22__24___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__27__22__27_::ctor_() {
    RT_FN("S__27__22__27_.S__27__22__27_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18810 = 951.0; this->f_S_6_21_Z = rt::touint_d(_v18810); _v18810; });
    ({ rt::Value _v18811 = rt::trv(rt::VS(g::LS[5592])); this->f_S_1i = rt::slot_string(_v18811); _v18811; });
    ({ rt::Value _v18812 = rt::VS(g::LS[5593]); this->f_S__5e__21__23_ = rt::slot_string(_v18812); _v18812; });
    ({ double _v18813 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18813); _v18813; });
    ({ double _v18814 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18814); _v18814; });
    ({ double _v18815 = 6.0; this->f_S_0_21_N = rt::toint_d(_v18815); _v18815; });
    ({ double _v18816 = 52.0; this->f_S__5e__21__25_ = rt::toint_d(_v18816); _v18816; });
    ({ double _v18817 = 162.0; this->f_S_3_21_r = rt::touint_d(_v18817); _v18817; });
}
rt::Value C_S__27__22__27_::m_S_8_21_1() {
    RT_FN("S__27__22__27_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5594]), C_S__26_c::sm_S_8_21_Z(C_S__27__22__27_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__27__22__27_::sm_S__2c__21_G() {
    RT_FN("S__27__22__27_.S__2c__21_G");
    return 500.0;
    return 0.0;
}
C_S__27__22__27_* C_S__27__22__27_::alloc_() {
    C_S__27__22__27_* o = rt::make<C_S__27__22__27_>();
    return o;
}
rt::Value C_S__27__22__27_::mk_(rt::Value* a, int n) {
    C_S__27__22__27_* o = alloc_();
    o->C_S__27__22__27_::ctor_();
    return rt::VO(o);
}
bool C_S__27__22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__27__22__27_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__27__22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__27__22__27_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__27__22__27_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__27__22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__22__27___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__22__27___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__2b__21_6::ctor_() {
    RT_FN("S__2b__21_6.S__2b__21_6");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18818 = 695.0; this->f_S_6_21_Z = rt::touint_d(_v18818); _v18818; });
    ({ rt::Value _v18819 = rt::trv(rt::VS(g::LS[5595])); this->f_S_1i = rt::slot_string(_v18819); _v18819; });
    ({ rt::Value _v18820 = rt::VS(g::LS[5596]); this->f_S__5e__21__23_ = rt::slot_string(_v18820); _v18820; });
    ({ double _v18821 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18821); _v18821; });
    ({ double _v18822 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18822); _v18822; });
    ({ double _v18823 = 11.0; this->f_S_0_21_N = rt::toint_d(_v18823); _v18823; });
    ({ double _v18824 = 11.0; this->f_S__5e__21__25_ = rt::toint_d(_v18824); _v18824; });
    ({ double _v18825 = 71.0; this->f_S_3_21_r = rt::touint_d(_v18825); _v18825; });
}
rt::Value C_S__2b__21_6::m_S_8_21_1() {
    RT_FN("S__2b__21_6.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5597])));
    return rt::NUL;
}
C_S__2b__21_6* C_S__2b__21_6::alloc_() {
    C_S__2b__21_6* o = rt::make<C_S__2b__21_6>();
    return o;
}
rt::Value C_S__2b__21_6::mk_(rt::Value* a, int n) {
    C_S__2b__21_6* o = alloc_();
    o->C_S__2b__21_6::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_6::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__2b__21_6::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__2b__21_6::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__2b__21_6::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__2b__21_6::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21_6::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_6__id)); return true;
    default: return false;
    }
}
bool C_S__2b__21_6::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_6__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__21_6::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__21_q::ctor_() {
    RT_FN("S__2b__21_q.S__2b__21_q");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18826 = 804.0; this->f_S_6_21_Z = rt::touint_d(_v18826); _v18826; });
    ({ rt::Value _v18827 = rt::trv(rt::VS(g::LS[5598])); this->f_S_1i = rt::slot_string(_v18827); _v18827; });
    ({ rt::Value _v18828 = rt::VS(g::LS[5599]); this->f_S__5e__21__23_ = rt::slot_string(_v18828); _v18828; });
    ({ double _v18829 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18829); _v18829; });
    ({ double _v18830 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18830); _v18830; });
    ({ double _v18831 = 6.0; this->f_S_0_21_N = rt::toint_d(_v18831); _v18831; });
    ({ double _v18832 = 41.0; this->f_S__5e__21__25_ = rt::toint_d(_v18832); _v18832; });
    ({ double _v18833 = 136.0; this->f_S_3_21_r = rt::touint_d(_v18833); _v18833; });
}
rt::Value C_S__2b__21_q::m_S_8_21_1() {
    RT_FN("S__2b__21_q.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5600])));
    return rt::NUL;
}
C_S__2b__21_q* C_S__2b__21_q::alloc_() {
    C_S__2b__21_q* o = rt::make<C_S__2b__21_q>();
    return o;
}
rt::Value C_S__2b__21_q::mk_(rt::Value* a, int n) {
    C_S__2b__21_q* o = alloc_();
    o->C_S__2b__21_q::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__2b__21_q::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__2b__21_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__2b__21_q::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__2b__21_q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_q__id)); return true;
    default: return false;
    }
}
bool C_S__2b__21_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__21_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__22__26_::ctor_() {
    RT_FN("S__2b__22__26_.S__2b__22__26_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18834 = 958.0; this->f_S_6_21_Z = rt::touint_d(_v18834); _v18834; });
    ({ rt::Value _v18835 = rt::trv(rt::VS(g::LS[5601])); this->f_S_1i = rt::slot_string(_v18835); _v18835; });
    ({ rt::Value _v18836 = rt::VS(g::LS[5602]); this->f_S__5e__21__23_ = rt::slot_string(_v18836); _v18836; });
    ({ double _v18837 = 4.0; this->f_S_9_21_m = rt::toint_d(_v18837); _v18837; });
    ({ double _v18838 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18838); _v18838; });
    ({ double _v18839 = 12.0; this->f_S_0_21_N = rt::toint_d(_v18839); _v18839; });
    ({ double _v18840 = 35.0; this->f_S__5e__21__25_ = rt::toint_d(_v18840); _v18840; });
    ({ double _v18841 = 130.0; this->f_S_3_21_r = rt::touint_d(_v18841); _v18841; });
}
rt::Value C_S__2b__22__26_::m_S_8_21_1() {
    RT_FN("S__2b__22__26_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[3584]), C_S__26_c::sm_S_8_21_Z(C_S__2b__22__26_::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__2b__22__26_::sm_S__22__21__26_() {
    RT_FN("S__2b__22__26_.S__22__21__26_");
    return (0.5 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.5));
    return 0.0;
}
C_S__2b__22__26_* C_S__2b__22__26_::alloc_() {
    C_S__2b__22__26_* o = rt::make<C_S__2b__22__26_>();
    return o;
}
rt::Value C_S__2b__22__26_::mk_(rt::Value* a, int n) {
    C_S__2b__22__26_* o = alloc_();
    o->C_S__2b__22__26_::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__2b__22__26_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__2b__22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__2b__22__26_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__2b__22__26_::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__2b__22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22__26___id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22__26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__2c__21_::ctor_() {
    RT_FN("S__2c__21_.S__2c__21_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18842 = 691.0; this->f_S_6_21_Z = rt::touint_d(_v18842); _v18842; });
    ({ rt::Value _v18843 = rt::trv(rt::VS(g::LS[5603])); this->f_S_1i = rt::slot_string(_v18843); _v18843; });
    ({ rt::Value _v18844 = rt::VS(g::LS[5604]); this->f_S__5e__21__23_ = rt::slot_string(_v18844); _v18844; });
    ({ double _v18845 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18845); _v18845; });
    ({ double _v18846 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18846); _v18846; });
    ({ double _v18847 = 4.0; this->f_S_0_21_N = rt::toint_d(_v18847); _v18847; });
    ({ double _v18848 = 6.0; this->f_S__5e__21__25_ = rt::toint_d(_v18848); _v18848; });
    ({ double _v18849 = 66.0; this->f_S_3_21_r = rt::touint_d(_v18849); _v18849; });
}
rt::Value C_S__2c__21_::m_S_8_21_1() {
    RT_FN("S__2c__21_.S_8_21_1");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[5605]), C_S__26_c::sm_S_8_21_Z(rt::m_abs(C_S__2c__21_::sm_S_0_21_T()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[5606]), C_S__26_c::sm_S_8_21_Z(C_S__2c__21_::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__2c__21_::sm_S__40_L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
rt::Value C_S__2c__21_::m_S_6r() {
    RT_FN("S__2c__21_.S_6r");
    (void)(this->C_S__3b_x::m_S_6r());
    ({ uint32_t _v18852 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__25__2c___id); rt::Value _o18850 = C_S_8G::sm_S__23_N(g::SV.C_S__25__2c___id); C_S_84* _p18851 = rt::as_ptr<C_S_84>(_o18850); if (_p18851) _p18851->f_S_6_21_A = ((int32_t)(_v18852)); else rt::dset(_o18850, NM_S_6_21_A, rt::V((double)(_v18852))); _v18852; });
    return rt::NUL;
}
double C_S__2c__21_::sm_S_0_21_T() {
    RT_FN("S__2c__21_.S_0_21_T");
    return (-90.0);
    return 0.0;
}
double C_S__2c__21_::sm_S__2b__2b_() {
    RT_FN("S__2c__21_.S__2b__2b_");
    return rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__25__2c___id, false), 0.6);
    return 0.0;
}
double C_S__2c__21_::sm_S__40_L() {
    RT_FN("S__2c__21_.S__40_L");
    return (0.6 * rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__25__2c___id, false), 0.6));
    return 0.0;
}
C_S__2c__21_* C_S__2c__21_::alloc_() {
    C_S__2c__21_* o = rt::make<C_S__2c__21_>();
    return o;
}
rt::Value C_S__2c__21_::mk_(rt::Value* a, int n) {
    C_S__2c__21_* o = alloc_();
    o->C_S__2c__21_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__2c__21_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__2c__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__2c__21_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_6r: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__2c__21_::smeth_(int id) {
    switch (id) {
    case NM_S_0_21_T: return true;
    case NM_S__2b__2b_: return true;
    case NM_S__40_L: return true;
    default: return false;
    }
}
bool C_S__2c__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21___id)); return true;
    case NM_S_0_21_T: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40_L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_0_21_T: out = rt::V(sm_S_0_21_T()); return true;
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    case NM_S__40_L: out = rt::V(sm_S__40_L()); return true;
    default: return false;
    }
}
void C_S__2c__22__26_::ctor_() {
    RT_FN("S__2c__22__26_.S__2c__22__26_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18853 = 944.0; this->f_S_6_21_Z = rt::touint_d(_v18853); _v18853; });
    ({ rt::Value _v18854 = rt::trv(rt::VS(g::LS[5607])); this->f_S_1i = rt::slot_string(_v18854); _v18854; });
    ({ rt::Value _v18855 = rt::VS(g::LS[5608]); this->f_S__5e__21__23_ = rt::slot_string(_v18855); _v18855; });
    ({ double _v18856 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18856); _v18856; });
    ({ double _v18857 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18857); _v18857; });
    ({ double _v18858 = 10.0; this->f_S_0_21_N = rt::toint_d(_v18858); _v18858; });
    ({ double _v18859 = 54.0; this->f_S__5e__21__25_ = rt::toint_d(_v18859); _v18859; });
    ({ double _v18860 = 166.0; this->f_S_3_21_r = rt::touint_d(_v18860); _v18860; });
}
rt::Value C_S__2c__22__26_::m_S_8_21_1() {
    RT_FN("S__2c__22__26_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5609]), C_S__26_c::sm_S_8_21_Z(C_S__2c__22__26_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__2c__22__26_::sm_S__2c__21_G() {
    RT_FN("S__2c__22__26_.S__2c__21_G");
    return 300.0;
    return 0.0;
}
C_S__2c__22__26_* C_S__2c__22__26_::alloc_() {
    C_S__2c__22__26_* o = rt::make<C_S__2c__22__26_>();
    return o;
}
rt::Value C_S__2c__22__26_::mk_(rt::Value* a, int n) {
    C_S__2c__22__26_* o = alloc_();
    o->C_S__2c__22__26_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__2c__22__26_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__2c__22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__2c__22__26_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__2c__22__26_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__2c__22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__22__26___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__22__26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__2c_v::ctor_() {
    RT_FN("S__2c_v.S__2c_v");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18861 = 688.0; this->f_S_6_21_Z = rt::touint_d(_v18861); _v18861; });
    ({ rt::Value _v18862 = rt::trv(rt::VS(g::LS[5610])); this->f_S_1i = rt::slot_string(_v18862); _v18862; });
    ({ rt::Value _v18863 = rt::VS(g::LS[5611]); this->f_S__5e__21__23_ = rt::slot_string(_v18863); _v18863; });
    ({ double _v18864 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18864); _v18864; });
    ({ double _v18865 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18865); _v18865; });
    ({ double _v18866 = 6.0; this->f_S_0_21_N = rt::toint_d(_v18866); _v18866; });
    ({ double _v18867 = 14.0; this->f_S__5e__21__25_ = rt::toint_d(_v18867); _v18867; });
    ({ double _v18868 = 74.0; this->f_S_3_21_r = rt::touint_d(_v18868); _v18868; });
}
rt::Value C_S__2c_v::m_S_8_21_1() {
    RT_FN("S__2c_v.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S__2c_v::m_S_7G() {
    RT_FN("S__2c_v.S_7G");
    return ({ bool _t18870 = ({ bool _t18869 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0); _t18869 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t18869; }); _t18870 ? (bool)(((C_S__23__21__21_::sm_S_57() * 30.0) >= g::SV.C_S__2c_v__S__21__21__40_)) : _t18870; });
    return false;
}
rt::Value C_S__2c_v::m_S_9T() {
    RT_FN("S__2c_v.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5612]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__2c_v__S__21__21__40_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__2c_v* C_S__2c_v::alloc_() {
    C_S__2c_v* o = rt::make<C_S__2c_v>();
    return o;
}
rt::Value C_S__2c_v::mk_(rt::Value* a, int n) {
    C_S__2c_v* o = alloc_();
    o->C_S__2c_v::ctor_();
    return rt::VO(o);
}
bool C_S__2c_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__2c_v::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__2c_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__2c_v::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__2c_v::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c_v__id)); return true;
    case NM_S__21__21__40_: out = rt::V(g::SV.C_S__2c_v__S__21__21__40_); return true;
    default: return false;
    }
}
bool C_S__2c_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c_v__id = rt::touint(v); return true;
    case NM_S__21__21__40_: g::SV.C_S__2c_v__S__21__21__40_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2c_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__21__20_::ctor_() {
    RT_FN("S__2d__21__20_.S__2d__21__20_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18871 = 657.0; this->f_S_6_21_Z = rt::touint_d(_v18871); _v18871; });
    ({ rt::Value _v18872 = rt::trv(rt::VS(g::LS[5613])); this->f_S_1i = rt::slot_string(_v18872); _v18872; });
    ({ rt::Value _v18873 = rt::VS(g::LS[5614]); this->f_S__5e__21__23_ = rt::slot_string(_v18873); _v18873; });
    ({ double _v18874 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18874); _v18874; });
    ({ double _v18875 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18875); _v18875; });
    ({ double _v18876 = 5.0; this->f_S_0_21_N = rt::toint_d(_v18876); _v18876; });
    ({ double _v18877 = 36.0; this->f_S__5e__21__25_ = rt::toint_d(_v18877); _v18877; });
    ({ double _v18878 = 126.0; this->f_S_3_21_r = rt::touint_d(_v18878); _v18878; });
}
rt::Value C_S__2d__21__20_::m_S_8_21_1() {
    RT_FN("S__2d__21__20_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5615]), C_S__26_c::sm_S_8_21_Z(C_S__2d__21__20_::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__2d__21__20_::sm_S_6_21_Y() {
    RT_FN("S__2d__21__20_.S_6_21_Y");
    return rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.666);
    return 0.0;
}
C_S__2d__21__20_* C_S__2d__21__20_::alloc_() {
    C_S__2d__21__20_* o = rt::make<C_S__2d__21__20_>();
    return o;
}
rt::Value C_S__2d__21__20_::mk_(rt::Value* a, int n) {
    C_S__2d__21__20_* o = alloc_();
    o->C_S__2d__21__20_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21__20_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__2d__21__20_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__2d__21__20_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__2d__21__20_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__2d__21__20_::smeth_(int id) {
    switch (id) {
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S__2d__21__20_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21__20___id)); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__21__20_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21__20___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__21__20_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S__2d__21__60_::ctor_() {
    RT_FN("S__2d__21__60_.S__2d__21__60_");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v18879 = 649.0; this->f_S_6_21_Z = rt::touint_d(_v18879); _v18879; });
    ({ rt::Value _v18880 = rt::trv(rt::VS(g::LS[5616])); this->f_S_1i = rt::slot_string(_v18880); _v18880; });
    ({ rt::Value _v18881 = rt::VS(g::LS[5617]); this->f_S__5e__21__23_ = rt::slot_string(_v18881); _v18881; });
    ({ double _v18882 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18882); _v18882; });
    ({ double _v18883 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18883); _v18883; });
    ({ double _v18884 = 2.0; this->f_S_0_21_N = rt::toint_d(_v18884); _v18884; });
}
rt::Value C_S__2d__21__60_::m_S__5b__21_C() {
    RT_FN("S__2d__21__60_.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v18885 = g::SV.C_S__2b_P__id; this->f_S_6_21_p = _v18885; _v18885; });
    return rt::NUL;
}
rt::Value C_S__2d__21__60_::m_S_1_21_6() {
    RT_FN("S__2d__21__60_.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5618]), C_S__26_c::sm_S_8_21_Z(C_S__2d__21__60_::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__2d__21__60_::sm_S__22__21__26_() {
    RT_FN("S__2d__21__60_.S__22__21__26_");
    return (15.0 * rt::m_pow(C_S__26_c::sm_S__27__22__2d_(rt::toint_d(2.0), g::SV.C_S__2d__21__60___id), 1.5));
    return 0.0;
}
C_S__2d__21__60_* C_S__2d__21__60_::alloc_() {
    C_S__2d__21__60_* o = rt::make<C_S__2d__21__60_>();
    return o;
}
rt::Value C_S__2d__21__60_::mk_(rt::Value* a, int n) {
    C_S__2d__21__60_* o = alloc_();
    o->C_S__2d__21__60_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21__60_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S__2d__21__60_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S__2d__21__60_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S__2d__21__60_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S__2d__21__60_::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__2d__21__60_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21__60___id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__21__60_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21__60___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__21__60_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__2d_H::ctor_() {
    RT_FN("S__2d_H.S__2d_H");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v18886 = 674.0; this->f_S_6_21_Z = rt::touint_d(_v18886); _v18886; });
    ({ rt::Value _v18887 = rt::trv(rt::VS(g::LS[5619])); this->f_S_1i = rt::slot_string(_v18887); _v18887; });
    ({ rt::Value _v18888 = rt::VS(g::LS[5620]); this->f_S__5e__21__23_ = rt::slot_string(_v18888); _v18888; });
    ({ double _v18889 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18889); _v18889; });
    ({ double _v18890 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18890); _v18890; });
    ({ double _v18891 = 8.0; this->f_S_0_21_N = rt::toint_d(_v18891); _v18891; });
}
rt::Value C_S__2d_H::m_S__5b__21_C() {
    RT_FN("S__2d_H.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v18892 = g::SV.C_S__3d_J__id; this->f_S_6_21_p = _v18892; _v18892; });
    return rt::NUL;
}
int32_t C_S__2d_H::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__2d_H::dm_S_75_2() { return false; }
rt::Value C_S__2d_H::dm_S_75_3() { return rt::NUL; }
double C_S__2d_H::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__2d_H.S_75");
    if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) {
        return 0.0;
    }
    if (((((double)(l_param1)) == 0.0) || (((double)(l_param1)) == 4.0))) {
        return this->C_S_6P::m_S_75(rt::toint_d(8.0), C_S_6P::dm_S_75_1(), C_S_6P::dm_S_75_2(), C_S_6P::dm_S_75_3());
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S__2d_H::m_S_1_21_6() {
    RT_FN("S__2d_H.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5621]), C_S__26_c::sm_S_8_21_Z(C_S__2d_H::sm_S__40_V(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__2d_H::sm_S__40_V() {
    RT_FN("S__2d_H.S__40_V");
    return (1.5 * rt::m_pow(C_S__26_c::sm_S__27__22__2d_(rt::toint_d(8.0), g::SV.C_S__2d_H__id), 1.5));
    return 0.0;
}
C_S__2d_H* C_S__2d_H::alloc_() {
    C_S__2d_H* o = rt::make<C_S__2d_H>();
    return o;
}
rt::Value C_S__2d_H::mk_(rt::Value* a, int n) {
    C_S__2d_H* o = alloc_();
    o->C_S__2d_H::ctor_();
    return rt::VO(o);
}
bool C_S__2d_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S__2d_H::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S__2d_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__2d_H::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__2d_H::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__2d_H::dm_S_75_3()))); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S__2d_H::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_75: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S__2d_H::smeth_(int id) {
    switch (id) {
    case NM_S__40_V: return true;
    default: return false;
    }
}
bool C_S__2d_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d_H__id)); return true;
    case NM_S__40_V: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d_H__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_V: out = rt::V(sm_S__40_V()); return true;
    default: return false;
    }
}
void C_S__2d_J::ctor_() {
    RT_FN("S__2d_J.S__2d_J");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v18893 = 658.0; this->f_S_6_21_Z = rt::touint_d(_v18893); _v18893; });
    ({ rt::Value _v18894 = rt::trv(rt::VS(g::LS[5622])); this->f_S_1i = rt::slot_string(_v18894); _v18894; });
    ({ rt::Value _v18895 = rt::VS(g::LS[5623]); this->f_S__5e__21__23_ = rt::slot_string(_v18895); _v18895; });
    ({ double _v18896 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18896); _v18896; });
    ({ double _v18897 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18897); _v18897; });
    ({ double _v18898 = 10.0; this->f_S_0_21_N = rt::toint_d(_v18898); _v18898; });
}
rt::Value C_S__2d_J::m_S__5b__21_C() {
    RT_FN("S__2d_J.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v18899 = g::SV.C_S_9a__id; this->f_S_6_21_p = _v18899; _v18899; });
    return rt::NUL;
}
rt::Value C_S__2d_J::m_S_1_21_6() {
    RT_FN("S__2d_J.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5624]), C_S__26_c::sm_S_8_21_Z(C_S__2d_J::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__2d_J::sm_S__2b__2b_() {
    RT_FN("S__2d_J.S__2b__2b_");
    return (150.0 * rt::m_pow(C_S__26_c::sm_S__27__22__2d_(rt::toint_d(10.0), g::SV.C_S__2d_J__id), 2.25));
    return 0.0;
}
C_S__2d_J* C_S__2d_J::alloc_() {
    C_S__2d_J* o = rt::make<C_S__2d_J>();
    return o;
}
rt::Value C_S__2d_J::mk_(rt::Value* a, int n) {
    C_S__2d_J* o = alloc_();
    o->C_S__2d_J::ctor_();
    return rt::VO(o);
}
bool C_S__2d_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S__2d_J::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S__2d_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S__2d_J::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S__2d_J::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__2d_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d_J__id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d_J__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S_0_21__27_::ctor_() {
    RT_FN("S_0_21__27_.S_0_21__27_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18900 = 661.0; this->f_S_6_21_Z = rt::touint_d(_v18900); _v18900; });
    ({ rt::Value _v18901 = rt::trv(rt::VS(g::LS[5625])); this->f_S_1i = rt::slot_string(_v18901); _v18901; });
    ({ rt::Value _v18902 = rt::VS(g::LS[5626]); this->f_S__5e__21__23_ = rt::slot_string(_v18902); _v18902; });
    ({ double _v18903 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18903); _v18903; });
    ({ double _v18904 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18904); _v18904; });
    ({ double _v18905 = 10.0; this->f_S_0_21_N = rt::toint_d(_v18905); _v18905; });
    ({ double _v18906 = 32.0; this->f_S__5e__21__25_ = rt::toint_d(_v18906); _v18906; });
    ({ double _v18907 = 118.0; this->f_S_3_21_r = rt::touint_d(_v18907); _v18907; });
}
rt::Value C_S_0_21__27_::m_S_8_21_1() {
    RT_FN("S_0_21__27_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5627]), C_S__26_c::sm_S_8_21_Z(C_S_0_21__27_::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_0_21__27_::sm_S__23__21_Y() {
    RT_FN("S_0_21__27_.S__23__21_Y");
    return (2.0 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.8));
    return 0.0;
}
C_S_0_21__27_* C_S_0_21__27_::alloc_() {
    C_S_0_21__27_* o = rt::make<C_S_0_21__27_>();
    return o;
}
rt::Value C_S_0_21__27_::mk_(rt::Value* a, int n) {
    C_S_0_21__27_* o = alloc_();
    o->C_S_0_21__27_::ctor_();
    return rt::VO(o);
}
bool C_S_0_21__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_0_21__27_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_0_21__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_0_21__27_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_0_21__27_::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S_0_21__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21__27___id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_21__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21__27___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_21__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S_0_21_r::ctor_() {
    RT_FN("S_0_21_r.S_0_21_r");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18908 = 803.0; this->f_S_6_21_Z = rt::touint_d(_v18908); _v18908; });
    ({ rt::Value _v18909 = rt::trv(rt::VS(g::LS[5628])); this->f_S_1i = rt::slot_string(_v18909); _v18909; });
    ({ rt::Value _v18910 = rt::VS(g::LS[5629]); this->f_S__5e__21__23_ = rt::slot_string(_v18910); _v18910; });
    ({ double _v18911 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18911); _v18911; });
    ({ double _v18912 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18912); _v18912; });
    ({ double _v18913 = 3.0; this->f_S_0_21_N = rt::toint_d(_v18913); _v18913; });
    ({ double _v18914 = 47.0; this->f_S__5e__21__25_ = rt::toint_d(_v18914); _v18914; });
    ({ double _v18915 = 148.0; this->f_S_3_21_r = rt::touint_d(_v18915); _v18915; });
}
rt::Value C_S_0_21_r::m_S_8_21_1() {
    RT_FN("S_0_21_r.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5630]), C_S__26_c::sm_S_8_21_Z(C_S_0_21_r::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_0_21_r::sm_S__2c__21_G() {
    RT_FN("S_0_21_r.S__2c__21_G");
    return (2.0 * rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S_2_21_E__id, C_S__26_c::dsm_S_1_21__3b__1()), 0.4));
    return 0.0;
}
C_S_0_21_r* C_S_0_21_r::alloc_() {
    C_S_0_21_r* o = rt::make<C_S_0_21_r>();
    return o;
}
rt::Value C_S_0_21_r::mk_(rt::Value* a, int n) {
    C_S_0_21_r* o = alloc_();
    o->C_S_0_21_r::ctor_();
    return rt::VO(o);
}
bool C_S_0_21_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_0_21_r::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_0_21_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_0_21_r::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_0_21_r::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_0_21_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21_r__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_21_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21_r__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_21_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_0_22__26_::ctor_() {
    RT_FN("S_0_22__26_.S_0_22__26_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18916 = 968.0; this->f_S_6_21_Z = rt::touint_d(_v18916); _v18916; });
    ({ rt::Value _v18917 = rt::trv(rt::VS(g::LS[5631])); this->f_S_1i = rt::slot_string(_v18917); _v18917; });
    ({ rt::Value _v18918 = rt::VS(g::LS[5632]); this->f_S__5e__21__23_ = rt::slot_string(_v18918); _v18918; });
    ({ double _v18919 = 6.0; this->f_S_9_21_m = rt::toint_d(_v18919); _v18919; });
    ({ double _v18920 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18920); _v18920; });
    ({ double _v18921 = 14.0; this->f_S_0_21_N = rt::toint_d(_v18921); _v18921; });
    ({ double _v18922 = 10.0; this->f_S__5e__21__25_ = rt::toint_d(_v18922); _v18922; });
    ({ double _v18923 = 130.0; this->f_S_3_21_r = rt::touint_d(_v18923); _v18923; });
}
rt::Value C_S_0_22__26_::m_S_8_21_1() {
    RT_FN("S_0_22__26_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5633]), C_S__26_c::sm_S_8_21_Z(C_S_0_22__26_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_0_22__26_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_0_22__26_::sm_S__2c__21_G() {
    RT_FN("S_0_22__26_.S__2c__21_G");
    return 3.0;
    return 0.0;
}
double C_S_0_22__26_::sm_S_9L() {
    RT_FN("S_0_22__26_.S_9L");
    return (0.75 * rt::m_pow(C_S__26_c::sm_S_3L(false, C_S__26_c::dsm_S_3L_1()), 0.75));
    return 0.0;
}
C_S_0_22__26_* C_S_0_22__26_::alloc_() {
    C_S_0_22__26_* o = rt::make<C_S_0_22__26_>();
    return o;
}
rt::Value C_S_0_22__26_::mk_(rt::Value* a, int n) {
    C_S_0_22__26_* o = alloc_();
    o->C_S_0_22__26_::ctor_();
    return rt::VO(o);
}
bool C_S_0_22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_0_22__26_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_0_22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_0_22__26_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_0_22__26_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S_0_22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22__26___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22__26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S_0::ctor_() {
    RT_FN("S_0.S_0");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18924 = 667.0; this->f_S_6_21_Z = rt::touint_d(_v18924); _v18924; });
    ({ rt::Value _v18925 = rt::trv(rt::VS(g::LS[5634])); this->f_S_1i = rt::slot_string(_v18925); _v18925; });
    ({ rt::Value _v18926 = rt::VS(g::LS[5635]); this->f_S__5e__21__23_ = rt::slot_string(_v18926); _v18926; });
    ({ double _v18927 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18927); _v18927; });
    ({ double _v18928 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18928); _v18928; });
    ({ double _v18929 = 9.0; this->f_S_0_21_N = rt::toint_d(_v18929); _v18929; });
    ({ double _v18930 = 12.0; this->f_S__5e__21__25_ = rt::toint_d(_v18930); _v18930; });
    ({ double _v18931 = 72.0; this->f_S_3_21_r = rt::touint_d(_v18931); _v18931; });
}
rt::Value C_S_0::m_S_8_21_1() {
    RT_FN("S_0.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[595]), C_S__26_c::sm_S_8_21_Z(C_S_0::sm_S__27__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_0::sm_S__27__21_b() {
    RT_FN("S_0.S__27__21_b");
    return (6.5 * rt::m_pow(C_S__26_c::sm_S__21__21_8(), 0.65));
    return 0.0;
}
C_S_0* C_S_0::alloc_() {
    C_S_0* o = rt::make<C_S_0>();
    return o;
}
rt::Value C_S_0::mk_(rt::Value* a, int n) {
    C_S_0* o = alloc_();
    o->C_S_0::ctor_();
    return rt::VO(o);
}
bool C_S_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_0::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_0::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_0::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_1_21_B::ctor_() {
    RT_FN("S_1_21_B.S_1_21_B");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v18932 = 686.0; this->f_S_6_21_Z = rt::touint_d(_v18932); _v18932; });
    ({ rt::Value _v18933 = rt::trv(rt::VS(g::LS[5636])); this->f_S_1i = rt::slot_string(_v18933); _v18933; });
    ({ rt::Value _v18934 = rt::VS(g::LS[5637]); this->f_S__5e__21__23_ = rt::slot_string(_v18934); _v18934; });
    ({ double _v18935 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18935); _v18935; });
    ({ double _v18936 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18936); _v18936; });
    ({ double _v18937 = 6.0; this->f_S_0_21_N = rt::toint_d(_v18937); _v18937; });
}
rt::Value C_S_1_21_B::m_S__5b__21_C() {
    RT_FN("S_1_21_B.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v18938 = g::SV.C_S_6_21_1__id; this->f_S_6_21_p = _v18938; _v18938; });
    return rt::NUL;
}
int32_t C_S_1_21_B::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_1_21_B::dm_S_75_2() { return false; }
rt::Value C_S_1_21_B::dm_S_75_3() { return rt::NUL; }
double C_S_1_21_B::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_1_21_B.S_75");
    if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) {
        return 0.0;
    }
    if (((((double)(l_param1)) == 3.0) || (((double)(l_param1)) == 2.0))) {
        return this->C_S_6P::m_S_75(rt::toint_d(6.0), C_S_6P::dm_S_75_1(), C_S_6P::dm_S_75_2(), C_S_6P::dm_S_75_3());
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_1_21_B::m_S_1_21_6() {
    RT_FN("S_1_21_B.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5638]), C_S__26_c::sm_S_8_21_Z(C_S_1_21_B::sm_S_1_3d_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_1_21_B::sm_S_1_3d_() {
    RT_FN("S_1_21_B.S_1_3d_");
    return (10.0 + (1.5 * rt::m_pow(C_S__26_c::sm_S__27__22__2d_(rt::toint_d(6.0), g::SV.C_S_1_21_B__id), 1.5)));
    return 0.0;
}
C_S_1_21_B* C_S_1_21_B::alloc_() {
    C_S_1_21_B* o = rt::make<C_S_1_21_B>();
    return o;
}
rt::Value C_S_1_21_B::mk_(rt::Value* a, int n) {
    C_S_1_21_B* o = alloc_();
    o->C_S_1_21_B::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S_1_21_B::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S_1_21_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_1_21_B::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_1_21_B::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_1_21_B::dm_S_75_3()))); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S_1_21_B::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_75: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S_1_21_B::smeth_(int id) {
    switch (id) {
    case NM_S_1_3d_: return true;
    default: return false;
    }
}
bool C_S_1_21_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_B__id)); return true;
    case NM_S_1_3d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_21_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_21_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_1_3d_: out = rt::V(sm_S_1_3d_()); return true;
    default: return false;
    }
}
void C_S_1_21_M::ctor_() {
    RT_FN("S_1_21_M.S_1_21_M");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v18939 = 678.0; this->f_S_6_21_Z = rt::touint_d(_v18939); _v18939; });
    ({ rt::Value _v18940 = rt::trv(rt::VS(g::LS[5639])); this->f_S_1i = rt::slot_string(_v18940); _v18940; });
    ({ rt::Value _v18941 = rt::VS(g::LS[5640]); this->f_S__5e__21__23_ = rt::slot_string(_v18941); _v18941; });
    ({ double _v18942 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18942); _v18942; });
    ({ double _v18943 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18943); _v18943; });
    ({ double _v18944 = 0.0; this->f_S_0_21_N = rt::toint_d(_v18944); _v18944; });
}
rt::Value C_S_1_21_M::m_S__5b__21_C() {
    RT_FN("S_1_21_M.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v18945 = g::SV.C_S_21__id; this->f_S_6_21_p = _v18945; _v18945; });
    return rt::NUL;
}
rt::Value C_S_1_21_M::m_S_1_21_6() {
    RT_FN("S_1_21_M.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5641]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_8_21_d__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S_2_21__2b___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__5b__21__5f___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(18.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_1_21_M::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_1_21_M::sm_S__2c__21_G() {
    RT_FN("S_1_21_M.S__2c__21_G");
    return (18.0 * C_S__26_c::sm_S__27__22__2d_(rt::toint_d(0.0), g::SV.C_S_1_21_M__id));
    return 0.0;
}
C_S_1_21_M* C_S_1_21_M::alloc_() {
    C_S_1_21_M* o = rt::make<C_S_1_21_M>();
    return o;
}
rt::Value C_S_1_21_M::mk_(rt::Value* a, int n) {
    C_S_1_21_M* o = alloc_();
    o->C_S_1_21_M::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S_1_21_M::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S_1_21_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S_1_21_M::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S_1_21_M::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_1_21_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_M__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_1_21_M__S_1_21_S); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_21_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_M__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_1_21_M__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_1_21_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_1_21_r::ctor_() {
    RT_FN("S_1_21_r.S_1_21_r");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18946 = 795.0; this->f_S_6_21_Z = rt::touint_d(_v18946); _v18946; });
    ({ rt::Value _v18947 = rt::trv(rt::VS(g::LS[5642])); this->f_S_1i = rt::slot_string(_v18947); _v18947; });
    ({ rt::Value _v18948 = rt::VS(g::LS[5643]); this->f_S__5e__21__23_ = rt::slot_string(_v18948); _v18948; });
    ({ double _v18949 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18949); _v18949; });
    ({ double _v18950 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18950); _v18950; });
    ({ double _v18951 = 5.0; this->f_S_0_21_N = rt::toint_d(_v18951); _v18951; });
    ({ double _v18952 = 38.0; this->f_S__5e__21__25_ = rt::toint_d(_v18952); _v18952; });
    ({ double _v18953 = 130.0; this->f_S_3_21_r = rt::touint_d(_v18953); _v18953; });
}
rt::Value C_S_1_21_r::m_S_8_21_1() {
    RT_FN("S_1_21_r.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5644])));
    return rt::NUL;
}
C_S_1_21_r* C_S_1_21_r::alloc_() {
    C_S_1_21_r* o = rt::make<C_S_1_21_r>();
    return o;
}
rt::Value C_S_1_21_r::mk_(rt::Value* a, int n) {
    C_S_1_21_r* o = alloc_();
    o->C_S_1_21_r::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_1_21_r::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_1_21_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_1_21_r::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_1_21_r::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_r__id)); return true;
    default: return false;
    }
}
bool C_S_1_21_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_r__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_21_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_22__27_::ctor_() {
    RT_FN("S_1_22__27_.S_1_22__27_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18954 = 964.0; this->f_S_6_21_Z = rt::touint_d(_v18954); _v18954; });
    ({ rt::Value _v18955 = rt::trv(rt::VS(g::LS[5645])); this->f_S_1i = rt::slot_string(_v18955); _v18955; });
    ({ rt::Value _v18956 = rt::VS(g::LS[5646]); this->f_S__5e__21__23_ = rt::slot_string(_v18956); _v18956; });
    ({ double _v18957 = 5.0; this->f_S_9_21_m = rt::toint_d(_v18957); _v18957; });
    ({ double _v18958 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18958); _v18958; });
    ({ double _v18959 = 13.0; this->f_S_0_21_N = rt::toint_d(_v18959); _v18959; });
    ({ double _v18960 = 35.0; this->f_S__5e__21__25_ = rt::toint_d(_v18960); _v18960; });
    ({ double _v18961 = 130.0; this->f_S_3_21_r = rt::touint_d(_v18961); _v18961; });
}
rt::Value C_S_1_22__27_::m_S_8_21_1() {
    RT_FN("S_1_22__27_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5647]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_1_22__27___S_1_21_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_1_22__27___S__3b_n, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_1_22__27_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_1_22__27_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_1_22__27_::sm_S__2c__21_G() {
    RT_FN("S_1_22__27_.S__2c__21_G");
    return rt::m_floor((g::SV.C_S_1_22__27___S_1_21_S * ((C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()) / g::SV.C_S_1_22__27___S__3b_n))));
    return 0.0;
}
C_S_1_22__27_* C_S_1_22__27_::alloc_() {
    C_S_1_22__27_* o = rt::make<C_S_1_22__27_>();
    return o;
}
rt::Value C_S_1_22__27_::mk_(rt::Value* a, int n) {
    C_S_1_22__27_* o = alloc_();
    o->C_S_1_22__27_::ctor_();
    return rt::VO(o);
}
bool C_S_1_22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_1_22__27_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_1_22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_1_22__27_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_1_22__27_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_1_22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22__27___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_1_22__27___S_1_21_S); return true;
    case NM_S__3b_n: out = rt::V(g::SV.C_S_1_22__27___S__3b_n); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1_22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22__27___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_1_22__27___S_1_21_S = rt::tonum(v); return true;
    case NM_S__3b_n: g::SV.C_S_1_22__27___S__3b_n = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_1_22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_15::ctor_() {
    RT_FN("S_15.S_15");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18962 = 680.0; this->f_S_6_21_Z = rt::touint_d(_v18962); _v18962; });
    ({ rt::Value _v18963 = rt::trv(rt::VS(g::LS[5648])); this->f_S_1i = rt::slot_string(_v18963); _v18963; });
    ({ rt::Value _v18964 = rt::VS(g::LS[5649]); this->f_S__5e__21__23_ = rt::slot_string(_v18964); _v18964; });
    ({ double _v18965 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18965); _v18965; });
    ({ double _v18966 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18966); _v18966; });
    ({ double _v18967 = 0.0; this->f_S_0_21_N = rt::toint_d(_v18967); _v18967; });
    ({ double _v18968 = 22.0; this->f_S__5e__21__25_ = rt::toint_d(_v18968); _v18968; });
    ({ double _v18969 = 82.0; this->f_S_3_21_r = rt::touint_d(_v18969); _v18969; });
}
rt::Value C_S_15::m_S_8_21_1() {
    RT_FN("S_15.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S_15::m_S_7G() {
    RT_FN("S_15.S_7G");
    return ({ bool _t18970 = rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V((g::SV.C_S_15__S__3b__21__25_ * 60.0))); _t18970 ? (bool)((C_S__26_c::sm_S__21__2d_(C_S__26_c::dsm_S__21__2d__0(), C_S__26_c::dsm_S__21__2d__1()) >= g::SV.C_S_15__S_0j)) : _t18970; });
    return false;
}
rt::Value C_S_15::m_S_9T() {
    RT_FN("S_15.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5650]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_15__S_0j, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_15__S__3b__21__25_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S_15* C_S_15::alloc_() {
    C_S_15* o = rt::make<C_S_15>();
    return o;
}
rt::Value C_S_15::mk_(rt::Value* a, int n) {
    C_S_15* o = alloc_();
    o->C_S_15::ctor_();
    return rt::VO(o);
}
bool C_S_15::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_15::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_15::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_15::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_15::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_15::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_15__id)); return true;
    case NM_S_0j: out = rt::V(g::SV.C_S_15__S_0j); return true;
    case NM_S__3b__21__25_: out = rt::V(g::SV.C_S_15__S__3b__21__25_); return true;
    default: return false;
    }
}
bool C_S_15::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_15__id = rt::touint(v); return true;
    case NM_S_0j: g::SV.C_S_15__S_0j = rt::tonum(v); return true;
    case NM_S__3b__21__25_: g::SV.C_S_15__S__3b__21__25_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_15::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1x::ctor_() {
    RT_FN("S_1x.S_1x");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18971 = 689.0; this->f_S_6_21_Z = rt::touint_d(_v18971); _v18971; });
    ({ rt::Value _v18972 = rt::trv(rt::VS(g::LS[5651])); this->f_S_1i = rt::slot_string(_v18972); _v18972; });
    ({ rt::Value _v18973 = rt::VS(g::LS[5652]); this->f_S__5e__21__23_ = rt::slot_string(_v18973); _v18973; });
    ({ double _v18974 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v18974); _v18974; });
    ({ double _v18975 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18975); _v18975; });
    ({ double _v18976 = 6.0; this->f_S_0_21_N = rt::toint_d(_v18976); _v18976; });
    ({ double _v18977 = 34.0; this->f_S__5e__21__25_ = rt::toint_d(_v18977); _v18977; });
    ({ double _v18978 = 122.0; this->f_S_3_21_r = rt::touint_d(_v18978); _v18978; });
}
rt::Value C_S_1x::m_S_8_21_1() {
    RT_FN("S_1x.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5653]), C_S__26_c::sm_S_8_21_Z(C_S_1x::sm_S_2_21__40_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_1x::sm_S_2_21__40_() {
    RT_FN("S_1x.S_2_21__40_");
    return (3.0 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.6));
    return 0.0;
}
C_S_1x* C_S_1x::alloc_() {
    C_S_1x* o = rt::make<C_S_1x>();
    return o;
}
rt::Value C_S_1x::mk_(rt::Value* a, int n) {
    C_S_1x* o = alloc_();
    o->C_S_1x::ctor_();
    return rt::VO(o);
}
bool C_S_1x::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_1x::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_1x::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_1x::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_1x::smeth_(int id) {
    switch (id) {
    case NM_S_2_21__40_: return true;
    default: return false;
    }
}
bool C_S_1x::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1x__id)); return true;
    case NM_S_2_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_1x::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1x__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1x::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_21__40_: out = rt::V(sm_S_2_21__40_()); return true;
    default: return false;
    }
}
void C_S_2_21_a::ctor_() {
    RT_FN("S_2_21_a.S_2_21_a");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18979 = 672.0; this->f_S_6_21_Z = rt::touint_d(_v18979); _v18979; });
    ({ rt::Value _v18980 = rt::trv(rt::VS(g::LS[5654])); this->f_S_1i = rt::slot_string(_v18980); _v18980; });
    ({ rt::Value _v18981 = rt::VS(g::LS[5655]); this->f_S__5e__21__23_ = rt::slot_string(_v18981); _v18981; });
    ({ double _v18982 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18982); _v18982; });
    ({ double _v18983 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18983); _v18983; });
    ({ double _v18984 = 1.0; this->f_S_0_21_N = rt::toint_d(_v18984); _v18984; });
    ({ double _v18985 = 16.0; this->f_S__5e__21__25_ = rt::toint_d(_v18985); _v18985; });
    ({ double _v18986 = 76.0; this->f_S_3_21_r = rt::touint_d(_v18986); _v18986; });
}
rt::Value C_S_2_21_a::m_S_8_21_1() {
    RT_FN("S_2_21_a.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S_2_21_a::m_S_7G() {
    RT_FN("S_2_21_a.S_7G");
    return ({ bool _t18987 = rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V((g::SV.C_S_2_21_a__S__3b__21__25_ * 60.0))); _t18987 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 63.0), rt::V(g::SV.C_S_2_21_a__S__27__21_I))) : _t18987; });
    return false;
}
rt::Value C_S_2_21_a::m_S_9T() {
    RT_FN("S_2_21_a.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5656]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_2_21_a__S__27__21_I, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_2_21_a__S__3b__21__25_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S_2_21_a* C_S_2_21_a::alloc_() {
    C_S_2_21_a* o = rt::make<C_S_2_21_a>();
    return o;
}
rt::Value C_S_2_21_a::mk_(rt::Value* a, int n) {
    C_S_2_21_a* o = alloc_();
    o->C_S_2_21_a::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_2_21_a::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_2_21_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_2_21_a::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_2_21_a::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_a__id)); return true;
    case NM_S__27__21_I: out = rt::V(g::SV.C_S_2_21_a__S__27__21_I); return true;
    case NM_S__3b__21__25_: out = rt::V(g::SV.C_S_2_21_a__S__3b__21__25_); return true;
    default: return false;
    }
}
bool C_S_2_21_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_a__id = rt::touint(v); return true;
    case NM_S__27__21_I: g::SV.C_S_2_21_a__S__27__21_I = rt::tonum(v); return true;
    case NM_S__3b__21__25_: g::SV.C_S_2_21_a__S__3b__21__25_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_2_21_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_21_r::ctor_() {
    RT_FN("S_2_21_r.S_2_21_r");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18988 = 800.0; this->f_S_6_21_Z = rt::touint_d(_v18988); _v18988; });
    ({ rt::Value _v18989 = rt::trv(rt::VS(g::LS[5657])); this->f_S_1i = rt::slot_string(_v18989); _v18989; });
    ({ rt::Value _v18990 = rt::VS(g::LS[5658]); this->f_S__5e__21__23_ = rt::slot_string(_v18990); _v18990; });
    ({ double _v18991 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v18991); _v18991; });
    ({ double _v18992 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v18992); _v18992; });
    ({ double _v18993 = 1.0; this->f_S_0_21_N = rt::toint_d(_v18993); _v18993; });
    ({ double _v18994 = 40.0; this->f_S__5e__21__25_ = rt::toint_d(_v18994); _v18994; });
    ({ double _v18995 = 134.0; this->f_S_3_21_r = rt::touint_d(_v18995); _v18995; });
}
rt::Value C_S_2_21_r::m_S_8_21_1() {
    RT_FN("S_2_21_r.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5659]), C_S__26_c::sm_S_8_21_Z(C_S_2_21_r::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_2_21_r::sm_S__23__21_Y() {
    RT_FN("S_2_21_r.S__23__21_Y");
    return (1.5 * rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__27__21__27___id, C_S__26_c::dsm_S_1_21__3b__1()), 0.75));
    return 0.0;
}
C_S_2_21_r* C_S_2_21_r::alloc_() {
    C_S_2_21_r* o = rt::make<C_S_2_21_r>();
    return o;
}
rt::Value C_S_2_21_r::mk_(rt::Value* a, int n) {
    C_S_2_21_r* o = alloc_();
    o->C_S_2_21_r::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_2_21_r::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_2_21_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_2_21_r::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_2_21_r::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S_2_21_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_r__id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_2_21_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_r__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_21_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S_2_5e_::ctor_() {
    RT_FN("S_2_5e_.S_2_5e_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v18996 = 684.0; this->f_S_6_21_Z = rt::touint_d(_v18996); _v18996; });
    ({ rt::Value _v18997 = rt::trv(rt::VS(g::LS[5660])); this->f_S_1i = rt::slot_string(_v18997); _v18997; });
    ({ rt::Value _v18998 = rt::VS(g::LS[5661]); this->f_S__5e__21__23_ = rt::slot_string(_v18998); _v18998; });
    ({ double _v18999 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v18999); _v18999; });
    ({ double _v19000 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19000); _v19000; });
    ({ double _v19001 = 3.0; this->f_S_0_21_N = rt::toint_d(_v19001); _v19001; });
    ({ double _v19002 = 13.0; this->f_S__5e__21__25_ = rt::toint_d(_v19002); _v19002; });
    ({ double _v19003 = 73.0; this->f_S_3_21_r = rt::touint_d(_v19003); _v19003; });
}
rt::Value C_S_2_5e_::m_S_8_21_1() {
    RT_FN("S_2_5e_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S_2_5e_::m_S_7G() {
    RT_FN("S_2_5e_.S_7G");
    return (({ rt::Value _o19004 = C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id); C_S_84* _p19005 = rt::as_ptr<C_S_84>(_o19004); _p19005 ? _p19005->g_S_2_2d_() : rt::tonum(rt::dget(_o19004, NM_S_2_2d_)); }) >= g::SV.C_S_2_5e___S_4_21__24_);
    return false;
}
rt::Value C_S_2_5e_::m_S_9T() {
    RT_FN("S_2_5e_.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5662]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_2_5e___S_4_21__24_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S_2_5e_* C_S_2_5e_::alloc_() {
    C_S_2_5e_* o = rt::make<C_S_2_5e_>();
    return o;
}
rt::Value C_S_2_5e_::mk_(rt::Value* a, int n) {
    C_S_2_5e_* o = alloc_();
    o->C_S_2_5e_::ctor_();
    return rt::VO(o);
}
bool C_S_2_5e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_2_5e_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_2_5e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_2_5e_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_2_5e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_5e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_5e___id)); return true;
    case NM_S_4_21__24_: out = rt::V(g::SV.C_S_2_5e___S_4_21__24_); return true;
    default: return false;
    }
}
bool C_S_2_5e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_5e___id = rt::touint(v); return true;
    case NM_S_4_21__24_: g::SV.C_S_2_5e___S_4_21__24_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_2_5e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_21_8::ctor_() {
    RT_FN("S_3_21_8.S_3_21_8");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19006 = 655.0; this->f_S_6_21_Z = rt::touint_d(_v19006); _v19006; });
    ({ rt::Value _v19007 = rt::trv(rt::VS(g::LS[5663])); this->f_S_1i = rt::slot_string(_v19007); _v19007; });
    ({ rt::Value _v19008 = rt::VS(g::LS[5664]); this->f_S__5e__21__23_ = rt::slot_string(_v19008); _v19008; });
    ({ double _v19009 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19009); _v19009; });
    ({ double _v19010 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19010); _v19010; });
    ({ double _v19011 = 5.0; this->f_S_0_21_N = rt::toint_d(_v19011); _v19011; });
    ({ double _v19012 = 3.0; this->f_S__5e__21__25_ = rt::toint_d(_v19012); _v19012; });
    ({ double _v19013 = 63.0; this->f_S_3_21_r = rt::touint_d(_v19013); _v19013; });
}
rt::Value C_S_3_21_8::m_S_8_21_1() {
    RT_FN("S_3_21_8.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5665]), C_S__26_c::sm_S_8_21_Z((-C_S_3_21_8::sm_S__25_4()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_3_21_8::m_S_6r() {
    RT_FN("S_3_21_8.S_6r");
    (void)(this->C_S__3b_x::m_S_6r());
    if (({ rt::Value _o19014 = C_S_8G::sm_S__23_N(g::SV.C_S__27_K__id); C_S_84* _p19015 = rt::as_ptr<C_S_84>(_o19014); _p19015 ? _p19015->g_S__2d_6() : rt::T(rt::dget(_o19014, NM_S__2d_6)); })) {
        ({ uint32_t _v19018 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__27_K__id); rt::Value _o19016 = C_S_8G::sm_S__23_N(g::SV.C_S__27_K__id); C_S_84* _p19017 = rt::as_ptr<C_S_84>(_o19016); if (_p19017) _p19017->f_S_6_21_A = ((int32_t)(_v19018)); else rt::dset(_o19016, NM_S_6_21_A, rt::V((double)(_v19018))); _v19018; });
    }
    if (({ rt::Value _o19019 = C_S_8G::sm_S__23_N(g::SV.C_S__27__21__27___id); C_S_84* _p19020 = rt::as_ptr<C_S_84>(_o19019); _p19020 ? _p19020->g_S__2d_6() : rt::T(rt::dget(_o19019, NM_S__2d_6)); })) {
        ({ uint32_t _v19023 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__27__21__27___id); rt::Value _o19021 = C_S_8G::sm_S__23_N(g::SV.C_S__27__21__27___id); C_S_84* _p19022 = rt::as_ptr<C_S_84>(_o19021); if (_p19022) _p19022->f_S_6_21_A = ((int32_t)(_v19023)); else rt::dset(_o19021, NM_S_6_21_A, rt::V((double)(_v19023))); _v19023; });
    }
    if (({ rt::Value _o19024 = C_S_8G::sm_S__23_N(g::SV.C_S_6_21_V__id); C_S_84* _p19025 = rt::as_ptr<C_S_84>(_o19024); _p19025 ? _p19025->g_S__2d_6() : rt::T(rt::dget(_o19024, NM_S__2d_6)); })) {
        ({ uint32_t _v19028 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_6_21_V__id); rt::Value _o19026 = C_S_8G::sm_S__23_N(g::SV.C_S_6_21_V__id); C_S_84* _p19027 = rt::as_ptr<C_S_84>(_o19026); if (_p19027) _p19027->f_S_6_21_A = ((int32_t)(_v19028)); else rt::dset(_o19026, NM_S_6_21_A, rt::V((double)(_v19028))); _v19028; });
    }
    if (({ rt::Value _o19029 = C_S_8G::sm_S__23_N(g::SV.C_S_2_21_E__id); C_S_84* _p19030 = rt::as_ptr<C_S_84>(_o19029); _p19030 ? _p19030->g_S__2d_6() : rt::T(rt::dget(_o19029, NM_S__2d_6)); })) {
        ({ uint32_t _v19033 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_2_21_E__id); rt::Value _o19031 = C_S_8G::sm_S__23_N(g::SV.C_S_2_21_E__id); C_S_84* _p19032 = rt::as_ptr<C_S_84>(_o19031); if (_p19032) _p19032->f_S_6_21_A = ((int32_t)(_v19033)); else rt::dset(_o19031, NM_S_6_21_A, rt::V((double)(_v19033))); _v19033; });
    }
    if (({ rt::Value _o19034 = C_S_8G::sm_S__23_N(g::SV.C_S__20__21_5__id); C_S_84* _p19035 = rt::as_ptr<C_S_84>(_o19034); _p19035 ? _p19035->g_S__2d_6() : rt::T(rt::dget(_o19034, NM_S__2d_6)); })) {
        ({ uint32_t _v19038 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__20__21_5__id); rt::Value _o19036 = C_S_8G::sm_S__23_N(g::SV.C_S__20__21_5__id); C_S_84* _p19037 = rt::as_ptr<C_S_84>(_o19036); if (_p19037) _p19037->f_S_6_21_A = ((int32_t)(_v19038)); else rt::dset(_o19036, NM_S_6_21_A, rt::V((double)(_v19038))); _v19038; });
    }
    if (({ rt::Value _o19039 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p19040 = rt::as_ptr<C_S_84>(_o19039); _p19040 ? _p19040->g_S__2d_6() : rt::T(rt::dget(_o19039, NM_S__2d_6)); })) {
        ({ uint32_t _v19043 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S_8_3e___id); rt::Value _o19041 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p19042 = rt::as_ptr<C_S_84>(_o19041); if (_p19042) _p19042->f_S_6_21_A = ((int32_t)(_v19043)); else rt::dset(_o19041, NM_S_6_21_A, rt::V((double)(_v19043))); _v19043; });
    }
    if (({ rt::Value _o19044 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id); C_S_84* _p19045 = rt::as_ptr<C_S_84>(_o19044); _p19045 ? _p19045->g_S__2d_6() : rt::T(rt::dget(_o19044, NM_S__2d_6)); })) {
        ({ uint32_t _v19048 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__5e_x__id); rt::Value _o19046 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id); C_S_84* _p19047 = rt::as_ptr<C_S_84>(_o19046); if (_p19047) _p19047->f_S_6_21_A = ((int32_t)(_v19048)); else rt::dset(_o19046, NM_S_6_21_A, rt::V((double)(_v19048))); _v19048; });
    }
    if (({ rt::Value _o19049 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p19050 = rt::as_ptr<C_S_84>(_o19049); _p19050 ? _p19050->g_S__2d_6() : rt::T(rt::dget(_o19049, NM_S__2d_6)); })) {
        ({ uint32_t _v19053 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__21_C__id); rt::Value _o19051 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p19052 = rt::as_ptr<C_S_84>(_o19051); if (_p19052) _p19052->f_S_6_21_A = ((int32_t)(_v19053)); else rt::dset(_o19051, NM_S_6_21_A, rt::V((double)(_v19053))); _v19053; });
    }
    if (({ rt::Value _o19054 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id); C_S_84* _p19055 = rt::as_ptr<C_S_84>(_o19054); _p19055 ? _p19055->g_S__2d_6() : rt::T(rt::dget(_o19054, NM_S__2d_6)); })) {
        ({ uint32_t _v19058 = C_S__23__21__21_::sm_S_8_21_6(g::SV.C_S__25__21_J__id); rt::Value _o19056 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id); C_S_84* _p19057 = rt::as_ptr<C_S_84>(_o19056); if (_p19057) _p19057->f_S_6_21_A = ((int32_t)(_v19058)); else rt::dset(_o19056, NM_S_6_21_A, rt::V((double)(_v19058))); _v19058; });
    }
    return rt::NUL;
}
double C_S_3_21_8::sm_S__25_4() {
    RT_FN("S_3_21_8.S__25_4");
    return (-20.0);
    return 0.0;
}
C_S_3_21_8* C_S_3_21_8::alloc_() {
    C_S_3_21_8* o = rt::make<C_S_3_21_8>();
    return o;
}
rt::Value C_S_3_21_8::mk_(rt::Value* a, int n) {
    C_S_3_21_8* o = alloc_();
    o->C_S_3_21_8::ctor_();
    return rt::VO(o);
}
bool C_S_3_21_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_3_21_8::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_3_21_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_3_21_8::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_6r: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_3_21_8::smeth_(int id) {
    switch (id) {
    case NM_S__25_4: return true;
    default: return false;
    }
}
bool C_S_3_21_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_21_8__id)); return true;
    case NM_S__25_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_3_21_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_21_8__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_21_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__25_4: out = rt::V(sm_S__25_4()); return true;
    default: return false;
    }
}
void C_S_3_22__24_::ctor_() {
    RT_FN("S_3_22__24_.S_3_22__24_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19059 = 957.0; this->f_S_6_21_Z = rt::touint_d(_v19059); _v19059; });
    ({ rt::Value _v19060 = rt::trv(rt::VS(g::LS[5666])); this->f_S_1i = rt::slot_string(_v19060); _v19060; });
    ({ rt::Value _v19061 = rt::VS(g::LS[5667]); this->f_S__5e__21__23_ = rt::slot_string(_v19061); _v19061; });
    ({ double _v19062 = 4.0; this->f_S_9_21_m = rt::toint_d(_v19062); _v19062; });
    ({ double _v19063 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19063); _v19063; });
    ({ double _v19064 = 12.0; this->f_S_0_21_N = rt::toint_d(_v19064); _v19064; });
    ({ double _v19065 = 25.0; this->f_S__5e__21__25_ = rt::toint_d(_v19065); _v19065; });
    ({ double _v19066 = 130.0; this->f_S_3_21_r = rt::touint_d(_v19066); _v19066; });
}
rt::Value C_S_3_22__24_::m_S_8_21_1() {
    RT_FN("S_3_22__24_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S_3_22__24_::m_S_7G() {
    RT_FN("S_3_22__24_.S_7G");
    return ({ bool _t19067 = ((C_S__23__21__21_::sm_S_57() * 30.0) >= 30000000000.0); _t19067 ? (bool)(rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(45.0))) : _t19067; });
    return false;
}
rt::Value C_S_3_22__24_::m_S_9T() {
    RT_FN("S_3_22__24_.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5668]), C_S__26_c::sm_S_8_21_Z(30000000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(45.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S_3_22__24_* C_S_3_22__24_::alloc_() {
    C_S_3_22__24_* o = rt::make<C_S_3_22__24_>();
    return o;
}
rt::Value C_S_3_22__24_::mk_(rt::Value* a, int n) {
    C_S_3_22__24_* o = alloc_();
    o->C_S_3_22__24_::ctor_();
    return rt::VO(o);
}
bool C_S_3_22__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_3_22__24_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_3_22__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_3_22__24_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_3_22__24_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_22__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_22__24___id)); return true;
    case NM_S__3c_: out = rt::V(g::SV.C_S_3_22__24___S__3c_); return true;
    case NM_S__27__22__26_: out = rt::V(g::SV.C_S_3_22__24___S__27__22__26_); return true;
    default: return false;
    }
}
bool C_S_3_22__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_22__24___id = rt::touint(v); return true;
    case NM_S__3c_: g::SV.C_S_3_22__24___S__3c_ = rt::tonum(v); return true;
    case NM_S__27__22__26_: g::SV.C_S_3_22__24___S__27__22__26_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_3_22__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_21_6::ctor_() {
    RT_FN("S_4_21_6.S_4_21_6");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19068 = 669.0; this->f_S_6_21_Z = rt::touint_d(_v19068); _v19068; });
    ({ rt::Value _v19069 = rt::trv(rt::VS(g::LS[5669])); this->f_S_1i = rt::slot_string(_v19069); _v19069; });
    ({ rt::Value _v19070 = rt::VS(g::LS[5670]); this->f_S__5e__21__23_ = rt::slot_string(_v19070); _v19070; });
    ({ double _v19071 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19071); _v19071; });
    ({ double _v19072 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19072); _v19072; });
    ({ double _v19073 = 9.0; this->f_S_0_21_N = rt::toint_d(_v19073); _v19073; });
    ({ double _v19074 = 33.0; this->f_S__5e__21__25_ = rt::toint_d(_v19074); _v19074; });
    ({ double _v19075 = 120.0; this->f_S_3_21_r = rt::touint_d(_v19075); _v19075; });
}
rt::Value C_S_4_21_6::m_S_8_21_1() {
    RT_FN("S_4_21_6.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5671]), C_S__26_c::sm_S_8_21_Z(C_S_4_21_6::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_4_21_6::sm_S__2c__21_G() {
    RT_FN("S_4_21_6.S__2c__21_G");
    return (0.3 * rt::m_pow(C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()), 0.7));
    return 0.0;
}
C_S_4_21_6* C_S_4_21_6::alloc_() {
    C_S_4_21_6* o = rt::make<C_S_4_21_6>();
    return o;
}
rt::Value C_S_4_21_6::mk_(rt::Value* a, int n) {
    C_S_4_21_6* o = alloc_();
    o->C_S_4_21_6::ctor_();
    return rt::VO(o);
}
bool C_S_4_21_6::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_4_21_6::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_4_21_6::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_4_21_6::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_4_21_6::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_4_21_6::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_21_6__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_21_6::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_21_6__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_21_6::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_4_21__3d_::ctor_() {
    RT_FN("S_4_21__3d_.S_4_21__3d_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19076 = 692.0; this->f_S_6_21_Z = rt::touint_d(_v19076); _v19076; });
    ({ rt::Value _v19077 = rt::trv(rt::VS(g::LS[5672])); this->f_S_1i = rt::slot_string(_v19077); _v19077; });
    ({ rt::Value _v19078 = rt::VS(g::LS[5673]); this->f_S__5e__21__23_ = rt::slot_string(_v19078); _v19078; });
    ({ double _v19079 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19079); _v19079; });
    ({ double _v19080 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19080); _v19080; });
    ({ double _v19081 = 4.0; this->f_S_0_21_N = rt::toint_d(_v19081); _v19081; });
    ({ double _v19082 = 23.0; this->f_S__5e__21__25_ = rt::toint_d(_v19082); _v19082; });
    ({ double _v19083 = 83.0; this->f_S_3_21_r = rt::touint_d(_v19083); _v19083; });
}
rt::Value C_S_4_21__3d_::m_S_8_21_1() {
    RT_FN("S_4_21__3d_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S_4_21__3d_::m_S_7G() {
    RT_FN("S_4_21__3d_.S_7G");
    return ({ bool _t19086 = ({ rt::Value _o19084 = C_S_8G::sm_S__23_N(g::SV.C_S__20__21_5__id); C_S_84* _p19085 = rt::as_ptr<C_S_84>(_o19084); _p19085 ? _p19085->g_S__2d_6() : rt::T(rt::dget(_o19084, NM_S__2d_6)); }); _t19086 ? (bool)((C_S__23__21__21_::sm_S_1_21__3b_(C_S_8G::sm_S__23_N(g::SV.C_S__20__21_5__id)) >= 1800.0)) : _t19086; });
    return false;
}
rt::Value C_S_4_21__3d_::m_S_9T() {
    RT_FN("S_4_21__3d_.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5674])));
    return rt::NUL;
}
C_S_4_21__3d_* C_S_4_21__3d_::alloc_() {
    C_S_4_21__3d_* o = rt::make<C_S_4_21__3d_>();
    return o;
}
rt::Value C_S_4_21__3d_::mk_(rt::Value* a, int n) {
    C_S_4_21__3d_* o = alloc_();
    o->C_S_4_21__3d_::ctor_();
    return rt::VO(o);
}
bool C_S_4_21__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_4_21__3d_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_4_21__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_4_21__3d_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_4_21__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_21__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_21__3d___id)); return true;
    default: return false;
    }
}
bool C_S_4_21__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_21__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_21__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_22__27_::ctor_() {
    RT_FN("S_4_22__27_.S_4_22__27_");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v19087 = 961.0; this->f_S_6_21_Z = rt::touint_d(_v19087); _v19087; });
    ({ rt::Value _v19088 = rt::trv(rt::VS(g::LS[5675])); this->f_S_1i = rt::slot_string(_v19088); _v19088; });
    ({ rt::Value _v19089 = rt::VS(g::LS[5676]); this->f_S__5e__21__23_ = rt::slot_string(_v19089); _v19089; });
    ({ double _v19090 = 5.0; this->f_S_9_21_m = rt::toint_d(_v19090); _v19090; });
    ({ double _v19091 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19091); _v19091; });
    ({ double _v19092 = 13.0; this->f_S_0_21_N = rt::toint_d(_v19092); _v19092; });
}
rt::Value C_S_4_22__27_::m_S__5b__21_C() {
    RT_FN("S_4_22__27_.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v19093 = g::SV.C_S__22__22__26___id; this->f_S_6_21_p = _v19093; _v19093; });
    return rt::NUL;
}
int32_t C_S_4_22__27_::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_4_22__27_::dm_S_75_2() { return false; }
rt::Value C_S_4_22__27_::dm_S_75_3() { return rt::NUL; }
double C_S_4_22__27_::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_4_22__27_.S_75");
    if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) {
        return 0.0;
    }
    if (C_S__26_c::sm_S_4_21_(this->f_S__2d__21__5e_, l_param1)) {
        return this->C_S_6P::m_S_75(this->f_S__2d__21__5e_, C_S_6P::dm_S_75_1(), C_S_6P::dm_S_75_2(), C_S_6P::dm_S_75_3());
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_4_22__27_::m_S_1_21_6() {
    RT_FN("S_4_22__27_.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5677]), rt::dcallv(rt::V((8.0)), rt::N_toString), C_S__26_c::sm_S_8_21_Z(C_S_4_22__27_::sm_S_6_21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_4_22__27_::sm_S_6_21_Y() {
    RT_FN("S_4_22__27_.S_6_21_Y");
    return (8.0 * C_S__26_c::sm_S__27__22__2d_(rt::toint_d(13.0), g::SV.C_S_4_22__27___id));
    return 0.0;
}
C_S_4_22__27_* C_S_4_22__27_::alloc_() {
    C_S_4_22__27_* o = rt::make<C_S_4_22__27_>();
    return o;
}
rt::Value C_S_4_22__27_::mk_(rt::Value* a, int n) {
    C_S_4_22__27_* o = alloc_();
    o->C_S_4_22__27_::ctor_();
    return rt::VO(o);
}
bool C_S_4_22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S_4_22__27_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S_4_22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_4_22__27_::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_4_22__27_::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_4_22__27_::dm_S_75_3()))); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S_4_22__27_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_75: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S_4_22__27_::smeth_(int id) {
    switch (id) {
    case NM_S_6_21_Y: return true;
    default: return false;
    }
}
bool C_S_4_22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22__27___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_4_22__27___S_1_21_S); return true;
    case NM_S_6_21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_4_22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22__27___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_4_22__27___S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_4_22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_6_21_Y: out = rt::V(sm_S_6_21_Y()); return true;
    default: return false;
    }
}
void C_S_4_2b_::ctor_() {
    RT_FN("S_4_2b_.S_4_2b_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19094 = 651.0; this->f_S_6_21_Z = rt::touint_d(_v19094); _v19094; });
    ({ rt::Value _v19095 = rt::trv(rt::VS(g::LS[5678])); this->f_S_1i = rt::slot_string(_v19095); _v19095; });
    ({ rt::Value _v19096 = rt::VS(g::LS[5679]); this->f_S__5e__21__23_ = rt::slot_string(_v19096); _v19096; });
    ({ double _v19097 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19097); _v19097; });
    ({ double _v19098 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19098); _v19098; });
    ({ double _v19099 = 2.0; this->f_S_0_21_N = rt::toint_d(_v19099); _v19099; });
    ({ double _v19100 = 24.0; this->f_S__5e__21__25_ = rt::toint_d(_v19100); _v19100; });
    ({ double _v19101 = 84.0; this->f_S_3_21_r = rt::touint_d(_v19101); _v19101; });
}
rt::Value C_S_4_2b_::m_S_8_21_1() {
    RT_FN("S_4_2b_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S_4_2b_::m_S_7G() {
    RT_FN("S_4_2b_.S_7G");
    return ({ bool _t19104 = ({ bool _t19103 = ({ bool _t19102 = rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(1200.0)); _t19102 ? (bool)(rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(72060.0))) : _t19102; }); _t19103 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 97.0), rt::V(1200.0))) : _t19103; }); _t19104 ? (bool)(rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 97.0), rt::V(72060.0))) : _t19104; });
    return false;
}
rt::Value C_S_4_2b_::m_S_9T() {
    RT_FN("S_4_2b_.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5680]), C_S__26_c::sm_S_8_21_Z(20.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S_4_2b_* C_S_4_2b_::alloc_() {
    C_S_4_2b_* o = rt::make<C_S_4_2b_>();
    return o;
}
rt::Value C_S_4_2b_::mk_(rt::Value* a, int n) {
    C_S_4_2b_* o = alloc_();
    o->C_S_4_2b_::ctor_();
    return rt::VO(o);
}
bool C_S_4_2b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_4_2b_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_4_2b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_4_2b_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_4_2b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_2b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_2b___id)); return true;
    case NM_S__25__21__5b_: out = rt::V(g::SV.C_S_4_2b___S__25__21__5b_); return true;
    case NM_S__21__21_C: out = rt::V(g::SV.C_S_4_2b___S__21__21_C); return true;
    default: return false;
    }
}
bool C_S_4_2b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_2b___id = rt::touint(v); return true;
    case NM_S__25__21__5b_: g::SV.C_S_4_2b___S__25__21__5b_ = rt::tonum(v); return true;
    case NM_S__21__21_C: g::SV.C_S_4_2b___S__21__21_C = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_4_2b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4A::ctor_() {
    RT_FN("S_4A.S_4A");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19105 = 676.0; this->f_S_6_21_Z = rt::touint_d(_v19105); _v19105; });
    ({ rt::Value _v19106 = rt::trv(rt::VS(g::LS[5681])); this->f_S_1i = rt::slot_string(_v19106); _v19106; });
    ({ rt::Value _v19107 = rt::VS(g::LS[5682]); this->f_S__5e__21__23_ = rt::slot_string(_v19107); _v19107; });
    ({ double _v19108 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v19108); _v19108; });
    ({ double _v19109 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19109); _v19109; });
    ({ double _v19110 = 8.0; this->f_S_0_21_N = rt::toint_d(_v19110); _v19110; });
    ({ double _v19111 = 17.0; this->f_S__5e__21__25_ = rt::toint_d(_v19111); _v19111; });
    ({ double _v19112 = 77.0; this->f_S_3_21_r = rt::touint_d(_v19112); _v19112; });
}
rt::Value C_S_4A::m_S_8_21_1() {
    RT_FN("S_4A.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S_4A::m_S_7G() {
    RT_FN("S_4A.S_7G");
    return (({ rt::Value _o19113 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id); C_S_84* _p19114 = rt::as_ptr<C_S_84>(_o19113); _p19114 ? _p19114->g_S_2_2d_() : rt::tonum(rt::dget(_o19113, NM_S_2_2d_)); }) >= g::SV.C_S_4A__S__3e__21_Z);
    return false;
}
rt::Value C_S_4A::m_S_9T() {
    RT_FN("S_4A.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5683]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_4A__S__3e__21_Z, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S_4A* C_S_4A::alloc_() {
    C_S_4A* o = rt::make<C_S_4A>();
    return o;
}
rt::Value C_S_4A::mk_(rt::Value* a, int n) {
    C_S_4A* o = alloc_();
    o->C_S_4A::ctor_();
    return rt::VO(o);
}
bool C_S_4A::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_4A::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_4A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_4A::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_4A::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4A__id)); return true;
    case NM_S__3e__21_Z: out = rt::V(g::SV.C_S_4A__S__3e__21_Z); return true;
    default: return false;
    }
}
bool C_S_4A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4A__id = rt::touint(v); return true;
    case NM_S__3e__21_Z: g::SV.C_S_4A__S__3e__21_Z = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_4A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_22_K::ctor_() {
    RT_FN("S_5_22_K.S_5_22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19115 = 1235.0; this->f_S_6_21_Z = rt::touint_d(_v19115); _v19115; });
    ({ rt::Value _v19116 = rt::trv(rt::VS(g::LS[5684])); this->f_S_1i = rt::slot_string(_v19116); _v19116; });
    ({ rt::Value _v19117 = rt::VS(g::LS[5685]); this->f_S__5e__21__23_ = rt::slot_string(_v19117); _v19117; });
    ({ double _v19118 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19118); _v19118; });
    ({ double _v19119 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19119); _v19119; });
    ({ double _v19120 = 1.0; this->f_S_0_21_N = rt::toint_d(_v19120); _v19120; });
    ({ double _v19121 = 68.0; this->f_S__5e__21__25_ = rt::toint_d(_v19121); _v19121; });
    ({ double _v19122 = 200.0; this->f_S_3_21_r = rt::touint_d(_v19122); _v19122; });
}
rt::Value C_S_5_22_K::m_S_8_21_1() {
    RT_FN("S_5_22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5686]), C_S__26_c::sm_S_8_21_Z(C_S_5_22_K::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_5_22_K::sm_S__26_s() {
    RT_FN("S_5_22_K.S__26_s");
    return (1.6 * rt::m_pow(C_S__26_c::sm_S_6_22_K(C_S__26_c::dsm_S_6_22_K_0(), C_S__26_c::dsm_S_6_22_K_1(), C_S__26_c::dsm_S_6_22_K_2()), 0.4));
    return 0.0;
}
C_S_5_22_K* C_S_5_22_K::alloc_() {
    C_S_5_22_K* o = rt::make<C_S_5_22_K>();
    return o;
}
rt::Value C_S_5_22_K::mk_(rt::Value* a, int n) {
    C_S_5_22_K* o = alloc_();
    o->C_S_5_22_K::ctor_();
    return rt::VO(o);
}
bool C_S_5_22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_5_22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_5_22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_5_22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_5_22_K::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_5_22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_22_K__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_5_22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_6X::ctor_() {
    RT_FN("S_6X.S_6X");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19123 = 683.0; this->f_S_6_21_Z = rt::touint_d(_v19123); _v19123; });
    ({ rt::Value _v19124 = rt::trv(rt::VS(g::LS[5687])); this->f_S_1i = rt::slot_string(_v19124); _v19124; });
    ({ rt::Value _v19125 = rt::VS(g::LS[5688]); this->f_S__5e__21__23_ = rt::slot_string(_v19125); _v19125; });
    ({ double _v19126 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19126); _v19126; });
    ({ double _v19127 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19127); _v19127; });
    ({ double _v19128 = 3.0; this->f_S_0_21_N = rt::toint_d(_v19128); _v19128; });
    ({ double _v19129 = 10.0; this->f_S__5e__21__25_ = rt::toint_d(_v19129); _v19129; });
    ({ double _v19130 = 70.0; this->f_S_3_21_r = rt::touint_d(_v19130); _v19130; });
}
rt::Value C_S_6X::m_S_8_21_1() {
    RT_FN("S_6X.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5689])));
    return rt::NUL;
}
C_S_6X* C_S_6X::alloc_() {
    C_S_6X* o = rt::make<C_S_6X>();
    return o;
}
rt::Value C_S_6X::mk_(rt::Value* a, int n) {
    C_S_6X* o = alloc_();
    o->C_S_6X::ctor_();
    return rt::VO(o);
}
bool C_S_6X::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_6X::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_6X::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_6X::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_6X::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6X::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6X__id)); return true;
    default: return false;
    }
}
bool C_S_6X::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6X__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6X::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6u::ctor_() {
    RT_FN("S_6u.S_6u");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19131 = 679.0; this->f_S_6_21_Z = rt::touint_d(_v19131); _v19131; });
    ({ rt::Value _v19132 = rt::trv(rt::VS(g::LS[5690])); this->f_S_1i = rt::slot_string(_v19132); _v19132; });
    ({ rt::Value _v19133 = rt::VS(g::LS[5691]); this->f_S__5e__21__23_ = rt::slot_string(_v19133); _v19133; });
    ({ double _v19134 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19134); _v19134; });
    ({ double _v19135 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19135); _v19135; });
    ({ double _v19136 = 0.0; this->f_S_0_21_N = rt::toint_d(_v19136); _v19136; });
    ({ double _v19137 = 9.0; this->f_S__5e__21__25_ = rt::toint_d(_v19137); _v19137; });
    ({ double _v19138 = 69.0; this->f_S_3_21_r = rt::touint_d(_v19138); _v19138; });
}
rt::Value C_S_6u::m_S_8_21_1() {
    RT_FN("S_6u.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5692]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())));
    return rt::NUL;
}
C_S_6u* C_S_6u::alloc_() {
    C_S_6u* o = rt::make<C_S_6u>();
    return o;
}
rt::Value C_S_6u::mk_(rt::Value* a, int n) {
    C_S_6u* o = alloc_();
    o->C_S_6u::ctor_();
    return rt::VO(o);
}
bool C_S_6u::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_6u::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_6u::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_6u::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_6u::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6u::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6u__id)); return true;
    default: return false;
    }
}
bool C_S_6u::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6u__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6u::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_21_s::ctor_() {
    RT_FN("S_7_21_s.S_7_21_s");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19139 = 797.0; this->f_S_6_21_Z = rt::touint_d(_v19139); _v19139; });
    ({ rt::Value _v19140 = rt::trv(rt::VS(g::LS[5693])); this->f_S_1i = rt::slot_string(_v19140); _v19140; });
    ({ rt::Value _v19141 = rt::VS(g::LS[5694]); this->f_S__5e__21__23_ = rt::slot_string(_v19141); _v19141; });
    ({ double _v19142 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19142); _v19142; });
    ({ double _v19143 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19143); _v19143; });
    ({ double _v19144 = 10.0; this->f_S_0_21_N = rt::toint_d(_v19144); _v19144; });
    ({ double _v19145 = 39.0; this->f_S__5e__21__25_ = rt::toint_d(_v19145); _v19145; });
    ({ double _v19146 = 132.0; this->f_S_3_21_r = rt::touint_d(_v19146); _v19146; });
}
rt::Value C_S_7_21_s::m_S_8_21_1() {
    RT_FN("S_7_21_s.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5695]), C_S__26_c::sm_S_8_21_Z(C_S_7_21_s::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_6_21_T(C_S_7_21_s::sm_S__27__21_b(), 3.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
double C_S_7_21_s::sm_S__2c__21_G() {
    RT_FN("S_7_21_s.S__2c__21_G");
    return (0.5 * rt::m_floor(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4())));
    return 0.0;
}
double C_S_7_21_s::sm_S__27__21_b() {
    RT_FN("S_7_21_s.S__27__21_b");
    return (2.0 * rt::m_pow(rt::m_log((1.0 + rt::m_pow(rt::m_pow(C_S__26_c::sm_S__27_n(), 0.9), (((double)(({ rt::Value _o19147 = C_S_8G::sm_S__23_N(g::SV.C_S__40_W__id); C_S_84* _p19148 = rt::as_ptr<C_S_84>(_o19147); _p19148 ? _p19148->g_S__60_r() : rt::touint(rt::dget(_o19147, NM_S__60_r)); }))) + 1.0)))), 2.0));
    return 0.0;
}
C_S_7_21_s* C_S_7_21_s::alloc_() {
    C_S_7_21_s* o = rt::make<C_S_7_21_s>();
    return o;
}
rt::Value C_S_7_21_s::mk_(rt::Value* a, int n) {
    C_S_7_21_s* o = alloc_();
    o->C_S_7_21_s::ctor_();
    return rt::VO(o);
}
bool C_S_7_21_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_7_21_s::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_7_21_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_7_21_s::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_7_21_s::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S_7_21_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21_s__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_21_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_21_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_7_22__24_::ctor_() {
    RT_FN("S_7_22__24_.S_7_22__24_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19149 = 947.0; this->f_S_6_21_Z = rt::touint_d(_v19149); _v19149; });
    ({ rt::Value _v19150 = rt::trv(rt::VS(g::LS[5696])); this->f_S_1i = rt::slot_string(_v19150); _v19150; });
    ({ rt::Value _v19151 = rt::VS(g::LS[5697]); this->f_S__5e__21__23_ = rt::slot_string(_v19151); _v19151; });
    ({ double _v19152 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19152); _v19152; });
    ({ double _v19153 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19153); _v19153; });
    ({ double _v19154 = 1.0; this->f_S_0_21_N = rt::toint_d(_v19154); _v19154; });
    ({ double _v19155 = 51.0; this->f_S__5e__21__25_ = rt::toint_d(_v19155); _v19155; });
    ({ double _v19156 = 160.0; this->f_S_3_21_r = rt::touint_d(_v19156); _v19156; });
}
rt::Value C_S_7_22__24_::m_S_8_21_1() {
    RT_FN("S_7_22__24_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5698]), C_S__26_c::sm_S_8_21_Z(C_S_7_22__24_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_7_22__24_::sm_S__2c__21_G() {
    RT_FN("S_7_22__24_.S__2c__21_G");
    return 1000.0;
    return 0.0;
}
C_S_7_22__24_* C_S_7_22__24_::alloc_() {
    C_S_7_22__24_* o = rt::make<C_S_7_22__24_>();
    return o;
}
rt::Value C_S_7_22__24_::mk_(rt::Value* a, int n) {
    C_S_7_22__24_* o = alloc_();
    o->C_S_7_22__24_::ctor_();
    return rt::VO(o);
}
bool C_S_7_22__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_7_22__24_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_7_22__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_7_22__24_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_7_22__24_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_7_22__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22__24___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_22__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_7_22__25_::ctor_() {
    RT_FN("S_7_22__25_.S_7_22__25_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19157 = 941.0; this->f_S_6_21_Z = rt::touint_d(_v19157); _v19157; });
    ({ rt::Value _v19158 = rt::trv(rt::VS(g::LS[5699])); this->f_S_1i = rt::slot_string(_v19158); _v19158; });
    ({ rt::Value _v19159 = rt::VS(g::LS[5700]); this->f_S__5e__21__23_ = rt::slot_string(_v19159); _v19159; });
    ({ double _v19160 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19160); _v19160; });
    ({ double _v19161 = 2.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19161); _v19161; });
    ({ double _v19162 = 2.0; this->f_S_0_21_N = rt::toint_d(_v19162); _v19162; });
    ({ double _v19163 = 56.0; this->f_S__5e__21__25_ = rt::toint_d(_v19163); _v19163; });
    ({ double _v19164 = 170.0; this->f_S_3_21_r = rt::touint_d(_v19164); _v19164; });
}
rt::Value C_S_7_22__25_::m_S_8_21_1() {
    RT_FN("S_7_22__25_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5701]), C_S__26_c::sm_S_8_21_Z(C_S_7_22__25_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_7_22__25_::sm_S__2c__21_G() {
    RT_FN("S_7_22__25_.S__2c__21_G");
    return 1000.0;
    return 0.0;
}
C_S_7_22__25_* C_S_7_22__25_::alloc_() {
    C_S_7_22__25_* o = rt::make<C_S_7_22__25_>();
    return o;
}
rt::Value C_S_7_22__25_::mk_(rt::Value* a, int n) {
    C_S_7_22__25_* o = alloc_();
    o->C_S_7_22__25_::ctor_();
    return rt::VO(o);
}
bool C_S_7_22__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_7_22__25_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_7_22__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_7_22__25_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_7_22__25_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_7_22__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22__25___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_22__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22__25___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_7_22__26_::ctor_() {
    RT_FN("S_7_22__26_.S_7_22__26_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19165 = 970.0; this->f_S_6_21_Z = rt::touint_d(_v19165); _v19165; });
    ({ rt::Value _v19166 = rt::trv(rt::VS(g::LS[5702])); this->f_S_1i = rt::slot_string(_v19166); _v19166; });
    ({ rt::Value _v19167 = rt::VS(g::LS[5703]); this->f_S__5e__21__23_ = rt::slot_string(_v19167); _v19167; });
    ({ double _v19168 = 6.0; this->f_S_9_21_m = rt::toint_d(_v19168); _v19168; });
    ({ double _v19169 = 15.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19169); _v19169; });
    ({ double _v19170 = 14.0; this->f_S_0_21_N = rt::toint_d(_v19170); _v19170; });
    ({ double _v19171 = 35.0; this->f_S__5e__21__25_ = rt::toint_d(_v19171); _v19171; });
    ({ double _v19172 = 130.0; this->f_S_3_21_r = rt::touint_d(_v19172); _v19172; });
}
rt::Value C_S_7_22__26_::m_S_8_21_1() {
    RT_FN("S_7_22__26_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5704]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_7_22__26___S_1_21_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_7_22__26___S__3b_n, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_7_22__26_::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_7_22__26_::sm_S__2b__2b_() {
    RT_FN("S_7_22__26_.S__2b__2b_");
    return (g::SV.C_S_7_22__26___S_1_21_S * rt::m_floor((C_S__26_c::sm_S__3d__60_(C_S__26_c::dsm_S__3d__60__0()) / g::SV.C_S_7_22__26___S__3b_n)));
    return 0.0;
}
C_S_7_22__26_* C_S_7_22__26_::alloc_() {
    C_S_7_22__26_* o = rt::make<C_S_7_22__26_>();
    return o;
}
rt::Value C_S_7_22__26_::mk_(rt::Value* a, int n) {
    C_S_7_22__26_* o = alloc_();
    o->C_S_7_22__26_::ctor_();
    return rt::VO(o);
}
bool C_S_7_22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_7_22__26_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_7_22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_7_22__26_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_7_22__26_::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S_7_22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22__26___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_7_22__26___S_1_21_S); return true;
    case NM_S__3b_n: out = rt::V(g::SV.C_S_7_22__26___S__3b_n); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22__26___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_7_22__26___S_1_21_S = rt::tonum(v); return true;
    case NM_S__3b_n: g::SV.C_S_7_22__26___S__3b_n = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_7_22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S_7_22_K::ctor_() {
    RT_FN("S_7_22_K.S_7_22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19173 = 1229.0; this->f_S_6_21_Z = rt::touint_d(_v19173); _v19173; });
    ({ rt::Value _v19174 = rt::trv(rt::VS(g::LS[5705])); this->f_S_1i = rt::slot_string(_v19174); _v19174; });
    ({ rt::Value _v19175 = rt::VS(g::LS[5706]); this->f_S__5e__21__23_ = rt::slot_string(_v19175); _v19175; });
    ({ double _v19176 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19176); _v19176; });
    ({ double _v19177 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19177); _v19177; });
    ({ double _v19178 = 5.0; this->f_S_0_21_N = rt::toint_d(_v19178); _v19178; });
    ({ double _v19179 = 66.0; this->f_S__5e__21__25_ = rt::toint_d(_v19179); _v19179; });
    ({ double _v19180 = 196.0; this->f_S_3_21_r = rt::touint_d(_v19180); _v19180; });
}
rt::Value C_S_7_22_K::m_S_8_21_1() {
    RT_FN("S_7_22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5707]), C_S__26_c::sm_S_8_21_Z(C_S_7_22_K::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_7_22_K::sm_S__3f__21__3c_() {
    RT_FN("S_7_22_K.S__3f__21__3c_");
    return (0.7 * rt::m_pow(C_S__23__21__21_::sm_S__2c__21_E(), 0.7));
    return 0.0;
}
C_S_7_22_K* C_S_7_22_K::alloc_() {
    C_S_7_22_K* o = rt::make<C_S_7_22_K>();
    return o;
}
rt::Value C_S_7_22_K::mk_(rt::Value* a, int n) {
    C_S_7_22_K* o = alloc_();
    o->C_S_7_22_K::ctor_();
    return rt::VO(o);
}
bool C_S_7_22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_7_22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_7_22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_7_22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_7_22_K::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S_7_22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22_K__id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_7_22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S_8_22__24_::ctor_() {
    RT_FN("S_8_22__24_.S_8_22__24_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19181 = 966.0; this->f_S_6_21_Z = rt::touint_d(_v19181); _v19181; });
    ({ rt::Value _v19182 = rt::trv(rt::VS(g::LS[5708])); this->f_S_1i = rt::slot_string(_v19182); _v19182; });
    ({ rt::Value _v19183 = rt::VS(g::LS[5709]); this->f_S__5e__21__23_ = rt::slot_string(_v19183); _v19183; });
    ({ double _v19184 = 5.0; this->f_S_9_21_m = rt::toint_d(_v19184); _v19184; });
    ({ double _v19185 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19185); _v19185; });
    ({ double _v19186 = 13.0; this->f_S_0_21_N = rt::toint_d(_v19186); _v19186; });
    ({ double _v19187 = 55.0; this->f_S__5e__21__25_ = rt::toint_d(_v19187); _v19187; });
    ({ double _v19188 = 169.0; this->f_S_3_21_r = rt::touint_d(_v19188); _v19188; });
}
rt::Value C_S_8_22__24_::m_S_8_21_1() {
    RT_FN("S_8_22__24_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5710]), C_S__26_c::sm_S_8_21_Z(C_S_8_22__24_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_8_22__24_::sm_S__2c__21_G() {
    RT_FN("S_8_22__24_.S__2c__21_G");
    return 200.0;
    return 0.0;
}
C_S_8_22__24_* C_S_8_22__24_::alloc_() {
    C_S_8_22__24_* o = rt::make<C_S_8_22__24_>();
    return o;
}
rt::Value C_S_8_22__24_::mk_(rt::Value* a, int n) {
    C_S_8_22__24_* o = alloc_();
    o->C_S_8_22__24_::ctor_();
    return rt::VO(o);
}
bool C_S_8_22__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_8_22__24_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_8_22__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_8_22__24_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_8_22__24_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_8_22__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22__24___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_22__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_22__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_8_22_K::ctor_() {
    RT_FN("S_8_22_K.S_8_22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19189 = 1236.0; this->f_S_6_21_Z = rt::touint_d(_v19189); _v19189; });
    ({ rt::Value _v19190 = rt::trv(rt::VS(g::LS[5711])); this->f_S_1i = rt::slot_string(_v19190); _v19190; });
    ({ rt::Value _v19191 = rt::VS(g::LS[5712]); this->f_S__5e__21__23_ = rt::slot_string(_v19191); _v19191; });
    ({ double _v19192 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v19192); _v19192; });
    ({ double _v19193 = 8.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19193); _v19193; });
    ({ double _v19194 = 8.0; this->f_S_0_21_N = rt::toint_d(_v19194); _v19194; });
    ({ double _v19195 = 64.0; this->f_S__5e__21__25_ = rt::toint_d(_v19195); _v19195; });
    ({ double _v19196 = 192.0; this->f_S_3_21_r = rt::touint_d(_v19196); _v19196; });
}
rt::Value C_S_8_22_K::m_S_8_21_1() {
    RT_FN("S_8_22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5713]), C_S__26_c::sm_S_8_21_Z(C_S_8_22_K::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_8_22_K::sm_S__26_s() {
    RT_FN("S_8_22_K.S__26_s");
    return (0.7 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(29.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7));
    return 0.0;
}
C_S_8_22_K* C_S_8_22_K::alloc_() {
    C_S_8_22_K* o = rt::make<C_S_8_22_K>();
    return o;
}
rt::Value C_S_8_22_K::mk_(rt::Value* a, int n) {
    C_S_8_22_K* o = alloc_();
    o->C_S_8_22_K::ctor_();
    return rt::VO(o);
}
bool C_S_8_22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_8_22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_8_22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_8_22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_8_22_K::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_8_22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_22_K__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_8_22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_88::ctor_() {
    RT_FN("S_88.S_88");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v19197 = 694.0; this->f_S_6_21_Z = rt::touint_d(_v19197); _v19197; });
    ({ rt::Value _v19198 = rt::trv(rt::VS(g::LS[5714])); this->f_S_1i = rt::slot_string(_v19198); _v19198; });
    ({ rt::Value _v19199 = rt::VS(g::LS[5715]); this->f_S__5e__21__23_ = rt::slot_string(_v19199); _v19199; });
    ({ double _v19200 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v19200); _v19200; });
    ({ double _v19201 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19201); _v19201; });
    ({ double _v19202 = 11.0; this->f_S_0_21_N = rt::toint_d(_v19202); _v19202; });
}
rt::Value C_S_88::m_S__5b__21_C() {
    RT_FN("S_88.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v19203 = g::SV.C_S__3c_a__id; this->f_S_6_21_p = _v19203; _v19203; });
    return rt::NUL;
}
int32_t C_S_88::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S_88::dm_S_75_2() { return false; }
rt::Value C_S_88::dm_S_75_3() { return rt::NUL; }
double C_S_88::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S_88.S_75");
    if ((((double)(g::SV.C_S__23__21__21___S_3_22_)) == (-1.0))) {
        return 0.0;
    }
    if (((((double)(l_param1)) == 9.0) || (((double)(l_param1)) == 10.0))) {
        return this->C_S_6P::m_S_75(rt::toint_d(12.0), C_S_6P::dm_S_75_1(), C_S_6P::dm_S_75_2(), C_S_6P::dm_S_75_3());
    }
    return 0.0;
    return 0.0;
}
rt::Value C_S_88::m_S_1_21_6() {
    RT_FN("S_88.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5716]), C_S__26_c::sm_S_8_21_Z(C_S_88::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_88::sm_S__26_s() {
    RT_FN("S_88.S__26_s");
    return (10.0 * rt::m_pow(C_S__26_c::sm_S__27__22__2d_(rt::toint_d(11.0), g::SV.C_S__22_9__id), 1.25));
    return 0.0;
}
C_S_88* C_S_88::alloc_() {
    C_S_88* o = rt::make<C_S_88>();
    return o;
}
rt::Value C_S_88::mk_(rt::Value* a, int n) {
    C_S_88* o = alloc_();
    o->C_S_88::ctor_();
    return rt::VO(o);
}
bool C_S_88::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S_88::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S_88::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S_88::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S_88::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S_88::dm_S_75_3()))); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S_88::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_75: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S_88::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_88::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_88__id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_88::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_88__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_88::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_9_21_1::ctor_() {
    RT_FN("S_9_21_1.S_9_21_1");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19204 = 656.0; this->f_S_6_21_Z = rt::touint_d(_v19204); _v19204; });
    ({ rt::Value _v19205 = rt::trv(rt::VS(g::LS[5717])); this->f_S_1i = rt::slot_string(_v19205); _v19205; });
    ({ rt::Value _v19206 = rt::VS(g::LS[5718]); this->f_S__5e__21__23_ = rt::slot_string(_v19206); _v19206; });
    ({ double _v19207 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19207); _v19207; });
    ({ double _v19208 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19208); _v19208; });
    ({ double _v19209 = 5.0; this->f_S_0_21_N = rt::toint_d(_v19209); _v19209; });
    ({ double _v19210 = 18.0; this->f_S__5e__21__25_ = rt::toint_d(_v19210); _v19210; });
    ({ double _v19211 = 78.0; this->f_S_3_21_r = rt::touint_d(_v19211); _v19211; });
}
rt::Value C_S_9_21_1::m_S_8_21_1() {
    RT_FN("S_9_21_1.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5480]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__2d__21__5e_)))));
    return rt::NUL;
}
bool C_S_9_21_1::m_S_7G() {
    RT_FN("S_9_21_1.S_7G");
    return ((({ rt::Value _o19212 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p19213 = rt::as_ptr<C_S_84>(_o19212); _p19213 ? _p19213->g_S__3f_j() : rt::tonum(rt::dget(_o19212, NM_S__3f_j)); }) + ({ rt::Value _o19214 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p19215 = rt::as_ptr<C_S_84>(_o19214); _p19215 ? _p19215->g_S__3c_q() : rt::tonum(rt::dget(_o19214, NM_S__3c_q)); })) >= ((g::SV.C_S_9_21_1__S__25__21__5b_ * 60.0) * 60.0));
    return false;
}
rt::Value C_S_9_21_1::m_S_9T() {
    RT_FN("S_9_21_1.S_9T");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5719]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_9_21_1__S__25__21__5b_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S_9_21_1* C_S_9_21_1::alloc_() {
    C_S_9_21_1* o = rt::make<C_S_9_21_1>();
    return o;
}
rt::Value C_S_9_21_1::mk_(rt::Value* a, int n) {
    C_S_9_21_1* o = alloc_();
    o->C_S_9_21_1::ctor_();
    return rt::VO(o);
}
bool C_S_9_21_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_7G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9T: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_9_21_1::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_9_21_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_7G: out = rt::VB(m_S_7G()); return true;
    case NM_S_9T: out = m_S_9T(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_9_21_1::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_7G: return true;
    case NM_S_9T: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_9_21_1::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21_1__id)); return true;
    case NM_S__25__21__5b_: out = rt::V(g::SV.C_S_9_21_1__S__25__21__5b_); return true;
    default: return false;
    }
}
bool C_S_9_21_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21_1__id = rt::touint(v); return true;
    case NM_S__25__21__5b_: g::SV.C_S_9_21_1__S__25__21__5b_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_9_21_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_21_L::ctor_() {
    RT_FN("S_9_21_L.S_9_21_L");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19216 = 687.0; this->f_S_6_21_Z = rt::touint_d(_v19216); _v19216; });
    ({ rt::Value _v19217 = rt::trv(rt::VS(g::LS[5720])); this->f_S_1i = rt::slot_string(_v19217); _v19217; });
    ({ rt::Value _v19218 = rt::VS(g::LS[5721]); this->f_S__5e__21__23_ = rt::slot_string(_v19218); _v19218; });
    ({ double _v19219 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v19219); _v19219; });
    ({ double _v19220 = 6.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19220); _v19220; });
    ({ double _v19221 = 6.0; this->f_S_0_21_N = rt::toint_d(_v19221); _v19221; });
    ({ double _v19222 = 1.0; this->f_S__5e__21__25_ = rt::toint_d(_v19222); _v19222; });
    ({ double _v19223 = 61.0; this->f_S_3_21_r = rt::touint_d(_v19223); _v19223; });
}
rt::Value C_S_9_21_L::m_S_8_21_1() {
    RT_FN("S_9_21_L.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5722]), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o19224 = C_S_8G::sm_S__2d_e(rt::toint_d(1.0)); C_S__60__21__3b_* _p19225 = rt::as_ptr<C_S__60__21__3b_>(_o19224); _p19225 ? _p19225->f_id : rt::touint(rt::dget(_o19224, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o19226 = C_S_8G::sm_S__2d_e(rt::toint_d(9.0)); C_S__60__21__3b_* _p19227 = rt::as_ptr<C_S__60__21__3b_>(_o19226); _p19227 ? _p19227->f_id : rt::touint(rt::dget(_o19226, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S__3e__21__26_(({ rt::Value _o19228 = C_S_8G::sm_S__2d_e(rt::toint_d(11.0)); C_S__60__21__3b_* _p19229 = rt::as_ptr<C_S__60__21__3b_>(_o19228); _p19229 ? _p19229->f_id : rt::touint(rt::dget(_o19228, NM_id)); }), true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(C_S_9_21_L::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_9_21_L::m_S_6r() {
    RT_FN("S_9_21_L.S_6r");
    (void)(this->C_S__3b_x::m_S_6r());
    (void)(({ rt::Value _o19230 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p19231 = rt::as_ptr<C_S_8G>(_o19230); _p19231 ? _p19231->m_S_17() : rt::dcallv(_o19230, NM_S_17); }));
    (void)(({ rt::Value _o19232 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p19233 = rt::as_ptr<C_S__20_g>(_o19232); _p19233 ? _p19233->m_S_69() : rt::dcallv(_o19232, NM_S_69); }));
    return rt::NUL;
}
double C_S_9_21_L::sm_S__26_s() {
    RT_FN("S_9_21_L.S__26_s");
    return (7.0 * rt::m_pow(C_S__26_c::sm_S__60__21_D(C_S__26_c::dsm_S__60__21_D_0()), 0.7));
    return 0.0;
}
C_S_9_21_L* C_S_9_21_L::alloc_() {
    C_S_9_21_L* o = rt::make<C_S_9_21_L>();
    return o;
}
rt::Value C_S_9_21_L::mk_(rt::Value* a, int n) {
    C_S_9_21_L* o = alloc_();
    o->C_S_9_21_L::ctor_();
    return rt::VO(o);
}
bool C_S_9_21_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_9_21_L::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_9_21_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_9_21_L::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    case NM_S_6r: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_9_21_L::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S_9_21_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21_L__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S_9_21_L__S_1_21_S); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_9_21_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21_L__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S_9_21_L__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_9_21_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S_9_22__24_::ctor_() {
    RT_FN("S_9_22__24_.S_9_22__24_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19234 = 949.0; this->f_S_6_21_Z = rt::touint_d(_v19234); _v19234; });
    ({ rt::Value _v19235 = rt::trv(rt::VS(g::LS[5723])); this->f_S_1i = rt::slot_string(_v19235); _v19235; });
    ({ rt::Value _v19236 = rt::VS(g::LS[5724]); this->f_S__5e__21__23_ = rt::slot_string(_v19236); _v19236; });
    ({ double _v19237 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19237); _v19237; });
    ({ double _v19238 = 0.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19238); _v19238; });
    ({ double _v19239 = 0.0; this->f_S_0_21_N = rt::toint_d(_v19239); _v19239; });
    ({ double _v19240 = 59.0; this->f_S__5e__21__25_ = rt::toint_d(_v19240); _v19240; });
    ({ double _v19241 = 176.0; this->f_S_3_21_r = rt::touint_d(_v19241); _v19241; });
}
rt::Value C_S_9_22__24_::m_S_8_21_1() {
    RT_FN("S_9_22__24_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5725]), C_S__26_c::sm_S_8_21_Z(C_S_9_22__24_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_9_22__24_::sm_S__2c__21_G() {
    RT_FN("S_9_22__24_.S__2c__21_G");
    return 300.0;
    return 0.0;
}
C_S_9_22__24_* C_S_9_22__24_::alloc_() {
    C_S_9_22__24_* o = rt::make<C_S_9_22__24_>();
    return o;
}
rt::Value C_S_9_22__24_::mk_(rt::Value* a, int n) {
    C_S_9_22__24_* o = alloc_();
    o->C_S_9_22__24_::ctor_();
    return rt::VO(o);
}
bool C_S_9_22__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_9_22__24_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_9_22__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_9_22__24_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_9_22__24_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_9_22__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22__24___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_9_22__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_22__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_9_22__25_::ctor_() {
    RT_FN("S_9_22__25_.S_9_22__25_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19242 = 946.0; this->f_S_6_21_Z = rt::touint_d(_v19242); _v19242; });
    ({ rt::Value _v19243 = rt::trv(rt::VS(g::LS[5726])); this->f_S_1i = rt::slot_string(_v19243); _v19243; });
    ({ rt::Value _v19244 = rt::VS(g::LS[5727]); this->f_S__5e__21__23_ = rt::slot_string(_v19244); _v19244; });
    ({ double _v19245 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19245); _v19245; });
    ({ double _v19246 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19246); _v19246; });
    ({ double _v19247 = 9.0; this->f_S_0_21_N = rt::toint_d(_v19247); _v19247; });
    ({ double _v19248 = 58.0; this->f_S__5e__21__25_ = rt::toint_d(_v19248); _v19248; });
    ({ double _v19249 = 174.0; this->f_S_3_21_r = rt::touint_d(_v19249); _v19249; });
}
rt::Value C_S_9_22__25_::m_S_8_21_1() {
    RT_FN("S_9_22__25_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5728]), C_S__26_c::sm_S_8_21_Z(C_S_9_22__25_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S_9_22__25_::sm_S__2c__21_G() {
    RT_FN("S_9_22__25_.S__2c__21_G");
    return 100.0;
    return 0.0;
}
C_S_9_22__25_* C_S_9_22__25_::alloc_() {
    C_S_9_22__25_* o = rt::make<C_S_9_22__25_>();
    return o;
}
rt::Value C_S_9_22__25_::mk_(rt::Value* a, int n) {
    C_S_9_22__25_* o = alloc_();
    o->C_S_9_22__25_::ctor_();
    return rt::VO(o);
}
bool C_S_9_22__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_9_22__25_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_9_22__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_9_22__25_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_9_22__25_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S_9_22__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22__25___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_9_22__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22__25___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_22__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S_9_22_K::ctor_() {
    RT_FN("S_9_22_K.S_9_22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19250 = 1230.0; this->f_S_6_21_Z = rt::touint_d(_v19250); _v19250; });
    ({ rt::Value _v19251 = rt::trv(rt::VS(g::LS[5729])); this->f_S_1i = rt::slot_string(_v19251); _v19251; });
    ({ rt::Value _v19252 = rt::VS(g::LS[5730]); this->f_S__5e__21__23_ = rt::slot_string(_v19252); _v19252; });
    ({ double _v19253 = 5.0; this->f_S_9_21_m = rt::toint_d(_v19253); _v19253; });
    ({ double _v19254 = 14.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19254); _v19254; });
    ({ double _v19255 = 13.0; this->f_S_0_21_N = rt::toint_d(_v19255); _v19255; });
    ({ double _v19256 = 67.0; this->f_S__5e__21__25_ = rt::toint_d(_v19256); _v19256; });
    ({ double _v19257 = 199.0; this->f_S_3_21_r = rt::touint_d(_v19257); _v19257; });
}
rt::Value C_S_9_22_K::m_S_8_21_1() {
    RT_FN("S_9_22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5731])));
    return rt::NUL;
}
C_S_9_22_K* C_S_9_22_K::alloc_() {
    C_S_9_22_K* o = rt::make<C_S_9_22_K>();
    return o;
}
rt::Value C_S_9_22_K::mk_(rt::Value* a, int n) {
    C_S_9_22_K* o = alloc_();
    o->C_S_9_22_K::ctor_();
    return rt::VO(o);
}
bool C_S_9_22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S_9_22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S_9_22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S_9_22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S_9_22_K::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22_K__id)); return true;
    default: return false;
    }
}
bool C_S_9_22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__22__26_::ctor_() {
    RT_FN("S__3b__22__26_.S__3b__22__26_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19258 = 959.0; this->f_S_6_21_Z = rt::touint_d(_v19258); _v19258; });
    ({ rt::Value _v19259 = rt::trv(rt::VS(g::LS[5732])); this->f_S_1i = rt::slot_string(_v19259); _v19259; });
    ({ rt::Value _v19260 = rt::VS(g::LS[5733]); this->f_S__5e__21__23_ = rt::slot_string(_v19260); _v19260; });
    ({ double _v19261 = 4.0; this->f_S_9_21_m = rt::toint_d(_v19261); _v19261; });
    ({ double _v19262 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19262); _v19262; });
    ({ double _v19263 = 12.0; this->f_S_0_21_N = rt::toint_d(_v19263); _v19263; });
    ({ double _v19264 = 48.0; this->f_S__5e__21__25_ = rt::toint_d(_v19264); _v19264; });
    ({ double _v19265 = 151.0; this->f_S_3_21_r = rt::touint_d(_v19265); _v19265; });
}
rt::Value C_S__3b__22__26_::m_S_8_21_1() {
    RT_FN("S__3b__22__26_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5734])));
    return rt::NUL;
}
C_S__3b__22__26_* C_S__3b__22__26_::alloc_() {
    C_S__3b__22__26_* o = rt::make<C_S__3b__22__26_>();
    return o;
}
rt::Value C_S__3b__22__26_::mk_(rt::Value* a, int n) {
    C_S__3b__22__26_* o = alloc_();
    o->C_S__3b__22__26_::ctor_();
    return rt::VO(o);
}
bool C_S__3b__22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3b__22__26_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3b__22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3b__22__26_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3b__22__26_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__22__26___id)); return true;
    default: return false;
    }
}
bool C_S__3b__22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__22__26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b_8::ctor_() {
    RT_FN("S__3b_8.S__3b_8");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v19266 = 670.0; this->f_S_6_21_Z = rt::touint_d(_v19266); _v19266; });
    ({ rt::Value _v19267 = rt::trv(rt::VS(g::LS[5735])); this->f_S_1i = rt::slot_string(_v19267); _v19267; });
    ({ rt::Value _v19268 = rt::VS(g::LS[5736]); this->f_S__5e__21__23_ = rt::slot_string(_v19268); _v19268; });
    ({ double _v19269 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v19269); _v19269; });
    ({ double _v19270 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19270); _v19270; });
    ({ double _v19271 = 1.0; this->f_S_0_21_N = rt::toint_d(_v19271); _v19271; });
}
rt::Value C_S__3b_8::m_S__5b__21_C() {
    RT_FN("S__3b_8.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v19272 = g::SV.C_S__40_D__id; this->f_S_6_21_p = _v19272; _v19272; });
    return rt::NUL;
}
rt::Value C_S__3b_8::m_S_1_21_6() {
    RT_FN("S__3b_8.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5737]), C_S__26_c::sm_S_8_21_Z(C_S__3b_8::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3b_8::sm_S__2c__21_G() {
    RT_FN("S__3b_8.S__2c__21_G");
    return rt::m_floor(rt::m_pow(C_S__26_c::sm_S__27__22__2d_(rt::toint_d(1.0), g::SV.C_S__3b_8__id), 1.25));
    return 0.0;
}
uint32_t C_S__3b_8::sm_S_6_22_4() {
    RT_FN("S__3b_8.S_6_22_4");
    return C_S__26_c::sm_S__3b__22__24_(rt::m_max2(1.0, C_S__3b_8::sm_S__2c__21_G()));
    return 0u;
}
C_S__3b_8* C_S__3b_8::alloc_() {
    C_S__3b_8* o = rt::make<C_S__3b_8>();
    return o;
}
rt::Value C_S__3b_8::mk_(rt::Value* a, int n) {
    C_S__3b_8* o = alloc_();
    o->C_S__3b_8::ctor_();
    return rt::VO(o);
}
bool C_S__3b_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S__3b_8::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S__3b_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S__3b_8::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S__3b_8::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    case NM_S_6_22_4: return true;
    default: return false;
    }
}
bool C_S__3b_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b_8__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_6_22_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3b_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b_8__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    case NM_S_6_22_4: out = rt::V((double)(sm_S_6_22_4())); return true;
    default: return false;
    }
}
void C_S__3d__21__2b_::ctor_() {
    RT_FN("S__3d__21__2b_.S__3d__21__2b_");
    (void)((this->C_S_6P::ctor_(), rt::NUL));
    ({ double _v19273 = 690.0; this->f_S_6_21_Z = rt::touint_d(_v19273); _v19273; });
    ({ rt::Value _v19274 = rt::trv(rt::VS(g::LS[5738])); this->f_S_1i = rt::slot_string(_v19274); _v19274; });
    ({ rt::Value _v19275 = rt::VS(g::LS[5739]); this->f_S__5e__21__23_ = rt::slot_string(_v19275); _v19275; });
    ({ double _v19276 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19276); _v19276; });
    ({ double _v19277 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19277); _v19277; });
    ({ double _v19278 = 4.0; this->f_S_0_21_N = rt::toint_d(_v19278); _v19278; });
}
rt::Value C_S__3d__21__2b_::m_S__5b__21_C() {
    RT_FN("S__3d__21__2b_.S__5b__21_C");
    (void)(this->C_S_6P::m_S__5b__21_C());
    ({ uint32_t _v19279 = g::SV.C_S__27__21_E__id; this->f_S_6_21_p = _v19279; _v19279; });
    return rt::NUL;
}
rt::Value C_S__3d__21__2b_::m_S_1_21_6() {
    RT_FN("S__3d__21__2b_.S_1_21_6");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5740]), C_S__26_c::sm_S_8_21_Z(C_S__3d__21__2b_::sm_S_9L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3d__21__2b_::sm_S_9L() {
    RT_FN("S__3d__21__2b_.S_9L");
    return (5.0 * rt::m_pow(C_S__26_c::sm_S__27__22__2d_(rt::toint_d(4.0), g::SV.C_S__3d__21__2b___id), 1.5));
    return 0.0;
}
C_S__3d__21__2b_* C_S__3d__21__2b_::alloc_() {
    C_S__3d__21__2b_* o = rt::make<C_S__3d__21__2b_>();
    return o;
}
rt::Value C_S__3d__21__2b_::mk_(rt::Value* a, int n) {
    C_S__3d__21__2b_* o = alloc_();
    o->C_S__3d__21__2b_::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21__2b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_6: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S_6P::dget(id, out);
}
bool C_S__3d__21__2b_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S_6P::dset(id, v);
}
bool C_S__3d__21__2b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_1_21_6: out = m_S_1_21_6(); return true;
    default: break;
    }
    return C_S_6P::dcall(id, a, n, out);
}
bool C_S__3d__21__2b_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_1_21_6: return true;
    default: break;
    }
    return C_S_6P::dmeth(id);
}
bool C_S__3d__21__2b_::smeth_(int id) {
    switch (id) {
    case NM_S_9L: return true;
    default: return false;
    }
}
bool C_S__3d__21__2b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__21__2b___id)); return true;
    case NM_S_9L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__21__2b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__21__2b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__21__2b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_9L: out = rt::V(sm_S_9L()); return true;
    default: return false;
    }
}
void C_S__3d__22__25_::ctor_() {
    RT_FN("S__3d__22__25_.S__3d__22__25_");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19280 = 942.0; this->f_S_6_21_Z = rt::touint_d(_v19280); _v19280; });
    ({ rt::Value _v19281 = rt::trv(rt::VS(g::LS[5741])); this->f_S_1i = rt::slot_string(_v19281); _v19281; });
    ({ rt::Value _v19282 = rt::VS(g::LS[5742]); this->f_S__5e__21__23_ = rt::slot_string(_v19282); _v19282; });
    ({ double _v19283 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v19283); _v19283; });
    ({ double _v19284 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19284); _v19284; });
    ({ double _v19285 = 5.0; this->f_S_0_21_N = rt::toint_d(_v19285); _v19285; });
    ({ double _v19286 = 55.0; this->f_S__5e__21__25_ = rt::toint_d(_v19286); _v19286; });
    ({ double _v19287 = 168.0; this->f_S_3_21_r = rt::touint_d(_v19287); _v19287; });
}
rt::Value C_S__3d__22__25_::m_S_8_21_1() {
    RT_FN("S__3d__22__25_.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5743]), C_S__26_c::sm_S_8_21_Z(C_S__3d__22__25_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3d__22__25_::sm_S__2c__21_G() {
    RT_FN("S__3d__22__25_.S__2c__21_G");
    return 1000.0;
    return 0.0;
}
C_S__3d__22__25_* C_S__3d__22__25_::alloc_() {
    C_S__3d__22__25_* o = rt::make<C_S__3d__22__25_>();
    return o;
}
rt::Value C_S__3d__22__25_::mk_(rt::Value* a, int n) {
    C_S__3d__22__25_* o = alloc_();
    o->C_S__3d__22__25_::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3d__22__25_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3d__22__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3d__22__25_::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3d__22__25_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3d__22__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22__25___id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22__25___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__22__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__3d__22_K::ctor_() {
    RT_FN("S__3d__22_K.S__3d__22_K");
    (void)((this->C_S__3b_x::ctor_(), rt::NUL));
    ({ double _v19288 = 1228.0; this->f_S_6_21_Z = rt::touint_d(_v19288); _v19288; });
    ({ rt::Value _v19289 = rt::trv(rt::VS(g::LS[5744])); this->f_S_1i = rt::slot_string(_v19289); _v19289; });
    ({ rt::Value _v19290 = rt::VS(g::LS[5745]); this->f_S__5e__21__23_ = rt::slot_string(_v19290); _v19290; });
    ({ double _v19291 = 4.0; this->f_S_9_21_m = rt::toint_d(_v19291); _v19291; });
    ({ double _v19292 = 13.0; this->f_S__2d__21__5e_ = rt::toint_d(_v19292); _v19292; });
    ({ double _v19293 = 12.0; this->f_S_0_21_N = rt::toint_d(_v19293); _v19293; });
    ({ double _v19294 = 70.0; this->f_S__5e__21__25_ = rt::toint_d(_v19294); _v19294; });
    ({ double _v19295 = 205.0; this->f_S_3_21_r = rt::touint_d(_v19295); _v19295; });
}
rt::Value C_S__3d__22_K::m_S_8_21_1() {
    RT_FN("S__3d__22_K.S_8_21_1");
    return rt::slot_string(rt::trv(rt::VS(g::LS[5746]), C_S__26_c::sm_S_8_21_Z(C_S__3d__22_K::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
double C_S__3d__22_K::sm_S__2c__21_G() {
    RT_FN("S__3d__22_K.S__2c__21_G");
    return rt::m_floor((0.1 * rt::m_pow(rt::m_log((1.0 + ((double)(C_S__26_c::sm_S__26__21__3c_(C_S__26_c::dsm_S__26__21__3c__0(), C_S__26_c::dsm_S__26__21__3c__1()))))), 1.5)));
    return 0.0;
}
C_S__3d__22_K* C_S__3d__22_K::alloc_() {
    C_S__3d__22_K* o = rt::make<C_S__3d__22_K>();
    return o;
}
rt::Value C_S__3d__22_K::mk_(rt::Value* a, int n) {
    C_S__3d__22_K* o = alloc_();
    o->C_S__3d__22_K::ctor_();
    return rt::VO(o);
}
bool C_S__3d__22_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__3b_x::dget(id, out);
}
bool C_S__3d__22_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__3b_x::dset(id, v);
}
bool C_S__3d__22_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_8_21_1: out = m_S_8_21_1(); return true;
    default: break;
    }
    return C_S__3b_x::dcall(id, a, n, out);
}
bool C_S__3d__22_K::dmeth(int id) {
    switch (id) {
    case NM_S_8_21_1: return true;
    default: break;
    }
    return C_S__3b_x::dmeth(id);
}
bool C_S__3d__22_K::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__3d__22_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__22_K__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3d__22_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__22_K__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__22_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void static_init_10(std::vector<std::string>& errs) {
    try { (g::SV.C_S__21__5b___S_13 = 3.0); } catch (...) { errs.push_back(std::string("S__21__5b_.S_13: ") + rt::exc_text()); }
    try { (g::SV.C_S__21_g__S_7_21_ = 5.0); } catch (...) { errs.push_back(std::string("S__21_g.S_7_21_: ") + rt::exc_text()); }
    try { (g::SV.C_S__21_g__S__3b__21__25_ = 10.0); } catch (...) { errs.push_back(std::string("S__21_g.S__3b__21__25_: ") + rt::exc_text()); }
    try { (g::SV.C_S__23_k__S_1_21_S = 0.3); } catch (...) { errs.push_back(std::string("S__23_k.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__23_k__S_6_21_c = 0.1); } catch (...) { errs.push_back(std::string("S__23_k.S_6_21_c: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__22__25___S_1_21_S = 2.0); } catch (...) { errs.push_back(std::string("S__3e__22__25_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__22__25___S__3c__21_Y = 1000000000.0); } catch (...) { errs.push_back(std::string("S__3f__22__25_.S__3c__21_Y: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__22__25___S__27__22__26_ = 45.0); } catch (...) { errs.push_back(std::string("S__3f__22__25_.S__27__22__26_: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c_v__S__21__21__40_ = 500000.0); } catch (...) { errs.push_back(std::string("S__2c_v.S__21__21__40_: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_21_M__S_1_21_S = 18.0); } catch (...) { errs.push_back(std::string("S_1_21_M.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_22__27___S_1_21_S = 1.0); } catch (...) { errs.push_back(std::string("S_1_22__27_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_22__27___S__3b_n = 5000.0); } catch (...) { errs.push_back(std::string("S_1_22__27_.S__3b_n: ") + rt::exc_text()); }
    try { (g::SV.C_S_15__S_0j = 1000000.0); } catch (...) { errs.push_back(std::string("S_15.S_0j: ") + rt::exc_text()); }
    try { (g::SV.C_S_15__S__3b__21__25_ = 10.0); } catch (...) { errs.push_back(std::string("S_15.S__3b__21__25_: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_a__S__27__21_I = 7777.0); } catch (...) { errs.push_back(std::string("S_2_21_a.S__27__21_I: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_21_a__S__3b__21__25_ = 5.0); } catch (...) { errs.push_back(std::string("S_2_21_a.S__3b__21__25_: ") + rt::exc_text()); }
    try { (g::SV.C_S_2_5e___S_4_21__24_ = 1000000.0); } catch (...) { errs.push_back(std::string("S_2_5e_.S_4_21__24_: ") + rt::exc_text()); }
    try { (g::SV.C_S_3_22__24___S__3c_ = 30000000000.0); } catch (...) { errs.push_back(std::string("S_3_22__24_.S__3c_: ") + rt::exc_text()); }
    try { (g::SV.C_S_3_22__24___S__27__22__26_ = 45.0); } catch (...) { errs.push_back(std::string("S_3_22__24_.S__27__22__26_: ") + rt::exc_text()); }
    try { (g::SV.C_S_4_22__27___S_1_21_S = 8.0); } catch (...) { errs.push_back(std::string("S_4_22__27_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_4_2b___S__25__21__5b_ = 20.0); } catch (...) { errs.push_back(std::string("S_4_2b_.S__25__21__5b_: ") + rt::exc_text()); }
    try { (g::SV.C_S_4_2b___S__21__21_C = 60.0); } catch (...) { errs.push_back(std::string("S_4_2b_.S__21__21_C: ") + rt::exc_text()); }
    try { (g::SV.C_S_4A__S__3e__21_Z = 50.0); } catch (...) { errs.push_back(std::string("S_4A.S__3e__21_Z: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_22__26___S_1_21_S = 10.0); } catch (...) { errs.push_back(std::string("S_7_22__26_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_22__26___S__3b_n = 100.0); } catch (...) { errs.push_back(std::string("S_7_22__26_.S__3b_n: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_21_1__S__25__21__5b_ = 6.0); } catch (...) { errs.push_back(std::string("S_9_21_1.S__25__21__5b_: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_21_L__S_1_21_S = 0.02); } catch (...) { errs.push_back(std::string("S_9_21_L.S_1_21_S: ") + rt::exc_text()); }
}
}  // namespace g
