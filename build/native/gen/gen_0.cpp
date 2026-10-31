// 由 脚本/as2cpp.py 生成
#include "gen.h"
namespace g {
void C_EmbeddedAssets::ctor_() {
    RT_FN("EmbeddedAssets.EmbeddedAssets");
    (void)(rt::NUL);
}
C_EmbeddedAssets* C_EmbeddedAssets::alloc_() {
    C_EmbeddedAssets* o = rt::make<C_EmbeddedAssets>();
    return o;
}
rt::Value C_EmbeddedAssets::mk_(rt::Value* a, int n) {
    C_EmbeddedAssets* o = alloc_();
    o->C_EmbeddedAssets::ctor_();
    return rt::VO(o);
}
bool C_EmbeddedAssets::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_EmbeddedAssets::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_EmbeddedAssets::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_EmbeddedAssets::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_EmbeddedAssets::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_EmbeddedAssets::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_LIONY_REGULAR: out = g::SV.C_EmbeddedAssets__LIONY_REGULAR; return true;
    case NM_LIONY_BOLD: out = g::SV.C_EmbeddedAssets__LIONY_BOLD; return true;
    case NM_LIONY_ITALIC: out = g::SV.C_EmbeddedAssets__LIONY_ITALIC; return true;
    case NM_LIONY_BOLDITALIC: out = g::SV.C_EmbeddedAssets__LIONY_BOLDITALIC; return true;
    case NM_LIONY_REGULAR2: out = g::SV.C_EmbeddedAssets__LIONY_REGULAR2; return true;
    case NM_LIONY_BOLD2: out = g::SV.C_EmbeddedAssets__LIONY_BOLD2; return true;
    case NM_PIXEL_REGULAR: out = g::SV.C_EmbeddedAssets__PIXEL_REGULAR; return true;
    default: return false;
    }
}
bool C_EmbeddedAssets::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_LIONY_REGULAR: g::SV.C_EmbeddedAssets__LIONY_REGULAR = v; return true;
    case NM_LIONY_BOLD: g::SV.C_EmbeddedAssets__LIONY_BOLD = v; return true;
    case NM_LIONY_ITALIC: g::SV.C_EmbeddedAssets__LIONY_ITALIC = v; return true;
    case NM_LIONY_BOLDITALIC: g::SV.C_EmbeddedAssets__LIONY_BOLDITALIC = v; return true;
    case NM_LIONY_REGULAR2: g::SV.C_EmbeddedAssets__LIONY_REGULAR2 = v; return true;
    case NM_LIONY_BOLD2: g::SV.C_EmbeddedAssets__LIONY_BOLD2 = v; return true;
    case NM_PIXEL_REGULAR: g::SV.C_EmbeddedAssets__PIXEL_REGULAR = v; return true;
    default: return false;
    }
}
bool C_EmbeddedAssets::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_Main::ctor_() {
    RT_FN("Main.Main");
    (void)(rt::NUL);
    (void)(rt::dcallv(rt::VO(this), NM_addEventListener, rt::VS(g::LS[0]), rt::VO(rt::new_bound(rt::VO(this), NM_init))));
}
rt::Value C_Main::m_init(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("Main.init");
    (void)(rt::dcallv(rt::VO(this), NM_removeEventListener, rt::VS(g::LS[0]), rt::VO(rt::new_bound(rt::VO(this), NM_init))));
    (void)(rt::dcallv(rt::dget(rt::dget(rt::VO(this), NM_loaderInfo), NM_uncaughtErrorEvents), NM_addEventListener, rt::VS(g::LS[1]), rt::VO(rt::new_bound(rt::VO(this), NM_uncaughtErrorHandler))));
    ({ rt::Value _v1 = rt::VS(g::LS[2]); rt::dset(rt::dget(rt::VO(this), NM_stage), NM_align, _v1); _v1; });
    ({ rt::Value _v2 = rt::VS(g::LS[3]); rt::dset(rt::dget(rt::VO(this), NM_stage), NM_scaleMode, _v2); _v2; });
    ({ rt::Value _v3 = rt::trv(rt::VS(g::LS[4])); rt::dset(rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__3e__21_a), NM_S_1_3f_, _v3); _v3; });
    ({ rt::Value _v4 = rt::VB(true); rt::dset(rt::dget(rt::VO(this), NM_Starling), NM_handleLostContext, _v4); _v4; });
    ({ rt::Value _v5 = rt::callv(rt::dget(rt::VO(this), NM_Starling), rt::VO(C_S_8G::CI.ref), rt::dget(rt::VO(this), NM_stage), rt::NUL, rt::NUL, rt::VS(g::LS[5]), rt::VS(g::LS[5])); this->f_starling = _v5; _v5; });
    ({ rt::Value _v6 = rt::V(8.0); rt::dset(this->f_starling, NM_antiAliasing, _v6); _v6; });
    (void)(rt::dcallv(this->f_starling, NM_start));
    (void)(rt::dcallv(rt::dget(rt::dget(rt::dget(rt::VO(this), NM_Starling), NM_current), NM_nativeStage), NM_removeChild, rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__3e__21_a)));
    (void)(rt::dcallv(rt::dget(rt::dget(rt::dget(rt::VO(this), NM_Starling), NM_current), NM_nativeStage), NM_addChild, rt::dget(rt::dget(rt::VO(this), NM_S__3c__21_d), NM_S__3e__21_a)));
    return rt::NUL;
}
rt::Value C_Main::m_uncaughtErrorHandler(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc6_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    rt::Value l_A__loc7_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_e = rt::UNDEF;
    RT_FN("Main.uncaughtErrorHandler");
    (l_A__loc6_ = rt::slot_string(rt::NUL));
    (l_A__loc3_ = rt::NUL);
    (l_A__loc7_ = rt::slot_string(rt::NUL));
    (l_A__loc4_ = rt::NUL);
    (l_A__loc2_ = rt::NUL);
    (l_A__loc5_ = rt::NUL);
    if (this->f_sentOne) {
        return rt::NUL;
    }
    try {
        ({ bool _v7 = true; this->f_sentOne = _v7; _v7; });
        (l_A__loc6_ = rt::slot_string(rt::add(rt::add(rt::add(rt::VS(g::LS[6]), rt::dget(rt::dget(l_param1, NM_error), rt::N_name)), rt::VS(g::LS[7])), rt::dget(rt::dget(l_param1, NM_error), rt::N_message))));
        (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, (rt::add(rt::VS(g::LS[8]), rt::dcallv(rt::dget(l_param1, NM_error), NM_getStackTrace))))));
        (void)(rt::NUL);
        (l_A__loc3_ = rt::new_bytearray());
        (void)(rt::dcallv(l_A__loc3_, rt::N_writeUTFBytes, l_A__loc6_));
        ({ rt::Value _v8 = rt::V(0.0); rt::dset(l_A__loc3_, rt::N_position, _v8); _v8; });
        (l_A__loc7_ = rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::dcallv(rt::dget(rt::VO(this), NM_Kongregate), NM_getPlatform), rt::VS(g::LS[9])), rt::dget(rt::dget(rt::VO(this), NM_Capabilities), NM_os)), rt::VS(g::LS[9])), rt::dget(rt::dget(rt::VO(this), NM_Capabilities), NM_version))));
        (l_A__loc4_ = rt::new_bytearray());
        (void)(rt::dcallv(l_A__loc4_, rt::N_writeUTFBytes, l_A__loc7_));
        ({ rt::Value _v9 = rt::V(0.0); rt::dset(l_A__loc4_, rt::N_position, _v9); _v9; });
        (l_A__loc2_ = rt::callv(rt::dget(rt::VO(this), NM_URLRequest), rt::add(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[10]), rt::dcallv(rt::V((double)(C_S__26_M::sm_S__27__21_6(true))), rt::N_toString)), rt::VS(g::LS[11])), C_S__27__21_V::sm_S_56(l_A__loc3_)), rt::VS(g::LS[12])), C_S__27__21_V::sm_S_56(l_A__loc4_))));
        ({ rt::Value _v10 = g::SV.C_S_2_21_c__S_3_21_W; rt::dset(l_A__loc2_, rt::N_data, _v10); _v10; });
        ({ rt::Value _v11 = rt::VS(g::LS[13]); rt::dset(l_A__loc2_, NM_method, _v11); _v11; });
        (l_A__loc5_ = rt::callv(rt::dget(rt::VO(this), NM_URLLoader)));
        (void)(rt::dcallv(l_A__loc5_, NM_addEventListener, rt::VS(g::LS[14]), rt::VO(rt::new_bound(rt::VO(this), NM_loaderCompleteHandler)), rt::VB(false), rt::V(0.0), rt::VB(true)));
        (void)(rt::dcallv(l_A__loc5_, NM_addEventListener, rt::VS(g::LS[15]), rt::VO(rt::new_bound(rt::VO(this), NM_httpStatusHandler)), rt::VB(false), rt::V(0.0), rt::VB(true)));
        (void)(rt::dcallv(l_A__loc5_, NM_addEventListener, rt::VS(g::LS[16]), rt::VO(rt::new_bound(rt::VO(this), NM_securityErrorHandler)), rt::VB(false), rt::V(0.0), rt::VB(true)));
        (void)(rt::dcallv(l_A__loc5_, NM_addEventListener, rt::VS(g::LS[17]), rt::VO(rt::new_bound(rt::VO(this), NM_ioErrorHandler)), rt::VB(false), rt::V(0.0), rt::VB(true)));
        (void)(rt::dcallv(l_A__loc5_, NM_load, l_A__loc2_));
    } catch (...) {
        l_e = rt::cur_exc();
    }
    return rt::NUL;
}
rt::Value C_Main::m_loaderCompleteHandler(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("Main.loaderCompleteHandler");
    return rt::NUL;
}
rt::Value C_Main::m_httpStatusHandler(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("Main.httpStatusHandler");
    return rt::NUL;
}
rt::Value C_Main::m_securityErrorHandler(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("Main.securityErrorHandler");
    return rt::NUL;
}
rt::Value C_Main::m_ioErrorHandler(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("Main.ioErrorHandler");
    return rt::NUL;
}
C_Main* C_Main::alloc_() {
    C_Main* o = rt::make<C_Main>();
    return o;
}
rt::Value C_Main::mk_(rt::Value* a, int n) {
    C_Main* o = alloc_();
    o->C_Main::ctor_();
    return rt::VO(o);
}
bool C_Main::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_starling: out = f_starling; return true;
    case NM_sentOne: out = rt::VB(f_sentOne); return true;
    case NM_init: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_uncaughtErrorHandler: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_loaderCompleteHandler: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_httpStatusHandler: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_securityErrorHandler: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_ioErrorHandler: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_Main::dset(int id, rt::Value v) {
    switch (id) {
    case NM_starling: f_starling = v; return true;
    case NM_sentOne: f_sentOne = rt::T(v); return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_Main::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_init: out = m_init(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_uncaughtErrorHandler: out = m_uncaughtErrorHandler(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_loaderCompleteHandler: out = m_loaderCompleteHandler(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_httpStatusHandler: out = m_httpStatusHandler(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_securityErrorHandler: out = m_securityErrorHandler(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_ioErrorHandler: out = m_ioErrorHandler(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_starling: { rt::Value f = f_starling; out = rt::call_value(f, a, n); return true; }
    case NM_sentOne: { rt::Value f = rt::VB(f_sentOne); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_Main::dmeth(int id) {
    switch (id) {
    case NM_init: return true;
    case NM_uncaughtErrorHandler: return true;
    case NM_loaderCompleteHandler: return true;
    case NM_httpStatusHandler: return true;
    case NM_securityErrorHandler: return true;
    case NM_ioErrorHandler: return true;
    case NM_starling: return false;
    case NM_sentOne: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_Main::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_Main::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_Main::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_Main::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_Translation::ctor_() {
    RT_FN("Translation.Translation");
    (void)(rt::NUL);
}
rt::Value C_Translation::sm__mn(rt::Value p0, rt::Value p1, double p2, rt::Value prest) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    double l_param3 = p2;
    rt::Value l_rest = prest;
    RT_FN("Translation._mn");
    return rt::slot_string(rt::tr_nv(l_param1, l_param2, rt::V(l_param3), l_rest));
    return rt::NUL;
}
rt::Value C_Translation::sm_detectLocale() {
    rt::Value l_A__loc2_ = rt::NUL;
    int32_t l_A__loc1_ = 0;
    RT_FN("Translation.detectLocale");
    (l_A__loc2_ = rt::slot_string(rt::dcallv(rt::dget(rt::VO(rt::STUBCLASS), NM_language), rt::N_toLowerCase)));
    if ((rt::alen(rt::dget(rt::VO(rt::STUBCLASS), NM_languages)) > 0.0)) {
        (l_A__loc2_ = rt::slot_string(rt::dcallv(rt::idx_get(rt::dget(rt::VO(rt::STUBCLASS), NM_languages), rt::V(0.0)), rt::N_toLowerCase)));
        if (rt::eq(rt::idx_get(g::SV.C_Translation__LOCALE_CONVERSION, l_A__loc2_), rt::UNDEF)) {
            (l_A__loc2_ = rt::slot_string(rt::dcallv(rt::dget(rt::VO(rt::STUBCLASS), NM_language), rt::N_toLowerCase)));
        }
    }
    if ((!rt::eq(rt::idx_get(g::SV.C_Translation__LOCALE_CONVERSION, l_A__loc2_), rt::UNDEF))) {
        (g::SV.C_Translation__locale = rt::toint(rt::idx_get(g::SV.C_Translation__LOCALE_CONVERSION, l_A__loc2_)));
    }
    (l_A__loc1_ = C_Translation::sm_getSettingsLocale(false));
    if ((!(((double)(l_A__loc1_)) == (-1.0)))) {
        (g::SV.C_Translation__locale = l_A__loc1_);
    }
    return rt::NUL;
}
bool C_Translation::dsm_getSettingsLocale_0() { return true; }
int32_t C_Translation::sm_getSettingsLocale(bool p0) {
    bool l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    RT_FN("Translation.getSettingsLocale");
    (l_A__loc2_ = rt::toint_d(0.0));
    if (rt::T(rt::dcallv(rt::dget(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_data), rt::N_hasOwnProperty, rt::VS(g::LS[18])))) {
        (l_A__loc2_ = rt::toint(rt::idx_get(rt::dget(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_data), rt::VS(g::LS[18]))));
        if (((((double)(l_A__loc2_)) >= 0.0) && (((double)(l_A__loc2_)) <= 6.0))) {
            return l_A__loc2_;
        }
    }
    return rt::toint_d((l_param1 ? 0.0 : (-1.0)));
    return 0;
}
rt::Value C_Translation::sm_setSettingsLocale(int32_t p0) {
    int32_t l_param1 = p0;
    rt::Value l_error = rt::UNDEF;
    RT_FN("Translation.setSettingsLocale");
    ({ rt::Value _v12 = rt::V((double)(l_param1)); rt::idx_set(rt::dget(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_data), rt::VS(g::LS[18]), _v12); });
    try {
        (void)(rt::dcallv(g::SV.C_S__3c__21_d__S__2b__21_J, rt::N_flush));
    } catch (...) {
        l_error = rt::cur_exc();
    }
    return rt::NUL;
}
rt::Value C_Translation::sm_initialize() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("Translation.initialize");
    (l_A__loc1_ = rt::arr_at(g::SV.C_Translation__LOCALE_FILE, ((double)(g::SV.C_Translation__locale))));
    if ((!rt::eq(l_A__loc1_, rt::NUL))) {
        (void)(C_Translation::sm_loadLocale(({ rt::Value _t13 = rt::callv(l_A__loc1_); rt::is_kind(_t13, rt::K_BYTES) ? _t13 : rt::NUL; })));
    } else {
        (g::SV.C_Translation__locale = rt::toint_d(0.0));
    }
    return rt::NUL;
}
rt::Value C_Translation::sm_loadLocale(rt::Value p0) {
    rt::Value l_param1 = p0;
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc2_ = rt::UNDEF;
    rt::Value l_A__loc14_ = rt::UNDEF;
    rt::Value l_A__loc4_ = rt::UNDEF;
    rt::Value l_A__loc9_ = rt::UNDEF;
    rt::Value l_A__loc10_ = rt::UNDEF;
    rt::Value l_A__loc13_ = rt::NUL;
    rt::Value l_A__loc21_ = rt::NUL;
    int32_t l_A__loc18_ = 0;
    rt::Value l_A__loc5_ = rt::NUL;
    uint32_t l_A__loc22_ = 0u;
    rt::Value l_A__loc19_ = rt::NUL;
    uint32_t l_A__loc6_ = 0u;
    uint32_t l_A__loc15_ = 0u;
    uint32_t l_A__loc11_ = 0u;
    uint32_t l_A__loc12_ = 0u;
    uint32_t l_A__loc17_ = 0u;
    uint32_t l_A__loc16_ = 0u;
    uint32_t l_A__loc7_ = 0u;
    int32_t l_A__loc20_ = 0;
    int32_t l_A__loc8_ = 0;
    rt::Value l_e = rt::UNDEF;
    RT_FN("Translation.loadLocale");
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::toint_d(8.0));
    (l_A__loc2_ = rt::V(0.0));
    (l_A__loc14_ = rt::V(0.0));
    (l_A__loc4_ = rt::V(0.0));
    (l_A__loc9_ = rt::V(0.0));
    (l_A__loc10_ = rt::V(0.0));
    (l_A__loc13_ = rt::slot_string(rt::NUL));
    (l_A__loc21_ = rt::slot_string(rt::NUL));
    (l_A__loc18_ = rt::toint_d(0.0));
    (l_A__loc5_ = rt::slot_string(rt::NUL));
    if ((!rt::T(l_param1))) {
        return rt::NUL;
    }
    (void)(rt::dcallv(l_param1, rt::N_uncompress));
    (l_A__loc22_ = rt::touint(rt::dget(l_param1, rt::N_position)));
    (l_A__loc19_ = rt::slot_string(rt::dget(l_param1, rt::N_endian)));
    ({ rt::Value _v14 = rt::V(0.0); rt::dset(l_param1, rt::N_position, _v14); _v14; });
    (l_A__loc6_ = rt::touint(rt::dcallv(l_param1, rt::N_readUnsignedInt)));
    if ((((double)(l_A__loc6_)) == 3725722773.0)) {
        ({ rt::Value _v15 = rt::VS(g::LS[19]); rt::dset(l_param1, rt::N_endian, _v15); _v15; });
    } else {
        if ((!(((double)(l_A__loc6_)) == 2500072158.0))) {
            return rt::NUL;
        }
        ({ rt::Value _v16 = rt::VS(g::LS[20]); rt::dset(l_param1, rt::N_endian, _v16); _v16; });
    }
    (l_A__loc15_ = rt::touint(rt::dcallv(l_param1, rt::N_readUnsignedInt)));
    if ((((double)(l_A__loc15_)) > 0.0)) {
        return rt::NUL;
    }
    (l_A__loc11_ = rt::touint(rt::dcallv(l_param1, rt::N_readUnsignedInt)));
    if ((((double)(l_A__loc11_)) <= 0.0)) {
        return rt::NUL;
    }
    (l_A__loc12_ = rt::touint(rt::dcallv(l_param1, rt::N_readUnsignedInt)));
    (l_A__loc17_ = rt::touint(rt::dcallv(l_param1, rt::N_readUnsignedInt)));
    (l_A__loc16_ = rt::touint(rt::dcallv(l_param1, rt::N_readUnsignedInt)));
    (l_A__loc7_ = rt::touint(rt::dcallv(l_param1, rt::N_readUnsignedInt)));
    (l_A__loc20_ = ((int32_t)(l_A__loc11_)));
    (l_A__loc8_ = rt::toint_d(0.0));
    while ((({ double _old17 = ((double)(l_A__loc8_)); l_A__loc8_ = rt::toint_d((_old17 + 1.0)); (_old17 + 1.0); }) < ((double)(l_A__loc20_)))) {
        try {
            (l_A__loc2_ = rt::V((double)(rt::touint_d((((double)(l_A__loc8_)) * 8.0)))));
            ({ rt::Value _v18 = rt::add(rt::V((double)(l_A__loc12_)), l_A__loc2_); rt::dset(l_param1, rt::N_position, _v18); _v18; });
            (l_A__loc14_ = rt::dcallv(l_param1, rt::N_readUnsignedInt));
            (l_A__loc4_ = rt::dcallv(l_param1, rt::N_readUnsignedInt));
            ({ rt::Value _v19 = rt::add(rt::V((double)(l_A__loc17_)), l_A__loc2_); rt::dset(l_param1, rt::N_position, _v19); _v19; });
            (l_A__loc9_ = rt::dcallv(l_param1, rt::N_readUnsignedInt));
            (l_A__loc10_ = rt::dcallv(l_param1, rt::N_readUnsignedInt));
            ({ rt::Value _v20 = l_A__loc4_; rt::dset(l_param1, rt::N_position, _v20); _v20; });
            (l_A__loc13_ = rt::slot_string(rt::dcallv(l_param1, rt::N_readUTFBytes, l_A__loc14_)));
            ({ rt::Value _v21 = l_A__loc10_; rt::dset(l_param1, rt::N_position, _v21); _v21; });
            (l_A__loc21_ = rt::slot_string(rt::dcallv(l_param1, rt::N_readUTFBytes, l_A__loc9_)));
            if (((((double)(g::SV.C_Translation__locale)) == 3.0) && rt::ge(rt::dcallv(l_A__loc21_, rt::N_indexOf, rt::VS(g::LS[21])), rt::V(0.0)))) {
                (l_A__loc21_ = rt::slot_string(rt::dcallv(rt::dcallv(l_A__loc21_, rt::N_split, rt::VS(g::LS[21])), rt::N_join, rt::VS(g::LS[22]))));
            }
            if (((((double)(g::SV.C_Translation__locale)) == 3.0) && rt::ge(rt::dcallv(l_A__loc21_, rt::N_indexOf, rt::VS(g::LS[23])), rt::V(0.0)))) {
                (l_A__loc21_ = rt::slot_string(rt::dcallv(rt::dcallv(l_A__loc21_, rt::N_split, rt::VS(g::LS[23])), rt::N_join, rt::VS(g::LS[24]))));
            }
            ({ rt::Value _v22 = l_A__loc21_; rt::idx_set(g::SV.C_Translation__loadedLanguage, l_A__loc13_, _v22); });
            (l_A__loc18_ = ((int32_t)(C_Translation::sm_byteLength(l_A__loc21_))));
            if (rt::lt(rt::V((double)(l_A__loc18_)), l_A__loc9_)) {
                ({ rt::Value _v23 = rt::add(rt::add(l_A__loc10_, rt::V((double)(l_A__loc18_))), rt::V(1.0)); rt::dset(l_param1, rt::N_position, _v23); _v23; });
                (l_A__loc5_ = rt::slot_string(rt::dcallv(l_param1, rt::N_readUTFBytes, rt::V((rt::tonum(l_A__loc9_) - ((double)(l_A__loc18_)))))));
                if (((((double)(g::SV.C_Translation__locale)) == 3.0) && rt::ge(rt::dcallv(l_A__loc5_, rt::N_indexOf, rt::VS(g::LS[21])), rt::V(0.0)))) {
                    (l_A__loc5_ = rt::slot_string(rt::dcallv(rt::dcallv(l_A__loc5_, rt::N_split, rt::VS(g::LS[21])), rt::N_join, rt::VS(g::LS[22]))));
                }
                if (((((double)(g::SV.C_Translation__locale)) == 3.0) && rt::ge(rt::dcallv(l_A__loc5_, rt::N_indexOf, rt::VS(g::LS[23])), rt::V(0.0)))) {
                    (l_A__loc5_ = rt::slot_string(rt::dcallv(rt::dcallv(l_A__loc5_, rt::N_split, rt::VS(g::LS[23])), rt::N_join, rt::VS(g::LS[24]))));
                }
                ({ rt::Value _v24 = l_A__loc5_; rt::idx_set(g::SV.C_Translation__loadedPlural, l_A__loc13_, _v24); });
            }
        } catch (...) {
            l_e = rt::cur_exc();
            (void)(rt::NUL);
        }
    }
    ({ rt::Value _v25 = rt::V((double)(l_A__loc22_)); rt::dset(l_param1, rt::N_position, _v25); _v25; });
    ({ rt::Value _v26 = l_A__loc19_; rt::dset(l_param1, rt::N_endian, _v26); _v26; });
    return rt::NUL;
}
uint32_t C_Translation::sm_byteLength(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("Translation.byteLength");
    (void)(rt::dcallv(g::SV.C_Translation__lengthArray, rt::N_clear));
    (void)(rt::dcallv(g::SV.C_Translation__lengthArray, rt::N_writeUTFBytes, l_param1));
    return rt::touint_d(rt::alen(g::SV.C_Translation__lengthArray));
    return 0u;
}
C_Translation* C_Translation::alloc_() {
    C_Translation* o = rt::make<C_Translation>();
    return o;
}
rt::Value C_Translation::mk_(rt::Value* a, int n) {
    C_Translation* o = alloc_();
    o->C_Translation::ctor_();
    return rt::VO(o);
}
bool C_Translation::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_Translation::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_Translation::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_Translation::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_Translation::smeth_(int id) {
    switch (id) {
    case NM__mn: return true;
    case NM_detectLocale: return true;
    case NM_getSettingsLocale: return true;
    case NM_setSettingsLocale: return true;
    case NM_initialize: return true;
    case NM_loadLocale: return true;
    case NM_byteLength: return true;
    default: return false;
    }
}
bool C_Translation::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_LOCALE_EN: out = rt::V((double)(g::SV.C_Translation__LOCALE_EN)); return true;
    case NM_LOCALE_ES: out = rt::V((double)(g::SV.C_Translation__LOCALE_ES)); return true;
    case NM_LOCALE_DE: out = rt::V((double)(g::SV.C_Translation__LOCALE_DE)); return true;
    case NM_LOCALE_FR: out = rt::V((double)(g::SV.C_Translation__LOCALE_FR)); return true;
    case NM_LOCALE_PT: out = rt::V((double)(g::SV.C_Translation__LOCALE_PT)); return true;
    case NM_LOCALE_RU: out = rt::V((double)(g::SV.C_Translation__LOCALE_RU)); return true;
    case NM_LOCALE_IT: out = rt::V((double)(g::SV.C_Translation__LOCALE_IT)); return true;
    case NM_LOCALE_LAST: out = rt::V((double)(g::SV.C_Translation__LOCALE_LAST)); return true;
    case NM_locale: out = rt::V((double)(g::SV.C_Translation__locale)); return true;
    case NM_language_de_DE: out = g::SV.C_Translation__language_de_DE; return true;
    case NM_language_es_ES: out = g::SV.C_Translation__language_es_ES; return true;
    case NM_language_fr_FR: out = g::SV.C_Translation__language_fr_FR; return true;
    case NM_language_pt_BR: out = g::SV.C_Translation__language_pt_BR; return true;
    case NM_language_ru_RU: out = g::SV.C_Translation__language_ru_RU; return true;
    case NM_language_it_IT: out = g::SV.C_Translation__language_it_IT; return true;
    case NM_LOCALE_CODE: out = g::SV.C_Translation__LOCALE_CODE; return true;
    case NM_LOCALE_NAMES: out = g::SV.C_Translation__LOCALE_NAMES; return true;
    case NM_LOCALE_FILE: out = g::SV.C_Translation__LOCALE_FILE; return true;
    case NM_LOCALE_LOOKUP: out = g::SV.C_Translation__LOCALE_LOOKUP; return true;
    case NM_LOCALE_CONVERSION: out = g::SV.C_Translation__LOCALE_CONVERSION; return true;
    case NM_loadedLanguage: out = g::SV.C_Translation__loadedLanguage; return true;
    case NM_loadedPlural: out = g::SV.C_Translation__loadedPlural; return true;
    case NM_loadedPlural2: out = g::SV.C_Translation__loadedPlural2; return true;
    case NM_lengthArray: out = g::SV.C_Translation__lengthArray; return true;
    case NM__mn: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_detectLocale: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getSettingsLocale: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_setSettingsLocale: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_initialize: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_loadLocale: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_byteLength: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_Translation::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_LOCALE_EN: g::SV.C_Translation__LOCALE_EN = rt::toint(v); return true;
    case NM_LOCALE_ES: g::SV.C_Translation__LOCALE_ES = rt::toint(v); return true;
    case NM_LOCALE_DE: g::SV.C_Translation__LOCALE_DE = rt::toint(v); return true;
    case NM_LOCALE_FR: g::SV.C_Translation__LOCALE_FR = rt::toint(v); return true;
    case NM_LOCALE_PT: g::SV.C_Translation__LOCALE_PT = rt::toint(v); return true;
    case NM_LOCALE_RU: g::SV.C_Translation__LOCALE_RU = rt::toint(v); return true;
    case NM_LOCALE_IT: g::SV.C_Translation__LOCALE_IT = rt::toint(v); return true;
    case NM_LOCALE_LAST: g::SV.C_Translation__LOCALE_LAST = rt::toint(v); return true;
    case NM_locale: g::SV.C_Translation__locale = rt::toint(v); return true;
    case NM_language_de_DE: g::SV.C_Translation__language_de_DE = v; return true;
    case NM_language_es_ES: g::SV.C_Translation__language_es_ES = v; return true;
    case NM_language_fr_FR: g::SV.C_Translation__language_fr_FR = v; return true;
    case NM_language_pt_BR: g::SV.C_Translation__language_pt_BR = v; return true;
    case NM_language_ru_RU: g::SV.C_Translation__language_ru_RU = v; return true;
    case NM_language_it_IT: g::SV.C_Translation__language_it_IT = v; return true;
    case NM_LOCALE_CODE: g::SV.C_Translation__LOCALE_CODE = v; return true;
    case NM_LOCALE_NAMES: g::SV.C_Translation__LOCALE_NAMES = v; return true;
    case NM_LOCALE_FILE: g::SV.C_Translation__LOCALE_FILE = v; return true;
    case NM_LOCALE_LOOKUP: g::SV.C_Translation__LOCALE_LOOKUP = v; return true;
    case NM_LOCALE_CONVERSION: g::SV.C_Translation__LOCALE_CONVERSION = v; return true;
    case NM_loadedLanguage: g::SV.C_Translation__loadedLanguage = v; return true;
    case NM_loadedPlural: g::SV.C_Translation__loadedPlural = v; return true;
    case NM_loadedPlural2: g::SV.C_Translation__loadedPlural2 = v; return true;
    case NM_lengthArray: g::SV.C_Translation__lengthArray = v; return true;
    default: return false;
    }
}
bool C_Translation::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM__mn: out = sm__mn(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<double>(a, n, 2, NAN), rt::rest_arr(a, n, 3)); return true;
    case NM_detectLocale: out = sm_detectLocale(); return true;
    case NM_getSettingsLocale: out = rt::V((double)(sm_getSettingsLocale(rt::arg<bool>(a, n, 0, C_Translation::dsm_getSettingsLocale_0())))); return true;
    case NM_setSettingsLocale: out = sm_setSettingsLocale(rt::arg<int32_t>(a, n, 0, 0)); return true;
    case NM_initialize: out = sm_initialize(); return true;
    case NM_loadLocale: out = sm_loadLocale(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_byteLength: out = rt::V((double)(sm_byteLength(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)))); return true;
    default: return false;
    }
}
void C_MD5::ctor_() {
    RT_FN("MD5.MD5");
    (void)(rt::NUL);
}
rt::Value C_MD5::sm_hash(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("MD5.hash");
    (l_A__loc2_ = rt::new_bytearray());
    (void)(rt::dcallv(l_A__loc2_, rt::N_writeUTFBytes, l_param1));
    return rt::slot_string(C_MD5::sm_hashBinary(l_A__loc2_));
    return rt::NUL;
}
rt::Value C_MD5::sm_hashBytes(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("MD5.hashBytes");
    return rt::slot_string(C_MD5::sm_hashBinary(l_param1));
    return rt::NUL;
}
rt::Value C_MD5::sm_hashBinary(rt::Value p0) {
    rt::Value l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc3_ = 0;
    int32_t l_A__loc4_ = 0;
    int32_t l_A__loc5_ = 0;
    int32_t l_A__loc12_ = 0;
    int32_t l_A__loc6_ = 0;
    int32_t l_A__loc7_ = 0;
    int32_t l_A__loc8_ = 0;
    int32_t l_A__loc9_ = 0;
    rt::Value l_A__loc11_ = rt::NUL;
    int32_t l_A__loc10_ = 0;
    RT_FN("MD5.hashBinary");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc12_ = rt::toint_d(0.0));
    (l_A__loc6_ = rt::toint_d(1732584193.0));
    (l_A__loc7_ = rt::toint_d((-271733879.0)));
    (l_A__loc8_ = rt::toint_d((-1732584194.0)));
    (l_A__loc9_ = rt::toint_d(271733878.0));
    (l_A__loc11_ = C_MD5::sm_createBlocks(l_param1));
    (l_A__loc10_ = rt::toint_d(rt::alen(l_A__loc11_)));
    (l_A__loc12_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc12_)) < ((double)(l_A__loc10_)))) {
        (l_A__loc2_ = l_A__loc6_);
        (l_A__loc3_ = l_A__loc7_);
        (l_A__loc4_ = l_A__loc8_);
        (l_A__loc5_ = l_A__loc9_);
        (l_A__loc6_ = C_MD5::sm_ff(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 0.0)))))), rt::toint_d(7.0), rt::toint_d((-680876936.0))));
        (l_A__loc9_ = C_MD5::sm_ff(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 1.0)))))), rt::toint_d(12.0), rt::toint_d((-389564586.0))));
        (l_A__loc8_ = C_MD5::sm_ff(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 2.0)))))), rt::toint_d(17.0), rt::toint_d(606105819.0)));
        (l_A__loc7_ = C_MD5::sm_ff(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 3.0)))))), rt::toint_d(22.0), rt::toint_d((-1044525330.0))));
        (l_A__loc6_ = C_MD5::sm_ff(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 4.0)))))), rt::toint_d(7.0), rt::toint_d((-176418897.0))));
        (l_A__loc9_ = C_MD5::sm_ff(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 5.0)))))), rt::toint_d(12.0), rt::toint_d(1200080426.0)));
        (l_A__loc8_ = C_MD5::sm_ff(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 6.0)))))), rt::toint_d(17.0), rt::toint_d((-1473231341.0))));
        (l_A__loc7_ = C_MD5::sm_ff(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 7.0)))))), rt::toint_d(22.0), rt::toint_d((-45705983.0))));
        (l_A__loc6_ = C_MD5::sm_ff(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 8.0)))))), rt::toint_d(7.0), rt::toint_d(1770035416.0)));
        (l_A__loc9_ = C_MD5::sm_ff(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 9.0)))))), rt::toint_d(12.0), rt::toint_d((-1958414417.0))));
        (l_A__loc8_ = C_MD5::sm_ff(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 10.0)))))), rt::toint_d(17.0), rt::toint_d((-42063.0))));
        (l_A__loc7_ = C_MD5::sm_ff(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 11.0)))))), rt::toint_d(22.0), rt::toint_d((-1990404162.0))));
        (l_A__loc6_ = C_MD5::sm_ff(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 12.0)))))), rt::toint_d(7.0), rt::toint_d(1804603682.0)));
        (l_A__loc9_ = C_MD5::sm_ff(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 13.0)))))), rt::toint_d(12.0), rt::toint_d((-40341101.0))));
        (l_A__loc8_ = C_MD5::sm_ff(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 14.0)))))), rt::toint_d(17.0), rt::toint_d((-1502002290.0))));
        (l_A__loc7_ = C_MD5::sm_ff(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 15.0)))))), rt::toint_d(22.0), rt::toint_d(1236535329.0)));
        (l_A__loc6_ = C_MD5::sm_gg(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 1.0)))))), rt::toint_d(5.0), rt::toint_d((-165796510.0))));
        (l_A__loc9_ = C_MD5::sm_gg(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 6.0)))))), rt::toint_d(9.0), rt::toint_d((-1069501632.0))));
        (l_A__loc8_ = C_MD5::sm_gg(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 11.0)))))), rt::toint_d(14.0), rt::toint_d(643717713.0)));
        (l_A__loc7_ = C_MD5::sm_gg(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 0.0)))))), rt::toint_d(20.0), rt::toint_d((-373897302.0))));
        (l_A__loc6_ = C_MD5::sm_gg(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 5.0)))))), rt::toint_d(5.0), rt::toint_d((-701558691.0))));
        (l_A__loc9_ = C_MD5::sm_gg(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 10.0)))))), rt::toint_d(9.0), rt::toint_d(38016083.0)));
        (l_A__loc8_ = C_MD5::sm_gg(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 15.0)))))), rt::toint_d(14.0), rt::toint_d((-660478335.0))));
        (l_A__loc7_ = C_MD5::sm_gg(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 4.0)))))), rt::toint_d(20.0), rt::toint_d((-405537848.0))));
        (l_A__loc6_ = C_MD5::sm_gg(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 9.0)))))), rt::toint_d(5.0), rt::toint_d(568446438.0)));
        (l_A__loc9_ = C_MD5::sm_gg(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 14.0)))))), rt::toint_d(9.0), rt::toint_d((-1019803690.0))));
        (l_A__loc8_ = C_MD5::sm_gg(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 3.0)))))), rt::toint_d(14.0), rt::toint_d((-187363961.0))));
        (l_A__loc7_ = C_MD5::sm_gg(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 8.0)))))), rt::toint_d(20.0), rt::toint_d(1163531501.0)));
        (l_A__loc6_ = C_MD5::sm_gg(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 13.0)))))), rt::toint_d(5.0), rt::toint_d((-1444681467.0))));
        (l_A__loc9_ = C_MD5::sm_gg(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 2.0)))))), rt::toint_d(9.0), rt::toint_d((-51403784.0))));
        (l_A__loc8_ = C_MD5::sm_gg(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 7.0)))))), rt::toint_d(14.0), rt::toint_d(1735328473.0)));
        (l_A__loc7_ = C_MD5::sm_gg(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 12.0)))))), rt::toint_d(20.0), rt::toint_d((-1926607734.0))));
        (l_A__loc6_ = C_MD5::sm_hh(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 5.0)))))), rt::toint_d(4.0), rt::toint_d((-378558.0))));
        (l_A__loc9_ = C_MD5::sm_hh(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 8.0)))))), rt::toint_d(11.0), rt::toint_d((-2022574463.0))));
        (l_A__loc8_ = C_MD5::sm_hh(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 11.0)))))), rt::toint_d(16.0), rt::toint_d(1839030562.0)));
        (l_A__loc7_ = C_MD5::sm_hh(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 14.0)))))), rt::toint_d(23.0), rt::toint_d((-35309556.0))));
        (l_A__loc6_ = C_MD5::sm_hh(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 1.0)))))), rt::toint_d(4.0), rt::toint_d((-1530992060.0))));
        (l_A__loc9_ = C_MD5::sm_hh(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 4.0)))))), rt::toint_d(11.0), rt::toint_d(1272893353.0)));
        (l_A__loc8_ = C_MD5::sm_hh(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 7.0)))))), rt::toint_d(16.0), rt::toint_d((-155497632.0))));
        (l_A__loc7_ = C_MD5::sm_hh(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 10.0)))))), rt::toint_d(23.0), rt::toint_d((-1094730640.0))));
        (l_A__loc6_ = C_MD5::sm_hh(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 13.0)))))), rt::toint_d(4.0), rt::toint_d(681279174.0)));
        (l_A__loc9_ = C_MD5::sm_hh(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 0.0)))))), rt::toint_d(11.0), rt::toint_d((-358537222.0))));
        (l_A__loc8_ = C_MD5::sm_hh(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 3.0)))))), rt::toint_d(16.0), rt::toint_d((-722521979.0))));
        (l_A__loc7_ = C_MD5::sm_hh(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 6.0)))))), rt::toint_d(23.0), rt::toint_d(76029189.0)));
        (l_A__loc6_ = C_MD5::sm_hh(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 9.0)))))), rt::toint_d(4.0), rt::toint_d((-640364487.0))));
        (l_A__loc9_ = C_MD5::sm_hh(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 12.0)))))), rt::toint_d(11.0), rt::toint_d((-421815835.0))));
        (l_A__loc8_ = C_MD5::sm_hh(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 15.0)))))), rt::toint_d(16.0), rt::toint_d(530742520.0)));
        (l_A__loc7_ = C_MD5::sm_hh(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 2.0)))))), rt::toint_d(23.0), rt::toint_d((-995338651.0))));
        (l_A__loc6_ = C_MD5::sm_ii(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 0.0)))))), rt::toint_d(6.0), rt::toint_d((-198630844.0))));
        (l_A__loc9_ = C_MD5::sm_ii(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 7.0)))))), rt::toint_d(10.0), rt::toint_d(1126891415.0)));
        (l_A__loc8_ = C_MD5::sm_ii(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 14.0)))))), rt::toint_d(15.0), rt::toint_d((-1416354905.0))));
        (l_A__loc7_ = C_MD5::sm_ii(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 5.0)))))), rt::toint_d(21.0), rt::toint_d((-57434055.0))));
        (l_A__loc6_ = C_MD5::sm_ii(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 12.0)))))), rt::toint_d(6.0), rt::toint_d(1700485571.0)));
        (l_A__loc9_ = C_MD5::sm_ii(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 3.0)))))), rt::toint_d(10.0), rt::toint_d((-1894986606.0))));
        (l_A__loc8_ = C_MD5::sm_ii(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 10.0)))))), rt::toint_d(15.0), rt::toint_d((-1051523.0))));
        (l_A__loc7_ = C_MD5::sm_ii(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 1.0)))))), rt::toint_d(21.0), rt::toint_d((-2054922799.0))));
        (l_A__loc6_ = C_MD5::sm_ii(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 8.0)))))), rt::toint_d(6.0), rt::toint_d(1873313359.0)));
        (l_A__loc9_ = C_MD5::sm_ii(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 15.0)))))), rt::toint_d(10.0), rt::toint_d((-30611744.0))));
        (l_A__loc8_ = C_MD5::sm_ii(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 6.0)))))), rt::toint_d(15.0), rt::toint_d((-1560198380.0))));
        (l_A__loc7_ = C_MD5::sm_ii(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 13.0)))))), rt::toint_d(21.0), rt::toint_d(1309151649.0)));
        (l_A__loc6_ = C_MD5::sm_ii(l_A__loc6_, l_A__loc7_, l_A__loc8_, l_A__loc9_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 4.0)))))), rt::toint_d(6.0), rt::toint_d((-145523070.0))));
        (l_A__loc9_ = C_MD5::sm_ii(l_A__loc9_, l_A__loc6_, l_A__loc7_, l_A__loc8_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 11.0)))))), rt::toint_d(10.0), rt::toint_d((-1120210379.0))));
        (l_A__loc8_ = C_MD5::sm_ii(l_A__loc8_, l_A__loc9_, l_A__loc6_, l_A__loc7_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 2.0)))))), rt::toint_d(15.0), rt::toint_d(718787259.0)));
        (l_A__loc7_ = C_MD5::sm_ii(l_A__loc7_, l_A__loc8_, l_A__loc9_, l_A__loc6_, rt::toint(rt::arr_at(l_A__loc11_, ((double)(rt::toint_d((((double)(l_A__loc12_)) + 9.0)))))), rt::toint_d(21.0), rt::toint_d((-343485551.0))));
        (l_A__loc6_ = rt::toint_d((((double)(l_A__loc6_)) + ((double)(l_A__loc2_)))));
        (l_A__loc7_ = rt::toint_d((((double)(l_A__loc7_)) + ((double)(l_A__loc3_)))));
        (l_A__loc8_ = rt::toint_d((((double)(l_A__loc8_)) + ((double)(l_A__loc4_)))));
        (l_A__loc9_ = rt::toint_d((((double)(l_A__loc9_)) + ((double)(l_A__loc5_)))));
        (l_A__loc12_ = rt::toint_d((((double)(l_A__loc12_)) + 16.0)));
    }
    (g::SV.C_MD5__digest = rt::new_bytearray());
    (void)(rt::dcallv(g::SV.C_MD5__digest, rt::N_writeInt, rt::V((double)(l_A__loc6_))));
    (void)(rt::dcallv(g::SV.C_MD5__digest, rt::N_writeInt, rt::V((double)(l_A__loc7_))));
    (void)(rt::dcallv(g::SV.C_MD5__digest, rt::N_writeInt, rt::V((double)(l_A__loc8_))));
    (void)(rt::dcallv(g::SV.C_MD5__digest, rt::N_writeInt, rt::V((double)(l_A__loc9_))));
    ({ rt::Value _v27 = rt::V(0.0); rt::dset(g::SV.C_MD5__digest, rt::N_position, _v27); _v27; });
    return rt::slot_string(rt::add(rt::add(rt::add(C_IntUtil::sm_toHex(l_A__loc6_, C_IntUtil::dsm_toHex_1()), C_IntUtil::sm_toHex(l_A__loc7_, C_IntUtil::dsm_toHex_1())), C_IntUtil::sm_toHex(l_A__loc8_, C_IntUtil::dsm_toHex_1())), C_IntUtil::sm_toHex(l_A__loc9_, C_IntUtil::dsm_toHex_1())));
    return rt::NUL;
}
int32_t C_MD5::sm_f(int32_t p0, int32_t p1, int32_t p2) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    RT_FN("MD5.f");
    return rt::bitor_(((double)(rt::bitand_(((double)(l_param1)), ((double)(l_param2))))), ((double)(rt::bitand_(((double)(rt::bitnot_(((double)(l_param1))))), ((double)(l_param3))))));
    return 0;
}
int32_t C_MD5::sm_g(int32_t p0, int32_t p1, int32_t p2) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    RT_FN("MD5.g");
    return rt::bitor_(((double)(rt::bitand_(((double)(l_param1)), ((double)(l_param3))))), ((double)(rt::bitand_(((double)(l_param2)), ((double)(rt::bitnot_(((double)(l_param3)))))))));
    return 0;
}
int32_t C_MD5::sm_h(int32_t p0, int32_t p1, int32_t p2) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    RT_FN("MD5.h");
    return rt::bitxor_(((double)(rt::bitxor_(((double)(l_param1)), ((double)(l_param2))))), ((double)(l_param3)));
    return 0;
}
int32_t C_MD5::sm_i(int32_t p0, int32_t p1, int32_t p2) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    RT_FN("MD5.i");
    return rt::bitxor_(((double)(l_param2)), ((double)((rt::bitor_(((double)(l_param1)), ((double)(rt::bitnot_(((double)(l_param3))))))))));
    return 0;
}
int32_t C_MD5::sm_transform(rt::Value p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6, int32_t p7) {
    rt::Value l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    int32_t l_param4 = p3;
    int32_t l_param5 = p4;
    int32_t l_param6 = p5;
    int32_t l_param7 = p6;
    int32_t l_param8 = p7;
    int32_t l_A__loc9_ = 0;
    RT_FN("MD5.transform");
    (l_A__loc9_ = rt::toint_d((((((double)(l_param2)) + ((double)(rt::toint(rt::callv(l_param1, rt::V((double)(l_param3)), rt::V((double)(l_param4)), rt::V((double)(l_param5))))))) + ((double)(l_param6))) + ((double)(l_param8)))));
    return rt::toint_d((((double)(C_IntUtil::sm_rol(l_A__loc9_, l_param7))) + ((double)(l_param3))));
    return 0;
}
int32_t C_MD5::sm_ff(int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    int32_t l_param4 = p3;
    int32_t l_param5 = p4;
    int32_t l_param6 = p5;
    int32_t l_param7 = p6;
    RT_FN("MD5.ff");
    return C_MD5::sm_transform(rt::dget(rt::VO(C_MD5::CI.ref), NM_f), l_param1, l_param2, l_param3, l_param4, l_param5, l_param6, l_param7);
    return 0;
}
int32_t C_MD5::sm_gg(int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    int32_t l_param4 = p3;
    int32_t l_param5 = p4;
    int32_t l_param6 = p5;
    int32_t l_param7 = p6;
    RT_FN("MD5.gg");
    return C_MD5::sm_transform(rt::dget(rt::VO(C_MD5::CI.ref), NM_g), l_param1, l_param2, l_param3, l_param4, l_param5, l_param6, l_param7);
    return 0;
}
int32_t C_MD5::sm_hh(int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    int32_t l_param4 = p3;
    int32_t l_param5 = p4;
    int32_t l_param6 = p5;
    int32_t l_param7 = p6;
    RT_FN("MD5.hh");
    return C_MD5::sm_transform(rt::dget(rt::VO(C_MD5::CI.ref), NM_h), l_param1, l_param2, l_param3, l_param4, l_param5, l_param6, l_param7);
    return 0;
}
int32_t C_MD5::sm_ii(int32_t p0, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t p5, int32_t p6) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_param3 = p2;
    int32_t l_param4 = p3;
    int32_t l_param5 = p4;
    int32_t l_param6 = p5;
    int32_t l_param7 = p6;
    RT_FN("MD5.ii");
    return C_MD5::sm_transform(rt::dget(rt::VO(C_MD5::CI.ref), NM_i), l_param1, l_param2, l_param3, l_param4, l_param5, l_param6, l_param7);
    return 0;
}
rt::Value C_MD5::sm_createBlocks(rt::Value p0) {
    rt::Value l_param1 = p0;
    int32_t l_A__loc4_ = 0;
    rt::Value l_A__loc3_ = rt::NUL;
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc6_ = 0;
    int32_t l_A__loc7_ = 0;
    RT_FN("MD5.createBlocks");
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::arr_lit({}));
    (l_A__loc2_ = rt::toint_d((rt::alen(l_param1) * 8.0)));
    (l_A__loc4_ = rt::toint_d(0.0));
    while ((((double)(l_A__loc4_)) < ((double)(l_A__loc2_)))) {
        (l_A__loc6_ = rt::shr(((double)(l_A__loc4_)), 5.0));
        (l_A__loc7_ = rt::bitor_(rt::tonum(rt::arr_at(l_A__loc3_, ((double)(l_A__loc6_)))), ((double)(rt::shl(((double)((rt::bitand_(rt::tonum(rt::idx_get(l_param1, rt::V((((double)(l_A__loc4_)) / 8.0)))), 255.0)))), rt::mod(((double)(l_A__loc4_)), 32.0))))));
        ({ rt::Value _v28 = rt::V((double)(l_A__loc7_)); rt::idx_set(l_A__loc3_, rt::V((double)(l_A__loc6_)), _v28); });
        (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 8.0)));
    }
    (l_A__loc7_ = rt::shr(((double)(l_A__loc2_)), 5.0));
    (l_A__loc6_ = rt::bitor_(rt::tonum(rt::arr_at(l_A__loc3_, ((double)(l_A__loc7_)))), ((double)(rt::shl(128.0, rt::mod(((double)(l_A__loc2_)), 32.0))))));
    ({ rt::Value _v29 = rt::V((double)(l_A__loc6_)); rt::idx_set(l_A__loc3_, rt::V((double)(l_A__loc7_)), _v29); });
    ({ rt::Value _v30 = rt::V((double)(l_A__loc2_)); rt::idx_set(l_A__loc3_, rt::V((double)(rt::toint_d((((double)((rt::shl(rt::ushr((((double)(l_A__loc2_)) + 64.0), 9.0), 4.0)))) + 14.0)))), _v30); });
    return l_A__loc3_;
    return rt::NUL;
}
C_MD5* C_MD5::alloc_() {
    C_MD5* o = rt::make<C_MD5>();
    return o;
}
rt::Value C_MD5::mk_(rt::Value* a, int n) {
    C_MD5* o = alloc_();
    o->C_MD5::ctor_();
    return rt::VO(o);
}
bool C_MD5::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_MD5::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_MD5::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_MD5::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_MD5::smeth_(int id) {
    switch (id) {
    case NM_hash: return true;
    case NM_hashBytes: return true;
    case NM_hashBinary: return true;
    case NM_f: return true;
    case NM_g: return true;
    case NM_h: return true;
    case NM_i: return true;
    case NM_transform: return true;
    case NM_ff: return true;
    case NM_gg: return true;
    case NM_hh: return true;
    case NM_ii: return true;
    case NM_createBlocks: return true;
    default: return false;
    }
}
bool C_MD5::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_digest: out = g::SV.C_MD5__digest; return true;
    case NM_hash: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_hashBytes: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_hashBinary: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_f: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_g: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_h: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_i: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_transform: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_ff: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_gg: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_hh: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_ii: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_createBlocks: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_MD5::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_digest: g::SV.C_MD5__digest = v; return true;
    default: return false;
    }
}
bool C_MD5::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_hash: out = sm_hash(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_hashBytes: out = sm_hashBytes(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_hashBinary: out = sm_hashBinary(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_f: out = rt::V((double)(sm_f(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0)))); return true;
    case NM_g: out = rt::V((double)(sm_g(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0)))); return true;
    case NM_h: out = rt::V((double)(sm_h(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0)))); return true;
    case NM_i: out = rt::V((double)(sm_i(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0)))); return true;
    case NM_transform: out = rt::V((double)(sm_transform(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0), rt::arg<int32_t>(a, n, 3, 0), rt::arg<int32_t>(a, n, 4, 0), rt::arg<int32_t>(a, n, 5, 0), rt::arg<int32_t>(a, n, 6, 0), rt::arg<int32_t>(a, n, 7, 0)))); return true;
    case NM_ff: out = rt::V((double)(sm_ff(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0), rt::arg<int32_t>(a, n, 3, 0), rt::arg<int32_t>(a, n, 4, 0), rt::arg<int32_t>(a, n, 5, 0), rt::arg<int32_t>(a, n, 6, 0)))); return true;
    case NM_gg: out = rt::V((double)(sm_gg(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0), rt::arg<int32_t>(a, n, 3, 0), rt::arg<int32_t>(a, n, 4, 0), rt::arg<int32_t>(a, n, 5, 0), rt::arg<int32_t>(a, n, 6, 0)))); return true;
    case NM_hh: out = rt::V((double)(sm_hh(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0), rt::arg<int32_t>(a, n, 3, 0), rt::arg<int32_t>(a, n, 4, 0), rt::arg<int32_t>(a, n, 5, 0), rt::arg<int32_t>(a, n, 6, 0)))); return true;
    case NM_ii: out = rt::V((double)(sm_ii(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0), rt::arg<int32_t>(a, n, 2, 0), rt::arg<int32_t>(a, n, 3, 0), rt::arg<int32_t>(a, n, 4, 0), rt::arg<int32_t>(a, n, 5, 0), rt::arg<int32_t>(a, n, 6, 0)))); return true;
    case NM_createBlocks: out = sm_createBlocks(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    default: return false;
    }
}
void C_JSON::ctor_() {
    RT_FN("JSON.JSON");
    (void)(rt::NUL);
}
rt::Value C_JSON::sm_encode(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("JSON.encode");
    return rt::slot_string(rt::dcallv(rt::new_stubinst(), NM_getString));
    return rt::NUL;
}
bool C_JSON::dsm_decode_1() { return true; }
rt::Value C_JSON::sm_decode(rt::Value p0, bool p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    bool l_param2 = p1;
    RT_FN("JSON.decode");
    return ({ rt::Value _o32 = ({ C_JSONDecoder* _n31 = C_JSONDecoder::alloc_(); _n31->C_JSONDecoder::ctor_(l_param1, l_param2); rt::VO(_n31); }); C_JSONDecoder* _p33 = rt::as_ptr<C_JSONDecoder>(_o32); _p33 ? _p33->m_getValue() : rt::dcallv(_o32, NM_getValue); });
    return rt::NUL;
}
C_JSON* C_JSON::alloc_() {
    C_JSON* o = rt::make<C_JSON>();
    return o;
}
rt::Value C_JSON::mk_(rt::Value* a, int n) {
    C_JSON* o = alloc_();
    o->C_JSON::ctor_();
    return rt::VO(o);
}
bool C_JSON::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_JSON::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_JSON::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_JSON::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_JSON::smeth_(int id) {
    switch (id) {
    case NM_encode: return true;
    case NM_decode: return true;
    default: return false;
    }
}
bool C_JSON::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_encode: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_decode: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_JSON::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_JSON::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_encode: out = sm_encode(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_decode: out = sm_decode(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, C_JSON::dsm_decode_1())); return true;
    default: return false;
    }
}
void C_JSONDecoder::ctor_(rt::Value p0, bool p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    bool l_param2 = p1;
    RT_FN("JSONDecoder.JSONDecoder");
    (void)(rt::NUL);
    ({ bool _v34 = l_param2; this->f_strict = _v34; _v34; });
    ({ rt::Value _v36 = ({ C_JSONTokenizer* _n35 = C_JSONTokenizer::alloc_(); _n35->C_JSONTokenizer::ctor_(l_param1, l_param2); rt::VO(_n35); }); this->f_tokenizer = _v36; _v36; });
    (void)(this->m_nextToken());
    ({ rt::Value _v37 = this->m_parseValue(); this->f_value = _v37; _v37; });
    if ((l_param2 && (!rt::eq(this->m_nextToken(), rt::NUL)))) {
        (void)(({ rt::Value _o38 = this->f_tokenizer; C_JSONTokenizer* _p39 = rt::as_ptr<C_JSONTokenizer>(_o38); _p39 ? _p39->m_parseError(rt::VS(g::LS[104])) : rt::dcallv(_o38, NM_parseError, rt::VS(g::LS[104])); }));
    }
}
rt::Value C_JSONDecoder::m_getValue() {
    RT_FN("JSONDecoder.getValue");
    return this->f_value;
    return rt::NUL;
}
rt::Value C_JSONDecoder::m_nextToken() {
    RT_FN("JSONDecoder.nextToken");
    return ({ rt::Value _v42 = ({ rt::Value _o40 = this->f_tokenizer; C_JSONTokenizer* _p41 = rt::as_ptr<C_JSONTokenizer>(_o40); _p41 ? _p41->m_getNextToken() : rt::dcallv(_o40, NM_getNextToken); }); this->f_token = _v42; _v42; });
    return rt::NUL;
}
rt::Value C_JSONDecoder::m_nextValidToken() {
    RT_FN("JSONDecoder.nextValidToken");
    ({ rt::Value _v45 = ({ rt::Value _o43 = this->f_tokenizer; C_JSONTokenizer* _p44 = rt::as_ptr<C_JSONTokenizer>(_o43); _p44 ? _p44->m_getNextToken() : rt::dcallv(_o43, NM_getNextToken); }); this->f_token = _v45; _v45; });
    (void)(this->m_checkValidToken());
    return this->f_token;
    return rt::NUL;
}
rt::Value C_JSONDecoder::m_checkValidToken() {
    RT_FN("JSONDecoder.checkValidToken");
    if (rt::eq(this->f_token, rt::NUL)) {
        (void)(({ rt::Value _o46 = this->f_tokenizer; C_JSONTokenizer* _p47 = rt::as_ptr<C_JSONTokenizer>(_o46); _p47 ? _p47->m_parseError(rt::VS(g::LS[105])) : rt::dcallv(_o46, NM_parseError, rt::VS(g::LS[105])); }));
    }
    return rt::NUL;
}
rt::Value C_JSONDecoder::m_parseArray() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("JSONDecoder.parseArray");
    (l_A__loc1_ = rt::arr_lit({}));
    (void)(this->m_nextValidToken());
    if ((((double)(({ rt::Value _o48 = this->f_token; C_JSONToken* _p49 = rt::as_ptr<C_JSONToken>(_o48); _p49 ? _p49->f_type : rt::toint(rt::dget(_o48, NM_type)); }))) == 4.0)) {
        return l_A__loc1_;
    }
    if (((!this->f_strict) && (((double)(({ rt::Value _o50 = this->f_token; C_JSONToken* _p51 = rt::as_ptr<C_JSONToken>(_o50); _p51 ? _p51->f_type : rt::toint(rt::dget(_o50, NM_type)); }))) == 0.0))) {
        (void)(this->m_nextValidToken());
        if ((((double)(({ rt::Value _o52 = this->f_token; C_JSONToken* _p53 = rt::as_ptr<C_JSONToken>(_o52); _p53 ? _p53->f_type : rt::toint(rt::dget(_o52, NM_type)); }))) == 4.0)) {
            return l_A__loc1_;
        }
        (void)(({ rt::Value _o56 = this->f_tokenizer; C_JSONTokenizer* _p57 = rt::as_ptr<C_JSONTokenizer>(_o56); _p57 ? _p57->m_parseError(rt::add(rt::VS(g::LS[106]), ({ rt::Value _o54 = this->f_token; C_JSONToken* _p55 = rt::as_ptr<C_JSONToken>(_o54); _p55 ? _p55->f_value : rt::dget(_o54, NM_value); }))) : rt::dcallv(_o56, NM_parseError, rt::add(rt::VS(g::LS[106]), ({ rt::Value _o58 = this->f_token; C_JSONToken* _p59 = rt::as_ptr<C_JSONToken>(_o58); _p59 ? _p59->f_value : rt::dget(_o58, NM_value); }))); }));
    }
    while (true) {
        (void)(rt::dcallv(l_A__loc1_, rt::N_push, this->m_parseValue()));
        (void)(this->m_nextValidToken());
        if ((((double)(({ rt::Value _o60 = this->f_token; C_JSONToken* _p61 = rt::as_ptr<C_JSONToken>(_o60); _p61 ? _p61->f_type : rt::toint(rt::dget(_o60, NM_type)); }))) == 4.0)) {
            break;
        }
        if ((((double)(({ rt::Value _o62 = this->f_token; C_JSONToken* _p63 = rt::as_ptr<C_JSONToken>(_o62); _p63 ? _p63->f_type : rt::toint(rt::dget(_o62, NM_type)); }))) == 0.0)) {
            (void)(this->m_nextToken());
            if ((!this->f_strict)) {
                (void)(this->m_checkValidToken());
                if ((((double)(({ rt::Value _o64 = this->f_token; C_JSONToken* _p65 = rt::as_ptr<C_JSONToken>(_o64); _p65 ? _p65->f_type : rt::toint(rt::dget(_o64, NM_type)); }))) == 4.0)) {
                    return l_A__loc1_;
                }
            }
        } else {
            (void)(({ rt::Value _o68 = this->f_tokenizer; C_JSONTokenizer* _p69 = rt::as_ptr<C_JSONTokenizer>(_o68); _p69 ? _p69->m_parseError(rt::add(rt::VS(g::LS[107]), ({ rt::Value _o66 = this->f_token; C_JSONToken* _p67 = rt::as_ptr<C_JSONToken>(_o66); _p67 ? _p67->f_value : rt::dget(_o66, NM_value); }))) : rt::dcallv(_o68, NM_parseError, rt::add(rt::VS(g::LS[107]), ({ rt::Value _o70 = this->f_token; C_JSONToken* _p71 = rt::as_ptr<C_JSONToken>(_o70); _p71 ? _p71->f_value : rt::dget(_o70, NM_value); }))); }));
        }
    }
    return l_A__loc1_;
    return rt::NUL;
}
rt::Value C_JSONDecoder::m_parseObject() {
    rt::Value l_A__loc1_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("JSONDecoder.parseObject");
    (l_A__loc1_ = rt::slot_string(rt::NUL));
    (l_A__loc2_ = rt::dict_lit({}));
    (void)(this->m_nextValidToken());
    if ((((double)(({ rt::Value _o72 = this->f_token; C_JSONToken* _p73 = rt::as_ptr<C_JSONToken>(_o72); _p73 ? _p73->f_type : rt::toint(rt::dget(_o72, NM_type)); }))) == 2.0)) {
        return l_A__loc2_;
    }
    if (((!this->f_strict) && (((double)(({ rt::Value _o74 = this->f_token; C_JSONToken* _p75 = rt::as_ptr<C_JSONToken>(_o74); _p75 ? _p75->f_type : rt::toint(rt::dget(_o74, NM_type)); }))) == 0.0))) {
        (void)(this->m_nextValidToken());
        if ((((double)(({ rt::Value _o76 = this->f_token; C_JSONToken* _p77 = rt::as_ptr<C_JSONToken>(_o76); _p77 ? _p77->f_type : rt::toint(rt::dget(_o76, NM_type)); }))) == 2.0)) {
            return l_A__loc2_;
        }
        (void)(({ rt::Value _o80 = this->f_tokenizer; C_JSONTokenizer* _p81 = rt::as_ptr<C_JSONTokenizer>(_o80); _p81 ? _p81->m_parseError(rt::add(rt::VS(g::LS[108]), ({ rt::Value _o78 = this->f_token; C_JSONToken* _p79 = rt::as_ptr<C_JSONToken>(_o78); _p79 ? _p79->f_value : rt::dget(_o78, NM_value); }))) : rt::dcallv(_o80, NM_parseError, rt::add(rt::VS(g::LS[108]), ({ rt::Value _o82 = this->f_token; C_JSONToken* _p83 = rt::as_ptr<C_JSONToken>(_o82); _p83 ? _p83->f_value : rt::dget(_o82, NM_value); }))); }));
    }
    while (true) {
        if ((((double)(({ rt::Value _o84 = this->f_token; C_JSONToken* _p85 = rt::as_ptr<C_JSONToken>(_o84); _p85 ? _p85->f_type : rt::toint(rt::dget(_o84, NM_type)); }))) == 10.0)) {
            (l_A__loc1_ = rt::slot_string(rt::VS(rt::tostr(({ rt::Value _o86 = this->f_token; C_JSONToken* _p87 = rt::as_ptr<C_JSONToken>(_o86); _p87 ? _p87->f_value : rt::dget(_o86, NM_value); })))));
            (void)(this->m_nextValidToken());
            if ((((double)(({ rt::Value _o88 = this->f_token; C_JSONToken* _p89 = rt::as_ptr<C_JSONToken>(_o88); _p89 ? _p89->f_type : rt::toint(rt::dget(_o88, NM_type)); }))) == 6.0)) {
                (void)(this->m_nextToken());
                ({ rt::Value _v90 = this->m_parseValue(); rt::idx_set(l_A__loc2_, l_A__loc1_, _v90); });
                (void)(this->m_nextValidToken());
                if ((((double)(({ rt::Value _o91 = this->f_token; C_JSONToken* _p92 = rt::as_ptr<C_JSONToken>(_o91); _p92 ? _p92->f_type : rt::toint(rt::dget(_o91, NM_type)); }))) == 2.0)) {
                    break;
                }
                if ((((double)(({ rt::Value _o93 = this->f_token; C_JSONToken* _p94 = rt::as_ptr<C_JSONToken>(_o93); _p94 ? _p94->f_type : rt::toint(rt::dget(_o93, NM_type)); }))) == 0.0)) {
                    (void)(this->m_nextToken());
                    if ((!this->f_strict)) {
                        (void)(this->m_checkValidToken());
                        if ((((double)(({ rt::Value _o95 = this->f_token; C_JSONToken* _p96 = rt::as_ptr<C_JSONToken>(_o95); _p96 ? _p96->f_type : rt::toint(rt::dget(_o95, NM_type)); }))) == 2.0)) {
                            return l_A__loc2_;
                        }
                    }
                } else {
                    (void)(({ rt::Value _o99 = this->f_tokenizer; C_JSONTokenizer* _p100 = rt::as_ptr<C_JSONTokenizer>(_o99); _p100 ? _p100->m_parseError(rt::add(rt::VS(g::LS[109]), ({ rt::Value _o97 = this->f_token; C_JSONToken* _p98 = rt::as_ptr<C_JSONToken>(_o97); _p98 ? _p98->f_value : rt::dget(_o97, NM_value); }))) : rt::dcallv(_o99, NM_parseError, rt::add(rt::VS(g::LS[109]), ({ rt::Value _o101 = this->f_token; C_JSONToken* _p102 = rt::as_ptr<C_JSONToken>(_o101); _p102 ? _p102->f_value : rt::dget(_o101, NM_value); }))); }));
                }
            } else {
                (void)(({ rt::Value _o105 = this->f_tokenizer; C_JSONTokenizer* _p106 = rt::as_ptr<C_JSONTokenizer>(_o105); _p106 ? _p106->m_parseError(rt::add(rt::VS(g::LS[110]), ({ rt::Value _o103 = this->f_token; C_JSONToken* _p104 = rt::as_ptr<C_JSONToken>(_o103); _p104 ? _p104->f_value : rt::dget(_o103, NM_value); }))) : rt::dcallv(_o105, NM_parseError, rt::add(rt::VS(g::LS[110]), ({ rt::Value _o107 = this->f_token; C_JSONToken* _p108 = rt::as_ptr<C_JSONToken>(_o107); _p108 ? _p108->f_value : rt::dget(_o107, NM_value); }))); }));
            }
        } else {
            (void)(({ rt::Value _o111 = this->f_tokenizer; C_JSONTokenizer* _p112 = rt::as_ptr<C_JSONTokenizer>(_o111); _p112 ? _p112->m_parseError(rt::add(rt::VS(g::LS[111]), ({ rt::Value _o109 = this->f_token; C_JSONToken* _p110 = rt::as_ptr<C_JSONToken>(_o109); _p110 ? _p110->f_value : rt::dget(_o109, NM_value); }))) : rt::dcallv(_o111, NM_parseError, rt::add(rt::VS(g::LS[111]), ({ rt::Value _o113 = this->f_token; C_JSONToken* _p114 = rt::as_ptr<C_JSONToken>(_o113); _p114 ? _p114->f_value : rt::dget(_o113, NM_value); }))); }));
        }
    }
    return l_A__loc2_;
    return rt::NUL;
}
rt::Value C_JSONDecoder::m_parseValue() {
    RT_FN("JSONDecoder.parseValue");
    (void)(this->m_checkValidToken());
    {
        rt::Value _sw115 = rt::V((((double)(({ rt::Value _o117 = this->f_token; C_JSONToken* _p118 = rt::as_ptr<C_JSONToken>(_o117); _p118 ? _p118->f_type : rt::toint(rt::dget(_o117, NM_type)); }))) - 1.0));
        int _c116 = -1;
        if (_c116 == -1 && rt::strict_eq(_sw115, rt::V(0.0))) _c116 = 0;
        if (_c116 == -1 && rt::strict_eq(_sw115, rt::V(2.0))) _c116 = 1;
        if (_c116 == -1 && rt::strict_eq(_sw115, rt::V(6.0))) _c116 = 2;
        if (_c116 == -1 && rt::strict_eq(_sw115, rt::V(7.0))) _c116 = 3;
        if (_c116 == -1 && rt::strict_eq(_sw115, rt::V(8.0))) _c116 = 4;
        if (_c116 == -1 && rt::strict_eq(_sw115, rt::V(9.0))) _c116 = 5;
        if (_c116 == -1 && rt::strict_eq(_sw115, rt::V(10.0))) _c116 = 6;
        if (_c116 == -1 && rt::strict_eq(_sw115, rt::V(11.0))) _c116 = 7;
        if (_c116 == -1) _c116 = 8;
        switch (_c116) {
        case 0: {
            return this->m_parseObject();
        }
        case 1: {
            return this->m_parseArray();
        }
        case 2: {
        }
        case 3: {
        }
        case 4: {
        }
        case 5: {
        }
        case 6: {
            return ({ rt::Value _o119 = this->f_token; C_JSONToken* _p120 = rt::as_ptr<C_JSONToken>(_o119); _p120 ? _p120->f_value : rt::dget(_o119, NM_value); });
        }
        case 7: {
            if ((!this->f_strict)) {
                return ({ rt::Value _o121 = this->f_token; C_JSONToken* _p122 = rt::as_ptr<C_JSONToken>(_o121); _p122 ? _p122->f_value : rt::dget(_o121, NM_value); });
            }
            (void)(({ rt::Value _o125 = this->f_tokenizer; C_JSONTokenizer* _p126 = rt::as_ptr<C_JSONTokenizer>(_o125); _p126 ? _p126->m_parseError(rt::add(rt::VS(g::LS[112]), ({ rt::Value _o123 = this->f_token; C_JSONToken* _p124 = rt::as_ptr<C_JSONToken>(_o123); _p124 ? _p124->f_value : rt::dget(_o123, NM_value); }))) : rt::dcallv(_o125, NM_parseError, rt::add(rt::VS(g::LS[112]), ({ rt::Value _o127 = this->f_token; C_JSONToken* _p128 = rt::as_ptr<C_JSONToken>(_o127); _p128 ? _p128->f_value : rt::dget(_o127, NM_value); }))); }));
        }
        default: break;
        }
    }
    (void)(({ rt::Value _o131 = this->f_tokenizer; C_JSONTokenizer* _p132 = rt::as_ptr<C_JSONTokenizer>(_o131); _p132 ? _p132->m_parseError(rt::add(rt::VS(g::LS[112]), ({ rt::Value _o129 = this->f_token; C_JSONToken* _p130 = rt::as_ptr<C_JSONToken>(_o129); _p130 ? _p130->f_value : rt::dget(_o129, NM_value); }))) : rt::dcallv(_o131, NM_parseError, rt::add(rt::VS(g::LS[112]), ({ rt::Value _o133 = this->f_token; C_JSONToken* _p134 = rt::as_ptr<C_JSONToken>(_o133); _p134 ? _p134->f_value : rt::dget(_o133, NM_value); }))); }));
    return rt::NUL;
    return rt::NUL;
}
C_JSONDecoder* C_JSONDecoder::alloc_() {
    C_JSONDecoder* o = rt::make<C_JSONDecoder>();
    return o;
}
rt::Value C_JSONDecoder::mk_(rt::Value* a, int n) {
    C_JSONDecoder* o = alloc_();
    o->C_JSONDecoder::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, false));
    return rt::VO(o);
}
bool C_JSONDecoder::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_strict: out = rt::VB(f_strict); return true;
    case NM_value: out = f_value; return true;
    case NM_tokenizer: out = f_tokenizer; return true;
    case NM_token: out = f_token; return true;
    case NM_getValue: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_nextToken: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_nextValidToken: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_checkValidToken: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_parseArray: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_parseObject: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_parseValue: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_JSONDecoder::dset(int id, rt::Value v) {
    switch (id) {
    case NM_strict: f_strict = rt::T(v); return true;
    case NM_value: f_value = v; return true;
    case NM_tokenizer: f_tokenizer = v; return true;
    case NM_token: f_token = v; return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_JSONDecoder::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_getValue: out = m_getValue(); return true;
    case NM_nextToken: out = m_nextToken(); return true;
    case NM_nextValidToken: out = m_nextValidToken(); return true;
    case NM_checkValidToken: out = m_checkValidToken(); return true;
    case NM_parseArray: out = m_parseArray(); return true;
    case NM_parseObject: out = m_parseObject(); return true;
    case NM_parseValue: out = m_parseValue(); return true;
    case NM_strict: { rt::Value f = rt::VB(f_strict); out = rt::call_value(f, a, n); return true; }
    case NM_value: { rt::Value f = f_value; out = rt::call_value(f, a, n); return true; }
    case NM_tokenizer: { rt::Value f = f_tokenizer; out = rt::call_value(f, a, n); return true; }
    case NM_token: { rt::Value f = f_token; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_JSONDecoder::dmeth(int id) {
    switch (id) {
    case NM_getValue: return true;
    case NM_nextToken: return true;
    case NM_nextValidToken: return true;
    case NM_checkValidToken: return true;
    case NM_parseArray: return true;
    case NM_parseObject: return true;
    case NM_parseValue: return true;
    case NM_strict: return false;
    case NM_value: return false;
    case NM_tokenizer: return false;
    case NM_token: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_JSONDecoder::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_JSONDecoder::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_JSONDecoder::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_JSONDecoder::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
rt::Value C_JSONParseError::dctor_0() { return rt::slot_string(rt::VS(g::LS[113])); }
int32_t C_JSONParseError::dctor_1() { return rt::toint_d(0.0); }
rt::Value C_JSONParseError::dctor_2() { return rt::slot_string(rt::VS(g::LS[113])); }
void C_JSONParseError::ctor_(rt::Value p0, int32_t p1, rt::Value p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    int32_t l_param2 = p1;
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("JSONParseError.JSONParseError");
    (void)(rt::NUL);
    ({ rt::Value _v135 = rt::VS(g::LS[114]); rt::dset(rt::VO(this), rt::N_name, _v135); _v135; });
    ({ int32_t _v136 = l_param2; this->f__location = _v136; _v136; });
    ({ rt::Value _v137 = l_param3; this->f__text = rt::slot_string(_v137); _v137; });
}
int32_t C_JSONParseError::g_location() {
    RT_FN("JSONParseError.location_get");
    return this->f__location;
    return 0;
}
rt::Value C_JSONParseError::g_text() {
    RT_FN("JSONParseError.text_get");
    return rt::slot_string(this->f__text);
    return rt::NUL;
}
C_JSONParseError* C_JSONParseError::alloc_() {
    C_JSONParseError* o = rt::make<C_JSONParseError>();
    return o;
}
rt::Value C_JSONParseError::mk_(rt::Value* a, int n) {
    C_JSONParseError* o = alloc_();
    o->C_JSONParseError::ctor_(rt::arg<rt::Value>(a, n, 0, C_JSONParseError::dctor_0()), rt::arg<int32_t>(a, n, 1, C_JSONParseError::dctor_1()), rt::arg<rt::Value>(a, n, 2, C_JSONParseError::dctor_2()));
    return rt::VO(o);
}
bool C_JSONParseError::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_location: out = rt::V((double)(g_location())); return true;
    case NM_text: out = g_text(); return true;
    case NM__location: out = rt::V((double)(f__location)); return true;
    case NM__text: out = f__text; return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_JSONParseError::dset(int id, rt::Value v) {
    switch (id) {
    case NM__location: f__location = rt::toint(v); return true;
    case NM__text: f__text = rt::slot_string(v); return true;
    case NM_location: return false;
    case NM_text: return false;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_JSONParseError::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_location: { rt::Value f = rt::V((double)(g_location())); out = rt::call_value(f, a, n); return true; }
    case NM_text: { rt::Value f = g_text(); out = rt::call_value(f, a, n); return true; }
    case NM__location: { rt::Value f = rt::V((double)(f__location)); out = rt::call_value(f, a, n); return true; }
    case NM__text: { rt::Value f = f__text; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_JSONParseError::dmeth(int id) {
    switch (id) {
    case NM_location: return false;
    case NM_text: return false;
    case NM__location: return false;
    case NM__text: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_JSONParseError::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_JSONParseError::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_JSONParseError::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_JSONParseError::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
int32_t C_JSONToken::dctor_0() { return rt::toint_d((-1.0)); }
rt::Value C_JSONToken::dctor_1() { return rt::NUL; }
void C_JSONToken::ctor_(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("JSONToken.JSONToken");
    (void)(rt::NUL);
    ({ int32_t _v138 = l_param1; this->f_type = _v138; _v138; });
    ({ rt::Value _v139 = l_param2; this->f_value = _v139; _v139; });
}
int32_t C_JSONToken::dsm_create_0() { return rt::toint_d((-1.0)); }
rt::Value C_JSONToken::dsm_create_1() { return rt::NUL; }
rt::Value C_JSONToken::sm_create(int32_t p0, rt::Value p1) {
    int32_t l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("JSONToken.create");
    ({ int32_t _v142 = l_param1; rt::Value _o140 = g::SV.C_JSONToken__token; C_JSONToken* _p141 = rt::as_ptr<C_JSONToken>(_o140); if (_p141) _p141->f_type = _v142; else rt::dset(_o140, NM_type, rt::V((double)(_v142))); _v142; });
    ({ rt::Value _v145 = l_param2; rt::Value _o143 = g::SV.C_JSONToken__token; C_JSONToken* _p144 = rt::as_ptr<C_JSONToken>(_o143); if (_p144) _p144->f_value = _v145; else rt::dset(_o143, NM_value, _v145); _v145; });
    return g::SV.C_JSONToken__token;
    return rt::NUL;
}
C_JSONToken* C_JSONToken::alloc_() {
    C_JSONToken* o = rt::make<C_JSONToken>();
    return o;
}
rt::Value C_JSONToken::mk_(rt::Value* a, int n) {
    C_JSONToken* o = alloc_();
    o->C_JSONToken::ctor_(rt::arg<int32_t>(a, n, 0, C_JSONToken::dctor_0()), rt::arg<rt::Value>(a, n, 1, C_JSONToken::dctor_1()));
    return rt::VO(o);
}
bool C_JSONToken::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_type: out = rt::V((double)(f_type)); return true;
    case NM_value: out = f_value; return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_JSONToken::dset(int id, rt::Value v) {
    switch (id) {
    case NM_type: f_type = rt::toint(v); return true;
    case NM_value: f_value = v; return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_JSONToken::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_type: { rt::Value f = rt::V((double)(f_type)); out = rt::call_value(f, a, n); return true; }
    case NM_value: { rt::Value f = f_value; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_JSONToken::dmeth(int id) {
    switch (id) {
    case NM_type: return false;
    case NM_value: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_JSONToken::smeth_(int id) {
    switch (id) {
    case NM_create: return true;
    default: return false;
    }
}
bool C_JSONToken::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_token: out = g::SV.C_JSONToken__token; return true;
    case NM_create: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_JSONToken::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_token: g::SV.C_JSONToken__token = v; return true;
    default: return false;
    }
}
bool C_JSONToken::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_create: out = sm_create(rt::arg<int32_t>(a, n, 0, C_JSONToken::dsm_create_0()), rt::arg<rt::Value>(a, n, 1, C_JSONToken::dsm_create_1())); return true;
    default: return false;
    }
}
void C_JSONTokenType::ctor_() {
    RT_FN("JSONTokenType.JSONTokenType");
    (void)(rt::NUL);
}
C_JSONTokenType* C_JSONTokenType::alloc_() {
    C_JSONTokenType* o = rt::make<C_JSONTokenType>();
    return o;
}
rt::Value C_JSONTokenType::mk_(rt::Value* a, int n) {
    C_JSONTokenType* o = alloc_();
    o->C_JSONTokenType::ctor_();
    return rt::VO(o);
}
bool C_JSONTokenType::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_JSONTokenType::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_JSONTokenType::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_JSONTokenType::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_JSONTokenType::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_JSONTokenType::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_UNKNOWN: out = rt::V((double)(g::SV.C_JSONTokenType__UNKNOWN)); return true;
    case NM_COMMA: out = rt::V((double)(g::SV.C_JSONTokenType__COMMA)); return true;
    case NM_LEFT_BRACE: out = rt::V((double)(g::SV.C_JSONTokenType__LEFT_BRACE)); return true;
    case NM_RIGHT_BRACE: out = rt::V((double)(g::SV.C_JSONTokenType__RIGHT_BRACE)); return true;
    case NM_LEFT_BRACKET: out = rt::V((double)(g::SV.C_JSONTokenType__LEFT_BRACKET)); return true;
    case NM_RIGHT_BRACKET: out = rt::V((double)(g::SV.C_JSONTokenType__RIGHT_BRACKET)); return true;
    case NM_COLON: out = rt::V((double)(g::SV.C_JSONTokenType__COLON)); return true;
    case NM_TRUE: out = rt::V((double)(g::SV.C_JSONTokenType__TRUE)); return true;
    case NM_FALSE: out = rt::V((double)(g::SV.C_JSONTokenType__FALSE)); return true;
    case NM_NULL: out = rt::V((double)(g::SV.C_JSONTokenType__NULL)); return true;
    case NM_STRING: out = rt::V((double)(g::SV.C_JSONTokenType__STRING)); return true;
    case NM_NUMBER: out = rt::V((double)(g::SV.C_JSONTokenType__NUMBER)); return true;
    case NM_NAN: out = rt::V((double)(g::SV.C_JSONTokenType__NAN)); return true;
    default: return false;
    }
}
bool C_JSONTokenType::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_UNKNOWN: g::SV.C_JSONTokenType__UNKNOWN = rt::toint(v); return true;
    case NM_COMMA: g::SV.C_JSONTokenType__COMMA = rt::toint(v); return true;
    case NM_LEFT_BRACE: g::SV.C_JSONTokenType__LEFT_BRACE = rt::toint(v); return true;
    case NM_RIGHT_BRACE: g::SV.C_JSONTokenType__RIGHT_BRACE = rt::toint(v); return true;
    case NM_LEFT_BRACKET: g::SV.C_JSONTokenType__LEFT_BRACKET = rt::toint(v); return true;
    case NM_RIGHT_BRACKET: g::SV.C_JSONTokenType__RIGHT_BRACKET = rt::toint(v); return true;
    case NM_COLON: g::SV.C_JSONTokenType__COLON = rt::toint(v); return true;
    case NM_TRUE: g::SV.C_JSONTokenType__TRUE = rt::toint(v); return true;
    case NM_FALSE: g::SV.C_JSONTokenType__FALSE = rt::toint(v); return true;
    case NM_NULL: g::SV.C_JSONTokenType__NULL = rt::toint(v); return true;
    case NM_STRING: g::SV.C_JSONTokenType__STRING = rt::toint(v); return true;
    case NM_NUMBER: g::SV.C_JSONTokenType__NUMBER = rt::toint(v); return true;
    case NM_NAN: g::SV.C_JSONTokenType__NAN = rt::toint(v); return true;
    default: return false;
    }
}
bool C_JSONTokenType::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_JSONTokenizer::ctor_(rt::Value p0, bool p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    bool l_param2 = p1;
    RT_FN("JSONTokenizer.JSONTokenizer");
    ({ rt::Value _v147 = rt::new_regexp(rt::VS(g::LS[115]).s, rt::VS(g::LS[113]).s); this->f_controlCharsRegExp = _v147; _v147; });
    (void)(rt::NUL);
    ({ rt::Value _v148 = l_param1; this->f_jsonString = rt::slot_string(_v148); _v148; });
    ({ bool _v149 = l_param2; this->f_strict = _v149; _v149; });
    ({ double _v150 = 0.0; this->f_loc = rt::toint_d(_v150); _v150; });
    (void)(this->m_nextChar());
}
rt::Value C_JSONTokenizer::m_getNextToken() {
    rt::Value l_A__loc1_ = rt::NUL;
    rt::Value l_A__loc3_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("JSONTokenizer.getNextToken");
    (l_A__loc1_ = rt::slot_string(rt::NUL));
    (l_A__loc3_ = rt::slot_string(rt::NUL));
    (l_A__loc2_ = rt::slot_string(rt::NUL));
    (l_A__loc5_ = rt::slot_string(rt::NUL));
    (l_A__loc4_ = rt::NUL);
    (void)(this->m_skipIgnored());
    {
        rt::Value _sw151 = this->f_ch;
        int _c152 = -1;
        if (_c152 == -1 && rt::strict_eq(_sw151, rt::VS(g::LS[116]))) _c152 = 0;
        if (_c152 == -1 && rt::strict_eq(_sw151, rt::VS(g::LS[117]))) _c152 = 1;
        if (_c152 == -1 && rt::strict_eq(_sw151, rt::VS(g::LS[6]))) _c152 = 2;
        if (_c152 == -1 && rt::strict_eq(_sw151, rt::VS(g::LS[118]))) _c152 = 3;
        if (_c152 == -1 && rt::strict_eq(_sw151, rt::VS(g::LS[119]))) _c152 = 4;
        if (_c152 == -1 && rt::strict_eq(_sw151, rt::VS(g::LS[120]))) _c152 = 5;
        if (_c152 == -1 && rt::strict_eq(_sw151, rt::VS(g::LS[121]))) _c152 = 6;
        if (_c152 == -1 && rt::strict_eq(_sw151, rt::VS(g::LS[122]))) _c152 = 7;
        if (_c152 == -1 && rt::strict_eq(_sw151, rt::VS(g::LS[123]))) _c152 = 8;
        if (_c152 == -1 && rt::strict_eq(_sw151, rt::VS(g::LS[124]))) _c152 = 9;
        if (_c152 == -1 && rt::strict_eq(_sw151, rt::VS(g::LS[125]))) _c152 = 10;
        if (_c152 == -1) _c152 = 11;
        switch (_c152) {
        case 0: {
            (l_A__loc4_ = C_JSONToken::sm_create(rt::toint_d(1.0), this->f_ch));
            (void)(this->m_nextChar());
            break;
        }
        case 1: {
            (l_A__loc4_ = C_JSONToken::sm_create(rt::toint_d(2.0), this->f_ch));
            (void)(this->m_nextChar());
            break;
        }
        case 2: {
            (l_A__loc4_ = C_JSONToken::sm_create(rt::toint_d(3.0), this->f_ch));
            (void)(this->m_nextChar());
            break;
        }
        case 3: {
            (l_A__loc4_ = C_JSONToken::sm_create(rt::toint_d(4.0), this->f_ch));
            (void)(this->m_nextChar());
            break;
        }
        case 4: {
            (l_A__loc4_ = C_JSONToken::sm_create(rt::toint_d(0.0), this->f_ch));
            (void)(this->m_nextChar());
            break;
        }
        case 5: {
            (l_A__loc4_ = C_JSONToken::sm_create(rt::toint_d(6.0), this->f_ch));
            (void)(this->m_nextChar());
            break;
        }
        case 6: {
            (l_A__loc1_ = rt::slot_string(rt::add(rt::add(rt::add(rt::VS(g::LS[121]), this->m_nextChar()), this->m_nextChar()), this->m_nextChar())));
            if (rt::eq(l_A__loc1_, rt::VS(g::LS[126]))) {
                (l_A__loc4_ = C_JSONToken::sm_create(rt::toint_d(7.0), rt::VB(true)));
                (void)(this->m_nextChar());
                break;
            }
            (void)(this->m_parseError(rt::add(rt::VS(g::LS[127]), l_A__loc1_)));
            break;
        }
        case 7: {
            (l_A__loc3_ = rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[122]), this->m_nextChar()), this->m_nextChar()), this->m_nextChar()), this->m_nextChar())));
            if (rt::eq(l_A__loc3_, rt::VS(g::LS[128]))) {
                (l_A__loc4_ = C_JSONToken::sm_create(rt::toint_d(8.0), rt::VB(false)));
                (void)(this->m_nextChar());
                break;
            }
            (void)(this->m_parseError(rt::add(rt::VS(g::LS[129]), l_A__loc3_)));
            break;
        }
        case 8: {
            (l_A__loc2_ = rt::slot_string(rt::add(rt::add(rt::add(rt::VS(g::LS[123]), this->m_nextChar()), this->m_nextChar()), this->m_nextChar())));
            if (rt::eq(l_A__loc2_, rt::VS(g::LS[130]))) {
                (l_A__loc4_ = C_JSONToken::sm_create(rt::toint_d(9.0), rt::NUL));
                (void)(this->m_nextChar());
                break;
            }
            (void)(this->m_parseError(rt::add(rt::VS(g::LS[131]), l_A__loc2_)));
            break;
        }
        case 9: {
            (l_A__loc5_ = rt::slot_string(rt::add(rt::add(rt::VS(g::LS[124]), this->m_nextChar()), this->m_nextChar())));
            if (rt::eq(l_A__loc5_, rt::VS(g::LS[132]))) {
                (l_A__loc4_ = C_JSONToken::sm_create(rt::toint_d(12.0), rt::V(NAN)));
                (void)(this->m_nextChar());
                break;
            }
            (void)(this->m_parseError(rt::add(rt::VS(g::LS[133]), l_A__loc5_)));
            break;
        }
        case 10: {
            (l_A__loc4_ = this->m_readString());
            break;
        }
        case 11: {
            if ((this->m_isDigit(this->f_ch) || rt::eq(this->f_ch, rt::VS(g::LS[134])))) {
                (l_A__loc4_ = this->m_readNumber());
                break;
            }
            if (rt::eq(this->f_ch, rt::VS(g::LS[113]))) {
                (l_A__loc4_ = rt::NUL);
                break;
            }
            (void)(this->m_parseError(rt::add(rt::add(rt::VS(g::LS[112]), this->f_ch), rt::VS(g::LS[135]))));
        }
        default: break;
        }
    }
    return l_A__loc4_;
    return rt::NUL;
}
rt::Value C_JSONTokenizer::m_readString() {
    int32_t l_A__loc2_ = 0;
    int32_t l_A__loc1_ = 0;
    int32_t l_A__loc3_ = 0;
    rt::Value l_A__loc4_ = rt::NUL;
    RT_FN("JSONTokenizer.readString");
    (l_A__loc2_ = rt::toint_d(0.0));
    (l_A__loc1_ = rt::toint_d(0.0));
    (l_A__loc3_ = this->f_loc);
    while (true) {
        (l_A__loc3_ = rt::toint(rt::dcallv(this->f_jsonString, rt::N_indexOf, rt::VS(g::LS[125]), rt::V((double)(l_A__loc3_)))));
        if ((((double)(l_A__loc3_)) >= 0.0)) {
            (l_A__loc2_ = rt::toint_d(0.0));
            (l_A__loc1_ = rt::toint_d((((double)(l_A__loc3_)) - 1.0)));
            while (rt::eq(rt::dcallv(this->f_jsonString, rt::N_charAt, rt::V((double)(l_A__loc1_))), rt::VS(g::LS[136]))) {
                (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
                (l_A__loc1_ = rt::toint_d((((double)(l_A__loc1_)) - 1.0)));
            }
            if ((((double)((rt::bitand_(((double)(l_A__loc2_)), 1.0)))) == 0.0)) {
                break;
            }
            (l_A__loc3_ = rt::toint_d((((double)(l_A__loc3_)) + 1.0)));
        } else {
            (void)(this->m_parseError(rt::VS(g::LS[137])));
        }
    }
    (l_A__loc4_ = C_JSONToken::sm_create(rt::toint_d(10.0), this->m_unescapeString(rt::dcallv(this->f_jsonString, rt::N_substr, rt::V((double)(this->f_loc)), rt::V((((double)(l_A__loc3_)) - ((double)(this->f_loc))))))));
    ({ double _v153 = (((double)(l_A__loc3_)) + 1.0); this->f_loc = rt::toint_d(_v153); _v153; });
    (void)(this->m_nextChar());
    return l_A__loc4_;
    return rt::NUL;
}
rt::Value C_JSONTokenizer::m_unescapeString(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_A__loc8_ = rt::NUL;
    rt::Value l_A__loc6_ = rt::NUL;
    int32_t l_A__loc4_ = 0;
    int32_t l_A__loc7_ = 0;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc2_ = rt::NUL;
    int32_t l_A__loc9_ = 0;
    int32_t l_A__loc10_ = 0;
    int32_t l_A__loc3_ = 0;
    RT_FN("JSONTokenizer.unescapeString");
    (l_A__loc8_ = rt::slot_string(rt::NUL));
    (l_A__loc6_ = rt::slot_string(rt::NUL));
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc7_ = rt::toint_d(0.0));
    (l_A__loc5_ = rt::slot_string(rt::NUL));
    if ((this->f_strict && rt::T(rt::dcallv(this->f_controlCharsRegExp, rt::N_test, l_param1)))) {
        (void)(this->m_parseError(rt::VS(g::LS[138])));
    }
    (l_A__loc2_ = rt::slot_string(rt::VS(g::LS[113])));
    (l_A__loc9_ = rt::toint_d(0.0));
    (l_A__loc10_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::toint_d(rt::alen(l_param1)));
    do {
        (l_A__loc9_ = rt::toint(rt::dcallv(l_param1, rt::N_indexOf, rt::VS(g::LS[136]), rt::V((double)(l_A__loc10_)))));
        if ((((double)(l_A__loc9_)) < 0.0)) {
            (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::dcallv(l_param1, rt::N_substr, rt::V((double)(l_A__loc10_))))));
            break;
        }
        (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::dcallv(l_param1, rt::N_substr, rt::V((double)(l_A__loc10_)), rt::V((((double)(l_A__loc9_)) - ((double)(l_A__loc10_))))))));
        (l_A__loc10_ = rt::toint_d((((double)(l_A__loc9_)) + 2.0)));
        {
            rt::Value _sw154 = (l_A__loc8_ = rt::slot_string(rt::dcallv(l_param1, rt::N_charAt, rt::V((((double)(l_A__loc9_)) + 1.0)))));
            int _c155 = -1;
            if (_c155 == -1 && rt::strict_eq(_sw154, rt::VS(g::LS[125]))) _c155 = 0;
            if (_c155 == -1 && rt::strict_eq(_sw154, rt::VS(g::LS[136]))) _c155 = 1;
            if (_c155 == -1 && rt::strict_eq(_sw154, rt::VS(g::LS[123]))) _c155 = 2;
            if (_c155 == -1 && rt::strict_eq(_sw154, rt::VS(g::LS[139]))) _c155 = 3;
            if (_c155 == -1 && rt::strict_eq(_sw154, rt::VS(g::LS[121]))) _c155 = 4;
            if (_c155 == -1 && rt::strict_eq(_sw154, rt::VS(g::LS[140]))) _c155 = 5;
            if (_c155 == -1 && rt::strict_eq(_sw154, rt::VS(g::LS[122]))) _c155 = 6;
            if (_c155 == -1 && rt::strict_eq(_sw154, rt::VS(g::LS[141]))) _c155 = 7;
            if (_c155 == -1 && rt::strict_eq(_sw154, rt::VS(g::LS[142]))) _c155 = 8;
            if (_c155 == -1) _c155 = 9;
            switch (_c155) {
            case 0: {
                (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, l_A__loc8_)));
                break;
            }
            case 1: {
                (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, l_A__loc8_)));
                break;
            }
            case 2: {
                (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::VS(g::LS[143]))));
                break;
            }
            case 3: {
                (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::VS(g::LS[144]))));
                break;
            }
            case 4: {
                (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::VS(g::LS[145]))));
                break;
            }
            case 5: {
                (l_A__loc6_ = rt::slot_string(rt::VS(g::LS[113])));
                (l_A__loc4_ = rt::toint_d((((double)(l_A__loc10_)) + 4.0)));
                if ((((double)(l_A__loc4_)) > ((double)(l_A__loc3_)))) {
                    (void)(this->m_parseError(rt::VS(g::LS[146])));
                }
                (l_A__loc7_ = l_A__loc10_);
                while ((((double)(l_A__loc7_)) < ((double)(l_A__loc4_)))) {
                    (l_A__loc5_ = rt::slot_string(rt::dcallv(l_param1, rt::N_charAt, rt::V((double)(l_A__loc7_)))));
                    if ((!this->m_isHexDigit(l_A__loc5_))) {
                        (void)(this->m_parseError(rt::add(rt::VS(g::LS[147]), l_A__loc5_)));
                    }
                    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, l_A__loc5_)));
                    (l_A__loc7_ = rt::toint_d((((double)(l_A__loc7_)) + 1.0)));
                }
                (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::str_from_char_codev(rt::parseInt(l_A__loc6_, rt::V(16.0))))));
                (l_A__loc10_ = l_A__loc4_);
                break;
            }
            case 6: {
                (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::VS(g::LS[148]))));
                break;
            }
            case 7: {
                (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::VS(g::LS[141]))));
                break;
            }
            case 8: {
                (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::VS(g::LS[149]))));
                break;
            }
            case 9: {
                (l_A__loc2_ = rt::slot_string(rt::add(l_A__loc2_, rt::add(rt::VS(g::LS[136]), l_A__loc8_))));
            }
            default: break;
            }
        }
    } while ((((double)(l_A__loc10_)) < ((double)(l_A__loc3_))));
    return rt::slot_string(l_A__loc2_);
    return rt::NUL;
}
rt::Value C_JSONTokenizer::m_readNumber() {
    rt::Value l_A__loc1_ = rt::NUL;
    double l_A__loc2_ = NAN;
    RT_FN("JSONTokenizer.readNumber");
    (l_A__loc1_ = rt::slot_string(rt::VS(g::LS[113])));
    if (rt::eq(this->f_ch, rt::VS(g::LS[134]))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::VS(g::LS[134]))));
        (void)(this->m_nextChar());
    }
    if ((!this->m_isDigit(this->f_ch))) {
        (void)(this->m_parseError(rt::VS(g::LS[150])));
    }
    if (rt::eq(this->f_ch, rt::VS(g::LS[151]))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, this->f_ch)));
        (void)(this->m_nextChar());
        if (this->m_isDigit(this->f_ch)) {
            (void)(this->m_parseError(rt::VS(g::LS[152])));
        } else if (((!this->f_strict) && rt::eq(this->f_ch, rt::VS(g::LS[153])))) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, this->f_ch)));
            (void)(this->m_nextChar());
            if (this->m_isHexDigit(this->f_ch)) {
                (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, this->f_ch)));
                (void)(this->m_nextChar());
            } else {
                (void)(this->m_parseError(rt::VS(g::LS[154])));
            }
            while (this->m_isHexDigit(this->f_ch)) {
                (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, this->f_ch)));
                (void)(this->m_nextChar());
            }
        }
    } else {
        while (this->m_isDigit(this->f_ch)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, this->f_ch)));
            (void)(this->m_nextChar());
        }
    }
    if (rt::eq(this->f_ch, rt::VS(g::LS[155]))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::VS(g::LS[155]))));
        (void)(this->m_nextChar());
        if ((!this->m_isDigit(this->f_ch))) {
            (void)(this->m_parseError(rt::VS(g::LS[150])));
        }
        while (this->m_isDigit(this->f_ch)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, this->f_ch)));
            (void)(this->m_nextChar());
        }
    }
    if ((rt::eq(this->f_ch, rt::VS(g::LS[156])) || rt::eq(this->f_ch, rt::VS(g::LS[157])))) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::VS(g::LS[156]))));
        (void)(this->m_nextChar());
        if ((rt::eq(this->f_ch, rt::VS(g::LS[158])) || rt::eq(this->f_ch, rt::VS(g::LS[134])))) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, this->f_ch)));
            (void)(this->m_nextChar());
        }
        if ((!this->m_isDigit(this->f_ch))) {
            (void)(this->m_parseError(rt::VS(g::LS[159])));
        }
        while (this->m_isDigit(this->f_ch)) {
            (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, this->f_ch)));
            (void)(this->m_nextChar());
        }
    }
    (l_A__loc2_ = rt::tonum(l_A__loc1_));
    if ((rt::isFinite(rt::V(l_A__loc2_)) && (!rt::isNaN(rt::V(l_A__loc2_))))) {
        return C_JSONToken::sm_create(rt::toint_d(11.0), rt::V(l_A__loc2_));
    }
    (void)(this->m_parseError(rt::add(rt::add(rt::VS(g::LS[160]), rt::V(l_A__loc2_)), rt::VS(g::LS[161]))));
    return rt::NUL;
    return rt::NUL;
}
rt::Value C_JSONTokenizer::m_nextChar() {
    RT_FN("JSONTokenizer.nextChar");
    return rt::slot_string(({ rt::Value _v158 = rt::dcallv(this->f_jsonString, rt::N_charAt, rt::V(({ double _old156 = ((double)(this->f_loc)); ({ double _v157 = (_old156 + 1.0); this->f_loc = rt::toint_d(_v157); _v157; }); _old156; }))); this->f_ch = rt::slot_string(_v158); _v158; }));
    return rt::NUL;
}
rt::Value C_JSONTokenizer::m_skipIgnored() {
    int32_t l_A__loc1_ = 0;
    RT_FN("JSONTokenizer.skipIgnored");
    (l_A__loc1_ = rt::toint_d(0.0));
    do {
        (l_A__loc1_ = this->f_loc);
        (void)(this->m_skipWhite());
        (void)(this->m_skipComments());
    } while ((!(((double)(l_A__loc1_)) == ((double)(this->f_loc)))));
    return rt::NUL;
}
rt::Value C_JSONTokenizer::m_skipComments() {
    RT_FN("JSONTokenizer.skipComments");
    if (rt::eq(this->f_ch, rt::VS(g::LS[141]))) {
        (void)(this->m_nextChar());
        {
            rt::Value _sw159 = this->f_ch;
            int _c160 = -1;
            if (_c160 == -1 && rt::strict_eq(_sw159, rt::VS(g::LS[141]))) _c160 = 0;
            if (_c160 == -1 && rt::strict_eq(_sw159, rt::VS(g::LS[162]))) _c160 = 1;
            if (_c160 == -1) _c160 = 2;
            switch (_c160) {
            case 0: {
                do {
                    (void)(this->m_nextChar());
                } while (((!rt::eq(this->f_ch, rt::VS(g::LS[143]))) && (!rt::eq(this->f_ch, rt::VS(g::LS[113])))));
                (void)(this->m_nextChar());
                break;
            }
            case 1: {
                (void)(this->m_nextChar());
                while (true) {
                    if (rt::eq(this->f_ch, rt::VS(g::LS[162]))) {
                        (void)(this->m_nextChar());
                        if (rt::eq(this->f_ch, rt::VS(g::LS[141]))) {
                            break;
                        }
                    } else {
                        (void)(this->m_nextChar());
                    }
                    if (rt::eq(this->f_ch, rt::VS(g::LS[113]))) {
                        (void)(this->m_parseError(rt::VS(g::LS[163])));
                    }
                }
                (void)(this->m_nextChar());
                break;
            }
            case 2: {
                (void)(this->m_parseError(rt::add(rt::add(rt::VS(g::LS[112]), this->f_ch), rt::VS(g::LS[164]))));
            }
            default: break;
            }
        }
    }
    return rt::NUL;
}
rt::Value C_JSONTokenizer::m_skipWhite() {
    RT_FN("JSONTokenizer.skipWhite");
    while (this->m_isWhiteSpace(this->f_ch)) {
        (void)(this->m_nextChar());
    }
    return rt::NUL;
}
bool C_JSONTokenizer::m_isWhiteSpace(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("JSONTokenizer.isWhiteSpace");
    if ((({ bool _t162 = ({ bool _t161 = rt::eq(l_param1, rt::VS(g::LS[9])); _t161 ? _t161 : (bool)(rt::eq(l_param1, rt::VS(g::LS[145]))); }); _t162 ? _t162 : (bool)(rt::eq(l_param1, rt::VS(g::LS[143]))); }) || rt::eq(l_param1, rt::VS(g::LS[144])))) {
        return true;
    }
    if (((!this->f_strict) && rt::eq(rt::dcallv(l_param1, rt::N_charCodeAt, rt::V(0.0)), rt::V(160.0)))) {
        return true;
    }
    return false;
    return false;
}
bool C_JSONTokenizer::m_isDigit(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("JSONTokenizer.isDigit");
    return ({ bool _t163 = rt::ge(l_param1, rt::VS(g::LS[151])); _t163 ? (bool)(rt::le(l_param1, rt::VS(g::LS[165]))) : _t163; });
    return false;
}
bool C_JSONTokenizer::m_isHexDigit(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("JSONTokenizer.isHexDigit");
    return ({ bool _t167 = ({ bool _t165 = this->m_isDigit(l_param1); _t165 ? _t165 : (bool)(({ bool _t164 = rt::ge(l_param1, rt::VS(g::LS[166])); _t164 ? (bool)(rt::le(l_param1, rt::VS(g::LS[167]))) : _t164; })); }); _t167 ? _t167 : (bool)(({ bool _t166 = rt::ge(l_param1, rt::VS(g::LS[168])); _t166 ? (bool)(rt::le(l_param1, rt::VS(g::LS[122]))) : _t166; })); });
    return false;
}
rt::Value C_JSONTokenizer::m_parseError(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("JSONTokenizer.parseError");
    throw rt::Thrown{({ C_JSONParseError* _n168 = C_JSONParseError::alloc_(); _n168->C_JSONParseError::ctor_(l_param1, this->f_loc, this->f_jsonString); rt::VO(_n168); })};
    return rt::NUL;
}
C_JSONTokenizer* C_JSONTokenizer::alloc_() {
    C_JSONTokenizer* o = rt::make<C_JSONTokenizer>();
    return o;
}
rt::Value C_JSONTokenizer::mk_(rt::Value* a, int n) {
    C_JSONTokenizer* o = alloc_();
    o->C_JSONTokenizer::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, false));
    return rt::VO(o);
}
bool C_JSONTokenizer::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_strict: out = rt::VB(f_strict); return true;
    case NM_obj: out = f_obj; return true;
    case NM_jsonString: out = f_jsonString; return true;
    case NM_loc: out = rt::V((double)(f_loc)); return true;
    case NM_ch: out = f_ch; return true;
    case NM_controlCharsRegExp: out = f_controlCharsRegExp; return true;
    case NM_getNextToken: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_readString: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_unescapeString: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_readNumber: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_nextChar: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_skipIgnored: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_skipComments: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_skipWhite: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_isWhiteSpace: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_isDigit: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_isHexDigit: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_parseError: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_JSONTokenizer::dset(int id, rt::Value v) {
    switch (id) {
    case NM_strict: f_strict = rt::T(v); return true;
    case NM_obj: f_obj = v; return true;
    case NM_jsonString: f_jsonString = rt::slot_string(v); return true;
    case NM_loc: f_loc = rt::toint(v); return true;
    case NM_ch: f_ch = rt::slot_string(v); return true;
    case NM_controlCharsRegExp: f_controlCharsRegExp = v; return true;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_JSONTokenizer::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_getNextToken: out = m_getNextToken(); return true;
    case NM_readString: out = m_readString(); return true;
    case NM_unescapeString: out = m_unescapeString(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_readNumber: out = m_readNumber(); return true;
    case NM_nextChar: out = m_nextChar(); return true;
    case NM_skipIgnored: out = m_skipIgnored(); return true;
    case NM_skipComments: out = m_skipComments(); return true;
    case NM_skipWhite: out = m_skipWhite(); return true;
    case NM_isWhiteSpace: out = rt::VB(m_isWhiteSpace(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    case NM_isDigit: out = rt::VB(m_isDigit(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    case NM_isHexDigit: out = rt::VB(m_isHexDigit(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    case NM_parseError: out = m_parseError(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_strict: { rt::Value f = rt::VB(f_strict); out = rt::call_value(f, a, n); return true; }
    case NM_obj: { rt::Value f = f_obj; out = rt::call_value(f, a, n); return true; }
    case NM_jsonString: { rt::Value f = f_jsonString; out = rt::call_value(f, a, n); return true; }
    case NM_loc: { rt::Value f = rt::V((double)(f_loc)); out = rt::call_value(f, a, n); return true; }
    case NM_ch: { rt::Value f = f_ch; out = rt::call_value(f, a, n); return true; }
    case NM_controlCharsRegExp: { rt::Value f = f_controlCharsRegExp; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_JSONTokenizer::dmeth(int id) {
    switch (id) {
    case NM_getNextToken: return true;
    case NM_readString: return true;
    case NM_unescapeString: return true;
    case NM_readNumber: return true;
    case NM_nextChar: return true;
    case NM_skipIgnored: return true;
    case NM_skipComments: return true;
    case NM_skipWhite: return true;
    case NM_isWhiteSpace: return true;
    case NM_isDigit: return true;
    case NM_isHexDigit: return true;
    case NM_parseError: return true;
    case NM_strict: return false;
    case NM_obj: return false;
    case NM_jsonString: return false;
    case NM_loc: return false;
    case NM_ch: return false;
    case NM_controlCharsRegExp: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_JSONTokenizer::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_JSONTokenizer::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_JSONTokenizer::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_JSONTokenizer::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_AGALMiniAssembler::dctor_0() { return false; }
void C_AGALMiniAssembler::ctor_(bool p0) {
    bool l_param1 = p0;
    RT_FN("AGALMiniAssembler.AGALMiniAssembler");
    (void)(rt::NUL);
    ({ bool _v169 = l_param1; this->f_debugEnabled = _v169; _v169; });
    if ((!g::SV.C_AGALMiniAssembler__initialized)) {
        (void)(C_AGALMiniAssembler::sm_init());
    }
}
rt::Value C_AGALMiniAssembler::m_assemble2(rt::Value p0, uint32_t p1, rt::Value p2, rt::Value p3) {
    rt::Value l_param1 = p0;
    uint32_t l_param2 = p1;
    rt::Value l_param3 = rt::slot_string(p2);
    rt::Value l_param4 = rt::slot_string(p3);
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc6_ = rt::NUL;
    rt::Value l_A__loc7_ = rt::NUL;
    RT_FN("AGALMiniAssembler.assemble2");
    (l_A__loc5_ = this->m_assemble(rt::VS(g::LS[169]), l_param3, l_param2, C_AGALMiniAssembler::dm_assemble_3()));
    (l_A__loc6_ = this->m_assemble(rt::VS(g::LS[170]), l_param4, l_param2, C_AGALMiniAssembler::dm_assemble_3()));
    (l_A__loc7_ = rt::dcallv(l_param1, NM_createProgram));
    (void)(rt::dcallv(l_A__loc7_, NM_upload, l_A__loc5_, l_A__loc6_));
    return l_A__loc7_;
    return rt::NUL;
}
uint32_t C_AGALMiniAssembler::dm_assemble_2() { return rt::touint_d(1.0); }
bool C_AGALMiniAssembler::dm_assemble_3() { return false; }
rt::Value C_AGALMiniAssembler::m_assemble(rt::Value p0, rt::Value p1, uint32_t p2, bool p3) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    uint32_t l_param3 = p2;
    bool l_param4 = p3;
    int32_t l_A__loc41_ = 0;
    rt::Value l_A__loc29_ = rt::NUL;
    int32_t l_A__loc32_ = 0;
    int32_t l_A__loc13_ = 0;
    rt::Value l_A__loc9_ = rt::NUL;
    rt::Value l_A__loc34_ = rt::NUL;
    rt::Value l_A__loc15_ = rt::NUL;
    rt::Value l_A__loc42_ = rt::NUL;
    bool l_A__loc23_ = false;
    rt::Value l_A__loc8_ = rt::UNDEF;
    rt::Value l_A__loc49_ = rt::UNDEF;
    int32_t l_A__loc43_ = 0;
    bool l_A__loc25_ = false;
    rt::Value l_A__loc7_ = rt::NUL;
    rt::Value l_A__loc16_ = rt::NUL;
    rt::Value l_A__loc18_ = rt::NUL;
    rt::Value l_A__loc10_ = rt::NUL;
    rt::Value l_A__loc38_ = rt::UNDEF;
    rt::Value l_A__loc26_ = rt::UNDEF;
    rt::Value l_A__loc50_ = rt::NUL;
    bool l_A__loc31_ = false;
    bool l_A__loc39_ = false;
    rt::Value l_A__loc35_ = rt::UNDEF;
    rt::Value l_A__loc45_ = rt::UNDEF;
    int32_t l_A__loc27_ = 0;
    rt::Value l_A__loc47_ = rt::UNDEF;
    rt::Value l_A__loc48_ = rt::UNDEF;
    int32_t l_A__loc46_ = 0;
    rt::Value l_A__loc17_ = rt::NUL;
    rt::Value l_A__loc30_ = rt::NUL;
    rt::Value l_A__loc37_ = rt::NUL;
    rt::Value l_A__loc5_ = rt::NUL;
    rt::Value l_A__loc21_ = rt::UNDEF;
    rt::Value l_A__loc11_ = rt::UNDEF;
    double l_A__loc12_ = NAN;
    rt::Value l_A__loc6_ = rt::NUL;
    rt::Value l_A__loc28_ = rt::NUL;
    rt::Value l_A__loc33_ = rt::UNDEF;
    rt::Value l_A__loc22_ = rt::UNDEF;
    rt::Value l_A__loc20_ = rt::NUL;
    uint32_t l_A__loc40_ = 0u;
    bool l_A__loc14_ = false;
    rt::Value l_A__loc36_ = rt::NUL;
    int32_t l_A__loc24_ = 0;
    int32_t l_A__loc19_ = 0;
    RT_FN("AGALMiniAssembler.assemble");
    (l_A__loc41_ = rt::toint_d(0.0));
    (l_A__loc29_ = rt::slot_string(rt::NUL));
    (l_A__loc32_ = rt::toint_d(0.0));
    (l_A__loc13_ = rt::toint_d(0.0));
    (l_A__loc9_ = rt::NUL);
    (l_A__loc34_ = rt::NUL);
    (l_A__loc15_ = rt::NUL);
    (l_A__loc42_ = rt::NUL);
    (l_A__loc23_ = false);
    (l_A__loc8_ = rt::V(0.0));
    (l_A__loc49_ = rt::V(0.0));
    (l_A__loc43_ = rt::toint_d(0.0));
    (l_A__loc25_ = false);
    (l_A__loc7_ = rt::NUL);
    (l_A__loc16_ = rt::NUL);
    (l_A__loc18_ = rt::NUL);
    (l_A__loc10_ = rt::NUL);
    (l_A__loc38_ = rt::V(0.0));
    (l_A__loc26_ = rt::V(0.0));
    (l_A__loc50_ = rt::NUL);
    (l_A__loc31_ = false);
    (l_A__loc39_ = false);
    (l_A__loc35_ = rt::V(0.0));
    (l_A__loc45_ = rt::V(0.0));
    (l_A__loc27_ = rt::toint_d(0.0));
    (l_A__loc47_ = rt::V(0.0));
    (l_A__loc48_ = rt::V(0.0));
    (l_A__loc46_ = rt::toint_d(0.0));
    (l_A__loc17_ = rt::NUL);
    (l_A__loc30_ = rt::NUL);
    (l_A__loc37_ = rt::NUL);
    (l_A__loc5_ = rt::NUL);
    (l_A__loc21_ = rt::V(0.0));
    (l_A__loc11_ = rt::V(0.0));
    (l_A__loc12_ = NAN);
    (l_A__loc6_ = rt::NUL);
    (l_A__loc28_ = rt::slot_string(rt::NUL));
    (l_A__loc33_ = rt::V(0.0));
    (l_A__loc22_ = rt::V(0.0));
    (l_A__loc20_ = rt::slot_string(rt::NUL));
    (l_A__loc40_ = rt::touint_d(rt::getTimer()));
    ({ rt::Value _v170 = rt::new_bytearray(); this->f__agalcode = _v170; _v170; });
    ({ rt::Value _v171 = rt::VS(g::LS[113]); this->f__error = rt::slot_string(_v171); _v171; });
    (l_A__loc14_ = false);
    if (rt::eq(l_param1, rt::VS(g::LS[170]))) {
        (l_A__loc14_ = true);
    } else if ((!rt::eq(l_param1, rt::VS(g::LS[169])))) {
        ({ rt::Value _v172 = rt::add(rt::add(rt::VS(g::LS[171]), l_param1), rt::VS(g::LS[172])); this->f__error = rt::slot_string(_v172); _v172; });
    }
    ({ rt::Value _v173 = rt::VS(g::LS[19]); rt::dset(this->g_agalcode(), rt::N_endian, _v173); _v173; });
    (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, rt::V(160.0)));
    (void)(rt::dcallv(this->g_agalcode(), rt::N_writeUnsignedInt, rt::V((double)(l_param3))));
    (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, rt::V(161.0)));
    (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, rt::V((l_A__loc14_ ? 1.0 : 0.0))));
    (void)(this->m_initregmap(l_param3, l_param4));
    (l_A__loc36_ = rt::dcallv(rt::dcallv(l_param2, rt::N_replace, rt::new_regexp(rt::VS(g::LS[173]).s, rt::VS(g::LS[174]).s), rt::VS(g::LS[143])), rt::N_split, rt::VS(g::LS[143])));
    (l_A__loc24_ = rt::toint_d(0.0));
    (l_A__loc19_ = rt::toint_d(rt::alen(l_A__loc36_)));
    (l_A__loc41_ = rt::toint_d(0.0));
    while (((((double)(l_A__loc41_)) < ((double)(l_A__loc19_))) && rt::eq(this->f__error, rt::VS(g::LS[113])))) {
        (l_A__loc29_ = rt::slot_string(rt::new_stubinst()));
        (l_A__loc29_ = rt::slot_string(rt::dcallv(l_A__loc29_, rt::N_replace, g::SV.C_AGALMiniAssembler__REGEXP_OUTER_SPACES, rt::VS(g::LS[113]))));
        (l_A__loc32_ = rt::toint(rt::dcallv(l_A__loc29_, rt::N_search, rt::VS(g::LS[175]))));
        if ((!(((double)(l_A__loc32_)) == (-1.0)))) {
            (l_A__loc29_ = rt::slot_string(rt::dcallv(l_A__loc29_, rt::N_slice, rt::V(0.0), rt::V((double)(l_A__loc32_)))));
        }
        (l_A__loc13_ = rt::toint(rt::dcallv(l_A__loc29_, rt::N_search, rt::new_regexp(rt::VS(g::LS[176]).s, rt::VS(g::LS[174]).s))));
        if ((!(((double)(l_A__loc13_)) == (-1.0)))) {
            (l_A__loc9_ = rt::dcallv(rt::dcallv(l_A__loc29_, rt::N_slice, rt::V((double)(l_A__loc13_))), rt::N_match, rt::new_regexp(rt::VS(g::LS[177]).s, rt::VS(g::LS[178]).s)));
            (l_A__loc29_ = rt::slot_string(rt::dcallv(l_A__loc29_, rt::N_slice, rt::V(0.0), rt::V((double)(l_A__loc13_)))));
        }
        (l_A__loc34_ = rt::dcallv(l_A__loc29_, rt::N_match, rt::new_regexp(rt::VS(g::LS[179]).s, rt::VS(g::LS[178]).s)));
        if ((!rt::T(l_A__loc34_))) {
            if ((rt::alen(l_A__loc29_) >= 3.0)) {
                (void)(rt::NUL);
            }
        } else {
            (l_A__loc15_ = rt::idx_get(g::SV.C_AGALMiniAssembler__OPMAP, rt::arr_at(l_A__loc34_, 0.0)));
            if (this->f_debugEnabled) {
                (void)(rt::NUL);
            }
            if (rt::eq(l_A__loc15_, rt::NUL)) {
                if ((rt::alen(l_A__loc29_) >= 3.0)) {
                    (void)(rt::NUL);
                }
            } else {
                (l_A__loc29_ = rt::slot_string(rt::dcallv(l_A__loc29_, rt::N_slice, rt::add(rt::dcallv(l_A__loc29_, rt::N_search, ({ rt::Value _o174 = l_A__loc15_; C_OpCode* _p175 = rt::as_ptr<C_OpCode>(_o174); _p175 ? _p175->g_name() : rt::dget(_o174, rt::N_name); })), rt::V(rt::alen(({ rt::Value _o176 = l_A__loc15_; C_OpCode* _p177 = rt::as_ptr<C_OpCode>(_o176); _p177 ? _p177->g_name() : rt::dget(_o176, rt::N_name); })))))));
                if ((((rt::bitand_(((double)(({ rt::Value _o178 = l_A__loc15_; C_OpCode* _p179 = rt::as_ptr<C_OpCode>(_o178); _p179 ? _p179->g_flags() : rt::touint(rt::dget(_o178, NM_flags)); }))), 256.0)) != 0) && (((double)(l_param3)) < 2.0))) {
                    ({ rt::Value _v180 = rt::VS(g::LS[182]); this->f__error = rt::slot_string(_v180); _v180; });
                    break;
                }
                if ((((rt::bitand_(((double)(({ rt::Value _o181 = l_A__loc15_; C_OpCode* _p182 = rt::as_ptr<C_OpCode>(_o181); _p182 ? _p182->g_flags() : rt::touint(rt::dget(_o181, NM_flags)); }))), 64.0)) != 0) && l_A__loc14_)) {
                    ({ rt::Value _v183 = rt::VS(g::LS[183]); this->f__error = rt::slot_string(_v183); _v183; });
                    break;
                }
                if ((((rt::bitand_(((double)(({ rt::Value _o184 = l_A__loc15_; C_OpCode* _p185 = rt::as_ptr<C_OpCode>(_o184); _p185 ? _p185->g_flags() : rt::touint(rt::dget(_o184, NM_flags)); }))), 32.0)) != 0) && (!l_A__loc14_))) {
                    ({ rt::Value _v186 = rt::VS(g::LS[184]); this->f__error = rt::slot_string(_v186); _v186; });
                    break;
                }
                if (this->f_verbose) {
                    (void)(rt::NUL);
                }
                (void)(rt::dcallv(this->g_agalcode(), rt::N_writeUnsignedInt, rt::V((double)(({ rt::Value _o187 = l_A__loc15_; C_OpCode* _p188 = rt::as_ptr<C_OpCode>(_o187); _p188 ? _p188->g_emitCode() : rt::touint(rt::dget(_o187, NM_emitCode)); })))));
                if ((({ double _old189 = ((double)(l_A__loc24_)); l_A__loc24_ = rt::toint_d((_old189 + 1.0)); (_old189 + 1.0); }) > 2048.0)) {
                    ({ rt::Value _v190 = rt::VS(g::LS[186]); this->f__error = rt::slot_string(_v190); _v190; });
                    break;
                }
                (l_A__loc42_ = rt::dcallv(l_A__loc29_, rt::N_match, rt::new_regexp(rt::VS(g::LS[187]).s, rt::VS(g::LS[178]).s)));
                if (((!rt::T(l_A__loc42_)) || (!(rt::alen(l_A__loc42_) == ((double)(({ rt::Value _o191 = l_A__loc15_; C_OpCode* _p192 = rt::as_ptr<C_OpCode>(_o191); _p192 ? _p192->g_numRegister() : rt::touint(rt::dget(_o191, NM_numRegister)); }))))))) {
                    ({ rt::Value _v195 = rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[188]), rt::V(rt::alen(l_A__loc42_))), rt::VS(g::LS[189])), rt::V((double)(({ rt::Value _o193 = l_A__loc15_; C_OpCode* _p194 = rt::as_ptr<C_OpCode>(_o193); _p194 ? _p194->g_numRegister() : rt::touint(rt::dget(_o193, NM_numRegister)); })))), rt::VS(g::LS[155])); this->f__error = rt::slot_string(_v195); _v195; });
                    break;
                }
                (l_A__loc23_ = false);
                (l_A__loc8_ = rt::V((double)(rt::touint_d(160.0))));
                (l_A__loc49_ = rt::V(rt::alen(l_A__loc42_)));
                (l_A__loc43_ = rt::toint_d(0.0));
                while (rt::lt(rt::V((double)(l_A__loc43_)), l_A__loc49_)) {
                    (l_A__loc25_ = false);
                    (l_A__loc7_ = rt::dcallv(rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_))), rt::N_match, rt::new_regexp(rt::VS(g::LS[190]).s, rt::VS(g::LS[178]).s)));
                    if ((rt::pybool(l_A__loc7_) && (rt::alen(l_A__loc7_) > 0.0))) {
                        ({ rt::Value _v196 = rt::dcallv(rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_))), rt::N_replace, rt::arr_at(l_A__loc7_, 0.0), rt::VS(g::LS[151])); rt::idx_set(l_A__loc42_, rt::V((double)(l_A__loc43_)), _v196); });
                        if (this->f_verbose) {
                            (void)(rt::NUL);
                        }
                        (l_A__loc25_ = true);
                    }
                    (l_A__loc16_ = rt::dcallv(rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_))), rt::N_match, rt::new_regexp(rt::VS(g::LS[192]).s, rt::VS(g::LS[178]).s)));
                    if ((!rt::T(l_A__loc16_))) {
                        ({ rt::Value _v197 = rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[193]), rt::V((double)(l_A__loc43_))), rt::VS(g::LS[194])), rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_)))), rt::VS(g::LS[195])); this->f__error = rt::slot_string(_v197); _v197; });
                        (l_A__loc23_ = true);
                        break;
                    }
                    (l_A__loc18_ = rt::idx_get(g::SV.C_AGALMiniAssembler__REGMAP, rt::arr_at(l_A__loc16_, 0.0)));
                    if (this->f_debugEnabled) {
                        (void)(rt::NUL);
                    }
                    if (rt::eq(l_A__loc18_, rt::NUL)) {
                        ({ rt::Value _v198 = rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[196]), rt::V((double)(l_A__loc43_))), rt::VS(g::LS[194])), rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_)))), rt::VS(g::LS[195])); this->f__error = rt::slot_string(_v198); _v198; });
                        (l_A__loc23_ = true);
                        break;
                    }
                    if (l_A__loc14_) {
                        if ((!((rt::bitand_(((double)(({ rt::Value _o199 = l_A__loc18_; C_Register* _p200 = rt::as_ptr<C_Register>(_o199); _p200 ? _p200->g_flags() : rt::touint(rt::dget(_o199, NM_flags)); }))), 32.0)) != 0))) {
                            ({ rt::Value _v201 = rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[197]), rt::V((double)(l_A__loc43_))), rt::VS(g::LS[194])), rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_)))), rt::VS(g::LS[198])); this->f__error = rt::slot_string(_v201); _v201; });
                            (l_A__loc23_ = true);
                            break;
                        }
                        if (l_A__loc25_) {
                            ({ rt::Value _v202 = rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[197]), rt::V((double)(l_A__loc43_))), rt::VS(g::LS[194])), rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_)))), rt::VS(g::LS[199])); this->f__error = rt::slot_string(_v202); _v202; });
                            (l_A__loc23_ = true);
                            break;
                        }
                    } else if ((!((rt::bitand_(((double)(({ rt::Value _o203 = l_A__loc18_; C_Register* _p204 = rt::as_ptr<C_Register>(_o203); _p204 ? _p204->g_flags() : rt::touint(rt::dget(_o203, NM_flags)); }))), 64.0)) != 0))) {
                        ({ rt::Value _v205 = rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[197]), rt::V((double)(l_A__loc43_))), rt::VS(g::LS[194])), rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_)))), rt::VS(g::LS[200])); this->f__error = rt::slot_string(_v205); _v205; });
                        (l_A__loc23_ = true);
                        break;
                    }
                    ({ rt::Value _v210 = rt::dcallv(rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_))), rt::N_slice, rt::add(rt::dcallv(rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_))), rt::N_search, ({ rt::Value _o206 = l_A__loc18_; C_Register* _p207 = rt::as_ptr<C_Register>(_o206); _p207 ? _p207->g_name() : rt::dget(_o206, rt::N_name); })), rt::V(rt::alen(({ rt::Value _o208 = l_A__loc18_; C_Register* _p209 = rt::as_ptr<C_Register>(_o208); _p209 ? _p209->g_name() : rt::dget(_o208, rt::N_name); }))))); rt::idx_set(l_A__loc42_, rt::V((double)(l_A__loc43_)), _v210); });
                    (l_A__loc10_ = (l_A__loc25_ ? rt::dcallv(rt::arr_at(l_A__loc7_, 0.0), rt::N_match, rt::new_regexp(rt::VS(g::LS[201]).s, rt::VS(g::LS[113]).s)) : rt::dcallv(rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_))), rt::N_match, rt::new_regexp(rt::VS(g::LS[201]).s, rt::VS(g::LS[113]).s))));
                    (l_A__loc38_ = rt::V((double)(rt::touint_d(0.0))));
                    if (rt::T(l_A__loc10_)) {
                        (l_A__loc38_ = rt::V((double)(rt::touint(rt::arr_at(l_A__loc10_, 0.0)))));
                    }
                    if (rt::lt(rt::V((double)(({ rt::Value _o211 = l_A__loc18_; C_Register* _p212 = rt::as_ptr<C_Register>(_o211); _p212 ? _p212->g_range() : rt::touint(rt::dget(_o211, NM_range)); }))), l_A__loc38_)) {
                        ({ rt::Value _v215 = rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[197]), rt::V((double)(l_A__loc43_))), rt::VS(g::LS[194])), rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_)))), rt::VS(g::LS[202])), rt::V(((((double)(({ rt::Value _o213 = l_A__loc18_; C_Register* _p214 = rt::as_ptr<C_Register>(_o213); _p214 ? _p214->g_range() : rt::touint(rt::dget(_o213, NM_range)); }))) + 1.0)))), rt::VS(g::LS[155])); this->f__error = rt::slot_string(_v215); _v215; });
                        (l_A__loc23_ = true);
                        break;
                    }
                    (l_A__loc26_ = rt::V((double)(rt::touint_d(0.0))));
                    (l_A__loc50_ = rt::dcallv(rt::arr_at(l_A__loc42_, ((double)(l_A__loc43_))), rt::N_match, rt::new_regexp(rt::VS(g::LS[203]).s, rt::VS(g::LS[113]).s)));
                    (l_A__loc31_ = ({ bool _t218 = (((double)(l_A__loc43_)) == 0.0); _t218 ? (bool)((!((rt::bitand_(((double)(({ rt::Value _o216 = l_A__loc15_; C_OpCode* _p217 = rt::as_ptr<C_OpCode>(_o216); _p217 ? _p217->g_flags() : rt::touint(rt::dget(_o216, NM_flags)); }))), 128.0)) != 0))) : _t218; }));
                    (l_A__loc39_ = rt::T(({ rt::Value _t221 = rt::VB((((double)(l_A__loc43_)) == 2.0)); rt::pybool(_t221) ? (rt::Value)(rt::V((double)(rt::bitand_(((double)(({ rt::Value _o219 = l_A__loc15_; C_OpCode* _p220 = rt::as_ptr<C_OpCode>(_o219); _p220 ? _p220->g_flags() : rt::touint(rt::dget(_o219, NM_flags)); }))), 8.0)))) : _t221; })));
                    (l_A__loc35_ = rt::V((double)(rt::touint_d(0.0))));
                    (l_A__loc45_ = rt::V((double)(rt::touint_d(0.0))));
                    (l_A__loc27_ = rt::toint_d(0.0));
                    if ((l_A__loc31_ && l_A__loc25_)) {
                        ({ rt::Value _v222 = rt::VS(g::LS[204]); this->f__error = rt::slot_string(_v222); _v222; });
                        (l_A__loc23_ = true);
                        break;
                    }
                    if (rt::T(l_A__loc50_)) {
                        (l_A__loc26_ = rt::V((double)(rt::touint_d(0.0))));
                        (l_A__loc48_ = rt::V((double)(rt::touint_d(rt::alen(rt::arr_at(l_A__loc50_, 0.0))))));
                        (l_A__loc46_ = rt::toint_d(1.0));
                        while (rt::lt(rt::V((double)(l_A__loc46_)), l_A__loc48_)) {
                            (l_A__loc47_ = rt::V((double)(rt::touint_d((rt::tonum(rt::dcallv(rt::arr_at(l_A__loc50_, 0.0), rt::N_charCodeAt, rt::V((double)(l_A__loc46_)))) - rt::tonum(rt::dcallv(rt::VS(g::LS[153]), rt::N_charCodeAt, rt::V(0.0))))))));
                            if (rt::gt(l_A__loc47_, rt::V(2.0))) {
                                (l_A__loc47_ = rt::V((double)(rt::touint_d(3.0))));
                            }
                            if (l_A__loc31_) {
                                (l_A__loc26_ = rt::V((double)(rt::bitor_(rt::tonum(l_A__loc26_), ((double)(rt::shl(1.0, rt::tonum(l_A__loc47_))))))));
                            } else {
                                (l_A__loc26_ = rt::V((double)(rt::bitor_(rt::tonum(l_A__loc26_), ((double)(rt::shl(rt::tonum(l_A__loc47_), ((double)((rt::shl((((double)(l_A__loc46_)) - 1.0), 1.0)))))))))));
                            }
                            (l_A__loc46_ = rt::toint_d((((double)(l_A__loc46_)) + 1.0)));
                        }
                        if ((!l_A__loc31_)) {
                            while ((((double)(l_A__loc46_)) <= 4.0)) {
                                (l_A__loc26_ = rt::V((double)(rt::bitor_(rt::tonum(l_A__loc26_), ((double)(rt::shl(rt::tonum(l_A__loc47_), ((double)((rt::shl((((double)(l_A__loc46_)) - 1.0), 1.0)))))))))));
                                (l_A__loc46_ = rt::toint_d((((double)(l_A__loc46_)) + 1.0)));
                            }
                        }
                    } else {
                        (l_A__loc26_ = rt::V((double)(rt::touint_d((l_A__loc31_ ? 15.0 : 228.0)))));
                    }
                    if (l_A__loc25_) {
                        (l_A__loc17_ = rt::dcallv(rt::arr_at(l_A__loc7_, 0.0), rt::N_match, rt::new_regexp(rt::VS(g::LS[205]).s, rt::VS(g::LS[178]).s)));
                        (l_A__loc30_ = rt::idx_get(g::SV.C_AGALMiniAssembler__REGMAP, rt::arr_at(l_A__loc17_, 0.0)));
                        if (rt::eq(l_A__loc30_, rt::NUL)) {
                            ({ rt::Value _v223 = rt::VS(g::LS[206]); this->f__error = rt::slot_string(_v223); _v223; });
                            (l_A__loc23_ = true);
                            break;
                        }
                        (l_A__loc35_ = rt::V((double)(({ rt::Value _o224 = l_A__loc30_; C_Register* _p225 = rt::as_ptr<C_Register>(_o224); _p225 ? _p225->g_emitCode() : rt::touint(rt::dget(_o224, NM_emitCode)); }))));
                        (l_A__loc37_ = rt::dcallv(rt::arr_at(l_A__loc7_, 0.0), rt::N_match, rt::new_regexp(rt::VS(g::LS[207]).s, rt::VS(g::LS[113]).s)));
                        if ((rt::alen(l_A__loc37_) == 0.0)) {
                            ({ rt::Value _v226 = rt::VS(g::LS[208]); this->f__error = rt::slot_string(_v226); _v226; });
                            (l_A__loc23_ = true);
                            break;
                        }
                        (l_A__loc45_ = rt::V((double)(rt::touint_d((rt::tonum(rt::dcallv(rt::arr_at(l_A__loc37_, 0.0), rt::N_charCodeAt, rt::V(1.0))) - rt::tonum(rt::dcallv(rt::VS(g::LS[153]), rt::N_charCodeAt, rt::V(0.0))))))));
                        if (rt::gt(l_A__loc45_, rt::V(2.0))) {
                            (l_A__loc45_ = rt::V((double)(rt::touint_d(3.0))));
                        }
                        (l_A__loc5_ = rt::dcallv(rt::arr_at(l_A__loc7_, 0.0), rt::N_match, rt::new_regexp(rt::VS(g::LS[209]).s, rt::VS(g::LS[178]).s)));
                        if ((rt::alen(l_A__loc5_) > 0.0)) {
                            (l_A__loc27_ = rt::toint(rt::arr_at(l_A__loc5_, 0.0)));
                        }
                        if (((((double)(l_A__loc27_)) < 0.0) || (((double)(l_A__loc27_)) > 255.0))) {
                            ({ rt::Value _v227 = rt::add(rt::add(rt::VS(g::LS[210]), rt::V((double)(l_A__loc27_))), rt::VS(g::LS[211])); this->f__error = rt::slot_string(_v227); _v227; });
                            (l_A__loc23_ = true);
                            break;
                        }
                        if (this->f_verbose) {
                            (void)(rt::NUL);
                        }
                    }
                    if (this->f_verbose) {
                        (void)(rt::NUL);
                    }
                    if (l_A__loc31_) {
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeShort, l_A__loc38_));
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, l_A__loc26_));
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, rt::V((double)(({ rt::Value _o228 = l_A__loc18_; C_Register* _p229 = rt::as_ptr<C_Register>(_o228); _p229 ? _p229->g_emitCode() : rt::touint(rt::dget(_o228, NM_emitCode)); })))));
                        (l_A__loc8_ = rt::V((rt::tonum(l_A__loc8_) - 32.0)));
                    } else if (l_A__loc39_) {
                        if (this->f_verbose) {
                            (void)(rt::NUL);
                        }
                        (l_A__loc21_ = rt::V((double)(rt::touint_d(5.0))));
                        (l_A__loc11_ = rt::V((double)(rt::touint_d((rt::eq(l_A__loc9_, rt::NUL) ? 0.0 : rt::alen(l_A__loc9_))))));
                        (l_A__loc12_ = 0.0);
                        (l_A__loc46_ = rt::toint_d(0.0));
                        while (rt::lt(rt::V((double)(l_A__loc46_)), l_A__loc11_)) {
                            if (this->f_verbose) {
                                (void)(rt::NUL);
                            }
                            (l_A__loc6_ = rt::idx_get(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::arr_at(l_A__loc9_, ((double)(l_A__loc46_)))));
                            if (rt::eq(l_A__loc6_, rt::NUL)) {
                                (l_A__loc12_ = rt::tonum(rt::arr_at(l_A__loc9_, ((double)(l_A__loc46_)))));
                                if (this->f_verbose) {
                                    (void)(rt::NUL);
                                }
                            } else {
                                if ((!(((double)(({ rt::Value _o230 = l_A__loc6_; C_Sampler* _p231 = rt::as_ptr<C_Sampler>(_o230); _p231 ? _p231->g_flag() : rt::touint(rt::dget(_o230, NM_flag)); }))) == 16.0))) {
                                    (l_A__loc21_ = rt::V((double)(rt::bitand_(rt::tonum(l_A__loc21_), ((double)(rt::bitnot_(((double)((rt::shl(15.0, ((double)(({ rt::Value _o232 = l_A__loc6_; C_Sampler* _p233 = rt::as_ptr<C_Sampler>(_o232); _p233 ? _p233->g_flag() : rt::touint(rt::dget(_o232, NM_flag)); }))))))))))))));
                                }
                                (l_A__loc21_ = rt::V((double)(rt::bitor_(rt::tonum(l_A__loc21_), ((double)(rt::shl(((double)(({ rt::Value _o234 = l_A__loc6_; C_Sampler* _p235 = rt::as_ptr<C_Sampler>(_o234); _p235 ? _p235->g_mask() : rt::touint(rt::dget(_o234, NM_mask)); }))), ((double)(({ rt::Value _o236 = l_A__loc6_; C_Sampler* _p237 = rt::as_ptr<C_Sampler>(_o236); _p237 ? _p237->g_flag() : rt::touint(rt::dget(_o236, NM_flag)); }))))))))));
                            }
                            (l_A__loc46_ = rt::toint_d((((double)(l_A__loc46_)) + 1.0)));
                        }
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeShort, l_A__loc38_));
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, rt::V((double)(rt::toint_d((l_A__loc12_ * 8.0))))));
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, rt::V(0.0)));
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeUnsignedInt, l_A__loc21_));
                        if (this->f_verbose) {
                            (void)(rt::NUL);
                        }
                        (l_A__loc8_ = rt::V((rt::tonum(l_A__loc8_) - 64.0)));
                    } else {
                        if ((((double)(l_A__loc43_)) == 0.0)) {
                            (void)(rt::dcallv(this->g_agalcode(), rt::N_writeUnsignedInt, rt::V(0.0)));
                            (l_A__loc8_ = rt::V((rt::tonum(l_A__loc8_) - 32.0)));
                        }
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeShort, l_A__loc38_));
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, rt::V((double)(l_A__loc27_))));
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, l_A__loc26_));
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, rt::V((double)(({ rt::Value _o238 = l_A__loc18_; C_Register* _p239 = rt::as_ptr<C_Register>(_o238); _p239 ? _p239->g_emitCode() : rt::touint(rt::dget(_o238, NM_emitCode)); })))));
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, l_A__loc35_));
                        (void)(rt::dcallv(this->g_agalcode(), rt::N_writeShort, rt::V((l_A__loc25_ ? ((double)(rt::bitor_(rt::tonum(l_A__loc45_), 32768.0))) : 0.0))));
                        (l_A__loc8_ = rt::V((rt::tonum(l_A__loc8_) - 64.0)));
                    }
                    (l_A__loc43_ = rt::toint_d((((double)(l_A__loc43_)) + 1.0)));
                }
                (l_A__loc43_ = rt::toint_d(0.0));
                while (rt::lt(rt::V((double)(l_A__loc43_)), l_A__loc8_)) {
                    (void)(rt::dcallv(this->g_agalcode(), rt::N_writeByte, rt::V(0.0)));
                    (l_A__loc43_ = rt::toint_d((((double)(l_A__loc43_)) + 8.0)));
                }
                if (l_A__loc23_) {
                    break;
                }
            }
        }
        (l_A__loc41_ = rt::toint_d((((double)(l_A__loc41_)) + 1.0)));
    }
    if ((!rt::eq(this->f__error, rt::VS(g::LS[113])))) {
        ({ rt::Value _v240 = rt::add(this->f__error, rt::add(rt::add(rt::add(rt::VS(g::LS[223]), rt::V((double)(l_A__loc41_))), rt::VS(g::LS[9])), rt::arr_at(l_A__loc36_, ((double)(l_A__loc41_))))); this->f__error = rt::slot_string(_v240); _v240; });
        ({ rt::Value _v241 = rt::V(0.0); rt::dset(this->g_agalcode(), rt::N_length, _v241); _v241; });
        (void)(rt::NUL);
    }
    if (this->f_debugEnabled) {
        (l_A__loc28_ = rt::slot_string(rt::VS(g::LS[224])));
        (l_A__loc33_ = rt::V(rt::alen(this->g_agalcode())));
        (l_A__loc22_ = rt::V((double)(rt::touint_d(0.0))));
        while (rt::lt(l_A__loc22_, l_A__loc33_)) {
            if ((!rt::truthy(rt::mod(rt::tonum(l_A__loc22_), 16.0)))) {
                (l_A__loc28_ = rt::slot_string(rt::add(l_A__loc28_, rt::VS(g::LS[143]))));
            }
            if ((!rt::truthy(rt::mod(rt::tonum(l_A__loc22_), 4.0)))) {
                (l_A__loc28_ = rt::slot_string(rt::add(l_A__loc28_, rt::VS(g::LS[9]))));
            }
            (l_A__loc20_ = rt::slot_string(rt::dcallv(rt::idx_get(this->g_agalcode(), l_A__loc22_), rt::N_toString, rt::V(16.0))));
            if ((rt::alen(l_A__loc20_) < 2.0)) {
                (l_A__loc20_ = rt::slot_string(rt::add(rt::VS(g::LS[151]), l_A__loc20_)));
            }
            (l_A__loc28_ = rt::slot_string(rt::add(l_A__loc28_, l_A__loc20_)));
            (l_A__loc22_ = rt::add(l_A__loc22_, rt::V(1.0)));
        }
        (void)(rt::NUL);
    }
    if (this->f_verbose) {
        (void)(rt::NUL);
    }
    return this->g_agalcode();
    return rt::NUL;
}
rt::Value C_AGALMiniAssembler::m_initregmap(uint32_t p0, bool p1) {
    uint32_t l_param1 = p0;
    bool l_param2 = p1;
    RT_FN("AGALMiniAssembler.initregmap");
    ({ rt::Value _v243 = ({ C_Register* _n242 = C_Register::alloc_(); _n242->C_Register::ctor_(rt::VS(g::LS[227]), rt::VS(g::LS[228]), rt::touint_d(0.0), rt::touint_d((l_param2 ? 1024.0 : ((((((double)(l_param1)) == 1.0) || (((double)(l_param1)) == 2.0)) ? 7.0 : 15.0)))), rt::touint_d(66.0)); rt::VO(_n242); }); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[227]), _v243); });
    ({ rt::Value _v245 = ({ C_Register* _n244 = C_Register::alloc_(); _n244->C_Register::ctor_(rt::VS(g::LS[229]), rt::VS(g::LS[230]), rt::touint_d(1.0), rt::touint_d((l_param2 ? 1024.0 : (((((double)(l_param1)) == 1.0) ? 127.0 : 249.0)))), rt::touint_d(66.0)); rt::VO(_n244); }); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[229]), _v245); });
    ({ rt::Value _v247 = ({ C_Register* _n246 = C_Register::alloc_(); _n246->C_Register::ctor_(rt::VS(g::LS[231]), rt::VS(g::LS[232]), rt::touint_d(2.0), rt::touint_d((l_param2 ? 1024.0 : (((((double)(l_param1)) == 1.0) ? 7.0 : 25.0)))), rt::touint_d(67.0)); rt::VO(_n246); }); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[231]), _v247); });
    ({ rt::Value _v249 = ({ C_Register* _n248 = C_Register::alloc_(); _n248->C_Register::ctor_(rt::VS(g::LS[233]), rt::VS(g::LS[234]), rt::touint_d(3.0), rt::touint_d((l_param2 ? 1024.0 : 0.0)), rt::touint_d(65.0)); rt::VO(_n248); }); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[233]), _v249); });
    ({ rt::Value _v251 = ({ C_Register* _n250 = C_Register::alloc_(); _n250->C_Register::ctor_(rt::VS(g::LS[235]), rt::VS(g::LS[236]), rt::touint_d(4.0), rt::touint_d((l_param2 ? 1024.0 : (((((double)(l_param1)) == 1.0) ? 7.0 : 9.0)))), rt::touint_d(99.0)); rt::VO(_n250); }); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[235]), _v251); });
    ({ rt::Value _v253 = ({ C_Register* _n252 = C_Register::alloc_(); _n252->C_Register::ctor_(rt::VS(g::LS[237]), rt::VS(g::LS[238]), rt::touint_d(1.0), rt::touint_d((l_param2 ? 1024.0 : (((((double)(l_param1)) == 1.0) ? 27.0 : (((((double)(l_param1)) == 2.0) ? 63.0 : 199.0)))))), rt::touint_d(34.0)); rt::VO(_n252); }); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[237]), _v253); });
    ({ rt::Value _v255 = ({ C_Register* _n254 = C_Register::alloc_(); _n254->C_Register::ctor_(rt::VS(g::LS[239]), rt::VS(g::LS[240]), rt::touint_d(2.0), rt::touint_d((l_param2 ? 1024.0 : (((((double)(l_param1)) == 1.0) ? 7.0 : 25.0)))), rt::touint_d(35.0)); rt::VO(_n254); }); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[239]), _v255); });
    ({ rt::Value _v257 = ({ C_Register* _n256 = C_Register::alloc_(); _n256->C_Register::ctor_(rt::VS(g::LS[241]), rt::VS(g::LS[242]), rt::touint_d(5.0), rt::touint_d((l_param2 ? 1024.0 : 7.0)), rt::touint_d(34.0)); rt::VO(_n256); }); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[241]), _v257); });
    ({ rt::Value _v259 = ({ C_Register* _n258 = C_Register::alloc_(); _n258->C_Register::ctor_(rt::VS(g::LS[243]), rt::VS(g::LS[244]), rt::touint_d(3.0), rt::touint_d((l_param2 ? 1024.0 : (((((double)(l_param1)) == 1.0) ? 0.0 : 3.0)))), rt::touint_d(33.0)); rt::VO(_n258); }); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[243]), _v259); });
    ({ rt::Value _v261 = ({ C_Register* _n260 = C_Register::alloc_(); _n260->C_Register::ctor_(rt::VS(g::LS[245]), rt::VS(g::LS[246]), rt::touint_d(6.0), rt::touint_d((l_param2 ? 1024.0 : (((((double)(l_param1)) == 1.0) ? (-1.0) : 0.0)))), rt::touint_d(33.0)); rt::VO(_n260); }); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[245]), _v261); });
    ({ rt::Value _v262 = rt::idx_get(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[233])); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[247]), _v262); });
    ({ rt::Value _v263 = rt::idx_get(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[235])); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[248]), _v263); });
    ({ rt::Value _v264 = rt::idx_get(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[235])); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[249]), _v264); });
    ({ rt::Value _v265 = rt::idx_get(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[243])); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[250]), _v265); });
    ({ rt::Value _v266 = rt::idx_get(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[245])); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[251]), _v266); });
    ({ rt::Value _v267 = rt::idx_get(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[235])); rt::idx_set(g::SV.C_AGALMiniAssembler__REGMAP, rt::VS(g::LS[252]), _v267); });
    return rt::NUL;
}
rt::Value C_AGALMiniAssembler::g_error() {
    RT_FN("AGALMiniAssembler.error_get");
    return rt::slot_string(this->f__error);
    return rt::NUL;
}
rt::Value C_AGALMiniAssembler::g_agalcode() {
    RT_FN("AGALMiniAssembler.agalcode_get");
    return this->f__agalcode;
    return rt::NUL;
}
rt::Value C_AGALMiniAssembler::sm_init() {
    RT_FN("AGALMiniAssembler.init");
    (g::SV.C_AGALMiniAssembler__initialized = true);
    ({ rt::Value _v269 = ({ C_OpCode* _n268 = C_OpCode::alloc_(); _n268->C_OpCode::ctor_(rt::VS(g::LS[253]), rt::touint_d(2.0), rt::touint_d(0.0), rt::touint_d(0.0)); rt::VO(_n268); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[253]), _v269); });
    ({ rt::Value _v271 = ({ C_OpCode* _n270 = C_OpCode::alloc_(); _n270->C_OpCode::ctor_(rt::VS(g::LS[254]), rt::touint_d(3.0), rt::touint_d(1.0), rt::touint_d(0.0)); rt::VO(_n270); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[254]), _v271); });
    ({ rt::Value _v273 = ({ C_OpCode* _n272 = C_OpCode::alloc_(); _n272->C_OpCode::ctor_(rt::VS(g::LS[255]), rt::touint_d(3.0), rt::touint_d(2.0), rt::touint_d(0.0)); rt::VO(_n272); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[255]), _v273); });
    ({ rt::Value _v275 = ({ C_OpCode* _n274 = C_OpCode::alloc_(); _n274->C_OpCode::ctor_(rt::VS(g::LS[256]), rt::touint_d(3.0), rt::touint_d(3.0), rt::touint_d(0.0)); rt::VO(_n274); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[256]), _v275); });
    ({ rt::Value _v277 = ({ C_OpCode* _n276 = C_OpCode::alloc_(); _n276->C_OpCode::ctor_(rt::VS(g::LS[257]), rt::touint_d(3.0), rt::touint_d(4.0), rt::touint_d(0.0)); rt::VO(_n276); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[257]), _v277); });
    ({ rt::Value _v279 = ({ C_OpCode* _n278 = C_OpCode::alloc_(); _n278->C_OpCode::ctor_(rt::VS(g::LS[258]), rt::touint_d(2.0), rt::touint_d(5.0), rt::touint_d(0.0)); rt::VO(_n278); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[258]), _v279); });
    ({ rt::Value _v281 = ({ C_OpCode* _n280 = C_OpCode::alloc_(); _n280->C_OpCode::ctor_(rt::VS(g::LS[259]), rt::touint_d(3.0), rt::touint_d(6.0), rt::touint_d(0.0)); rt::VO(_n280); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[259]), _v281); });
    ({ rt::Value _v283 = ({ C_OpCode* _n282 = C_OpCode::alloc_(); _n282->C_OpCode::ctor_(rt::VS(g::LS[260]), rt::touint_d(3.0), rt::touint_d(7.0), rt::touint_d(0.0)); rt::VO(_n282); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[260]), _v283); });
    ({ rt::Value _v285 = ({ C_OpCode* _n284 = C_OpCode::alloc_(); _n284->C_OpCode::ctor_(rt::VS(g::LS[261]), rt::touint_d(2.0), rt::touint_d(8.0), rt::touint_d(0.0)); rt::VO(_n284); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[261]), _v285); });
    ({ rt::Value _v287 = ({ C_OpCode* _n286 = C_OpCode::alloc_(); _n286->C_OpCode::ctor_(rt::VS(g::LS[262]), rt::touint_d(2.0), rt::touint_d(9.0), rt::touint_d(0.0)); rt::VO(_n286); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[262]), _v287); });
    ({ rt::Value _v289 = ({ C_OpCode* _n288 = C_OpCode::alloc_(); _n288->C_OpCode::ctor_(rt::VS(g::LS[263]), rt::touint_d(2.0), rt::touint_d(10.0), rt::touint_d(0.0)); rt::VO(_n288); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[263]), _v289); });
    ({ rt::Value _v291 = ({ C_OpCode* _n290 = C_OpCode::alloc_(); _n290->C_OpCode::ctor_(rt::VS(g::LS[264]), rt::touint_d(3.0), rt::touint_d(11.0), rt::touint_d(0.0)); rt::VO(_n290); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[264]), _v291); });
    ({ rt::Value _v293 = ({ C_OpCode* _n292 = C_OpCode::alloc_(); _n292->C_OpCode::ctor_(rt::VS(g::LS[265]), rt::touint_d(2.0), rt::touint_d(12.0), rt::touint_d(0.0)); rt::VO(_n292); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[265]), _v293); });
    ({ rt::Value _v295 = ({ C_OpCode* _n294 = C_OpCode::alloc_(); _n294->C_OpCode::ctor_(rt::VS(g::LS[266]), rt::touint_d(2.0), rt::touint_d(13.0), rt::touint_d(0.0)); rt::VO(_n294); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[266]), _v295); });
    ({ rt::Value _v297 = ({ C_OpCode* _n296 = C_OpCode::alloc_(); _n296->C_OpCode::ctor_(rt::VS(g::LS[267]), rt::touint_d(2.0), rt::touint_d(14.0), rt::touint_d(0.0)); rt::VO(_n296); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[267]), _v297); });
    ({ rt::Value _v299 = ({ C_OpCode* _n298 = C_OpCode::alloc_(); _n298->C_OpCode::ctor_(rt::VS(g::LS[268]), rt::touint_d(2.0), rt::touint_d(15.0), rt::touint_d(0.0)); rt::VO(_n298); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[268]), _v299); });
    ({ rt::Value _v301 = ({ C_OpCode* _n300 = C_OpCode::alloc_(); _n300->C_OpCode::ctor_(rt::VS(g::LS[269]), rt::touint_d(2.0), rt::touint_d(16.0), rt::touint_d(0.0)); rt::VO(_n300); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[269]), _v301); });
    ({ rt::Value _v303 = ({ C_OpCode* _n302 = C_OpCode::alloc_(); _n302->C_OpCode::ctor_(rt::VS(g::LS[270]), rt::touint_d(3.0), rt::touint_d(17.0), rt::touint_d(0.0)); rt::VO(_n302); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[270]), _v303); });
    ({ rt::Value _v305 = ({ C_OpCode* _n304 = C_OpCode::alloc_(); _n304->C_OpCode::ctor_(rt::VS(g::LS[271]), rt::touint_d(3.0), rt::touint_d(18.0), rt::touint_d(0.0)); rt::VO(_n304); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[271]), _v305); });
    ({ rt::Value _v307 = ({ C_OpCode* _n306 = C_OpCode::alloc_(); _n306->C_OpCode::ctor_(rt::VS(g::LS[272]), rt::touint_d(3.0), rt::touint_d(19.0), rt::touint_d(0.0)); rt::VO(_n306); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[272]), _v307); });
    ({ rt::Value _v309 = ({ C_OpCode* _n308 = C_OpCode::alloc_(); _n308->C_OpCode::ctor_(rt::VS(g::LS[273]), rt::touint_d(2.0), rt::touint_d(20.0), rt::touint_d(0.0)); rt::VO(_n308); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[273]), _v309); });
    ({ rt::Value _v311 = ({ C_OpCode* _n310 = C_OpCode::alloc_(); _n310->C_OpCode::ctor_(rt::VS(g::LS[274]), rt::touint_d(2.0), rt::touint_d(21.0), rt::touint_d(0.0)); rt::VO(_n310); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[274]), _v311); });
    ({ rt::Value _v313 = ({ C_OpCode* _n312 = C_OpCode::alloc_(); _n312->C_OpCode::ctor_(rt::VS(g::LS[275]), rt::touint_d(2.0), rt::touint_d(22.0), rt::touint_d(0.0)); rt::VO(_n312); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[275]), _v313); });
    ({ rt::Value _v315 = ({ C_OpCode* _n314 = C_OpCode::alloc_(); _n314->C_OpCode::ctor_(rt::VS(g::LS[276]), rt::touint_d(3.0), rt::touint_d(23.0), rt::touint_d(16.0)); rt::VO(_n314); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[276]), _v315); });
    ({ rt::Value _v317 = ({ C_OpCode* _n316 = C_OpCode::alloc_(); _n316->C_OpCode::ctor_(rt::VS(g::LS[277]), rt::touint_d(3.0), rt::touint_d(24.0), rt::touint_d(16.0)); rt::VO(_n316); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[277]), _v317); });
    ({ rt::Value _v319 = ({ C_OpCode* _n318 = C_OpCode::alloc_(); _n318->C_OpCode::ctor_(rt::VS(g::LS[278]), rt::touint_d(3.0), rt::touint_d(25.0), rt::touint_d(16.0)); rt::VO(_n318); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[278]), _v319); });
    ({ rt::Value _v321 = ({ C_OpCode* _n320 = C_OpCode::alloc_(); _n320->C_OpCode::ctor_(rt::VS(g::LS[279]), rt::touint_d(2.0), rt::touint_d(26.0), rt::touint_d(288.0)); rt::VO(_n320); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[279]), _v321); });
    ({ rt::Value _v323 = ({ C_OpCode* _n322 = C_OpCode::alloc_(); _n322->C_OpCode::ctor_(rt::VS(g::LS[280]), rt::touint_d(2.0), rt::touint_d(27.0), rt::touint_d(288.0)); rt::VO(_n322); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[280]), _v323); });
    ({ rt::Value _v325 = ({ C_OpCode* _n324 = C_OpCode::alloc_(); _n324->C_OpCode::ctor_(rt::VS(g::LS[281]), rt::touint_d(2.0), rt::touint_d(28.0), rt::touint_d(897.0)); rt::VO(_n324); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[281]), _v325); });
    ({ rt::Value _v327 = ({ C_OpCode* _n326 = C_OpCode::alloc_(); _n326->C_OpCode::ctor_(rt::VS(g::LS[282]), rt::touint_d(2.0), rt::touint_d(29.0), rt::touint_d(897.0)); rt::VO(_n326); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[282]), _v327); });
    ({ rt::Value _v329 = ({ C_OpCode* _n328 = C_OpCode::alloc_(); _n328->C_OpCode::ctor_(rt::VS(g::LS[283]), rt::touint_d(2.0), rt::touint_d(30.0), rt::touint_d(897.0)); rt::VO(_n328); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[283]), _v329); });
    ({ rt::Value _v331 = ({ C_OpCode* _n330 = C_OpCode::alloc_(); _n330->C_OpCode::ctor_(rt::VS(g::LS[284]), rt::touint_d(2.0), rt::touint_d(31.0), rt::touint_d(897.0)); rt::VO(_n330); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[284]), _v331); });
    ({ rt::Value _v333 = ({ C_OpCode* _n332 = C_OpCode::alloc_(); _n332->C_OpCode::ctor_(rt::VS(g::LS[285]), rt::touint_d(0.0), rt::touint_d(32.0), rt::touint_d(1921.0)); rt::VO(_n332); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[285]), _v333); });
    ({ rt::Value _v335 = ({ C_OpCode* _n334 = C_OpCode::alloc_(); _n334->C_OpCode::ctor_(rt::VS(g::LS[286]), rt::touint_d(0.0), rt::touint_d(33.0), rt::touint_d(1409.0)); rt::VO(_n334); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[286]), _v335); });
    ({ rt::Value _v337 = ({ C_OpCode* _n336 = C_OpCode::alloc_(); _n336->C_OpCode::ctor_(rt::VS(g::LS[287]), rt::touint_d(1.0), rt::touint_d(39.0), rt::touint_d(160.0)); rt::VO(_n336); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[287]), _v337); });
    ({ rt::Value _v339 = ({ C_OpCode* _n338 = C_OpCode::alloc_(); _n338->C_OpCode::ctor_(rt::VS(g::LS[288]), rt::touint_d(3.0), rt::touint_d(40.0), rt::touint_d(40.0)); rt::VO(_n338); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[288]), _v339); });
    ({ rt::Value _v341 = ({ C_OpCode* _n340 = C_OpCode::alloc_(); _n340->C_OpCode::ctor_(rt::VS(g::LS[289]), rt::touint_d(3.0), rt::touint_d(41.0), rt::touint_d(0.0)); rt::VO(_n340); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[289]), _v341); });
    ({ rt::Value _v343 = ({ C_OpCode* _n342 = C_OpCode::alloc_(); _n342->C_OpCode::ctor_(rt::VS(g::LS[290]), rt::touint_d(3.0), rt::touint_d(42.0), rt::touint_d(0.0)); rt::VO(_n342); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[290]), _v343); });
    ({ rt::Value _v345 = ({ C_OpCode* _n344 = C_OpCode::alloc_(); _n344->C_OpCode::ctor_(rt::VS(g::LS[291]), rt::touint_d(2.0), rt::touint_d(43.0), rt::touint_d(0.0)); rt::VO(_n344); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[291]), _v345); });
    ({ rt::Value _v347 = ({ C_OpCode* _n346 = C_OpCode::alloc_(); _n346->C_OpCode::ctor_(rt::VS(g::LS[292]), rt::touint_d(3.0), rt::touint_d(44.0), rt::touint_d(0.0)); rt::VO(_n346); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[292]), _v347); });
    ({ rt::Value _v349 = ({ C_OpCode* _n348 = C_OpCode::alloc_(); _n348->C_OpCode::ctor_(rt::VS(g::LS[293]), rt::touint_d(3.0), rt::touint_d(45.0), rt::touint_d(0.0)); rt::VO(_n348); }); rt::idx_set(g::SV.C_AGALMiniAssembler__OPMAP, rt::VS(g::LS[293]), _v349); });
    ({ rt::Value _v351 = ({ C_Sampler* _n350 = C_Sampler::alloc_(); _n350->C_Sampler::ctor_(rt::VS(g::LS[294]), rt::touint_d(8.0), rt::touint_d(0.0)); rt::VO(_n350); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[294]), _v351); });
    ({ rt::Value _v353 = ({ C_Sampler* _n352 = C_Sampler::alloc_(); _n352->C_Sampler::ctor_(rt::VS(g::LS[295]), rt::touint_d(8.0), rt::touint_d(1.0)); rt::VO(_n352); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[295]), _v353); });
    ({ rt::Value _v355 = ({ C_Sampler* _n354 = C_Sampler::alloc_(); _n354->C_Sampler::ctor_(rt::VS(g::LS[296]), rt::touint_d(8.0), rt::touint_d(2.0)); rt::VO(_n354); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[296]), _v355); });
    ({ rt::Value _v357 = ({ C_Sampler* _n356 = C_Sampler::alloc_(); _n356->C_Sampler::ctor_(rt::VS(g::LS[297]), rt::touint_d(8.0), rt::touint_d(3.0)); rt::VO(_n356); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[297]), _v357); });
    ({ rt::Value _v359 = ({ C_Sampler* _n358 = C_Sampler::alloc_(); _n358->C_Sampler::ctor_(rt::VS(g::LS[298]), rt::touint_d(12.0), rt::touint_d(0.0)); rt::VO(_n358); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[298]), _v359); });
    ({ rt::Value _v361 = ({ C_Sampler* _n360 = C_Sampler::alloc_(); _n360->C_Sampler::ctor_(rt::VS(g::LS[299]), rt::touint_d(12.0), rt::touint_d(2.0)); rt::VO(_n360); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[299]), _v361); });
    ({ rt::Value _v363 = ({ C_Sampler* _n362 = C_Sampler::alloc_(); _n362->C_Sampler::ctor_(rt::VS(g::LS[300]), rt::touint_d(12.0), rt::touint_d(1.0)); rt::VO(_n362); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[300]), _v363); });
    ({ rt::Value _v365 = ({ C_Sampler* _n364 = C_Sampler::alloc_(); _n364->C_Sampler::ctor_(rt::VS(g::LS[301]), rt::touint_d(24.0), rt::touint_d(1.0)); rt::VO(_n364); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[301]), _v365); });
    ({ rt::Value _v367 = ({ C_Sampler* _n366 = C_Sampler::alloc_(); _n366->C_Sampler::ctor_(rt::VS(g::LS[302]), rt::touint_d(24.0), rt::touint_d(2.0)); rt::VO(_n366); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[302]), _v367); });
    ({ rt::Value _v369 = ({ C_Sampler* _n368 = C_Sampler::alloc_(); _n368->C_Sampler::ctor_(rt::VS(g::LS[303]), rt::touint_d(24.0), rt::touint_d(0.0)); rt::VO(_n368); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[303]), _v369); });
    ({ rt::Value _v371 = ({ C_Sampler* _n370 = C_Sampler::alloc_(); _n370->C_Sampler::ctor_(rt::VS(g::LS[304]), rt::touint_d(24.0), rt::touint_d(0.0)); rt::VO(_n370); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[304]), _v371); });
    ({ rt::Value _v373 = ({ C_Sampler* _n372 = C_Sampler::alloc_(); _n372->C_Sampler::ctor_(rt::VS(g::LS[305]), rt::touint_d(28.0), rt::touint_d(0.0)); rt::VO(_n372); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[305]), _v373); });
    ({ rt::Value _v375 = ({ C_Sampler* _n374 = C_Sampler::alloc_(); _n374->C_Sampler::ctor_(rt::VS(g::LS[306]), rt::touint_d(28.0), rt::touint_d(1.0)); rt::VO(_n374); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[306]), _v375); });
    ({ rt::Value _v377 = ({ C_Sampler* _n376 = C_Sampler::alloc_(); _n376->C_Sampler::ctor_(rt::VS(g::LS[307]), rt::touint_d(28.0), rt::touint_d(2.0)); rt::VO(_n376); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[307]), _v377); });
    ({ rt::Value _v379 = ({ C_Sampler* _n378 = C_Sampler::alloc_(); _n378->C_Sampler::ctor_(rt::VS(g::LS[308]), rt::touint_d(28.0), rt::touint_d(3.0)); rt::VO(_n378); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[308]), _v379); });
    ({ rt::Value _v381 = ({ C_Sampler* _n380 = C_Sampler::alloc_(); _n380->C_Sampler::ctor_(rt::VS(g::LS[309]), rt::touint_d(28.0), rt::touint_d(4.0)); rt::VO(_n380); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[309]), _v381); });
    ({ rt::Value _v383 = ({ C_Sampler* _n382 = C_Sampler::alloc_(); _n382->C_Sampler::ctor_(rt::VS(g::LS[310]), rt::touint_d(28.0), rt::touint_d(5.0)); rt::VO(_n382); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[310]), _v383); });
    ({ rt::Value _v385 = ({ C_Sampler* _n384 = C_Sampler::alloc_(); _n384->C_Sampler::ctor_(rt::VS(g::LS[311]), rt::touint_d(16.0), rt::touint_d(1.0)); rt::VO(_n384); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[311]), _v385); });
    ({ rt::Value _v387 = ({ C_Sampler* _n386 = C_Sampler::alloc_(); _n386->C_Sampler::ctor_(rt::VS(g::LS[312]), rt::touint_d(16.0), rt::touint_d(2.0)); rt::VO(_n386); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[312]), _v387); });
    ({ rt::Value _v389 = ({ C_Sampler* _n388 = C_Sampler::alloc_(); _n388->C_Sampler::ctor_(rt::VS(g::LS[313]), rt::touint_d(16.0), rt::touint_d(4.0)); rt::VO(_n388); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[313]), _v389); });
    ({ rt::Value _v391 = ({ C_Sampler* _n390 = C_Sampler::alloc_(); _n390->C_Sampler::ctor_(rt::VS(g::LS[314]), rt::touint_d(20.0), rt::touint_d(1.0)); rt::VO(_n390); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[314]), _v391); });
    ({ rt::Value _v393 = ({ C_Sampler* _n392 = C_Sampler::alloc_(); _n392->C_Sampler::ctor_(rt::VS(g::LS[315]), rt::touint_d(20.0), rt::touint_d(1.0)); rt::VO(_n392); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[315]), _v393); });
    ({ rt::Value _v395 = ({ C_Sampler* _n394 = C_Sampler::alloc_(); _n394->C_Sampler::ctor_(rt::VS(g::LS[316]), rt::touint_d(20.0), rt::touint_d(0.0)); rt::VO(_n394); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[316]), _v395); });
    ({ rt::Value _v397 = ({ C_Sampler* _n396 = C_Sampler::alloc_(); _n396->C_Sampler::ctor_(rt::VS(g::LS[317]), rt::touint_d(20.0), rt::touint_d(2.0)); rt::VO(_n396); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[317]), _v397); });
    ({ rt::Value _v399 = ({ C_Sampler* _n398 = C_Sampler::alloc_(); _n398->C_Sampler::ctor_(rt::VS(g::LS[318]), rt::touint_d(20.0), rt::touint_d(3.0)); rt::VO(_n398); }); rt::idx_set(g::SV.C_AGALMiniAssembler__SAMPLEMAP, rt::VS(g::LS[318]), _v399); });
    return rt::NUL;
}
C_AGALMiniAssembler* C_AGALMiniAssembler::alloc_() {
    C_AGALMiniAssembler* o = rt::make<C_AGALMiniAssembler>();
    return o;
}
rt::Value C_AGALMiniAssembler::mk_(rt::Value* a, int n) {
    C_AGALMiniAssembler* o = alloc_();
    o->C_AGALMiniAssembler::ctor_(rt::arg<bool>(a, n, 0, C_AGALMiniAssembler::dctor_0()));
    return rt::VO(o);
}
bool C_AGALMiniAssembler::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_error: out = g_error(); return true;
    case NM_agalcode: out = g_agalcode(); return true;
    case NM__agalcode: out = f__agalcode; return true;
    case NM__error: out = f__error; return true;
    case NM_debugEnabled: out = rt::VB(f_debugEnabled); return true;
    case NM_verbose: out = rt::VB(f_verbose); return true;
    case NM_assemble2: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_assemble: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_initregmap: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_AGALMiniAssembler::dset(int id, rt::Value v) {
    switch (id) {
    case NM__agalcode: f__agalcode = v; return true;
    case NM__error: f__error = rt::slot_string(v); return true;
    case NM_debugEnabled: f_debugEnabled = rt::T(v); return true;
    case NM_verbose: f_verbose = rt::T(v); return true;
    case NM_error: return false;
    case NM_agalcode: return false;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_AGALMiniAssembler::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_assemble2: out = m_assemble2(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<uint32_t>(a, n, 1, 0u), rt::arg<rt::Value>(a, n, 2, rt::UNDEF), rt::arg<rt::Value>(a, n, 3, rt::UNDEF)); return true;
    case NM_assemble: out = m_assemble(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<uint32_t>(a, n, 2, C_AGALMiniAssembler::dm_assemble_2()), rt::arg<bool>(a, n, 3, C_AGALMiniAssembler::dm_assemble_3())); return true;
    case NM_initregmap: out = m_initregmap(rt::arg<uint32_t>(a, n, 0, 0u), rt::arg<bool>(a, n, 1, false)); return true;
    case NM_error: { rt::Value f = g_error(); out = rt::call_value(f, a, n); return true; }
    case NM_agalcode: { rt::Value f = g_agalcode(); out = rt::call_value(f, a, n); return true; }
    case NM__agalcode: { rt::Value f = f__agalcode; out = rt::call_value(f, a, n); return true; }
    case NM__error: { rt::Value f = f__error; out = rt::call_value(f, a, n); return true; }
    case NM_debugEnabled: { rt::Value f = rt::VB(f_debugEnabled); out = rt::call_value(f, a, n); return true; }
    case NM_verbose: { rt::Value f = rt::VB(f_verbose); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_AGALMiniAssembler::dmeth(int id) {
    switch (id) {
    case NM_assemble2: return true;
    case NM_assemble: return true;
    case NM_initregmap: return true;
    case NM_error: return false;
    case NM_agalcode: return false;
    case NM__agalcode: return false;
    case NM__error: return false;
    case NM_debugEnabled: return false;
    case NM_verbose: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_AGALMiniAssembler::smeth_(int id) {
    switch (id) {
    case NM_init: return true;
    default: return false;
    }
}
bool C_AGALMiniAssembler::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_initialized: out = rt::VB(g::SV.C_AGALMiniAssembler__initialized); return true;
    case NM_MAX_NESTING: out = rt::V((double)(g::SV.C_AGALMiniAssembler__MAX_NESTING)); return true;
    case NM_MAX_OPCODES: out = rt::V((double)(g::SV.C_AGALMiniAssembler__MAX_OPCODES)); return true;
    case NM_FRAGMENT: out = g::SV.C_AGALMiniAssembler__FRAGMENT; return true;
    case NM_VERTEX: out = g::SV.C_AGALMiniAssembler__VERTEX; return true;
    case NM_SAMPLER_TYPE_SHIFT: out = rt::V((double)(g::SV.C_AGALMiniAssembler__SAMPLER_TYPE_SHIFT)); return true;
    case NM_SAMPLER_DIM_SHIFT: out = rt::V((double)(g::SV.C_AGALMiniAssembler__SAMPLER_DIM_SHIFT)); return true;
    case NM_SAMPLER_SPECIAL_SHIFT: out = rt::V((double)(g::SV.C_AGALMiniAssembler__SAMPLER_SPECIAL_SHIFT)); return true;
    case NM_SAMPLER_REPEAT_SHIFT: out = rt::V((double)(g::SV.C_AGALMiniAssembler__SAMPLER_REPEAT_SHIFT)); return true;
    case NM_SAMPLER_MIPMAP_SHIFT: out = rt::V((double)(g::SV.C_AGALMiniAssembler__SAMPLER_MIPMAP_SHIFT)); return true;
    case NM_SAMPLER_FILTER_SHIFT: out = rt::V((double)(g::SV.C_AGALMiniAssembler__SAMPLER_FILTER_SHIFT)); return true;
    case NM_REG_WRITE: out = rt::V((double)(g::SV.C_AGALMiniAssembler__REG_WRITE)); return true;
    case NM_REG_READ: out = rt::V((double)(g::SV.C_AGALMiniAssembler__REG_READ)); return true;
    case NM_REG_FRAG: out = rt::V((double)(g::SV.C_AGALMiniAssembler__REG_FRAG)); return true;
    case NM_REG_VERT: out = rt::V((double)(g::SV.C_AGALMiniAssembler__REG_VERT)); return true;
    case NM_OP_SCALAR: out = rt::V((double)(g::SV.C_AGALMiniAssembler__OP_SCALAR)); return true;
    case NM_OP_SPECIAL_TEX: out = rt::V((double)(g::SV.C_AGALMiniAssembler__OP_SPECIAL_TEX)); return true;
    case NM_OP_SPECIAL_MATRIX: out = rt::V((double)(g::SV.C_AGALMiniAssembler__OP_SPECIAL_MATRIX)); return true;
    case NM_OP_FRAG_ONLY: out = rt::V((double)(g::SV.C_AGALMiniAssembler__OP_FRAG_ONLY)); return true;
    case NM_OP_VERT_ONLY: out = rt::V((double)(g::SV.C_AGALMiniAssembler__OP_VERT_ONLY)); return true;
    case NM_OP_NO_DEST: out = rt::V((double)(g::SV.C_AGALMiniAssembler__OP_NO_DEST)); return true;
    case NM_OP_VERSION2: out = rt::V((double)(g::SV.C_AGALMiniAssembler__OP_VERSION2)); return true;
    case NM_OP_INCNEST: out = rt::V((double)(g::SV.C_AGALMiniAssembler__OP_INCNEST)); return true;
    case NM_OP_DECNEST: out = rt::V((double)(g::SV.C_AGALMiniAssembler__OP_DECNEST)); return true;
    case NM_MOV: out = g::SV.C_AGALMiniAssembler__MOV; return true;
    case NM_ADD: out = g::SV.C_AGALMiniAssembler__ADD; return true;
    case NM_SUB: out = g::SV.C_AGALMiniAssembler__SUB; return true;
    case NM_MUL: out = g::SV.C_AGALMiniAssembler__MUL; return true;
    case NM_DIV: out = g::SV.C_AGALMiniAssembler__DIV; return true;
    case NM_RCP: out = g::SV.C_AGALMiniAssembler__RCP; return true;
    case NM_MIN: out = g::SV.C_AGALMiniAssembler__MIN; return true;
    case NM_MAX: out = g::SV.C_AGALMiniAssembler__MAX; return true;
    case NM_FRC: out = g::SV.C_AGALMiniAssembler__FRC; return true;
    case NM_SQT: out = g::SV.C_AGALMiniAssembler__SQT; return true;
    case NM_RSQ: out = g::SV.C_AGALMiniAssembler__RSQ; return true;
    case NM_POW: out = g::SV.C_AGALMiniAssembler__POW; return true;
    case NM_LOG: out = g::SV.C_AGALMiniAssembler__LOG; return true;
    case NM_EXP: out = g::SV.C_AGALMiniAssembler__EXP; return true;
    case NM_NRM: out = g::SV.C_AGALMiniAssembler__NRM; return true;
    case NM_SIN: out = g::SV.C_AGALMiniAssembler__SIN; return true;
    case NM_COS: out = g::SV.C_AGALMiniAssembler__COS; return true;
    case NM_CRS: out = g::SV.C_AGALMiniAssembler__CRS; return true;
    case NM_DP3: out = g::SV.C_AGALMiniAssembler__DP3; return true;
    case NM_DP4: out = g::SV.C_AGALMiniAssembler__DP4; return true;
    case NM_ABS: out = g::SV.C_AGALMiniAssembler__ABS; return true;
    case NM_NEG: out = g::SV.C_AGALMiniAssembler__NEG; return true;
    case NM_SAT: out = g::SV.C_AGALMiniAssembler__SAT; return true;
    case NM_M33: out = g::SV.C_AGALMiniAssembler__M33; return true;
    case NM_M44: out = g::SV.C_AGALMiniAssembler__M44; return true;
    case NM_M34: out = g::SV.C_AGALMiniAssembler__M34; return true;
    case NM_DDX: out = g::SV.C_AGALMiniAssembler__DDX; return true;
    case NM_DDY: out = g::SV.C_AGALMiniAssembler__DDY; return true;
    case NM_IFE: out = g::SV.C_AGALMiniAssembler__IFE; return true;
    case NM_INE: out = g::SV.C_AGALMiniAssembler__INE; return true;
    case NM_IFG: out = g::SV.C_AGALMiniAssembler__IFG; return true;
    case NM_IFL: out = g::SV.C_AGALMiniAssembler__IFL; return true;
    case NM_ELS: out = g::SV.C_AGALMiniAssembler__ELS; return true;
    case NM_EIF: out = g::SV.C_AGALMiniAssembler__EIF; return true;
    case NM_TED: out = g::SV.C_AGALMiniAssembler__TED; return true;
    case NM_KIL: out = g::SV.C_AGALMiniAssembler__KIL; return true;
    case NM_TEX: out = g::SV.C_AGALMiniAssembler__TEX; return true;
    case NM_SGE: out = g::SV.C_AGALMiniAssembler__SGE; return true;
    case NM_SLT: out = g::SV.C_AGALMiniAssembler__SLT; return true;
    case NM_SGN: out = g::SV.C_AGALMiniAssembler__SGN; return true;
    case NM_SEQ: out = g::SV.C_AGALMiniAssembler__SEQ; return true;
    case NM_SNE: out = g::SV.C_AGALMiniAssembler__SNE; return true;
    case NM_VA: out = g::SV.C_AGALMiniAssembler__VA; return true;
    case NM_VC: out = g::SV.C_AGALMiniAssembler__VC; return true;
    case NM_VT: out = g::SV.C_AGALMiniAssembler__VT; return true;
    case NM_VO: out = g::SV.C_AGALMiniAssembler__VO; return true;
    case NM_VI: out = g::SV.C_AGALMiniAssembler__VI; return true;
    case NM_FC: out = g::SV.C_AGALMiniAssembler__FC; return true;
    case NM_FT: out = g::SV.C_AGALMiniAssembler__FT; return true;
    case NM_FS: out = g::SV.C_AGALMiniAssembler__FS; return true;
    case NM_FO: out = g::SV.C_AGALMiniAssembler__FO; return true;
    case NM_FD: out = g::SV.C_AGALMiniAssembler__FD; return true;
    case NM_D2: out = g::SV.C_AGALMiniAssembler__D2; return true;
    case NM_D3: out = g::SV.C_AGALMiniAssembler__D3; return true;
    case NM_CUBE: out = g::SV.C_AGALMiniAssembler__CUBE; return true;
    case NM_MIPNEAREST: out = g::SV.C_AGALMiniAssembler__MIPNEAREST; return true;
    case NM_MIPLINEAR: out = g::SV.C_AGALMiniAssembler__MIPLINEAR; return true;
    case NM_MIPNONE: out = g::SV.C_AGALMiniAssembler__MIPNONE; return true;
    case NM_NOMIP: out = g::SV.C_AGALMiniAssembler__NOMIP; return true;
    case NM_NEAREST: out = g::SV.C_AGALMiniAssembler__NEAREST; return true;
    case NM_LINEAR: out = g::SV.C_AGALMiniAssembler__LINEAR; return true;
    case NM_ANISOTROPIC2X: out = g::SV.C_AGALMiniAssembler__ANISOTROPIC2X; return true;
    case NM_ANISOTROPIC4X: out = g::SV.C_AGALMiniAssembler__ANISOTROPIC4X; return true;
    case NM_ANISOTROPIC8X: out = g::SV.C_AGALMiniAssembler__ANISOTROPIC8X; return true;
    case NM_ANISOTROPIC16X: out = g::SV.C_AGALMiniAssembler__ANISOTROPIC16X; return true;
    case NM_CENTROID: out = g::SV.C_AGALMiniAssembler__CENTROID; return true;
    case NM_SINGLE: out = g::SV.C_AGALMiniAssembler__SINGLE; return true;
    case NM_IGNORESAMPLER: out = g::SV.C_AGALMiniAssembler__IGNORESAMPLER; return true;
    case NM_REPEAT: out = g::SV.C_AGALMiniAssembler__REPEAT; return true;
    case NM_WRAP: out = g::SV.C_AGALMiniAssembler__WRAP; return true;
    case NM_CLAMP: out = g::SV.C_AGALMiniAssembler__CLAMP; return true;
    case NM_REPEAT_U_CLAMP_V: out = g::SV.C_AGALMiniAssembler__REPEAT_U_CLAMP_V; return true;
    case NM_CLAMP_U_REPEAT_V: out = g::SV.C_AGALMiniAssembler__CLAMP_U_REPEAT_V; return true;
    case NM_RGBA: out = g::SV.C_AGALMiniAssembler__RGBA; return true;
    case NM_DXT1: out = g::SV.C_AGALMiniAssembler__DXT1; return true;
    case NM_DXT5: out = g::SV.C_AGALMiniAssembler__DXT5; return true;
    case NM_VIDEO: out = g::SV.C_AGALMiniAssembler__VIDEO; return true;
    case NM_REGEXP_OUTER_SPACES: out = g::SV.C_AGALMiniAssembler__REGEXP_OUTER_SPACES; return true;
    case NM_OPMAP: out = g::SV.C_AGALMiniAssembler__OPMAP; return true;
    case NM_REGMAP: out = g::SV.C_AGALMiniAssembler__REGMAP; return true;
    case NM_SAMPLEMAP: out = g::SV.C_AGALMiniAssembler__SAMPLEMAP; return true;
    case NM_init: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_AGALMiniAssembler::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_initialized: g::SV.C_AGALMiniAssembler__initialized = rt::T(v); return true;
    case NM_MAX_NESTING: g::SV.C_AGALMiniAssembler__MAX_NESTING = rt::toint(v); return true;
    case NM_MAX_OPCODES: g::SV.C_AGALMiniAssembler__MAX_OPCODES = rt::toint(v); return true;
    case NM_FRAGMENT: g::SV.C_AGALMiniAssembler__FRAGMENT = rt::slot_string(v); return true;
    case NM_VERTEX: g::SV.C_AGALMiniAssembler__VERTEX = rt::slot_string(v); return true;
    case NM_SAMPLER_TYPE_SHIFT: g::SV.C_AGALMiniAssembler__SAMPLER_TYPE_SHIFT = rt::touint(v); return true;
    case NM_SAMPLER_DIM_SHIFT: g::SV.C_AGALMiniAssembler__SAMPLER_DIM_SHIFT = rt::touint(v); return true;
    case NM_SAMPLER_SPECIAL_SHIFT: g::SV.C_AGALMiniAssembler__SAMPLER_SPECIAL_SHIFT = rt::touint(v); return true;
    case NM_SAMPLER_REPEAT_SHIFT: g::SV.C_AGALMiniAssembler__SAMPLER_REPEAT_SHIFT = rt::touint(v); return true;
    case NM_SAMPLER_MIPMAP_SHIFT: g::SV.C_AGALMiniAssembler__SAMPLER_MIPMAP_SHIFT = rt::touint(v); return true;
    case NM_SAMPLER_FILTER_SHIFT: g::SV.C_AGALMiniAssembler__SAMPLER_FILTER_SHIFT = rt::touint(v); return true;
    case NM_REG_WRITE: g::SV.C_AGALMiniAssembler__REG_WRITE = rt::touint(v); return true;
    case NM_REG_READ: g::SV.C_AGALMiniAssembler__REG_READ = rt::touint(v); return true;
    case NM_REG_FRAG: g::SV.C_AGALMiniAssembler__REG_FRAG = rt::touint(v); return true;
    case NM_REG_VERT: g::SV.C_AGALMiniAssembler__REG_VERT = rt::touint(v); return true;
    case NM_OP_SCALAR: g::SV.C_AGALMiniAssembler__OP_SCALAR = rt::touint(v); return true;
    case NM_OP_SPECIAL_TEX: g::SV.C_AGALMiniAssembler__OP_SPECIAL_TEX = rt::touint(v); return true;
    case NM_OP_SPECIAL_MATRIX: g::SV.C_AGALMiniAssembler__OP_SPECIAL_MATRIX = rt::touint(v); return true;
    case NM_OP_FRAG_ONLY: g::SV.C_AGALMiniAssembler__OP_FRAG_ONLY = rt::touint(v); return true;
    case NM_OP_VERT_ONLY: g::SV.C_AGALMiniAssembler__OP_VERT_ONLY = rt::touint(v); return true;
    case NM_OP_NO_DEST: g::SV.C_AGALMiniAssembler__OP_NO_DEST = rt::touint(v); return true;
    case NM_OP_VERSION2: g::SV.C_AGALMiniAssembler__OP_VERSION2 = rt::touint(v); return true;
    case NM_OP_INCNEST: g::SV.C_AGALMiniAssembler__OP_INCNEST = rt::touint(v); return true;
    case NM_OP_DECNEST: g::SV.C_AGALMiniAssembler__OP_DECNEST = rt::touint(v); return true;
    case NM_MOV: g::SV.C_AGALMiniAssembler__MOV = rt::slot_string(v); return true;
    case NM_ADD: g::SV.C_AGALMiniAssembler__ADD = rt::slot_string(v); return true;
    case NM_SUB: g::SV.C_AGALMiniAssembler__SUB = rt::slot_string(v); return true;
    case NM_MUL: g::SV.C_AGALMiniAssembler__MUL = rt::slot_string(v); return true;
    case NM_DIV: g::SV.C_AGALMiniAssembler__DIV = rt::slot_string(v); return true;
    case NM_RCP: g::SV.C_AGALMiniAssembler__RCP = rt::slot_string(v); return true;
    case NM_MIN: g::SV.C_AGALMiniAssembler__MIN = rt::slot_string(v); return true;
    case NM_MAX: g::SV.C_AGALMiniAssembler__MAX = rt::slot_string(v); return true;
    case NM_FRC: g::SV.C_AGALMiniAssembler__FRC = rt::slot_string(v); return true;
    case NM_SQT: g::SV.C_AGALMiniAssembler__SQT = rt::slot_string(v); return true;
    case NM_RSQ: g::SV.C_AGALMiniAssembler__RSQ = rt::slot_string(v); return true;
    case NM_POW: g::SV.C_AGALMiniAssembler__POW = rt::slot_string(v); return true;
    case NM_LOG: g::SV.C_AGALMiniAssembler__LOG = rt::slot_string(v); return true;
    case NM_EXP: g::SV.C_AGALMiniAssembler__EXP = rt::slot_string(v); return true;
    case NM_NRM: g::SV.C_AGALMiniAssembler__NRM = rt::slot_string(v); return true;
    case NM_SIN: g::SV.C_AGALMiniAssembler__SIN = rt::slot_string(v); return true;
    case NM_COS: g::SV.C_AGALMiniAssembler__COS = rt::slot_string(v); return true;
    case NM_CRS: g::SV.C_AGALMiniAssembler__CRS = rt::slot_string(v); return true;
    case NM_DP3: g::SV.C_AGALMiniAssembler__DP3 = rt::slot_string(v); return true;
    case NM_DP4: g::SV.C_AGALMiniAssembler__DP4 = rt::slot_string(v); return true;
    case NM_ABS: g::SV.C_AGALMiniAssembler__ABS = rt::slot_string(v); return true;
    case NM_NEG: g::SV.C_AGALMiniAssembler__NEG = rt::slot_string(v); return true;
    case NM_SAT: g::SV.C_AGALMiniAssembler__SAT = rt::slot_string(v); return true;
    case NM_M33: g::SV.C_AGALMiniAssembler__M33 = rt::slot_string(v); return true;
    case NM_M44: g::SV.C_AGALMiniAssembler__M44 = rt::slot_string(v); return true;
    case NM_M34: g::SV.C_AGALMiniAssembler__M34 = rt::slot_string(v); return true;
    case NM_DDX: g::SV.C_AGALMiniAssembler__DDX = rt::slot_string(v); return true;
    case NM_DDY: g::SV.C_AGALMiniAssembler__DDY = rt::slot_string(v); return true;
    case NM_IFE: g::SV.C_AGALMiniAssembler__IFE = rt::slot_string(v); return true;
    case NM_INE: g::SV.C_AGALMiniAssembler__INE = rt::slot_string(v); return true;
    case NM_IFG: g::SV.C_AGALMiniAssembler__IFG = rt::slot_string(v); return true;
    case NM_IFL: g::SV.C_AGALMiniAssembler__IFL = rt::slot_string(v); return true;
    case NM_ELS: g::SV.C_AGALMiniAssembler__ELS = rt::slot_string(v); return true;
    case NM_EIF: g::SV.C_AGALMiniAssembler__EIF = rt::slot_string(v); return true;
    case NM_TED: g::SV.C_AGALMiniAssembler__TED = rt::slot_string(v); return true;
    case NM_KIL: g::SV.C_AGALMiniAssembler__KIL = rt::slot_string(v); return true;
    case NM_TEX: g::SV.C_AGALMiniAssembler__TEX = rt::slot_string(v); return true;
    case NM_SGE: g::SV.C_AGALMiniAssembler__SGE = rt::slot_string(v); return true;
    case NM_SLT: g::SV.C_AGALMiniAssembler__SLT = rt::slot_string(v); return true;
    case NM_SGN: g::SV.C_AGALMiniAssembler__SGN = rt::slot_string(v); return true;
    case NM_SEQ: g::SV.C_AGALMiniAssembler__SEQ = rt::slot_string(v); return true;
    case NM_SNE: g::SV.C_AGALMiniAssembler__SNE = rt::slot_string(v); return true;
    case NM_VA: g::SV.C_AGALMiniAssembler__VA = rt::slot_string(v); return true;
    case NM_VC: g::SV.C_AGALMiniAssembler__VC = rt::slot_string(v); return true;
    case NM_VT: g::SV.C_AGALMiniAssembler__VT = rt::slot_string(v); return true;
    case NM_VO: g::SV.C_AGALMiniAssembler__VO = rt::slot_string(v); return true;
    case NM_VI: g::SV.C_AGALMiniAssembler__VI = rt::slot_string(v); return true;
    case NM_FC: g::SV.C_AGALMiniAssembler__FC = rt::slot_string(v); return true;
    case NM_FT: g::SV.C_AGALMiniAssembler__FT = rt::slot_string(v); return true;
    case NM_FS: g::SV.C_AGALMiniAssembler__FS = rt::slot_string(v); return true;
    case NM_FO: g::SV.C_AGALMiniAssembler__FO = rt::slot_string(v); return true;
    case NM_FD: g::SV.C_AGALMiniAssembler__FD = rt::slot_string(v); return true;
    case NM_D2: g::SV.C_AGALMiniAssembler__D2 = rt::slot_string(v); return true;
    case NM_D3: g::SV.C_AGALMiniAssembler__D3 = rt::slot_string(v); return true;
    case NM_CUBE: g::SV.C_AGALMiniAssembler__CUBE = rt::slot_string(v); return true;
    case NM_MIPNEAREST: g::SV.C_AGALMiniAssembler__MIPNEAREST = rt::slot_string(v); return true;
    case NM_MIPLINEAR: g::SV.C_AGALMiniAssembler__MIPLINEAR = rt::slot_string(v); return true;
    case NM_MIPNONE: g::SV.C_AGALMiniAssembler__MIPNONE = rt::slot_string(v); return true;
    case NM_NOMIP: g::SV.C_AGALMiniAssembler__NOMIP = rt::slot_string(v); return true;
    case NM_NEAREST: g::SV.C_AGALMiniAssembler__NEAREST = rt::slot_string(v); return true;
    case NM_LINEAR: g::SV.C_AGALMiniAssembler__LINEAR = rt::slot_string(v); return true;
    case NM_ANISOTROPIC2X: g::SV.C_AGALMiniAssembler__ANISOTROPIC2X = rt::slot_string(v); return true;
    case NM_ANISOTROPIC4X: g::SV.C_AGALMiniAssembler__ANISOTROPIC4X = rt::slot_string(v); return true;
    case NM_ANISOTROPIC8X: g::SV.C_AGALMiniAssembler__ANISOTROPIC8X = rt::slot_string(v); return true;
    case NM_ANISOTROPIC16X: g::SV.C_AGALMiniAssembler__ANISOTROPIC16X = rt::slot_string(v); return true;
    case NM_CENTROID: g::SV.C_AGALMiniAssembler__CENTROID = rt::slot_string(v); return true;
    case NM_SINGLE: g::SV.C_AGALMiniAssembler__SINGLE = rt::slot_string(v); return true;
    case NM_IGNORESAMPLER: g::SV.C_AGALMiniAssembler__IGNORESAMPLER = rt::slot_string(v); return true;
    case NM_REPEAT: g::SV.C_AGALMiniAssembler__REPEAT = rt::slot_string(v); return true;
    case NM_WRAP: g::SV.C_AGALMiniAssembler__WRAP = rt::slot_string(v); return true;
    case NM_CLAMP: g::SV.C_AGALMiniAssembler__CLAMP = rt::slot_string(v); return true;
    case NM_REPEAT_U_CLAMP_V: g::SV.C_AGALMiniAssembler__REPEAT_U_CLAMP_V = rt::slot_string(v); return true;
    case NM_CLAMP_U_REPEAT_V: g::SV.C_AGALMiniAssembler__CLAMP_U_REPEAT_V = rt::slot_string(v); return true;
    case NM_RGBA: g::SV.C_AGALMiniAssembler__RGBA = rt::slot_string(v); return true;
    case NM_DXT1: g::SV.C_AGALMiniAssembler__DXT1 = rt::slot_string(v); return true;
    case NM_DXT5: g::SV.C_AGALMiniAssembler__DXT5 = rt::slot_string(v); return true;
    case NM_VIDEO: g::SV.C_AGALMiniAssembler__VIDEO = rt::slot_string(v); return true;
    case NM_REGEXP_OUTER_SPACES: g::SV.C_AGALMiniAssembler__REGEXP_OUTER_SPACES = v; return true;
    case NM_OPMAP: g::SV.C_AGALMiniAssembler__OPMAP = v; return true;
    case NM_REGMAP: g::SV.C_AGALMiniAssembler__REGMAP = v; return true;
    case NM_SAMPLEMAP: g::SV.C_AGALMiniAssembler__SAMPLEMAP = v; return true;
    default: return false;
    }
}
bool C_AGALMiniAssembler::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_init: out = sm_init(); return true;
    default: return false;
    }
}
void C_OpCode::ctor_(rt::Value p0, uint32_t p1, uint32_t p2, uint32_t p3) {
    rt::Value l_param1 = rt::slot_string(p0);
    uint32_t l_param2 = p1;
    uint32_t l_param3 = p2;
    uint32_t l_param4 = p3;
    RT_FN("OpCode.OpCode");
    (void)(rt::NUL);
    ({ rt::Value _v400 = l_param1; this->f__name = rt::slot_string(_v400); _v400; });
    ({ uint32_t _v401 = l_param2; this->f__numRegister = _v401; _v401; });
    ({ uint32_t _v402 = l_param3; this->f__emitCode = _v402; _v402; });
    ({ uint32_t _v403 = l_param4; this->f__flags = _v403; _v403; });
}
rt::Value C_OpCode::m_toString() {
    RT_FN("OpCode.toString");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[321]), this->f__name), rt::VS(g::LS[322])), rt::V((double)(this->f__numRegister))), rt::VS(g::LS[323])), rt::V((double)(this->f__emitCode))), rt::VS(g::LS[324])), rt::V((double)(this->f__flags))), rt::VS(g::LS[118])));
    return rt::NUL;
}
uint32_t C_OpCode::g_emitCode() {
    RT_FN("OpCode.emitCode_get");
    return this->f__emitCode;
    return 0u;
}
uint32_t C_OpCode::g_flags() {
    RT_FN("OpCode.flags_get");
    return this->f__flags;
    return 0u;
}
rt::Value C_OpCode::g_name() {
    RT_FN("OpCode.name_get");
    return rt::slot_string(this->f__name);
    return rt::NUL;
}
uint32_t C_OpCode::g_numRegister() {
    RT_FN("OpCode.numRegister_get");
    return this->f__numRegister;
    return 0u;
}
C_OpCode* C_OpCode::alloc_() {
    C_OpCode* o = rt::make<C_OpCode>();
    return o;
}
rt::Value C_OpCode::mk_(rt::Value* a, int n) {
    C_OpCode* o = alloc_();
    o->C_OpCode::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<uint32_t>(a, n, 1, 0u), rt::arg<uint32_t>(a, n, 2, 0u), rt::arg<uint32_t>(a, n, 3, 0u));
    return rt::VO(o);
}
bool C_OpCode::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_emitCode: out = rt::V((double)(g_emitCode())); return true;
    case NM_flags: out = rt::V((double)(g_flags())); return true;
    case rt::N_name: out = g_name(); return true;
    case NM_numRegister: out = rt::V((double)(g_numRegister())); return true;
    case NM__emitCode: out = rt::V((double)(f__emitCode)); return true;
    case NM__flags: out = rt::V((double)(f__flags)); return true;
    case NM__name: out = f__name; return true;
    case NM__numRegister: out = rt::V((double)(f__numRegister)); return true;
    case rt::N_toString: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_OpCode::dset(int id, rt::Value v) {
    switch (id) {
    case NM__emitCode: f__emitCode = rt::touint(v); return true;
    case NM__flags: f__flags = rt::touint(v); return true;
    case NM__name: f__name = rt::slot_string(v); return true;
    case NM__numRegister: f__numRegister = rt::touint(v); return true;
    case NM_emitCode: return false;
    case NM_flags: return false;
    case rt::N_name: return false;
    case NM_numRegister: return false;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_OpCode::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case rt::N_toString: out = m_toString(); return true;
    case NM_emitCode: { rt::Value f = rt::V((double)(g_emitCode())); out = rt::call_value(f, a, n); return true; }
    case NM_flags: { rt::Value f = rt::V((double)(g_flags())); out = rt::call_value(f, a, n); return true; }
    case rt::N_name: { rt::Value f = g_name(); out = rt::call_value(f, a, n); return true; }
    case NM_numRegister: { rt::Value f = rt::V((double)(g_numRegister())); out = rt::call_value(f, a, n); return true; }
    case NM__emitCode: { rt::Value f = rt::V((double)(f__emitCode)); out = rt::call_value(f, a, n); return true; }
    case NM__flags: { rt::Value f = rt::V((double)(f__flags)); out = rt::call_value(f, a, n); return true; }
    case NM__name: { rt::Value f = f__name; out = rt::call_value(f, a, n); return true; }
    case NM__numRegister: { rt::Value f = rt::V((double)(f__numRegister)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_OpCode::dmeth(int id) {
    switch (id) {
    case rt::N_toString: return true;
    case NM_emitCode: return false;
    case NM_flags: return false;
    case rt::N_name: return false;
    case NM_numRegister: return false;
    case NM__emitCode: return false;
    case NM__flags: return false;
    case NM__name: return false;
    case NM__numRegister: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_OpCode::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_OpCode::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_OpCode::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_OpCode::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_Register::ctor_(rt::Value p0, rt::Value p1, uint32_t p2, uint32_t p3, uint32_t p4) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    uint32_t l_param3 = p2;
    uint32_t l_param4 = p3;
    uint32_t l_param5 = p4;
    RT_FN("Register.Register");
    (void)(rt::NUL);
    ({ rt::Value _v404 = l_param1; this->f__name = rt::slot_string(_v404); _v404; });
    ({ rt::Value _v405 = l_param2; this->f__longName = rt::slot_string(_v405); _v405; });
    ({ uint32_t _v406 = l_param3; this->f__emitCode = _v406; _v406; });
    ({ uint32_t _v407 = l_param4; this->f__range = _v407; _v407; });
    ({ uint32_t _v408 = l_param5; this->f__flags = _v408; _v408; });
}
rt::Value C_Register::m_toString() {
    RT_FN("Register.toString");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[325]), this->f__name), rt::VS(g::LS[326])), this->f__longName), rt::VS(g::LS[327])), rt::V((double)(this->f__emitCode))), rt::VS(g::LS[328])), rt::V((double)(this->f__range))), rt::VS(g::LS[324])), rt::V((double)(this->f__flags))), rt::VS(g::LS[118])));
    return rt::NUL;
}
uint32_t C_Register::g_emitCode() {
    RT_FN("Register.emitCode_get");
    return this->f__emitCode;
    return 0u;
}
rt::Value C_Register::g_longName() {
    RT_FN("Register.longName_get");
    return rt::slot_string(this->f__longName);
    return rt::NUL;
}
rt::Value C_Register::g_name() {
    RT_FN("Register.name_get");
    return rt::slot_string(this->f__name);
    return rt::NUL;
}
uint32_t C_Register::g_flags() {
    RT_FN("Register.flags_get");
    return this->f__flags;
    return 0u;
}
uint32_t C_Register::g_range() {
    RT_FN("Register.range_get");
    return this->f__range;
    return 0u;
}
C_Register* C_Register::alloc_() {
    C_Register* o = rt::make<C_Register>();
    return o;
}
rt::Value C_Register::mk_(rt::Value* a, int n) {
    C_Register* o = alloc_();
    o->C_Register::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<uint32_t>(a, n, 2, 0u), rt::arg<uint32_t>(a, n, 3, 0u), rt::arg<uint32_t>(a, n, 4, 0u));
    return rt::VO(o);
}
bool C_Register::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_emitCode: out = rt::V((double)(g_emitCode())); return true;
    case NM_longName: out = g_longName(); return true;
    case rt::N_name: out = g_name(); return true;
    case NM_flags: out = rt::V((double)(g_flags())); return true;
    case NM_range: out = rt::V((double)(g_range())); return true;
    case NM__emitCode: out = rt::V((double)(f__emitCode)); return true;
    case NM__name: out = f__name; return true;
    case NM__longName: out = f__longName; return true;
    case NM__flags: out = rt::V((double)(f__flags)); return true;
    case NM__range: out = rt::V((double)(f__range)); return true;
    case rt::N_toString: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_Register::dset(int id, rt::Value v) {
    switch (id) {
    case NM__emitCode: f__emitCode = rt::touint(v); return true;
    case NM__name: f__name = rt::slot_string(v); return true;
    case NM__longName: f__longName = rt::slot_string(v); return true;
    case NM__flags: f__flags = rt::touint(v); return true;
    case NM__range: f__range = rt::touint(v); return true;
    case NM_emitCode: return false;
    case NM_longName: return false;
    case rt::N_name: return false;
    case NM_flags: return false;
    case NM_range: return false;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_Register::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case rt::N_toString: out = m_toString(); return true;
    case NM_emitCode: { rt::Value f = rt::V((double)(g_emitCode())); out = rt::call_value(f, a, n); return true; }
    case NM_longName: { rt::Value f = g_longName(); out = rt::call_value(f, a, n); return true; }
    case rt::N_name: { rt::Value f = g_name(); out = rt::call_value(f, a, n); return true; }
    case NM_flags: { rt::Value f = rt::V((double)(g_flags())); out = rt::call_value(f, a, n); return true; }
    case NM_range: { rt::Value f = rt::V((double)(g_range())); out = rt::call_value(f, a, n); return true; }
    case NM__emitCode: { rt::Value f = rt::V((double)(f__emitCode)); out = rt::call_value(f, a, n); return true; }
    case NM__name: { rt::Value f = f__name; out = rt::call_value(f, a, n); return true; }
    case NM__longName: { rt::Value f = f__longName; out = rt::call_value(f, a, n); return true; }
    case NM__flags: { rt::Value f = rt::V((double)(f__flags)); out = rt::call_value(f, a, n); return true; }
    case NM__range: { rt::Value f = rt::V((double)(f__range)); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_Register::dmeth(int id) {
    switch (id) {
    case rt::N_toString: return true;
    case NM_emitCode: return false;
    case NM_longName: return false;
    case rt::N_name: return false;
    case NM_flags: return false;
    case NM_range: return false;
    case NM__emitCode: return false;
    case NM__name: return false;
    case NM__longName: return false;
    case NM__flags: return false;
    case NM__range: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_Register::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_Register::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_Register::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_Register::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_Sampler::ctor_(rt::Value p0, uint32_t p1, uint32_t p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    uint32_t l_param2 = p1;
    uint32_t l_param3 = p2;
    RT_FN("Sampler.Sampler");
    (void)(rt::NUL);
    ({ rt::Value _v409 = l_param1; this->f__name = rt::slot_string(_v409); _v409; });
    ({ uint32_t _v410 = l_param2; this->f__flag = _v410; _v410; });
    ({ uint32_t _v411 = l_param3; this->f__mask = _v411; _v411; });
}
rt::Value C_Sampler::m_toString() {
    RT_FN("Sampler.toString");
    return rt::slot_string(rt::add(rt::add(rt::add(rt::add(rt::add(rt::add(rt::VS(g::LS[329]), this->f__name), rt::VS(g::LS[330])), rt::V((double)(this->f__flag))), rt::VS(g::LS[331])), rt::V((double)(this->g_mask()))), rt::VS(g::LS[118])));
    return rt::NUL;
}
uint32_t C_Sampler::g_flag() {
    RT_FN("Sampler.flag_get");
    return this->f__flag;
    return 0u;
}
uint32_t C_Sampler::g_mask() {
    RT_FN("Sampler.mask_get");
    return this->f__mask;
    return 0u;
}
rt::Value C_Sampler::g_name() {
    RT_FN("Sampler.name_get");
    return rt::slot_string(this->f__name);
    return rt::NUL;
}
C_Sampler* C_Sampler::alloc_() {
    C_Sampler* o = rt::make<C_Sampler>();
    return o;
}
rt::Value C_Sampler::mk_(rt::Value* a, int n) {
    C_Sampler* o = alloc_();
    o->C_Sampler::ctor_(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<uint32_t>(a, n, 1, 0u), rt::arg<uint32_t>(a, n, 2, 0u));
    return rt::VO(o);
}
bool C_Sampler::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_flag: out = rt::V((double)(g_flag())); return true;
    case NM_mask: out = rt::V((double)(g_mask())); return true;
    case rt::N_name: out = g_name(); return true;
    case NM__flag: out = rt::V((double)(f__flag)); return true;
    case NM__mask: out = rt::V((double)(f__mask)); return true;
    case NM__name: out = f__name; return true;
    case rt::N_toString: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_Sampler::dset(int id, rt::Value v) {
    switch (id) {
    case NM__flag: f__flag = rt::touint(v); return true;
    case NM__mask: f__mask = rt::touint(v); return true;
    case NM__name: f__name = rt::slot_string(v); return true;
    case NM_flag: return false;
    case NM_mask: return false;
    case rt::N_name: return false;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_Sampler::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case rt::N_toString: out = m_toString(); return true;
    case NM_flag: { rt::Value f = rt::V((double)(g_flag())); out = rt::call_value(f, a, n); return true; }
    case NM_mask: { rt::Value f = rt::V((double)(g_mask())); out = rt::call_value(f, a, n); return true; }
    case rt::N_name: { rt::Value f = g_name(); out = rt::call_value(f, a, n); return true; }
    case NM__flag: { rt::Value f = rt::V((double)(f__flag)); out = rt::call_value(f, a, n); return true; }
    case NM__mask: { rt::Value f = rt::V((double)(f__mask)); out = rt::call_value(f, a, n); return true; }
    case NM__name: { rt::Value f = f__name; out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_Sampler::dmeth(int id) {
    switch (id) {
    case rt::N_toString: return true;
    case NM_flag: return false;
    case NM_mask: return false;
    case rt::N_name: return false;
    case NM__flag: return false;
    case NM__mask: return false;
    case NM__name: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_Sampler::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_Sampler::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_Sampler::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_Sampler::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_DateUtil::ctor_() {
    RT_FN("DateUtil.DateUtil");
    (void)(rt::NUL);
}
rt::Value C_DateUtil::sm_getShortMonthName(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("DateUtil.getShortMonthName");
    return rt::slot_string(rt::idx_get(rt::dget(rt::VO(rt::STUBCLASS), NM_monthNamesShort), rt::dcallv(l_param1, rt::N_getMonth)));
    return rt::NUL;
}
int32_t C_DateUtil::sm_getShortMonthIndex(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("DateUtil.getShortMonthIndex");
    return rt::toint(rt::dcallv(rt::dget(rt::VO(rt::STUBCLASS), NM_monthNamesShort), rt::N_indexOf, l_param1));
    return 0;
}
rt::Value C_DateUtil::sm_getFullMonthName(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("DateUtil.getFullMonthName");
    return rt::slot_string(rt::idx_get(rt::dget(rt::VO(rt::STUBCLASS), NM_monthNamesLong), rt::dcallv(l_param1, rt::N_getMonth)));
    return rt::NUL;
}
int32_t C_DateUtil::sm_getFullMonthIndex(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("DateUtil.getFullMonthIndex");
    return rt::toint(rt::dcallv(rt::dget(rt::VO(rt::STUBCLASS), NM_monthNamesLong), rt::N_indexOf, l_param1));
    return 0;
}
rt::Value C_DateUtil::sm_getShortDayName(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("DateUtil.getShortDayName");
    return rt::slot_string(rt::idx_get(rt::dget(rt::VO(rt::STUBCLASS), NM_dayNamesShort), rt::dcallv(l_param1, rt::N_getDay)));
    return rt::NUL;
}
int32_t C_DateUtil::sm_getShortDayIndex(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("DateUtil.getShortDayIndex");
    return rt::toint(rt::dcallv(rt::dget(rt::VO(rt::STUBCLASS), NM_dayNamesShort), rt::N_indexOf, l_param1));
    return 0;
}
rt::Value C_DateUtil::sm_getFullDayName(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("DateUtil.getFullDayName");
    return rt::slot_string(rt::idx_get(rt::dget(rt::VO(rt::STUBCLASS), NM_dayNamesLong), rt::dcallv(l_param1, rt::N_getDay)));
    return rt::NUL;
}
int32_t C_DateUtil::sm_getFullDayIndex(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("DateUtil.getFullDayIndex");
    return rt::toint(rt::dcallv(rt::dget(rt::VO(rt::STUBCLASS), NM_dayNamesLong), rt::N_indexOf, l_param1));
    return 0;
}
rt::Value C_DateUtil::sm_getShortYear(rt::Value p0) {
    rt::Value l_param1 = p0;
    rt::Value l_A__loc2_ = rt::NUL;
    RT_FN("DateUtil.getShortYear");
    (l_A__loc2_ = rt::slot_string(rt::VS(rt::tostr(rt::dcallv(l_param1, rt::N_getFullYear)))));
    if ((rt::alen(l_A__loc2_) < 3.0)) {
        return rt::slot_string(l_A__loc2_);
    }
    return rt::slot_string(rt::dcallv(l_A__loc2_, rt::N_substr, rt::V((rt::alen(l_A__loc2_) - 2.0))));
    return rt::NUL;
}
int32_t C_DateUtil::sm_compareDates(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = p0;
    rt::Value l_param2 = p1;
    double l_A__loc3_ = NAN;
    double l_A__loc4_ = NAN;
    RT_FN("DateUtil.compareDates");
    (l_A__loc3_ = rt::tonum(rt::dcallv(l_param1, rt::N_getTime)));
    (l_A__loc4_ = rt::tonum(rt::dcallv(l_param2, rt::N_getTime)));
    if ((l_A__loc3_ > l_A__loc4_)) {
        return rt::toint_d((-1.0));
    }
    if ((l_A__loc3_ < l_A__loc4_)) {
        return rt::toint_d(1.0);
    }
    return rt::toint_d(0.0);
    return 0;
}
int32_t C_DateUtil::sm_getShortHour(rt::Value p0) {
    rt::Value l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    RT_FN("DateUtil.getShortHour");
    (l_A__loc2_ = rt::toint(rt::dget(l_param1, rt::N_hours)));
    if (((((double)(l_A__loc2_)) == 0.0) || (((double)(l_A__loc2_)) == 12.0))) {
        return rt::toint_d(12.0);
    }
    if ((((double)(l_A__loc2_)) > 12.0)) {
        return rt::toint_d((((double)(l_A__loc2_)) - 12.0));
    }
    return l_A__loc2_;
    return 0;
}
rt::Value C_DateUtil::sm_getAMPM(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("DateUtil.getAMPM");
    return rt::slot_string((rt::gt(rt::dget(l_param1, rt::N_hours), rt::V(11.0)) ? rt::VS(g::LS[332]) : rt::VS(g::LS[333])));
    return rt::NUL;
}
rt::Value C_DateUtil::sm_parseRFC822(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_finalDate = rt::NUL;
    rt::Value l_dateParts = rt::NUL;
    rt::Value l_day = rt::NUL;
    double l_date = NAN;
    double l_month = NAN;
    double l_year = NAN;
    rt::Value l_timeParts = rt::NUL;
    double l_hour = NAN;
    double l_minute = NAN;
    double l_second = NAN;
    double l_milliseconds = NAN;
    rt::Value l_timezone = rt::NUL;
    double l_offset = NAN;
    double l_multiplier = NAN;
    double l_oHours = NAN;
    double l_oMinutes = NAN;
    rt::Value l_eStr = rt::NUL;
    rt::Value l_A_str = rt::NUL;
    rt::Value l_e = rt::UNDEF;
    RT_FN("DateUtil.parseRFC822");
    (l_finalDate = rt::NUL);
    (l_dateParts = rt::NUL);
    (l_day = rt::slot_string(rt::NUL));
    (l_date = NAN);
    (l_month = NAN);
    (l_year = NAN);
    (l_timeParts = rt::NUL);
    (l_hour = NAN);
    (l_minute = NAN);
    (l_second = NAN);
    (l_milliseconds = NAN);
    (l_timezone = rt::slot_string(rt::NUL));
    (l_offset = NAN);
    (l_multiplier = NAN);
    (l_oHours = NAN);
    (l_oMinutes = NAN);
    (l_eStr = rt::slot_string(rt::NUL));
    (l_A_str = rt::slot_string(l_param1));
    try {
        (l_dateParts = rt::dcallv(l_A_str, rt::N_split, rt::VS(g::LS[9])));
        (l_day = rt::slot_string(rt::NUL));
        if (rt::eq(rt::dcallv(rt::arr_at(l_dateParts, 0.0), rt::N_search, rt::new_regexp(rt::VS(g::LS[334]).s, rt::VS(g::LS[113]).s)), rt::V((-1.0)))) {
            (l_day = rt::slot_string(rt::dcallv(rt::dcallv(l_dateParts, rt::N_shift), rt::N_replace, rt::new_regexp(rt::VS(g::LS[335]).s, rt::VS(g::LS[113]).s), rt::VS(g::LS[113]))));
        }
        (l_date = rt::tonum(rt::dcallv(l_dateParts, rt::N_shift)));
        (l_month = ((double)(C_DateUtil::sm_getShortMonthIndex(rt::dcallv(l_dateParts, rt::N_shift)))));
        (l_year = rt::tonum(rt::dcallv(l_dateParts, rt::N_shift)));
        (l_timeParts = rt::dcallv(rt::dcallv(l_dateParts, rt::N_shift), rt::N_split, rt::VS(g::LS[120])));
        (l_hour = ((double)(rt::toint(rt::dcallv(l_timeParts, rt::N_shift)))));
        (l_minute = ((double)(rt::toint(rt::dcallv(l_timeParts, rt::N_shift)))));
        (l_second = ((rt::alen(l_timeParts) > 0.0) ? ((double)(rt::toint(rt::dcallv(l_timeParts, rt::N_shift)))) : 0.0));
        (l_milliseconds = rt::tonum(rt::date_utcv(rt::V(l_year), rt::V(l_month), rt::V(l_date), rt::V(l_hour), rt::V(l_minute), rt::V(l_second), rt::V(0.0))));
        (l_timezone = rt::slot_string(rt::dcallv(l_dateParts, rt::N_shift)));
        (l_offset = 0.0);
        if (rt::eq(rt::dcallv(l_timezone, rt::N_search, rt::new_regexp(rt::VS(g::LS[334]).s, rt::VS(g::LS[113]).s)), rt::V((-1.0)))) {
            {
                rt::Value _sw412 = l_timezone;
                int _c413 = -1;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[336]))) _c413 = 0;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[337]))) _c413 = 1;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[338]))) _c413 = 2;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[339]))) _c413 = 3;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[340]))) _c413 = 4;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[341]))) _c413 = 5;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[342]))) _c413 = 6;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[343]))) _c413 = 7;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[344]))) _c413 = 8;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[345]))) _c413 = 9;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[346]))) _c413 = 10;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[347]))) _c413 = 11;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[166]))) _c413 = 12;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[348]))) _c413 = 13;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[124]))) _c413 = 14;
                if (_c413 == -1 && rt::strict_eq(_sw412, rt::VS(g::LS[349]))) _c413 = 15;
                if (_c413 == -1) _c413 = 16;
                switch (_c413) {
                case 0: {
                    (l_offset = 0.0);
                    break;
                }
                case 1: {
                    (l_offset = 0.0);
                    break;
                }
                case 2: {
                    (l_offset = 0.0);
                    break;
                }
                case 3: {
                    (l_offset = (-18000000.0));
                    break;
                }
                case 4: {
                    (l_offset = (-14400000.0));
                    break;
                }
                case 5: {
                    (l_offset = (-21600000.0));
                    break;
                }
                case 6: {
                    (l_offset = (-18000000.0));
                    break;
                }
                case 7: {
                    (l_offset = (-25200000.0));
                    break;
                }
                case 8: {
                    (l_offset = (-21600000.0));
                    break;
                }
                case 9: {
                    (l_offset = (-28800000.0));
                    break;
                }
                case 10: {
                    (l_offset = (-25200000.0));
                    break;
                }
                case 11: {
                    (l_offset = 0.0);
                    break;
                }
                case 12: {
                    (l_offset = (-3600000.0));
                    break;
                }
                case 13: {
                    (l_offset = (-43200000.0));
                    break;
                }
                case 14: {
                    (l_offset = 3600000.0);
                    break;
                }
                case 15: {
                    (l_offset = 43200000.0);
                    break;
                }
                case 16: {
                    (l_offset = 0.0);
                }
                default: break;
                }
            }
        } else {
            (l_multiplier = 1.0);
            (l_oHours = 0.0);
            (l_oMinutes = 0.0);
            if ((!(rt::alen(l_timezone) == 4.0))) {
                if (rt::eq(rt::dcallv(l_timezone, rt::N_charAt, rt::V(0.0)), rt::VS(g::LS[134]))) {
                    (l_multiplier = (-1.0));
                }
                (l_timezone = rt::slot_string(rt::dcallv(l_timezone, rt::N_substr, rt::V(1.0), rt::V(4.0))));
            }
            (l_oHours = rt::tonum(rt::dcallv(l_timezone, rt::N_substr, rt::V(0.0), rt::V(2.0))));
            (l_oMinutes = rt::tonum(rt::dcallv(l_timezone, rt::N_substr, rt::V(2.0), rt::V(2.0))));
            (l_offset = ((((l_oHours * 3600000.0) + (l_oMinutes * 60000.0))) * l_multiplier));
        }
        (l_finalDate = rt::new_datev(rt::V((l_milliseconds - l_offset))));
        if (rt::eq(rt::dcallv(l_finalDate, rt::N_toString), rt::VS(g::LS[350]))) {
            throw rt::Thrown{rt::new_errorv(rt::VS(g::LS[351]))};
        }
    } catch (...) {
        l_e = rt::cur_exc();
        (l_eStr = rt::slot_string(rt::add(rt::add(rt::VS(g::LS[352]), l_A_str), rt::VS(g::LS[353]))));
        (l_eStr = rt::slot_string(rt::add(l_eStr, rt::add(rt::VS(g::LS[354]), rt::dcallv(l_e, rt::N_toString)))));
        throw rt::Thrown{rt::new_errorv(l_eStr)};
    }
    return l_finalDate;
    return rt::NUL;
}
rt::Value C_DateUtil::sm_toRFC822(rt::Value p0) {
    rt::Value l_param1 = p0;
    double l_A__loc2_ = NAN;
    double l_A__loc3_ = NAN;
    double l_A__loc4_ = NAN;
    double l_A__loc5_ = NAN;
    rt::Value l_A__loc6_ = rt::NUL;
    RT_FN("DateUtil.toRFC822");
    (l_A__loc2_ = rt::tonum(rt::dcallv(l_param1, rt::N_getUTCDate)));
    (l_A__loc3_ = rt::tonum(rt::dcallv(l_param1, rt::N_getUTCHours)));
    (l_A__loc4_ = rt::tonum(rt::dcallv(l_param1, NM_getUTCMinutes)));
    (l_A__loc5_ = rt::tonum(rt::dcallv(l_param1, NM_getUTCSeconds)));
    (l_A__loc6_ = rt::slot_string(rt::new_stubinst()));
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::idx_get(rt::dget(rt::VO(rt::STUBCLASS), NM_dayNamesShort), rt::dcallv(l_param1, rt::N_getUTCDay)))));
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::VS(g::LS[355]))));
    if ((l_A__loc2_ < 10.0)) {
        (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::VS(g::LS[151]))));
    }
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::V(l_A__loc2_))));
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::VS(g::LS[9]))));
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::idx_get(rt::dget(rt::VO(rt::STUBCLASS), NM_monthNamesShort), rt::dcallv(l_param1, rt::N_getUTCMonth)))));
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::VS(g::LS[9]))));
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::dcallv(l_param1, rt::N_getUTCFullYear))));
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::VS(g::LS[9]))));
    if ((l_A__loc3_ < 10.0)) {
        (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::VS(g::LS[151]))));
    }
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::V(l_A__loc3_))));
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::VS(g::LS[120]))));
    if ((l_A__loc4_ < 10.0)) {
        (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::VS(g::LS[151]))));
    }
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::V(l_A__loc4_))));
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::VS(g::LS[120]))));
    if ((l_A__loc5_ < 10.0)) {
        (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::VS(g::LS[151]))));
    }
    (l_A__loc6_ = rt::slot_string(rt::add(l_A__loc6_, rt::V(l_A__loc5_))));
    return rt::slot_string(rt::add(l_A__loc6_, rt::VS(g::LS[356])));
    return rt::NUL;
}
rt::Value C_DateUtil::sm_parseW3CDTF(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_finalDate = rt::NUL;
    rt::Value l_dateStr = rt::NUL;
    rt::Value l_timeStr = rt::NUL;
    rt::Value l_dateArr = rt::NUL;
    double l_year = NAN;
    double l_month = NAN;
    double l_date = NAN;
    double l_multiplier = NAN;
    double l_offsetHours = NAN;
    double l_offsetMinutes = NAN;
    rt::Value l_offsetStr = rt::NUL;
    rt::Value l_timeArr = rt::NUL;
    double l_hour = NAN;
    double l_minutes = NAN;
    rt::Value l_secondsArr = rt::NUL;
    double l_seconds = NAN;
    double l_milliseconds = NAN;
    double l_utc = NAN;
    double l_offset = NAN;
    rt::Value l_eStr = rt::NUL;
    rt::Value l_A_str = rt::NUL;
    rt::Value l_e = rt::UNDEF;
    RT_FN("DateUtil.parseW3CDTF");
    (l_finalDate = rt::NUL);
    (l_dateStr = rt::slot_string(rt::NUL));
    (l_timeStr = rt::slot_string(rt::NUL));
    (l_dateArr = rt::NUL);
    (l_year = NAN);
    (l_month = NAN);
    (l_date = NAN);
    (l_multiplier = NAN);
    (l_offsetHours = NAN);
    (l_offsetMinutes = NAN);
    (l_offsetStr = rt::slot_string(rt::NUL));
    (l_timeArr = rt::NUL);
    (l_hour = NAN);
    (l_minutes = NAN);
    (l_secondsArr = rt::NUL);
    (l_seconds = NAN);
    (l_milliseconds = NAN);
    (l_utc = NAN);
    (l_offset = NAN);
    (l_eStr = rt::slot_string(rt::NUL));
    (l_A_str = rt::slot_string(l_param1));
    try {
        (l_dateStr = rt::slot_string(rt::dcallv(l_A_str, rt::N_substring, rt::V(0.0), rt::dcallv(l_A_str, rt::N_indexOf, rt::VS(g::LS[357])))));
        (l_timeStr = rt::slot_string(rt::dcallv(l_A_str, rt::N_substring, rt::add(rt::dcallv(l_A_str, rt::N_indexOf, rt::VS(g::LS[357])), rt::V(1.0)), rt::V(rt::alen(l_A_str)))));
        (l_dateArr = rt::dcallv(l_dateStr, rt::N_split, rt::VS(g::LS[134])));
        (l_year = rt::tonum(rt::dcallv(l_dateArr, rt::N_shift)));
        (l_month = rt::tonum(rt::dcallv(l_dateArr, rt::N_shift)));
        (l_date = rt::tonum(rt::dcallv(l_dateArr, rt::N_shift)));
        if ((!rt::eq(rt::dcallv(l_timeStr, rt::N_indexOf, rt::VS(g::LS[347])), rt::V((-1.0))))) {
            (l_multiplier = 1.0);
            (l_offsetHours = 0.0);
            (l_offsetMinutes = 0.0);
            (l_timeStr = rt::slot_string(rt::dcallv(l_timeStr, rt::N_replace, rt::VS(g::LS[347]), rt::VS(g::LS[113]))));
        } else if ((!rt::eq(rt::dcallv(l_timeStr, rt::N_indexOf, rt::VS(g::LS[158])), rt::V((-1.0))))) {
            (l_multiplier = 1.0);
            (l_offsetStr = rt::slot_string(rt::dcallv(l_timeStr, rt::N_substring, rt::add(rt::dcallv(l_timeStr, rt::N_indexOf, rt::VS(g::LS[158])), rt::V(1.0)), rt::V(rt::alen(l_timeStr)))));
            (l_offsetHours = rt::tonum(rt::dcallv(l_offsetStr, rt::N_substring, rt::V(0.0), rt::dcallv(l_offsetStr, rt::N_indexOf, rt::VS(g::LS[120])))));
            (l_offsetMinutes = rt::tonum(rt::dcallv(l_offsetStr, rt::N_substring, rt::add(rt::dcallv(l_offsetStr, rt::N_indexOf, rt::VS(g::LS[120])), rt::V(1.0)), rt::V(rt::alen(l_offsetStr)))));
            (l_timeStr = rt::slot_string(rt::dcallv(l_timeStr, rt::N_substring, rt::V(0.0), rt::dcallv(l_timeStr, rt::N_indexOf, rt::VS(g::LS[158])))));
        } else {
            (l_multiplier = (-1.0));
            (l_offsetStr = rt::slot_string(rt::dcallv(l_timeStr, rt::N_substring, rt::add(rt::dcallv(l_timeStr, rt::N_indexOf, rt::VS(g::LS[134])), rt::V(1.0)), rt::V(rt::alen(l_timeStr)))));
            (l_offsetHours = rt::tonum(rt::dcallv(l_offsetStr, rt::N_substring, rt::V(0.0), rt::dcallv(l_offsetStr, rt::N_indexOf, rt::VS(g::LS[120])))));
            (l_offsetMinutes = rt::tonum(rt::dcallv(l_offsetStr, rt::N_substring, rt::add(rt::dcallv(l_offsetStr, rt::N_indexOf, rt::VS(g::LS[120])), rt::V(1.0)), rt::V(rt::alen(l_offsetStr)))));
            (l_timeStr = rt::slot_string(rt::dcallv(l_timeStr, rt::N_substring, rt::V(0.0), rt::dcallv(l_timeStr, rt::N_indexOf, rt::VS(g::LS[134])))));
        }
        (l_timeArr = rt::dcallv(l_timeStr, rt::N_split, rt::VS(g::LS[120])));
        (l_hour = rt::tonum(rt::dcallv(l_timeArr, rt::N_shift)));
        (l_minutes = rt::tonum(rt::dcallv(l_timeArr, rt::N_shift)));
        (l_secondsArr = ((rt::alen(l_timeArr) > 0.0) ? rt::dcallv(rt::VS(rt::tostr(rt::dcallv(l_timeArr, rt::N_shift))), rt::N_split, rt::VS(g::LS[155])) : rt::NUL));
        (l_seconds = (((!rt::eq(l_secondsArr, rt::NUL)) && (rt::alen(l_secondsArr) > 0.0)) ? rt::tonum(rt::dcallv(l_secondsArr, rt::N_shift)) : 0.0));
        (l_milliseconds = (((!rt::eq(l_secondsArr, rt::NUL)) && (rt::alen(l_secondsArr) > 0.0)) ? rt::tonum(rt::dcallv(l_secondsArr, rt::N_shift)) : 0.0));
        (l_utc = rt::tonum(rt::date_utcv(rt::V(l_year), rt::V((l_month - 1.0)), rt::V(l_date), rt::V(l_hour), rt::V(l_minutes), rt::V(l_seconds), rt::V(l_milliseconds))));
        (l_offset = ((((l_offsetHours * 3600000.0) + (l_offsetMinutes * 60000.0))) * l_multiplier));
        (l_finalDate = rt::new_datev(rt::V((l_utc - l_offset))));
        if (rt::eq(rt::dcallv(l_finalDate, rt::N_toString), rt::VS(g::LS[350]))) {
            throw rt::Thrown{rt::new_errorv(rt::VS(g::LS[358]))};
        }
    } catch (...) {
        l_e = rt::cur_exc();
        (l_eStr = rt::slot_string(rt::add(rt::add(rt::VS(g::LS[352]), l_A_str), rt::VS(g::LS[353]))));
        (l_eStr = rt::slot_string(rt::add(l_eStr, rt::add(rt::VS(g::LS[354]), rt::dcallv(l_e, rt::N_toString)))));
        throw rt::Thrown{rt::new_errorv(l_eStr)};
    }
    return l_finalDate;
    return rt::NUL;
}
bool C_DateUtil::dsm_toW3CDTF_1() { return false; }
rt::Value C_DateUtil::sm_toW3CDTF(rt::Value p0, bool p1) {
    rt::Value l_param1 = p0;
    bool l_param2 = p1;
    double l_A__loc3_ = NAN;
    double l_A__loc4_ = NAN;
    double l_A__loc5_ = NAN;
    double l_A__loc6_ = NAN;
    double l_A__loc7_ = NAN;
    double l_A__loc8_ = NAN;
    rt::Value l_A__loc9_ = rt::NUL;
    RT_FN("DateUtil.toW3CDTF");
    (l_A__loc3_ = rt::tonum(rt::dcallv(l_param1, rt::N_getUTCDate)));
    (l_A__loc4_ = rt::tonum(rt::dcallv(l_param1, rt::N_getUTCMonth)));
    (l_A__loc5_ = rt::tonum(rt::dcallv(l_param1, rt::N_getUTCHours)));
    (l_A__loc6_ = rt::tonum(rt::dcallv(l_param1, NM_getUTCMinutes)));
    (l_A__loc7_ = rt::tonum(rt::dcallv(l_param1, NM_getUTCSeconds)));
    (l_A__loc8_ = rt::tonum(rt::dcallv(l_param1, NM_getUTCMilliseconds)));
    (l_A__loc9_ = rt::slot_string(rt::new_stubinst()));
    (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::dcallv(l_param1, rt::N_getUTCFullYear))));
    (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[134]))));
    if (((l_A__loc4_ + 1.0) < 10.0)) {
        (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[151]))));
    }
    (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::V((l_A__loc4_ + 1.0)))));
    (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[134]))));
    if ((l_A__loc3_ < 10.0)) {
        (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[151]))));
    }
    (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::V(l_A__loc3_))));
    (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[357]))));
    if ((l_A__loc5_ < 10.0)) {
        (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[151]))));
    }
    (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::V(l_A__loc5_))));
    (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[120]))));
    if ((l_A__loc6_ < 10.0)) {
        (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[151]))));
    }
    (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::V(l_A__loc6_))));
    (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[120]))));
    if ((l_A__loc7_ < 10.0)) {
        (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[151]))));
    }
    (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::V(l_A__loc7_))));
    if ((l_param2 && (l_A__loc8_ > 0.0))) {
        (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[155]))));
        (l_A__loc9_ = rt::slot_string(rt::add(l_A__loc9_, rt::V(l_A__loc8_))));
    }
    return rt::slot_string(rt::add(l_A__loc9_, rt::VS(g::LS[359])));
    return rt::NUL;
}
C_DateUtil* C_DateUtil::alloc_() {
    C_DateUtil* o = rt::make<C_DateUtil>();
    return o;
}
rt::Value C_DateUtil::mk_(rt::Value* a, int n) {
    C_DateUtil* o = alloc_();
    o->C_DateUtil::ctor_();
    return rt::VO(o);
}
bool C_DateUtil::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_DateUtil::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_DateUtil::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_DateUtil::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_DateUtil::smeth_(int id) {
    switch (id) {
    case NM_getShortMonthName: return true;
    case NM_getShortMonthIndex: return true;
    case NM_getFullMonthName: return true;
    case NM_getFullMonthIndex: return true;
    case NM_getShortDayName: return true;
    case NM_getShortDayIndex: return true;
    case NM_getFullDayName: return true;
    case NM_getFullDayIndex: return true;
    case NM_getShortYear: return true;
    case NM_compareDates: return true;
    case NM_getShortHour: return true;
    case NM_getAMPM: return true;
    case NM_parseRFC822: return true;
    case NM_toRFC822: return true;
    case NM_parseW3CDTF: return true;
    case NM_toW3CDTF: return true;
    default: return false;
    }
}
bool C_DateUtil::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_getShortMonthName: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getShortMonthIndex: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getFullMonthName: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getFullMonthIndex: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getShortDayName: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getShortDayIndex: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getFullDayName: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getFullDayIndex: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getShortYear: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_compareDates: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getShortHour: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getAMPM: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_parseRFC822: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_toRFC822: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_parseW3CDTF: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_toW3CDTF: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_DateUtil::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_DateUtil::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_getShortMonthName: out = sm_getShortMonthName(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_getShortMonthIndex: out = rt::V((double)(sm_getShortMonthIndex(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)))); return true;
    case NM_getFullMonthName: out = sm_getFullMonthName(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_getFullMonthIndex: out = rt::V((double)(sm_getFullMonthIndex(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)))); return true;
    case NM_getShortDayName: out = sm_getShortDayName(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_getShortDayIndex: out = rt::V((double)(sm_getShortDayIndex(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)))); return true;
    case NM_getFullDayName: out = sm_getFullDayName(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_getFullDayIndex: out = rt::V((double)(sm_getFullDayIndex(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)))); return true;
    case NM_getShortYear: out = sm_getShortYear(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_compareDates: out = rt::V((double)(sm_compareDates(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF)))); return true;
    case NM_getShortHour: out = rt::V((double)(sm_getShortHour(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)))); return true;
    case NM_getAMPM: out = sm_getAMPM(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_parseRFC822: out = sm_parseRFC822(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_toRFC822: out = sm_toRFC822(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_parseW3CDTF: out = sm_parseW3CDTF(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_toW3CDTF: out = sm_toW3CDTF(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, C_DateUtil::dsm_toW3CDTF_1())); return true;
    default: return false;
    }
}
void C_IntUtil::ctor_() {
    RT_FN("IntUtil.IntUtil");
    (void)(rt::NUL);
}
int32_t C_IntUtil::sm_rol(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    RT_FN("IntUtil.rol");
    return rt::bitor_(((double)(rt::shl(((double)(l_param1)), ((double)(l_param2))))), rt::ushr(((double)(l_param1)), (32.0 - ((double)(l_param2)))));
    return 0;
}
uint32_t C_IntUtil::sm_ror(int32_t p0, int32_t p1) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    int32_t l_A__loc3_ = 0;
    RT_FN("IntUtil.ror");
    (l_A__loc3_ = rt::toint_d((32.0 - ((double)(l_param2)))));
    return ((uint32_t)(rt::bitor_(((double)(rt::shl(((double)(l_param1)), ((double)(l_A__loc3_))))), rt::ushr(((double)(l_param1)), (32.0 - ((double)(l_A__loc3_)))))));
    return 0u;
}
bool C_IntUtil::dsm_toHex_1() { return false; }
rt::Value C_IntUtil::sm_toHex(int32_t p0, bool p1) {
    int32_t l_param1 = p0;
    bool l_param2 = p1;
    int32_t l_A__loc5_ = 0;
    int32_t l_A__loc4_ = 0;
    rt::Value l_A__loc3_ = rt::NUL;
    RT_FN("IntUtil.toHex");
    (l_A__loc5_ = rt::toint_d(0.0));
    (l_A__loc4_ = rt::toint_d(0.0));
    (l_A__loc3_ = rt::slot_string(rt::VS(g::LS[113])));
    if (l_param2) {
        (l_A__loc5_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc5_)) < 4.0)) {
            (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::dcallv(g::SV.C_IntUtil__hexChars, rt::N_charAt, rt::V((double)(rt::bitand_(((double)(rt::shr(((double)(l_param1)), ((((3.0 - ((double)(l_A__loc5_)))) * 8.0) + 4.0)))), 15.0)))), rt::dcallv(g::SV.C_IntUtil__hexChars, rt::N_charAt, rt::V((double)(rt::bitand_(((double)(rt::shr(((double)(l_param1)), (((3.0 - ((double)(l_A__loc5_)))) * 8.0)))), 15.0))))))));
            (l_A__loc5_ = rt::toint_d((((double)(l_A__loc5_)) + 1.0)));
        }
    } else {
        (l_A__loc4_ = rt::toint_d(0.0));
        while ((((double)(l_A__loc4_)) < 4.0)) {
            (l_A__loc3_ = rt::slot_string(rt::add(l_A__loc3_, rt::add(rt::dcallv(g::SV.C_IntUtil__hexChars, rt::N_charAt, rt::V((double)(rt::bitand_(((double)(rt::shr(((double)(l_param1)), ((((double)(l_A__loc4_)) * 8.0) + 4.0)))), 15.0)))), rt::dcallv(g::SV.C_IntUtil__hexChars, rt::N_charAt, rt::V((double)(rt::bitand_(((double)(rt::shr(((double)(l_param1)), (((double)(l_A__loc4_)) * 8.0)))), 15.0))))))));
            (l_A__loc4_ = rt::toint_d((((double)(l_A__loc4_)) + 1.0)));
        }
    }
    return rt::slot_string(l_A__loc3_);
    return rt::NUL;
}
C_IntUtil* C_IntUtil::alloc_() {
    C_IntUtil* o = rt::make<C_IntUtil>();
    return o;
}
rt::Value C_IntUtil::mk_(rt::Value* a, int n) {
    C_IntUtil* o = alloc_();
    o->C_IntUtil::ctor_();
    return rt::VO(o);
}
bool C_IntUtil::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_IntUtil::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_IntUtil::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_IntUtil::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_IntUtil::smeth_(int id) {
    switch (id) {
    case NM_rol: return true;
    case NM_ror: return true;
    case NM_toHex: return true;
    default: return false;
    }
}
bool C_IntUtil::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_hexChars: out = g::SV.C_IntUtil__hexChars; return true;
    case NM_rol: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_ror: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_toHex: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_IntUtil::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_hexChars: g::SV.C_IntUtil__hexChars = rt::slot_string(v); return true;
    default: return false;
    }
}
bool C_IntUtil::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_rol: out = rt::V((double)(sm_rol(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)))); return true;
    case NM_ror: out = rt::V((double)(sm_ror(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, 0)))); return true;
    case NM_toHex: out = sm_toHex(rt::arg<int32_t>(a, n, 0, 0), rt::arg<bool>(a, n, 1, C_IntUtil::dsm_toHex_1())); return true;
    default: return false;
    }
}
void C_StringUtil::ctor_() {
    RT_FN("StringUtil.StringUtil");
    (void)(rt::NUL);
}
bool C_StringUtil::sm_stringsAreEqual(rt::Value p0, rt::Value p1, bool p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    bool l_param3 = p2;
    RT_FN("StringUtil.stringsAreEqual");
    if (l_param3) {
        return rt::eq(l_param1, l_param2);
    }
    return rt::eq(rt::dcallv(l_param1, rt::N_toUpperCase), rt::dcallv(l_param2, rt::N_toUpperCase));
    return false;
}
rt::Value C_StringUtil::sm_trim(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("StringUtil.trim");
    return rt::slot_string(C_StringUtil::sm_ltrim(C_StringUtil::sm_rtrim(l_param1)));
    return rt::NUL;
}
rt::Value C_StringUtil::sm_ltrim(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_A__loc3_ = NAN;
    double l_A__loc2_ = NAN;
    RT_FN("StringUtil.ltrim");
    (l_A__loc3_ = NAN);
    (l_A__loc2_ = rt::alen(l_param1));
    (l_A__loc3_ = 0.0);
    while ((l_A__loc3_ < l_A__loc2_)) {
        if (rt::gt(rt::dcallv(l_param1, rt::N_charCodeAt, rt::V(l_A__loc3_)), rt::V(32.0))) {
            return rt::slot_string(rt::dcallv(l_param1, rt::N_substring, rt::V(l_A__loc3_)));
        }
        (l_A__loc3_ = (l_A__loc3_ + 1.0));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
rt::Value C_StringUtil::sm_rtrim(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    double l_A__loc3_ = NAN;
    double l_A__loc2_ = NAN;
    RT_FN("StringUtil.rtrim");
    (l_A__loc3_ = NAN);
    (l_A__loc2_ = rt::alen(l_param1));
    (l_A__loc3_ = l_A__loc2_);
    while ((l_A__loc3_ > 0.0)) {
        if (rt::gt(rt::dcallv(l_param1, rt::N_charCodeAt, rt::V((l_A__loc3_ - 1.0))), rt::V(32.0))) {
            return rt::slot_string(rt::dcallv(l_param1, rt::N_substring, rt::V(0.0), rt::V(l_A__loc3_)));
        }
        (l_A__loc3_ = (l_A__loc3_ - 1.0));
    }
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
bool C_StringUtil::sm_beginsWith(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("StringUtil.beginsWith");
    return rt::eq(l_param2, rt::dcallv(l_param1, rt::N_substring, rt::V(0.0), rt::V(rt::alen(l_param2))));
    return false;
}
bool C_StringUtil::sm_endsWith(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("StringUtil.endsWith");
    return rt::eq(l_param2, rt::dcallv(l_param1, rt::N_substring, rt::V((rt::alen(l_param1) - rt::alen(l_param2)))));
    return false;
}
rt::Value C_StringUtil::sm_remove(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    RT_FN("StringUtil.remove");
    return rt::slot_string(C_StringUtil::sm_replace(l_param1, l_param2, rt::VS(g::LS[113])));
    return rt::NUL;
}
rt::Value C_StringUtil::sm_replace(rt::Value p0, rt::Value p1, rt::Value p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("StringUtil.replace");
    return rt::slot_string(rt::dcallv(rt::dcallv(l_param1, rt::N_split, l_param2), rt::N_join, l_param3));
    return rt::NUL;
}
bool C_StringUtil::sm_stringHasValue(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("StringUtil.stringHasValue");
    return ({ bool _t414 = (!rt::eq(l_param1, rt::NUL)); _t414 ? (bool)((rt::alen(l_param1) > 0.0)) : _t414; });
    return false;
}
C_StringUtil* C_StringUtil::alloc_() {
    C_StringUtil* o = rt::make<C_StringUtil>();
    return o;
}
rt::Value C_StringUtil::mk_(rt::Value* a, int n) {
    C_StringUtil* o = alloc_();
    o->C_StringUtil::ctor_();
    return rt::VO(o);
}
bool C_StringUtil::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_StringUtil::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_StringUtil::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_StringUtil::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_StringUtil::smeth_(int id) {
    switch (id) {
    case NM_stringsAreEqual: return true;
    case NM_trim: return true;
    case NM_ltrim: return true;
    case NM_rtrim: return true;
    case NM_beginsWith: return true;
    case NM_endsWith: return true;
    case NM_remove: return true;
    case rt::N_replace: return true;
    case NM_stringHasValue: return true;
    default: return false;
    }
}
bool C_StringUtil::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_stringsAreEqual: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_trim: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_ltrim: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_rtrim: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_beginsWith: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_endsWith: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_remove: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case rt::N_replace: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_stringHasValue: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_StringUtil::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_StringUtil::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_stringsAreEqual: out = rt::VB(sm_stringsAreEqual(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<bool>(a, n, 2, false))); return true;
    case NM_trim: out = sm_trim(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_ltrim: out = sm_ltrim(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_rtrim: out = sm_rtrim(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_beginsWith: out = rt::VB(sm_beginsWith(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF))); return true;
    case NM_endsWith: out = rt::VB(sm_endsWith(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF))); return true;
    case NM_remove: out = sm_remove(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF)); return true;
    case rt::N_replace: out = sm_replace(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, rt::UNDEF)); return true;
    case NM_stringHasValue: out = rt::VB(sm_stringHasValue(rt::arg<rt::Value>(a, n, 0, rt::UNDEF))); return true;
    default: return false;
    }
}
void C_PlayFab::ctor_() {
    RT_FN("PlayFab.PlayFab");
}
rt::Value C_PlayFab::sm_initialize() {
    RT_FN("PlayFab.initialize");
    return rt::NUL;
}
bool C_PlayFab::dsm_loadCustomID_0() { return false; }
rt::Value C_PlayFab::sm_loadCustomID(bool p0) {
    bool l_param1 = p0;
    RT_FN("PlayFab.loadCustomID");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_verifyAndroid_2() { return rt::slot_string(rt::VS(g::LS[361])); }
uint32_t C_PlayFab::dsm_verifyAndroid_3() { return rt::touint_d(100.0); }
rt::Value C_PlayFab::dsm_verifyAndroid_4() { return rt::NUL; }
rt::Value C_PlayFab::dsm_verifyAndroid_5() { return rt::NUL; }
rt::Value C_PlayFab::sm_verifyAndroid(rt::Value p0, rt::Value p1, rt::Value p2, uint32_t p3, rt::Value p4, rt::Value p5) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    uint32_t l_param4 = p3;
    rt::Value l_param5 = p4;
    rt::Value l_param6 = p5;
    RT_FN("PlayFab.verifyAndroid");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_verifyiOS_1() { return rt::slot_string(rt::VS(g::LS[361])); }
uint32_t C_PlayFab::dsm_verifyiOS_2() { return rt::touint_d(100.0); }
rt::Value C_PlayFab::dsm_verifyiOS_3() { return rt::NUL; }
rt::Value C_PlayFab::dsm_verifyiOS_4() { return rt::NUL; }
rt::Value C_PlayFab::sm_verifyiOS(rt::Value p0, rt::Value p1, uint32_t p2, rt::Value p3, rt::Value p4) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    uint32_t l_param3 = p2;
    rt::Value l_param4 = p3;
    rt::Value l_param5 = p4;
    RT_FN("PlayFab.verifyiOS");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_login_0() { return rt::NUL; }
rt::Value C_PlayFab::dsm_login_1() { return rt::NUL; }
rt::Value C_PlayFab::sm_login(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("PlayFab.login");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_logout() {
    RT_FN("PlayFab.logout");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_loginKongregate_0() { return rt::NUL; }
rt::Value C_PlayFab::dsm_loginKongregate_1() { return rt::NUL; }
rt::Value C_PlayFab::sm_loginKongregate(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("PlayFab.loginKongregate");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_loginSteam_0() { return rt::NUL; }
rt::Value C_PlayFab::dsm_loginSteam_1() { return rt::NUL; }
rt::Value C_PlayFab::sm_loginSteam(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("PlayFab.loginSteam");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_loginAccount(rt::Value p0, rt::Value p1, rt::Value p2, rt::Value p3) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("PlayFab.loginAccount");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_loginEmail(rt::Value p0, rt::Value p1, rt::Value p2, rt::Value p3) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("PlayFab.loginEmail");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_sendRecoveryEmail(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("PlayFab.sendRecoveryEmail");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_getCloudScript_1() { return rt::NUL; }
rt::Value C_PlayFab::sm_getCloudScript(bool p0, rt::Value p1) {
    bool l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("PlayFab.getCloudScript");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_initializeCloudScript_1() { return rt::NUL; }
rt::Value C_PlayFab::sm_initializeCloudScript(bool p0, rt::Value p1) {
    bool l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("PlayFab.initializeCloudScript");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_sendCloudRequest_2() { return rt::NUL; }
rt::Value C_PlayFab::dsm_sendCloudRequest_3() { return rt::NUL; }
rt::Value C_PlayFab::sm_sendCloudRequest(rt::Value p0, rt::Value p1, rt::Value p2, rt::Value p3) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = p1;
    rt::Value l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("PlayFab.sendCloudRequest");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_getReadOnlyData_1() { return rt::NUL; }
rt::Value C_PlayFab::dsm_getReadOnlyData_2() { return rt::NUL; }
rt::Value C_PlayFab::sm_getReadOnlyData(rt::Value p0, rt::Value p1, rt::Value p2) {
    rt::Value l_param1 = p0;
    rt::Value l_param2 = p1;
    rt::Value l_param3 = p2;
    RT_FN("PlayFab.getReadOnlyData");
    return rt::NUL;
}
bool C_PlayFab::dsm_getCombinedInfo_1() { return false; }
rt::Value C_PlayFab::dsm_getCombinedInfo_2() { return rt::NUL; }
rt::Value C_PlayFab::sm_getCombinedInfo(rt::Value p0, bool p1, rt::Value p2) {
    rt::Value l_param1 = p0;
    bool l_param2 = p1;
    rt::Value l_param3 = p2;
    RT_FN("PlayFab.getCombinedInfo");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_updateDisplayName(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("PlayFab.updateDisplayName");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_onKongregateLogin() {
    RT_FN("PlayFab.onKongregateLogin");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_linkKongregate_0() { return rt::NUL; }
rt::Value C_PlayFab::dsm_linkKongregate_1() { return rt::NUL; }
rt::Value C_PlayFab::sm_linkKongregate(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("PlayFab.linkKongregate");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_unlinkKongregate_0() { return rt::NUL; }
rt::Value C_PlayFab::dsm_unlinkKongregate_1() { return rt::NUL; }
rt::Value C_PlayFab::sm_unlinkKongregate(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("PlayFab.unlinkKongregate");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_completeRegistration(rt::Value p0, rt::Value p1, rt::Value p2, rt::Value p3, rt::Value p4) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    rt::Value l_param4 = p3;
    rt::Value l_param5 = p4;
    RT_FN("PlayFab.completeRegistration");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_register(rt::Value p0, rt::Value p1, rt::Value p2, rt::Value p3, rt::Value p4) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    rt::Value l_param4 = p3;
    rt::Value l_param5 = p4;
    RT_FN("PlayFab.register");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_startPurchase(rt::Value p0, rt::Value p1, rt::Value p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = p1;
    rt::Value l_param3 = p2;
    RT_FN("PlayFab.startPurchase");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_payForPurchase_1() { return rt::slot_string(rt::VS(g::LS[362])); }
rt::Value C_PlayFab::dsm_payForPurchase_2() { return rt::slot_string(rt::VS(g::LS[363])); }
rt::Value C_PlayFab::sm_payForPurchase(rt::Value p0, rt::Value p1, rt::Value p2) {
    rt::Value l_param1 = rt::slot_string(p0);
    rt::Value l_param2 = rt::slot_string(p1);
    rt::Value l_param3 = rt::slot_string(p2);
    RT_FN("PlayFab.payForPurchase");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_onSteamPurchaseSuccessfull(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("PlayFab.onSteamPurchaseSuccessfull");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_onSteamPurchaseFailed(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("PlayFab.onSteamPurchaseFailed");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_confirmPurchase(rt::Value p0) {
    rt::Value l_param1 = rt::slot_string(p0);
    RT_FN("PlayFab.confirmPurchase");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_onLoginComplete_1() { return rt::NUL; }
rt::Value C_PlayFab::sm_onLoginComplete(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("PlayFab.onLoginComplete");
    return rt::NUL;
}
rt::Value C_PlayFab::dsm_onLoginError_1() { return rt::NUL; }
rt::Value C_PlayFab::sm_onLoginError(rt::Value p0, rt::Value p1) {
    rt::Value l_param1 = p0;
    rt::Value l_param2 = p1;
    RT_FN("PlayFab.onLoginError");
    return rt::NUL;
}
rt::Value C_PlayFab::sm_onPlayFabError(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("PlayFab.onPlayFabError");
    return rt::NUL;
}
int32_t C_PlayFab::sg_serverTime() {
    RT_FN("PlayFab.serverTime_get");
    return ({ rt::Value _o415 = g::SV.C_PlayFab___serverTime; C_S_3F* _p416 = rt::as_ptr<C_S_3F>(_o415); _p416 ? _p416->g_S_8_21__2b_() : rt::toint(rt::dget(_o415, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_serverTimer() {
    RT_FN("PlayFab.serverTimer_get");
    return ({ rt::Value _o417 = g::SV.C_PlayFab___serverTimer; C_S_3F* _p418 = rt::as_ptr<C_S_3F>(_o417); _p418 ? _p418->g_S_8_21__2b_() : rt::toint(rt::dget(_o417, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_detect() {
    RT_FN("PlayFab.detect_get");
    return ({ rt::Value _o419 = g::SV.C_PlayFab___detect; C_S_3F* _p420 = rt::as_ptr<C_S_3F>(_o419); _p420 ? _p420->g_S_8_21__2b_() : rt::toint(rt::dget(_o419, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_season() {
    RT_FN("PlayFab.season_get");
    return ({ rt::Value _o421 = g::SV.C_PlayFab___season; C_S_3F* _p422 = rt::as_ptr<C_S_3F>(_o421); _p422 ? _p422->g_S_8_21__2b_() : rt::toint(rt::dget(_o421, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_seasonN() {
    RT_FN("PlayFab.seasonN_get");
    return ({ rt::Value _o423 = g::SV.C_PlayFab___seasonN; C_S_3F* _p424 = rt::as_ptr<C_S_3F>(_o423); _p424 ? _p424->g_S_8_21__2b_() : rt::toint(rt::dget(_o423, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_seasonE() {
    RT_FN("PlayFab.seasonE_get");
    return ({ rt::Value _o425 = g::SV.C_PlayFab___seasonE; C_S_3F* _p426 = rt::as_ptr<C_S_3F>(_o425); _p426 ? _p426->g_S_8_21__2b_() : rt::toint(rt::dget(_o425, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_seasonNE() {
    RT_FN("PlayFab.seasonNE_get");
    return ({ rt::Value _o427 = g::SV.C_PlayFab___seasonNE; C_S_3F* _p428 = rt::as_ptr<C_S_3F>(_o427); _p428 ? _p428->g_S_8_21__2b_() : rt::toint(rt::dget(_o427, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_seasonNES() {
    RT_FN("PlayFab.seasonNES_get");
    return ({ rt::Value _o429 = g::SV.C_PlayFab___seasonNES; C_S_3F* _p430 = rt::as_ptr<C_S_3F>(_o429); _p430 ? _p430->g_S_8_21__2b_() : rt::toint(rt::dget(_o429, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_seasonNEE() {
    RT_FN("PlayFab.seasonNEE_get");
    return ({ rt::Value _o431 = g::SV.C_PlayFab___seasonNEE; C_S_3F* _p432 = rt::as_ptr<C_S_3F>(_o431); _p432 ? _p432->g_S_8_21__2b_() : rt::toint(rt::dget(_o431, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_faithStart() {
    RT_FN("PlayFab.faithStart_get");
    return ({ rt::Value _o433 = g::SV.C_PlayFab___faithStart; C_S_3F* _p434 = rt::as_ptr<C_S_3F>(_o433); _p434 ? _p434->g_S_8_21__2b_() : rt::toint(rt::dget(_o433, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_faithCounter() {
    RT_FN("PlayFab.faithCounter_get");
    return ({ rt::Value _o435 = g::SV.C_PlayFab___faithCounter; C_S_3F* _p436 = rt::as_ptr<C_S_3F>(_o435); _p436 ? _p436->g_S_8_21__2b_() : rt::toint(rt::dget(_o435, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_faithTotal() {
    RT_FN("PlayFab.faithTotal_get");
    return ({ rt::Value _o437 = g::SV.C_PlayFab___faithTotal; C_S_3F* _p438 = rt::as_ptr<C_S_3F>(_o437); _p438 ? _p438->g_S_8_21__2b_() : rt::toint(rt::dget(_o437, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_faithCap() {
    RT_FN("PlayFab.faithCap_get");
    return ({ rt::Value _o439 = g::SV.C_PlayFab___faithCap; C_S_3F* _p440 = rt::as_ptr<C_S_3F>(_o439); _p440 ? _p440->g_S_8_21__2b_() : rt::toint(rt::dget(_o439, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_faithSkipped() {
    RT_FN("PlayFab.faithSkipped_get");
    return ({ rt::Value _o441 = g::SV.C_PlayFab___faithSkipped; C_S_3F* _p442 = rt::as_ptr<C_S_3F>(_o441); _p442 ? _p442->g_S_8_21__2b_() : rt::toint(rt::dget(_o441, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_faithTimes() {
    RT_FN("PlayFab.faithTimes_get");
    return ({ rt::Value _o443 = g::SV.C_PlayFab___faithTimes; C_S_3F* _p444 = rt::as_ptr<C_S_3F>(_o443); _p444 ? _p444->g_S_8_21__2b_() : rt::toint(rt::dget(_o443, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_faithLast() {
    RT_FN("PlayFab.faithLast_get");
    return ({ rt::Value _o445 = g::SV.C_PlayFab___faithLast; C_S_3F* _p446 = rt::as_ptr<C_S_3F>(_o445); _p446 ? _p446->g_S_8_21__2b_() : rt::toint(rt::dget(_o445, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_faithRuby() {
    RT_FN("PlayFab.faithRuby_get");
    return ({ rt::Value _o447 = g::SV.C_PlayFab___faithRuby; C_S_3F* _p448 = rt::as_ptr<C_S_3F>(_o447); _p448 ? _p448->g_S_8_21__2b_() : rt::toint(rt::dget(_o447, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_faithEnable() {
    RT_FN("PlayFab.faithEnable_get");
    return ({ rt::Value _o449 = g::SV.C_PlayFab___faithEnable; C_S_3F* _p450 = rt::as_ptr<C_S_3F>(_o449); _p450 ? _p450->g_S_8_21__2b_() : rt::toint(rt::dget(_o449, NM_S_8_21__2b_)); });
    return 0;
}
int32_t C_PlayFab::sg_faithMax() {
    RT_FN("PlayFab.faithMax_get");
    return ({ rt::Value _o451 = g::SV.C_PlayFab___faithMax; C_S_3F* _p452 = rt::as_ptr<C_S_3F>(_o451); _p452 ? _p452->g_S_8_21__2b_() : rt::toint(rt::dget(_o451, NM_S_8_21__2b_)); });
    return 0;
}
rt::Value C_PlayFab::ss_serverTime(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.serverTime_set");
    ({ int32_t _v455 = l_param1; rt::Value _o453 = g::SV.C_PlayFab___serverTime; C_S_3F* _p454 = rt::as_ptr<C_S_3F>(_o453); if (_p454) _p454->s_S_8_21__2b_(_v455); else rt::dset(_o453, NM_S_8_21__2b_, rt::V((double)(_v455))); _v455; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_serverTimer(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.serverTimer_set");
    ({ int32_t _v458 = l_param1; rt::Value _o456 = g::SV.C_PlayFab___serverTimer; C_S_3F* _p457 = rt::as_ptr<C_S_3F>(_o456); if (_p457) _p457->s_S_8_21__2b_(_v458); else rt::dset(_o456, NM_S_8_21__2b_, rt::V((double)(_v458))); _v458; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_detect(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.detect_set");
    ({ int32_t _v461 = l_param1; rt::Value _o459 = g::SV.C_PlayFab___detect; C_S_3F* _p460 = rt::as_ptr<C_S_3F>(_o459); if (_p460) _p460->s_S_8_21__2b_(_v461); else rt::dset(_o459, NM_S_8_21__2b_, rt::V((double)(_v461))); _v461; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_season(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.season_set");
    ({ int32_t _v464 = l_param1; rt::Value _o462 = g::SV.C_PlayFab___season; C_S_3F* _p463 = rt::as_ptr<C_S_3F>(_o462); if (_p463) _p463->s_S_8_21__2b_(_v464); else rt::dset(_o462, NM_S_8_21__2b_, rt::V((double)(_v464))); _v464; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_seasonN(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.seasonN_set");
    ({ int32_t _v467 = l_param1; rt::Value _o465 = g::SV.C_PlayFab___seasonN; C_S_3F* _p466 = rt::as_ptr<C_S_3F>(_o465); if (_p466) _p466->s_S_8_21__2b_(_v467); else rt::dset(_o465, NM_S_8_21__2b_, rt::V((double)(_v467))); _v467; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_seasonE(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.seasonE_set");
    ({ int32_t _v470 = l_param1; rt::Value _o468 = g::SV.C_PlayFab___seasonE; C_S_3F* _p469 = rt::as_ptr<C_S_3F>(_o468); if (_p469) _p469->s_S_8_21__2b_(_v470); else rt::dset(_o468, NM_S_8_21__2b_, rt::V((double)(_v470))); _v470; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_seasonNE(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.seasonNE_set");
    ({ int32_t _v473 = l_param1; rt::Value _o471 = g::SV.C_PlayFab___seasonNE; C_S_3F* _p472 = rt::as_ptr<C_S_3F>(_o471); if (_p472) _p472->s_S_8_21__2b_(_v473); else rt::dset(_o471, NM_S_8_21__2b_, rt::V((double)(_v473))); _v473; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_seasonNES(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.seasonNES_set");
    ({ int32_t _v476 = l_param1; rt::Value _o474 = g::SV.C_PlayFab___seasonNES; C_S_3F* _p475 = rt::as_ptr<C_S_3F>(_o474); if (_p475) _p475->s_S_8_21__2b_(_v476); else rt::dset(_o474, NM_S_8_21__2b_, rt::V((double)(_v476))); _v476; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_seasonNEE(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.seasonNEE_set");
    ({ int32_t _v479 = l_param1; rt::Value _o477 = g::SV.C_PlayFab___seasonNEE; C_S_3F* _p478 = rt::as_ptr<C_S_3F>(_o477); if (_p478) _p478->s_S_8_21__2b_(_v479); else rt::dset(_o477, NM_S_8_21__2b_, rt::V((double)(_v479))); _v479; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_faithStart(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.faithStart_set");
    ({ int32_t _v482 = l_param1; rt::Value _o480 = g::SV.C_PlayFab___faithStart; C_S_3F* _p481 = rt::as_ptr<C_S_3F>(_o480); if (_p481) _p481->s_S_8_21__2b_(_v482); else rt::dset(_o480, NM_S_8_21__2b_, rt::V((double)(_v482))); _v482; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_faithCounter(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.faithCounter_set");
    ({ int32_t _v485 = l_param1; rt::Value _o483 = g::SV.C_PlayFab___faithCounter; C_S_3F* _p484 = rt::as_ptr<C_S_3F>(_o483); if (_p484) _p484->s_S_8_21__2b_(_v485); else rt::dset(_o483, NM_S_8_21__2b_, rt::V((double)(_v485))); _v485; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_faithTotal(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.faithTotal_set");
    ({ int32_t _v488 = l_param1; rt::Value _o486 = g::SV.C_PlayFab___faithTotal; C_S_3F* _p487 = rt::as_ptr<C_S_3F>(_o486); if (_p487) _p487->s_S_8_21__2b_(_v488); else rt::dset(_o486, NM_S_8_21__2b_, rt::V((double)(_v488))); _v488; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_faithCap(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.faithCap_set");
    ({ int32_t _v491 = l_param1; rt::Value _o489 = g::SV.C_PlayFab___faithCap; C_S_3F* _p490 = rt::as_ptr<C_S_3F>(_o489); if (_p490) _p490->s_S_8_21__2b_(_v491); else rt::dset(_o489, NM_S_8_21__2b_, rt::V((double)(_v491))); _v491; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_faithSkipped(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.faithSkipped_set");
    ({ int32_t _v494 = l_param1; rt::Value _o492 = g::SV.C_PlayFab___faithSkipped; C_S_3F* _p493 = rt::as_ptr<C_S_3F>(_o492); if (_p493) _p493->s_S_8_21__2b_(_v494); else rt::dset(_o492, NM_S_8_21__2b_, rt::V((double)(_v494))); _v494; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_faithTimes(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.faithTimes_set");
    ({ int32_t _v497 = l_param1; rt::Value _o495 = g::SV.C_PlayFab___faithTimes; C_S_3F* _p496 = rt::as_ptr<C_S_3F>(_o495); if (_p496) _p496->s_S_8_21__2b_(_v497); else rt::dset(_o495, NM_S_8_21__2b_, rt::V((double)(_v497))); _v497; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_faithLast(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.faithLast_set");
    ({ int32_t _v500 = l_param1; rt::Value _o498 = g::SV.C_PlayFab___faithLast; C_S_3F* _p499 = rt::as_ptr<C_S_3F>(_o498); if (_p499) _p499->s_S_8_21__2b_(_v500); else rt::dset(_o498, NM_S_8_21__2b_, rt::V((double)(_v500))); _v500; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_faithRuby(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.faithRuby_set");
    ({ int32_t _v503 = l_param1; rt::Value _o501 = g::SV.C_PlayFab___faithRuby; C_S_3F* _p502 = rt::as_ptr<C_S_3F>(_o501); if (_p502) _p502->s_S_8_21__2b_(_v503); else rt::dset(_o501, NM_S_8_21__2b_, rt::V((double)(_v503))); _v503; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_faithEnable(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.faithEnable_set");
    ({ int32_t _v506 = l_param1; rt::Value _o504 = g::SV.C_PlayFab___faithEnable; C_S_3F* _p505 = rt::as_ptr<C_S_3F>(_o504); if (_p505) _p505->s_S_8_21__2b_(_v506); else rt::dset(_o504, NM_S_8_21__2b_, rt::V((double)(_v506))); _v506; });
    return rt::NUL;
}
rt::Value C_PlayFab::ss_faithMax(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("PlayFab.faithMax_set");
    ({ int32_t _v509 = l_param1; rt::Value _o507 = g::SV.C_PlayFab___faithMax; C_S_3F* _p508 = rt::as_ptr<C_S_3F>(_o507); if (_p508) _p508->s_S_8_21__2b_(_v509); else rt::dset(_o507, NM_S_8_21__2b_, rt::V((double)(_v509))); _v509; });
    return rt::NUL;
}
C_PlayFab* C_PlayFab::alloc_() {
    C_PlayFab* o = rt::make<C_PlayFab>();
    return o;
}
rt::Value C_PlayFab::mk_(rt::Value* a, int n) {
    C_PlayFab* o = alloc_();
    o->C_PlayFab::ctor_();
    return rt::VO(o);
}
bool C_PlayFab::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_PlayFab::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_PlayFab::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_PlayFab::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_PlayFab::smeth_(int id) {
    switch (id) {
    case NM_initialize: return true;
    case NM_loadCustomID: return true;
    case NM_verifyAndroid: return true;
    case NM_verifyiOS: return true;
    case NM_login: return true;
    case NM_logout: return true;
    case NM_loginKongregate: return true;
    case NM_loginSteam: return true;
    case NM_loginAccount: return true;
    case NM_loginEmail: return true;
    case NM_sendRecoveryEmail: return true;
    case NM_getCloudScript: return true;
    case NM_initializeCloudScript: return true;
    case NM_sendCloudRequest: return true;
    case NM_getReadOnlyData: return true;
    case NM_getCombinedInfo: return true;
    case NM_updateDisplayName: return true;
    case NM_onKongregateLogin: return true;
    case NM_linkKongregate: return true;
    case NM_unlinkKongregate: return true;
    case NM_completeRegistration: return true;
    case NM_register: return true;
    case NM_startPurchase: return true;
    case NM_payForPurchase: return true;
    case NM_onSteamPurchaseSuccessfull: return true;
    case NM_onSteamPurchaseFailed: return true;
    case NM_confirmPurchase: return true;
    case NM_onLoginComplete: return true;
    case NM_onLoginError: return true;
    case NM_onPlayFabError: return true;
    default: return false;
    }
}
bool C_PlayFab::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_so: out = g::SV.C_PlayFab__so; return true;
    case NM_instance: out = g::SV.C_PlayFab__instance; return true;
    case NM_isInitialized: out = rt::VB(g::SV.C_PlayFab__isInitialized); return true;
    case NM_isReady: out = rt::VB(g::SV.C_PlayFab__isReady); return true;
    case NM_isRegistered: out = rt::VB(g::SV.C_PlayFab__isRegistered); return true;
    case NM_isKongregateLinked: out = rt::VB(g::SV.C_PlayFab__isKongregateLinked); return true;
    case NM_isSteamLinked: out = rt::VB(g::SV.C_PlayFab__isSteamLinked); return true;
    case NM_isRestoreAvailable: out = rt::VB(g::SV.C_PlayFab__isRestoreAvailable); return true;
    case NM_customIDGenerated: out = rt::VB(g::SV.C_PlayFab__customIDGenerated); return true;
    case NM_customID: out = g::SV.C_PlayFab__customID; return true;
    case NM_playFabID: out = g::SV.C_PlayFab__playFabID; return true;
    case NM_playFabUsername: out = g::SV.C_PlayFab__playFabUsername; return true;
    case NM_registeredCallback: out = g::SV.C_PlayFab__registeredCallback; return true;
    case NM_seasonChangeCallback: out = g::SV.C_PlayFab__seasonChangeCallback; return true;
    case NM_steamSuccessCallback: out = g::SV.C_PlayFab__steamSuccessCallback; return true;
    case NM_steamErrorCallback: out = g::SV.C_PlayFab__steamErrorCallback; return true;
    case NM_expireTry: out = rt::VB(g::SV.C_PlayFab__expireTry); return true;
    case NM__serverTime: out = g::SV.C_PlayFab___serverTime; return true;
    case NM__serverTimer: out = g::SV.C_PlayFab___serverTimer; return true;
    case NM__detect: out = g::SV.C_PlayFab___detect; return true;
    case NM__season: out = g::SV.C_PlayFab___season; return true;
    case NM__seasonN: out = g::SV.C_PlayFab___seasonN; return true;
    case NM__seasonE: out = g::SV.C_PlayFab___seasonE; return true;
    case NM__seasonNE: out = g::SV.C_PlayFab___seasonNE; return true;
    case NM__seasonNES: out = g::SV.C_PlayFab___seasonNES; return true;
    case NM__seasonNEE: out = g::SV.C_PlayFab___seasonNEE; return true;
    case NM__faithStart: out = g::SV.C_PlayFab___faithStart; return true;
    case NM__faithCounter: out = g::SV.C_PlayFab___faithCounter; return true;
    case NM__faithTotal: out = g::SV.C_PlayFab___faithTotal; return true;
    case NM__faithCap: out = g::SV.C_PlayFab___faithCap; return true;
    case NM__faithSkipped: out = g::SV.C_PlayFab___faithSkipped; return true;
    case NM__faithTimes: out = g::SV.C_PlayFab___faithTimes; return true;
    case NM__faithLast: out = g::SV.C_PlayFab___faithLast; return true;
    case NM__faithRuby: out = g::SV.C_PlayFab___faithRuby; return true;
    case NM__faithEnable: out = g::SV.C_PlayFab___faithEnable; return true;
    case NM__faithMax: out = g::SV.C_PlayFab___faithMax; return true;
    case NM_serverTime: out = rt::V((double)(sg_serverTime())); return true;
    case NM_serverTimer: out = rt::V((double)(sg_serverTimer())); return true;
    case NM_detect: out = rt::V((double)(sg_detect())); return true;
    case NM_season: out = rt::V((double)(sg_season())); return true;
    case NM_seasonN: out = rt::V((double)(sg_seasonN())); return true;
    case NM_seasonE: out = rt::V((double)(sg_seasonE())); return true;
    case NM_seasonNE: out = rt::V((double)(sg_seasonNE())); return true;
    case NM_seasonNES: out = rt::V((double)(sg_seasonNES())); return true;
    case NM_seasonNEE: out = rt::V((double)(sg_seasonNEE())); return true;
    case NM_faithStart: out = rt::V((double)(sg_faithStart())); return true;
    case NM_faithCounter: out = rt::V((double)(sg_faithCounter())); return true;
    case NM_faithTotal: out = rt::V((double)(sg_faithTotal())); return true;
    case NM_faithCap: out = rt::V((double)(sg_faithCap())); return true;
    case NM_faithSkipped: out = rt::V((double)(sg_faithSkipped())); return true;
    case NM_faithTimes: out = rt::V((double)(sg_faithTimes())); return true;
    case NM_faithLast: out = rt::V((double)(sg_faithLast())); return true;
    case NM_faithRuby: out = rt::V((double)(sg_faithRuby())); return true;
    case NM_faithEnable: out = rt::V((double)(sg_faithEnable())); return true;
    case NM_faithMax: out = rt::V((double)(sg_faithMax())); return true;
    case NM_initialize: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_loadCustomID: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_verifyAndroid: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_verifyiOS: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_login: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_logout: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_loginKongregate: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_loginSteam: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_loginAccount: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_loginEmail: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_sendRecoveryEmail: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getCloudScript: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_initializeCloudScript: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_sendCloudRequest: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getReadOnlyData: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_getCombinedInfo: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_updateDisplayName: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_onKongregateLogin: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_linkKongregate: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_unlinkKongregate: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_completeRegistration: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_register: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_startPurchase: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_payForPurchase: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_onSteamPurchaseSuccessfull: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_onSteamPurchaseFailed: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_confirmPurchase: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_onLoginComplete: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_onLoginError: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_onPlayFabError: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_PlayFab::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_so: g::SV.C_PlayFab__so = v; return true;
    case NM_instance: g::SV.C_PlayFab__instance = v; return true;
    case NM_isInitialized: g::SV.C_PlayFab__isInitialized = rt::T(v); return true;
    case NM_isReady: g::SV.C_PlayFab__isReady = rt::T(v); return true;
    case NM_isRegistered: g::SV.C_PlayFab__isRegistered = rt::T(v); return true;
    case NM_isKongregateLinked: g::SV.C_PlayFab__isKongregateLinked = rt::T(v); return true;
    case NM_isSteamLinked: g::SV.C_PlayFab__isSteamLinked = rt::T(v); return true;
    case NM_isRestoreAvailable: g::SV.C_PlayFab__isRestoreAvailable = rt::T(v); return true;
    case NM_customIDGenerated: g::SV.C_PlayFab__customIDGenerated = rt::T(v); return true;
    case NM_customID: g::SV.C_PlayFab__customID = rt::slot_string(v); return true;
    case NM_playFabID: g::SV.C_PlayFab__playFabID = rt::slot_string(v); return true;
    case NM_playFabUsername: g::SV.C_PlayFab__playFabUsername = rt::slot_string(v); return true;
    case NM_registeredCallback: g::SV.C_PlayFab__registeredCallback = v; return true;
    case NM_seasonChangeCallback: g::SV.C_PlayFab__seasonChangeCallback = v; return true;
    case NM_steamSuccessCallback: g::SV.C_PlayFab__steamSuccessCallback = v; return true;
    case NM_steamErrorCallback: g::SV.C_PlayFab__steamErrorCallback = v; return true;
    case NM_expireTry: g::SV.C_PlayFab__expireTry = rt::T(v); return true;
    case NM__serverTime: g::SV.C_PlayFab___serverTime = v; return true;
    case NM__serverTimer: g::SV.C_PlayFab___serverTimer = v; return true;
    case NM__detect: g::SV.C_PlayFab___detect = v; return true;
    case NM__season: g::SV.C_PlayFab___season = v; return true;
    case NM__seasonN: g::SV.C_PlayFab___seasonN = v; return true;
    case NM__seasonE: g::SV.C_PlayFab___seasonE = v; return true;
    case NM__seasonNE: g::SV.C_PlayFab___seasonNE = v; return true;
    case NM__seasonNES: g::SV.C_PlayFab___seasonNES = v; return true;
    case NM__seasonNEE: g::SV.C_PlayFab___seasonNEE = v; return true;
    case NM__faithStart: g::SV.C_PlayFab___faithStart = v; return true;
    case NM__faithCounter: g::SV.C_PlayFab___faithCounter = v; return true;
    case NM__faithTotal: g::SV.C_PlayFab___faithTotal = v; return true;
    case NM__faithCap: g::SV.C_PlayFab___faithCap = v; return true;
    case NM__faithSkipped: g::SV.C_PlayFab___faithSkipped = v; return true;
    case NM__faithTimes: g::SV.C_PlayFab___faithTimes = v; return true;
    case NM__faithLast: g::SV.C_PlayFab___faithLast = v; return true;
    case NM__faithRuby: g::SV.C_PlayFab___faithRuby = v; return true;
    case NM__faithEnable: g::SV.C_PlayFab___faithEnable = v; return true;
    case NM__faithMax: g::SV.C_PlayFab___faithMax = v; return true;
    case NM_serverTime: ss_serverTime(rt::toint(v)); return true;
    case NM_serverTimer: ss_serverTimer(rt::toint(v)); return true;
    case NM_detect: ss_detect(rt::toint(v)); return true;
    case NM_season: ss_season(rt::toint(v)); return true;
    case NM_seasonN: ss_seasonN(rt::toint(v)); return true;
    case NM_seasonE: ss_seasonE(rt::toint(v)); return true;
    case NM_seasonNE: ss_seasonNE(rt::toint(v)); return true;
    case NM_seasonNES: ss_seasonNES(rt::toint(v)); return true;
    case NM_seasonNEE: ss_seasonNEE(rt::toint(v)); return true;
    case NM_faithStart: ss_faithStart(rt::toint(v)); return true;
    case NM_faithCounter: ss_faithCounter(rt::toint(v)); return true;
    case NM_faithTotal: ss_faithTotal(rt::toint(v)); return true;
    case NM_faithCap: ss_faithCap(rt::toint(v)); return true;
    case NM_faithSkipped: ss_faithSkipped(rt::toint(v)); return true;
    case NM_faithTimes: ss_faithTimes(rt::toint(v)); return true;
    case NM_faithLast: ss_faithLast(rt::toint(v)); return true;
    case NM_faithRuby: ss_faithRuby(rt::toint(v)); return true;
    case NM_faithEnable: ss_faithEnable(rt::toint(v)); return true;
    case NM_faithMax: ss_faithMax(rt::toint(v)); return true;
    default: return false;
    }
}
bool C_PlayFab::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_initialize: out = sm_initialize(); return true;
    case NM_loadCustomID: out = sm_loadCustomID(rt::arg<bool>(a, n, 0, C_PlayFab::dsm_loadCustomID_0())); return true;
    case NM_verifyAndroid: out = sm_verifyAndroid(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_PlayFab::dsm_verifyAndroid_2()), rt::arg<uint32_t>(a, n, 3, C_PlayFab::dsm_verifyAndroid_3()), rt::arg<rt::Value>(a, n, 4, C_PlayFab::dsm_verifyAndroid_4()), rt::arg<rt::Value>(a, n, 5, C_PlayFab::dsm_verifyAndroid_5())); return true;
    case NM_verifyiOS: out = sm_verifyiOS(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_verifyiOS_1()), rt::arg<uint32_t>(a, n, 2, C_PlayFab::dsm_verifyiOS_2()), rt::arg<rt::Value>(a, n, 3, C_PlayFab::dsm_verifyiOS_3()), rt::arg<rt::Value>(a, n, 4, C_PlayFab::dsm_verifyiOS_4())); return true;
    case NM_login: out = sm_login(rt::arg<rt::Value>(a, n, 0, C_PlayFab::dsm_login_0()), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_login_1())); return true;
    case NM_logout: out = sm_logout(); return true;
    case NM_loginKongregate: out = sm_loginKongregate(rt::arg<rt::Value>(a, n, 0, C_PlayFab::dsm_loginKongregate_0()), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_loginKongregate_1())); return true;
    case NM_loginSteam: out = sm_loginSteam(rt::arg<rt::Value>(a, n, 0, C_PlayFab::dsm_loginSteam_0()), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_loginSteam_1())); return true;
    case NM_loginAccount: out = sm_loginAccount(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, rt::UNDEF), rt::arg<rt::Value>(a, n, 3, rt::UNDEF)); return true;
    case NM_loginEmail: out = sm_loginEmail(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, rt::UNDEF), rt::arg<rt::Value>(a, n, 3, rt::UNDEF)); return true;
    case NM_sendRecoveryEmail: out = sm_sendRecoveryEmail(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_getCloudScript: out = sm_getCloudScript(rt::arg<bool>(a, n, 0, false), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_getCloudScript_1())); return true;
    case NM_initializeCloudScript: out = sm_initializeCloudScript(rt::arg<bool>(a, n, 0, false), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_initializeCloudScript_1())); return true;
    case NM_sendCloudRequest: out = sm_sendCloudRequest(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, C_PlayFab::dsm_sendCloudRequest_2()), rt::arg<rt::Value>(a, n, 3, C_PlayFab::dsm_sendCloudRequest_3())); return true;
    case NM_getReadOnlyData: out = sm_getReadOnlyData(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_getReadOnlyData_1()), rt::arg<rt::Value>(a, n, 2, C_PlayFab::dsm_getReadOnlyData_2())); return true;
    case NM_getCombinedInfo: out = sm_getCombinedInfo(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<bool>(a, n, 1, C_PlayFab::dsm_getCombinedInfo_1()), rt::arg<rt::Value>(a, n, 2, C_PlayFab::dsm_getCombinedInfo_2())); return true;
    case NM_updateDisplayName: out = sm_updateDisplayName(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_onKongregateLogin: out = sm_onKongregateLogin(); return true;
    case NM_linkKongregate: out = sm_linkKongregate(rt::arg<rt::Value>(a, n, 0, C_PlayFab::dsm_linkKongregate_0()), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_linkKongregate_1())); return true;
    case NM_unlinkKongregate: out = sm_unlinkKongregate(rt::arg<rt::Value>(a, n, 0, C_PlayFab::dsm_unlinkKongregate_0()), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_unlinkKongregate_1())); return true;
    case NM_completeRegistration: out = sm_completeRegistration(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, rt::UNDEF), rt::arg<rt::Value>(a, n, 3, rt::UNDEF), rt::arg<rt::Value>(a, n, 4, rt::UNDEF)); return true;
    case NM_register: out = sm_register(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, rt::UNDEF), rt::arg<rt::Value>(a, n, 3, rt::UNDEF), rt::arg<rt::Value>(a, n, 4, rt::UNDEF)); return true;
    case NM_startPurchase: out = sm_startPurchase(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, rt::UNDEF), rt::arg<rt::Value>(a, n, 2, rt::UNDEF)); return true;
    case NM_payForPurchase: out = sm_payForPurchase(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_payForPurchase_1()), rt::arg<rt::Value>(a, n, 2, C_PlayFab::dsm_payForPurchase_2())); return true;
    case NM_onSteamPurchaseSuccessfull: out = sm_onSteamPurchaseSuccessfull(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_onSteamPurchaseFailed: out = sm_onSteamPurchaseFailed(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_confirmPurchase: out = sm_confirmPurchase(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_onLoginComplete: out = sm_onLoginComplete(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_onLoginComplete_1())); return true;
    case NM_onLoginError: out = sm_onLoginError(rt::arg<rt::Value>(a, n, 0, rt::UNDEF), rt::arg<rt::Value>(a, n, 1, C_PlayFab::dsm_onLoginError_1())); return true;
    case NM_onPlayFabError: out = sm_onPlayFabError(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    default: return false;
    }
}
void C_TimeServer::ctor_() {
    RT_FN("TimeServer.TimeServer");
}
rt::Value C_TimeServer::sm_initialize() {
    RT_FN("TimeServer.initialize");
    return rt::NUL;
}
rt::Value C_TimeServer::sm_onTimeLoaded(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("TimeServer.onTimeLoaded");
    return rt::NUL;
}
rt::Value C_TimeServer::sm_onIOError(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("TimeServer.onIOError");
    return rt::NUL;
}
rt::Value C_TimeServer::sm_onSecurityError(rt::Value p0) {
    rt::Value l_param1 = p0;
    RT_FN("TimeServer.onSecurityError");
    return rt::NUL;
}
C_TimeServer* C_TimeServer::alloc_() {
    C_TimeServer* o = rt::make<C_TimeServer>();
    return o;
}
rt::Value C_TimeServer::mk_(rt::Value* a, int n) {
    C_TimeServer* o = alloc_();
    o->C_TimeServer::ctor_();
    return rt::VO(o);
}
bool C_TimeServer::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_TimeServer::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_TimeServer::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_TimeServer::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_TimeServer::smeth_(int id) {
    switch (id) {
    case NM_initialize: return true;
    case NM_onTimeLoaded: return true;
    case NM_onIOError: return true;
    case NM_onSecurityError: return true;
    default: return false;
    }
}
bool C_TimeServer::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_loader: out = g::SV.C_TimeServer__loader; return true;
    case NM_serverTime: out = rt::V((double)(g::SV.C_TimeServer__serverTime)); return true;
    case NM_serverTimeDiff: out = rt::V((double)(g::SV.C_TimeServer__serverTimeDiff)); return true;
    case NM_localTime: out = rt::V((double)(g::SV.C_TimeServer__localTime)); return true;
    case NM_initialize: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_onTimeLoaded: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_onIOError: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_onSecurityError: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_TimeServer::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_loader: g::SV.C_TimeServer__loader = v; return true;
    case NM_serverTime: g::SV.C_TimeServer__serverTime = rt::toint(v); return true;
    case NM_serverTimeDiff: g::SV.C_TimeServer__serverTimeDiff = rt::toint(v); return true;
    case NM_localTime: g::SV.C_TimeServer__localTime = rt::toint(v); return true;
    default: return false;
    }
}
bool C_TimeServer::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_initialize: out = sm_initialize(); return true;
    case NM_onTimeLoaded: out = sm_onTimeLoaded(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_onIOError: out = sm_onIOError(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    case NM_onSecurityError: out = sm_onSecurityError(rt::arg<rt::Value>(a, n, 0, rt::UNDEF)); return true;
    default: return false;
    }
}
void C_kongregate_png::ctor_() {
    RT_FN("kongregate_png.kongregate_png");
    (void)(rt::NUL);
}
C_kongregate_png* C_kongregate_png::alloc_() {
    C_kongregate_png* o = rt::make<C_kongregate_png>();
    return o;
}
rt::Value C_kongregate_png::mk_(rt::Value* a, int n) {
    C_kongregate_png* o = alloc_();
    o->C_kongregate_png::ctor_();
    return rt::VO(o);
}
bool C_kongregate_png::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_kongregate_png::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_kongregate_png::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_kongregate_png::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_kongregate_png::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_kongregate_png::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_kongregate_png::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_kongregate_png::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::ctor_() {
    RT_FN("loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315.loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315");
    (void)(rt::NUL);
}
C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315* C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::alloc_() {
    C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315* o = rt::make<C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315>();
    return o;
}
rt::Value C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::mk_(rt::Value* a, int n) {
    C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315* o = alloc_();
    o->C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::ctor_();
    return rt::VO(o);
}
bool C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_loadingBar_Empty_png_dollar_dad5da1fd298a483073adc1e7b1b89291506763315::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_loadingBar_Fill_png::ctor_() {
    RT_FN("loadingBar_Fill_png.loadingBar_Fill_png");
    (void)(rt::NUL);
}
C_loadingBar_Fill_png* C_loadingBar_Fill_png::alloc_() {
    C_loadingBar_Fill_png* o = rt::make<C_loadingBar_Fill_png>();
    return o;
}
rt::Value C_loadingBar_Fill_png::mk_(rt::Value* a, int n) {
    C_loadingBar_Fill_png* o = alloc_();
    o->C_loadingBar_Fill_png::ctor_();
    return rt::VO(o);
}
bool C_loadingBar_Fill_png::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_loadingBar_Fill_png::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_loadingBar_Fill_png::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_loadingBar_Fill_png::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_loadingBar_Fill_png::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_loadingBar_Fill_png::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_loadingBar_Fill_png::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_loadingBar_Fill_png::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_logo_png::ctor_() {
    RT_FN("logo_png.logo_png");
    (void)(rt::NUL);
}
C_logo_png* C_logo_png::alloc_() {
    C_logo_png* o = rt::make<C_logo_png>();
    return o;
}
rt::Value C_logo_png::mk_(rt::Value* a, int n) {
    C_logo_png* o = alloc_();
    o->C_logo_png::ctor_();
    return rt::VO(o);
}
bool C_logo_png::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_logo_png::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_logo_png::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_logo_png::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_logo_png::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_logo_png::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_logo_png::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_logo_png::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_playfab_png::ctor_() {
    RT_FN("playfab_png.playfab_png");
    (void)(rt::NUL);
}
C_playfab_png* C_playfab_png::alloc_() {
    C_playfab_png* o = rt::make<C_playfab_png>();
    return o;
}
rt::Value C_playfab_png::mk_(rt::Value* a, int n) {
    C_playfab_png* o = alloc_();
    o->C_playfab_png::ctor_();
    return rt::VO(o);
}
bool C_playfab_png::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_playfab_png::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_playfab_png::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_playfab_png::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_playfab_png::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_playfab_png::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_playfab_png::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_playfab_png::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::ctor_() {
    RT_FN("realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331.realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331");
    (void)(rt::NUL);
}
C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331* C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::alloc_() {
    C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331* o = rt::make<C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331>();
    return o;
}
rt::Value C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::mk_(rt::Value* a, int n) {
    C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331* o = alloc_();
    o->C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::ctor_();
    return rt::VO(o);
}
bool C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_realmgrinder_es_ES_mo::ctor_() {
    RT_FN("realmgrinder_es_ES_mo.realmgrinder_es_ES_mo");
    (void)(rt::NUL);
}
C_realmgrinder_es_ES_mo* C_realmgrinder_es_ES_mo::alloc_() {
    C_realmgrinder_es_ES_mo* o = rt::make<C_realmgrinder_es_ES_mo>();
    return o;
}
rt::Value C_realmgrinder_es_ES_mo::mk_(rt::Value* a, int n) {
    C_realmgrinder_es_ES_mo* o = alloc_();
    o->C_realmgrinder_es_ES_mo::ctor_();
    return rt::VO(o);
}
bool C_realmgrinder_es_ES_mo::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_realmgrinder_es_ES_mo::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_realmgrinder_es_ES_mo::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_realmgrinder_es_ES_mo::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_realmgrinder_es_ES_mo::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_es_ES_mo::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_es_ES_mo::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_es_ES_mo::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_realmgrinder_fr_FR_mo::ctor_() {
    RT_FN("realmgrinder_fr_FR_mo.realmgrinder_fr_FR_mo");
    (void)(rt::NUL);
}
C_realmgrinder_fr_FR_mo* C_realmgrinder_fr_FR_mo::alloc_() {
    C_realmgrinder_fr_FR_mo* o = rt::make<C_realmgrinder_fr_FR_mo>();
    return o;
}
rt::Value C_realmgrinder_fr_FR_mo::mk_(rt::Value* a, int n) {
    C_realmgrinder_fr_FR_mo* o = alloc_();
    o->C_realmgrinder_fr_FR_mo::ctor_();
    return rt::VO(o);
}
bool C_realmgrinder_fr_FR_mo::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_realmgrinder_fr_FR_mo::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_realmgrinder_fr_FR_mo::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_realmgrinder_fr_FR_mo::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_realmgrinder_fr_FR_mo::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_fr_FR_mo::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_fr_FR_mo::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_fr_FR_mo::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::ctor_() {
    RT_FN("realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979.realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979");
    (void)(rt::NUL);
}
C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979* C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::alloc_() {
    C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979* o = rt::make<C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979>();
    return o;
}
rt::Value C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::mk_(rt::Value* a, int n) {
    C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979* o = alloc_();
    o->C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::ctor_();
    return rt::VO(o);
}
bool C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::ctor_() {
    RT_FN("realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367.realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367");
    (void)(rt::NUL);
}
C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367* C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::alloc_() {
    C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367* o = rt::make<C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367>();
    return o;
}
rt::Value C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::mk_(rt::Value* a, int n) {
    C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367* o = alloc_();
    o->C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::ctor_();
    return rt::VO(o);
}
bool C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::ctor_() {
    RT_FN("realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723.realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723");
    (void)(rt::NUL);
}
C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723* C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::alloc_() {
    C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723* o = rt::make<C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723>();
    return o;
}
rt::Value C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::mk_(rt::Value* a, int n) {
    C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723* o = alloc_();
    o->C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::ctor_();
    return rt::VO(o);
}
bool C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::ctor_() {
    RT_FN("realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128.realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128");
    (void)(rt::NUL);
}
C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128* C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::alloc_() {
    C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128* o = rt::make<C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128>();
    return o;
}
rt::Value C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::mk_(rt::Value* a, int n) {
    C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128* o = alloc_();
    o->C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::ctor_();
    return rt::VO(o);
}
bool C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_realmgrinderui_particle_xml_dollar_4c5848ef525f405eec6a6bdb28181f711636401128::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_rg_png::ctor_() {
    RT_FN("rg_png.rg_png");
    (void)(rt::NUL);
}
C_rg_png* C_rg_png::alloc_() {
    C_rg_png* o = rt::make<C_rg_png>();
    return o;
}
rt::Value C_rg_png::mk_(rt::Value* a, int n) {
    C_rg_png* o = alloc_();
    o->C_rg_png::ctor_();
    return rt::VO(o);
}
bool C_rg_png::dget(int id, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_rg_png::dset(int id, rt::Value v) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_rg_png::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_rg_png::dmeth(int id) {
    switch (id) {
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_rg_png::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_rg_png::sget_(int id, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
bool C_rg_png::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_rg_png::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__60_6::ctor_() {
    RT_FN("S__60_6.S__60_6");
    ({ rt::Value _v529 = rt::arr_lit({}); this->f_upgids = _v529; _v529; });
    (void)(rt::NUL);
}
rt::Value C_S__60_6::m_S__5b__21_C() {
    RT_FN("S__60_6.S__5b__21_C");
    if (this->f_S_4W) {
        ({ rt::Value _v531 = ({ C_S_7_21__20_* _n530 = C_S_7_21__20_::alloc_(); _n530->C_S_7_21__20_::ctor_(); rt::VO(_n530); }); this->f_S_9_21__27_ = _v531; _v531; });
    }
    if ((!(((double)(this->f_S__22__21_U)) == (-1.0)))) {
        ({ double _v532 = ((100000.0 + (((double)(this->f_S_6_21_Z)) * 100.0)) + ((double)(this->f_S__22__21_U))); this->f_S_6_21_Z = rt::touint_d(_v532); _v532; });
    }
    return rt::NUL;
}
rt::Value C_S__60_6::m_S_6r() {
    RT_FN("S__60_6.S_6r");
    if (this->f_S_0_21_d) {
        ({ bool _v533 = true; this->f_S__3f__21_6 = _v533; _v533; });
    }
    return rt::NUL;
}
rt::Value C_S__60_6::m_S__3d__21__26_() {
    RT_FN("S__60_6.S__3d__21__26_");
    return rt::NUL;
}
rt::Value C_S__60_6::m_S__3d_u() {
    RT_FN("S__60_6.S__3d_u");
    return rt::NUL;
}
rt::Value C_S__60_6::m_S__25__21__3c_() {
    RT_FN("S__60_6.S__25__21__3c_");
    return rt::NUL;
}
rt::Value C_S__60_6::m_S__21__21_G() {
    RT_FN("S__60_6.S__21__21_G");
    return rt::NUL;
}
rt::Value C_S__60_6::m_S_5z(uint32_t p0) {
    uint32_t l_param1 = p0;
    RT_FN("S__60_6.S_5z");
    return rt::NUL;
}
int32_t C_S__60_6::dm_S_75_1() { return rt::toint_d(1.0); }
bool C_S__60_6::dm_S_75_2() { return false; }
rt::Value C_S__60_6::dm_S_75_3() { return rt::NUL; }
double C_S__60_6::m_S_75(int32_t p0, int32_t p1, bool p2, rt::Value p3) {
    int32_t l_param1 = p0;
    int32_t l_param2 = p1;
    bool l_param3 = p2;
    rt::Value l_param4 = p3;
    RT_FN("S__60_6.S_75");
    return 0.0;
    return 0.0;
}
double C_S__60_6::m_S__27_B(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__60_6.S__27_B");
    return 0.0;
    return 0.0;
}
double C_S__60_6::m_S__25__21__3b_() {
    RT_FN("S__60_6.S__25__21__3b_");
    return 0.0;
    return 0.0;
}
double C_S__60_6::m_S_6U() {
    RT_FN("S__60_6.S_6U");
    return 0.0;
    return 0.0;
}
double C_S__60_6::m_S__26_q() {
    RT_FN("S__60_6.S__26_q");
    return 0.0;
    return 0.0;
}
rt::Value C_S__60_6::m_S__3b__21_L() {
    bool l_A__loc1_ = false;
    RT_FN("S__60_6.S__3b__21_L");
    (l_A__loc1_ = g::SV.C_S__20_g__S__22_g);
    if (rt::T(rt::dcallv(rt::VO(rt::STUBCLASS), NM_isDesktop))) {
        (l_A__loc1_ = false);
    }
    if ((l_A__loc1_ && (!rt::eq(g::SV.C_S__3c__21_d__S__3d_x, g::SV.C_S__3c__21_d__S_6_3d_)))) {
        return rt::slot_string(C_S__26_c::sm_S_8_21_Z(this->m_S__26_q(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()));
    }
    return rt::slot_string(rt::dcallv(rt::V(((this->m_S__26_q() / 100.0))), rt::N_toFixed, rt::V(2.0)));
    return rt::NUL;
}
rt::Value C_S__60_6::m_S_1_21_P() {
    RT_FN("S__60_6.S_1_21_P");
    return rt::slot_string(this->f_S_1i);
    return rt::NUL;
}
rt::Value C_S__60_6::m_S__40__22_() {
    RT_FN("S__60_6.S__40__22_");
    return rt::slot_string(this->f_S_7_23_);
    return rt::NUL;
}
bool C_S__60_6::dm_S__2b__21__21__0() { return false; }
rt::Value C_S__60_6::m_S__2b__21__21_(bool p0) {
    bool l_param1 = p0;
    int32_t l_A__loc2_ = 0;
    RT_FN("S__60_6.S__2b__21__21_");
    (l_A__loc2_ = rt::toint_d(((!rt::eq(rt::idx_get(g::SV.C_S_8G__S__2d_s, this->f_S__3f__21__3d_), rt::UNDEF)) ? rt::alen(rt::idx_get(g::SV.C_S_8G__S__2d_s, this->f_S__3f__21__3d_)) : 0.0)));
    (l_A__loc2_ = rt::toint_d((((double)(l_A__loc2_)) + 1.0)));
    if (((!l_param1) || (((double)(l_A__loc2_)) >= 10.0))) {
        return rt::slot_string(rt::dcallv(rt::V((double)(l_A__loc2_)), rt::N_toString));
    }
    return rt::slot_string(rt::add(rt::VS(g::LS[151]), rt::dcallv(rt::V((double)(l_A__loc2_)), rt::N_toString)));
    return rt::NUL;
}
rt::Value C_S__60_6::m_S_9_21_X(int32_t p0) {
    int32_t l_param1 = p0;
    RT_FN("S__60_6.S_9_21_X");
    if ((((double)(l_param1)) >= 10.0)) {
        return rt::slot_string(rt::dcallv(rt::V((double)(l_param1)), rt::N_toString));
    }
    return rt::slot_string(rt::add(rt::VS(g::LS[151]), rt::dcallv(rt::V((double)(l_param1)), rt::N_toString)));
    return rt::NUL;
}
rt::Value C_S__60_6::m_S__3e__21__2d_() {
    RT_FN("S__60_6.S__3e__21__2d_");
    return rt::slot_string(rt::VS(g::LS[113]));
    return rt::NUL;
}
rt::Value C_S__60_6::m_S__21_E() {
    RT_FN("S__60_6.S__21_E");
    return rt::slot_string(this->f_S__5e__21__23_);
    return rt::NUL;
}
bool C_S__60_6::g_S__2d_6() {
    RT_FN("S__60_6.S__2d_6_get");
    return ({ bool _t536 = (({ bool _t534 = (((double)(this->f_S__2c__21_Y)) == 0.0); _t534 ? _t534 : (bool)((((double)(this->f_S__2c__21_Y)) == ((double)(g::SV.C_S_8G__S__2c__21_Y)))); })); _t536 ? (bool)((({ bool _t535 = (((double)(this->f_S_9_21_m)) == 0.0); _t535 ? _t535 : (bool)((((double)(this->f_S_9_21_m)) == ((double)(g::SV.C_S_8G__S_9_21_m)))); }))) : _t536; });
    return false;
}
bool C_S__60_6::g_S__22_h() {
    RT_FN("S__60_6.S__22_h_get");
    return true;
    return false;
}
bool C_S__60_6::g_S_9_21__25_() {
    RT_FN("S__60_6.S_9_21__25__get");
    return true;
    return false;
}
bool C_S__60_6::g_S__26_8() {
    RT_FN("S__60_6.S__26_8_get");
    return true;
    return false;
}
double C_S__60_6::g_S_9_21_U() {
    RT_FN("S__60_6.S_9_21_U_get");
    if ((({ bool _t537 = (((double)(this->f_S__21__22_E)) > 0.0); _t537 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t537; }) && (({ bool _t538 = (((double)(this->f_S__2d__21__5e_)) == 13.0); _t538 ? _t538 : (bool)((((double)(this->f_S__2d__21__5e_)) == 15.0)); }) || (((double)(this->f_S__2d__21__5e_)) == 14.0)))) {
        return ((1e+189 * rt::m_pow(1000.0, (((double)(this->f_S__21__22_E)) - 1.0))) * rt::m_pow(1000.0, ((0.5 * rt::m_floor((((((double)(this->f_S__21__22_E)) - 1.0)) / 3.0))) * ((rt::m_floor((((((double)(this->f_S__21__22_E)) - 1.0)) / 3.0)) + 1.0)))));
    }
    if ((({ bool _t539 = (((double)(this->f_S__21__22_E)) > 0.0); _t539 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) : _t539; }) && (({ bool _t540 = (((double)(this->f_S__2d__21__5e_)) == 9.0); _t540 ? _t540 : (bool)((((double)(this->f_S__2d__21__5e_)) == 10.0)); }) || (((double)(this->f_S__2d__21__5e_)) == 12.0)))) {
        return ((1e+120 * rt::m_pow(1000.0, (((double)(this->f_S__21__22_E)) - 1.0))) * rt::m_pow(1000.0, ((0.5 * rt::m_floor((((((double)(this->f_S__21__22_E)) - 1.0)) / 3.0))) * ((rt::m_floor((((((double)(this->f_S__21__22_E)) - 1.0)) / 3.0)) + 1.0)))));
    }
    if (((((double)(this->f_S__21__22_E)) > 0.0) && (((double)(C_S_8G::sg_S__2c_P())) >= 4.0))) {
        return ((1e+48 * rt::m_pow(1000.0, (((double)(this->f_S__21__22_E)) - 1.0))) * rt::m_pow(1000.0, ((0.5 * rt::m_floor((((((double)(this->f_S__21__22_E)) - 1.0)) / 3.0))) * ((rt::m_floor((((((double)(this->f_S__21__22_E)) - 1.0)) / 3.0)) + 1.0)))));
    }
    if (((!(this->f_S__3b__22__3e_ == 0.0)) && (((double)(C_S_8G::sg_S__2c_P())) >= 4.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 5.0) ? 0.0 : this->f_S__3b__22__3e_);
    }
    if (((!(this->f_S__23__22__2d_ == 0.0)) && (((double)(C_S_8G::sg_S__2c_P())) >= 3.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0) ? 0.0 : this->f_S__23__22__2d_);
    }
    if (((!(this->f_S__23__21_m == 0.0)) && (((double)(C_S_8G::sg_S__2c_P())) >= 2.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 3.0) ? 0.0 : this->f_S__23__21_m);
    }
    if (((!(this->f_S__3c_R == 0.0)) && (((double)(C_S_8G::sg_S__2c_P())) >= 1.0))) {
        return ((((double)(C_S_8G::sg_S__2c_P())) >= 2.0) ? 0.0 : this->f_S__3c_R);
    }
    return ((((double)(C_S_8G::sg_S__2c_P())) >= 1.0) ? 0.0 : this->f_S__3e__3d_);
    return 0.0;
}
rt::Value C_S__60_6::sg_id() {
    RT_FN("S__60_6.id_get");
    return rt::slot_string(rt::VS(g::LS[364]));
    return rt::NUL;
}
C_S__60_6* C_S__60_6::alloc_() {
    C_S__60_6* o = rt::make<C_S__60_6>();
    return o;
}
rt::Value C_S__60_6::mk_(rt::Value* a, int n) {
    C_S__60_6* o = alloc_();
    o->C_S__60_6::ctor_();
    return rt::VO(o);
}
bool C_S__60_6::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__22_h: out = rt::VB(g_S__22_h()); return true;
    case NM_S_9_21__25_: out = rt::VB(g_S_9_21__25_()); return true;
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S_9_21_U: out = rt::V(g_S_9_21_U()); return true;
    case NM_id: out = rt::V((double)(f_id)); return true;
    case NM_ids: out = f_ids; return true;
    case NM_S_6_21_Z: out = rt::V((double)(f_S_6_21_Z)); return true;
    case NM_upgids: out = f_upgids; return true;
    case NM_S_1i: out = f_S_1i; return true;
    case NM_S__5e__21__23_: out = f_S__5e__21__23_; return true;
    case NM_S__3f__21__3d_: out = f_S__3f__21__3d_; return true;
    case NM_S__40_1: out = f_S__40_1; return true;
    case NM_S_7_23_: out = f_S_7_23_; return true;
    case NM_S__3e__3d_: out = rt::V(f_S__3e__3d_); return true;
    case NM_S__3c_R: out = rt::V(f_S__3c_R); return true;
    case NM_S__23__21_m: out = rt::V(f_S__23__21_m); return true;
    case NM_S__23__22__2d_: out = rt::V(f_S__23__22__2d_); return true;
    case NM_S__3b__22__3e_: out = rt::V(f_S__3b__22__3e_); return true;
    case NM_S__2c__21_Y: out = rt::V((double)(f_S__2c__21_Y)); return true;
    case NM_S_9_21_m: out = rt::V((double)(f_S_9_21_m)); return true;
    case NM_S__2d__21__5e_: out = rt::V((double)(f_S__2d__21__5e_)); return true;
    case NM_S__3c__21_7: out = rt::VB(f_S__3c__21_7); return true;
    case NM_S__21__21__60_: out = rt::VB(f_S__21__21__60_); return true;
    case NM_S__26__21__5e_: out = rt::VB(f_S__26__21__5e_); return true;
    case NM_S__2b__21_9: out = rt::VB(f_S__2b__21_9); return true;
    case NM_S_7_21_9: out = rt::VB(f_S_7_21_9); return true;
    case NM_S_6_2c_: out = f_S_6_2c_; return true;
    case NM_S__3b__21__27_: out = rt::VB(f_S__3b__21__27_); return true;
    case NM_S_1_21_9: out = rt::V((double)(f_S_1_21_9)); return true;
    case NM_S_3_21_R: out = rt::VB(f_S_3_21_R); return true;
    case NM_S_4W: out = rt::VB(f_S_4W); return true;
    case NM_S_9_21__27_: out = f_S_9_21__27_; return true;
    case NM_S__22__21_U: out = rt::V((double)(f_S__22__21_U)); return true;
    case NM_S__21__22_E: out = rt::V((double)(f_S__21__22_E)); return true;
    case NM_S__3c__60_: out = rt::VB(f_S__3c__60_); return true;
    case NM_S__21__21_n: out = rt::VB(f_S__21__21_n); return true;
    case NM_S_7_22_0: out = rt::VB(f_S_7_22_0); return true;
    case NM_S__22__22__2b_: out = rt::VB(f_S__22__22__2b_); return true;
    case NM_S__5b__22__2d_: out = rt::V((double)(f_S__5b__22__2d_)); return true;
    case NM_S__25__21__3e_: out = rt::VB(f_S__25__21__3e_); return true;
    case NM_S_0_21_d: out = rt::VB(f_S_0_21_d); return true;
    case NM_S__3f__21_6: out = rt::VB(f_S__3f__21_6); return true;
    case NM_S_3_21_c: out = rt::VB(f_S_3_21_c); return true;
    case NM_S__3f_T: out = rt::VB(f_S__3f_T); return true;
    case rt::N_data: out = rt::VB(f_data); return true;
    case NM_S__25__21__2c_: out = rt::VB(f_S__25__21__2c_); return true;
    case NM_S__2c__21_B: out = rt::V((double)(f_S__2c__21_B)); return true;
    case NM_S_3e: out = rt::VB(f_S_3e); return true;
    case NM_S__40_X: out = rt::VB(f_S__40_X); return true;
    case NM_S__5b__21_C: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d__21__26_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3d_u: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__25__21__3c_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21__21_G: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_5z: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_75: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__27_B: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__25__21__3b_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6U: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__26_q: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3b__21_L: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_1_21_P: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__2b__21__21_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_9_21_X: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__3e__21__2d_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S__21_E: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return rt::Inst::dget(id, out);
}
bool C_S__60_6::dset(int id, rt::Value v) {
    switch (id) {
    case NM_id: f_id = rt::touint(v); return true;
    case NM_ids: f_ids = rt::slot_string(v); return true;
    case NM_S_6_21_Z: f_S_6_21_Z = rt::touint(v); return true;
    case NM_upgids: f_upgids = v; return true;
    case NM_S_1i: f_S_1i = rt::slot_string(v); return true;
    case NM_S__5e__21__23_: f_S__5e__21__23_ = rt::slot_string(v); return true;
    case NM_S__3f__21__3d_: f_S__3f__21__3d_ = rt::slot_string(v); return true;
    case NM_S__40_1: f_S__40_1 = rt::slot_string(v); return true;
    case NM_S_7_23_: f_S_7_23_ = rt::slot_string(v); return true;
    case NM_S__3e__3d_: f_S__3e__3d_ = rt::tonum(v); return true;
    case NM_S__3c_R: f_S__3c_R = rt::tonum(v); return true;
    case NM_S__23__21_m: f_S__23__21_m = rt::tonum(v); return true;
    case NM_S__23__22__2d_: f_S__23__22__2d_ = rt::tonum(v); return true;
    case NM_S__3b__22__3e_: f_S__3b__22__3e_ = rt::tonum(v); return true;
    case NM_S__2c__21_Y: f_S__2c__21_Y = rt::toint(v); return true;
    case NM_S_9_21_m: f_S_9_21_m = rt::toint(v); return true;
    case NM_S__2d__21__5e_: f_S__2d__21__5e_ = rt::toint(v); return true;
    case NM_S__3c__21_7: f_S__3c__21_7 = rt::T(v); return true;
    case NM_S__21__21__60_: f_S__21__21__60_ = rt::T(v); return true;
    case NM_S__26__21__5e_: f_S__26__21__5e_ = rt::T(v); return true;
    case NM_S__2b__21_9: f_S__2b__21_9 = rt::T(v); return true;
    case NM_S_7_21_9: f_S_7_21_9 = rt::T(v); return true;
    case NM_S_6_2c_: f_S_6_2c_ = rt::slot_string(v); return true;
    case NM_S__3b__21__27_: f_S__3b__21__27_ = rt::T(v); return true;
    case NM_S_1_21_9: f_S_1_21_9 = rt::toint(v); return true;
    case NM_S_3_21_R: f_S_3_21_R = rt::T(v); return true;
    case NM_S_4W: f_S_4W = rt::T(v); return true;
    case NM_S_9_21__27_: f_S_9_21__27_ = v; return true;
    case NM_S__22__21_U: f_S__22__21_U = rt::toint(v); return true;
    case NM_S__21__22_E: f_S__21__22_E = rt::touint(v); return true;
    case NM_S__3c__60_: f_S__3c__60_ = rt::T(v); return true;
    case NM_S__21__21_n: f_S__21__21_n = rt::T(v); return true;
    case NM_S_7_22_0: f_S_7_22_0 = rt::T(v); return true;
    case NM_S__22__22__2b_: f_S__22__22__2b_ = rt::T(v); return true;
    case NM_S__5b__22__2d_: f_S__5b__22__2d_ = rt::touint(v); return true;
    case NM_S__25__21__3e_: f_S__25__21__3e_ = rt::T(v); return true;
    case NM_S_0_21_d: f_S_0_21_d = rt::T(v); return true;
    case NM_S__3f__21_6: f_S__3f__21_6 = rt::T(v); return true;
    case NM_S_3_21_c: f_S_3_21_c = rt::T(v); return true;
    case NM_S__3f_T: f_S__3f_T = rt::T(v); return true;
    case rt::N_data: f_data = rt::T(v); return true;
    case NM_S__25__21__2c_: f_S__25__21__2c_ = rt::T(v); return true;
    case NM_S__2c__21_B: f_S__2c__21_B = rt::toint(v); return true;
    case NM_S_3e: f_S_3e = rt::T(v); return true;
    case NM_S__40_X: f_S__40_X = rt::T(v); return true;
    case NM_S__2d_6: return false;
    case NM_S__22_h: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    case NM_S_9_21_U: return false;
    default: break;
    }
    return rt::Inst::dset(id, v);
}
bool C_S__60_6::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__5b__21_C: out = m_S__5b__21_C(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__3d__21__26_: out = m_S__3d__21__26_(); return true;
    case NM_S__3d_u: out = m_S__3d_u(); return true;
    case NM_S__25__21__3c_: out = m_S__25__21__3c_(); return true;
    case NM_S__21__21_G: out = m_S__21__21_G(); return true;
    case NM_S_5z: out = m_S_5z(rt::arg<uint32_t>(a, n, 0, 0u)); return true;
    case NM_S_75: out = rt::V(m_S_75(rt::arg<int32_t>(a, n, 0, 0), rt::arg<int32_t>(a, n, 1, C_S__60_6::dm_S_75_1()), rt::arg<bool>(a, n, 2, C_S__60_6::dm_S_75_2()), rt::arg<rt::Value>(a, n, 3, C_S__60_6::dm_S_75_3()))); return true;
    case NM_S__27_B: out = rt::V(m_S__27_B(rt::arg<int32_t>(a, n, 0, 0))); return true;
    case NM_S__25__21__3b_: out = rt::V(m_S__25__21__3b_()); return true;
    case NM_S_6U: out = rt::V(m_S_6U()); return true;
    case NM_S__26_q: out = rt::V(m_S__26_q()); return true;
    case NM_S__3b__21_L: out = m_S__3b__21_L(); return true;
    case NM_S_1_21_P: out = m_S_1_21_P(); return true;
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2b__21__21_: out = m_S__2b__21__21_(rt::arg<bool>(a, n, 0, C_S__60_6::dm_S__2b__21__21__0())); return true;
    case NM_S_9_21_X: out = m_S_9_21_X(rt::arg<int32_t>(a, n, 0, 0)); return true;
    case NM_S__3e__21__2d_: out = m_S__3e__21__2d_(); return true;
    case NM_S__21_E: out = m_S__21_E(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    case NM_S__22_h: { rt::Value f = rt::VB(g_S__22_h()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__25_: { rt::Value f = rt::VB(g_S_9_21__25_()); out = rt::call_value(f, a, n); return true; }
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_U: { rt::Value f = rt::V(g_S_9_21_U()); out = rt::call_value(f, a, n); return true; }
    case NM_id: { rt::Value f = rt::V((double)(f_id)); out = rt::call_value(f, a, n); return true; }
    case NM_ids: { rt::Value f = f_ids; out = rt::call_value(f, a, n); return true; }
    case NM_S_6_21_Z: { rt::Value f = rt::V((double)(f_S_6_21_Z)); out = rt::call_value(f, a, n); return true; }
    case NM_upgids: { rt::Value f = f_upgids; out = rt::call_value(f, a, n); return true; }
    case NM_S_1i: { rt::Value f = f_S_1i; out = rt::call_value(f, a, n); return true; }
    case NM_S__5e__21__23_: { rt::Value f = f_S__5e__21__23_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21__3d_: { rt::Value f = f_S__3f__21__3d_; out = rt::call_value(f, a, n); return true; }
    case NM_S__40_1: { rt::Value f = f_S__40_1; out = rt::call_value(f, a, n); return true; }
    case NM_S_7_23_: { rt::Value f = f_S_7_23_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3e__3d_: { rt::Value f = rt::V(f_S__3e__3d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3c_R: { rt::Value f = rt::V(f_S__3c_R); out = rt::call_value(f, a, n); return true; }
    case NM_S__23__21_m: { rt::Value f = rt::V(f_S__23__21_m); out = rt::call_value(f, a, n); return true; }
    case NM_S__23__22__2d_: { rt::Value f = rt::V(f_S__23__22__2d_); out = rt::call_value(f, a, n); return true; }
    case NM_S__3b__22__3e_: { rt::Value f = rt::V(f_S__3b__22__3e_); out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__21_Y: { rt::Value f = rt::V((double)(f_S__2c__21_Y)); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21_m: { rt::Value f = rt::V((double)(f_S_9_21_m)); out = rt::call_value(f, a, n); return true; }
    case NM_S__2d__21__5e_: { rt::Value f = rt::V((double)(f_S__2d__21__5e_)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3c__21_7: { rt::Value f = rt::VB(f_S__3c__21_7); out = rt::call_value(f, a, n); return true; }
    case NM_S__21__21__60_: { rt::Value f = rt::VB(f_S__21__21__60_); out = rt::call_value(f, a, n); return true; }
    case NM_S__26__21__5e_: { rt::Value f = rt::VB(f_S__26__21__5e_); out = rt::call_value(f, a, n); return true; }
    case NM_S__2b__21_9: { rt::Value f = rt::VB(f_S__2b__21_9); out = rt::call_value(f, a, n); return true; }
    case NM_S_7_21_9: { rt::Value f = rt::VB(f_S_7_21_9); out = rt::call_value(f, a, n); return true; }
    case NM_S_6_2c_: { rt::Value f = f_S_6_2c_; out = rt::call_value(f, a, n); return true; }
    case NM_S__3b__21__27_: { rt::Value f = rt::VB(f_S__3b__21__27_); out = rt::call_value(f, a, n); return true; }
    case NM_S_1_21_9: { rt::Value f = rt::V((double)(f_S_1_21_9)); out = rt::call_value(f, a, n); return true; }
    case NM_S_3_21_R: { rt::Value f = rt::VB(f_S_3_21_R); out = rt::call_value(f, a, n); return true; }
    case NM_S_4W: { rt::Value f = rt::VB(f_S_4W); out = rt::call_value(f, a, n); return true; }
    case NM_S_9_21__27_: { rt::Value f = f_S_9_21__27_; out = rt::call_value(f, a, n); return true; }
    case NM_S__22__21_U: { rt::Value f = rt::V((double)(f_S__22__21_U)); out = rt::call_value(f, a, n); return true; }
    case NM_S__21__22_E: { rt::Value f = rt::V((double)(f_S__21__22_E)); out = rt::call_value(f, a, n); return true; }
    case NM_S__3c__60_: { rt::Value f = rt::VB(f_S__3c__60_); out = rt::call_value(f, a, n); return true; }
    case NM_S__21__21_n: { rt::Value f = rt::VB(f_S__21__21_n); out = rt::call_value(f, a, n); return true; }
    case NM_S_7_22_0: { rt::Value f = rt::VB(f_S_7_22_0); out = rt::call_value(f, a, n); return true; }
    case NM_S__22__22__2b_: { rt::Value f = rt::VB(f_S__22__22__2b_); out = rt::call_value(f, a, n); return true; }
    case NM_S__5b__22__2d_: { rt::Value f = rt::V((double)(f_S__5b__22__2d_)); out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21__3e_: { rt::Value f = rt::VB(f_S__25__21__3e_); out = rt::call_value(f, a, n); return true; }
    case NM_S_0_21_d: { rt::Value f = rt::VB(f_S_0_21_d); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f__21_6: { rt::Value f = rt::VB(f_S__3f__21_6); out = rt::call_value(f, a, n); return true; }
    case NM_S_3_21_c: { rt::Value f = rt::VB(f_S_3_21_c); out = rt::call_value(f, a, n); return true; }
    case NM_S__3f_T: { rt::Value f = rt::VB(f_S__3f_T); out = rt::call_value(f, a, n); return true; }
    case rt::N_data: { rt::Value f = rt::VB(f_data); out = rt::call_value(f, a, n); return true; }
    case NM_S__25__21__2c_: { rt::Value f = rt::VB(f_S__25__21__2c_); out = rt::call_value(f, a, n); return true; }
    case NM_S__2c__21_B: { rt::Value f = rt::V((double)(f_S__2c__21_B)); out = rt::call_value(f, a, n); return true; }
    case NM_S_3e: { rt::Value f = rt::VB(f_S_3e); out = rt::call_value(f, a, n); return true; }
    case NM_S__40_X: { rt::Value f = rt::VB(f_S__40_X); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return rt::Inst::dcall(id, a, n, out);
}
bool C_S__60_6::dmeth(int id) {
    switch (id) {
    case NM_S__5b__21_C: return true;
    case NM_S_6r: return true;
    case NM_S__3d__21__26_: return true;
    case NM_S__3d_u: return true;
    case NM_S__25__21__3c_: return true;
    case NM_S__21__21_G: return true;
    case NM_S_5z: return true;
    case NM_S_75: return true;
    case NM_S__27_B: return true;
    case NM_S__25__21__3b_: return true;
    case NM_S_6U: return true;
    case NM_S__26_q: return true;
    case NM_S__3b__21_L: return true;
    case NM_S_1_21_P: return true;
    case NM_S__40__22_: return true;
    case NM_S__2b__21__21_: return true;
    case NM_S_9_21_X: return true;
    case NM_S__3e__21__2d_: return true;
    case NM_S__21_E: return true;
    case NM_S__2d_6: return false;
    case NM_S__22_h: return false;
    case NM_S_9_21__25_: return false;
    case NM_S__26_8: return false;
    case NM_S_9_21_U: return false;
    case NM_id: return false;
    case NM_ids: return false;
    case NM_S_6_21_Z: return false;
    case NM_upgids: return false;
    case NM_S_1i: return false;
    case NM_S__5e__21__23_: return false;
    case NM_S__3f__21__3d_: return false;
    case NM_S__40_1: return false;
    case NM_S_7_23_: return false;
    case NM_S__3e__3d_: return false;
    case NM_S__3c_R: return false;
    case NM_S__23__21_m: return false;
    case NM_S__23__22__2d_: return false;
    case NM_S__3b__22__3e_: return false;
    case NM_S__2c__21_Y: return false;
    case NM_S_9_21_m: return false;
    case NM_S__2d__21__5e_: return false;
    case NM_S__3c__21_7: return false;
    case NM_S__21__21__60_: return false;
    case NM_S__26__21__5e_: return false;
    case NM_S__2b__21_9: return false;
    case NM_S_7_21_9: return false;
    case NM_S_6_2c_: return false;
    case NM_S__3b__21__27_: return false;
    case NM_S_1_21_9: return false;
    case NM_S_3_21_R: return false;
    case NM_S_4W: return false;
    case NM_S_9_21__27_: return false;
    case NM_S__22__21_U: return false;
    case NM_S__21__22_E: return false;
    case NM_S__3c__60_: return false;
    case NM_S__21__21_n: return false;
    case NM_S_7_22_0: return false;
    case NM_S__22__22__2b_: return false;
    case NM_S__5b__22__2d_: return false;
    case NM_S__25__21__3e_: return false;
    case NM_S_0_21_d: return false;
    case NM_S__3f__21_6: return false;
    case NM_S_3_21_c: return false;
    case NM_S__3f_T: return false;
    case rt::N_data: return false;
    case NM_S__25__21__2c_: return false;
    case NM_S__2c__21_B: return false;
    case NM_S_3e: return false;
    case NM_S__40_X: return false;
    default: break;
    }
    return rt::Inst::dmeth(id);
}
bool C_S__60_6::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60_6::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = sg_id(); return true;
    default: return false;
    }
}
bool C_S__60_6::sset_(int id, rt::Value v) {
    switch (id) {
    default: return false;
    }
}
bool C_S__60_6::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__20__21_0::ctor_() {
    RT_FN("S__20__21_0.S__20__21_0");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v541 = 337.0; this->f_S_6_21_Z = rt::touint_d(_v541); _v541; });
    ({ rt::Value _v542 = rt::trv(rt::VS(g::LS[365])); this->f_S_1i = rt::slot_string(_v542); _v542; });
    ({ rt::Value _v543 = rt::VS(g::LS[366]); this->f_S__5e__21__23_ = rt::slot_string(_v543); _v543; });
    ({ double _v544 = 8e+27; this->f_S__3e__3d_ = _v544; _v544; });
    ({ double _v545 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v545); _v545; });
}
rt::Value C_S__20__21_0::m_S__40__22_() {
    RT_FN("S__20__21_0.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[367]), C_S__26_c::sm_S_6_21_T(C_S__20__21_0::sm_S__2b__2b_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__20__21_0::g_S__2d_6() {
    RT_FN("S__20__21_0.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__40__3e___id);
    return false;
}
double C_S__20__21_0::sm_S__2b__2b_() {
    RT_FN("S__20__21_0.S__2b__2b_");
    return 200.0;
    return 0.0;
}
C_S__20__21_0* C_S__20__21_0::alloc_() {
    C_S__20__21_0* o = rt::make<C_S__20__21_0>();
    return o;
}
rt::Value C_S__20__21_0::mk_(rt::Value* a, int n) {
    C_S__20__21_0* o = alloc_();
    o->C_S__20__21_0::ctor_();
    return rt::VO(o);
}
bool C_S__20__21_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20__21_0::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20__21_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20__21_0::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20__21_0::smeth_(int id) {
    switch (id) {
    case NM_S__2b__2b_: return true;
    default: return false;
    }
}
bool C_S__20__21_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20__21_0__id)); return true;
    case NM_ids: out = g::SV.C_S__20__21_0__ids; return true;
    case NM_S__2b__2b_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__20__21_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20__21_0__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__20__21_0__ids = v; return true;
    default: return false;
    }
}
bool C_S__20__21_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2b__2b_: out = rt::V(sm_S__2b__2b_()); return true;
    default: return false;
    }
}
void C_S__20_t::ctor_() {
    RT_FN("S__20_t.S__20_t");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v546 = 367.0; this->f_S_6_21_Z = rt::touint_d(_v546); _v546; });
    ({ rt::Value _v547 = rt::trv(rt::VS(g::LS[369])); this->f_S_1i = rt::slot_string(_v547); _v547; });
    ({ rt::Value _v548 = rt::VS(g::LS[370]); this->f_S__5e__21__23_ = rt::slot_string(_v548); _v548; });
    ({ double _v549 = 1.0; this->f_S__3e__3d_ = _v549; _v549; });
    ({ double _v550 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v550); _v550; });
}
rt::Value C_S__20_t::m_S__40__22_() {
    RT_FN("S__20_t.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[371]), C_S__26_c::sm_S_8_21_Z(1000000.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__20_t::g_S__2d_6() {
    RT_FN("S__20_t.S__2d_6_get");
    return ({ bool _t551 = C_S_8G::sm_S__3c_P(g::SV.C_S__3b_2__id); _t551 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t551; });
    return false;
}
C_S__20_t* C_S__20_t::alloc_() {
    C_S__20_t* o = rt::make<C_S__20_t>();
    return o;
}
rt::Value C_S__20_t::mk_(rt::Value* a, int n) {
    C_S__20_t* o = alloc_();
    o->C_S__20_t::ctor_();
    return rt::VO(o);
}
bool C_S__20_t::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__20_t::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__20_t::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__20_t::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__20_t::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__20_t::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__20_t__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__20_t__S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__20_t__ids; return true;
    default: return false;
    }
}
bool C_S__20_t::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__20_t__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__20_t__S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__20_t__ids = v; return true;
    default: return false;
    }
}
bool C_S__20_t::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__21__21_2::ctor_() {
    RT_FN("S__21__21_2.S__21__21_2");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v552 = 341.0; this->f_S_6_21_Z = rt::touint_d(_v552); _v552; });
    ({ rt::Value _v553 = rt::trv(rt::VS(g::LS[373])); this->f_S_1i = rt::slot_string(_v553); _v553; });
    ({ rt::Value _v554 = rt::VS(g::LS[374]); this->f_S__5e__21__23_ = rt::slot_string(_v554); _v554; });
    ({ rt::Value _v555 = rt::VS(g::LS[375]); this->f_S__3f__21__3d_ = rt::slot_string(_v555); _v555; });
    ({ double _v556 = 1000000.0; this->f_S__3e__3d_ = _v556; _v556; });
    ({ double _v557 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v557); _v557; });
    ({ double _v558 = 3.0; this->f_S__2d__21__5e_ = rt::toint_d(_v558); _v558; });
    ({ double _v559 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v559); _v559; });
}
rt::Value C_S__21__21_2::m_S__40__22_() {
    RT_FN("S__21__21_2.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[376]), C_S__26_c::sm_S_8_21_Z(rt::m_abs(C_S__21__21_2::sm_S_0_21_T()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__21__21_2::m_S_6r() {
    RT_FN("S__21__21_2.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o560 = C_S_8G::sm_S__21__21_H(g::SV.C_S_9_21_9__id); C_S__60_6* _p561 = rt::as_ptr<C_S__60_6>(_o560); _p561 ? _p561->m_S__3d__21__26_() : rt::dcallv(_o560, NM_S__3d__21__26_); }));
    return rt::NUL;
}
bool C_S__21__21_2::g_S__2d_6() {
    RT_FN("S__21__21_2.S__2d_6_get");
    return ({ bool _t565 = (({ bool _t564 = C_S__26_c::sm_S_9_22_0(); _t564 ? _t564 : (bool)(({ rt::Value _o562 = C_S_8G::sm_S__23_N(g::SV.C_S_2_21_E__id); C_S_84* _p563 = rt::as_ptr<C_S_84>(_o562); _p563 ? _p563->g_S__2d_6() : rt::T(rt::dget(_o562, NM_S__2d_6)); })); })); _t565 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3c_z__id)) : _t565; });
    return false;
}
double C_S__21__21_2::sm_S_0_21_T() {
    RT_FN("S__21__21_2.S_0_21_T");
    return (-10.0);
    return 0.0;
}
C_S__21__21_2* C_S__21__21_2::alloc_() {
    C_S__21__21_2* o = rt::make<C_S__21__21_2>();
    return o;
}
rt::Value C_S__21__21_2::mk_(rt::Value* a, int n) {
    C_S__21__21_2* o = alloc_();
    o->C_S__21__21_2::ctor_();
    return rt::VO(o);
}
bool C_S__21__21_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__21__21_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__21__21_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__21__21_2::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__21__21_2::smeth_(int id) {
    switch (id) {
    case NM_S_0_21_T: return true;
    default: return false;
    }
}
bool C_S__21__21_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__21_2__id)); return true;
    case NM_ids: out = g::SV.C_S__21__21_2__ids; return true;
    case NM_S_0_21_T: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__21_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__21_2__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21__21_2__ids = v; return true;
    default: return false;
    }
}
bool C_S__21__21_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_0_21_T: out = rt::V(sm_S_0_21_T()); return true;
    default: return false;
    }
}
void C_S__21__27_::ctor_() {
    RT_FN("S__21__27_.S__21__27_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v566 = 371.0; this->f_S_6_21_Z = rt::touint_d(_v566); _v566; });
    ({ rt::Value _v567 = rt::trv(rt::VS(g::LS[378])); this->f_S_1i = rt::slot_string(_v567); _v567; });
    ({ rt::Value _v568 = rt::VS(g::LS[379]); this->f_S__5e__21__23_ = rt::slot_string(_v568); _v568; });
    ({ double _v569 = 1111.0; this->f_S__3e__3d_ = _v569; _v569; });
    ({ double _v570 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v570); _v570; });
}
rt::Value C_S__21__27_::m_S__40__22_() {
    RT_FN("S__21__27_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[380]), rt::dcallv(rt::V(C_S__21__27_::sm_S__27__21_b()), rt::N_toFixed, rt::V(8.0))));
    return rt::NUL;
}
bool C_S__21__27_::g_S__2d_6() {
    RT_FN("S__21__27_.S__2d_6_get");
    return ({ bool _t571 = C_S_8G::sm_S__3c_P(g::SV.C_S__40_H__id); _t571 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t571; });
    return false;
}
double C_S__21__27_::sm_S__27__21_b() {
    RT_FN("S__21__27_.S__27__21_b");
    return 11.11111111;
    return 0.0;
}
C_S__21__27_* C_S__21__27_::alloc_() {
    C_S__21__27_* o = rt::make<C_S__21__27_>();
    return o;
}
rt::Value C_S__21__27_::mk_(rt::Value* a, int n) {
    C_S__21__27_* o = alloc_();
    o->C_S__21__27_::ctor_();
    return rt::VO(o);
}
bool C_S__21__27_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__21__27_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__21__27_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__21__27_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__21__27_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__21__27_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21__27___id)); return true;
    case NM_ids: out = g::SV.C_S__21__27___ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__21__27_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21__27___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21__27___ids = v; return true;
    default: return false;
    }
}
bool C_S__21__27_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__21_u::ctor_() {
    RT_FN("S__21_u.S__21_u");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v572 = 350.0; this->f_S_6_21_Z = rt::touint_d(_v572); _v572; });
    ({ rt::Value _v573 = rt::trv(rt::VS(g::LS[382])); this->f_S_1i = rt::slot_string(_v573); _v573; });
    ({ rt::Value _v574 = rt::VS(g::LS[383]); this->f_S__5e__21__23_ = rt::slot_string(_v574); _v574; });
    ({ rt::Value _v575 = rt::trv(rt::VS(g::LS[384])); this->f_S_7_23_ = rt::slot_string(_v575); _v575; });
    ({ double _v576 = 1e+42; this->f_S__3e__3d_ = _v576; _v576; });
    ({ double _v577 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v577); _v577; });
}
bool C_S__21_u::g_S__2d_6() {
    RT_FN("S__21_u.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__5b__3b___id);
    return false;
}
C_S__21_u* C_S__21_u::alloc_() {
    C_S__21_u* o = rt::make<C_S__21_u>();
    return o;
}
rt::Value C_S__21_u::mk_(rt::Value* a, int n) {
    C_S__21_u* o = alloc_();
    o->C_S__21_u::ctor_();
    return rt::VO(o);
}
bool C_S__21_u::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__21_u::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__21_u::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__21_u::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__21_u::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__21_u::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__21_u__id)); return true;
    case NM_ids: out = g::SV.C_S__21_u__ids; return true;
    default: return false;
    }
}
bool C_S__21_u::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__21_u__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__21_u__ids = v; return true;
    default: return false;
    }
}
bool C_S__21_u::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__23__5e_::ctor_() {
    RT_FN("S__23__5e_.S__23__5e_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v578 = 357.0; this->f_S_6_21_Z = rt::touint_d(_v578); _v578; });
    ({ rt::Value _v579 = rt::trv(rt::VS(g::LS[386])); this->f_S_1i = rt::slot_string(_v579); _v579; });
    ({ rt::Value _v580 = rt::VS(g::LS[387]); this->f_S__5e__21__23_ = rt::slot_string(_v580); _v580; });
    ({ double _v581 = 5e+58; this->f_S__3e__3d_ = _v581; _v581; });
    ({ double _v582 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v582); _v582; });
}
rt::Value C_S__23__5e_::m_S__40__22_() {
    RT_FN("S__23__5e_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[388]), C_S__26_c::sm_S_8_21_Z(C_S__23__5e_::sm_S__60_z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__23__5e_::g_S__2d_6() {
    RT_FN("S__23__5e_.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S_6_21_4__id);
    return false;
}
double C_S__23__5e_::sm_S__60_z() {
    RT_FN("S__23__5e_.S__60_z");
    return 250.0;
    return 0.0;
}
C_S__23__5e_* C_S__23__5e_::alloc_() {
    C_S__23__5e_* o = rt::make<C_S__23__5e_>();
    return o;
}
rt::Value C_S__23__5e_::mk_(rt::Value* a, int n) {
    C_S__23__5e_* o = alloc_();
    o->C_S__23__5e_::ctor_();
    return rt::VO(o);
}
bool C_S__23__5e_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__23__5e_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__23__5e_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__23__5e_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__23__5e_::smeth_(int id) {
    switch (id) {
    case NM_S__60_z: return true;
    default: return false;
    }
}
bool C_S__23__5e_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__23__5e___id)); return true;
    case NM_ids: out = g::SV.C_S__23__5e___ids; return true;
    case NM_S__60_z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__23__5e_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__23__5e___id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__23__5e___ids = v; return true;
    default: return false;
    }
}
bool C_S__23__5e_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__60_z: out = rt::V(sm_S__60_z()); return true;
    default: return false;
    }
}
void C_S__25__21_Q::ctor_() {
    RT_FN("S__25__21_Q.S__25__21_Q");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v583 = 366.0; this->f_S_6_21_Z = rt::touint_d(_v583); _v583; });
    ({ rt::Value _v584 = rt::trv(rt::VS(g::LS[390])); this->f_S_1i = rt::slot_string(_v584); _v584; });
    ({ rt::Value _v585 = rt::VS(g::LS[391]); this->f_S__5e__21__23_ = rt::slot_string(_v585); _v585; });
    ({ double _v586 = 7e+42; this->f_S__3e__3d_ = _v586; _v586; });
    ({ double _v587 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v587); _v587; });
}
rt::Value C_S__25__21_Q::m_S__40__22_() {
    RT_FN("S__25__21_Q.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[392]), C_S__26_c::sm_S__20__21_C(rt::trv(rt::VS(g::LS[393]), rt::dcallv(rt::V(0.1), rt::N_toFixed, rt::V(1.0))), rt::trv(rt::VS(g::LS[394])), C_S__26_c::dsm_S__20__21_C_2()), C_S__26_c::sm_S__25__22__3e_(C_S__25__21_Q::sm_S__27__21_b(), 1.0, rt::touint_d(0.0), rt::touint_d(3.0))));
    return rt::NUL;
}
bool C_S__25__21_Q::g_S__2d_6() {
    RT_FN("S__25__21_Q.S__2d_6_get");
    return ({ bool _t588 = C_S_8G::sm_S__3c_P(g::SV.C_S_5_21_G__id); _t588 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t588; });
    return false;
}
double C_S__25__21_Q::sm_S__27__21_b() {
    RT_FN("S__25__21_Q.S__27__21_b");
    return (0.1 * C_S__23__21__21_::sm_S__2c__21_E());
    return 0.0;
}
C_S__25__21_Q* C_S__25__21_Q::alloc_() {
    C_S__25__21_Q* o = rt::make<C_S__25__21_Q>();
    return o;
}
rt::Value C_S__25__21_Q::mk_(rt::Value* a, int n) {
    C_S__25__21_Q* o = alloc_();
    o->C_S__25__21_Q::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__21_Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__21_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__21_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__21_Q::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__25__21_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_Q__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__25__21_Q__S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__25__21_Q__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__21_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_Q__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__25__21_Q__S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__25__21_Q__ids = v; return true;
    default: return false;
    }
}
bool C_S__25__21_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__25__21_c::ctor_() {
    RT_FN("S__25__21_c.S__25__21_c");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v589 = 349.0; this->f_S_6_21_Z = rt::touint_d(_v589); _v589; });
    ({ rt::Value _v590 = rt::trv(rt::VS(g::LS[396])); this->f_S_1i = rt::slot_string(_v590); _v590; });
    ({ rt::Value _v591 = rt::VS(g::LS[397]); this->f_S__5e__21__23_ = rt::slot_string(_v591); _v591; });
    ({ double _v592 = 1e+36; this->f_S__3e__3d_ = _v592; _v592; });
    ({ double _v593 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v593); _v593; });
}
rt::Value C_S__25__21_c::m_S__40__22_() {
    RT_FN("S__25__21_c.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[398]), C_S__26_c::sm_S_6_21_T(C_S__25__21_c::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__25__21_c::g_S__2d_6() {
    RT_FN("S__25__21_c.S__2d_6_get");
    return ({ bool _t596 = (({ bool _t595 = ({ bool _t594 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0); _t594 ? _t594 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 7.0)); }); _t595 ? _t595 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0)); })); _t596 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_3_21_1__id)) : _t596; });
    return false;
}
double C_S__25__21_c::sm_S__27__21_b() {
    RT_FN("S__25__21_c.S__27__21_b");
    return 25.0;
    return 0.0;
}
C_S__25__21_c* C_S__25__21_c::alloc_() {
    C_S__25__21_c* o = rt::make<C_S__25__21_c>();
    return o;
}
rt::Value C_S__25__21_c::mk_(rt::Value* a, int n) {
    C_S__25__21_c* o = alloc_();
    o->C_S__25__21_c::ctor_();
    return rt::VO(o);
}
bool C_S__25__21_c::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25__21_c::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25__21_c::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25__21_c::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25__21_c::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__25__21_c::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25__21_c__id)); return true;
    case NM_ids: out = g::SV.C_S__25__21_c__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25__21_c::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25__21_c__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__25__21_c__ids = v; return true;
    default: return false;
    }
}
bool C_S__25__21_c::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__22__21_O::ctor_() {
    RT_FN("S__22__21_O.S__22__21_O");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v597 = 475.0; this->f_S_6_21_Z = rt::touint_d(_v597); _v597; });
    ({ rt::Value _v598 = rt::trv(rt::VS(g::LS[400])); this->f_S_1i = rt::slot_string(_v598); _v598; });
    ({ rt::Value _v599 = rt::VS(g::LS[401]); this->f_S__5e__21__23_ = rt::slot_string(_v599); _v599; });
    ({ double _v600 = 1e+123; this->f_S__3e__3d_ = _v600; _v600; });
    ({ double _v601 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v601); _v601; });
}
rt::Value C_S__22__21_O::m_S__40__22_() {
    RT_FN("S__22__21_O.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[402]), C_S__26_c::sm_S_8_21_Z(C_S__22__21_O::sm_S_5_3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__22__21_O::g_S__2d_6() {
    RT_FN("S__22__21_O.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__22_e__id);
    return false;
}
double C_S__22__21_O::sm_S_5_3c_() {
    RT_FN("S__22__21_O.S_5_3c_");
    return 250.0;
    return 0.0;
}
C_S__22__21_O* C_S__22__21_O::alloc_() {
    C_S__22__21_O* o = rt::make<C_S__22__21_O>();
    return o;
}
rt::Value C_S__22__21_O::mk_(rt::Value* a, int n) {
    C_S__22__21_O* o = alloc_();
    o->C_S__22__21_O::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_O::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22__21_O::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22__21_O::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22__21_O::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22__21_O::smeth_(int id) {
    switch (id) {
    case NM_S_5_3c_: return true;
    default: return false;
    }
}
bool C_S__22__21_O::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_O__id)); return true;
    case NM_S_5_3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__21_O::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_O__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_O::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_3c_: out = rt::V(sm_S_5_3c_()); return true;
    default: return false;
    }
}
void C_S__22__21_i::ctor_() {
    RT_FN("S__22__21_i.S__22__21_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v602 = 733.0; this->f_S_6_21_Z = rt::touint_d(_v602); _v602; });
    ({ rt::Value _v603 = rt::trv(rt::VS(g::LS[403])); this->f_S_1i = rt::slot_string(_v603); _v603; });
    ({ rt::Value _v604 = rt::VS(g::LS[404]); this->f_S__5e__21__23_ = rt::slot_string(_v604); _v604; });
    ({ double _v605 = 1e+160; this->f_S__3c_R = _v605; _v605; });
    ({ double _v606 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v606); _v606; });
}
rt::Value C_S__22__21_i::m_S__40__22_() {
    RT_FN("S__22__21_i.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[405]), C_S__26_c::sm_S_8_21_Z(C_S__22__21_i::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__22__21_i::sm_S_1_3d_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__22__21_i::g_S__2d_6() {
    RT_FN("S__22__21_i.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__3b__21_h__id);
    return false;
}
double C_S__22__21_i::sm_S__40__21__3f_() {
    RT_FN("S__22__21_i.S__40__21__3f_");
    return 1000.0;
    return 0.0;
}
double C_S__22__21_i::sm_S_1_3d_() {
    RT_FN("S__22__21_i.S_1_3d_");
    return 10.0;
    return 0.0;
}
C_S__22__21_i* C_S__22__21_i::alloc_() {
    C_S__22__21_i* o = rt::make<C_S__22__21_i>();
    return o;
}
rt::Value C_S__22__21_i::mk_(rt::Value* a, int n) {
    C_S__22__21_i* o = alloc_();
    o->C_S__22__21_i::ctor_();
    return rt::VO(o);
}
bool C_S__22__21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__22__21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__22__21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__22__21_i::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__22__21_i::smeth_(int id) {
    switch (id) {
    case NM_S__40__21__3f_: return true;
    case NM_S_1_3d_: return true;
    default: return false;
    }
}
bool C_S__22__21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__22__21_i__id)); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_1_3d_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__22__21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__22__21_i__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__22__21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    case NM_S_1_3d_: out = rt::V(sm_S_1_3d_()); return true;
    default: return false;
    }
}
void C_S__3c__22_F::ctor_() {
    RT_FN("S__3c__22_F.S__3c__22_F");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v607 = 1168.0; this->f_S_6_21_Z = rt::touint_d(_v607); _v607; });
    ({ rt::Value _v608 = rt::trv(rt::VS(g::LS[406])); this->f_S_1i = rt::slot_string(_v608); _v608; });
    ({ rt::Value _v609 = rt::VS(g::LS[407]); this->f_S__5e__21__23_ = rt::slot_string(_v609); _v609; });
    ({ double _v610 = 1e+75; this->f_S__3b__22__3e_ = _v610; _v610; });
    ({ double _v611 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v611); _v611; });
}
rt::Value C_S__3c__22_F::m_S__40__22_() {
    RT_FN("S__3c__22_F.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[408]), C_S__26_c::sm_S_8_21_Z(C_S__3c__22_F::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3c__22_F::g_S__2d_6() {
    RT_FN("S__3c__22_F.S__2d_6_get");
    return ({ bool _t612 = C_S_8G::sm_S__3c_P(g::SV.C_S__3e__22_F__id); _t612 ? (bool)((!(((double)(g::SV.C_S_8G__S__2c__21_Y)) == 0.0))) : _t612; });
    return false;
}
double C_S__3c__22_F::sm_S__22__21__26_() {
    RT_FN("S__3c__22_F.S__22__21__26_");
    return (5.0 + (2.5 * rt::m_pow(C_S__26_c::sm_S__26__21_y(true, C_S__26_c::dsm_S__26__21_y_1(), C_S__26_c::dsm_S__26__21_y_2()), 0.5)));
    return 0.0;
}
C_S__3c__22_F* C_S__3c__22_F::alloc_() {
    C_S__3c__22_F* o = rt::make<C_S__3c__22_F>();
    return o;
}
rt::Value C_S__3c__22_F::mk_(rt::Value* a, int n) {
    C_S__3c__22_F* o = alloc_();
    o->C_S__3c__22_F::ctor_();
    return rt::VO(o);
}
bool C_S__3c__22_F::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c__22_F::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c__22_F::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c__22_F::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c__22_F::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__3c__22_F::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c__22_F__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c__22_F::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c__22_F__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3c__22_F::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__3c_o::ctor_() {
    RT_FN("S__3c_o.S__3c_o");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v613 = 345.0; this->f_S_6_21_Z = rt::touint_d(_v613); _v613; });
    ({ rt::Value _v614 = rt::trv(rt::VS(g::LS[409])); this->f_S_1i = rt::slot_string(_v614); _v614; });
    ({ rt::Value _v615 = rt::VS(g::LS[410]); this->f_S__5e__21__23_ = rt::slot_string(_v615); _v615; });
    ({ double _v616 = 1337.0; this->f_S__3e__3d_ = _v616; _v616; });
    ({ double _v617 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v617); _v617; });
}
rt::Value C_S__3c_o::m_S__40__22_() {
    RT_FN("S__3c_o.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[380]), rt::dcallv(rt::V(C_S__3c_o::sm_S__27__21_b()), rt::N_toFixed, rt::V(2.0))));
    return rt::NUL;
}
bool C_S__3c_o::g_S__2d_6() {
    RT_FN("S__3c_o.S__2d_6_get");
    return ({ bool _t618 = C_S_8G::sm_S__3c_P(g::SV.C_S_4o__id); _t618 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t618; });
    return false;
}
double C_S__3c_o::sm_S__27__21_b() {
    RT_FN("S__3c_o.S__27__21_b");
    return 13.37;
    return 0.0;
}
C_S__3c_o* C_S__3c_o::alloc_() {
    C_S__3c_o* o = rt::make<C_S__3c_o>();
    return o;
}
rt::Value C_S__3c_o::mk_(rt::Value* a, int n) {
    C_S__3c_o* o = alloc_();
    o->C_S__3c_o::ctor_();
    return rt::VO(o);
}
bool C_S__3c_o::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3c_o::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3c_o::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3c_o::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3c_o::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3c_o::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3c_o__id)); return true;
    case NM_ids: out = g::SV.C_S__3c_o__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3c_o::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3c_o__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3c_o__ids = v; return true;
    default: return false;
    }
}
bool C_S__3c_o::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3e__21_i::ctor_() {
    RT_FN("S__3e__21_i.S__3e__21_i");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v619 = 722.0; this->f_S_6_21_Z = rt::touint_d(_v619); _v619; });
    ({ rt::Value _v620 = rt::trv(rt::VS(g::LS[412])); this->f_S_1i = rt::slot_string(_v620); _v620; });
    ({ rt::Value _v621 = rt::VS(g::LS[413]); this->f_S__5e__21__23_ = rt::slot_string(_v621); _v621; });
    ({ double _v622 = 1e+175; this->f_S__3c_R = _v622; _v622; });
    ({ double _v623 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v623); _v623; });
}
rt::Value C_S__3e__21_i::m_S__40__22_() {
    RT_FN("S__3e__21_i.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[414]), C_S__26_c::sm_S_8_21_Z(150.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3e__21_i::g_S__2d_6() {
    RT_FN("S__3e__21_i.S__2d_6_get");
    return ({ bool _t624 = C_S_8G::sm_S__3c_P(g::SV.C_S_7_21_h__id); _t624 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0)) : _t624; });
    return false;
}
double C_S__3e__21_i::sm_S__27__21_b() {
    RT_FN("S__3e__21_i.S__27__21_b");
    return ((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0) ? 150.0 : 0.0);
    return 0.0;
}
C_S__3e__21_i* C_S__3e__21_i::alloc_() {
    C_S__3e__21_i* o = rt::make<C_S__3e__21_i>();
    return o;
}
rt::Value C_S__3e__21_i::mk_(rt::Value* a, int n) {
    C_S__3e__21_i* o = alloc_();
    o->C_S__3e__21_i::ctor_();
    return rt::VO(o);
}
bool C_S__3e__21_i::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e__21_i::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e__21_i::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e__21_i::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e__21_i::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3e__21_i::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e__21_i__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3e__21_i__S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e__21_i::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e__21_i__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3e__21_i__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3e__21_i::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3e_J::ctor_() {
    RT_FN("S__3e_J.S__3e_J");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v625 = 583.0; this->f_S_6_21_Z = rt::touint_d(_v625); _v625; });
    ({ rt::Value _v626 = rt::trv(rt::VS(g::LS[415])); this->f_S_1i = rt::slot_string(_v626); _v626; });
    ({ rt::Value _v627 = rt::VS(g::LS[416]); this->f_S__5e__21__23_ = rt::slot_string(_v627); _v627; });
    ({ double _v628 = 1e+32; this->f_S__3e__3d_ = _v628; _v628; });
    ({ double _v629 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v629); _v629; });
}
rt::Value C_S__3e_J::m_S__40__22_() {
    RT_FN("S__3e_J.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[380]), C_S__26_c::sm_S_6_21_T(C_S__3e_J::sm_S__27__21_b(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__3e_J::g_S__2d_6() {
    RT_FN("S__3e_J.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__40__27___id);
    return false;
}
double C_S__3e_J::sm_S__27__21_b() {
    RT_FN("S__3e_J.S__27__21_b");
    return 10.0;
    return 0.0;
}
C_S__3e_J* C_S__3e_J::alloc_() {
    C_S__3e_J* o = rt::make<C_S__3e_J>();
    return o;
}
rt::Value C_S__3e_J::mk_(rt::Value* a, int n) {
    C_S__3e_J* o = alloc_();
    o->C_S__3e_J::ctor_();
    return rt::VO(o);
}
bool C_S__3e_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e_J::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e_J::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e_J::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3e_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e_J__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e_J__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3e_w::ctor_() {
    RT_FN("S__3e_w.S__3e_w");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v630 = 503.0; this->f_S_6_21_Z = rt::touint_d(_v630); _v630; });
    ({ rt::Value _v631 = rt::trv(rt::VS(g::LS[417])); this->f_S_1i = rt::slot_string(_v631); _v631; });
    ({ rt::Value _v632 = rt::VS(g::LS[418]); this->f_S__5e__21__23_ = rt::slot_string(_v632); _v632; });
    ({ double _v633 = 1000.0; this->f_S__3e__3d_ = _v633; _v633; });
    ({ double _v634 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v634); _v634; });
}
rt::Value C_S__3e_w::m_S__40__22_() {
    RT_FN("S__3e_w.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[419]), C_S__26_c::sm_S_8_21_Z(C_S__3e_w::sm_S_4_21__40_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3e_w::g_S__2d_6() {
    RT_FN("S__3e_w.S__2d_6_get");
    return ({ bool _t635 = C_S_8G::sm_S__3c_P(g::SV.C_S__23_r__id); _t635 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t635; });
    return false;
}
double C_S__3e_w::sm_S_4_21__40_() {
    RT_FN("S__3e_w.S_4_21__40_");
    return 50.0;
    return 0.0;
}
C_S__3e_w* C_S__3e_w::alloc_() {
    C_S__3e_w* o = rt::make<C_S__3e_w>();
    return o;
}
rt::Value C_S__3e_w::mk_(rt::Value* a, int n) {
    C_S__3e_w* o = alloc_();
    o->C_S__3e_w::ctor_();
    return rt::VO(o);
}
bool C_S__3e_w::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3e_w::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3e_w::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3e_w::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3e_w::smeth_(int id) {
    switch (id) {
    case NM_S_4_21__40_: return true;
    default: return false;
    }
}
bool C_S__3e_w::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3e_w__id)); return true;
    case NM_S_4_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3e_w::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3e_w__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3e_w::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_21__40_: out = rt::V(sm_S_4_21__40_()); return true;
    default: return false;
    }
}
void C_S__3f__21_7::ctor_() {
    RT_FN("S__3f__21_7.S__3f__21_7");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v636 = 635.0; this->f_S_6_21_Z = rt::touint_d(_v636); _v636; });
    ({ rt::Value _v637 = rt::trv(rt::VS(g::LS[420])); this->f_S_1i = rt::slot_string(_v637); _v637; });
    ({ rt::Value _v638 = rt::VS(g::LS[421]); this->f_S__5e__21__23_ = rt::slot_string(_v638); _v638; });
    ({ double _v639 = 5e+75; this->f_S__3e__3d_ = _v639; _v639; });
    ({ double _v640 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v640); _v640; });
}
rt::Value C_S__3f__21_7::m_S__40__22_() {
    RT_FN("S__3f__21_7.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[422]), C_S__26_c::sm_S_8_21_Z(g::SV.C_S__3f__21_7__S_1_21_S, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3f__21_7::g_S__2d_6() {
    RT_FN("S__3f__21_7.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__27__21_9__id);
    return false;
}
double C_S__3f__21_7::sm_S__3f__21__3c_() {
    RT_FN("S__3f__21_7.S__3f__21__3c_");
    return g::SV.C_S__3f__21_7__S_1_21_S;
    return 0.0;
}
double C_S__3f__21_7::sm_S__22__21__26_() {
    RT_FN("S__3f__21_7.S__22__21__26_");
    return g::SV.C_S__3f__21_7__S_1_21_S;
    return 0.0;
}
C_S__3f__21_7* C_S__3f__21_7::alloc_() {
    C_S__3f__21_7* o = rt::make<C_S__3f__21_7>();
    return o;
}
rt::Value C_S__3f__21_7::mk_(rt::Value* a, int n) {
    C_S__3f__21_7* o = alloc_();
    o->C_S__3f__21_7::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_7::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__21_7::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__21_7::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__21_7::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__21_7::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__3f__21_7::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_7__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3f__21_7__S_1_21_S); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__21_7::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_7__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3f__21_7__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3f__21_7::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__3f__21_W::ctor_() {
    RT_FN("S__3f__21_W.S__3f__21_W");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v641 = 552.0; this->f_S_6_21_Z = rt::touint_d(_v641); _v641; });
    ({ rt::Value _v642 = rt::trv(rt::VS(g::LS[423])); this->f_S_1i = rt::slot_string(_v642); _v642; });
    ({ rt::Value _v643 = rt::VS(g::LS[424]); this->f_S__5e__21__23_ = rt::slot_string(_v643); _v643; });
    ({ double _v644 = 0.0; this->f_S__3e__3d_ = _v644; _v644; });
    ({ double _v645 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v645); _v645; });
}
rt::Value C_S__3f__21_W::m_S__40__22_() {
    RT_FN("S__3f__21_W.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[425]), C_S__26_c::sm_S_8_21_Z(1e+16, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3d__21_n()));
    return rt::NUL;
}
rt::Value C_S__3f__21_W::m_S_6r() {
    RT_FN("S__3f__21_W.S_6r");
    ({ double _v646 = C_S__26_c::sm_S_0_22_3(C_S_8G::sg_S__40_e(), 1e+16); C_S_8G::ss_S__40_e(_v646); _v646; });
    return rt::NUL;
}
bool C_S__3f__21_W::g_S__2d_6() {
    RT_FN("S__3f__21_W.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__5e__21__5e___id);
    return false;
}
C_S__3f__21_W* C_S__3f__21_W::alloc_() {
    C_S__3f__21_W* o = rt::make<C_S__3f__21_W>();
    return o;
}
rt::Value C_S__3f__21_W::mk_(rt::Value* a, int n) {
    C_S__3f__21_W* o = alloc_();
    o->C_S__3f__21_W::ctor_();
    return rt::VO(o);
}
bool C_S__3f__21_W::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__21_W::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__21_W::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__21_W::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__21_W::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f__21_W::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__21_W__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3f__21_W__S_1_21_S); return true;
    default: return false;
    }
}
bool C_S__3f__21_W::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__21_W__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3f__21_W__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3f__21_W::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__3f__22__21_::ctor_() {
    RT_FN("S__3f__22__21_.S__3f__22__21_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v647 = 927.0; this->f_S_6_21_Z = rt::touint_d(_v647); _v647; });
    ({ rt::Value _v648 = rt::trv(rt::VS(g::LS[426])); this->f_S_1i = rt::slot_string(_v648); _v648; });
    ({ rt::Value _v649 = rt::VS(g::LS[427]); this->f_S__5e__21__23_ = rt::slot_string(_v649); _v649; });
    ({ double _v650 = 1e+142; this->f_S__23__21_m = _v650; _v650; });
    ({ double _v651 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v651); _v651; });
}
rt::Value C_S__3f__22__21_::m_S__40__22_() {
    RT_FN("S__3f__22__21_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[428]), C_S__26_c::sm_S_6_21_T(C_S__3f__22__21_::sm_S__26_s(), 3.0, C_S__26_c::dsm_S_6_21_T_2()), C_S__26_c::sm_S_8_21_Z(C_S__3f__22__21_::sm_S_5_21_B(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3f__22__21_::g_S__2d_6() {
    RT_FN("S__3f__22__21_.S__2d_6_get");
    return ({ bool _t653 = ({ bool _t652 = C_S_8G::sm_S__3c_P(g::SV.C_S__2c__21_y__id); _t652 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_21_x__id)) : _t652; }); _t653 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_5_21_y__id)) : _t653; });
    return false;
}
double C_S__3f__22__21_::sm_S__26_s() {
    RT_FN("S__3f__22__21_.S__26_s");
    return 10000.0;
    return 0.0;
}
double C_S__3f__22__21_::sm_S_5_21_B() {
    RT_FN("S__3f__22__21_.S_5_21_B");
    return 50000.0;
    return 0.0;
}
C_S__3f__22__21_* C_S__3f__22__21_::alloc_() {
    C_S__3f__22__21_* o = rt::make<C_S__3f__22__21_>();
    return o;
}
rt::Value C_S__3f__22__21_::mk_(rt::Value* a, int n) {
    C_S__3f__22__21_* o = alloc_();
    o->C_S__3f__22__21_::ctor_();
    return rt::VO(o);
}
bool C_S__3f__22__21_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__22__21_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__22__21_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__22__21_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__22__21_::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    case NM_S_5_21_B: return true;
    default: return false;
    }
}
bool C_S__3f__22__21_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__22__21___id)); return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__22__21_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__22__21___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__3f__22__21_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    default: return false;
    }
}
void C_S__3f__2d_::ctor_() {
    RT_FN("S__3f__2d_.S__3f__2d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v654 = 354.0; this->f_S_6_21_Z = rt::touint_d(_v654); _v654; });
    ({ rt::Value _v655 = rt::trv(rt::VS(g::LS[429])); this->f_S_1i = rt::slot_string(_v655); _v655; });
    ({ rt::Value _v656 = rt::VS(g::LS[430]); this->f_S__5e__21__23_ = rt::slot_string(_v656); _v656; });
    ({ double _v657 = 1e+132; this->f_S__3e__3d_ = _v657; _v657; });
    ({ double _v658 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v658); _v658; });
}
rt::Value C_S__3f__2d_::m_S__40__22_() {
    RT_FN("S__3f__2d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[431]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3f__2d_::g_S__2d_6() {
    RT_FN("S__3f__2d_.S__2d_6_get");
    return ({ bool _t660 = ({ bool _t659 = C_S_8G::sm_S__3c_P(g::SV.C_S__3f__21_P__id); _t659 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) >= 0.0)) : _t659; }); _t660 ? (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) <= 5.0)) : _t660; });
    return false;
}
double C_S__3f__2d_::sm_S__27__21_b() {
    RT_FN("S__3f__2d_.S__27__21_b");
    return (((((double)(g::SV.C_S_8G__S__2d__21__5e_)) >= 0.0) && (((double)(g::SV.C_S_8G__S__2d__21__5e_)) <= 5.0)) ? 100.0 : 0.0);
    return 0.0;
}
C_S__3f__2d_* C_S__3f__2d_::alloc_() {
    C_S__3f__2d_* o = rt::make<C_S__3f__2d_>();
    return o;
}
rt::Value C_S__3f__2d_::mk_(rt::Value* a, int n) {
    C_S__3f__2d_* o = alloc_();
    o->C_S__3f__2d_::ctor_();
    return rt::VO(o);
}
bool C_S__3f__2d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f__2d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f__2d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f__2d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f__2d_::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3f__2d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f__2d___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3f__2d___S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__3f__2d___ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f__2d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f__2d___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3f__2d___S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__3f__2d___ids = v; return true;
    default: return false;
    }
}
bool C_S__3f__2d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3f_Z::ctor_() {
    RT_FN("S__3f_Z.S__3f_Z");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v661 = 576.0; this->f_S_6_21_Z = rt::touint_d(_v661); _v661; });
    ({ rt::Value _v662 = rt::trv(rt::VS(g::LS[433])); this->f_S_1i = rt::slot_string(_v662); _v662; });
    ({ rt::Value _v663 = rt::VS(g::LS[434]); this->f_S__5e__21__23_ = rt::slot_string(_v663); _v663; });
    ({ double _v664 = 10.0; this->f_S__3c_R = _v664; _v664; });
    ({ double _v665 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v665); _v665; });
}
rt::Value C_S__3f_Z::m_S__40__22_() {
    RT_FN("S__3f_Z.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[435]), C_S__26_c::sm_S_8_21_Z(25.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3f_Z::g_S__2d_6() {
    RT_FN("S__3f_Z.S__2d_6_get");
    return ({ bool _t669 = ({ bool _t666 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t666 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3d__5f___id)) : _t666; }); _t669 ? (bool)((({ bool _t668 = ({ bool _t667 = (((double)(g::SV.C_S_8G__S__23_3)) == 9.0); _t667 ? _t667 : (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)); }); _t668 ? _t668 : (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 12.0)); }))) : _t669; });
    return false;
}
double C_S__3f_Z::sm_S__27__21_b() {
    RT_FN("S__3f_Z.S__27__21_b");
    return ((({ bool _t670 = (((double)(g::SV.C_S_8G__S__23_3)) == 9.0); _t670 ? _t670 : (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)); }) || (((double)(g::SV.C_S_8G__S__23_3)) == 12.0)) ? 25.0 : 0.0);
    return 0.0;
}
C_S__3f_Z* C_S__3f_Z::alloc_() {
    C_S__3f_Z* o = rt::make<C_S__3f_Z>();
    return o;
}
rt::Value C_S__3f_Z::mk_(rt::Value* a, int n) {
    C_S__3f_Z* o = alloc_();
    o->C_S__3f_Z::ctor_();
    return rt::VO(o);
}
bool C_S__3f_Z::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f_Z::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f_Z::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f_Z::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f_Z::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3f_Z::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f_Z__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__3f_Z__S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f_Z::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f_Z__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__3f_Z__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__3f_Z::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3f_c::ctor_() {
    RT_FN("S__3f_c.S__3f_c");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v671 = 331.0; this->f_S_6_21_Z = rt::touint_d(_v671); _v671; });
    ({ rt::Value _v672 = rt::trv(rt::VS(g::LS[436])); this->f_S_1i = rt::slot_string(_v672); _v672; });
    ({ rt::Value _v673 = rt::VS(g::LS[437]); this->f_S__5e__21__23_ = rt::slot_string(_v673); _v673; });
    ({ double _v674 = 1e+45; this->f_S__3e__3d_ = _v674; _v674; });
    ({ double _v675 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v675); _v675; });
}
rt::Value C_S__3f_c::m_S__40__22_() {
    RT_FN("S__3f_c.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[380]), C_S__26_c::sm_S_8_21_Z(C_S__3f_c::sm_S__27__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__3f_c::g_S__2d_6() {
    RT_FN("S__3f_c.S__2d_6_get");
    return ({ bool _t676 = C_S_8G::sm_S__3c_P(g::SV.C_S__3f__5f___id); _t676 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t676; });
    return false;
}
double C_S__3f_c::sm_S__27__21_b() {
    RT_FN("S__3f_c.S__27__21_b");
    return 100.0;
    return 0.0;
}
C_S__3f_c* C_S__3f_c::alloc_() {
    C_S__3f_c* o = rt::make<C_S__3f_c>();
    return o;
}
rt::Value C_S__3f_c::mk_(rt::Value* a, int n) {
    C_S__3f_c* o = alloc_();
    o->C_S__3f_c::ctor_();
    return rt::VO(o);
}
bool C_S__3f_c::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f_c::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f_c::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f_c::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f_c::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__3f_c::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f_c__id)); return true;
    case NM_ids: out = g::SV.C_S__3f_c__ids; return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__3f_c::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f_c__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f_c__ids = v; return true;
    default: return false;
    }
}
bool C_S__3f_c::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__3f_g::ctor_() {
    RT_FN("S__3f_g.S__3f_g");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v677 = 361.0; this->f_S_6_21_Z = rt::touint_d(_v677); _v677; });
    ({ rt::Value _v678 = rt::trv(rt::VS(g::LS[439])); this->f_S_1i = rt::slot_string(_v678); _v678; });
    ({ rt::Value _v679 = rt::VS(g::LS[440]); this->f_S__5e__21__23_ = rt::slot_string(_v679); _v679; });
    ({ rt::Value _v680 = rt::trv(rt::VS(g::LS[441])); this->f_S_7_23_ = rt::slot_string(_v680); _v680; });
    ({ double _v681 = 2.5e+152; this->f_S__3e__3d_ = _v681; _v681; });
    ({ bool _v682 = true; this->f_S__25__21__3e_ = _v682; _v682; });
    ({ bool _v683 = true; this->f_S__3f_T = _v683; _v683; });
    ({ double _v684 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v684); _v684; });
}
bool C_S__3f_g::g_S__26_8() {
    RT_FN("S__3f_g.S__26_8_get");
    return false;
    return false;
}
bool C_S__3f_g::g_S__2d_6() {
    bool l_A__loc1_ = false;
    RT_FN("S__3f_g.S__2d_6_get");
    (l_A__loc1_ = ({ bool _t694 = (({ bool _t693 = ({ bool _t689 = ({ bool _t688 = ({ bool _t687 = ({ bool _t686 = ({ bool _t685 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0); _t685 ? _t685 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 1.0)); }); _t686 ? _t686 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 2.0)); }); _t687 ? _t687 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 3.0)); }); _t688 ? _t688 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0)); }); _t689 ? _t689 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 5.0)); }); _t693 ? _t693 : (bool)(({ bool _t692 = (({ bool _t691 = ({ bool _t690 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0); _t690 ? _t690 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 7.0)); }); _t691 ? _t691 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0)); })); _t692 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__40_S__id)) : _t692; })); })); _t694 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t694; }));
    return ({ bool _t695 = l_A__loc1_; _t695 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__40__21_K__id)) : _t695; });
    return false;
}
C_S__3f_g* C_S__3f_g::alloc_() {
    C_S__3f_g* o = rt::make<C_S__3f_g>();
    return o;
}
rt::Value C_S__3f_g::mk_(rt::Value* a, int n) {
    C_S__3f_g* o = alloc_();
    o->C_S__3f_g::ctor_();
    return rt::VO(o);
}
bool C_S__3f_g::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__3f_g::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__26_8: return false;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__3f_g::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__3f_g::dmeth(int id) {
    switch (id) {
    case NM_S__26_8: return false;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__3f_g::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__3f_g::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__3f_g__id)); return true;
    case NM_ids: out = g::SV.C_S__3f_g__ids; return true;
    default: return false;
    }
}
bool C_S__3f_g::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__3f_g__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__3f_g__ids = v; return true;
    default: return false;
    }
}
bool C_S__3f_g::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__25_P::ctor_() {
    RT_FN("S__25_P.S__25_P");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v696 = 330.0; this->f_S_6_21_Z = rt::touint_d(_v696); _v696; });
    ({ rt::Value _v697 = rt::trv(rt::VS(g::LS[443])); this->f_S_1i = rt::slot_string(_v697); _v697; });
    ({ rt::Value _v698 = rt::VS(g::LS[444]); this->f_S__5e__21__23_ = rt::slot_string(_v698); _v698; });
    ({ double _v699 = 3e+31; this->f_S__3e__3d_ = _v699; _v699; });
    ({ double _v700 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v700); _v700; });
}
rt::Value C_S__25_P::m_S__40__22_() {
    RT_FN("S__25_P.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[445]), C_S__26_c::sm_S_8_21_Z(C_S__25_P::sm_S__26_s(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__25_P::g_S__2d_6() {
    RT_FN("S__25_P.S__2d_6_get");
    return ({ bool _t702 = ({ bool _t701 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0); _t701 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__20__21_c__id)) : _t701; }); _t702 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t702; });
    return false;
}
double C_S__25_P::sm_S__26_s() {
    RT_FN("S__25_P.S__26_s");
    return 50.0;
    return 0.0;
}
C_S__25_P* C_S__25_P::alloc_() {
    C_S__25_P* o = rt::make<C_S__25_P>();
    return o;
}
rt::Value C_S__25_P::mk_(rt::Value* a, int n) {
    C_S__25_P* o = alloc_();
    o->C_S__25_P::ctor_();
    return rt::VO(o);
}
bool C_S__25_P::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25_P::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25_P::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25_P::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25_P::smeth_(int id) {
    switch (id) {
    case NM_S__26_s: return true;
    default: return false;
    }
}
bool C_S__25_P::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25_P__id)); return true;
    case NM_ids: out = g::SV.C_S__25_P__ids; return true;
    case NM_S__26_s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25_P::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25_P__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__25_P__ids = v; return true;
    default: return false;
    }
}
bool C_S__25_P::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_s: out = rt::V(sm_S__26_s()); return true;
    default: return false;
    }
}
void C_S__25_s::ctor_() {
    RT_FN("S__25_s.S__25_s");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v703 = 370.0; this->f_S_6_21_Z = rt::touint_d(_v703); _v703; });
    ({ rt::Value _v704 = rt::trv(rt::VS(g::LS[447])); this->f_S_1i = rt::slot_string(_v704); _v704; });
    ({ rt::Value _v705 = rt::VS(g::LS[448]); this->f_S__5e__21__23_ = rt::slot_string(_v705); _v705; });
    ({ rt::Value _v706 = rt::VS(g::LS[375]); this->f_S__3f__21__3d_ = rt::slot_string(_v706); _v706; });
    ({ double _v707 = 1000000.0; this->f_S__3e__3d_ = _v707; _v707; });
    ({ double _v708 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v708); _v708; });
    ({ double _v709 = 4.0; this->f_S__2d__21__5e_ = rt::toint_d(_v709); _v709; });
    ({ double _v710 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v710); _v710; });
}
rt::Value C_S__25_s::m_S__40__22_() {
    RT_FN("S__25_s.S__40__22_");
    return rt::slot_string(rt::add(rt::add(rt::trv(rt::VS(g::LS[449]), C_S__26_c::sm_S_8_21_Z(C_S__25_s::sm_S_2_22_I(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())), rt::VS(g::LS[8])), rt::trv(rt::VS(g::LS[450]), C_S__26_c::sm_S_8_21_Z(C_S__25_s::sm_S__40__21__5f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))));
    return rt::NUL;
}
rt::Value C_S__25_s::m_S_6r() {
    RT_FN("S__25_s.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o711 = C_S_8G::sm_S__21__21_H(g::SV.C_S__20__21_Z__id); C_S__60_6* _p712 = rt::as_ptr<C_S__60_6>(_o711); _p712 ? _p712->m_S__3d__21__26_() : rt::dcallv(_o711, NM_S__3d__21__26_); }));
    return rt::NUL;
}
bool C_S__25_s::g_S__2d_6() {
    RT_FN("S__25_s.S__2d_6_get");
    return ({ bool _t716 = (({ bool _t715 = C_S__26_c::sm_S_9_22_0(); _t715 ? _t715 : (bool)(({ rt::Value _o713 = C_S_8G::sm_S__23_N(g::SV.C_S__20__21_5__id); C_S_84* _p714 = rt::as_ptr<C_S_84>(_o713); _p714 ? _p714->g_S__2d_6() : rt::T(rt::dget(_o713, NM_S__2d_6)); })); })); _t716 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__23__21_b__id)) : _t716; });
    return false;
}
double C_S__25_s::sm_S_2_22_I() {
    RT_FN("S__25_s.S_2_22_I");
    return (0.4 * rt::m_pow(C_S__26_c::sm_S_7i(g::SV.C_S__20__21_5__id, false, false, C_S__26_c::dsm_S_7i_3()), 0.6));
    return 0.0;
}
double C_S__25_s::sm_S__40__21__5f_() {
    RT_FN("S__25_s.S__40__21__5f_");
    return 50.0;
    return 0.0;
}
C_S__25_s* C_S__25_s::alloc_() {
    C_S__25_s* o = rt::make<C_S__25_s>();
    return o;
}
rt::Value C_S__25_s::mk_(rt::Value* a, int n) {
    C_S__25_s* o = alloc_();
    o->C_S__25_s::ctor_();
    return rt::VO(o);
}
bool C_S__25_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__25_s::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__25_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__25_s::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__25_s::smeth_(int id) {
    switch (id) {
    case NM_S_2_22_I: return true;
    case NM_S__40__21__5f_: return true;
    default: return false;
    }
}
bool C_S__25_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__25_s__id)); return true;
    case NM_ids: out = g::SV.C_S__25_s__ids; return true;
    case NM_S_2_22_I: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__40__21__5f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__25_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__25_s__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__25_s__ids = v; return true;
    default: return false;
    }
}
bool C_S__25_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_2_22_I: out = rt::V(sm_S_2_22_I()); return true;
    case NM_S__40__21__5f_: out = rt::V(sm_S__40__21__5f_()); return true;
    default: return false;
    }
}
void C_S__26__21_6::ctor_() {
    RT_FN("S__26__21_6.S__26__21_6");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v717 = 474.0; this->f_S_6_21_Z = rt::touint_d(_v717); _v717; });
    ({ rt::Value _v718 = rt::trv(rt::VS(g::LS[452])); this->f_S_1i = rt::slot_string(_v718); _v718; });
    ({ rt::Value _v719 = rt::VS(g::LS[453]); this->f_S__5e__21__23_ = rt::slot_string(_v719); _v719; });
    ({ double _v720 = 1e+93; this->f_S__3e__3d_ = _v720; _v720; });
    ({ double _v721 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v721); _v721; });
}
rt::Value C_S__26__21_6::m_S__40__22_() {
    RT_FN("S__26__21_6.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[454]), C_S__26_c::sm_S_8_21_Z(1.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(C_S__26__21_6::sm_S__27__21_b(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__26__21_6::g_S__2d_6() {
    RT_FN("S__26__21_6.S__2d_6_get");
    return ({ bool _t722 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0); _t722 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3e_s__id)) : _t722; });
    return false;
}
double C_S__26__21_6::sm_S__27__21_b() {
    RT_FN("S__26__21_6.S__27__21_b");
    return ((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 11.0) ? (1.0 * ((double)(C_S__23__21__21_::sg_S_8_21_H()))) : 0.0);
    return 0.0;
}
C_S__26__21_6* C_S__26__21_6::alloc_() {
    C_S__26__21_6* o = rt::make<C_S__26__21_6>();
    return o;
}
rt::Value C_S__26__21_6::mk_(rt::Value* a, int n) {
    C_S__26__21_6* o = alloc_();
    o->C_S__26__21_6::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_6::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__21_6::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__21_6::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__21_6::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__21_6::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__26__21_6::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_6__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__26__21_6__S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__21_6::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_6__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__26__21_6__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__26__21_6::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__26__21_V::ctor_() {
    RT_FN("S__26__21_V.S__26__21_V");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v723 = 577.0; this->f_S_6_21_Z = rt::touint_d(_v723); _v723; });
    ({ rt::Value _v724 = rt::trv(rt::VS(g::LS[455])); this->f_S_1i = rt::slot_string(_v724); _v724; });
    ({ rt::Value _v725 = rt::VS(g::LS[456]); this->f_S__5e__21__23_ = rt::slot_string(_v725); _v725; });
    ({ double _v726 = 3.8e+201; this->f_S__3e__3d_ = _v726; _v726; });
    ({ double _v727 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v727); _v727; });
}
rt::Value C_S__26__21_V::m_S__40__22_() {
    RT_FN("S__26__21_V.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[457]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21__60___id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3()), C_S__26_c::sm_S_8_21_Z(5.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__26__21_V::g_S__2d_6() {
    RT_FN("S__26__21_V.S__2d_6_get");
    return ({ bool _t728 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 3.0); _t728 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3d__40___id)) : _t728; });
    return false;
}
C_S__26__21_V* C_S__26__21_V::alloc_() {
    C_S__26__21_V* o = rt::make<C_S__26__21_V>();
    return o;
}
rt::Value C_S__26__21_V::mk_(rt::Value* a, int n) {
    C_S__26__21_V* o = alloc_();
    o->C_S__26__21_V::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_V::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__21_V::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__21_V::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__21_V::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__21_V::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__26__21_V::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_V__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__26__21_V__S_1_21_S); return true;
    default: return false;
    }
}
bool C_S__26__21_V::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_V__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__26__21_V__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__26__21_V::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__26__21_W::ctor_() {
    RT_FN("S__26__21_W.S__26__21_W");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v729 = 340.0; this->f_S_6_21_Z = rt::touint_d(_v729); _v729; });
    ({ rt::Value _v730 = rt::trv(rt::VS(g::LS[458])); this->f_S_1i = rt::slot_string(_v730); _v730; });
    ({ rt::Value _v731 = rt::VS(g::LS[459]); this->f_S__5e__21__23_ = rt::slot_string(_v731); _v731; });
    ({ double _v732 = 1.0; this->f_S__3e__3d_ = _v732; _v732; });
    ({ double _v733 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v733); _v733; });
}
rt::Value C_S__26__21_W::m_S__40__22_() {
    RT_FN("S__26__21_W.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[460]), C_S__26_c::sm_S_8_21_Z(C_S__26__21_W::sm_S__2c_J(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__26__21_W::g_S__2d_6() {
    RT_FN("S__26__21_W.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__3e__21_F__id);
    return false;
}
double C_S__26__21_W::sm_S__2c_J() {
    RT_FN("S__26__21_W.S__2c_J");
    return 2.0;
    return 0.0;
}
C_S__26__21_W* C_S__26__21_W::alloc_() {
    C_S__26__21_W* o = rt::make<C_S__26__21_W>();
    return o;
}
rt::Value C_S__26__21_W::mk_(rt::Value* a, int n) {
    C_S__26__21_W* o = alloc_();
    o->C_S__26__21_W::ctor_();
    return rt::VO(o);
}
bool C_S__26__21_W::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__21_W::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__21_W::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__21_W::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__21_W::smeth_(int id) {
    switch (id) {
    case NM_S__2c_J: return true;
    default: return false;
    }
}
bool C_S__26__21_W::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__21_W__id)); return true;
    case NM_ids: out = g::SV.C_S__26__21_W__ids; return true;
    case NM_S__2c_J: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__21_W::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__21_W__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__26__21_W__ids = v; return true;
    default: return false;
    }
}
bool C_S__26__21_W::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c_J: out = rt::V(sm_S__2c_J()); return true;
    default: return false;
    }
}
void C_S__26__22_I::ctor_() {
    RT_FN("S__26__22_I.S__26__22_I");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v734 = 1201.0; this->f_S_6_21_Z = rt::touint_d(_v734); _v734; });
    ({ rt::Value _v735 = rt::trv(rt::VS(g::LS[462])); this->f_S_1i = rt::slot_string(_v735); _v735; });
    ({ rt::Value _v736 = rt::VS(g::LS[463]); this->f_S__5e__21__23_ = rt::slot_string(_v736); _v736; });
    ({ double _v737 = 0.0; this->f_S__3e__3d_ = _v737; _v737; });
    ({ double _v738 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v738); _v738; });
}
rt::Value C_S__26__22_I::m_S__40__22_() {
    RT_FN("S__26__22_I.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[464]), C_S__26_c::sm_S_8_21_Z(C_S__26__22_I::sm_S__25__22_I(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__26__22_I::g_S__2d_6() {
    RT_FN("S__26__22_I.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__3f__22__2c___id);
    return false;
}
double C_S__26__22_I::sm_S__25__22_I() {
    RT_FN("S__26__22_I.S__25__22_I");
    return rt::m_pow(C_S__26_c::sm_S_0_23_(C_S__26_c::dsm_S_0_23__0(), C_S__26_c::dsm_S_0_23__1()), 0.8);
    return 0.0;
}
C_S__26__22_I* C_S__26__22_I::alloc_() {
    C_S__26__22_I* o = rt::make<C_S__26__22_I>();
    return o;
}
rt::Value C_S__26__22_I::mk_(rt::Value* a, int n) {
    C_S__26__22_I* o = alloc_();
    o->C_S__26__22_I::ctor_();
    return rt::VO(o);
}
bool C_S__26__22_I::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__26__22_I::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__26__22_I::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__26__22_I::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__26__22_I::smeth_(int id) {
    switch (id) {
    case NM_S__25__22_I: return true;
    default: return false;
    }
}
bool C_S__26__22_I::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__26__22_I__id)); return true;
    case NM_S__25__22_I: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__26__22_I::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__26__22_I__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__26__22_I::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__25__22_I: out = rt::V(sm_S__25__22_I()); return true;
    default: return false;
    }
}
void C_S__27__21_J::ctor_() {
    RT_FN("S__27__21_J.S__27__21_J");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v739 = 645.0; this->f_S_6_21_Z = rt::touint_d(_v739); _v739; });
    ({ rt::Value _v740 = rt::trv(rt::VS(g::LS[465])); this->f_S_1i = rt::slot_string(_v740); _v740; });
    ({ rt::Value _v741 = rt::VS(g::LS[466]); this->f_S__5e__21__23_ = rt::slot_string(_v741); _v741; });
    ({ double _v742 = 1e+75; this->f_S__3c_R = _v742; _v742; });
    ({ double _v743 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v743); _v743; });
}
rt::Value C_S__27__21_J::m_S__40__22_() {
    RT_FN("S__27__21_J.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[467]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__27__21_J::g_S__2d_6() {
    RT_FN("S__27__21_J.S__2d_6_get");
    return ({ bool _t744 = C_S_8G::sm_S__3c_P(g::SV.C_S_4_21_4__id); _t744 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 12.0)) : _t744; });
    return false;
}
double C_S__27__21_J::sm_S__27__21_b() {
    RT_FN("S__27__21_J.S__27__21_b");
    return ((((double)(g::SV.C_S_8G__S__23_3)) == 12.0) ? 100.0 : 0.0);
    return 0.0;
}
C_S__27__21_J* C_S__27__21_J::alloc_() {
    C_S__27__21_J* o = rt::make<C_S__27__21_J>();
    return o;
}
rt::Value C_S__27__21_J::mk_(rt::Value* a, int n) {
    C_S__27__21_J* o = alloc_();
    o->C_S__27__21_J::ctor_();
    return rt::VO(o);
}
bool C_S__27__21_J::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27__21_J::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27__21_J::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27__21_J::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27__21_J::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__27__21_J::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27__21_J__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__27__21_J__S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27__21_J::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27__21_J__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__27__21_J__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__27__21_J::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__27_2::ctor_() {
    RT_FN("S__27_2.S__27_2");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v745 = 324.0; this->f_S_6_21_Z = rt::touint_d(_v745); _v745; });
    ({ rt::Value _v746 = rt::trv(rt::VS(g::LS[468])); this->f_S_1i = rt::slot_string(_v746); _v746; });
    ({ rt::Value _v747 = rt::VS(g::LS[469]); this->f_S__5e__21__23_ = rt::slot_string(_v747); _v747; });
    ({ rt::Value _v748 = rt::trv(rt::VS(g::LS[470])); this->f_S_7_23_ = rt::slot_string(_v748); _v748; });
    ({ double _v749 = 100.0; this->f_S__3e__3d_ = _v749; _v749; });
    ({ double _v750 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v750); _v750; });
}
bool C_S__27_2::g_S__2d_6() {
    RT_FN("S__27_2.S__2d_6_get");
    return C_S_8G::sm_S__2c__23_(rt::trv(rt::VS(g::LS[468])));
    return false;
}
double C_S__27_2::sm_S_5_21_B() {
    RT_FN("S__27_2.S_5_21_B");
    return 1.0;
    return 0.0;
}
C_S__27_2* C_S__27_2::alloc_() {
    C_S__27_2* o = rt::make<C_S__27_2>();
    return o;
}
rt::Value C_S__27_2::mk_(rt::Value* a, int n) {
    C_S__27_2* o = alloc_();
    o->C_S__27_2::ctor_();
    return rt::VO(o);
}
bool C_S__27_2::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__27_2::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__27_2::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__27_2::dmeth(int id) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__27_2::smeth_(int id) {
    switch (id) {
    case NM_S_5_21_B: return true;
    default: return false;
    }
}
bool C_S__27_2::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__27_2__id)); return true;
    case NM_ids: out = g::SV.C_S__27_2__ids; return true;
    case NM_S_5_21_B: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__27_2::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__27_2__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__27_2__ids = v; return true;
    default: return false;
    }
}
bool C_S__27_2::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_5_21_B: out = rt::V(sm_S_5_21_B()); return true;
    default: return false;
    }
}
void C_S__2b__21_7::ctor_() {
    RT_FN("S__2b__21_7.S__2b__21_7");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v751 = 342.0; this->f_S_6_21_Z = rt::touint_d(_v751); _v751; });
    ({ rt::Value _v752 = rt::trv(rt::VS(g::LS[472])); this->f_S_1i = rt::slot_string(_v752); _v752; });
    ({ rt::Value _v753 = rt::VS(g::LS[473]); this->f_S__5e__21__23_ = rt::slot_string(_v753); _v753; });
    ({ rt::Value _v754 = rt::VS(g::LS[375]); this->f_S__3f__21__3d_ = rt::slot_string(_v754); _v754; });
    ({ double _v755 = 1e+35; this->f_S__3e__3d_ = _v755; _v755; });
    ({ double _v756 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v756); _v756; });
    ({ double _v757 = 7.0; this->f_S__2d__21__5e_ = rt::toint_d(_v757); _v757; });
    ({ double _v758 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v758); _v758; });
}
rt::Value C_S__2b__21_7::m_S__40__22_() {
    RT_FN("S__2b__21_7.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[474]), C_S__26_c::sm_S_8_21_Z(C_S__2b__21_7::sm_S_3_21_Z(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S_8_21_Z(rt::m_abs(C_S__2b__21_7::sm_S__25_4()), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2b__21_7::m_S_6r() {
    RT_FN("S__2b__21_7.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o759 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3d_L__id); C_S__60_6* _p760 = rt::as_ptr<C_S__60_6>(_o759); _p760 ? _p760->m_S__3d__21__26_() : rt::dcallv(_o759, NM_S__3d__21__26_); }));
    return rt::NUL;
}
bool C_S__2b__21_7::g_S__2d_6() {
    RT_FN("S__2b__21_7.S__2d_6_get");
    return ({ bool _t763 = ({ rt::Value _o761 = C_S_8G::sm_S__23_N(g::SV.C_S__21_C__id); C_S_84* _p762 = rt::as_ptr<C_S_84>(_o761); _p762 ? _p762->g_S__2d_6() : rt::T(rt::dget(_o761, NM_S__2d_6)); }); _t763 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__60_h__id)) : _t763; });
    return false;
}
double C_S__2b__21_7::sm_S_3_21_Z() {
    RT_FN("S__2b__21_7.S_3_21_Z");
    return 4.0;
    return 0.0;
}
double C_S__2b__21_7::sm_S__25_4() {
    RT_FN("S__2b__21_7.S__25_4");
    return (-200.0);
    return 0.0;
}
C_S__2b__21_7* C_S__2b__21_7::alloc_() {
    C_S__2b__21_7* o = rt::make<C_S__2b__21_7>();
    return o;
}
rt::Value C_S__2b__21_7::mk_(rt::Value* a, int n) {
    C_S__2b__21_7* o = alloc_();
    o->C_S__2b__21_7::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_7::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b__21_7::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b__21_7::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b__21_7::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b__21_7::smeth_(int id) {
    switch (id) {
    case NM_S_3_21_Z: return true;
    case NM_S__25_4: return true;
    default: return false;
    }
}
bool C_S__2b__21_7::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_7__id)); return true;
    case NM_ids: out = g::SV.C_S__2b__21_7__ids; return true;
    case NM_S_3_21_Z: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__25_4: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__21_7::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_7__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2b__21_7__ids = v; return true;
    default: return false;
    }
}
bool C_S__2b__21_7::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_3_21_Z: out = rt::V(sm_S_3_21_Z()); return true;
    case NM_S__25_4: out = rt::V(sm_S__25_4()); return true;
    default: return false;
    }
}
void C_S__2b__21_C::ctor_() {
    RT_FN("S__2b__21_C.S__2b__21_C");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v764 = 344.0; this->f_S_6_21_Z = rt::touint_d(_v764); _v764; });
    ({ rt::Value _v765 = rt::trv(rt::VS(g::LS[476])); this->f_S_1i = rt::slot_string(_v765); _v765; });
    ({ rt::Value _v766 = rt::VS(g::LS[477]); this->f_S__5e__21__23_ = rt::slot_string(_v766); _v766; });
    ({ rt::Value _v767 = rt::VS(g::LS[375]); this->f_S__3f__21__3d_ = rt::slot_string(_v767); _v767; });
    ({ double _v768 = 1000000.0; this->f_S__3e__3d_ = _v768; _v768; });
    ({ double _v769 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v769); _v769; });
    ({ double _v770 = 5.0; this->f_S__2d__21__5e_ = rt::toint_d(_v770); _v770; });
    ({ double _v771 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v771); _v771; });
}
rt::Value C_S__2b__21_C::m_S__40__22_() {
    RT_FN("S__2b__21_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[478]), C_S__26_c::sm_S__3e__21__26_(g::SV.C_S__3e__21_O__id, true, C_S__26_c::dsm_S__3e__21__26__2(), C_S__26_c::dsm_S__3e__21__26__3())));
    return rt::NUL;
}
rt::Value C_S__2b__21_C::m_S_6r() {
    RT_FN("S__2b__21_C.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o772 = C_S_8G::sm_S__21__21_H(g::SV.C_S__40_4__id); C_S__60_6* _p773 = rt::as_ptr<C_S__60_6>(_o772); _p773 ? _p773->m_S__3d__21__26_() : rt::dcallv(_o772, NM_S__3d__21__26_); }));
    return rt::NUL;
}
bool C_S__2b__21_C::g_S__2d_6() {
    RT_FN("S__2b__21_C.S__2d_6_get");
    return ({ bool _t777 = (({ bool _t776 = C_S__26_c::sm_S_9_22_0(); _t776 ? _t776 : (bool)(({ rt::Value _o774 = C_S_8G::sm_S__23_N(g::SV.C_S_8_3e___id); C_S_84* _p775 = rt::as_ptr<C_S_84>(_o774); _p775 ? _p775->g_S__2d_6() : rt::T(rt::dget(_o774, NM_S__2d_6)); })); })); _t777 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__3b__21_9__id)) : _t777; });
    return false;
}
C_S__2b__21_C* C_S__2b__21_C::alloc_() {
    C_S__2b__21_C* o = rt::make<C_S__2b__21_C>();
    return o;
}
rt::Value C_S__2b__21_C::mk_(rt::Value* a, int n) {
    C_S__2b__21_C* o = alloc_();
    o->C_S__2b__21_C::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b__21_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b__21_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b__21_C::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b__21_C::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2b__21_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_C__id)); return true;
    case NM_ids: out = g::SV.C_S__2b__21_C__ids; return true;
    default: return false;
    }
}
bool C_S__2b__21_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_C__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2b__21_C__ids = v; return true;
    default: return false;
    }
}
bool C_S__2b__21_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2b__21_X::ctor_() {
    RT_FN("S__2b__21_X.S__2b__21_X");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v778 = 355.0; this->f_S_6_21_Z = rt::touint_d(_v778); _v778; });
    ({ rt::Value _v779 = rt::trv(rt::VS(g::LS[480])); this->f_S_1i = rt::slot_string(_v779); _v779; });
    ({ rt::Value _v780 = rt::VS(g::LS[481]); this->f_S__5e__21__23_ = rt::slot_string(_v780); _v780; });
    ({ rt::Value _v781 = rt::VS(g::LS[375]); this->f_S__3f__21__3d_ = rt::slot_string(_v781); _v781; });
    ({ double _v782 = 1e+53; this->f_S__3e__3d_ = _v782; _v782; });
    ({ double _v783 = 2.0; this->f_S__2c__21_Y = rt::toint_d(_v783); _v783; });
    ({ double _v784 = 10.0; this->f_S__2d__21__5e_ = rt::toint_d(_v784); _v784; });
    ({ double _v785 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v785); _v785; });
}
rt::Value C_S__2b__21_X::m_S__40__22_() {
    RT_FN("S__2b__21_X.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[482]), C_S__26_c::sm_S_8_21_Z(C_S__2b__21_X::sm_S__2c__21_G(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2b__21_X::m_S_6r() {
    RT_FN("S__2b__21_X.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o786 = C_S_8G::sm_S__21__21_H(g::SV.C_S__20_V__id); C_S__60_6* _p787 = rt::as_ptr<C_S__60_6>(_o786); _p787 ? _p787->m_S__3d__21__26_() : rt::dcallv(_o786, NM_S__3d__21__26_); }));
    return rt::NUL;
}
bool C_S__2b__21_X::g_S__2d_6() {
    RT_FN("S__2b__21_X.S__2d_6_get");
    return ({ bool _t790 = C_S_8G::sm_S__3c_P(g::SV.C_S_8Y__id); _t790 ? (bool)(({ rt::Value _o788 = C_S_8G::sm_S__23_N(g::SV.C_S__40_W__id); C_S_84* _p789 = rt::as_ptr<C_S_84>(_o788); _p789 ? _p789->g_S__2d_6() : rt::T(rt::dget(_o788, NM_S__2d_6)); })) : _t790; });
    return false;
}
double C_S__2b__21_X::sm_S__2c__21_G() {
    RT_FN("S__2b__21_X.S__2c__21_G");
    return (2.5 * rt::m_pow(rt::m_max2(C_S__26_c::sm_S__22__21_B(rt::toint_d(1.0), false, true, C_S__26_c::dsm_S__22__21_B_3(), C_S__26_c::dsm_S__22__21_B_4()), rt::tonum(rt::arr_at(g::SV.C_S_8G__S__3d_y, 39.0))), 0.5));
    return 0.0;
}
C_S__2b__21_X* C_S__2b__21_X::alloc_() {
    C_S__2b__21_X* o = rt::make<C_S__2b__21_X>();
    return o;
}
rt::Value C_S__2b__21_X::mk_(rt::Value* a, int n) {
    C_S__2b__21_X* o = alloc_();
    o->C_S__2b__21_X::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_X::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b__21_X::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b__21_X::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b__21_X::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b__21_X::smeth_(int id) {
    switch (id) {
    case NM_S__2c__21_G: return true;
    default: return false;
    }
}
bool C_S__2b__21_X::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_X__id)); return true;
    case NM_ids: out = g::SV.C_S__2b__21_X__ids; return true;
    case NM_S__2c__21_G: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__21_X::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_X__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2b__21_X__ids = v; return true;
    default: return false;
    }
}
bool C_S__2b__21_X::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__2c__21_G: out = rt::V(sm_S__2c__21_G()); return true;
    default: return false;
    }
}
void C_S__2b__21_y::ctor_() {
    RT_FN("S__2b__21_y.S__2b__21_y");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v791 = 931.0; this->f_S_6_21_Z = rt::touint_d(_v791); _v791; });
    ({ rt::Value _v792 = rt::trv(rt::VS(g::LS[484])); this->f_S_1i = rt::slot_string(_v792); _v792; });
    ({ rt::Value _v793 = rt::VS(g::LS[485]); this->f_S__5e__21__23_ = rt::slot_string(_v793); _v793; });
    ({ double _v794 = 1e+148; this->f_S__23__21_m = _v794; _v794; });
    ({ double _v795 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v795); _v795; });
}
rt::Value C_S__2b__21_y::m_S__40__22_() {
    RT_FN("S__2b__21_y.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[486]), C_S__26_c::sm_S_6_21_T(C_S__2b__21_y::sm_S__27__21_b(), 3.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__2b__21_y::g_S__2d_6() {
    RT_FN("S__2b__21_y.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__3d__21_y__id);
    return false;
}
double C_S__2b__21_y::sm_S__27__21_b() {
    RT_FN("S__2b__21_y.S__27__21_b");
    return (1.5 * rt::m_pow(C_S__26_c::sm_S_6_21_x(), 0.6));
    return 0.0;
}
C_S__2b__21_y* C_S__2b__21_y::alloc_() {
    C_S__2b__21_y* o = rt::make<C_S__2b__21_y>();
    return o;
}
rt::Value C_S__2b__21_y::mk_(rt::Value* a, int n) {
    C_S__2b__21_y* o = alloc_();
    o->C_S__2b__21_y::ctor_();
    return rt::VO(o);
}
bool C_S__2b__21_y::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2b__21_y::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2b__21_y::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2b__21_y::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2b__21_y::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__2b__21_y::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2b__21_y__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2b__21_y::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2b__21_y__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2b__21_y::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__2c__21_0::ctor_() {
    RT_FN("S__2c__21_0.S__2c__21_0");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v796 = 584.0; this->f_S_6_21_Z = rt::touint_d(_v796); _v796; });
    ({ rt::Value _v797 = rt::trv(rt::VS(g::LS[487])); this->f_S_1i = rt::slot_string(_v797); _v797; });
    ({ rt::Value _v798 = rt::VS(g::LS[488]); this->f_S__5e__21__23_ = rt::slot_string(_v798); _v798; });
    ({ double _v799 = 5e+51; this->f_S__3c_R = _v799; _v799; });
    ({ double _v800 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v800); _v800; });
}
rt::Value C_S__2c__21_0::m_S__40__22_() {
    RT_FN("S__2c__21_0.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[489]), C_S__26_c::sm_S_8_21_Z(C_S__2c__21_0::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2c__21_0::g_S__2d_6() {
    RT_FN("S__2c__21_0.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__3b__21__3c___id);
    return false;
}
double C_S__2c__21_0::sm_S__22__21__26_() {
    RT_FN("S__2c__21_0.S__22__21__26_");
    return 10.0;
    return 0.0;
}
C_S__2c__21_0* C_S__2c__21_0::alloc_() {
    C_S__2c__21_0* o = rt::make<C_S__2c__21_0>();
    return o;
}
rt::Value C_S__2c__21_0::mk_(rt::Value* a, int n) {
    C_S__2c__21_0* o = alloc_();
    o->C_S__2c__21_0::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21_0::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__21_0::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__21_0::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__21_0::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__21_0::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__2c__21_0::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21_0__id)); return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__21_0::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21_0__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__21_0::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__2c__21__3d_::ctor_() {
    RT_FN("S__2c__21__3d_.S__2c__21__3d_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v801 = 585.0; this->f_S_6_21_Z = rt::touint_d(_v801); _v801; });
    ({ rt::Value _v802 = rt::trv(rt::VS(g::LS[490])); this->f_S_1i = rt::slot_string(_v802); _v802; });
    ({ rt::Value _v803 = rt::VS(g::LS[491]); this->f_S__5e__21__23_ = rt::slot_string(_v803); _v803; });
    ({ double _v804 = 6.4e+65; this->f_S__3c_R = _v804; _v804; });
    ({ double _v805 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v805); _v805; });
}
rt::Value C_S__2c__21__3d_::m_S__40__22_() {
    RT_FN("S__2c__21__3d_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[492]), C_S__26_c::sm_S_8_21_Z(C_S__2c__21__3d_::sm_S__3f__21__3c_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2c__21__3d_::g_S__2d_6() {
    RT_FN("S__2c__21__3d_.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__2b__3b___id);
    return false;
}
double C_S__2c__21__3d_::sm_S__3f__21__3c_() {
    RT_FN("S__2c__21__3d_.S__3f__21__3c_");
    return 25.0;
    return 0.0;
}
C_S__2c__21__3d_* C_S__2c__21__3d_::alloc_() {
    C_S__2c__21__3d_* o = rt::make<C_S__2c__21__3d_>();
    return o;
}
rt::Value C_S__2c__21__3d_::mk_(rt::Value* a, int n) {
    C_S__2c__21__3d_* o = alloc_();
    o->C_S__2c__21__3d_::ctor_();
    return rt::VO(o);
}
bool C_S__2c__21__3d_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c__21__3d_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c__21__3d_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c__21__3d_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c__21__3d_::smeth_(int id) {
    switch (id) {
    case NM_S__3f__21__3c_: return true;
    default: return false;
    }
}
bool C_S__2c__21__3d_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c__21__3d___id)); return true;
    case NM_S__3f__21__3c_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c__21__3d_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c__21__3d___id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c__21__3d_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__3f__21__3c_: out = rt::V(sm_S__3f__21__3c_()); return true;
    default: return false;
    }
}
void C_S__2c_4::ctor_() {
    RT_FN("S__2c_4.S__2c_4");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v806 = 352.0; this->f_S_6_21_Z = rt::touint_d(_v806); _v806; });
    ({ rt::Value _v807 = rt::trv(rt::VS(g::LS[493])); this->f_S_1i = rt::slot_string(_v807); _v807; });
    ({ rt::Value _v808 = rt::VS(g::LS[494]); this->f_S__5e__21__23_ = rt::slot_string(_v808); _v808; });
    ({ rt::Value _v809 = rt::VS(g::LS[375]); this->f_S__3f__21__3d_ = rt::slot_string(_v809); _v809; });
    ({ double _v810 = 1e+53; this->f_S__3e__3d_ = _v810; _v810; });
    ({ double _v811 = 1.0; this->f_S__2c__21_Y = rt::toint_d(_v811); _v811; });
    ({ double _v812 = 9.0; this->f_S__2d__21__5e_ = rt::toint_d(_v812); _v812; });
    ({ double _v813 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v813); _v813; });
}
rt::Value C_S__2c_4::m_S__40__22_() {
    RT_FN("S__2c_4.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[495]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S__2c_4::m_S_6r() {
    RT_FN("S__2c_4.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o814 = C_S_8G::sm_S__21__21_H(g::SV.C_S__3e__2c___id); C_S__60_6* _p815 = rt::as_ptr<C_S__60_6>(_o814); _p815 ? _p815->m_S__3d__21__26_() : rt::dcallv(_o814, NM_S__3d__21__26_); }));
    return rt::NUL;
}
bool C_S__2c_4::g_S__2d_6() {
    RT_FN("S__2c_4.S__2d_6_get");
    return ({ bool _t818 = C_S_8G::sm_S__3c_P(g::SV.C_S__21__21_4__id); _t818 ? (bool)(({ rt::Value _o816 = C_S_8G::sm_S__23_N(g::SV.C_S_7_21_K__id); C_S_84* _p817 = rt::as_ptr<C_S_84>(_o816); _p817 ? _p817->g_S__2d_6() : rt::T(rt::dget(_o816, NM_S__2d_6)); })) : _t818; });
    return false;
}
C_S__2c_4* C_S__2c_4::alloc_() {
    C_S__2c_4* o = rt::make<C_S__2c_4>();
    return o;
}
rt::Value C_S__2c_4::mk_(rt::Value* a, int n) {
    C_S__2c_4* o = alloc_();
    o->C_S__2c_4::ctor_();
    return rt::VO(o);
}
bool C_S__2c_4::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c_4::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c_4::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c_4::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c_4::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2c_4::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c_4__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__2c_4__S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__2c_4__ids; return true;
    default: return false;
    }
}
bool C_S__2c_4::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c_4__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__2c_4__S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__2c_4__ids = v; return true;
    default: return false;
    }
}
bool C_S__2c_4::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2c_m::ctor_() {
    RT_FN("S__2c_m.S__2c_m");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v819 = 510.0; this->f_S_6_21_Z = rt::touint_d(_v819); _v819; });
    ({ rt::Value _v820 = rt::trv(rt::VS(g::LS[497])); this->f_S_1i = rt::slot_string(_v820); _v820; });
    ({ rt::Value _v821 = rt::VS(g::LS[498]); this->f_S__5e__21__23_ = rt::slot_string(_v821); _v821; });
    ({ double _v822 = 1000.0; this->f_S__3e__3d_ = _v822; _v822; });
    ({ double _v823 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v823); _v823; });
}
rt::Value C_S__2c_m::m_S__40__22_() {
    RT_FN("S__2c_m.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[499]), C_S__26_c::sm_S_8_21_Z(C_S__2c_m::sm_S__40__21__3f_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2c_m::g_S__2d_6() {
    RT_FN("S__2c_m.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__2b_R__id);
    return false;
}
double C_S__2c_m::sm_S__40__21__3f_() {
    RT_FN("S__2c_m.S__40__21__3f_");
    return 1.0;
    return 0.0;
}
C_S__2c_m* C_S__2c_m::alloc_() {
    C_S__2c_m* o = rt::make<C_S__2c_m>();
    return o;
}
rt::Value C_S__2c_m::mk_(rt::Value* a, int n) {
    C_S__2c_m* o = alloc_();
    o->C_S__2c_m::ctor_();
    return rt::VO(o);
}
bool C_S__2c_m::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2c_m::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2c_m::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2c_m::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2c_m::smeth_(int id) {
    switch (id) {
    case NM_S__40__21__3f_: return true;
    default: return false;
    }
}
bool C_S__2c_m::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2c_m__id)); return true;
    case NM_S__40__21__3f_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2c_m::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2c_m__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2c_m::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__21__3f_: out = rt::V(sm_S__40__21__3f_()); return true;
    default: return false;
    }
}
void C_S__2d__21_9::ctor_() {
    RT_FN("S__2d__21_9.S__2d__21_9");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v824 = 644.0; this->f_S_6_21_Z = rt::touint_d(_v824); _v824; });
    ({ rt::Value _v825 = rt::trv(rt::VS(g::LS[500])); this->f_S_1i = rt::slot_string(_v825); _v825; });
    ({ rt::Value _v826 = rt::VS(g::LS[501]); this->f_S__5e__21__23_ = rt::slot_string(_v826); _v826; });
    ({ double _v827 = 1e+90; this->f_S__3c_R = _v827; _v827; });
    ({ double _v828 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v828); _v828; });
}
rt::Value C_S__2d__21_9::m_S__40__22_() {
    RT_FN("S__2d__21_9.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[502]), C_S__26_c::sm_S_6_21_T(C_S__2d__21_9::sm_S__27__21_b(), 2.0, C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__2d__21_9::g_S__2d_6() {
    RT_FN("S__2d__21_9.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__20__21_7__id);
    return false;
}
double C_S__2d__21_9::sm_S__27__21_b() {
    RT_FN("S__2d__21_9.S__27__21_b");
    return (0.3 * rt::m_pow(((double)(C_S__26_c::sm_S__26__21__3c_(C_S__26_c::dsm_S__26__21__3c__0(), C_S__26_c::dsm_S__26__21__3c__1()))), 0.7));
    return 0.0;
}
C_S__2d__21_9* C_S__2d__21_9::alloc_() {
    C_S__2d__21_9* o = rt::make<C_S__2d__21_9>();
    return o;
}
rt::Value C_S__2d__21_9::mk_(rt::Value* a, int n) {
    C_S__2d__21_9* o = alloc_();
    o->C_S__2d__21_9::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_9::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__21_9::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__21_9::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__21_9::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__21_9::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__2d__21_9::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_9__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_9::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_9__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__21_9::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S__2d__21_Q::ctor_() {
    RT_FN("S__2d__21_Q.S__2d__21_Q");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v829 = 328.0; this->f_S_6_21_Z = rt::touint_d(_v829); _v829; });
    ({ rt::Value _v830 = rt::trv(rt::VS(g::LS[503])); this->f_S_1i = rt::slot_string(_v830); _v830; });
    ({ rt::Value _v831 = rt::VS(g::LS[504]); this->f_S__5e__21__23_ = rt::slot_string(_v831); _v831; });
    ({ double _v832 = 1.0; this->f_S__3e__3d_ = _v832; _v832; });
    ({ double _v833 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v833); _v833; });
}
rt::Value C_S__2d__21_Q::m_S__40__22_() {
    RT_FN("S__2d__21_Q.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[419]), C_S__26_c::sm_S_6_21_T(C_S__2d__21_Q::sm_S_4_21__40_(), C_S__26_c::dsm_S_6_21_T_1(), C_S__26_c::dsm_S_6_21_T_2())));
    return rt::NUL;
}
bool C_S__2d__21_Q::g_S__2d_6() {
    RT_FN("S__2d__21_Q.S__2d_6_get");
    return ({ bool _t834 = C_S_8G::sm_S__3c_P(g::SV.C_S_9_21__3d___id); _t834 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) < 4.0)) : _t834; });
    return false;
}
double C_S__2d__21_Q::sm_S_4_21__40_() {
    RT_FN("S__2d__21_Q.S_4_21__40_");
    return 25.0;
    return 0.0;
}
C_S__2d__21_Q* C_S__2d__21_Q::alloc_() {
    C_S__2d__21_Q* o = rt::make<C_S__2d__21_Q>();
    return o;
}
rt::Value C_S__2d__21_Q::mk_(rt::Value* a, int n) {
    C_S__2d__21_Q* o = alloc_();
    o->C_S__2d__21_Q::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_Q::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__21_Q::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__21_Q::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__21_Q::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__21_Q::smeth_(int id) {
    switch (id) {
    case NM_S_4_21__40_: return true;
    default: return false;
    }
}
bool C_S__2d__21_Q::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_Q__id)); return true;
    case NM_ids: out = g::SV.C_S__2d__21_Q__ids; return true;
    case NM_S_4_21__40_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_Q::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_Q__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2d__21_Q__ids = v; return true;
    default: return false;
    }
}
bool C_S__2d__21_Q::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S_4_21__40_: out = rt::V(sm_S_4_21__40_()); return true;
    default: return false;
    }
}
void C_S__2d__21_s::ctor_() {
    RT_FN("S__2d__21_s.S__2d__21_s");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v835 = 841.0; this->f_S_6_21_Z = rt::touint_d(_v835); _v835; });
    ({ rt::Value _v836 = rt::trv(rt::VS(g::LS[506])); this->f_S_1i = rt::slot_string(_v836); _v836; });
    ({ rt::Value _v837 = rt::VS(g::LS[507]); this->f_S__5e__21__23_ = rt::slot_string(_v837); _v837; });
    ({ double _v838 = 1e+35; this->f_S__23__21_m = _v838; _v838; });
    ({ double _v839 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v839); _v839; });
}
rt::Value C_S__2d__21_s::m_S__40__22_() {
    rt::Value l_A__loc1_ = rt::NUL;
    RT_FN("S__2d__21_s.S__40__22_");
    (l_A__loc1_ = rt::slot_string(rt::trv(rt::VS(g::LS[508]), C_S__26_c::sm_S_6_21_T(C_S__2d__21_s::sm_S__27__21_b(), 3.0, C_S__26_c::dsm_S_6_21_T_2()))));
    if ((((double)(C_S_8G::sg_S__2c_P())) >= 4.0)) {
        (l_A__loc1_ = rt::slot_string(rt::add(l_A__loc1_, rt::add(rt::VS(g::LS[8]), rt::trv(rt::VS(g::LS[509]), C_S__26_c::sm_S_8_21_Z(C_S__2d__21_s::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()))))));
    }
    return rt::slot_string(l_A__loc1_);
    return rt::NUL;
}
bool C_S__2d__21_s::g_S__2d_6() {
    RT_FN("S__2d__21_s.S__2d_6_get");
    return ({ bool _t842 = ({ bool _t840 = C_S_8G::sm_S__3c_P(g::SV.C_S__5b__21_q__id); _t840 ? (bool)((((double)(C_S_8G::sg_S__2c_P())) >= 2.0)) : _t840; }); _t842 ? (bool)((({ bool _t841 = (((double)(g::SV.C_S_8G__S__2c__21_Y)) == 1.0); _t841 ? _t841 : (bool)((((double)(g::SV.C_S_8G__S__2c__21_Y)) == 2.0)); }))) : _t842; });
    return false;
}
double C_S__2d__21_s::sm_S__27__21_b() {
    RT_FN("S__2d__21_s.S__27__21_b");
    return (250.0 * rt::m_pow((1.0 + rt::m_max2(((double)(({ rt::Value _o843 = C_S_8G::sm_S__23_N(g::SV.C_S_7I__id); C_S_84* _p844 = rt::as_ptr<C_S_84>(_o843); _p844 ? _p844->g_S__60_r() : rt::touint(rt::dget(_o843, NM_S__60_r)); }))), ((double)(({ rt::Value _o845 = C_S_8G::sm_S__23_N(g::SV.C_S__60_T__id); C_S_84* _p846 = rt::as_ptr<C_S_84>(_o845); _p846 ? _p846->g_S__60_r() : rt::touint(rt::dget(_o845, NM_S__60_r)); }))))), 2.0));
    return 0.0;
}
double C_S__2d__21_s::sm_S__23__21_Y() {
    RT_FN("S__2d__21_s.S__23__21_Y");
    return 500.0;
    return 0.0;
}
C_S__2d__21_s* C_S__2d__21_s::alloc_() {
    C_S__2d__21_s* o = rt::make<C_S__2d__21_s>();
    return o;
}
rt::Value C_S__2d__21_s::mk_(rt::Value* a, int n) {
    C_S__2d__21_s* o = alloc_();
    o->C_S__2d__21_s::ctor_();
    return rt::VO(o);
}
bool C_S__2d__21_s::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__21_s::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__21_s::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__21_s::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__21_s::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S__2d__21_s::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__21_s__id)); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d__21_s::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__21_s__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S__2d__21_s::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void C_S__2d_C::ctor_() {
    RT_FN("S__2d_C.S__2d_C");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v847 = 368.0; this->f_S_6_21_Z = rt::touint_d(_v847); _v847; });
    ({ rt::Value _v848 = rt::trv(rt::VS(g::LS[510])); this->f_S_1i = rt::slot_string(_v848); _v848; });
    ({ rt::Value _v849 = rt::VS(g::LS[511]); this->f_S__5e__21__23_ = rt::slot_string(_v849); _v849; });
    ({ double _v850 = 4333.0; this->f_S__3e__3d_ = _v850; _v850; });
    ({ double _v851 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v851); _v851; });
}
rt::Value C_S__2d_C::m_S__40__22_() {
    RT_FN("S__2d_C.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[489]), C_S__26_c::sm_S_8_21_Z(C_S__2d_C::sm_S__22__21__26_(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2d_C::g_S__2d_6() {
    RT_FN("S__2d_C.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S_0_21_3__id);
    return false;
}
double C_S__2d_C::sm_S__22__21__26_() {
    RT_FN("S__2d_C.S__22__21__26_");
    return 5.0;
    return 0.0;
}
C_S__2d_C* C_S__2d_C::alloc_() {
    C_S__2d_C* o = rt::make<C_S__2d_C>();
    return o;
}
rt::Value C_S__2d_C::mk_(rt::Value* a, int n) {
    C_S__2d_C* o = alloc_();
    o->C_S__2d_C::ctor_();
    return rt::VO(o);
}
bool C_S__2d_C::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d_C::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d_C::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d_C::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d_C::smeth_(int id) {
    switch (id) {
    case NM_S__22__21__26_: return true;
    default: return false;
    }
}
bool C_S__2d_C::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d_C__id)); return true;
    case NM_ids: out = g::SV.C_S__2d_C__ids; return true;
    case NM_S__22__21__26_: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d_C::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d_C__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S__2d_C__ids = v; return true;
    default: return false;
    }
}
bool C_S__2d_C::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__22__21__26_: out = rt::V(sm_S__22__21__26_()); return true;
    default: return false;
    }
}
void C_S__2d__5b_::ctor_() {
    RT_FN("S__2d__5b_.S__2d__5b_");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v852 = 353.0; this->f_S_6_21_Z = rt::touint_d(_v852); _v852; });
    ({ rt::Value _v853 = rt::trv(rt::VS(g::LS[513])); this->f_S_1i = rt::slot_string(_v853); _v853; });
    ({ rt::Value _v854 = rt::VS(g::LS[514]); this->f_S__5e__21__23_ = rt::slot_string(_v854); _v854; });
    ({ double _v855 = 0.0; this->f_S__3e__3d_ = _v855; _v855; });
    ({ double _v856 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v856); _v856; });
}
rt::Value C_S__2d__5b_::m_S__40__22_() {
    RT_FN("S__2d__5b_.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[425]), C_S__26_c::sm_S_8_21_Z(25.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2()), C_S__26_c::sm_S__3d__21_n()));
    return rt::NUL;
}
rt::Value C_S__2d__5b_::m_S_6r() {
    RT_FN("S__2d__5b_.S_6r");
    ({ double _v857 = C_S__26_c::sm_S_0_22_3(C_S_8G::sg_S__40_e(), 25.0); C_S_8G::ss_S__40_e(_v857); _v857; });
    return rt::NUL;
}
bool C_S__2d__5b_::g_S__2d_6() {
    RT_FN("S__2d__5b_.S__2d_6_get");
    return C_S_8G::sm_S__3c_P(g::SV.C_S__20__21_B__id);
    return false;
}
C_S__2d__5b_* C_S__2d__5b_::alloc_() {
    C_S__2d__5b_* o = rt::make<C_S__2d__5b_>();
    return o;
}
rt::Value C_S__2d__5b_::mk_(rt::Value* a, int n) {
    C_S__2d__5b_* o = alloc_();
    o->C_S__2d__5b_::ctor_();
    return rt::VO(o);
}
bool C_S__2d__5b_::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d__5b_::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d__5b_::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d__5b_::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d__5b_::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S__2d__5b_::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d__5b___id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__2d__5b___S_1_21_S); return true;
    case NM_ids: out = g::SV.C_S__2d__5b___ids; return true;
    default: return false;
    }
}
bool C_S__2d__5b_::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d__5b___id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__2d__5b___S_1_21_S = rt::tonum(v); return true;
    case NM_ids: g::SV.C_S__2d__5b___ids = v; return true;
    default: return false;
    }
}
bool C_S__2d__5b_::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S__2d_w::ctor_() {
    RT_FN("S__2d_w.S__2d_w");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v858 = 550.0; this->f_S_6_21_Z = rt::touint_d(_v858); _v858; });
    ({ rt::Value _v859 = rt::trv(rt::VS(g::LS[516])); this->f_S_1i = rt::slot_string(_v859); _v859; });
    ({ rt::Value _v860 = rt::VS(g::LS[517]); this->f_S__5e__21__23_ = rt::slot_string(_v860); _v860; });
    ({ double _v861 = 1e+168; this->f_S__3e__3d_ = _v861; _v861; });
    ({ double _v862 = 4.0; this->f_S__2c__21_B = rt::toint_d(_v862); _v862; });
}
rt::Value C_S__2d_w::m_S__40__22_() {
    RT_FN("S__2d_w.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[435]), C_S__26_c::sm_S_8_21_Z(100.0, C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
bool C_S__2d_w::g_S__2d_6() {
    RT_FN("S__2d_w.S__2d_6_get");
    return ({ bool _t866 = ({ bool _t863 = (((double)(C_S_8G::sg_S__2c_P())) < 4.0); _t863 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_2y__id)) : _t863; }); _t866 ? (bool)((({ bool _t865 = ({ bool _t864 = (((double)(g::SV.C_S_8G__S__23_3)) == 9.0); _t864 ? _t864 : (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)); }); _t865 ? _t865 : (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 12.0)); }))) : _t866; });
    return false;
}
double C_S__2d_w::sm_S__27__21_b() {
    RT_FN("S__2d_w.S__27__21_b");
    return ((({ bool _t867 = (((double)(g::SV.C_S_8G__S__23_3)) == 9.0); _t867 ? _t867 : (bool)((((double)(g::SV.C_S_8G__S__23_3)) == 10.0)); }) || (((double)(g::SV.C_S_8G__S__23_3)) == 12.0)) ? 100.0 : 0.0);
    return 0.0;
}
C_S__2d_w* C_S__2d_w::alloc_() {
    C_S__2d_w* o = rt::make<C_S__2d_w>();
    return o;
}
rt::Value C_S__2d_w::mk_(rt::Value* a, int n) {
    C_S__2d_w* o = alloc_();
    o->C_S__2d_w::ctor_();
    return rt::VO(o);
}
bool C_S__2d_w::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S__2d_w::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S__2d_w::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S__2d_w::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S__2d_w::smeth_(int id) {
    switch (id) {
    case NM_S__27__21_b: return true;
    default: return false;
    }
}
bool C_S__2d_w::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S__2d_w__id)); return true;
    case NM_S_1_21_S: out = rt::V(g::SV.C_S__2d_w__S_1_21_S); return true;
    case NM_S__27__21_b: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S__2d_w::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S__2d_w__id = rt::touint(v); return true;
    case NM_S_1_21_S: g::SV.C_S__2d_w__S_1_21_S = rt::tonum(v); return true;
    default: return false;
    }
}
bool C_S__2d_w::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__27__21_b: out = rt::V(sm_S__27__21_b()); return true;
    default: return false;
    }
}
void C_S_0_21_K::ctor_() {
    RT_FN("S_0_21_K.S_0_21_K");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v868 = 360.0; this->f_S_6_21_Z = rt::touint_d(_v868); _v868; });
    ({ rt::Value _v869 = rt::trv(rt::VS(g::LS[518])); this->f_S_1i = rt::slot_string(_v869); _v869; });
    ({ rt::Value _v870 = rt::VS(g::LS[519]); this->f_S__5e__21__23_ = rt::slot_string(_v870); _v870; });
    ({ rt::Value _v871 = rt::trv(rt::VS(g::LS[520])); this->f_S_7_23_ = rt::slot_string(_v871); _v871; });
    ({ double _v872 = 2.5e+152; this->f_S__3e__3d_ = _v872; _v872; });
    ({ bool _v873 = true; this->f_S__25__21__3e_ = _v873; _v873; });
    ({ bool _v874 = true; this->f_S__3f_T = _v874; _v874; });
    ({ double _v875 = 1.0; this->f_S__2c__21_B = rt::toint_d(_v875); _v875; });
}
bool C_S_0_21_K::g_S__26_8() {
    RT_FN("S_0_21_K.S__26_8_get");
    return false;
    return false;
}
bool C_S_0_21_K::g_S__2d_6() {
    bool l_A__loc1_ = false;
    RT_FN("S_0_21_K.S__2d_6_get");
    (l_A__loc1_ = ({ bool _t885 = (({ bool _t884 = ({ bool _t880 = ({ bool _t879 = ({ bool _t878 = ({ bool _t877 = ({ bool _t876 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 0.0); _t876 ? _t876 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 1.0)); }); _t877 ? _t877 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 2.0)); }); _t878 ? _t878 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 3.0)); }); _t879 ? _t879 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 4.0)); }); _t880 ? _t880 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 5.0)); }); _t884 ? _t884 : (bool)(({ bool _t883 = (({ bool _t882 = ({ bool _t881 = (((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 6.0); _t881 ? _t881 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 7.0)); }); _t882 ? _t882 : (bool)((((double)(g::SV.C_S_8G__S__2d__21__5e_)) == 8.0)); })); _t883 ? (bool)(C_S_8G::sm_S_7d(g::SV.C_S__40_S__id)) : _t883; })); })); _t885 ? (bool)((((double)(g::SV.C_S_8G__S__23_3)) == (-1.0))) : _t885; }));
    return ({ bool _t886 = l_A__loc1_; _t886 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S_7N__id)) : _t886; });
    return false;
}
C_S_0_21_K* C_S_0_21_K::alloc_() {
    C_S_0_21_K* o = rt::make<C_S_0_21_K>();
    return o;
}
rt::Value C_S_0_21_K::mk_(rt::Value* a, int n) {
    C_S_0_21_K* o = alloc_();
    o->C_S_0_21_K::ctor_();
    return rt::VO(o);
}
bool C_S_0_21_K::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__26_8: out = rt::VB(g_S__26_8()); return true;
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0_21_K::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__26_8: return false;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0_21_K::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__26_8: { rt::Value f = rt::VB(g_S__26_8()); out = rt::call_value(f, a, n); return true; }
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0_21_K::dmeth(int id) {
    switch (id) {
    case NM_S__26_8: return false;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0_21_K::smeth_(int id) {
    switch (id) {
    default: return false;
    }
}
bool C_S_0_21_K::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21_K__id)); return true;
    case NM_ids: out = g::SV.C_S_0_21_K__ids; return true;
    default: return false;
    }
}
bool C_S_0_21_K::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21_K__id = rt::touint(v); return true;
    case NM_ids: g::SV.C_S_0_21_K__ids = v; return true;
    default: return false;
    }
}
bool C_S_0_21_K::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    default: return false;
    }
}
void C_S_0_21_U::ctor_() {
    RT_FN("S_0_21_U.S_0_21_U");
    (void)((this->C_S__60_6::ctor_(), rt::NUL));
    ({ double _v887 = 634.0; this->f_S_6_21_Z = rt::touint_d(_v887); _v887; });
    ({ rt::Value _v888 = rt::trv(rt::VS(g::LS[522])); this->f_S_1i = rt::slot_string(_v888); _v888; });
    ({ rt::Value _v889 = rt::VS(g::LS[523]); this->f_S__5e__21__23_ = rt::slot_string(_v889); _v889; });
    ({ rt::Value _v890 = rt::VS(g::LS[375]); this->f_S__3f__21__3d_ = rt::slot_string(_v890); _v890; });
    ({ double _v891 = 1e+45; this->f_S__3c_R = _v891; _v891; });
    ({ double _v892 = 3.0; this->f_S__2c__21_Y = rt::toint_d(_v892); _v892; });
    ({ double _v893 = 12.0; this->f_S__2d__21__5e_ = rt::toint_d(_v893); _v893; });
    ({ double _v894 = 0.0; this->f_S__2c__21_B = rt::toint_d(_v894); _v894; });
}
rt::Value C_S_0_21_U::m_S__40__22_() {
    RT_FN("S_0_21_U.S__40__22_");
    return rt::slot_string(rt::trv(rt::VS(g::LS[524]), C_S__26_c::sm_S_8_21_Z(C_S_0_21_U::sm_S__23__21_Y(), C_S__26_c::dsm_S_8_21_Z_1(), C_S__26_c::dsm_S_8_21_Z_2())));
    return rt::NUL;
}
rt::Value C_S_0_21_U::m_S_6r() {
    RT_FN("S_0_21_U.S_6r");
    (void)(this->C_S__60_6::m_S_6r());
    (void)(({ rt::Value _o895 = C_S_8G::sm_S__21__21_H(g::SV.C_S_0_21_8__id); C_S__60_6* _p896 = rt::as_ptr<C_S__60_6>(_o895); _p896 ? _p896->m_S__3d__21__26_() : rt::dcallv(_o895, NM_S__3d__21__26_); }));
    return rt::NUL;
}
bool C_S_0_21_U::g_S__2d_6() {
    RT_FN("S_0_21_U.S__2d_6_get");
    return ({ bool _t899 = ({ rt::Value _o897 = C_S_8G::sm_S__23_N(g::SV.C_S_5_21_3__id); C_S_84* _p898 = rt::as_ptr<C_S_84>(_o897); _p898 ? _p898->g_S__2d_6() : rt::T(rt::dget(_o897, NM_S__2d_6)); }); _t899 ? (bool)(C_S_8G::sm_S__3c_P(g::SV.C_S__26__21_X__id)) : _t899; });
    return false;
}
double C_S_0_21_U::sm_S__23__21_Y() {
    RT_FN("S_0_21_U.S__23__21_Y");
    return (6.0 * rt::m_pow(C_S__26_c::sm_S_1_21__3b_(g::SV.C_S_5_21_3__id, C_S__26_c::dsm_S_1_21__3b__1()), 0.6));
    return 0.0;
}
C_S_0_21_U* C_S_0_21_U::alloc_() {
    C_S_0_21_U* o = rt::make<C_S_0_21_U>();
    return o;
}
rt::Value C_S_0_21_U::mk_(rt::Value* a, int n) {
    C_S_0_21_U* o = alloc_();
    o->C_S_0_21_U::ctor_();
    return rt::VO(o);
}
bool C_S_0_21_U::dget(int id, rt::Value& out) {
    switch (id) {
    case NM_S__2d_6: out = rt::VB(g_S__2d_6()); return true;
    case NM_S__40__22_: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    case NM_S_6r: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;
    default: break;
    }
    return C_S__60_6::dget(id, out);
}
bool C_S_0_21_U::dset(int id, rt::Value v) {
    switch (id) {
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dset(id, v);
}
bool C_S_0_21_U::dcall(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__40__22_: out = m_S__40__22_(); return true;
    case NM_S_6r: out = m_S_6r(); return true;
    case NM_S__2d_6: { rt::Value f = rt::VB(g_S__2d_6()); out = rt::call_value(f, a, n); return true; }
    default: break;
    }
    return C_S__60_6::dcall(id, a, n, out);
}
bool C_S_0_21_U::dmeth(int id) {
    switch (id) {
    case NM_S__40__22_: return true;
    case NM_S_6r: return true;
    case NM_S__2d_6: return false;
    default: break;
    }
    return C_S__60_6::dmeth(id);
}
bool C_S_0_21_U::smeth_(int id) {
    switch (id) {
    case NM_S__23__21_Y: return true;
    default: return false;
    }
}
bool C_S_0_21_U::sget_(int id, rt::Value& out) {
    switch (id) {
    case NM_id: out = rt::V((double)(g::SV.C_S_0_21_U__id)); return true;
    case NM_S__23__21_Y: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;
    default: return false;
    }
}
bool C_S_0_21_U::sset_(int id, rt::Value v) {
    switch (id) {
    case NM_id: g::SV.C_S_0_21_U__id = rt::touint(v); return true;
    default: return false;
    }
}
bool C_S_0_21_U::scall_(int id, rt::Value* a, int n, rt::Value& out) {
    switch (id) {
    case NM_S__23__21_Y: out = rt::V(sm_S__23__21_Y()); return true;
    default: return false;
    }
}
void static_init_0(std::vector<std::string>& errs) {
    try { (g::SV.C_EmbeddedAssets__LIONY_REGULAR = rt::VO(rt::STUBCLASS)); } catch (...) { errs.push_back(std::string("EmbeddedAssets.LIONY_REGULAR: ") + rt::exc_text()); }
    try { (g::SV.C_EmbeddedAssets__LIONY_BOLD = rt::VO(rt::STUBCLASS)); } catch (...) { errs.push_back(std::string("EmbeddedAssets.LIONY_BOLD: ") + rt::exc_text()); }
    try { (g::SV.C_EmbeddedAssets__LIONY_ITALIC = rt::VO(rt::STUBCLASS)); } catch (...) { errs.push_back(std::string("EmbeddedAssets.LIONY_ITALIC: ") + rt::exc_text()); }
    try { (g::SV.C_EmbeddedAssets__LIONY_BOLDITALIC = rt::VO(rt::STUBCLASS)); } catch (...) { errs.push_back(std::string("EmbeddedAssets.LIONY_BOLDITALIC: ") + rt::exc_text()); }
    try { (g::SV.C_EmbeddedAssets__LIONY_REGULAR2 = rt::VO(rt::STUBCLASS)); } catch (...) { errs.push_back(std::string("EmbeddedAssets.LIONY_REGULAR2: ") + rt::exc_text()); }
    try { (g::SV.C_EmbeddedAssets__LIONY_BOLD2 = rt::VO(rt::STUBCLASS)); } catch (...) { errs.push_back(std::string("EmbeddedAssets.LIONY_BOLD2: ") + rt::exc_text()); }
    try { (g::SV.C_EmbeddedAssets__PIXEL_REGULAR = rt::VO(rt::STUBCLASS)); } catch (...) { errs.push_back(std::string("EmbeddedAssets.PIXEL_REGULAR: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_EN = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("Translation.LOCALE_EN: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_ES = rt::toint_d(1.0)); } catch (...) { errs.push_back(std::string("Translation.LOCALE_ES: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_DE = rt::toint_d(2.0)); } catch (...) { errs.push_back(std::string("Translation.LOCALE_DE: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_FR = rt::toint_d(3.0)); } catch (...) { errs.push_back(std::string("Translation.LOCALE_FR: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_PT = rt::toint_d(4.0)); } catch (...) { errs.push_back(std::string("Translation.LOCALE_PT: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_RU = rt::toint_d(5.0)); } catch (...) { errs.push_back(std::string("Translation.LOCALE_RU: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_IT = rt::toint_d(6.0)); } catch (...) { errs.push_back(std::string("Translation.LOCALE_IT: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_LAST = rt::toint_d(6.0)); } catch (...) { errs.push_back(std::string("Translation.LOCALE_LAST: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__locale = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("Translation.locale: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__language_de_DE = rt::VO(C_realmgrinder_de_DE_mo_dollar_f267184f37d0b0722f2171777c1f4598283255331::CI.ref)); } catch (...) { errs.push_back(std::string("Translation.language_de_DE: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__language_es_ES = rt::VO(C_realmgrinder_es_ES_mo::CI.ref)); } catch (...) { errs.push_back(std::string("Translation.language_es_ES: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__language_fr_FR = rt::VO(C_realmgrinder_fr_FR_mo::CI.ref)); } catch (...) { errs.push_back(std::string("Translation.language_fr_FR: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__language_pt_BR = rt::VO(C_realmgrinder_pt_BR_mo_dollar_1160e06d8060bf983a1da53664c13ccc148205367::CI.ref)); } catch (...) { errs.push_back(std::string("Translation.language_pt_BR: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__language_ru_RU = rt::VO(C_realmgrinder_ru_RU_mo_dollar_4b056b3d25db4a10963bd7c7cee6cf79308410723::CI.ref)); } catch (...) { errs.push_back(std::string("Translation.language_ru_RU: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__language_it_IT = rt::VO(C_realmgrinder_it_IT_mo_dollar_34b73ad1d18171e9d16b01e550fb9d09932282979::CI.ref)); } catch (...) { errs.push_back(std::string("Translation.language_it_IT: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_CODE = rt::arr_lit({rt::VS(g::LS[26]), rt::VS(g::LS[27]), rt::VS(g::LS[28]), rt::VS(g::LS[29]), rt::VS(g::LS[30]), rt::VS(g::LS[31]), rt::VS(g::LS[32])})); } catch (...) { errs.push_back(std::string("Translation.LOCALE_CODE: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_NAMES = rt::arr_lit({rt::VS(g::LS[33]), rt::VS(g::LS[34]), rt::VS(g::LS[35]), rt::VS(g::LS[36]), rt::VS(g::LS[37]), rt::VS(g::LS[38]), rt::VS(g::LS[39])})); } catch (...) { errs.push_back(std::string("Translation.LOCALE_NAMES: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_FILE = rt::arr_lit({rt::NUL, g::SV.C_Translation__language_es_ES, g::SV.C_Translation__language_de_DE, g::SV.C_Translation__language_fr_FR, g::SV.C_Translation__language_pt_BR, g::SV.C_Translation__language_ru_RU, g::SV.C_Translation__language_it_IT})); } catch (...) { errs.push_back(std::string("Translation.LOCALE_FILE: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_LOOKUP = rt::arr_lit({rt::VS(g::LS[40]), rt::VS(g::LS[41]), rt::VS(g::LS[42]), rt::VS(g::LS[43]), rt::VS(g::LS[44]), rt::VS(g::LS[45]), rt::VS(g::LS[46]), rt::VS(g::LS[47]), rt::VS(g::LS[48]), rt::VS(g::LS[49])})); } catch (...) { errs.push_back(std::string("Translation.LOCALE_LOOKUP: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__LOCALE_CONVERSION = rt::dict_lit({{rt::VS(g::LS[50]), rt::V(1.0)}, {rt::VS(g::LS[51]), rt::V(1.0)}, {rt::VS(g::LS[52]), rt::V(1.0)}, {rt::VS(g::LS[53]), rt::V(1.0)}, {rt::VS(g::LS[54]), rt::V(1.0)}, {rt::VS(g::LS[55]), rt::V(1.0)}, {rt::VS(g::LS[56]), rt::V(1.0)}, {rt::VS(g::LS[57]), rt::V(1.0)}, {rt::VS(g::LS[58]), rt::V(1.0)}, {rt::VS(g::LS[59]), rt::V(1.0)}, {rt::VS(g::LS[60]), rt::V(1.0)}, {rt::VS(g::LS[61]), rt::V(1.0)}, {rt::VS(g::LS[62]), rt::V(1.0)}, {rt::VS(g::LS[63]), rt::V(1.0)}, {rt::VS(g::LS[64]), rt::V(1.0)}, {rt::VS(g::LS[65]), rt::V(1.0)}, {rt::VS(g::LS[66]), rt::V(1.0)}, {rt::VS(g::LS[67]), rt::V(1.0)}, {rt::VS(g::LS[68]), rt::V(1.0)}, {rt::VS(g::LS[69]), rt::V(1.0)}, {rt::VS(g::LS[70]), rt::V(1.0)}, {rt::VS(g::LS[71]), rt::V(1.0)}, {rt::VS(g::LS[72]), rt::V(2.0)}, {rt::VS(g::LS[73]), rt::V(2.0)}, {rt::VS(g::LS[74]), rt::V(2.0)}, {rt::VS(g::LS[75]), rt::V(2.0)}, {rt::VS(g::LS[76]), rt::V(2.0)}, {rt::VS(g::LS[77]), rt::V(2.0)}, {rt::VS(g::LS[78]), rt::V(2.0)}, {rt::VS(g::LS[79]), rt::V(2.0)}, {rt::VS(g::LS[80]), rt::V(2.0)}, {rt::VS(g::LS[81]), rt::V(3.0)}, {rt::VS(g::LS[82]), rt::V(3.0)}, {rt::VS(g::LS[83]), rt::V(3.0)}, {rt::VS(g::LS[84]), rt::V(3.0)}, {rt::VS(g::LS[85]), rt::V(3.0)}, {rt::VS(g::LS[86]), rt::V(3.0)}, {rt::VS(g::LS[87]), rt::V(3.0)}, {rt::VS(g::LS[88]), rt::V(3.0)}, {rt::VS(g::LS[89]), rt::V(3.0)}, {rt::VS(g::LS[90]), rt::V(4.0)}, {rt::VS(g::LS[91]), rt::V(4.0)}, {rt::VS(g::LS[92]), rt::V(4.0)}, {rt::VS(g::LS[93]), rt::V(4.0)}, {rt::VS(g::LS[94]), rt::V(5.0)}, {rt::VS(g::LS[95]), rt::V(5.0)}, {rt::VS(g::LS[96]), rt::V(5.0)}, {rt::VS(g::LS[97]), rt::V(5.0)}, {rt::VS(g::LS[98]), rt::V(5.0)}, {rt::VS(g::LS[99]), rt::V(6.0)}, {rt::VS(g::LS[100]), rt::V(6.0)}, {rt::VS(g::LS[101]), rt::V(6.0)}, {rt::VS(g::LS[102]), rt::V(6.0)}, {rt::VS(g::LS[103]), rt::V(6.0)}})); } catch (...) { errs.push_back(std::string("Translation.LOCALE_CONVERSION: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__loadedLanguage = rt::new_dictionaryv()); } catch (...) { errs.push_back(std::string("Translation.loadedLanguage: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__loadedPlural = rt::new_dictionaryv()); } catch (...) { errs.push_back(std::string("Translation.loadedPlural: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__loadedPlural2 = rt::new_dictionaryv()); } catch (...) { errs.push_back(std::string("Translation.loadedPlural2: ") + rt::exc_text()); }
    try { (g::SV.C_Translation__lengthArray = rt::new_bytearray()); } catch (...) { errs.push_back(std::string("Translation.lengthArray: ") + rt::exc_text()); }
    try { (g::SV.C_JSONToken__token = ({ C_JSONToken* _n146 = C_JSONToken::alloc_(); _n146->C_JSONToken::ctor_(C_JSONToken::dctor_0(), C_JSONToken::dctor_1()); rt::VO(_n146); })); } catch (...) { errs.push_back(std::string("JSONToken.token: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__UNKNOWN = rt::toint_d((-1.0))); } catch (...) { errs.push_back(std::string("JSONTokenType.UNKNOWN: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__COMMA = rt::toint_d(0.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.COMMA: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__LEFT_BRACE = rt::toint_d(1.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.LEFT_BRACE: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__RIGHT_BRACE = rt::toint_d(2.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.RIGHT_BRACE: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__LEFT_BRACKET = rt::toint_d(3.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.LEFT_BRACKET: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__RIGHT_BRACKET = rt::toint_d(4.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.RIGHT_BRACKET: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__COLON = rt::toint_d(6.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.COLON: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__TRUE = rt::toint_d(7.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.TRUE: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__FALSE = rt::toint_d(8.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.FALSE: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__NULL = rt::toint_d(9.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.NULL: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__STRING = rt::toint_d(10.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.STRING: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__NUMBER = rt::toint_d(11.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.NUMBER: ") + rt::exc_text()); }
    try { (g::SV.C_JSONTokenType__NAN = rt::toint_d(12.0)); } catch (...) { errs.push_back(std::string("JSONTokenType.NAN: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__initialized = false); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.initialized: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__MAX_NESTING = rt::toint_d(4.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.MAX_NESTING: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__MAX_OPCODES = rt::toint_d(2048.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.MAX_OPCODES: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__FRAGMENT = rt::slot_string(rt::VS(g::LS[170]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.FRAGMENT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__VERTEX = rt::slot_string(rt::VS(g::LS[169]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.VERTEX: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SAMPLER_TYPE_SHIFT = rt::touint_d(8.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SAMPLER_TYPE_SHIFT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SAMPLER_DIM_SHIFT = rt::touint_d(12.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SAMPLER_DIM_SHIFT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SAMPLER_SPECIAL_SHIFT = rt::touint_d(16.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SAMPLER_SPECIAL_SHIFT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SAMPLER_REPEAT_SHIFT = rt::touint_d(20.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SAMPLER_REPEAT_SHIFT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SAMPLER_MIPMAP_SHIFT = rt::touint_d(24.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SAMPLER_MIPMAP_SHIFT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SAMPLER_FILTER_SHIFT = rt::touint_d(28.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SAMPLER_FILTER_SHIFT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__REG_WRITE = rt::touint_d(1.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.REG_WRITE: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__REG_READ = rt::touint_d(2.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.REG_READ: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__REG_FRAG = rt::touint_d(32.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.REG_FRAG: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__REG_VERT = rt::touint_d(64.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.REG_VERT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__OP_SCALAR = rt::touint_d(1.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.OP_SCALAR: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__OP_SPECIAL_TEX = rt::touint_d(8.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.OP_SPECIAL_TEX: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__OP_SPECIAL_MATRIX = rt::touint_d(16.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.OP_SPECIAL_MATRIX: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__OP_FRAG_ONLY = rt::touint_d(32.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.OP_FRAG_ONLY: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__OP_VERT_ONLY = rt::touint_d(64.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.OP_VERT_ONLY: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__OP_NO_DEST = rt::touint_d(128.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.OP_NO_DEST: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__OP_VERSION2 = rt::touint_d(256.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.OP_VERSION2: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__OP_INCNEST = rt::touint_d(512.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.OP_INCNEST: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__OP_DECNEST = rt::touint_d(1024.0)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.OP_DECNEST: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__MOV = rt::slot_string(rt::VS(g::LS[253]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.MOV: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__ADD = rt::slot_string(rt::VS(g::LS[254]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.ADD: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SUB = rt::slot_string(rt::VS(g::LS[255]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SUB: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__MUL = rt::slot_string(rt::VS(g::LS[256]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.MUL: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__DIV = rt::slot_string(rt::VS(g::LS[257]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.DIV: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__RCP = rt::slot_string(rt::VS(g::LS[258]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.RCP: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__MIN = rt::slot_string(rt::VS(g::LS[259]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.MIN: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__MAX = rt::slot_string(rt::VS(g::LS[260]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.MAX: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__FRC = rt::slot_string(rt::VS(g::LS[261]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.FRC: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SQT = rt::slot_string(rt::VS(g::LS[262]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SQT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__RSQ = rt::slot_string(rt::VS(g::LS[263]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.RSQ: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__POW = rt::slot_string(rt::VS(g::LS[264]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.POW: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__LOG = rt::slot_string(rt::VS(g::LS[265]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.LOG: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__EXP = rt::slot_string(rt::VS(g::LS[266]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.EXP: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__NRM = rt::slot_string(rt::VS(g::LS[267]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.NRM: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SIN = rt::slot_string(rt::VS(g::LS[268]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SIN: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__COS = rt::slot_string(rt::VS(g::LS[269]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.COS: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__CRS = rt::slot_string(rt::VS(g::LS[270]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.CRS: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__DP3 = rt::slot_string(rt::VS(g::LS[271]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.DP3: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__DP4 = rt::slot_string(rt::VS(g::LS[272]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.DP4: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__ABS = rt::slot_string(rt::VS(g::LS[273]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.ABS: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__NEG = rt::slot_string(rt::VS(g::LS[274]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.NEG: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SAT = rt::slot_string(rt::VS(g::LS[275]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SAT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__M33 = rt::slot_string(rt::VS(g::LS[276]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.M33: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__M44 = rt::slot_string(rt::VS(g::LS[277]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.M44: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__M34 = rt::slot_string(rt::VS(g::LS[278]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.M34: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__DDX = rt::slot_string(rt::VS(g::LS[279]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.DDX: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__DDY = rt::slot_string(rt::VS(g::LS[280]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.DDY: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__IFE = rt::slot_string(rt::VS(g::LS[281]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.IFE: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__INE = rt::slot_string(rt::VS(g::LS[282]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.INE: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__IFG = rt::slot_string(rt::VS(g::LS[283]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.IFG: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__IFL = rt::slot_string(rt::VS(g::LS[284]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.IFL: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__ELS = rt::slot_string(rt::VS(g::LS[285]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.ELS: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__EIF = rt::slot_string(rt::VS(g::LS[286]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.EIF: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__TED = rt::slot_string(rt::VS(g::LS[319]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.TED: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__KIL = rt::slot_string(rt::VS(g::LS[287]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.KIL: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__TEX = rt::slot_string(rt::VS(g::LS[288]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.TEX: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SGE = rt::slot_string(rt::VS(g::LS[289]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SGE: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SLT = rt::slot_string(rt::VS(g::LS[290]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SLT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SGN = rt::slot_string(rt::VS(g::LS[291]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SGN: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SEQ = rt::slot_string(rt::VS(g::LS[292]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SEQ: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SNE = rt::slot_string(rt::VS(g::LS[293]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SNE: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__VA = rt::slot_string(rt::VS(g::LS[227]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.VA: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__VC = rt::slot_string(rt::VS(g::LS[229]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.VC: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__VT = rt::slot_string(rt::VS(g::LS[231]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.VT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__VO = rt::slot_string(rt::VS(g::LS[233]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.VO: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__VI = rt::slot_string(rt::VS(g::LS[235]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.VI: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__FC = rt::slot_string(rt::VS(g::LS[237]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.FC: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__FT = rt::slot_string(rt::VS(g::LS[239]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.FT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__FS = rt::slot_string(rt::VS(g::LS[241]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.FS: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__FO = rt::slot_string(rt::VS(g::LS[243]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.FO: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__FD = rt::slot_string(rt::VS(g::LS[245]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.FD: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__D2 = rt::slot_string(rt::VS(g::LS[298]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.D2: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__D3 = rt::slot_string(rt::VS(g::LS[299]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.D3: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__CUBE = rt::slot_string(rt::VS(g::LS[300]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.CUBE: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__MIPNEAREST = rt::slot_string(rt::VS(g::LS[301]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.MIPNEAREST: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__MIPLINEAR = rt::slot_string(rt::VS(g::LS[302]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.MIPLINEAR: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__MIPNONE = rt::slot_string(rt::VS(g::LS[303]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.MIPNONE: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__NOMIP = rt::slot_string(rt::VS(g::LS[304]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.NOMIP: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__NEAREST = rt::slot_string(rt::VS(g::LS[305]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.NEAREST: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__LINEAR = rt::slot_string(rt::VS(g::LS[306]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.LINEAR: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__ANISOTROPIC2X = rt::slot_string(rt::VS(g::LS[307]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.ANISOTROPIC2X: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__ANISOTROPIC4X = rt::slot_string(rt::VS(g::LS[308]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.ANISOTROPIC4X: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__ANISOTROPIC8X = rt::slot_string(rt::VS(g::LS[309]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.ANISOTROPIC8X: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__ANISOTROPIC16X = rt::slot_string(rt::VS(g::LS[310]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.ANISOTROPIC16X: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__CENTROID = rt::slot_string(rt::VS(g::LS[311]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.CENTROID: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SINGLE = rt::slot_string(rt::VS(g::LS[312]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SINGLE: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__IGNORESAMPLER = rt::slot_string(rt::VS(g::LS[313]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.IGNORESAMPLER: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__REPEAT = rt::slot_string(rt::VS(g::LS[314]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.REPEAT: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__WRAP = rt::slot_string(rt::VS(g::LS[315]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.WRAP: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__CLAMP = rt::slot_string(rt::VS(g::LS[316]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.CLAMP: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__REPEAT_U_CLAMP_V = rt::slot_string(rt::VS(g::LS[318]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.REPEAT_U_CLAMP_V: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__CLAMP_U_REPEAT_V = rt::slot_string(rt::VS(g::LS[317]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.CLAMP_U_REPEAT_V: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__RGBA = rt::slot_string(rt::VS(g::LS[294]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.RGBA: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__DXT1 = rt::slot_string(rt::VS(g::LS[295]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.DXT1: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__DXT5 = rt::slot_string(rt::VS(g::LS[296]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.DXT5: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__VIDEO = rt::slot_string(rt::VS(g::LS[297]))); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.VIDEO: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__REGEXP_OUTER_SPACES = rt::new_regexp(rt::VS(g::LS[320]).s, rt::VS(g::LS[174]).s)); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.REGEXP_OUTER_SPACES: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__OPMAP = rt::new_dictionaryv()); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.OPMAP: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__REGMAP = rt::new_dictionaryv()); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.REGMAP: ") + rt::exc_text()); }
    try { (g::SV.C_AGALMiniAssembler__SAMPLEMAP = rt::new_dictionaryv()); } catch (...) { errs.push_back(std::string("AGALMiniAssembler.SAMPLEMAP: ") + rt::exc_text()); }
    try { (g::SV.C_IntUtil__hexChars = rt::slot_string(rt::VS(g::LS[360]))); } catch (...) { errs.push_back(std::string("IntUtil.hexChars: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__so = rt::NUL); } catch (...) { errs.push_back(std::string("PlayFab.so: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__isInitialized = false); } catch (...) { errs.push_back(std::string("PlayFab.isInitialized: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__isReady = false); } catch (...) { errs.push_back(std::string("PlayFab.isReady: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__isRegistered = false); } catch (...) { errs.push_back(std::string("PlayFab.isRegistered: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__isKongregateLinked = false); } catch (...) { errs.push_back(std::string("PlayFab.isKongregateLinked: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__isSteamLinked = false); } catch (...) { errs.push_back(std::string("PlayFab.isSteamLinked: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__isRestoreAvailable = false); } catch (...) { errs.push_back(std::string("PlayFab.isRestoreAvailable: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__customIDGenerated = false); } catch (...) { errs.push_back(std::string("PlayFab.customIDGenerated: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__customID = rt::slot_string(rt::VS(g::LS[113]))); } catch (...) { errs.push_back(std::string("PlayFab.customID: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__playFabID = rt::slot_string(rt::VS(g::LS[113]))); } catch (...) { errs.push_back(std::string("PlayFab.playFabID: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__playFabUsername = rt::slot_string(rt::VS(g::LS[113]))); } catch (...) { errs.push_back(std::string("PlayFab.playFabUsername: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__registeredCallback = rt::NUL); } catch (...) { errs.push_back(std::string("PlayFab.registeredCallback: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__seasonChangeCallback = rt::NUL); } catch (...) { errs.push_back(std::string("PlayFab.seasonChangeCallback: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__steamSuccessCallback = rt::NUL); } catch (...) { errs.push_back(std::string("PlayFab.steamSuccessCallback: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__steamErrorCallback = rt::NUL); } catch (...) { errs.push_back(std::string("PlayFab.steamErrorCallback: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab__expireTry = true); } catch (...) { errs.push_back(std::string("PlayFab.expireTry: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___serverTime = ({ C_S_3F* _n510 = C_S_3F::alloc_(); _n510->C_S_3F::ctor_(rt::toint_d((-1.0)), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n510); })); } catch (...) { errs.push_back(std::string("PlayFab._serverTime: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___serverTimer = ({ C_S_3F* _n511 = C_S_3F::alloc_(); _n511->C_S_3F::ctor_(rt::toint_d((-1.0)), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n511); })); } catch (...) { errs.push_back(std::string("PlayFab._serverTimer: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___detect = ({ C_S_3F* _n512 = C_S_3F::alloc_(); _n512->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n512); })); } catch (...) { errs.push_back(std::string("PlayFab._detect: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___season = ({ C_S_3F* _n513 = C_S_3F::alloc_(); _n513->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n513); })); } catch (...) { errs.push_back(std::string("PlayFab._season: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___seasonN = ({ C_S_3F* _n514 = C_S_3F::alloc_(); _n514->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n514); })); } catch (...) { errs.push_back(std::string("PlayFab._seasonN: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___seasonE = ({ C_S_3F* _n515 = C_S_3F::alloc_(); _n515->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n515); })); } catch (...) { errs.push_back(std::string("PlayFab._seasonE: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___seasonNE = ({ C_S_3F* _n516 = C_S_3F::alloc_(); _n516->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n516); })); } catch (...) { errs.push_back(std::string("PlayFab._seasonNE: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___seasonNES = ({ C_S_3F* _n517 = C_S_3F::alloc_(); _n517->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n517); })); } catch (...) { errs.push_back(std::string("PlayFab._seasonNES: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___seasonNEE = ({ C_S_3F* _n518 = C_S_3F::alloc_(); _n518->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n518); })); } catch (...) { errs.push_back(std::string("PlayFab._seasonNEE: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___faithStart = ({ C_S_3F* _n519 = C_S_3F::alloc_(); _n519->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n519); })); } catch (...) { errs.push_back(std::string("PlayFab._faithStart: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___faithCounter = ({ C_S_3F* _n520 = C_S_3F::alloc_(); _n520->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n520); })); } catch (...) { errs.push_back(std::string("PlayFab._faithCounter: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___faithTotal = ({ C_S_3F* _n521 = C_S_3F::alloc_(); _n521->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n521); })); } catch (...) { errs.push_back(std::string("PlayFab._faithTotal: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___faithCap = ({ C_S_3F* _n522 = C_S_3F::alloc_(); _n522->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n522); })); } catch (...) { errs.push_back(std::string("PlayFab._faithCap: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___faithSkipped = ({ C_S_3F* _n523 = C_S_3F::alloc_(); _n523->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n523); })); } catch (...) { errs.push_back(std::string("PlayFab._faithSkipped: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___faithTimes = ({ C_S_3F* _n524 = C_S_3F::alloc_(); _n524->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n524); })); } catch (...) { errs.push_back(std::string("PlayFab._faithTimes: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___faithLast = ({ C_S_3F* _n525 = C_S_3F::alloc_(); _n525->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n525); })); } catch (...) { errs.push_back(std::string("PlayFab._faithLast: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___faithRuby = ({ C_S_3F* _n526 = C_S_3F::alloc_(); _n526->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n526); })); } catch (...) { errs.push_back(std::string("PlayFab._faithRuby: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___faithEnable = ({ C_S_3F* _n527 = C_S_3F::alloc_(); _n527->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n527); })); } catch (...) { errs.push_back(std::string("PlayFab._faithEnable: ") + rt::exc_text()); }
    try { (g::SV.C_PlayFab___faithMax = ({ C_S_3F* _n528 = C_S_3F::alloc_(); _n528->C_S_3F::ctor_(rt::toint_d(0.0), rt::toint_d(1.0), rt::toint_d(1.0)); rt::VO(_n528); })); } catch (...) { errs.push_back(std::string("PlayFab._faithMax: ") + rt::exc_text()); }
    try { (g::SV.C_TimeServer__serverTime = rt::toint_d((-1.0))); } catch (...) { errs.push_back(std::string("TimeServer.serverTime: ") + rt::exc_text()); }
    try { (g::SV.C_TimeServer__serverTimeDiff = rt::toint_d((-1.0))); } catch (...) { errs.push_back(std::string("TimeServer.serverTimeDiff: ") + rt::exc_text()); }
    try { (g::SV.C_TimeServer__localTime = rt::toint_d((-1.0))); } catch (...) { errs.push_back(std::string("TimeServer.localTime: ") + rt::exc_text()); }
    try { (g::SV.C_S__20__21_0__ids = rt::arr_lit({rt::VS(g::LS[368])})); } catch (...) { errs.push_back(std::string("S__20__21_0.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__20_t__S_1_21_S = 1000000.0); } catch (...) { errs.push_back(std::string("S__20_t.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__20_t__ids = rt::arr_lit({rt::VS(g::LS[372])})); } catch (...) { errs.push_back(std::string("S__20_t.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__21_2__ids = rt::arr_lit({rt::VS(g::LS[377])})); } catch (...) { errs.push_back(std::string("S__21__21_2.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__21__27___ids = rt::arr_lit({rt::VS(g::LS[381])})); } catch (...) { errs.push_back(std::string("S__21__27_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__21_u__ids = rt::arr_lit({rt::VS(g::LS[385])})); } catch (...) { errs.push_back(std::string("S__21_u.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__23__5e___ids = rt::arr_lit({rt::VS(g::LS[389])})); } catch (...) { errs.push_back(std::string("S__23__5e_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__21_Q__S_1_21_S = 0.1); } catch (...) { errs.push_back(std::string("S__25__21_Q.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__21_Q__ids = rt::arr_lit({rt::VS(g::LS[395])})); } catch (...) { errs.push_back(std::string("S__25__21_Q.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25__21_c__ids = rt::arr_lit({rt::VS(g::LS[399])})); } catch (...) { errs.push_back(std::string("S__25__21_c.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3c_o__ids = rt::arr_lit({rt::VS(g::LS[411])})); } catch (...) { errs.push_back(std::string("S__3c_o.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3e__21_i__S_1_21_S = 150.0); } catch (...) { errs.push_back(std::string("S__3e__21_i.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__21_7__S_1_21_S = 10.0); } catch (...) { errs.push_back(std::string("S__3f__21_7.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__21_W__S_1_21_S = 1e+16); } catch (...) { errs.push_back(std::string("S__3f__21_W.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__2d___S_1_21_S = 100.0); } catch (...) { errs.push_back(std::string("S__3f__2d_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f__2d___ids = rt::arr_lit({rt::VS(g::LS[432])})); } catch (...) { errs.push_back(std::string("S__3f__2d_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_Z__S_1_21_S = 25.0); } catch (...) { errs.push_back(std::string("S__3f_Z.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_c__ids = rt::arr_lit({rt::VS(g::LS[438])})); } catch (...) { errs.push_back(std::string("S__3f_c.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__3f_g__ids = rt::arr_lit({rt::VS(g::LS[442])})); } catch (...) { errs.push_back(std::string("S__3f_g.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25_P__ids = rt::arr_lit({rt::VS(g::LS[446])})); } catch (...) { errs.push_back(std::string("S__25_P.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__25_s__ids = rt::arr_lit({rt::VS(g::LS[451])})); } catch (...) { errs.push_back(std::string("S__25_s.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__21_6__S_1_21_S = 1.0); } catch (...) { errs.push_back(std::string("S__26__21_6.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__21_V__S_1_21_S = 5.0); } catch (...) { errs.push_back(std::string("S__26__21_V.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__26__21_W__ids = rt::arr_lit({rt::VS(g::LS[461])})); } catch (...) { errs.push_back(std::string("S__26__21_W.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__27__21_J__S_1_21_S = 100.0); } catch (...) { errs.push_back(std::string("S__27__21_J.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__27_2__ids = rt::arr_lit({rt::VS(g::LS[471])})); } catch (...) { errs.push_back(std::string("S__27_2.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2b__21_7__ids = rt::arr_lit({rt::VS(g::LS[475])})); } catch (...) { errs.push_back(std::string("S__2b__21_7.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2b__21_C__ids = rt::arr_lit({rt::VS(g::LS[479])})); } catch (...) { errs.push_back(std::string("S__2b__21_C.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2b__21_X__ids = rt::arr_lit({rt::VS(g::LS[483])})); } catch (...) { errs.push_back(std::string("S__2b__21_X.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c_4__S_1_21_S = 100.0); } catch (...) { errs.push_back(std::string("S__2c_4.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__2c_4__ids = rt::arr_lit({rt::VS(g::LS[496])})); } catch (...) { errs.push_back(std::string("S__2c_4.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__21_Q__ids = rt::arr_lit({rt::VS(g::LS[505])})); } catch (...) { errs.push_back(std::string("S__2d__21_Q.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d_C__ids = rt::arr_lit({rt::VS(g::LS[512])})); } catch (...) { errs.push_back(std::string("S__2d_C.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__5b___S_1_21_S = 25.0); } catch (...) { errs.push_back(std::string("S__2d__5b_.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d__5b___ids = rt::arr_lit({rt::VS(g::LS[515])})); } catch (...) { errs.push_back(std::string("S__2d__5b_.ids: ") + rt::exc_text()); }
    try { (g::SV.C_S__2d_w__S_1_21_S = 100.0); } catch (...) { errs.push_back(std::string("S__2d_w.S_1_21_S: ") + rt::exc_text()); }
    try { (g::SV.C_S_0_21_K__ids = rt::arr_lit({rt::VS(g::LS[521])})); } catch (...) { errs.push_back(std::string("S_0_21_K.ids: ") + rt::exc_text()); }
}
}  // namespace g
