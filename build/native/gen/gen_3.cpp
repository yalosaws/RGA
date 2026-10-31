// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_S__23__21__22_::ctor_() {
    RT_FN("S__23__21__22_.S__23__21__22_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2380 = 80.0; this->f_S_6_21_Z = rt::touint_d(_v2380); _v2380; });
    ({ rt::Value _v2381 = rt::trv(rt::VS(g::LS[675])); this->f_S_1i = rt::slot_string(_v2381); _v2381; });
    ({ rt::Value _v2382 = rt::trv(rt::VS(g::LS[897])); this->f_S_7_23_ = rt::slot_string(_v2382); _v2382; });
    ({ rt::Value _v2383 = rt::VS(g::LS[676]); this->f_S__5e__21__23_ = rt::slot_string(_v2383); _v2383; });
    ({ double _v2384 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2384); _v2384; });
}
rt::Value C_S__23__21__22_::m_S__21__21_G() {
    rt::Value l_A__loc3_ = rt::NUL;
    int32_t l_A__loc4_ = 0;
    int32_t l_A__loc1_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__23__21__22_.S__21__21_G");
    (l_A__loc3_ = rt::NUL);
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::toint_d(0.0));
    if (((!this->f_S_4_21_K) && (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) {
        (l_A__loc3_ = rt::arr_lit({}));
        (l_A__loc4_ = rt::toint_d(0.0));
        (l_A__loc1_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc1_)) < 12.0)) {
            (void)(rt::dcallv(l_A__loc3_, rt::N_push, rt::VB(false)));
            (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
        }
        {
            std::vector<rt::Value> _lst2385;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst2385);
            for (const rt::Value& _x2386 : _lst2385) {
                l_A__loc2_ = _x2386;
                if ((({ bool _t2406 = ({ bool _t2403 = ({ bool _t2400 = ({ bool _t2397 = ({ bool _t2394 = ({ bool _t2391 = ({ rt::Value _o2387 = l_A__loc2_; C_S__60_6* _p2388 = rt::as_ptr<C_S__60_6>(_o2387); _p2388 ? _p2388->f_S__3c__21_7 : rt::T(rt::dget(_o2387, NM_S__3c__21_7)); }); _t2391 ? (bool)((!(((double)(({ rt::Value _o2389 = l_A__loc2_; C_S__60_6* _p2390 = rt::as_ptr<C_S__60_6>(_o2389); _p2390 ? _p2390->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2389, NM_S__2d__21__5e_)); }))) == 11.0))) : _t2391; }); _t2394 ? (bool)((!(((double)(({ rt::Value _o2392 = l_A__loc2_; C_S__60_6* _p2393 = rt::as_ptr<C_S__60_6>(_o2392); _p2393 ? _p2393->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2392, NM_S__2d__21__5e_)); }))) == 12.0))) : _t2394; }); _t2397 ? (bool)((!(((double)(({ rt::Value _o2395 = l_A__loc2_; C_S__60_6* _p2396 = rt::as_ptr<C_S__60_6>(_o2395); _p2396 ? _p2396->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2395, NM_S__2d__21__5e_)); }))) == 13.0))) : _t2397; }); _t2400 ? (bool)((!(((double)(({ rt::Value _o2398 = l_A__loc2_; C_S__60_6* _p2399 = rt::as_ptr<C_S__60_6>(_o2398); _p2399 ? _p2399->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2398, NM_S__2d__21__5e_)); }))) == 14.0))) : _t2400; }); _t2403 ? (bool)((!(((double)(({ rt::Value _o2401 = l_A__loc2_; C_S__60_6* _p2402 = rt::as_ptr<C_S__60_6>(_o2401); _p2402 ? _p2402->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2401, NM_S__2d__21__5e_)); }))) == 15.0))) : _t2403; }); _t2406 ? (bool)(({ rt::Value _o2404 = l_A__loc2_; C_S__60_6* _p2405 = rt::as_ptr<C_S__60_6>(_o2404); _p2405 ? _p2405->f_S__3c__60_ : rt::T(rt::dget(_o2404, NM_S__3c__60_)); })) : _t2406; }) && (!rt::T(rt::arr_at(l_A__loc3_, ((double)(({ rt::Value _o2407 = l_A__loc2_; C_S__60_6* _p2408 = rt::as_ptr<C_S__60_6>(_o2407); _p2408 ? _p2408->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2407, NM_S__2d__21__5e_)); })))))))) {
                    ({ rt::Value _v2409 = rt::VB(true); rt::idx_set(l_A__loc3_, rt::V((double)(({ rt::Value _o2410 = l_A__loc2_; C_S__60_6* _p2411 = rt::as_ptr<C_S__60_6>(_o2410); _p2411 ? _p2411->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2410, NM_S__2d__21__5e_)); }))), _v2409); });
                    (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
                }
            }
        }
        if ((((double)(l_A__loc4_)) >= 11.0)) {
            (void)(({ rt::Value _o2412 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2413 = rt::as_ptr<C_S_8G>(_o2412); _p2413 ? _p2413->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2412, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__23__21__22_::g_S__5d__3b_() {
    RT_FN("S__23__21__22_.S__5d__3b__get");
    return true;
    return false;
}
C_S__23__21__22_* C_S__23__21__22_::alloc_() {
    C_S__23__21__22_* o = rt::make<C_S__23__21__22_>();
    return o;
}
rt::Value C_S__23__21__22_::mk_(rt::Value* a, int n) {
    C_S__23__21__22_* o = alloc_();
    o->C_S__23__21__22_::ctor_();
    return rt::VO(o);
}
bool C_S__23__21__22_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__23__21__22_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__23__21__22_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__23__21__22_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__23__21__22_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21__22_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21__22___id)); return true;
    case NM_ids: out = g::SV.C_S__23__21__22___ids; return true;
    default: return false;
    }
}
bool C_S__23__21__22_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21__22___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__23__21__22___ids = v; return true;
    default: return false;
    }
}
bool C_S__23__21__22_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__21_C::ctor_() {
    RT_FN("S__23__21_C.S__23__21_C");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2414 = 42.0; this->f_S_6_21_Z = rt::touint_d(_v2414); _v2414; });
    ({ rt::Value _v2415 = rt::trv(rt::VS(g::LS[899])); this->f_S_1i = rt::slot_string(_v2415); _v2415; });
    ({ double _v2416 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2416); _v2416; });
    ({ rt::Value _v2417 = rt::VS(g::LS[900]); this->f_S__5e__21__23_ = rt::slot_string(_v2417); _v2417; });
}
rt::Value C_S__23__21_C::m_S__21__21_G() {
    RT_FN("S__23__21_C.S__21__21_G");
    if (((!this->f_S_4_21_K) && g::SV.C_PlayFab__isRegistered)) {
        (void)(({ rt::Value _o2418 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2419 = rt::as_ptr<C_S_8G>(_o2418); _p2419 ? _p2419->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2418, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__23__21_C::m_S__40__22_() {
    RT_FN("S__23__21_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[901])));
    return rt::NUL;
}
C_S__23__21_C* C_S__23__21_C::alloc_() {
    C_S__23__21_C* o = rt::make<C_S__23__21_C>();
    return o;
}
rt::Value C_S__23__21_C::mk_(rt::Value* a, int n) {
    C_S__23__21_C* o = alloc_();
    o->C_S__23__21_C::ctor_();
    return rt::VO(o);
}
bool C_S__23__21_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__23__21_C::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__23__21_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__23__21_C::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__23__21_C::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21_C__id)); return true;
    case NM_ids: out = g::SV.C_S__23__21_C__ids; return true;
    default: return false;
    }
}
bool C_S__23__21_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21_C__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__23__21_C__ids = v; return true;
    default: return false;
    }
}
bool C_S__23__21_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__21_b::ctor_() {
    RT_FN("S__23__21_b.S__23__21_b");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2420 = 108.0; this->f_S_6_21_Z = rt::touint_d(_v2420); _v2420; });
    ({ rt::Value _v2421 = rt::trv(rt::VS(g::LS[447])); this->f_S_1i = rt::slot_string(_v2421); _v2421; });
    ({ rt::Value _v2422 = rt::VS(g::LS[448]); this->f_S__5e__21__23_ = rt::slot_string(_v2422); _v2422; });
    ({ double _v2423 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2423); _v2423; });
}
rt::Value C_S__23__21_b::m_S__40__22_() {
    RT_FN("S__23__21_b.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[903]), C_S__26_c::sm_S_8_21_Z((g::SV.C_S__23__21_b__S__5e__21_s * 100.0), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__23__21_b::m_S__21__21_G() {
    RT_FN("S__23__21_b.S__21__21_G");
    if ((({ bool _t2424 = (!this->f_S_4_21_K); _t2424 ? (bool)(C_S_8G::sm_S__3c__21_B(g::SV.C_S__20__21_5__id)) : _t2424; }) && (C_S__23__21__21_::sm_S__2c_d() >= g::SV.C_S__23__21_b__S__5e__21_s))) {
        (void)(({ rt::Value _o2425 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2426 = rt::as_ptr<C_S_8G>(_o2425); _p2426 ? _p2426->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2425, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__23__21_b* C_S__23__21_b::alloc_() {
    C_S__23__21_b* o = rt::make<C_S__23__21_b>();
    return o;
}
rt::Value C_S__23__21_b::mk_(rt::Value* a, int n) {
    C_S__23__21_b* o = alloc_();
    o->C_S__23__21_b::ctor_();
    return rt::VO(o);
}
bool C_S__23__21_b::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__23__21_b::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__23__21_b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__23__21_b::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__23__21_b::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21_b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21_b__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__23__21_b__S__5e__21_s); return true;
    case NM_ids: out = g::SV.C_S__23__21_b__ids; return true;
    default: return false;
    }
}
bool C_S__23__21_b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21_b__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__23__21_b__S__5e__21_s = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__23__21_b__ids = v; return true;
    default: return false;
    }
}
bool C_S__23__21_b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__21_v::ctor_() {
    RT_FN("S__23__21_v.S__23__21_v");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2427 = 291.0; this->f_S_6_21_Z = rt::touint_d(_v2427); _v2427; });
    ({ rt::Value _v2428 = rt::VS(g::LS[905]); this->f_S_1i = rt::slot_string(_v2428); _v2428; });
    ({ rt::Value _v2429 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2429); _v2429; });
    ({ rt::Value _v2430 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2430); _v2430; });
    ({ double _v2431 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2431); _v2431; });
    ({ bool _v2432 = true; this->f_S_3_21_9 = _v2432; _v2432; });
}
C_S__23__21_v* C_S__23__21_v::alloc_() {
    C_S__23__21_v* o = rt::make<C_S__23__21_v>();
    return o;
}
rt::Value C_S__23__21_v::mk_(rt::Value* a, int n) {
    C_S__23__21_v* o = alloc_();
    o->C_S__23__21_v::ctor_();
    return rt::VO(o);
}
bool C_S__23__21_v::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__23__21_v::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__23__21_v::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__23__21_v::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__23__21_v::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23__21_v::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__21_v__id)); return true;
    default: return false;
    }
}
bool C_S__23__21_v::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__21_v__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23__21_v::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23_r::ctor_() {
    RT_FN("S__23_r.S__23_r");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2433 = 171.0; this->f_S_6_21_Z = rt::touint_d(_v2433); _v2433; });
    ({ rt::Value _v2434 = rt::trv(rt::VS(g::LS[417])); this->f_S_1i = rt::slot_string(_v2434); _v2434; });
    ({ rt::Value _v2435 = rt::trv(rt::VS(g::LS[906])); this->f_S_7_23_ = rt::slot_string(_v2435); _v2435; });
    ({ rt::Value _v2436 = rt::VS(g::LS[418]); this->f_S__5e__21__23_ = rt::slot_string(_v2436); _v2436; });
    ({ double _v2437 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2437); _v2437; });
}
bool C_S__23_r::g_S__5d__3b_() {
    RT_FN("S__23_r.S__5d__3b__get");
    return true;
    return false;
}
C_S__23_r* C_S__23_r::alloc_() {
    C_S__23_r* o = rt::make<C_S__23_r>();
    return o;
}
rt::Value C_S__23_r::mk_(rt::Value* a, int n) {
    C_S__23_r* o = alloc_();
    o->C_S__23_r::ctor_();
    return rt::VO(o);
}
bool C_S__23_r::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__23_r::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__23_r::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__23_r::dmeth(int id) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__23_r::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23_r::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23_r__id)); return true;
    default: return false;
    }
}
bool C_S__23_r::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23_r__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__23_r::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23_s::ctor_() {
    RT_FN("S__23_s.S__23_s");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2438 = 76.0; this->f_S_6_21_Z = rt::touint_d(_v2438); _v2438; });
    ({ rt::Value _v2439 = rt::trv(rt::VS(g::LS[697])); this->f_S_1i = rt::slot_string(_v2439); _v2439; });
    ({ rt::Value _v2440 = rt::VS(g::LS[698]); this->f_S__5e__21__23_ = rt::slot_string(_v2440); _v2440; });
    ({ double _v2441 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2441); _v2441; });
}
rt::Value C_S__23_s::m_S__40__22_() {
    RT_FN("S__23_s.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[907]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__23_s__S_1_22_I, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__23_s__S__3c_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__23_s::m_S__21__21_G() {
    RT_FN("S__23_s.S__21__21_G");
    if ((({ bool _t2443 = ({ bool _t2442 = (!this->f_S_4_21_K); _t2442 ? (bool)(C_S_8G::sm_S__3c__21_B(g::SV.C_S_6_21_V__id)) : _t2442; }); _t2443 ? (bool)((C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0()) >= g::SV.C_S__23_s__S_1_22_I)) : _t2443; }) && ((C_S__23__21__21_::sm_S_57() * 30.0) >= g::SV.C_S__23_s__S__3c_))) {
        (void)(({ rt::Value _o2444 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2445 = rt::as_ptr<C_S_8G>(_o2444); _p2445 ? _p2445->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2444, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__23_s* C_S__23_s::alloc_() {
    C_S__23_s* o = rt::make<C_S__23_s>();
    return o;
}
rt::Value C_S__23_s::mk_(rt::Value* a, int n) {
    C_S__23_s* o = alloc_();
    o->C_S__23_s::ctor_();
    return rt::VO(o);
}
bool C_S__23_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__23_s::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__23_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__23_s::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__23_s::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__23_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23_s__id)); return true;
    case NM_S_1_22_I: out = rt::V(g::SV.C_S__23_s__S_1_22_I); return true;
    case NM_S__3c_: out = rt::V(g::SV.C_S__23_s__S__3c_); return true;
    case NM_ids: out = g::SV.C_S__23_s__ids; return true;
    default: return false;
    }
}
bool C_S__23_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23_s__id = rt::touint(v); return true;
    case NM_S_1_22_I: g::SV.C_S__23_s__S_1_22_I = rt::tonum(v); return true;
    case NM_S__3c_: g::SV.C_S__23_s__S__3c_ = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__23_s__ids = v; return true;
    default: return false;
    }
}
bool C_S__23_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__21_b::ctor_() {
    RT_FN("S__25__21_b.S__25__21_b");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2446 = 12.0; this->f_S_6_21_Z = rt::touint_d(_v2446); _v2446; });
    ({ rt::Value _v2447 = rt::trv(rt::VS(g::LS[909])); this->f_S_1i = rt::slot_string(_v2447); _v2447; });
    ({ rt::Value _v2448 = rt::VS(g::LS[910]); this->f_S__5e__21__23_ = rt::slot_string(_v2448); _v2448; });
    ({ double _v2449 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2449); _v2449; });
}
rt::Value C_S__25__21_b::m_S__21__21_G() {
    RT_FN("S__25__21_b.S__21__21_G");
    if (((!this->f_S_4_21_K) && C_S_8G::sm_S_7d(g::SV.C_S__21__60___id))) {
        (void)(({ rt::Value _o2450 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2451 = rt::as_ptr<C_S_8G>(_o2450); _p2451 ? _p2451->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2450, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__25__21_b::m_S__40__22_() {
    RT_FN("S__25__21_b.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[886]), C_S__26_c::sm_S_8_21_Z(20000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), this->f_S_1i));
    return rt::NUL;
}
C_S__25__21_b* C_S__25__21_b::alloc_() {
    C_S__25__21_b* o = rt::make<C_S__25__21_b>();
    return o;
}
rt::Value C_S__25__21_b::mk_(rt::Value* a, int n) {
    C_S__25__21_b* o = alloc_();
    o->C_S__25__21_b::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_b::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__25__21_b::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__25__21_b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__25__21_b::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__25__21_b::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__21_b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_b__id)); return true;
    case NM_ids: out = g::SV.C_S__25__21_b__ids; return true;
    default: return false;
    }
}
bool C_S__25__21_b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_b__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__25__21_b__ids = v; return true;
    default: return false;
    }
}
bool C_S__25__21_b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25__3e_::ctor_() {
    RT_FN("S__25__3e_.S__25__3e_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2452 = 122.0; this->f_S_6_21_Z = rt::touint_d(_v2452); _v2452; });
    ({ rt::Value _v2453 = rt::trv(rt::VS(g::LS[688])); this->f_S_1i = rt::slot_string(_v2453); _v2453; });
    ({ rt::Value _v2454 = rt::VS(g::LS[689]); this->f_S__5e__21__23_ = rt::slot_string(_v2454); _v2454; });
    ({ double _v2455 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2455); _v2455; });
}
rt::Value C_S__25__3e_::m_S__40__22_() {
    RT_FN("S__25__3e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[912]), C_S__26_c::sm_S_8_21_Z(1800.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__25__3e_::m_S__21__21_G() {
    RT_FN("S__25__3e_.S__21__21_G");
    if (((!this->f_S_4_21_K) && (((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d((-1.0)), true))) >= 1800.0))) {
        (void)(({ rt::Value _o2456 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2457 = rt::as_ptr<C_S_8G>(_o2456); _p2457 ? _p2457->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2456, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__25__3e_::g_S__5d__3b_() {
    RT_FN("S__25__3e_.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 22.0);
    return false;
}
bool C_S__25__3e_::g_S__3f__21_a() {
    RT_FN("S__25__3e_.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
C_S__25__3e_* C_S__25__3e_::alloc_() {
    C_S__25__3e_* o = rt::make<C_S__25__3e_>();
    return o;
}
rt::Value C_S__25__3e_::mk_(rt::Value* a, int n) {
    C_S__25__3e_* o = alloc_();
    o->C_S__25__3e_::ctor_();
    return rt::VO(o);
}
bool C_S__25__3e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__25__3e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__25__3e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__25__3e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__25__3e_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25__3e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__3e___id)); return true;
    default: return false;
    }
}
bool C_S__25__3e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__3e___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__25__3e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22__21_b::ctor_() {
    RT_FN("S__22__21_b.S__22__21_b");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2458 = 189.0; this->f_S_6_21_Z = rt::touint_d(_v2458); _v2458; });
    ({ rt::Value _v2459 = rt::trv(rt::VS(g::LS[525])); this->f_S_1i = rt::slot_string(_v2459); _v2459; });
    ({ rt::Value _v2460 = rt::trv(rt::VS(g::LS[913])); this->f_S_7_23_ = rt::slot_string(_v2460); _v2460; });
    ({ rt::Value _v2461 = rt::VS(g::LS[526]); this->f_S__5e__21__23_ = rt::slot_string(_v2461); _v2461; });
    ({ double _v2462 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2462); _v2462; });
}
rt::Value C_S__22__21_b::m_S__21__21_G() {
    bool l_A__loc1_ = false;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__22__21_b.S__21__21_G");
    (l_A__loc1_ = false);
    if ((!this->f_S_4_21_K)) {
        (l_A__loc1_ = false);
        {
            std::vector<rt::Value> _lst2463;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst2463);
            for (const rt::Value& _x2464 : _lst2463) {
                l_A__loc2_ = _x2464;
                if ((({ bool _t2471 = ({ bool _t2467 = rt::is_class(l_A__loc2_, C_S__26__21__5f_::CI); _t2467 ? (bool)((!({ rt::Value _o2465 = l_A__loc2_; C_S__60_6* _p2466 = rt::as_ptr<C_S__60_6>(_o2465); _p2466 ? _p2466->f_S__3f__21_6 : rt::T(rt::dget(_o2465, NM_S__3f__21_6)); }))) : _t2467; }); _t2471 ? (bool)((((double)(({ rt::Value _o2469 = (({ rt::Value _t2468 = l_A__loc2_; rt::is_class(_t2468, C_S__26__21__5f_::CI) ? _t2468 : rt::NUL; })); C_S__26__21__5f_* _p2470 = rt::as_ptr<C_S__26__21__5f_>(_o2469); _p2470 ? _p2470->f_S__25_w : rt::toint(rt::dget(_o2469, NM_S__25_w)); }))) > 475.0)) : _t2471; }) && (((double)(({ rt::Value _o2473 = (({ rt::Value _t2472 = l_A__loc2_; rt::is_class(_t2472, C_S__26__21__5f_::CI) ? _t2472 : rt::NUL; })); C_S__26__21__5f_* _p2474 = rt::as_ptr<C_S__26__21__5f_>(_o2473); _p2474 ? _p2474->f_S__25_w : rt::toint(rt::dget(_o2473, NM_S__25_w)); }))) <= 700.0))) {
                    (l_A__loc1_ = true);
                    break;
                }
            }
        }
        if ((!l_A__loc1_)) {
            (void)(({ rt::Value _o2475 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2476 = rt::as_ptr<C_S_8G>(_o2475); _p2476 ? _p2476->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2475, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__22__21_b::g_S__5d__3b_() {
    RT_FN("S__22__21_b.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 32.0);
    return false;
}
bool C_S__22__21_b::g_S__3f__21_a() {
    RT_FN("S__22__21_b.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
C_S__22__21_b* C_S__22__21_b::alloc_() {
    C_S__22__21_b* o = rt::make<C_S__22__21_b>();
    return o;
}
rt::Value C_S__22__21_b::mk_(rt::Value* a, int n) {
    C_S__22__21_b* o = alloc_();
    o->C_S__22__21_b::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_b::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__22__21_b::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__22__21_b::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__22__21_b::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__22__21_b::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__21_b::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_b__id)); return true;
    default: return false;
    }
}
bool C_S__22__21_b::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_b__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_b::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__22_Y::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__22_Y::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__22_Y.S__22_Y");
    ({ double _v2477 = 10.0; this->f_S__60_r = rt::toint_d(_v2477); _v2477; });
    ({ double _v2478 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v2478); _v2478; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2479 = 25.0; this->f_S_6_21_Z = rt::touint_d(_v2479); _v2479; });
}
C_S__22_Y* C_S__22_Y::alloc_() {
    C_S__22_Y* o = rt::make<C_S__22_Y>();
    return o;
}
rt::Value C_S__22_Y::mk_(rt::Value* a, int n) {
    C_S__22_Y* o = alloc_();
    o->C_S__22_Y::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__22_Y::dctor_1()));
    return rt::VO(o);
}
bool C_S__22_Y::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__22_Y::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__22_Y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__22_Y::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__22_Y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22_Y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_Y__id)); return true;
    case NM_ids: out = g::SV.C_S__22_Y__ids; return true;
    default: return false;
    }
}
bool C_S__22_Y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_Y__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__22_Y__ids = v; return true;
    default: return false;
    }
}
bool C_S__22_Y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__22__60_::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__22__60_::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__22__60_.S__22__60_");
    ({ double _v2480 = 10.0; this->f_S__60_r = rt::toint_d(_v2480); _v2480; });
    ({ double _v2481 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v2481); _v2481; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2482 = 26.0; this->f_S_6_21_Z = rt::touint_d(_v2482); _v2482; });
}
C_S__22__60_* C_S__22__60_::alloc_() {
    C_S__22__60_* o = rt::make<C_S__22__60_>();
    return o;
}
rt::Value C_S__22__60_::mk_(rt::Value* a, int n) {
    C_S__22__60_* o = alloc_();
    o->C_S__22__60_::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__22__60_::dctor_1()));
    return rt::VO(o);
}
bool C_S__22__60_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__22__60_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__22__60_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__22__60_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__22__60_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22__60_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__60___id)); return true;
    case NM_ids: out = g::SV.C_S__22__60___ids; return true;
    default: return false;
    }
}
bool C_S__22__60_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__60___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__22__60___ids = v; return true;
    default: return false;
    }
}
bool C_S__22__60_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__22_e::ctor_() {
    RT_FN("S__22_e.S__22_e");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2483 = 158.0; this->f_S_6_21_Z = rt::touint_d(_v2483); _v2483; });
    ({ rt::Value _v2484 = rt::trv(rt::VS(g::LS[400])); this->f_S_1i = rt::slot_string(_v2484); _v2484; });
    ({ rt::Value _v2485 = rt::VS(g::LS[401]); this->f_S__5e__21__23_ = rt::slot_string(_v2485); _v2485; });
    ({ double _v2486 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2486); _v2486; });
}
rt::Value C_S__22_e::m_S__40__22_() {
    RT_FN("S__22_e.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[916]), C_S__26_c::sm_S_8_21_Z(1000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__22_e::m_S__21__21_G() {
    RT_FN("S__22_e.S__21__21_G");
    if ((({ bool _t2488 = ({ bool _t2487 = (!this->f_S_4_21_K); _t2487 ? (bool)(rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(30.0))) : _t2487; }); _t2488 ? (bool)((C_S_8G::sg_S_1_21_5() >= 1000.0)) : _t2488; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 35.0), rt::V(1000.0)))) {
        (void)(({ rt::Value _o2489 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2490 = rt::as_ptr<C_S_8G>(_o2489); _p2490 ? _p2490->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2489, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__22_e::g_S__5d__3b_() {
    RT_FN("S__22_e.S__5d__3b__get");
    return true;
    return false;
}
C_S__22_e* C_S__22_e::alloc_() {
    C_S__22_e* o = rt::make<C_S__22_e>();
    return o;
}
rt::Value C_S__22_e::mk_(rt::Value* a, int n) {
    C_S__22_e* o = alloc_();
    o->C_S__22_e::ctor_();
    return rt::VO(o);
}
bool C_S__22_e::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__22_e::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__22_e::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__22_e::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__22_e::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__22_e::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22_e__id)); return true;
    default: return false;
    }
}
bool C_S__22_e::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22_e__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22_e::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__21_2::ctor_() {
    RT_FN("S__3c__21_2.S__3c__21_2");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2491 = 217.0; this->f_S_6_21_Z = rt::touint_d(_v2491); _v2491; });
    ({ rt::Value _v2492 = rt::trv(rt::VS(g::LS[917])); this->f_S_1i = rt::slot_string(_v2492); _v2492; });
    ({ rt::Value _v2493 = rt::VS(g::LS[918]); this->f_S__5e__21__23_ = rt::slot_string(_v2493); _v2493; });
    ({ bool _v2494 = true; this->f_S_3_21_9 = _v2494; _v2494; });
}
rt::Value C_S__3c__21_2::m_S__21__21_G() {
    RT_FN("S__3c__21_2.S__21__21_G");
    (void)(this->C_S__23__21__60_::m_S__21__21_G());
    if ((this->f_S_4_21_K && (({ bool _t2495 = (!(((double)(C_PlayFab::sg_season())) == 7.0)); _t2495 ? _t2495 : (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_3E__id)); }) || C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_1__id)))) {
        ({ bool _v2496 = false; this->f_S_4_21_K = _v2496; _v2496; });
    }
    return rt::NUL;
}
rt::Value C_S__3c__21_2::m_S_1_21__2c_() {
    uint32_t l_A__loc2_ = 0u;
    uint32_t l_A__loc1_ = 0u;
    double l_A__loc4_ = NAN;
    RT_FN("S__3c__21_2.S_1_21__2c_");
    (l_A__loc2_ = C_S__3c__21_2::sm_S__2b_A());
    if ((((double)(l_A__loc2_)) >= 50.0)) {
        (l_A__loc2_ = rt::touint_d(50.0));
        return rt::NUL;
    }
    (l_A__loc1_ = C_S__3c__21_2::sm_S_4b(l_A__loc2_));
    if (rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 14.0), rt::V((double)(l_A__loc1_)))) {
        (l_A__loc4_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 14.0)) - ((double)(l_A__loc1_))));
        ({ rt::Value _v2497 = rt::V(l_A__loc4_); rt::idx_set(g::SV.C_S_8G__S_6_21__2d_, rt::V(14.0), _v2497); });
    }
    return rt::NUL;
}
rt::Value C_S__3c__21_2::m_S__40__22_() {
    uint32_t l_A__loc3_ = 0u;
    uint32_t l_A__loc2_ = 0u;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3c__21_2.S__40__22_");
    (l_A__loc3_ = C_S__3c__21_2::sm_S__2b_A());
    (l_A__loc2_ = C_S__3c__21_2::sm_S_4b(l_A__loc3_));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[919]))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[920]))))));
    if ((((double)(l_A__loc3_)) >= 10.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[921]))))));
    } else {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[922]))))));
    }
    if ((((double)(l_A__loc3_)) >= 25.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[923]), C_S__26_c::sm_S_8_21_Z(C_S__3c__21_2::sm_S__2b__2b_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[143]), rt::trv(rt::VS(g::LS[924]))))));
    } else if ((((double)(l_A__loc3_)) >= 10.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[925]))))));
    }
    if ((((double)(l_A__loc3_)) == 50.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[926]), C_S__26_c::sm_S_8_21_Z(C_S__3c__21_2::sm_S__40_L(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if ((((double)(l_A__loc3_)) >= 25.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[927]))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__3c__21_2::m_S_1_21_P() {
    uint32_t l_A__loc2_ = 0u;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3c__21_2.S_1_21_P");
    (l_A__loc2_ = C_S__3c__21_2::sm_S__2b_A());
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[917]))));
    if ((((double)(l_A__loc2_)) == 50.0)) {
        (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[928]))));
    } else if ((((double)(l_A__loc2_)) >= 25.0)) {
        (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[929]))));
    } else if ((((double)(l_A__loc2_)) >= 10.0)) {
        (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[930]))));
    }
    return rt::slot_string(rt::add(rt::add(rt::add(l_A__loc1_, rt::VS(g::LS[194])), rt::dcallv(rt::V((double)(C_S__3c__21_2::sm_S__2b_A())), rt::N_toString)), rt::VS(g::LS[931])));
    return rt::NUL;
}
rt::Value C_S__3c__21_2::m_S__21_E() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S__3c__21_2.S__21_E");
    (l_A__loc1_ = C_S__3c__21_2::sm_S__2b_A());
    if ((((double)(l_A__loc1_)) == 50.0)) {
        return rt::slot_string(rt::VS(g::LS[932]));
    }
    if ((((double)(l_A__loc1_)) >= 25.0)) {
        return rt::slot_string(rt::VS(g::LS[933]));
    }
    if ((((double)(l_A__loc1_)) >= 10.0)) {
        return rt::slot_string(rt::VS(g::LS[934]));
    }
    return rt::slot_string(rt::VS(g::LS[918]));
    return rt::NUL;
}
bool C_S__3c__21_2::g_S__2d_6() {
    RT_FN("S__3c__21_2.S__2d_6_get");
    return ({ bool _t2501 = (((double)(C_PlayFab::sg_season())) == 7.0); _t2501 ? (bool)((({ bool _t2500 = ({ rt::Value _o2498 = g::SV.C_S_8G__S__3d__21__60_; C_S__3b_m* _p2499 = rt::as_ptr<C_S__3b_m>(_o2498); _p2499 ? _p2499->m_S__27_W(rt::touint_d(1.0)) : rt::T(rt::dcallv(_o2498, NM_S__27_W, rt::V(1.0))); }); _t2500 ? _t2500 : (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 16.0), rt::V(3.0))); }))) : _t2501; });
    return false;
}
uint32_t C_S__3c__21_2::sm_S_4b(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S__3c__21_2.S_4b");
    return rt::touint_d(((((double)(l_param1)) < 10.0) ? 22.0 : (((((double)(l_param1)) < 25.0) ? 44.0 : 88.0))));
    return 0u;
}
bool C_S__3c__21_2::sm_S__22__2d_() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S__3c__21_2.S__22__2d_");
    (l_A__loc1_ = C_S__3c__21_2::sm_S__2b_A());
    return ({ bool _t2502 = (((double)(l_A__loc1_)) < 50.0); _t2502 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 14.0), rt::V((double)(C_S__3c__21_2::sm_S_4b(l_A__loc1_))))) : _t2502; });
    return false;
}
uint32_t C_S__3c__21_2::sm_S__2b_A() {
    RT_FN("S__3c__21_2.S__2b_A");
    return C_S__26_c::sm_S_6_2d_(rt::toint_d(84.0), rt::toint_d(14.0));
    return 0u;
}
double C_S__3c__21_2::sm_S__2b__2b_() {
    RT_FN("S__3c__21_2.S__2b__2b_");
    return ((({ bool _t2503 = (((double)(C_PlayFab::sg_season())) == 7.0); _t2503 ? (bool)((((double)(C_S__3c__21_2::sm_S__2b_A())) >= 25.0)) : _t2503; }) && (!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0)))) ? rt::m_pow(C_S__26_c::sm_S__22__21_B(C_S__26_c::sm_S__3b__21_4(g::SV.C_S_8G__S__2d__21__5e_), true, C_S__26_c::dsm_S__22__21_B_2(), C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), 0.7) : 0.0);
    return 0.0;
}
double C_S__3c__21_2::sm_S__40_L() {
    RT_FN("S__3c__21_2.S__40_L");
    return (((((double)(C_PlayFab::sg_season())) == 7.0) && (((double)(C_S__3c__21_2::sm_S__2b_A())) == 50.0)) ? 200.0 : 0.0);
    return 0.0;
}
C_S__3c__21_2* C_S__3c__21_2::alloc_() {
    C_S__3c__21_2* o = rt::make<C_S__3c__21_2>();
    return o;
}
rt::Value C_S__3c__21_2::mk_(rt::Value* a, int n) {
    C_S__3c__21_2* o = alloc_();
    o->C_S__3c__21_2::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_2::dget(int id, rt::Value& out) {
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
bool C_S__3c__21_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3c__21_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__3c__21_2::dmeth(int id) {
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
bool C_S__3c__21_2::smeth_(int id) {
    switch (id) {
    case NM_S_4b: return true;
    case NM_S__22__2d_: return true;
    case NM_S__2b_A: return true;
    case NM_S__2b__2b_: return true;
    case NM_S__40_L: return true;
    default: return false;
    }
}
bool C_S__3c__21_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_2__id)); return true;
    case NM_S_4b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__2d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b_A: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40_L: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_2__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4b: out = rt::V((double)(sm_S_4b(rt::arg<uint32_t>(a, n, 0, 0u)))); return true;
    case NM_S__22__2d_: out = rt::VB(sm_S__22__2d_()); return true;
    case NM_S__2b_A: out = rt::V((double)(sm_S__2b_A())); return true;
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    case NM_S__40_L: out = rt::V(sm_S__40_L()); return true;
    default: return false;
    }
}
void C_S__3c__21_8::ctor_() {
    RT_FN("S__3c__21_8.S__3c__21_8");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2504 = 103.0; this->f_S_6_21_Z = rt::touint_d(_v2504); _v2504; });
    ({ rt::Value _v2505 = rt::trv(rt::VS(g::LS[527])); this->f_S_1i = rt::slot_string(_v2505); _v2505; });
    ({ rt::Value _v2506 = rt::VS(g::LS[528]); this->f_S__5e__21__23_ = rt::slot_string(_v2506); _v2506; });
    ({ double _v2507 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2507); _v2507; });
}
rt::Value C_S__3c__21_8::m_S__3d_u() {
    RT_FN("S__3c__21_8.S__3d_u");
    if ((!this->f_S_4_21_K)) {
        if (rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 0.0), rt::V(1e+27))) {
            (void)(({ rt::Value _o2508 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2509 = rt::as_ptr<C_S_8G>(_o2508); _p2509 ? _p2509->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2508, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
rt::Value C_S__3c__21_8::m_S__40__22_() {
    RT_FN("S__3c__21_8.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[935]), C_S__26_c::sm_S_8_21_Z(1e+27, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3c__21_8::g_S__5d__3b_() {
    RT_FN("S__3c__21_8.S__5d__3b__get");
    return true;
    return false;
}
C_S__3c__21_8* C_S__3c__21_8::alloc_() {
    C_S__3c__21_8* o = rt::make<C_S__3c__21_8>();
    return o;
}
rt::Value C_S__3c__21_8::mk_(rt::Value* a, int n) {
    C_S__3c__21_8* o = alloc_();
    o->C_S__3c__21_8::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_8::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3d_u: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3c__21_8::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3c__21_8::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3d_u: out = m_S__3d_u(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3c__21_8::dmeth(int id) {
    switch (id) {
    case NM_S__3d_u: return true;
    case NM_S__40__22_: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3c__21_8::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_8::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_8__id)); return true;
    case NM_ids: out = g::SV.C_S__3c__21_8__ids; return true;
    default: return false;
    }
}
bool C_S__3c__21_8::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_8__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c__21_8__ids = v; return true;
    default: return false;
    }
}
bool C_S__3c__21_8::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__3c__21_S::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__3c__21_S::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__3c__21_S.S__3c__21_S");
    ({ double _v2510 = 6.0; this->f_S__60_r = rt::toint_d(_v2510); _v2510; });
    ({ double _v2511 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v2511); _v2511; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2512 = 39.0; this->f_S_6_21_Z = rt::touint_d(_v2512); _v2512; });
}
C_S__3c__21_S* C_S__3c__21_S::alloc_() {
    C_S__3c__21_S* o = rt::make<C_S__3c__21_S>();
    return o;
}
rt::Value C_S__3c__21_S::mk_(rt::Value* a, int n) {
    C_S__3c__21_S* o = alloc_();
    o->C_S__3c__21_S::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__3c__21_S::dctor_1()));
    return rt::VO(o);
}
bool C_S__3c__21_S::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__3c__21_S::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__3c__21_S::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__3c__21_S::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__3c__21_S::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_S::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_S__id)); return true;
    case NM_ids: out = g::SV.C_S__3c__21_S__ids; return true;
    default: return false;
    }
}
bool C_S__3c__21_S::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_S__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c__21_S__ids = v; return true;
    default: return false;
    }
}
bool C_S__3c__21_S::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__21_a::ctor_() {
    RT_FN("S__3c__21_a.S__3c__21_a");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2513 = 13.0; this->f_S_6_21_Z = rt::touint_d(_v2513); _v2513; });
    ({ rt::Value _v2514 = rt::trv(rt::VS(g::LS[938])); this->f_S_1i = rt::slot_string(_v2514); _v2514; });
    ({ rt::Value _v2515 = rt::VS(g::LS[939]); this->f_S__5e__21__23_ = rt::slot_string(_v2515); _v2515; });
    ({ double _v2516 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2516); _v2516; });
}
rt::Value C_S__3c__21_a::m_S__21__21_G() {
    RT_FN("S__3c__21_a.S__21__21_G");
    if (((!this->f_S_4_21_K) && C_S_8G::sm_S_7d(g::SV.C_S__2d__21_X__id))) {
        (void)(({ rt::Value _o2517 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2518 = rt::as_ptr<C_S_8G>(_o2517); _p2518 ? _p2518->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2517, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3c__21_a::m_S__40__22_() {
    RT_FN("S__3c__21_a.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[886]), C_S__26_c::sm_S_8_21_Z(30000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), this->f_S_1i));
    return rt::NUL;
}
C_S__3c__21_a* C_S__3c__21_a::alloc_() {
    C_S__3c__21_a* o = rt::make<C_S__3c__21_a>();
    return o;
}
rt::Value C_S__3c__21_a::mk_(rt::Value* a, int n) {
    C_S__3c__21_a* o = alloc_();
    o->C_S__3c__21_a::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_a::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3c__21_a::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3c__21_a::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3c__21_a::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3c__21_a::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_a::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_a__id)); return true;
    case NM_ids: out = g::SV.C_S__3c__21_a__ids; return true;
    default: return false;
    }
}
bool C_S__3c__21_a::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_a__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c__21_a__ids = v; return true;
    default: return false;
    }
}
bool C_S__3c__21_a::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__21_l::ctor_() {
    RT_FN("S__3c__21_l.S__3c__21_l");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2519 = 263.0; this->f_S_6_21_Z = rt::touint_d(_v2519); _v2519; });
    ({ rt::Value _v2520 = rt::VS(g::LS[941]); this->f_S_1i = rt::slot_string(_v2520); _v2520; });
    ({ rt::Value _v2521 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2521); _v2521; });
    ({ rt::Value _v2522 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2522); _v2522; });
    ({ double _v2523 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2523); _v2523; });
    ({ bool _v2524 = true; this->f_S_3_21_9 = _v2524; _v2524; });
}
C_S__3c__21_l* C_S__3c__21_l::alloc_() {
    C_S__3c__21_l* o = rt::make<C_S__3c__21_l>();
    return o;
}
rt::Value C_S__3c__21_l::mk_(rt::Value* a, int n) {
    C_S__3c__21_l* o = alloc_();
    o->C_S__3c__21_l::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_l::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3c__21_l::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3c__21_l::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3c__21_l::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3c__21_l::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_l::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_l__id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_l::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_l__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_l::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__21_s::ctor_() {
    RT_FN("S__3c__21_s.S__3c__21_s");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2525 = 285.0; this->f_S_6_21_Z = rt::touint_d(_v2525); _v2525; });
    ({ rt::Value _v2526 = rt::trv(rt::VS(g::LS[568])); this->f_S_1i = rt::slot_string(_v2526); _v2526; });
    ({ rt::Value _v2527 = rt::trv(rt::VS(g::LS[942])); this->f_S_7_23_ = rt::slot_string(_v2527); _v2527; });
    ({ rt::Value _v2528 = rt::VS(g::LS[569]); this->f_S__5e__21__23_ = rt::slot_string(_v2528); _v2528; });
    ({ double _v2529 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2529); _v2529; });
}
rt::Value C_S__3c__21_s::m_S__21__21_G() {
    double l_A__loc2_ = NAN;
    double l_A__loc3_ = NAN;
    double l_A__loc1_ = NAN;
    RT_FN("S__3c__21_s.S__21__21_G");
    (l_A__loc2_ = NAN);
    (l_A__loc3_ = NAN);
    (l_A__loc1_ = NAN);
    if ((({ bool _t2530 = (!this->f_S_4_21_K); _t2530 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t2530; }) && rt::ge(rt::add(rt::add(rt::add(rt::add(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 48.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 48.0)), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 36.0)), rt::arr_at(g::SV.C_S_8G__S__3d_y, 36.0)), rt::arr_at(g::SV.C_S_8G__S_5_21_V, 14.0)), rt::arr_at(g::SV.C_S_8G__S__3d_y, 14.0)), rt::V(86400.0)))) {
        (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 48.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 48.0))));
        (l_A__loc3_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 36.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 36.0))));
        (l_A__loc1_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 14.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 14.0))));
        if ((({ bool _t2531 = (rt::m_abs((l_A__loc1_ - l_A__loc2_)) <= 3600.0); _t2531 ? (bool)((rt::m_abs((l_A__loc1_ - l_A__loc3_)) <= 3600.0)) : _t2531; }) && (rt::m_abs((l_A__loc2_ - l_A__loc3_)) <= 3600.0))) {
            (void)(({ rt::Value _o2532 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2533 = rt::as_ptr<C_S_8G>(_o2532); _p2533 ? _p2533->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2532, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__3c__21_s::g_S__5d__3b_() {
    RT_FN("S__3c__21_s.S__5d__3b__get");
    return true;
    return false;
}
C_S__3c__21_s* C_S__3c__21_s::alloc_() {
    C_S__3c__21_s* o = rt::make<C_S__3c__21_s>();
    return o;
}
rt::Value C_S__3c__21_s::mk_(rt::Value* a, int n) {
    C_S__3c__21_s* o = alloc_();
    o->C_S__3c__21_s::ctor_();
    return rt::VO(o);
}
bool C_S__3c__21_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3c__21_s::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3c__21_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3c__21_s::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3c__21_s::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__21_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__21_s__id)); return true;
    default: return false;
    }
}
bool C_S__3c__21_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__21_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__21_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c__22_L::ctor_() {
    RT_FN("S__3c__22_L.S__3c__22_L");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2534 = 411.0; this->f_S_6_21_Z = rt::touint_d(_v2534); _v2534; });
    ({ rt::Value _v2535 = rt::trv(rt::VS(g::LS[640])); this->f_S_1i = rt::slot_string(_v2535); _v2535; });
    ({ rt::Value _v2536 = rt::trv(rt::VS(g::LS[943])); this->f_S_7_23_ = rt::slot_string(_v2536); _v2536; });
    ({ rt::Value _v2537 = rt::VS(g::LS[641]); this->f_S__5e__21__23_ = rt::slot_string(_v2537); _v2537; });
    ({ double _v2538 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2538); _v2538; });
}
bool C_S__3c__22_L::g_S__5d__3b_() {
    RT_FN("S__3c__22_L.S__5d__3b__get");
    return true;
    return false;
}
C_S__3c__22_L* C_S__3c__22_L::alloc_() {
    C_S__3c__22_L* o = rt::make<C_S__3c__22_L>();
    return o;
}
rt::Value C_S__3c__22_L::mk_(rt::Value* a, int n) {
    C_S__3c__22_L* o = alloc_();
    o->C_S__3c__22_L::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22_L::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3c__22_L::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3c__22_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3c__22_L::dmeth(int id) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3c__22_L::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__22_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22_L__id)); return true;
    default: return false;
    }
}
bool C_S__3c__22_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22_L__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__3c__25_::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__3c__25_::ctor_(double p0, rt::Value p1) {
    double l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__3c__25_.S__3c__25_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2539 = 50.0; this->f_S_6_21_Z = rt::touint_d(_v2539); _v2539; });
    ({ double _v2540 = l_param1; this->f_S_5w = _v2540; _v2540; });
    ({ rt::Value _v2541 = rt::tr_nv(rt::VS(g::LS[944]), rt::VS(g::LS[945]), rt::V(this->f_S_5w), rt::dcallv(rt::V(this->f_S_5w), rt::N_toString)); this->f_S_1i = rt::slot_string(_v2541); _v2541; });
    ({ rt::Value _v2542 = l_param2; this->f_S__5e__21__23_ = rt::slot_string(_v2542); _v2542; });
    ({ double _v2543 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2543); _v2543; });
    ({ rt::Value _v2544 = rt::VS(g::LS[946]); this->f_S__3f__21__3d_ = rt::slot_string(_v2544); _v2544; });
}
rt::Value C_S__3c__25_::m_S__21__21_G() {
    RT_FN("S__3c__25_.S__21__21_G");
    if (((!this->f_S_4_21_K) && (((double)(C_S_8G::sg_S_8_21_H())) >= this->f_S_5w))) {
        (void)(({ rt::Value _o2545 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2546 = rt::as_ptr<C_S_8G>(_o2545); _p2546 ? _p2546->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2545, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3c__25_::m_S_8_5b_() {
    RT_FN("S__3c__25_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S_8G::sg_S_8_21_H())), this->f_S_5w, C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__3c__25_::m_S__40__22_() {
    RT_FN("S__3c__25_.S__40__22_");
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[947]), rt::VS(g::LS[948]), rt::V(this->f_S_5w), C_S__26_c::sm_S_8_21_Z(this->f_S_5w, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__3c__25_* C_S__3c__25_::alloc_() {
    C_S__3c__25_* o = rt::make<C_S__3c__25_>();
    return o;
}
rt::Value C_S__3c__25_::mk_(rt::Value* a, int n) {
    C_S__3c__25_* o = alloc_();
    o->C_S__3c__25_::ctor_(rt::arg<double>(a, n, 0, NAN), rt::arg<rt::Value>(a, n, 1, C_S__3c__25_::dctor_1()));
    return rt::VO(o);
}
bool C_S__3c__25_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V(f_S_5w); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3c__25_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::tonum(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3c__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V(f_S_5w); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3c__25_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3c__25_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__25___id)); return true;
    case NM_ids: out = g::SV.C_S__3c__25___ids; return true;
    default: return false;
    }
}
bool C_S__3c__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__25___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c__25___ids = v; return true;
    default: return false;
    }
}
bool C_S__3c__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c_0::ctor_() {
    RT_FN("S__3c_0.S__3c_0");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2547 = 71.0; this->f_S_6_21_Z = rt::touint_d(_v2547); _v2547; });
    ({ rt::Value _v2548 = rt::trv(rt::VS(g::LS[660])); this->f_S_1i = rt::slot_string(_v2548); _v2548; });
    ({ rt::Value _v2549 = rt::trv(rt::VS(g::LS[950])); this->f_S_7_23_ = rt::slot_string(_v2549); _v2549; });
    ({ rt::Value _v2550 = rt::VS(g::LS[661]); this->f_S__5e__21__23_ = rt::slot_string(_v2550); _v2550; });
    ({ double _v2551 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2551); _v2551; });
}
rt::Value C_S__3c_0::m_S__21__21_G() {
    RT_FN("S__3c_0.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S__3d_y, 38.0), rt::V(5.0)))) {
        (void)(({ rt::Value _o2552 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2553 = rt::as_ptr<C_S_8G>(_o2552); _p2553 ? _p2553->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2552, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3c_0::g_S__5d__3b_() {
    RT_FN("S__3c_0.S__5d__3b__get");
    return (!C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id));
    return false;
}
bool C_S__3c_0::g_S__3f__21_a() {
    RT_FN("S__3c_0.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S__3c_0* C_S__3c_0::alloc_() {
    C_S__3c_0* o = rt::make<C_S__3c_0>();
    return o;
}
rt::Value C_S__3c_0::mk_(rt::Value* a, int n) {
    C_S__3c_0* o = alloc_();
    o->C_S__3c_0::ctor_();
    return rt::VO(o);
}
bool C_S__3c_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3c_0::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3c_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3c_0::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3c_0::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c_0__id)); return true;
    case NM_ids: out = g::SV.C_S__3c_0__ids; return true;
    default: return false;
    }
}
bool C_S__3c_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c_0__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c_0__ids = v; return true;
    default: return false;
    }
}
bool C_S__3c_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3c_z::ctor_() {
    RT_FN("S__3c_z.S__3c_z");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2554 = 78.0; this->f_S_6_21_Z = rt::touint_d(_v2554); _v2554; });
    ({ rt::Value _v2555 = rt::trv(rt::VS(g::LS[373])); this->f_S_1i = rt::slot_string(_v2555); _v2555; });
    ({ rt::Value _v2556 = rt::VS(g::LS[374]); this->f_S__5e__21__23_ = rt::slot_string(_v2556); _v2556; });
    ({ double _v2557 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2557); _v2557; });
}
rt::Value C_S__3c_z::m_S__40__22_() {
    RT_FN("S__3c_z.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[952]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__3c_z__S__5e__21_s, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3c_z::m_S__21__21_G() {
    RT_FN("S__3c_z.S__21__21_G");
    if ((({ bool _t2558 = (!this->f_S_4_21_K); _t2558 ? (bool)(C_S_8G::sm_S__3c__21_B(g::SV.C_S_2_21_E__id)) : _t2558; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0), rt::V(g::SV.C_S__3c_z__S__5e__21_s)))) {
        (void)(({ rt::Value _o2559 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2560 = rt::as_ptr<C_S_8G>(_o2559); _p2560 ? _p2560->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2559, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
C_S__3c_z* C_S__3c_z::alloc_() {
    C_S__3c_z* o = rt::make<C_S__3c_z>();
    return o;
}
rt::Value C_S__3c_z::mk_(rt::Value* a, int n) {
    C_S__3c_z* o = alloc_();
    o->C_S__3c_z::ctor_();
    return rt::VO(o);
}
bool C_S__3c_z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3c_z::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3c_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3c_z::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3c_z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3c_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c_z__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__3c_z__S__5e__21_s); return true;
    case NM_ids: out = g::SV.C_S__3c_z__ids; return true;
    default: return false;
    }
}
bool C_S__3c_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c_z__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__3c_z__S__5e__21_s = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__3c_z__ids = v; return true;
    default: return false;
    }
}
bool C_S__3c_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__21_1::ctor_() {
    RT_FN("S__3e__21_1.S__3e__21_1");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2561 = 218.0; this->f_S_6_21_Z = rt::touint_d(_v2561); _v2561; });
    ({ rt::Value _v2562 = rt::trv(rt::VS(g::LS[954])); this->f_S_1i = rt::slot_string(_v2562); _v2562; });
    ({ rt::Value _v2563 = rt::VS(g::LS[955]); this->f_S__5e__21__23_ = rt::slot_string(_v2563); _v2563; });
    ({ bool _v2564 = true; this->f_S_3_21_9 = _v2564; _v2564; });
}
rt::Value C_S__3e__21_1::m_S__21__21_G() {
    RT_FN("S__3e__21_1.S__21__21_G");
    (void)(this->C_S__23__21__60_::m_S__21__21_G());
    if ((this->f_S_4_21_K && (({ bool _t2565 = (!(((double)(C_PlayFab::sg_season())) == 7.0)); _t2565 ? _t2565 : (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3c__21_2__id)); }) || C_S_8G::sm_S__3c_P(g::SV.C_S_3E__id)))) {
        ({ bool _v2566 = false; this->f_S_4_21_K = _v2566; _v2566; });
    }
    return rt::NUL;
}
rt::Value C_S__3e__21_1::m_S_1_21__2c_() {
    uint32_t l_A__loc2_ = 0u;
    uint32_t l_A__loc1_ = 0u;
    double l_A__loc4_ = NAN;
    RT_FN("S__3e__21_1.S_1_21__2c_");
    (l_A__loc2_ = C_S__3e__21_1::sm_S__2b_A());
    if ((((double)(l_A__loc2_)) >= 50.0)) {
        (l_A__loc2_ = rt::touint_d(50.0));
        return rt::NUL;
    }
    (l_A__loc1_ = C_S__3e__21_1::sm_S_4b(l_A__loc2_));
    if (rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 12.0), rt::V((double)(l_A__loc1_)))) {
        (l_A__loc4_ = (rt::tonum(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 12.0)) - ((double)(l_A__loc1_))));
        ({ rt::Value _v2567 = rt::V(l_A__loc4_); rt::idx_set(g::SV.C_S_8G__S_6_21__2d_, rt::V(12.0), _v2567); });
    }
    return rt::NUL;
}
rt::Value C_S__3e__21_1::m_S__40__22_() {
    rt::Value l_A__loc6_ = rt::NUL;
    int32_t l_A__loc4_ = 0;
    rt::Value l_A__loc5_ = rt::NUL;
    uint32_t l_A__loc3_ = 0u;
    uint32_t l_A__loc2_ = 0u;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3e__21_1.S__40__22_");
    (l_A__loc6_ = rt::NUL);
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc5_ = rt::NUL);
    (l_A__loc3_ = C_S__3e__21_1::sm_S__2b_A());
    (l_A__loc2_ = C_S__3e__21_1::sm_S_4b(l_A__loc3_));
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[956]))));
    (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[920]))))));
    if ((((double)(l_A__loc3_)) >= 10.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[957]))))));
    } else {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[958]))))));
    }
    if ((((double)(l_A__loc3_)) >= 25.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::add(rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[959]))), rt::VS(g::LS[9])), rt::trv(rt::VS(g::LS[960]))))));
        (l_A__loc6_ = rt::arr_lit({}));
        if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0)) {
            (l_A__loc6_ = rt::arr_lit({rt::V((double)(g::SV.C_S_9a__id)), rt::V((double)(g::SV.C_S__3c_a__id))}));
        } else if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)) {
            (l_A__loc6_ = rt::arr_lit({rt::V((double)(g::SV.C_S__60_O__id)), rt::V((double)(g::SV.C_S__3c_a__id))}));
        } else if ((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0)) {
            (l_A__loc6_ = rt::arr_lit({rt::V((double)(g::SV.C_S__60_O__id)), rt::V((double)(g::SV.C_S_9a__id))}));
        }
        (l_A__loc4_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc4_)) < rt::alen(l_A__loc6_))) {
            (l_A__loc5_ = ({ rt::Value _t2568 = C_S_8G::sm_S__21__21_H(rt::touint(rt::arr_at(l_A__loc6_, ((double)(l_A__loc4_))))); rt::is_class(_t2568, C_S__3e_p::CI) ? _t2568 : rt::NUL; }));
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::add(rt::add(rt::VS(g::LS[143]), ({ rt::Value _o2569 = l_A__loc5_; C_S__3e_p* _p2570 = rt::as_ptr<C_S__3e_p>(_o2569); _p2570 ? _p2570->f_S_1i : rt::dget(_o2569, NM_S_1i); })), rt::VS(g::LS[181])), ({ rt::Value _o2571 = l_A__loc5_; C_S__3e_p* _p2572 = rt::as_ptr<C_S__3e_p>(_o2571); _p2572 ? _p2572->m_S__3e__21_d() : rt::dcallv(_o2571, NM_S__3e__21_d); })))));
            (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
        }
    } else if ((((double)(l_A__loc3_)) >= 10.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[925]))))));
    }
    if ((((double)(l_A__loc3_)) == 50.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[961]), C_S__26_c::sm_S_8_21_Z(rt::m_abs(g::SV.C_S__3e__21_1__S_4_21_p), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    } else if ((((double)(l_A__loc3_)) >= 25.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[927]))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
rt::Value C_S__3e__21_1::m_S_1_21_P() {
    uint32_t l_A__loc2_ = 0u;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3e__21_1.S_1_21_P");
    (l_A__loc2_ = C_S__3e__21_1::sm_S__2b_A());
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[954]))));
    if ((((double)(l_A__loc2_)) == 50.0)) {
        (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[962]))));
    } else if ((((double)(l_A__loc2_)) >= 25.0)) {
        (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[963]))));
    } else if ((((double)(l_A__loc2_)) >= 10.0)) {
        (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[964]))));
    }
    return rt::slot_string(rt::add(rt::add(rt::add(l_A__loc1_, rt::VS(g::LS[194])), rt::dcallv(rt::V((double)(C_S__3e__21_1::sm_S__2b_A())), rt::N_toString)), rt::VS(g::LS[931])));
    return rt::NUL;
}
rt::Value C_S__3e__21_1::m_S__21_E() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S__3e__21_1.S__21_E");
    (l_A__loc1_ = C_S__3e__21_1::sm_S__2b_A());
    if ((((double)(l_A__loc1_)) == 50.0)) {
        return rt::slot_string(rt::VS(g::LS[965]));
    }
    if ((((double)(l_A__loc1_)) >= 25.0)) {
        return rt::slot_string(rt::VS(g::LS[966]));
    }
    if ((((double)(l_A__loc1_)) >= 10.0)) {
        return rt::slot_string(rt::VS(g::LS[967]));
    }
    return rt::slot_string(rt::VS(g::LS[955]));
    return rt::NUL;
}
bool C_S__3e__21_1::g_S__2d_6() {
    RT_FN("S__3e__21_1.S__2d_6_get");
    return ({ bool _t2576 = (((double)(C_PlayFab::sg_season())) == 7.0); _t2576 ? (bool)((({ bool _t2575 = ({ rt::Value _o2573 = g::SV.C_S_8G__S__3d__21__60_; C_S__3b_m* _p2574 = rt::as_ptr<C_S__3b_m>(_o2573); _p2574 ? _p2574->m_S__27_W(rt::touint_d(2.0)) : rt::T(rt::dcallv(_o2573, NM_S__27_W, rt::V(2.0))); }); _t2575 ? _t2575 : (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 16.0), rt::V(3.0))); }))) : _t2576; });
    return false;
}
uint32_t C_S__3e__21_1::sm_S_4b(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S__3e__21_1.S_4b");
    return rt::touint_d(((((double)(l_param1)) < 10.0) ? 22.0 : (((((double)(l_param1)) < 25.0) ? 44.0 : 88.0))));
    return 0u;
}
bool C_S__3e__21_1::sm_S__22__2d_() {
    uint32_t l_A__loc1_ = 0u;
    RT_FN("S__3e__21_1.S__22__2d_");
    (l_A__loc1_ = C_S__3e__21_1::sm_S__2b_A());
    return ({ bool _t2577 = (((double)(l_A__loc1_)) < 50.0); _t2577 ? (bool)(rt::ge(rt::arr_at(g::SV.C_S_8G__S_6_21__2d_, 12.0), rt::V((double)(C_S__3e__21_1::sm_S_4b(l_A__loc1_))))) : _t2577; });
    return false;
}
uint32_t C_S__3e__21_1::sm_S__2b_A() {
    RT_FN("S__3e__21_1.S__2b_A");
    return C_S__26_c::sm_S_6_2d_(rt::toint_d(82.0), rt::toint_d(12.0));
    return 0u;
}
C_S__3e__21_1* C_S__3e__21_1::alloc_() {
    C_S__3e__21_1* o = rt::make<C_S__3e__21_1>();
    return o;
}
rt::Value C_S__3e__21_1::mk_(rt::Value* a, int n) {
    C_S__3e__21_1* o = alloc_();
    o->C_S__3e__21_1::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_1::dget(int id, rt::Value& out) {
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
bool C_S__3e__21_1::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3e__21_1::dcall(int id, rt::Value* a, int n, rt::Value& out) {
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
bool C_S__3e__21_1::dmeth(int id) {
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
bool C_S__3e__21_1::smeth_(int id) {
    switch (id) {
    case NM_S_4b: return true;
    case NM_S__22__2d_: return true;
    case NM_S__2b_A: return true;
    default: return false;
    }
}
bool C_S__3e__21_1::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_1__id)); return true;
    case NM_S_4_21_p: out = rt::V(g::SV.C_S__3e__21_1__S_4_21_p); return true;
    case NM_S_4b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__2d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__2b_A: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__21_1::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_1__id = rt::touint(v); return true;
    case NM_S_4_21_p: g::SV.C_S__3e__21_1__S_4_21_p = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3e__21_1::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4b: out = rt::V((double)(sm_S_4b(rt::arg<uint32_t>(a, n, 0, 0u)))); return true;
    case NM_S__22__2d_: out = rt::VB(sm_S__22__2d_()); return true;
    case NM_S__2b_A: out = rt::V((double)(sm_S__2b_A())); return true;
    default: return false;
    }
}
void C_S__3e__21_5::ctor_() {
    RT_FN("S__3e__21_5.S__3e__21_5");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2578 = 58.0; this->f_S_6_21_Z = rt::touint_d(_v2578); _v2578; });
    ({ rt::Value _v2579 = rt::VS(g::LS[968]); this->f_S_1i = rt::slot_string(_v2579); _v2579; });
    ({ rt::Value _v2580 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2580); _v2580; });
    ({ rt::Value _v2581 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2581); _v2581; });
    ({ double _v2582 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2582); _v2582; });
    ({ bool _v2583 = true; this->f_S_3_21_9 = _v2583; _v2583; });
}
C_S__3e__21_5* C_S__3e__21_5::alloc_() {
    C_S__3e__21_5* o = rt::make<C_S__3e__21_5>();
    return o;
}
rt::Value C_S__3e__21_5::mk_(rt::Value* a, int n) {
    C_S__3e__21_5* o = alloc_();
    o->C_S__3e__21_5::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_5::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3e__21_5::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3e__21_5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3e__21_5::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3e__21_5::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__21_5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_5__id)); return true;
    case NM_ids: out = g::SV.C_S__3e__21_5__ids; return true;
    default: return false;
    }
}
bool C_S__3e__21_5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_5__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3e__21_5__ids = v; return true;
    default: return false;
    }
}
bool C_S__3e__21_5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__21_F::ctor_() {
    RT_FN("S__3e__21_F.S__3e__21_F");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2584 = 77.0; this->f_S_6_21_Z = rt::touint_d(_v2584); _v2584; });
    ({ rt::Value _v2585 = rt::trv(rt::VS(g::LS[458])); this->f_S_1i = rt::slot_string(_v2585); _v2585; });
    ({ rt::Value _v2586 = rt::trv(rt::VS(g::LS[970])); this->f_S_7_23_ = rt::slot_string(_v2586); _v2586; });
    ({ rt::Value _v2587 = rt::VS(g::LS[459]); this->f_S__5e__21__23_ = rt::slot_string(_v2587); _v2587; });
    ({ double _v2588 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2588); _v2588; });
}
rt::Value C_S__3e__21_F::m_S__21__21_G() {
    bool l_A__loc6_ = false;
    bool l_A__loc2_ = false;
    bool l_A__loc4_ = false;
    bool l_A__loc3_ = false;
    bool l_A__loc1_ = false;
    bool l_A__loc5_ = false;
    RT_FN("S__3e__21_F.S__21__21_G");
    (l_A__loc6_ = false);
    (l_A__loc2_ = false);
    (l_A__loc4_ = false);
    (l_A__loc3_ = false);
    (l_A__loc1_ = false);
    (l_A__loc5_ = false);
    if ((!this->f_S_4_21_K)) {
        (l_A__loc6_ = ({ bool _t2590 = ({ bool _t2589 = rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 17.0), rt::V(0.0)); _t2589 ? _t2589 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__3d_y, 17.0), rt::V(0.0))); }); _t2590 ? _t2590 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__40_w, 17.0), rt::V(0.0))); }));
        (l_A__loc2_ = ({ bool _t2592 = ({ bool _t2591 = rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 18.0), rt::V(0.0)); _t2591 ? _t2591 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__3d_y, 18.0), rt::V(0.0))); }); _t2592 ? _t2592 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__40_w, 18.0), rt::V(0.0))); }));
        (l_A__loc4_ = ({ bool _t2594 = ({ bool _t2593 = rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 19.0), rt::V(0.0)); _t2593 ? _t2593 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__3d_y, 19.0), rt::V(0.0))); }); _t2594 ? _t2594 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__40_w, 19.0), rt::V(0.0))); }));
        (l_A__loc3_ = ({ bool _t2596 = ({ bool _t2595 = rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 20.0), rt::V(0.0)); _t2595 ? _t2595 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__3d_y, 20.0), rt::V(0.0))); }); _t2596 ? _t2596 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__40_w, 20.0), rt::V(0.0))); }));
        (l_A__loc1_ = ({ bool _t2598 = ({ bool _t2597 = rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 21.0), rt::V(0.0)); _t2597 ? _t2597 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__3d_y, 21.0), rt::V(0.0))); }); _t2598 ? _t2598 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__40_w, 21.0), rt::V(0.0))); }));
        (l_A__loc5_ = ({ bool _t2600 = ({ bool _t2599 = rt::gt(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 22.0), rt::V(0.0)); _t2599 ? _t2599 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__3d_y, 22.0), rt::V(0.0))); }); _t2600 ? _t2600 : (bool)(rt::gt(rt::arr_at(g::SV.C_S_8G__S__40_w, 22.0), rt::V(0.0))); }));
        if ((({ bool _t2604 = ({ bool _t2603 = ({ bool _t2602 = ({ bool _t2601 = l_A__loc4_; _t2601 ? (bool)(l_A__loc5_) : _t2601; }); _t2602 ? (bool)(l_A__loc2_) : _t2602; }); _t2603 ? (bool)(l_A__loc6_) : _t2603; }); _t2604 ? (bool)(l_A__loc3_) : _t2604; }) && l_A__loc1_)) {
            (void)(({ rt::Value _o2605 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2606 = rt::as_ptr<C_S_8G>(_o2605); _p2606 ? _p2606->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2605, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__3e__21_F::g_S__5d__3b_() {
    RT_FN("S__3e__21_F.S__5d__3b__get");
    return true;
    return false;
}
C_S__3e__21_F* C_S__3e__21_F::alloc_() {
    C_S__3e__21_F* o = rt::make<C_S__3e__21_F>();
    return o;
}
rt::Value C_S__3e__21_F::mk_(rt::Value* a, int n) {
    C_S__3e__21_F* o = alloc_();
    o->C_S__3e__21_F::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3e__21_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3e__21_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3e__21_F::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3e__21_F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__21_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_F__id)); return true;
    case NM_ids: out = g::SV.C_S__3e__21_F__ids; return true;
    default: return false;
    }
}
bool C_S__3e__21_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_F__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3e__21_F__ids = v; return true;
    default: return false;
    }
}
bool C_S__3e__21_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__3e__21_N::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__3e__21_N::ctor_(double p0, rt::Value p1, rt::Value p2) {
    double l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__3e__21_N.S__3e__21_N");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2607 = 40.0; this->f_S_6_21_Z = rt::touint_d(_v2607); _v2607; });
    ({ double _v2608 = l_param1; this->f_S_5w = _v2608; _v2608; });
    ({ rt::Value _v2609 = l_param2; this->f_S_1i = rt::slot_string(_v2609); _v2609; });
    ({ rt::Value _v2610 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v2610); _v2610; });
    ({ rt::Value _v2611 = rt::VS(g::LS[972]); this->f_S__3f__21__3d_ = rt::slot_string(_v2611); _v2611; });
    ({ double _v2612 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2612); _v2612; });
}
rt::Value C_S__3e__21_N::m_S__21__21_G() {
    RT_FN("S__3e__21_N.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0), rt::V(this->f_S_5w)))) {
        (void)(({ rt::Value _o2613 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2614 = rt::as_ptr<C_S_8G>(_o2613); _p2614 ? _p2614->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2613, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3e__21_N::m_S_8_5b_() {
    RT_FN("S__3e__21_N.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0)), this->f_S_5w, true));
    return rt::NUL;
}
rt::Value C_S__3e__21_N::m_S__40__22_() {
    RT_FN("S__3e__21_N.S__40__22_");
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[973]), rt::VS(g::LS[974]), rt::V(this->f_S_5w), C_S__26_c::sm_S_8_21_Z(this->f_S_5w, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__3e__21_N* C_S__3e__21_N::alloc_() {
    C_S__3e__21_N* o = rt::make<C_S__3e__21_N>();
    return o;
}
rt::Value C_S__3e__21_N::mk_(rt::Value* a, int n) {
    C_S__3e__21_N* o = alloc_();
    o->C_S__3e__21_N::ctor_(rt::arg<double>(a, n, 0, NAN), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__3e__21_N::dctor_2()));
    return rt::VO(o);
}
bool C_S__3e__21_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V(f_S_5w); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3e__21_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::tonum(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3e__21_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V(f_S_5w); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3e__21_N::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3e__21_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__21_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_N__id)); return true;
    case NM_ids: out = g::SV.C_S__3e__21_N__ids; return true;
    default: return false;
    }
}
bool C_S__3e__21_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_N__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3e__21_N__ids = v; return true;
    default: return false;
    }
}
bool C_S__3e__21_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__21_X::ctor_() {
    RT_FN("S__3e__21_X.S__3e__21_X");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2615 = 56.0; this->f_S_6_21_Z = rt::touint_d(_v2615); _v2615; });
    ({ rt::Value _v2616 = rt::VS(g::LS[976]); this->f_S_1i = rt::slot_string(_v2616); _v2616; });
    ({ rt::Value _v2617 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2617); _v2617; });
    ({ rt::Value _v2618 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2618); _v2618; });
    ({ double _v2619 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2619); _v2619; });
    ({ bool _v2620 = true; this->f_S_3_21_9 = _v2620; _v2620; });
}
C_S__3e__21_X* C_S__3e__21_X::alloc_() {
    C_S__3e__21_X* o = rt::make<C_S__3e__21_X>();
    return o;
}
rt::Value C_S__3e__21_X::mk_(rt::Value* a, int n) {
    C_S__3e__21_X* o = alloc_();
    o->C_S__3e__21_X::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_X::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3e__21_X::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3e__21_X::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3e__21_X::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3e__21_X::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__21_X::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_X__id)); return true;
    case NM_ids: out = g::SV.C_S__3e__21_X__ids; return true;
    default: return false;
    }
}
bool C_S__3e__21_X::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_X__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3e__21_X__ids = v; return true;
    default: return false;
    }
}
bool C_S__3e__21_X::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__21_z::ctor_() {
    RT_FN("S__3e__21_z.S__3e__21_z");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2621 = 309.0; this->f_S_6_21_Z = rt::touint_d(_v2621); _v2621; });
    ({ rt::Value _v2622 = rt::VS(g::LS[978]); this->f_S_1i = rt::slot_string(_v2622); _v2622; });
    ({ rt::Value _v2623 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2623); _v2623; });
    ({ rt::Value _v2624 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2624); _v2624; });
    ({ double _v2625 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2625); _v2625; });
    ({ bool _v2626 = true; this->f_S_3_21_9 = _v2626; _v2626; });
}
C_S__3e__21_z* C_S__3e__21_z::alloc_() {
    C_S__3e__21_z* o = rt::make<C_S__3e__21_z>();
    return o;
}
rt::Value C_S__3e__21_z::mk_(rt::Value* a, int n) {
    C_S__3e__21_z* o = alloc_();
    o->C_S__3e__21_z::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_z::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3e__21_z::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3e__21_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3e__21_z::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3e__21_z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__21_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_z__id)); return true;
    default: return false;
    }
}
bool C_S__3e__21_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_z__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e__21_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__3e__24_::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
int32_t C_S__3e__24_::dctor_3() { return rt::toint_d(0.0); }
void C_S__3e__24_::ctor_(double p0, rt::Value p1, rt::Value p2, int32_t p3) {
    double l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    int32_t l_param4 = p3;
    RT_FN("S__3e__24_.S__3e__24_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2627 = 112.0; this->f_S_6_21_Z = rt::touint_d(_v2627); _v2627; });
    ({ double _v2628 = l_param1; this->f_S_5w = _v2628; _v2628; });
    ({ rt::Value _v2629 = l_param2; this->f_S_1i = rt::slot_string(_v2629); _v2629; });
    ({ rt::Value _v2630 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v2630); _v2630; });
    ({ rt::Value _v2631 = rt::VS(g::LS[979]); this->f_S__3f__21__3d_ = rt::slot_string(_v2631); _v2631; });
    ({ double _v2632 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2632); _v2632; });
    ({ int32_t _v2633 = l_param4; this->f_S__5b_2 = _v2633; _v2633; });
}
rt::Value C_S__3e__24_::m_S__21__21_G() {
    RT_FN("S__3e__24_.S__21__21_G");
    if ((({ bool _t2634 = (!this->f_S_4_21_K); _t2634 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= ((double)(this->f_S__5b_2)))) : _t2634; }) && (C_S__26_c::sm_S_3_22__26_(false, false, true) >= this->f_S_5w))) {
        (void)(({ rt::Value _o2635 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2636 = rt::as_ptr<C_S_8G>(_o2635); _p2636 ? _p2636->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2635, NM_S_3_21__20_, rt::VO(this)); }));
    }
    if (((!this->f_S_4_21_K) && C_S_8G::sm_S__3f__21_L(this->f_S_1i))) {
        (void)(({ rt::Value _o2637 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2638 = rt::as_ptr<C_S_8G>(_o2637); _p2638 ? _p2638->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2637, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3e__24_::m_S_8_5b_() {
    RT_FN("S__3e__24_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S_3_22__26_(false, false, true), this->f_S_5w, true));
    return rt::NUL;
}
rt::Value C_S__3e__24_::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3e__24_.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[980]), C_S__26_c::sm_S_8_21_Z(this->f_S_5w, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    if ((((double)(this->f_S__5b_2)) == 2.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[981]))))));
    } else if ((((double)(this->f_S__5b_2)) == 1.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[982]))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
