// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S__3f__21_p::ctor_() {
    RT_FN("S__3f__21_p.S__3f__21_p");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33159 = 274.0; this->f_S_6_21_Z = rt::touint_d(_v33159); _v33159; });
    ({ rt::Value _v33160 = rt::trv(rt::VS(g::LS[9584])); this->f_S_1i = rt::slot_string(_v33160); _v33160; });
    ({ rt::Value _v33161 = rt::trv(rt::VS(g::LS[9585])); this->f_S_7_23_ = rt::slot_string(_v33161); _v33161; });
    ({ rt::Value _v33162 = rt::VS(g::LS[9586]); this->f_S__5e__21__23_ = rt::slot_string(_v33162); _v33162; });
    ({ bool _v33163 = true; this->f_S_4_21_3 = _v33163; _v33163; });
    ({ double _v33164 = 2000.0; this->f_S__3f__22_M = _v33164; _v33164; });
}
bool C_S__3f__21_p::m_S__20__21_3() {
    RT_FN("S__3f__21_p.S__20__21_3");
    return ({ bool _t33169 = ({ bool _t33168 = ({ bool _t33167 = ({ bool _t33166 = ({ bool _t33165 = this->g_S__2d_6(); _t33165 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 7.0)) : _t33165; }); _t33166 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33166; }); _t33167 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33167; }); _t33168 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_4Q__id)) : _t33168; }); _t33169 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_D__id)) : _t33169; });
    return false;
}
rt::Value C_S__3f__21_p::m_S__21__22__2b_() {
    RT_FN("S__3f__21_p.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33170 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33171 = rt::as_ptr<C_S__20_g>(_o33170); _p33171 ? _p33171->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33170, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3f__21_p::m_S_8_21_s() {
    RT_FN("S__3f__21_p.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9587])));
    return rt::NUL;
}
double C_S__3f__21_p::g_S_5_22__2c_() {
    RT_FN("S__3f__21_p.S_5_22__2c__get");
    return (rt::m_pow(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, 7.0)), 3.0) / 1000000.0);
    return 0.0;
}
C_S__3f__21_p* C_S__3f__21_p::alloc_() {
    C_S__3f__21_p* o = rt::make<C_S__3f__21_p>();
    return o;
}
rt::Value C_S__3f__21_p::mk_(rt::Value* a, int n) {
    C_S__3f__21_p* o = alloc_();
    o->C_S__3f__21_p::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3f__21_p::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3f__21_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3f__21_p::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3f__21_p::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_p__id)); return true;
    default: return false;
    }
}
bool C_S__3f__21_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_p__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__21_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__21_s::ctor_() {
    RT_FN("S__3f__21_s.S__3f__21_s");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33172 = 283.0; this->f_S_6_21_Z = rt::touint_d(_v33172); _v33172; });
    ({ rt::Value _v33173 = rt::trv(rt::VS(g::LS[9588])); this->f_S_1i = rt::slot_string(_v33173); _v33173; });
    ({ rt::Value _v33174 = rt::trv(rt::VS(g::LS[9589])); this->f_S_7_23_ = rt::slot_string(_v33174); _v33174; });
    ({ rt::Value _v33175 = rt::VS(g::LS[9590]); this->f_S__5e__21__23_ = rt::slot_string(_v33175); _v33175; });
    ({ bool _v33176 = true; this->f_S_4_21_3 = _v33176; _v33176; });
    ({ double _v33177 = 2000.0; this->f_S__3f__22_M = _v33177; _v33177; });
}
bool C_S__3f__21_s::m_S__20__21_3() {
    RT_FN("S__3f__21_s.S__20__21_3");
    return ({ bool _t33182 = ({ bool _t33181 = ({ bool _t33180 = ({ bool _t33179 = ({ bool _t33178 = this->g_S__2d_6(); _t33178 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0)) : _t33178; }); _t33179 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33179; }); _t33180 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33180; }); _t33181 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__40__3d___id)) : _t33181; }); _t33182 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__20__5b___id)) : _t33182; });
    return false;
}
rt::Value C_S__3f__21_s::m_S__21__22__2b_() {
    RT_FN("S__3f__21_s.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33183 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33184 = rt::as_ptr<C_S__20_g>(_o33183); _p33184 ? _p33184->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33183, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3f__21_s::m_S_8_21_s() {
    RT_FN("S__3f__21_s.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9591])));
    return rt::NUL;
}
double C_S__3f__21_s::g_S_5_22__2c_() {
    RT_FN("S__3f__21_s.S_5_22__2c__get");
    return (rt::m_pow(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0)), 2.0) / 500000000.0);
    return 0.0;
}
C_S__3f__21_s* C_S__3f__21_s::alloc_() {
    C_S__3f__21_s* o = rt::make<C_S__3f__21_s>();
    return o;
}
rt::Value C_S__3f__21_s::mk_(rt::Value* a, int n) {
    C_S__3f__21_s* o = alloc_();
    o->C_S__3f__21_s::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3f__21_s::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3f__21_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3f__21_s::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3f__21_s::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_s__id)); return true;
    default: return false;
    }
}
bool C_S__3f__21_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__21_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__22_B::ctor_() {
    RT_FN("S__3f__22_B.S__3f__22_B");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33185 = 371.0; this->f_S_6_21_Z = rt::touint_d(_v33185); _v33185; });
    ({ rt::Value _v33186 = rt::trv(rt::VS(g::LS[9592])); this->f_S_1i = rt::slot_string(_v33186); _v33186; });
    ({ rt::Value _v33187 = rt::trv(rt::VS(g::LS[9593])); this->f_S_7_23_ = rt::slot_string(_v33187); _v33187; });
    ({ rt::Value _v33188 = rt::VS(g::LS[9594]); this->f_S__5e__21__23_ = rt::slot_string(_v33188); _v33188; });
    ({ bool _v33189 = true; this->f_S_4_21_3 = _v33189; _v33189; });
    ({ double _v33190 = 10000.0; this->f_S__3f__22_M = _v33190; _v33190; });
}
bool C_S__3f__22_B::m_S__20__21_3() {
    RT_FN("S__3f__22_B.S__20__21_3");
    return ({ bool _t33194 = ({ bool _t33193 = ({ bool _t33192 = ({ bool _t33191 = this->g_S__2d_6(); _t33191 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0)) : _t33191; }); _t33192 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t33192; }); _t33193 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 225.0)) : _t33193; }); _t33194 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33194; });
    return false;
}
rt::Value C_S__3f__22_B::m_S__21__22__2b_() {
    RT_FN("S__3f__22_B.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33195 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33196 = rt::as_ptr<C_S__20_g>(_o33195); _p33196 ? _p33196->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 4.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o33195, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 4.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S__3f__22_B::m_S_8_21_s() {
    RT_FN("S__3f__22_B.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9595])));
    return rt::NUL;
}
double C_S__3f__22_B::g_S_5_22__2c_() {
    RT_FN("S__3f__22_B.S_5_22__2c__get");
    return (C_S__26_c::sm_S_1_21__3b_(g::SV.C_S__60_T__id, true) / 10000.0);
    return 0.0;
}
C_S__3f__22_B* C_S__3f__22_B::alloc_() {
    C_S__3f__22_B* o = rt::make<C_S__3f__22_B>();
    return o;
}
rt::Value C_S__3f__22_B::mk_(rt::Value* a, int n) {
    C_S__3f__22_B* o = alloc_();
    o->C_S__3f__22_B::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3f__22_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3f__22_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3f__22_B::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3f__22_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__22_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22_B__id)); return true;
    default: return false;
    }
}
bool C_S__3f__22_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22_B__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__22_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25_i::ctor_() {
    RT_FN("S__25_i.S__25_i");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33197 = 152.0; this->f_S_6_21_Z = rt::touint_d(_v33197); _v33197; });
    ({ rt::Value _v33198 = rt::trv(rt::VS(g::LS[9596])); this->f_S_1i = rt::slot_string(_v33198); _v33198; });
    ({ rt::Value _v33199 = rt::trv(rt::VS(g::LS[9597])); this->f_S_7_23_ = rt::slot_string(_v33199); _v33199; });
    ({ rt::Value _v33200 = rt::VS(g::LS[9598]); this->f_S__5e__21__23_ = rt::slot_string(_v33200); _v33200; });
    ({ bool _v33201 = true; this->f_S_4_21_3 = _v33201; _v33201; });
}
bool C_S__25_i::m_S__20__21_3() {
    RT_FN("S__25_i.S__20__21_3");
    return ({ bool _t33203 = ({ bool _t33202 = this->g_S__2d_6(); _t33202 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t33202; }); _t33203 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 5.0)) : _t33203; });
    return false;
}
rt::Value C_S__25_i::m_S_8_21_s() {
    RT_FN("S__25_i.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9599])));
    return rt::NUL;
}
double C_S__25_i::g_S_5_22__2c_() {
    RT_FN("S__25_i.S_5_22__2c__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) / 50.0);
    return 0.0;
}
C_S__25_i* C_S__25_i::alloc_() {
    C_S__25_i* o = rt::make<C_S__25_i>();
    return o;
}
rt::Value C_S__25_i::mk_(rt::Value* a, int n) {
    C_S__25_i* o = alloc_();
    o->C_S__25_i::ctor_();
    return rt::VO(o);
}
bool C_S__25_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__25_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__25_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__25_i::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__25_i::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25_i__id)); return true;
    default: return false;
    }
}
bool C_S__25_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__21_H::ctor_() {
    RT_FN("S__26__21_H.S__26__21_H");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33204 = 177.0; this->f_S_6_21_Z = rt::touint_d(_v33204); _v33204; });
    ({ rt::Value _v33205 = rt::trv(rt::VS(g::LS[8320])); this->f_S_1i = rt::slot_string(_v33205); _v33205; });
    ({ rt::Value _v33206 = rt::trv(rt::VS(g::LS[9600])); this->f_S_7_23_ = rt::slot_string(_v33206); _v33206; });
    ({ rt::Value _v33207 = rt::VS(g::LS[8321]); this->f_S__5e__21__23_ = rt::slot_string(_v33207); _v33207; });
    ({ bool _v33208 = true; this->f_S_4_21_3 = _v33208; _v33208; });
}
bool C_S__26__21_H::m_S__20__21_3() {
    RT_FN("S__26__21_H.S__20__21_3");
    return ({ bool _t33209 = this->g_S__2d_6(); _t33209 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 1.0)) : _t33209; });
    return false;
}
rt::Value C_S__26__21_H::m_S_8_21_s() {
    RT_FN("S__26__21_H.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9601])));
    return rt::NUL;
}
double C_S__26__21_H::g_S_5_22__2c_() {
    RT_FN("S__26__21_H.S_5_22__2c__get");
    return 10.0;
    return 0.0;
}
C_S__26__21_H* C_S__26__21_H::alloc_() {
    C_S__26__21_H* o = rt::make<C_S__26__21_H>();
    return o;
}
rt::Value C_S__26__21_H::mk_(rt::Value* a, int n) {
    C_S__26__21_H* o = alloc_();
    o->C_S__26__21_H::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__26__21_H::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__26__21_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__26__21_H::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__26__21_H::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_H__id)); return true;
    default: return false;
    }
}
bool C_S__26__21_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_H__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__21_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__21_Q::ctor_() {
    RT_FN("S__26__21_Q.S__26__21_Q");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33210 = 147.0; this->f_S_6_21_Z = rt::touint_d(_v33210); _v33210; });
    ({ rt::Value _v33211 = rt::trv(rt::VS(g::LS[9602])); this->f_S_1i = rt::slot_string(_v33211); _v33211; });
    ({ rt::Value _v33212 = rt::trv(rt::VS(g::LS[9603])); this->f_S_7_23_ = rt::slot_string(_v33212); _v33212; });
    ({ rt::Value _v33213 = rt::VS(g::LS[9604]); this->f_S__5e__21__23_ = rt::slot_string(_v33213); _v33213; });
    ({ bool _v33214 = true; this->f_S_4_21_3 = _v33214; _v33214; });
}
bool C_S__26__21_Q::m_S__20__21_3() {
    RT_FN("S__26__21_Q.S__20__21_3");
    return ({ bool _t33216 = this->g_S__2d_6(); _t33216 ? (bool)((({ bool _t33215 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0); _t33215 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33215; }))) : _t33216; });
    return false;
}
rt::Value C_S__26__21_Q::m_S_8_21_s() {
    RT_FN("S__26__21_Q.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9605])));
    return rt::NUL;
}
double C_S__26__21_Q::g_S_5_22__2c_() {
    RT_FN("S__26__21_Q.S_5_22__2c__get");
    return (C_S_8G::sm_S__25_Z(g::SV.C_S_8_21_d__id, C_S_8G::dsm_S__25_Z_1()) / 5000.0);
    return 0.0;
}
C_S__26__21_Q* C_S__26__21_Q::alloc_() {
    C_S__26__21_Q* o = rt::make<C_S__26__21_Q>();
    return o;
}
rt::Value C_S__26__21_Q::mk_(rt::Value* a, int n) {
    C_S__26__21_Q* o = alloc_();
    o->C_S__26__21_Q::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__26__21_Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__26__21_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__26__21_Q::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__26__21_Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_Q__id)); return true;
    default: return false;
    }
}
bool C_S__26__21_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_Q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__21_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__21_q::ctor_() {
    RT_FN("S__26__21_q.S__26__21_q");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33217 = 276.0; this->f_S_6_21_Z = rt::touint_d(_v33217); _v33217; });
    ({ rt::Value _v33218 = rt::trv(rt::VS(g::LS[9606])); this->f_S_1i = rt::slot_string(_v33218); _v33218; });
    ({ rt::Value _v33219 = rt::trv(rt::VS(g::LS[9607])); this->f_S_7_23_ = rt::slot_string(_v33219); _v33219; });
    ({ rt::Value _v33220 = rt::VS(g::LS[9608]); this->f_S__5e__21__23_ = rt::slot_string(_v33220); _v33220; });
    ({ bool _v33221 = true; this->f_S_4_21_3 = _v33221; _v33221; });
    ({ double _v33222 = 2000.0; this->f_S__3f__22_M = _v33222; _v33222; });
}
bool C_S__26__21_q::m_S__20__21_3() {
    RT_FN("S__26__21_q.S__20__21_3");
    return ({ bool _t33227 = ({ bool _t33226 = ({ bool _t33225 = ({ bool _t33224 = ({ bool _t33223 = this->g_S__2d_6(); _t33223 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0)) : _t33223; }); _t33224 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33224; }); _t33225 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33225; }); _t33226 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__20__21_8__id)) : _t33226; }); _t33227 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9l__id)) : _t33227; });
    return false;
}
rt::Value C_S__26__21_q::m_S__21__22__2b_() {
    RT_FN("S__26__21_q.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33228 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33229 = rt::as_ptr<C_S__20_g>(_o33228); _p33229 ? _p33229->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33228, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S__26__21_q::m_S_8_21_s() {
    RT_FN("S__26__21_q.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9609])));
    return rt::NUL;
}
double C_S__26__21_q::g_S_5_22__2c_() {
    RT_FN("S__26__21_q.S_5_22__2c__get");
    return (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(54.0)) / 2592000.0);
    return 0.0;
}
C_S__26__21_q* C_S__26__21_q::alloc_() {
    C_S__26__21_q* o = rt::make<C_S__26__21_q>();
    return o;
}
rt::Value C_S__26__21_q::mk_(rt::Value* a, int n) {
    C_S__26__21_q* o = alloc_();
    o->C_S__26__21_q::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__26__21_q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__26__21_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__26__21_q::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__26__21_q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_q__id)); return true;
    default: return false;
    }
}
bool C_S__26__21_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__21_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__23_::ctor_() {
    RT_FN("S__26__23_.S__26__23_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33230 = 148.0; this->f_S_6_21_Z = rt::touint_d(_v33230); _v33230; });
    ({ rt::Value _v33231 = rt::trv(rt::VS(g::LS[8324])); this->f_S_1i = rt::slot_string(_v33231); _v33231; });
    ({ rt::Value _v33232 = rt::trv(rt::VS(g::LS[9610])); this->f_S_7_23_ = rt::slot_string(_v33232); _v33232; });
    ({ rt::Value _v33233 = rt::VS(g::LS[8325]); this->f_S__5e__21__23_ = rt::slot_string(_v33233); _v33233; });
    ({ bool _v33234 = true; this->f_S_4_21_3 = _v33234; _v33234; });
}
bool C_S__26__23_::m_S__20__21_3() {
    RT_FN("S__26__23_.S__20__21_3");
    return ({ bool _t33235 = this->g_S__2d_6(); _t33235 ? (bool)((C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()) >= 3000.0)) : _t33235; });
    return false;
}
rt::Value C_S__26__23_::m_S_8_21_s() {
    RT_FN("S__26__23_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9611])));
    return rt::NUL;
}
double C_S__26__23_::g_S_5_22__2c_() {
    RT_FN("S__26__23_.S_5_22__2c__get");
    return (C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()) / 15000.0);
    return 0.0;
}
C_S__26__23_* C_S__26__23_::alloc_() {
    C_S__26__23_* o = rt::make<C_S__26__23_>();
    return o;
}
rt::Value C_S__26__23_::mk_(rt::Value* a, int n) {
    C_S__26__23_* o = alloc_();
    o->C_S__26__23_::ctor_();
    return rt::VO(o);
}
bool C_S__26__23_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__26__23_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__26__23_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__26__23_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__26__23_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__23_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__23___id)); return true;
    default: return false;
    }
}
bool C_S__26__23_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__23___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__23_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__22_3::ctor_() {
    RT_FN("S__26__22_3.S__26__22_3");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33236 = 351.0; this->f_S_6_21_Z = rt::touint_d(_v33236); _v33236; });
    ({ rt::Value _v33237 = rt::trv(rt::VS(g::LS[8843])); this->f_S_1i = rt::slot_string(_v33237); _v33237; });
    ({ rt::Value _v33238 = rt::trv(rt::VS(g::LS[9612])); this->f_S_7_23_ = rt::slot_string(_v33238); _v33238; });
    ({ rt::Value _v33239 = rt::VS(g::LS[8844]); this->f_S__5e__21__23_ = rt::slot_string(_v33239); _v33239; });
    ({ bool _v33240 = true; this->f_S_4_21_3 = _v33240; _v33240; });
}
rt::Value C_S__26__22_3::m_S__40__22_() {
    RT_FN("S__26__22_3.S__40__22_");
    return rt::slot_string(rt::add(rt::add(this->f_S_7_23_, rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9613]), C_S__26_c::sm_S_8_21_Z(C_S__20__22_5::sm_S__2b__22_L(C_S_8G::sm_S__21__21_H(g::SV.C_S_4_22_3__id)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, 2.0))));
    return rt::NUL;
}
bool C_S__26__22_3::m_S__20__21_3() {
    RT_FN("S__26__22_3.S__20__21_3");
    return ({ bool _t33243 = ({ bool _t33242 = ({ bool _t33241 = this->g_S__2d_6(); _t33241 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 180.0)) : _t33241; }); _t33242 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0)) : _t33242; }); _t33243 ? (bool)((((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d(2.0), true))) >= 5000.0)) : _t33243; });
    return false;
}
rt::Value C_S__26__22_3::m_S_8_21_s() {
    RT_FN("S__26__22_3.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 180.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9614])));
    return rt::NUL;
}
double C_S__26__22_3::g_S_5_22__2c_() {
    RT_FN("S__26__22_3.S_5_22__2c__get");
    return (C_S__26_c::sm_S__22__22__20_(false, false, true) / 2160000.0);
    return 0.0;
}
C_S__26__22_3* C_S__26__22_3::alloc_() {
    C_S__26__22_3* o = rt::make<C_S__26__22_3>();
    return o;
}
rt::Value C_S__26__22_3::mk_(rt::Value* a, int n) {
    C_S__26__22_3* o = alloc_();
    o->C_S__26__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__26__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__26__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__26__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__26__22_3::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_3__id)); return true;
    default: return false;
    }
}
bool C_S__26__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_3__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__21_L::ctor_() {
    RT_FN("S__27__21_L.S__27__21_L");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33244 = 137.0; this->f_S_6_21_Z = rt::touint_d(_v33244); _v33244; });
    ({ rt::Value _v33245 = rt::trv(rt::VS(g::LS[8326])); this->f_S_1i = rt::slot_string(_v33245); _v33245; });
    ({ rt::Value _v33246 = rt::trv(rt::VS(g::LS[9615])); this->f_S_7_23_ = rt::slot_string(_v33246); _v33246; });
    ({ rt::Value _v33247 = rt::VS(g::LS[8327]); this->f_S__5e__21__23_ = rt::slot_string(_v33247); _v33247; });
    ({ bool _v33248 = true; this->f_S_4_21_3 = _v33248; _v33248; });
}
bool C_S__27__21_L::m_S__20__21_3() {
    RT_FN("S__27__21_L.S__20__21_3");
    return this->g_S__2d_6();
    return false;
}
rt::Value C_S__27__21_L::m_S_8_21_s() {
    RT_FN("S__27__21_L.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9616])));
    return rt::NUL;
}
double C_S__27__21_L::g_S_5_22__2c_() {
    RT_FN("S__27__21_L.S_5_22__2c__get");
    return (rt::tonum((rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 4.0)))) / 5000000.0);
    return 0.0;
}
C_S__27__21_L* C_S__27__21_L::alloc_() {
    C_S__27__21_L* o = rt::make<C_S__27__21_L>();
    return o;
}
rt::Value C_S__27__21_L::mk_(rt::Value* a, int n) {
    C_S__27__21_L* o = alloc_();
    o->C_S__27__21_L::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__27__21_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__27__21_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__27__21_L::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__27__21_L::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27__21_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21_L__id)); return true;
    default: return false;
    }
}
bool C_S__27__21_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__21_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__2d_::ctor_() {
    RT_FN("S__27__2d_.S__27__2d_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33249 = 146.0; this->f_S_6_21_Z = rt::touint_d(_v33249); _v33249; });
    ({ rt::Value _v33250 = rt::trv(rt::VS(g::LS[9617])); this->f_S_1i = rt::slot_string(_v33250); _v33250; });
    ({ rt::Value _v33251 = rt::trv(rt::VS(g::LS[9618])); this->f_S_7_23_ = rt::slot_string(_v33251); _v33251; });
    ({ rt::Value _v33252 = rt::VS(g::LS[9619]); this->f_S__5e__21__23_ = rt::slot_string(_v33252); _v33252; });
    ({ bool _v33253 = true; this->f_S_4_21_3 = _v33253; _v33253; });
}
bool C_S__27__2d_::m_S__20__21_3() {
    RT_FN("S__27__2d_.S__20__21_3");
    return ({ bool _t33255 = this->g_S__2d_6(); _t33255 ? (bool)((({ bool _t33254 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 2.0); _t33254 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33254; }))) : _t33255; });
    return false;
}
rt::Value C_S__27__2d_::m_S_8_21_s() {
    RT_FN("S__27__2d_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9620])));
    return rt::NUL;
}
double C_S__27__2d_::g_S_5_22__2c_() {
    RT_FN("S__27__2d_.S_5_22__2c__get");
    return (C_S_8G::sm_S__25_Z(g::SV.C_S_0_2d___id, C_S_8G::dsm_S__25_Z_1()) / 3750.0);
    return 0.0;
}
C_S__27__2d_* C_S__27__2d_::alloc_() {
    C_S__27__2d_* o = rt::make<C_S__27__2d_>();
    return o;
}
rt::Value C_S__27__2d_::mk_(rt::Value* a, int n) {
    C_S__27__2d_* o = alloc_();
    o->C_S__27__2d_::ctor_();
    return rt::VO(o);
}
bool C_S__27__2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__27__2d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__27__2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__27__2d_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__27__2d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27__2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__2d___id)); return true;
    default: return false;
    }
}
bool C_S__27__2d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__2d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__21__23_::ctor_() {
    RT_FN("S__2b__21__23_.S__2b__21__23_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33256 = 125.0; this->f_S_6_21_Z = rt::touint_d(_v33256); _v33256; });
    ({ rt::Value _v33257 = rt::trv(rt::VS(g::LS[9621])); this->f_S_1i = rt::slot_string(_v33257); _v33257; });
    ({ rt::Value _v33258 = rt::trv(rt::VS(g::LS[9622])); this->f_S_7_23_ = rt::slot_string(_v33258); _v33258; });
    ({ rt::Value _v33259 = rt::VS(g::LS[9623]); this->f_S__5e__21__23_ = rt::slot_string(_v33259); _v33259; });
    ({ double _v33260 = 15.0; this->f_S__3f__22_M = _v33260; _v33260; });
}
bool C_S__2b__21__23_::m_S__20__21_3() {
    RT_FN("S__2b__21__23_.S__20__21_3");
    return (C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M);
    return false;
}
C_S__2b__21__23_* C_S__2b__21__23_::alloc_() {
    C_S__2b__21__23_* o = rt::make<C_S__2b__21__23_>();
    return o;
}
rt::Value C_S__2b__21__23_::mk_(rt::Value* a, int n) {
    C_S__2b__21__23_* o = alloc_();
    o->C_S__2b__21__23_::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21__23_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__2b__21__23_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__2b__21__23_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__2b__21__23_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__2b__21__23_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21__23_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21__23___id)); return true;
    default: return false;
    }
}
bool C_S__2b__21__23_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21__23___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__21__23_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__21__22_::ctor_() {
    RT_FN("S__2b__21__22_.S__2b__21__22_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33261 = 233.0; this->f_S_6_21_Z = rt::touint_d(_v33261); _v33261; });
    ({ rt::Value _v33262 = rt::trv(rt::VS(g::LS[9624])); this->f_S_1i = rt::slot_string(_v33262); _v33262; });
    ({ rt::Value _v33263 = rt::trv(rt::VS(g::LS[9625])); this->f_S_7_23_ = rt::slot_string(_v33263); _v33263; });
    ({ rt::Value _v33264 = rt::VS(g::LS[9626]); this->f_S__5e__21__23_ = rt::slot_string(_v33264); _v33264; });
    ({ bool _v33265 = true; this->f_S_4_21_3 = _v33265; _v33265; });
}
bool C_S__2b__21__22_::m_S__20__21_3() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__2b__21__22_.S__20__21_3");
    (l_A__loc1_ = rt::new_datev());
    return ({ bool _t33268 = ({ bool _t33266 = this->g_S__2d_6(); _t33266 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 16.0)) : _t33266; }); _t33268 ? (bool)((({ bool _t33267 = rt::ge(rt::dcallv(l_A__loc1_, rt::N_getHours), rt::V(5.0)); _t33267 ? (bool)(rt::le(rt::dcallv(l_A__loc1_, rt::N_getHours), rt::V(11.0))) : _t33267; }))) : _t33268; });
    return false;
}
rt::Value C_S__2b__21__22_::m_S_8_21_s() {
    RT_FN("S__2b__21__22_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9627])));
    return rt::NUL;
}
double C_S__2b__21__22_::g_S_5_22__2c_() {
    RT_FN("S__2b__21__22_.S_5_22__2c__get");
    return (C_S_8G::sg_S_1_21_5() / 10000.0);
    return 0.0;
}
C_S__2b__21__22_* C_S__2b__21__22_::alloc_() {
    C_S__2b__21__22_* o = rt::make<C_S__2b__21__22_>();
    return o;
}
rt::Value C_S__2b__21__22_::mk_(rt::Value* a, int n) {
    C_S__2b__21__22_* o = alloc_();
    o->C_S__2b__21__22_::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21__22_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__2b__21__22_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__2b__21__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__2b__21__22_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__2b__21__22_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21__22___id)); return true;
    default: return false;
    }
}
bool C_S__2b__21__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21__22___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__21__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__21__5d_::ctor_() {
    RT_FN("S__2b__21__5d_.S__2b__21__5d_");
    ({ rt::Value _v33269 = rt::new_vectorv(rt::E_STR); this->f_S__60_D = _v33269; _v33269; });
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33270 = 215.0; this->f_S_6_21_Z = rt::touint_d(_v33270); _v33270; });
    ({ rt::Value _v33271 = rt::trv(rt::VS(g::LS[8347])); this->f_S_1i = rt::slot_string(_v33271); _v33271; });
    ({ rt::Value _v33272 = rt::VS(g::LS[8348]); this->f_S__5e__21__23_ = rt::slot_string(_v33272); _v33272; });
    ({ bool _v33273 = true; this->f_S_4_21_3 = _v33273; _v33273; });
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9628]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9629]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9630]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9631]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9632]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9633]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9634]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9635]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9636]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9637]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9638]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9639]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9640]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9641]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9642]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9643]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9644]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9645]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9646]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9647]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9648]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9649]))));
    (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9650]))));
    if ((((double)(C_S_8G::sg_S__2c_P())) == 0.0)) {
        (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9651]))));
    }
    if (((((double)(C_S_8G::sg_S_8_21_H())) >= 42.0) && (((double)(C_S_8G::sg_S__2c_P())) > 0.0))) {
        (void)(rt::dcallv(this->f_S__60_D, rt::N_push, rt::trv(rt::VS(g::LS[9652]))));
    }
}
rt::Value C_S__2b__21__5d_::m_S__40__22_() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S__2b__21__5d_.S__40__22_");
    (l_A__loc1_ = ((int32_t)(rt::touint_d(rt::mod((((double)(C_S__26_c::sm_S__22_E())) / 30.0), rt::alen(this->f_S__60_D))))));
    return rt::slot_string(rt::arr_at(this->f_S__60_D, ((double)(l_A__loc1_))));
    return rt::NUL;
}
bool C_S__2b__21__5d_::m_S__20__21_3() {
    RT_FN("S__2b__21__5d_.S__20__21_3");
    return ({ bool _t33275 = ({ bool _t33274 = this->g_S__2d_6(); _t33274 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0))) : _t33274; }); _t33275 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33275; });
    return false;
}
rt::Value C_S__2b__21__5d_::m_S_8_21_s() {
    RT_FN("S__2b__21__5d_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9653])));
    return rt::NUL;
}
double C_S__2b__21__5d_::g_S_5_22__2c_() {
    RT_FN("S__2b__21__5d_.S_5_22__2c__get");
    return 0.1;
    return 0.0;
}
C_S__2b__21__5d_* C_S__2b__21__5d_::alloc_() {
    C_S__2b__21__5d_* o = rt::make<C_S__2b__21__5d_>();
    return o;
}
rt::Value C_S__2b__21__5d_::mk_(rt::Value* a, int n) {
    C_S__2b__21__5d_* o = alloc_();
    o->C_S__2b__21__5d_::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21__5d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__60_D: out = f_S__60_D; return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__2b__21__5d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__60_D: f_S__60_D = v; return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__2b__21__5d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__60_D: { rt::Value f = f_S__60_D; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__2b__21__5d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__60_D: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__2b__21__5d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21__5d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21__5d___id)); return true;
    default: return false;
    }
}
bool C_S__2b__21__5d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21__5d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__21__5d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__21_z::ctor_() {
    RT_FN("S__2b__21_z.S__2b__21_z");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33276 = 306.0; this->f_S_6_21_Z = rt::touint_d(_v33276); _v33276; });
    ({ rt::Value _v33277 = rt::trv(rt::VS(g::LS[9654])); this->f_S_1i = rt::slot_string(_v33277); _v33277; });
    ({ rt::Value _v33278 = rt::trv(rt::VS(g::LS[9655])); this->f_S_7_23_ = rt::slot_string(_v33278); _v33278; });
    ({ rt::Value _v33279 = rt::VS(g::LS[9656]); this->f_S__5e__21__23_ = rt::slot_string(_v33279); _v33279; });
    ({ double _v33280 = 5000.0; this->f_S__3f__22_M = _v33280; _v33280; });
}
bool C_S__2b__21_z::m_S__20__21_3() {
    RT_FN("S__2b__21_z.S__20__21_3");
    return ({ bool _t33285 = ({ bool _t33284 = ({ bool _t33283 = ({ bool _t33282 = ({ bool _t33281 = this->g_S__2d_6(); _t33281 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33281; }); _t33282 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t33282; }); _t33283 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) : _t33283; }); _t33284 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33284; }); _t33285 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)) : _t33285; });
    return false;
}
rt::Value C_S__2b__21_z::m_S_8_21_s() {
    RT_FN("S__2b__21_z.S_8_21_s");
    if (this->g_S__27__22_Q()) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9657])));
    return rt::NUL;
}
double C_S__2b__21_z::g_S_5_22__2c_() {
    RT_FN("S__2b__21_z.S_5_22__2c__get");
    return ((66.0 * C_S__26_c::sm_S__5d__21_s(rt::toint_d(2.0), false, false, true)) / 66000000.0);
    return 0.0;
}
bool C_S__2b__21_z::g_S__27__22_Q() {
    RT_FN("S__2b__21_z.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 125.0);
    return false;
}
C_S__2b__21_z* C_S__2b__21_z::alloc_() {
    C_S__2b__21_z* o = rt::make<C_S__2b__21_z>();
    return o;
}
rt::Value C_S__2b__21_z::mk_(rt::Value* a, int n) {
    C_S__2b__21_z* o = alloc_();
    o->C_S__2b__21_z::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__2b__21_z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__2b__21_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__2b__21_z::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__2b__21_z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_z__id)); return true;
    default: return false;
    }
}
bool C_S__2b__21_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_z__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__21_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__22_C::ctor_() {
    RT_FN("S__2b__22_C.S__2b__22_C");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33286 = 364.0; this->f_S_6_21_Z = rt::touint_d(_v33286); _v33286; });
    ({ rt::Value _v33287 = rt::trv(rt::VS(g::LS[9658])); this->f_S_1i = rt::slot_string(_v33287); _v33287; });
    ({ rt::Value _v33288 = rt::trv(rt::VS(g::LS[9659])); this->f_S_7_23_ = rt::slot_string(_v33288); _v33288; });
    ({ rt::Value _v33289 = rt::VS(g::LS[9660]); this->f_S__5e__21__23_ = rt::slot_string(_v33289); _v33289; });
    ({ bool _v33290 = true; this->f_S_4_21_3 = _v33290; _v33290; });
    ({ double _v33291 = 10000.0; this->f_S__3f__22_M = _v33291; _v33291; });
}
bool C_S__2b__22_C::m_S__20__21_3() {
    RT_FN("S__2b__22_C.S__20__21_3");
    return ({ bool _t33295 = ({ bool _t33294 = ({ bool _t33293 = ({ bool _t33292 = this->g_S__2d_6(); _t33292 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0)) : _t33292; }); _t33293 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t33293; }); _t33294 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 225.0)) : _t33294; }); _t33295 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33295; });
    return false;
}
rt::Value C_S__2b__22_C::m_S__21__22__2b_() {
    RT_FN("S__2b__22_C.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33296 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33297 = rt::as_ptr<C_S__20_g>(_o33296); _p33297 ? _p33297->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 0.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o33296, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 0.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S__2b__22_C::m_S_8_21_s() {
    RT_FN("S__2b__22_C.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9661])));
    return rt::NUL;
}
double C_S__2b__22_C::g_S_5_22__2c_() {
    RT_FN("S__2b__22_C.S_5_22__2c__get");
    return (rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_(true, false, true))) / 8000.0);
    return 0.0;
}
C_S__2b__22_C* C_S__2b__22_C::alloc_() {
    C_S__2b__22_C* o = rt::make<C_S__2b__22_C>();
    return o;
}
rt::Value C_S__2b__22_C::mk_(rt::Value* a, int n) {
    C_S__2b__22_C* o = alloc_();
    o->C_S__2b__22_C::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__2b__22_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__2b__22_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__2b__22_C::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__2b__22_C::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__22_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22_C__id)); return true;
    default: return false;
    }
}
bool C_S__2b__22_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22_C__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__21_v::ctor_() {
    RT_FN("S__2c__21_v.S__2c__21_v");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33298 = 294.0; this->f_S_6_21_Z = rt::touint_d(_v33298); _v33298; });
    ({ rt::Value _v33299 = rt::trv(rt::VS(g::LS[7674])); this->f_S_1i = rt::slot_string(_v33299); _v33299; });
    ({ rt::Value _v33300 = rt::trv(rt::VS(g::LS[9662])); this->f_S_7_23_ = rt::slot_string(_v33300); _v33300; });
    ({ rt::Value _v33301 = rt::VS(g::LS[8302]); this->f_S__5e__21__23_ = rt::slot_string(_v33301); _v33301; });
    ({ bool _v33302 = true; this->f_S_4_21_3 = _v33302; _v33302; });
}
bool C_S__2c__21_v::m_S__20__21_3() {
    RT_FN("S__2c__21_v.S__20__21_3");
    return ({ bool _t33305 = ({ bool _t33304 = ({ bool _t33303 = this->g_S__2d_6(); _t33303 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)) : _t33303; }); _t33304 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33304; }); _t33305 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 120.0)) : _t33305; });
    return false;
}
rt::Value C_S__2c__21_v::m_S_8_21_s() {
    RT_FN("S__2c__21_v.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9663])));
    return rt::NUL;
}
double C_S__2c__21_v::g_S_5_22__2c_() {
    RT_FN("S__2c__21_v.S_5_22__2c__get");
    return (rt::m_pow(rt::m_log((C_S__23__21__21_::sm_S_57() * 30.0)), 3.0) / 234567.0);
    return 0.0;
}
C_S__2c__21_v* C_S__2c__21_v::alloc_() {
    C_S__2c__21_v* o = rt::make<C_S__2c__21_v>();
    return o;
}
rt::Value C_S__2c__21_v::mk_(rt::Value* a, int n) {
    C_S__2c__21_v* o = alloc_();
    o->C_S__2c__21_v::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__2c__21_v::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__2c__21_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__2c__21_v::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__2c__21_v::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__21_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21_v__id)); return true;
    default: return false;
    }
}
bool C_S__2c__21_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21_v__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__21_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__21_y::ctor_() {
    RT_FN("S__2c__21_y.S__2c__21_y");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33306 = 302.0; this->f_S_6_21_Z = rt::touint_d(_v33306); _v33306; });
    ({ rt::Value _v33307 = rt::trv(rt::VS(g::LS[9664])); this->f_S_1i = rt::slot_string(_v33307); _v33307; });
    ({ rt::Value _v33308 = rt::trv(rt::VS(g::LS[9665])); this->f_S_7_23_ = rt::slot_string(_v33308); _v33308; });
    ({ rt::Value _v33309 = rt::VS(g::LS[9666]); this->f_S__5e__21__23_ = rt::slot_string(_v33309); _v33309; });
    ({ double _v33310 = 5000.0; this->f_S__3f__22_M = _v33310; _v33310; });
}
bool C_S__2c__21_y::m_S__20__21_3() {
    RT_FN("S__2c__21_y.S__20__21_3");
    return ({ bool _t33315 = ({ bool _t33314 = ({ bool _t33313 = ({ bool _t33312 = ({ bool _t33311 = this->g_S__2d_6(); _t33311 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33311; }); _t33312 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t33312; }); _t33313 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) : _t33313; }); _t33314 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33314; }); _t33315 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0)) : _t33315; });
    return false;
}
rt::Value C_S__2c__21_y::m_S_8_21_s() {
    RT_FN("S__2c__21_y.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 125.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9667])));
    return rt::NUL;
}
double C_S__2c__21_y::g_S_5_22__2c_() {
    RT_FN("S__2c__21_y.S_5_22__2c__get");
    return (rt::m_pow(rt::m_log(rt::tonum(rt::add(rt::V(1.0), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0)))), 3.0) / 20000.0);
    return 0.0;
}
bool C_S__2c__21_y::g_S__27__22_Q() {
    RT_FN("S__2c__21_y.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 125.0);
    return false;
}
C_S__2c__21_y* C_S__2c__21_y::alloc_() {
    C_S__2c__21_y* o = rt::make<C_S__2c__21_y>();
    return o;
}
rt::Value C_S__2c__21_y::mk_(rt::Value* a, int n) {
    C_S__2c__21_y* o = alloc_();
    o->C_S__2c__21_y::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21_y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__2c__21_y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__2c__21_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__2c__21_y::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__2c__21_y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__21_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21_y__id)); return true;
    default: return false;
    }
}
bool C_S__2c__21_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21_y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__21_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__60_::ctor_() {
    RT_FN("S__2c__60_.S__2c__60_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33316 = 186.0; this->f_S_6_21_Z = rt::touint_d(_v33316); _v33316; });
    ({ rt::Value _v33317 = rt::trv(rt::VS(g::LS[9668])); this->f_S_1i = rt::slot_string(_v33317); _v33317; });
    ({ rt::Value _v33318 = rt::trv(rt::VS(g::LS[9669])); this->f_S_7_23_ = rt::slot_string(_v33318); _v33318; });
    ({ rt::Value _v33319 = rt::VS(g::LS[8300]); this->f_S__5e__21__23_ = rt::slot_string(_v33319); _v33319; });
    ({ double _v33320 = 3250.0; this->f_S__3f__22_M = _v33320; _v33320; });
}
bool C_S__2c__60_::m_S__20__21_3() {
    RT_FN("S__2c__60_.S__20__21_3");
    return ({ bool _t33323 = ({ bool _t33322 = ({ bool _t33321 = this->g_S__2d_6(); _t33321 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33321; }); _t33322 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 9.0)) : _t33322; }); _t33323 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_3_21_F__id)) : _t33323; });
    return false;
}
double C_S__2c__60_::g_S_5_22__2c_() {
    RT_FN("S__2c__60_.S_5_22__2c__get");
    return 0.5;
    return 0.0;
}
bool C_S__2c__60_::g_S__27__22_Q() {
    RT_FN("S__2c__60_.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 32.0);
    return false;
}
C_S__2c__60_* C_S__2c__60_::alloc_() {
    C_S__2c__60_* o = rt::make<C_S__2c__60_>();
    return o;
}
rt::Value C_S__2c__60_::mk_(rt::Value* a, int n) {
    C_S__2c__60_* o = alloc_();
    o->C_S__2c__60_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__60_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__2c__60_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__2c__60_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__2c__60_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__2c__60_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__60_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__60___id)); return true;
    default: return false;
    }
}
bool C_S__2c__60_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__60___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__60_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__21_q::ctor_() {
    RT_FN("S__2d__21_q.S__2d__21_q");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33324 = 278.0; this->f_S_6_21_Z = rt::touint_d(_v33324); _v33324; });
    ({ rt::Value _v33325 = rt::trv(rt::VS(g::LS[9670])); this->f_S_1i = rt::slot_string(_v33325); _v33325; });
    ({ rt::Value _v33326 = rt::trv(rt::VS(g::LS[9671])); this->f_S_7_23_ = rt::slot_string(_v33326); _v33326; });
    ({ rt::Value _v33327 = rt::VS(g::LS[9672]); this->f_S__5e__21__23_ = rt::slot_string(_v33327); _v33327; });
    ({ bool _v33328 = true; this->f_S_4_21_3 = _v33328; _v33328; });
    ({ double _v33329 = 2000.0; this->f_S__3f__22_M = _v33329; _v33329; });
}
bool C_S__2d__21_q::m_S__20__21_3() {
    RT_FN("S__2d__21_q.S__20__21_3");
    return ({ bool _t33334 = ({ bool _t33333 = ({ bool _t33332 = ({ bool _t33331 = ({ bool _t33330 = this->g_S__2d_6(); _t33330 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0)) : _t33330; }); _t33331 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33331; }); _t33332 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33332; }); _t33333 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__22__21_5__id)) : _t33333; }); _t33334 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_3g__id)) : _t33334; });
    return false;
}
rt::Value C_S__2d__21_q::m_S__21__22__2b_() {
    RT_FN("S__2d__21_q.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33335 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33336 = rt::as_ptr<C_S__20_g>(_o33335); _p33336 ? _p33336->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33335, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S__2d__21_q::m_S_8_21_s() {
    RT_FN("S__2d__21_q.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9673])));
    return rt::NUL;
}
double C_S__2d__21_q::g_S_5_22__2c_() {
    RT_FN("S__2d__21_q.S_5_22__2c__get");
    return (rt::m_pow(({ rt::Value _o33338 = (({ rt::Value _t33337 = C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id); rt::is_class(_t33337, C_S__25__21_J::CI) ? _t33337 : rt::NUL; })); C_S__25__21_J* _p33339 = rt::as_ptr<C_S__25__21_J>(_o33338); _p33339 ? _p33339->m_S__22__21_P() : rt::tonum(rt::dcallv(_o33338, NM_S__22__21_P)); }), 1.5) / 1000000.0);
    return 0.0;
}
C_S__2d__21_q* C_S__2d__21_q::alloc_() {
    C_S__2d__21_q* o = rt::make<C_S__2d__21_q>();
    return o;
}
rt::Value C_S__2d__21_q::mk_(rt::Value* a, int n) {
    C_S__2d__21_q* o = alloc_();
    o->C_S__2d__21_q::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__2d__21_q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__2d__21_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__2d__21_q::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__2d__21_q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__21_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_q__id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__21_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__22__26_::ctor_() {
    RT_FN("S__2d__22__26_.S__2d__22__26_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33340 = 319.0; this->f_S_6_21_Z = rt::touint_d(_v33340); _v33340; });
    ({ rt::Value _v33341 = rt::trv(rt::VS(g::LS[8353])); this->f_S_1i = rt::slot_string(_v33341); _v33341; });
    ({ rt::Value _v33342 = rt::trv(rt::VS(g::LS[9674])); this->f_S_7_23_ = rt::slot_string(_v33342); _v33342; });
    ({ rt::Value _v33343 = rt::VS(g::LS[8354]); this->f_S__5e__21__23_ = rt::slot_string(_v33343); _v33343; });
    ({ bool _v33344 = true; this->f_S_4_21_3 = _v33344; _v33344; });
}
bool C_S__2d__22__26_::m_S__20__21_3() {
    RT_FN("S__2d__22__26_.S__20__21_3");
    return ({ bool _t33348 = ({ bool _t33347 = ({ bool _t33346 = ({ bool _t33345 = this->g_S__2d_6(); _t33345 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33345; }); _t33346 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 100.0)) : _t33346; }); _t33347 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2b__21__22___id)) : _t33347; }); _t33348 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_6_21__3f___id)) : _t33348; });
    return false;
}
rt::Value C_S__2d__22__26_::m_S_8_21_s() {
    RT_FN("S__2d__22__26_.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 100.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9675])));
    return rt::NUL;
}
double C_S__2d__22__26_::g_S_5_22__2c_() {
    RT_FN("S__2d__22__26_.S_5_22__2c__get");
    return (rt::m_pow(((double)(g::SV.C_S_8G__S__5b__22__26_)), 2.5) / 2500.0);
    return 0.0;
}
C_S__2d__22__26_* C_S__2d__22__26_::alloc_() {
    C_S__2d__22__26_* o = rt::make<C_S__2d__22__26_>();
    return o;
}
rt::Value C_S__2d__22__26_::mk_(rt::Value* a, int n) {
    C_S__2d__22__26_* o = alloc_();
    o->C_S__2d__22__26_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22__26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__2d__22__26_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__2d__22__26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__2d__22__26_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__2d__22__26_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__22__26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22__26___id)); return true;
    default: return false;
    }
}
bool C_S__2d__22__26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22__26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22__26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_22_0::ctor_() {
    RT_FN("S_0_22_0.S_0_22_0");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33349 = 330.0; this->f_S_6_21_Z = rt::touint_d(_v33349); _v33349; });
    ({ rt::Value _v33350 = rt::trv(rt::VS(g::LS[9676])); this->f_S_1i = rt::slot_string(_v33350); _v33350; });
    ({ rt::Value _v33351 = rt::trv(rt::VS(g::LS[9677])); this->f_S_7_23_ = rt::slot_string(_v33351); _v33351; });
    ({ rt::Value _v33352 = rt::VS(g::LS[9678]); this->f_S__5e__21__23_ = rt::slot_string(_v33352); _v33352; });
    ({ bool _v33353 = true; this->f_S_4_21_3 = _v33353; _v33353; });
}
bool C_S_0_22_0::m_S__20__21_3() {
    RT_FN("S_0_22_0.S__20__21_3");
    return ({ bool _t33357 = ({ bool _t33356 = ({ bool _t33355 = ({ bool _t33354 = this->g_S__2d_6(); _t33354 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t33354; }); _t33355 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 3.0)) : _t33355; }); _t33356 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__25_i__id)) : _t33356; }); _t33357 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_8_21__60___id)) : _t33357; });
    return false;
}
rt::Value C_S_0_22_0::m_S__21__22__2b_() {
    RT_FN("S_0_22_0.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33358 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33359 = rt::as_ptr<C_S__20_g>(_o33358); _p33359 ? _p33359->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33358, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S_0_22_0::m_S_8_21_s() {
    RT_FN("S_0_22_0.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 3.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9679])));
    return rt::NUL;
}
double C_S_0_22_0::g_S_5_22__2c_() {
    RT_FN("S_0_22_0.S_5_22__2c__get");
    return (rt::m_pow((((double)(C_S__26_c::sm_S__2c_o(C_S_8G::sg_S__22__21_0()))) * 0.5), 2.0) / 10000.0);
    return 0.0;
}
C_S_0_22_0* C_S_0_22_0::alloc_() {
    C_S_0_22_0* o = rt::make<C_S_0_22_0>();
    return o;
}
rt::Value C_S_0_22_0::mk_(rt::Value* a, int n) {
    C_S_0_22_0* o = alloc_();
    o->C_S_0_22_0::ctor_();
    return rt::VO(o);
}
bool C_S_0_22_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_0_22_0::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_0_22_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_0_22_0::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_0_22_0::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_22_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_22_0__id)); return true;
    default: return false;
    }
}
bool C_S_0_22_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_22_0__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_22_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_21_s::ctor_() {
    RT_FN("S_1_21_s.S_1_21_s");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33360 = 281.0; this->f_S_6_21_Z = rt::touint_d(_v33360); _v33360; });
    ({ rt::Value _v33361 = rt::trv(rt::VS(g::LS[9680])); this->f_S_1i = rt::slot_string(_v33361); _v33361; });
    ({ rt::Value _v33362 = rt::trv(rt::VS(g::LS[9681])); this->f_S_7_23_ = rt::slot_string(_v33362); _v33362; });
    ({ rt::Value _v33363 = rt::VS(g::LS[9682]); this->f_S__5e__21__23_ = rt::slot_string(_v33363); _v33363; });
    ({ bool _v33364 = true; this->f_S_4_21_3 = _v33364; _v33364; });
    ({ double _v33365 = 2000.0; this->f_S__3f__22_M = _v33365; _v33365; });
}
bool C_S_1_21_s::m_S__20__21_3() {
    RT_FN("S_1_21_s.S__20__21_3");
    return ({ bool _t33370 = ({ bool _t33369 = ({ bool _t33368 = ({ bool _t33367 = ({ bool _t33366 = this->g_S__2d_6(); _t33366 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0)) : _t33366; }); _t33367 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33367; }); _t33368 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33368; }); _t33369 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5e_t__id)) : _t33369; }); _t33370 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__26__21_Q__id)) : _t33370; });
    return false;
}
rt::Value C_S_1_21_s::m_S__21__22__2b_() {
    RT_FN("S_1_21_s.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33371 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33372 = rt::as_ptr<C_S__20_g>(_o33371); _p33372 ? _p33372->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33371, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S_1_21_s::m_S_8_21_s() {
    RT_FN("S_1_21_s.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9683])));
    return rt::NUL;
}
double C_S_1_21_s::g_S_5_22__2c_() {
    RT_FN("S_1_21_s.S_5_22__2c__get");
    return ((C_S_8G::sm_S__25_Z(g::SV.C_S__40_E__id, true) * 0.5) / 200000.0);
    return 0.0;
}
C_S_1_21_s* C_S_1_21_s::alloc_() {
    C_S_1_21_s* o = rt::make<C_S_1_21_s>();
    return o;
}
rt::Value C_S_1_21_s::mk_(rt::Value* a, int n) {
    C_S_1_21_s* o = alloc_();
    o->C_S_1_21_s::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_1_21_s::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_1_21_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_1_21_s::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_1_21_s::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_s__id)); return true;
    default: return false;
    }
}
bool C_S_1_21_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_21_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_21_t::ctor_() {
    RT_FN("S_1_21_t.S_1_21_t");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33373 = 273.0; this->f_S_6_21_Z = rt::touint_d(_v33373); _v33373; });
    ({ rt::Value _v33374 = rt::trv(rt::VS(g::LS[9684])); this->f_S_1i = rt::slot_string(_v33374); _v33374; });
    ({ rt::Value _v33375 = rt::trv(rt::VS(g::LS[9685])); this->f_S_7_23_ = rt::slot_string(_v33375); _v33375; });
    ({ rt::Value _v33376 = rt::VS(g::LS[9686]); this->f_S__5e__21__23_ = rt::slot_string(_v33376); _v33376; });
    ({ bool _v33377 = true; this->f_S_4_21_3 = _v33377; _v33377; });
    ({ double _v33378 = 2000.0; this->f_S__3f__22_M = _v33378; _v33378; });
}
bool C_S_1_21_t::m_S__20__21_3() {
    RT_FN("S_1_21_t.S__20__21_3");
    return ({ bool _t33383 = ({ bool _t33382 = ({ bool _t33381 = ({ bool _t33380 = ({ bool _t33379 = this->g_S__2d_6(); _t33379 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 9.0)) : _t33379; }); _t33380 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33380; }); _t33381 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33381; }); _t33382 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_7_21_T__id)) : _t33382; }); _t33383 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_6_21_S__id)) : _t33383; });
    return false;
}
rt::Value C_S_1_21_t::m_S__21__22__2b_() {
    RT_FN("S_1_21_t.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33384 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33385 = rt::as_ptr<C_S__20_g>(_o33384); _p33385 ? _p33385->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33384, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S_1_21_t::m_S_8_21_s() {
    RT_FN("S_1_21_t.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9687])));
    return rt::NUL;
}
double C_S_1_21_t::g_S_5_22__2c_() {
    RT_FN("S_1_21_t.S_5_22__2c__get");
    return (C_S__23__21__21_::sm_S__21__2d_() / 10000000000000.0);
    return 0.0;
}
C_S_1_21_t* C_S_1_21_t::alloc_() {
    C_S_1_21_t* o = rt::make<C_S_1_21_t>();
    return o;
}
rt::Value C_S_1_21_t::mk_(rt::Value* a, int n) {
    C_S_1_21_t* o = alloc_();
    o->C_S_1_21_t::ctor_();
    return rt::VO(o);
}
bool C_S_1_21_t::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_1_21_t::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_1_21_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_1_21_t::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_1_21_t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_21_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_21_t__id)); return true;
    default: return false;
    }
}
bool C_S_1_21_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_21_t__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_21_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_22_5::ctor_() {
    RT_FN("S_1_22_5.S_1_22_5");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33386 = 346.0; this->f_S_6_21_Z = rt::touint_d(_v33386); _v33386; });
    ({ rt::Value _v33387 = rt::trv(rt::VS(g::LS[8848])); this->f_S_1i = rt::slot_string(_v33387); _v33387; });
    ({ rt::Value _v33388 = rt::trv(rt::VS(g::LS[9688])); this->f_S_7_23_ = rt::slot_string(_v33388); _v33388; });
    ({ rt::Value _v33389 = rt::VS(g::LS[8849]); this->f_S__5e__21__23_ = rt::slot_string(_v33389); _v33389; });
    ({ bool _v33390 = true; this->f_S_4_21_3 = _v33390; _v33390; });
}
bool C_S_1_22_5::m_S__20__21_3() {
    RT_FN("S_1_22_5.S__20__21_3");
    return ({ bool _t33393 = ({ bool _t33392 = ({ bool _t33391 = this->g_S__2d_6(); _t33391 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 180.0)) : _t33391; }); _t33392 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t33392; }); _t33393 ? (bool)((C_S__23__21__21_::sm_S__5e__21__26_() >= 15.0)) : _t33393; });
    return false;
}
rt::Value C_S_1_22_5::m_S_8_21_s() {
    RT_FN("S_1_22_5.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 180.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9689])));
    return rt::NUL;
}
double C_S_1_22_5::g_S_5_22__2c_() {
    RT_FN("S_1_22_5.S_5_22__2c__get");
    return 0.1;
    return 0.0;
}
C_S_1_22_5* C_S_1_22_5::alloc_() {
    C_S_1_22_5* o = rt::make<C_S_1_22_5>();
    return o;
}
rt::Value C_S_1_22_5::mk_(rt::Value* a, int n) {
    C_S_1_22_5* o = alloc_();
    o->C_S_1_22_5::ctor_();
    return rt::VO(o);
}
bool C_S_1_22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_1_22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_1_22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_1_22_5::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_1_22_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22_5__id)); return true;
    default: return false;
    }
}
bool C_S_1_22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_22__3d_::ctor_() {
    RT_FN("S_1_22__3d_.S_1_22__3d_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33394 = 363.0; this->f_S_6_21_Z = rt::touint_d(_v33394); _v33394; });
    ({ rt::Value _v33395 = rt::trv(rt::VS(g::LS[9690])); this->f_S_1i = rt::slot_string(_v33395); _v33395; });
    ({ rt::Value _v33396 = rt::trv(rt::VS(g::LS[9691])); this->f_S_7_23_ = rt::slot_string(_v33396); _v33396; });
    ({ rt::Value _v33397 = rt::VS(g::LS[9692]); this->f_S__5e__21__23_ = rt::slot_string(_v33397); _v33397; });
    ({ bool _v33398 = true; this->f_S_4_21_3 = _v33398; _v33398; });
    ({ double _v33399 = 10000.0; this->f_S__3f__22_M = _v33399; _v33399; });
}
bool C_S_1_22__3d_::m_S__20__21_3() {
    RT_FN("S_1_22__3d_.S__20__21_3");
    return ({ bool _t33403 = ({ bool _t33402 = ({ bool _t33401 = ({ bool _t33400 = this->g_S__2d_6(); _t33400 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0)) : _t33400; }); _t33401 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t33401; }); _t33402 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 225.0)) : _t33402; }); _t33403 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33403; });
    return false;
}
rt::Value C_S_1_22__3d_::m_S__21__22__2b_() {
    RT_FN("S_1_22__3d_.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33404 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33405 = rt::as_ptr<C_S__20_g>(_o33404); _p33405 ? _p33405->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 6.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o33404, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 6.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S_1_22__3d_::m_S_8_21_s() {
    RT_FN("S_1_22__3d_.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9693])));
    return rt::NUL;
}
double C_S_1_22__3d_::g_S_5_22__2c_() {
    RT_FN("S_1_22__3d_.S_5_22__2c__get");
    return (C_S__26_c::sm_S_7i(g::SV.C_S__5e_x__id, false, true, true) / 100000.0);
    return 0.0;
}
C_S_1_22__3d_* C_S_1_22__3d_::alloc_() {
    C_S_1_22__3d_* o = rt::make<C_S_1_22__3d_>();
    return o;
}
rt::Value C_S_1_22__3d_::mk_(rt::Value* a, int n) {
    C_S_1_22__3d_* o = alloc_();
    o->C_S_1_22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S_1_22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_1_22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_1_22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_1_22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_1_22__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22__3d___id)); return true;
    default: return false;
    }
}
bool C_S_1_22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1S::ctor_() {
    RT_FN("S_1S.S_1S");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33406 = 211.0; this->f_S_6_21_Z = rt::touint_d(_v33406); _v33406; });
    ({ rt::Value _v33407 = rt::trv(rt::VS(g::LS[9694])); this->f_S_1i = rt::slot_string(_v33407); _v33407; });
    ({ rt::Value _v33408 = rt::trv(rt::VS(g::LS[9695])); this->f_S_7_23_ = rt::slot_string(_v33408); _v33408; });
    ({ rt::Value _v33409 = rt::VS(g::LS[9696]); this->f_S__5e__21__23_ = rt::slot_string(_v33409); _v33409; });
    ({ double _v33410 = 1500.0; this->f_S__3f__22_M = _v33410; _v33410; });
}
rt::Value C_S_1S::m_S__21__22__2b_() {
    RT_FN("S_1S.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33411 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33412 = rt::as_ptr<C_S__20_g>(_o33411); _p33412 ? _p33412->m_S__26__2b_(rt::toint_d(932.0), rt::toint_d(0.0)) : rt::dcallv(_o33411, NM_S__26__2b_, rt::V(932.0), rt::V(0.0)); }));
    return rt::NUL;
}
bool C_S_1S::m_S__20__21_3() {
    RT_FN("S_1S.S__20__21_3");
    return ({ bool _t33414 = ({ bool _t33413 = this->g_S__2d_6(); _t33413 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33413; }); _t33414 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 42.0)) : _t33414; });
    return false;
}
rt::Value C_S_1S::m_S_8_21_s() {
    RT_FN("S_1S.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 42.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9697])));
    return rt::NUL;
}
double C_S_1S::g_S_5_22__2c_() {
    RT_FN("S_1S.S_5_22__2c__get");
    return 2.0;
    return 0.0;
}
bool C_S_1S::g_S__27__22_Q() {
    RT_FN("S_1S.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 42.0);
    return false;
}
C_S_1S* C_S_1S::alloc_() {
    C_S_1S* o = rt::make<C_S_1S>();
    return o;
}
rt::Value C_S_1S::mk_(rt::Value* a, int n) {
    C_S_1S* o = alloc_();
    o->C_S_1S::ctor_();
    return rt::VO(o);
}
bool C_S_1S::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_1S::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_1S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_1S::dmeth(int id) {
    switch (id) {
    case NM_S__21__22__2b_: return true;
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_1S::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1S::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1S__id)); return true;
    default: return false;
    }
}
bool C_S_1S::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1S__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_21_H::ctor_() {
    RT_FN("S_2_21_H.S_2_21_H");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33415 = 120.0; this->f_S_6_21_Z = rt::touint_d(_v33415); _v33415; });
    ({ rt::Value _v33416 = rt::trv(rt::VS(g::LS[9698])); this->f_S_1i = rt::slot_string(_v33416); _v33416; });
    ({ rt::Value _v33417 = rt::trv(rt::VS(g::LS[9699])); this->f_S_7_23_ = rt::slot_string(_v33417); _v33417; });
    ({ rt::Value _v33418 = rt::VS(g::LS[9700]); this->f_S__5e__21__23_ = rt::slot_string(_v33418); _v33418; });
    ({ bool _v33419 = true; this->f_S_4_21_3 = _v33419; _v33419; });
}
bool C_S_2_21_H::m_S__20__21_3() {
    RT_FN("S_2_21_H.S__20__21_3");
    return this->g_S__2d_6();
    return false;
}
rt::Value C_S_2_21_H::m_S_8_21_s() {
    RT_FN("S_2_21_H.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9701])));
    return rt::NUL;
}
double C_S_2_21_H::g_S_5_22__2c_() {
    RT_FN("S_2_21_H.S_5_22__2c__get");
    return (C_S_8G::sg_S_1_21_5() / 50.0);
    return 0.0;
}
C_S_2_21_H* C_S_2_21_H::alloc_() {
    C_S_2_21_H* o = rt::make<C_S_2_21_H>();
    return o;
}
rt::Value C_S_2_21_H::mk_(rt::Value* a, int n) {
    C_S_2_21_H* o = alloc_();
    o->C_S_2_21_H::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_2_21_H::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_2_21_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_2_21_H::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_2_21_H::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_H__id)); return true;
    default: return false;
    }
}
bool C_S_2_21_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_H__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_21_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_22_5::ctor_() {
    RT_FN("S_2_22_5.S_2_22_5");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33420 = 350.0; this->f_S_6_21_Z = rt::touint_d(_v33420); _v33420; });
    ({ rt::Value _v33421 = rt::trv(rt::VS(g::LS[8675])); this->f_S_1i = rt::slot_string(_v33421); _v33421; });
    ({ rt::Value _v33422 = rt::trv(rt::VS(g::LS[9702])); this->f_S_7_23_ = rt::slot_string(_v33422); _v33422; });
    ({ rt::Value _v33423 = rt::VS(g::LS[8676]); this->f_S__5e__21__23_ = rt::slot_string(_v33423); _v33423; });
    ({ bool _v33424 = true; this->f_S_4_21_3 = _v33424; _v33424; });
}
rt::Value C_S_2_22_5::m_S__40__22_() {
    RT_FN("S_2_22_5.S__40__22_");
    return rt::slot_string(rt::add(rt::add(this->f_S_7_23_, rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9613]), C_S__26_c::sm_S_8_21_Z(C_S__20__22_5::sm_S__2b__22_L(C_S_8G::sm_S__21__21_H(g::SV.C_S__2c__22_4__id)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, 0.0))));
    return rt::NUL;
}
bool C_S_2_22_5::m_S__20__21_3() {
    RT_FN("S_2_22_5.S__20__21_3");
    return ({ bool _t33427 = ({ bool _t33426 = ({ bool _t33425 = this->g_S__2d_6(); _t33425 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 180.0)) : _t33425; }); _t33426 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) : _t33426; }); _t33427 ? (bool)((((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d(0.0), true))) >= 5000.0)) : _t33427; });
    return false;
}
rt::Value C_S_2_22_5::m_S_8_21_s() {
    RT_FN("S_2_22_5.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 180.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9703])));
    return rt::NUL;
}
double C_S_2_22_5::g_S_5_22__2c_() {
    RT_FN("S_2_22_5.S_5_22__2c__get");
    return (rt::m_pow((0.5 * rt::m_log((1.0 + C_S__26_c::sm_S_3_22__26_(true, false, true)))), 3.0) / 50000.0);
    return 0.0;
}
C_S_2_22_5* C_S_2_22_5::alloc_() {
    C_S_2_22_5* o = rt::make<C_S_2_22_5>();
    return o;
}
rt::Value C_S_2_22_5::mk_(rt::Value* a, int n) {
    C_S_2_22_5* o = alloc_();
    o->C_S_2_22_5::ctor_();
    return rt::VO(o);
}
bool C_S_2_22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_2_22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_2_22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_2_22_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_2_22_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_22_5__id)); return true;
    default: return false;
    }
}
bool C_S_2_22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_21_v::ctor_() {
    RT_FN("S_3_21_v.S_3_21_v");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33428 = 296.0; this->f_S_6_21_Z = rt::touint_d(_v33428); _v33428; });
    ({ rt::Value _v33429 = rt::trv(rt::VS(g::LS[7676])); this->f_S_1i = rt::slot_string(_v33429); _v33429; });
    ({ rt::Value _v33430 = rt::trv(rt::VS(g::LS[9704])); this->f_S_7_23_ = rt::slot_string(_v33430); _v33430; });
    ({ rt::Value _v33431 = rt::VS(g::LS[8315]); this->f_S__5e__21__23_ = rt::slot_string(_v33431); _v33431; });
    ({ bool _v33432 = true; this->f_S_4_21_3 = _v33432; _v33432; });
}
bool C_S_3_21_v::m_S__20__21_3() {
    RT_FN("S_3_21_v.S__20__21_3");
    return ({ bool _t33435 = ({ bool _t33434 = ({ bool _t33433 = this->g_S__2d_6(); _t33433 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) : _t33433; }); _t33434 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33434; }); _t33435 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 120.0)) : _t33435; });
    return false;
}
rt::Value C_S_3_21_v::m_S_8_21_s() {
    RT_FN("S_3_21_v.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9705])));
    return rt::NUL;
}
double C_S_3_21_v::g_S_5_22__2c_() {
    RT_FN("S_3_21_v.S_5_22__2c__get");
    return ((2.0 * rt::m_pow((0.5 * rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, false, true)))), 2.0)) / 120000.0);
    return 0.0;
}
C_S_3_21_v* C_S_3_21_v::alloc_() {
    C_S_3_21_v* o = rt::make<C_S_3_21_v>();
    return o;
}
rt::Value C_S_3_21_v::mk_(rt::Value* a, int n) {
    C_S_3_21_v* o = alloc_();
    o->C_S_3_21_v::ctor_();
    return rt::VO(o);
}
bool C_S_3_21_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_3_21_v::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_3_21_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_3_21_v::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_3_21_v::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_21_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_21_v__id)); return true;
    default: return false;
    }
}
bool C_S_3_21_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_21_v__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_21_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_22__20_::ctor_() {
    RT_FN("S_3_22__20_.S_3_22__20_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33436 = 304.0; this->f_S_6_21_Z = rt::touint_d(_v33436); _v33436; });
    ({ rt::Value _v33437 = rt::trv(rt::VS(g::LS[9706])); this->f_S_1i = rt::slot_string(_v33437); _v33437; });
    ({ rt::Value _v33438 = rt::trv(rt::VS(g::LS[9525])); this->f_S_7_23_ = rt::slot_string(_v33438); _v33438; });
    ({ rt::Value _v33439 = rt::VS(g::LS[9707]); this->f_S__5e__21__23_ = rt::slot_string(_v33439); _v33439; });
    ({ double _v33440 = 5000.0; this->f_S__3f__22_M = _v33440; _v33440; });
}
bool C_S_3_22__20_::m_S__20__21_3() {
    RT_FN("S_3_22__20_.S__20__21_3");
    return ({ bool _t33445 = ({ bool _t33444 = ({ bool _t33443 = ({ bool _t33442 = ({ bool _t33441 = this->g_S__2d_6(); _t33441 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33441; }); _t33442 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t33442; }); _t33443 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)) : _t33443; }); _t33444 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33444; }); _t33445 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t33445; });
    return false;
}
rt::Value C_S_3_22__20_::m_S_8_21_s() {
    RT_FN("S_3_22__20_.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 125.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9708])));
    return rt::NUL;
}
double C_S_3_22__20_::g_S_5_22__2c_() {
    RT_FN("S_3_22__20_.S_5_22__2c__get");
    return (C_S__23__21__21_::sm_S__40__21__3f_() / 50000000.0);
    return 0.0;
}
bool C_S_3_22__20_::g_S__27__22_Q() {
    RT_FN("S_3_22__20_.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 125.0);
    return false;
}
C_S_3_22__20_* C_S_3_22__20_::alloc_() {
    C_S_3_22__20_* o = rt::make<C_S_3_22__20_>();
    return o;
}
rt::Value C_S_3_22__20_::mk_(rt::Value* a, int n) {
    C_S_3_22__20_* o = alloc_();
    o->C_S_3_22__20_::ctor_();
    return rt::VO(o);
}
bool C_S_3_22__20_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_3_22__20_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_3_22__20_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_3_22__20_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_3_22__20_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_22__20_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_22__20___id)); return true;
    default: return false;
    }
}
bool C_S_3_22__20_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_22__20___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_22__20_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_22__3e_::ctor_() {
    RT_FN("S_3_22__3e_.S_3_22__3e_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33446 = 367.0; this->f_S_6_21_Z = rt::touint_d(_v33446); _v33446; });
    ({ rt::Value _v33447 = rt::trv(rt::VS(g::LS[9709])); this->f_S_1i = rt::slot_string(_v33447); _v33447; });
    ({ rt::Value _v33448 = rt::trv(rt::VS(g::LS[9710])); this->f_S_7_23_ = rt::slot_string(_v33448); _v33448; });
    ({ rt::Value _v33449 = rt::VS(g::LS[9711]); this->f_S__5e__21__23_ = rt::slot_string(_v33449); _v33449; });
    ({ bool _v33450 = true; this->f_S_4_21_3 = _v33450; _v33450; });
    ({ double _v33451 = 10000.0; this->f_S__3f__22_M = _v33451; _v33451; });
}
bool C_S_3_22__3e_::m_S__20__21_3() {
    RT_FN("S_3_22__3e_.S__20__21_3");
    return ({ bool _t33455 = ({ bool _t33454 = ({ bool _t33453 = ({ bool _t33452 = this->g_S__2d_6(); _t33452 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 7.0)) : _t33452; }); _t33453 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t33453; }); _t33454 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 225.0)) : _t33454; }); _t33455 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33455; });
    return false;
}
rt::Value C_S_3_22__3e_::m_S__21__22__2b_() {
    RT_FN("S_3_22__3e_.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33456 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33457 = rt::as_ptr<C_S__20_g>(_o33456); _p33457 ? _p33457->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 7.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o33456, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 7.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S_3_22__3e_::m_S_8_21_s() {
    RT_FN("S_3_22__3e_.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9712])));
    return rt::NUL;
}
double C_S_3_22__3e_::g_S_5_22__2c_() {
    RT_FN("S_3_22__3e_.S_5_22__2c__get");
    return ((0.5 * rt::m_log((1.0 + rt::m_max2(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 133.0)), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 133.0)))))) / 8000.0);
    return 0.0;
}
C_S_3_22__3e_* C_S_3_22__3e_::alloc_() {
    C_S_3_22__3e_* o = rt::make<C_S_3_22__3e_>();
    return o;
}
rt::Value C_S_3_22__3e_::mk_(rt::Value* a, int n) {
    C_S_3_22__3e_* o = alloc_();
    o->C_S_3_22__3e_::ctor_();
    return rt::VO(o);
}
bool C_S_3_22__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_3_22__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_3_22__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_3_22__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_3_22__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_22__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_22__3e___id)); return true;
    default: return false;
    }
}
bool C_S_3_22__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_22__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_22__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_22_5::ctor_() {
    RT_FN("S_3_22_5.S_3_22_5");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33458 = 349.0; this->f_S_6_21_Z = rt::touint_d(_v33458); _v33458; });
    ({ rt::Value _v33459 = rt::trv(rt::VS(g::LS[8522])); this->f_S_1i = rt::slot_string(_v33459); _v33459; });
    ({ rt::Value _v33460 = rt::trv(rt::VS(g::LS[9713])); this->f_S_7_23_ = rt::slot_string(_v33460); _v33460; });
    ({ rt::Value _v33461 = rt::VS(g::LS[8523]); this->f_S__5e__21__23_ = rt::slot_string(_v33461); _v33461; });
    ({ bool _v33462 = true; this->f_S_4_21_3 = _v33462; _v33462; });
}
rt::Value C_S_3_22_5::m_S__40__22_() {
    RT_FN("S_3_22_5.S__40__22_");
    return rt::slot_string(rt::add(rt::add(this->f_S_7_23_, rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9613]), C_S__26_c::sm_S_8_21_Z(C_S__20__22_5::sm_S__2b__22_L(C_S_8G::sm_S__21__21_H(g::SV.C_S__3c__22_5__id)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, 1.0))));
    return rt::NUL;
}
bool C_S_3_22_5::m_S__20__21_3() {
    RT_FN("S_3_22_5.S__20__21_3");
    return ({ bool _t33465 = ({ bool _t33464 = ({ bool _t33463 = this->g_S__2d_6(); _t33463 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 180.0)) : _t33463; }); _t33464 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t33464; }); _t33465 ? (bool)((((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d(1.0), true))) >= 5000.0)) : _t33465; });
    return false;
}
rt::Value C_S_3_22_5::m_S_8_21_s() {
    RT_FN("S_3_22_5.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 180.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9714])));
    return rt::NUL;
}
double C_S_3_22_5::g_S_5_22__2c_() {
    RT_FN("S_3_22_5.S_5_22__2c__get");
    return (rt::m_pow((0.5 * rt::m_log(rt::tonum(rt::add(rt::V(1.0), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0))))), 3.0) / 10000.0);
    return 0.0;
}
C_S_3_22_5* C_S_3_22_5::alloc_() {
    C_S_3_22_5* o = rt::make<C_S_3_22_5>();
    return o;
}
rt::Value C_S_3_22_5::mk_(rt::Value* a, int n) {
    C_S_3_22_5* o = alloc_();
    o->C_S_3_22_5::ctor_();
    return rt::VO(o);
}
bool C_S_3_22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_3_22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_3_22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_3_22_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_3_22_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_22_5__id)); return true;
    default: return false;
    }
}
bool C_S_3_22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3I::ctor_() {
    RT_FN("S_3I.S_3I");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33466 = 237.0; this->f_S_6_21_Z = rt::touint_d(_v33466); _v33466; });
    ({ rt::Value _v33467 = rt::trv(rt::VS(g::LS[8334])); this->f_S_1i = rt::slot_string(_v33467); _v33467; });
    ({ rt::Value _v33468 = rt::trv(rt::VS(g::LS[9715])); this->f_S_7_23_ = rt::slot_string(_v33468); _v33468; });
    ({ rt::Value _v33469 = rt::VS(g::LS[8335]); this->f_S__5e__21__23_ = rt::slot_string(_v33469); _v33469; });
    ({ bool _v33470 = true; this->f_S_4_21_3 = _v33470; _v33470; });
}
bool C_S_3I::m_S__20__21_3() {
    RT_FN("S_3I.S__20__21_3");
    return ({ bool _t33471 = this->g_S__2d_6(); _t33471 ? (bool)((C_S__26_c::sm_S__60__21__3d_(C_S__26_c::dsm_S__60__21__3d__0()) > 0.0)) : _t33471; });
    return false;
}
rt::Value C_S_3I::m_S_8_21_s() {
    RT_FN("S_3I.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9716])));
    return rt::NUL;
}
double C_S_3I::g_S_5_22__2c_() {
    RT_FN("S_3I.S_5_22__2c__get");
    return (C_S__26_c::sm_S__60__21__3d_(C_S__26_c::dsm_S__60__21__3d__0()) / 20.0);
    return 0.0;
}
C_S_3I* C_S_3I::alloc_() {
    C_S_3I* o = rt::make<C_S_3I>();
    return o;
}
rt::Value C_S_3I::mk_(rt::Value* a, int n) {
    C_S_3I* o = alloc_();
    o->C_S_3I::ctor_();
    return rt::VO(o);
}
bool C_S_3I::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_3I::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_3I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_3I::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_3I::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3I::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3I__id)); return true;
    default: return false;
    }
}
bool C_S_3I::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3I__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3g::ctor_() {
    RT_FN("S_3g.S_3g");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33472 = 145.0; this->f_S_6_21_Z = rt::touint_d(_v33472); _v33472; });
    ({ rt::Value _v33473 = rt::trv(rt::VS(g::LS[9717])); this->f_S_1i = rt::slot_string(_v33473); _v33473; });
    ({ rt::Value _v33474 = rt::trv(rt::VS(g::LS[9718])); this->f_S_7_23_ = rt::slot_string(_v33474); _v33474; });
    ({ rt::Value _v33475 = rt::VS(g::LS[9719]); this->f_S__5e__21__23_ = rt::slot_string(_v33475); _v33475; });
    ({ bool _v33476 = true; this->f_S_4_21_3 = _v33476; _v33476; });
}
bool C_S_3g::m_S__20__21_3() {
    RT_FN("S_3g.S__20__21_3");
    return ({ bool _t33478 = this->g_S__2d_6(); _t33478 ? (bool)((({ bool _t33477 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0); _t33477 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33477; }))) : _t33478; });
    return false;
}
rt::Value C_S_3g::m_S_8_21_s() {
    RT_FN("S_3g.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9720])));
    return rt::NUL;
}
double C_S_3g::g_S_5_22__2c_() {
    RT_FN("S_3g.S_5_22__2c__get");
    return (C_S_8G::sm_S__25_Z(g::SV.C_S_2X__id, C_S_8G::dsm_S__25_Z_1()) / 2000.0);
    return 0.0;
}
C_S_3g* C_S_3g::alloc_() {
    C_S_3g* o = rt::make<C_S_3g>();
    return o;
}
rt::Value C_S_3g::mk_(rt::Value* a, int n) {
    C_S_3g* o = alloc_();
    o->C_S_3g::ctor_();
    return rt::VO(o);
}
bool C_S_3g::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_3g::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_3g::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_3g::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_3g::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3g::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3g__id)); return true;
    default: return false;
    }
}
bool C_S_3g::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3g__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3g::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4Q::ctor_() {
    RT_FN("S_4Q.S_4Q");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33479 = 138.0; this->f_S_6_21_Z = rt::touint_d(_v33479); _v33479; });
    ({ rt::Value _v33480 = rt::trv(rt::VS(g::LS[9721])); this->f_S_1i = rt::slot_string(_v33480); _v33480; });
    ({ rt::Value _v33481 = rt::trv(rt::VS(g::LS[9722])); this->f_S_7_23_ = rt::slot_string(_v33481); _v33481; });
    ({ rt::Value _v33482 = rt::VS(g::LS[9723]); this->f_S__5e__21__23_ = rt::slot_string(_v33482); _v33482; });
    ({ bool _v33483 = true; this->f_S_4_21_3 = _v33483; _v33483; });
}
bool C_S_4Q::m_S__20__21_3() {
    bool l_A__loc1_ = false;
    rt::Value l_A__loc3_ = rt::UNDEF;
    int32_t l_A__loc4_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S_4Q.S__20__21_3");
    (l_A__loc1_ = false);
    (l_A__loc3_ = rt::V(0.0));
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::NUL);
    if ((this->g_S__2d_6() && ((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 7.0) && (((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))))) {
        (l_A__loc1_ = true);
        (l_A__loc3_ = rt::V((double)(rt::touint_d(0.0))));
        (l_A__loc4_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc4_)) < rt::alen(g::SV.C_S_8G__S__25__3c_))) {
            (l_A__loc2_ = rt::arr_at(g::SV.C_S_8G__S__25__3c_, ((double)(l_A__loc4_))));
            if ((!((!(((double)(({ rt::Value _o33484 = l_A__loc2_; C_S__60__21__3b_* _p33485 = rt::as_ptr<C_S__60__21__3b_>(_o33484); _p33485 ? _p33485->f_S__2c__21_Y : rt::toint(rt::dget(_o33484, NM_S__2c__21_Y)); }))) == 0.0)) && (!(((double)(({ rt::Value _o33486 = l_A__loc2_; C_S__60__21__3b_* _p33487 = rt::as_ptr<C_S__60__21__3b_>(_o33486); _p33487 ? _p33487->f_S__2c__21_Y : rt::toint(rt::dget(_o33486, NM_S__2c__21_Y)); }))) == 3.0))))) {
                if (l_A__loc1_) {
                    (l_A__loc3_ = rt::V((double)(({ rt::Value _o33488 = l_A__loc2_; C_S__60__21__3b_* _p33489 = rt::as_ptr<C_S__60__21__3b_>(_o33488); _p33489 ? _p33489->g_S__21_a() : rt::touint(rt::dget(_o33488, NM_S__21_a)); }))));
                    (l_A__loc1_ = false);
                } else if ((!rt::eq(rt::V((double)(({ rt::Value _o33490 = l_A__loc2_; C_S__60__21__3b_* _p33491 = rt::as_ptr<C_S__60__21__3b_>(_o33490); _p33491 ? _p33491->g_S__21_a() : rt::touint(rt::dget(_o33490, NM_S__21_a)); }))), l_A__loc3_))) {
                    (l_A__loc1_ = true);
                    break;
                }
            }
            (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
        }
        return (!l_A__loc1_);
    }
    return false;
    return false;
}
rt::Value C_S_4Q::m_S_8_21_s() {
    RT_FN("S_4Q.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9724])));
    return rt::NUL;
}
double C_S_4Q::g_S_5_22__2c_() {
    RT_FN("S_4Q.S_5_22__2c__get");
    return 2.0;
    return 0.0;
}
C_S_4Q* C_S_4Q::alloc_() {
    C_S_4Q* o = rt::make<C_S_4Q>();
    return o;
}
rt::Value C_S_4Q::mk_(rt::Value* a, int n) {
    C_S_4Q* o = alloc_();
    o->C_S_4Q::ctor_();
    return rt::VO(o);
}
bool C_S_4Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_4Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_4Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_4Q::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_4Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4Q__id)); return true;
    default: return false;
    }
}
bool C_S_4Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4Q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_21__3e_::ctor_() {
    RT_FN("S_5_21__3e_.S_5_21__3e_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33492 = 134.0; this->f_S_6_21_Z = rt::touint_d(_v33492); _v33492; });
    ({ rt::Value _v33493 = rt::trv(rt::VS(g::LS[9725])); this->f_S_1i = rt::slot_string(_v33493); _v33493; });
    ({ rt::Value _v33494 = rt::trv(rt::VS(g::LS[9726])); this->f_S_7_23_ = rt::slot_string(_v33494); _v33494; });
    ({ rt::Value _v33495 = rt::VS(g::LS[9727]); this->f_S__5e__21__23_ = rt::slot_string(_v33495); _v33495; });
    ({ bool _v33496 = true; this->f_S_4_21_3 = _v33496; _v33496; });
}
bool C_S_5_21__3e_::m_S__20__21_3() {
    RT_FN("S_5_21__3e_.S__20__21_3");
    return ({ bool _t33499 = ({ bool _t33498 = this->g_S__2d_6(); _t33498 ? (bool)((({ bool _t33497 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 5.0); _t33497 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33497; }))) : _t33498; }); _t33499 ? (bool)((((double)(C_S_8G::sg_S_8t())) >= 666.0)) : _t33499; });
    return false;
}
rt::Value C_S_5_21__3e_::m_S_8_21_s() {
    RT_FN("S_5_21__3e_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9728])));
    return rt::NUL;
}
double C_S_5_21__3e_::g_S_5_22__2c_() {
    RT_FN("S_5_21__3e_.S_5_22__2c__get");
    return 1.0;
    return 0.0;
}
C_S_5_21__3e_* C_S_5_21__3e_::alloc_() {
    C_S_5_21__3e_* o = rt::make<C_S_5_21__3e_>();
    return o;
}
rt::Value C_S_5_21__3e_::mk_(rt::Value* a, int n) {
    C_S_5_21__3e_* o = alloc_();
    o->C_S_5_21__3e_::ctor_();
    return rt::VO(o);
}
bool C_S_5_21__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_5_21__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_5_21__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_5_21__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_5_21__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_21__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_21__3e___id)); return true;
    default: return false;
    }
}
bool C_S_5_21__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_21__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_21__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_21_G::ctor_() {
    RT_FN("S_5_21_G.S_5_21_G");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33500 = 119.0; this->f_S_6_21_Z = rt::touint_d(_v33500); _v33500; });
    ({ rt::Value _v33501 = rt::trv(rt::VS(g::LS[390])); this->f_S_1i = rt::slot_string(_v33501); _v33501; });
    ({ rt::Value _v33502 = rt::trv(rt::VS(g::LS[9729])); this->f_S_7_23_ = rt::slot_string(_v33502); _v33502; });
    ({ rt::Value _v33503 = rt::VS(g::LS[9730]); this->f_S__5e__21__23_ = rt::slot_string(_v33503); _v33503; });
    ({ bool _v33504 = true; this->f_S_4_21_3 = _v33504; _v33504; });
}
bool C_S_5_21_G::m_S__20__21_3() {
    RT_FN("S_5_21_G.S__20__21_3");
    return ({ bool _t33505 = this->g_S__2d_6(); _t33505 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t33505; });
    return false;
}
rt::Value C_S_5_21_G::m_S_8_21_s() {
    RT_FN("S_5_21_G.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9731])));
    return rt::NUL;
}
double C_S_5_21_G::g_S_5_22__2c_() {
    RT_FN("S_5_21_G.S_5_22__2c__get");
    return (C_S_8G::sm_S__25_Z(g::SV.C_S_7A__id, C_S_8G::dsm_S__25_Z_1()) / 1000.0);
    return 0.0;
}
C_S_5_21_G* C_S_5_21_G::alloc_() {
    C_S_5_21_G* o = rt::make<C_S_5_21_G>();
    return o;
}
rt::Value C_S_5_21_G::mk_(rt::Value* a, int n) {
    C_S_5_21_G* o = alloc_();
    o->C_S_5_21_G::ctor_();
    return rt::VO(o);
}
bool C_S_5_21_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_5_21_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_5_21_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_5_21_G::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_5_21_G::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_21_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_21_G__id)); return true;
    default: return false;
    }
}
bool C_S_5_21_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_21_G__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_21_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_21_m::ctor_() {
    RT_FN("S_5_21_m.S_5_21_m");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33506 = 257.0; this->f_S_6_21_Z = rt::touint_d(_v33506); _v33506; });
    ({ rt::Value _v33507 = rt::trv(rt::VS(g::LS[8322])); this->f_S_1i = rt::slot_string(_v33507); _v33507; });
    ({ rt::Value _v33508 = rt::trv(rt::VS(g::LS[9732])); this->f_S_7_23_ = rt::slot_string(_v33508); _v33508; });
    ({ rt::Value _v33509 = rt::VS(g::LS[8323]); this->f_S__5e__21__23_ = rt::slot_string(_v33509); _v33509; });
    ({ bool _v33510 = true; this->f_S_4_21_3 = _v33510; _v33510; });
}
bool C_S_5_21_m::m_S__20__21_3() {
    RT_FN("S_5_21_m.S__20__21_3");
    return ({ bool _t33511 = this->g_S__2d_6(); _t33511 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33511; });
    return false;
}
rt::Value C_S_5_21_m::m_S_8_21_s() {
    RT_FN("S_5_21_m.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9733])));
    return rt::NUL;
}
double C_S_5_21_m::g_S_5_22__2c_() {
    RT_FN("S_5_21_m.S_5_22__2c__get");
    return ((0.5 * rt::m_log((1.0 + C_S__23__21__21_::sm_S_0F(C_S__23__21__21_::dsm_S_0F_0(), C_S__23__21__21_::dsm_S_0F_1())))) / 100.0);
    return 0.0;
}
C_S_5_21_m* C_S_5_21_m::alloc_() {
    C_S_5_21_m* o = rt::make<C_S_5_21_m>();
    return o;
}
rt::Value C_S_5_21_m::mk_(rt::Value* a, int n) {
    C_S_5_21_m* o = alloc_();
    o->C_S_5_21_m::ctor_();
    return rt::VO(o);
}
bool C_S_5_21_m::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_5_21_m::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_5_21_m::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_5_21_m::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_5_21_m::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_21_m::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_21_m__id)); return true;
    default: return false;
    }
}
bool C_S_5_21_m::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_21_m__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_21_m::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_21_s::ctor_() {
    RT_FN("S_5_21_s.S_5_21_s");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33512 = 280.0; this->f_S_6_21_Z = rt::touint_d(_v33512); _v33512; });
    ({ rt::Value _v33513 = rt::trv(rt::VS(g::LS[9734])); this->f_S_1i = rt::slot_string(_v33513); _v33513; });
    ({ rt::Value _v33514 = rt::trv(rt::VS(g::LS[9735])); this->f_S_7_23_ = rt::slot_string(_v33514); _v33514; });
    ({ rt::Value _v33515 = rt::VS(g::LS[9736]); this->f_S__5e__21__23_ = rt::slot_string(_v33515); _v33515; });
    ({ bool _v33516 = true; this->f_S_4_21_3 = _v33516; _v33516; });
    ({ double _v33517 = 2000.0; this->f_S__3f__22_M = _v33517; _v33517; });
}
bool C_S_5_21_s::m_S__20__21_3() {
    RT_FN("S_5_21_s.S__20__21_3");
    return ({ bool _t33522 = ({ bool _t33521 = ({ bool _t33520 = ({ bool _t33519 = ({ bool _t33518 = this->g_S__2d_6(); _t33518 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 1.0)) : _t33518; }); _t33519 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33519; }); _t33520 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33520; }); _t33521 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__40_s__id)) : _t33521; }); _t33522 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3c__21_N__id)) : _t33522; });
    return false;
}
rt::Value C_S_5_21_s::m_S__21__22__2b_() {
    RT_FN("S_5_21_s.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33523 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33524 = rt::as_ptr<C_S__20_g>(_o33523); _p33524 ? _p33524->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33523, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S_5_21_s::m_S_8_21_s() {
    RT_FN("S_5_21_s.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9737])));
    return rt::NUL;
}
double C_S_5_21_s::g_S_5_22__2c_() {
    RT_FN("S_5_21_s.S_5_22__2c__get");
    return (rt::m_pow((3.0 * rt::tonum((rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 135.0), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 104.0))))), 4.5) / 10000.0);
    return 0.0;
}
C_S_5_21_s* C_S_5_21_s::alloc_() {
    C_S_5_21_s* o = rt::make<C_S_5_21_s>();
    return o;
}
rt::Value C_S_5_21_s::mk_(rt::Value* a, int n) {
    C_S_5_21_s* o = alloc_();
    o->C_S_5_21_s::ctor_();
    return rt::VO(o);
}
bool C_S_5_21_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_5_21_s::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_5_21_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_5_21_s::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_5_21_s::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_21_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_21_s__id)); return true;
    default: return false;
    }
}
bool C_S_5_21_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_21_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_21_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_21_x::ctor_() {
    RT_FN("S_5_21_x.S_5_21_x");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33525 = 305.0; this->f_S_6_21_Z = rt::touint_d(_v33525); _v33525; });
    ({ rt::Value _v33526 = rt::trv(rt::VS(g::LS[9738])); this->f_S_1i = rt::slot_string(_v33526); _v33526; });
    ({ rt::Value _v33527 = rt::trv(rt::VS(g::LS[9665])); this->f_S_7_23_ = rt::slot_string(_v33527); _v33527; });
    ({ rt::Value _v33528 = rt::VS(g::LS[9739]); this->f_S__5e__21__23_ = rt::slot_string(_v33528); _v33528; });
    ({ double _v33529 = 5000.0; this->f_S__3f__22_M = _v33529; _v33529; });
}
bool C_S_5_21_x::m_S__20__21_3() {
    RT_FN("S_5_21_x.S__20__21_3");
    return ({ bool _t33534 = ({ bool _t33533 = ({ bool _t33532 = ({ bool _t33531 = ({ bool _t33530 = this->g_S__2d_6(); _t33530 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33530; }); _t33531 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t33531; }); _t33532 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) : _t33532; }); _t33533 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33533; }); _t33534 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t33534; });
    return false;
}
rt::Value C_S_5_21_x::m_S_8_21_s() {
    RT_FN("S_5_21_x.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 125.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9740])));
    return rt::NUL;
}
double C_S_5_21_x::g_S_5_22__2c_() {
    RT_FN("S_5_21_x.S_5_22__2c__get");
    return ((2.0 * C_S__26_c::sm_S_0_23_(rt::toint_d((-1.0)), true)) / 10000000.0);
    return 0.0;
}
bool C_S_5_21_x::g_S__27__22_Q() {
    RT_FN("S_5_21_x.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 125.0);
    return false;
}
C_S_5_21_x* C_S_5_21_x::alloc_() {
    C_S_5_21_x* o = rt::make<C_S_5_21_x>();
    return o;
}
rt::Value C_S_5_21_x::mk_(rt::Value* a, int n) {
    C_S_5_21_x* o = alloc_();
    o->C_S_5_21_x::ctor_();
    return rt::VO(o);
}
bool C_S_5_21_x::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_5_21_x::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_5_21_x::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_5_21_x::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_5_21_x::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_21_x::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_21_x__id)); return true;
    default: return false;
    }
}
bool C_S_5_21_x::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_21_x__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_21_x::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5_21_y::ctor_() {
    RT_FN("S_5_21_y.S_5_21_y");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33535 = 308.0; this->f_S_6_21_Z = rt::touint_d(_v33535); _v33535; });
    ({ rt::Value _v33536 = rt::trv(rt::VS(g::LS[9741])); this->f_S_1i = rt::slot_string(_v33536); _v33536; });
    ({ rt::Value _v33537 = rt::trv(rt::VS(g::LS[9665])); this->f_S_7_23_ = rt::slot_string(_v33537); _v33537; });
    ({ rt::Value _v33538 = rt::VS(g::LS[9742]); this->f_S__5e__21__23_ = rt::slot_string(_v33538); _v33538; });
    ({ double _v33539 = 5000.0; this->f_S__3f__22_M = _v33539; _v33539; });
}
bool C_S_5_21_y::m_S__20__21_3() {
    RT_FN("S_5_21_y.S__20__21_3");
    return ({ bool _t33544 = ({ bool _t33543 = ({ bool _t33542 = ({ bool _t33541 = ({ bool _t33540 = this->g_S__2d_6(); _t33540 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33540; }); _t33541 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t33541; }); _t33542 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) : _t33542; }); _t33543 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33543; }); _t33544 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)) : _t33544; });
    return false;
}
rt::Value C_S_5_21_y::m_S_8_21_s() {
    RT_FN("S_5_21_y.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 125.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9743])));
    return rt::NUL;
}
double C_S_5_21_y::g_S_5_22__2c_() {
    RT_FN("S_5_21_y.S_5_22__2c__get");
    return (rt::m_pow(rt::m_log((1.0 + ({ rt::Value _o33545 = C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id); C_S_84* _p33546 = rt::as_ptr<C_S_84>(_o33545); _p33546 ? _p33546->g_S_2_2d_() : rt::tonum(rt::dget(_o33545, NM_S_2_2d_)); }))), 3.0) / 125000.0);
    return 0.0;
}
bool C_S_5_21_y::g_S__27__22_Q() {
    RT_FN("S_5_21_y.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 125.0);
    return false;
}
C_S_5_21_y* C_S_5_21_y::alloc_() {
    C_S_5_21_y* o = rt::make<C_S_5_21_y>();
    return o;
}
rt::Value C_S_5_21_y::mk_(rt::Value* a, int n) {
    C_S_5_21_y* o = alloc_();
    o->C_S_5_21_y::ctor_();
    return rt::VO(o);
}
bool C_S_5_21_y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_5_21_y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_5_21_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_5_21_y::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_5_21_y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5_21_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5_21_y__id)); return true;
    default: return false;
    }
}
bool C_S_5_21_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5_21_y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_5_21_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_21__3f_::ctor_() {
    RT_FN("S_6_21__3f_.S_6_21__3f_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33547 = 234.0; this->f_S_6_21_Z = rt::touint_d(_v33547); _v33547; });
    ({ rt::Value _v33548 = rt::trv(rt::VS(g::LS[9744])); this->f_S_1i = rt::slot_string(_v33548); _v33548; });
    ({ rt::Value _v33549 = rt::trv(rt::VS(g::LS[9745])); this->f_S_7_23_ = rt::slot_string(_v33549); _v33549; });
    ({ rt::Value _v33550 = rt::VS(g::LS[9746]); this->f_S__5e__21__23_ = rt::slot_string(_v33550); _v33550; });
    ({ bool _v33551 = true; this->f_S_4_21_3 = _v33551; _v33551; });
}
bool C_S_6_21__3f_::m_S__20__21_3() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_6_21__3f_.S__20__21_3");
    (l_A__loc1_ = rt::new_datev());
    return ({ bool _t33554 = ({ bool _t33552 = this->g_S__2d_6(); _t33552 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 16.0)) : _t33552; }); _t33554 ? (bool)((({ bool _t33553 = rt::ge(rt::dcallv(l_A__loc1_, rt::N_getHours), rt::V(18.0)); _t33553 ? (bool)(rt::le(rt::dcallv(l_A__loc1_, rt::N_getHours), rt::V(20.0))) : _t33553; }))) : _t33554; });
    return false;
}
rt::Value C_S_6_21__3f_::m_S_8_21_s() {
    RT_FN("S_6_21__3f_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9747])));
    return rt::NUL;
}
double C_S_6_21__3f_::g_S_5_22__2c_() {
    RT_FN("S_6_21__3f_.S_5_22__2c__get");
    return (C_S_8G::sg_S_1_21_5() / 10000.0);
    return 0.0;
}
C_S_6_21__3f_* C_S_6_21__3f_::alloc_() {
    C_S_6_21__3f_* o = rt::make<C_S_6_21__3f_>();
    return o;
}
rt::Value C_S_6_21__3f_::mk_(rt::Value* a, int n) {
    C_S_6_21__3f_* o = alloc_();
    o->C_S_6_21__3f_::ctor_();
    return rt::VO(o);
}
bool C_S_6_21__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_6_21__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_6_21__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_6_21__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_6_21__3f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_21__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21__3f___id)); return true;
    default: return false;
    }
}
bool C_S_6_21__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_21__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_21_S::ctor_() {
    RT_FN("S_6_21_S.S_6_21_S");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33555 = 154.0; this->f_S_6_21_Z = rt::touint_d(_v33555); _v33555; });
    ({ rt::Value _v33556 = rt::trv(rt::VS(g::LS[9748])); this->f_S_1i = rt::slot_string(_v33556); _v33556; });
    ({ rt::Value _v33557 = rt::trv(rt::VS(g::LS[9749])); this->f_S_7_23_ = rt::slot_string(_v33557); _v33557; });
    ({ rt::Value _v33558 = rt::VS(g::LS[9750]); this->f_S__5e__21__23_ = rt::slot_string(_v33558); _v33558; });
    ({ bool _v33559 = true; this->f_S_4_21_3 = _v33559; _v33559; });
}
bool C_S_6_21_S::m_S__20__21_3() {
    RT_FN("S_6_21_S.S__20__21_3");
    return ({ bool _t33560 = this->g_S__2d_6(); _t33560 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 9.0)) : _t33560; });
    return false;
}
rt::Value C_S_6_21_S::m_S_8_21_s() {
    RT_FN("S_6_21_S.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9751])));
    return rt::NUL;
}
double C_S_6_21_S::g_S_5_22__2c_() {
    RT_FN("S_6_21_S.S_5_22__2c__get");
    return (C_S_8G::sm_S__25_Z(g::SV.C_S_2_21__2b___id, C_S_8G::dsm_S__25_Z_1()) / 25000.0);
    return 0.0;
}
C_S_6_21_S* C_S_6_21_S::alloc_() {
    C_S_6_21_S* o = rt::make<C_S_6_21_S>();
    return o;
}
rt::Value C_S_6_21_S::mk_(rt::Value* a, int n) {
    C_S_6_21_S* o = alloc_();
    o->C_S_6_21_S::ctor_();
    return rt::VO(o);
}
bool C_S_6_21_S::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_6_21_S::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_6_21_S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_6_21_S::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_6_21_S::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_21_S::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21_S__id)); return true;
    default: return false;
    }
}
bool C_S_6_21_S::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21_S__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_21_S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_21_y::ctor_() {
    RT_FN("S_6_21_y.S_6_21_y");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33561 = 303.0; this->f_S_6_21_Z = rt::touint_d(_v33561); _v33561; });
    ({ rt::Value _v33562 = rt::trv(rt::VS(g::LS[9752])); this->f_S_1i = rt::slot_string(_v33562); _v33562; });
    ({ rt::Value _v33563 = rt::trv(rt::VS(g::LS[9655])); this->f_S_7_23_ = rt::slot_string(_v33563); _v33563; });
    ({ rt::Value _v33564 = rt::VS(g::LS[9753]); this->f_S__5e__21__23_ = rt::slot_string(_v33564); _v33564; });
    ({ double _v33565 = 5000.0; this->f_S__3f__22_M = _v33565; _v33565; });
}
bool C_S_6_21_y::m_S__20__21_3() {
    RT_FN("S_6_21_y.S__20__21_3");
    return ({ bool _t33570 = ({ bool _t33569 = ({ bool _t33568 = ({ bool _t33567 = ({ bool _t33566 = this->g_S__2d_6(); _t33566 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33566; }); _t33567 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t33567; }); _t33568 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) : _t33568; }); _t33569 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33569; }); _t33570 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t33570; });
    return false;
}
rt::Value C_S_6_21_y::m_S_8_21_s() {
    RT_FN("S_6_21_y.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 125.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9754])));
    return rt::NUL;
}
double C_S_6_21_y::g_S_5_22__2c_() {
    RT_FN("S_6_21_y.S_5_22__2c__get");
    return ((4.0 * rt::m_pow(rt::m_log((1.0 + C_S__26_c::sm_S__40__21__5b_(true, false, true))), 3.0)) / 50000000.0);
    return 0.0;
}
bool C_S_6_21_y::g_S__27__22_Q() {
    RT_FN("S_6_21_y.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 125.0);
    return false;
}
C_S_6_21_y* C_S_6_21_y::alloc_() {
    C_S_6_21_y* o = rt::make<C_S_6_21_y>();
    return o;
}
rt::Value C_S_6_21_y::mk_(rt::Value* a, int n) {
    C_S_6_21_y* o = alloc_();
    o->C_S_6_21_y::ctor_();
    return rt::VO(o);
}
bool C_S_6_21_y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_6_21_y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_6_21_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_6_21_y::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_6_21_y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_21_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21_y__id)); return true;
    default: return false;
    }
}
bool C_S_6_21_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21_y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_21_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_22__3b_::ctor_() {
    RT_FN("S_6_22__3b_.S_6_22__3b_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33571 = 370.0; this->f_S_6_21_Z = rt::touint_d(_v33571); _v33571; });
    ({ rt::Value _v33572 = rt::trv(rt::VS(g::LS[9755])); this->f_S_1i = rt::slot_string(_v33572); _v33572; });
    ({ rt::Value _v33573 = rt::trv(rt::VS(g::LS[9756])); this->f_S_7_23_ = rt::slot_string(_v33573); _v33573; });
    ({ rt::Value _v33574 = rt::VS(g::LS[9757]); this->f_S__5e__21__23_ = rt::slot_string(_v33574); _v33574; });
    ({ bool _v33575 = true; this->f_S_4_21_3 = _v33575; _v33575; });
    ({ double _v33576 = 10000.0; this->f_S__3f__22_M = _v33576; _v33576; });
}
bool C_S_6_22__3b_::m_S__20__21_3() {
    RT_FN("S_6_22__3b_.S__20__21_3");
    return ({ bool _t33580 = ({ bool _t33579 = ({ bool _t33578 = ({ bool _t33577 = this->g_S__2d_6(); _t33577 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0)) : _t33577; }); _t33578 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t33578; }); _t33579 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 225.0)) : _t33579; }); _t33580 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33580; });
    return false;
}
rt::Value C_S_6_22__3b_::m_S__21__22__2b_() {
    RT_FN("S_6_22__3b_.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33581 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33582 = rt::as_ptr<C_S__20_g>(_o33581); _p33582 ? _p33582->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 8.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o33581, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 8.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S_6_22__3b_::m_S_8_21_s() {
    RT_FN("S_6_22__3b_.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9758])));
    return rt::NUL;
}
double C_S_6_22__3b_::g_S_5_22__2c_() {
    RT_FN("S_6_22__3b_.S_5_22__2c__get");
    return (rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 39.0)) / 8000.0);
    return 0.0;
}
C_S_6_22__3b_* C_S_6_22__3b_::alloc_() {
    C_S_6_22__3b_* o = rt::make<C_S_6_22__3b_>();
    return o;
}
rt::Value C_S_6_22__3b_::mk_(rt::Value* a, int n) {
    C_S_6_22__3b_* o = alloc_();
    o->C_S_6_22__3b_::ctor_();
    return rt::VO(o);
}
bool C_S_6_22__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_6_22__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_6_22__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_6_22__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_6_22__3b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_22__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_22__3b___id)); return true;
    default: return false;
    }
}
bool C_S_6_22__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_22__3b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_6_22__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_21_T::ctor_() {
    RT_FN("S_7_21_T.S_7_21_T");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33583 = 136.0; this->f_S_6_21_Z = rt::touint_d(_v33583); _v33583; });
    ({ rt::Value _v33584 = rt::trv(rt::VS(g::LS[9759])); this->f_S_1i = rt::slot_string(_v33584); _v33584; });
    ({ rt::Value _v33585 = rt::trv(rt::VS(g::LS[9760])); this->f_S_7_23_ = rt::slot_string(_v33585); _v33585; });
    ({ rt::Value _v33586 = rt::VS(g::LS[9761]); this->f_S__5e__21__23_ = rt::slot_string(_v33586); _v33586; });
    ({ bool _v33587 = true; this->f_S_4_21_3 = _v33587; _v33587; });
}
bool C_S_7_21_T::m_S__20__21_3() {
    RT_FN("S_7_21_T.S__20__21_3");
    return ({ bool _t33588 = this->g_S__2d_6(); _t33588 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 9.0)) : _t33588; });
    return false;
}
rt::Value C_S_7_21_T::m_S_8_21_s() {
    RT_FN("S_7_21_T.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9762])));
    return rt::NUL;
}
double C_S_7_21_T::g_S_5_22__2c_() {
    RT_FN("S_7_21_T.S_5_22__2c__get");
    return (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0)) / 25000.0);
    return 0.0;
}
C_S_7_21_T* C_S_7_21_T::alloc_() {
    C_S_7_21_T* o = rt::make<C_S_7_21_T>();
    return o;
}
rt::Value C_S_7_21_T::mk_(rt::Value* a, int n) {
    C_S_7_21_T* o = alloc_();
    o->C_S_7_21_T::ctor_();
    return rt::VO(o);
}
bool C_S_7_21_T::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_7_21_T::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_7_21_T::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_7_21_T::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_7_21_T::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_21_T::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21_T__id)); return true;
    default: return false;
    }
}
bool C_S_7_21_T::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21_T__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_21_T::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_21_y::ctor_() {
    RT_FN("S_7_21_y.S_7_21_y");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33589 = 300.0; this->f_S_6_21_Z = rt::touint_d(_v33589); _v33589; });
    ({ rt::Value _v33590 = rt::trv(rt::VS(g::LS[9763])); this->f_S_1i = rt::slot_string(_v33590); _v33590; });
    ({ rt::Value _v33591 = rt::trv(rt::VS(g::LS[9655])); this->f_S_7_23_ = rt::slot_string(_v33591); _v33591; });
    ({ rt::Value _v33592 = rt::VS(g::LS[9764]); this->f_S__5e__21__23_ = rt::slot_string(_v33592); _v33592; });
    ({ double _v33593 = 5000.0; this->f_S__3f__22_M = _v33593; _v33593; });
}
bool C_S_7_21_y::m_S__20__21_3() {
    RT_FN("S_7_21_y.S__20__21_3");
    return ({ bool _t33598 = ({ bool _t33597 = ({ bool _t33596 = ({ bool _t33595 = ({ bool _t33594 = this->g_S__2d_6(); _t33594 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33594; }); _t33595 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t33595; }); _t33596 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) : _t33596; }); _t33597 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33597; }); _t33598 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0)) : _t33598; });
    return false;
}
rt::Value C_S_7_21_y::m_S_8_21_s() {
    RT_FN("S_7_21_y.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 125.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9765])));
    return rt::NUL;
}
double C_S_7_21_y::g_S_5_22__2c_() {
    RT_FN("S_7_21_y.S_5_22__2c__get");
    return (C_S__23__21__21_::sm_S__21__2d_() / 1000000000000.0);
    return 0.0;
}
bool C_S_7_21_y::g_S__27__22_Q() {
    RT_FN("S_7_21_y.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 125.0);
    return false;
}
C_S_7_21_y* C_S_7_21_y::alloc_() {
    C_S_7_21_y* o = rt::make<C_S_7_21_y>();
    return o;
}
rt::Value C_S_7_21_y::mk_(rt::Value* a, int n) {
    C_S_7_21_y* o = alloc_();
    o->C_S_7_21_y::ctor_();
    return rt::VO(o);
}
bool C_S_7_21_y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_7_21_y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_7_21_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_7_21_y::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_7_21_y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_21_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21_y__id)); return true;
    default: return false;
    }
}
bool C_S_7_21_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21_y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_21_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_22_5::ctor_() {
    RT_FN("S_7_22_5.S_7_22_5");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33599 = 347.0; this->f_S_6_21_Z = rt::touint_d(_v33599); _v33599; });
    ({ rt::Value _v33600 = rt::trv(rt::VS(g::LS[8997])); this->f_S_1i = rt::slot_string(_v33600); _v33600; });
    ({ rt::Value _v33601 = rt::VS(g::LS[8998]); this->f_S__5e__21__23_ = rt::slot_string(_v33601); _v33601; });
    ({ bool _v33602 = true; this->f_S_4_21_3 = _v33602; _v33602; });
    ({ rt::Value _v33603 = rt::trv(rt::VS(g::LS[9766])); this->f_S_7_23_ = rt::slot_string(_v33603); _v33603; });
}
rt::Value C_S_7_22_5::m_S__40__22_() {
    RT_FN("S_7_22_5.S__40__22_");
    return rt::slot_string(rt::add(rt::add(this->f_S_7_23_, rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9613]), C_S__26_c::sm_S_8_21_Z(C_S__20__22_5::sm_S__2b__22_L(C_S_8G::sm_S__21__21_H(g::SV.C_S_9_22_3__id)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, 4.0))));
    return rt::NUL;
}
bool C_S_7_22_5::m_S__20__21_3() {
    RT_FN("S_7_22_5.S__20__21_3");
    return ({ bool _t33606 = ({ bool _t33605 = ({ bool _t33604 = this->g_S__2d_6(); _t33604 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 180.0)) : _t33604; }); _t33605 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)) : _t33605; }); _t33606 ? (bool)((((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d(4.0), true))) >= 5000.0)) : _t33606; });
    return false;
}
rt::Value C_S_7_22_5::m_S_8_21_s() {
    RT_FN("S_7_22_5.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 180.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9767])));
    return rt::NUL;
}
double C_S_7_22_5::g_S_5_22__2c_() {
    RT_FN("S_7_22_5.S_5_22__2c__get");
    return (((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d(4.0), true))) / 1000000.0);
    return 0.0;
}
C_S_7_22_5* C_S_7_22_5::alloc_() {
    C_S_7_22_5* o = rt::make<C_S_7_22_5>();
    return o;
}
rt::Value C_S_7_22_5::mk_(rt::Value* a, int n) {
    C_S_7_22_5* o = alloc_();
    o->C_S_7_22_5::ctor_();
    return rt::VO(o);
}
bool C_S_7_22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_7_22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_7_22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_7_22_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_7_22_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22_5__id)); return true;
    default: return false;
    }
}
bool C_S_7_22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_22__3d_::ctor_() {
    RT_FN("S_7_22__3d_.S_7_22__3d_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33607 = 365.0; this->f_S_6_21_Z = rt::touint_d(_v33607); _v33607; });
    ({ rt::Value _v33608 = rt::trv(rt::VS(g::LS[9768])); this->f_S_1i = rt::slot_string(_v33608); _v33608; });
    ({ rt::Value _v33609 = rt::trv(rt::VS(g::LS[9769])); this->f_S_7_23_ = rt::slot_string(_v33609); _v33609; });
    ({ rt::Value _v33610 = rt::VS(g::LS[9770]); this->f_S__5e__21__23_ = rt::slot_string(_v33610); _v33610; });
    ({ bool _v33611 = true; this->f_S_4_21_3 = _v33611; _v33611; });
    ({ double _v33612 = 10000.0; this->f_S__3f__22_M = _v33612; _v33612; });
}
bool C_S_7_22__3d_::m_S__20__21_3() {
    RT_FN("S_7_22__3d_.S__20__21_3");
    return ({ bool _t33616 = ({ bool _t33615 = ({ bool _t33614 = ({ bool _t33613 = this->g_S__2d_6(); _t33613 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 2.0)) : _t33613; }); _t33614 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t33614; }); _t33615 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 225.0)) : _t33615; }); _t33616 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33616; });
    return false;
}
rt::Value C_S_7_22__3d_::m_S__21__22__2b_() {
    RT_FN("S_7_22__3d_.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33617 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33618 = rt::as_ptr<C_S__20_g>(_o33617); _p33618 ? _p33618->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 2.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o33617, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 2.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S_7_22__3d_::m_S_8_21_s() {
    RT_FN("S_7_22__3d_.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9771])));
    return rt::NUL;
}
double C_S_7_22__3d_::g_S_5_22__2c_() {
    RT_FN("S_7_22__3d_.S_5_22__2c__get");
    return (((double)(C_S__26_c::sm_S__3f__26_(true))) / 20000.0);
    return 0.0;
}
C_S_7_22__3d_* C_S_7_22__3d_::alloc_() {
    C_S_7_22__3d_* o = rt::make<C_S_7_22__3d_>();
    return o;
}
rt::Value C_S_7_22__3d_::mk_(rt::Value* a, int n) {
    C_S_7_22__3d_* o = alloc_();
    o->C_S_7_22__3d_::ctor_();
    return rt::VO(o);
}
bool C_S_7_22__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_7_22__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_7_22__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_7_22__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_7_22__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22__3d___id)); return true;
    default: return false;
    }
}
bool C_S_7_22__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_22_D::ctor_() {
    RT_FN("S_7_22_D.S_7_22_D");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33619 = 369.0; this->f_S_6_21_Z = rt::touint_d(_v33619); _v33619; });
    ({ rt::Value _v33620 = rt::trv(rt::VS(g::LS[9772])); this->f_S_1i = rt::slot_string(_v33620); _v33620; });
    ({ rt::Value _v33621 = rt::trv(rt::VS(g::LS[9773])); this->f_S_7_23_ = rt::slot_string(_v33621); _v33621; });
    ({ rt::Value _v33622 = rt::VS(g::LS[9774]); this->f_S__5e__21__23_ = rt::slot_string(_v33622); _v33622; });
    ({ bool _v33623 = true; this->f_S_4_21_3 = _v33623; _v33623; });
    ({ double _v33624 = 10000.0; this->f_S__3f__22_M = _v33624; _v33624; });
}
bool C_S_7_22_D::m_S__20__21_3() {
    RT_FN("S_7_22_D.S__20__21_3");
    return ({ bool _t33628 = ({ bool _t33627 = ({ bool _t33626 = ({ bool _t33625 = this->g_S__2d_6(); _t33625 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 1.0)) : _t33625; }); _t33626 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t33626; }); _t33627 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 225.0)) : _t33627; }); _t33628 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33628; });
    return false;
}
rt::Value C_S_7_22_D::m_S__21__22__2b_() {
    RT_FN("S_7_22_D.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33629 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33630 = rt::as_ptr<C_S__20_g>(_o33629); _p33630 ? _p33630->m_S__2d__25_(rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 1.0)), rt::trv(rt::VS(g::LS[9499])), C_S__20_g::dm_S__2d__25__2(), C_S__20_g::dm_S__2d__25__3(), C_S__20_g::dm_S__2d__25__4(), C_S__20_g::dm_S__2d__25__5(), C_S__20_g::dm_S__2d__25__6(), C_S__20_g::dm_S__2d__25__7(), C_S__20_g::dm_S__2d__25__8(), C_S__20_g::dm_S__2d__25__9(), C_S__20_g::dm_S__2d__25__10(), C_S__20_g::dm_S__2d__25__11(), C_S__20_g::dm_S__2d__25__12(), C_S__20_g::dm_S__2d__25__13(), C_S__20_g::dm_S__2d__25__14()) : rt::dcallv(_o33629, NM_S__2d__25_, rt::trv(rt::VS(g::LS[9498]), rt::arr_at(g::SV.C_S__2d_D__S_45, 1.0)), rt::trv(rt::VS(g::LS[9499]))); }));
    return rt::NUL;
}
rt::Value C_S_7_22_D::m_S_8_21_s() {
    RT_FN("S_7_22_D.S_8_21_s");
    if ((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9775])));
    return rt::NUL;
}
double C_S_7_22_D::g_S_5_22__2c_() {
    RT_FN("S_7_22_D.S_5_22__2c__get");
    return (rt::m_log((1.0 + C_S__23__21__21_::sm_S_0F(C_S__23__21__21_::dsm_S_0F_0(), C_S__23__21__21_::dsm_S_0F_1()))) / 8000.0);
    return 0.0;
}
C_S_7_22_D* C_S_7_22_D::alloc_() {
    C_S_7_22_D* o = rt::make<C_S_7_22_D>();
    return o;
}
rt::Value C_S_7_22_D::mk_(rt::Value* a, int n) {
    C_S_7_22_D* o = alloc_();
    o->C_S_7_22_D::ctor_();
    return rt::VO(o);
}
bool C_S_7_22_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_7_22_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_7_22_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_7_22_D::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_7_22_D::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22_D__id)); return true;
    default: return false;
    }
}
bool C_S_7_22_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22_D__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_22_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7Q::ctor_() {
    RT_FN("S_7Q.S_7Q");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33631 = 179.0; this->f_S_6_21_Z = rt::touint_d(_v33631); _v33631; });
    ({ rt::Value _v33632 = rt::trv(rt::VS(g::LS[8306])); this->f_S_1i = rt::slot_string(_v33632); _v33632; });
    ({ rt::Value _v33633 = rt::trv(rt::VS(g::LS[9776])); this->f_S_7_23_ = rt::slot_string(_v33633); _v33633; });
    ({ rt::Value _v33634 = rt::VS(g::LS[8307]); this->f_S__5e__21__23_ = rt::slot_string(_v33634); _v33634; });
    ({ bool _v33635 = true; this->f_S_4_21_3 = _v33635; _v33635; });
}
bool C_S_7Q::m_S__20__21_3() {
    RT_FN("S_7Q.S__20__21_3");
    return ({ bool _t33637 = ({ bool _t33636 = this->g_S__2d_6(); _t33636 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 16.0)) : _t33636; }); _t33637 ? (bool)(rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(300.0))) : _t33637; });
    return false;
}
rt::Value C_S_7Q::m_S_8_21_s() {
    RT_FN("S_7Q.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9777])));
    return rt::NUL;
}
double C_S_7Q::g_S_5_22__2c_() {
    RT_FN("S_7Q.S_5_22__2c__get");
    return 20.0;
    return 0.0;
}
C_S_7Q* C_S_7Q::alloc_() {
    C_S_7Q* o = rt::make<C_S_7Q>();
    return o;
}
rt::Value C_S_7Q::mk_(rt::Value* a, int n) {
    C_S_7Q* o = alloc_();
    o->C_S_7Q::ctor_();
    return rt::VO(o);
}
bool C_S_7Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_7Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_7Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_7Q::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_7Q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7Q__id)); return true;
    default: return false;
    }
}
bool C_S_7Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7Q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_21__60_::ctor_() {
    RT_FN("S_8_21__60_.S_8_21__60_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33638 = 131.0; this->f_S_6_21_Z = rt::touint_d(_v33638); _v33638; });
    ({ rt::Value _v33639 = rt::trv(rt::VS(g::LS[9778])); this->f_S_1i = rt::slot_string(_v33639); _v33639; });
    ({ rt::Value _v33640 = rt::trv(rt::VS(g::LS[9779])); this->f_S_7_23_ = rt::slot_string(_v33640); _v33640; });
    ({ rt::Value _v33641 = rt::VS(g::LS[9780]); this->f_S__5e__21__23_ = rt::slot_string(_v33641); _v33641; });
    ({ bool _v33642 = true; this->f_S_4_21_3 = _v33642; _v33642; });
}
bool C_S_8_21__60_::m_S__20__21_3() {
    RT_FN("S_8_21__60_.S__20__21_3");
    return ({ bool _t33644 = ({ bool _t33643 = this->g_S__2d_6(); _t33643 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t33643; }); _t33644 ? (bool)(rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 49.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 49.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 49.0)), rt::V(100.0))) : _t33644; });
    return false;
}
rt::Value C_S_8_21__60_::m_S_8_21_s() {
    RT_FN("S_8_21__60_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9781])));
    return rt::NUL;
}
double C_S_8_21__60_::g_S_5_22__2c_() {
    RT_FN("S_8_21__60_.S_5_22__2c__get");
    return (rt::tonum((rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 61.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 61.0)), rt::arr_at(g::SV.C_S_8G__S__40_w, 61.0)))) / 60000.0);
    return 0.0;
}
C_S_8_21__60_* C_S_8_21__60_::alloc_() {
    C_S_8_21__60_* o = rt::make<C_S_8_21__60_>();
    return o;
}
rt::Value C_S_8_21__60_::mk_(rt::Value* a, int n) {
    C_S_8_21__60_* o = alloc_();
    o->C_S_8_21__60_::ctor_();
    return rt::VO(o);
}
bool C_S_8_21__60_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_8_21__60_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_8_21__60_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_8_21__60_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_8_21__60_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21__60_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21__60___id)); return true;
    default: return false;
    }
}
bool C_S_8_21__60_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21__60___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_21__60_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_21_w::ctor_() {
    RT_FN("S_8_21_w.S_8_21_w");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33645 = 295.0; this->f_S_6_21_Z = rt::touint_d(_v33645); _v33645; });
    ({ rt::Value _v33646 = rt::trv(rt::VS(g::LS[7675])); this->f_S_1i = rt::slot_string(_v33646); _v33646; });
    ({ rt::Value _v33647 = rt::trv(rt::VS(g::LS[9782])); this->f_S_7_23_ = rt::slot_string(_v33647); _v33647; });
    ({ rt::Value _v33648 = rt::VS(g::LS[8304]); this->f_S__5e__21__23_ = rt::slot_string(_v33648); _v33648; });
    ({ bool _v33649 = true; this->f_S_4_21_3 = _v33649; _v33649; });
}
bool C_S_8_21_w::m_S__20__21_3() {
    RT_FN("S_8_21_w.S__20__21_3");
    return ({ bool _t33652 = ({ bool _t33651 = ({ bool _t33650 = this->g_S__2d_6(); _t33650 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 5.0)) : _t33650; }); _t33651 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33651; }); _t33652 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 120.0)) : _t33652; });
    return false;
}
rt::Value C_S_8_21_w::m_S_8_21_s() {
    RT_FN("S_8_21_w.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9783])));
    return rt::NUL;
}
double C_S_8_21_w::g_S_5_22__2c_() {
    RT_FN("S_8_21_w.S_5_22__2c__get");
    return (rt::m_minv(rt::V(C_S__26_c::sm_S_7i(g::SV.C_S__27_K__id, true, false, true)), rt::V(C_S__26_c::sm_S_7i(g::SV.C_S_8_3e___id, true, false, true)), rt::V(C_S__26_c::sm_S_7i(g::SV.C_S__25__21_J__id, true, false, true))) / 6480000.0);
    return 0.0;
}
C_S_8_21_w* C_S_8_21_w::alloc_() {
    C_S_8_21_w* o = rt::make<C_S_8_21_w>();
    return o;
}
rt::Value C_S_8_21_w::mk_(rt::Value* a, int n) {
    C_S_8_21_w* o = alloc_();
    o->C_S_8_21_w::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_w::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_8_21_w::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_8_21_w::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_8_21_w::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_8_21_w::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21_w::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21_w__id)); return true;
    default: return false;
    }
}
bool C_S_8_21_w::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21_w__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_21_w::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_21_8::ctor_() {
    RT_FN("S_9_21_8.S_9_21_8");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33653 = 133.0; this->f_S_6_21_Z = rt::touint_d(_v33653); _v33653; });
    ({ rt::Value _v33654 = rt::trv(rt::VS(g::LS[9784])); this->f_S_1i = rt::slot_string(_v33654); _v33654; });
    ({ rt::Value _v33655 = rt::trv(rt::VS(g::LS[9785])); this->f_S_7_23_ = rt::slot_string(_v33655); _v33655; });
    ({ rt::Value _v33656 = rt::VS(g::LS[9786]); this->f_S__5e__21__23_ = rt::slot_string(_v33656); _v33656; });
    ({ bool _v33657 = true; this->f_S_4_21_3 = _v33657; _v33657; });
}
bool C_S_9_21_8::m_S__20__21_3() {
    RT_FN("S_9_21_8.S__20__21_3");
    return ({ bool _t33659 = ({ bool _t33658 = this->g_S__2d_6(); _t33658 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)) : _t33658; }); _t33659 ? (bool)(rt::eq(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::V(0.0))) : _t33659; });
    return false;
}
rt::Value C_S_9_21_8::m_S_8_21_s() {
    RT_FN("S_9_21_8.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9787])));
    return rt::NUL;
}
double C_S_9_21_8::g_S_5_22__2c_() {
    RT_FN("S_9_21_8.S_5_22__2c__get");
    return 2.0;
    return 0.0;
}
C_S_9_21_8* C_S_9_21_8::alloc_() {
    C_S_9_21_8* o = rt::make<C_S_9_21_8>();
    return o;
}
rt::Value C_S_9_21_8::mk_(rt::Value* a, int n) {
    C_S_9_21_8* o = alloc_();
    o->C_S_9_21_8::ctor_();
    return rt::VO(o);
}
bool C_S_9_21_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_9_21_8::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_9_21_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_9_21_8::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_9_21_8::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21_8__id)); return true;
    default: return false;
    }
}
bool C_S_9_21_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21_8__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_21_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_21__5d_::ctor_() {
    RT_FN("S_9_21__5d_.S_9_21__5d_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33660 = 126.0; this->f_S_6_21_Z = rt::touint_d(_v33660); _v33660; });
    ({ rt::Value _v33661 = rt::trv(rt::VS(g::LS[9788])); this->f_S_1i = rt::slot_string(_v33661); _v33661; });
    ({ rt::Value _v33662 = rt::trv(rt::VS(g::LS[9789])); this->f_S_7_23_ = rt::slot_string(_v33662); _v33662; });
    ({ rt::Value _v33663 = rt::VS(g::LS[9790]); this->f_S__5e__21__23_ = rt::slot_string(_v33663); _v33663; });
    ({ double _v33664 = 30.0; this->f_S__3f__22_M = _v33664; _v33664; });
}
bool C_S_9_21__5d_::m_S__20__21_3() {
    RT_FN("S_9_21__5d_.S__20__21_3");
    return (C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M);
    return false;
}
C_S_9_21__5d_* C_S_9_21__5d_::alloc_() {
    C_S_9_21__5d_* o = rt::make<C_S_9_21__5d_>();
    return o;
}
rt::Value C_S_9_21__5d_::mk_(rt::Value* a, int n) {
    C_S_9_21__5d_* o = alloc_();
    o->C_S_9_21__5d_::ctor_();
    return rt::VO(o);
}
bool C_S_9_21__5d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_9_21__5d_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_9_21__5d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_9_21__5d_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_9_21__5d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21__5d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21__5d___id)); return true;
    default: return false;
    }
}
bool C_S_9_21__5d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21__5d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_21__5d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_22_5::ctor_() {
    RT_FN("S_9_22_5.S_9_22_5");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33665 = 348.0; this->f_S_6_21_Z = rt::touint_d(_v33665); _v33665; });
    ({ rt::Value _v33666 = rt::trv(rt::VS(g::LS[8702])); this->f_S_1i = rt::slot_string(_v33666); _v33666; });
    ({ rt::Value _v33667 = rt::trv(rt::VS(g::LS[9791])); this->f_S_7_23_ = rt::slot_string(_v33667); _v33667; });
    ({ rt::Value _v33668 = rt::VS(g::LS[8703]); this->f_S__5e__21__23_ = rt::slot_string(_v33668); _v33668; });
    ({ bool _v33669 = true; this->f_S_4_21_3 = _v33669; _v33669; });
}
rt::Value C_S_9_22_5::m_S__40__22_() {
    RT_FN("S_9_22_5.S__40__22_");
    return rt::slot_string(rt::add(rt::add(this->f_S_7_23_, rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9613]), C_S__26_c::sm_S_8_21_Z(C_S__20__22_5::sm_S__2b__22_L(C_S_8G::sm_S__21__21_H(g::SV.C_S__2d__22_4__id)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, 5.0))));
    return rt::NUL;
}
bool C_S_9_22_5::m_S__20__21_3() {
    RT_FN("S_9_22_5.S__20__21_3");
    return ({ bool _t33672 = ({ bool _t33671 = ({ bool _t33670 = this->g_S__2d_6(); _t33670 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 180.0)) : _t33670; }); _t33671 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)) : _t33671; }); _t33672 ? (bool)((((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d(5.0), true))) >= 5000.0)) : _t33672; });
    return false;
}
rt::Value C_S_9_22_5::m_S_8_21_s() {
    RT_FN("S_9_22_5.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 180.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9792])));
    return rt::NUL;
}
double C_S_9_22_5::g_S_5_22__2c_() {
    RT_FN("S_9_22_5.S_5_22__2c__get");
    return (rt::m_pow((0.5 * rt::m_log((1.0 + C_S__26_c::sm_S__21__2d_(false, true)))), 3.0) / 20000.0);
    return 0.0;
}
C_S_9_22_5* C_S_9_22_5::alloc_() {
    C_S_9_22_5* o = rt::make<C_S_9_22_5>();
    return o;
}
rt::Value C_S_9_22_5::mk_(rt::Value* a, int n) {
    C_S_9_22_5* o = alloc_();
    o->C_S_9_22_5::ctor_();
    return rt::VO(o);
}
bool C_S_9_22_5::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_9_22_5::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_9_22_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_9_22_5::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_9_22_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22_5__id)); return true;
    default: return false;
    }
}
bool C_S_9_22_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22_5__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_22_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9l::ctor_() {
    RT_FN("S_9l.S_9l");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33673 = 142.0; this->f_S_6_21_Z = rt::touint_d(_v33673); _v33673; });
    ({ rt::Value _v33674 = rt::trv(rt::VS(g::LS[9793])); this->f_S_1i = rt::slot_string(_v33674); _v33674; });
    ({ rt::Value _v33675 = rt::trv(rt::VS(g::LS[9794])); this->f_S_7_23_ = rt::slot_string(_v33675); _v33675; });
    ({ rt::Value _v33676 = rt::VS(g::LS[9795]); this->f_S__5e__21__23_ = rt::slot_string(_v33676); _v33676; });
    ({ bool _v33677 = true; this->f_S_4_21_3 = _v33677; _v33677; });
}
bool C_S_9l::m_S__20__21_3() {
    RT_FN("S_9l.S__20__21_3");
    return ({ bool _t33680 = ({ bool _t33679 = this->g_S__2d_6(); _t33679 ? (bool)((({ bool _t33678 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0); _t33678 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33678; }))) : _t33679; }); _t33680 ? (bool)((C_S__26_c::sm_S_7i(g::SV.C_S__20__21_5__id, false, true, true) >= 3600.0)) : _t33680; });
    return false;
}
rt::Value C_S_9l::m_S_8_21_s() {
    RT_FN("S_9l.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9796])));
    return rt::NUL;
}
double C_S_9l::g_S_5_22__2c_() {
    RT_FN("S_9l.S_5_22__2c__get");
    return (C_S__26_c::sm_S_7i(g::SV.C_S__20__21_5__id, false, true, true) / 36000.0);
    return 0.0;
}
C_S_9l* C_S_9l::alloc_() {
    C_S_9l* o = rt::make<C_S_9l>();
    return o;
}
rt::Value C_S_9l::mk_(rt::Value* a, int n) {
    C_S_9l* o = alloc_();
    o->C_S_9l::ctor_();
    return rt::VO(o);
}
bool C_S_9l::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S_9l::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S_9l::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S_9l::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S_9l::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9l::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9l__id)); return true;
    default: return false;
    }
}
bool C_S_9l::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9l__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9l::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__21__3f_::ctor_() {
    RT_FN("S__3b__21__3f_.S__3b__21__3f_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33681 = 129.0; this->f_S_6_21_Z = rt::touint_d(_v33681); _v33681; });
    ({ rt::Value _v33682 = rt::trv(rt::VS(g::LS[9797])); this->f_S_1i = rt::slot_string(_v33682); _v33682; });
    ({ rt::Value _v33683 = rt::trv(rt::VS(g::LS[9798])); this->f_S_7_23_ = rt::slot_string(_v33683); _v33683; });
    ({ rt::Value _v33684 = rt::VS(g::LS[9799]); this->f_S__5e__21__23_ = rt::slot_string(_v33684); _v33684; });
    ({ bool _v33685 = true; this->f_S_4_21_3 = _v33685; _v33685; });
}
bool C_S__3b__21__3f_::m_S__20__21_3() {
    RT_FN("S__3b__21__3f_.S__20__21_3");
    return ({ bool _t33687 = ({ bool _t33686 = this->g_S__2d_6(); _t33686 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 3.0)) : _t33686; }); _t33687 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33687; });
    return false;
}
rt::Value C_S__3b__21__3f_::m_S_8_21_s() {
    RT_FN("S__3b__21__3f_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9800])));
    return rt::NUL;
}
double C_S__3b__21__3f_::g_S_5_22__2c_() {
    RT_FN("S__3b__21__3f_.S_5_22__2c__get");
    return (C_S__26_c::sm_S__40__21__5b_(false, false, true) / 50000000.0);
    return 0.0;
}
C_S__3b__21__3f_* C_S__3b__21__3f_::alloc_() {
    C_S__3b__21__3f_* o = rt::make<C_S__3b__21__3f_>();
    return o;
}
rt::Value C_S__3b__21__3f_::mk_(rt::Value* a, int n) {
    C_S__3b__21__3f_* o = alloc_();
    o->C_S__3b__21__3f_::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21__3f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3b__21__3f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3b__21__3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3b__21__3f_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3b__21__3f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21__3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21__3f___id)); return true;
    default: return false;
    }
}
bool C_S__3b__21__3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21__3f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__21__3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__21_r::ctor_() {
    RT_FN("S__3b__21_r.S__3b__21_r");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33688 = 282.0; this->f_S_6_21_Z = rt::touint_d(_v33688); _v33688; });
    ({ rt::Value _v33689 = rt::trv(rt::VS(g::LS[9801])); this->f_S_1i = rt::slot_string(_v33689); _v33689; });
    ({ rt::Value _v33690 = rt::trv(rt::VS(g::LS[9802])); this->f_S_7_23_ = rt::slot_string(_v33690); _v33690; });
    ({ rt::Value _v33691 = rt::VS(g::LS[9803]); this->f_S__5e__21__23_ = rt::slot_string(_v33691); _v33691; });
    ({ bool _v33692 = true; this->f_S_4_21_3 = _v33692; _v33692; });
    ({ double _v33693 = 2000.0; this->f_S__3f__22_M = _v33693; _v33693; });
}
bool C_S__3b__21_r::m_S__20__21_3() {
    RT_FN("S__3b__21_r.S__20__21_3");
    return ({ bool _t33698 = ({ bool _t33697 = ({ bool _t33696 = ({ bool _t33695 = ({ bool _t33694 = this->g_S__2d_6(); _t33694 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 3.0)) : _t33694; }); _t33695 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33695; }); _t33696 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33696; }); _t33697 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3b__21__3f___id)) : _t33697; }); _t33698 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5d_w__id)) : _t33698; });
    return false;
}
rt::Value C_S__3b__21_r::m_S__21__22__2b_() {
    RT_FN("S__3b__21_r.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33699 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33700 = rt::as_ptr<C_S__20_g>(_o33699); _p33700 ? _p33700->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33699, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3b__21_r::m_S_8_21_s() {
    RT_FN("S__3b__21_r.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9804])));
    return rt::NUL;
}
double C_S__3b__21_r::g_S_5_22__2c_() {
    RT_FN("S__3b__21_r.S_5_22__2c__get");
    return ((C_S_8G::sm_S__25_Z(g::SV.C_S_6J__id, true) * 0.5) / 250000.0);
    return 0.0;
}
C_S__3b__21_r* C_S__3b__21_r::alloc_() {
    C_S__3b__21_r* o = rt::make<C_S__3b__21_r>();
    return o;
}
rt::Value C_S__3b__21_r::mk_(rt::Value* a, int n) {
    C_S__3b__21_r* o = alloc_();
    o->C_S__3b__21_r::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__3b__21_r::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__3b__21_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__3b__21_r::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__3b__21_r::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_r__id)); return true;
    default: return false;
    }
}
bool C_S__3b__21_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_r__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__21_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__21__3c_::ctor_() {
    RT_FN("S__40__21__3c_.S__40__21__3c_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33701 = 128.0; this->f_S_6_21_Z = rt::touint_d(_v33701); _v33701; });
    ({ rt::Value _v33702 = rt::trv(rt::VS(g::LS[9805])); this->f_S_1i = rt::slot_string(_v33702); _v33702; });
    ({ rt::Value _v33703 = rt::trv(rt::VS(g::LS[9806])); this->f_S_7_23_ = rt::slot_string(_v33703); _v33703; });
    ({ rt::Value _v33704 = rt::VS(g::LS[9807]); this->f_S__5e__21__23_ = rt::slot_string(_v33704); _v33704; });
    ({ double _v33705 = 25.0; this->f_S__3f__22_M = _v33705; _v33705; });
}
bool C_S__40__21__3c_::m_S__20__21_3() {
    RT_FN("S__40__21__3c_.S__20__21_3");
    return (C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M);
    return false;
}
C_S__40__21__3c_* C_S__40__21__3c_::alloc_() {
    C_S__40__21__3c_* o = rt::make<C_S__40__21__3c_>();
    return o;
}
rt::Value C_S__40__21__3c_::mk_(rt::Value* a, int n) {
    C_S__40__21__3c_* o = alloc_();
    o->C_S__40__21__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__40__21__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__40__21__3c_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__40__21__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__40__21__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__40__21__3c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21__3c___id)); return true;
    default: return false;
    }
}
bool C_S__40__21__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__21__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__21_t::ctor_() {
    RT_FN("S__40__21_t.S__40__21_t");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33706 = 292.0; this->f_S_6_21_Z = rt::touint_d(_v33706); _v33706; });
    ({ rt::Value _v33707 = rt::trv(rt::VS(g::LS[9808])); this->f_S_1i = rt::slot_string(_v33707); _v33707; });
    ({ rt::Value _v33708 = rt::trv(rt::VS(g::LS[9809])); this->f_S_7_23_ = rt::slot_string(_v33708); _v33708; });
    ({ rt::Value _v33709 = rt::VS(g::LS[9810]); this->f_S__5e__21__23_ = rt::slot_string(_v33709); _v33709; });
    ({ bool _v33710 = true; this->f_S_4_21_3 = _v33710; _v33710; });
    ({ double _v33711 = 2000.0; this->f_S__3f__22_M = _v33711; _v33711; });
}
bool C_S__40__21_t::m_S__20__21_3() {
    RT_FN("S__40__21_t.S__20__21_3");
    return ({ bool _t33716 = ({ bool _t33715 = ({ bool _t33714 = ({ bool _t33713 = ({ bool _t33712 = this->g_S__2d_6(); _t33712 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 12.0)) : _t33712; }); _t33713 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33713; }); _t33714 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33714; }); _t33715 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__22_3__id)) : _t33715; }); _t33716 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3c_m__id)) : _t33716; });
    return false;
}
rt::Value C_S__40__21_t::m_S__21__22__2b_() {
    RT_FN("S__40__21_t.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33717 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33718 = rt::as_ptr<C_S__20_g>(_o33717); _p33718 ? _p33718->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33717, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S__40__21_t::m_S_8_21_s() {
    RT_FN("S__40__21_t.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9811])));
    return rt::NUL;
}
double C_S__40__21_t::g_S_5_22__2c_() {
    RT_FN("S__40__21_t.S_5_22__2c__get");
    return (((double)(C_S__26_c::sm_S__3f__26_(true))) / 2000.0);
    return 0.0;
}
C_S__40__21_t* C_S__40__21_t::alloc_() {
    C_S__40__21_t* o = rt::make<C_S__40__21_t>();
    return o;
}
rt::Value C_S__40__21_t::mk_(rt::Value* a, int n) {
    C_S__40__21_t* o = alloc_();
    o->C_S__40__21_t::ctor_();
    return rt::VO(o);
}
bool C_S__40__21_t::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__40__21_t::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__40__21_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__40__21_t::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__40__21_t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21_t__id)); return true;
    default: return false;
    }
}
bool C_S__40__21_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21_t__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__21_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__3d_::ctor_() {
    RT_FN("S__40__3d_.S__40__3d_");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33719 = 141.0; this->f_S_6_21_Z = rt::touint_d(_v33719); _v33719; });
    ({ rt::Value _v33720 = rt::trv(rt::VS(g::LS[9812])); this->f_S_1i = rt::slot_string(_v33720); _v33720; });
    ({ rt::Value _v33721 = rt::trv(rt::VS(g::LS[9813])); this->f_S_7_23_ = rt::slot_string(_v33721); _v33721; });
    ({ rt::Value _v33722 = rt::VS(g::LS[9814]); this->f_S__5e__21__23_ = rt::slot_string(_v33722); _v33722; });
    ({ bool _v33723 = true; this->f_S_4_21_3 = _v33723; _v33723; });
}
bool C_S__40__3d_::m_S__20__21_3() {
    RT_FN("S__40__3d_.S__20__21_3");
    return ({ bool _t33725 = this->g_S__2d_6(); _t33725 ? (bool)((({ bool _t33724 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0); _t33724 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33724; }))) : _t33725; });
    return false;
}
rt::Value C_S__40__3d_::m_S_8_21_s() {
    RT_FN("S__40__3d_.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9815])));
    return rt::NUL;
}
double C_S__40__3d_::g_S_5_22__2c_() {
    RT_FN("S__40__3d_.S_5_22__2c__get");
    return (({ rt::Value _o33726 = C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id); C_S_84* _p33727 = rt::as_ptr<C_S_84>(_o33726); _p33727 ? _p33727->g_S_2_2d_() : rt::tonum(rt::dget(_o33726, NM_S_2_2d_)); }) / 1000.0);
    return 0.0;
}
C_S__40__3d_* C_S__40__3d_::alloc_() {
    C_S__40__3d_* o = rt::make<C_S__40__3d_>();
    return o;
}
rt::Value C_S__40__3d_::mk_(rt::Value* a, int n) {
    C_S__40__3d_* o = alloc_();
    o->C_S__40__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__40__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__40__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__40__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__40__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__40__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__3d___id)); return true;
    default: return false;
    }
}
bool C_S__40__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40_s::ctor_() {
    RT_FN("S__40_s.S__40_s");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33728 = 143.0; this->f_S_6_21_Z = rt::touint_d(_v33728); _v33728; });
    ({ rt::Value _v33729 = rt::trv(rt::VS(g::LS[9816])); this->f_S_1i = rt::slot_string(_v33729); _v33729; });
    ({ rt::Value _v33730 = rt::trv(rt::VS(g::LS[9817])); this->f_S_7_23_ = rt::slot_string(_v33730); _v33730; });
    ({ rt::Value _v33731 = rt::VS(g::LS[9818]); this->f_S__5e__21__23_ = rt::slot_string(_v33731); _v33731; });
    ({ bool _v33732 = true; this->f_S_4_21_3 = _v33732; _v33732; });
}
bool C_S__40_s::m_S__20__21_3() {
    RT_FN("S__40_s.S__20__21_3");
    return ({ bool _t33734 = this->g_S__2d_6(); _t33734 ? (bool)((({ bool _t33733 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 1.0); _t33733 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33733; }))) : _t33734; });
    return false;
}
rt::Value C_S__40_s::m_S_8_21_s() {
    RT_FN("S__40_s.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9819])));
    return rt::NUL;
}
double C_S__40_s::g_S_5_22__2c_() {
    RT_FN("S__40_s.S_5_22__2c__get");
    return (((rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 101.0)) - 1.0)) * 50.0);
    return 0.0;
}
C_S__40_s* C_S__40_s::alloc_() {
    C_S__40_s* o = rt::make<C_S__40_s>();
    return o;
}
rt::Value C_S__40_s::mk_(rt::Value* a, int n) {
    C_S__40_s* o = alloc_();
    o->C_S__40_s::ctor_();
    return rt::VO(o);
}
bool C_S__40_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__40_s::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__40_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__40_s::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__40_s::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40_s__id)); return true;
    default: return false;
    }
}
bool C_S__40_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__40_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__21_D::ctor_() {
    RT_FN("S__5b__21_D.S__5b__21_D");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33735 = 153.0; this->f_S_6_21_Z = rt::touint_d(_v33735); _v33735; });
    ({ rt::Value _v33736 = rt::trv(rt::VS(g::LS[9820])); this->f_S_1i = rt::slot_string(_v33736); _v33736; });
    ({ rt::Value _v33737 = rt::trv(rt::VS(g::LS[9821])); this->f_S_7_23_ = rt::slot_string(_v33737); _v33737; });
    ({ rt::Value _v33738 = rt::VS(g::LS[9822]); this->f_S__5e__21__23_ = rt::slot_string(_v33738); _v33738; });
    ({ bool _v33739 = true; this->f_S_4_21_3 = _v33739; _v33739; });
}
bool C_S__5b__21_D::m_S__20__21_3() {
    RT_FN("S__5b__21_D.S__20__21_3");
    return ({ bool _t33741 = this->g_S__2d_6(); _t33741 ? (bool)((({ bool _t33740 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 7.0); _t33740 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33740; }))) : _t33741; });
    return false;
}
rt::Value C_S__5b__21_D::m_S_8_21_s() {
    RT_FN("S__5b__21_D.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9823])));
    return rt::NUL;
}
double C_S__5b__21_D::g_S_5_22__2c_() {
    RT_FN("S__5b__21_D.S_5_22__2c__get");
    return (({ rt::Value _o33742 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p33743 = rt::as_ptr<C_S_84>(_o33742); _p33743 ? _p33743->g_S_2_2d_() : rt::tonum(rt::dget(_o33742, NM_S_2_2d_)); }) / 30000.0);
    return 0.0;
}
C_S__5b__21_D* C_S__5b__21_D::alloc_() {
    C_S__5b__21_D* o = rt::make<C_S__5b__21_D>();
    return o;
}
rt::Value C_S__5b__21_D::mk_(rt::Value* a, int n) {
    C_S__5b__21_D* o = alloc_();
    o->C_S__5b__21_D::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_D::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__5b__21_D::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__5b__21_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__5b__21_D::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__5b__21_D::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21_D__id)); return true;
    default: return false;
    }
}
bool C_S__5b__21_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21_D__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__21_S::ctor_() {
    RT_FN("S__5b__21_S.S__5b__21_S");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33744 = 140.0; this->f_S_6_21_Z = rt::touint_d(_v33744); _v33744; });
    ({ rt::Value _v33745 = rt::trv(rt::VS(g::LS[9824])); this->f_S_1i = rt::slot_string(_v33745); _v33745; });
    ({ rt::Value _v33746 = rt::trv(rt::VS(g::LS[9825])); this->f_S_7_23_ = rt::slot_string(_v33746); _v33746; });
    ({ rt::Value _v33747 = rt::VS(g::LS[9826]); this->f_S__5e__21__23_ = rt::slot_string(_v33747); _v33747; });
    ({ bool _v33748 = true; this->f_S_4_21_3 = _v33748; _v33748; });
}
bool C_S__5b__21_S::m_S__20__21_3() {
    RT_FN("S__5b__21_S.S__20__21_3");
    return ({ bool _t33751 = ({ bool _t33750 = this->g_S__2d_6(); _t33750 ? (bool)((({ bool _t33749 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 5.0); _t33749 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33749; }))) : _t33750; }); _t33751 ? (bool)((C_S__26_c::sm_S__22__21_B(rt::toint_d(55.0), true, false, false, true) >= 14400.0)) : _t33751; });
    return false;
}
rt::Value C_S__5b__21_S::m_S_8_21_s() {
    RT_FN("S__5b__21_S.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9827])));
    return rt::NUL;
}
double C_S__5b__21_S::g_S_5_22__2c_() {
    RT_FN("S__5b__21_S.S_5_22__2c__get");
    return (C_S__26_c::sm_S__22__21_B(rt::toint_d(55.0), true, false, false, true) / 86400.0);
    return 0.0;
}
C_S__5b__21_S* C_S__5b__21_S::alloc_() {
    C_S__5b__21_S* o = rt::make<C_S__5b__21_S>();
    return o;
}
rt::Value C_S__5b__21_S::mk_(rt::Value* a, int n) {
    C_S__5b__21_S* o = alloc_();
    o->C_S__5b__21_S::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_S::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__5b__21_S::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__5b__21_S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__5b__21_S::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__5b__21_S::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_S::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21_S__id)); return true;
    default: return false;
    }
}
bool C_S__5b__21_S::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21_S__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21_S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b_7::ctor_() {
    RT_FN("S__5b_7.S__5b_7");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33752 = 151.0; this->f_S_6_21_Z = rt::touint_d(_v33752); _v33752; });
    ({ rt::Value _v33753 = rt::trv(rt::VS(g::LS[9828])); this->f_S_1i = rt::slot_string(_v33753); _v33753; });
    ({ rt::Value _v33754 = rt::trv(rt::VS(g::LS[9829])); this->f_S_7_23_ = rt::slot_string(_v33754); _v33754; });
    ({ rt::Value _v33755 = rt::VS(g::LS[9830]); this->f_S__5e__21__23_ = rt::slot_string(_v33755); _v33755; });
    ({ bool _v33756 = true; this->f_S_4_21_3 = _v33756; _v33756; });
}
rt::Value C_S__5b_7::m_S__26_b() {
    RT_FN("S__5b_7.S__26_b");
    if ((({ bool _t33758 = ({ bool _t33757 = (!this->f_S_4_21_K); _t33757 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_4a__id)) : _t33757; }); _t33758 ? (bool)(rt::eq(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 35.0), rt::V(1.0))) : _t33758; }) && (({ rt::Value _o33759 = g::SV.C_S__2d__2b___S_9_21__27_; C_S_7_21__20_* _p33760 = rt::as_ptr<C_S_7_21__20_>(_o33759); _p33760 ? _p33760->m_S__3b__21__2c_(0.0, 100.0) : rt::tonum(rt::dcallv(_o33759, NM_S__3b__21__2c_, rt::V(0.0), rt::V(100.0))); }) <= this->g_S_5_22__2c_()))) {
        (void)(this->m_S__21__22__2b_());
    }
    return rt::NUL;
}
bool C_S__5b_7::m_S__20__21_3() {
    RT_FN("S__5b_7.S__20__21_3");
    return ({ bool _t33761 = this->g_S__2d_6(); _t33761 ? (bool)(rt::eq(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 35.0), rt::V(0.0))) : _t33761; });
    return false;
}
rt::Value C_S__5b_7::m_S_8_21_s() {
    RT_FN("S__5b_7.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9831])));
    return rt::NUL;
}
double C_S__5b_7::g_S_5_22__2c_() {
    RT_FN("S__5b_7.S_5_22__2c__get");
    return (rt::lt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 35.0), rt::V(2.0)) ? 2.0 : 0.0);
    return 0.0;
}
C_S__5b_7* C_S__5b_7::alloc_() {
    C_S__5b_7* o = rt::make<C_S__5b_7>();
    return o;
}
rt::Value C_S__5b_7::mk_(rt::Value* a, int n) {
    C_S__5b_7* o = alloc_();
    o->C_S__5b_7::ctor_();
    return rt::VO(o);
}
bool C_S__5b_7::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__26_b: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__5b_7::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__5b_7::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_b: out = m_S__26_b(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__5b_7::dmeth(int id) {
    switch (id) {
    case NM_S__26_b: return true;
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__5b_7::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b_7::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b_7__id)); return true;
    default: return false;
    }
}
bool C_S__5b_7::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b_7__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b_7::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__21_M::ctor_() {
    RT_FN("S__5d__21_M.S__5d__21_M");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33762 = 123.0; this->f_S_6_21_Z = rt::touint_d(_v33762); _v33762; });
    ({ rt::Value _v33763 = rt::trv(rt::VS(g::LS[9832])); this->f_S_1i = rt::slot_string(_v33763); _v33763; });
    ({ rt::Value _v33764 = rt::trv(rt::VS(g::LS[9833])); this->f_S_7_23_ = rt::slot_string(_v33764); _v33764; });
    ({ rt::Value _v33765 = rt::VS(g::LS[9834]); this->f_S__5e__21__23_ = rt::slot_string(_v33765); _v33765; });
    ({ double _v33766 = 5.0; this->f_S__3f__22_M = _v33766; _v33766; });
}
bool C_S__5d__21_M::m_S__20__21_3() {
    RT_FN("S__5d__21_M.S__20__21_3");
    return (C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M);
    return false;
}
C_S__5d__21_M* C_S__5d__21_M::alloc_() {
    C_S__5d__21_M* o = rt::make<C_S__5d__21_M>();
    return o;
}
rt::Value C_S__5d__21_M::mk_(rt::Value* a, int n) {
    C_S__5d__21_M* o = alloc_();
    o->C_S__5d__21_M::ctor_();
    return rt::VO(o);
}
bool C_S__5d__21_M::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__5d__21_M::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__5d__21_M::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__5d__21_M::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__5d__21_M::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__21_M::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d__21_M__id)); return true;
    default: return false;
    }
}
bool C_S__5d__21_M::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d__21_M__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d__21_M::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d_w::ctor_() {
    RT_FN("S__5d_w.S__5d_w");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33767 = 139.0; this->f_S_6_21_Z = rt::touint_d(_v33767); _v33767; });
    ({ rt::Value _v33768 = rt::trv(rt::VS(g::LS[9835])); this->f_S_1i = rt::slot_string(_v33768); _v33768; });
    ({ rt::Value _v33769 = rt::trv(rt::VS(g::LS[9836])); this->f_S_7_23_ = rt::slot_string(_v33769); _v33769; });
    ({ rt::Value _v33770 = rt::VS(g::LS[9837]); this->f_S__5e__21__23_ = rt::slot_string(_v33770); _v33770; });
    ({ bool _v33771 = true; this->f_S_4_21_3 = _v33771; _v33771; });
}
bool C_S__5d_w::m_S__20__21_3() {
    RT_FN("S__5d_w.S__20__21_3");
    return ({ bool _t33773 = this->g_S__2d_6(); _t33773 ? (bool)((({ bool _t33772 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 3.0); _t33772 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33772; }))) : _t33773; });
    return false;
}
rt::Value C_S__5d_w::m_S_8_21_s() {
    RT_FN("S__5d_w.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9838])));
    return rt::NUL;
}
double C_S__5d_w::g_S_5_22__2c_() {
    RT_FN("S__5d_w.S_5_22__2c__get");
    return (({ rt::Value _o33774 = C_S_8G::sm_S__23_N(g::SV.C_S_2_3c___id); C_S_84* _p33775 = rt::as_ptr<C_S_84>(_o33774); _p33775 ? _p33775->g_S_2_2d_() : rt::tonum(rt::dget(_o33774, NM_S_2_2d_)); }) / 300000.0);
    return 0.0;
}
C_S__5d_w* C_S__5d_w::alloc_() {
    C_S__5d_w* o = rt::make<C_S__5d_w>();
    return o;
}
rt::Value C_S__5d_w::mk_(rt::Value* a, int n) {
    C_S__5d_w* o = alloc_();
    o->C_S__5d_w::ctor_();
    return rt::VO(o);
}
bool C_S__5d_w::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__5d_w::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__5d_w::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__5d_w::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__5d_w::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d_w::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5d_w__id)); return true;
    default: return false;
    }
}
bool C_S__5d_w::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5d_w__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5d_w::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__21_i::ctor_() {
    RT_FN("S__5e__21_i.S__5e__21_i");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33776 = 240.0; this->f_S_6_21_Z = rt::touint_d(_v33776); _v33776; });
    ({ rt::Value _v33777 = rt::trv(rt::VS(g::LS[9839])); this->f_S_1i = rt::slot_string(_v33777); _v33777; });
    ({ rt::Value _v33778 = rt::trv(rt::VS(g::LS[9840])); this->f_S_7_23_ = rt::slot_string(_v33778); _v33778; });
    ({ rt::Value _v33779 = rt::VS(g::LS[9841]); this->f_S__5e__21__23_ = rt::slot_string(_v33779); _v33779; });
    ({ double _v33780 = 1500.0; this->f_S__3f__22_M = _v33780; _v33780; });
}
rt::Value C_S__5e__21_i::m_S__21__22__2b_() {
    RT_FN("S__5e__21_i.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    (void)(({ rt::Value _o33781 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33782 = rt::as_ptr<C_S__20_g>(_o33781); _p33782 ? _p33782->m_S__26__2b_(rt::toint_d(939.0), rt::toint_d(0.0)) : rt::dcallv(_o33781, NM_S__26__2b_, rt::V(939.0), rt::V(0.0)); }));
    return rt::NUL;
}
bool C_S__5e__21_i::m_S__20__21_3() {
    RT_FN("S__5e__21_i.S__20__21_3");
    return ({ bool _t33784 = ({ bool _t33783 = this->g_S__2d_6(); _t33783 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 75.0)) : _t33783; }); _t33784 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33784; });
    return false;
}
bool C_S__5e__21_i::g_S__27__22_Q() {
    RT_FN("S__5e__21_i.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 75.0);
    return false;
}
C_S__5e__21_i* C_S__5e__21_i::alloc_() {
    C_S__5e__21_i* o = rt::make<C_S__5e__21_i>();
    return o;
}
rt::Value C_S__5e__21_i::mk_(rt::Value* a, int n) {
    C_S__5e__21_i* o = alloc_();
    o->C_S__5e__21_i::ctor_();
    return rt::VO(o);
}
bool C_S__5e__21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__5e__21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__5e__21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__5e__21_i::dmeth(int id) {
    switch (id) {
    case NM_S__21__22__2b_: return true;
    case NM_S__20__21_3: return true;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__5e__21_i::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__21_i__id)); return true;
    default: return false;
    }
}
bool C_S__5e__21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__21_o::ctor_() {
    RT_FN("S__5e__21_o.S__5e__21_o");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33785 = 269.0; this->f_S_6_21_Z = rt::touint_d(_v33785); _v33785; });
    ({ rt::Value _v33786 = rt::trv(rt::VS(g::LS[9842])); this->f_S_1i = rt::slot_string(_v33786); _v33786; });
    ({ rt::Value _v33787 = rt::trv(rt::VS(g::LS[9843])); this->f_S_7_23_ = rt::slot_string(_v33787); _v33787; });
    ({ rt::Value _v33788 = rt::VS(g::LS[9844]); this->f_S__5e__21__23_ = rt::slot_string(_v33788); _v33788; });
    ({ bool _v33789 = true; this->f_S_4_21_3 = _v33789; _v33789; });
}
bool C_S__5e__21_o::m_S__20__21_3() {
    RT_FN("S__5e__21_o.S__20__21_3");
    return ({ bool _t33791 = ({ bool _t33790 = this->g_S__2d_6(); _t33790 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 24.0)) : _t33790; }); _t33791 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) : _t33791; });
    return false;
}
rt::Value C_S__5e__21_o::m_S_8_21_s() {
    RT_FN("S__5e__21_o.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9845])));
    return rt::NUL;
}
double C_S__5e__21_o::g_S_5_22__2c_() {
    RT_FN("S__5e__21_o.S_5_22__2c__get");
    return 10.0;
    return 0.0;
}
C_S__5e__21_o* C_S__5e__21_o::alloc_() {
    C_S__5e__21_o* o = rt::make<C_S__5e__21_o>();
    return o;
}
rt::Value C_S__5e__21_o::mk_(rt::Value* a, int n) {
    C_S__5e__21_o* o = alloc_();
    o->C_S__5e__21_o::ctor_();
    return rt::VO(o);
}
bool C_S__5e__21_o::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__5e__21_o::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__5e__21_o::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__5e__21_o::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__5e__21_o::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__21_o::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__21_o__id)); return true;
    default: return false;
    }
}
bool C_S__5e__21_o::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__21_o__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__21_o::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__21_x::ctor_() {
    RT_FN("S__5e__21_x.S__5e__21_x");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33792 = 301.0; this->f_S_6_21_Z = rt::touint_d(_v33792); _v33792; });
    ({ rt::Value _v33793 = rt::trv(rt::VS(g::LS[9846])); this->f_S_1i = rt::slot_string(_v33793); _v33793; });
    ({ rt::Value _v33794 = rt::trv(rt::VS(g::LS[9525])); this->f_S_7_23_ = rt::slot_string(_v33794); _v33794; });
    ({ rt::Value _v33795 = rt::VS(g::LS[9847]); this->f_S__5e__21__23_ = rt::slot_string(_v33795); _v33795; });
    ({ double _v33796 = 5000.0; this->f_S__3f__22_M = _v33796; _v33796; });
}
bool C_S__5e__21_x::m_S__20__21_3() {
    RT_FN("S__5e__21_x.S__20__21_3");
    return ({ bool _t33801 = ({ bool _t33800 = ({ bool _t33799 = ({ bool _t33798 = ({ bool _t33797 = this->g_S__2d_6(); _t33797 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33797; }); _t33798 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 125.0)) : _t33798; }); _t33799 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 4.0)) : _t33799; }); _t33800 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33800; }); _t33801 ? (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0)) : _t33801; });
    return false;
}
rt::Value C_S__5e__21_x::m_S_8_21_s() {
    RT_FN("S__5e__21_x.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 125.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9848])));
    return rt::NUL;
}
double C_S__5e__21_x::g_S_5_22__2c_() {
    RT_FN("S__5e__21_x.S_5_22__2c__get");
    return (rt::m_pow(rt::m_log((1.0 + (C_S__23__21__21_::sm_S_57() * 30.0))), 3.0) / 1000000.0);
    return 0.0;
}
bool C_S__5e__21_x::g_S__27__22_Q() {
    RT_FN("S__5e__21_x.S__27__22_Q_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 125.0);
    return false;
}
C_S__5e__21_x* C_S__5e__21_x::alloc_() {
    C_S__5e__21_x* o = rt::make<C_S__5e__21_x>();
    return o;
}
rt::Value C_S__5e__21_x::mk_(rt::Value* a, int n) {
    C_S__5e__21_x* o = alloc_();
    o->C_S__5e__21_x::ctor_();
    return rt::VO(o);
}
bool C_S__5e__21_x::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__27__22_Q: out = rt::VB(g_S__27__22_Q()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__5e__21_x::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__5e__21_x::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__22_Q: { rt::Value f = rt::VB(g_S__27__22_Q()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__5e__21_x::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    case NM_S__27__22_Q: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__5e__21_x::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__21_x::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__21_x__id)); return true;
    default: return false;
    }
}
bool C_S__5e__21_x::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__21_x__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__21_x::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e__22_3::ctor_() {
    RT_FN("S__5e__22_3.S__5e__22_3");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33802 = 352.0; this->f_S_6_21_Z = rt::touint_d(_v33802); _v33802; });
    ({ rt::Value _v33803 = rt::trv(rt::VS(g::LS[8411])); this->f_S_1i = rt::slot_string(_v33803); _v33803; });
    ({ rt::Value _v33804 = rt::trv(rt::VS(g::LS[9849])); this->f_S_7_23_ = rt::slot_string(_v33804); _v33804; });
    ({ rt::Value _v33805 = rt::VS(g::LS[8412]); this->f_S__5e__21__23_ = rt::slot_string(_v33805); _v33805; });
    ({ bool _v33806 = true; this->f_S_4_21_3 = _v33806; _v33806; });
}
rt::Value C_S__5e__22_3::m_S__40__22_() {
    RT_FN("S__5e__22_3.S__40__22_");
    return rt::slot_string(rt::add(rt::add(this->f_S_7_23_, rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[9613]), C_S__26_c::sm_S_8_21_Z(C_S__20__22_5::sm_S__2b__22_L(C_S_8G::sm_S__21__21_H(g::SV.C_S__21__22_5__id)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, 3.0))));
    return rt::NUL;
}
bool C_S__5e__22_3::m_S__20__21_3() {
    RT_FN("S__5e__22_3.S__20__21_3");
    return ({ bool _t33809 = ({ bool _t33808 = ({ bool _t33807 = this->g_S__2d_6(); _t33807 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 180.0)) : _t33807; }); _t33808 ? (bool)((((double)(g::SV.C_S_8G__S_9_21_m)) == 6.0)) : _t33808; }); _t33809 ? (bool)((((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d(3.0), true))) >= 5000.0)) : _t33809; });
    return false;
}
rt::Value C_S__5e__22_3::m_S_8_21_s() {
    RT_FN("S__5e__22_3.S_8_21_s");
    if ((((double)(C_S_8G::sg_S_8_21_H())) < 180.0)) {
        return rt::slot_string(this->C_S__23__21__60_::m_S_8_21_s());
    }
    return rt::slot_string(rt::trv(rt::VS(g::LS[9850])));
    return rt::NUL;
}
double C_S__5e__22_3::g_S_5_22__2c_() {
    RT_FN("S__5e__22_3.S_5_22__2c__get");
    return (C_S__23__21__21_::sm_S__40__21__3f_() / 100000000.0);
    return 0.0;
}
C_S__5e__22_3* C_S__5e__22_3::alloc_() {
    C_S__5e__22_3* o = rt::make<C_S__5e__22_3>();
    return o;
}
rt::Value C_S__5e__22_3::mk_(rt::Value* a, int n) {
    C_S__5e__22_3* o = alloc_();
    o->C_S__5e__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__5e__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__5e__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__5e__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__5e__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__5e__22_3::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e__22_3__id)); return true;
    default: return false;
    }
}
bool C_S__5e__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e__22_3__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5e_t::ctor_() {
    RT_FN("S__5e_t.S__5e_t");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33810 = 132.0; this->f_S_6_21_Z = rt::touint_d(_v33810); _v33810; });
    ({ rt::Value _v33811 = rt::trv(rt::VS(g::LS[9851])); this->f_S_1i = rt::slot_string(_v33811); _v33811; });
    ({ rt::Value _v33812 = rt::trv(rt::VS(g::LS[9852])); this->f_S_7_23_ = rt::slot_string(_v33812); _v33812; });
    ({ rt::Value _v33813 = rt::VS(g::LS[9853]); this->f_S__5e__21__23_ = rt::slot_string(_v33813); _v33813; });
    ({ bool _v33814 = true; this->f_S_4_21_3 = _v33814; _v33814; });
}
bool C_S__5e_t::m_S__20__21_3() {
    RT_FN("S__5e_t.S__20__21_3");
    return ({ bool _t33816 = ({ bool _t33815 = this->g_S__2d_6(); _t33815 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0)) : _t33815; }); _t33816 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t33816; });
    return false;
}
rt::Value C_S__5e_t::m_S_8_21_s() {
    RT_FN("S__5e_t.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9854])));
    return rt::NUL;
}
double C_S__5e_t::g_S_5_22__2c_() {
    RT_FN("S__5e_t.S_5_22__2c__get");
    return (rt::m_pow(({ rt::Value _o33817 = C_S_8G::sm_S__23_N(g::SV.C_S__27_K__id); C_S_84* _p33818 = rt::as_ptr<C_S_84>(_o33817); _p33818 ? _p33818->g_S_2_2d_() : rt::tonum(rt::dget(_o33817, NM_S_2_2d_)); }), 1.5) / 100000.0);
    return 0.0;
}
C_S__5e_t* C_S__5e_t::alloc_() {
    C_S__5e_t* o = rt::make<C_S__5e_t>();
    return o;
}
rt::Value C_S__5e_t::mk_(rt::Value* a, int n) {
    C_S__5e_t* o = alloc_();
    o->C_S__5e_t::ctor_();
    return rt::VO(o);
}
bool C_S__5e_t::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__5e_t::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__5e_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__5e_t::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__5e_t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5e_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5e_t__id)); return true;
    default: return false;
    }
}
bool C_S__5e_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5e_t__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5e_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__21_t::ctor_() {
    RT_FN("S__60__21_t.S__60__21_t");
    (void)((this->C_S__2d__2b_::ctor_(), rt::NUL));
    ({ double _v33819 = 279.0; this->f_S_6_21_Z = rt::touint_d(_v33819); _v33819; });
    ({ rt::Value _v33820 = rt::trv(rt::VS(g::LS[9855])); this->f_S_1i = rt::slot_string(_v33820); _v33820; });
    ({ rt::Value _v33821 = rt::trv(rt::VS(g::LS[9856])); this->f_S_7_23_ = rt::slot_string(_v33821); _v33821; });
    ({ rt::Value _v33822 = rt::VS(g::LS[9857]); this->f_S__5e__21__23_ = rt::slot_string(_v33822); _v33822; });
    ({ bool _v33823 = true; this->f_S_4_21_3 = _v33823; _v33823; });
    ({ double _v33824 = 2000.0; this->f_S__3f__22_M = _v33824; _v33824; });
}
bool C_S__60__21_t::m_S__20__21_3() {
    RT_FN("S__60__21_t.S__20__21_3");
    return ({ bool _t33829 = ({ bool _t33828 = ({ bool _t33827 = ({ bool _t33826 = ({ bool _t33825 = this->g_S__2d_6(); _t33825 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)) : _t33825; }); _t33826 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t33826; }); _t33827 ? (bool)((C_S_8G::sg_S_1_21_5() >= this->f_S__3f__22_M)) : _t33827; }); _t33828 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_9_21_8__id)) : _t33828; }); _t33829 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__20__5d___id)) : _t33829; });
    return false;
}
rt::Value C_S__60__21_t::m_S__21__22__2b_() {
    RT_FN("S__60__21_t.S__21__22__2b_");
    (void)(this->C_S__2d__2b_::m_S__21__22__2b_());
    if ((((double)(g::SV.C_S__23__21__21___S_6_21_r)) == (-1.0))) {
        (void)(({ rt::Value _o33830 = g::SV.C_S__20_g__S__3e__21_a; C_S__20_g* _p33831 = rt::as_ptr<C_S__20_g>(_o33830); _p33831 ? _p33831->m_S_1M(rt::toint_d(32.0)) : rt::dcallv(_o33830, NM_S_1M, rt::V(32.0)); }));
    }
    return rt::NUL;
}
rt::Value C_S__60__21_t::m_S_8_21_s() {
    RT_FN("S__60__21_t.S_8_21_s");
    return rt::slot_string(rt::trv(rt::VS(g::LS[9858])));
    return rt::NUL;
}
double C_S__60__21_t::g_S_5_22__2c_() {
    RT_FN("S__60__21_t.S_5_22__2c__get");
    return (C_S__40_W::sm_S__27__21_b() / 10000000.0);
    return 0.0;
}
C_S__60__21_t* C_S__60__21_t::alloc_() {
    C_S__60__21_t* o = rt::make<C_S__60__21_t>();
    return o;
}
rt::Value C_S__60__21_t::mk_(rt::Value* a, int n) {
    C_S__60__21_t* o = alloc_();
    o->C_S__60__21_t::ctor_();
    return rt::VO(o);
}
bool C_S__60__21_t::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5_22__2c_: out = rt::V(g_S_5_22__2c_()); return true;
    case NM_S__20__21_3: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__22__2b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_21_s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__2d__2b_::dget(id, out);
}
bool C_S__60__21_t::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dset(id, v);
}
bool C_S__60__21_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__20__21_3: out = rt::VB(m_S__20__21_3()); return true;
    case NM_S__21__22__2b_: out = m_S__21__22__2b_(); return true;
    case NM_S_8_21_s: out = m_S_8_21_s(); return true;
    case NM_S_5_22__2c_: { rt::Value f = rt::V(g_S_5_22__2c_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__2d__2b_::dcall(id, a, n, out);
}
bool C_S__60__21_t::dmeth(int id) {
    switch (id) {
    case NM_S__20__21_3: return true;
    case NM_S__21__22__2b_: return true;
    case NM_S_8_21_s: return true;
    case NM_S_5_22__2c_: return false;
    default: break;
    }
    return C_S__2d__2b_::dmeth(id);
}
bool C_S__60__21_t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__21_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__60__21_t__id)); return true;
    default: return false;
    }
}
bool C_S__60__21_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__60__21_t__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__60__21_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5d__3c_::ctor_() {
    RT_FN("S__5d__3c_.S__5d__3c_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ bool _v33832 = true; this->f_S__25__21__3e_ = _v33832; _v33832; });
    ({ bool _v33833 = false; this->f_S_3e = _v33833; _v33833; });
}
rt::Value C_S__5d__3c_::m_S__3d__21__26_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__5d__3c_.S__3d__21__26_");
    (void)(this->C_S__60_6::m_S__3d__21__26_());
    if (this->g_S_9_21__25_()) {
        ({ bool _v33834 = true; this->f_S__3c__21_7 = _v33834; _v33834; });
    }
    {
        std::vector<rt::Value> _lst33835;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst33835);
        for (const rt::Value& _x33836 : _lst33835) {
            l_A__loc1_ = _x33836;
            if ((rt::is_class(l_A__loc1_, C_S__5b__21_a::CI) && (((double)(({ rt::Value _o33837 = l_A__loc1_; C_S__60_6* _p33838 = rt::as_ptr<C_S__60_6>(_o33837); _p33838 ? _p33838->f_S__2d__21__5e_ : rt::toint(rt::dget(_o33837, NM_S__2d__21__5e_)); }))) == ((double)(this->f_S__2d__21__5e_))))) {
                (void)(({ rt::Value _o33839 = l_A__loc1_; C_S__60_6* _p33840 = rt::as_ptr<C_S__60_6>(_o33839); _p33840 ? _p33840->m_S__3d__21__26_() : rt::dcallv(_o33839, NM_S__3d__21__26_); }));
            }
        }
    }
    return rt::NUL;
}
rt::Value C_S__5d__3c_::m_S__3d_u() {
    RT_FN("S__5d__3c_.S__3d_u");
    (void)(this->C_S__60_6::m_S__3d_u());
    ({ bool _v33841 = this->g_S_9_21__25_(); this->f_S__3c__21_7 = _v33841; _v33841; });
    return rt::NUL;
}
rt::Value C_S__5d__3c_::m_S__25__21__3c_() {
    RT_FN("S__5d__3c_.S__25__21__3c_");
    (void)(this->C_S__60_6::m_S__25__21__3c_());
    ({ bool _v33842 = this->g_S_9_21__25_(); this->f_S__3c__21_7 = _v33842; _v33842; });
    return rt::NUL;
}
rt::Value C_S__5d__3c_::m_S_8_5b_() {
    RT_FN("S__5d__3c_.S_8_5b_");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
bool C_S__5d__3c_::g_S__2d_6() {
    RT_FN("S__5d__3c_.S__2d_6_get");
    if (((!(((double)(this->f_S_9_21_m)) == 0.0)) && ((((double)(C_S_8G::sg_S__2c_P())) < 2.0) || (((double)(C_S_8G::sg_S_8_21_H())) < 125.0)))) {
        return false;
    }
    return ({ bool _t33851 = ({ bool _t33850 = ({ bool _t33848 = ({ bool _t33846 = (({ bool _t33844 = ({ bool _t33843 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == ((double)(this->f_S__2d__21__5e_))); _t33843 ? _t33843 : (bool)((((double)(g::SV.C_S_8G__S__23_3)) == ((double)(this->f_S__2d__21__5e_)))); }); _t33844 ? _t33844 : (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == ((double)(this->f_S__2d__21__5e_)))); })); _t33846 ? (bool)((({ bool _t33845 = (((double)(this->f_S__20_e)) == (-1.0)); _t33845 ? _t33845 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == ((double)(this->f_S__20_e)))); }))) : _t33846; }); _t33848 ? (bool)((({ bool _t33847 = (((double)(this->f_S__20__22__2b_)) == (-1.0)); _t33847 ? _t33847 : (bool)((((double)(g::SV.C_S_8G__S__23_3)) == ((double)(this->f_S__20__22__2b_)))); }))) : _t33848; }); _t33850 ? (bool)((({ bool _t33849 = (((double)(this->f_S__2d__22_0)) == (-1.0)); _t33849 ? _t33849 : (bool)((((double)(g::SV.C_S_8G__S__2d__21_x)) == ((double)(this->f_S__2d__22_0)))); }))) : _t33850; }); _t33851 ? (bool)(C_S__26_c::sm_S__26_7()) : _t33851; });
    return false;
}
bool C_S__5d__3c_::g_S_9_21__25_() {
    RT_FN("S__5d__3c_.S_9_21__25__get");
    return ({ bool _t33863 = ({ bool _t33861 = ({ bool _t33856 = this->f_S__3f__21_6; _t33856 ? (bool)((({ bool _t33855 = ({ bool _t33852 = (((double)(this->f_S__5e__21_m)) == (-1.0)); _t33852 ? _t33852 : (bool)((((double)(this->f_S__5e__21_m)) == ((double)(g::SV.C_S_8G__S__2d__21__5e_)))); }); _t33855 ? _t33855 : (bool)(({ bool _t33854 = ({ bool _t33853 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t33853 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__21_o__id)) : _t33853; }); _t33854 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 3.0)) : _t33854; })); }))) : _t33856; }); _t33861 ? (bool)((({ bool _t33860 = ({ bool _t33857 = (((double)(this->f_S__2c__21_l)) == (-1.0)); _t33857 ? _t33857 : (bool)((((double)(this->f_S__2c__21_l)) == ((double)(g::SV.C_S_8G__S__23_3)))); }); _t33860 ? _t33860 : (bool)(({ bool _t33859 = ({ bool _t33858 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t33858 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__21_o__id)) : _t33858; }); _t33859 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 3.0)) : _t33859; })); }))) : _t33861; }); _t33863 ? (bool)((({ bool _t33862 = (((double)(this->f_S__60__22__27_)) == (-1.0)); _t33862 ? _t33862 : (bool)((((double)(this->f_S__60__22__27_)) == ((double)(g::SV.C_S_8G__S__2d__21_x)))); }))) : _t33863; });
    return false;
}
C_S__5d__3c_* C_S__5d__3c_::alloc_() {
    C_S__5d__3c_* o = rt::make<C_S__5d__3c_>();
    return o;
}
rt::Value C_S__5d__3c_::mk_(rt::Value* a, int n) {
    C_S__5d__3c_* o = alloc_();
    o->C_S__5d__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__5d__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__20_e: out = rt::V((double)(f_S__20_e)); return true;
    case NM_S__20__22__2b_: out = rt::V((double)(f_S__20__22__2b_)); return true;
    case NM_S__2d__22_0: out = rt::V((double)(f_S__2d__22_0)); return true;
    case NM_S__5e__21_m: out = rt::V((double)(f_S__5e__21_m)); return true;
    case NM_S__2c__21_l: out = rt::V((double)(f_S__2c__21_l)); return true;
    case NM_S__60__22__27_: out = rt::V((double)(f_S__60__22__27_)); return true;
    case NM_S__3d__21__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d_u: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__25__21__3c_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5d__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__20_e: f_S__20_e = rt::toint(v); return true;
    case NM_S__20__22__2b_: f_S__20__22__2b_ = rt::toint(v); return true;
    case NM_S__2d__22_0: f_S__2d__22_0 = rt::toint(v); return true;
    case NM_S__5e__21_m: f_S__5e__21_m = rt::toint(v); return true;
    case NM_S__2c__21_l: f_S__2c__21_l = rt::toint(v); return true;
    case NM_S__60__22__27_: f_S__60__22__27_ = rt::toint(v); return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5d__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3d__21__26_: out = m_S__3d__21__26_(); return true;
    case NM_S__3d_u: out = m_S__3d_u(); return true;
    case NM_S__25__21__3c_: out = m_S__25__21__3c_(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__20_e: { rt::Value f = rt::V((double)(f_S__20_e)); out = rt::call_value(f, a, n); return true; }
    case NM_S__20__22__2b_: { rt::Value f = rt::V((double)(f_S__20__22__2b_)); out = rt::call_value(f, a, n); return true; }
    case NM_S__2d__22_0: { rt::Value f = rt::V((double)(f_S__2d__22_0)); out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21_m: { rt::Value f = rt::V((double)(f_S__5e__21_m)); out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__21_l: { rt::Value f = rt::V((double)(f_S__2c__21_l)); out = rt::call_value(f, a, n); return true; }
    case NM_S__60__22__27_: { rt::Value f = rt::V((double)(f_S__60__22__27_)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5d__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__3d__21__26_: return true;
    case NM_S__3d_u: return true;
    case NM_S__25__21__3c_: return true;
    case NM_S_8_5b_: return true;
    case NM_S__2d_6: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__20_e: return false;
    case NM_S__20__22__2b_: return false;
    case NM_S__2d__22_0: return false;
    case NM_S__5e__21_m: return false;
    case NM_S__2c__21_l: return false;
    case NM_S__60__22__27_: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5d__3c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5d__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21__2c_::ctor_() {
    RT_FN("S__20__21__2c_.S__20__21__2c_");
    (void)((this->C_S__5d__3c_::ctor_(), rt::NUL));
    ({ double _v33864 = 86.0; this->f_S_6_21_Z = rt::touint_d(_v33864); _v33864; });
    ({ rt::Value _v33865 = rt::trv(rt::VS(g::LS[9859])); this->f_S_1i = rt::slot_string(_v33865); _v33865; });
    ({ rt::Value _v33866 = rt::VS(g::LS[9860]); this->f_S__5e__21__23_ = rt::slot_string(_v33866); _v33866; });
    ({ rt::Value _v33867 = rt::VS(g::LS[5376]); this->f_S__3f__21__3d_ = rt::slot_string(_v33867); _v33867; });
    ({ double _v33868 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v33868); _v33868; });
    ({ double _v33869 = 1.0; this->f_S__2d__21__5e_ = rt::toint_d(_v33869); _v33869; });
    ({ double _v33870 = 1.0; this->f_S__5e__21_m = rt::toint_d(_v33870); _v33870; });
}
rt::Value C_S__20__21__2c_::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__20__21__2c_.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::add(rt::trv(rt::VS(g::LS[9861])), rt::VS(g::LS[8]))));
    if (this->f_S__3f__21_6) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::trv(rt::VS(g::LS[9862]), rt::dcallv(rt::V(0.025), rt::N_toFixed, rt::V(3.0))), rt::VS(g::LS[8])))));
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::trv(rt::VS(g::LS[9863]), C_S__26_c::sm_S_8_21_Z(C_S__20__21__2c_::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])))));
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::trv(rt::VS(g::LS[9864])), rt::VS(g::LS[8])))));
    }
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[5347])))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[9865]))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[5997]), C_S__26_c::sm_S_8_21_Z(2.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[9866]))))));
    return rt::slot_string(rt::add(l_A__loc1_, (rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[9867]), C_S__26_c::sm_S_8_21_Z(100000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    return rt::NUL;
}
bool C_S__20__21__2c_::g_S__2d_6() {
    RT_FN("S__20__21__2c_.S__2d_6_get");
    return ({ bool _t33874 = ({ bool _t33873 = ({ bool _t33872 = ({ bool _t33871 = this->C_S__5d__3c_::g_S__2d_6(); _t33871 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 2.0)) : _t33871; }); _t33872 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S_4v__id)) : _t33872; }); _t33873 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 7.0), rt::V(100000.0))) : _t33873; }); _t33874 ? (bool)(rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(3600.0))) : _t33874; });
    return false;
}
double C_S__20__21__2c_::sm_S__2c__21_G() {
    RT_FN("S__20__21__2c_.S__2c__21_G");
    return (10.0 + (1.0 * rt::m_pow(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 134.0)), 0.5)));
    return 0.0;
}
C_S__20__21__2c_* C_S__20__21__2c_::alloc_() {
    C_S__20__21__2c_* o = rt::make<C_S__20__21__2c_>();
    return o;
}
rt::Value C_S__20__21__2c_::mk_(rt::Value* a, int n) {
    C_S__20__21__2c_* o = alloc_();
    o->C_S__20__21__2c_::ctor_();
    return rt::VO(o);
}
bool C_S__20__21__2c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__5d__3c_::dget(id, out);
}
bool C_S__20__21__2c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__5d__3c_::dset(id, v);
}
bool C_S__20__21__2c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__5d__3c_::dcall(id, a, n, out);
}
bool C_S__20__21__2c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__5d__3c_::dmeth(id);
}
bool C_S__20__21__2c_::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__20__21__2c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21__2c___id)); return true;
    case NM_S_2n: out = rt::V(g::SV.C_S__20__21__2c___S_2n); return true;
    case NM_S_2_21_5: out = rt::V(g::SV.C_S__20__21__2c___S_2_21_5); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__20__21__2c___S_1_21_S); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__21__2c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21__2c___id = rt::touint(v); return true;
    case NM_S_2n: g::SV.C_S__20__21__2c___S_2n = rt::tonum(v); return true;
    case NM_S_2_21_5: g::SV.C_S__20__21__2c___S_2_21_5 = rt::tonum(v); return true;
    case NM_S_1_21_S: g::SV.C_S__20__21__2c___S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__20__21__2c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__5b__21_a::ctor_() {
    RT_FN("S__5b__21_a.S__5b__21_a");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ bool _v33875 = false; this->f_S_3e = _v33875; _v33875; });
}
rt::Value C_S__5b__21_a::m_S__40_u() {
    RT_FN("S__5b__21_a.S__40_u");
    return rt::slot_string(((((double)(C_S_8G::sm_S__27__21_M(rt::add(rt::arr_at(g::SV.C_S__2d_D__S__40_G, ((double)(this->f_S__2d__21__5e_))), rt::VS(g::LS[9868]))))) >= ((double)(this->f_S__5d__21_Y))) ? this->f_S__3c__5f_ : this->f_S_1i));
    return rt::NUL;
}
int32_t C_S__5b__21_a::m_S__25__60_() {
    RT_FN("S__5b__21_a.S__25__60_");
    return rt::toint_d(0.0);
    return 0;
}
rt::Value C_S__5b__21_a::m_S__3d__21__26_() {
    RT_FN("S__5b__21_a.S__3d__21__26_");
    (void)(this->C_S__60_6::m_S__3d__21__26_());
    if ((this->g_S_9_21__25_() && (!this->f_S__21__21__60_))) {
        ({ bool _v33876 = true; this->f_S__3c__21_7 = _v33876; _v33876; });
    }
    return rt::NUL;
}
rt::Value C_S__5b__21_a::m_S__3d_u() {
    RT_FN("S__5b__21_a.S__3d_u");
    (void)(this->C_S__60_6::m_S__3d_u());
    if ((!this->f_S__21__21__60_)) {
        ({ bool _v33877 = this->g_S_9_21__25_(); this->f_S__3c__21_7 = _v33877; _v33877; });
    }
    return rt::NUL;
}
rt::Value C_S__5b__21_a::m_S__25__21__3c_() {
    RT_FN("S__5b__21_a.S__25__21__3c_");
    (void)(this->C_S__60_6::m_S__25__21__3c_());
    if ((!this->f_S__21__21__60_)) {
        ({ bool _v33878 = this->g_S_9_21__25_(); this->f_S__3c__21_7 = _v33878; _v33878; });
    }
    return rt::NUL;
}
bool C_S__5b__21_a::m_S__3f__21__5d_() {
    RT_FN("S__5b__21_a.S__3f__21__5d_");
    return (((double)(this->m_S__25__60_())) == ((double)(this->f_S__5d__21_Y)));
    return false;
}
bool C_S__5b__21_a::g_S_9_21__25_() {
    RT_FN("S__5b__21_a.S_9_21__25__get");
    return false;
    return false;
}
C_S__5b__21_a* C_S__5b__21_a::alloc_() {
    C_S__5b__21_a* o = rt::make<C_S__5b__21_a>();
    return o;
}
rt::Value C_S__5b__21_a::mk_(rt::Value* a, int n) {
    C_S__5b__21_a* o = alloc_();
    o->C_S__5b__21_a::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__3c__5f_: out = f_S__3c__5f_; return true;
    case NM_S__5d__21_Y: out = rt::V((double)(f_S__5d__21_Y)); return true;
    case NM_S__40_u: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__25__60_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d_u: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__25__21__3c_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3f__21__5d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__5b__21_a::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3c__5f_: f_S__3c__5f_ = rt::slot_string(v); return true;
    case NM_S__5d__21_Y: f_S__5d__21_Y = rt::toint(v); return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__5b__21_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40_u: out = m_S__40_u(); return true;
    case NM_S__25__60_: out = rt::V((double)(m_S__25__60_())); return true;
    case NM_S__3d__21__26_: out = m_S__3d__21__26_(); return true;
    case NM_S__3d_u: out = m_S__3d_u(); return true;
    case NM_S__25__21__3c_: out = m_S__25__21__3c_(); return true;
    case NM_S__3f__21__5d_: out = rt::VB(m_S__3f__21__5d_()); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3c__5f_: { rt::Value f = f_S__3c__5f_; out = rt::call_value(f, a, n); return true; }
    case NM_S__5d__21_Y: { rt::Value f = rt::V((double)(f_S__5d__21_Y)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__5b__21_a::dmeth(int id) {
    switch (id) {
    case NM_S__40_u: return true;
    case NM_S__25__60_: return true;
    case NM_S__3d__21__26_: return true;
    case NM_S__3d_u: return true;
    case NM_S__25__21__3c_: return true;
    case NM_S__3f__21__5d_: return true;
    case NM_S_9_21__25_: return false;
    case NM_S__3c__5f_: return false;
    case NM_S__5d__21_Y: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__5b__21_a::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_a::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_a::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21_Z::ctor_() {
    RT_FN("S__20__21_Z.S__20__21_Z");
    (void)((this->C_S__5b__21_a::ctor_(), rt::NUL));
    ({ double _v33879 = 101.0; this->f_S_6_21_Z = rt::touint_d(_v33879); _v33879; });
    ({ rt::Value _v33880 = rt::trv(rt::VS(g::LS[9869])); this->f_S_1i = rt::slot_string(_v33880); _v33880; });
    ({ rt::Value _v33881 = rt::trv(rt::VS(g::LS[9870])); this->f_S__3c__5f_ = rt::slot_string(_v33881); _v33881; });
    ({ rt::Value _v33882 = rt::VS(g::LS[9871]); this->f_S__5e__21__23_ = rt::slot_string(_v33882); _v33882; });
    ({ double _v33883 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v33883); _v33883; });
    ({ double _v33884 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v33884); _v33884; });
}
rt::Value C_S__20__21_Z::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__20__21_Z.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    if (this->m_S__3f__21__5d_()) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[9872]), C_S__26_c::sm_S_8_21_Z(C_S__20__21_Z::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())))));
    } else {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::trv(rt::VS(g::LS[9873]), rt::dcallv(rt::V((double)(this->m_S__25__60_())), rt::N_toString), rt::dcallv(rt::V((double)(this->f_S__5d__21_Y)), rt::N_toString)))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
