// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
rt::Value C_S_0a::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_0a::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S_0a.S_0a");
    ({ double _v3074 = 6.0; this->f_S__60_r = rt::toint_d(_v3074); _v3074; });
    ({ double _v3075 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v3075); _v3075; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v3076 = 38.0; this->f_S_6_21_Z = rt::touint_d(_v3076); _v3076; });
}
C_S_0a* C_S_0a::alloc_() {
    C_S_0a* o = rt::make<C_S_0a>();
    return o;
}
rt::Value C_S_0a::mk_(rt::Value* a, int n) {
    C_S_0a* o = alloc_();
    o->C_S_0a::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S_0a::dctor_1()));
    return rt::VO(o);
}
bool C_S_0a::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S_0a::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S_0a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S_0a::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S_0a::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0a__id)); return true;
    case NM_ids: out = g::SV.C_S_0a__ids; return true;
    default: return false;
    }
}
bool C_S_0a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0a__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_0a__ids = v; return true;
    default: return false;
    }
}
bool C_S_0a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0h::ctor_() {
    RT_FN("S_0h.S_0h");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3077 = 326.0; this->f_S_6_21_Z = rt::touint_d(_v3077); _v3077; });
    ({ rt::Value _v3078 = rt::trv(rt::VS(g::LS[1069])); this->f_S_1i = rt::slot_string(_v3078); _v3078; });
    ({ rt::Value _v3079 = rt::VS(g::LS[1070]); this->f_S__5e__21__23_ = rt::slot_string(_v3079); _v3079; });
    ({ double _v3080 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v3080); _v3080; });
}
rt::Value C_S_0h::m_S__21__21_G() {
    RT_FN("S_0h.S__21__21_G");
    if (((!this->f_S_4_21_K) && C_S_8G::sm_S_7d(g::SV.C_S_6_22__2d___id))) {
        (void)(({ rt::Value _o3081 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3082 = rt::as_ptr<C_S_8G>(_o3081); _p3082 ? _p3082->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3081, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_0h::m_S__40__22_() {
    RT_FN("S_0h.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[886]), C_S__26_c::sm_S_8_21_Z(150000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), this->f_S_1i), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[1071]))));
    return rt::NUL;
}
C_S_0h* C_S_0h::alloc_() {
    C_S_0h* o = rt::make<C_S_0h>();
    return o;
}
rt::Value C_S_0h::mk_(rt::Value* a, int n) {
    C_S_0h* o = alloc_();
    o->C_S_0h::ctor_();
    return rt::VO(o);
}
bool C_S_0h::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_0h::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_0h::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_0h::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_0h::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0h::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0h__id)); return true;
    default: return false;
    }
}
bool C_S_0h::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0h__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0h::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_22_L::ctor_() {
    RT_FN("S_1_22_L.S_1_22_L");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3083 = 328.0; this->f_S_6_21_Z = rt::touint_d(_v3083); _v3083; });
    ({ rt::Value _v3084 = rt::trv(rt::VS(g::LS[560])); this->f_S_1i = rt::slot_string(_v3084); _v3084; });
    ({ rt::Value _v3085 = rt::trv(rt::VS(g::LS[1072])); this->f_S_7_23_ = rt::slot_string(_v3085); _v3085; });
    ({ rt::Value _v3086 = rt::VS(g::LS[561]); this->f_S__5e__21__23_ = rt::slot_string(_v3086); _v3086; });
    ({ double _v3087 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3087); _v3087; });
}
rt::Value C_S_1_22_L::m_S__21__21_G() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_1_22_L.S__21__21_G");
    if ((!this->f_S_4_21_K)) {
        {
            std::vector<rt::Value> _lst3088;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst3088);
            for (const rt::Value& _x3089 : _lst3088) {
                l_A__loc1_ = _x3089;
                if ((({ bool _t3092 = rt::is_class(l_A__loc1_, C_S__5d__3c_::CI); _t3092 ? (bool)((!({ rt::Value _o3090 = l_A__loc1_; C_S__60_6* _p3091 = rt::as_ptr<C_S__60_6>(_o3090); _p3091 ? _p3091->f_S__3f__21_6 : rt::T(rt::dget(_o3090, NM_S__3f__21_6)); }))) : _t3092; }) && (({ bool _t3097 = (((double)(({ rt::Value _o3093 = l_A__loc1_; C_S__60_6* _p3094 = rt::as_ptr<C_S__60_6>(_o3093); _p3094 ? _p3094->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3093, NM_S__2d__21__5e_)); }))) == 13.0); _t3097 ? _t3097 : (bool)((((double)(({ rt::Value _o3095 = l_A__loc1_; C_S__60_6* _p3096 = rt::as_ptr<C_S__60_6>(_o3095); _p3096 ? _p3096->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3095, NM_S__2d__21__5e_)); }))) == 14.0)); }) || (((double)(({ rt::Value _o3098 = l_A__loc1_; C_S__60_6* _p3099 = rt::as_ptr<C_S__60_6>(_o3098); _p3099 ? _p3099->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3098, NM_S__2d__21__5e_)); }))) == 15.0)))) {
                    return rt::NUL;
                }
            }
        }
        (void)(({ rt::Value _o3100 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3101 = rt::as_ptr<C_S_8G>(_o3100); _p3101 ? _p3101->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3100, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_1_22_L::g_S__5d__3b_() {
    RT_FN("S_1_22_L.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 135.0);
    return false;
}
bool C_S_1_22_L::g_S__3f__21_a() {
    RT_FN("S_1_22_L.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 2.0);
    return false;
}
C_S_1_22_L* C_S_1_22_L::alloc_() {
    C_S_1_22_L* o = rt::make<C_S_1_22_L>();
    return o;
}
rt::Value C_S_1_22_L::mk_(rt::Value* a, int n) {
    C_S_1_22_L* o = alloc_();
    o->C_S_1_22_L::ctor_();
    return rt::VO(o);
}
bool C_S_1_22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_1_22_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_1_22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_1_22_L::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_1_22_L::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_22_L__id)); return true;
    default: return false;
    }
}
bool C_S_1_22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_22_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_1_26_::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_1_26_::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S_1_26_.S_1_26_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3102 = 232.0; this->f_S_6_21_Z = rt::touint_d(_v3102); _v3102; });
    ({ int32_t _v3103 = l_param1; this->f_S_5w = _v3103; _v3103; });
    ({ rt::Value _v3104 = l_param2; this->f_S_1i = rt::slot_string(_v3104); _v3104; });
    ({ rt::Value _v3105 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v3105); _v3105; });
    ({ double _v3106 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v3106); _v3106; });
    ({ rt::Value _v3107 = rt::VS(g::LS[1073]); this->f_S__3f__21__3d_ = rt::slot_string(_v3107); _v3107; });
}
rt::Value C_S_1_26_::m_S__5b__21_C() {
    int32_t l_A__loc1_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S_1_26_.S__5b__21_C");
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::NUL);
    (void)(this->C_S__23__21__60_::m_S__5b__21_C());
    ({ rt::Value _v3108 = rt::new_vectorv(rt::E_ANY); this->f_S__26__2d_ = _v3108; _v3108; });
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) < rt::alen(g::SV.C_S_8G__S__2d__21_4))) {
        (l_A__loc2_ = rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc1_))));
        if ((rt::is_class(l_A__loc2_, C_S__25_p::CI) && (((double)(({ rt::Value _o3110 = (({ rt::Value _t3109 = l_A__loc2_; rt::is_class(_t3109, C_S__25_p::CI) ? _t3109 : rt::NUL; })); C_S__25_p* _p3111 = rt::as_ptr<C_S__25_p>(_o3110); _p3111 ? _p3111->f_S__60_r : rt::touint(rt::dget(_o3110, NM_S__60_r)); }))) == ((double)(this->f_S_5w))))) {
            if ((!((((double)(this->f_S_5w)) == 1.0) && (({ rt::Value _o3113 = (({ rt::Value _t3112 = l_A__loc2_; rt::is_class(_t3112, C_S__25_p::CI) ? _t3112 : rt::NUL; })); C_S__25_p* _p3114 = rt::as_ptr<C_S__25_p>(_o3113); _p3114 ? _p3114->f_S__3b__21_v : rt::T(rt::dget(_o3113, NM_S__3b__21_v)); }) || ({ rt::Value _o3116 = (({ rt::Value _t3115 = l_A__loc2_; rt::is_class(_t3115, C_S__25_p::CI) ? _t3115 : rt::NUL; })); C_S__25_p* _p3117 = rt::as_ptr<C_S__25_p>(_o3116); _p3117 ? _p3117->f_S__60__22__2c_ : rt::T(rt::dget(_o3116, NM_S__60__22__2c_)); }))))) {
                if ((!(((double)(({ rt::Value _o3119 = (({ rt::Value _t3118 = l_A__loc2_; rt::is_class(_t3118, C_S__25_p::CI) ? _t3118 : rt::NUL; })); C_S__25_p* _p3120 = rt::as_ptr<C_S__25_p>(_o3119); _p3120 ? _p3120->f_S__60_g : rt::touint(rt::dget(_o3119, NM_S__60_g)); }))) == ((double)(g::SV.C_S_5_21_3__id))))) {
                    (void)(rt::dcallv(this->f_S__26__2d_, rt::N_push, ({ rt::Value _t3121 = l_A__loc2_; rt::is_class(_t3121, C_S__25_p::CI) ? _t3121 : rt::NUL; })));
                }
            }
        }
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    return rt::NUL;
}
rt::Value C_S_1_26_::m_S__21__21_G() {
    RT_FN("S_1_26_.S__21__21_G");
    if (((!this->f_S_4_21_K) && (((double)(this->m_S__5d__21_P())) == rt::alen(this->f_S__26__2d_)))) {
        (void)(({ rt::Value _o3122 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3123 = rt::as_ptr<C_S_8G>(_o3122); _p3123 ? _p3123->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3122, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_1_26_::m_S_8_5b_() {
    int32_t l_A__loc1_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S_1_26_.S_8_5b_");
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::slot_string(this->m_S__3f__21_N(((double)(this->m_S__5d__21_P())), rt::alen(this->f_S__26__2d_), C_S__23__21__60_::dm_S__3f__21_N_2())));
    if (this->f_S_4_21_K) {
        return rt::slot_string(l_A__loc2_);
    }
    (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1074]))))));
    (l_A__loc1_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc1_)) < rt::alen(this->f_S__26__2d_))) {
        if ((!({ rt::Value _o3124 = rt::arr_at(this->f_S__26__2d_, ((double)(l_A__loc1_))); C_S__25_p* _p3125 = rt::as_ptr<C_S__25_p>(_o3124); _p3125 ? _p3125->f_S__3f__21_6 : rt::T(rt::dget(_o3124, NM_S__3f__21_6)); }))) {
            (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[143]), C_S__26_c::sm_S_1_2c_(({ rt::Value _o3126 = rt::arr_at(this->f_S__26__2d_, ((double)(l_A__loc1_))); C_S__25_p* _p3127 = rt::as_ptr<C_S__25_p>(_o3126); _p3127 ? _p3127->f_S__60_g : rt::touint(rt::dget(_o3126, NM_S__60_g)); }))), rt::VS(g::LS[194])), rt::dcallv(rt::V((double)(({ rt::Value _o3128 = rt::arr_at(this->f_S__26__2d_, ((double)(l_A__loc1_))); C_S__25_p* _p3129 = rt::as_ptr<C_S__25_p>(_o3128); _p3129 ? _p3129->f_S__60_r : rt::touint(rt::dget(_o3128, NM_S__60_r)); }))), rt::N_toString)), rt::VS(g::LS[141])), rt::dcallv(rt::V((double)(C_S__26_c::sm_S__2b__22_4(C_S_8G::sm_S__23_N(({ rt::Value _o3130 = rt::arr_at(this->f_S__26__2d_, ((double)(l_A__loc1_))); C_S__25_p* _p3131 = rt::as_ptr<C_S__25_p>(_o3130); _p3131 ? _p3131->f_S__60_g : rt::touint(rt::dget(_o3130, NM_S__60_g)); }))))), rt::N_toString)), rt::VS(g::LS[931])))));
        }
        (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
    }
    return rt::slot_string(l_A__loc2_);
    return rt::NUL;
}
rt::Value C_S_1_26_::m_S__40__22_() {
    RT_FN("S_1_26_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1075]), C_S__26_c::sm_S_8_21_Z((((double)(this->f_S_5w)) + 1.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
int32_t C_S_1_26_::m_S__5d__21_P() {
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc1_ = 0;
    RT_FN("S_1_26_.S__5d__21_P");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) < rt::alen(this->f_S__26__2d_))) {
        if (({ rt::Value _o3132 = rt::arr_at(this->f_S__26__2d_, ((double)(l_A__loc2_))); C_S__25_p* _p3133 = rt::as_ptr<C_S__25_p>(_o3132); _p3133 ? _p3133->f_S__3f__21_6 : rt::T(rt::dget(_o3132, NM_S__3f__21_6)); })) {
            (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
        }
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    return l_A__loc1_;
    return 0;
}
bool C_S_1_26_::g_S__5d__3b_() {
    RT_FN("S_1_26_.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 42.0);
    return false;
}
bool C_S_1_26_::g_S__3f__21_a() {
    RT_FN("S_1_26_.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S_1_26_* C_S_1_26_::alloc_() {
    C_S_1_26_* o = rt::make<C_S_1_26_>();
    return o;
}
rt::Value C_S_1_26_::mk_(rt::Value* a, int n) {
    C_S_1_26_* o = alloc_();
    o->C_S_1_26_::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S_1_26_::dctor_2()));
    return rt::VO(o);
}
bool C_S_1_26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__26__2d_: out = f_S__26__2d_; return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__5d__21_P: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_1_26_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    case NM_S__26__2d_: f_S__26__2d_ = v; return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_1_26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__5d__21_P: out = rt::V((double)(m_S__5d__21_P())); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    case NM_S__26__2d_: { rt::Value f = f_S__26__2d_; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_1_26_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S__5d__21_P: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    case NM_S_5w: return false;
    case NM_S__26__2d_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_1_26_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_26___id)); return true;
    default: return false;
    }
}
bool C_S_1_26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_1_26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_1_40_::ctor_() {
    RT_FN("S_1_40_.S_1_40_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3134 = 73.0; this->f_S_6_21_Z = rt::touint_d(_v3134); _v3134; });
    ({ rt::Value _v3135 = rt::trv(rt::VS(g::LS[636])); this->f_S_1i = rt::slot_string(_v3135); _v3135; });
    ({ rt::Value _v3136 = rt::trv(rt::VS(g::LS[1076])); this->f_S_7_23_ = rt::slot_string(_v3136); _v3136; });
    ({ rt::Value _v3137 = rt::VS(g::LS[637]); this->f_S__5e__21__23_ = rt::slot_string(_v3137); _v3137; });
    ({ double _v3138 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v3138); _v3138; });
}
rt::Value C_S_1_40_::m_S__21__21_G() {
    RT_FN("S_1_40_.S__21__21_G");
    if ((({ bool _t3139 = (!this->f_S_4_21_K); _t3139 ? (bool)(C_S_8G::sm_S__3c__21_B(g::SV.C_S__27_K__id)) : _t3139; }) && (C_S__26_c::sm_S__21__2d_(false, true) >= 50.0))) {
        (void)(({ rt::Value _o3140 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3141 = rt::as_ptr<C_S_8G>(_o3140); _p3141 ? _p3141->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3140, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S_1_40_* C_S_1_40_::alloc_() {
    C_S_1_40_* o = rt::make<C_S_1_40_>();
    return o;
}
rt::Value C_S_1_40_::mk_(rt::Value* a, int n) {
    C_S_1_40_* o = alloc_();
    o->C_S_1_40_::ctor_();
    return rt::VO(o);
}
bool C_S_1_40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_1_40_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_1_40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_1_40_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_1_40_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_1_40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_1_40___id)); return true;
    case NM_ids: out = g::SV.C_S_1_40___ids; return true;
    default: return false;
    }
}
bool C_S_1_40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_1_40___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_1_40___ids = v; return true;
    default: return false;
    }
}
bool C_S_1_40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_21_7::ctor_() {
    RT_FN("S_2_21_7.S_2_21_7");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3142 = 212.0; this->f_S_6_21_Z = rt::touint_d(_v3142); _v3142; });
    ({ rt::Value _v3143 = rt::VS(g::LS[1078]); this->f_S_1i = rt::slot_string(_v3143); _v3143; });
    ({ rt::Value _v3144 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3144); _v3144; });
    ({ rt::Value _v3145 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3145); _v3145; });
    ({ double _v3146 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3146); _v3146; });
    ({ bool _v3147 = true; this->f_S_3_21_9 = _v3147; _v3147; });
}
C_S_2_21_7* C_S_2_21_7::alloc_() {
    C_S_2_21_7* o = rt::make<C_S_2_21_7>();
    return o;
}
rt::Value C_S_2_21_7::mk_(rt::Value* a, int n) {
    C_S_2_21_7* o = alloc_();
    o->C_S_2_21_7::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_7::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_2_21_7::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_2_21_7::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_2_21_7::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_2_21_7::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_7::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_7__id)); return true;
    default: return false;
    }
}
bool C_S_2_21_7::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_7__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_21_7::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_21_d::ctor_() {
    RT_FN("S_2_21_d.S_2_21_d");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3148 = 183.0; this->f_S_6_21_Z = rt::touint_d(_v3148); _v3148; });
    ({ rt::Value _v3149 = rt::VS(g::LS[1079]); this->f_S_1i = rt::slot_string(_v3149); _v3149; });
    ({ rt::Value _v3150 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3150); _v3150; });
    ({ rt::Value _v3151 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3151); _v3151; });
    ({ double _v3152 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3152); _v3152; });
    ({ bool _v3153 = true; this->f_S_3_21_9 = _v3153; _v3153; });
}
C_S_2_21_d* C_S_2_21_d::alloc_() {
    C_S_2_21_d* o = rt::make<C_S_2_21_d>();
    return o;
}
rt::Value C_S_2_21_d::mk_(rt::Value* a, int n) {
    C_S_2_21_d* o = alloc_();
    o->C_S_2_21_d::ctor_();
    return rt::VO(o);
}
bool C_S_2_21_d::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_2_21_d::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_2_21_d::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_2_21_d::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_2_21_d::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_21_d::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_21_d__id)); return true;
    default: return false;
    }
}
bool C_S_2_21_d::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_21_d__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_21_d::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2_26_::ctor_() {
    RT_FN("S_2_26_.S_2_26_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3154 = 113.0; this->f_S_6_21_Z = rt::touint_d(_v3154); _v3154; });
    ({ rt::Value _v3155 = rt::trv(rt::VS(g::LS[673])); this->f_S_1i = rt::slot_string(_v3155); _v3155; });
    ({ rt::Value _v3156 = rt::trv(rt::VS(g::LS[1080])); this->f_S_7_23_ = rt::slot_string(_v3156); _v3156; });
    ({ rt::Value _v3157 = rt::VS(g::LS[674]); this->f_S__5e__21__23_ = rt::slot_string(_v3157); _v3157; });
    ({ double _v3158 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3158); _v3158; });
}
rt::Value C_S_2_26_::m_S__21__21_G() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_2_26_.S__21__21_G");
    if ((!this->f_S_4_21_K)) {
        {
            std::vector<rt::Value> _lst3159;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst3159);
            for (const rt::Value& _x3160 : _lst3159) {
                l_A__loc1_ = _x3160;
                if ((({ bool _t3166 = ({ bool _t3163 = rt::is_class(l_A__loc1_, C_S__5d__3c_::CI); _t3163 ? (bool)((!({ rt::Value _o3161 = l_A__loc1_; C_S__60_6* _p3162 = rt::as_ptr<C_S__60_6>(_o3161); _p3162 ? _p3162->f_S__3f__21_6 : rt::T(rt::dget(_o3161, NM_S__3f__21_6)); }))) : _t3163; }); _t3166 ? (bool)((((double)(({ rt::Value _o3164 = l_A__loc1_; C_S__60_6* _p3165 = rt::as_ptr<C_S__60_6>(_o3164); _p3165 ? _p3165->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3164, NM_S__2d__21__5e_)); }))) >= 0.0)) : _t3166; }) && (((double)(({ rt::Value _o3167 = l_A__loc1_; C_S__60_6* _p3168 = rt::as_ptr<C_S__60_6>(_o3167); _p3168 ? _p3168->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3167, NM_S__2d__21__5e_)); }))) <= 5.0))) {
                    return rt::NUL;
                }
            }
        }
        (void)(({ rt::Value _o3169 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3170 = rt::as_ptr<C_S_8G>(_o3169); _p3170 ? _p3170->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3169, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_2_26_::g_S__5d__3b_() {
    RT_FN("S_2_26_.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 2.0);
    return false;
}
bool C_S_2_26_::g_S__3f__21_a() {
    RT_FN("S_2_26_.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 2.0);
    return false;
}
C_S_2_26_* C_S_2_26_::alloc_() {
    C_S_2_26_* o = rt::make<C_S_2_26_>();
    return o;
}
rt::Value C_S_2_26_::mk_(rt::Value* a, int n) {
    C_S_2_26_* o = alloc_();
    o->C_S_2_26_::ctor_();
    return rt::VO(o);
}
bool C_S_2_26_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_2_26_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_2_26_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_2_26_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_2_26_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2_26_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2_26___id)); return true;
    default: return false;
    }
}
bool C_S_2_26_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2_26___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2_26_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_2E::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_2E::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S_2E.S_2E");
    ({ double _v3171 = 4.0; this->f_S__60_r = rt::toint_d(_v3171); _v3171; });
    ({ double _v3172 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v3172); _v3172; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v3173 = 35.0; this->f_S_6_21_Z = rt::touint_d(_v3173); _v3173; });
}
C_S_2E* C_S_2E::alloc_() {
    C_S_2E* o = rt::make<C_S_2E>();
    return o;
}
rt::Value C_S_2E::mk_(rt::Value* a, int n) {
    C_S_2E* o = alloc_();
    o->C_S_2E::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S_2E::dctor_1()));
    return rt::VO(o);
}
bool C_S_2E::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S_2E::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S_2E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S_2E::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S_2E::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2E__id)); return true;
    case NM_ids: out = g::SV.C_S_2E__ids; return true;
    default: return false;
    }
}
bool C_S_2E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2E__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_2E__ids = v; return true;
    default: return false;
    }
}
bool C_S_2E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2J::ctor_() {
    RT_FN("S_2J.S_2J");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3174 = 7.0; this->f_S_6_21_Z = rt::touint_d(_v3174); _v3174; });
    ({ rt::Value _v3175 = rt::VS(g::LS[1082]); this->f_S_1i = rt::slot_string(_v3175); _v3175; });
    ({ rt::Value _v3176 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3176); _v3176; });
    ({ rt::Value _v3177 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3177); _v3177; });
    ({ double _v3178 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3178); _v3178; });
    ({ bool _v3179 = true; this->f_S_3_21_9 = _v3179; _v3179; });
}
C_S_2J* C_S_2J::alloc_() {
    C_S_2J* o = rt::make<C_S_2J>();
    return o;
}
rt::Value C_S_2J::mk_(rt::Value* a, int n) {
    C_S_2J* o = alloc_();
    o->C_S_2J::ctor_();
    return rt::VO(o);
}
bool C_S_2J::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_2J::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_2J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_2J::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_2J::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2J__id)); return true;
    case NM_ids: out = g::SV.C_S_2J__ids; return true;
    default: return false;
    }
}
bool C_S_2J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2J__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_2J__ids = v; return true;
    default: return false;
    }
}
bool C_S_2J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_2y::ctor_() {
    RT_FN("S_2y.S_2y");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3180 = 188.0; this->f_S_6_21_Z = rt::touint_d(_v3180); _v3180; });
    ({ rt::Value _v3181 = rt::trv(rt::VS(g::LS[516])); this->f_S_1i = rt::slot_string(_v3181); _v3181; });
    ({ rt::Value _v3182 = rt::VS(g::LS[517]); this->f_S__5e__21__23_ = rt::slot_string(_v3182); _v3182; });
    ({ double _v3183 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3183); _v3183; });
}
rt::Value C_S_2y::m_S__40__22_() {
    RT_FN("S_2y.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[912]), C_S__26_c::sm_S_8_21_Z(2750.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_2y::m_S__21__21_G() {
    RT_FN("S_2y.S__21__21_G");
    if (((!this->f_S_4_21_K) && (((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d((-1.0)), true))) >= 2750.0))) {
        (void)(({ rt::Value _o3184 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3185 = rt::as_ptr<C_S_8G>(_o3184); _p3185 ? _p3185->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3184, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_2y::g_S__5d__3b_() {
    RT_FN("S_2y.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 28.0);
    return false;
}
bool C_S_2y::g_S__3f__21_a() {
    RT_FN("S_2y.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
C_S_2y* C_S_2y::alloc_() {
    C_S_2y* o = rt::make<C_S_2y>();
    return o;
}
rt::Value C_S_2y::mk_(rt::Value* a, int n) {
    C_S_2y* o = alloc_();
    o->C_S_2y::ctor_();
    return rt::VO(o);
}
bool C_S_2y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_2y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_2y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_2y::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_2y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_2y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_2y__id)); return true;
    default: return false;
    }
}
bool C_S_2y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_2y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_2y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_21_1::ctor_() {
    RT_FN("S_3_21_1.S_3_21_1");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3186 = 86.0; this->f_S_6_21_Z = rt::touint_d(_v3186); _v3186; });
    ({ rt::Value _v3187 = rt::trv(rt::VS(g::LS[396])); this->f_S_1i = rt::slot_string(_v3187); _v3187; });
    ({ rt::Value _v3188 = rt::trv(rt::VS(g::LS[1084])); this->f_S_7_23_ = rt::slot_string(_v3188); _v3188; });
    ({ rt::Value _v3189 = rt::VS(g::LS[397]); this->f_S__5e__21__23_ = rt::slot_string(_v3189); _v3189; });
    ({ double _v3190 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3190); _v3190; });
}
rt::Value C_S_3_21_1::m_S__21__21_G() {
    RT_FN("S_3_21_1.S__21__21_G");
    if ((({ bool _t3192 = ({ bool _t3191 = (!this->f_S_4_21_K); _t3191 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_3N__id)) : _t3191; }); _t3192 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21__3b___id)) : _t3192; }) && C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id))) {
        (void)(({ rt::Value _o3193 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3194 = rt::as_ptr<C_S_8G>(_o3193); _p3194 ? _p3194->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3193, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_3_21_1::g_S__5d__3b_() {
    RT_FN("S_3_21_1.S__5d__3b__get");
    return true;
    return false;
}
C_S_3_21_1* C_S_3_21_1::alloc_() {
    C_S_3_21_1* o = rt::make<C_S_3_21_1>();
    return o;
}
rt::Value C_S_3_21_1::mk_(rt::Value* a, int n) {
    C_S_3_21_1* o = alloc_();
    o->C_S_3_21_1::ctor_();
    return rt::VO(o);
}
bool C_S_3_21_1::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_3_21_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_3_21_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_3_21_1::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_3_21_1::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_21_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_21_1__id)); return true;
    case NM_ids: out = g::SV.C_S_3_21_1__ids; return true;
    default: return false;
    }
}
bool C_S_3_21_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_21_1__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_3_21_1__ids = v; return true;
    default: return false;
    }
}
bool C_S_3_21_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_21_4::ctor_() {
    RT_FN("S_3_21_4.S_3_21_4");
    (void)((this->C_S__60__3d_::ctor_(), rt::NUL));
    ({ double _v3195 = 101.0; this->f_S_6_21_Z = rt::touint_d(_v3195); _v3195; });
    ({ rt::Value _v3196 = rt::trv(rt::VS(g::LS[550])); this->f_S_1i = rt::slot_string(_v3196); _v3196; });
    ({ rt::Value _v3197 = rt::VS(g::LS[551]); this->f_S__5e__21__23_ = rt::slot_string(_v3197); _v3197; });
    ({ double _v3198 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3198); _v3198; });
    ({ double _v3199 = 0.0; this->f_S__21_G = rt::toint_d(_v3199); _v3199; });
}
C_S_3_21_4* C_S_3_21_4::alloc_() {
    C_S_3_21_4* o = rt::make<C_S_3_21_4>();
    return o;
}
rt::Value C_S_3_21_4::mk_(rt::Value* a, int n) {
    C_S_3_21_4* o = alloc_();
    o->C_S_3_21_4::ctor_();
    return rt::VO(o);
}
bool C_S_3_21_4::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dget(id, out);
}
bool C_S_3_21_4::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dset(id, v);
}
bool C_S_3_21_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dcall(id, a, n, out);
}
bool C_S_3_21_4::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dmeth(id);
}
bool C_S_3_21_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_21_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_21_4__id)); return true;
    case NM_ids: out = g::SV.C_S_3_21_4__ids; return true;
    default: return false;
    }
}
bool C_S_3_21_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_21_4__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_3_21_4__ids = v; return true;
    default: return false;
    }
}
bool C_S_3_21_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3_21_p::ctor_() {
    RT_FN("S_3_21_p.S_3_21_p");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3200 = 270.0; this->f_S_6_21_Z = rt::touint_d(_v3200); _v3200; });
    ({ rt::Value _v3201 = rt::trv(rt::VS(g::LS[554])); this->f_S_1i = rt::slot_string(_v3201); _v3201; });
    ({ rt::Value _v3202 = rt::trv(rt::VS(g::LS[1087])); this->f_S_7_23_ = rt::slot_string(_v3202); _v3202; });
    ({ rt::Value _v3203 = rt::VS(g::LS[555]); this->f_S__5e__21__23_ = rt::slot_string(_v3203); _v3203; });
    ({ double _v3204 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3204); _v3204; });
}
rt::Value C_S_3_21_p::m_S__21__21_G() {
    bool l_A__loc2_ = false;
    int32_t l_A__loc1_ = 0;
    RT_FN("S_3_21_p.S__21__21_G");
    (l_A__loc2_ = false);
    (l_A__loc1_ = rt::toint_d(0.0));
    if (((!this->f_S_4_21_K) && (((double)(C_S_8G::sg_S__2c_P())) >= 1.0))) {
        (l_A__loc2_ = true);
        (l_A__loc1_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc1_)) <= 15.0)) {
            if (C_S__26_c::sm_S__3e__25_(l_A__loc1_)) {
                if ((!rt::eq(rt::arr_at(g::SV.C_S__23__21__21___S_6_21_d, ((double)(l_A__loc1_))), rt::V(333.0)))) {
                    (l_A__loc2_ = false);
                    break;
                }
            }
            (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
        }
        if (l_A__loc2_) {
            (void)(({ rt::Value _o3205 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3206 = rt::as_ptr<C_S_8G>(_o3205); _p3206 ? _p3206->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3205, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S_3_21_p::g_S__5d__3b_() {
    RT_FN("S_3_21_p.S__5d__3b__get");
    return true;
    return false;
}
C_S_3_21_p* C_S_3_21_p::alloc_() {
    C_S_3_21_p* o = rt::make<C_S_3_21_p>();
    return o;
}
rt::Value C_S_3_21_p::mk_(rt::Value* a, int n) {
    C_S_3_21_p* o = alloc_();
    o->C_S_3_21_p::ctor_();
    return rt::VO(o);
}
bool C_S_3_21_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_3_21_p::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_3_21_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_3_21_p::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_3_21_p::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_21_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_21_p__id)); return true;
    default: return false;
    }
}
bool C_S_3_21_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_21_p__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3_21_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_3_3c_::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_3_3c_::ctor_(double p0, rt::Value p1, rt::Value p2) {
    double l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S_3_3c_.S_3_3c_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3207 = 49.0; this->f_S_6_21_Z = rt::touint_d(_v3207); _v3207; });
    ({ double _v3208 = l_param1; this->f_S_5w = _v3208; _v3208; });
    ({ rt::Value _v3209 = l_param2; this->f_S_1i = rt::slot_string(_v3209); _v3209; });
    ({ rt::Value _v3210 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v3210); _v3210; });
    ({ double _v3211 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3211); _v3211; });
    ({ rt::Value _v3212 = rt::VS(g::LS[1088]); this->f_S__3f__21__3d_ = rt::slot_string(_v3212); _v3212; });
}
rt::Value C_S_3_3c_::m_S__21__21_G() {
    RT_FN("S_3_3c_.S__21__21_G");
    if (((!this->f_S_4_21_K) && ((C_S_8G::sg_S__22__21_0() >= this->f_S_5w) || ((((double)(C_S_8G::sg_S__2c_P())) >= 1.0) && (this->f_S_5w <= 1e+144))))) {
        (void)(({ rt::Value _o3213 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3214 = rt::as_ptr<C_S_8G>(_o3213); _p3214 ? _p3214->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3213, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_3_3c_::m_S_8_5b_() {
    RT_FN("S_3_3c_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S_8G::sg_S__22__21_0(), this->f_S_5w, true));
    return rt::NUL;
}
rt::Value C_S_3_3c_::m_S__40__22_() {
    RT_FN("S_3_3c_.S__40__22_");
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[1089]), rt::VS(g::LS[1090]), rt::V(this->f_S_5w), C_S__26_c::sm_S_8_21_Z(this->f_S_5w, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S_3_3c_* C_S_3_3c_::alloc_() {
    C_S_3_3c_* o = rt::make<C_S_3_3c_>();
    return o;
}
rt::Value C_S_3_3c_::mk_(rt::Value* a, int n) {
    C_S_3_3c_* o = alloc_();
    o->C_S_3_3c_::ctor_(rt::arg<double>(a, n, 0, NAN), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S_3_3c_::dctor_2()));
    return rt::VO(o);
}
bool C_S_3_3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V(f_S_5w); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_3_3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::tonum(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_3_3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V(f_S_5w); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_3_3c_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_3_3c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3_3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3_3c___id)); return true;
    case NM_ids: out = g::SV.C_S_3_3c___ids; return true;
    default: return false;
    }
}
bool C_S_3_3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3_3c___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_3_3c___ids = v; return true;
    default: return false;
    }
}
bool C_S_3_3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_30::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_30::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S_30.S_30");
    ({ double _v3215 = 11.0; this->f_S__60_r = rt::toint_d(_v3215); _v3215; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v3216 = 24.0; this->f_S_6_21_Z = rt::touint_d(_v3216); _v3216; });
}
C_S_30* C_S_30::alloc_() {
    C_S_30* o = rt::make<C_S_30>();
    return o;
}
rt::Value C_S_30::mk_(rt::Value* a, int n) {
    C_S_30* o = alloc_();
    o->C_S_30::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S_30::dctor_1()));
    return rt::VO(o);
}
bool C_S_30::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S_30::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S_30::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S_30::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S_30::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_30::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_30__id)); return true;
    case NM_ids: out = g::SV.C_S_30__ids; return true;
    default: return false;
    }
}
bool C_S_30::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_30__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_30__ids = v; return true;
    default: return false;
    }
}
bool C_S_30::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_35::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_35::ctor_(double p0, rt::Value p1, rt::Value p2) {
    double l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S_35.S_35");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3217 = 47.0; this->f_S_6_21_Z = rt::touint_d(_v3217); _v3217; });
    ({ double _v3218 = l_param1; this->f_S_5w = _v3218; _v3218; });
    ({ rt::Value _v3219 = l_param2; this->f_S_1i = rt::slot_string(_v3219); _v3219; });
    ({ rt::Value _v3220 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v3220); _v3220; });
    ({ double _v3221 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3221); _v3221; });
    ({ rt::Value _v3222 = rt::VS(g::LS[1093]); this->f_S__3f__21__3d_ = rt::slot_string(_v3222); _v3222; });
}
rt::Value C_S_35::m_S__21__21_G() {
    RT_FN("S_35.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 5.0), rt::V(this->f_S_5w)))) {
        (void)(({ rt::Value _o3223 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3224 = rt::as_ptr<C_S_8G>(_o3223); _p3224 ? _p3224->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3223, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_35::m_S_8_5b_() {
    RT_FN("S_35.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 5.0)), this->f_S_5w, true));
    return rt::NUL;
}
rt::Value C_S_35::m_S__40__22_() {
    RT_FN("S_35.S__40__22_");
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[1094]), rt::VS(g::LS[1095]), rt::V(this->f_S_5w), C_S__26_c::sm_S_8_21_Z(this->f_S_5w, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S_35* C_S_35::alloc_() {
    C_S_35* o = rt::make<C_S_35>();
    return o;
}
rt::Value C_S_35::mk_(rt::Value* a, int n) {
    C_S_35* o = alloc_();
    o->C_S_35::ctor_(rt::arg<double>(a, n, 0, NAN), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S_35::dctor_2()));
    return rt::VO(o);
}
bool C_S_35::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V(f_S_5w); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_35::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::tonum(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_35::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V(f_S_5w); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_35::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_35::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_35::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_35__id)); return true;
    case NM_ids: out = g::SV.C_S_35__ids; return true;
    default: return false;
    }
}
bool C_S_35::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_35__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_35__ids = v; return true;
    default: return false;
    }
}
bool C_S_35::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_39::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_39::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S_39.S_39");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3225 = 55.0; this->f_S_6_21_Z = rt::touint_d(_v3225); _v3225; });
    ({ int32_t _v3226 = l_param1; this->f_S_5w = _v3226; _v3226; });
    ({ rt::Value _v3227 = rt::tr_nv(rt::VS(g::LS[1097]), rt::VS(g::LS[1098]), rt::V((double)(this->f_S_5w)), rt::dcallv(rt::V((double)(this->f_S_5w)), rt::N_toString)); this->f_S_1i = rt::slot_string(_v3227); _v3227; });
    ({ rt::Value _v3228 = l_param2; this->f_S__5e__21__23_ = rt::slot_string(_v3228); _v3228; });
    ({ rt::Value _v3229 = rt::VS(g::LS[1099]); this->f_S__3f__21__3d_ = rt::slot_string(_v3229); _v3229; });
    ({ double _v3230 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3230); _v3230; });
}
rt::Value C_S_39::m_S__21__21_G() {
    RT_FN("S_39.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0), rt::V((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o3231 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3232 = rt::as_ptr<C_S_8G>(_o3231); _p3232 ? _p3232->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3231, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_39::m_S_8_5b_() {
    RT_FN("S_39.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 13.0)), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S_39::m_S__40__22_() {
    RT_FN("S_39.S__40__22_");
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[1100]), rt::VS(g::LS[1100]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S_39* C_S_39::alloc_() {
    C_S_39* o = rt::make<C_S_39>();
    return o;
}
rt::Value C_S_39::mk_(rt::Value* a, int n) {
    C_S_39* o = alloc_();
    o->C_S_39::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S_39::dctor_1()));
    return rt::VO(o);
}
bool C_S_39::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_39::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_39::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_39::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_39::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_39::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_39__id)); return true;
    case NM_ids: out = g::SV.C_S_39__ids; return true;
    default: return false;
    }
}
bool C_S_39::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_39__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_39__ids = v; return true;
    default: return false;
    }
}
bool C_S_39::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_3E::ctor_() {
    RT_FN("S_3E.S_3E");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3233 = 216.0; this->f_S_6_21_Z = rt::touint_d(_v3233); _v3233; });
    ({ rt::Value _v3234 = rt::trv(rt::VS(g::LS[1102])); this->f_S_1i = rt::slot_string(_v3234); _v3234; });
    ({ rt::Value _v3235 = rt::VS(g::LS[1103]); this->f_S__5e__21__23_ = rt::slot_string(_v3235); _v3235; });
    ({ bool _v3236 = true; this->f_S_3_21_9 = _v3236; _v3236; });
}
rt::Value C_S_3E::m_S__21__21_G() {
    RT_FN("S_3E.S__21__21_G");
    (void)(this->C_S__23__21__60_::m_S__21__21_G());
    if ((this->f_S_4_21_K && (({ bool _t3237 = (!(((double)(C_PlayFab::sg_season())) == 7.0)); _t3237 ? _t3237 : (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3c__21_2__id)); }) || C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_1__id)))) {
        ({ bool _v3238 = false; this->f_S_4_21_K = _v3238; _v3238; });
    }
    return rt::NUL;
}
rt::Value C_S_3E::m_S_1_21__2c_() {
    uint32_t l_A__loc2_ = 0u;
    uint32_t l_A__loc1_ = 0u;
    double l_A__loc4_ = NAN;
    RT_FN("S_3E.S_1_21__2c_");
    (l_A__loc2_ = C_S_3E::sm_S__2b_A());
    if ((((double)(l_A__loc2_)) >= 50.0)) {
        (l_A__loc2_ = rt::touint_d(50.0));
        return rt::NUL;
    }
    (l_A__loc1_ = C_S_3E::sm_S_4b(l_A__loc2_));
    if (rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 13.0), rt::V((double)(l_A__loc1_)))) {
        (l_A__loc4_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 13.0)) - ((double)(l_A__loc1_))));
        ({ rt::Value _v3239 = rt::V(l_A__loc4_); rt::idx_set(g::SV.C_S_8G__S_6_21__2d_, rt::V(13.0), _v3239); });
    }
    return rt::NUL;
}
rt::Value C_S_3E::m_S__40__22_() {
    uint32_t l_A__loc3_ = 0u;
    uint32_t l_A__loc2_ = 0u;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_3E.S__40__22_");
    (l_A__loc3_ = C_S_3E::sm_S__2b_A());
    (l_A__loc2_ = C_S_3E::sm_S_4b(l_A__loc3_));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[1104]))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[920]))))));
    if ((((double)(l_A__loc3_)) >= 10.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1105]))))));
    } else {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1106]))))));
    }
    if ((((double)(l_A__loc3_)) >= 25.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1107]), C_S__26_c::sm_S_8_21_Z(C_S_3E::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S_3E::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if ((((double)(l_A__loc3_)) >= 10.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[925]))))));
    }
    if ((((double)(l_A__loc3_)) == 50.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[1108]), C_S__26_c::sm_S_8_21_Z(C_S_3E::sm_S__5d__21_C(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if ((((double)(l_A__loc3_)) >= 25.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[927]))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S_3E::m_S_1_21_P() {
    uint32_t l_A__loc2_ = 0u;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S_3E.S_1_21_P");
    (l_A__loc2_ = C_S_3E::sm_S__2b_A());
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[1102]))));
    if ((((double)(l_A__loc2_)) == 50.0)) {
        (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[1109]))));
    } else if ((((double)(l_A__loc2_)) >= 25.0)) {
        (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[1110]))));
    } else if ((((double)(l_A__loc2_)) >= 10.0)) {
        (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[1111]))));
    }
    return rt::slot_string(rt::add(rt::add(rt::add(l_A__loc1_, rt::VS(g::LS[194])), rt::dcallv(rt::V((double)(C_S_3E::sm_S__2b_A())), rt::N_toString)), rt::VS(g::LS[931])));
    return rt::NUL;
}
rt::Value C_S_3E::m_S__21_E() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S_3E.S__21_E");
    (l_A__loc1_ = C_S_3E::sm_S__2b_A());
    if ((((double)(l_A__loc1_)) == 50.0)) {
        return rt::slot_string(rt::VS(g::LS[1112]));
    }
    if ((((double)(l_A__loc1_)) >= 25.0)) {
        return rt::slot_string(rt::VS(g::LS[1113]));
    }
    if ((((double)(l_A__loc1_)) >= 10.0)) {
        return rt::slot_string(rt::VS(g::LS[1114]));
    }
    return rt::slot_string(rt::VS(g::LS[1103]));
    return rt::NUL;
}
bool C_S_3E::g_S__2d_6() {
    RT_FN("S_3E.S__2d_6_get");
    return ({ bool _t3243 = (((double)(C_PlayFab::sg_season())) == 7.0); _t3243 ? (bool)((({ bool _t3242 = ({ rt::Value _o3240 = g::SV.C_S_8G__S__3d__21__60_; C_S__3b_m* _p3241 = rt::as_ptr<C_S__3b_m>(_o3240); _p3241 ? _p3241->m_S__27_W(rt::touint_d(0.0)) : rt::T(rt::dcallv(_o3240, NM_S__27_W, rt::V(0.0))); }); _t3242 ? _t3242 : (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 16.0), rt::V(3.0))); }))) : _t3243; });
    return false;
}
uint32_t C_S_3E::sm_S_4b(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S_3E.S_4b");
    return rt::touint_d(((((double)(l_param1)) < 10.0) ? 22.0 : (((((double)(l_param1)) < 25.0) ? 44.0 : 88.0))));
    return 0u;
}
bool C_S_3E::sm_S__22__2d_() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S_3E.S__22__2d_");
    (l_A__loc1_ = C_S_3E::sm_S__2b_A());
    return ({ bool _t3244 = (((double)(l_A__loc1_)) < 50.0); _t3244 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 13.0), rt::V((double)(C_S_3E::sm_S_4b(l_A__loc1_))))) : _t3244; });
    return false;
}
uint32_t C_S_3E::sm_S__2b_A() {
    RT_FN("S_3E.S__2b_A");
    return C_S__26_c::sm_S_6_2d_(rt::toint_d(83.0), rt::toint_d(13.0));
    return 0u;
}
double C_S_3E::sm_S__3f__21__3c_() {
    RT_FN("S_3E.S__3f__21__3c_");
    return (((((double)(C_PlayFab::sg_season())) == 7.0) && (((double)(C_S_3E::sm_S__2b_A())) >= 25.0)) ? rt::m_floor((0.5 * rt::m_log((1.0 + rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 2.5))))) : 0.0);
    return 0.0;
}
double C_S_3E::sm_S__22__21__26_() {
    RT_FN("S_3E.S__22__21__26_");
    return (((((double)(C_PlayFab::sg_season())) == 7.0) && (((double)(C_S_3E::sm_S__2b_A())) >= 25.0)) ? rt::m_floor((0.5 * rt::m_log((1.0 + rt::m_pow(C_S__26_c::sm_S__3e__21_h(true, C_S__26_c::dsm_S__3e__21_h_1(), C_S__26_c::dsm_S__3e__21_h_2()), 2.25))))) : 0.0);
    return 0.0;
}
double C_S_3E::sm_S__5d__21_C() {
    RT_FN("S_3E.S__5d__21_C");
    return (((((double)(C_PlayFab::sg_season())) == 7.0) && (((double)(C_S_3E::sm_S__2b_A())) == 50.0)) ? 100.0 : 1.0);
    return 0.0;
}
C_S_3E* C_S_3E::alloc_() {
    C_S_3E* o = rt::make<C_S_3E>();
    return o;
}
rt::Value C_S_3E::mk_(rt::Value* a, int n) {
    C_S_3E* o = alloc_();
    o->C_S_3E::ctor_();
    return rt::VO(o);
}
bool C_S_3E::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21__2c_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_P: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21_E: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_3E::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_3E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_1_21__2c_: out = m_S_1_21__2c_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_1_21_P: out = m_S_1_21_P(); return true;
    case NM_S__21_E: out = m_S__21_E(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_3E::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_1_21__2c_: return true;
    case NM_S__40__22_: return true;
    case NM_S_1_21_P: return true;
    case NM_S__21_E: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_3E::smeth_(int id) {
    switch (id) {
    case NM_S_4b: return true;
    case NM_S__22__2d_: return true;
    case NM_S__2b_A: return true;
    case NM_S__3f__21__3c_: return true;
    case NM_S__22__21__26_: return true;
    case NM_S__5d__21_C: return true;
    default: return false;
    }
}
bool C_S_3E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3E__id)); return true;
    case NM_S_4b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__2d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b_A: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__5d__21_C: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_3E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_3E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4b: out = rt::V((double)(sm_S_4b(rt::arg<uint32_t>(a, n, 0, 0u)))); return true;
    case NM_S__22__2d_: out = rt::VB(sm_S__22__2d_()); return true;
    case NM_S__2b_A: out = rt::V((double)(sm_S__2b_A())); return true;
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    case NM_S__5d__21_C: out = rt::V(sm_S__5d__21_C()); return true;
    default: return false;
    }
}
void C_S_3N::ctor_() {
    RT_FN("S_3N.S_3N");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3245 = 6.0; this->f_S_6_21_Z = rt::touint_d(_v3245); _v3245; });
    ({ rt::Value _v3246 = rt::VS(g::LS[1115]); this->f_S_1i = rt::slot_string(_v3246); _v3246; });
    ({ rt::Value _v3247 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3247); _v3247; });
    ({ rt::Value _v3248 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3248); _v3248; });
    ({ double _v3249 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v3249); _v3249; });
    ({ bool _v3250 = true; this->f_S_3_21_9 = _v3250; _v3250; });
}
C_S_3N* C_S_3N::alloc_() {
    C_S_3N* o = rt::make<C_S_3N>();
    return o;
}
rt::Value C_S_3N::mk_(rt::Value* a, int n) {
    C_S_3N* o = alloc_();
    o->C_S_3N::ctor_();
    return rt::VO(o);
}
bool C_S_3N::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_3N::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_3N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_3N::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_3N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_3N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_3N__id)); return true;
    case NM_ids: out = g::SV.C_S_3N__ids; return true;
    default: return false;
    }
}
bool C_S_3N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_3N__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_3N__ids = v; return true;
    default: return false;
    }
}
bool C_S_3N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_21_4::ctor_() {
    RT_FN("S_4_21_4.S_4_21_4");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3251 = 228.0; this->f_S_6_21_Z = rt::touint_d(_v3251); _v3251; });
    ({ rt::Value _v3252 = rt::trv(rt::VS(g::LS[465])); this->f_S_1i = rt::slot_string(_v3252); _v3252; });
    ({ rt::Value _v3253 = rt::VS(g::LS[466]); this->f_S__5e__21__23_ = rt::slot_string(_v3253); _v3253; });
    ({ double _v3254 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3254); _v3254; });
}
rt::Value C_S_4_21_4::m_S__40__22_() {
    RT_FN("S_4_21_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[912]), C_S__26_c::sm_S_8_21_Z(10000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_4_21_4::m_S__21__21_G() {
    RT_FN("S_4_21_4.S__21__21_G");
    if (((!this->f_S_4_21_K) && (((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d((-1.0)), true))) >= 10000.0))) {
        (void)(({ rt::Value _o3255 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3256 = rt::as_ptr<C_S_8G>(_o3255); _p3256 ? _p3256->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3255, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_4_21_4::g_S__5d__3b_() {
    RT_FN("S_4_21_4.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 48.0);
    return false;
}
bool C_S_4_21_4::g_S__3f__21_a() {
    RT_FN("S_4_21_4.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
C_S_4_21_4* C_S_4_21_4::alloc_() {
    C_S_4_21_4* o = rt::make<C_S_4_21_4>();
    return o;
}
rt::Value C_S_4_21_4::mk_(rt::Value* a, int n) {
    C_S_4_21_4* o = alloc_();
    o->C_S_4_21_4::ctor_();
    return rt::VO(o);
}
bool C_S_4_21_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_4_21_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_4_21_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_4_21_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_4_21_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_21_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_21_4__id)); return true;
    default: return false;
    }
}
bool C_S_4_21_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_21_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_21_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_21_m::ctor_() {
    RT_FN("S_4_21_m.S_4_21_m");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3257 = 261.0; this->f_S_6_21_Z = rt::touint_d(_v3257); _v3257; });
    ({ rt::Value _v3258 = rt::VS(g::LS[1117]); this->f_S_1i = rt::slot_string(_v3258); _v3258; });
    ({ rt::Value _v3259 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3259); _v3259; });
    ({ rt::Value _v3260 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3260); _v3260; });
    ({ double _v3261 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3261); _v3261; });
    ({ bool _v3262 = true; this->f_S_3_21_9 = _v3262; _v3262; });
}
C_S_4_21_m* C_S_4_21_m::alloc_() {
    C_S_4_21_m* o = rt::make<C_S_4_21_m>();
    return o;
}
rt::Value C_S_4_21_m::mk_(rt::Value* a, int n) {
    C_S_4_21_m* o = alloc_();
    o->C_S_4_21_m::ctor_();
    return rt::VO(o);
}
bool C_S_4_21_m::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_4_21_m::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_4_21_m::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_4_21_m::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_4_21_m::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_21_m::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_21_m__id)); return true;
    default: return false;
    }
}
bool C_S_4_21_m::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_21_m__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_21_m::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_22__2c_::ctor_() {
    RT_FN("S_4_22__2c_.S_4_22__2c_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3263 = 200.0; this->f_S_6_21_Z = rt::touint_d(_v3263); _v3263; });
    ({ rt::Value _v3264 = rt::trv(rt::VS(g::LS[1118])); this->f_S_1i = rt::slot_string(_v3264); _v3264; });
    ({ rt::Value _v3265 = rt::VS(g::LS[1119]); this->f_S__5e__21__23_ = rt::slot_string(_v3265); _v3265; });
    ({ double _v3266 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v3266); _v3266; });
}
rt::Value C_S_4_22__2c_::m_S__21__21_G() {
    RT_FN("S_4_22__2c_.S__21__21_G");
    if (((!this->f_S_4_21_K) && C_S_8G::sm_S_7d(g::SV.C_S_9_2d___id))) {
        (void)(({ rt::Value _o3267 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3268 = rt::as_ptr<C_S_8G>(_o3267); _p3268 ? _p3268->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3267, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_4_22__2c_::m_S__40__22_() {
    RT_FN("S_4_22__2c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1120])));
    return rt::NUL;
}
C_S_4_22__2c_* C_S_4_22__2c_::alloc_() {
    C_S_4_22__2c_* o = rt::make<C_S_4_22__2c_>();
    return o;
}
rt::Value C_S_4_22__2c_::mk_(rt::Value* a, int n) {
    C_S_4_22__2c_* o = alloc_();
    o->C_S_4_22__2c_::ctor_();
    return rt::VO(o);
}
bool C_S_4_22__2c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_4_22__2c_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_4_22__2c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_4_22__2c_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_4_22__2c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_22__2c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_22__2c___id)); return true;
    default: return false;
    }
}
bool C_S_4_22__2c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_22__2c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_22__2c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_3f_::ctor_() {
    RT_FN("S_4_3f_.S_4_3f_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3269 = 60.0; this->f_S_6_21_Z = rt::touint_d(_v3269); _v3269; });
    ({ rt::Value _v3270 = rt::VS(g::LS[1121]); this->f_S_1i = rt::slot_string(_v3270); _v3270; });
    ({ rt::Value _v3271 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3271); _v3271; });
    ({ rt::Value _v3272 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3272); _v3272; });
    ({ double _v3273 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3273); _v3273; });
    ({ bool _v3274 = true; this->f_S_3_21_9 = _v3274; _v3274; });
}
C_S_4_3f_* C_S_4_3f_::alloc_() {
    C_S_4_3f_* o = rt::make<C_S_4_3f_>();
    return o;
}
rt::Value C_S_4_3f_::mk_(rt::Value* a, int n) {
    C_S_4_3f_* o = alloc_();
    o->C_S_4_3f_::ctor_();
    return rt::VO(o);
}
bool C_S_4_3f_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_4_3f_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_4_3f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_4_3f_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_4_3f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_3f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_3f___id)); return true;
    case NM_ids: out = g::SV.C_S_4_3f___ids; return true;
    default: return false;
    }
}
bool C_S_4_3f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_3f___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_4_3f___ids = v; return true;
    default: return false;
    }
}
bool C_S_4_3f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4G::ctor_() {
    RT_FN("S_4G.S_4G");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3275 = 85.0; this->f_S_6_21_Z = rt::touint_d(_v3275); _v3275; });
    ({ rt::Value _v3276 = rt::trv(rt::VS(g::LS[597])); this->f_S_1i = rt::slot_string(_v3276); _v3276; });
    ({ rt::Value _v3277 = rt::trv(rt::VS(g::LS[1123])); this->f_S_7_23_ = rt::slot_string(_v3277); _v3277; });
    ({ rt::Value _v3278 = rt::VS(g::LS[598]); this->f_S__5e__21__23_ = rt::slot_string(_v3278); _v3278; });
    ({ double _v3279 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3279); _v3279; });
}
rt::Value C_S_4G::m_S__21__21_G() {
    RT_FN("S_4G.S__21__21_G");
    if (((!this->f_S_4_21_K) && (((((((rt::tonum(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S__40_w, 1.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 1.0)), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 2.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 2.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S__40_w, 2.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 3.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 3.0))) - rt::tonum(rt::arr_at(g::SV.C_S_8G__S__40_w, 3.0))) >= 46620.0))) {
        (void)(({ rt::Value _o3280 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3281 = rt::as_ptr<C_S_8G>(_o3280); _p3281 ? _p3281->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3280, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_4G::g_S__5d__3b_() {
    RT_FN("S_4G.S__5d__3b__get");
    return true;
    return false;
}
C_S_4G* C_S_4G::alloc_() {
    C_S_4G* o = rt::make<C_S_4G>();
    return o;
}
rt::Value C_S_4G::mk_(rt::Value* a, int n) {
    C_S_4G* o = alloc_();
    o->C_S_4G::ctor_();
    return rt::VO(o);
}
bool C_S_4G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_4G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_4G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_4G::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_4G::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4G__id)); return true;
    case NM_ids: out = g::SV.C_S_4G__ids; return true;
    default: return false;
    }
}
bool C_S_4G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4G__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_4G__ids = v; return true;
    default: return false;
    }
}
bool C_S_4G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4N::ctor_() {
    RT_FN("S_4N.S_4N");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3282 = 238.0; this->f_S_6_21_Z = rt::touint_d(_v3282); _v3282; });
    ({ rt::Value _v3283 = rt::trv(rt::VS(g::LS[716])); this->f_S_1i = rt::slot_string(_v3283); _v3283; });
    ({ rt::Value _v3284 = rt::VS(g::LS[717]); this->f_S__5e__21__23_ = rt::slot_string(_v3284); _v3284; });
    ({ double _v3285 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3285); _v3285; });
}
rt::Value C_S_4N::m_S__40__22_() {
    RT_FN("S_4N.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[1125]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_4N__S__3c__5e_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[1126]))));
    return rt::NUL;
}
rt::Value C_S_4N::m_S__21__21_G() {
    RT_FN("S_4N.S__21__21_G");
    if ((({ bool _t3286 = (!this->f_S_4_21_K); _t3286 ? (bool)((((double)(C_S_8G::sg_S_8_21_H())) >= 60.0)) : _t3286; }) && (C_S__26_c::sm_S_3_22_J(C_S__26_c::dsm_S_3_22_J_0()) >= g::SV.C_S_4N__S__3c__5e_))) {
        (void)(({ rt::Value _o3287 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3288 = rt::as_ptr<C_S_8G>(_o3287); _p3288 ? _p3288->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3287, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_4N::g_S__5d__3b_() {
    RT_FN("S_4N.S__5d__3b__get");
    return true;
    return false;
}
C_S_4N* C_S_4N::alloc_() {
    C_S_4N* o = rt::make<C_S_4N>();
    return o;
}
rt::Value C_S_4N::mk_(rt::Value* a, int n) {
    C_S_4N* o = alloc_();
    o->C_S_4N::ctor_();
    return rt::VO(o);
}
bool C_S_4N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_4N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_4N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_4N::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_4N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4N__id)); return true;
    case NM_S__3c__5e_: out = rt::V(g::SV.C_S_4N__S__3c__5e_); return true;
    case NM_S__22_H: out = rt::V(g::SV.C_S_4N__S__22_H); return true;
    default: return false;
    }
}
bool C_S_4N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4N__id = rt::touint(v); return true;
    case NM_S__3c__5e_: g::SV.C_S_4N__S__3c__5e_ = rt::tonum(v); return true;
    case NM_S__22_H: g::SV.C_S_4N__S__22_H = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_4N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4_5e_::ctor_() {
    RT_FN("S_4_5e_.S_4_5e_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3289 = 159.0; this->f_S_6_21_Z = rt::touint_d(_v3289); _v3289; });
    ({ rt::Value _v3290 = rt::trv(rt::VS(g::LS[1127])); this->f_S_1i = rt::slot_string(_v3290); _v3290; });
    ({ rt::Value _v3291 = rt::VS(g::LS[1128]); this->f_S__5e__21__23_ = rt::slot_string(_v3291); _v3291; });
    ({ double _v3292 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v3292); _v3292; });
}
rt::Value C_S_4_5e_::m_S__21__21_G() {
    RT_FN("S_4_5e_.S__21__21_G");
    if (((!this->f_S_4_21_K) && C_S_8G::sm_S_7d(g::SV.C_S_5_21_J__id))) {
        (void)(({ rt::Value _o3293 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3294 = rt::as_ptr<C_S_8G>(_o3293); _p3294 ? _p3294->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3293, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_4_5e_::m_S__40__22_() {
    RT_FN("S_4_5e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[886]), C_S__26_c::sm_S_8_21_Z(50000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), this->f_S_1i));
    return rt::NUL;
}
C_S_4_5e_* C_S_4_5e_::alloc_() {
    C_S_4_5e_* o = rt::make<C_S_4_5e_>();
    return o;
}
rt::Value C_S_4_5e_::mk_(rt::Value* a, int n) {
    C_S_4_5e_* o = alloc_();
    o->C_S_4_5e_::ctor_();
    return rt::VO(o);
}
bool C_S_4_5e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_4_5e_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_4_5e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_4_5e_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_4_5e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4_5e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4_5e___id)); return true;
    default: return false;
    }
}
bool C_S_4_5e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4_5e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_4_5e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_4o::ctor_() {
    RT_FN("S_4o.S_4o");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3295 = 82.0; this->f_S_6_21_Z = rt::touint_d(_v3295); _v3295; });
    ({ rt::Value _v3296 = rt::trv(rt::VS(g::LS[409])); this->f_S_1i = rt::slot_string(_v3296); _v3296; });
    ({ rt::Value _v3297 = rt::trv(rt::VS(g::LS[1129])); this->f_S_7_23_ = rt::slot_string(_v3297); _v3297; });
    ({ rt::Value _v3298 = rt::VS(g::LS[410]); this->f_S__5e__21__23_ = rt::slot_string(_v3298); _v3298; });
    ({ double _v3299 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3299); _v3299; });
}
rt::Value C_S_4o::m_S__21__21_G() {
    RT_FN("S_4o.S__21__21_G");
    if (((!this->f_S_4_21_K) && (rt::m_floor(C_S_8G::sg_S__40_e()) == 1337.0))) {
        (void)(({ rt::Value _o3300 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3301 = rt::as_ptr<C_S_8G>(_o3300); _p3301 ? _p3301->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3300, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_4o::g_S__5d__3b_() {
    RT_FN("S_4o.S__5d__3b__get");
    return true;
    return false;
}
C_S_4o* C_S_4o::alloc_() {
    C_S_4o* o = rt::make<C_S_4o>();
    return o;
}
rt::Value C_S_4o::mk_(rt::Value* a, int n) {
    C_S_4o* o = alloc_();
    o->C_S_4o::ctor_();
    return rt::VO(o);
}
bool C_S_4o::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_4o::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_4o::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_4o::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_4o::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_4o::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_4o__id)); return true;
    case NM_ids: out = g::SV.C_S_4o__ids; return true;
    default: return false;
    }
}
bool C_S_4o::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_4o__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_4o__ids = v; return true;
    default: return false;
    }
}
bool C_S_4o::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_5r::ctor_() {
    RT_FN("S_5r.S_5r");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3302 = 181.0; this->f_S_6_21_Z = rt::touint_d(_v3302); _v3302; });
    ({ rt::Value _v3303 = rt::trv(rt::VS(g::LS[530])); this->f_S_1i = rt::slot_string(_v3303); _v3303; });
    ({ rt::Value _v3304 = rt::trv(rt::VS(g::LS[1131])); this->f_S_7_23_ = rt::slot_string(_v3304); _v3304; });
    ({ rt::Value _v3305 = rt::VS(g::LS[531]); this->f_S__5e__21__23_ = rt::slot_string(_v3305); _v3305; });
    ({ double _v3306 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3306); _v3306; });
}
rt::Value C_S_5r::m_S__3d_u() {
    RT_FN("S_5r.S__3d_u");
    if (rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(180.0))) {
        (g::SV.C_S_5r__S__3c__21_b = rt::toint_d((((double)(g::SV.C_S_5r__S__3c__21_b)) + 1.0)));
        if ((((double)(g::SV.C_S_5r__S__3c__21_b)) == 10.0)) {
            (void)(({ rt::Value _o3307 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3308 = rt::as_ptr<C_S_8G>(_o3307); _p3308 ? _p3308->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3307, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S_5r::g_S__5d__3b_() {
    RT_FN("S_5r.S__5d__3b__get");
    return true;
    return false;
}
C_S_5r* C_S_5r::alloc_() {
    C_S_5r* o = rt::make<C_S_5r>();
    return o;
}
rt::Value C_S_5r::mk_(rt::Value* a, int n) {
    C_S_5r* o = alloc_();
    o->C_S_5r::ctor_();
    return rt::VO(o);
}
bool C_S_5r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3d_u: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_5r::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_5r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3d_u: out = m_S__3d_u(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_5r::dmeth(int id) {
    switch (id) {
    case NM_S__3d_u: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_5r::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_5r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_5r__id)); return true;
    case NM_S__3c__21_b: out = rt::V((double)(g::SV.C_S_5r__S__3c__21_b)); return true;
    default: return false;
    }
}
bool C_S_5r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_5r__id = rt::touint(v); return true;
    case NM_S__3c__21_b: g::SV.C_S_5r__S__3c__21_b = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S_5r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_21__25_::ctor_() {
    RT_FN("S_6_21__25_.S_6_21__25_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3309 = 93.0; this->f_S_6_21_Z = rt::touint_d(_v3309); _v3309; });
    ({ rt::Value _v3310 = rt::trv(rt::VS(g::LS[652])); this->f_S_1i = rt::slot_string(_v3310); _v3310; });
    ({ rt::Value _v3311 = rt::trv(rt::VS(g::LS[1132])); this->f_S_7_23_ = rt::slot_string(_v3311); _v3311; });
    ({ rt::Value _v3312 = rt::VS(g::LS[653]); this->f_S__5e__21__23_ = rt::slot_string(_v3312); _v3312; });
    ({ double _v3313 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3313); _v3313; });
}
rt::Value C_S_6_21__25_::m_S__21__21_G() {
    RT_FN("S_6_21__25_.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S__40_w, 2.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 2.0)), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 2.0)), rt::V(19980.0)))) {
        (void)(({ rt::Value _o3314 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3315 = rt::as_ptr<C_S_8G>(_o3314); _p3315 ? _p3315->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3314, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_6_21__25_::g_S__5d__3b_() {
    RT_FN("S_6_21__25_.S__5d__3b__get");
    return true;
    return false;
}
C_S_6_21__25_* C_S_6_21__25_::alloc_() {
    C_S_6_21__25_* o = rt::make<C_S_6_21__25_>();
    return o;
}
rt::Value C_S_6_21__25_::mk_(rt::Value* a, int n) {
    C_S_6_21__25_* o = alloc_();
    o->C_S_6_21__25_::ctor_();
    return rt::VO(o);
}
bool C_S_6_21__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_6_21__25_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_6_21__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_6_21__25_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_6_21__25_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_21__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21__25___id)); return true;
    case NM_ids: out = g::SV.C_S_6_21__25___ids; return true;
    default: return false;
    }
}
bool C_S_6_21__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21__25___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_6_21__25___ids = v; return true;
    default: return false;
    }
}
bool C_S_6_21__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_6_21_4::ctor_() {
    RT_FN("S_6_21_4.S_6_21_4");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3316 = 94.0; this->f_S_6_21_Z = rt::touint_d(_v3316); _v3316; });
    ({ rt::Value _v3317 = rt::trv(rt::VS(g::LS[386])); this->f_S_1i = rt::slot_string(_v3317); _v3317; });
    ({ rt::Value _v3318 = rt::VS(g::LS[387]); this->f_S__5e__21__23_ = rt::slot_string(_v3318); _v3318; });
    ({ double _v3319 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3319); _v3319; });
}
rt::Value C_S_6_21_4::m_S__40__22_() {
    RT_FN("S_6_21_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1134]), C_S__26_c::sm_S__23__3f_(g::SV.C_S__2b__3f___id, 850.0, C_S__26_c::dsm_S__23__3f__2(), C_S__26_c::dsm_S__23__3f__3())));
    return rt::NUL;
}
rt::Value C_S_6_21_4::m_S__21__21_G() {
    RT_FN("S_6_21_4.S__21__21_G");
    if ((({ bool _t3322 = ({ bool _t3321 = ({ bool _t3320 = (!this->f_S_4_21_K); _t3320 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) : _t3320; }); _t3321 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t3321; }); _t3322 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__21_Q__id)) : _t3322; }) && (C_S_8G::sm_S__25_Z(g::SV.C_S__2b__3f___id, true) >= 850.0))) {
        (void)(({ rt::Value _o3323 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3324 = rt::as_ptr<C_S_8G>(_o3323); _p3324 ? _p3324->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3323, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_6_21_4::g_S__5d__3b_() {
    RT_FN("S_6_21_4.S__5d__3b__get");
    return true;
    return false;
}
C_S_6_21_4* C_S_6_21_4::alloc_() {
    C_S_6_21_4* o = rt::make<C_S_6_21_4>();
    return o;
}
rt::Value C_S_6_21_4::mk_(rt::Value* a, int n) {
    C_S_6_21_4* o = alloc_();
    o->C_S_6_21_4::ctor_();
    return rt::VO(o);
}
bool C_S_6_21_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_6_21_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_6_21_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_6_21_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_6_21_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_21_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21_4__id)); return true;
    case NM_S_5_21_n: out = rt::V(g::SV.C_S_6_21_4__S_5_21_n); return true;
    case NM_ids: out = g::SV.C_S_6_21_4__ids; return true;
    default: return false;
    }
}
bool C_S_6_21_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21_4__id = rt::touint(v); return true;
    case NM_S_5_21_n: g::SV.C_S_6_21_4__S_5_21_n = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S_6_21_4__ids = v; return true;
    default: return false;
    }
}
bool C_S_6_21_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_6_21_N::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_6_21_N::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S_6_21_N.S_6_21_N");
    ({ double _v3325 = 2.0; this->f_S__60_r = rt::toint_d(_v3325); _v3325; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v3326 = 27.0; this->f_S_6_21_Z = rt::touint_d(_v3326); _v3326; });
}
C_S_6_21_N* C_S_6_21_N::alloc_() {
    C_S_6_21_N* o = rt::make<C_S_6_21_N>();
    return o;
}
rt::Value C_S_6_21_N::mk_(rt::Value* a, int n) {
    C_S_6_21_N* o = alloc_();
    o->C_S_6_21_N::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S_6_21_N::dctor_1()));
    return rt::VO(o);
}
bool C_S_6_21_N::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S_6_21_N::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S_6_21_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S_6_21_N::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S_6_21_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_6_21_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_6_21_N__id)); return true;
    case NM_ids: out = g::SV.C_S_6_21_N__ids; return true;
    default: return false;
    }
}
bool C_S_6_21_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_6_21_N__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_6_21_N__ids = v; return true;
    default: return false;
    }
}
bool C_S_6_21_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_7_21_4::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_7_21_4::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S_7_21_4.S_7_21_4");
    ({ double _v3327 = 9.0; this->f_S__60_r = rt::toint_d(_v3327); _v3327; });
    ({ double _v3328 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v3328); _v3328; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v3329 = 34.0; this->f_S_6_21_Z = rt::touint_d(_v3329); _v3329; });
}
C_S_7_21_4* C_S_7_21_4::alloc_() {
    C_S_7_21_4* o = rt::make<C_S_7_21_4>();
    return o;
}
rt::Value C_S_7_21_4::mk_(rt::Value* a, int n) {
    C_S_7_21_4* o = alloc_();
    o->C_S_7_21_4::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S_7_21_4::dctor_1()));
    return rt::VO(o);
}
bool C_S_7_21_4::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S_7_21_4::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S_7_21_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S_7_21_4::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S_7_21_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_21_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21_4__id)); return true;
    case NM_ids: out = g::SV.C_S_7_21_4__ids; return true;
    default: return false;
    }
}
bool C_S_7_21_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21_4__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_7_21_4__ids = v; return true;
    default: return false;
    }
}
bool C_S_7_21_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_21_h::ctor_() {
    RT_FN("S_7_21_h.S_7_21_h");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3330 = 241.0; this->f_S_6_21_Z = rt::touint_d(_v3330); _v3330; });
    ({ rt::Value _v3331 = rt::trv(rt::VS(g::LS[412])); this->f_S_1i = rt::slot_string(_v3331); _v3331; });
    ({ rt::Value _v3332 = rt::VS(g::LS[413]); this->f_S__5e__21__23_ = rt::slot_string(_v3332); _v3332; });
    ({ double _v3333 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3333); _v3333; });
}
rt::Value C_S_7_21_h::m_S__40__22_() {
    RT_FN("S_7_21_h.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[912]), C_S__26_c::sm_S_8_21_Z(18500.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_7_21_h::m_S__21__21_G() {
    RT_FN("S_7_21_h.S__21__21_G");
    if (((!this->f_S_4_21_K) && (((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d((-1.0)), true))) >= 18500.0))) {
        (void)(({ rt::Value _o3334 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3335 = rt::as_ptr<C_S_8G>(_o3334); _p3335 ? _p3335->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3334, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_7_21_h::g_S__5d__3b_() {
    RT_FN("S_7_21_h.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 75.0);
    return false;
}
bool C_S_7_21_h::g_S__3f__21_a() {
    RT_FN("S_7_21_h.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
C_S_7_21_h* C_S_7_21_h::alloc_() {
    C_S_7_21_h* o = rt::make<C_S_7_21_h>();
    return o;
}
rt::Value C_S_7_21_h::mk_(rt::Value* a, int n) {
    C_S_7_21_h* o = alloc_();
    o->C_S_7_21_h::ctor_();
    return rt::VO(o);
}
bool C_S_7_21_h::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_7_21_h::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_7_21_h::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_7_21_h::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_7_21_h::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_21_h::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_21_h__id)); return true;
    default: return false;
    }
}
bool C_S_7_21_h::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_21_h__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_21_h::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_22__27_::ctor_() {
    RT_FN("S_7_22__27_.S_7_22__27_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3336 = 322.0; this->f_S_6_21_Z = rt::touint_d(_v3336); _v3336; });
    ({ rt::Value _v3337 = rt::trv(rt::VS(g::LS[667])); this->f_S_1i = rt::slot_string(_v3337); _v3337; });
    ({ rt::Value _v3338 = rt::VS(g::LS[668]); this->f_S__5e__21__23_ = rt::slot_string(_v3338); _v3338; });
    ({ double _v3339 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v3339); _v3339; });
}
rt::Value C_S_7_22__27_::m_S__40__22_() {
    RT_FN("S_7_22__27_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1138]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_7_22__27___S__5d__21__3e_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_7_22__27___S__3b__21__25_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_7_22__27_::m_S__21__21_G() {
    RT_FN("S_7_22__27_.S__21__21_G");
    if ((({ bool _t3342 = (!this->f_S_4_21_K); _t3342 ? (bool)((({ rt::Value _o3340 = C_S_8G::sm_S__23_N(g::SV.C_S__21__22__21___id); C_S_84* _p3341 = rt::as_ptr<C_S_84>(_o3340); _p3341 ? _p3341->g_S_2_2d_() : rt::tonum(rt::dget(_o3340, NM_S_2_2d_)); }) >= g::SV.C_S_7_22__27___S__5d__21__3e_)) : _t3342; }) && rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V((g::SV.C_S_7_22__27___S__3b__21__25_ * 60.0))))) {
        (void)(({ rt::Value _o3343 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3344 = rt::as_ptr<C_S_8G>(_o3343); _p3344 ? _p3344->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3343, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_7_22__27_::g_S__5d__3b_() {
    RT_FN("S_7_22__27_.S__5d__3b__get");
    return ({ bool _t3346 = ({ bool _t3345 = (((double)(C_S_8G::sg_S__2c_P())) < 2.0); _t3345 ? _t3345 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) < 125.0)); }); _t3346 ? _t3346 : (bool)((!C_S_8G::sm_S__3c_P(g::SV.C_S__60__21_z__id))); });
    return false;
}
bool C_S_7_22__27_::g_S__3f__21_a() {
    RT_FN("S_7_22__27_.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S_7_22__27_* C_S_7_22__27_::alloc_() {
    C_S_7_22__27_* o = rt::make<C_S_7_22__27_>();
    return o;
}
rt::Value C_S_7_22__27_::mk_(rt::Value* a, int n) {
    C_S_7_22__27_* o = alloc_();
    o->C_S_7_22__27_::ctor_();
    return rt::VO(o);
}
bool C_S_7_22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_7_22__27_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_7_22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_7_22__27_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_7_22__27_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_22__27___id)); return true;
    case NM_S__5d__21__3e_: out = rt::V(g::SV.C_S_7_22__27___S__5d__21__3e_); return true;
    case NM_S__3b__21__25_: out = rt::V(g::SV.C_S_7_22__27___S__3b__21__25_); return true;
    default: return false;
    }
}
bool C_S_7_22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_22__27___id = rt::touint(v); return true;
    case NM_S__5d__21__3e_: g::SV.C_S_7_22__27___S__5d__21__3e_ = rt::tonum(v); return true;
    case NM_S__3b__21__25_: g::SV.C_S_7_22__27___S__3b__21__25_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_7_22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_73::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_73::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S_73.S_73");
    ({ double _v3347 = 8.0; this->f_S__60_r = rt::toint_d(_v3347); _v3347; });
    ({ double _v3348 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v3348); _v3348; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v3349 = 30.0; this->f_S_6_21_Z = rt::touint_d(_v3349); _v3349; });
}
C_S_73* C_S_73::alloc_() {
    C_S_73* o = rt::make<C_S_73>();
    return o;
}
rt::Value C_S_73::mk_(rt::Value* a, int n) {
    C_S_73* o = alloc_();
    o->C_S_73::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S_73::dctor_1()));
    return rt::VO(o);
}
bool C_S_73::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S_73::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S_73::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S_73::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S_73::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_73::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_73__id)); return true;
    case NM_ids: out = g::SV.C_S_73__ids; return true;
    default: return false;
    }
}
bool C_S_73::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_73__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_73__ids = v; return true;
    default: return false;
    }
}
bool C_S_73::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7_3d_::ctor_(rt::Value p0, rt::Value p1, rt::Value p2, rt::Value p3) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    rt::Value l_param4 = rt::slot_string(p3);
    RT_FN("S_7_3d_.S_7_3d_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ rt::Value _v3350 = rt::add(l_param1, rt::VS(g::LS[1140])); this->f_S_1i = rt::slot_string(_v3350); _v3350; });
    if (rt::eq(l_param1, rt::VS(g::LS[1141]))) {
        ({ double _v3351 = 1.0; this->f_S__3d__21_F = rt::touint_d(_v3351); _v3351; });
    } else {
        ({ rt::Value _v3352 = rt::idx_get(g::SV.C_S_8G__S_7_21_A, l_param1); this->f_S_2g = _v3352; _v3352; });
    }
    ({ rt::Value _v3353 = l_param2; this->f_S__3c__21__2b_ = rt::slot_string(_v3353); _v3353; });
    ({ rt::Value _v3354 = l_param3; this->f_S__60__21_Q = rt::slot_string(_v3354); _v3354; });
    ({ rt::Value _v3355 = l_param4; this->f_S__3e__21__40_ = rt::slot_string(_v3355); _v3355; });
    ({ rt::Value _v3356 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3356); _v3356; });
    ({ rt::Value _v3357 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3357); _v3357; });
    ({ double _v3358 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3358); _v3358; });
    ({ bool _v3359 = true; this->f_S_3_21_9 = _v3359; _v3359; });
}
rt::Value C_S_7_3d_::m_S__21__21_G() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S_7_3d_.S__21__21_G");
    (l_A__loc1_ = rt::toint_d(0.0));
    if ((rt::pybool(({ rt::Value _t3360 = rt::VB((!this->f_S__5b_S)); rt::pybool(_t3360) ? (rt::Value)(this->f_S_2g) : _t3360; })) && ({ rt::Value _o3361 = this->f_S_2g; C_S__23__21__60_* _p3362 = rt::as_ptr<C_S__23__21__60_>(_o3361); _p3362 ? _p3362->f_S_4_21_K : rt::T(rt::dget(_o3361, NM_S_4_21_K)); }))) {
        if ((!rt::T(rt::dget(rt::VO(rt::STUBCLASS), NM_gameInitialized)))) {
            return rt::NUL;
        }
        (void)(rt::dcallv(rt::VO(rt::STUBCLASS), NM_reportAchievement, (rt::T(rt::dcallv(rt::VO(rt::STUBCLASS), NM_isDesktop)) ? this->f_S__3e__21__40_ : ((rt::T(rt::dcallv(rt::VO(rt::STUBCLASS), NM_isAndroid)) ? this->f_S__3c__21__2b_ : this->f_S__60__21_Q)))));
        ({ bool _v3363 = true; this->f_S__5b_S = _v3363; _v3363; });
    }
    if ((!(((double)(this->f_S__3d__21_F)) == 0.0))) {
        (l_A__loc1_ = C_S_8G::sg_S_8_21_H());
        if ((!(((double)(l_A__loc1_)) == ((double)(this->f_S_4_21__2d_))))) {
            if ((!rt::T(rt::dget(rt::VO(rt::STUBCLASS), NM_gameInitialized)))) {
                return rt::NUL;
            }
            (void)(rt::dcallv(rt::VO(rt::STUBCLASS), NM_reportScore, (rt::T(rt::dcallv(rt::VO(rt::STUBCLASS), NM_isDesktop)) ? this->f_S__3e__21__40_ : ((rt::T(rt::dcallv(rt::VO(rt::STUBCLASS), NM_isAndroid)) ? this->f_S__3c__21__2b_ : this->f_S__60__21_Q))), rt::V((double)(l_A__loc1_))));
            ({ int32_t _v3364 = l_A__loc1_; this->f_S_4_21__2d_ = _v3364; _v3364; });
        }
    }
    return rt::NUL;
}
C_S_7_3d_* C_S_7_3d_::alloc_() {
    C_S_7_3d_* o = rt::make<C_S_7_3d_>();
    return o;
}
rt::Value C_S_7_3d_::mk_(rt::Value* a, int n) {
    C_S_7_3d_* o = alloc_();
    o->C_S_7_3d_::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, rt::UNDEF), rt::arg<rt::Value>(a, n, 3, rt::UNDEF));
    return rt::VO(o);
}
bool C_S_7_3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__3d__21_F: out = rt::V((double)(f_S__3d__21_F)); return true;
    case NM_S_2g: out = f_S_2g; return true;
    case NM_S__3c__21__2b_: out = f_S__3c__21__2b_; return true;
    case NM_S__60__21_Q: out = f_S__60__21_Q; return true;
    case NM_S__3e__21__40_: out = f_S__3e__21__40_; return true;
    case NM_S__5b_S: out = rt::VB(f_S__5b_S); return true;
    case NM_S_4_21__2d_: out = rt::V((double)(f_S_4_21__2d_)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_7_3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3d__21_F: f_S__3d__21_F = rt::touint(v); return true;
    case NM_S_2g: f_S_2g = v; return true;
    case NM_S__3c__21__2b_: f_S__3c__21__2b_ = rt::slot_string(v); return true;
    case NM_S__60__21_Q: f_S__60__21_Q = rt::slot_string(v); return true;
    case NM_S__3e__21__40_: f_S__3e__21__40_ = rt::slot_string(v); return true;
    case NM_S__5b_S: f_S__5b_S = rt::T(v); return true;
    case NM_S_4_21__2d_: f_S_4_21__2d_ = rt::toint(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_7_3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__3d__21_F: { rt::Value f = rt::V((double)(f_S__3d__21_F)); out = rt::call_value(f, a, n); return true; }
    case NM_S_2g: { rt::Value f = f_S_2g; out = rt::call_value(f, a, n); return true; }
    case NM_S__3c__21__2b_: { rt::Value f = f_S__3c__21__2b_; out = rt::call_value(f, a, n); return true; }
    case NM_S__60__21_Q: { rt::Value f = f_S__60__21_Q; out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__21__40_: { rt::Value f = f_S__3e__21__40_; out = rt::call_value(f, a, n); return true; }
    case NM_S__5b_S: { rt::Value f = rt::VB(f_S__5b_S); out = rt::call_value(f, a, n); return true; }
    case NM_S_4_21__2d_: { rt::Value f = rt::V((double)(f_S_4_21__2d_)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_7_3d_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__3d__21_F: return false;
    case NM_S_2g: return false;
    case NM_S__3c__21__2b_: return false;
    case NM_S__60__21_Q: return false;
    case NM_S__3e__21__40_: return false;
    case NM_S__5b_S: return false;
    case NM_S_4_21__2d_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_7_3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7_3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7_3d___id)); return true;
    default: return false;
    }
}
bool C_S_7_3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7_3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_7_3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_7N::ctor_() {
    RT_FN("S_7N.S_7N");
    (void)((this->C_S__60__3d_::ctor_(), rt::NUL));
    ({ double _v3365 = 97.0; this->f_S_6_21_Z = rt::touint_d(_v3365); _v3365; });
    ({ rt::Value _v3366 = rt::trv(rt::VS(g::LS[518])); this->f_S_1i = rt::slot_string(_v3366); _v3366; });
    ({ rt::Value _v3367 = rt::VS(g::LS[519]); this->f_S__5e__21__23_ = rt::slot_string(_v3367); _v3367; });
    ({ double _v3368 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3368); _v3368; });
    ({ double _v3369 = 1.0; this->f_S__21_G = rt::toint_d(_v3369); _v3369; });
}
C_S_7N* C_S_7N::alloc_() {
    C_S_7N* o = rt::make<C_S_7N>();
    return o;
}
rt::Value C_S_7N::mk_(rt::Value* a, int n) {
    C_S_7N* o = alloc_();
    o->C_S_7N::ctor_();
    return rt::VO(o);
}
bool C_S_7N::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dget(id, out);
}
bool C_S_7N::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dset(id, v);
}
bool C_S_7N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dcall(id, a, n, out);
}
bool C_S_7N::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dmeth(id);
}
bool C_S_7N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_7N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_7N__id)); return true;
    case NM_ids: out = g::SV.C_S_7N__ids; return true;
    default: return false;
    }
}
bool C_S_7N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_7N__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_7N__ids = v; return true;
    default: return false;
    }
}
bool C_S_7N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_21__20_::ctor_() {
    RT_FN("S_8_21__20_.S_8_21__20_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3370 = 11.0; this->f_S_6_21_Z = rt::touint_d(_v3370); _v3370; });
    ({ rt::Value _v3371 = rt::trv(rt::VS(g::LS[1143])); this->f_S_1i = rt::slot_string(_v3371); _v3371; });
    ({ rt::Value _v3372 = rt::VS(g::LS[1144]); this->f_S__5e__21__23_ = rt::slot_string(_v3372); _v3372; });
    ({ double _v3373 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v3373); _v3373; });
}
rt::Value C_S_8_21__20_::m_S__21__21_G() {
    RT_FN("S_8_21__20_.S__21__21_G");
    if (((!this->f_S_4_21_K) && C_S_8G::sm_S_7d(g::SV.C_S__23__2b___id))) {
        (void)(({ rt::Value _o3374 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3375 = rt::as_ptr<C_S_8G>(_o3374); _p3375 ? _p3375->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3374, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_8_21__20_::m_S__40__22_() {
    RT_FN("S_8_21__20_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[886]), C_S__26_c::sm_S_8_21_Z(12000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), this->f_S_1i));
    return rt::NUL;
}
C_S_8_21__20_* C_S_8_21__20_::alloc_() {
    C_S_8_21__20_* o = rt::make<C_S_8_21__20_>();
    return o;
}
rt::Value C_S_8_21__20_::mk_(rt::Value* a, int n) {
    C_S_8_21__20_* o = alloc_();
    o->C_S_8_21__20_::ctor_();
    return rt::VO(o);
}
bool C_S_8_21__20_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_8_21__20_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_8_21__20_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_8_21__20_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_8_21__20_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21__20_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21__20___id)); return true;
    case NM_ids: out = g::SV.C_S_8_21__20___ids; return true;
    default: return false;
    }
}
bool C_S_8_21__20_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21__20___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_8_21__20___ids = v; return true;
    default: return false;
    }
}
bool C_S_8_21__20_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_21__23_::ctor_() {
    RT_FN("S_8_21__23_.S_8_21__23_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3376 = 62.0; this->f_S_6_21_Z = rt::touint_d(_v3376); _v3376; });
    ({ rt::Value _v3377 = rt::trv(rt::VS(g::LS[468])); this->f_S_1i = rt::slot_string(_v3377); _v3377; });
    ({ rt::Value _v3378 = rt::VS(g::LS[469]); this->f_S__5e__21__23_ = rt::slot_string(_v3378); _v3378; });
    ({ double _v3379 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3379); _v3379; });
}
rt::Value C_S_8_21__23_::m_S__40__22_() {
    RT_FN("S_8_21__23_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1146]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_8_21__23_::m_S__21__21_G() {
    RT_FN("S_8_21__23_.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 23.0), rt::V(100.0)))) {
        (void)(({ rt::Value _o3380 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3381 = rt::as_ptr<C_S_8G>(_o3380); _p3381 ? _p3381->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3380, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_8_21__23_::g_S__5d__3b_() {
    RT_FN("S_8_21__23_.S__5d__3b__get");
    return true;
    return false;
}
C_S_8_21__23_* C_S_8_21__23_::alloc_() {
    C_S_8_21__23_* o = rt::make<C_S_8_21__23_>();
    return o;
}
rt::Value C_S_8_21__23_::mk_(rt::Value* a, int n) {
    C_S_8_21__23_* o = alloc_();
    o->C_S_8_21__23_::ctor_();
    return rt::VO(o);
}
bool C_S_8_21__23_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_8_21__23_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_8_21__23_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_8_21__23_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_8_21__23_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21__23_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21__23___id)); return true;
    case NM_S_0_21_V: out = rt::V((double)(g::SV.C_S_8_21__23___S_0_21_V)); return true;
    case NM_ids: out = g::SV.C_S_8_21__23___ids; return true;
    default: return false;
    }
}
bool C_S_8_21__23_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21__23___id = rt::touint(v); return true;
    case NM_S_0_21_V: g::SV.C_S_8_21__23___S_0_21_V = rt::toint(v); return true;
    case NM_ids: g::SV.C_S_8_21__23___ids = v; return true;
    default: return false;
    }
}
bool C_S_8_21__23_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_21_C::ctor_() {
    RT_FN("S_8_21_C.S_8_21_C");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3382 = 172.0; this->f_S_6_21_Z = rt::touint_d(_v3382); _v3382; });
    ({ rt::Value _v3383 = rt::trv(rt::VS(g::LS[633])); this->f_S_1i = rt::slot_string(_v3383); _v3383; });
    ({ rt::Value _v3384 = rt::trv(rt::VS(g::LS[1148])); this->f_S_7_23_ = rt::slot_string(_v3384); _v3384; });
    ({ rt::Value _v3385 = rt::VS(g::LS[634]); this->f_S__5e__21__23_ = rt::slot_string(_v3385); _v3385; });
    ({ double _v3386 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3386); _v3386; });
}
rt::Value C_S_8_21_C::m_S__21__21_G() {
    RT_FN("S_8_21_C.S__21__21_G");
    if (((!this->f_S_4_21_K) && (g::SV.C_S_8G__S_5_21__20_ >= 180.0))) {
        (void)(({ rt::Value _o3387 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3388 = rt::as_ptr<C_S_8G>(_o3387); _p3388 ? _p3388->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3387, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_8_21_C::g_S__5d__3b_() {
    RT_FN("S_8_21_C.S__5d__3b__get");
    return true;
    return false;
}
C_S_8_21_C* C_S_8_21_C::alloc_() {
    C_S_8_21_C* o = rt::make<C_S_8_21_C>();
    return o;
}
rt::Value C_S_8_21_C::mk_(rt::Value* a, int n) {
    C_S_8_21_C* o = alloc_();
    o->C_S_8_21_C::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_8_21_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_8_21_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_8_21_C::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_8_21_C::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21_C__id)); return true;
    default: return false;
    }
}
bool C_S_8_21_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21_C__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_21_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_21_l::ctor_() {
    RT_FN("S_8_21_l.S_8_21_l");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3389 = 264.0; this->f_S_6_21_Z = rt::touint_d(_v3389); _v3389; });
    ({ rt::Value _v3390 = rt::VS(g::LS[1149]); this->f_S_1i = rt::slot_string(_v3390); _v3390; });
    ({ rt::Value _v3391 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3391); _v3391; });
    ({ rt::Value _v3392 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3392); _v3392; });
    ({ double _v3393 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3393); _v3393; });
    ({ bool _v3394 = true; this->f_S_3_21_9 = _v3394; _v3394; });
}
C_S_8_21_l* C_S_8_21_l::alloc_() {
    C_S_8_21_l* o = rt::make<C_S_8_21_l>();
    return o;
}
rt::Value C_S_8_21_l::mk_(rt::Value* a, int n) {
    C_S_8_21_l* o = alloc_();
    o->C_S_8_21_l::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_l::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_8_21_l::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_8_21_l::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_8_21_l::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_8_21_l::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21_l::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21_l__id)); return true;
    default: return false;
    }
}
bool C_S_8_21_l::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21_l__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_21_l::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_21_t::ctor_() {
    RT_FN("S_8_21_t.S_8_21_t");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3395 = 288.0; this->f_S_6_21_Z = rt::touint_d(_v3395); _v3395; });
    ({ rt::Value _v3396 = rt::VS(g::LS[1150]); this->f_S_1i = rt::slot_string(_v3396); _v3396; });
    ({ rt::Value _v3397 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3397); _v3397; });
    ({ rt::Value _v3398 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3398); _v3398; });
    ({ double _v3399 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3399); _v3399; });
    ({ bool _v3400 = true; this->f_S_3_21_9 = _v3400; _v3400; });
}
C_S_8_21_t* C_S_8_21_t::alloc_() {
    C_S_8_21_t* o = rt::make<C_S_8_21_t>();
    return o;
}
rt::Value C_S_8_21_t::mk_(rt::Value* a, int n) {
    C_S_8_21_t* o = alloc_();
    o->C_S_8_21_t::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_t::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_8_21_t::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_8_21_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_8_21_t::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_8_21_t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21_t__id)); return true;
    default: return false;
    }
}
bool C_S_8_21_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21_t__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_21_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8_21_u::ctor_() {
    RT_FN("S_8_21_u.S_8_21_u");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3401 = 290.0; this->f_S_6_21_Z = rt::touint_d(_v3401); _v3401; });
    ({ rt::Value _v3402 = rt::trv(rt::VS(g::LS[618])); this->f_S_1i = rt::slot_string(_v3402); _v3402; });
    ({ rt::Value _v3403 = rt::trv(rt::VS(g::LS[1151])); this->f_S_7_23_ = rt::slot_string(_v3403); _v3403; });
    ({ rt::Value _v3404 = rt::VS(g::LS[619]); this->f_S__5e__21__23_ = rt::slot_string(_v3404); _v3404; });
    ({ double _v3405 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v3405); _v3405; });
}
rt::Value C_S_8_21_u::m_S__21__21_G() {
    int32_t l_A__loc1_ = 0;
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S_8_21_u.S__21__21_G");
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::NUL);
    if (((!this->f_S_4_21_K) && (((double)(C_S_8G::sg_S__2c_P())) >= 2.0))) {
        (l_A__loc1_ = rt::toint_d(0.0));
        (l_A__loc2_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc2_)) < rt::alen(g::SV.C_S_8G__S__2d__21_4))) {
            (l_A__loc3_ = rt::arr_at(g::SV.C_S_8G__S__2d__21_4, ((double)(l_A__loc2_))));
            if ((rt::is_class(l_A__loc3_, C_S__3e__21_q::CI) && ({ rt::Value _o3406 = l_A__loc3_; C_S__60_6* _p3407 = rt::as_ptr<C_S__60_6>(_o3406); _p3407 ? _p3407->g_S_9_21__25_() : rt::T(rt::dget(_o3406, NM_S_9_21__25_)); }))) {
                if ((({ double _old3408 = ((double)(l_A__loc1_)); l_A__loc1_ = rt::toint_d((_old3408 + 1.0)); (_old3408 + 1.0); }) >= 6.0)) {
                    break;
                }
            }
            (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
        }
        if ((((double)(l_A__loc1_)) >= 6.0)) {
            (void)(({ rt::Value _o3409 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3410 = rt::as_ptr<C_S_8G>(_o3409); _p3410 ? _p3410->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3409, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S_8_21_u::g_S__5d__3b_() {
    RT_FN("S_8_21_u.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S__2c_P())) < 2.0);
    return false;
}
bool C_S_8_21_u::g_S__3f__21_a() {
    RT_FN("S_8_21_u.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S_8_21_u* C_S_8_21_u::alloc_() {
    C_S_8_21_u* o = rt::make<C_S_8_21_u>();
    return o;
}
rt::Value C_S_8_21_u::mk_(rt::Value* a, int n) {
    C_S_8_21_u* o = alloc_();
    o->C_S_8_21_u::ctor_();
    return rt::VO(o);
}
bool C_S_8_21_u::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_8_21_u::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_8_21_u::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_8_21_u::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_8_21_u::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8_21_u::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8_21_u__id)); return true;
    default: return false;
    }
}
bool C_S_8_21_u::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8_21_u__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_8_21_u::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8K::ctor_() {
    RT_FN("S_8K.S_8K");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3411 = 110.0; this->f_S_6_21_Z = rt::touint_d(_v3411); _v3411; });
    ({ rt::Value _v3412 = rt::trv(rt::VS(g::LS[679])); this->f_S_1i = rt::slot_string(_v3412); _v3412; });
    ({ rt::Value _v3413 = rt::trv(rt::VS(g::LS[1152])); this->f_S_7_23_ = rt::slot_string(_v3413); _v3413; });
    ({ rt::Value _v3414 = rt::VS(g::LS[680]); this->f_S__5e__21__23_ = rt::slot_string(_v3414); _v3414; });
    ({ double _v3415 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3415); _v3415; });
}
rt::Value C_S_8K::m_S__21__21_G() {
    RT_FN("S_8K.S__21__21_G");
    if (((!this->f_S_4_21_K) && ((C_S__23__21__21_::sm_S_57() * 30.0) >= 300.0))) {
        (void)(({ rt::Value _o3416 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3417 = rt::as_ptr<C_S_8G>(_o3416); _p3417 ? _p3417->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3416, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_8K::g_S__5d__3b_() {
    RT_FN("S_8K.S__5d__3b__get");
    return true;
    return false;
}
C_S_8K* C_S_8K::alloc_() {
    C_S_8K* o = rt::make<C_S_8K>();
    return o;
}
rt::Value C_S_8K::mk_(rt::Value* a, int n) {
    C_S_8K* o = alloc_();
    o->C_S_8K::ctor_();
    return rt::VO(o);
}
bool C_S_8K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_8K::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_8K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_8K::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_8K::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8K__id)); return true;
    case NM_ids: out = g::SV.C_S_8K__ids; return true;
    default: return false;
    }
}
bool C_S_8K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8K__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_8K__ids = v; return true;
    default: return false;
    }
}
bool C_S_8K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_8Y::ctor_() {
    RT_FN("S_8Y.S_8Y");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3418 = 92.0; this->f_S_6_21_Z = rt::touint_d(_v3418); _v3418; });
    ({ rt::Value _v3419 = rt::trv(rt::VS(g::LS[480])); this->f_S_1i = rt::slot_string(_v3419); _v3419; });
    ({ rt::Value _v3420 = rt::trv(rt::VS(g::LS[1154])); this->f_S_7_23_ = rt::slot_string(_v3420); _v3420; });
    ({ rt::Value _v3421 = rt::VS(g::LS[481]); this->f_S__5e__21__23_ = rt::slot_string(_v3421); _v3421; });
    ({ double _v3422 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v3422); _v3422; });
}
rt::Value C_S_8Y::m_S__21__21_G() {
    RT_FN("S_8Y.S__21__21_G");
    if (((!this->f_S_4_21_K) && (g::SV.C_S__23__21__21___S__3d_Z >= 50.0))) {
        (void)(({ rt::Value _o3423 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3424 = rt::as_ptr<C_S_8G>(_o3423); _p3424 ? _p3424->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3423, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_8Y::g_S__5d__3b_() {
    RT_FN("S_8Y.S__5d__3b__get");
    return (!C_S_8G::sm_S__3c_P(g::SV.C_S__21_Q__id));
    return false;
}
bool C_S_8Y::g_S__3f__21_a() {
    RT_FN("S_8Y.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S_8Y* C_S_8Y::alloc_() {
    C_S_8Y* o = rt::make<C_S_8Y>();
    return o;
}
rt::Value C_S_8Y::mk_(rt::Value* a, int n) {
    C_S_8Y* o = alloc_();
    o->C_S_8Y::ctor_();
    return rt::VO(o);
}
bool C_S_8Y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_8Y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_8Y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_8Y::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_8Y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_8Y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_8Y__id)); return true;
    case NM_ids: out = g::SV.C_S_8Y__ids; return true;
    default: return false;
    }
}
bool C_S_8Y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_8Y__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_8Y__ids = v; return true;
    default: return false;
    }
}
bool C_S_8Y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_21__3d_::ctor_() {
    RT_FN("S_9_21__3d_.S_9_21__3d_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3425 = 65.0; this->f_S_6_21_Z = rt::touint_d(_v3425); _v3425; });
    ({ rt::Value _v3426 = rt::trv(rt::VS(g::LS[503])); this->f_S_1i = rt::slot_string(_v3426); _v3426; });
    ({ rt::Value _v3427 = rt::VS(g::LS[504]); this->f_S__5e__21__23_ = rt::slot_string(_v3427); _v3427; });
    ({ double _v3428 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3428); _v3428; });
}
rt::Value C_S_9_21__3d_::m_S__40__22_() {
    RT_FN("S_9_21__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1156]), C_S__26_c::sm_S_8_21_Z(100000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_9_21__3d_::m_S__21__21_G() {
    RT_FN("S_9_21__3d_.S__21__21_G");
    if ((({ bool _t3429 = (!this->f_S_4_21_K); _t3429 ? (bool)(rt::eq(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 12.0), rt::V(0.0))) : _t3429; }) && (C_S_8G::sg_S__40_e() >= 100000.0))) {
        (void)(({ rt::Value _o3430 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3431 = rt::as_ptr<C_S_8G>(_o3430); _p3431 ? _p3431->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3430, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_9_21__3d_::g_S__5d__3b_() {
    RT_FN("S_9_21__3d_.S__5d__3b__get");
    return true;
    return false;
}
C_S_9_21__3d_* C_S_9_21__3d_::alloc_() {
    C_S_9_21__3d_* o = rt::make<C_S_9_21__3d_>();
    return o;
}
rt::Value C_S_9_21__3d_::mk_(rt::Value* a, int n) {
    C_S_9_21__3d_* o = alloc_();
    o->C_S_9_21__3d_::ctor_();
    return rt::VO(o);
}
bool C_S_9_21__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_9_21__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_9_21__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_9_21__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_9_21__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21__3d___id)); return true;
    case NM_S_0O: out = rt::V((double)(g::SV.C_S_9_21__3d___S_0O)); return true;
    case NM_ids: out = g::SV.C_S_9_21__3d___ids; return true;
    default: return false;
    }
}
bool C_S_9_21__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21__3d___id = rt::touint(v); return true;
    case NM_S_0O: g::SV.C_S_9_21__3d___S_0O = rt::toint(v); return true;
    case NM_ids: g::SV.C_S_9_21__3d___ids = v; return true;
    default: return false;
    }
}
bool C_S_9_21__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_21_N::ctor_() {
    RT_FN("S_9_21_N.S_9_21_N");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3432 = 8.0; this->f_S_6_21_Z = rt::touint_d(_v3432); _v3432; });
    ({ rt::Value _v3433 = rt::trv(rt::VS(g::LS[1158])); this->f_S_1i = rt::slot_string(_v3433); _v3433; });
    ({ rt::Value _v3434 = rt::VS(g::LS[1159]); this->f_S__5e__21__23_ = rt::slot_string(_v3434); _v3434; });
    ({ double _v3435 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v3435); _v3435; });
}
rt::Value C_S_9_21_N::m_S__21__21_G() {
    RT_FN("S_9_21_N.S__21__21_G");
    if (((!this->f_S_4_21_K) && C_S_8G::sm_S_7d(g::SV.C_S__23_g__id))) {
        (void)(({ rt::Value _o3436 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3437 = rt::as_ptr<C_S_8G>(_o3436); _p3437 ? _p3437->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3436, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_9_21_N::m_S__40__22_() {
    RT_FN("S_9_21_N.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[886]), C_S__26_c::sm_S_8_21_Z(50000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), this->f_S_1i));
    return rt::NUL;
}
C_S_9_21_N* C_S_9_21_N::alloc_() {
    C_S_9_21_N* o = rt::make<C_S_9_21_N>();
    return o;
}
rt::Value C_S_9_21_N::mk_(rt::Value* a, int n) {
    C_S_9_21_N* o = alloc_();
    o->C_S_9_21_N::ctor_();
    return rt::VO(o);
}
bool C_S_9_21_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_9_21_N::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_9_21_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_9_21_N::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_9_21_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21_N__id)); return true;
    case NM_ids: out = g::SV.C_S_9_21_N__ids; return true;
    default: return false;
    }
}
bool C_S_9_21_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21_N__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_9_21_N__ids = v; return true;
    default: return false;
    }
}
bool C_S_9_21_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_21_j::ctor_() {
    RT_FN("S_9_21_j.S_9_21_j");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3438 = 250.0; this->f_S_6_21_Z = rt::touint_d(_v3438); _v3438; });
    ({ rt::Value _v3439 = rt::trv(rt::VS(g::LS[701])); this->f_S_1i = rt::slot_string(_v3439); _v3439; });
    ({ rt::Value _v3440 = rt::VS(g::LS[702]); this->f_S__5e__21__23_ = rt::slot_string(_v3440); _v3440; });
    ({ double _v3441 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v3441); _v3441; });
}
rt::Value C_S_9_21_j::m_S__40__22_() {
    RT_FN("S_9_21_j.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1161]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S_9_21_j__S_8_21_h, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_9_21_j::m_S__21__21_G() {
    RT_FN("S_9_21_j.S__21__21_G");
    if ((C_S__26_c::sm_S__60__21__3d_(C_S__26_c::dsm_S__60__21__3d__0()) >= g::SV.C_S_9_21_j__S_8_21_h)) {
        (void)(({ rt::Value _o3442 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3443 = rt::as_ptr<C_S_8G>(_o3442); _p3443 ? _p3443->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3442, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_9_21_j::g_S__5d__3b_() {
    RT_FN("S_9_21_j.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 60.0);
    return false;
}
bool C_S_9_21_j::g_S__3f__21_a() {
    RT_FN("S_9_21_j.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S_9_21_j* C_S_9_21_j::alloc_() {
    C_S_9_21_j* o = rt::make<C_S_9_21_j>();
    return o;
}
rt::Value C_S_9_21_j::mk_(rt::Value* a, int n) {
    C_S_9_21_j* o = alloc_();
    o->C_S_9_21_j::ctor_();
    return rt::VO(o);
}
bool C_S_9_21_j::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_9_21_j::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_9_21_j::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_9_21_j::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_9_21_j::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21_j::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21_j__id)); return true;
    case NM_S_8_21_h: out = rt::V(g::SV.C_S_9_21_j__S_8_21_h); return true;
    default: return false;
    }
}
bool C_S_9_21_j::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21_j__id = rt::touint(v); return true;
    case NM_S_8_21_h: g::SV.C_S_9_21_j__S_8_21_h = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_9_21_j::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_21_t::ctor_() {
    RT_FN("S_9_21_t.S_9_21_t");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3444 = 289.0; this->f_S_6_21_Z = rt::touint_d(_v3444); _v3444; });
    ({ rt::Value _v3445 = rt::VS(g::LS[1162]); this->f_S_1i = rt::slot_string(_v3445); _v3445; });
    ({ rt::Value _v3446 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3446); _v3446; });
    ({ rt::Value _v3447 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3447); _v3447; });
    ({ double _v3448 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3448); _v3448; });
    ({ bool _v3449 = true; this->f_S_3_21_9 = _v3449; _v3449; });
}
C_S_9_21_t* C_S_9_21_t::alloc_() {
    C_S_9_21_t* o = rt::make<C_S_9_21_t>();
    return o;
}
rt::Value C_S_9_21_t::mk_(rt::Value* a, int n) {
    C_S_9_21_t* o = alloc_();
    o->C_S_9_21_t::ctor_();
    return rt::VO(o);
}
bool C_S_9_21_t::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_9_21_t::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_9_21_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_9_21_t::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_9_21_t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21_t__id)); return true;
    default: return false;
    }
}
bool C_S_9_21_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21_t__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_21_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_21_v::ctor_() {
    RT_FN("S_9_21_v.S_9_21_v");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3450 = 297.0; this->f_S_6_21_Z = rt::touint_d(_v3450); _v3450; });
    ({ rt::Value _v3451 = rt::trv(rt::VS(g::LS[541])); this->f_S_1i = rt::slot_string(_v3451); _v3451; });
    ({ rt::Value _v3452 = rt::trv(rt::VS(g::LS[1163])); this->f_S_7_23_ = rt::slot_string(_v3452); _v3452; });
    ({ rt::Value _v3453 = rt::VS(g::LS[542]); this->f_S__5e__21__23_ = rt::slot_string(_v3453); _v3453; });
    ({ double _v3454 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3454); _v3454; });
}
rt::Value C_S_9_21_v::m_S__5b__21_C() {
    RT_FN("S_9_21_v.S__5b__21_C");
    (void)(this->C_S__23__21__60_::m_S__5b__21_C());
    ({ rt::Value _v3455 = rt::arr_lit({rt::V((double)(g::SV.C_S_9_21_w__id)), rt::V((double)(g::SV.C_S__25__21_w__id)), rt::V((double)(g::SV.C_S__3e__21_w__id)), rt::V((double)(g::SV.C_S_0_21_v__id)), rt::V((double)(g::SV.C_S__21__21_w__id)), rt::V((double)(g::SV.C_S_3_21_w__id)), rt::V((double)(g::SV.C_S__2c__21_w__id)), rt::V((double)(g::SV.C_S__27__21_w__id)), rt::V((double)(g::SV.C_S__25__21_v__id)), rt::V((double)(g::SV.C_S__26__21_w__id)), rt::V((double)(g::SV.C_S__5d__21_v__id)), rt::V((double)(g::SV.C_S__5b__21_v__id))}); this->f_S__3d__21_v = _v3455; _v3455; });
    return rt::NUL;
}
rt::Value C_S_9_21_v::m_S__21__21_G() {
    int32_t l_A__loc1_ = 0;
    RT_FN("S_9_21_v.S__21__21_G");
    (l_A__loc1_ = rt::toint_d(0.0));
    if (((!this->f_S_4_21_K) && (((double)(C_S_8G::sg_S__2c_P())) >= 2.0))) {
        (l_A__loc1_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc1_)) < rt::alen(this->f_S__3d__21_v))) {
            if ((!({ rt::Value _o3456 = C_S_8G::sm_S__21__21_H(rt::touint(rt::arr_at(this->f_S__3d__21_v, ((double)(l_A__loc1_))))); C_S__60_6* _p3457 = rt::as_ptr<C_S__60_6>(_o3456); _p3457 ? _p3457->f_S__3f__21_6 : rt::T(rt::dget(_o3456, NM_S__3f__21_6)); }))) {
                return rt::NUL;
            }
            (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
        }
        (void)(({ rt::Value _o3458 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3459 = rt::as_ptr<C_S_8G>(_o3458); _p3459 ? _p3459->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3458, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_9_21_v::g_S__5d__3b_() {
    RT_FN("S_9_21_v.S__5d__3b__get");
    return true;
    return false;
}
C_S_9_21_v* C_S_9_21_v::alloc_() {
    C_S_9_21_v* o = rt::make<C_S_9_21_v>();
    return o;
}
rt::Value C_S_9_21_v::mk_(rt::Value* a, int n) {
    C_S_9_21_v* o = alloc_();
    o->C_S_9_21_v::ctor_();
    return rt::VO(o);
}
bool C_S_9_21_v::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3d__21_v: out = f_S__3d__21_v; return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_9_21_v::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__3d__21_v: f_S__3d__21_v = v; return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_9_21_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3d__21_v: { rt::Value f = f_S__3d__21_v; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_9_21_v::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3d__21_v: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_9_21_v::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_21_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_21_v__id)); return true;
    default: return false;
    }
}
bool C_S_9_21_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_21_v__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_21_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_22__27_::ctor_() {
    RT_FN("S_9_22__27_.S_9_22__27_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3460 = 318.0; this->f_S_6_21_Z = rt::touint_d(_v3460); _v3460; });
    ({ rt::Value _v3461 = rt::VS(g::LS[1164]); this->f_S_1i = rt::slot_string(_v3461); _v3461; });
    ({ rt::Value _v3462 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3462); _v3462; });
    ({ rt::Value _v3463 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3463); _v3463; });
    ({ double _v3464 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3464); _v3464; });
    ({ bool _v3465 = true; this->f_S_3_21_9 = _v3465; _v3465; });
}
C_S_9_22__27_* C_S_9_22__27_::alloc_() {
    C_S_9_22__27_* o = rt::make<C_S_9_22__27_>();
    return o;
}
rt::Value C_S_9_22__27_::mk_(rt::Value* a, int n) {
    C_S_9_22__27_* o = alloc_();
    o->C_S_9_22__27_::ctor_();
    return rt::VO(o);
}
bool C_S_9_22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_9_22__27_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_9_22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_9_22__27_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_9_22__27_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22__27___id)); return true;
    default: return false;
    }
}
bool C_S_9_22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22__27___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9_22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9_22_G::ctor_() {
    RT_FN("S_9_22_G.S_9_22_G");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3466 = 382.0; this->f_S_6_21_Z = rt::touint_d(_v3466); _v3466; });
    ({ rt::Value _v3467 = rt::trv(rt::VS(g::LS[670])); this->f_S_1i = rt::slot_string(_v3467); _v3467; });
    ({ rt::Value _v3468 = rt::trv(rt::VS(g::LS[984]), C_S__26_c::sm_S_8_21_Z(5.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())); this->f_S_7_23_ = rt::slot_string(_v3468); _v3468; });
    ({ rt::Value _v3469 = rt::VS(g::LS[671]); this->f_S__5e__21__23_ = rt::slot_string(_v3469); _v3469; });
    ({ double _v3470 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3470); _v3470; });
}
rt::Value C_S_9_22_G::m_S__21__21_G() {
    RT_FN("S_9_22_G.S__21__21_G");
    if ((({ bool _t3471 = (!this->f_S_4_21_K); _t3471 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t3471; }) && (C_S__26_c::sm_S__2c__22_F() >= 5.0))) {
        (void)(({ rt::Value _o3472 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3473 = rt::as_ptr<C_S_8G>(_o3472); _p3473 ? _p3473->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3472, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_9_22_G::g_S__5d__3b_() {
    RT_FN("S_9_22_G.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S__2c_P())) < 4.0);
    return false;
}
bool C_S_9_22_G::g_S__3f__21_a() {
    RT_FN("S_9_22_G.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S__2c_P())) < 4.0);
    return false;
}
C_S_9_22_G* C_S_9_22_G::alloc_() {
    C_S_9_22_G* o = rt::make<C_S_9_22_G>();
    return o;
}
rt::Value C_S_9_22_G::mk_(rt::Value* a, int n) {
    C_S_9_22_G* o = alloc_();
    o->C_S_9_22_G::ctor_();
    return rt::VO(o);
}
bool C_S_9_22_G::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_9_22_G::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_9_22_G::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_9_22_G::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_9_22_G::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9_22_G::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9_22_G__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S_9_22_G__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S_9_22_G::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9_22_G__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S_9_22_G__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S_9_22_G::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9E::ctor_() {
    RT_FN("S_9E.S_9E");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3474 = 117.0; this->f_S_6_21_Z = rt::touint_d(_v3474); _v3474; });
    ({ rt::Value _v3475 = rt::VS(g::LS[1165]); this->f_S_1i = rt::slot_string(_v3475); _v3475; });
    ({ rt::Value _v3476 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3476); _v3476; });
    ({ rt::Value _v3477 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3477); _v3477; });
    ({ double _v3478 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3478); _v3478; });
    ({ bool _v3479 = true; this->f_S_3_21_9 = _v3479; _v3479; });
}
C_S_9E* C_S_9E::alloc_() {
    C_S_9E* o = rt::make<C_S_9E>();
    return o;
}
rt::Value C_S_9E::mk_(rt::Value* a, int n) {
    C_S_9E* o = alloc_();
    o->C_S_9E::ctor_();
    return rt::VO(o);
}
bool C_S_9E::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_9E::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_9E::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_9E::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_9E::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9E::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9E__id)); return true;
    default: return false;
    }
}
bool C_S_9E::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9E__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_9E::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9N::ctor_() {
    RT_FN("S_9N.S_9N");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3480 = 5.0; this->f_S_6_21_Z = rt::touint_d(_v3480); _v3480; });
    ({ rt::Value _v3481 = rt::VS(g::LS[1166]); this->f_S_1i = rt::slot_string(_v3481); _v3481; });
    ({ rt::Value _v3482 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3482); _v3482; });
    ({ rt::Value _v3483 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3483); _v3483; });
    ({ double _v3484 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v3484); _v3484; });
    ({ bool _v3485 = true; this->f_S_3_21_9 = _v3485; _v3485; });
}
C_S_9N* C_S_9N::alloc_() {
    C_S_9N* o = rt::make<C_S_9N>();
    return o;
}
rt::Value C_S_9N::mk_(rt::Value* a, int n) {
    C_S_9N* o = alloc_();
    o->C_S_9N::ctor_();
    return rt::VO(o);
}
bool C_S_9N::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_9N::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_9N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_9N::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_9N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9N__id)); return true;
    case NM_ids: out = g::SV.C_S_9N__ids; return true;
    default: return false;
    }
}
bool C_S_9N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9N__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_9N__ids = v; return true;
    default: return false;
    }
}
bool C_S_9N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_9U::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_9U::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S_9U.S_9U");
    ({ double _v3486 = 9.0; this->f_S__60_r = rt::toint_d(_v3486); _v3486; });
    ({ double _v3487 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v3487); _v3487; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v3488 = 22.0; this->f_S_6_21_Z = rt::touint_d(_v3488); _v3488; });
}
C_S_9U* C_S_9U::alloc_() {
    C_S_9U* o = rt::make<C_S_9U>();
    return o;
}
rt::Value C_S_9U::mk_(rt::Value* a, int n) {
    C_S_9U* o = alloc_();
    o->C_S_9U::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S_9U::dctor_1()));
    return rt::VO(o);
}
bool C_S_9U::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S_9U::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S_9U::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S_9U::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S_9U::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9U::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9U__id)); return true;
    case NM_ids: out = g::SV.C_S_9U__ids; return true;
    default: return false;
    }
}
bool C_S_9U::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9U__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_9U__ids = v; return true;
    default: return false;
    }
}
bool C_S_9U::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_9b::ctor_() {
    RT_FN("S_9b.S_9b");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3489 = 70.0; this->f_S_6_21_Z = rt::touint_d(_v3489); _v3489; });
    ({ rt::Value _v3490 = rt::trv(rt::VS(g::LS[604])); this->f_S_1i = rt::slot_string(_v3490); _v3490; });
    ({ rt::Value _v3491 = rt::trv(rt::VS(g::LS[1169])); this->f_S_7_23_ = rt::slot_string(_v3491); _v3491; });
    ({ rt::Value _v3492 = rt::VS(g::LS[605]); this->f_S__5e__21__23_ = rt::slot_string(_v3492); _v3492; });
    ({ double _v3493 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3493); _v3493; });
}
rt::Value C_S_9b::m_S__21__21_G() {
    RT_FN("S_9b.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0), rt::V(500.0)))) {
        (void)(({ rt::Value _o3494 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3495 = rt::as_ptr<C_S_8G>(_o3494); _p3495 ? _p3495->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3494, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S_9b::g_S__5d__3b_() {
    RT_FN("S_9b.S__5d__3b__get");
    return true;
    return false;
}
C_S_9b* C_S_9b::alloc_() {
    C_S_9b* o = rt::make<C_S_9b>();
    return o;
}
rt::Value C_S_9b::mk_(rt::Value* a, int n) {
    C_S_9b* o = alloc_();
    o->C_S_9b::ctor_();
    return rt::VO(o);
}
bool C_S_9b::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_9b::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_9b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_9b::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_9b::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_9b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_9b__id)); return true;
    case NM_ids: out = g::SV.C_S_9b__ids; return true;
    default: return false;
    }
}
bool C_S_9b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_9b__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_9b__ids = v; return true;
    default: return false;
    }
}
bool C_S_9b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__21__3c_::ctor_() {
    RT_FN("S__3b__21__3c_.S__3b__21__3c_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3496 = 202.0; this->f_S_6_21_Z = rt::touint_d(_v3496); _v3496; });
    ({ rt::Value _v3497 = rt::trv(rt::VS(g::LS[487])); this->f_S_1i = rt::slot_string(_v3497); _v3497; });
    ({ rt::Value _v3498 = rt::VS(g::LS[488]); this->f_S__5e__21__23_ = rt::slot_string(_v3498); _v3498; });
    ({ double _v3499 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3499); _v3499; });
}
rt::Value C_S__3b__21__3c_::m_S__40__22_() {
    RT_FN("S__3b__21__3c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1171])));
    return rt::NUL;
}
rt::Value C_S__3b__21__3c_::m_S__21__21_G() {
    int32_t l_A__loc1_ = 0;
    rt::Value l_A__loc4_ = rt::NUL;
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__3b__21__3c_.S__21__21_G");
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::NUL);
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::NUL);
    if ((!this->f_S_4_21_K)) {
        (l_A__loc1_ = rt::toint_d(0.0));
        (l_A__loc4_ = rt::arr_lit({rt::VB(false), rt::VB(false), rt::VB(false), rt::VB(false)}));
        (l_A__loc3_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc3_)) < rt::alen(g::SV.C_S_8G__S_0_21_A))) {
            (l_A__loc2_ = rt::arr_at(g::SV.C_S_8G__S_0_21_A, ((double)(l_A__loc3_))));
            if (({ rt::Value _o3500 = l_A__loc2_; C_S_84* _p3501 = rt::as_ptr<C_S_84>(_o3500); _p3501 ? _p3501->f_S_3A : rt::T(rt::dget(_o3500, NM_S_3A)); })) {
                if (((((double)(({ rt::Value _o3502 = l_A__loc2_; C_S_84* _p3503 = rt::as_ptr<C_S_84>(_o3502); _p3503 ? _p3503->f_S__23__21_B : rt::toint(rt::dget(_o3502, NM_S__23__21_B)); }))) >= 0.0) && (!rt::T(rt::arr_at(l_A__loc4_, 0.0))))) {
                    (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
                    ({ rt::Value _v3504 = rt::VB(true); rt::idx_set(l_A__loc4_, rt::V(0.0), _v3504); });
                } else if (((((double)(({ rt::Value _o3505 = l_A__loc2_; C_S_84* _p3506 = rt::as_ptr<C_S_84>(_o3505); _p3506 ? _p3506->f_S_5_21_H : rt::toint(rt::dget(_o3505, NM_S_5_21_H)); }))) >= 0.0) && (!rt::T(rt::arr_at(l_A__loc4_, 1.0))))) {
                    (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
                    ({ rt::Value _v3507 = rt::VB(true); rt::idx_set(l_A__loc4_, rt::V(1.0), _v3507); });
                } else if (((((double)(({ rt::Value _o3508 = l_A__loc2_; C_S_84* _p3509 = rt::as_ptr<C_S_84>(_o3508); _p3509 ? _p3509->f_S_8_23_ : rt::toint(rt::dget(_o3508, NM_S_8_23_)); }))) >= 0.0) && (!rt::T(rt::arr_at(l_A__loc4_, 2.0))))) {
                    (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
                    ({ rt::Value _v3510 = rt::VB(true); rt::idx_set(l_A__loc4_, rt::V(2.0), _v3510); });
                }
                if (((((double)(({ rt::Value _o3511 = l_A__loc2_; C_S_84* _p3512 = rt::as_ptr<C_S_84>(_o3511); _p3512 ? _p3512->f_S_6_21_A : rt::toint(rt::dget(_o3511, NM_S_6_21_A)); }))) > 0.0) && (!rt::T(rt::arr_at(l_A__loc4_, 3.0))))) {
                    (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
                    ({ rt::Value _v3513 = rt::VB(true); rt::idx_set(l_A__loc4_, rt::V(3.0), _v3513); });
                }
            }
            (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
        }
        if ((((double)(l_A__loc1_)) == 4.0)) {
            (void)(({ rt::Value _o3514 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3515 = rt::as_ptr<C_S_8G>(_o3514); _p3515 ? _p3515->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3514, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__3b__21__3c_::g_S__5d__3b_() {
    RT_FN("S__3b__21__3c_.S__5d__3b__get");
    return true;
    return false;
}
C_S__3b__21__3c_* C_S__3b__21__3c_::alloc_() {
    C_S__3b__21__3c_* o = rt::make<C_S__3b__21__3c_>();
    return o;
}
rt::Value C_S__3b__21__3c_::mk_(rt::Value* a, int n) {
    C_S__3b__21__3c_* o = alloc_();
    o->C_S__3b__21__3c_::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21__3c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3b__21__3c_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3b__21__3c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3b__21__3c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3b__21__3c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21__3c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21__3c___id)); return true;
    default: return false;
    }
}
bool C_S__3b__21__3c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21__3c___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__21__3c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__21_9::ctor_() {
    RT_FN("S__3b__21_9.S__3b__21_9");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3516 = 81.0; this->f_S_6_21_Z = rt::touint_d(_v3516); _v3516; });
    ({ rt::Value _v3517 = rt::trv(rt::VS(g::LS[476])); this->f_S_1i = rt::slot_string(_v3517); _v3517; });
    ({ rt::Value _v3518 = rt::trv(rt::VS(g::LS[1172])); this->f_S_7_23_ = rt::slot_string(_v3518); _v3518; });
    ({ rt::Value _v3519 = rt::VS(g::LS[477]); this->f_S__5e__21__23_ = rt::slot_string(_v3519); _v3519; });
    ({ double _v3520 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v3520); _v3520; });
}
C_S__3b__21_9* C_S__3b__21_9::alloc_() {
    C_S__3b__21_9* o = rt::make<C_S__3b__21_9>();
    return o;
}
rt::Value C_S__3b__21_9::mk_(rt::Value* a, int n) {
    C_S__3b__21_9* o = alloc_();
    o->C_S__3b__21_9::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_9::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3b__21_9::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3b__21_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3b__21_9::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3b__21_9::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_9__id)); return true;
    case NM_ids: out = g::SV.C_S__3b__21_9__ids; return true;
    default: return false;
    }
}
bool C_S__3b__21_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_9__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3b__21_9__ids = v; return true;
    default: return false;
    }
}
bool C_S__3b__21_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__21_X::ctor_() {
    RT_FN("S__3b__21_X.S__3b__21_X");
    (void)((this->C_S__60__3d_::ctor_(), rt::NUL));
    ({ double _v3521 = 100.0; this->f_S_6_21_Z = rt::touint_d(_v3521); _v3521; });
    ({ rt::Value _v3522 = rt::trv(rt::VS(g::LS[537])); this->f_S_1i = rt::slot_string(_v3522); _v3522; });
    ({ rt::Value _v3523 = rt::VS(g::LS[538]); this->f_S__5e__21__23_ = rt::slot_string(_v3523); _v3523; });
    ({ double _v3524 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3524); _v3524; });
    ({ double _v3525 = 2.0; this->f_S__21_G = rt::toint_d(_v3525); _v3525; });
}
C_S__3b__21_X* C_S__3b__21_X::alloc_() {
    C_S__3b__21_X* o = rt::make<C_S__3b__21_X>();
    return o;
}
rt::Value C_S__3b__21_X::mk_(rt::Value* a, int n) {
    C_S__3b__21_X* o = alloc_();
    o->C_S__3b__21_X::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_X::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dget(id, out);
}
bool C_S__3b__21_X::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dset(id, v);
}
bool C_S__3b__21_X::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dcall(id, a, n, out);
}
bool C_S__3b__21_X::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dmeth(id);
}
bool C_S__3b__21_X::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21_X::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_X__id)); return true;
    case NM_ids: out = g::SV.C_S__3b__21_X__ids; return true;
    default: return false;
    }
}
bool C_S__3b__21_X::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_X__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3b__21_X__ids = v; return true;
    default: return false;
    }
}
bool C_S__3b__21_X::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__21_h::ctor_() {
    RT_FN("S__3b__21_h.S__3b__21_h");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3526 = 249.0; this->f_S_6_21_Z = rt::touint_d(_v3526); _v3526; });
    ({ rt::Value _v3527 = rt::trv(rt::VS(g::LS[403])); this->f_S_1i = rt::slot_string(_v3527); _v3527; });
    ({ rt::Value _v3528 = rt::VS(g::LS[404]); this->f_S__5e__21__23_ = rt::slot_string(_v3528); _v3528; });
    ({ double _v3529 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3529); _v3529; });
}
rt::Value C_S__3b__21_h::m_S__40__22_() {
    RT_FN("S__3b__21_h.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1008]), C_S__26_c::sm_S_8_21_Z(5000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3b__21_h::m_S__21__21_G() {
    RT_FN("S__3b__21_h.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0), rt::V(5000.0)))) {
        (void)(({ rt::Value _o3530 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3531 = rt::as_ptr<C_S_8G>(_o3530); _p3531 ? _p3531->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3530, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3b__21_h::g_S__5d__3b_() {
    RT_FN("S__3b__21_h.S__5d__3b__get");
    return true;
    return false;
}
C_S__3b__21_h* C_S__3b__21_h::alloc_() {
    C_S__3b__21_h* o = rt::make<C_S__3b__21_h>();
    return o;
}
rt::Value C_S__3b__21_h::mk_(rt::Value* a, int n) {
    C_S__3b__21_h* o = alloc_();
    o->C_S__3b__21_h::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_h::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3b__21_h::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3b__21_h::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3b__21_h::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3b__21_h::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21_h::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_h__id)); return true;
    case NM_S_8N: out = rt::V(g::SV.C_S__3b__21_h__S_8N); return true;
    default: return false;
    }
}
bool C_S__3b__21_h::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_h__id = rt::touint(v); return true;
    case NM_S_8N: g::SV.C_S__3b__21_h__S_8N = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3b__21_h::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b__21_o::ctor_() {
    RT_FN("S__3b__21_o.S__3b__21_o");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3532 = 267.0; this->f_S_6_21_Z = rt::touint_d(_v3532); _v3532; });
    ({ rt::Value _v3533 = rt::trv(rt::VS(g::LS[585])); this->f_S_1i = rt::slot_string(_v3533); _v3533; });
    ({ rt::Value _v3534 = rt::trv(rt::VS(g::LS[1175])); this->f_S_7_23_ = rt::slot_string(_v3534); _v3534; });
    ({ rt::Value _v3535 = rt::VS(g::LS[586]); this->f_S__5e__21__23_ = rt::slot_string(_v3535); _v3535; });
    ({ double _v3536 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3536); _v3536; });
}
rt::Value C_S__3b__21_o::m_S__21__21_G() {
    bool l_A__loc1_ = false;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__3b__21_o.S__21__21_G");
    (l_A__loc1_ = false);
    if ((!this->f_S_4_21_K)) {
        (l_A__loc1_ = false);
        {
            std::vector<rt::Value> _lst3537;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst3537);
            for (const rt::Value& _x3538 : _lst3537) {
                l_A__loc2_ = _x3538;
                if ((({ bool _t3545 = ({ bool _t3541 = rt::is_class(l_A__loc2_, C_S__26__21__5f_::CI); _t3541 ? (bool)((!({ rt::Value _o3539 = l_A__loc2_; C_S__60_6* _p3540 = rt::as_ptr<C_S__60_6>(_o3539); _p3540 ? _p3540->f_S__3f__21_6 : rt::T(rt::dget(_o3539, NM_S__3f__21_6)); }))) : _t3541; }); _t3545 ? (bool)((((double)(({ rt::Value _o3543 = (({ rt::Value _t3542 = l_A__loc2_; rt::is_class(_t3542, C_S__26__21__5f_::CI) ? _t3542 : rt::NUL; })); C_S__26__21__5f_* _p3544 = rt::as_ptr<C_S__26__21__5f_>(_o3543); _p3544 ? _p3544->f_S__25_w : rt::toint(rt::dget(_o3543, NM_S__25_w)); }))) > 1500.0)) : _t3545; }) && (((double)(({ rt::Value _o3547 = (({ rt::Value _t3546 = l_A__loc2_; rt::is_class(_t3546, C_S__26__21__5f_::CI) ? _t3546 : rt::NUL; })); C_S__26__21__5f_* _p3548 = rt::as_ptr<C_S__26__21__5f_>(_o3547); _p3548 ? _p3548->f_S__25_w : rt::toint(rt::dget(_o3547, NM_S__25_w)); }))) <= 3400.0))) {
                    (l_A__loc1_ = true);
                    break;
                }
            }
        }
        if ((!l_A__loc1_)) {
            (void)(({ rt::Value _o3549 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3550 = rt::as_ptr<C_S_8G>(_o3549); _p3550 ? _p3550->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3549, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__3b__21_o::g_S__5d__3b_() {
    RT_FN("S__3b__21_o.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 75.0);
    return false;
}
bool C_S__3b__21_o::g_S__3f__21_a() {
    RT_FN("S__3b__21_o.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
C_S__3b__21_o* C_S__3b__21_o::alloc_() {
    C_S__3b__21_o* o = rt::make<C_S__3b__21_o>();
    return o;
}
rt::Value C_S__3b__21_o::mk_(rt::Value* a, int n) {
    C_S__3b__21_o* o = alloc_();
    o->C_S__3b__21_o::ctor_();
    return rt::VO(o);
}
bool C_S__3b__21_o::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3b__21_o::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3b__21_o::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3b__21_o::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3b__21_o::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b__21_o::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b__21_o__id)); return true;
    default: return false;
    }
}
bool C_S__3b__21_o::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b__21_o__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3b__21_o::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3b_2::ctor_() {
    RT_FN("S__3b_2.S__3b_2");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3551 = 105.0; this->f_S_6_21_Z = rt::touint_d(_v3551); _v3551; });
    ({ rt::Value _v3552 = rt::trv(rt::VS(g::LS[369])); this->f_S_1i = rt::slot_string(_v3552); _v3552; });
    ({ rt::Value _v3553 = rt::VS(g::LS[370]); this->f_S__5e__21__23_ = rt::slot_string(_v3553); _v3553; });
    ({ double _v3554 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3554); _v3554; });
}
rt::Value C_S__3b_2::m_S__40__22_() {
    RT_FN("S__3b_2.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1176]), C_S__26_c::sm_S_8_21_Z(1000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3b_2::m_S__21__21_G() {
    RT_FN("S__3b_2.S__21__21_G");
    if ((({ bool _t3556 = ({ bool _t3555 = (!this->f_S_4_21_K); _t3555 ? (bool)(rt::lt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(300.0))) : _t3555; }); _t3556 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 0.0), rt::V(1000000.0))) : _t3556; }) && (!C_S_8G::sm_S_7d(g::SV.C_S_5_26___id)))) {
        (void)(({ rt::Value _o3557 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3558 = rt::as_ptr<C_S_8G>(_o3557); _p3558 ? _p3558->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3557, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3b_2::g_S__5d__3b_() {
    RT_FN("S__3b_2.S__5d__3b__get");
    return true;
    return false;
}
C_S__3b_2* C_S__3b_2::alloc_() {
    C_S__3b_2* o = rt::make<C_S__3b_2>();
    return o;
}
rt::Value C_S__3b_2::mk_(rt::Value* a, int n) {
    C_S__3b_2* o = alloc_();
    o->C_S__3b_2::ctor_();
    return rt::VO(o);
}
bool C_S__3b_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3b_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3b_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3b_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3b_2::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3b_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3b_2__id)); return true;
    case NM_ids: out = g::SV.C_S__3b_2__ids; return true;
    default: return false;
    }
}
bool C_S__3b_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3b_2__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3b_2__ids = v; return true;
    default: return false;
    }
}
bool C_S__3b_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__3d__21__22_::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__3d__21__22_::ctor_(int32_t p0, rt::Value p1, rt::Value p2) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__3d__21__22_.S__3d__21__22_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3559 = 17.0; this->f_S_6_21_Z = rt::touint_d(_v3559); _v3559; });
    ({ int32_t _v3560 = l_param1; this->f_S_5w = _v3560; _v3560; });
    ({ rt::Value _v3561 = l_param2; this->f_S_1i = rt::slot_string(_v3561); _v3561; });
    ({ rt::Value _v3562 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v3562); _v3562; });
    ({ double _v3563 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v3563); _v3563; });
    ({ rt::Value _v3564 = rt::VS(g::LS[1178]); this->f_S__3f__21__3d_ = rt::slot_string(_v3564); _v3564; });
}
rt::Value C_S__3d__21__22_::m_S__21__21_G() {
    RT_FN("S__3d__21__22_.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 12.0), rt::V((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o3565 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3566 = rt::as_ptr<C_S_8G>(_o3565); _p3566 ? _p3566->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3565, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3d__21__22_::m_S_8_5b_() {
    RT_FN("S__3d__21__22_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 12.0)), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__3d__21__22_::m_S__40__22_() {
    RT_FN("S__3d__21__22_.S__40__22_");
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[1179]), rt::VS(g::LS[1180]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__3d__21__22_* C_S__3d__21__22_::alloc_() {
    C_S__3d__21__22_* o = rt::make<C_S__3d__21__22_>();
    return o;
}
rt::Value C_S__3d__21__22_::mk_(rt::Value* a, int n) {
    C_S__3d__21__22_* o = alloc_();
    o->C_S__3d__21__22_::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__3d__21__22_::dctor_2()));
    return rt::VO(o);
}
bool C_S__3d__21__22_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3d__21__22_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3d__21__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3d__21__22_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3d__21__22_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__21__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__21__22___id)); return true;
    case NM_ids: out = g::SV.C_S__3d__21__22___ids; return true;
    default: return false;
    }
}
bool C_S__3d__21__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__21__22___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3d__21__22___ids = v; return true;
    default: return false;
    }
}
bool C_S__3d__21__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__21_y::ctor_() {
    RT_FN("S__3d__21_y.S__3d__21_y");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3567 = 312.0; this->f_S_6_21_Z = rt::touint_d(_v3567); _v3567; });
    ({ rt::Value _v3568 = rt::trv(rt::VS(g::LS[484])); this->f_S_1i = rt::slot_string(_v3568); _v3568; });
    ({ rt::Value _v3569 = rt::VS(g::LS[485]); this->f_S__5e__21__23_ = rt::slot_string(_v3569); _v3569; });
    ({ rt::Value _v3570 = rt::trv(rt::VS(g::LS[1182])); this->f_S_7_23_ = rt::slot_string(_v3570); _v3570; });
    ({ double _v3571 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v3571); _v3571; });
}
rt::Value C_S__3d__21_y::m_S__21__21_G() {
    RT_FN("S__3d__21_y.S__21__21_G");
    if ((({ bool _t3579 = ({ bool _t3578 = ({ bool _t3577 = ({ bool _t3576 = ({ bool _t3575 = ({ bool _t3574 = ({ bool _t3573 = ({ bool _t3572 = (!this->f_S_4_21_K); _t3572 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_7_21_y__id)) : _t3572; }); _t3573 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_6_21_y__id)) : _t3573; }); _t3574 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2b__21_z__id)) : _t3574; }); _t3575 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__5e__21_x__id)) : _t3575; }); _t3576 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_3_22__20___id)) : _t3576; }); _t3577 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__25__21_z__id)) : _t3577; }); _t3578 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21_y__id)) : _t3578; }); _t3579 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_21_x__id)) : _t3579; }) && C_S_8G::sm_S__3c_P(g::SV.C_S_5_21_y__id))) {
        (void)(({ rt::Value _o3580 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3581 = rt::as_ptr<C_S_8G>(_o3580); _p3581 ? _p3581->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3580, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3d__21_y::g_S__5d__3b_() {
    RT_FN("S__3d__21_y.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 125.0);
    return false;
}
bool C_S__3d__21_y::g_S__3f__21_a() {
    RT_FN("S__3d__21_y.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S__3d__21_y* C_S__3d__21_y::alloc_() {
    C_S__3d__21_y* o = rt::make<C_S__3d__21_y>();
    return o;
}
rt::Value C_S__3d__21_y::mk_(rt::Value* a, int n) {
    C_S__3d__21_y* o = alloc_();
    o->C_S__3d__21_y::ctor_();
    return rt::VO(o);
}
bool C_S__3d__21_y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3d__21_y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3d__21_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3d__21_y::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3d__21_y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__21_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__21_y__id)); return true;
    default: return false;
    }
}
bool C_S__3d__21_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__21_y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__21_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__40_::ctor_() {
    RT_FN("S__3d__40_.S__3d__40_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3582 = 198.0; this->f_S_6_21_Z = rt::touint_d(_v3582); _v3582; });
    ({ rt::Value _v3583 = rt::trv(rt::VS(g::LS[455])); this->f_S_1i = rt::slot_string(_v3583); _v3583; });
    ({ rt::Value _v3584 = rt::VS(g::LS[456]); this->f_S__5e__21__23_ = rt::slot_string(_v3584); _v3584; });
    ({ double _v3585 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3585); _v3585; });
}
rt::Value C_S__3d__40_::m_S__40__22_() {
    RT_FN("S__3d__40_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1183]), C_S__26_c::sm_S__23__3f_(g::SV.C_S__3e__21__60___id, 725.0, C_S__26_c::dsm_S__23__3f__2(), C_S__26_c::dsm_S__23__3f__3())));
    return rt::NUL;
}
rt::Value C_S__3d__40_::m_S__21__21_G() {
    RT_FN("S__3d__40_.S__21__21_G");
    if ((({ bool _t3589 = ({ bool _t3588 = ({ bool _t3587 = ({ bool _t3586 = (!this->f_S_4_21_K); _t3586 ? (bool)(rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(300.0))) : _t3586; }); _t3587 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S_5_26___id))) : _t3587; }); _t3588 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__40__22_J__id))) : _t3588; }); _t3589 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S__5b__22_J__id))) : _t3589; }) && (C_S_8G::sm_S__25_Z(g::SV.C_S__3e__21__60___id, true) >= 725.0))) {
        (void)(({ rt::Value _o3590 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3591 = rt::as_ptr<C_S_8G>(_o3590); _p3591 ? _p3591->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3590, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3d__40_::g_S__5d__3b_() {
    RT_FN("S__3d__40_.S__5d__3b__get");
    return true;
    return false;
}
C_S__3d__40_* C_S__3d__40_::alloc_() {
    C_S__3d__40_* o = rt::make<C_S__3d__40_>();
    return o;
}
rt::Value C_S__3d__40_::mk_(rt::Value* a, int n) {
    C_S__3d__40_* o = alloc_();
    o->C_S__3d__40_::ctor_();
    return rt::VO(o);
}
bool C_S__3d__40_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3d__40_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3d__40_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3d__40_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3d__40_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__40_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__40___id)); return true;
    case NM_S__2c__21_2: out = rt::V(g::SV.C_S__3d__40___S__2c__21_2); return true;
    default: return false;
    }
}
bool C_S__3d__40_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__40___id = rt::touint(v); return true;
    case NM_S__2c__21_2: g::SV.C_S__3d__40___S__2c__21_2 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3d__40_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__5b_::ctor_() {
    RT_FN("S__3d__5b_.S__3d__5b_");
    ({ rt::Value _v3592 = rt::new_vectorv(rt::E_ANY); this->f_S_6_21__5b_ = _v3592; _v3592; });
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3593 = 236.0; this->f_S_6_21_Z = rt::touint_d(_v3593); _v3593; });
    ({ rt::Value _v3594 = rt::trv(rt::VS(g::LS[563])); this->f_S_1i = rt::slot_string(_v3594); _v3594; });
    ({ rt::Value _v3595 = rt::VS(g::LS[564]); this->f_S__5e__21__23_ = rt::slot_string(_v3595); _v3595; });
    ({ double _v3596 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3596); _v3596; });
}
rt::Value C_S__3d__5b_::m_S__5b__21_C() {
    RT_FN("S__3d__5b_.S__5b__21_C");
    (void)(this->C_S__23__21__60_::m_S__5b__21_C());
    (void)(rt::dcallv(this->f_S_6_21__5b_, rt::N_push, C_S_8G::sm_S__23_N(g::SV.C_S__27_K__id)));
    (void)(rt::dcallv(this->f_S_6_21__5b_, rt::N_push, C_S_8G::sm_S__23_N(g::SV.C_S__27__21__27___id)));
    (void)(rt::dcallv(this->f_S_6_21__5b_, rt::N_push, C_S_8G::sm_S__23_N(g::SV.C_S_6_21_V__id)));
    (void)(rt::dcallv(this->f_S_6_21__5b_, rt::N_push, C_S_8G::sm_S__23_N(g::SV.C_S_2_21_E__id)));
    (void)(rt::dcallv(this->f_S_6_21__5b_, rt::N_push, C_S_8G::sm_S__23_N(g::SV.C_S__20__21_5__id)));
    (void)(rt::dcallv(this->f_S_6_21__5b_, rt::N_push, C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id)));
    (void)(rt::dcallv(this->f_S_6_21__5b_, rt::N_push, C_S_8G::sm_S__23_N(g::SV.C_S__5e_x__id)));
    (void)(rt::dcallv(this->f_S_6_21__5b_, rt::N_push, C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id)));
    (void)(rt::dcallv(this->f_S_6_21__5b_, rt::N_push, C_S_8G::sm_S__23_N(g::SV.C_S__25__21_J__id)));
    return rt::NUL;
}
rt::Value C_S__3d__5b_::m_S__40__22_() {
    RT_FN("S__3d__5b_.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[1184]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__3d__5b___S__5d_6, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[143])), rt::trv(rt::VS(g::LS[982]))));
    return rt::NUL;
}
rt::Value C_S__3d__5b_::m_S__21__21_G() {
    double l_A__loc3_ = NAN;
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc1_ = 0;
    RT_FN("S__3d__5b_.S__21__21_G");
    (l_A__loc3_ = NAN);
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::toint_d(0.0));
    if (((!this->f_S_4_21_K) && (((double)(C_S_8G::sg_S__2c_P())) >= 1.0))) {
        (l_A__loc3_ = 0.0);
        (l_A__loc2_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc2_)) < rt::alen(this->f_S_6_21__5b_))) {
            (l_A__loc1_ = rt::toint_d(rt::m_round((({ rt::Value _o3597 = rt::arr_at(this->f_S_6_21__5b_, ((double)(l_A__loc2_))); C_S_84* _p3598 = rt::as_ptr<C_S_84>(_o3597); _p3598 ? _p3598->g_S_2_2d_() : rt::tonum(rt::dget(_o3597, NM_S_2_2d_)); }) + ({ rt::Value _o3599 = rt::arr_at(this->f_S_6_21__5b_, ((double)(l_A__loc2_))); C_S_84* _p3600 = rt::as_ptr<C_S_84>(_o3599); _p3600 ? _p3600->g_S_5_21_L() : rt::tonum(rt::dget(_o3599, NM_S_5_21_L)); })))));
            if ((((double)(l_A__loc1_)) < g::SV.C_S__3d__5b___S__5d_6)) {
                return rt::NUL;
            }
            if ((l_A__loc3_ == 0.0)) {
                (l_A__loc3_ = ((double)(l_A__loc1_)));
            } else if ((!(l_A__loc3_ == ((double)(l_A__loc1_))))) {
                return rt::NUL;
            }
            (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
        }
        (void)(({ rt::Value _o3601 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3602 = rt::as_ptr<C_S_8G>(_o3601); _p3602 ? _p3602->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3601, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3d__5b_::g_S__5d__3b_() {
    RT_FN("S__3d__5b_.S__5d__3b__get");
    return true;
    return false;
}
C_S__3d__5b_* C_S__3d__5b_::alloc_() {
    C_S__3d__5b_* o = rt::make<C_S__3d__5b_>();
    return o;
}
rt::Value C_S__3d__5b_::mk_(rt::Value* a, int n) {
    C_S__3d__5b_* o = alloc_();
    o->C_S__3d__5b_::ctor_();
    return rt::VO(o);
}
bool C_S__3d__5b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S_6_21__5b_: out = f_S_6_21__5b_; return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3d__5b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_6_21__5b_: f_S_6_21__5b_ = v; return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3d__5b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S_6_21__5b_: { rt::Value f = f_S_6_21__5b_; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3d__5b_::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S_6_21__5b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3d__5b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__5b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__5b___id)); return true;
    case NM_S__5d_6: out = rt::V(g::SV.C_S__3d__5b___S__5d_6); return true;
    default: return false;
    }
}
bool C_S__3d__5b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__5b___id = rt::touint(v); return true;
    case NM_S__5d_6: g::SV.C_S__3d__5b___S__5d_6 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3d__5b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3d__5f_::ctor_() {
    RT_FN("S__3d__5f_.S__3d__5f_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3603 = 197.0; this->f_S_6_21_Z = rt::touint_d(_v3603); _v3603; });
    ({ rt::Value _v3604 = rt::trv(rt::VS(g::LS[433])); this->f_S_1i = rt::slot_string(_v3604); _v3604; });
    ({ rt::Value _v3605 = rt::trv(rt::VS(g::LS[1185])); this->f_S_7_23_ = rt::slot_string(_v3605); _v3605; });
    ({ rt::Value _v3606 = rt::VS(g::LS[434]); this->f_S__5e__21__23_ = rt::slot_string(_v3606); _v3606; });
    ({ double _v3607 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3607); _v3607; });
}
rt::Value C_S__3d__5f_::m_S__21__21_G() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3d__5f_.S__21__21_G");
    if ((!this->f_S_4_21_K)) {
        {
            std::vector<rt::Value> _lst3608;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst3608);
            for (const rt::Value& _x3609 : _lst3608) {
                l_A__loc1_ = _x3609;
                if ((({ bool _t3612 = rt::is_class(l_A__loc1_, C_S__5d__3c_::CI); _t3612 ? (bool)((!({ rt::Value _o3610 = l_A__loc1_; C_S__60_6* _p3611 = rt::as_ptr<C_S__60_6>(_o3610); _p3611 ? _p3611->f_S__3f__21_6 : rt::T(rt::dget(_o3610, NM_S__3f__21_6)); }))) : _t3612; }) && (({ bool _t3617 = (((double)(({ rt::Value _o3613 = l_A__loc1_; C_S__60_6* _p3614 = rt::as_ptr<C_S__60_6>(_o3613); _p3614 ? _p3614->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3613, NM_S__2d__21__5e_)); }))) == 9.0); _t3617 ? _t3617 : (bool)((((double)(({ rt::Value _o3615 = l_A__loc1_; C_S__60_6* _p3616 = rt::as_ptr<C_S__60_6>(_o3615); _p3616 ? _p3616->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3615, NM_S__2d__21__5e_)); }))) == 10.0)); }) || (((double)(({ rt::Value _o3618 = l_A__loc1_; C_S__60_6* _p3619 = rt::as_ptr<C_S__60_6>(_o3618); _p3619 ? _p3619->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3618, NM_S__2d__21__5e_)); }))) == 12.0)))) {
                    return rt::NUL;
                }
            }
        }
        (void)(({ rt::Value _o3620 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3621 = rt::as_ptr<C_S_8G>(_o3620); _p3621 ? _p3621->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3620, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3d__5f_::g_S__5d__3b_() {
    RT_FN("S__3d__5f_.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 48.0);
    return false;
}
bool C_S__3d__5f_::g_S__3f__21_a() {
    RT_FN("S__3d__5f_.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 2.0);
    return false;
}
C_S__3d__5f_* C_S__3d__5f_::alloc_() {
    C_S__3d__5f_* o = rt::make<C_S__3d__5f_>();
    return o;
}
rt::Value C_S__3d__5f_::mk_(rt::Value* a, int n) {
    C_S__3d__5f_* o = alloc_();
    o->C_S__3d__5f_::ctor_();
    return rt::VO(o);
}
bool C_S__3d__5f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3d__5f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3d__5f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3d__5f_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3d__5f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3d__5f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3d__5f___id)); return true;
    default: return false;
    }
}
bool C_S__3d__5f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3d__5f___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3d__5f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__40__21__3e_::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__40__21__3e_::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__40__21__3e_.S__40__21__3e_");
    ({ double _v3622 = 3.0; this->f_S__60_r = rt::toint_d(_v3622); _v3622; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v3623 = 16.0; this->f_S_6_21_Z = rt::touint_d(_v3623); _v3623; });
}
C_S__40__21__3e_* C_S__40__21__3e_::alloc_() {
    C_S__40__21__3e_* o = rt::make<C_S__40__21__3e_>();
    return o;
}
rt::Value C_S__40__21__3e_::mk_(rt::Value* a, int n) {
    C_S__40__21__3e_* o = alloc_();
    o->C_S__40__21__3e_::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__40__21__3e_::dctor_1()));
    return rt::VO(o);
}
bool C_S__40__21__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__40__21__3e_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__40__21__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__40__21__3e_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__40__21__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21__3e___id)); return true;
    case NM_ids: out = g::SV.C_S__40__21__3e___ids; return true;
    default: return false;
    }
}
bool C_S__40__21__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21__3e___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__40__21__3e___ids = v; return true;
    default: return false;
    }
}
bool C_S__40__21__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__21_K::ctor_() {
    RT_FN("S__40__21_K.S__40__21_K");
    (void)((this->C_S__60__3d_::ctor_(), rt::NUL));
    ({ double _v3624 = 99.0; this->f_S_6_21_Z = rt::touint_d(_v3624); _v3624; });
    ({ rt::Value _v3625 = rt::trv(rt::VS(g::LS[439])); this->f_S_1i = rt::slot_string(_v3625); _v3625; });
    ({ rt::Value _v3626 = rt::VS(g::LS[440]); this->f_S__5e__21__23_ = rt::slot_string(_v3626); _v3626; });
    ({ double _v3627 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3627); _v3627; });
    ({ double _v3628 = 3.0; this->f_S__21_G = rt::toint_d(_v3628); _v3628; });
}
C_S__40__21_K* C_S__40__21_K::alloc_() {
    C_S__40__21_K* o = rt::make<C_S__40__21_K>();
    return o;
}
rt::Value C_S__40__21_K::mk_(rt::Value* a, int n) {
    C_S__40__21_K* o = alloc_();
    o->C_S__40__21_K::ctor_();
    return rt::VO(o);
}
bool C_S__40__21_K::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dget(id, out);
}
bool C_S__40__21_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dset(id, v);
}
bool C_S__40__21_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dcall(id, a, n, out);
}
bool C_S__40__21_K::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dmeth(id);
}
bool C_S__40__21_K::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__21_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__21_K__id)); return true;
    case NM_ids: out = g::SV.C_S__40__21_K__ids; return true;
    default: return false;
    }
}
bool C_S__40__21_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__21_K__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__40__21_K__ids = v; return true;
    default: return false;
    }
}
bool C_S__40__21_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__22__25_::ctor_() {
    RT_FN("S__40__22__25_.S__40__22__25_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3629 = 320.0; this->f_S_6_21_Z = rt::touint_d(_v3629); _v3629; });
    ({ rt::Value _v3630 = rt::trv(rt::VS(g::LS[587])); this->f_S_1i = rt::slot_string(_v3630); _v3630; });
    ({ rt::Value _v3631 = rt::VS(g::LS[588]); this->f_S__5e__21__23_ = rt::slot_string(_v3631); _v3631; });
    ({ double _v3632 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3632); _v3632; });
}
rt::Value C_S__40__22__25_::m_S__40__22_() {
    RT_FN("S__40__22__25_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1188]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__40__22__25___S_9x, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__40__22__25_::m_S__3d_u() {
    RT_FN("S__40__22__25_.S__3d_u");
    (void)(this->C_S__23__21__60_::m_S__3d_u());
    if (((((double)(C_S_8G::sg_S__2c_P())) >= 2.0) && (C_S__26_c::sm_S__3d__60_(true) >= g::SV.C_S__40__22__25___S_9x))) {
        (void)(({ rt::Value _o3633 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3634 = rt::as_ptr<C_S_8G>(_o3633); _p3634 ? _p3634->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3633, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__40__22__25_::g_S__5d__3b_() {
    RT_FN("S__40__22__25_.S__5d__3b__get");
    return true;
    return false;
}
C_S__40__22__25_* C_S__40__22__25_::alloc_() {
    C_S__40__22__25_* o = rt::make<C_S__40__22__25_>();
    return o;
}
rt::Value C_S__40__22__25_::mk_(rt::Value* a, int n) {
    C_S__40__22__25_* o = alloc_();
    o->C_S__40__22__25_::ctor_();
    return rt::VO(o);
}
bool C_S__40__22__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d_u: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__40__22__25_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__40__22__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__3d_u: out = m_S__3d_u(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__40__22__25_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__3d_u: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__40__22__25_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__22__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__22__25___id)); return true;
    case NM_S_9x: out = rt::V(g::SV.C_S__40__22__25___S_9x); return true;
    default: return false;
    }
}
bool C_S__40__22__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__22__25___id = rt::touint(v); return true;
    case NM_S_9x: g::SV.C_S__40__22__25___S_9x = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__40__22__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__3e_::ctor_() {
    RT_FN("S__40__3e_.S__40__3e_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3635 = 74.0; this->f_S_6_21_Z = rt::touint_d(_v3635); _v3635; });
    ({ rt::Value _v3636 = rt::trv(rt::VS(g::LS[365])); this->f_S_1i = rt::slot_string(_v3636); _v3636; });
    ({ rt::Value _v3637 = rt::trv(rt::VS(g::LS[1189])); this->f_S_7_23_ = rt::slot_string(_v3637); _v3637; });
    ({ rt::Value _v3638 = rt::VS(g::LS[366]); this->f_S__5e__21__23_ = rt::slot_string(_v3638); _v3638; });
    ({ double _v3639 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3639); _v3639; });
}
rt::Value C_S__40__3e_::m_S__21__21_G() {
    RT_FN("S__40__3e_.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 45.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 45.0)), rt::V(28800.0)))) {
        (void)(({ rt::Value _o3640 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3641 = rt::as_ptr<C_S_8G>(_o3640); _p3641 ? _p3641->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3640, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__40__3e_::g_S__5d__3b_() {
    RT_FN("S__40__3e_.S__5d__3b__get");
    return true;
    return false;
}
C_S__40__3e_* C_S__40__3e_::alloc_() {
    C_S__40__3e_* o = rt::make<C_S__40__3e_>();
    return o;
}
rt::Value C_S__40__3e_::mk_(rt::Value* a, int n) {
    C_S__40__3e_* o = alloc_();
    o->C_S__40__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__40__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__40__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__40__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__40__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__40__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__3e___id)); return true;
    case NM_ids: out = g::SV.C_S__40__3e___ids; return true;
    default: return false;
    }
}
bool C_S__40__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__3e___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__40__3e___ids = v; return true;
    default: return false;
    }
}
bool C_S__40__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40__27_::ctor_() {
    RT_FN("S__40__27_.S__40__27_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3642 = 201.0; this->f_S_6_21_Z = rt::touint_d(_v3642); _v3642; });
    ({ rt::Value _v3643 = rt::trv(rt::VS(g::LS[415])); this->f_S_1i = rt::slot_string(_v3643); _v3643; });
    ({ rt::Value _v3644 = rt::VS(g::LS[416]); this->f_S__5e__21__23_ = rt::slot_string(_v3644); _v3644; });
    ({ double _v3645 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3645); _v3645; });
}
rt::Value C_S__40__27_::m_S__40__22_() {
    RT_FN("S__40__27_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1191]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__40__27_::m_S__21__21_G() {
    RT_FN("S__40__27_.S__21__21_G");
    if (((!this->f_S_4_21_K) && (C_S__26_c::sm_S__20__21__3b_(rt::toint_d(125.0)) >= 100.0))) {
        (void)(({ rt::Value _o3646 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3647 = rt::as_ptr<C_S_8G>(_o3646); _p3647 ? _p3647->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3646, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__40__27_::g_S__5d__3b_() {
    RT_FN("S__40__27_.S__5d__3b__get");
    return true;
    return false;
}
C_S__40__27_* C_S__40__27_::alloc_() {
    C_S__40__27_* o = rt::make<C_S__40__27_>();
    return o;
}
rt::Value C_S__40__27_::mk_(rt::Value* a, int n) {
    C_S__40__27_* o = alloc_();
    o->C_S__40__27_::ctor_();
    return rt::VO(o);
}
bool C_S__40__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__40__27_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__40__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__40__27_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__40__27_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40__27___id)); return true;
    case NM_S_0_21_V: out = rt::V((double)(g::SV.C_S__40__27___S_0_21_V)); return true;
    default: return false;
    }
}
bool C_S__40__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40__27___id = rt::touint(v); return true;
    case NM_S_0_21_V: g::SV.C_S__40__27___S_0_21_V = rt::toint(v); return true;
    default: return false;
    }
}
bool C_S__40__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__40_H::ctor_() {
    RT_FN("S__40_H.S__40_H");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3648 = 109.0; this->f_S_6_21_Z = rt::touint_d(_v3648); _v3648; });
    ({ rt::Value _v3649 = rt::trv(rt::VS(g::LS[378])); this->f_S_1i = rt::slot_string(_v3649); _v3649; });
    ({ rt::Value _v3650 = rt::trv(rt::VS(g::LS[1192])); this->f_S_7_23_ = rt::slot_string(_v3650); _v3650; });
    ({ rt::Value _v3651 = rt::VS(g::LS[379]); this->f_S__5e__21__23_ = rt::slot_string(_v3651); _v3651; });
    ({ double _v3652 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3652); _v3652; });
}
rt::Value C_S__40_H::m_S__21__21_G() {
    bool l_A__loc1_ = false;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__40_H.S__21__21_G");
    (l_A__loc1_ = false);
    if (((!this->f_S_4_21_K) && (!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0)))) {
        (l_A__loc1_ = false);
        {
            std::vector<rt::Value> _lst3653;
            rt::each(g::SV.C_S_8G__S__25__3c_, _lst3653);
            for (const rt::Value& _x3654 : _lst3653) {
                l_A__loc2_ = _x3654;
                if (((({ bool _t3659 = (((double)(({ rt::Value _o3655 = l_A__loc2_; C_S__60__21__3b_* _p3656 = rt::as_ptr<C_S__60__21__3b_>(_o3655); _p3656 ? _p3656->f_S__2c__21_Y : rt::toint(rt::dget(_o3655, NM_S__2c__21_Y)); }))) == 0.0); _t3659 ? _t3659 : (bool)((((double)(({ rt::Value _o3657 = l_A__loc2_; C_S__60__21__3b_* _p3658 = rt::as_ptr<C_S__60__21__3b_>(_o3657); _p3658 ? _p3658->f_S__2c__21_Y : rt::toint(rt::dget(_o3657, NM_S__2c__21_Y)); }))) == ((double)(g::SV.C_S_8G__S__2c__21_Y)))); })) && (!(((double)(({ rt::Value _o3660 = l_A__loc2_; C_S__60__21__3b_* _p3661 = rt::as_ptr<C_S__60__21__3b_>(_o3660); _p3661 ? _p3661->g_S__21_a() : rt::touint(rt::dget(_o3660, NM_S__21_a)); }))) == 1.0)))) {
                    (l_A__loc1_ = true);
                    break;
                }
            }
        }
        if ((!l_A__loc1_)) {
            (void)(({ rt::Value _o3662 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3663 = rt::as_ptr<C_S_8G>(_o3662); _p3663 ? _p3663->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3662, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__40_H::g_S__5d__3b_() {
    RT_FN("S__40_H.S__5d__3b__get");
    return true;
    return false;
}
C_S__40_H* C_S__40_H::alloc_() {
    C_S__40_H* o = rt::make<C_S__40_H>();
    return o;
}
rt::Value C_S__40_H::mk_(rt::Value* a, int n) {
    C_S__40_H* o = alloc_();
    o->C_S__40_H::ctor_();
    return rt::VO(o);
}
bool C_S__40_H::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__40_H::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__40_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__40_H::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__40_H::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__40_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__40_H__id)); return true;
    case NM_ids: out = g::SV.C_S__40_H__ids; return true;
    default: return false;
    }
}
bool C_S__40_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__40_H__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__40_H__ids = v; return true;
    default: return false;
    }
}
bool C_S__40_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__21__27_::ctor_() {
    RT_FN("S__5b__21__27_.S__5b__21__27_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3664 = 95.0; this->f_S_6_21_Z = rt::touint_d(_v3664); _v3664; });
    ({ rt::Value _v3665 = rt::trv(rt::VS(g::LS[593])); this->f_S_1i = rt::slot_string(_v3665); _v3665; });
    ({ rt::Value _v3666 = rt::trv(rt::VS(g::LS[1194])); this->f_S_7_23_ = rt::slot_string(_v3666); _v3666; });
    ({ rt::Value _v3667 = rt::VS(g::LS[594]); this->f_S__5e__21__23_ = rt::slot_string(_v3667); _v3667; });
    ({ double _v3668 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3668); _v3668; });
}
rt::Value C_S__5b__21__27_::m_S__21__21_G() {
    RT_FN("S__5b__21__27_.S__21__21_G");
    if (((!this->f_S_4_21_K) && (C_S_8G::sg_S_1_21_5() >= 400.0))) {
        (void)(({ rt::Value _o3669 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3670 = rt::as_ptr<C_S_8G>(_o3669); _p3670 ? _p3670->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3669, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__5b__21__27_::g_S__5d__3b_() {
    RT_FN("S__5b__21__27_.S__5d__3b__get");
    return true;
    return false;
}
C_S__5b__21__27_* C_S__5b__21__27_::alloc_() {
    C_S__5b__21__27_* o = rt::make<C_S__5b__21__27_>();
    return o;
}
rt::Value C_S__5b__21__27_::mk_(rt::Value* a, int n) {
    C_S__5b__21__27_* o = alloc_();
    o->C_S__5b__21__27_::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__5b__21__27_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__5b__21__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__5b__21__27_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__5b__21__27_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21__27___id)); return true;
    case NM_ids: out = g::SV.C_S__5b__21__27___ids; return true;
    default: return false;
    }
}
bool C_S__5b__21__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21__27___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5b__21__27___ids = v; return true;
    default: return false;
    }
}
bool C_S__5b__21__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__21_b::ctor_() {
    RT_FN("S__5b__21_b.S__5b__21_b");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3671 = 61.0; this->f_S_6_21_Z = rt::touint_d(_v3671); _v3671; });
    ({ rt::Value _v3672 = rt::VS(g::LS[1196]); this->f_S_1i = rt::slot_string(_v3672); _v3672; });
    ({ rt::Value _v3673 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3673); _v3673; });
    ({ rt::Value _v3674 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3674); _v3674; });
    ({ bool _v3675 = true; this->f_S_3_21_9 = _v3675; _v3675; });
    ({ double _v3676 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3676); _v3676; });
}
C_S__5b__21_b* C_S__5b__21_b::alloc_() {
    C_S__5b__21_b* o = rt::make<C_S__5b__21_b>();
    return o;
}
rt::Value C_S__5b__21_b::mk_(rt::Value* a, int n) {
    C_S__5b__21_b* o = alloc_();
    o->C_S__5b__21_b::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_b::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__5b__21_b::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__5b__21_b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__5b__21_b::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__5b__21_b::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21_b__id)); return true;
    case NM_ids: out = g::SV.C_S__5b__21_b__ids; return true;
    default: return false;
    }
}
bool C_S__5b__21_b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21_b__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__5b__21_b__ids = v; return true;
    default: return false;
    }
}
bool C_S__5b__21_b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__21_i::ctor_() {
    RT_FN("S__5b__21_i.S__5b__21_i");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3677 = 239.0; this->f_S_6_21_Z = rt::touint_d(_v3677); _v3677; });
    ({ rt::Value _v3678 = rt::VS(g::LS[1198]); this->f_S_1i = rt::slot_string(_v3678); _v3678; });
    ({ rt::Value _v3679 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3679); _v3679; });
    ({ rt::Value _v3680 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3680); _v3680; });
    ({ double _v3681 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3681); _v3681; });
    ({ bool _v3682 = true; this->f_S_3_21_9 = _v3682; _v3682; });
}
C_S__5b__21_i* C_S__5b__21_i::alloc_() {
    C_S__5b__21_i* o = rt::make<C_S__5b__21_i>();
    return o;
}
rt::Value C_S__5b__21_i::mk_(rt::Value* a, int n) {
    C_S__5b__21_i* o = alloc_();
    o->C_S__5b__21_i::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_i::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__5b__21_i::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__5b__21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__5b__21_i::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__5b__21_i::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21_i__id)); return true;
    default: return false;
    }
}
bool C_S__5b__21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__21_o::ctor_() {
    RT_FN("S__5b__21_o.S__5b__21_o");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3683 = 260.0; this->f_S_6_21_Z = rt::touint_d(_v3683); _v3683; });
    ({ rt::Value _v3684 = rt::VS(g::LS[1199]); this->f_S_1i = rt::slot_string(_v3684); _v3684; });
    ({ rt::Value _v3685 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v3685); _v3685; });
    ({ rt::Value _v3686 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v3686); _v3686; });
    ({ double _v3687 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3687); _v3687; });
    ({ bool _v3688 = true; this->f_S_3_21_9 = _v3688; _v3688; });
}
C_S__5b__21_o* C_S__5b__21_o::alloc_() {
    C_S__5b__21_o* o = rt::make<C_S__5b__21_o>();
    return o;
}
rt::Value C_S__5b__21_o::mk_(rt::Value* a, int n) {
    C_S__5b__21_o* o = alloc_();
    o->C_S__5b__21_o::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_o::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__5b__21_o::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__5b__21_o::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__5b__21_o::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__5b__21_o::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_o::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21_o__id)); return true;
    default: return false;
    }
}
bool C_S__5b__21_o::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21_o__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21_o::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__5b__21_q::ctor_() {
    RT_FN("S__5b__21_q.S__5b__21_q");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3689 = 286.0; this->f_S_6_21_Z = rt::touint_d(_v3689); _v3689; });
    ({ rt::Value _v3690 = rt::trv(rt::VS(g::LS[506])); this->f_S_1i = rt::slot_string(_v3690); _v3690; });
    ({ rt::Value _v3691 = rt::trv(rt::VS(g::LS[1200])); this->f_S_7_23_ = rt::slot_string(_v3691); _v3691; });
    ({ rt::Value _v3692 = rt::VS(g::LS[507]); this->f_S__5e__21__23_ = rt::slot_string(_v3692); _v3692; });
    ({ double _v3693 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v3693); _v3693; });
}
rt::Value C_S__5b__21_q::m_S__21__21_G() {
    RT_FN("S__5b__21_q.S__21__21_G");
    if ((({ bool _t3694 = (!this->f_S_4_21_K); _t3694 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t3694; }) && ((((({ rt::Value _o3695 = C_S_8G::sm_S__23_N(g::SV.C_S__60_T__id); C_S_84* _p3696 = rt::as_ptr<C_S_84>(_o3695); _p3696 ? _p3696->g_S__3f_j() : rt::tonum(rt::dget(_o3695, NM_S__3f_j)); }) + ({ rt::Value _o3697 = C_S_8G::sm_S__23_N(g::SV.C_S__60_T__id); C_S_84* _p3698 = rt::as_ptr<C_S_84>(_o3697); _p3698 ? _p3698->g_S__3c_q() : rt::tonum(rt::dget(_o3697, NM_S__3c_q)); })) + ({ rt::Value _o3699 = C_S_8G::sm_S__23_N(g::SV.C_S_7I__id); C_S_84* _p3700 = rt::as_ptr<C_S_84>(_o3699); _p3700 ? _p3700->g_S__3f_j() : rt::tonum(rt::dget(_o3699, NM_S__3f_j)); })) + ({ rt::Value _o3701 = C_S_8G::sm_S__23_N(g::SV.C_S_7I__id); C_S_84* _p3702 = rt::as_ptr<C_S_84>(_o3701); _p3702 ? _p3702->g_S__3c_q() : rt::tonum(rt::dget(_o3701, NM_S__3c_q)); })) >= 86400.0))) {
        (void)(({ rt::Value _o3703 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3704 = rt::as_ptr<C_S_8G>(_o3703); _p3704 ? _p3704->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3703, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__5b__21_q::g_S__5d__3b_() {
    RT_FN("S__5b__21_q.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S__2c_P())) < 2.0);
    return false;
}
bool C_S__5b__21_q::g_S__3f__21_a() {
    RT_FN("S__5b__21_q.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S__5b__21_q* C_S__5b__21_q::alloc_() {
    C_S__5b__21_q* o = rt::make<C_S__5b__21_q>();
    return o;
}
rt::Value C_S__5b__21_q::mk_(rt::Value* a, int n) {
    C_S__5b__21_q* o = alloc_();
    o->C_S__5b__21_q::ctor_();
    return rt::VO(o);
}
bool C_S__5b__21_q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__5b__21_q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__5b__21_q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__5b__21_q::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__5b__21_q::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__5b__21_q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__5b__21_q__id)); return true;
    default: return false;
    }
}
bool C_S__5b__21_q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__5b__21_q__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__5b__21_q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void static_init_4(std::vector<std::string>& errs) {
    try { (g::SV.C_S_0a__ids = rt::arr_lit({rt::VS(g::LS[1068])})); } catch (...) { errs.push_back(std::string("S_0a.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_1_40___ids = rt::arr_lit({rt::VS(g::LS[1077])})); } catch (...) { errs.push_back(std::string("S_1_40_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_2E__ids = rt::arr_lit({rt::VS(g::LS[1081])})); } catch (...) { errs.push_back(std::string("S_2E.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_2J__ids = rt::arr_lit({rt::VS(g::LS[1083])})); } catch (...) { errs.push_back(std::string("S_2J.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_3_21_1__ids = rt::arr_lit({rt::VS(g::LS[1085])})); } catch (...) { errs.push_back(std::string("S_3_21_1.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_3_21_4__ids = rt::arr_lit({rt::VS(g::LS[1086])})); } catch (...) { errs.push_back(std::string("S_3_21_4.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_3_3c___ids = rt::arr_lit({rt::VS(g::LS[1091])})); } catch (...) { errs.push_back(std::string("S_3_3c_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_30__ids = rt::arr_lit({rt::VS(g::LS[1092])})); } catch (...) { errs.push_back(std::string("S_30.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_35__ids = rt::arr_lit({rt::VS(g::LS[1096])})); } catch (...) { errs.push_back(std::string("S_35.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_39__ids = rt::arr_lit({rt::VS(g::LS[1101])})); } catch (...) { errs.push_back(std::string("S_39.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_3N__ids = rt::arr_lit({rt::VS(g::LS[1116])})); } catch (...) { errs.push_back(std::string("S_3N.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_4_3f___ids = rt::arr_lit({rt::VS(g::LS[1122])})); } catch (...) { errs.push_back(std::string("S_4_3f_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_4G__ids = rt::arr_lit({rt::VS(g::LS[1124])})); } catch (...) { errs.push_back(std::string("S_4G.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_4N__S__3c__5e_ = 40.0); } catch (...) { errs.push_back(std::string("S_4N.S__3c__5e_: ") + rt::exc_text()); }
    try { (g::SV.C_S_4N__S__22_H = (-1.0)); } catch (...) { errs.push_back(std::string("S_4N.S__22_H: ") + rt::exc_text()); }
    try { (g::SV.C_S_4o__ids = rt::arr_lit({rt::VS(g::LS[1130])})); } catch (...) { errs.push_back(std::string("S_4o.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_5r__S__3c__21_b = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("S_5r.S__3c__21_b: ") + rt::exc_text()); }
    try { (g::SV.C_S_6_21__25___ids = rt::arr_lit({rt::VS(g::LS[1133])})); } catch (...) { errs.push_back(std::string("S_6_21__25_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_6_21_4__S_5_21_n = 850.0); } catch (...) { errs.push_back(std::string("S_6_21_4.S_5_21_n: ") + rt::exc_text()); }
    try { (g::SV.C_S_6_21_4__ids = rt::arr_lit({rt::VS(g::LS[1135])})); } catch (...) { errs.push_back(std::string("S_6_21_4.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_6_21_N__ids = rt::arr_lit({rt::VS(g::LS[1136])})); } catch (...) { errs.push_back(std::string("S_6_21_N.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_21_4__ids = rt::arr_lit({rt::VS(g::LS[1137])})); } catch (...) { errs.push_back(std::string("S_7_21_4.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_22__27___S__5d__21__3e_ = 100.0); } catch (...) { errs.push_back(std::string("S_7_22__27_.S__5d__21__3e_: ") + rt::exc_text()); }
    try { (g::SV.C_S_7_22__27___S__3b__21__25_ = 30.0); } catch (...) { errs.push_back(std::string("S_7_22__27_.S__3b__21__25_: ") + rt::exc_text()); }
    try { (g::SV.C_S_73__ids = rt::arr_lit({rt::VS(g::LS[1139])})); } catch (...) { errs.push_back(std::string("S_73.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_7N__ids = rt::arr_lit({rt::VS(g::LS[1142])})); } catch (...) { errs.push_back(std::string("S_7N.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_8_21__20___ids = rt::arr_lit({rt::VS(g::LS[1145])})); } catch (...) { errs.push_back(std::string("S_8_21__20_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_8_21__23___S_0_21_V = rt::toint_d(100.0)); } catch (...) { errs.push_back(std::string("S_8_21__23_.S_0_21_V: ") + rt::exc_text()); }
    try { (g::SV.C_S_8_21__23___ids = rt::arr_lit({rt::VS(g::LS[1147])})); } catch (...) { errs.push_back(std::string("S_8_21__23_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_8K__ids = rt::arr_lit({rt::VS(g::LS[1153])})); } catch (...) { errs.push_back(std::string("S_8K.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_8Y__ids = rt::arr_lit({rt::VS(g::LS[1155])})); } catch (...) { errs.push_back(std::string("S_8Y.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_21__3d___S_0O = rt::toint_d(100000.0)); } catch (...) { errs.push_back(std::string("S_9_21__3d_.S_0O: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_21__3d___ids = rt::arr_lit({rt::VS(g::LS[1157])})); } catch (...) { errs.push_back(std::string("S_9_21__3d_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_21_N__ids = rt::arr_lit({rt::VS(g::LS[1160])})); } catch (...) { errs.push_back(std::string("S_9_21_N.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_21_j__S_8_21_h = 180.0); } catch (...) { errs.push_back(std::string("S_9_21_j.S_8_21_h: ") + rt::exc_text()); }
    try { (g::SV.C_S_9_22_G__S__5e__21_s = 5.0); } catch (...) { errs.push_back(std::string("S_9_22_G.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S_9N__ids = rt::arr_lit({rt::VS(g::LS[1167])})); } catch (...) { errs.push_back(std::string("S_9N.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_9U__ids = rt::arr_lit({rt::VS(g::LS[1168])})); } catch (...) { errs.push_back(std::string("S_9U.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_9b__ids = rt::arr_lit({rt::VS(g::LS[1170])})); } catch (...) { errs.push_back(std::string("S_9b.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__21_9__ids = rt::arr_lit({rt::VS(g::LS[1173])})); } catch (...) { errs.push_back(std::string("S__3b__21_9.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__21_X__ids = rt::arr_lit({rt::VS(g::LS[1174])})); } catch (...) { errs.push_back(std::string("S__3b__21_X.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b__21_h__S_8N = 5000.0); } catch (...) { errs.push_back(std::string("S__3b__21_h.S_8N: ") + rt::exc_text()); }
    try { (g::SV.C_S__3b_2__ids = rt::arr_lit({rt::VS(g::LS[1177])})); } catch (...) { errs.push_back(std::string("S__3b_2.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__21__22___ids = rt::arr_lit({rt::VS(g::LS[1181])})); } catch (...) { errs.push_back(std::string("S__3d__21__22_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__40___S__2c__21_2 = 725.0); } catch (...) { errs.push_back(std::string("S__3d__40_.S__2c__21_2: ") + rt::exc_text()); }
    try { (g::SV.C_S__3d__5b___S__5d_6 = 100.0); } catch (...) { errs.push_back(std::string("S__3d__5b_.S__5d_6: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__21__3e___ids = rt::arr_lit({rt::VS(g::LS[1186])})); } catch (...) { errs.push_back(std::string("S__40__21__3e_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__21_K__ids = rt::arr_lit({rt::VS(g::LS[1187])})); } catch (...) { errs.push_back(std::string("S__40__21_K.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__22__25___S_9x = 100000.0); } catch (...) { errs.push_back(std::string("S__40__22__25_.S_9x: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__3e___ids = rt::arr_lit({rt::VS(g::LS[1190])})); } catch (...) { errs.push_back(std::string("S__40__3e_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__40__27___S_0_21_V = rt::toint_d(100.0)); } catch (...) { errs.push_back(std::string("S__40__27_.S_0_21_V: ") + rt::exc_text()); }
    try { (g::SV.C_S__40_H__ids = rt::arr_lit({rt::VS(g::LS[1193])})); } catch (...) { errs.push_back(std::string("S__40_H.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5b__21__27___ids = rt::arr_lit({rt::VS(g::LS[1195])})); } catch (...) { errs.push_back(std::string("S__5b__21__27_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__5b__21_b__ids = rt::arr_lit({rt::VS(g::LS[1197])})); } catch (...) { errs.push_back(std::string("S__5b__21_b.ids: ") + rt::exc_text()); }
}
}  // namespace g