C_S__3e__24_* C_S__3e__24_::alloc_() {
    C_S__3e__24_* o = rt::make<C_S__3e__24_>();
    return o;
}
rt::Value C_S__3e__24_::mk_(rt::Value* a, int n) {
    C_S__3e__24_* o = alloc_();
    o->C_S__3e__24_::ctor_(rt::arg<double>(a, n, 0, NAN), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__3e__24_::dctor_2()), rt::arg<int32_t>(a, n, 3, C_S__3e__24_::dctor_3()));
    return rt::VO(o);
}
bool C_S__3e__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V(f_S_5w); return true;
    case NM_S__5b_2: out = rt::V((double)(f_S__5b_2)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3e__24_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::tonum(v); return true;
    case NM_S__5b_2: f_S__5b_2 = rt::toint(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3e__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V(f_S_5w); out = rt::call_value(f, a, n); return true; }
    case NM_S__5b_2: { rt::Value f = rt::V((double)(f_S__5b_2)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3e__24_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    case NM_S__5b_2: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3e__24_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__24___id)); return true;
    case NM_ids: out = g::SV.C_S__3e__24___ids; return true;
    default: return false;
    }
}
bool C_S__3e__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__24___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3e__24___ids = v; return true;
    default: return false;
    }
}
bool C_S__3e__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e__22_F::ctor_() {
    RT_FN("S__3e__22_F.S__3e__22_F");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2639 = 378.0; this->f_S_6_21_Z = rt::touint_d(_v2639); _v2639; });
    ({ rt::Value _v2640 = rt::trv(rt::VS(g::LS[406])); this->f_S_1i = rt::slot_string(_v2640); _v2640; });
    ({ rt::Value _v2641 = rt::trv(rt::VS(g::LS[984]), C_S__26_c::sm_S_8_21_Z(4.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())); this->f_S_7_23_ = rt::slot_string(_v2641); _v2641; });
    ({ rt::Value _v2642 = rt::VS(g::LS[407]); this->f_S__5e__21__23_ = rt::slot_string(_v2642); _v2642; });
    ({ double _v2643 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2643); _v2643; });
}
rt::Value C_S__3e__22_F::m_S__21__21_G() {
    RT_FN("S__3e__22_F.S__21__21_G");
    if ((({ bool _t2644 = (!this->f_S_4_21_K); _t2644 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t2644; }) && (C_S__26_c::sm_S__2c__22_F() >= 4.0))) {
        (void)(({ rt::Value _o2645 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2646 = rt::as_ptr<C_S_8G>(_o2645); _p2646 ? _p2646->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2645, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3e__22_F::g_S__5d__3b_() {
    RT_FN("S__3e__22_F.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S__2c_P())) < 4.0);
    return false;
}
bool C_S__3e__22_F::g_S__3f__21_a() {
    RT_FN("S__3e__22_F.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S__2c_P())) < 4.0);
    return false;
}
C_S__3e__22_F* C_S__3e__22_F::alloc_() {
    C_S__3e__22_F* o = rt::make<C_S__3e__22_F>();
    return o;
}
rt::Value C_S__3e__22_F::mk_(rt::Value* a, int n) {
    C_S__3e__22_F* o = alloc_();
    o->C_S__3e__22_F::ctor_();
    return rt::VO(o);
}
bool C_S__3e__22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3e__22_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3e__22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3e__22_F::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3e__22_F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e__22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__22_F__id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__3e__22_F__S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__3e__22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__22_F__id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__3e__22_F__S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3e__22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__3e_0::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__3e_0::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__3e_0.S__3e_0");
    ({ double _v2647 = 8.0; this->f_S__60_r = rt::toint_d(_v2647); _v2647; });
    ({ double _v2648 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v2648); _v2648; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2649 = 32.0; this->f_S_6_21_Z = rt::touint_d(_v2649); _v2649; });
}
C_S__3e_0* C_S__3e_0::alloc_() {
    C_S__3e_0* o = rt::make<C_S__3e_0>();
    return o;
}
rt::Value C_S__3e_0::mk_(rt::Value* a, int n) {
    C_S__3e_0* o = alloc_();
    o->C_S__3e_0::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__3e_0::dctor_1()));
    return rt::VO(o);
}
bool C_S__3e_0::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__3e_0::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__3e_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__3e_0::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__3e_0::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e_0__id)); return true;
    case NM_ids: out = g::SV.C_S__3e_0__ids; return true;
    default: return false;
    }
}
bool C_S__3e_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e_0__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3e_0__ids = v; return true;
    default: return false;
    }
}
bool C_S__3e_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e_L::ctor_() {
    RT_FN("S__3e_L.S__3e_L");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2650 = 53.0; this->f_S_6_21_Z = rt::touint_d(_v2650); _v2650; });
    ({ rt::Value _v2651 = rt::VS(g::LS[986]); this->f_S_1i = rt::slot_string(_v2651); _v2651; });
    ({ rt::Value _v2652 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2652); _v2652; });
    ({ rt::Value _v2653 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2653); _v2653; });
    ({ double _v2654 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2654); _v2654; });
    ({ bool _v2655 = true; this->f_S_3_21_9 = _v2655; _v2655; });
}
C_S__3e_L* C_S__3e_L::alloc_() {
    C_S__3e_L* o = rt::make<C_S__3e_L>();
    return o;
}
rt::Value C_S__3e_L::mk_(rt::Value* a, int n) {
    C_S__3e_L* o = alloc_();
    o->C_S__3e_L::ctor_();
    return rt::VO(o);
}
bool C_S__3e_L::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3e_L::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3e_L::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3e_L::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3e_L::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e_L::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e_L__id)); return true;
    case NM_ids: out = g::SV.C_S__3e_L__ids; return true;
    default: return false;
    }
}
bool C_S__3e_L::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e_L__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3e_L__ids = v; return true;
    default: return false;
    }
}
bool C_S__3e_L::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e_N::ctor_() {
    RT_FN("S__3e_N.S__3e_N");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2656 = 169.0; this->f_S_6_21_Z = rt::touint_d(_v2656); _v2656; });
    ({ rt::Value _v2657 = rt::trv(rt::VS(g::LS[565])); this->f_S_1i = rt::slot_string(_v2657); _v2657; });
    ({ rt::Value _v2658 = rt::trv(rt::VS(g::LS[988])); this->f_S_7_23_ = rt::slot_string(_v2658); _v2658; });
    ({ rt::Value _v2659 = rt::VS(g::LS[566]); this->f_S__5e__21__23_ = rt::slot_string(_v2659); _v2659; });
    ({ double _v2660 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2660); _v2660; });
}
rt::Value C_S__3e_N::m_S__21__21_G() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3e_N.S__21__21_G");
    if ((!this->f_S_4_21_K)) {
        {
            std::vector<rt::Value> _lst2661;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst2661);
            for (const rt::Value& _x2662 : _lst2661) {
                l_A__loc1_ = _x2662;
                if ((({ bool _t2668 = ({ bool _t2665 = rt::is_class(l_A__loc1_, C_S__5d__3c_::CI); _t2665 ? (bool)((!({ rt::Value _o2663 = l_A__loc1_; C_S__60_6* _p2664 = rt::as_ptr<C_S__60_6>(_o2663); _p2664 ? _p2664->f_S__3f__21_6 : rt::T(rt::dget(_o2663, NM_S__3f__21_6)); }))) : _t2665; }); _t2668 ? (bool)((((double)(({ rt::Value _o2666 = l_A__loc1_; C_S__60_6* _p2667 = rt::as_ptr<C_S__60_6>(_o2666); _p2667 ? _p2667->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2666, NM_S__2d__21__5e_)); }))) >= 6.0)) : _t2668; }) && (((double)(({ rt::Value _o2669 = l_A__loc1_; C_S__60_6* _p2670 = rt::as_ptr<C_S__60_6>(_o2669); _p2670 ? _p2670->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2669, NM_S__2d__21__5e_)); }))) <= 8.0))) {
                    return rt::NUL;
                }
            }
        }
        (void)(({ rt::Value _o2671 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2672 = rt::as_ptr<C_S_8G>(_o2671); _p2672 ? _p2672->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2671, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3e_N::g_S__5d__3b_() {
    RT_FN("S__3e_N.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 4.0);
    return false;
}
bool C_S__3e_N::g_S__3f__21_a() {
    RT_FN("S__3e_N.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 2.0);
    return false;
}
C_S__3e_N* C_S__3e_N::alloc_() {
    C_S__3e_N* o = rt::make<C_S__3e_N>();
    return o;
}
rt::Value C_S__3e_N::mk_(rt::Value* a, int n) {
    C_S__3e_N* o = alloc_();
    o->C_S__3e_N::ctor_();
    return rt::VO(o);
}
bool C_S__3e_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3e_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3e_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3e_N::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3e_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e_N__id)); return true;
    default: return false;
    }
}
bool C_S__3e_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e_N__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3e_s::ctor_() {
    RT_FN("S__3e_s.S__3e_s");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2673 = 157.0; this->f_S_6_21_Z = rt::touint_d(_v2673); _v2673; });
    ({ rt::Value _v2674 = rt::trv(rt::VS(g::LS[452])); this->f_S_1i = rt::slot_string(_v2674); _v2674; });
    ({ rt::Value _v2675 = rt::VS(g::LS[453]); this->f_S__5e__21__23_ = rt::slot_string(_v2675); _v2675; });
    ({ double _v2676 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2676); _v2676; });
}
rt::Value C_S__3e_s::m_S__40__22_() {
    RT_FN("S__3e_s.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[989]), C_S__26_c::sm_S_8_21_Z(1e+90, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3e_s::m_S__21__21_G() {
    RT_FN("S__3e_s.S__21__21_G");
    if ((({ bool _t2677 = (!this->f_S_4_21_K); _t2677 ? (bool)((C_S_8G::sg_S__22__21_0() >= 1e+90)) : _t2677; }) && rt::eq(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 49.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 49.0)), rt::V(0.0)))) {
        (void)(({ rt::Value _o2678 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2679 = rt::as_ptr<C_S_8G>(_o2678); _p2679 ? _p2679->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2678, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3e_s::g_S__5d__3b_() {
    RT_FN("S__3e_s.S__5d__3b__get");
    return true;
    return false;
}
C_S__3e_s* C_S__3e_s::alloc_() {
    C_S__3e_s* o = rt::make<C_S__3e_s>();
    return o;
}
rt::Value C_S__3e_s::mk_(rt::Value* a, int n) {
    C_S__3e_s* o = alloc_();
    o->C_S__3e_s::ctor_();
    return rt::VO(o);
}
bool C_S__3e_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3e_s::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3e_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3e_s::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3e_s::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3e_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e_s__id)); return true;
    default: return false;
    }
}
bool C_S__3e_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60__3d_::ctor_() {
    RT_FN("S__60__3d_.S__60__3d_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2680 = 98.0; this->f_S_6_21_Z = rt::touint_d(_v2680); _v2680; });
}
rt::Value C_S__60__3d_::m_S__40__22_() {
    RT_FN("S__60__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[990]), rt::dcallv(rt::V((double)(this->f_S_5w)), rt::N_toString), rt::arr_at(g::SV.C_S__2d_D__S__3f__2b_, ((double)(this->f_S__21_G)))));
    return rt::NUL;
}
rt::Value C_S__60__3d_::m_S__21__21_G() {
    int32_t l_A__loc1_ = 0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__60__3d_.S__21__21_G");
    (l_A__loc1_ = rt::toint_d(0.0));
    if ((!this->f_S_4_21_K)) {
        (l_A__loc1_ = rt::toint_d(0.0));
        {
            std::vector<rt::Value> _lst2681;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst2681);
            for (const rt::Value& _x2682 : _lst2681) {
                l_A__loc2_ = _x2682;
                if ((({ bool _t2685 = rt::is_class(l_A__loc2_, C_S__26__21__5f_::CI); _t2685 ? (bool)(({ rt::Value _o2683 = l_A__loc2_; C_S__60_6* _p2684 = rt::as_ptr<C_S__60_6>(_o2683); _p2684 ? _p2684->f_S__3f__21_6 : rt::T(rt::dget(_o2683, NM_S__3f__21_6)); })) : _t2685; }) && (((double)(({ rt::Value _o2687 = (({ rt::Value _t2686 = l_A__loc2_; rt::is_class(_t2686, C_S__26__21__5f_::CI) ? _t2686 : rt::NUL; })); C_S__26__21__5f_* _p2688 = rt::as_ptr<C_S__26__21__5f_>(_o2687); _p2688 ? _p2688->f_S__21_G : rt::toint(rt::dget(_o2687, NM_S__21_G)); }))) == ((double)(this->f_S__21_G))))) {
                    (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) + 1.0)));
                }
            }
        }
        if ((((double)(l_A__loc1_)) >= ((double)(this->f_S_5w)))) {
            (void)(({ rt::Value _o2689 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2690 = rt::as_ptr<C_S_8G>(_o2689); _p2690 ? _p2690->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2689, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__60__3d_::g_S__5d__3b_() {
    RT_FN("S__60__3d_.S__5d__3b__get");
    return true;
    return false;
}
C_S__60__3d_* C_S__60__3d_::alloc_() {
    C_S__60__3d_* o = rt::make<C_S__60__3d_>();
    return o;
}
rt::Value C_S__60__3d_::mk_(rt::Value* a, int n) {
    C_S__60__3d_* o = alloc_();
    o->C_S__60__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__60__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21_G: out = rt::V((double)(f_S__21_G)); return true;
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__60__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__21_G: f_S__21_G = rt::toint(v); return true;
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__60__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__21_G: { rt::Value f = rt::V((double)(f_S__21_G)); out = rt::call_value(f, a, n); return true; }
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__60__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__21_G: return false;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__60__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__21__2b_::ctor_() {
    RT_FN("S__3f__21__2b_.S__3f__21__2b_");
    (void)((this->C_S__60__3d_::ctor_(), rt::NUL));
    ({ double _v2691 = 96.0; this->f_S_6_21_Z = rt::touint_d(_v2691); _v2691; });
    ({ rt::Value _v2692 = rt::trv(rt::VS(g::LS[573])); this->f_S_1i = rt::slot_string(_v2692); _v2692; });
    ({ rt::Value _v2693 = rt::VS(g::LS[574]); this->f_S__5e__21__23_ = rt::slot_string(_v2693); _v2693; });
    ({ double _v2694 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2694); _v2694; });
    ({ double _v2695 = 4.0; this->f_S__21_G = rt::toint_d(_v2695); _v2695; });
}
C_S__3f__21__2b_* C_S__3f__21__2b_::alloc_() {
    C_S__3f__21__2b_* o = rt::make<C_S__3f__21__2b_>();
    return o;
}
rt::Value C_S__3f__21__2b_::mk_(rt::Value* a, int n) {
    C_S__3f__21__2b_* o = alloc_();
    o->C_S__3f__21__2b_::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21__2b_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dget(id, out);
}
bool C_S__3f__21__2b_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dset(id, v);
}
bool C_S__3f__21__2b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dcall(id, a, n, out);
}
bool C_S__3f__21__2b_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__60__3d_::dmeth(id);
}
bool C_S__3f__21__2b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21__2b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21__2b___id)); return true;
    case NM_ids: out = g::SV.C_S__3f__21__2b___ids; return true;
    default: return false;
    }
}
bool C_S__3f__21__2b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21__2b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f__21__2b___ids = v; return true;
    default: return false;
    }
}
bool C_S__3f__21__2b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__3f__21_0::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__3f__21_0::ctor_(double p0, rt::Value p1, rt::Value p2) {
    double l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__3f__21_0.S__3f__21_0");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2696 = 46.0; this->f_S_6_21_Z = rt::touint_d(_v2696); _v2696; });
    ({ double _v2697 = l_param1; this->f_S_5w = _v2697; _v2697; });
    ({ rt::Value _v2698 = l_param2; this->f_S_1i = rt::slot_string(_v2698); _v2698; });
    ({ rt::Value _v2699 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v2699); _v2699; });
    ({ double _v2700 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2700); _v2700; });
    ({ rt::Value _v2701 = rt::VS(g::LS[992]); this->f_S__3f__21__3d_ = rt::slot_string(_v2701); _v2701; });
}
rt::Value C_S__3f__21_0::m_S__21__21_G() {
    RT_FN("S__3f__21_0.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 0.0), rt::V(this->f_S_5w)))) {
        (void)(({ rt::Value _o2702 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2703 = rt::as_ptr<C_S_8G>(_o2702); _p2703 ? _p2703->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2702, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3f__21_0::m_S_8_5b_() {
    RT_FN("S__3f__21_0.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 0.0)), this->f_S_5w, true));
    return rt::NUL;
}
rt::Value C_S__3f__21_0::m_S__40__22_() {
    RT_FN("S__3f__21_0.S__40__22_");
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[993]), rt::VS(g::LS[994]), rt::V(this->f_S_5w), C_S__26_c::sm_S_8_21_Z(this->f_S_5w, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__3f__21_0* C_S__3f__21_0::alloc_() {
    C_S__3f__21_0* o = rt::make<C_S__3f__21_0>();
    return o;
}
rt::Value C_S__3f__21_0::mk_(rt::Value* a, int n) {
    C_S__3f__21_0* o = alloc_();
    o->C_S__3f__21_0::ctor_(rt::arg<double>(a, n, 0, NAN), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__3f__21_0::dctor_2()));
    return rt::VO(o);
}
bool C_S__3f__21_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V(f_S_5w); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3f__21_0::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::tonum(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3f__21_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V(f_S_5w); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3f__21_0::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3f__21_0::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_0__id)); return true;
    case NM_ids: out = g::SV.C_S__3f__21_0__ids; return true;
    default: return false;
    }
}
bool C_S__3f__21_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_0__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f__21_0__ids = v; return true;
    default: return false;
    }
}
bool C_S__3f__21_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__3f__21_B::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
bool C_S__3f__21_B::dctor_3() { return false; }
void C_S__3f__21_B::ctor_(int32_t p0, rt::Value p1, rt::Value p2, bool p3) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    bool l_param4 = p3;
    RT_FN("S__3f__21_B.S__3f__21_B");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2704 = 54.0; this->f_S_6_21_Z = rt::touint_d(_v2704); _v2704; });
    ({ int32_t _v2705 = l_param1; this->f_S__25__21_G = _v2705; _v2705; });
    ({ rt::Value _v2706 = l_param2; this->f_S_1i = rt::slot_string(_v2706); _v2706; });
    ({ rt::Value _v2707 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v2707); _v2707; });
    ({ bool _v2708 = l_param4; this->f_S__27__21_v = _v2708; _v2708; });
    ({ double _v2709 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2709); _v2709; });
    if ((!this->f_S__27__21_v)) {
        ({ rt::Value _v2710 = rt::trv(rt::VS(g::LS[996]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__25__21_G)))); this->f_S_7_23_ = rt::slot_string(_v2710); _v2710; });
    } else {
        ({ rt::Value _v2711 = rt::trv(rt::VS(g::LS[997]), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__25__21_G))), rt::arr_at(g::SV.C_S__2d_D__S_45, ((double)(this->f_S__25__21_G)))); this->f_S_7_23_ = rt::slot_string(_v2711); _v2711; });
    }
}
rt::Value C_S__3f__21_B::m_S__5b__21_C() {
    RT_FN("S__3f__21_B.S__5b__21_C");
    (void)(this->C_S__23__21__60_::m_S__5b__21_C());
    ({ double _v2712 = (((100000.0 + (((double)(this->f_S_6_21_Z)) * 100.0)) + ((double)(this->f_S__25__21_G))) + ((this->f_S__27__21_v ? 25.0 : 0.0))); this->f_S_6_21_Z = rt::touint_d(_v2712); _v2712; });
    return rt::NUL;
}
rt::Value C_S__3f__21_B::m_S__21__21_G() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3f__21_B.S__21__21_G");
    if ((({ bool _t2714 = (!this->f_S_4_21_K); _t2714 ? (bool)((({ bool _t2713 = (!this->f_S__27__21_v); _t2713 ? _t2713 : (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)); }))) : _t2714; }) && (({ bool _t2715 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == ((double)(this->f_S__25__21_G))); _t2715 ? _t2715 : (bool)((((double)(g::SV.C_S_8G__S__23_3)) == ((double)(this->f_S__25__21_G)))); }) || (((double)(g::SV.C_S_8G__S__2d__21_x)) == ((double)(this->f_S__25__21_G)))))) {
        if ((this->f_S__27__21_v && rt::lt(rt::arr_at(g::SV.C_S_8G__S_1_21__23_, ((double)(({ rt::Value _o2717 = (({ rt::Value _t2716 = C_S_8G::sm_S__21__21_H(rt::touint(rt::arr_at(g::SV.C_S__26_c__S_0P, ((double)(this->f_S__25__21_G))))); rt::is_class(_t2716, C_S_6P::CI) ? _t2716 : rt::NUL; })); C_S_6P* _p2718 = rt::as_ptr<C_S_6P>(_o2717); _p2718 ? _p2718->f_S_0_21_N : rt::toint(rt::dget(_o2717, NM_S_0_21_N)); })))), rt::V(30.0)))) {
            return rt::NUL;
        }
        {
            std::vector<rt::Value> _lst2719;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst2719);
            for (const rt::Value& _x2720 : _lst2719) {
                l_A__loc1_ = _x2720;
                if (((((double)(({ rt::Value _o2721 = l_A__loc1_; C_S__60_6* _p2722 = rt::as_ptr<C_S__60_6>(_o2721); _p2722 ? _p2722->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2721, NM_S__2d__21__5e_)); }))) == ((double)(this->f_S__25__21_G))) && (((double)(({ rt::Value _o2723 = l_A__loc1_; C_S__60_6* _p2724 = rt::as_ptr<C_S__60_6>(_o2723); _p2724 ? _p2724->f_id : rt::touint(rt::dget(_o2723, NM_id)); }))) == ((double)(g::SV.C_S__3b_J__id))))) {
                    if (((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0) && (!({ rt::Value _o2725 = l_A__loc1_; C_S__60_6* _p2726 = rt::as_ptr<C_S__60_6>(_o2725); _p2726 ? _p2726->f_S__3c__21_7 : rt::T(rt::dget(_o2725, NM_S__3c__21_7)); })))) {
                        return rt::NUL;
                    }
                } else if (((((double)(({ rt::Value _o2727 = l_A__loc1_; C_S__60_6* _p2728 = rt::as_ptr<C_S__60_6>(_o2727); _p2728 ? _p2728->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2727, NM_S__2d__21__5e_)); }))) == ((double)(this->f_S__25__21_G))) && (((double)(({ rt::Value _o2729 = l_A__loc1_; C_S__60_6* _p2730 = rt::as_ptr<C_S__60_6>(_o2729); _p2730 ? _p2730->f_id : rt::touint(rt::dget(_o2729, NM_id)); }))) == ((double)(g::SV.C_S_6_21__23___id))))) {
                    if (((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0) && (!({ rt::Value _o2731 = l_A__loc1_; C_S__60_6* _p2732 = rt::as_ptr<C_S__60_6>(_o2731); _p2732 ? _p2732->f_S__3c__21_7 : rt::T(rt::dget(_o2731, NM_S__3c__21_7)); })))) {
                        return rt::NUL;
                    }
                } else if (((((double)(({ rt::Value _o2733 = l_A__loc1_; C_S__60_6* _p2734 = rt::as_ptr<C_S__60_6>(_o2733); _p2734 ? _p2734->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2733, NM_S__2d__21__5e_)); }))) == ((double)(this->f_S__25__21_G))) && (((double)(({ rt::Value _o2735 = l_A__loc1_; C_S__60_6* _p2736 = rt::as_ptr<C_S__60_6>(_o2735); _p2736 ? _p2736->f_id : rt::touint(rt::dget(_o2735, NM_id)); }))) == ((double)(g::SV.C_S__20__21_V__id))))) {
                    if (((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0) && (!({ rt::Value _o2737 = l_A__loc1_; C_S__60_6* _p2738 = rt::as_ptr<C_S__60_6>(_o2737); _p2738 ? _p2738->f_S__3c__21_7 : rt::T(rt::dget(_o2737, NM_S__3c__21_7)); })))) {
                        return rt::NUL;
                    }
                } else if ((({ bool _t2743 = (((double)(({ rt::Value _o2739 = l_A__loc1_; C_S__60_6* _p2740 = rt::as_ptr<C_S__60_6>(_o2739); _p2740 ? _p2740->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2739, NM_S__2d__21__5e_)); }))) == ((double)(this->f_S__25__21_G))); _t2743 ? (bool)((!({ rt::Value _o2741 = l_A__loc1_; C_S__60_6* _p2742 = rt::as_ptr<C_S__60_6>(_o2741); _p2742 ? _p2742->f_S__3c__21_7 : rt::T(rt::dget(_o2741, NM_S__3c__21_7)); }))) : _t2743; }) && (({ rt::Value _o2744 = l_A__loc1_; C_S__60_6* _p2745 = rt::as_ptr<C_S__60_6>(_o2744); _p2745 ? _p2745->f_S__3c__60_ : rt::T(rt::dget(_o2744, NM_S__3c__60_)); }) || (({ rt::Value _o2746 = l_A__loc1_; C_S__60_6* _p2747 = rt::as_ptr<C_S__60_6>(_o2746); _p2747 ? _p2747->f_S__21__21_n : rt::T(rt::dget(_o2746, NM_S__21__21_n)); }) && this->f_S__27__21_v)))) {
                    return rt::NUL;
                }
            }
        }
        (void)(({ rt::Value _o2748 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2749 = rt::as_ptr<C_S_8G>(_o2748); _p2749 ? _p2749->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2748, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__3f__21_B::m_S_8_5b_() {
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3f__21_B.S_8_5b_");
    (l_A__loc2_ = rt::toint_d(0.0));
    {
        std::vector<rt::Value> _lst2750;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst2750);
        for (const rt::Value& _x2751 : _lst2750) {
            l_A__loc1_ = _x2751;
            if ((({ bool _t2756 = (((double)(({ rt::Value _o2752 = l_A__loc1_; C_S__60_6* _p2753 = rt::as_ptr<C_S__60_6>(_o2752); _p2753 ? _p2753->f_S__2d__21__5e_ : rt::toint(rt::dget(_o2752, NM_S__2d__21__5e_)); }))) == ((double)(this->f_S__25__21_G))); _t2756 ? (bool)(({ rt::Value _o2754 = l_A__loc1_; C_S__60_6* _p2755 = rt::as_ptr<C_S__60_6>(_o2754); _p2755 ? _p2755->f_S__3c__21_7 : rt::T(rt::dget(_o2754, NM_S__3c__21_7)); })) : _t2756; }) && (({ rt::Value _o2757 = l_A__loc1_; C_S__60_6* _p2758 = rt::as_ptr<C_S__60_6>(_o2757); _p2758 ? _p2758->f_S__3c__60_ : rt::T(rt::dget(_o2757, NM_S__3c__60_)); }) || (({ rt::Value _o2759 = l_A__loc1_; C_S__60_6* _p2760 = rt::as_ptr<C_S__60_6>(_o2759); _p2760 ? _p2760->f_S__21__21_n : rt::T(rt::dget(_o2759, NM_S__21__21_n)); }) && this->f_S__27__21_v)))) {
                (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
            }
        }
    }
    return rt::slot_string(this->m_S__3f__21_N(((double)(l_A__loc2_)), ((((double)(this->f_S__25__21_G)) == 11.0) ? 18.0 : ((this->f_S__27__21_v ? 16.0 : 12.0))), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
bool C_S__3f__21_B::g_S__5d__3b_() {
    RT_FN("S__3f__21_B.S__5d__3b__get");
    if (this->f_S__27__21_v) {
        return (((double)(C_S_8G::sg_S__2c_P())) < 2.0);
    }
    if ((((double)(this->f_S__25__21_G)) == 6.0)) {
        return (!C_S_8G::sm_S__3c_P(g::SV.C_S_3N__id));
    }
    if ((((double)(this->f_S__25__21_G)) == 7.0)) {
        return (!C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21__3b___id));
    }
    if ((((double)(this->f_S__25__21_G)) == 8.0)) {
        return (!C_S_8G::sm_S__3c_P(g::SV.C_S_9N__id));
    }
    if ((((double)(this->f_S__25__21_G)) == 9.0)) {
        return (!C_S_8G::sm_S__3c_P(g::SV.C_S__5d_m__id));
    }
    if ((((double)(this->f_S__25__21_G)) == 10.0)) {
        return (!C_S_8G::sm_S__3c_P(g::SV.C_S__21_Q__id));
    }
    if ((((double)(this->f_S__25__21_G)) == 11.0)) {
        return (!C_S_8G::sm_S__3c_P(g::SV.C_S__3e_L__id));
    }
    if ((((double)(this->f_S__25__21_G)) == 12.0)) {
        return (!C_S_8G::sm_S__3c_P(g::SV.C_S__5b_r__id));
    }
    if ((((double)(this->f_S__25__21_G)) == 13.0)) {
        return (!C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_z__id));
    }
    if ((((double)(this->f_S__25__21_G)) == 14.0)) {
        return (!C_S_8G::sm_S__3c_P(g::SV.C_S__60__21_z__id));
    }
    if ((((double)(this->f_S__25__21_G)) == 15.0)) {
        return (!C_S_8G::sm_S__3c_P(g::SV.C_S__27__21_z__id));
    }
    return false;
    return false;
}
bool C_S__3f__21_B::g_S__3f__21_a() {
    RT_FN("S__3f__21_B.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S__3f__21_B* C_S__3f__21_B::alloc_() {
    C_S__3f__21_B* o = rt::make<C_S__3f__21_B>();
    return o;
}
rt::Value C_S__3f__21_B::mk_(rt::Value* a, int n) {
    C_S__3f__21_B* o = alloc_();
    o->C_S__3f__21_B::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__3f__21_B::dctor_2()), rt::arg<bool>(a, n, 3, C_S__3f__21_B::dctor_3()));
    return rt::VO(o);
}
bool C_S__3f__21_B::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__25__21_G: out = rt::V((double)(f_S__25__21_G)); return true;
    case NM_S__27__21_v: out = rt::VB(f_S__27__21_v); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3f__21_B::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__25__21_G: f_S__25__21_G = rt::toint(v); return true;
    case NM_S__27__21_v: f_S__27__21_v = rt::T(v); return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3f__21_B::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21_G: { rt::Value f = rt::V((double)(f_S__25__21_G)); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__21_v: { rt::Value f = rt::VB(f_S__27__21_v); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3f__21_B::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    case NM_S__25__21_G: return false;
    case NM_S__27__21_v: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3f__21_B::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21_B::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_B__id)); return true;
    case NM_ids: out = g::SV.C_S__3f__21_B__ids; return true;
    default: return false;
    }
}
bool C_S__3f__21_B::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_B__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f__21_B__ids = v; return true;
    default: return false;
    }
}
bool C_S__3f__21_B::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__21_P::ctor_() {
    RT_FN("S__3f__21_P.S__3f__21_P");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2761 = 91.0; this->f_S_6_21_Z = rt::touint_d(_v2761); _v2761; });
    ({ rt::Value _v2762 = rt::trv(rt::VS(g::LS[429])); this->f_S_1i = rt::slot_string(_v2762); _v2762; });
    ({ rt::Value _v2763 = rt::trv(rt::VS(g::LS[999])); this->f_S_7_23_ = rt::slot_string(_v2763); _v2763; });
    ({ rt::Value _v2764 = rt::VS(g::LS[430]); this->f_S__5e__21__23_ = rt::slot_string(_v2764); _v2764; });
    ({ double _v2765 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2765); _v2765; });
}
rt::Value C_S__3f__21_P::m_S__21__21_G() {
    RT_FN("S__3f__21_P.S__21__21_G");
    if (((!this->f_S_4_21_K) && (((double)(C_S__26_c::sm_S__26__21__3c_(rt::toint_d((-1.0)), true))) >= 600.0))) {
        (void)(({ rt::Value _o2766 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2767 = rt::as_ptr<C_S_8G>(_o2766); _p2767 ? _p2767->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2766, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3f__21_P::g_S__5d__3b_() {
    RT_FN("S__3f__21_P.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
bool C_S__3f__21_P::g_S__3f__21_a() {
    RT_FN("S__3f__21_P.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
C_S__3f__21_P* C_S__3f__21_P::alloc_() {
    C_S__3f__21_P* o = rt::make<C_S__3f__21_P>();
    return o;
}
rt::Value C_S__3f__21_P::mk_(rt::Value* a, int n) {
    C_S__3f__21_P* o = alloc_();
    o->C_S__3f__21_P::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_P::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3f__21_P::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3f__21_P::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3f__21_P::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3f__21_P::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21_P::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_P__id)); return true;
    case NM_ids: out = g::SV.C_S__3f__21_P__ids; return true;
    default: return false;
    }
}
bool C_S__3f__21_P::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_P__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f__21_P__ids = v; return true;
    default: return false;
    }
}
bool C_S__3f__21_P::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__21_Z::ctor_() {
    RT_FN("S__3f__21_Z.S__3f__21_Z");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2768 = 52.0; this->f_S_6_21_Z = rt::touint_d(_v2768); _v2768; });
    ({ rt::Value _v2769 = rt::trv(rt::VS(g::LS[1001])); this->f_S_1i = rt::slot_string(_v2769); _v2769; });
    ({ rt::Value _v2770 = rt::trv(rt::VS(g::LS[1002])); this->f_S_7_23_ = rt::slot_string(_v2770); _v2770; });
    ({ rt::Value _v2771 = rt::VS(g::LS[789]); this->f_S__5e__21__23_ = rt::slot_string(_v2771); _v2771; });
    ({ double _v2772 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2772); _v2772; });
}
bool C_S__3f__21_Z::g_S__5d__3b_() {
    RT_FN("S__3f__21_Z.S__5d__3b__get");
    return true;
    return false;
}
bool C_S__3f__21_Z::g_S__3f__21_a() {
    RT_FN("S__3f__21_Z.S__3f__21_a_get");
    return true;
    return false;
}
C_S__3f__21_Z* C_S__3f__21_Z::alloc_() {
    C_S__3f__21_Z* o = rt::make<C_S__3f__21_Z>();
    return o;
}
rt::Value C_S__3f__21_Z::mk_(rt::Value* a, int n) {
    C_S__3f__21_Z* o = alloc_();
    o->C_S__3f__21_Z::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_Z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3f__21_Z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3f__21_Z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3f__21_Z::dmeth(int id) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3f__21_Z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21_Z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_Z__id)); return true;
    case NM_ids: out = g::SV.C_S__3f__21_Z__ids; return true;
    default: return false;
    }
}
bool C_S__3f__21_Z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_Z__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f__21_Z__ids = v; return true;
    default: return false;
    }
}
bool C_S__3f__21_Z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__21_m::ctor_() {
    RT_FN("S__3f__21_m.S__3f__21_m");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2773 = 259.0; this->f_S_6_21_Z = rt::touint_d(_v2773); _v2773; });
    ({ rt::Value _v2774 = rt::VS(g::LS[1004]); this->f_S_1i = rt::slot_string(_v2774); _v2774; });
    ({ rt::Value _v2775 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2775); _v2775; });
    ({ rt::Value _v2776 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2776); _v2776; });
    ({ double _v2777 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2777); _v2777; });
    ({ bool _v2778 = true; this->f_S_3_21_9 = _v2778; _v2778; });
}
C_S__3f__21_m* C_S__3f__21_m::alloc_() {
    C_S__3f__21_m* o = rt::make<C_S__3f__21_m>();
    return o;
}
rt::Value C_S__3f__21_m::mk_(rt::Value* a, int n) {
    C_S__3f__21_m* o = alloc_();
    o->C_S__3f__21_m::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_m::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3f__21_m::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3f__21_m::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3f__21_m::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3f__21_m::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21_m::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_m__id)); return true;
    default: return false;
    }
}
bool C_S__3f__21_m::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_m__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__21_m::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__22__24_::ctor_() {
    RT_FN("S__3f__22__24_.S__3f__22__24_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2779 = 317.0; this->f_S_6_21_Z = rt::touint_d(_v2779); _v2779; });
    ({ rt::Value _v2780 = rt::VS(g::LS[1005]); this->f_S_1i = rt::slot_string(_v2780); _v2780; });
    ({ rt::Value _v2781 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2781); _v2781; });
    ({ rt::Value _v2782 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2782); _v2782; });
    ({ double _v2783 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2783); _v2783; });
    ({ bool _v2784 = true; this->f_S_3_21_9 = _v2784; _v2784; });
}
C_S__3f__22__24_* C_S__3f__22__24_::alloc_() {
    C_S__3f__22__24_* o = rt::make<C_S__3f__22__24_>();
    return o;
}
rt::Value C_S__3f__22__24_::mk_(rt::Value* a, int n) {
    C_S__3f__22__24_* o = alloc_();
    o->C_S__3f__22__24_::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22__24_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3f__22__24_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3f__22__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3f__22__24_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3f__22__24_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__22__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22__24___id)); return true;
    default: return false;
    }
}
bool C_S__3f__22__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__22__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__22__2c_::ctor_() {
    RT_FN("S__3f__22__2c_.S__3f__22__2c_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2785 = 329.0; this->f_S_6_21_Z = rt::touint_d(_v2785); _v2785; });
    ({ rt::Value _v2786 = rt::trv(rt::VS(g::LS[462])); this->f_S_1i = rt::slot_string(_v2786); _v2786; });
    ({ rt::Value _v2787 = rt::VS(g::LS[463]); this->f_S__5e__21__23_ = rt::slot_string(_v2787); _v2787; });
    ({ double _v2788 = 3.0; this->f_S__2c__21_B = rt::toint_d(_v2788); _v2788; });
}
rt::Value C_S__3f__22__2c_::m_S__40__22_() {
    RT_FN("S__3f__22__2c_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1006]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__3f__22__2c___S__5e__21_s, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3f__22__2c_::m_S__21__21_G() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__3f__22__2c_.S__21__21_G");
    if ((!this->f_S_4_21_K)) {
        {
            std::vector<rt::Value> _lst2789;
            rt::each(g::SV.C_S_8G__S__25__3c_, _lst2789);
            for (const rt::Value& _x2790 : _lst2789) {
                l_A__loc1_ = _x2790;
                if ((((double)(({ rt::Value _o2791 = l_A__loc1_; C_S__60__21__3b_* _p2792 = rt::as_ptr<C_S__60__21__3b_>(_o2791); _p2792 ? _p2792->g_S__21_a() : rt::touint(rt::dget(_o2791, NM_S__21_a)); }))) >= g::SV.C_S__3f__22__2c___S__5e__21_s)) {
                    (void)(({ rt::Value _o2793 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2794 = rt::as_ptr<C_S_8G>(_o2793); _p2794 ? _p2794->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2793, NM_S_3_21__20_, rt::VO(this)); }));
                    break;
                }
            }
        }
    }
    return rt::NUL;
}
C_S__3f__22__2c_* C_S__3f__22__2c_::alloc_() {
    C_S__3f__22__2c_* o = rt::make<C_S__3f__22__2c_>();
    return o;
}
rt::Value C_S__3f__22__2c_::mk_(rt::Value* a, int n) {
    C_S__3f__22__2c_* o = alloc_();
    o->C_S__3f__22__2c_::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22__2c_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3f__22__2c_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3f__22__2c_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3f__22__2c_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3f__22__2c_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__22__2c_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22__2c___id)); return true;
    case NM_S__5e__21_s: out = rt::V(g::SV.C_S__3f__22__2c___S__5e__21_s); return true;
    default: return false;
    }
}
bool C_S__3f__22__2c_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22__2c___id = rt::touint(v); return true;
    case NM_S__5e__21_s: g::SV.C_S__3f__22__2c___S__5e__21_s = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3f__22__2c_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f_9::ctor_() {
    RT_FN("S__3f_9.S__3f_9");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2795 = 116.0; this->f_S_6_21_Z = rt::touint_d(_v2795); _v2795; });
    ({ rt::Value _v2796 = rt::VS(g::LS[1007]); this->f_S_1i = rt::slot_string(_v2796); _v2796; });
    ({ rt::Value _v2797 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2797); _v2797; });
    ({ rt::Value _v2798 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2798); _v2798; });
    ({ double _v2799 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2799); _v2799; });
    ({ bool _v2800 = true; this->f_S_3_21_9 = _v2800; _v2800; });
}
C_S__3f_9* C_S__3f_9::alloc_() {
    C_S__3f_9* o = rt::make<C_S__3f_9>();
    return o;
}
rt::Value C_S__3f_9::mk_(rt::Value* a, int n) {
    C_S__3f_9* o = alloc_();
    o->C_S__3f_9::ctor_();
    return rt::VO(o);
}
bool C_S__3f_9::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3f_9::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3f_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3f_9::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3f_9::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f_9__id)); return true;
    default: return false;
    }
}
bool C_S__3f_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f_9__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f_P::ctor_() {
    RT_FN("S__3f_P.S__3f_P");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2801 = 69.0; this->f_S_6_21_Z = rt::touint_d(_v2801); _v2801; });
    ({ rt::Value _v2802 = rt::trv(rt::VS(g::LS[614])); this->f_S_1i = rt::slot_string(_v2802); _v2802; });
    ({ rt::Value _v2803 = rt::VS(g::LS[615]); this->f_S__5e__21__23_ = rt::slot_string(_v2803); _v2803; });
    ({ double _v2804 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2804); _v2804; });
}
rt::Value C_S__3f_P::m_S__40__22_() {
    RT_FN("S__3f_P.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1008]), C_S__26_c::sm_S_8_21_Z(1500.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__3f_P::m_S__21__21_G() {
    RT_FN("S__3f_P.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 24.0), rt::V(1500.0)))) {
        (void)(({ rt::Value _o2805 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2806 = rt::as_ptr<C_S_8G>(_o2805); _p2806 ? _p2806->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2805, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__3f_P::g_S__5d__3b_() {
    RT_FN("S__3f_P.S__5d__3b__get");
    return true;
    return false;
}
C_S__3f_P* C_S__3f_P::alloc_() {
    C_S__3f_P* o = rt::make<C_S__3f_P>();
    return o;
}
rt::Value C_S__3f_P::mk_(rt::Value* a, int n) {
    C_S__3f_P* o = alloc_();
    o->C_S__3f_P::ctor_();
    return rt::VO(o);
}
bool C_S__3f_P::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3f_P::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3f_P::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3f_P::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3f_P::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f_P::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f_P__id)); return true;
    case NM_ids: out = g::SV.C_S__3f_P__ids; return true;
    default: return false;
    }
}
bool C_S__3f_P::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f_P__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f_P__ids = v; return true;
    default: return false;
    }
}
bool C_S__3f_P::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__5f_::ctor_() {
    RT_FN("S__3f__5f_.S__3f__5f_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2807 = 68.0; this->f_S_6_21_Z = rt::touint_d(_v2807); _v2807; });
    ({ rt::Value _v2808 = rt::trv(rt::VS(g::LS[436])); this->f_S_1i = rt::slot_string(_v2808); _v2808; });
    ({ rt::Value _v2809 = rt::trv(rt::VS(g::LS[1010])); this->f_S_7_23_ = rt::slot_string(_v2809); _v2809; });
    ({ rt::Value _v2810 = rt::VS(g::LS[437]); this->f_S__5e__21__23_ = rt::slot_string(_v2810); _v2810; });
    ({ double _v2811 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2811); _v2811; });
}
rt::Value C_S__3f__5f_::m_S__21__21_G() {
    double l_A__loc2_ = NAN;
    double l_A__loc3_ = NAN;
    double l_A__loc1_ = NAN;
    RT_FN("S__3f__5f_.S__21__21_G");
    (l_A__loc2_ = NAN);
    (l_A__loc3_ = NAN);
    (l_A__loc1_ = NAN);
    if (((!this->f_S_4_21_K) && rt::ge(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 1.0)), rt::V(86400.0)))) {
        (l_A__loc2_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 3.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 3.0))));
        (l_A__loc3_ = rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 2.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 2.0))));
        (l_A__loc1_ = ((rt::tonum(rt::add(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::arr_at(g::SV.C_S_8G__S__3d_y, 1.0))) - l_A__loc2_) - l_A__loc3_));
        if ((({ bool _t2812 = (rt::m_abs((l_A__loc1_ - l_A__loc2_)) <= 3600.0); _t2812 ? (bool)((rt::m_abs((l_A__loc1_ - l_A__loc3_)) <= 3600.0)) : _t2812; }) && (rt::m_abs((l_A__loc2_ - l_A__loc3_)) <= 3600.0))) {
            (void)(({ rt::Value _o2813 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2814 = rt::as_ptr<C_S_8G>(_o2813); _p2814 ? _p2814->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2813, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__3f__5f_::g_S__5d__3b_() {
    RT_FN("S__3f__5f_.S__5d__3b__get");
    return true;
    return false;
}
C_S__3f__5f_* C_S__3f__5f_::alloc_() {
    C_S__3f__5f_* o = rt::make<C_S__3f__5f_>();
    return o;
}
rt::Value C_S__3f__5f_::mk_(rt::Value* a, int n) {
    C_S__3f__5f_* o = alloc_();
    o->C_S__3f__5f_::ctor_();
    return rt::VO(o);
}
bool C_S__3f__5f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__3f__5f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__3f__5f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__3f__5f_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__3f__5f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__5f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__5f___id)); return true;
    case NM_ids: out = g::SV.C_S__3f__5f___ids; return true;
    default: return false;
    }
}
bool C_S__3f__5f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__5f___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f__5f___ids = v; return true;
    default: return false;
    }
}
bool C_S__3f__5f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__25_F::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__25_F::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__25_F.S__25_F");
    ({ double _v2815 = 8.0; this->f_S__60_r = rt::toint_d(_v2815); _v2815; });
    ({ double _v2816 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v2816); _v2816; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2817 = 19.0; this->f_S_6_21_Z = rt::touint_d(_v2817); _v2817; });
}
C_S__25_F* C_S__25_F::alloc_() {
    C_S__25_F* o = rt::make<C_S__25_F>();
    return o;
}
rt::Value C_S__25_F::mk_(rt::Value* a, int n) {
    C_S__25_F* o = alloc_();
    o->C_S__25_F::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__25_F::dctor_1()));
    return rt::VO(o);
}
bool C_S__25_F::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__25_F::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__25_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__25_F::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__25_F::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__25_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25_F__id)); return true;
    case NM_ids: out = g::SV.C_S__25_F__ids; return true;
    default: return false;
    }
}
bool C_S__25_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25_F__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__25_F__ids = v; return true;
    default: return false;
    }
}
bool C_S__25_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__21__2b_::ctor_() {
    RT_FN("S__26__21__2b_.S__26__21__2b_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2818 = 118.0; this->f_S_6_21_Z = rt::touint_d(_v2818); _v2818; });
    ({ rt::Value _v2819 = rt::VS(g::LS[1013]); this->f_S_1i = rt::slot_string(_v2819); _v2819; });
    ({ rt::Value _v2820 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2820); _v2820; });
    ({ rt::Value _v2821 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2821); _v2821; });
    ({ double _v2822 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2822); _v2822; });
    ({ bool _v2823 = true; this->f_S_3_21_9 = _v2823; _v2823; });
}
C_S__26__21__2b_* C_S__26__21__2b_::alloc_() {
    C_S__26__21__2b_* o = rt::make<C_S__26__21__2b_>();
    return o;
}
rt::Value C_S__26__21__2b_::mk_(rt::Value* a, int n) {
    C_S__26__21__2b_* o = alloc_();
    o->C_S__26__21__2b_::ctor_();
    return rt::VO(o);
}
bool C_S__26__21__2b_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__26__21__2b_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__26__21__2b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__26__21__2b_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__26__21__2b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21__2b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21__2b___id)); return true;
    default: return false;
    }
}
bool C_S__26__21__2b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21__2b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__21__2b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__26__21_0::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__26__21_0::ctor_(double p0, rt::Value p1, rt::Value p2) {
    double l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__26__21_0.S__26__21_0");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2824 = 41.0; this->f_S_6_21_Z = rt::touint_d(_v2824); _v2824; });
    ({ double _v2825 = l_param1; this->f_S_5w = _v2825; _v2825; });
    ({ rt::Value _v2826 = l_param2; this->f_S_1i = rt::slot_string(_v2826); _v2826; });
    ({ rt::Value _v2827 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v2827); _v2827; });
    ({ double _v2828 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2828); _v2828; });
    ({ rt::Value _v2829 = rt::VS(g::LS[1014]); this->f_S__3f__21__3d_ = rt::slot_string(_v2829); _v2829; });
}
rt::Value C_S__26__21_0::m_S__21__21_G() {
    RT_FN("S__26__21_0.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0), rt::V(this->f_S_5w)))) {
        (void)(({ rt::Value _o2830 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2831 = rt::as_ptr<C_S_8G>(_o2830); _p2831 ? _p2831->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2830, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__26__21_0::m_S_8_5b_() {
    RT_FN("S__26__21_0.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(rt::tonum(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 4.0)), this->f_S_5w, C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S__26__21_0::m_S__40__22_() {
    RT_FN("S__26__21_0.S__40__22_");
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[1015]), rt::VS(g::LS[1016]), rt::V(this->f_S_5w), C_S__26_c::sm_S_8_21_Z(this->f_S_5w, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), (g::SV.C_S__20_g__S__22_g ? rt::trv(rt::VS(g::LS[1017])) : rt::trv(rt::VS(g::LS[1018])))));
    return rt::NUL;
}
C_S__26__21_0* C_S__26__21_0::alloc_() {
    C_S__26__21_0* o = rt::make<C_S__26__21_0>();
    return o;
}
rt::Value C_S__26__21_0::mk_(rt::Value* a, int n) {
    C_S__26__21_0* o = alloc_();
    o->C_S__26__21_0::ctor_(rt::arg<double>(a, n, 0, NAN), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__26__21_0::dctor_2()));
    return rt::VO(o);
}
bool C_S__26__21_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V(f_S_5w); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__26__21_0::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::tonum(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__26__21_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V(f_S_5w); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__26__21_0::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__26__21_0::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_0__id)); return true;
    case NM_ids: out = g::SV.C_S__26__21_0__ids; return true;
    default: return false;
    }
}
bool C_S__26__21_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_0__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__26__21_0__ids = v; return true;
    default: return false;
    }
}
bool C_S__26__21_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__26__21_A::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__26__21_A::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__26__21_A.S__26__21_A");
    ({ double _v2832 = 5.0; this->f_S__60_r = rt::toint_d(_v2832); _v2832; });
    ({ double _v2833 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v2833); _v2833; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2834 = 36.0; this->f_S_6_21_Z = rt::touint_d(_v2834); _v2834; });
}
C_S__26__21_A* C_S__26__21_A::alloc_() {
    C_S__26__21_A* o = rt::make<C_S__26__21_A>();
    return o;
}
rt::Value C_S__26__21_A::mk_(rt::Value* a, int n) {
    C_S__26__21_A* o = alloc_();
    o->C_S__26__21_A::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__26__21_A::dctor_1()));
    return rt::VO(o);
}
bool C_S__26__21_A::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__26__21_A::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__26__21_A::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__26__21_A::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__26__21_A::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21_A::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_A__id)); return true;
    case NM_ids: out = g::SV.C_S__26__21_A__ids; return true;
    default: return false;
    }
}
bool C_S__26__21_A::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_A__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__26__21_A__ids = v; return true;
    default: return false;
    }
}
bool C_S__26__21_A::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__21_X::ctor_() {
    RT_FN("S__26__21_X.S__26__21_X");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2835 = 213.0; this->f_S_6_21_Z = rt::touint_d(_v2835); _v2835; });
    ({ rt::Value _v2836 = rt::trv(rt::VS(g::LS[522])); this->f_S_1i = rt::slot_string(_v2836); _v2836; });
    ({ rt::Value _v2837 = rt::trv(rt::VS(g::LS[1021])); this->f_S_7_23_ = rt::slot_string(_v2837); _v2837; });
    ({ rt::Value _v2838 = rt::VS(g::LS[523]); this->f_S__5e__21__23_ = rt::slot_string(_v2838); _v2838; });
    ({ double _v2839 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2839); _v2839; });
}
bool C_S__26__21_X::g_S__5d__3b_() {
    RT_FN("S__26__21_X.S__5d__3b__get");
    return (!C_S_8G::sm_S__3c_P(g::SV.C_S__5b_r__id));
    return false;
}
bool C_S__26__21_X::g_S__3f__21_a() {
    RT_FN("S__26__21_X.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S__26__21_X* C_S__26__21_X::alloc_() {
    C_S__26__21_X* o = rt::make<C_S__26__21_X>();
    return o;
}
rt::Value C_S__26__21_X::mk_(rt::Value* a, int n) {
    C_S__26__21_X* o = alloc_();
    o->C_S__26__21_X::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_X::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__26__21_X::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__26__21_X::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__26__21_X::dmeth(int id) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__26__21_X::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21_X::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_X__id)); return true;
    default: return false;
    }
}
bool C_S__26__21_X::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_X__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__21_X::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__21_n::ctor_() {
    RT_FN("S__26__21_n.S__26__21_n");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2840 = 262.0; this->f_S_6_21_Z = rt::touint_d(_v2840); _v2840; });
    ({ rt::Value _v2841 = rt::VS(g::LS[1022]); this->f_S_1i = rt::slot_string(_v2841); _v2841; });
    ({ rt::Value _v2842 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2842); _v2842; });
    ({ rt::Value _v2843 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2843); _v2843; });
    ({ double _v2844 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2844); _v2844; });
    ({ bool _v2845 = true; this->f_S_3_21_9 = _v2845; _v2845; });
}
C_S__26__21_n* C_S__26__21_n::alloc_() {
    C_S__26__21_n* o = rt::make<C_S__26__21_n>();
    return o;
}
rt::Value C_S__26__21_n::mk_(rt::Value* a, int n) {
    C_S__26__21_n* o = alloc_();
    o->C_S__26__21_n::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_n::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__26__21_n::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__26__21_n::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__26__21_n::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__26__21_n::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21_n::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_n__id)); return true;
    default: return false;
    }
}
bool C_S__26__21_n::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_n__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__21_n::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__22__27_::ctor_() {
    RT_FN("S__26__22__27_.S__26__22__27_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2846 = 323.0; this->f_S_6_21_Z = rt::touint_d(_v2846); _v2846; });
    ({ rt::Value _v2847 = rt::trv(rt::VS(g::LS[682])); this->f_S_1i = rt::slot_string(_v2847); _v2847; });
    ({ rt::Value _v2848 = rt::VS(g::LS[683]); this->f_S__5e__21__23_ = rt::slot_string(_v2848); _v2848; });
    ({ double _v2849 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2849); _v2849; });
}
rt::Value C_S__26__22__27_::m_S__40__22_() {
    RT_FN("S__26__22__27_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1023]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__26__22__27___S_0_22__25_, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__26__22__27_::g_S__5d__3b_() {
    RT_FN("S__26__22__27_.S__5d__3b__get");
    return ({ bool _t2851 = ({ bool _t2850 = (((double)(C_S_8G::sg_S__2c_P())) < 2.0); _t2850 ? _t2850 : (bool)((((double)(C_S_8G::sg_S_8_21_H())) < 125.0)); }); _t2851 ? _t2851 : (bool)((!C_S_8G::sm_S__3c_P(g::SV.C_S__27__21_z__id))); });
    return false;
}
bool C_S__26__22__27_::g_S__3f__21_a() {
    RT_FN("S__26__22__27_.S__3f__21_a_get");
    return this->g_S__5d__3b_();
    return false;
}
C_S__26__22__27_* C_S__26__22__27_::alloc_() {
    C_S__26__22__27_* o = rt::make<C_S__26__22__27_>();
    return o;
}
rt::Value C_S__26__22__27_::mk_(rt::Value* a, int n) {
    C_S__26__22__27_* o = alloc_();
    o->C_S__26__22__27_::ctor_();
    return rt::VO(o);
}
bool C_S__26__22__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__26__22__27_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__26__22__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__26__22__27_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__26__22__27_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__22__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22__27___id)); return true;
    case NM_S_0_22__25_: out = rt::V(g::SV.C_S__26__22__27___S_0_22__25_); return true;
    default: return false;
    }
}
bool C_S__26__22__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22__27___id = rt::touint(v); return true;
    case NM_S_0_22__25_: g::SV.C_S__26__22__27___S_0_22__25_ = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__26__22__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__26_m::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__26_m::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__26_m.S__26_m");
    ({ double _v2852 = 9.0; this->f_S__60_r = rt::toint_d(_v2852); _v2852; });
    ({ double _v2853 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v2853); _v2853; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2854 = 28.0; this->f_S_6_21_Z = rt::touint_d(_v2854); _v2854; });
}
C_S__26_m* C_S__26_m::alloc_() {
    C_S__26_m* o = rt::make<C_S__26_m>();
    return o;
}
rt::Value C_S__26_m::mk_(rt::Value* a, int n) {
    C_S__26_m* o = alloc_();
    o->C_S__26_m::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__26_m::dctor_1()));
    return rt::VO(o);
}
bool C_S__26_m::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__26_m::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__26_m::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__26_m::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__26_m::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26_m::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26_m__id)); return true;
    case NM_ids: out = g::SV.C_S__26_m__ids; return true;
    default: return false;
    }
}
bool C_S__26_m::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26_m__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__26_m__ids = v; return true;
    default: return false;
    }
}
bool C_S__26_m::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__21__20_::ctor_() {
    RT_FN("S__27__21__20_.S__27__21__20_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2855 = 10.0; this->f_S_6_21_Z = rt::touint_d(_v2855); _v2855; });
    ({ rt::Value _v2856 = rt::trv(rt::VS(g::LS[1025])); this->f_S_1i = rt::slot_string(_v2856); _v2856; });
    ({ rt::Value _v2857 = rt::VS(g::LS[1026]); this->f_S__5e__21__23_ = rt::slot_string(_v2857); _v2857; });
    ({ double _v2858 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2858); _v2858; });
}
rt::Value C_S__27__21__20_::m_S__21__21_G() {
    RT_FN("S__27__21__20_.S__21__21_G");
    if (((!this->f_S_4_21_K) && C_S_8G::sm_S_7d(g::SV.C_S__27_k__id))) {
        (void)(({ rt::Value _o2859 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2860 = rt::as_ptr<C_S_8G>(_o2859); _p2860 ? _p2860->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2859, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__27__21__20_::m_S__40__22_() {
    RT_FN("S__27__21__20_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[886]), C_S__26_c::sm_S_8_21_Z(6000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), this->f_S_1i));
    return rt::NUL;
}
C_S__27__21__20_* C_S__27__21__20_::alloc_() {
    C_S__27__21__20_* o = rt::make<C_S__27__21__20_>();
    return o;
}
rt::Value C_S__27__21__20_::mk_(rt::Value* a, int n) {
    C_S__27__21__20_* o = alloc_();
    o->C_S__27__21__20_::ctor_();
    return rt::VO(o);
}
bool C_S__27__21__20_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__27__21__20_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__27__21__20_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__27__21__20_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__40__22_: return true;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__27__21__20_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27__21__20_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21__20___id)); return true;
    case NM_ids: out = g::SV.C_S__27__21__20___ids; return true;
    default: return false;
    }
}
bool C_S__27__21__20_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21__20___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__27__21__20___ids = v; return true;
    default: return false;
    }
}
bool C_S__27__21__20_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__21_9::ctor_() {
    RT_FN("S__27__21_9.S__27__21_9");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2861 = 214.0; this->f_S_6_21_Z = rt::touint_d(_v2861); _v2861; });
    ({ rt::Value _v2862 = rt::trv(rt::VS(g::LS[420])); this->f_S_1i = rt::slot_string(_v2862); _v2862; });
    ({ rt::Value _v2863 = rt::VS(g::LS[421]); this->f_S__5e__21__23_ = rt::slot_string(_v2863); _v2863; });
    ({ double _v2864 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2864); _v2864; });
}
rt::Value C_S__27__21_9::m_S__40__22_() {
    RT_FN("S__27__21_9.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1028])));
    return rt::NUL;
}
rt::Value C_S__27__21_9::m_S__21__21_G() {
    RT_FN("S__27__21_9.S__21__21_G");
    (void)(this->C_S__23__21__60_::m_S__21__21_G());
    if (this->f_S_4_21_K) {
        return rt::NUL;
    }
    if (((((double)(this->f_S_5A)) == 0.0) && (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0))) {
        ({ double _v2865 = 1.0; this->f_S_5A = rt::toint_d(_v2865); _v2865; });
        ({ double _v2866 = C_S__26_c::sm_S__20__21__3b_(rt::toint_d(1.0)); this->f_S__27__21_X = _v2866; _v2866; });
    } else if ((((double)(this->f_S_5A)) == 1.0)) {
        if ((({ bool _t2867 = (!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0))); _t2867 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0))) : _t2867; }) && (!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)))) {
            ({ double _v2868 = 0.0; this->f_S_5A = rt::toint_d(_v2868); _v2868; });
        } else if ((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0)) {
            ({ double _v2869 = 2.0; this->f_S_5A = rt::toint_d(_v2869); _v2869; });
        }
    } else if ((((double)(this->f_S_5A)) == 2.0)) {
        if ((({ bool _t2870 = (!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == (-1.0))); _t2870 ? (bool)((!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0))) : _t2870; }) && (!(((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 2.0)))) {
            ({ double _v2871 = 0.0; this->f_S_5A = rt::toint_d(_v2871); _v2871; });
        } else if ((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 2.0)) {
            if (((C_S__26_c::sm_S__20__21__3b_(rt::toint_d(1.0)) - this->f_S__27__21_X) <= 900.0)) {
                (void)(({ rt::Value _o2872 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2873 = rt::as_ptr<C_S_8G>(_o2872); _p2873 ? _p2873->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2872, NM_S_3_21__20_, rt::VO(this)); }));
            } else {
                ({ double _v2874 = 0.0; this->f_S_5A = rt::toint_d(_v2874); _v2874; });
            }
        }
    }
    return rt::NUL;
}
bool C_S__27__21_9::g_S__5d__3b_() {
    RT_FN("S__27__21_9.S__5d__3b__get");
    return true;
    return false;
}
C_S__27__21_9* C_S__27__21_9::alloc_() {
    C_S__27__21_9* o = rt::make<C_S__27__21_9>();
    return o;
}
rt::Value C_S__27__21_9::mk_(rt::Value* a, int n) {
    C_S__27__21_9* o = alloc_();
    o->C_S__27__21_9::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S_5A: out = rt::V((double)(f_S_5A)); return true;
    case NM_S__27__21_X: out = rt::V(f_S__27__21_X); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__27__21_9::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5A: f_S_5A = rt::toint(v); return true;
    case NM_S__27__21_X: f_S__27__21_X = rt::tonum(v); return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__27__21_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S_5A: { rt::Value f = rt::V((double)(f_S_5A)); out = rt::call_value(f, a, n); return true; }
    case NM_S__27__21_X: { rt::Value f = rt::V(f_S__27__21_X); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__27__21_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S_5A: return false;
    case NM_S__27__21_X: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__27__21_9::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27__21_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21_9__id)); return true;
    default: return false;
    }
}
bool C_S__27__21_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21_9__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__21_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27__21_z::ctor_() {
    RT_FN("S__27__21_z.S__27__21_z");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2875 = 311.0; this->f_S_6_21_Z = rt::touint_d(_v2875); _v2875; });
    ({ rt::Value _v2876 = rt::VS(g::LS[1029]); this->f_S_1i = rt::slot_string(_v2876); _v2876; });
    ({ rt::Value _v2877 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2877); _v2877; });
    ({ rt::Value _v2878 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2878); _v2878; });
    ({ double _v2879 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2879); _v2879; });
    ({ bool _v2880 = true; this->f_S_3_21_9 = _v2880; _v2880; });
}
C_S__27__21_z* C_S__27__21_z::alloc_() {
    C_S__27__21_z* o = rt::make<C_S__27__21_z>();
    return o;
}
rt::Value C_S__27__21_z::mk_(rt::Value* a, int n) {
    C_S__27__21_z* o = alloc_();
    o->C_S__27__21_z::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_z::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__27__21_z::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__27__21_z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__27__21_z::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__27__21_z::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27__21_z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21_z__id)); return true;
    default: return false;
    }
}
bool C_S__27__21_z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21_z__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__27__21_z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__27_h::ctor_() {
    RT_FN("S__27_h.S__27_h");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2881 = 59.0; this->f_S_6_21_Z = rt::touint_d(_v2881); _v2881; });
    ({ rt::Value _v2882 = rt::VS(g::LS[1030]); this->f_S_1i = rt::slot_string(_v2882); _v2882; });
    ({ rt::Value _v2883 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2883); _v2883; });
    ({ rt::Value _v2884 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2884); _v2884; });
    ({ double _v2885 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2885); _v2885; });
    ({ bool _v2886 = true; this->f_S_3_21_9 = _v2886; _v2886; });
}
C_S__27_h* C_S__27_h::alloc_() {
    C_S__27_h* o = rt::make<C_S__27_h>();
    return o;
}
rt::Value C_S__27_h::mk_(rt::Value* a, int n) {
    C_S__27_h* o = alloc_();
    o->C_S__27_h::ctor_();
    return rt::VO(o);
}
bool C_S__27_h::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__27_h::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__27_h::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__27_h::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__27_h::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__27_h::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27_h__id)); return true;
    case NM_ids: out = g::SV.C_S__27_h__ids; return true;
    default: return false;
    }
}
bool C_S__27_h::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27_h__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__27_h__ids = v; return true;
    default: return false;
    }
}
bool C_S__27_h::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__21_4::ctor_() {
    RT_FN("S__2b__21_4.S__2b__21_4");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2887 = 121.0; this->f_S_6_21_Z = rt::touint_d(_v2887); _v2887; });
    ({ rt::Value _v2888 = rt::trv(rt::VS(g::LS[607])); this->f_S_1i = rt::slot_string(_v2888); _v2888; });
    ({ rt::Value _v2889 = rt::trv(rt::VS(g::LS[1032])); this->f_S_7_23_ = rt::slot_string(_v2889); _v2889; });
    ({ rt::Value _v2890 = rt::VS(g::LS[608]); this->f_S__5e__21__23_ = rt::slot_string(_v2890); _v2890; });
    ({ double _v2891 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2891); _v2891; });
}
rt::Value C_S__2b__21_4::m_S__21__21_G() {
    bool l_A__loc1_ = false;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__2b__21_4.S__21__21_G");
    (l_A__loc1_ = false);
    if ((!this->f_S_4_21_K)) {
        (l_A__loc1_ = false);
        {
            std::vector<rt::Value> _lst2892;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst2892);
            for (const rt::Value& _x2893 : _lst2892) {
                l_A__loc2_ = _x2893;
                if ((({ bool _t2900 = ({ bool _t2896 = rt::is_class(l_A__loc2_, C_S__26__21__5f_::CI); _t2896 ? (bool)((!({ rt::Value _o2894 = l_A__loc2_; C_S__60_6* _p2895 = rt::as_ptr<C_S__60_6>(_o2894); _p2895 ? _p2895->f_S__3f__21_6 : rt::T(rt::dget(_o2894, NM_S__3f__21_6)); }))) : _t2896; }); _t2900 ? (bool)((((double)(({ rt::Value _o2898 = (({ rt::Value _t2897 = l_A__loc2_; rt::is_class(_t2897, C_S__26__21__5f_::CI) ? _t2897 : rt::NUL; })); C_S__26__21__5f_* _p2899 = rt::as_ptr<C_S__26__21__5f_>(_o2898); _p2899 ? _p2899->f_S__25_w : rt::toint(rt::dget(_o2898, NM_S__25_w)); }))) > 270.0)) : _t2900; }) && (((double)(({ rt::Value _o2902 = (({ rt::Value _t2901 = l_A__loc2_; rt::is_class(_t2901, C_S__26__21__5f_::CI) ? _t2901 : rt::NUL; })); C_S__26__21__5f_* _p2903 = rt::as_ptr<C_S__26__21__5f_>(_o2902); _p2903 ? _p2903->f_S__25_w : rt::toint(rt::dget(_o2902, NM_S__25_w)); }))) <= 475.0))) {
                    (l_A__loc1_ = true);
                    break;
                }
            }
        }
        if ((!l_A__loc1_)) {
            (void)(({ rt::Value _o2904 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2905 = rt::as_ptr<C_S_8G>(_o2904); _p2905 ? _p2905->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2904, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__2b__21_4::g_S__5d__3b_() {
    RT_FN("S__2b__21_4.S__5d__3b__get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 24.0);
    return false;
}
bool C_S__2b__21_4::g_S__3f__21_a() {
    RT_FN("S__2b__21_4.S__3f__21_a_get");
    return (((double)(C_S_8G::sg_S_8_21_H())) < 16.0);
    return false;
}
C_S__2b__21_4* C_S__2b__21_4::alloc_() {
    C_S__2b__21_4* o = rt::make<C_S__2b__21_4>();
    return o;
}
rt::Value C_S__2b__21_4::mk_(rt::Value* a, int n) {
    C_S__2b__21_4* o = alloc_();
    o->C_S__2b__21_4::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__3f__21_a: out = rt::VB(g_S__3f__21_a()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2b__21_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2b__21_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_a: { rt::Value f = rt::VB(g_S__3f__21_a()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2b__21_4::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    case NM_S__3f__21_a: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2b__21_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_4__id)); return true;
    default: return false;
    }
}
bool C_S__2b__21_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_4__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__21_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__22__25_::ctor_() {
    RT_FN("S__2b__22__25_.S__2b__22__25_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2906 = 316.0; this->f_S_6_21_Z = rt::touint_d(_v2906); _v2906; });
    ({ rt::Value _v2907 = rt::VS(g::LS[1033]); this->f_S_1i = rt::slot_string(_v2907); _v2907; });
    ({ rt::Value _v2908 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2908); _v2908; });
    ({ rt::Value _v2909 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2909); _v2909; });
    ({ double _v2910 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2910); _v2910; });
    ({ bool _v2911 = true; this->f_S_3_21_9 = _v2911; _v2911; });
}
C_S__2b__22__25_* C_S__2b__22__25_::alloc_() {
    C_S__2b__22__25_* o = rt::make<C_S__2b__22__25_>();
    return o;
}
rt::Value C_S__2b__22__25_::mk_(rt::Value* a, int n) {
    C_S__2b__22__25_* o = alloc_();
    o->C_S__2b__22__25_::ctor_();
    return rt::VO(o);
}
bool C_S__2b__22__25_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2b__22__25_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2b__22__25_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2b__22__25_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2b__22__25_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__22__25_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__22__25___id)); return true;
    default: return false;
    }
}
bool C_S__2b__22__25_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__22__25___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__22__25_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__3b_::ctor_() {
    RT_FN("S__2b__3b_.S__2b__3b_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2912 = 203.0; this->f_S_6_21_Z = rt::touint_d(_v2912); _v2912; });
    ({ rt::Value _v2913 = rt::trv(rt::VS(g::LS[490])); this->f_S_1i = rt::slot_string(_v2913); _v2913; });
    ({ rt::Value _v2914 = rt::VS(g::LS[491]); this->f_S__5e__21__23_ = rt::slot_string(_v2914); _v2914; });
    ({ double _v2915 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2915); _v2915; });
}
rt::Value C_S__2b__3b_::m_S__40__22_() {
    RT_FN("S__2b__3b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1034])));
    return rt::NUL;
}
rt::Value C_S__2b__3b_::m_S__21__21_G() {
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__2b__3b_.S__21__21_G");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::NUL);
    if ((!this->f_S_4_21_K)) {
        (l_A__loc2_ = rt::toint_d(0.0));
        (l_A__loc3_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc3_)) < rt::alen(g::SV.C_S_8G__S_0_21_A))) {
            (l_A__loc1_ = rt::arr_at(g::SV.C_S_8G__S_0_21_A, ((double)(l_A__loc3_))));
            if ((({ rt::Value _o2916 = l_A__loc1_; C_S_84* _p2917 = rt::as_ptr<C_S_84>(_o2916); _p2917 ? _p2917->f_S_23 : rt::T(rt::dget(_o2916, NM_S_23)); }) && (((double)(({ rt::Value _o2918 = l_A__loc1_; C_S_84* _p2919 = rt::as_ptr<C_S_84>(_o2918); _p2919 ? _p2919->g_S__60_r() : rt::touint(rt::dget(_o2918, NM_S__60_r)); }))) >= 1.0))) {
                (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
            }
            (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
        }
        if ((((double)(l_A__loc2_)) >= 6.0)) {
            (void)(({ rt::Value _o2920 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2921 = rt::as_ptr<C_S_8G>(_o2920); _p2921 ? _p2921->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2920, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__2b__3b_::g_S__5d__3b_() {
    RT_FN("S__2b__3b_.S__5d__3b__get");
    return true;
    return false;
}
C_S__2b__3b_* C_S__2b__3b_::alloc_() {
    C_S__2b__3b_* o = rt::make<C_S__2b__3b_>();
    return o;
}
rt::Value C_S__2b__3b_::mk_(rt::Value* a, int n) {
    C_S__2b__3b_* o = alloc_();
    o->C_S__2b__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__2b__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2b__3b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2b__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2b__3b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2b__3b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__3b___id)); return true;
    default: return false;
    }
}
bool C_S__2b__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__3b___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__2b_D::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__2b_D::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__2b_D.S__2b_D");
    ({ double _v2922 = 7.0; this->f_S__60_r = rt::toint_d(_v2922); _v2922; });
    ({ double _v2923 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v2923); _v2923; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2924 = 20.0; this->f_S_6_21_Z = rt::touint_d(_v2924); _v2924; });
}
C_S__2b_D* C_S__2b_D::alloc_() {
    C_S__2b_D* o = rt::make<C_S__2b_D>();
    return o;
}
rt::Value C_S__2b_D::mk_(rt::Value* a, int n) {
    C_S__2b_D* o = alloc_();
    o->C_S__2b_D::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__2b_D::dctor_1()));
    return rt::VO(o);
}
bool C_S__2b_D::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__2b_D::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__2b_D::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__2b_D::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__2b_D::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b_D::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b_D__id)); return true;
    case NM_ids: out = g::SV.C_S__2b_D__ids; return true;
    default: return false;
    }
}
bool C_S__2b_D::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b_D__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2b_D__ids = v; return true;
    default: return false;
    }
}
bool C_S__2b_D::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b_R::ctor_() {
    RT_FN("S__2b_R.S__2b_R");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2925 = 180.0; this->f_S_6_21_Z = rt::touint_d(_v2925); _v2925; });
    ({ rt::Value _v2926 = rt::trv(rt::VS(g::LS[497])); this->f_S_1i = rt::slot_string(_v2926); _v2926; });
    ({ rt::Value _v2927 = rt::trv(rt::VS(g::LS[1036])); this->f_S_7_23_ = rt::slot_string(_v2927); _v2927; });
    ({ rt::Value _v2928 = rt::VS(g::LS[498]); this->f_S__5e__21__23_ = rt::slot_string(_v2928); _v2928; });
    ({ double _v2929 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2929); _v2929; });
}
rt::Value C_S__2b_R::m_S__21__21_G() {
    RT_FN("S__2b_R.S__21__21_G");
    if (((!this->f_S_4_21_K) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(10800.0)))) {
        (void)(({ rt::Value _o2930 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2931 = rt::as_ptr<C_S_8G>(_o2930); _p2931 ? _p2931->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2930, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__2b_R::g_S__5d__3b_() {
    RT_FN("S__2b_R.S__5d__3b__get");
    return true;
    return false;
}
C_S__2b_R* C_S__2b_R::alloc_() {
    C_S__2b_R* o = rt::make<C_S__2b_R>();
    return o;
}
rt::Value C_S__2b_R::mk_(rt::Value* a, int n) {
    C_S__2b_R* o = alloc_();
    o->C_S__2b_R::ctor_();
    return rt::VO(o);
}
bool C_S__2b_R::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2b_R::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2b_R::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2b_R::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2b_R::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b_R::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b_R__id)); return true;
    default: return false;
    }
}
bool C_S__2b_R::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b_R__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b_R::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b_e::ctor_() {
    RT_FN("S__2b_e.S__2b_e");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2932 = 63.0; this->f_S_6_21_Z = rt::touint_d(_v2932); _v2932; });
    ({ rt::Value _v2933 = rt::trv(rt::VS(g::LS[708])); this->f_S_1i = rt::slot_string(_v2933); _v2933; });
    ({ rt::Value _v2934 = rt::trv(rt::VS(g::LS[1037])); this->f_S_7_23_ = rt::slot_string(_v2934); _v2934; });
    ({ rt::Value _v2935 = rt::VS(g::LS[709]); this->f_S__5e__21__23_ = rt::slot_string(_v2935); _v2935; });
    ({ double _v2936 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2936); _v2936; });
}
rt::Value C_S__2b_e::m_S__21__21_G() {
    RT_FN("S__2b_e.S__21__21_G");
    if ((({ bool _t2938 = (!this->f_S_4_21_K); _t2938 ? (bool)((({ bool _t2937 = (((double)(g::SV.C_S_8G__S__23_3)) == 9.0); _t2937 ? _t2937 : (bool)(C_S_8G::sm_S_7d(g::SV.C_S_1_22__3f___id)); }))) : _t2938; }) && rt::ge(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(4321.0)))) {
        (void)(({ rt::Value _o2939 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2940 = rt::as_ptr<C_S_8G>(_o2939); _p2940 ? _p2940->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2939, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__2b_e::g_S__5d__3b_() {
    RT_FN("S__2b_e.S__5d__3b__get");
    return true;
    return false;
}
C_S__2b_e* C_S__2b_e::alloc_() {
    C_S__2b_e* o = rt::make<C_S__2b_e>();
    return o;
}
rt::Value C_S__2b_e::mk_(rt::Value* a, int n) {
    C_S__2b_e* o = alloc_();
    o->C_S__2b_e::ctor_();
    return rt::VO(o);
}
bool C_S__2b_e::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2b_e::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2b_e::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2b_e::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2b_e::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b_e::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b_e__id)); return true;
    case NM_ids: out = g::SV.C_S__2b_e__ids; return true;
    default: return false;
    }
}
bool C_S__2b_e::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b_e__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2b_e__ids = v; return true;
    default: return false;
    }
}
bool C_S__2b_e::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__21__3b_::ctor_() {
    RT_FN("S__2c__21__3b_.S__2c__21__3b_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2941 = 2.0; this->f_S_6_21_Z = rt::touint_d(_v2941); _v2941; });
    ({ rt::Value _v2942 = rt::VS(g::LS[1039]); this->f_S_1i = rt::slot_string(_v2942); _v2942; });
    ({ rt::Value _v2943 = rt::VS(g::LS[113]); this->f_S_7_23_ = rt::slot_string(_v2943); _v2943; });
    ({ rt::Value _v2944 = rt::VS(g::LS[113]); this->f_S__5e__21__23_ = rt::slot_string(_v2944); _v2944; });
    ({ double _v2945 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v2945); _v2945; });
    ({ bool _v2946 = true; this->f_S_3_21_9 = _v2946; _v2946; });
}
C_S__2c__21__3b_* C_S__2c__21__3b_::alloc_() {
    C_S__2c__21__3b_* o = rt::make<C_S__2c__21__3b_>();
    return o;
}
rt::Value C_S__2c__21__3b_::mk_(rt::Value* a, int n) {
    C_S__2c__21__3b_* o = alloc_();
    o->C_S__2c__21__3b_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21__3b_::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2c__21__3b_::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2c__21__3b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2c__21__3b_::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2c__21__3b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__21__3b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21__3b___id)); return true;
    case NM_ids: out = g::SV.C_S__2c__21__3b___ids; return true;
    default: return false;
    }
}
bool C_S__2c__21__3b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21__3b___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c__21__3b___ids = v; return true;
    default: return false;
    }
}
bool C_S__2c__21__3b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c__21_K::ctor_() {
    RT_FN("S__2c__21_K.S__2c__21_K");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2947 = 66.0; this->f_S_6_21_Z = rt::touint_d(_v2947); _v2947; });
    ({ rt::Value _v2948 = rt::trv(rt::VS(g::LS[704])); this->f_S_1i = rt::slot_string(_v2948); _v2948; });
    ({ rt::Value _v2949 = rt::trv(rt::VS(g::LS[1041])); this->f_S_7_23_ = rt::slot_string(_v2949); _v2949; });
    ({ rt::Value _v2950 = rt::VS(g::LS[705]); this->f_S__5e__21__23_ = rt::slot_string(_v2950); _v2950; });
    ({ double _v2951 = 2.0; this->f_S__2c__21_B = rt::toint_d(_v2951); _v2951; });
}
C_S__2c__21_K* C_S__2c__21_K::alloc_() {
    C_S__2c__21_K* o = rt::make<C_S__2c__21_K>();
    return o;
}
rt::Value C_S__2c__21_K::mk_(rt::Value* a, int n) {
    C_S__2c__21_K* o = alloc_();
    o->C_S__2c__21_K::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21_K::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2c__21_K::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2c__21_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2c__21_K::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2c__21_K::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__21_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21_K__id)); return true;
    case NM_ids: out = g::SV.C_S__2c__21_K__ids; return true;
    default: return false;
    }
}
bool C_S__2c__21_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21_K__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c__21_K__ids = v; return true;
    default: return false;
    }
}
bool C_S__2c__21_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__2c__21__5f_::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__2c__21__5f_::ctor_(double p0, rt::Value p1, rt::Value p2) {
    double l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("S__2c__21__5f_.S__2c__21__5f_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2952 = 51.0; this->f_S_6_21_Z = rt::touint_d(_v2952); _v2952; });
    ({ double _v2953 = l_param1; this->f_S_5w = _v2953; _v2953; });
    ({ rt::Value _v2954 = l_param2; this->f_S_1i = rt::slot_string(_v2954); _v2954; });
    ({ rt::Value _v2955 = l_param3; this->f_S__5e__21__23_ = rt::slot_string(_v2955); _v2955; });
    ({ double _v2956 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v2956); _v2956; });
    ({ rt::Value _v2957 = rt::VS(g::LS[1043]); this->f_S__3f__21__3d_ = rt::slot_string(_v2957); _v2957; });
}
rt::Value C_S__2c__21__5f_::m_S__21__21_G() {
    RT_FN("S__2c__21__5f_.S__21__21_G");
    if (((!this->f_S_4_21_K) && (C_S__26_c::sm_S__21__2d_(true, true) >= this->f_S_5w))) {
        (void)(({ rt::Value _o2958 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2959 = rt::as_ptr<C_S_8G>(_o2958); _p2959 ? _p2959->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2958, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S__2c__21__5f_::m_S_8_5b_() {
    RT_FN("S__2c__21__5f_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(C_S__26_c::sm_S__21__2d_(true, true), this->f_S_5w, true));
    return rt::NUL;
}
rt::Value C_S__2c__21__5f_::m_S__40__22_() {
    RT_FN("S__2c__21__5f_.S__40__22_");
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[1044]), rt::VS(g::LS[1045]), rt::V(this->f_S_5w), C_S__26_c::sm_S_8_21_Z(this->f_S_5w, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S__2c__21__5f_* C_S__2c__21__5f_::alloc_() {
    C_S__2c__21__5f_* o = rt::make<C_S__2c__21__5f_>();
    return o;
}
rt::Value C_S__2c__21__5f_::mk_(rt::Value* a, int n) {
    C_S__2c__21__5f_* o = alloc_();
    o->C_S__2c__21__5f_::ctor_(rt::arg<double>(a, n, 0, NAN), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_S__2c__21__5f_::dctor_2()));
    return rt::VO(o);
}
bool C_S__2c__21__5f_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V(f_S_5w); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2c__21__5f_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::tonum(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2c__21__5f_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V(f_S_5w); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2c__21__5f_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2c__21__5f_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c__21__5f_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21__5f___id)); return true;
    case NM_ids: out = g::SV.C_S__2c__21__5f___ids; return true;
    default: return false;
    }
}
bool C_S__2c__21__5f_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21__5f___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c__21__5f___ids = v; return true;
    default: return false;
    }
}
bool C_S__2c__21__5f_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c_N::ctor_() {
    RT_FN("S__2c_N.S__2c_N");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2960 = 75.0; this->f_S_6_21_Z = rt::touint_d(_v2960); _v2960; });
    ({ rt::Value _v2961 = rt::trv(rt::VS(g::LS[656])); this->f_S_1i = rt::slot_string(_v2961); _v2961; });
    ({ rt::Value _v2962 = rt::trv(rt::VS(g::LS[1047])); this->f_S_7_23_ = rt::slot_string(_v2962); _v2962; });
    ({ rt::Value _v2963 = rt::VS(g::LS[657]); this->f_S__5e__21__23_ = rt::slot_string(_v2963); _v2963; });
    ({ double _v2964 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2964); _v2964; });
}
rt::Value C_S__2c_N::m_S__21__21_G() {
    RT_FN("S__2c_N.S__21__21_G");
    if (((!this->f_S_4_21_K) && (((double)(C_S_8G::sm_S__3f__21_2(rt::VS(g::LS[1048])))) == 6.0))) {
        (void)(({ rt::Value _o2965 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2966 = rt::as_ptr<C_S_8G>(_o2965); _p2966 ? _p2966->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2965, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__2c_N::g_S__5d__3b_() {
    RT_FN("S__2c_N.S__5d__3b__get");
    return true;
    return false;
}
C_S__2c_N* C_S__2c_N::alloc_() {
    C_S__2c_N* o = rt::make<C_S__2c_N>();
    return o;
}
rt::Value C_S__2c_N::mk_(rt::Value* a, int n) {
    C_S__2c_N* o = alloc_();
    o->C_S__2c_N::ctor_();
    return rt::VO(o);
}
bool C_S__2c_N::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2c_N::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2c_N::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2c_N::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2c_N::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c_N::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c_N__id)); return true;
    case NM_ids: out = g::SV.C_S__2c_N__ids; return true;
    default: return false;
    }
}
bool C_S__2c_N::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c_N__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c_N__ids = v; return true;
    default: return false;
    }
}
bool C_S__2c_N::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c_p::ctor_() {
    RT_FN("S__2c_p.S__2c_p");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2967 = 64.0; this->f_S_6_21_Z = rt::touint_d(_v2967); _v2967; });
    ({ rt::Value _v2968 = rt::trv(rt::VS(g::LS[609])); this->f_S_1i = rt::slot_string(_v2968); _v2968; });
    ({ rt::Value _v2969 = rt::VS(g::LS[610]); this->f_S__5e__21__23_ = rt::slot_string(_v2969); _v2969; });
    ({ double _v2970 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2970); _v2970; });
}
rt::Value C_S__2c_p::m_S__40__22_() {
    RT_FN("S__2c_p.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1050]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2c_p::m_S__21__21_G() {
    bool l_A__loc1_ = false;
    int32_t l_A__loc2_ = 0;
    RT_FN("S__2c_p.S__21__21_G");
    (l_A__loc1_ = false);
    (l_A__loc2_ = rt::toint_d(0.0));
    if (((!this->f_S_4_21_K) && (((double)(C_S_8G::sg_S_8_21_H())) >= 7.0))) {
        (l_A__loc1_ = false);
        (l_A__loc2_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc2_)) <= 10.0)) {
            if ((C_S__26_c::sm_S__23_L(l_A__loc2_) < 100.0)) {
                (l_A__loc1_ = true);
                break;
            }
            (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
        }
        if ((!l_A__loc1_)) {
            (void)(({ rt::Value _o2971 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2972 = rt::as_ptr<C_S_8G>(_o2971); _p2972 ? _p2972->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2971, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__2c_p::g_S__5d__3b_() {
    RT_FN("S__2c_p.S__5d__3b__get");
    return true;
    return false;
}
C_S__2c_p* C_S__2c_p::alloc_() {
    C_S__2c_p* o = rt::make<C_S__2c_p>();
    return o;
}
rt::Value C_S__2c_p::mk_(rt::Value* a, int n) {
    C_S__2c_p* o = alloc_();
    o->C_S__2c_p::ctor_();
    return rt::VO(o);
}
bool C_S__2c_p::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2c_p::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2c_p::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2c_p::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2c_p::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c_p::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c_p__id)); return true;
    case NM_ids: out = g::SV.C_S__2c_p__ids; return true;
    default: return false;
    }
}
bool C_S__2c_p::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c_p__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c_p__ids = v; return true;
    default: return false;
    }
}
bool C_S__2c_p::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c_t::ctor_() {
    RT_FN("S__2c_t.S__2c_t");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2973 = 114.0; this->f_S_6_21_Z = rt::touint_d(_v2973); _v2973; });
    ({ rt::Value _v2974 = rt::trv(rt::VS(g::LS[601])); this->f_S_1i = rt::slot_string(_v2974); _v2974; });
    ({ rt::Value _v2975 = rt::VS(g::LS[602]); this->f_S__5e__21__23_ = rt::slot_string(_v2975); _v2975; });
    ({ double _v2976 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2976); _v2976; });
}
rt::Value C_S__2c_t::m_S__40__22_() {
    RT_FN("S__2c_t.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1052]), C_S__26_c::sm_S_8_21_Z(1500000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2c_t::m_S__21__21_G() {
    RT_FN("S__2c_t.S__21__21_G");
    if ((({ bool _t2980 = ({ bool _t2979 = ({ bool _t2978 = ({ bool _t2977 = (!this->f_S_4_21_K); _t2977 ? (bool)(rt::le(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 1.0), rt::V(300.0))) : _t2977; }); _t2978 ? (bool)((C_S__26_c::sm_S__40__21__5b_(true, false, true) >= 1500000.0)) : _t2978; }); _t2979 ? (bool)((!C_S_8G::sm_S_7d(g::SV.C_S_5_26___id))) : _t2979; }); _t2980 ? (bool)(rt::eq(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 15.0), rt::V(0.0))) : _t2980; }) && rt::eq(rt::arr_at(g::SV.C_S_8G__S_5_21_V, 35.0), rt::V(0.0)))) {
        (void)(({ rt::Value _o2981 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2982 = rt::as_ptr<C_S_8G>(_o2981); _p2982 ? _p2982->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2981, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__2c_t::g_S__5d__3b_() {
    RT_FN("S__2c_t.S__5d__3b__get");
    return true;
    return false;
}
C_S__2c_t* C_S__2c_t::alloc_() {
    C_S__2c_t* o = rt::make<C_S__2c_t>();
    return o;
}
rt::Value C_S__2c_t::mk_(rt::Value* a, int n) {
    C_S__2c_t* o = alloc_();
    o->C_S__2c_t::ctor_();
    return rt::VO(o);
}
bool C_S__2c_t::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2c_t::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2c_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2c_t::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2c_t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c_t__id)); return true;
    default: return false;
    }
}
bool C_S__2c_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c_t__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__2c_y::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__2c_y::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__2c_y.S__2c_y");
    ({ double _v2983 = 4.0; this->f_S__60_r = rt::toint_d(_v2983); _v2983; });
    ({ double _v2984 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v2984); _v2984; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2985 = 21.0; this->f_S_6_21_Z = rt::touint_d(_v2985); _v2985; });
}
C_S__2c_y* C_S__2c_y::alloc_() {
    C_S__2c_y* o = rt::make<C_S__2c_y>();
    return o;
}
rt::Value C_S__2c_y::mk_(rt::Value* a, int n) {
    C_S__2c_y* o = alloc_();
    o->C_S__2c_y::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__2c_y::dctor_1()));
    return rt::VO(o);
}
bool C_S__2c_y::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__2c_y::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__2c_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__2c_y::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__2c_y::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c_y__id)); return true;
    case NM_ids: out = g::SV.C_S__2c_y__ids; return true;
    default: return false;
    }
}
bool C_S__2c_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c_y__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2c_y__ids = v; return true;
    default: return false;
    }
}
bool C_S__2c_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__21__3d_::ctor_() {
    RT_FN("S__2d__21__3d_.S__2d__21__3d_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2986 = 199.0; this->f_S_6_21_Z = rt::touint_d(_v2986); _v2986; });
    ({ rt::Value _v2987 = rt::trv(rt::VS(g::LS[685])); this->f_S_1i = rt::slot_string(_v2987); _v2987; });
    ({ rt::Value _v2988 = rt::VS(g::LS[686]); this->f_S__5e__21__23_ = rt::slot_string(_v2988); _v2988; });
    ({ double _v2989 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v2989); _v2989; });
}
rt::Value C_S__2d__21__3d_::m_S__40__22_() {
    RT_FN("S__2d__21__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[1054]), C_S__26_c::sm_S_6_21_T(1000000000000000.0, C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
rt::Value C_S__2d__21__3d_::m_S__21__21_G() {
    RT_FN("S__2d__21__3d_.S__21__21_G");
    if (((!this->f_S_4_21_K) && ((rt::m_pow(C_S__23__21__21_::sm_S__2c_d(), rt::m_pow(10.0, ((double)(C_S_8G::sg_S__2c_P())))) * 100.0) >= 1000000000000000.0))) {
        (void)(({ rt::Value _o2990 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p2991 = rt::as_ptr<C_S_8G>(_o2990); _p2991 ? _p2991->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o2990, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__2d__21__3d_::g_S__5d__3b_() {
    RT_FN("S__2d__21__3d_.S__5d__3b__get");
    return true;
    return false;
}
C_S__2d__21__3d_* C_S__2d__21__3d_::alloc_() {
    C_S__2d__21__3d_* o = rt::make<C_S__2d__21__3d_>();
    return o;
}
rt::Value C_S__2d__21__3d_::mk_(rt::Value* a, int n) {
    C_S__2d__21__3d_* o = alloc_();
    o->C_S__2d__21__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2d__21__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2d__21__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2d__21__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2d__21__3d_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__21__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21__3d___id)); return true;
    case NM_S_4_21_9: out = rt::V(g::SV.C_S__2d__21__3d___S_4_21_9); return true;
    default: return false;
    }
}
bool C_S__2d__21__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21__3d___id = rt::touint(v); return true;
    case NM_S_4_21_9: g::SV.C_S__2d__21__3d___S_4_21_9 = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2d__21__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__2d__21_H::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__2d__21_H::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__2d__21_H.S__2d__21_H");
    ({ double _v2992 = 5.0; this->f_S__60_r = rt::toint_d(_v2992); _v2992; });
    ({ double _v2993 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v2993); _v2993; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2994 = 33.0; this->f_S_6_21_Z = rt::touint_d(_v2994); _v2994; });
}
C_S__2d__21_H* C_S__2d__21_H::alloc_() {
    C_S__2d__21_H* o = rt::make<C_S__2d__21_H>();
    return o;
}
rt::Value C_S__2d__21_H::mk_(rt::Value* a, int n) {
    C_S__2d__21_H* o = alloc_();
    o->C_S__2d__21_H::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__2d__21_H::dctor_1()));
    return rt::VO(o);
}
bool C_S__2d__21_H::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__2d__21_H::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__2d__21_H::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__2d__21_H::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__2d__21_H::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__21_H::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_H__id)); return true;
    case NM_ids: out = g::SV.C_S__2d__21_H__ids; return true;
    default: return false;
    }
}
bool C_S__2d__21_H::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_H__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2d__21_H__ids = v; return true;
    default: return false;
    }
}
bool C_S__2d__21_H::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S__2d__21_V::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S__2d__21_V::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S__2d__21_V.S__2d__21_V");
    ({ double _v2995 = 6.0; this->f_S__60_r = rt::toint_d(_v2995); _v2995; });
    ({ double _v2996 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v2996); _v2996; });
    (void)((this->C_S__26__21_R::ctor_(l_param1, l_param2), rt::NUL));
    ({ double _v2997 = 14.0; this->f_S_6_21_Z = rt::touint_d(_v2997); _v2997; });
}
C_S__2d__21_V* C_S__2d__21_V::alloc_() {
    C_S__2d__21_V* o = rt::make<C_S__2d__21_V>();
    return o;
}
rt::Value C_S__2d__21_V::mk_(rt::Value* a, int n) {
    C_S__2d__21_V* o = alloc_();
    o->C_S__2d__21_V::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S__2d__21_V::dctor_1()));
    return rt::VO(o);
}
bool C_S__2d__21_V::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dget(id, out);
}
bool C_S__2d__21_V::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dset(id, v);
}
bool C_S__2d__21_V::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dcall(id, a, n, out);
}
bool C_S__2d__21_V::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return C_S__26__21_R::dmeth(id);
}
bool C_S__2d__21_V::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__21_V::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_V__id)); return true;
    case NM_ids: out = g::SV.C_S__2d__21_V__ids; return true;
    default: return false;
    }
}
bool C_S__2d__21_V::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_V__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2d__21_V__ids = v; return true;
    default: return false;
    }
}
bool C_S__2d__21_V::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__24_::ctor_() {
    RT_FN("S__2d__24_.S__2d__24_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v2998 = 231.0; this->f_S_6_21_Z = rt::touint_d(_v2998); _v2998; });
    ({ rt::Value _v2999 = rt::trv(rt::VS(g::LS[664])); this->f_S_1i = rt::slot_string(_v2999); _v2999; });
    ({ rt::Value _v3000 = rt::trv(rt::VS(g::LS[1057])); this->f_S_7_23_ = rt::slot_string(_v3000); _v3000; });
    ({ rt::Value _v3001 = rt::VS(g::LS[665]); this->f_S__5e__21__23_ = rt::slot_string(_v3001); _v3001; });
    ({ double _v3002 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3002); _v3002; });
}
rt::Value C_S__2d__24_::m_S__21__21_G() {
    RT_FN("S__2d__24_.S__21__21_G");
    if (((!this->f_S_4_21_K) && ((C_S__23__21__21_::sm_S_57() * 30.0) >= C_S__23__21__21_::sm_S_2_21__26_(C_S__23__21__21_::dsm_S_2_21__26__0())))) {
        (void)(({ rt::Value _o3003 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3004 = rt::as_ptr<C_S_8G>(_o3003); _p3004 ? _p3004->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3003, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__2d__24_::g_S__5d__3b_() {
    RT_FN("S__2d__24_.S__5d__3b__get");
    return true;
    return false;
}
C_S__2d__24_* C_S__2d__24_::alloc_() {
    C_S__2d__24_* o = rt::make<C_S__2d__24_>();
    return o;
}
rt::Value C_S__2d__24_::mk_(rt::Value* a, int n) {
    C_S__2d__24_* o = alloc_();
    o->C_S__2d__24_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__24_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2d__24_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2d__24_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2d__24_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2d__24_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__24_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__24___id)); return true;
    default: return false;
    }
}
bool C_S__2d__24_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__24___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__24_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d__22_3::ctor_() {
    RT_FN("S__2d__22_3.S__2d__22_3");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3005 = 345.0; this->f_S_6_21_Z = rt::touint_d(_v3005); _v3005; });
    ({ rt::Value _v3006 = rt::trv(rt::VS(g::LS[547])); this->f_S_1i = rt::slot_string(_v3006); _v3006; });
    ({ rt::Value _v3007 = rt::trv(rt::VS(g::LS[1058])); this->f_S_7_23_ = rt::slot_string(_v3007); _v3007; });
    ({ rt::Value _v3008 = rt::VS(g::LS[548]); this->f_S__5e__21__23_ = rt::slot_string(_v3008); _v3008; });
    ({ double _v3009 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3009); _v3009; });
}
rt::Value C_S__2d__22_3::m_S__21__21_G() {
    RT_FN("S__2d__22_3.S__21__21_G");
    if ((({ bool _t3010 = (!this->f_S_4_21_K); _t3010 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t3010; }) && C_S__2d__22_3::sm_S__2b__22_8(rt::toint_d(15.0)))) {
        (void)(({ rt::Value _o3011 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3012 = rt::as_ptr<C_S_8G>(_o3011); _p3012 ? _p3012->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3011, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
bool C_S__2d__22_3::g_S__5d__3b_() {
    RT_FN("S__2d__22_3.S__5d__3b__get");
    return true;
    return false;
}
bool C_S__2d__22_3::sm_S__2b__22_8(int32_t p0) {
    int32_t l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    rt::Value l_A__loc4_ = rt::NUL;
    int32_t l_A__loc5_ = 0;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("S__2d__22_3.S__2b__22_8");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::arr_lit({}));
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc2_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc2_)) <= 15.0)) {
        (void)(rt::dcallv(l_A__loc4_, rt::N_push, rt::VB(false)));
        (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    }
    {
        std::vector<rt::Value> _lst3013;
        rt::each(g::SV.C_S_8G__S__2d__21_4, _lst3013);
        for (const rt::Value& _x3014 : _lst3013) {
            l_A__loc3_ = _x3014;
            if ((({ bool _t3028 = ({ bool _t3022 = ({ bool _t3019 = ({ rt::Value _o3015 = l_A__loc3_; C_S__60_6* _p3016 = rt::as_ptr<C_S__60_6>(_o3015); _p3016 ? _p3016->f_S__3c__21_7 : rt::T(rt::dget(_o3015, NM_S__3c__21_7)); }); _t3019 ? (bool)((((double)(({ rt::Value _o3017 = l_A__loc3_; C_S__60_6* _p3018 = rt::as_ptr<C_S__60_6>(_o3017); _p3018 ? _p3018->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3017, NM_S__2d__21__5e_)); }))) <= 15.0)) : _t3019; }); _t3022 ? (bool)((!(((double)(({ rt::Value _o3020 = l_A__loc3_; C_S__60_6* _p3021 = rt::as_ptr<C_S__60_6>(_o3020); _p3021 ? _p3021->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3020, NM_S__2d__21__5e_)); }))) == 11.0))) : _t3022; }); _t3028 ? (bool)((({ bool _t3027 = ({ rt::Value _o3023 = l_A__loc3_; C_S__60_6* _p3024 = rt::as_ptr<C_S__60_6>(_o3023); _p3024 ? _p3024->f_S__3c__60_ : rt::T(rt::dget(_o3023, NM_S__3c__60_)); }); _t3027 ? _t3027 : (bool)(({ rt::Value _o3025 = l_A__loc3_; C_S__60_6* _p3026 = rt::as_ptr<C_S__60_6>(_o3025); _p3026 ? _p3026->f_S__21__21_n : rt::T(rt::dget(_o3025, NM_S__21__21_n)); })); }))) : _t3028; }) && (!rt::T(rt::arr_at(l_A__loc4_, ((double)(({ rt::Value _o3029 = l_A__loc3_; C_S__60_6* _p3030 = rt::as_ptr<C_S__60_6>(_o3029); _p3030 ? _p3030->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3029, NM_S__2d__21__5e_)); })))))))) {
                ({ rt::Value _v3031 = rt::VB(true); rt::idx_set(l_A__loc4_, rt::V((double)(({ rt::Value _o3032 = l_A__loc3_; C_S__60_6* _p3033 = rt::as_ptr<C_S__60_6>(_o3032); _p3033 ? _p3033->f_S__2d__21__5e_ : rt::toint(rt::dget(_o3032, NM_S__2d__21__5e_)); }))), _v3031); });
                (l_A__loc5_ = rt::toint_d((((double)(l_A__loc5_)) + 1.0)));
            }
        }
    }
    return (((double)(l_A__loc5_)) >= ((double)(l_param1)));
    return false;
}
C_S__2d__22_3* C_S__2d__22_3::alloc_() {
    C_S__2d__22_3* o = rt::make<C_S__2d__22_3>();
    return o;
}
rt::Value C_S__2d__22_3::mk_(rt::Value* a, int n) {
    C_S__2d__22_3* o = alloc_();
    o->C_S__2d__22_3::ctor_();
    return rt::VO(o);
}
bool C_S__2d__22_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2d__22_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2d__22_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2d__22_3::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2d__22_3::smeth_(int id) {
    switch (id) {
    case NM_S__2b__22_8: return true;
    default: return false;
    }
}
bool C_S__2d__22_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__22_3__id)); return true;
    case NM_S__2b__22_8: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__22_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__22_3__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__22_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__22_8: out = rt::VB(sm_S__2b__22_8(rt::arg<int32_t>(a, n, 0, 0))); return true;
    default: return false;
    }
}
void C_S__2d_f::ctor_() {
    RT_FN("S__2d_f.S__2d_f");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3034 = 72.0; this->f_S_6_21_Z = rt::touint_d(_v3034); _v3034; });
    ({ rt::Value _v3035 = rt::trv(rt::VS(g::LS[690])); this->f_S_1i = rt::slot_string(_v3035); _v3035; });
    ({ rt::Value _v3036 = rt::trv(rt::VS(g::LS[1059])); this->f_S_7_23_ = rt::slot_string(_v3036); _v3036; });
    ({ rt::Value _v3037 = rt::VS(g::LS[691]); this->f_S__5e__21__23_ = rt::slot_string(_v3037); _v3037; });
    ({ double _v3038 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3038); _v3038; });
}
rt::Value C_S__2d_f::m_S__21__21_G() {
    bool l_A__loc1_ = false;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("S__2d_f.S__21__21_G");
    (l_A__loc1_ = false);
    if ((!this->f_S_4_21_K)) {
        (l_A__loc1_ = false);
        {
            std::vector<rt::Value> _lst3039;
            rt::each(g::SV.C_S_8G__S__2d__21_4, _lst3039);
            for (const rt::Value& _x3040 : _lst3039) {
                l_A__loc2_ = _x3040;
                if (((!({ rt::Value _o3041 = l_A__loc2_; C_S__60_6* _p3042 = rt::as_ptr<C_S__60_6>(_o3041); _p3042 ? _p3042->f_S__3c__21_7 : rt::T(rt::dget(_o3041, NM_S__3c__21_7)); })) && (({ bool _t3056 = ({ bool _t3053 = ({ bool _t3050 = ({ bool _t3047 = (((double)(({ rt::Value _o3043 = l_A__loc2_; C_S__60_6* _p3044 = rt::as_ptr<C_S__60_6>(_o3043); _p3044 ? _p3044->f_id : rt::touint(rt::dget(_o3043, NM_id)); }))) == ((double)(g::SV.C_S_1K__id))); _t3047 ? _t3047 : (bool)((((double)(({ rt::Value _o3045 = l_A__loc2_; C_S__60_6* _p3046 = rt::as_ptr<C_S__60_6>(_o3045); _p3046 ? _p3046->f_id : rt::touint(rt::dget(_o3045, NM_id)); }))) == ((double)(g::SV.C_S_3_21_2__id)))); }); _t3050 ? _t3050 : (bool)((((double)(({ rt::Value _o3048 = l_A__loc2_; C_S__60_6* _p3049 = rt::as_ptr<C_S__60_6>(_o3048); _p3049 ? _p3049->f_id : rt::touint(rt::dget(_o3048, NM_id)); }))) == ((double)(g::SV.C_S__23__27___id)))); }); _t3053 ? _t3053 : (bool)((((double)(({ rt::Value _o3051 = l_A__loc2_; C_S__60_6* _p3052 = rt::as_ptr<C_S__60_6>(_o3051); _p3052 ? _p3052->f_id : rt::touint(rt::dget(_o3051, NM_id)); }))) == ((double)(g::SV.C_S__26__21_4__id)))); }); _t3056 ? _t3056 : (bool)((((double)(({ rt::Value _o3054 = l_A__loc2_; C_S__60_6* _p3055 = rt::as_ptr<C_S__60_6>(_o3054); _p3055 ? _p3055->f_id : rt::touint(rt::dget(_o3054, NM_id)); }))) == ((double)(g::SV.C_S__5d_y__id)))); }) || (((double)(({ rt::Value _o3057 = l_A__loc2_; C_S__60_6* _p3058 = rt::as_ptr<C_S__60_6>(_o3057); _p3058 ? _p3058->f_id : rt::touint(rt::dget(_o3057, NM_id)); }))) == ((double)(g::SV.C_S__20__21__3c___id)))))) {
                    (l_A__loc1_ = true);
                    break;
                }
            }
        }
        if ((!l_A__loc1_)) {
            (void)(({ rt::Value _o3059 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3060 = rt::as_ptr<C_S_8G>(_o3059); _p3060 ? _p3060->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3059, NM_S_3_21__20_, rt::VO(this)); }));
        }
    }
    return rt::NUL;
}
bool C_S__2d_f::g_S__5d__3b_() {
    RT_FN("S__2d_f.S__5d__3b__get");
    return true;
    return false;
}
C_S__2d_f* C_S__2d_f::alloc_() {
    C_S__2d_f* o = rt::make<C_S__2d_f>();
    return o;
}
rt::Value C_S__2d_f::mk_(rt::Value* a, int n) {
    C_S__2d_f* o = alloc_();
    o->C_S__2d_f::ctor_();
    return rt::VO(o);
}
bool C_S__2d_f::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S__2d_f::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S__2d_f::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S__2d_f::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S__2d_f::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d_f::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d_f__id)); return true;
    case NM_ids: out = g::SV.C_S__2d_f__ids; return true;
    default: return false;
    }
}
bool C_S__2d_f::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d_f__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2d_f__ids = v; return true;
    default: return false;
    }
}
bool C_S__2d_f::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_21_3::ctor_() {
    RT_FN("S_0_21_3.S_0_21_3");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3061 = 106.0; this->f_S_6_21_Z = rt::touint_d(_v3061); _v3061; });
    ({ rt::Value _v3062 = rt::trv(rt::VS(g::LS[510])); this->f_S_1i = rt::slot_string(_v3062); _v3062; });
    ({ rt::Value _v3063 = rt::trv(rt::VS(g::LS[1061])); this->f_S_7_23_ = rt::slot_string(_v3063); _v3063; });
    ({ rt::Value _v3064 = rt::VS(g::LS[511]); this->f_S__5e__21__23_ = rt::slot_string(_v3064); _v3064; });
    ({ double _v3065 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v3065); _v3065; });
}
bool C_S_0_21_3::g_S__5d__3b_() {
    RT_FN("S_0_21_3.S__5d__3b__get");
    return true;
    return false;
}
C_S_0_21_3* C_S_0_21_3::alloc_() {
    C_S_0_21_3* o = rt::make<C_S_0_21_3>();
    return o;
}
rt::Value C_S_0_21_3::mk_(rt::Value* a, int n) {
    C_S_0_21_3* o = alloc_();
    o->C_S_0_21_3::ctor_();
    return rt::VO(o);
}
bool C_S_0_21_3::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: out = rt::VB(g_S__5d__3b_()); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_0_21_3::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_0_21_3::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5d__3b_: { rt::Value f = rt::VB(g_S__5d__3b_()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_0_21_3::dmeth(int id) {
    switch (id) {
    case NM_S__5d__3b_: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_0_21_3::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_21_3::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21_3__id)); return true;
    case NM_ids: out = g::SV.C_S_0_21_3__ids; return true;
    default: return false;
    }
}
bool C_S_0_21_3::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21_3__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_0_21_3__ids = v; return true;
    default: return false;
    }
}
bool C_S_0_21_3::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_S_0_21__60_::dctor_1() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_S_0_21__60_::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("S_0_21__60_.S_0_21__60_");
    (void)((this->C_S__23__21__60_::ctor_(), rt::NUL));
    ({ double _v3066 = 170.0; this->f_S_6_21_Z = rt::touint_d(_v3066); _v3066; });
    ({ int32_t _v3067 = l_param1; this->f_S_5w = _v3067; _v3067; });
    ({ rt::Value _v3068 = rt::tr_nv(rt::VS(g::LS[1063]), rt::VS(g::LS[1064]), rt::V((double)(this->f_S_5w)), rt::dcallv(rt::V((double)(this->f_S_5w)), rt::N_toString)); this->f_S_1i = rt::slot_string(_v3068); _v3068; });
    ({ rt::Value _v3069 = l_param2; this->f_S__5e__21__23_ = rt::slot_string(_v3069); _v3069; });
    ({ double _v3070 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v3070); _v3070; });
    ({ rt::Value _v3071 = rt::VS(g::LS[1065]); this->f_S__3f__21__3d_ = rt::slot_string(_v3071); _v3071; });
}
rt::Value C_S_0_21__60_::m_S__21__21_G() {
    RT_FN("S_0_21__60_.S__21__21_G");
    if (((!this->f_S_4_21_K) && (((double)(C_S_8G::sg_S__3b__21__20_())) >= ((double)(this->f_S_5w))))) {
        (void)(({ rt::Value _o3072 = g::SV.C_S_8G__S__3e__21_a; C_S_8G* _p3073 = rt::as_ptr<C_S_8G>(_o3072); _p3073 ? _p3073->m_S_3_21__20_(rt::VO(this)) : rt::dcallv(_o3072, NM_S_3_21__20_, rt::VO(this)); }));
    }
    return rt::NUL;
}
rt::Value C_S_0_21__60_::m_S_8_5b_() {
    RT_FN("S_0_21__60_.S_8_5b_");
    return rt::slot_string(this->m_S__3f__21_N(((double)(C_S_8G::sg_S__3b__21__20_())), ((double)(this->f_S_5w)), C_S__23__21__60_::dm_S__3f__21_N_2()));
    return rt::NUL;
}
rt::Value C_S_0_21__60_::m_S__40__22_() {
    RT_FN("S_0_21__60_.S__40__22_");
    return rt::slot_string(rt::tr_nv(rt::VS(g::LS[1066]), rt::VS(g::LS[1067]), rt::V((double)(this->f_S_5w)), C_S__26_c::sm_S_8_21_Z(((double)(this->f_S_5w)), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
C_S_0_21__60_* C_S_0_21__60_::alloc_() {
    C_S_0_21__60_* o = rt::make<C_S_0_21__60_>();
    return o;
}
rt::Value C_S_0_21__60_::mk_(rt::Value* a, int n) {
    C_S_0_21__60_* o = alloc_();
    o->C_S_0_21__60_::ctor_(rt::arg<int32_t>(a, n, 0, 0), rt::arg<rt::Value>(a, n, 1, C_S_0_21__60_::dctor_1()));
    return rt::VO(o);
}
bool C_S_0_21__60_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S_5w: out = rt::V((double)(f_S_5w)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_8_5b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__23__21__60_::dget(id, out);
}
bool C_S_0_21__60_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S_5w: f_S_5w = rt::toint(v); return true;
    default: break;
    }
    return C_S__23__21__60_::dset(id, v);
}
bool C_S_0_21__60_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_8_5b_: out = m_S_8_5b_(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_5w: { rt::Value f = rt::V((double)(f_S_5w)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__23__21__60_::dcall(id, a, n, out);
}
bool C_S_0_21__60_::dmeth(int id) {
    switch (id) {
    case NM_S__21__21_G: return true;
    case NM_S_8_5b_: return true;
    case NM_S__40__22_: return true;
    case NM_S_5w: return false;
    default: break;
    }
    return C_S__23__21__60_::dmeth(id);
}
bool C_S_0_21__60_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_21__60_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21__60___id)); return true;
    default: return false;
    }
}
bool C_S_0_21__60_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21__60___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_21__60_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void static_init_3(std::vector<std::string>& errs) {
    try { (g::SV.C_S__23__21__22___ids = rt::arr_lit({rt::VS(g::LS[898])})); } catch (...) { errs.push_back(std::string("S__23__21__22_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__21_C__ids = rt::arr_lit({rt::VS(g::LS[902])})); } catch (...) { errs.push_back(std::string("S__23__21_C.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__21_b__S__5e__21_s = 200.0); } catch (...) { errs.push_back(std::string("S__23__21_b.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__21_b__ids = rt::arr_lit({rt::VS(g::LS[904])})); } catch (...) { errs.push_back(std::string("S__23__21_b.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__23_s__S_1_22_I = 1500.0); } catch (...) { errs.push_back(std::string("S__23_s.S_1_22_I: ") + rt::exc_text()); }
    try { (g::SV.C_S__23_s__S__3c_ = 75.0); } catch (...) { errs.push_back(std::string("S__23_s.S__3c_: ") + rt::exc_text()); }
    try { (g::SV.C_S__23_s__ids = rt::arr_lit({rt::VS(g::LS[908])})); } catch (...) { errs.push_back(std::string("S__23_s.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__21_b__ids = rt::arr_lit({rt::VS(g::LS[911])})); } catch (...) { errs.push_back(std::string("S__25__21_b.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__22_Y__ids = rt::arr_lit({rt::VS(g::LS[914])})); } catch (...) { errs.push_back(std::string("S__22_Y.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__22__60___ids = rt::arr_lit({rt::VS(g::LS[915])})); } catch (...) { errs.push_back(std::string("S__22__60_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c__21_8__ids = rt::arr_lit({rt::VS(g::LS[936])})); } catch (...) { errs.push_back(std::string("S__3c__21_8.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c__21_S__ids = rt::arr_lit({rt::VS(g::LS[937])})); } catch (...) { errs.push_back(std::string("S__3c__21_S.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c__21_a__ids = rt::arr_lit({rt::VS(g::LS[940])})); } catch (...) { errs.push_back(std::string("S__3c__21_a.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c__25___ids = rt::arr_lit({rt::VS(g::LS[949])})); } catch (...) { errs.push_back(std::string("S__3c__25_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c_0__ids = rt::arr_lit({rt::VS(g::LS[951])})); } catch (...) { errs.push_back(std::string("S__3c_0.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c_z__S__5e__21_s = 100.0); } catch (...) { errs.push_back(std::string("S__3c_z.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c_z__ids = rt::arr_lit({rt::VS(g::LS[953])})); } catch (...) { errs.push_back(std::string("S__3c_z.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__21_1__S_4_21_p = (-75.0)); } catch (...) { errs.push_back(std::string("S__3e__21_1.S_4_21_p: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__21_5__ids = rt::arr_lit({rt::VS(g::LS[969])})); } catch (...) { errs.push_back(std::string("S__3e__21_5.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__21_F__ids = rt::arr_lit({rt::VS(g::LS[971])})); } catch (...) { errs.push_back(std::string("S__3e__21_F.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__21_N__ids = rt::arr_lit({rt::VS(g::LS[975])})); } catch (...) { errs.push_back(std::string("S__3e__21_N.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__21_X__ids = rt::arr_lit({rt::VS(g::LS[977])})); } catch (...) { errs.push_back(std::string("S__3e__21_X.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__24___ids = rt::arr_lit({rt::VS(g::LS[983])})); } catch (...) { errs.push_back(std::string("S__3e__24_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__22_F__S__5e__21_s = 4.0); } catch (...) { errs.push_back(std::string("S__3e__22_F.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e_0__ids = rt::arr_lit({rt::VS(g::LS[985])})); } catch (...) { errs.push_back(std::string("S__3e_0.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e_L__ids = rt::arr_lit({rt::VS(g::LS[987])})); } catch (...) { errs.push_back(std::string("S__3e_L.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__21__2b___ids = rt::arr_lit({rt::VS(g::LS[991])})); } catch (...) { errs.push_back(std::string("S__3f__21__2b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__21_0__ids = rt::arr_lit({rt::VS(g::LS[995])})); } catch (...) { errs.push_back(std::string("S__3f__21_0.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__21_B__ids = rt::arr_lit({rt::VS(g::LS[998])})); } catch (...) { errs.push_back(std::string("S__3f__21_B.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__21_P__ids = rt::arr_lit({rt::VS(g::LS[1000])})); } catch (...) { errs.push_back(std::string("S__3f__21_P.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__21_Z__ids = rt::arr_lit({rt::VS(g::LS[1003])})); } catch (...) { errs.push_back(std::string("S__3f__21_Z.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__22__2c___S__5e__21_s = 100000.0); } catch (...) { errs.push_back(std::string("S__3f__22__2c_.S__5e__21_s: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_P__ids = rt::arr_lit({rt::VS(g::LS[1009])})); } catch (...) { errs.push_back(std::string("S__3f_P.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__5f___ids = rt::arr_lit({rt::VS(g::LS[1011])})); } catch (...) { errs.push_back(std::string("S__3f__5f_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25_F__ids = rt::arr_lit({rt::VS(g::LS[1012])})); } catch (...) { errs.push_back(std::string("S__25_F.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__21_0__ids = rt::arr_lit({rt::VS(g::LS[1019])})); } catch (...) { errs.push_back(std::string("S__26__21_0.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__21_A__ids = rt::arr_lit({rt::VS(g::LS[1020])})); } catch (...) { errs.push_back(std::string("S__26__21_A.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__22__27___S_0_22__25_ = 3.0); } catch (...) { errs.push_back(std::string("S__26__22__27_.S_0_22__25_: ") + rt::exc_text()); }
    try { (g::SV.C_S__26_m__ids = rt::arr_lit({rt::VS(g::LS[1024])})); } catch (...) { errs.push_back(std::string("S__26_m.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__21__20___ids = rt::arr_lit({rt::VS(g::LS[1027])})); } catch (...) { errs.push_back(std::string("S__27__21__20_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__27_h__ids = rt::arr_lit({rt::VS(g::LS[1031])})); } catch (...) { errs.push_back(std::string("S__27_h.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2b_D__ids = rt::arr_lit({rt::VS(g::LS[1035])})); } catch (...) { errs.push_back(std::string("S__2b_D.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2b_e__ids = rt::arr_lit({rt::VS(g::LS[1038])})); } catch (...) { errs.push_back(std::string("S__2b_e.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__21__3b___ids = rt::arr_lit({rt::VS(g::LS[1040])})); } catch (...) { errs.push_back(std::string("S__2c__21__3b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__21_K__ids = rt::arr_lit({rt::VS(g::LS[1042])})); } catch (...) { errs.push_back(std::string("S__2c__21_K.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c__21__5f___ids = rt::arr_lit({rt::VS(g::LS[1046])})); } catch (...) { errs.push_back(std::string("S__2c__21__5f_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c_N__ids = rt::arr_lit({rt::VS(g::LS[1049])})); } catch (...) { errs.push_back(std::string("S__2c_N.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c_p__ids = rt::arr_lit({rt::VS(g::LS[1051])})); } catch (...) { errs.push_back(std::string("S__2c_p.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c_y__ids = rt::arr_lit({rt::VS(g::LS[1053])})); } catch (...) { errs.push_back(std::string("S__2c_y.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21__3d___S_4_21_9 = 1000000000000000.0); } catch (...) { errs.push_back(std::string("S__2d__21__3d_.S_4_21_9: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_H__ids = rt::arr_lit({rt::VS(g::LS[1055])})); } catch (...) { errs.push_back(std::string("S__2d__21_H.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_V__ids = rt::arr_lit({rt::VS(g::LS[1056])})); } catch (...) { errs.push_back(std::string("S__2d__21_V.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d_f__ids = rt::arr_lit({rt::VS(g::LS[1060])})); } catch (...) { errs.push_back(std::string("S__2d_f.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_21_3__ids = rt::arr_lit({rt::VS(g::LS[1062])})); } catch (...) { errs.push_back(std::string("S_0_21_3.ids: ") + rt::exc_text()); }
}
}  // namespace g