int32_t C_S__20__21_Z::m_S__25__60_() {
    RT_FN("S__20__21_Z.S__25__60_");
    return C_S_8G::sm_S__27__21_M(rt::VS(g::LS[5378]));
    return 0;
}
bool C_S__20__21_Z::g_S_9_21__25_() {
    RT_FN("S__20__21_Z.S_9_21__25__get");
    return ({ bool _t33889 = ({ bool _t33888 = this->m_S__3f__21__5d_(); _t33888 ? (bool)((({ bool _t33887 = C_S__26_c::sm_S_9_22_0(); _t33887 ? _t33887 : (bool)(({ rt::Value _o33885 = C_S_8G::sm_S__23_N(g::SV.C_S__20__21_5__id); C_S_84* _p33886 = rt::as_ptr<C_S_84>(_o33885); _p33886 ? _p33886->g_S__2d_6() : rt::T(rt::dget(_o33885, NM_S__2d_6)); })); }))) : _t33888; }); _t33889 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__25_s__id)) : _t33889; });
    return false;
}
double C_S__20__21_Z::sm_S__2c__21_G() {
    RT_FN("S__20__21_Z.S__2c__21_G");
    return (0.25 * rt::m_pow(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), C_S__26_c::dsm_S__22__21_B_1(), C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.75));
    return 0.0;
}
C_S__20__21_Z* C_S__20__21_Z::alloc_() {
    C_S__20__21_Z* o = rt::make<C_S__20__21_Z>();
    return o;
}
rt::Value C_S__20__21_Z::mk_(rt::Value* a, int n) {
    C_S__20__21_Z* o = alloc_();
    o->C_S__20__21_Z::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_Z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__25__60_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__5b__21_a::dget(id, out);
}
bool C_S__20__21_Z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__5b__21_a::dset(id, v);
}
bool C_S__20__21_Z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__25__60_: out = rt::V((double)(m_S__25__60_())); return true;
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__5b__21_a::dcall(id, a, n, out);
}
bool C_S__20__21_Z::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__25__60_: return true;
    case NM_S_9_21__25_: return false;
    default: break;
    }
    return C_S__5b__21_a::dmeth(id);
}
bool C_S__20__21_Z::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__20__21_Z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_Z__id)); return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__21_Z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_Z__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__20__21_Z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void static_init_21(std::vector<std::string>& errs) {
    try { (g::SV.C_S__20__21__2c___S_2n = 2.0); } catch (...) { errs.push_back(std::string("S__20__21__2c_.S_2n: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__21__2c___S_2_21_5 = 100000.0); } catch (...) { errs.push_back(std::string("S__20__21__2c_.S_2_21_5: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__21__2c___S_1_21_S = 0.025); } catch (...) { errs.push_back(std::string("S__20__21__2c_.S_1_21_S: ") + rt::exc_text()); }
}
}  // namespace g
